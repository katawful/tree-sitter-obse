#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 24

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
  sym_declarator = 64,
  sym_parenthetical = 65,
  sym_equality = 66,
  sym_contained = 67,
  sym_conditional = 68,
  sym_and_or = 69,
  aux_sym_script_body_repeat1 = 70,
  aux_sym_body_repeat_repeat1 = 71,
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
  [sym_declarator] = "declarator",
  [sym_parenthetical] = "parenthetical",
  [sym_equality] = "equality",
  [sym_contained] = "contained",
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
  [sym_declarator] = sym_declarator,
  [sym_parenthetical] = sym_parenthetical,
  [sym_equality] = sym_equality,
  [sym_contained] = sym_contained,
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
  [sym_declarator] = {
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
  [sym_contained] = {
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
  field_interpreted = 11,
  field_key = 12,
  field_let = 13,
  field_literal = 14,
  field_plain_var = 15,
  field_quest_reference = 16,
  field_quest_var = 17,
  field_script_name = 18,
  field_set = 19,
  field_statement = 20,
  field_type = 21,
  field_variable = 22,
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
  [field_interpreted] = "interpreted",
  [field_key] = "key",
  [field_let] = "let",
  [field_literal] = "literal",
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
  [18] = {.index = 22, .length = 1},
  [19] = {.index = 23, .length = 1},
  [20] = {.index = 24, .length = 1},
  [21] = {.index = 25, .length = 2},
  [22] = {.index = 27, .length = 1},
  [23] = {.index = 28, .length = 2},
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
    {field_variable, 0},
  [22] =
    {field_literal, 0},
  [23] =
    {field_interpreted, 0},
  [24] =
    {field_quest_reference, 0},
  [25] =
    {field_block_type, 1},
    {field_body, 2},
  [27] =
    {field_variable, 1},
  [28] =
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
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(48);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(30);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 7:
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == 'j') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'j') ADVANCE(10);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'k') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == '|') ADVANCE(109);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(106);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 32:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 69:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 70:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 71:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_script_declarer_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_script_declarer_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_type_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_int_type_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_int_type_token3);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_float_type_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_type_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_block_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_quest_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_literal_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_literal_token5);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_conditional_token2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_con_else);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_function_call);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 112:
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 67},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 67},
  [97] = {.lex_state = 67},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 67},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 67},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 67},
  [113] = {.lex_state = 67},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 67},
  [116] = {.lex_state = 0},
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
    [sym_script_file] = STATE(116),
    [sym_script_name_declare] = STATE(13),
    [sym_script_declarer] = STATE(115),
    [aux_sym_script_declarer_token1] = ACTIONS(3),
    [aux_sym_script_declarer_token2] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_quest_reference,
    STATE(25), 1,
      sym_declarator,
    STATE(34), 1,
      sym_parenthetical,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(17), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(95), 3,
      sym_equality,
      sym_contained,
      sym_and_or,
  [55] = 16,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_quest_reference,
    STATE(25), 1,
      sym_declarator,
    STATE(34), 1,
      sym_parenthetical,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(17), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(104), 3,
      sym_equality,
      sym_contained,
      sym_and_or,
  [110] = 15,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_quest_reference,
    STATE(25), 1,
      sym_declarator,
    STATE(34), 1,
      sym_parenthetical,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(27), 2,
      sym_equality,
      sym_contained,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [160] = 16,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_quest_reference,
    STATE(34), 1,
      sym_parenthetical,
    STATE(44), 1,
      sym_contained,
    STATE(51), 1,
      sym_declarator,
    STATE(52), 1,
      sym_right_hand,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [212] = 15,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_quest_reference,
    STATE(25), 1,
      sym_declarator,
    STATE(34), 1,
      sym_parenthetical,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(26), 2,
      sym_equality,
      sym_contained,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [262] = 16,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(27), 1,
      sym_functions,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_right_hand,
    STATE(80), 1,
      sym_quest_variable,
    STATE(81), 1,
      sym_array_var,
    STATE(86), 1,
      sym_variable,
    STATE(87), 1,
      sym_literal,
    STATE(88), 1,
      sym_interpreted,
    STATE(89), 1,
      sym_quest_reference,
    STATE(90), 1,
      sym_parenthetical,
    STATE(92), 1,
      sym_declarator,
    STATE(93), 1,
      sym_contained,
    ACTIONS(23), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(25), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [314] = 16,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(27), 1,
      sym_functions,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_quest_variable,
    STATE(81), 1,
      sym_array_var,
    STATE(86), 1,
      sym_variable,
    STATE(87), 1,
      sym_literal,
    STATE(88), 1,
      sym_interpreted,
    STATE(89), 1,
      sym_quest_reference,
    STATE(90), 1,
      sym_parenthetical,
    STATE(91), 1,
      sym_right_hand,
    STATE(92), 1,
      sym_declarator,
    STATE(93), 1,
      sym_contained,
    ACTIONS(23), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(25), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [366] = 16,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_quest_reference,
    STATE(34), 1,
      sym_parenthetical,
    STATE(44), 1,
      sym_contained,
    STATE(51), 1,
      sym_declarator,
    STATE(57), 1,
      sym_right_hand,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [418] = 11,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_float_type_token1,
    ACTIONS(37), 1,
      aux_sym_string_type_token1,
    ACTIONS(39), 1,
      aux_sym_array_type_token1,
    ACTIONS(41), 1,
      aux_sym_block_token1,
    STATE(15), 1,
      aux_sym_script_body_repeat1,
    STATE(37), 1,
      sym__top_level_items,
    STATE(39), 1,
      sym_block,
    STATE(40), 1,
      sym_var_declare,
    ACTIONS(33), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(108), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [458] = 2,
    ACTIONS(45), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(43), 14,
      aux_sym_block_token2,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [480] = 2,
    ACTIONS(49), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(47), 14,
      aux_sym_block_token2,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [502] = 11,
    ACTIONS(35), 1,
      aux_sym_float_type_token1,
    ACTIONS(37), 1,
      aux_sym_string_type_token1,
    ACTIONS(39), 1,
      aux_sym_array_type_token1,
    ACTIONS(41), 1,
      aux_sym_block_token1,
    STATE(10), 1,
      aux_sym_script_body_repeat1,
    STATE(37), 1,
      sym__top_level_items,
    STATE(39), 1,
      sym_block,
    STATE(40), 1,
      sym_var_declare,
    STATE(105), 1,
      sym_script_body,
    ACTIONS(33), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(108), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [542] = 2,
    ACTIONS(53), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(51), 14,
      aux_sym_block_token2,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [564] = 11,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_float_type_token1,
    ACTIONS(63), 1,
      aux_sym_string_type_token1,
    ACTIONS(66), 1,
      aux_sym_array_type_token1,
    ACTIONS(69), 1,
      aux_sym_block_token1,
    STATE(15), 1,
      aux_sym_script_body_repeat1,
    STATE(37), 1,
      sym__top_level_items,
    STATE(39), 1,
      sym_block,
    STATE(40), 1,
      sym_var_declare,
    ACTIONS(57), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(108), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [604] = 3,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(72), 12,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [627] = 2,
    ACTIONS(80), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(78), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [648] = 2,
    ACTIONS(85), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(82), 12,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [668] = 2,
    ACTIONS(90), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(88), 12,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [688] = 2,
    ACTIONS(94), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(92), 12,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [708] = 2,
    ACTIONS(98), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(96), 12,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [728] = 2,
    ACTIONS(102), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(100), 12,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [748] = 2,
    ACTIONS(106), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(104), 12,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [768] = 12,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_quest_reference,
    STATE(35), 1,
      sym_declarator,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [808] = 4,
    ACTIONS(114), 1,
      sym_function_call,
    ACTIONS(112), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(110), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(108), 7,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [831] = 12,
    ACTIONS(116), 1,
      aux_sym_set_statement_token1,
    ACTIONS(118), 1,
      aux_sym_let_statement_token1,
    ACTIONS(120), 1,
      aux_sym_conditional_token1,
    ACTIONS(122), 1,
      sym_function_call,
    ACTIONS(124), 1,
      sym_loop,
    STATE(32), 1,
      sym_and_or,
    STATE(64), 1,
      sym_conditional,
    STATE(65), 1,
      sym_let_statement,
    STATE(66), 1,
      sym_body,
    STATE(77), 1,
      sym_statement,
    STATE(78), 1,
      sym_set_statement,
    ACTIONS(17), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [869] = 12,
    ACTIONS(116), 1,
      aux_sym_set_statement_token1,
    ACTIONS(118), 1,
      aux_sym_let_statement_token1,
    ACTIONS(120), 1,
      aux_sym_conditional_token1,
    ACTIONS(122), 1,
      sym_function_call,
    ACTIONS(124), 1,
      sym_loop,
    STATE(31), 1,
      sym_and_or,
    STATE(64), 1,
      sym_conditional,
    STATE(65), 1,
      sym_let_statement,
    STATE(69), 1,
      sym_body,
    STATE(77), 1,
      sym_statement,
    STATE(78), 1,
      sym_set_statement,
    ACTIONS(17), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [907] = 11,
    ACTIONS(126), 1,
      aux_sym_set_statement_token1,
    ACTIONS(128), 1,
      aux_sym_let_statement_token1,
    ACTIONS(130), 1,
      aux_sym_conditional_token1,
    ACTIONS(132), 1,
      sym_function_call,
    ACTIONS(134), 1,
      sym_loop,
    STATE(42), 1,
      sym_let_statement,
    STATE(48), 1,
      sym_statement,
    STATE(49), 1,
      sym_set_statement,
    STATE(50), 1,
      sym_conditional,
    STATE(98), 1,
      sym_body_repeat,
    STATE(29), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [942] = 11,
    ACTIONS(126), 1,
      aux_sym_set_statement_token1,
    ACTIONS(128), 1,
      aux_sym_let_statement_token1,
    ACTIONS(130), 1,
      aux_sym_conditional_token1,
    ACTIONS(132), 1,
      sym_function_call,
    ACTIONS(134), 1,
      sym_loop,
    ACTIONS(136), 1,
      aux_sym_block_token2,
    STATE(42), 1,
      sym_let_statement,
    STATE(48), 1,
      sym_statement,
    STATE(49), 1,
      sym_set_statement,
    STATE(50), 1,
      sym_conditional,
    STATE(30), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [977] = 11,
    ACTIONS(138), 1,
      aux_sym_block_token2,
    ACTIONS(140), 1,
      aux_sym_set_statement_token1,
    ACTIONS(143), 1,
      aux_sym_let_statement_token1,
    ACTIONS(146), 1,
      aux_sym_conditional_token1,
    ACTIONS(149), 1,
      sym_function_call,
    ACTIONS(152), 1,
      sym_loop,
    STATE(42), 1,
      sym_let_statement,
    STATE(48), 1,
      sym_statement,
    STATE(49), 1,
      sym_set_statement,
    STATE(50), 1,
      sym_conditional,
    STATE(30), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [1012] = 10,
    ACTIONS(116), 1,
      aux_sym_set_statement_token1,
    ACTIONS(118), 1,
      aux_sym_let_statement_token1,
    ACTIONS(120), 1,
      aux_sym_conditional_token1,
    ACTIONS(122), 1,
      sym_function_call,
    ACTIONS(124), 1,
      sym_loop,
    STATE(64), 1,
      sym_conditional,
    STATE(65), 1,
      sym_let_statement,
    STATE(68), 1,
      sym_body,
    STATE(77), 1,
      sym_statement,
    STATE(78), 1,
      sym_set_statement,
  [1043] = 10,
    ACTIONS(116), 1,
      aux_sym_set_statement_token1,
    ACTIONS(118), 1,
      aux_sym_let_statement_token1,
    ACTIONS(120), 1,
      aux_sym_conditional_token1,
    ACTIONS(122), 1,
      sym_function_call,
    ACTIONS(124), 1,
      sym_loop,
    STATE(64), 1,
      sym_conditional,
    STATE(65), 1,
      sym_let_statement,
    STATE(72), 1,
      sym_body,
    STATE(77), 1,
      sym_statement,
    STATE(78), 1,
      sym_set_statement,
  [1074] = 2,
    ACTIONS(157), 1,
      sym_function_call,
    ACTIONS(155), 8,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1088] = 2,
    ACTIONS(114), 1,
      sym_function_call,
    ACTIONS(108), 8,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1102] = 2,
    ACTIONS(161), 1,
      sym_function_call,
    ACTIONS(159), 7,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1115] = 1,
    ACTIONS(163), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1126] = 1,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1137] = 1,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1148] = 1,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1159] = 1,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1170] = 1,
    ACTIONS(173), 7,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [1180] = 2,
    ACTIONS(177), 1,
      sym_function_call,
    ACTIONS(175), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1191] = 2,
    ACTIONS(181), 1,
      sym_function_call,
    ACTIONS(179), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1202] = 2,
    ACTIONS(185), 1,
      sym_function_call,
    ACTIONS(183), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1213] = 2,
    ACTIONS(189), 1,
      sym_function_call,
    ACTIONS(187), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1224] = 2,
    ACTIONS(193), 1,
      sym_function_call,
    ACTIONS(191), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1235] = 3,
    STATE(106), 1,
      sym_literal,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1248] = 2,
    ACTIONS(197), 1,
      sym_function_call,
    ACTIONS(195), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1259] = 2,
    ACTIONS(201), 1,
      sym_function_call,
    ACTIONS(199), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1270] = 2,
    ACTIONS(205), 1,
      sym_function_call,
    ACTIONS(203), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1281] = 2,
    ACTIONS(114), 1,
      sym_function_call,
    ACTIONS(108), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1292] = 2,
    ACTIONS(209), 1,
      sym_function_call,
    ACTIONS(207), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1303] = 2,
    ACTIONS(213), 1,
      sym_function_call,
    ACTIONS(211), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1314] = 2,
    ACTIONS(217), 1,
      sym_function_call,
    ACTIONS(215), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1325] = 3,
    STATE(114), 1,
      sym_literal,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1338] = 2,
    ACTIONS(221), 1,
      sym_function_call,
    ACTIONS(219), 5,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      sym_loop,
  [1349] = 2,
    ACTIONS(225), 1,
      sym_function_call,
    ACTIONS(223), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1360] = 5,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      aux_sym_quest_variable_token1,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(111), 1,
      sym_variable,
  [1376] = 5,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      aux_sym_quest_variable_token1,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(102), 1,
      sym_variable,
  [1392] = 5,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      aux_sym_quest_variable_token1,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(103), 1,
      sym_variable,
  [1408] = 5,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      aux_sym_quest_variable_token1,
    STATE(11), 1,
      sym_array_var,
    STATE(12), 1,
      sym_quest_variable,
    STATE(110), 1,
      sym_variable,
  [1424] = 2,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1432] = 2,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [1440] = 1,
    ACTIONS(203), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1445] = 1,
    ACTIONS(175), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1450] = 2,
    ACTIONS(233), 1,
      aux_sym_conditional_token2,
    ACTIONS(235), 1,
      sym_con_else,
  [1457] = 1,
    ACTIONS(237), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [1462] = 2,
    ACTIONS(239), 1,
      aux_sym_conditional_token2,
    ACTIONS(241), 1,
      sym_con_else,
  [1469] = 2,
    ACTIONS(243), 1,
      aux_sym_conditional_token2,
    ACTIONS(245), 1,
      sym_con_else,
  [1476] = 1,
    ACTIONS(179), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1481] = 1,
    ACTIONS(211), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1486] = 2,
    ACTIONS(247), 1,
      aux_sym_conditional_token2,
    ACTIONS(249), 1,
      sym_con_else,
  [1493] = 1,
    ACTIONS(51), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1498] = 1,
    ACTIONS(215), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1503] = 1,
    ACTIONS(187), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1508] = 1,
    ACTIONS(191), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1513] = 1,
    ACTIONS(195), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1518] = 1,
    ACTIONS(199), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1523] = 1,
    ACTIONS(223), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1528] = 1,
    ACTIONS(47), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1533] = 1,
    ACTIONS(43), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1538] = 1,
    ACTIONS(155), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1543] = 1,
    ACTIONS(82), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1548] = 1,
    ACTIONS(78), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1553] = 1,
    ACTIONS(96), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1558] = 1,
    ACTIONS(88), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1563] = 1,
    ACTIONS(92), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1568] = 1,
    ACTIONS(100), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1573] = 1,
    ACTIONS(104), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1578] = 1,
    ACTIONS(108), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1583] = 1,
    ACTIONS(207), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1588] = 1,
    ACTIONS(108), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1593] = 1,
    ACTIONS(183), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1598] = 1,
    ACTIONS(251), 1,
      sym_identifier,
  [1602] = 1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [1606] = 1,
    ACTIONS(255), 1,
      sym_identifier,
  [1610] = 1,
    ACTIONS(257), 1,
      sym_identifier,
  [1614] = 1,
    ACTIONS(259), 1,
      aux_sym_block_token2,
  [1618] = 1,
    ACTIONS(261), 1,
      aux_sym_conditional_token2,
  [1622] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [1626] = 1,
    ACTIONS(247), 1,
      aux_sym_conditional_token2,
  [1630] = 1,
    ACTIONS(265), 1,
      aux_sym_set_statement_token2,
  [1634] = 1,
    ACTIONS(267), 1,
      anon_sym_COLON_EQ,
  [1638] = 1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [1642] = 1,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
  [1646] = 1,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
  [1650] = 1,
    ACTIONS(239), 1,
      aux_sym_conditional_token2,
  [1654] = 1,
    ACTIONS(275), 1,
      sym_identifier,
  [1658] = 1,
    ACTIONS(277), 1,
      aux_sym_conditional_token2,
  [1662] = 1,
    ACTIONS(279), 1,
      anon_sym_COLON_EQ,
  [1666] = 1,
    ACTIONS(281), 1,
      aux_sym_set_statement_token2,
  [1670] = 1,
    ACTIONS(283), 1,
      sym_identifier,
  [1674] = 1,
    ACTIONS(285), 1,
      sym_identifier,
  [1678] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
  [1682] = 1,
    ACTIONS(289), 1,
      sym_identifier,
  [1686] = 1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 160,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 314,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 418,
  [SMALL_STATE(11)] = 458,
  [SMALL_STATE(12)] = 480,
  [SMALL_STATE(13)] = 502,
  [SMALL_STATE(14)] = 542,
  [SMALL_STATE(15)] = 564,
  [SMALL_STATE(16)] = 604,
  [SMALL_STATE(17)] = 627,
  [SMALL_STATE(18)] = 648,
  [SMALL_STATE(19)] = 668,
  [SMALL_STATE(20)] = 688,
  [SMALL_STATE(21)] = 708,
  [SMALL_STATE(22)] = 728,
  [SMALL_STATE(23)] = 748,
  [SMALL_STATE(24)] = 768,
  [SMALL_STATE(25)] = 808,
  [SMALL_STATE(26)] = 831,
  [SMALL_STATE(27)] = 869,
  [SMALL_STATE(28)] = 907,
  [SMALL_STATE(29)] = 942,
  [SMALL_STATE(30)] = 977,
  [SMALL_STATE(31)] = 1012,
  [SMALL_STATE(32)] = 1043,
  [SMALL_STATE(33)] = 1074,
  [SMALL_STATE(34)] = 1088,
  [SMALL_STATE(35)] = 1102,
  [SMALL_STATE(36)] = 1115,
  [SMALL_STATE(37)] = 1126,
  [SMALL_STATE(38)] = 1137,
  [SMALL_STATE(39)] = 1148,
  [SMALL_STATE(40)] = 1159,
  [SMALL_STATE(41)] = 1170,
  [SMALL_STATE(42)] = 1180,
  [SMALL_STATE(43)] = 1191,
  [SMALL_STATE(44)] = 1202,
  [SMALL_STATE(45)] = 1213,
  [SMALL_STATE(46)] = 1224,
  [SMALL_STATE(47)] = 1235,
  [SMALL_STATE(48)] = 1248,
  [SMALL_STATE(49)] = 1259,
  [SMALL_STATE(50)] = 1270,
  [SMALL_STATE(51)] = 1281,
  [SMALL_STATE(52)] = 1292,
  [SMALL_STATE(53)] = 1303,
  [SMALL_STATE(54)] = 1314,
  [SMALL_STATE(55)] = 1325,
  [SMALL_STATE(56)] = 1338,
  [SMALL_STATE(57)] = 1349,
  [SMALL_STATE(58)] = 1360,
  [SMALL_STATE(59)] = 1376,
  [SMALL_STATE(60)] = 1392,
  [SMALL_STATE(61)] = 1408,
  [SMALL_STATE(62)] = 1424,
  [SMALL_STATE(63)] = 1432,
  [SMALL_STATE(64)] = 1440,
  [SMALL_STATE(65)] = 1445,
  [SMALL_STATE(66)] = 1450,
  [SMALL_STATE(67)] = 1457,
  [SMALL_STATE(68)] = 1462,
  [SMALL_STATE(69)] = 1469,
  [SMALL_STATE(70)] = 1476,
  [SMALL_STATE(71)] = 1481,
  [SMALL_STATE(72)] = 1486,
  [SMALL_STATE(73)] = 1493,
  [SMALL_STATE(74)] = 1498,
  [SMALL_STATE(75)] = 1503,
  [SMALL_STATE(76)] = 1508,
  [SMALL_STATE(77)] = 1513,
  [SMALL_STATE(78)] = 1518,
  [SMALL_STATE(79)] = 1523,
  [SMALL_STATE(80)] = 1528,
  [SMALL_STATE(81)] = 1533,
  [SMALL_STATE(82)] = 1538,
  [SMALL_STATE(83)] = 1543,
  [SMALL_STATE(84)] = 1548,
  [SMALL_STATE(85)] = 1553,
  [SMALL_STATE(86)] = 1558,
  [SMALL_STATE(87)] = 1563,
  [SMALL_STATE(88)] = 1568,
  [SMALL_STATE(89)] = 1573,
  [SMALL_STATE(90)] = 1578,
  [SMALL_STATE(91)] = 1583,
  [SMALL_STATE(92)] = 1588,
  [SMALL_STATE(93)] = 1593,
  [SMALL_STATE(94)] = 1598,
  [SMALL_STATE(95)] = 1602,
  [SMALL_STATE(96)] = 1606,
  [SMALL_STATE(97)] = 1610,
  [SMALL_STATE(98)] = 1614,
  [SMALL_STATE(99)] = 1618,
  [SMALL_STATE(100)] = 1622,
  [SMALL_STATE(101)] = 1626,
  [SMALL_STATE(102)] = 1630,
  [SMALL_STATE(103)] = 1634,
  [SMALL_STATE(104)] = 1638,
  [SMALL_STATE(105)] = 1642,
  [SMALL_STATE(106)] = 1646,
  [SMALL_STATE(107)] = 1650,
  [SMALL_STATE(108)] = 1654,
  [SMALL_STATE(109)] = 1658,
  [SMALL_STATE(110)] = 1662,
  [SMALL_STATE(111)] = 1666,
  [SMALL_STATE(112)] = 1670,
  [SMALL_STATE(113)] = 1674,
  [SMALL_STATE(114)] = 1678,
  [SMALL_STATE(115)] = 1682,
  [SMALL_STATE(116)] = 1686,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 14),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 14),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 13),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 13),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_var, 4, .production_id = 23),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_var, 4, .production_id = 23),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(113),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(112),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(96),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(94),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(100),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 12),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 12),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 17),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 17),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 18),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 18),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 16),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 16),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 19),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 19),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 20),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 20),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contained, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contained, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_repeat, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(58),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(61),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(6),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(45),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(46),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 21),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 1, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name_declare, 2, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 10),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 10),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 7),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 8),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 8),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 9),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 9),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 11),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 11),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 22),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 22),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_or, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_or, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 22),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 22),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_variable, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarer, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_type, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [291] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
