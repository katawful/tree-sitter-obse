#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 23
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 25

enum {
  aux_sym_script_declarator_token1 = 1,
  aux_sym_script_declarator_token2 = 2,
  sym_identifier = 3,
  aux_sym_int_token1 = 4,
  aux_sym_int_token2 = 5,
  aux_sym_int_token3 = 6,
  aux_sym_float_token1 = 7,
  aux_sym_string_token1 = 8,
  aux_sym_array_token1 = 9,
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
  sym_body_repeat = 51,
  sym_body = 52,
  sym_statement = 53,
  sym_set_statement = 54,
  sym_let_statement = 55,
  sym_variable = 56,
  sym_quest_variable = 57,
  sym_right_hand = 58,
  sym_literal = 59,
  sym_interpreted = 60,
  sym_quest_reference = 61,
  sym_array_var = 62,
  sym_declarator = 63,
  sym_parenthetical = 64,
  sym_equality = 65,
  sym_contained = 66,
  sym_conditional = 67,
  sym_and_or = 68,
  aux_sym_script_body_repeat1 = 69,
  aux_sym_body_repeat_repeat1 = 70,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_script_declarator_token1] = "scn",
  [aux_sym_script_declarator_token2] = "scriptname",
  [sym_identifier] = "identifier",
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
  [aux_sym_script_declarator_token1] = aux_sym_script_declarator_token1,
  [aux_sym_script_declarator_token2] = aux_sym_script_declarator_token2,
  [sym_identifier] = sym_identifier,
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
  field_var_declaration = 22,
  field_variable = 23,
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
  [field_var_declaration] = "var_declaration",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 4},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 1},
  [20] = {.index = 26, .length = 1},
  [21] = {.index = 27, .length = 1},
  [22] = {.index = 28, .length = 2},
  [23] = {.index = 30, .length = 1},
  [24] = {.index = 31, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
    {field_script_name, 0},
  [2] =
    {field_var_declaration, 0},
  [3] =
    {field_block_mode, 0},
  [4] =
    {field_block_mode, 0, .inherited = true},
    {field_var_declaration, 0, .inherited = true},
  [6] =
    {field_declaration, 0},
    {field_script_name, 1},
  [8] =
    {field_type, 0},
    {field_variable, 1},
  [10] =
    {field_block_mode, 0, .inherited = true},
    {field_block_mode, 1, .inherited = true},
    {field_var_declaration, 0, .inherited = true},
    {field_var_declaration, 1, .inherited = true},
  [14] =
    {field_function_call, 0},
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
    {field_function_reference, 0},
  [23] =
    {field_function, 0},
  [24] =
    {field_variable, 0},
  [25] =
    {field_literal, 0},
  [26] =
    {field_interpreted, 0},
  [27] =
    {field_quest_reference, 0},
  [28] =
    {field_block_type, 1},
    {field_body, 2},
  [30] =
    {field_variable, 1},
  [31] =
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
      ACCEPT_TOKEN(aux_sym_script_declarator_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_script_declarator_token2);
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
      ACCEPT_TOKEN(aux_sym_int_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_int_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_int_token3);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_array_token1);
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
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
  [57] = {.lex_state = 67},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
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
  [93] = {.lex_state = 67},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 67},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 67},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 67},
  [104] = {.lex_state = 67},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 67},
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
    [sym_script_file] = STATE(116),
    [sym_script_name] = STATE(15),
    [sym_script_declarator] = STATE(115),
    [aux_sym_script_declarator_token1] = ACTIONS(3),
    [aux_sym_script_declarator_token2] = ACTIONS(3),
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
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
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
    STATE(102), 3,
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
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
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
  [110] = 15,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
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
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
      sym_quest_reference,
    STATE(34), 1,
      sym_parenthetical,
    STATE(43), 1,
      sym_declarator,
    STATE(44), 1,
      sym_right_hand,
    STATE(54), 1,
      sym_contained,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [212] = 16,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(27), 1,
      sym_functions,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_right_hand,
    STATE(64), 1,
      sym_parenthetical,
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
      sym_contained,
    STATE(91), 1,
      sym_declarator,
    ACTIONS(23), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(25), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [264] = 16,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(27), 1,
      sym_functions,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_parenthetical,
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
      sym_contained,
    STATE(91), 1,
      sym_declarator,
    STATE(92), 1,
      sym_right_hand,
    ACTIONS(23), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(25), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [316] = 15,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
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
  [366] = 16,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
      sym_quest_reference,
    STATE(34), 1,
      sym_parenthetical,
    STATE(42), 1,
      sym_right_hand,
    STATE(43), 1,
      sym_declarator,
    STATE(54), 1,
      sym_contained,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [418] = 2,
    ACTIONS(33), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(31), 14,
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
  [440] = 2,
    ACTIONS(37), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(35), 14,
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
  [462] = 2,
    ACTIONS(41), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(39), 14,
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
  [484] = 11,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_float_token1,
    ACTIONS(49), 1,
      aux_sym_string_token1,
    ACTIONS(51), 1,
      aux_sym_array_token1,
    ACTIONS(53), 1,
      aux_sym_block_token1,
    STATE(14), 1,
      aux_sym_script_body_repeat1,
    STATE(37), 1,
      sym_var_declare,
    STATE(39), 1,
      sym_block,
    STATE(93), 1,
      sym_type,
    ACTIONS(45), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(96), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [523] = 11,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_float_token1,
    ACTIONS(63), 1,
      aux_sym_string_token1,
    ACTIONS(66), 1,
      aux_sym_array_token1,
    ACTIONS(69), 1,
      aux_sym_block_token1,
    STATE(14), 1,
      aux_sym_script_body_repeat1,
    STATE(37), 1,
      sym_var_declare,
    STATE(39), 1,
      sym_block,
    STATE(93), 1,
      sym_type,
    ACTIONS(57), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(96), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [562] = 11,
    ACTIONS(47), 1,
      aux_sym_float_token1,
    ACTIONS(49), 1,
      aux_sym_string_token1,
    ACTIONS(51), 1,
      aux_sym_array_token1,
    ACTIONS(53), 1,
      aux_sym_block_token1,
    STATE(13), 1,
      aux_sym_script_body_repeat1,
    STATE(37), 1,
      sym_var_declare,
    STATE(39), 1,
      sym_block,
    STATE(93), 1,
      sym_type,
    STATE(101), 1,
      sym_script_body,
    ACTIONS(45), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(96), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [601] = 2,
    ACTIONS(74), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(72), 13,
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
  [622] = 3,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(76), 12,
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
  [645] = 2,
    ACTIONS(84), 3,
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
  [665] = 2,
    ACTIONS(88), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(86), 12,
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
  [685] = 2,
    ACTIONS(92), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(90), 12,
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
  [705] = 2,
    ACTIONS(96), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(94), 12,
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
  [725] = 2,
    ACTIONS(100), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(98), 12,
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
  [745] = 12,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(13), 1,
      sym_functions,
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_literal,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
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
  [785] = 2,
    ACTIONS(105), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(102), 12,
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
  [805] = 4,
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
  [828] = 12,
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
    STATE(65), 1,
      sym_body,
    STATE(76), 1,
      sym_statement,
    STATE(77), 1,
      sym_set_statement,
    STATE(78), 1,
      sym_let_statement,
    STATE(79), 1,
      sym_conditional,
    ACTIONS(17), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [866] = 12,
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
    STATE(68), 1,
      sym_body,
    STATE(76), 1,
      sym_statement,
    STATE(77), 1,
      sym_set_statement,
    STATE(78), 1,
      sym_let_statement,
    STATE(79), 1,
      sym_conditional,
    ACTIONS(17), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [904] = 11,
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
    STATE(41), 1,
      sym_let_statement,
    STATE(48), 1,
      sym_statement,
    STATE(49), 1,
      sym_set_statement,
    STATE(50), 1,
      sym_conditional,
    STATE(97), 1,
      sym_body_repeat,
    STATE(29), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
  [939] = 11,
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
    STATE(41), 1,
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
  [974] = 11,
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
    STATE(41), 1,
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
  [1009] = 10,
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
    STATE(67), 1,
      sym_body,
    STATE(76), 1,
      sym_statement,
    STATE(77), 1,
      sym_set_statement,
    STATE(78), 1,
      sym_let_statement,
    STATE(79), 1,
      sym_conditional,
  [1040] = 10,
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
    STATE(71), 1,
      sym_body,
    STATE(76), 1,
      sym_statement,
    STATE(77), 1,
      sym_set_statement,
    STATE(78), 1,
      sym_let_statement,
    STATE(79), 1,
      sym_conditional,
  [1071] = 2,
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
  [1085] = 2,
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
  [1099] = 2,
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
  [1112] = 1,
    ACTIONS(163), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1123] = 1,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1134] = 1,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1145] = 1,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1156] = 1,
    ACTIONS(171), 7,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1166] = 2,
    ACTIONS(175), 1,
      sym_function_call,
    ACTIONS(173), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1177] = 2,
    ACTIONS(179), 1,
      sym_function_call,
    ACTIONS(177), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1188] = 2,
    ACTIONS(114), 1,
      sym_function_call,
    ACTIONS(108), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1199] = 2,
    ACTIONS(183), 1,
      sym_function_call,
    ACTIONS(181), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1210] = 2,
    ACTIONS(187), 1,
      sym_function_call,
    ACTIONS(185), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1221] = 2,
    ACTIONS(191), 1,
      sym_function_call,
    ACTIONS(189), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1232] = 3,
    STATE(106), 1,
      sym_literal,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1245] = 2,
    ACTIONS(195), 1,
      sym_function_call,
    ACTIONS(193), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1256] = 2,
    ACTIONS(199), 1,
      sym_function_call,
    ACTIONS(197), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1267] = 2,
    ACTIONS(203), 1,
      sym_function_call,
    ACTIONS(201), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1278] = 2,
    ACTIONS(207), 1,
      sym_function_call,
    ACTIONS(205), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1289] = 2,
    ACTIONS(211), 1,
      sym_function_call,
    ACTIONS(209), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1300] = 2,
    ACTIONS(215), 1,
      sym_function_call,
    ACTIONS(213), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1311] = 2,
    ACTIONS(219), 1,
      sym_function_call,
    ACTIONS(217), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1322] = 3,
    STATE(108), 1,
      sym_literal,
    ACTIONS(9), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(11), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1335] = 2,
    ACTIONS(223), 1,
      sym_function_call,
    ACTIONS(221), 5,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      sym_loop,
  [1346] = 5,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(227), 1,
      aux_sym_quest_variable_token1,
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(94), 1,
      sym_variable,
  [1362] = 5,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(227), 1,
      aux_sym_quest_variable_token1,
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(114), 1,
      sym_variable,
  [1378] = 5,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(227), 1,
      aux_sym_quest_variable_token1,
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(105), 1,
      sym_variable,
  [1394] = 5,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(227), 1,
      aux_sym_quest_variable_token1,
    STATE(10), 1,
      sym_array_var,
    STATE(11), 1,
      sym_quest_variable,
    STATE(111), 1,
      sym_variable,
  [1410] = 2,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1418] = 2,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [1426] = 1,
    ACTIONS(177), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1431] = 1,
    ACTIONS(108), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1436] = 2,
    ACTIONS(231), 1,
      aux_sym_conditional_token2,
    ACTIONS(233), 1,
      sym_con_else,
  [1443] = 1,
    ACTIONS(235), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [1448] = 2,
    ACTIONS(237), 1,
      aux_sym_conditional_token2,
    ACTIONS(239), 1,
      sym_con_else,
  [1455] = 2,
    ACTIONS(241), 1,
      aux_sym_conditional_token2,
    ACTIONS(243), 1,
      sym_con_else,
  [1462] = 1,
    ACTIONS(213), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1467] = 1,
    ACTIONS(209), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1472] = 2,
    ACTIONS(245), 1,
      aux_sym_conditional_token2,
    ACTIONS(247), 1,
      sym_con_else,
  [1479] = 1,
    ACTIONS(39), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1484] = 1,
    ACTIONS(205), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1489] = 1,
    ACTIONS(185), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1494] = 1,
    ACTIONS(189), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1499] = 1,
    ACTIONS(193), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1504] = 1,
    ACTIONS(197), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1509] = 1,
    ACTIONS(173), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1514] = 1,
    ACTIONS(201), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1519] = 1,
    ACTIONS(35), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1524] = 1,
    ACTIONS(31), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1529] = 1,
    ACTIONS(155), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1534] = 1,
    ACTIONS(102), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1539] = 1,
    ACTIONS(72), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1544] = 1,
    ACTIONS(82), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1549] = 1,
    ACTIONS(86), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1554] = 1,
    ACTIONS(90), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1559] = 1,
    ACTIONS(94), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1564] = 1,
    ACTIONS(98), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1569] = 1,
    ACTIONS(217), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1574] = 1,
    ACTIONS(108), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1579] = 1,
    ACTIONS(181), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1584] = 1,
    ACTIONS(249), 1,
      sym_identifier,
  [1588] = 1,
    ACTIONS(251), 1,
      aux_sym_set_statement_token2,
  [1592] = 1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [1596] = 1,
    ACTIONS(255), 1,
      sym_identifier,
  [1600] = 1,
    ACTIONS(257), 1,
      aux_sym_block_token2,
  [1604] = 1,
    ACTIONS(259), 1,
      aux_sym_conditional_token2,
  [1608] = 1,
    ACTIONS(261), 1,
      sym_identifier,
  [1612] = 1,
    ACTIONS(245), 1,
      aux_sym_conditional_token2,
  [1616] = 1,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
  [1620] = 1,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
  [1624] = 1,
    ACTIONS(267), 1,
      sym_identifier,
  [1628] = 1,
    ACTIONS(269), 1,
      sym_identifier,
  [1632] = 1,
    ACTIONS(271), 1,
      anon_sym_COLON_EQ,
  [1636] = 1,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
  [1640] = 1,
    ACTIONS(237), 1,
      aux_sym_conditional_token2,
  [1644] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
  [1648] = 1,
    ACTIONS(277), 1,
      aux_sym_conditional_token2,
  [1652] = 1,
    ACTIONS(279), 1,
      sym_identifier,
  [1656] = 1,
    ACTIONS(281), 1,
      aux_sym_set_statement_token2,
  [1660] = 1,
    ACTIONS(283), 1,
      sym_identifier,
  [1664] = 1,
    ACTIONS(285), 1,
      sym_identifier,
  [1668] = 1,
    ACTIONS(287), 1,
      anon_sym_COLON_EQ,
  [1672] = 1,
    ACTIONS(289), 1,
      sym_identifier,
  [1676] = 1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 160,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 264,
  [SMALL_STATE(8)] = 316,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 418,
  [SMALL_STATE(11)] = 440,
  [SMALL_STATE(12)] = 462,
  [SMALL_STATE(13)] = 484,
  [SMALL_STATE(14)] = 523,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 601,
  [SMALL_STATE(17)] = 622,
  [SMALL_STATE(18)] = 645,
  [SMALL_STATE(19)] = 665,
  [SMALL_STATE(20)] = 685,
  [SMALL_STATE(21)] = 705,
  [SMALL_STATE(22)] = 725,
  [SMALL_STATE(23)] = 745,
  [SMALL_STATE(24)] = 785,
  [SMALL_STATE(25)] = 805,
  [SMALL_STATE(26)] = 828,
  [SMALL_STATE(27)] = 866,
  [SMALL_STATE(28)] = 904,
  [SMALL_STATE(29)] = 939,
  [SMALL_STATE(30)] = 974,
  [SMALL_STATE(31)] = 1009,
  [SMALL_STATE(32)] = 1040,
  [SMALL_STATE(33)] = 1071,
  [SMALL_STATE(34)] = 1085,
  [SMALL_STATE(35)] = 1099,
  [SMALL_STATE(36)] = 1112,
  [SMALL_STATE(37)] = 1123,
  [SMALL_STATE(38)] = 1134,
  [SMALL_STATE(39)] = 1145,
  [SMALL_STATE(40)] = 1156,
  [SMALL_STATE(41)] = 1166,
  [SMALL_STATE(42)] = 1177,
  [SMALL_STATE(43)] = 1188,
  [SMALL_STATE(44)] = 1199,
  [SMALL_STATE(45)] = 1210,
  [SMALL_STATE(46)] = 1221,
  [SMALL_STATE(47)] = 1232,
  [SMALL_STATE(48)] = 1245,
  [SMALL_STATE(49)] = 1256,
  [SMALL_STATE(50)] = 1267,
  [SMALL_STATE(51)] = 1278,
  [SMALL_STATE(52)] = 1289,
  [SMALL_STATE(53)] = 1300,
  [SMALL_STATE(54)] = 1311,
  [SMALL_STATE(55)] = 1322,
  [SMALL_STATE(56)] = 1335,
  [SMALL_STATE(57)] = 1346,
  [SMALL_STATE(58)] = 1362,
  [SMALL_STATE(59)] = 1378,
  [SMALL_STATE(60)] = 1394,
  [SMALL_STATE(61)] = 1410,
  [SMALL_STATE(62)] = 1418,
  [SMALL_STATE(63)] = 1426,
  [SMALL_STATE(64)] = 1431,
  [SMALL_STATE(65)] = 1436,
  [SMALL_STATE(66)] = 1443,
  [SMALL_STATE(67)] = 1448,
  [SMALL_STATE(68)] = 1455,
  [SMALL_STATE(69)] = 1462,
  [SMALL_STATE(70)] = 1467,
  [SMALL_STATE(71)] = 1472,
  [SMALL_STATE(72)] = 1479,
  [SMALL_STATE(73)] = 1484,
  [SMALL_STATE(74)] = 1489,
  [SMALL_STATE(75)] = 1494,
  [SMALL_STATE(76)] = 1499,
  [SMALL_STATE(77)] = 1504,
  [SMALL_STATE(78)] = 1509,
  [SMALL_STATE(79)] = 1514,
  [SMALL_STATE(80)] = 1519,
  [SMALL_STATE(81)] = 1524,
  [SMALL_STATE(82)] = 1529,
  [SMALL_STATE(83)] = 1534,
  [SMALL_STATE(84)] = 1539,
  [SMALL_STATE(85)] = 1544,
  [SMALL_STATE(86)] = 1549,
  [SMALL_STATE(87)] = 1554,
  [SMALL_STATE(88)] = 1559,
  [SMALL_STATE(89)] = 1564,
  [SMALL_STATE(90)] = 1569,
  [SMALL_STATE(91)] = 1574,
  [SMALL_STATE(92)] = 1579,
  [SMALL_STATE(93)] = 1584,
  [SMALL_STATE(94)] = 1588,
  [SMALL_STATE(95)] = 1592,
  [SMALL_STATE(96)] = 1596,
  [SMALL_STATE(97)] = 1600,
  [SMALL_STATE(98)] = 1604,
  [SMALL_STATE(99)] = 1608,
  [SMALL_STATE(100)] = 1612,
  [SMALL_STATE(101)] = 1616,
  [SMALL_STATE(102)] = 1620,
  [SMALL_STATE(103)] = 1624,
  [SMALL_STATE(104)] = 1628,
  [SMALL_STATE(105)] = 1632,
  [SMALL_STATE(106)] = 1636,
  [SMALL_STATE(107)] = 1640,
  [SMALL_STATE(108)] = 1644,
  [SMALL_STATE(109)] = 1648,
  [SMALL_STATE(110)] = 1652,
  [SMALL_STATE(111)] = 1656,
  [SMALL_STATE(112)] = 1660,
  [SMALL_STATE(113)] = 1664,
  [SMALL_STATE(114)] = 1668,
  [SMALL_STATE(115)] = 1672,
  [SMALL_STATE(116)] = 1676,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 15),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 15),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 14),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 14),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_var, 4, .production_id = 24),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_var, 4, .production_id = 24),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 7), SHIFT_REPEAT(113),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 7), SHIFT_REPEAT(112),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 7), SHIFT_REPEAT(110),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 7), SHIFT_REPEAT(104),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 7), SHIFT_REPEAT(99),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 13),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 13),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 17),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 17),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 18),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 18),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 19),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 19),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 20),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 20),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 21),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 21),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contained, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contained, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_repeat, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(60),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(59),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(8),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(45),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(46),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 22),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 1, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 1, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 2, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 11),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 11),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 23),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 23),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 23),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 23),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 8),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 9),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 10),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 10),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 12),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 12),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_or, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_or, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_variable, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarator, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
