#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 29

enum {
  aux_sym_script_declarator_token1 = 1,
  aux_sym_script_declarator_token2 = 2,
  aux_sym_int_token1 = 3,
  aux_sym_int_token2 = 4,
  aux_sym_int_token3 = 5,
  aux_sym_float_token1 = 6,
  aux_sym_string_token1 = 7,
  aux_sym_array_token1 = 8,
  aux_sym_block_token1 = 9,
  aux_sym_block_token2 = 10,
  aux_sym_set_statement_token1 = 11,
  aux_sym_set_statement_token2 = 12,
  aux_sym_let_statement_token1 = 13,
  anon_sym_COLON_EQ = 14,
  aux_sym_quest_variable_token1 = 15,
  aux_sym_literal_token1 = 16,
  aux_sym_literal_token2 = 17,
  aux_sym_literal_token3 = 18,
  aux_sym_literal_token4 = 19,
  aux_sym_literal_token5 = 20,
  sym_functions = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_GT = 27,
  anon_sym_LT = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_GT_EQ = 31,
  aux_sym_conditional_token1 = 32,
  aux_sym_conditional_token2 = 33,
  anon_sym_AMP_AMP = 34,
  anon_sym_PIPE_PIPE = 35,
  sym_con_else = 36,
  sym_function_call = 37,
  sym_loop = 38,
  sym_identifier = 39,
  sym_script_file = 40,
  sym_script_name = 41,
  sym_script_declarator = 42,
  sym_script_body = 43,
  sym_var_declare = 44,
  sym_type = 45,
  sym_int = 46,
  sym_float = 47,
  sym_string = 48,
  sym_array = 49,
  sym_block = 50,
  sym_block_body = 51,
  sym_statement = 52,
  sym_set_statement = 53,
  sym_let_statement = 54,
  sym_variable = 55,
  sym_quest_variable = 56,
  sym_right_hand = 57,
  sym_literal = 58,
  sym_interpreted = 59,
  sym_quest_reference = 60,
  sym_array_var = 61,
  sym_declarator = 62,
  sym_parenthetical = 63,
  sym_equality = 64,
  sym_contained = 65,
  sym_conditional = 66,
  sym_and_or = 67,
  aux_sym_script_file_repeat1 = 68,
  aux_sym_block_repeat1 = 69,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_script_declarator_token1] = "scn",
  [aux_sym_script_declarator_token2] = "scriptname",
  [aux_sym_int_token1] = "int",
  [aux_sym_int_token2] = "short",
  [aux_sym_int_token3] = "long",
  [aux_sym_float_token1] = "float",
  [aux_sym_string_token1] = "string_var",
  [aux_sym_array_token1] = "array_var",
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
  [sym_identifier] = "identifier",
  [sym_script_file] = "script_file",
  [sym_script_name] = "script_name",
  [sym_script_declarator] = "script_declarator",
  [sym_script_body] = "script_body",
  [sym_var_declare] = "var_declare",
  [sym_type] = "type",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym_block] = "block",
  [sym_block_body] = "block_body",
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
  [aux_sym_script_file_repeat1] = "script_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_script_declarator_token1] = aux_sym_script_declarator_token1,
  [aux_sym_script_declarator_token2] = aux_sym_script_declarator_token2,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [aux_sym_int_token3] = aux_sym_int_token3,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_array_token1] = aux_sym_array_token1,
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
  [sym_identifier] = sym_identifier,
  [sym_script_file] = sym_script_file,
  [sym_script_name] = sym_script_name,
  [sym_script_declarator] = sym_script_declarator,
  [sym_script_body] = sym_script_body,
  [sym_var_declare] = sym_var_declare,
  [sym_type] = sym_type,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym_block] = sym_block,
  [sym_block_body] = sym_block_body,
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
  [aux_sym_script_file_repeat1] = aux_sym_script_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [aux_sym_int_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_array_token1] = {
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
  [sym_identifier] = {
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
  [sym_script_body] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declare] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_body] = {
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
  [aux_sym_script_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_array = 1,
  field_array_var = 2,
  field_block_body = 3,
  field_block_mode = 4,
  field_block_type = 5,
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
  field_script_body = 18,
  field_script_name = 19,
  field_set = 20,
  field_statement = 21,
  field_type = 22,
  field_var_declaration = 23,
  field_variable = 24,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_array_var] = "array_var",
  [field_block_body] = "block_body",
  [field_block_mode] = "block_mode",
  [field_block_type] = "block_type",
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
  [field_script_body] = "script_body",
  [field_script_name] = "script_name",
  [field_set] = "set",
  [field_statement] = "statement",
  [field_type] = "type",
  [field_var_declaration] = "var_declaration",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 1},
  [16] = {.index = 19, .length = 1},
  [17] = {.index = 20, .length = 1},
  [18] = {.index = 21, .length = 1},
  [19] = {.index = 22, .length = 1},
  [20] = {.index = 23, .length = 1},
  [21] = {.index = 24, .length = 1},
  [22] = {.index = 25, .length = 1},
  [23] = {.index = 26, .length = 1},
  [24] = {.index = 27, .length = 1},
  [25] = {.index = 28, .length = 2},
  [26] = {.index = 30, .length = 2},
  [27] = {.index = 32, .length = 1},
  [28] = {.index = 33, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_script_name, 0},
  [1] =
    {field_script_body, 0},
  [2] =
    {field_var_declaration, 0},
  [3] =
    {field_block_mode, 0},
  [4] =
    {field_script_body, 1, .inherited = true},
    {field_script_name, 0},
  [6] =
    {field_declaration, 0},
    {field_script_name, 1},
  [8] =
    {field_type, 0},
    {field_variable, 1},
  [10] =
    {field_script_body, 0, .inherited = true},
    {field_script_body, 1, .inherited = true},
  [12] =
    {field_block_type, 1},
  [13] =
    {field_function_call, 0},
  [14] =
    {field_block_body, 0},
  [15] =
    {field_statement, 0},
  [16] =
    {field_set, 0},
  [17] =
    {field_let, 0},
  [18] =
    {field_conditional, 0},
  [19] =
    {field_plain_var, 0},
  [20] =
    {field_quest_var, 0},
  [21] =
    {field_array_var, 0},
  [22] =
    {field_function, 0},
  [23] =
    {field_function_reference, 0},
  [24] =
    {field_variable, 0},
  [25] =
    {field_literal, 0},
  [26] =
    {field_interpreted, 0},
  [27] =
    {field_quest_reference, 0},
  [28] =
    {field_block_body, 2, .inherited = true},
    {field_block_type, 1},
  [30] =
    {field_block_body, 0, .inherited = true},
    {field_block_body, 1, .inherited = true},
  [32] =
    {field_variable, 1},
  [33] =
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
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == 'F') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(48);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(106);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == '[') ADVANCE(94);
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
          lookahead == 'o') ADVANCE(84);
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
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 18:
      if (lookahead == '|') ADVANCE(107);
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
          lookahead == 'd') ADVANCE(82);
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
          lookahead == 'f') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 32:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
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
          lookahead == 'n') ADVANCE(81);
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
          lookahead == 'o') ADVANCE(84);
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
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
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
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 69:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 70:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 71:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_script_declarator_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_script_declarator_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_int_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_int_token2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_token3);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_array_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_block_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_quest_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (lookahead == '.') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_literal_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_literal_token5);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_conditional_token2);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_con_else);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_function_call);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_loop);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
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
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 67},
  [63] = {.lex_state = 67},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
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
  [82] = {.lex_state = 0},
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
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 67},
  [98] = {.lex_state = 67},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 67},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 67},
  [112] = {.lex_state = 67},
  [113] = {.lex_state = 67},
  [114] = {.lex_state = 67},
  [115] = {.lex_state = 67},
  [116] = {.lex_state = 67},
  [117] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_script_declarator_token1] = ACTIONS(1),
    [aux_sym_script_declarator_token2] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [aux_sym_int_token2] = ACTIONS(1),
    [aux_sym_int_token3] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_array_token1] = ACTIONS(1),
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
    [sym_script_file] = STATE(117),
    [sym_script_name] = STATE(14),
    [sym_script_declarator] = STATE(116),
    [aux_sym_script_declarator_token1] = ACTIONS(3),
    [aux_sym_script_declarator_token2] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_quest_reference,
    STATE(20), 1,
      sym_interpreted,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_variable,
    STATE(25), 1,
      sym_declarator,
    STATE(33), 1,
      sym_parenthetical,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(15), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(102), 3,
      sym_equality,
      sym_contained,
      sym_and_or,
  [55] = 16,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_quest_reference,
    STATE(20), 1,
      sym_interpreted,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_variable,
    STATE(25), 1,
      sym_declarator,
    STATE(33), 1,
      sym_parenthetical,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(15), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(105), 3,
      sym_equality,
      sym_contained,
      sym_and_or,
  [110] = 16,
    ACTIONS(19), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(25), 1,
      sym_functions,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(77), 1,
      sym_quest_variable,
    STATE(78), 1,
      sym_array_var,
    STATE(83), 1,
      sym_variable,
    STATE(84), 1,
      sym_literal,
    STATE(85), 1,
      sym_interpreted,
    STATE(86), 1,
      sym_quest_reference,
    STATE(87), 1,
      sym_parenthetical,
    STATE(93), 1,
      sym_declarator,
    STATE(94), 1,
      sym_contained,
    STATE(95), 1,
      sym_right_hand,
    ACTIONS(21), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(23), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [162] = 15,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_quest_reference,
    STATE(20), 1,
      sym_interpreted,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_variable,
    STATE(25), 1,
      sym_declarator,
    STATE(33), 1,
      sym_parenthetical,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(26), 2,
      sym_equality,
      sym_contained,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [212] = 15,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_quest_reference,
    STATE(20), 1,
      sym_interpreted,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_variable,
    STATE(25), 1,
      sym_declarator,
    STATE(33), 1,
      sym_parenthetical,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(27), 2,
      sym_equality,
      sym_contained,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [262] = 16,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_quest_reference,
    STATE(20), 1,
      sym_interpreted,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_variable,
    STATE(33), 1,
      sym_parenthetical,
    STATE(48), 1,
      sym_contained,
    STATE(55), 1,
      sym_declarator,
    STATE(59), 1,
      sym_right_hand,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [314] = 16,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_quest_reference,
    STATE(20), 1,
      sym_interpreted,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_variable,
    STATE(33), 1,
      sym_parenthetical,
    STATE(47), 1,
      sym_right_hand,
    STATE(48), 1,
      sym_contained,
    STATE(55), 1,
      sym_declarator,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [366] = 16,
    ACTIONS(19), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(25), 1,
      sym_functions,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(77), 1,
      sym_quest_variable,
    STATE(78), 1,
      sym_array_var,
    STATE(83), 1,
      sym_variable,
    STATE(84), 1,
      sym_literal,
    STATE(85), 1,
      sym_interpreted,
    STATE(86), 1,
      sym_quest_reference,
    STATE(87), 1,
      sym_parenthetical,
    STATE(92), 1,
      sym_right_hand,
    STATE(93), 1,
      sym_declarator,
    STATE(94), 1,
      sym_contained,
    ACTIONS(21), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(23), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [418] = 12,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_float_token1,
    ACTIONS(37), 1,
      aux_sym_string_token1,
    ACTIONS(39), 1,
      aux_sym_array_token1,
    ACTIONS(41), 1,
      aux_sym_block_token1,
    STATE(11), 1,
      aux_sym_script_file_repeat1,
    STATE(35), 1,
      sym_block,
    STATE(37), 1,
      sym_script_body,
    STATE(38), 1,
      sym_var_declare,
    STATE(97), 1,
      sym_type,
    ACTIONS(33), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(98), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [460] = 12,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      aux_sym_float_token1,
    ACTIONS(51), 1,
      aux_sym_string_token1,
    ACTIONS(54), 1,
      aux_sym_array_token1,
    ACTIONS(57), 1,
      aux_sym_block_token1,
    STATE(11), 1,
      aux_sym_script_file_repeat1,
    STATE(35), 1,
      sym_block,
    STATE(37), 1,
      sym_script_body,
    STATE(38), 1,
      sym_var_declare,
    STATE(97), 1,
      sym_type,
    ACTIONS(45), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(98), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [502] = 2,
    ACTIONS(62), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(60), 14,
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
  [524] = 2,
    ACTIONS(66), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(64), 14,
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
  [546] = 12,
    ACTIONS(35), 1,
      aux_sym_float_token1,
    ACTIONS(37), 1,
      aux_sym_string_token1,
    ACTIONS(39), 1,
      aux_sym_array_token1,
    ACTIONS(41), 1,
      aux_sym_block_token1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_script_file_repeat1,
    STATE(35), 1,
      sym_block,
    STATE(37), 1,
      sym_script_body,
    STATE(38), 1,
      sym_var_declare,
    STATE(97), 1,
      sym_type,
    ACTIONS(33), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(98), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [588] = 2,
    ACTIONS(72), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(70), 14,
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
  [610] = 2,
    ACTIONS(76), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(74), 13,
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
  [631] = 3,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(78), 12,
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
  [654] = 2,
    ACTIONS(86), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(84), 12,
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
  [674] = 2,
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
  [694] = 2,
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
  [714] = 2,
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
  [734] = 2,
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
  [754] = 2,
    ACTIONS(107), 3,
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
  [774] = 12,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_quest_reference,
    STATE(20), 1,
      sym_interpreted,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_variable,
    STATE(39), 1,
      sym_declarator,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [814] = 4,
    ACTIONS(116), 1,
      sym_function_call,
    ACTIONS(114), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(112), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(110), 7,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [837] = 12,
    ACTIONS(118), 1,
      aux_sym_set_statement_token1,
    ACTIONS(120), 1,
      aux_sym_let_statement_token1,
    ACTIONS(122), 1,
      aux_sym_conditional_token1,
    ACTIONS(124), 1,
      sym_function_call,
    ACTIONS(126), 1,
      sym_loop,
    STATE(31), 1,
      sym_and_or,
    STATE(70), 1,
      sym_statement,
    STATE(71), 1,
      sym_set_statement,
    STATE(73), 1,
      sym_block_body,
    STATE(75), 1,
      sym_let_statement,
    STATE(76), 1,
      sym_conditional,
    ACTIONS(15), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [875] = 12,
    ACTIONS(118), 1,
      aux_sym_set_statement_token1,
    ACTIONS(120), 1,
      aux_sym_let_statement_token1,
    ACTIONS(122), 1,
      aux_sym_conditional_token1,
    ACTIONS(124), 1,
      sym_function_call,
    ACTIONS(126), 1,
      sym_loop,
    STATE(32), 1,
      sym_and_or,
    STATE(66), 1,
      sym_block_body,
    STATE(70), 1,
      sym_statement,
    STATE(71), 1,
      sym_set_statement,
    STATE(75), 1,
      sym_let_statement,
    STATE(76), 1,
      sym_conditional,
    ACTIONS(15), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [913] = 12,
    ACTIONS(128), 1,
      aux_sym_block_token2,
    ACTIONS(130), 1,
      aux_sym_set_statement_token1,
    ACTIONS(132), 1,
      aux_sym_let_statement_token1,
    ACTIONS(134), 1,
      aux_sym_conditional_token1,
    ACTIONS(136), 1,
      sym_function_call,
    ACTIONS(138), 1,
      sym_loop,
    STATE(30), 1,
      aux_sym_block_repeat1,
    STATE(43), 1,
      sym_statement,
    STATE(44), 1,
      sym_conditional,
    STATE(51), 1,
      sym_set_statement,
    STATE(52), 1,
      sym_let_statement,
    STATE(54), 1,
      sym_block_body,
  [950] = 12,
    ACTIONS(140), 1,
      aux_sym_block_token2,
    ACTIONS(142), 1,
      aux_sym_set_statement_token1,
    ACTIONS(145), 1,
      aux_sym_let_statement_token1,
    ACTIONS(148), 1,
      aux_sym_conditional_token1,
    ACTIONS(151), 1,
      sym_function_call,
    ACTIONS(154), 1,
      sym_loop,
    STATE(29), 1,
      aux_sym_block_repeat1,
    STATE(43), 1,
      sym_statement,
    STATE(44), 1,
      sym_conditional,
    STATE(51), 1,
      sym_set_statement,
    STATE(52), 1,
      sym_let_statement,
    STATE(54), 1,
      sym_block_body,
  [987] = 12,
    ACTIONS(130), 1,
      aux_sym_set_statement_token1,
    ACTIONS(132), 1,
      aux_sym_let_statement_token1,
    ACTIONS(134), 1,
      aux_sym_conditional_token1,
    ACTIONS(136), 1,
      sym_function_call,
    ACTIONS(138), 1,
      sym_loop,
    ACTIONS(157), 1,
      aux_sym_block_token2,
    STATE(29), 1,
      aux_sym_block_repeat1,
    STATE(43), 1,
      sym_statement,
    STATE(44), 1,
      sym_conditional,
    STATE(51), 1,
      sym_set_statement,
    STATE(52), 1,
      sym_let_statement,
    STATE(54), 1,
      sym_block_body,
  [1024] = 10,
    ACTIONS(118), 1,
      aux_sym_set_statement_token1,
    ACTIONS(120), 1,
      aux_sym_let_statement_token1,
    ACTIONS(122), 1,
      aux_sym_conditional_token1,
    ACTIONS(124), 1,
      sym_function_call,
    ACTIONS(126), 1,
      sym_loop,
    STATE(70), 1,
      sym_statement,
    STATE(71), 1,
      sym_set_statement,
    STATE(72), 1,
      sym_block_body,
    STATE(75), 1,
      sym_let_statement,
    STATE(76), 1,
      sym_conditional,
  [1055] = 10,
    ACTIONS(118), 1,
      aux_sym_set_statement_token1,
    ACTIONS(120), 1,
      aux_sym_let_statement_token1,
    ACTIONS(122), 1,
      aux_sym_conditional_token1,
    ACTIONS(124), 1,
      sym_function_call,
    ACTIONS(126), 1,
      sym_loop,
    STATE(70), 1,
      sym_statement,
    STATE(71), 1,
      sym_set_statement,
    STATE(75), 1,
      sym_let_statement,
    STATE(76), 1,
      sym_conditional,
    STATE(91), 1,
      sym_block_body,
  [1086] = 2,
    ACTIONS(116), 1,
      sym_function_call,
    ACTIONS(110), 8,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1100] = 2,
    ACTIONS(161), 1,
      sym_function_call,
    ACTIONS(159), 8,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1114] = 1,
    ACTIONS(163), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1125] = 1,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1136] = 1,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1147] = 1,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1158] = 2,
    ACTIONS(173), 1,
      sym_function_call,
    ACTIONS(171), 7,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1171] = 1,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1182] = 1,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1193] = 1,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1204] = 2,
    ACTIONS(183), 1,
      sym_function_call,
    ACTIONS(181), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1215] = 2,
    ACTIONS(187), 1,
      sym_function_call,
    ACTIONS(185), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1226] = 2,
    ACTIONS(191), 1,
      sym_function_call,
    ACTIONS(189), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1237] = 2,
    ACTIONS(195), 1,
      sym_function_call,
    ACTIONS(193), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1248] = 2,
    ACTIONS(199), 1,
      sym_function_call,
    ACTIONS(197), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1259] = 2,
    ACTIONS(203), 1,
      sym_function_call,
    ACTIONS(201), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1270] = 3,
    STATE(107), 1,
      sym_literal,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1283] = 2,
    ACTIONS(207), 1,
      sym_function_call,
    ACTIONS(205), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1294] = 2,
    ACTIONS(211), 1,
      sym_function_call,
    ACTIONS(209), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1305] = 2,
    ACTIONS(215), 1,
      sym_function_call,
    ACTIONS(213), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1316] = 3,
    STATE(99), 1,
      sym_literal,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1329] = 2,
    ACTIONS(219), 1,
      sym_function_call,
    ACTIONS(217), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1340] = 2,
    ACTIONS(116), 1,
      sym_function_call,
    ACTIONS(110), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1351] = 2,
    ACTIONS(223), 1,
      sym_function_call,
    ACTIONS(221), 5,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      sym_loop,
  [1362] = 2,
    ACTIONS(227), 1,
      sym_function_call,
    ACTIONS(225), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1373] = 2,
    ACTIONS(231), 1,
      sym_function_call,
    ACTIONS(229), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1384] = 2,
    ACTIONS(235), 1,
      sym_function_call,
    ACTIONS(233), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1395] = 5,
    ACTIONS(237), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(103), 1,
      sym_variable,
  [1411] = 5,
    ACTIONS(237), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(96), 1,
      sym_variable,
  [1427] = 5,
    ACTIONS(237), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(101), 1,
      sym_variable,
  [1443] = 5,
    ACTIONS(237), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(12), 1,
      sym_array_var,
    STATE(15), 1,
      sym_quest_variable,
    STATE(104), 1,
      sym_variable,
  [1459] = 2,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [1467] = 2,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1475] = 2,
    ACTIONS(243), 1,
      aux_sym_conditional_token2,
    ACTIONS(245), 1,
      sym_con_else,
  [1482] = 1,
    ACTIONS(84), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1487] = 1,
    ACTIONS(193), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1492] = 1,
    ACTIONS(189), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1497] = 1,
    ACTIONS(181), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1502] = 1,
    ACTIONS(209), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1507] = 2,
    ACTIONS(247), 1,
      aux_sym_conditional_token2,
    ACTIONS(249), 1,
      sym_con_else,
  [1514] = 2,
    ACTIONS(251), 1,
      aux_sym_conditional_token2,
    ACTIONS(253), 1,
      sym_con_else,
  [1521] = 1,
    ACTIONS(229), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1526] = 1,
    ACTIONS(213), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1531] = 1,
    ACTIONS(185), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1536] = 1,
    ACTIONS(70), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1541] = 1,
    ACTIONS(60), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1546] = 1,
    ACTIONS(104), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1551] = 1,
    ACTIONS(74), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1556] = 1,
    ACTIONS(159), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1561] = 1,
    ACTIONS(255), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [1566] = 1,
    ACTIONS(100), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1571] = 1,
    ACTIONS(96), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1576] = 1,
    ACTIONS(92), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1581] = 1,
    ACTIONS(88), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1586] = 1,
    ACTIONS(110), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1591] = 1,
    ACTIONS(205), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1596] = 1,
    ACTIONS(64), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1601] = 1,
    ACTIONS(225), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1606] = 2,
    ACTIONS(257), 1,
      aux_sym_conditional_token2,
    ACTIONS(259), 1,
      sym_con_else,
  [1613] = 1,
    ACTIONS(233), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1618] = 1,
    ACTIONS(110), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1623] = 1,
    ACTIONS(201), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1628] = 1,
    ACTIONS(197), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1633] = 1,
    ACTIONS(261), 1,
      aux_sym_set_statement_token2,
  [1637] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [1641] = 1,
    ACTIONS(265), 1,
      sym_identifier,
  [1645] = 1,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
  [1649] = 1,
    ACTIONS(269), 1,
      aux_sym_conditional_token2,
  [1653] = 1,
    ACTIONS(271), 1,
      anon_sym_COLON_EQ,
  [1657] = 1,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
  [1661] = 1,
    ACTIONS(275), 1,
      aux_sym_set_statement_token2,
  [1665] = 1,
    ACTIONS(277), 1,
      anon_sym_COLON_EQ,
  [1669] = 1,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
  [1673] = 1,
    ACTIONS(257), 1,
      aux_sym_conditional_token2,
  [1677] = 1,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
  [1681] = 1,
    ACTIONS(247), 1,
      aux_sym_conditional_token2,
  [1685] = 1,
    ACTIONS(283), 1,
      sym_identifier,
  [1689] = 1,
    ACTIONS(285), 1,
      aux_sym_conditional_token2,
  [1693] = 1,
    ACTIONS(287), 1,
      sym_identifier,
  [1697] = 1,
    ACTIONS(289), 1,
      sym_identifier,
  [1701] = 1,
    ACTIONS(291), 1,
      sym_identifier,
  [1705] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [1709] = 1,
    ACTIONS(295), 1,
      sym_identifier,
  [1713] = 1,
    ACTIONS(297), 1,
      sym_identifier,
  [1717] = 1,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 314,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 418,
  [SMALL_STATE(11)] = 460,
  [SMALL_STATE(12)] = 502,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 546,
  [SMALL_STATE(15)] = 588,
  [SMALL_STATE(16)] = 610,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 654,
  [SMALL_STATE(19)] = 674,
  [SMALL_STATE(20)] = 694,
  [SMALL_STATE(21)] = 714,
  [SMALL_STATE(22)] = 734,
  [SMALL_STATE(23)] = 754,
  [SMALL_STATE(24)] = 774,
  [SMALL_STATE(25)] = 814,
  [SMALL_STATE(26)] = 837,
  [SMALL_STATE(27)] = 875,
  [SMALL_STATE(28)] = 913,
  [SMALL_STATE(29)] = 950,
  [SMALL_STATE(30)] = 987,
  [SMALL_STATE(31)] = 1024,
  [SMALL_STATE(32)] = 1055,
  [SMALL_STATE(33)] = 1086,
  [SMALL_STATE(34)] = 1100,
  [SMALL_STATE(35)] = 1114,
  [SMALL_STATE(36)] = 1125,
  [SMALL_STATE(37)] = 1136,
  [SMALL_STATE(38)] = 1147,
  [SMALL_STATE(39)] = 1158,
  [SMALL_STATE(40)] = 1171,
  [SMALL_STATE(41)] = 1182,
  [SMALL_STATE(42)] = 1193,
  [SMALL_STATE(43)] = 1204,
  [SMALL_STATE(44)] = 1215,
  [SMALL_STATE(45)] = 1226,
  [SMALL_STATE(46)] = 1237,
  [SMALL_STATE(47)] = 1248,
  [SMALL_STATE(48)] = 1259,
  [SMALL_STATE(49)] = 1270,
  [SMALL_STATE(50)] = 1283,
  [SMALL_STATE(51)] = 1294,
  [SMALL_STATE(52)] = 1305,
  [SMALL_STATE(53)] = 1316,
  [SMALL_STATE(54)] = 1329,
  [SMALL_STATE(55)] = 1340,
  [SMALL_STATE(56)] = 1351,
  [SMALL_STATE(57)] = 1362,
  [SMALL_STATE(58)] = 1373,
  [SMALL_STATE(59)] = 1384,
  [SMALL_STATE(60)] = 1395,
  [SMALL_STATE(61)] = 1411,
  [SMALL_STATE(62)] = 1427,
  [SMALL_STATE(63)] = 1443,
  [SMALL_STATE(64)] = 1459,
  [SMALL_STATE(65)] = 1467,
  [SMALL_STATE(66)] = 1475,
  [SMALL_STATE(67)] = 1482,
  [SMALL_STATE(68)] = 1487,
  [SMALL_STATE(69)] = 1492,
  [SMALL_STATE(70)] = 1497,
  [SMALL_STATE(71)] = 1502,
  [SMALL_STATE(72)] = 1507,
  [SMALL_STATE(73)] = 1514,
  [SMALL_STATE(74)] = 1521,
  [SMALL_STATE(75)] = 1526,
  [SMALL_STATE(76)] = 1531,
  [SMALL_STATE(77)] = 1536,
  [SMALL_STATE(78)] = 1541,
  [SMALL_STATE(79)] = 1546,
  [SMALL_STATE(80)] = 1551,
  [SMALL_STATE(81)] = 1556,
  [SMALL_STATE(82)] = 1561,
  [SMALL_STATE(83)] = 1566,
  [SMALL_STATE(84)] = 1571,
  [SMALL_STATE(85)] = 1576,
  [SMALL_STATE(86)] = 1581,
  [SMALL_STATE(87)] = 1586,
  [SMALL_STATE(88)] = 1591,
  [SMALL_STATE(89)] = 1596,
  [SMALL_STATE(90)] = 1601,
  [SMALL_STATE(91)] = 1606,
  [SMALL_STATE(92)] = 1613,
  [SMALL_STATE(93)] = 1618,
  [SMALL_STATE(94)] = 1623,
  [SMALL_STATE(95)] = 1628,
  [SMALL_STATE(96)] = 1633,
  [SMALL_STATE(97)] = 1637,
  [SMALL_STATE(98)] = 1641,
  [SMALL_STATE(99)] = 1645,
  [SMALL_STATE(100)] = 1649,
  [SMALL_STATE(101)] = 1653,
  [SMALL_STATE(102)] = 1657,
  [SMALL_STATE(103)] = 1661,
  [SMALL_STATE(104)] = 1665,
  [SMALL_STATE(105)] = 1669,
  [SMALL_STATE(106)] = 1673,
  [SMALL_STATE(107)] = 1677,
  [SMALL_STATE(108)] = 1681,
  [SMALL_STATE(109)] = 1685,
  [SMALL_STATE(110)] = 1689,
  [SMALL_STATE(111)] = 1693,
  [SMALL_STATE(112)] = 1697,
  [SMALL_STATE(113)] = 1701,
  [SMALL_STATE(114)] = 1705,
  [SMALL_STATE(115)] = 1709,
  [SMALL_STATE(116)] = 1713,
  [SMALL_STATE(117)] = 1717,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2, .production_id = 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(115),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(114),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(113),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(112),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(111),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 18),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 18),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_var, 4, .production_id = 28),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_var, 4, .production_id = 28),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 17),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 17),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 16),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 16),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 19),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 19),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 24),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 24),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 23),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 23),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 22),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 22),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 21),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 21),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contained, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contained, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 26),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 26), SHIFT_REPEAT(61),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 26), SHIFT_REPEAT(62),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 26), SHIFT_REPEAT(6),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 26), SHIFT_REPEAT(46),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 26), SHIFT_REPEAT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 9),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 1, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 2, .production_id = 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 25),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 7),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_body, 1, .production_id = 12),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_body, 1, .production_id = 12),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_body, 1, .production_id = 15),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_body, 1, .production_id = 15),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_body, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_body, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_body, 1, .production_id = 10),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_body, 1, .production_id = 10),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 27),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 27),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 13),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 13),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 14),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 14),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 11),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 11),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_or, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_or, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 27),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 27),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_variable, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarator, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [299] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
