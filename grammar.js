module.exports = grammar({
  name: 'obse',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  word: $ => $.identifier,

  inline: $ => [
    $.top_level_items,
  ],

  conflicts: $ => [
    [$.left_operand, $.interpreted],
    [$.quest_reference, $.quest_variable],
    [$.conditional, $.identifier],
    [$.contained, $.equality],
  ],

  rules: {

    script_file: $ => seq(
      field('script_name', $.script_name),
      repeat(field('script_body', $.script_body)),
    ),

    script_name: $ => seq(
      field('declaration', $.script_declarator),
      field('script_name', $.identifier),
    ),
    script_declarator: $ => choice(
      caseInsensitive('scn'),
      caseInsensitive('scriptname'),
    ),

    script_body: $ => choice(
      field('var_declaration', $.var_declare),
      field('block_mode', $.block),
    ),

    var_declare: $ => seq(
      field('type', $.type),
      field('variable', $.identifier),
    ),
    type: $ => choice(
      $.int,
      $.float,
      $.string,
      $.array,
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
      repeat(field('block_body', $.block_body)),
      caseInsensitive('end'),
    ),


    block_body: $ => choice(
      field('statement', $.statement),
    ),

    statement: $ => choice(
      field('let', $.let_statement),
      field('set', $.set_statement),
      field('condition', $.conditional),
      field('loop', $.loop),
      field('function_call', $.function_call),
    ),

    set_statement: $ => seq(
      caseInsensitive('set'),
      field('left_operand', $.left_operand),
      caseInsensitive('to'),
      $.right_hand,
    ),
    let_statement: $ => seq(
      caseInsensitive('let'),
      field('left_operand', $.left_operand),
      // TODO make sure to add in expressions here
      ':=',
      $.right_hand,
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

    right_hand: $ => seq(
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
      $.block_body,
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
    loop: $ => 'test',

    identifier: $ => /[a-zA-Z_]\w*/,
    comment: $ => seq(
      ';',
      /(\\(.|\r?\n)|[^\\\n])*/
    ),
  }
});

function caseInsensitive (keyword, aliasAsWord = true) {
  let result = new RegExp(keyword
    .split('')
    .map(l => l !== l.toUpperCase() ? `[${l}${l.toUpperCase()}]` : l)
    .join('')
  )
  if (aliasAsWord) result = alias(result, keyword)
  return result
}
