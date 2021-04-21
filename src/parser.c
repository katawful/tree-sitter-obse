#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 22

enum {
  aux_sym_script_declarer_token1 = 1,
  aux_sym_script_declarer_token2 = 2,
  sym_identifier = 3,
  aux_sym_int_type_token1 = 4,
  aux_sym_int_type_token2 = 5,
  aux_sym_int_type_token3 = 6,
  aux_sym_float_type_token1 = 7,
  aux_sym_string_type_token1 = 8,
  aux_sym_array_type_token1 = 9,
  aux_sym_block_token1 = 10,
  aux_sym_block_token2 = 11,
  aux_sym_set_statement_token1 = 12,
  aux_sym_set_statement_token2 = 13,
  aux_sym_let_statement_token1 = 14,
  anon_sym_COLON_EQ = 15,
  aux_sym_quest_variable_token1 = 16,
  aux_sym_literal_token1 = 17,
  aux_sym_literal_token2 = 18,
  aux_sym_literal_token3 = 19,
  aux_sym_literal_token4 = 20,
  aux_sym_literal_token5 = 21,
  sym_functions = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_LT = 29,
  anon_sym_BANG_EQ = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_GT_EQ = 32,
  aux_sym_conditional_token1 = 33,
  aux_sym_conditional_token2 = 34,
  anon_sym_AMP_AMP = 35,
  anon_sym_PIPE_PIPE = 36,
  sym_con_else = 37,
  sym_function_call = 38,
  sym_loop = 39,
  sym_script_file = 40,
  sym_script_name_declare = 41,
  sym_script_declarer = 42,
  sym_script_body = 43,
  sym__top_level_items = 44,
  sym_var_declare = 45,
  sym__type = 46,
  sym_int_type = 47,
  sym_float_type = 48,
  sym_string_type = 49,
  sym_array_type = 50,
  sym_block = 51,
  sym_body_repeat = 52,
  sym_body = 53,
  sym_statement = 54,
  sym_set_statement = 55,
  sym_let_statement = 56,
  sym_variable = 57,
  sym_quest_variable = 58,
  sym_right_hand = 59,
  sym_literal = 60,
  sym_interpreted = 61,
  sym_quest_reference = 62,
  sym_array_var = 63,
  sym_no_parenthetical = 64,
  sym_parenthetical = 65,
  sym_equality = 66,
  sym_conditional = 67,
  sym_and_or = 68,
  aux_sym_script_body_repeat1 = 69,
  aux_sym_body_repeat_repeat1 = 70,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_script_declarer_token1] = "scn",
  [aux_sym_script_declarer_token2] = "scriptname",
  [sym_identifier] = "identifier",
  [aux_sym_int_type_token1] = "int",
  [aux_sym_int_type_token2] = "short",
  [aux_sym_int_type_token3] = "long",
  [aux_sym_float_type_token1] = "float",
  [aux_sym_string_type_token1] = "string_var",
  [aux_sym_array_type_token1] = "array_var",
  [aux_sym_block_token1] = "begin",
  [aux_sym_block_token2] = "end",
  [aux_sym_set_statement_token1] = "set",
  [aux_sym_set_statement_token2] = "to",
  [aux_sym_let_statement_token1] = "let",
  [anon_sym_COLON_EQ] = ":=",
  [aux_sym_quest_variable_token1] = "quest_variable_token1",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_literal_token2] = "literal_token2",
  [aux_sym_literal_token3] = "literal_token3",
  [aux_sym_literal_token4] = "literal_token4",
  [aux_sym_literal_token5] = "literal_token5",
  [sym_functions] = "functions",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_conditional_token1] = "if",
  [aux_sym_conditional_token2] = "endif",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_con_else] = "con_else",
  [sym_function_call] = "function_call",
  [sym_loop] = "loop",
  [sym_script_file] = "script_file",
  [sym_script_name_declare] = "script_name_declare",
  [sym_script_declarer] = "script_declarer",
  [sym_script_body] = "script_body",
  [sym__top_level_items] = "_top_level_items",
  [sym_var_declare] = "var_declare",
  [sym__type] = "_type",
  [sym_int_type] = "int_type",
  [sym_float_type] = "float_type",
  [sym_string_type] = "string_type",
  [sym_array_type] = "array_type",
  [sym_block] = "block",
  [sym_body_repeat] = "body_repeat",
  [sym_body] = "body",
  [sym_statement] = "statement",
  [sym_set_statement] = "set_statement",
  [sym_let_statement] = "let_statement",
  [sym_variable] = "variable",
  [sym_quest_variable] = "quest_variable",
  [sym_right_hand] = "right_hand",
  [sym_literal] = "literal",
  [sym_interpreted] = "interpreted",
  [sym_quest_reference] = "quest_reference",
  [sym_array_var] = "array_var",
  [sym_no_parenthetical] = "no_parenthetical",
  [sym_parenthetical] = "parenthetical",
  [sym_equality] = "equality",
  [sym_conditional] = "conditional",
  [sym_and_or] = "and_or",
  [aux_sym_script_body_repeat1] = "script_body_repeat1",
  [aux_sym_body_repeat_repeat1] = "body_repeat_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_script_declarer_token1] = aux_sym_script_declarer_token1,
  [aux_sym_script_declarer_token2] = aux_sym_script_declarer_token2,
  [sym_identifier] = sym_identifier,
  [aux_sym_int_type_token1] = aux_sym_int_type_token1,
  [aux_sym_int_type_token2] = aux_sym_int_type_token2,
  [aux_sym_int_type_token3] = aux_sym_int_type_token3,
  [aux_sym_float_type_token1] = aux_sym_float_type_token1,
  [aux_sym_string_type_token1] = aux_sym_string_type_token1,
  [aux_sym_array_type_token1] = aux_sym_array_type_token1,
  [aux_sym_block_token1] = aux_sym_block_token1,
  [aux_sym_block_token2] = aux_sym_block_token2,
  [aux_sym_set_statement_token1] = aux_sym_set_statement_token1,
  [aux_sym_set_statement_token2] = aux_sym_set_statement_token2,
  [aux_sym_let_statement_token1] = aux_sym_let_statement_token1,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [aux_sym_quest_variable_token1] = aux_sym_quest_variable_token1,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
  [aux_sym_literal_token3] = aux_sym_literal_token3,
  [aux_sym_literal_token4] = aux_sym_literal_token4,
  [aux_sym_literal_token5] = aux_sym_literal_token5,
  [sym_functions] = sym_functions,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [aux_sym_conditional_token1] = aux_sym_conditional_token1,
  [aux_sym_conditional_token2] = aux_sym_conditional_token2,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_con_else] = sym_con_else,
  [sym_function_call] = sym_function_call,
  [sym_loop] = sym_loop,
  [sym_script_file] = sym_script_file,
  [sym_script_name_declare] = sym_script_name_declare,
  [sym_script_declarer] = sym_script_declarer,
  [sym_script_body] = sym_script_body,
  [sym__top_level_items] = sym__top_level_items,
  [sym_var_declare] = sym_var_declare,
  [sym__type] = sym__type,
  [sym_int_type] = sym_int_type,
  [sym_float_type] = sym_float_type,
  [sym_string_type] = sym_string_type,
  [sym_array_type] = sym_array_type,
  [sym_block] = sym_block,
  [sym_body_repeat] = sym_body_repeat,
  [sym_body] = sym_body,
  [sym_statement] = sym_statement,
  [sym_set_statement] = sym_set_statement,
  [sym_let_statement] = sym_let_statement,
  [sym_variable] = sym_variable,
  [sym_quest_variable] = sym_quest_variable,
  [sym_right_hand] = sym_right_hand,
  [sym_literal] = sym_literal,
  [sym_interpreted] = sym_interpreted,
  [sym_quest_reference] = sym_quest_reference,
  [sym_array_var] = sym_array_var,
  [sym_no_parenthetical] = sym_no_parenthetical,
  [sym_parenthetical] = sym_parenthetical,
  [sym_equality] = sym_equality,
  [sym_conditional] = sym_conditional,
  [sym_and_or] = sym_and_or,
  [aux_sym_script_body_repeat1] = aux_sym_script_body_repeat1,
  [aux_sym_body_repeat_repeat1] = aux_sym_body_repeat_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_script_declarer_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_declarer_token2] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_int_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_array_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_let_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quest_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_functions] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_conditional_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_conditional_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_con_else] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_script_file] = {
    .visible = true,
    .named = true,
  },
  [sym_script_name_declare] = {
    .visible = true,
    .named = true,
  },
  [sym_script_declarer] = {
    .visible = true,
    .named = true,
  },
  [sym_script_body] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_items] = {
    .visible = false,
    .named = true,
  },
  [sym_var_declare] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_int_type] = {
    .visible = true,
    .named = true,
  },
  [sym_float_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_body_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_quest_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_right_hand] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_interpreted] = {
    .visible = true,
    .named = true,
  },
  [sym_quest_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_array_var] = {
    .visible = true,
    .named = true,
  },
  [sym_no_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_equality] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_and_or] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_array = 1,
  field_array_var = 2,
  field_block_mode = 3,
  field_block_type = 4,
  field_body = 5,
  field_conditional = 6,
  field_declaration = 7,
  field_function = 8,
  field_function_call = 9,
  field_function_reference = 10,
  field_key = 11,
  field_let = 12,
  field_parenthetical = 13,
  field_plain_var = 14,
  field_quest_reference = 15,
  field_quest_var = 16,
  field_script_name = 17,
  field_set = 18,
  field_statement = 19,
  field_type = 20,
  field_variable = 21,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_array_var] = "array_var",
  [field_block_mode] = "block_mode",
  [field_block_type] = "block_type",
  [field_body] = "body",
  [field_conditional] = "conditional",
  [field_declaration] = "declaration",
  [field_function] = "function",
  [field_function_call] = "function_call",
  [field_function_reference] = "function_reference",
  [field_key] = "key",
  [field_let] = "let",
  [field_parenthetical] = "parenthetical",
  [field_plain_var] = "plain_var",
  [field_quest_reference] = "quest_reference",
  [field_quest_var] = "quest_var",
  [field_script_name] = "script_name",
  [field_set] = "set",
  [field_statement] = "statement",
  [field_type] = "type",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 4},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 1},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 1},
  [17] = {.index = 21, .length = 1},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 1},
  [20] = {.index = 25, .length = 1},
  [21] = {.index = 26, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_block_mode, 0, .inherited = true},
    {field_declaration, 0, .inherited = true},
  [2] =
    {field_declaration, 0},
  [3] =
    {field_block_mode, 0},
  [4] =
    {field_script_name, 1},
  [5] =
    {field_type, 0},
    {field_variable, 1},
  [7] =
    {field_block_mode, 0, .inherited = true},
    {field_block_mode, 1, .inherited = true},
    {field_declaration, 0, .inherited = true},
    {field_declaration, 1, .inherited = true},
  [11] =
    {field_function_call, 0},
  [12] =
    {field_statement, 0},
  [13] =
    {field_set, 0},
  [14] =
    {field_let, 0},
  [15] =
    {field_conditional, 0},
  [16] =
    {field_plain_var, 0},
  [17] =
    {field_quest_var, 0},
  [18] =
    {field_array_var, 0},
  [19] =
    {field_function_reference, 0},
  [20] =
    {field_function, 0},
  [21] =
    {field_quest_reference, 0},
  [22] =
    {field_block_type, 1},
    {field_body, 2},
  [24] =
    {field_variable, 1},
  [25] =
    {field_parenthetical, 0},
  [26] =
    {field_array, 0},
    {field_key, 2},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 12:
      if (lookahead == 'j') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'j') ADVANCE(10);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'k') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 18:
      if (lookahead == '|') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 33:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 35:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 37:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 68:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 69:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 70:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 72:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 73:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 74:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_script_declarer_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_script_declarer_token2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '.') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_int_type_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_int_type_token2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_int_type_token3);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_float_type_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_type_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_block_token2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_quest_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '.') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (lookahead == '.') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_literal_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_literal_token5);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_conditional_token2);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_con_else);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_function_call);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_loop);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 70},
  [94] = {.lex_state = 70},
  [95] = {.lex_state = 70},
  [96] = {.lex_state = 70},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 70},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 70},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 70},
  [110] = {.lex_state = 70},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 70},
  [114] = {.lex_state = 70},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 70},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 70},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_script_declarer_token1] = ACTIONS(1),
    [aux_sym_script_declarer_token2] = ACTIONS(1),
    [aux_sym_int_type_token1] = ACTIONS(1),
    [aux_sym_int_type_token2] = ACTIONS(1),
    [aux_sym_int_type_token3] = ACTIONS(1),
    [aux_sym_float_type_token1] = ACTIONS(1),
    [aux_sym_string_type_token1] = ACTIONS(1),
    [aux_sym_array_type_token1] = ACTIONS(1),
    [aux_sym_block_token1] = ACTIONS(1),
    [aux_sym_block_token2] = ACTIONS(1),
    [aux_sym_set_statement_token1] = ACTIONS(1),
    [aux_sym_set_statement_token2] = ACTIONS(1),
    [aux_sym_let_statement_token1] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [aux_sym_literal_token2] = ACTIONS(1),
    [aux_sym_literal_token3] = ACTIONS(1),
    [aux_sym_literal_token4] = ACTIONS(1),
    [aux_sym_literal_token5] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_conditional_token1] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [sym_con_else] = ACTIONS(1),
    [sym_function_call] = ACTIONS(1),
    [sym_loop] = ACTIONS(1),
  },
  [1] = {
    [sym_script_file] = STATE(122),
    [sym_script_name_declare] = STATE(16),
    [sym_script_declarer] = STATE(121),
    [aux_sym_script_declarer_token1] = ACTIONS(3),
    [aux_sym_script_declarer_token2] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      aux_sym_set_statement_token1,
    ACTIONS(7), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_conditional_token1,
    ACTIONS(15), 1,
      aux_sym_conditional_token2,
    ACTIONS(19), 1,
      sym_con_else,
    ACTIONS(21), 1,
      sym_function_call,
    ACTIONS(23), 1,
      sym_loop,
    STATE(34), 1,
      sym_and_or,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    ACTIONS(11), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(17), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(32), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    ACTIONS(9), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [55] = 16,
    ACTIONS(5), 1,
      aux_sym_set_statement_token1,
    ACTIONS(7), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_conditional_token1,
    ACTIONS(21), 1,
      sym_function_call,
    ACTIONS(23), 1,
      sym_loop,
    ACTIONS(25), 1,
      aux_sym_conditional_token2,
    ACTIONS(27), 1,
      sym_con_else,
    STATE(29), 1,
      sym_and_or,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    ACTIONS(11), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(17), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(28), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    ACTIONS(9), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [110] = 13,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(37), 1,
      sym_functions,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_quest_reference,
    STATE(72), 1,
      sym_no_parenthetical,
    STATE(75), 1,
      sym_parenthetical,
    STATE(76), 1,
      sym_right_hand,
    STATE(79), 1,
      sym_quest_variable,
    STATE(83), 1,
      sym_array_var,
    ACTIONS(33), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(35), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(78), 3,
      sym_variable,
      sym_literal,
      sym_interpreted,
  [155] = 13,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(37), 1,
      sym_functions,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_quest_reference,
    STATE(72), 1,
      sym_no_parenthetical,
    STATE(75), 1,
      sym_parenthetical,
    STATE(79), 1,
      sym_quest_variable,
    STATE(83), 1,
      sym_array_var,
    STATE(88), 1,
      sym_right_hand,
    ACTIONS(33), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(35), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(78), 3,
      sym_variable,
      sym_literal,
      sym_interpreted,
  [200] = 2,
    ACTIONS(43), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(41), 15,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      anon_sym_COLON_EQ,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [223] = 2,
    ACTIONS(47), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(45), 15,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      anon_sym_COLON_EQ,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [246] = 13,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(57), 1,
      sym_functions,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(43), 1,
      sym_quest_reference,
    STATE(53), 1,
      sym_parenthetical,
    STATE(62), 1,
      sym_right_hand,
    STATE(63), 1,
      sym_no_parenthetical,
    ACTIONS(53), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(55), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(59), 3,
      sym_variable,
      sym_literal,
      sym_interpreted,
  [291] = 13,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(57), 1,
      sym_functions,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(43), 1,
      sym_quest_reference,
    STATE(53), 1,
      sym_parenthetical,
    STATE(63), 1,
      sym_no_parenthetical,
    STATE(64), 1,
      sym_right_hand,
    ACTIONS(53), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(55), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(59), 3,
      sym_variable,
      sym_literal,
      sym_interpreted,
  [336] = 2,
    ACTIONS(63), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(61), 15,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      anon_sym_COLON_EQ,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [359] = 11,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym_float_type_token1,
    ACTIONS(73), 1,
      aux_sym_string_type_token1,
    ACTIONS(76), 1,
      aux_sym_array_type_token1,
    ACTIONS(79), 1,
      aux_sym_block_token1,
    STATE(11), 1,
      aux_sym_script_body_repeat1,
    STATE(45), 1,
      sym_block,
    STATE(46), 1,
      sym__top_level_items,
    STATE(49), 1,
      sym_var_declare,
    ACTIONS(67), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(106), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [399] = 12,
    ACTIONS(37), 1,
      sym_functions,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      aux_sym_quest_variable_token1,
    STATE(2), 1,
      sym_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(33), 1,
      sym_quest_reference,
    ACTIONS(33), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(22), 2,
      sym_parenthetical,
      sym_equality,
    STATE(90), 2,
      sym_literal,
      sym_interpreted,
    ACTIONS(35), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [441] = 11,
    ACTIONS(37), 1,
      sym_functions,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      aux_sym_quest_variable_token1,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(33), 1,
      sym_quest_reference,
    ACTIONS(33), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(112), 2,
      sym_parenthetical,
      sym_equality,
    ACTIONS(35), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(52), 3,
      sym_variable,
      sym_literal,
      sym_interpreted,
  [481] = 11,
    ACTIONS(37), 1,
      sym_functions,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      aux_sym_quest_variable_token1,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(33), 1,
      sym_quest_reference,
    ACTIONS(33), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(111), 2,
      sym_parenthetical,
      sym_equality,
    ACTIONS(35), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(54), 3,
      sym_variable,
      sym_literal,
      sym_interpreted,
  [521] = 12,
    ACTIONS(37), 1,
      sym_functions,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      aux_sym_quest_variable_token1,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(33), 1,
      sym_quest_reference,
    STATE(35), 1,
      sym_variable,
    ACTIONS(33), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(65), 2,
      sym_parenthetical,
      sym_equality,
    STATE(90), 2,
      sym_literal,
      sym_interpreted,
    ACTIONS(35), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [563] = 11,
    ACTIONS(86), 1,
      aux_sym_float_type_token1,
    ACTIONS(88), 1,
      aux_sym_string_type_token1,
    ACTIONS(90), 1,
      aux_sym_array_type_token1,
    ACTIONS(92), 1,
      aux_sym_block_token1,
    STATE(17), 1,
      aux_sym_script_body_repeat1,
    STATE(45), 1,
      sym_block,
    STATE(46), 1,
      sym__top_level_items,
    STATE(49), 1,
      sym_var_declare,
    STATE(108), 1,
      sym_script_body,
    ACTIONS(84), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(106), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [603] = 11,
    ACTIONS(86), 1,
      aux_sym_float_type_token1,
    ACTIONS(88), 1,
      aux_sym_string_type_token1,
    ACTIONS(90), 1,
      aux_sym_array_type_token1,
    ACTIONS(92), 1,
      aux_sym_block_token1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_script_body_repeat1,
    STATE(45), 1,
      sym_block,
    STATE(46), 1,
      sym__top_level_items,
    STATE(49), 1,
      sym_var_declare,
    ACTIONS(84), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(106), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [643] = 3,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(96), 13,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [667] = 12,
    ACTIONS(37), 1,
      sym_functions,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      aux_sym_quest_variable_token1,
    STATE(3), 1,
      sym_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(33), 1,
      sym_quest_reference,
    ACTIONS(33), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(21), 2,
      sym_parenthetical,
      sym_equality,
    STATE(90), 2,
      sym_literal,
      sym_interpreted,
    ACTIONS(35), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [709] = 4,
    ACTIONS(110), 1,
      sym_function_call,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(104), 5,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(102), 8,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [734] = 14,
    ACTIONS(5), 1,
      aux_sym_set_statement_token1,
    ACTIONS(7), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_conditional_token1,
    ACTIONS(21), 1,
      sym_function_call,
    ACTIONS(23), 1,
      sym_loop,
    ACTIONS(25), 1,
      aux_sym_conditional_token2,
    ACTIONS(27), 1,
      sym_con_else,
    STATE(29), 1,
      sym_and_or,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    ACTIONS(17), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(28), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [779] = 14,
    ACTIONS(5), 1,
      aux_sym_set_statement_token1,
    ACTIONS(7), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_conditional_token1,
    ACTIONS(15), 1,
      aux_sym_conditional_token2,
    ACTIONS(19), 1,
      sym_con_else,
    ACTIONS(21), 1,
      sym_function_call,
    ACTIONS(23), 1,
      sym_loop,
    STATE(34), 1,
      sym_and_or,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    ACTIONS(17), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(32), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [824] = 9,
    ACTIONS(37), 1,
      sym_functions,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(82), 1,
      aux_sym_quest_variable_token1,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(33), 1,
      sym_quest_reference,
    ACTIONS(33), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(35), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(39), 3,
      sym_variable,
      sym_literal,
      sym_interpreted,
  [857] = 2,
    ACTIONS(114), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(112), 11,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      sym_loop,
  [876] = 9,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(57), 1,
      sym_functions,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(43), 1,
      sym_quest_reference,
    ACTIONS(53), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(55), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(39), 3,
      sym_variable,
      sym_literal,
      sym_interpreted,
  [909] = 11,
    ACTIONS(116), 1,
      aux_sym_set_statement_token1,
    ACTIONS(119), 1,
      aux_sym_let_statement_token1,
    ACTIONS(122), 1,
      aux_sym_conditional_token1,
    ACTIONS(127), 1,
      sym_function_call,
    ACTIONS(130), 1,
      sym_loop,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    ACTIONS(125), 2,
      aux_sym_conditional_token2,
      sym_con_else,
    STATE(26), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [945] = 2,
    ACTIONS(135), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(133), 10,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      sym_loop,
  [963] = 12,
    ACTIONS(5), 1,
      aux_sym_set_statement_token1,
    ACTIONS(7), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_conditional_token1,
    ACTIONS(21), 1,
      sym_function_call,
    ACTIONS(23), 1,
      sym_loop,
    ACTIONS(137), 1,
      aux_sym_conditional_token2,
    ACTIONS(139), 1,
      sym_con_else,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    STATE(26), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [1001] = 12,
    ACTIONS(5), 1,
      aux_sym_set_statement_token1,
    ACTIONS(7), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_conditional_token1,
    ACTIONS(21), 1,
      sym_function_call,
    ACTIONS(23), 1,
      sym_loop,
    ACTIONS(137), 1,
      aux_sym_conditional_token2,
    ACTIONS(139), 1,
      sym_con_else,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    STATE(31), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [1039] = 12,
    ACTIONS(5), 1,
      aux_sym_set_statement_token1,
    ACTIONS(7), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_conditional_token1,
    ACTIONS(21), 1,
      sym_function_call,
    ACTIONS(23), 1,
      sym_loop,
    ACTIONS(141), 1,
      aux_sym_conditional_token2,
    ACTIONS(143), 1,
      sym_con_else,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    STATE(26), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [1077] = 12,
    ACTIONS(5), 1,
      aux_sym_set_statement_token1,
    ACTIONS(7), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_conditional_token1,
    ACTIONS(21), 1,
      sym_function_call,
    ACTIONS(23), 1,
      sym_loop,
    ACTIONS(145), 1,
      aux_sym_conditional_token2,
    ACTIONS(147), 1,
      sym_con_else,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    STATE(26), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [1115] = 12,
    ACTIONS(5), 1,
      aux_sym_set_statement_token1,
    ACTIONS(7), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_conditional_token1,
    ACTIONS(21), 1,
      sym_function_call,
    ACTIONS(23), 1,
      sym_loop,
    ACTIONS(149), 1,
      aux_sym_conditional_token2,
    ACTIONS(151), 1,
      sym_con_else,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    STATE(26), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [1153] = 2,
    ACTIONS(155), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(153), 10,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      sym_loop,
  [1171] = 12,
    ACTIONS(5), 1,
      aux_sym_set_statement_token1,
    ACTIONS(7), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_conditional_token1,
    ACTIONS(21), 1,
      sym_function_call,
    ACTIONS(23), 1,
      sym_loop,
    ACTIONS(149), 1,
      aux_sym_conditional_token2,
    ACTIONS(151), 1,
      sym_con_else,
    STATE(51), 1,
      sym_statement,
    STATE(57), 1,
      sym_conditional,
    STATE(60), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_set_statement,
    STATE(30), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [1209] = 4,
    ACTIONS(159), 1,
      sym_function_call,
    ACTIONS(11), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(157), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1231] = 11,
    ACTIONS(161), 1,
      aux_sym_block_token2,
    ACTIONS(163), 1,
      aux_sym_set_statement_token1,
    ACTIONS(165), 1,
      aux_sym_let_statement_token1,
    ACTIONS(167), 1,
      aux_sym_conditional_token1,
    ACTIONS(169), 1,
      sym_function_call,
    ACTIONS(171), 1,
      sym_loop,
    STATE(70), 1,
      sym_conditional,
    STATE(71), 1,
      sym_statement,
    STATE(91), 1,
      sym_set_statement,
    STATE(92), 1,
      sym_let_statement,
    STATE(38), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [1266] = 11,
    ACTIONS(163), 1,
      aux_sym_set_statement_token1,
    ACTIONS(165), 1,
      aux_sym_let_statement_token1,
    ACTIONS(167), 1,
      aux_sym_conditional_token1,
    ACTIONS(169), 1,
      sym_function_call,
    ACTIONS(171), 1,
      sym_loop,
    STATE(70), 1,
      sym_conditional,
    STATE(71), 1,
      sym_statement,
    STATE(91), 1,
      sym_set_statement,
    STATE(92), 1,
      sym_let_statement,
    STATE(101), 1,
      sym_body_repeat,
    STATE(36), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [1301] = 11,
    ACTIONS(125), 1,
      aux_sym_block_token2,
    ACTIONS(173), 1,
      aux_sym_set_statement_token1,
    ACTIONS(176), 1,
      aux_sym_let_statement_token1,
    ACTIONS(179), 1,
      aux_sym_conditional_token1,
    ACTIONS(182), 1,
      sym_function_call,
    ACTIONS(185), 1,
      sym_loop,
    STATE(70), 1,
      sym_conditional,
    STATE(71), 1,
      sym_statement,
    STATE(91), 1,
      sym_set_statement,
    STATE(92), 1,
      sym_let_statement,
    STATE(38), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [1336] = 2,
    ACTIONS(190), 1,
      sym_function_call,
    ACTIONS(188), 9,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [1351] = 2,
    ACTIONS(194), 1,
      sym_function_call,
    ACTIONS(192), 9,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [1366] = 2,
    ACTIONS(107), 1,
      sym_function_call,
    ACTIONS(104), 8,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [1380] = 2,
    ACTIONS(114), 1,
      sym_function_call,
    ACTIONS(112), 8,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [1394] = 2,
    ACTIONS(155), 1,
      sym_function_call,
    ACTIONS(153), 8,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [1408] = 2,
    ACTIONS(135), 1,
      sym_function_call,
    ACTIONS(133), 8,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_con_else,
      sym_loop,
  [1422] = 1,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1433] = 1,
    ACTIONS(198), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1444] = 1,
    ACTIONS(200), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1455] = 1,
    ACTIONS(202), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1466] = 1,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1477] = 2,
    ACTIONS(208), 1,
      sym_function_call,
    ACTIONS(206), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1489] = 2,
    ACTIONS(212), 1,
      sym_function_call,
    ACTIONS(210), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1501] = 3,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(216), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1515] = 2,
    ACTIONS(222), 1,
      sym_function_call,
    ACTIONS(220), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1527] = 3,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(216), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1541] = 3,
    ACTIONS(100), 1,
      sym_function_call,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1555] = 1,
    ACTIONS(228), 7,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1565] = 2,
    ACTIONS(232), 1,
      sym_function_call,
    ACTIONS(230), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1577] = 2,
    ACTIONS(236), 1,
      sym_function_call,
    ACTIONS(234), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1589] = 2,
    ACTIONS(240), 1,
      sym_function_call,
    ACTIONS(238), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1601] = 2,
    ACTIONS(244), 1,
      sym_function_call,
    ACTIONS(242), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1613] = 2,
    ACTIONS(248), 1,
      sym_function_call,
    ACTIONS(246), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1625] = 2,
    ACTIONS(252), 1,
      sym_function_call,
    ACTIONS(250), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1637] = 2,
    ACTIONS(256), 1,
      sym_function_call,
    ACTIONS(254), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1649] = 2,
    ACTIONS(260), 1,
      sym_function_call,
    ACTIONS(258), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1661] = 2,
    ACTIONS(159), 1,
      sym_function_call,
    ACTIONS(157), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1673] = 2,
    ACTIONS(264), 1,
      sym_function_call,
    ACTIONS(262), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1685] = 2,
    ACTIONS(268), 1,
      sym_function_call,
    ACTIONS(266), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1697] = 2,
    ACTIONS(272), 1,
      sym_function_call,
    ACTIONS(270), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1709] = 2,
    ACTIONS(276), 1,
      sym_function_call,
    ACTIONS(274), 6,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      aux_sym_conditional_token2,
      sym_con_else,
      sym_loop,
  [1721] = 2,
    ACTIONS(232), 1,
      sym_function_call,
    ACTIONS(230), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1732] = 2,
    ACTIONS(212), 1,
      sym_function_call,
    ACTIONS(210), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1743] = 2,
    ACTIONS(256), 1,
      sym_function_call,
    ACTIONS(254), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1754] = 2,
    ACTIONS(208), 1,
      sym_function_call,
    ACTIONS(206), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1765] = 2,
    ACTIONS(268), 1,
      sym_function_call,
    ACTIONS(266), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1776] = 2,
    ACTIONS(222), 1,
      sym_function_call,
    ACTIONS(220), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1787] = 2,
    ACTIONS(260), 1,
      sym_function_call,
    ACTIONS(258), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1798] = 2,
    ACTIONS(264), 1,
      sym_function_call,
    ACTIONS(262), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1809] = 2,
    ACTIONS(240), 1,
      sym_function_call,
    ACTIONS(238), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1820] = 2,
    ACTIONS(47), 1,
      sym_function_call,
    ACTIONS(45), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1831] = 3,
    STATE(115), 1,
      sym_literal,
    ACTIONS(33), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(35), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1844] = 2,
    ACTIONS(43), 1,
      sym_function_call,
    ACTIONS(41), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1855] = 2,
    ACTIONS(272), 1,
      sym_function_call,
    ACTIONS(270), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1866] = 2,
    ACTIONS(63), 1,
      sym_function_call,
    ACTIONS(61), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1877] = 2,
    ACTIONS(194), 1,
      sym_function_call,
    ACTIONS(192), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1888] = 2,
    ACTIONS(276), 1,
      sym_function_call,
    ACTIONS(274), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1899] = 2,
    ACTIONS(107), 1,
      sym_function_call,
    ACTIONS(104), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1910] = 2,
    ACTIONS(236), 1,
      sym_function_call,
    ACTIONS(234), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1921] = 2,
    ACTIONS(252), 1,
      sym_function_call,
    ACTIONS(250), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1932] = 3,
    STATE(103), 1,
      sym_literal,
    ACTIONS(33), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(35), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1945] = 2,
    ACTIONS(11), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1956] = 2,
    ACTIONS(248), 1,
      sym_function_call,
    ACTIONS(246), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1967] = 2,
    ACTIONS(244), 1,
      sym_function_call,
    ACTIONS(242), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1978] = 5,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      aux_sym_quest_variable_token1,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(99), 1,
      sym_variable,
  [1994] = 5,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      aux_sym_quest_variable_token1,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(107), 1,
      sym_variable,
  [2010] = 5,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      aux_sym_quest_variable_token1,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(120), 1,
      sym_variable,
  [2026] = 5,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      aux_sym_quest_variable_token1,
    STATE(7), 1,
      sym_quest_variable,
    STATE(10), 1,
      sym_array_var,
    STATE(119), 1,
      sym_variable,
  [2042] = 2,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [2050] = 1,
    ACTIONS(102), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [2055] = 1,
    ACTIONS(282), 1,
      anon_sym_COLON_EQ,
  [2059] = 1,
    ACTIONS(149), 1,
      aux_sym_conditional_token2,
  [2063] = 1,
    ACTIONS(284), 1,
      aux_sym_block_token2,
  [2067] = 1,
    ACTIONS(137), 1,
      aux_sym_conditional_token2,
  [2071] = 1,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
  [2075] = 1,
    ACTIONS(288), 1,
      sym_identifier,
  [2079] = 1,
    ACTIONS(290), 1,
      aux_sym_conditional_token2,
  [2083] = 1,
    ACTIONS(292), 1,
      sym_identifier,
  [2087] = 1,
    ACTIONS(294), 1,
      aux_sym_set_statement_token2,
  [2091] = 1,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
  [2095] = 1,
    ACTIONS(298), 1,
      sym_identifier,
  [2099] = 1,
    ACTIONS(300), 1,
      sym_identifier,
  [2103] = 1,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [2107] = 1,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [2111] = 1,
    ACTIONS(302), 1,
      sym_identifier,
  [2115] = 1,
    ACTIONS(304), 1,
      sym_identifier,
  [2119] = 1,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
  [2123] = 1,
    ACTIONS(141), 1,
      aux_sym_conditional_token2,
  [2127] = 1,
    ACTIONS(308), 1,
      sym_identifier,
  [2131] = 1,
    ACTIONS(310), 1,
      aux_sym_conditional_token2,
  [2135] = 1,
    ACTIONS(312), 1,
      aux_sym_set_statement_token2,
  [2139] = 1,
    ACTIONS(314), 1,
      anon_sym_COLON_EQ,
  [2143] = 1,
    ACTIONS(316), 1,
      sym_identifier,
  [2147] = 1,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
  [2151] = 1,
    ACTIONS(145), 1,
      aux_sym_conditional_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 155,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 291,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 441,
  [SMALL_STATE(14)] = 481,
  [SMALL_STATE(15)] = 521,
  [SMALL_STATE(16)] = 563,
  [SMALL_STATE(17)] = 603,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 667,
  [SMALL_STATE(20)] = 709,
  [SMALL_STATE(21)] = 734,
  [SMALL_STATE(22)] = 779,
  [SMALL_STATE(23)] = 824,
  [SMALL_STATE(24)] = 857,
  [SMALL_STATE(25)] = 876,
  [SMALL_STATE(26)] = 909,
  [SMALL_STATE(27)] = 945,
  [SMALL_STATE(28)] = 963,
  [SMALL_STATE(29)] = 1001,
  [SMALL_STATE(30)] = 1039,
  [SMALL_STATE(31)] = 1077,
  [SMALL_STATE(32)] = 1115,
  [SMALL_STATE(33)] = 1153,
  [SMALL_STATE(34)] = 1171,
  [SMALL_STATE(35)] = 1209,
  [SMALL_STATE(36)] = 1231,
  [SMALL_STATE(37)] = 1266,
  [SMALL_STATE(38)] = 1301,
  [SMALL_STATE(39)] = 1336,
  [SMALL_STATE(40)] = 1351,
  [SMALL_STATE(41)] = 1366,
  [SMALL_STATE(42)] = 1380,
  [SMALL_STATE(43)] = 1394,
  [SMALL_STATE(44)] = 1408,
  [SMALL_STATE(45)] = 1422,
  [SMALL_STATE(46)] = 1433,
  [SMALL_STATE(47)] = 1444,
  [SMALL_STATE(48)] = 1455,
  [SMALL_STATE(49)] = 1466,
  [SMALL_STATE(50)] = 1477,
  [SMALL_STATE(51)] = 1489,
  [SMALL_STATE(52)] = 1501,
  [SMALL_STATE(53)] = 1515,
  [SMALL_STATE(54)] = 1527,
  [SMALL_STATE(55)] = 1541,
  [SMALL_STATE(56)] = 1555,
  [SMALL_STATE(57)] = 1565,
  [SMALL_STATE(58)] = 1577,
  [SMALL_STATE(59)] = 1589,
  [SMALL_STATE(60)] = 1601,
  [SMALL_STATE(61)] = 1613,
  [SMALL_STATE(62)] = 1625,
  [SMALL_STATE(63)] = 1637,
  [SMALL_STATE(64)] = 1649,
  [SMALL_STATE(65)] = 1661,
  [SMALL_STATE(66)] = 1673,
  [SMALL_STATE(67)] = 1685,
  [SMALL_STATE(68)] = 1697,
  [SMALL_STATE(69)] = 1709,
  [SMALL_STATE(70)] = 1721,
  [SMALL_STATE(71)] = 1732,
  [SMALL_STATE(72)] = 1743,
  [SMALL_STATE(73)] = 1754,
  [SMALL_STATE(74)] = 1765,
  [SMALL_STATE(75)] = 1776,
  [SMALL_STATE(76)] = 1787,
  [SMALL_STATE(77)] = 1798,
  [SMALL_STATE(78)] = 1809,
  [SMALL_STATE(79)] = 1820,
  [SMALL_STATE(80)] = 1831,
  [SMALL_STATE(81)] = 1844,
  [SMALL_STATE(82)] = 1855,
  [SMALL_STATE(83)] = 1866,
  [SMALL_STATE(84)] = 1877,
  [SMALL_STATE(85)] = 1888,
  [SMALL_STATE(86)] = 1899,
  [SMALL_STATE(87)] = 1910,
  [SMALL_STATE(88)] = 1921,
  [SMALL_STATE(89)] = 1932,
  [SMALL_STATE(90)] = 1945,
  [SMALL_STATE(91)] = 1956,
  [SMALL_STATE(92)] = 1967,
  [SMALL_STATE(93)] = 1978,
  [SMALL_STATE(94)] = 1994,
  [SMALL_STATE(95)] = 2010,
  [SMALL_STATE(96)] = 2026,
  [SMALL_STATE(97)] = 2042,
  [SMALL_STATE(98)] = 2050,
  [SMALL_STATE(99)] = 2055,
  [SMALL_STATE(100)] = 2059,
  [SMALL_STATE(101)] = 2063,
  [SMALL_STATE(102)] = 2067,
  [SMALL_STATE(103)] = 2071,
  [SMALL_STATE(104)] = 2075,
  [SMALL_STATE(105)] = 2079,
  [SMALL_STATE(106)] = 2083,
  [SMALL_STATE(107)] = 2087,
  [SMALL_STATE(108)] = 2091,
  [SMALL_STATE(109)] = 2095,
  [SMALL_STATE(110)] = 2099,
  [SMALL_STATE(111)] = 2103,
  [SMALL_STATE(112)] = 2107,
  [SMALL_STATE(113)] = 2111,
  [SMALL_STATE(114)] = 2115,
  [SMALL_STATE(115)] = 2119,
  [SMALL_STATE(116)] = 2123,
  [SMALL_STATE(117)] = 2127,
  [SMALL_STATE(118)] = 2131,
  [SMALL_STATE(119)] = 2135,
  [SMALL_STATE(120)] = 2139,
  [SMALL_STATE(121)] = 2143,
  [SMALL_STATE(122)] = 2147,
  [SMALL_STATE(123)] = 2151,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_var, 4, .production_id = 21),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_var, 4, .production_id = 21),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 13),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 13),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 14),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 14),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(117),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(114),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(113),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(110),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(109),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 12),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 12),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_variable, 1),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quest_variable, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(94),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(93),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(12),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(68),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(69),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 16),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 16),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 17),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 17),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_or, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_or, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_repeat, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(96),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(95),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(19),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(82),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(85),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 1, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 18),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 8),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 8),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1, .production_id = 20),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1, .production_id = 20),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name_declare, 2, .production_id = 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 11),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 11),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_parenthetical, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_no_parenthetical, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 10),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 10),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 9),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 9),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 19),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 19),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 19),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 19),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 7),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 7),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarer, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_type, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_obse(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
