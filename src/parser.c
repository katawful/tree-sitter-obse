#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 12

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
  sym_function_call = 16,
  sym_loop = 17,
  sym_conditional = 18,
  sym_script_file = 19,
  sym_script_name_declare = 20,
  sym_script_declarer = 21,
  sym_script_body = 22,
  sym__top_level_items = 23,
  sym_var_declare = 24,
  sym__type = 25,
  sym_int_type = 26,
  sym_float_type = 27,
  sym_string_type = 28,
  sym_array_type = 29,
  sym_block = 30,
  sym_body_repeat = 31,
  sym_body = 32,
  sym_statement = 33,
  sym_set_statement = 34,
  sym_let_statement = 35,
  aux_sym_script_body_repeat1 = 36,
  aux_sym_body_repeat_repeat1 = 37,
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
  field_function_call = 6,
  field_script_name = 7,
  field_statement = 8,
  field_type = 9,
  field_variable = 10,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_block_mode] = "block_mode",
  [field_block_type] = "block_type",
  [field_body] = "body",
  [field_conditional] = "conditional",
  [field_declaration] = "declaration",
  [field_function_call] = "function_call",
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
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 1},
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
    {field_block_type, 1},
    {field_body, 2},
  [16] =
    {field_variable, 1},
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
      if (eof) ADVANCE(51);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(22);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(15);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(33);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3);
      END_STATE();
    case 19:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 36:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(9);
      END_STATE();
    case 48:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 49:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_script_declarer_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_script_declarer_token2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_int_type_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_int_type_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_int_type_token3);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_float_type_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_type_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_block_token2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_function_call);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_loop);
      END_STATE();
    case 69:
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
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 50},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 50},
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
    [sym_function_call] = ACTIONS(1),
    [sym_loop] = ACTIONS(1),
    [sym_conditional] = ACTIONS(1),
  },
  [1] = {
    [sym_script_file] = STATE(33),
    [sym_script_name_declare] = STATE(2),
    [sym_script_declarer] = STATE(32),
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
      sym_block,
    STATE(11), 1,
      sym__top_level_items,
    STATE(12), 1,
      sym_var_declare,
    STATE(28), 1,
      sym_script_body,
    ACTIONS(5), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(35), 5,
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
      sym_block,
    STATE(11), 1,
      sym__top_level_items,
    STATE(12), 1,
      sym_var_declare,
    ACTIONS(17), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(35), 5,
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
      sym_block,
    STATE(11), 1,
      sym__top_level_items,
    STATE(12), 1,
      sym_var_declare,
    ACTIONS(5), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    STATE(35), 5,
      sym__type,
      sym_int_type,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [120] = 9,
    ACTIONS(34), 1,
      aux_sym_block_token2,
    ACTIONS(36), 1,
      aux_sym_set_statement_token1,
    ACTIONS(39), 1,
      aux_sym_let_statement_token1,
    ACTIONS(42), 1,
      sym_function_call,
    ACTIONS(45), 1,
      sym_loop,
    ACTIONS(48), 1,
      sym_conditional,
    STATE(14), 1,
      sym_statement,
    STATE(5), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    STATE(18), 2,
      sym_set_statement,
      sym_let_statement,
  [150] = 9,
    ACTIONS(51), 1,
      aux_sym_block_token2,
    ACTIONS(53), 1,
      aux_sym_set_statement_token1,
    ACTIONS(55), 1,
      aux_sym_let_statement_token1,
    ACTIONS(57), 1,
      sym_function_call,
    ACTIONS(59), 1,
      sym_loop,
    ACTIONS(61), 1,
      sym_conditional,
    STATE(14), 1,
      sym_statement,
    STATE(5), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    STATE(18), 2,
      sym_set_statement,
      sym_let_statement,
  [180] = 9,
    ACTIONS(53), 1,
      aux_sym_set_statement_token1,
    ACTIONS(55), 1,
      aux_sym_let_statement_token1,
    ACTIONS(57), 1,
      sym_function_call,
    ACTIONS(59), 1,
      sym_loop,
    ACTIONS(61), 1,
      sym_conditional,
    STATE(14), 1,
      sym_statement,
    STATE(26), 1,
      sym_body_repeat,
    STATE(6), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    STATE(18), 2,
      sym_set_statement,
      sym_let_statement,
  [210] = 1,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [221] = 1,
    ACTIONS(65), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [232] = 1,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [243] = 1,
    ACTIONS(69), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [254] = 1,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [265] = 1,
    ACTIONS(73), 7,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      aux_sym_float_type_token1,
      aux_sym_string_type_token1,
      aux_sym_array_type_token1,
      aux_sym_block_token1,
  [275] = 2,
    ACTIONS(77), 1,
      sym_function_call,
    ACTIONS(75), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [286] = 2,
    ACTIONS(81), 1,
      sym_function_call,
    ACTIONS(79), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [297] = 2,
    ACTIONS(85), 1,
      sym_function_call,
    ACTIONS(83), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [308] = 2,
    ACTIONS(89), 1,
      sym_function_call,
    ACTIONS(87), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [319] = 2,
    ACTIONS(93), 1,
      sym_function_call,
    ACTIONS(91), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [330] = 2,
    ACTIONS(97), 1,
      sym_function_call,
    ACTIONS(95), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [341] = 2,
    ACTIONS(101), 1,
      sym_function_call,
    ACTIONS(99), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      sym_loop,
      sym_conditional,
  [352] = 1,
    ACTIONS(103), 1,
      sym_identifier,
  [356] = 1,
    ACTIONS(105), 1,
      sym_identifier,
  [360] = 1,
    ACTIONS(107), 1,
      sym_identifier,
  [364] = 1,
    ACTIONS(109), 1,
      sym_identifier,
  [368] = 1,
    ACTIONS(111), 1,
      sym_identifier,
  [372] = 1,
    ACTIONS(113), 1,
      aux_sym_block_token2,
  [376] = 1,
    ACTIONS(115), 1,
      sym_identifier,
  [380] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [384] = 1,
    ACTIONS(119), 1,
      sym_identifier,
  [388] = 1,
    ACTIONS(121), 1,
      aux_sym_set_statement_token2,
  [392] = 1,
    ACTIONS(123), 1,
      anon_sym_COLON_EQ,
  [396] = 1,
    ACTIONS(125), 1,
      sym_identifier,
  [400] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [404] = 1,
    ACTIONS(129), 1,
      sym_identifier,
  [408] = 1,
    ACTIONS(131), 1,
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
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 243,
  [SMALL_STATE(12)] = 254,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 275,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 297,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 319,
  [SMALL_STATE(19)] = 330,
  [SMALL_STATE(20)] = 341,
  [SMALL_STATE(21)] = 352,
  [SMALL_STATE(22)] = 356,
  [SMALL_STATE(23)] = 360,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 368,
  [SMALL_STATE(26)] = 372,
  [SMALL_STATE(27)] = 376,
  [SMALL_STATE(28)] = 380,
  [SMALL_STATE(29)] = 384,
  [SMALL_STATE(30)] = 388,
  [SMALL_STATE(31)] = 392,
  [SMALL_STATE(32)] = 396,
  [SMALL_STATE(33)] = 400,
  [SMALL_STATE(34)] = 404,
  [SMALL_STATE(35)] = 408,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(29),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(27),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(21),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(22),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(23),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(25),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(20),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(15),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_repeat, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 1, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name_declare, 2, .production_id = 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 9),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 9),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 3, .production_id = 11),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 3, .production_id = 11),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 8),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 7),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_type, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarer, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
