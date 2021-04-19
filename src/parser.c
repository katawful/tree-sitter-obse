#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 18

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
  sym_functions = 20,
  sym_function_call = 21,
  sym_loop = 22,
  sym_conditional = 23,
  sym_script_file = 24,
  sym_script_name_declare = 25,
  sym_script_declarer = 26,
  sym_script_body = 27,
  sym__top_level_items = 28,
  sym_var_declare = 29,
  sym__type = 30,
  sym_int_type = 31,
  sym_float_type = 32,
  sym_string_type = 33,
  sym_array_type = 34,
  sym_block = 35,
  sym_body_repeat = 36,
  sym_body = 37,
  sym_statement = 38,
  sym_set_statement = 39,
  sym_let_statement = 40,
  sym_variable = 41,
  sym_quest_variable = 42,
  sym_right_hand = 43,
  sym_literal = 44,
  sym_interpreted = 45,
  sym_quest_reference = 46,
  aux_sym_script_body_repeat1 = 47,
  aux_sym_body_repeat_repeat1 = 48,
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
  [sym_functions] = "functions",
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
  [sym_functions] = sym_functions,
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
  [sym_functions] = {
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
  field_block_mode = 1,
  field_block_type = 2,
  field_body = 3,
  field_conditional = 4,
  field_declaration = 5,
  field_function = 6,
  field_function_call = 7,
  field_function_reference = 8,
  field_literal = 9,
  field_plain_var = 10,
  field_quest_reference = 11,
  field_quest_variable = 12,
  field_script_name = 13,
  field_statement = 14,
  field_type = 15,
  field_variable = 16,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_block_mode] = "block_mode",
  [field_block_type] = "block_type",
  [field_body] = "body",
  [field_conditional] = "conditional",
  [field_declaration] = "declaration",
  [field_function] = "function",
  [field_function_call] = "function_call",
  [field_function_reference] = "function_reference",
  [field_literal] = "literal",
  [field_plain_var] = "plain_var",
  [field_quest_reference] = "quest_reference",
  [field_quest_variable] = "quest_variable",
  [field_script_name] = "script_name",
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
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 1},
  [15] = {.index = 20, .length = 1},
  [16] = {.index = 21, .length = 1},
  [17] = {.index = 22, .length = 1},
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
    {field_plain_var, 0},
  [15] =
    {field_quest_variable, 0},
  [16] =
    {field_block_type, 1},
    {field_body, 2},
  [18] =
    {field_function_reference, 0},
  [19] =
    {field_function, 0},
  [20] =
    {field_variable, 1},
  [21] =
    {field_literal, 0},
  [22] =
    {field_quest_reference, 0},
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
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(33);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(75);
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
          lookahead == 'o') ADVANCE(73);
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
          lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
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
          lookahead == 'g') ADVANCE(66);
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
          lookahead == 'n') ADVANCE(60);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
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
          lookahead == 'o') ADVANCE(73);
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
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
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
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 57:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 58:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_script_declarer_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_script_declarer_token2);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_int_type_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_int_type_token2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_int_type_token3);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_float_type_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_type_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_block_token2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quest_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_literal_token3);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 52},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 52},
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
    [sym_function_call] = ACTIONS(1),
    [sym_loop] = ACTIONS(1),
    [sym_conditional] = ACTIONS(1),
  },
  [1] = {
    [sym_script_file] = STATE(38),
    [sym_script_name_declare] = STATE(2),
    [sym_script_declarer] = STATE(37),
    [aux_sym_script_declarer_token1] = ACTIONS(3),
    [aux_sym_script_declarer_token2] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(7), 1,
      aux_sym_float_type_token1,
    ACTIONS(9), 1,
      aux_sym_string_type_token1,
    ACTIONS(11), 1,
      aux_sym_array_type_token1,
    ACTIONS(13), 1,
      aux_sym_block_token1,
    STATE(4), 1,
      aux_sym_script_body_repeat1,
    STATE(10), 1,
      sym__top_level_items,
    STATE(13), 1,
      sym_block,
    STATE(14), 1,
      sym_var_declare,
    STATE(46), 1,
      sym_script_body,
    ACTIONS(5), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(45), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [40] = 11,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      aux_sym_float_type_token1,
    ACTIONS(23), 1,
      aux_sym_string_type_token1,
    ACTIONS(26), 1,
      aux_sym_array_type_token1,
    ACTIONS(29), 1,
      aux_sym_block_token1,
    STATE(3), 1,
      aux_sym_script_body_repeat1,
    STATE(10), 1,
      sym__top_level_items,
    STATE(13), 1,
      sym_block,
    STATE(14), 1,
      sym_var_declare,
    ACTIONS(17), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(45), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [80] = 11,
    ACTIONS(7), 1,
      aux_sym_float_type_token1,
    ACTIONS(9), 1,
      aux_sym_string_type_token1,
    ACTIONS(11), 1,
      aux_sym_array_type_token1,
    ACTIONS(13), 1,
      aux_sym_block_token1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_script_body_repeat1,
    STATE(10), 1,
      sym__top_level_items,
    STATE(13), 1,
      sym_block,
    STATE(14), 1,
      sym_var_declare,
    ACTIONS(5), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(45), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [120] = 9,
    ACTIONS(34), 1,
      aux_sym_set_statement_token1,
    ACTIONS(36), 1,
      aux_sym_let_statement_token1,
    ACTIONS(38), 1,
      sym_function_call,
    ACTIONS(40), 1,
      sym_loop,
    ACTIONS(42), 1,
      sym_conditional,
    STATE(25), 1,
      sym_statement,
    STATE(43), 1,
      sym_body_repeat,
    STATE(7), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    STATE(26), 2,
      sym_set_statement,
      sym_let_statement,
  [150] = 9,
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
    STATE(6), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    STATE(26), 2,
      sym_set_statement,
      sym_let_statement,
  [180] = 9,
    ACTIONS(34), 1,
      aux_sym_set_statement_token1,
    ACTIONS(36), 1,
      aux_sym_let_statement_token1,
    ACTIONS(38), 1,
      sym_function_call,
    ACTIONS(40), 1,
      sym_loop,
    ACTIONS(42), 1,
      sym_conditional,
    ACTIONS(61), 1,
      aux_sym_block_token2,
    STATE(25), 1,
      sym_statement,
    STATE(6), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    STATE(26), 2,
      sym_set_statement,
      sym_let_statement,
  [210] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(69), 1,
      sym_functions,
    STATE(17), 1,
      sym_quest_reference,
    STATE(18), 1,
      sym_interpreted,
    STATE(19), 1,
      sym_literal,
    STATE(28), 1,
      sym_right_hand,
    ACTIONS(67), 3,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
  [237] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(69), 1,
      sym_functions,
    STATE(17), 1,
      sym_quest_reference,
    STATE(18), 1,
      sym_interpreted,
    STATE(19), 1,
      sym_literal,
    STATE(20), 1,
      sym_right_hand,
    ACTIONS(67), 3,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
  [264] = 1,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [275] = 1,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [286] = 1,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [297] = 1,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [308] = 1,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [319] = 1,
    ACTIONS(81), 7,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [329] = 2,
    ACTIONS(85), 1,
      sym_function_call,
    ACTIONS(83), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [340] = 2,
    ACTIONS(89), 1,
      sym_function_call,
    ACTIONS(87), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [351] = 2,
    ACTIONS(93), 1,
      sym_function_call,
    ACTIONS(91), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [362] = 2,
    ACTIONS(97), 1,
      sym_function_call,
    ACTIONS(95), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [373] = 2,
    ACTIONS(101), 1,
      sym_function_call,
    ACTIONS(99), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [384] = 2,
    ACTIONS(105), 1,
      sym_function_call,
    ACTIONS(103), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [395] = 2,
    ACTIONS(109), 1,
      sym_function_call,
    ACTIONS(107), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [406] = 2,
    ACTIONS(113), 1,
      sym_function_call,
    ACTIONS(111), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [417] = 2,
    ACTIONS(117), 1,
      sym_function_call,
    ACTIONS(115), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [428] = 2,
    ACTIONS(121), 1,
      sym_function_call,
    ACTIONS(119), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [439] = 2,
    ACTIONS(125), 1,
      sym_function_call,
    ACTIONS(123), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [450] = 2,
    ACTIONS(129), 1,
      sym_function_call,
    ACTIONS(127), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [461] = 2,
    ACTIONS(133), 1,
      sym_function_call,
    ACTIONS(131), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [472] = 2,
    ACTIONS(137), 1,
      sym_function_call,
    ACTIONS(135), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [483] = 4,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      aux_sym_quest_variable_token1,
    STATE(34), 1,
      sym_quest_variable,
    STATE(40), 1,
      sym_variable,
  [496] = 4,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      aux_sym_quest_variable_token1,
    STATE(34), 1,
      sym_quest_variable,
    STATE(39), 1,
      sym_variable,
  [509] = 1,
    ACTIONS(143), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [514] = 1,
    ACTIONS(145), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [519] = 1,
    ACTIONS(147), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [524] = 1,
    ACTIONS(149), 1,
      sym_identifier,
  [528] = 1,
    ACTIONS(151), 1,
      sym_identifier,
  [532] = 1,
    ACTIONS(153), 1,
      sym_identifier,
  [536] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [540] = 1,
    ACTIONS(157), 1,
      anon_sym_COLON_EQ,
  [544] = 1,
    ACTIONS(159), 1,
      aux_sym_set_statement_token2,
  [548] = 1,
    ACTIONS(161), 1,
      sym_identifier,
  [552] = 1,
    ACTIONS(163), 1,
      sym_identifier,
  [556] = 1,
    ACTIONS(165), 1,
      aux_sym_block_token2,
  [560] = 1,
    ACTIONS(167), 1,
      sym_identifier,
  [564] = 1,
    ACTIONS(169), 1,
      sym_identifier,
  [568] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
  [572] = 1,
    ACTIONS(173), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 297,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 319,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 340,
  [SMALL_STATE(18)] = 351,
  [SMALL_STATE(19)] = 362,
  [SMALL_STATE(20)] = 373,
  [SMALL_STATE(21)] = 384,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 406,
  [SMALL_STATE(24)] = 417,
  [SMALL_STATE(25)] = 428,
  [SMALL_STATE(26)] = 439,
  [SMALL_STATE(27)] = 450,
  [SMALL_STATE(28)] = 461,
  [SMALL_STATE(29)] = 472,
  [SMALL_STATE(30)] = 483,
  [SMALL_STATE(31)] = 496,
  [SMALL_STATE(32)] = 509,
  [SMALL_STATE(33)] = 514,
  [SMALL_STATE(34)] = 519,
  [SMALL_STATE(35)] = 524,
  [SMALL_STATE(36)] = 528,
  [SMALL_STATE(37)] = 532,
  [SMALL_STATE(38)] = 536,
  [SMALL_STATE(39)] = 540,
  [SMALL_STATE(40)] = 544,
  [SMALL_STATE(41)] = 548,
  [SMALL_STATE(42)] = 552,
  [SMALL_STATE(43)] = 556,
  [SMALL_STATE(44)] = 560,
  [SMALL_STATE(45)] = 564,
  [SMALL_STATE(46)] = 568,
  [SMALL_STATE(47)] = 572,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(36),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(35),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(42),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(41),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(47),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(31),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(16),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_repeat, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 1, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name_declare, 2, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 17),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 17),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1, .production_id = 16),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1, .production_id = 16),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 15),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 15),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_reference, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quest_reference, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 8),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 14),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 14),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 9),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 15),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 15),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 13),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 13),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 10),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_variable, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 11),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_type, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarer, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
