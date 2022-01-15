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
  BOTTOM: -30,
};

module.exports = grammar({
  name: 'obse',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  conflicts: $ => [
    [$._array_key, $._operands],
  ],

  externals: $ => [
    $.function,
  ],

	inline: $ => [
		$._arguments,
	],

  word: $ => $.identifier,

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
      // $._eol,
      repeat($._block_body),
      caseInsensitive('end'),
    ),
    _block_type: $ => choice(
      $._plain_block,
      $._block_func,
    ),
    _plain_block: $ => choice(
      caseInsensitive('gamemode'),
      seq(caseInsensitive('menumode'), optional(field("menu_type", $.integer))),
      caseInsensitive('onactivate'),
      caseInsensitive('onactorunequip'),
      caseInsensitive('onadd'),
      caseInsensitive('onalarm'),
      caseInsensitive('ondrop'),
      caseInsensitive('onequip'),
      caseInsensitive('onhit'),
      caseInsensitive('onhitwith'),
      caseInsensitive('onknockout'),
      caseInsensitive('onload'),
      caseInsensitive('onmagiceffecthit'),
      caseInsensitive('onmurder'),
      caseInsensitive('onpackagechange'),
      caseInsensitive('onpackagedone'),
      caseInsensitive('onpackagestart'),
      caseInsensitive('onreset'),
      caseInsensitive('onsell'),
      caseInsensitive('onstartcombat'),
      caseInsensitive('ontrigger'),
      caseInsensitive('ontriggeractor'),
      caseInsensitive('ontriggermob'),
      caseInsensitive('onunequip'),
      caseInsensitive('scripteffectfinish'),
      caseInsensitive('scripteffectstart'),
      caseInsensitive('scripteffectupdate'),
    ),
    _block_func: $ => seq(
      caseInsensitive('function'),
      '{',
      repeat(choice(
        field('parameter', $.identifier),
        ',',
      )),
      '}',
    ),

    _block_body: $ => field('statement', $._statement),
    // _block_body: $ => seq(field('statement', $._statement), $._eol),

    _statement: $ => prec.left(PREC.TOP, choice(
      field('reference_function', $.ref_function),
      field('function', $._plain_function),
      field('event_handler', $.event_handler),
      field('let', $.let_statement),
      field('set', $.set_statement),
      field('if_block', $.conditional),
      field('while', $.while_loop),
      field('foreach', $.foreach_loop),
      field('user', $.user_function),
      field('eval', prec.left($.eval)),
      field('testexpr', prec.left($.testexpr)),
			field('return', $.return_statement),
    )),
    _statement2: $ => prec.left(2000, seq(
      repeat1(
        $._statement,
      ))),

		return_statement: $ => prec.left(choice(
			caseInsensitive('return'),
			seq(
				caseInsensitive('setfunctionvalue'),
				repeat1($._expression),
			),
		)),

    event_handler: $ => prec.left(seq(
      choice(
        caseInsensitive('seteventhandler'),
        caseInsensitive('removeeventhandler'),
      ),
      field('event_type', $.string),
      field('function', $.identifier),
      field('parameter', repeat(
        $._event_filter,
      )),
      $._eol,
    )),

    _event_filter: $ => seq(
      $.identifier,
      prec(PREC.SLICE_PAIR, '::'),
      $._operands,
    ),

    quest_var: $ => prec.left(PREC.TOP, seq(
      field('namespace', $.identifier),
      '.',
      field('variable', prec(PREC.PLAIN, $.identifier)),
    )),

    _plain_function: $ => prec.left(PREC.PLAIN, seq(
      field('function', $.function),
			repeat($._expression),
    )),

    ref_function: $ => prec.left(PREC.DOT, seq(
      field('reference', $.identifier),
      '.',
      field('function', $.function),
			repeat($._expression),
    )),

    _expression: $ => prec.left(PREC.TOP, choice(
      $._operands,
      $._binary_operator,
      prec.left($._unary_expr),
      $._paren_expression,
      $._paren_operands,
      // $._eol,
    )),
    _paren_expression: $ => prec(PREC.PARENTHETICAL, seq(
      '(',
      repeat1($._expression),
      ')',
    )),

    _operands: $ => prec.left(PREC.TOP, choice(
      field('plain', prec(PREC.PLAIN, $.identifier)),
      field('array_var', prec(PREC.ARRAY, $.array_variable)),
      field('quest_variable', prec(PREC.DOT, $.quest_var)),
      field('reference_function', prec(PREC.DOT, $.ref_function)),
      field('function', prec(PREC.ARGUMENTATIVE, $._plain_function)),
      field('user_function', prec(PREC.PLAIN, $.user_function)),
      field('literal', prec(PREC.LITERAL, $._literal)),
      field('option', prec(PREC.BOTTOM, $.opt)),
    )),
    _paren_operands: $ => prec(PREC.PARENTHETICAL, seq(
      '(',
      repeat1($._operands),
      ')',
    )),
    _variable: $ => choice(
      field('variable', prec(PREC.PLAIN, $.identifier)),
      field('quest_variable', prec(PREC.DOT, $.quest_var)),
      field('array', $.array_variable),
    ),

    _unary_expr: $ => prec.left(PREC.LOGICAL_NOT, seq(
      $.unary_operator,
      $._expression,
    )),

    _binary_operator: $ => seq(
      $.binary_operator,
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

    _dot_object: $ => choice(
      field('quest_variable', $.quest_var),
      field('reference_function', $.ref_function)),


    opt: $ => prec.left(repeat1(seq(
      ',',
      field('option', prec.left($._operands))
    ))),

    // Array variables
    array_variable: $ => prec.left(seq(
      field('array', $._array),
      repeat1(field('key', choice(
        $.subscript,
        prec(PREC.SUBSCRIPT, field('member_access', $.mem_access))))),
    )),
    _array: $ => $.identifier,
    _array_key: $ => choice(
      field('index', prec(PREC.TOP, $._literal)),
      field('index', prec(PREC.TOP, $.identifier)),
      field('index', prec(PREC.TOP, $._dot_object)),
      field('index', prec(PREC.BOTTOM, repeat1($._expression))),
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

    eval_expression: $ => prec.right(repeat1($._expression)),

    eval: $ => prec.left(seq(
      caseInsensitive('eval'),
      // repeat($._expression),
      $.eval_expression,
      // optional($._eol),
    )),

    testexpr: $ => prec.left(seq(
      caseInsensitive('testexpr'),
      // repeat($._expression),
      $.eval_expression,
      // optional($._eol),
    )),

    set_statement: $ => seq(
      caseInsensitive('set'),
      field('left', $._variable),
      caseInsensitive('to'),
      $._pre_operands,
    ),
    let_statement: $ => seq(
      caseInsensitive('let'),
      field('left', $._variable),
      $._let_assignment,
      $._pre_operands,
      // $._eol,
    ),
    _pre_operands: $ => prec.left(repeat1(
      $._expression,
    )),

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

    condition: $ => prec(1000, repeat1(choice(
      prec.left($._expression),
      field('eval', prec.left($.eval)),
      field('testexpr', prec.left($.testexpr)),
    ))),

    conditional: $ => seq(
      caseInsensitive('if'),
      field('condition', prec.left(PREC.TOP, $.condition)),
      repeat1($._statement2),
      repeat(field('elseif', $.else_if)),
      optional(field('else', $.else)),
      caseInsensitive('endif'),
      $._eol,
    ),
    else: $ => seq(
      caseInsensitive('else'),
      $._eol,
      repeat1($._statement2),
      $._eol,
    ),
    else_if: $ => seq(
      caseInsensitive('elseif'),
      field('condition', $.condition),
      repeat1($._statement2),
      $._eol,
    ),

    while_loop: $ => seq(
      caseInsensitive('while'),
      field('condition', prec.left(PREC.TOP, $.condition)),
      repeat1(choice(
        $._statement,
        field('return', $.loop_ctrl),
      )),
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
        field('source', prec(PREC.PLAIN, $.string)),
      ),
      $._eol,
      repeat1(choice(
        $._statement,
        field('return', $.loop_ctrl),
      )),
      caseInsensitive('loop'),
      $._eol,
    ),

    loop_ctrl: $ => choice(
      caseInsensitive("break"),
      caseInsensitive("continue"),
    ),

    user_function: $ => prec.left(seq(
      caseInsensitive('call'),
      field('user_function', $.identifier),
      repeat($._expression),
    )),

    comment: $ => seq(
      ';',
      /(\\(.|\r?\n)|[^\\\n])*/
    ),
    _eol: $ => prec(200000, /\r?\n/),
    identifier: $ => /[a-zA-Z0-9_]\w*/,
  }
});
module.exports.PREC = PREC

function caseInsensitive (word, aliasAsWord = true) {
  // let pattern = '';
  // for (const letter of word) {
  //   pattern += `[${letter}${letter.toLocaleUpperCase()}]`;
  // };
  // let result = new RegExp(pattern);
  let result = new RegExp(word
    .split('')
    .map(l => l !== l.toUpperCase() ? `[${l}${l.toUpperCase()}]` : l)
    .join('')
  )
  if (aliasAsWord) result = alias(result, word);
  return result;
}
