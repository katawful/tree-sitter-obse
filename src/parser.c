#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym_function_call = 25,
  sym_loop = 26,
  sym_conditional = 27,
  sym_script_file = 28,
  sym_script_name_declare = 29,
  sym_script_declarer = 30,
  sym_script_body = 31,
  sym__top_level_items = 32,
  sym_var_declare = 33,
  sym__type = 34,
  sym_int_type = 35,
  sym_float_type = 36,
  sym_string_type = 37,
  sym_array_type = 38,
  sym_block = 39,
  sym_body_repeat = 40,
  sym_body = 41,
  sym_statement = 42,
  sym_set_statement = 43,
  sym_let_statement = 44,
  sym_variable = 45,
  sym_quest_variable = 46,
  sym_right_hand = 47,
  sym_literal = 48,
  sym_interpreted = 49,
  sym_quest_reference = 50,
  sym_array_var = 51,
  aux_sym_script_body_repeat1 = 52,
  aux_sym_body_repeat_repeat1 = 53,
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
  [sym_function_call] = "function_call",
  [sym_loop] = "loop",
  [sym_conditional] = "conditional",
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
  [sym_function_call] = sym_function_call,
  [sym_loop] = sym_loop,
  [sym_conditional] = sym_conditional,
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
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
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
  field_literal = 13,
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
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 1},
  [17] = {.index = 22, .length = 1},
  [18] = {.index = 23, .length = 1},
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
    {field_conditional, 0},
  [13] =
    {field_statement, 0},
  [14] =
    {field_set, 0},
  [15] =
    {field_let, 0},
  [16] =
    {field_plain_var, 0},
  [17] =
    {field_quest_var, 0},
  [18] =
    {field_array_var, 0},
  [19] =
    {field_block_type, 1},
    {field_body, 2},
  [21] =
    {field_function_reference, 0},
  [22] =
    {field_function, 0},
  [23] =
    {field_variable, 1},
  [24] =
    {field_literal, 0},
  [25] =
    {field_quest_reference, 0},
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
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(24);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(17);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(35);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 35:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 50:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 51:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 54:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 55:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 56:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_script_declarer_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_script_declarer_token2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_int_type_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_int_type_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_int_type_token3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_float_type_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_type_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_block_token2);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quest_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_literal_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_literal_token5);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_function_call);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_loop);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_conditional);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 52},
  [46] = {.lex_state = 52},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 52},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 52},
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
    [sym_function_call] = ACTIONS(1),
    [sym_loop] = ACTIONS(1),
    [sym_conditional] = ACTIONS(1),
  },
  [1] = {
    [sym_script_file] = STATE(43),
    [sym_script_name_declare] = STATE(3),
    [sym_script_declarer] = STATE(42),
    [aux_sym_script_declarer_token1] = ACTIONS(3),
    [aux_sym_script_declarer_token2] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(10), 1,
      aux_sym_float_type_token1,
    ACTIONS(13), 1,
      aux_sym_string_type_token1,
    ACTIONS(16), 1,
      aux_sym_array_type_token1,
    ACTIONS(19), 1,
      aux_sym_block_token1,
    STATE(2), 1,
      aux_sym_script_body_repeat1,
    STATE(10), 1,
      sym_var_declare,
    STATE(13), 1,
      sym_block,
    STATE(14), 1,
      sym__top_level_items,
    ACTIONS(7), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(49), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [40] = 11,
    ACTIONS(24), 1,
      aux_sym_float_type_token1,
    ACTIONS(26), 1,
      aux_sym_string_type_token1,
    ACTIONS(28), 1,
      aux_sym_array_type_token1,
    ACTIONS(30), 1,
      aux_sym_block_token1,
    STATE(4), 1,
      aux_sym_script_body_repeat1,
    STATE(10), 1,
      sym_var_declare,
    STATE(13), 1,
      sym_block,
    STATE(14), 1,
      sym__top_level_items,
    STATE(50), 1,
      sym_script_body,
    ACTIONS(22), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(49), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [80] = 11,
    ACTIONS(24), 1,
      aux_sym_float_type_token1,
    ACTIONS(26), 1,
      aux_sym_string_type_token1,
    ACTIONS(28), 1,
      aux_sym_array_type_token1,
    ACTIONS(30), 1,
      aux_sym_block_token1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_script_body_repeat1,
    STATE(10), 1,
      sym_var_declare,
    STATE(13), 1,
      sym_block,
    STATE(14), 1,
      sym__top_level_items,
    ACTIONS(22), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(49), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [120] = 9,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(42), 1,
      sym_functions,
    STATE(18), 1,
      sym_interpreted,
    STATE(19), 1,
      sym_literal,
    STATE(24), 1,
      sym_right_hand,
    STATE(30), 1,
      sym_quest_reference,
    ACTIONS(38), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(40), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [151] = 9,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(42), 1,
      sym_functions,
    STATE(18), 1,
      sym_interpreted,
    STATE(19), 1,
      sym_literal,
    STATE(20), 1,
      sym_right_hand,
    STATE(30), 1,
      sym_quest_reference,
    ACTIONS(38), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(40), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [182] = 10,
    ACTIONS(44), 1,
      aux_sym_block_token2,
    ACTIONS(46), 1,
      aux_sym_set_statement_token1,
    ACTIONS(49), 1,
      aux_sym_let_statement_token1,
    ACTIONS(52), 1,
      sym_function_call,
    ACTIONS(55), 1,
      sym_loop,
    ACTIONS(58), 1,
      sym_conditional,
    STATE(25), 1,
      sym_statement,
    STATE(26), 1,
      sym_set_statement,
    STATE(27), 1,
      sym_let_statement,
    STATE(7), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [214] = 10,
    ACTIONS(61), 1,
      aux_sym_block_token2,
    ACTIONS(63), 1,
      aux_sym_set_statement_token1,
    ACTIONS(65), 1,
      aux_sym_let_statement_token1,
    ACTIONS(67), 1,
      sym_function_call,
    ACTIONS(69), 1,
      sym_loop,
    ACTIONS(71), 1,
      sym_conditional,
    STATE(25), 1,
      sym_statement,
    STATE(26), 1,
      sym_set_statement,
    STATE(27), 1,
      sym_let_statement,
    STATE(7), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [246] = 10,
    ACTIONS(63), 1,
      aux_sym_set_statement_token1,
    ACTIONS(65), 1,
      aux_sym_let_statement_token1,
    ACTIONS(67), 1,
      sym_function_call,
    ACTIONS(69), 1,
      sym_loop,
    ACTIONS(71), 1,
      sym_conditional,
    STATE(25), 1,
      sym_statement,
    STATE(26), 1,
      sym_set_statement,
    STATE(27), 1,
      sym_let_statement,
    STATE(48), 1,
      sym_body_repeat,
    STATE(8), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [278] = 1,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [289] = 1,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [300] = 1,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [311] = 1,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [322] = 1,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [333] = 2,
    ACTIONS(85), 1,
      sym_function_call,
    ACTIONS(83), 6,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RBRACK,
      sym_loop,
      sym_conditional,
  [345] = 1,
    ACTIONS(87), 7,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [355] = 2,
    ACTIONS(91), 1,
      sym_function_call,
    ACTIONS(89), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [366] = 2,
    ACTIONS(95), 1,
      sym_function_call,
    ACTIONS(93), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [377] = 2,
    ACTIONS(99), 1,
      sym_function_call,
    ACTIONS(97), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [388] = 2,
    ACTIONS(103), 1,
      sym_function_call,
    ACTIONS(101), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [399] = 2,
    ACTIONS(107), 1,
      sym_function_call,
    ACTIONS(105), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [410] = 2,
    ACTIONS(111), 1,
      sym_function_call,
    ACTIONS(109), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [421] = 2,
    ACTIONS(115), 1,
      sym_function_call,
    ACTIONS(113), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [432] = 2,
    ACTIONS(119), 1,
      sym_function_call,
    ACTIONS(117), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [443] = 2,
    ACTIONS(123), 1,
      sym_function_call,
    ACTIONS(121), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [454] = 2,
    ACTIONS(127), 1,
      sym_function_call,
    ACTIONS(125), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [465] = 2,
    ACTIONS(131), 1,
      sym_function_call,
    ACTIONS(129), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [476] = 2,
    ACTIONS(135), 1,
      sym_function_call,
    ACTIONS(133), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [487] = 2,
    ACTIONS(139), 1,
      sym_function_call,
    ACTIONS(137), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [498] = 2,
    ACTIONS(143), 1,
      sym_function_call,
    ACTIONS(141), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [509] = 3,
    STATE(44), 1,
      sym_literal,
    ACTIONS(38), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(40), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [522] = 5,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym_quest_variable_token1,
    STATE(35), 1,
      sym_array_var,
    STATE(37), 1,
      sym_quest_variable,
    STATE(41), 1,
      sym_variable,
  [538] = 5,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym_quest_variable_token1,
    STATE(35), 1,
      sym_array_var,
    STATE(37), 1,
      sym_quest_variable,
    STATE(39), 1,
      sym_variable,
  [554] = 2,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [562] = 1,
    ACTIONS(153), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [567] = 1,
    ACTIONS(155), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [572] = 1,
    ACTIONS(157), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [577] = 1,
    ACTIONS(159), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [582] = 1,
    ACTIONS(161), 1,
      anon_sym_COLON_EQ,
  [586] = 1,
    ACTIONS(163), 1,
      sym_identifier,
  [590] = 1,
    ACTIONS(165), 1,
      aux_sym_set_statement_token2,
  [594] = 1,
    ACTIONS(167), 1,
      sym_identifier,
  [598] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [602] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
  [606] = 1,
    ACTIONS(173), 1,
      sym_identifier,
  [610] = 1,
    ACTIONS(175), 1,
      sym_identifier,
  [614] = 1,
    ACTIONS(177), 1,
      sym_identifier,
  [618] = 1,
    ACTIONS(179), 1,
      aux_sym_block_token2,
  [622] = 1,
    ACTIONS(181), 1,
      sym_identifier,
  [626] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
  [630] = 1,
    ACTIONS(185), 1,
      sym_identifier,
  [634] = 1,
    ACTIONS(187), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 278,
  [SMALL_STATE(11)] = 289,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 322,
  [SMALL_STATE(15)] = 333,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 355,
  [SMALL_STATE(18)] = 366,
  [SMALL_STATE(19)] = 377,
  [SMALL_STATE(20)] = 388,
  [SMALL_STATE(21)] = 399,
  [SMALL_STATE(22)] = 410,
  [SMALL_STATE(23)] = 421,
  [SMALL_STATE(24)] = 432,
  [SMALL_STATE(25)] = 443,
  [SMALL_STATE(26)] = 454,
  [SMALL_STATE(27)] = 465,
  [SMALL_STATE(28)] = 476,
  [SMALL_STATE(29)] = 487,
  [SMALL_STATE(30)] = 498,
  [SMALL_STATE(31)] = 509,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 538,
  [SMALL_STATE(34)] = 554,
  [SMALL_STATE(35)] = 562,
  [SMALL_STATE(36)] = 567,
  [SMALL_STATE(37)] = 572,
  [SMALL_STATE(38)] = 577,
  [SMALL_STATE(39)] = 582,
  [SMALL_STATE(40)] = 586,
  [SMALL_STATE(41)] = 590,
  [SMALL_STATE(42)] = 594,
  [SMALL_STATE(43)] = 598,
  [SMALL_STATE(44)] = 602,
  [SMALL_STATE(45)] = 606,
  [SMALL_STATE(46)] = 610,
  [SMALL_STATE(47)] = 614,
  [SMALL_STATE(48)] = 618,
  [SMALL_STATE(49)] = 622,
  [SMALL_STATE(50)] = 626,
  [SMALL_STATE(51)] = 630,
  [SMALL_STATE(52)] = 634,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(40),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(46),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(45),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(52),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(51),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(32),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(33),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_repeat, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name_declare, 2, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 17),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 17),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1, .production_id = 19),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1, .production_id = 19),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 18),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 18),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 8),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 8),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 18),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 18),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 9),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 10),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 10),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 11),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 11),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_reference, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quest_reference, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 16),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 16),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 20),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 20),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 12),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 14),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_variable, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 13),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_var, 4, .production_id = 21),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_type, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarer, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
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
