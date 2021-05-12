#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 27
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 33

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
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  aux_sym_literal_token1 = 18,
  aux_sym_literal_token2 = 19,
  aux_sym_literal_token3 = 20,
  aux_sym_literal_token4 = 21,
  aux_sym_literal_token5 = 22,
  sym_functions = 23,
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
  sym_left_operand = 55,
  sym_quest_variable = 56,
  sym_array_variable = 57,
  sym_array_index = 58,
  sym_right_hand = 59,
  sym_literal = 60,
  sym_interpreted = 61,
  sym_quest_reference = 62,
  sym_declarator = 63,
  sym_parenthetical = 64,
  sym_equality = 65,
  sym_contained = 66,
  sym_conditional = 67,
  sym_and_or = 68,
  aux_sym_script_file_repeat1 = 69,
  aux_sym_block_repeat1 = 70,
  aux_sym_array_variable_repeat1 = 71,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_literal_token2] = "literal_token2",
  [aux_sym_literal_token3] = "literal_token3",
  [aux_sym_literal_token4] = "literal_token4",
  [aux_sym_literal_token5] = "literal_token5",
  [sym_functions] = "functions",
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
  [sym_left_operand] = "left_operand",
  [sym_quest_variable] = "quest_variable",
  [sym_array_variable] = "array_variable",
  [sym_array_index] = "array_index",
  [sym_right_hand] = "right_hand",
  [sym_literal] = "literal",
  [sym_interpreted] = "interpreted",
  [sym_quest_reference] = "quest_reference",
  [sym_declarator] = "declarator",
  [sym_parenthetical] = "parenthetical",
  [sym_equality] = "equality",
  [sym_contained] = "contained",
  [sym_conditional] = "conditional",
  [sym_and_or] = "and_or",
  [aux_sym_script_file_repeat1] = "script_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_array_variable_repeat1] = "array_variable_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
  [aux_sym_literal_token3] = aux_sym_literal_token3,
  [aux_sym_literal_token4] = aux_sym_literal_token4,
  [aux_sym_literal_token5] = aux_sym_literal_token5,
  [sym_functions] = sym_functions,
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
  [sym_left_operand] = sym_left_operand,
  [sym_quest_variable] = sym_quest_variable,
  [sym_array_variable] = sym_array_variable,
  [sym_array_index] = sym_array_index,
  [sym_right_hand] = sym_right_hand,
  [sym_literal] = sym_literal,
  [sym_interpreted] = sym_interpreted,
  [sym_quest_reference] = sym_quest_reference,
  [sym_declarator] = sym_declarator,
  [sym_parenthetical] = sym_parenthetical,
  [sym_equality] = sym_equality,
  [sym_contained] = sym_contained,
  [sym_conditional] = sym_conditional,
  [sym_and_or] = sym_and_or,
  [aux_sym_script_file_repeat1] = aux_sym_script_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_array_variable_repeat1] = aux_sym_array_variable_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_functions] = {
    .visible = true,
    .named = true,
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
  [sym_left_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_quest_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_array_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_array_index] = {
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
  [aux_sym_array_variable_repeat1] = {
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
  field_condition = 6,
  field_declaration = 7,
  field_function = 8,
  field_function_call = 9,
  field_function_reference = 10,
  field_index = 11,
  field_interpreted = 12,
  field_key = 13,
  field_left_operand = 14,
  field_let = 15,
  field_literal = 16,
  field_loop = 17,
  field_plain_var = 18,
  field_quest_reference = 19,
  field_quest_var = 20,
  field_script_body = 21,
  field_script_name = 22,
  field_set = 23,
  field_statement = 24,
  field_type = 25,
  field_var_declaration = 26,
  field_variable = 27,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_array_var] = "array_var",
  [field_block_body] = "block_body",
  [field_block_mode] = "block_mode",
  [field_block_type] = "block_type",
  [field_condition] = "condition",
  [field_declaration] = "declaration",
  [field_function] = "function",
  [field_function_call] = "function_call",
  [field_function_reference] = "function_reference",
  [field_index] = "index",
  [field_interpreted] = "interpreted",
  [field_key] = "key",
  [field_left_operand] = "left_operand",
  [field_let] = "let",
  [field_literal] = "literal",
  [field_loop] = "loop",
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
  [25] = {.index = 28, .length = 1},
  [26] = {.index = 29, .length = 2},
  [27] = {.index = 31, .length = 2},
  [28] = {.index = 33, .length = 1},
  [29] = {.index = 34, .length = 2},
  [30] = {.index = 36, .length = 2},
  [31] = {.index = 38, .length = 1},
  [32] = {.index = 39, .length = 1},
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
    {field_loop, 0},
  [15] =
    {field_block_body, 0},
  [16] =
    {field_statement, 0},
  [17] =
    {field_set, 0},
  [18] =
    {field_let, 0},
  [19] =
    {field_condition, 0},
  [20] =
    {field_plain_var, 0},
  [21] =
    {field_quest_var, 0},
  [22] =
    {field_array_var, 0},
  [23] =
    {field_function, 0},
  [24] =
    {field_function_reference, 0},
  [25] =
    {field_variable, 0},
  [26] =
    {field_literal, 0},
  [27] =
    {field_interpreted, 0},
  [28] =
    {field_quest_reference, 0},
  [29] =
    {field_block_body, 2, .inherited = true},
    {field_block_type, 1},
  [31] =
    {field_block_body, 0, .inherited = true},
    {field_block_body, 1, .inherited = true},
  [33] =
    {field_index, 0},
  [34] =
    {field_array, 0},
    {field_index, 1, .inherited = true},
  [36] =
    {field_index, 0, .inherited = true},
    {field_index, 1, .inherited = true},
  [38] =
    {field_left_operand, 1},
  [39] =
    {field_key, 1},
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
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(89);
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
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(94);
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
      if (lookahead == '[') ADVANCE(88);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
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
  [27] = {.lex_state = 1},
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
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 67},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 67},
  [70] = {.lex_state = 67},
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
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 67},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 67},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 67},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 67},
  [118] = {.lex_state = 67},
  [119] = {.lex_state = 67},
  [120] = {.lex_state = 67},
  [121] = {.lex_state = 67},
  [122] = {.lex_state = 67},
  [123] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [aux_sym_literal_token2] = ACTIONS(1),
    [aux_sym_literal_token3] = ACTIONS(1),
    [aux_sym_literal_token4] = ACTIONS(1),
    [aux_sym_literal_token5] = ACTIONS(1),
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
    [sym_script_file] = STATE(123),
    [sym_script_name] = STATE(19),
    [sym_script_declarator] = STATE(122),
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
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_left_operand,
    STATE(24), 1,
      sym_interpreted,
    STATE(26), 1,
      sym_quest_reference,
    STATE(28), 1,
      sym_declarator,
    STATE(36), 1,
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
    STATE(111), 3,
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
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_left_operand,
    STATE(24), 1,
      sym_interpreted,
    STATE(26), 1,
      sym_quest_reference,
    STATE(28), 1,
      sym_declarator,
    STATE(36), 1,
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
    STATE(107), 3,
      sym_equality,
      sym_contained,
      sym_and_or,
  [110] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      aux_sym_array_variable_repeat1,
    STATE(13), 1,
      sym_array_index,
    ACTIONS(24), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(19), 14,
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
  [141] = 5,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      aux_sym_array_variable_repeat1,
    STATE(13), 1,
      sym_array_index,
    ACTIONS(30), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(26), 14,
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
  [172] = 16,
    ACTIONS(32), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(38), 1,
      sym_functions,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      sym_identifier,
    STATE(84), 1,
      sym_quest_variable,
    STATE(85), 1,
      sym_array_variable,
    STATE(90), 1,
      sym_left_operand,
    STATE(91), 1,
      sym_literal,
    STATE(92), 1,
      sym_interpreted,
    STATE(93), 1,
      sym_quest_reference,
    STATE(94), 1,
      sym_parenthetical,
    STATE(96), 1,
      sym_right_hand,
    STATE(97), 1,
      sym_declarator,
    STATE(98), 1,
      sym_contained,
    ACTIONS(34), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(36), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [224] = 15,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_left_operand,
    STATE(24), 1,
      sym_interpreted,
    STATE(26), 1,
      sym_quest_reference,
    STATE(28), 1,
      sym_declarator,
    STATE(36), 1,
      sym_parenthetical,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(29), 2,
      sym_equality,
      sym_contained,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [274] = 16,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_left_operand,
    STATE(24), 1,
      sym_interpreted,
    STATE(26), 1,
      sym_quest_reference,
    STATE(36), 1,
      sym_parenthetical,
    STATE(47), 1,
      sym_declarator,
    STATE(56), 1,
      sym_right_hand,
    STATE(57), 1,
      sym_contained,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [326] = 16,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_left_operand,
    STATE(24), 1,
      sym_interpreted,
    STATE(26), 1,
      sym_quest_reference,
    STATE(36), 1,
      sym_parenthetical,
    STATE(47), 1,
      sym_declarator,
    STATE(57), 1,
      sym_contained,
    STATE(59), 1,
      sym_right_hand,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [378] = 15,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_left_operand,
    STATE(24), 1,
      sym_interpreted,
    STATE(26), 1,
      sym_quest_reference,
    STATE(28), 1,
      sym_declarator,
    STATE(36), 1,
      sym_parenthetical,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(30), 2,
      sym_equality,
      sym_contained,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [428] = 16,
    ACTIONS(32), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(38), 1,
      sym_functions,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      sym_identifier,
    STATE(84), 1,
      sym_quest_variable,
    STATE(85), 1,
      sym_array_variable,
    STATE(90), 1,
      sym_left_operand,
    STATE(91), 1,
      sym_literal,
    STATE(92), 1,
      sym_interpreted,
    STATE(93), 1,
      sym_quest_reference,
    STATE(94), 1,
      sym_parenthetical,
    STATE(97), 1,
      sym_declarator,
    STATE(98), 1,
      sym_contained,
    STATE(99), 1,
      sym_right_hand,
    ACTIONS(34), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(36), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [480] = 2,
    ACTIONS(46), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(44), 15,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [503] = 2,
    ACTIONS(50), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(48), 15,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [526] = 5,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      aux_sym_array_variable_repeat1,
    STATE(13), 1,
      sym_array_index,
    ACTIONS(54), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(52), 12,
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
  [555] = 2,
    ACTIONS(58), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(56), 14,
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
  [577] = 2,
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
  [599] = 12,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      aux_sym_float_token1,
    ACTIONS(70), 1,
      aux_sym_string_token1,
    ACTIONS(72), 1,
      aux_sym_array_token1,
    ACTIONS(74), 1,
      aux_sym_block_token1,
    STATE(18), 1,
      aux_sym_script_file_repeat1,
    STATE(40), 1,
      sym_block,
    STATE(41), 1,
      sym_script_body,
    STATE(43), 1,
      sym_var_declare,
    STATE(106), 1,
      sym_type,
    ACTIONS(66), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(103), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [641] = 12,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym_float_token1,
    ACTIONS(84), 1,
      aux_sym_string_token1,
    ACTIONS(87), 1,
      aux_sym_array_token1,
    ACTIONS(90), 1,
      aux_sym_block_token1,
    STATE(18), 1,
      aux_sym_script_file_repeat1,
    STATE(40), 1,
      sym_block,
    STATE(41), 1,
      sym_script_body,
    STATE(43), 1,
      sym_var_declare,
    STATE(106), 1,
      sym_type,
    ACTIONS(78), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(103), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [683] = 12,
    ACTIONS(68), 1,
      aux_sym_float_token1,
    ACTIONS(70), 1,
      aux_sym_string_token1,
    ACTIONS(72), 1,
      aux_sym_array_token1,
    ACTIONS(74), 1,
      aux_sym_block_token1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_script_file_repeat1,
    STATE(40), 1,
      sym_block,
    STATE(41), 1,
      sym_script_body,
    STATE(43), 1,
      sym_var_declare,
    STATE(106), 1,
      sym_type,
    ACTIONS(66), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(103), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [725] = 2,
    ACTIONS(97), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(95), 13,
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
  [746] = 2,
    ACTIONS(101), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(99), 12,
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
  [766] = 2,
    ACTIONS(105), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(103), 12,
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
  [786] = 2,
    ACTIONS(110), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(107), 12,
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
  [806] = 2,
    ACTIONS(115), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(113), 12,
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
  [826] = 2,
    ACTIONS(119), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(117), 12,
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
  [846] = 2,
    ACTIONS(123), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(121), 12,
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
  [866] = 12,
    ACTIONS(5), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(11), 1,
      sym_functions,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_literal,
    STATE(22), 1,
      sym_left_operand,
    STATE(24), 1,
      sym_interpreted,
    STATE(26), 1,
      sym_quest_reference,
    STATE(42), 1,
      sym_declarator,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [906] = 4,
    ACTIONS(131), 1,
      sym_function_call,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 7,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [929] = 12,
    ACTIONS(133), 1,
      aux_sym_set_statement_token1,
    ACTIONS(135), 1,
      aux_sym_let_statement_token1,
    ACTIONS(137), 1,
      aux_sym_conditional_token1,
    ACTIONS(139), 1,
      sym_function_call,
    ACTIONS(141), 1,
      sym_loop,
    STATE(34), 1,
      sym_and_or,
    STATE(76), 1,
      sym_block_body,
    STATE(80), 1,
      sym_statement,
    STATE(81), 1,
      sym_set_statement,
    STATE(82), 1,
      sym_let_statement,
    STATE(83), 1,
      sym_conditional,
    ACTIONS(15), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [967] = 12,
    ACTIONS(133), 1,
      aux_sym_set_statement_token1,
    ACTIONS(135), 1,
      aux_sym_let_statement_token1,
    ACTIONS(137), 1,
      aux_sym_conditional_token1,
    ACTIONS(139), 1,
      sym_function_call,
    ACTIONS(141), 1,
      sym_loop,
    STATE(35), 1,
      sym_and_or,
    STATE(73), 1,
      sym_block_body,
    STATE(80), 1,
      sym_statement,
    STATE(81), 1,
      sym_set_statement,
    STATE(82), 1,
      sym_let_statement,
    STATE(83), 1,
      sym_conditional,
    ACTIONS(15), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1005] = 12,
    ACTIONS(143), 1,
      aux_sym_block_token2,
    ACTIONS(145), 1,
      aux_sym_set_statement_token1,
    ACTIONS(147), 1,
      aux_sym_let_statement_token1,
    ACTIONS(149), 1,
      aux_sym_conditional_token1,
    ACTIONS(151), 1,
      sym_function_call,
    ACTIONS(153), 1,
      sym_loop,
    STATE(33), 1,
      aux_sym_block_repeat1,
    STATE(46), 1,
      sym_set_statement,
    STATE(52), 1,
      sym_conditional,
    STATE(54), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_statement,
    STATE(62), 1,
      sym_block_body,
  [1042] = 12,
    ACTIONS(155), 1,
      aux_sym_block_token2,
    ACTIONS(157), 1,
      aux_sym_set_statement_token1,
    ACTIONS(160), 1,
      aux_sym_let_statement_token1,
    ACTIONS(163), 1,
      aux_sym_conditional_token1,
    ACTIONS(166), 1,
      sym_function_call,
    ACTIONS(169), 1,
      sym_loop,
    STATE(32), 1,
      aux_sym_block_repeat1,
    STATE(46), 1,
      sym_set_statement,
    STATE(52), 1,
      sym_conditional,
    STATE(54), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_statement,
    STATE(62), 1,
      sym_block_body,
  [1079] = 12,
    ACTIONS(145), 1,
      aux_sym_set_statement_token1,
    ACTIONS(147), 1,
      aux_sym_let_statement_token1,
    ACTIONS(149), 1,
      aux_sym_conditional_token1,
    ACTIONS(151), 1,
      sym_function_call,
    ACTIONS(153), 1,
      sym_loop,
    ACTIONS(172), 1,
      aux_sym_block_token2,
    STATE(32), 1,
      aux_sym_block_repeat1,
    STATE(46), 1,
      sym_set_statement,
    STATE(52), 1,
      sym_conditional,
    STATE(54), 1,
      sym_let_statement,
    STATE(61), 1,
      sym_statement,
    STATE(62), 1,
      sym_block_body,
  [1116] = 10,
    ACTIONS(133), 1,
      aux_sym_set_statement_token1,
    ACTIONS(135), 1,
      aux_sym_let_statement_token1,
    ACTIONS(137), 1,
      aux_sym_conditional_token1,
    ACTIONS(139), 1,
      sym_function_call,
    ACTIONS(141), 1,
      sym_loop,
    STATE(75), 1,
      sym_block_body,
    STATE(80), 1,
      sym_statement,
    STATE(81), 1,
      sym_set_statement,
    STATE(82), 1,
      sym_let_statement,
    STATE(83), 1,
      sym_conditional,
  [1147] = 10,
    ACTIONS(133), 1,
      aux_sym_set_statement_token1,
    ACTIONS(135), 1,
      aux_sym_let_statement_token1,
    ACTIONS(137), 1,
      aux_sym_conditional_token1,
    ACTIONS(139), 1,
      sym_function_call,
    ACTIONS(141), 1,
      sym_loop,
    STATE(77), 1,
      sym_block_body,
    STATE(80), 1,
      sym_statement,
    STATE(81), 1,
      sym_set_statement,
    STATE(82), 1,
      sym_let_statement,
    STATE(83), 1,
      sym_conditional,
  [1178] = 2,
    ACTIONS(131), 1,
      sym_function_call,
    ACTIONS(125), 8,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1192] = 2,
    ACTIONS(176), 1,
      sym_function_call,
    ACTIONS(174), 8,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1206] = 1,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1217] = 1,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1228] = 1,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1239] = 1,
    ACTIONS(184), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1250] = 2,
    ACTIONS(188), 1,
      sym_function_call,
    ACTIONS(186), 7,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1263] = 1,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1274] = 1,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1285] = 1,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1296] = 2,
    ACTIONS(198), 1,
      sym_function_call,
    ACTIONS(196), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1307] = 2,
    ACTIONS(131), 1,
      sym_function_call,
    ACTIONS(125), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1318] = 2,
    ACTIONS(202), 1,
      sym_function_call,
    ACTIONS(200), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1329] = 2,
    ACTIONS(206), 1,
      sym_function_call,
    ACTIONS(204), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1340] = 2,
    ACTIONS(210), 1,
      sym_function_call,
    ACTIONS(208), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1351] = 2,
    ACTIONS(214), 1,
      sym_function_call,
    ACTIONS(212), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1362] = 2,
    ACTIONS(218), 1,
      sym_function_call,
    ACTIONS(216), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1373] = 3,
    STATE(105), 1,
      sym_literal,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1386] = 2,
    ACTIONS(222), 1,
      sym_function_call,
    ACTIONS(220), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1397] = 2,
    ACTIONS(226), 1,
      sym_function_call,
    ACTIONS(224), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1408] = 2,
    ACTIONS(230), 1,
      sym_function_call,
    ACTIONS(228), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1419] = 2,
    ACTIONS(234), 1,
      sym_function_call,
    ACTIONS(232), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1430] = 2,
    ACTIONS(238), 1,
      sym_function_call,
    ACTIONS(236), 5,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      sym_loop,
  [1441] = 2,
    ACTIONS(242), 1,
      sym_function_call,
    ACTIONS(240), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1452] = 3,
    STATE(113), 1,
      sym_literal,
    ACTIONS(7), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(9), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1465] = 2,
    ACTIONS(246), 1,
      sym_function_call,
    ACTIONS(244), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1476] = 2,
    ACTIONS(250), 1,
      sym_function_call,
    ACTIONS(248), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1487] = 4,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      aux_sym_array_variable_repeat1,
    STATE(71), 1,
      sym_array_index,
    ACTIONS(19), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1501] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      aux_sym_array_variable_repeat1,
    STATE(71), 1,
      sym_array_index,
    ACTIONS(52), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1515] = 5,
    ACTIONS(257), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(110), 1,
      sym_left_operand,
  [1531] = 5,
    ACTIONS(257), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(109), 1,
      sym_left_operand,
  [1547] = 4,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      aux_sym_array_variable_repeat1,
    STATE(13), 1,
      sym_array_index,
    ACTIONS(52), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [1561] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      aux_sym_array_variable_repeat1,
    STATE(71), 1,
      sym_array_index,
    ACTIONS(26), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1575] = 5,
    ACTIONS(257), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(104), 1,
      sym_left_operand,
  [1591] = 5,
    ACTIONS(257), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(15), 1,
      sym_array_variable,
    STATE(16), 1,
      sym_quest_variable,
    STATE(102), 1,
      sym_left_operand,
  [1607] = 1,
    ACTIONS(48), 3,
      anon_sym_LBRACK,
      aux_sym_conditional_token2,
      sym_con_else,
  [1613] = 1,
    ACTIONS(44), 3,
      anon_sym_LBRACK,
      aux_sym_conditional_token2,
      sym_con_else,
  [1619] = 2,
    ACTIONS(261), 1,
      aux_sym_conditional_token2,
    ACTIONS(263), 1,
      sym_con_else,
  [1626] = 1,
    ACTIONS(117), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1631] = 2,
    ACTIONS(265), 1,
      aux_sym_conditional_token2,
    ACTIONS(267), 1,
      sym_con_else,
  [1638] = 2,
    ACTIONS(269), 1,
      aux_sym_conditional_token2,
    ACTIONS(271), 1,
      sym_con_else,
  [1645] = 2,
    ACTIONS(273), 1,
      aux_sym_conditional_token2,
    ACTIONS(275), 1,
      sym_con_else,
  [1652] = 1,
    ACTIONS(212), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1657] = 1,
    ACTIONS(224), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1662] = 1,
    ACTIONS(244), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1667] = 1,
    ACTIONS(196), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1672] = 1,
    ACTIONS(220), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1677] = 1,
    ACTIONS(216), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1682] = 1,
    ACTIONS(60), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1687] = 1,
    ACTIONS(56), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1692] = 1,
    ACTIONS(107), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1697] = 1,
    ACTIONS(95), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1702] = 1,
    ACTIONS(200), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1707] = 1,
    ACTIONS(204), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1712] = 1,
    ACTIONS(103), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1717] = 1,
    ACTIONS(99), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1722] = 1,
    ACTIONS(113), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1727] = 1,
    ACTIONS(121), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1732] = 1,
    ACTIONS(125), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1737] = 1,
    ACTIONS(277), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [1742] = 1,
    ACTIONS(240), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1747] = 1,
    ACTIONS(125), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1752] = 1,
    ACTIONS(232), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1757] = 1,
    ACTIONS(228), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1762] = 1,
    ACTIONS(174), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1767] = 1,
    ACTIONS(208), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1772] = 1,
    ACTIONS(279), 1,
      aux_sym_set_statement_token2,
  [1776] = 1,
    ACTIONS(281), 1,
      sym_identifier,
  [1780] = 1,
    ACTIONS(283), 1,
      anon_sym_COLON_EQ,
  [1784] = 1,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
  [1788] = 1,
    ACTIONS(287), 1,
      sym_identifier,
  [1792] = 1,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
  [1796] = 1,
    ACTIONS(273), 1,
      aux_sym_conditional_token2,
  [1800] = 1,
    ACTIONS(291), 1,
      aux_sym_set_statement_token2,
  [1804] = 1,
    ACTIONS(293), 1,
      anon_sym_COLON_EQ,
  [1808] = 1,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
  [1812] = 1,
    ACTIONS(297), 1,
      sym_identifier,
  [1816] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
  [1820] = 1,
    ACTIONS(265), 1,
      aux_sym_conditional_token2,
  [1824] = 1,
    ACTIONS(301), 1,
      aux_sym_conditional_token2,
  [1828] = 1,
    ACTIONS(303), 1,
      aux_sym_conditional_token2,
  [1832] = 1,
    ACTIONS(305), 1,
      sym_identifier,
  [1836] = 1,
    ACTIONS(307), 1,
      sym_identifier,
  [1840] = 1,
    ACTIONS(309), 1,
      sym_identifier,
  [1844] = 1,
    ACTIONS(311), 1,
      sym_identifier,
  [1848] = 1,
    ACTIONS(313), 1,
      sym_identifier,
  [1852] = 1,
    ACTIONS(315), 1,
      sym_identifier,
  [1856] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 224,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 326,
  [SMALL_STATE(10)] = 378,
  [SMALL_STATE(11)] = 428,
  [SMALL_STATE(12)] = 480,
  [SMALL_STATE(13)] = 503,
  [SMALL_STATE(14)] = 526,
  [SMALL_STATE(15)] = 555,
  [SMALL_STATE(16)] = 577,
  [SMALL_STATE(17)] = 599,
  [SMALL_STATE(18)] = 641,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 725,
  [SMALL_STATE(21)] = 746,
  [SMALL_STATE(22)] = 766,
  [SMALL_STATE(23)] = 786,
  [SMALL_STATE(24)] = 806,
  [SMALL_STATE(25)] = 826,
  [SMALL_STATE(26)] = 846,
  [SMALL_STATE(27)] = 866,
  [SMALL_STATE(28)] = 906,
  [SMALL_STATE(29)] = 929,
  [SMALL_STATE(30)] = 967,
  [SMALL_STATE(31)] = 1005,
  [SMALL_STATE(32)] = 1042,
  [SMALL_STATE(33)] = 1079,
  [SMALL_STATE(34)] = 1116,
  [SMALL_STATE(35)] = 1147,
  [SMALL_STATE(36)] = 1178,
  [SMALL_STATE(37)] = 1192,
  [SMALL_STATE(38)] = 1206,
  [SMALL_STATE(39)] = 1217,
  [SMALL_STATE(40)] = 1228,
  [SMALL_STATE(41)] = 1239,
  [SMALL_STATE(42)] = 1250,
  [SMALL_STATE(43)] = 1263,
  [SMALL_STATE(44)] = 1274,
  [SMALL_STATE(45)] = 1285,
  [SMALL_STATE(46)] = 1296,
  [SMALL_STATE(47)] = 1307,
  [SMALL_STATE(48)] = 1318,
  [SMALL_STATE(49)] = 1329,
  [SMALL_STATE(50)] = 1340,
  [SMALL_STATE(51)] = 1351,
  [SMALL_STATE(52)] = 1362,
  [SMALL_STATE(53)] = 1373,
  [SMALL_STATE(54)] = 1386,
  [SMALL_STATE(55)] = 1397,
  [SMALL_STATE(56)] = 1408,
  [SMALL_STATE(57)] = 1419,
  [SMALL_STATE(58)] = 1430,
  [SMALL_STATE(59)] = 1441,
  [SMALL_STATE(60)] = 1452,
  [SMALL_STATE(61)] = 1465,
  [SMALL_STATE(62)] = 1476,
  [SMALL_STATE(63)] = 1487,
  [SMALL_STATE(64)] = 1501,
  [SMALL_STATE(65)] = 1515,
  [SMALL_STATE(66)] = 1531,
  [SMALL_STATE(67)] = 1547,
  [SMALL_STATE(68)] = 1561,
  [SMALL_STATE(69)] = 1575,
  [SMALL_STATE(70)] = 1591,
  [SMALL_STATE(71)] = 1607,
  [SMALL_STATE(72)] = 1613,
  [SMALL_STATE(73)] = 1619,
  [SMALL_STATE(74)] = 1626,
  [SMALL_STATE(75)] = 1631,
  [SMALL_STATE(76)] = 1638,
  [SMALL_STATE(77)] = 1645,
  [SMALL_STATE(78)] = 1652,
  [SMALL_STATE(79)] = 1657,
  [SMALL_STATE(80)] = 1662,
  [SMALL_STATE(81)] = 1667,
  [SMALL_STATE(82)] = 1672,
  [SMALL_STATE(83)] = 1677,
  [SMALL_STATE(84)] = 1682,
  [SMALL_STATE(85)] = 1687,
  [SMALL_STATE(86)] = 1692,
  [SMALL_STATE(87)] = 1697,
  [SMALL_STATE(88)] = 1702,
  [SMALL_STATE(89)] = 1707,
  [SMALL_STATE(90)] = 1712,
  [SMALL_STATE(91)] = 1717,
  [SMALL_STATE(92)] = 1722,
  [SMALL_STATE(93)] = 1727,
  [SMALL_STATE(94)] = 1732,
  [SMALL_STATE(95)] = 1737,
  [SMALL_STATE(96)] = 1742,
  [SMALL_STATE(97)] = 1747,
  [SMALL_STATE(98)] = 1752,
  [SMALL_STATE(99)] = 1757,
  [SMALL_STATE(100)] = 1762,
  [SMALL_STATE(101)] = 1767,
  [SMALL_STATE(102)] = 1772,
  [SMALL_STATE(103)] = 1776,
  [SMALL_STATE(104)] = 1780,
  [SMALL_STATE(105)] = 1784,
  [SMALL_STATE(106)] = 1788,
  [SMALL_STATE(107)] = 1792,
  [SMALL_STATE(108)] = 1796,
  [SMALL_STATE(109)] = 1800,
  [SMALL_STATE(110)] = 1804,
  [SMALL_STATE(111)] = 1808,
  [SMALL_STATE(112)] = 1812,
  [SMALL_STATE(113)] = 1816,
  [SMALL_STATE(114)] = 1820,
  [SMALL_STATE(115)] = 1824,
  [SMALL_STATE(116)] = 1828,
  [SMALL_STATE(117)] = 1832,
  [SMALL_STATE(118)] = 1836,
  [SMALL_STATE(119)] = 1840,
  [SMALL_STATE(120)] = 1844,
  [SMALL_STATE(121)] = 1848,
  [SMALL_STATE(122)] = 1852,
  [SMALL_STATE(123)] = 1856,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 30),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 30), SHIFT_REPEAT(53),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 30),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_variable, 2, .production_id = 29),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_variable, 2, .production_id = 29),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3, .production_id = 32),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3, .production_id = 32),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 1, .production_id = 28),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_variable_repeat1, 1, .production_id = 28),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_operand, 1, .production_id = 17),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_operand, 1, .production_id = 17),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_operand, 1, .production_id = 19),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_operand, 1, .production_id = 19),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_operand, 1, .production_id = 18),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_operand, 1, .production_id = 18),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2, .production_id = 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(121),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(120),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(119),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(118),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(117),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 23),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 23),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 22),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 22),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 24),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 24),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 20),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 25),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 25),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contained, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contained, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27), SHIFT_REPEAT(70),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27), SHIFT_REPEAT(69),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27), SHIFT_REPEAT(10),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27), SHIFT_REPEAT(51),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27), SHIFT_REPEAT(55),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 9),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 26),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 1, .production_id = 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 7),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 2, .production_id = 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 14),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 14),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 10),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 10),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 16),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 16),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 15),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 15),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 11),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 11),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 31),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 31),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_or, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_or, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 31),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 31),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_body, 1, .production_id = 13),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_body, 1, .production_id = 13),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 12),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 12),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 30), SHIFT_REPEAT(60),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_variable, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarator, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [317] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
