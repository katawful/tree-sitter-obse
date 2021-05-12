module.exports = grammar({
  name: 'obse',

  inline: $ => [
    $.top_level_items,
  ],

  conflicts: $ => [
    [$.variable, $.interpreted],
    [$.quest_reference, $.quest_variable],
    [$.conditional, $.identifier],
    [$.contained, $.equality],
  ],

  rules: {

    script_file: $ => seq(
      field('script_name', $.script_name),
      repeat(field('body', $.script_body)),
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
      repeat(field('body', $.body)),
      caseInsensitive('end'),
    ),


    body: $ => choice(
      field('statement', $.statement),
      field('conditional', $.conditional),
      $.loop,
      field('function_call', $.function_call),
    ),

    statement: $ => choice(
      field('let', $.let_statement),
      field('set', $.set_statement),
    ),

    set_statement: $ => seq(
      caseInsensitive('set'),
      field('variable', $.variable),
      caseInsensitive('to'),
      $.right_hand,
    ),
    let_statement: $ => seq(
      caseInsensitive('let'),
      field('variable', $.variable),
      // TODO make sure to add in expressions here
      ':=',
      $.right_hand,
    ),

    variable: $ => choice(
      field('plain_var', prec(20, $.identifier)),
      field('array_var', prec(0, $.array_var)),
      field('quest_var', prec(10, $.quest_variable)),
    ),

    quest_variable: $ => /[a-zA-Z_]\w*\.[a-zA-Z_]\w*/,

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

    // Array variables
    array_var: $ => seq(
      field('array', $.identifier),
      '[',
      field('key', $.literal),
      ']',
    ),

    declarator: $ => choice(
      field('interpreted', $.interpreted),
      field('literal', $.literal),
      field('variable', $.variable),
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
      $.body,
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
