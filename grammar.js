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

    variable: $ => /[a-zA-Z_]\w+/,

    block: $ => seq(
      /[bB][eE][gG][iI][nN]/,
      field('block_type', $.block_type),
      field('body', $.body_repeat),
      /[eE][nN][dD]/,
    ),

    block_type: $ => choice(
      /[EE][xX][iI][tT][GG][aA][mM][eE]/,
      /[EE][xX][iI][tT][TT][oO][MM][aA][iI][nN][MM][eE][nN][uU]/,
      /[FF][uU][nN][cC][tT][iI][oO][nN]/,
      /[GG][aA][mM][eE][MM][oO][dD][eE]/,
      /[LL][oO][aA][dD][GG][aA][mM][eE]/,
      /[MM][eE][nN][uU][MM][oO][dD][eE]/,
      /[OO][nN][AA][cC][tT][iI][vV][aA][tT][eE]/,
      /[OO][nN][AA][cC][tT][oO][rR][DD][rR][oO][pP]/,
      /[OO][nN][AA][cC][tT][oO][rR][EE][qQ][uU][iI][pP]/,
      /[OO][nN][AA][cC][tT][oO][rR][UU][nN][eE][qQ][uU][iI][pP]/,
      /[OO][nN][AA][dD][dD]/,
      /[OO][nN][AA][lL][aA][rR][mM]/,
      /[OO][nN][AA][lL][aA][rR][mM][TT][rR][eE][sS][pP][aA][sS][sS]/,
      /[OO][nN][AA][lL][aA][rR][mM][VV][iI][cC][tT][iI][mM]/,
      /[OO][nN][AA][tT][tT][aA][cC][kK]/,
      /[OO][nN][BB][lL][oO][cC][kK]/,
      /[OO][nN][BB][oO][wW][AA][tT][tT][aA][cC][kK]/,
      /[OO][nN][CC][lL][iI][cC][kK]/,
      /[OO][nN][CC][lL][oO][sS][eE]/,
      /[OO][nN][CC][rR][eE][aA][tT][eE][PP][oO][tT][iI][oO][nN]/,
      /[OO][nN][CC][rR][eE][aA][tT][eE][SS][pP][eE][lL][lL]/,
      /[OO][nN][DD][eE][aA][tT][hH]/,
      /[OO][nN][DD][oO][dD][gG][eE]/,
      /[OO][nN][DD][rR][iI][nN][kK][PP][oO][tT][iI][oO][nN]/,
      /[OO][nN][DD][rR][oO][pP]/,
      /[OO][nN][EE][aA][tT][II][nN][gG][rR][eE][dD][iI][eE][nN][tT]/,
      /[OO][nN][EE][nN][cC][hH][aA][nN][tT]/,
      /[OO][nN][EE][qQ][uU][iI][pP]/,
      /[OO][nN][FF][aA][lL][lL][II][mM][pP][aA][cC][tT]/,
      /[OO][nN][HH][eE][aA][lL][tT][hH][DD][aA][mM][aA][gG][eE]/,
      /[OO][nN][HH][iI][tT]/,
      /[OO][nN][HH][iI][tT][WW][iI][tT][hH]/,
      /[OO][nN][KK][nN][oO][cC][kK][oO][uU][tT]/,
      /[OO][nN][LL][oO][aA][dD]/,
      /[OO][nN][MM][aA][gG][iI][cC][AA][pP][pP][lL][yY]/,
      /[OO][nN][MM][aA][gG][iI][cC][CC][aA][sS][tT]/,
      /[OO][nN][MM][aA][gG][iI][cC][EE][fF][fF][eE][cC][tT][HH][iI][tT]/,
      /[OO][nN][MM][aA][gG][iI][cC][EE][fF][fF][eE][cC][tT][HH][iI][tT]2/,
      /[OO][nN][MM][aA][pP][MM][aA][rR][kK][eE][rR][AA][dD][dD]/,
      /[OO][nN][MM][oO][uU][sS][eE][oO][vV][eE][rR]/,
      /[OO][nN][MM][uU][rR][dD][eE][rR]/,
      /[OO][nN][NN][eE][wW][GG][aA][mM][eE]/,
      /[OO][nN][OO][pP][eE][nN]/,
      /[OO][nN][PP][aA][cC][kK][aA][gG][eE][CC][hH][aA][nN][gG][eE]/,
      /[OO][nN][PP][aA][cC][kK][aA][gG][eE][DD][oO][nN][eE]/,
      /[OO][nN][PP][aA][cC][kK][aA][gG][eE][SS][tT][aA][rR][tT]/,
      /[OO][nN][QQ][uU][eE][sS][tT][CC][oO][mM][pP][lL][eE][tT][eE]/,
      /[OO][nN][RR][eE][cC][oO][iI][lL]/,
      /[OO][nN][RR][eE][lL][eE][aA][sS][eE]/,
      /[OO][nN][RR][eE][sS][eE][tT]/,
      /[OO][nN][SS][aA][vV][eE][II][nN][iI]/,
      /[OO][nN][SS][cC][rR][iI][pP][tT][eE][dD][SS][kK][iI][lL][lL][UU][pP]/,
      /[OO][nN][SS][cC][rR][oO][lL][lL][CC][aA][sS][tT]/,
      /[OO][nN][SS][eE][lL][lL]/,
      /[OO][nN][SS][kK][iI][lL][lL][UU][pP]/,
      /[OO][nN][SS][oO][uU][lL][TT][rR][aA][pP]/,
      /[OO][nN][SS][pP][eE][lL][lL][CC][aA][sS][tT]/,
      /[OO][nN][SS][tT][aA][gG][gG][eE][rR]/,
      /[OO][nN][SS][tT][aA][rR][tT][CC][oO][mM][bB][aA][tT]/,
      /[OO][nN][TT][rR][iI][gG][gG][eE][rR]/,
      /[OO][nN][TT][rR][iI][gG][gG][eE][rR][AA][cC][tT][oO][rR]/,
      /[OO][nN][TT][rR][iI][gG][gG][eE][rR][MM][oO][bB]/,
      /[OO][nN][UU][nN][eE][qQ][uU][iI][pP]/,
      /[OO][nN][VV][aA][mM][pP][iI][rR][eE][FF][eE][eE][dD]/,
      /[OO][nN][WW][aA][tT][eE][rR][DD][iI][vV][eE]/,
      /[OO][nN][WW][aA][tT][eE][rR][SS][uU][rR][fF][aA][cC][eE]/,
      /[PP][oO][sS][tT][LL][oO][aA][dD][GG][aA][mM][eE]/,
      /[QQ][QQ][QQ]/,
      /[SS][aA][vV][eE][GG][aA][mM][eE]/,
      /[SS][cC][rR][iI][pP][tT][EE][fF][fF][eE][cC][tT][FF][iI][nN][iI][sS][hH]/,
      /[SS][cC][rR][iI][pP][tT][EE][fF][fF][eE][cC][tT][SS][tT][aA][rR][tT]/,
      /[SS][cC][rR][iI][pP][tT][EE][fF][fF][eE][cC][tT][UU][pP][dD][aA][tT][eE]/,
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
      /[sS][eE][tT]/,
      field('variable', $.variable),
      /[tT][oO]/,
    ),
    let_statement: $ => seq(
      'let',
      $.variable,
      /[tT][oO]/,
    ),
    function_call: $ => 'tes',
    loop: $ => 'test',
    conditional: $ => 'tesa',
  }
});
