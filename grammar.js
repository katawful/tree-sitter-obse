// for expressions
const PREC = {
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
};

module.exports = grammar({
  name: 'obse',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    [$.left_operand, $.interpreted],
    [$.quest_reference, $.quest_variable],
    [$.conditional, $.identifier],
    [$.contained, $.equality],
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
      field('condition', $.conditional),
      field('loop', $.loop),
      field('function_call', $.function_call),
      field('user_function', $.user_function),
      field('eval', $.eval),
      field('testexpr', $.testexpr),
    ),

    _expression: $ => choice(
      $.binary_expr,
      $.parenthesized_binary_expr,
      $.urnary_expr,
      $.parenthesized_urnary_expr,
    ),

    binary_expr: $ => seq(
      $.left_operand,
      $.binary_operator,
      $.right_operand,
    ),

    parenthesized_binary_expr: $ => seq(
      '(',
      $.left_operand,
      $.binary_operator,
      $.right_operand,
      ')',
    ),

    binary_operator: $ => choice(
      prec(PREC.LOGICAL_OR, '||'),
      prec(PREC.LOGICAL_AND, '&&'),
      prec(PREC.SLICE_PAIR, ':'),
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

    urnary_expr: $ => seq(
      $.left_operand,
      $.urnary_operator,
      $.right_operand,
    ),
 
    parenthesized_urnary_expr: $ => seq(
      '(',
      $.left_operand,
      $.urnary_operator,
      $.right_operand,
      ')',
    ),

    urnary_operator: $ => choice(
      prec(PREC.NEGATION, '-'),
      prec(PREC.STRINGIZE, '$'),
      prec(PREC.NUMERICIZE, '#'),
      prec(PREC.DEREFERENCE, '*'),
      prec(PREC.BOX, '&'),
      prec(PREC.LOGICAL_NOT, '!'),
    ),

    eval: $ => seq(
      caseInsensitive('eval')
    ),

    testexpr: $ => seq(
      caseInsensitive('testexpr')
    ),

    set_statement: $ => seq(
      caseInsensitive('set'),
      field('left_operand', $.left_operand),
      caseInsensitive('to'),
      $.right_operand,
    ),
    let_statement: $ => seq(
      caseInsensitive('let'),
      field('left_operand', $.left_operand),
      $._let_assignment,
      $.right_operand,
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

    left_operand: $ => choice(
      field('plain_var', prec(20, $.identifier)),
      field('array_var', prec(0, $.array_variable)),
      field('quest_var', prec(10, $.quest_variable)),
    ),

    // Quest variables
    quest_variable: $ => /[a-zA-Z_]\w*\.[a-zA-Z_]\w*/,
    // Array variables
    array_variable: $ => seq(
      field('array', $.identifier),
      repeat1(field('index', $.array_index)),
    ),
    array_index: $ => seq(
      '[',
      field('key', $.literal),
      ']',
    ),

    right_operand: $ => seq(
      $.contained,
    ),

    literal: $ => choice(
      /\d+/,
      /\-\d+/,
      /\-\d+\.\d*/,
      /\d+\.\d*/,
      /"[a-zA-Z_]\w*"/,
    ),

    // this contains all functions, all variables, and references
    interpreted: $ => choice(
      field('function_reference', $.identifier),
      field('quest_reference', $.quest_reference),
      field('function', $.functions),
    ),

    // functions that take an object
    functions: $ => /[a-zA-Z_]\w* [a-zA-Z_]\w*/,

    // quest variables and reference functions
    quest_reference: $ => /[a-zA-Z_]\w*\.[a-zA-Z_]\w*/,


    declarator: $ => choice(
      field('interpreted', $.interpreted),
      field('literal', $.literal),
      field('variable', $.left_operand),
    ),

    parenthetical: $ => prec.dynamic(0, seq(
      '(',
      choice(
        $.contained,
        $.and_or,
        $.equality,
      ),
      ')',
    )),

    equality: $ => seq(
      $.declarator,
      choice(
        '==',
        '>',
        '<',
        '!=',
        '<=',
        '>=',
      ),
      $.declarator,
    ),

    contained: $ => choice(
      prec(20, $.parenthetical),
      prec(10, $.declarator),
    ),

    conditional: $ => seq(
      caseInsensitive('if'),
      choice(
        prec(10, $.contained),
        prec(0, $.equality),
      ),
      // choice(
      //   // prec(30, $.and_or),
      //   prec(20, $.parenthetical),
      //   prec(0, $.declarator),
      //   prec(10, $.equality),
      // ),
      optional($.and_or),
      // repeat($.body),
      $._block_body,
      optional($.con_else),
      caseInsensitive('endif'),
    ),

    and_or: $ => choice(
        '&&',
        '||',
      // choice(
      //   $.equality,
      //   $.parenthetical,
      //   $.declarator,
      // ),
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
