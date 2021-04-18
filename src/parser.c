#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 8

enum {
  aux_sym_script_declarer_token1 = 1,
  aux_sym_script_declarer_token2 = 2,
  sym_identifier = 3,
  aux_sym_int_type_token1 = 4,
  aux_sym_int_type_token2 = 5,
  aux_sym_int_type_token3 = 6,
  sym_float_type = 7,
  sym_string_type = 8,
  sym_array_type = 9,
  aux_sym_variable_token1 = 10,
  aux_sym_block_token1 = 11,
  aux_sym_block_token2 = 12,
  sym_body = 13,
  sym_script_file = 14,
  sym_script_name_declare = 15,
  sym_script_declarer = 16,
  sym_script_body = 17,
  sym__top_level_items = 18,
  sym_var_declare = 19,
  sym__type = 20,
  sym_int_type = 21,
  sym_variable = 22,
  sym_block = 23,
  sym_block_type = 24,
  sym_body_repeat = 25,
  aux_sym_script_body_repeat1 = 26,
  aux_sym_body_repeat_repeat1 = 27,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_script_declarer_token1] = "script_declarer_token1",
  [aux_sym_script_declarer_token2] = "script_declarer_token2",
  [sym_identifier] = "identifier",
  [aux_sym_int_type_token1] = "int_type_token1",
  [aux_sym_int_type_token2] = "int_type_token2",
  [aux_sym_int_type_token3] = "int_type_token3",
  [sym_float_type] = "float_type",
  [sym_string_type] = "string_type",
  [sym_array_type] = "array_type",
  [aux_sym_variable_token1] = "variable_token1",
  [aux_sym_block_token1] = "block_token1",
  [aux_sym_block_token2] = "block_token2",
  [sym_body] = "body",
  [sym_script_file] = "script_file",
  [sym_script_name_declare] = "script_name_declare",
  [sym_script_declarer] = "script_declarer",
  [sym_script_body] = "script_body",
  [sym__top_level_items] = "_top_level_items",
  [sym_var_declare] = "var_declare",
  [sym__type] = "_type",
  [sym_int_type] = "int_type",
  [sym_variable] = "variable",
  [sym_block] = "block",
  [sym_block_type] = "block_type",
  [sym_body_repeat] = "body_repeat",
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
  [sym_float_type] = sym_float_type,
  [sym_string_type] = sym_string_type,
  [sym_array_type] = sym_array_type,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [aux_sym_block_token1] = aux_sym_block_token1,
  [aux_sym_block_token2] = aux_sym_block_token2,
  [sym_body] = sym_body,
  [sym_script_file] = sym_script_file,
  [sym_script_name_declare] = sym_script_name_declare,
  [sym_script_declarer] = sym_script_declarer,
  [sym_script_body] = sym_script_body,
  [sym__top_level_items] = sym__top_level_items,
  [sym_var_declare] = sym_var_declare,
  [sym__type] = sym__type,
  [sym_int_type] = sym_int_type,
  [sym_variable] = sym_variable,
  [sym_block] = sym_block,
  [sym_block_type] = sym_block_type,
  [sym_body_repeat] = sym_body_repeat,
  [aux_sym_script_body_repeat1] = aux_sym_script_body_repeat1,
  [aux_sym_body_repeat_repeat1] = aux_sym_body_repeat_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_script_declarer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_declarer_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_int_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_type_token3] = {
    .visible = false,
    .named = false,
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
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_body] = {
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_type] = {
    .visible = true,
    .named = true,
  },
  [sym_body_repeat] = {
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
  field_declaration = 4,
  field_script_name = 5,
  field_type = 6,
  field_variable = 7,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_block_mode] = "block_mode",
  [field_block_type] = "block_type",
  [field_body] = "body",
  [field_declaration] = "declaration",
  [field_script_name] = "script_name",
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
  [7] = {.index = 11, .length = 2},
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
    {field_block_type, 1},
    {field_body, 2},
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
      if (eof) ADVANCE(50);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(22);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'E') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 34:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(7);
      END_STATE();
    case 44:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_script_declarer_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_script_declarer_token2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_int_type_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_int_type_token2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_int_type_token3);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float_type);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string_type);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_array_type);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_block_token2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_block_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_body);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
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
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_script_declarer_token1] = ACTIONS(1),
    [aux_sym_script_declarer_token2] = ACTIONS(1),
    [aux_sym_int_type_token1] = ACTIONS(1),
    [aux_sym_int_type_token2] = ACTIONS(1),
    [aux_sym_int_type_token3] = ACTIONS(1),
    [sym_float_type] = ACTIONS(1),
    [sym_string_type] = ACTIONS(1),
    [sym_array_type] = ACTIONS(1),
    [aux_sym_block_token1] = ACTIONS(1),
    [aux_sym_block_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_script_file] = STATE(22),
    [sym_script_name_declare] = STATE(4),
    [sym_script_declarer] = STATE(21),
    [aux_sym_script_declarer_token1] = ACTIONS(3),
    [aux_sym_script_declarer_token2] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      aux_sym_block_token1,
    STATE(3), 1,
      aux_sym_script_body_repeat1,
    STATE(6), 1,
      sym__top_level_items,
    STATE(7), 1,
      sym_var_declare,
    STATE(8), 1,
      sym_block,
    STATE(16), 2,
      sym__type,
      sym_int_type,
    ACTIONS(7), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    ACTIONS(9), 3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [33] = 9,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_block_token1,
    STATE(3), 1,
      aux_sym_script_body_repeat1,
    STATE(6), 1,
      sym__top_level_items,
    STATE(7), 1,
      sym_var_declare,
    STATE(8), 1,
      sym_block,
    STATE(16), 2,
      sym__type,
      sym_int_type,
    ACTIONS(15), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    ACTIONS(18), 3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [66] = 9,
    ACTIONS(11), 1,
      aux_sym_block_token1,
    STATE(2), 1,
      aux_sym_script_body_repeat1,
    STATE(6), 1,
      sym__top_level_items,
    STATE(7), 1,
      sym_var_declare,
    STATE(8), 1,
      sym_block,
    STATE(18), 1,
      sym_script_body,
    STATE(16), 2,
      sym__type,
      sym_int_type,
    ACTIONS(7), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    ACTIONS(9), 3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [99] = 1,
    ACTIONS(24), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [110] = 1,
    ACTIONS(26), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [121] = 1,
    ACTIONS(28), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [132] = 1,
    ACTIONS(30), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [143] = 1,
    ACTIONS(32), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [154] = 1,
    ACTIONS(34), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [165] = 1,
    ACTIONS(36), 7,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [175] = 3,
    ACTIONS(38), 1,
      sym_body,
    STATE(13), 1,
      aux_sym_body_repeat_repeat1,
    STATE(23), 1,
      sym_body_repeat,
  [185] = 3,
    ACTIONS(40), 1,
      aux_sym_block_token2,
    ACTIONS(42), 1,
      sym_body,
    STATE(14), 1,
      aux_sym_body_repeat_repeat1,
  [195] = 3,
    ACTIONS(44), 1,
      aux_sym_block_token2,
    ACTIONS(46), 1,
      sym_body,
    STATE(14), 1,
      aux_sym_body_repeat_repeat1,
  [205] = 2,
    ACTIONS(49), 1,
      aux_sym_variable_token1,
    STATE(12), 1,
      sym_block_type,
  [212] = 2,
    ACTIONS(51), 1,
      aux_sym_variable_token1,
    STATE(5), 1,
      sym_variable,
  [219] = 1,
    ACTIONS(53), 1,
      aux_sym_variable_token1,
  [223] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [227] = 1,
    ACTIONS(57), 1,
      sym_identifier,
  [231] = 1,
    ACTIONS(59), 1,
      sym_body,
  [235] = 1,
    ACTIONS(61), 1,
      sym_identifier,
  [239] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [243] = 1,
    ACTIONS(65), 1,
      aux_sym_block_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 165,
  [SMALL_STATE(12)] = 175,
  [SMALL_STATE(13)] = 185,
  [SMALL_STATE(14)] = 195,
  [SMALL_STATE(15)] = 205,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 219,
  [SMALL_STATE(18)] = 223,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 235,
  [SMALL_STATE(22)] = 239,
  [SMALL_STATE(23)] = 243,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(17),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(16),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 5),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 1, .production_id = 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 7),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name_declare, 2, .production_id = 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_repeat, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarer, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_type, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
