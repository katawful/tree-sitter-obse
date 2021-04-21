module.exports = grammar({
  name: 'obse',

  inline: $ => [
    $.top_level_items,
  ],

  rules: {
    script_file: $ => seq(
      $.script_name_declare,
      $.script_body,
    ),

    script_name_declare: $ => seq(
      $.script_declarer,
      field('script_name', $.identifier),
    ),

    script_declarer: $ => choice(
      caseInsensitive('scn'),
      caseInsensitive('scriptname'),
    ),

    script_body: $ => repeat1($._top_level_items),

    _top_level_items: $ => choice(
      field('declaration', $.var_declare),
      field('block_mode', $.block),
    ),

    var_declare: $ => seq(
      field('type', $._type),
      field('variable', $.identifier),
    ),

    identifier: $ => /[a-zA-Z_]\w*/,

    _type: $ => choice(
      $.int_type,
      $.float_type,
      $.string_type,
      $.array_type,
    ),

    int_type: $ => choice(
      caseInsensitive('int'),
      caseInsensitive('short'),
      caseInsensitive('long'),
    ),
    float_type: $ => caseInsensitive('float'),
    string_type: $ => caseInsensitive('string_var'),
    array_type: $ => caseInsensitive('array_var'),

    block: $ => seq(
      caseInsensitive('begin'),
      field('block_type', $.identifier),
      field('body', $.body_repeat),
      caseInsensitive('end'),
    ),

    body_repeat: $ => repeat1($.body),

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
      field('array_var', $.array_var),
      field('quest_var', $.quest_variable),
      field('plain_var', $.identifier),
    ),

    quest_variable: $ => /[a-zA-Z_]\w*\.[a-zA-Z_]\w*/,

    right_hand: $ => choice(
      field('literal', $.literal),
      $.interpreted,
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
      field('array_var', $.array_var),
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

    function_call: $ => 'tes',
    loop: $ => 'test',
    conditional: $ => 'tesa',
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
