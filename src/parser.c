#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 7
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_script_declarator_token1 = 1,
  aux_sym_script_declarator_token2 = 2,
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
  aux_sym_literal_token1 = 16,
  aux_sym_literal_token2 = 17,
  aux_sym_literal_token3 = 18,
  aux_sym_literal_token4 = 19,
  aux_sym_literal_token5 = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_EQ_EQ = 25,
  anon_sym_GT = 26,
  anon_sym_LT = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_GT_EQ = 30,
  aux_sym_conditional_token1 = 31,
  anon_sym_AMP_AMP = 32,
  anon_sym_PIPE_PIPE = 33,
  sym_con_else = 34,
  sym_function_call = 35,
  sym_script_file = 36,
  sym_script_name = 37,
  sym_script_declarator = 38,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_script_declarator_token1] = "scn",
  [aux_sym_script_declarator_token2] = "scriptname",
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
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_literal_token2] = "literal_token2",
  [aux_sym_literal_token3] = "literal_token3",
  [aux_sym_literal_token4] = "literal_token4",
  [aux_sym_literal_token5] = "literal_token5",
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
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_con_else] = "con_else",
  [sym_function_call] = "function_call",
  [sym_script_file] = "script_file",
  [sym_script_name] = "script_name",
  [sym_script_declarator] = "script_declarator",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_script_declarator_token1] = aux_sym_script_declarator_token1,
  [aux_sym_script_declarator_token2] = aux_sym_script_declarator_token2,
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
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
  [aux_sym_literal_token3] = aux_sym_literal_token3,
  [aux_sym_literal_token4] = aux_sym_literal_token4,
  [aux_sym_literal_token5] = aux_sym_literal_token5,
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
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_con_else] = sym_con_else,
  [sym_function_call] = sym_function_call,
  [sym_script_file] = sym_script_file,
  [sym_script_name] = sym_script_name,
  [sym_script_declarator] = sym_script_declarator,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_script_declarator_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_declarator_token2] = {
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
  [sym_script_file] = {
    .visible = true,
    .named = true,
  },
  [sym_script_name] = {
    .visible = true,
    .named = true,
  },
  [sym_script_declarator] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_declaration = 1,
  field_script_name = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_declaration] = "declaration",
  [field_script_name] = "script_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_script_name, 0},
  [1] =
    {field_declaration, 0},
    {field_script_name, 1},
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
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == 'j') ADVANCE(8);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == 'k') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == '|') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(43);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(7);
      END_STATE();
    case 30:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 58:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 59:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 62:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_script_declarator_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_script_declarator_token2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_int_type_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_int_type_token2);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_int_type_token3);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_float_type_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_type_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_block_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_literal_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_literal_token5);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_con_else);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_function_call);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 60},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_script_declarator_token1] = ACTIONS(1),
    [aux_sym_script_declarator_token2] = ACTIONS(1),
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
  },
  [1] = {
    [sym_script_file] = STATE(3),
    [sym_script_name] = STATE(4),
    [sym_script_declarator] = STATE(5),
    [aux_sym_script_declarator_token1] = ACTIONS(3),
    [aux_sym_script_declarator_token2] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 1,
      sym_identifier,
  [4] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
  [12] = 1,
    ACTIONS(11), 1,
      sym_identifier,
  [16] = 1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
  [SMALL_STATE(4)] = 8,
  [SMALL_STATE(5)] = 12,
  [SMALL_STATE(6)] = 16,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarator, 1),
  [7] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1, .production_id = 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 2, .production_id = 2),
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
