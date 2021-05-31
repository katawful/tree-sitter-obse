// for expressions
const PREC = {
  TOP: 20,
  ASSIGNMENT: 15,
  LOGICAL_AND: 14,
  LOGICAL_OR: 13,
  SLICE_PAIR: 12,
  COMPOUND: 13,
  EQUALITY: 11,
  GREATER_LESS: 10,
  BITWISE_OR: 9,
  BITWISE_AND: 8,
  BITWISE_SHIFT: 7,
  ADD_SUB_CAT: 6,
  MULT_DIV: 5,
  EXPONENT: 4,
  NEGATION: 3,
  STRINGIZE: 3,
  NUMERICIZE: 3,
  DEREFERENCE: 3,
  BOX: 3,
  LOGICAL_NOT: 2,
  PARENTHETICAL: 1,
  SUBSCRIPT: 0,
  MEMBER_ACCESS: 0,
  ARRAY: 0,
  PLAIN: -5, //stuff like GetFPS
  DOT: -10, // stuff like quest.variable
  ARGUMENTATIVE: -15, // stuff like GetName object
  LITERAL: -20,
};

module.exports = grammar({
  name: 'obse',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  word: $ => $.identifier,

  inline: $ => [
    $._multi_expr,
  ],

  conflicts: $ => [
    [$.argumentative],
    [$.eval],
    [$.testexpr],
  ],

  rules: {

    script_file: $ => seq(
      field('script_name', $.script_name),
      repeat(field('script_body', $._script_body)),
    ),

    script_name: $ => seq(
      field('declaration', $.script_declarator),
      field('script_name', $.identifier),
    ),
    script_declarator: $ => choice(
      caseInsensitive('scn'),
      caseInsensitive('scriptname'),
    ),

    _script_body: $ => choice(
      field('var_declaration', $.var_declare),
      field('block_mode', $.block),
    ),

    var_declare: $ => seq(
      field('type', $._type),
      field('variable', $.identifier),
    ),
    _type: $ => choice(
      field('type_int', $.int),
      field('type_float', $.float),
      field('type_string', $.string),
      field('type_array', $.array),
    ),
    int: $ => choice(
      caseInsensitive('int'),
      caseInsensitive('short'),
      caseInsensitive('long'),
    ),
    float: $ => caseInsensitive('float'),
    string: $ => caseInsensitive('string_var'),
    array: $ => caseInsensitive('array_var'),

    block: $ => seq(
      caseInsensitive('begin'),
      field('block_type', $.identifier),
      repeat(field('block_body', $._block_body)),
      caseInsensitive('end'),
    ),

    _block_body: $ => field('statement', $._statement),

    _statement: $ => choice(
      field('let', $.let_statement),
      field('set', $.set_statement),
      field('if_block', $.conditional),
      field('loop', $.loop),
      field('function_call', $.function_call),
      field('user_function', $.user_function),
      field('eval', prec.left($.eval)),
      field('testexpr', prec.left($.testexpr)),
    ),

    _expression: $ => choice(
      $.operands,
      prec.left($.binary_operator),
      $._unary_expr,
      $._paren_expression,
    ),

    _paren_expression: $ => seq(
      '(',
      repeat($._expression),
      ')',
    ),

    operands: $ => choice(
      field('plain', prec(PREC.PLAIN, $.identifier)),
      field('argumentative', prec(PREC.ARGUMENTATIVE, $.argumentative)),
      field('literal', prec(PREC.LITERAL, $.literal)),
      field('array_var', prec(PREC.ARRAY, $.array_variable)),
      field('dot', prec(PREC.DOT, $.dot_object)),
      field('user_function', $.user_function),
    ),

    _unary_expr: $ => seq(
      $.unary_operator,
      $._expression,
    ),

    binary_operator: $ => choice(
      prec(PREC.ASSIGNMENT, ':='),
      prec(PREC.LOGICAL_OR, '||'),
      prec(PREC.LOGICAL_AND, '&&'),
      prec(PREC.SLICE_PAIR, '::'),
      prec(PREC.EQUALITY, '=='),
      prec(PREC.EQUALITY, '!='),
      prec(PREC.GREATER_LESS, '>'),
      prec(PREC.GREATER_LESS, '>='),
      prec(PREC.GREATER_LESS, '<'),
      prec(PREC.GREATER_LESS, '<='),
      prec(PREC.BITWISE_OR, '|'),
      prec(PREC.BITWISE_AND, '&'),
      prec(PREC.BITWISE_SHIFT, '<<'),
      prec(PREC.BITWISE_SHIFT, '>>'),
      prec(PREC.ADD_SUB_CAT, '+'),
      prec(PREC.ADD_SUB_CAT, '-'),
      prec(PREC.MULT_DIV, '*'),
      prec(PREC.MULT_DIV, '/'),
      prec(PREC.MULT_DIV, '%'),
      prec(PREC.EXPONENT, '^'),
      prec(PREC.MEMBER_ACCESS, '->'),
    ),

    unary_operator: $ => choice(
      prec(PREC.NEGATION, '-'),
      prec(PREC.STRINGIZE, '$'),
      prec(PREC.NUMERICIZE, '#'),
      prec(PREC.DEREFERENCE, '*'),
      prec(PREC.BOX, '&'),
      prec(PREC.LOGICAL_NOT, '!'),
    ),

    // dot objects
    dot_object: $ => seq(
      field('left', $.identifier),
      token.immediate('.'),
      field('right', $.identifier),
    ),

    // functions with arguments
    argumentative: $ => seq(
      field('function', $.identifier),
      repeat1(field('argument', choice(prec(PREC.LITERAL, $.literal), prec(PREC.ARGUMENTATIVE, $.identifier)))),
    ),

    // Array variables
    array_variable: $ => seq(
      field('array', $.identifier),
      repeat1(field('index', $.subscript)),
    ),
    _array_key: $ => choice(
      prec(PREC.LITERAL, $.literal),
      prec(PREC.SLICE_PAIR, field( 'slice', $.slice)),
    ),
    slice: $ => seq(
      choice(/\d+/, /\-\d+/,),
      ':',
      choice(/\d+/, /\-\d+/,),
    ),

    // arrays and strings use this
    subscript: $ => seq(
      '[',
      field('key', $._array_key),
      ']',
    ),

    // literals are numbers and double quotes only
    literal: $ => choice(
      /\d+/,
      /\-\d+/,
      /\-\d+\.\d*/,
      /\d+\.\d*/,
      /"[a-zA-Z_]\w*"/,
    ),

    eval: $ => seq(
      caseInsensitive('eval'),
      repeat1($._expression),
    ),

    testexpr: $ => seq(
      caseInsensitive('testexpr'),
      repeat1($._expression),
    ),

    set_statement: $ => seq(
      caseInsensitive('set'),
      field('left', $.operands),
      caseInsensitive('to'),
      field('right', $.operands),
    ),
    let_statement: $ => seq(
      caseInsensitive('let'),
      field('left', $.operands),
      $._let_assignment,
      field('right', $.operands),
    ),

    _let_assignment: $ => choice(
      prec(PREC.ASSIGNMENT, field('assignment', $.assignment)),
      prec(PREC.COMPOUND, field('compound', $.compound_assignment)),
    ),
    assignment: $ => ':=',
    compound_assignment: $ => choice(
      '+=',
      '-=',
      '*=',
      '/=',
      '^=',
    ),

    conditional: $ => seq(
      caseInsensitive('if'),
      field('condition', repeat1($._expression)),
      '\n',
      repeat($._statement),
      optional(field('elseif', $.else_if)),
      optional(field('else', $.else)),
      caseInsensitive('endif'),
    ),

    else: $ => seq(
      caseInsensitive('else'),
      '\n',
      repeat($._statement),
    ),
    else_if: $ => seq(
      caseInsensitive('elseif'),
      field('condition', repeat1($._expression)),
      '\n',
      repeat($._statement),
    ),

    con_else: $ => 'fjdkls',
    function_call: $ => 'tes',
    user_function: $ => 'ts',
    loop: $ => 'test',

    identifier: $ => /[a-zA-Z_]\w*/,
    comment: $ => seq(
      ';',
      /(\\(.|\r?\n)|[^\\\n])*/
    ),
  }
});
module.exports.PREC = PREC

function caseInsensitive (keyword, aliasAsWord = true) {
  let result = new RegExp(keyword
    .split('')
    .map(l => l !== l.toUpperCase() ? `[${l}${l.toUpperCase()}]` : l)
    .join('')
  )
  if (aliasAsWord) result = alias(result, keyword)
  return result
}
