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
      $.let_statement,
      $.set_statement,
    ),

    set_statement: $ => seq(
      caseInsensitive('set'),
      field('variable', $.identifier),
      caseInsensitive('to'),
    ),
    let_statement: $ => seq(
      caseInsensitive('let'),
      $.identifier,
      // TODO make sure to add in expressions here
      ':='
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
