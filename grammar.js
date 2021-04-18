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
      /[sS][cC][nN]/,
      /[sS][cC][rR][iI][pP][tT][nN][aA][mM][eE]/
    ),

    script_body: $ => repeat1($._top_level_items),

    _top_level_items: $ => choice(
      field('declaration', $.var_declare),
      field('block_mode', $.block),
    ),

    var_declare: $ => seq(
      field('type', $._type),
      field('variable', $.variable),
    ),

    identifier: $ => /[a-zA-Z_]\w*/,

    _type: $ => choice(
      $.int_type,
      $.float_type,
      $.string_type,
      $.array_type,
    ),

    int_type: $ => choice(
      /[iI][nN][tT]/,
      /[lL][oO][nN][gG]/,
      /[sS][hH][oO][rR][tT]/,
    ),
    float_type: $ => /[fF][lL][oO][aA][tT]/,
    string_type: $ => /[sS][tT][rR][iI][nN][gG]_[vV][aA][rR]/,
    array_type: $ => /[aA][rR][rR][aA][yY]_[vV][aA][rR]/,

    variable: $ => token(/[a-z]+/),

    block: $ => seq(
      /[bB][eE][gG][iI][nN]/,
      field('block_type', $.block_type),
      field('body', $.body_repeat),
      /[eE][nN][dD]/,
    ),

    block_type: $ => /[a-z]+/,
    body_repeat: $ => repeat1($.body),
    body: $ => /[a-z].+/,
  }
});
