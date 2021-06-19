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
  ARRAY: 1,
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

  conflicts: $ => [
    [$.condition, $._operands],
    [$._array_key, $._operands],
    [$._paren_expression, $._paren_operands],
    [$._expression, $._paren_operands],
    [$._expression, $._pre_operands],
  //   [$._statement, $._operands],
  //   [$._expression, $.set_statement],
  //   [$._expression, $.let_statement],
  //   [$._expression, $._pre_operands],
  //   [$._paren_expression, $._paren_operands],
  //   [$._paren_operands, $._expression],
  //   [$.user_function],
  //   [$._plain],
  //   [$._function],
  //   [$.condition],
  //   [$.user_function, $._function],
  //   [$._function, $._statement],
  //   [$._operands, $.user_function],
  //   [$._function, $._operands],
  //   [$._operands, $._array_key],
  //   [$.condition, $._operands],
  //   [$.array_variable, $.identifier],
  //   [$._pre_operands],
  //   [$.conditional],
  //   [$.eval],
  //   [$.else],
  //   [$.else_if],
  //   [$.testexpr],
  //   [$.while_loop],
  //   [$.foreach_loop],
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
      field('type_string', $.str_var),
      field('type_array', $.array),
      field('type_ref', $.ref),
    ),
    int: $ => choice(
      caseInsensitive('int'),
      caseInsensitive('short'),
      caseInsensitive('long'),
    ),
    ref: $ => caseInsensitive('ref'),
    float: $ => caseInsensitive('float'),
    str_var: $ => caseInsensitive('string_var'),
    array: $ => caseInsensitive('array_var'),

    block: $ => seq(
      caseInsensitive('begin'),
      field('block_type', $._block_type),
      $._eol,
      repeat(field('block_body', $._block_body)),
      caseInsensitive('end'),
    ),
    _block_type: $ => choice(
      $._block_func,
      $.identifier,
    ),
    _block_func: $ => seq(
      $.identifier,
      '{',
      repeat(choice(
        field('argument', $.identifier),
        ',',
      )),
      '}',
    ),

    _block_body: $ => field('statement', $._statement),

    _statement: $ => prec.left(choice(
      $._loop_ctrl,
      $._function,
      field('let', $.let_statement),
      field('set', $.set_statement),
      field('if_block', $.conditional),
      field('while', $.while_loop),
      field('foreach', $.foreach_loop),
      field('user', $.user_function),
      field('eval', prec.left($.eval)),
      field('testexpr', prec.left($.testexpr)),
    )),
    _statement2: $ => prec.left(seq(
      repeat1(
        $._statement,
      ),
      optional($._eol))),

    _expression: $ => choice(
      $._operands,
      $._paren_operands,
      prec.left($.binary_operator),
      $._unary_expr,
      $._paren_expression,
    ),

    _paren_expression: $ => seq(
      '(',
      repeat($._expression),
      ')',
    ),

    _plain: $ => choice(
      field('plain', $.identifier),
      field('variable', $.identifier),
    ),

    _operands: $ => choice(
      field('plain', prec(PREC.PLAIN, $.identifier)),
      field('literal', prec(PREC.LITERAL, $._literal)),
      field('array_var', prec(PREC.ARRAY, $.array_variable)),
      prec(PREC.DOT, $.dot_object),
      // field('function', $.function),
      field('user_function', $.user_function),
      field('option', $.opt),
    ),
    _paren_operands: $ => seq(
      '(',
      repeat($._operands),
      ')',
    ),
    _variable: $ => choice(
      field('variable', prec(PREC.PLAIN, $.identifier)),
      prec(PREC.DOT, $.dot_object),
      field('array', $.array_variable),
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
    ),

    unary_operator: $ => choice(
      prec(PREC.NEGATION, '-'),
      prec(PREC.STRINGIZE, '$'),
      prec(PREC.NUMERICIZE, '#'),
      prec(PREC.DEREFERENCE, '*'),
      prec(PREC.BOX, '&'),
      prec(PREC.LOGICAL_NOT, '!'),
    ),

    dot_object: $ => prec.left(seq(
      field('left', $.identifier),
      '.',
      field('right', $.identifier),
      optional($._eol),
    )),

    opt: $ => seq(
      ',',
      field('option', prec.right($._operands)),
      $._eol,
    ),

    // Array variables
    array_variable: $ => prec.left(seq(
      field('array', $._array),
      repeat1(field('key', choice($.subscript, prec(PREC.SUBSCRIPT, field('member_access', $.mem_access))))),
    )),
    _array: $ => $.identifier,
    _array_key: $ => choice(
      field('index', prec(PREC.LITERAL, $._literal)),
      field('index', prec(PREC.PLAIN, repeat1($._expression))),
      prec(PREC.SLICE_PAIR, field( 'slice', $.slice)),
    ),
    mem_access: $ => seq(
      '->',
      choice(
        field('key', $._literal),
        field('key', $.identifier),
      ),
    ),
    slice: $ => seq(
      choice(field('integer', $.integer), field('float', $.float_num)),
      ':',
      choice(field('integer', $.integer), field('float', $.float_num)),
    ),
    // arrays and strings use this
    subscript: $ => seq(
      '[',
      $._array_key,
      ']',
    ),

    // literals are numbers and double quotes only
    _literal: $ => choice(
      field('integer', $.integer),
      field('float', $.float_num),
      field('string', $.string),
    ),
    string: $ => /".*"/,
    float_num: $ => choice(
      /\-\d+\.\d*/,
      /\d+\.\d*/,
    ),
    integer: $ => choice(
      /\d+/,
      /\-\d+/,
    ),


    eval: $ => prec.left(seq(
      caseInsensitive('eval'),
      repeat1($._expression),
      optional($._eol),
    )),

    testexpr: $ => prec.left(seq(
      caseInsensitive('testexpr'),
      repeat1($._expression),
      optional($._eol),
    )),

    set_statement: $ => seq(
      caseInsensitive('set'),
      field('left', $._variable),
      caseInsensitive('to'),
      $._pre_operands,
      $._eol,
    ),
    let_statement: $ => seq(
      caseInsensitive('let'),
      field('left', $._variable),
      $._let_assignment,
      $._pre_operands,
      $._eol,
    ),
    _pre_operands: $ => choice(
      field('right', repeat1($._operands)),
      repeat1($._expression),
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

    condition: $ => seq(repeat1(choice(
      $._function,
      prec.right($._expression),
      field('user', $.user_function),
      field('eval', prec.left($.eval)),
      field('testexpr', prec.left($.testexpr)),
    )),
      $._eol,
    ),

    conditional: $ => seq(
      caseInsensitive('if'),
      field('condition', $.condition),
      repeat($._statement2),
      repeat(field('elseif', $.else_if)),
      optional(field('else', $.else)),
      caseInsensitive('endif'),
      // $._eol,
    ),
    else: $ => seq(
      caseInsensitive('else'),
      $._eol,
      repeat($._statement2),
    ),
    else_if: $ => seq(
      caseInsensitive('elseif'),
      field('condition', $.condition),
      repeat1($._statement2),
    ),

    while_loop: $ => seq(
      caseInsensitive('while'),
      field('condition', $.condition),
      repeat($._statement),
      caseInsensitive('loop'),
      $._eol,
    ),

    foreach_loop: $ => seq(
      caseInsensitive('foreach'),
      choice(
        field('container', prec(PREC.ARRAY, $.array_variable)),
        field('container', prec(PREC.PLAIN, $.identifier)),
      ),
      '<-',
      choice(
        field('source', prec(PREC.ARRAY, $.array_variable)),
        field('source', prec(PREC.PLAIN, $.identifier)),
      ),
      $._eol,
      repeat($._statement),
      caseInsensitive('loop'),
      $._eol,
    ),

    _loop_ctrl: $ => choice(
      caseInsensitive("break"),
      caseInsensitive("continue"),
    ),

    user_function: $ => prec.left(seq(
      caseInsensitive('call'),
      field('user_function', $.identifier),
      repeat($._expression),
      optional($._eol),
    )),

    _function: $ => prec.left(seq(
      field('function', $.identifier),
      repeat($._expression),
      // optional($._eol),
    )),

    identifier: $ => /[a-zA-Z_]\w*/,
    comment: $ => seq(
      ';',
      /(\\(.|\r?\n)|[^\\\n])*/
    ),
    _eol: $ => '\n',
  }
});
module.exports.PREC = PREC

function caseInsensitive (word, aliasAsWord = true) {
  let pattern = ''
  for (const letter of word) {
    pattern += `[${letter}${letter.toLocaleUpperCase()}]`
  }
  let result = new RegExp(pattern)
  // let result = new RegExp(keyword
  //   .split('')
  //   .map(l => l !== l.toUpperCase() ? `[${l}${l.toUpperCase()}]` : l)
  //   .join('')
  // )
  if (aliasAsWord) result = alias(result, word)
  return result
}
