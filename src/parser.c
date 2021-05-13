#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 27
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 33

enum {
  sym_identifier = 1,
  aux_sym_script_declarator_token1 = 2,
  aux_sym_script_declarator_token2 = 3,
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
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  aux_sym_literal_token1 = 19,
  aux_sym_literal_token2 = 20,
  aux_sym_literal_token3 = 21,
  aux_sym_literal_token4 = 22,
  aux_sym_literal_token5 = 23,
  sym_functions = 24,
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
  anon_sym_SEMI = 40,
  aux_sym_comment_token1 = 41,
  sym_script_file = 42,
  sym_script_name = 43,
  sym_script_declarator = 44,
  sym_script_body = 45,
  sym_var_declare = 46,
  sym_type = 47,
  sym_int = 48,
  sym_float = 49,
  sym_string = 50,
  sym_array = 51,
  sym_block = 52,
  sym_block_body = 53,
  sym_statement = 54,
  sym_set_statement = 55,
  sym_let_statement = 56,
  sym_left_operand = 57,
  sym_quest_variable = 58,
  sym_array_variable = 59,
  sym_array_index = 60,
  sym_right_hand = 61,
  sym_literal = 62,
  sym_interpreted = 63,
  sym_quest_reference = 64,
  sym_declarator = 65,
  sym_parenthetical = 66,
  sym_equality = 67,
  sym_contained = 68,
  sym_conditional = 69,
  sym_and_or = 70,
  sym_comment = 71,
  aux_sym_script_file_repeat1 = 72,
  aux_sym_block_repeat1 = 73,
  aux_sym_array_variable_repeat1 = 74,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
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
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_comment] = "comment",
  [aux_sym_script_file_repeat1] = "script_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_array_variable_repeat1] = "array_variable_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym_comment] = sym_comment,
  [aux_sym_script_file_repeat1] = aux_sym_script_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_array_variable_repeat1] = aux_sym_array_variable_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
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
  [sym_comment] = {
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
      if (eof) ADVANCE(18);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(43);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == '|') ADVANCE(38);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 12:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 13:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 14:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(46);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_quest_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_literal_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_literal_token5);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(2);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(6);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(9);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(10);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 4:
      if (lookahead == 'j') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(20);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      END_STATE();
    case 21:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_function_call);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_block_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_int_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 36:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_script_declarator_token1);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_loop);
      END_STATE();
    case 45:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_int_token3);
      END_STATE();
    case 49:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_conditional_token2);
      END_STATE();
    case 57:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_int_token2);
      END_STATE();
    case 59:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_con_else);
      END_STATE();
    case 61:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 68:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_array_token1);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_script_declarator_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
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
  [25] = {.lex_state = 4},
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
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
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
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 44},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [aux_sym_conditional_token2] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [sym_con_else] = ACTIONS(1),
    [sym_function_call] = ACTIONS(1),
    [sym_loop] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
  },
  [1] = {
    [sym_script_file] = STATE(124),
    [sym_script_name] = STATE(15),
    [sym_script_declarator] = STATE(123),
    [sym_comment] = STATE(1),
    [aux_sym_script_declarator_token1] = ACTIONS(5),
    [aux_sym_script_declarator_token2] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(15), 1,
      sym_functions,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_comment,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_quest_reference,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_literal,
    STATE(24), 1,
      sym_left_operand,
    STATE(28), 1,
      sym_declarator,
    STATE(36), 1,
      sym_parenthetical,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(19), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(13), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(110), 3,
      sym_equality,
      sym_contained,
      sym_and_or,
  [61] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(15), 1,
      sym_functions,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_quest_reference,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_literal,
    STATE(24), 1,
      sym_left_operand,
    STATE(28), 1,
      sym_declarator,
    STATE(36), 1,
      sym_parenthetical,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(19), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(13), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(103), 3,
      sym_equality,
      sym_contained,
      sym_and_or,
  [122] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_array_variable_repeat1,
    STATE(13), 1,
      sym_array_index,
    ACTIONS(25), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(21), 14,
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
  [159] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_array_index,
    STATE(5), 2,
      sym_comment,
      aux_sym_array_variable_repeat1,
    ACTIONS(32), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(27), 14,
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
  [194] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(42), 1,
      sym_functions,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_comment,
    STATE(86), 1,
      sym_quest_variable,
    STATE(87), 1,
      sym_array_variable,
    STATE(92), 1,
      sym_left_operand,
    STATE(93), 1,
      sym_literal,
    STATE(94), 1,
      sym_interpreted,
    STATE(95), 1,
      sym_quest_reference,
    STATE(96), 1,
      sym_parenthetical,
    STATE(98), 1,
      sym_right_hand,
    STATE(99), 1,
      sym_declarator,
    STATE(100), 1,
      sym_contained,
    ACTIONS(38), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(40), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [252] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(15), 1,
      sym_functions,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_comment,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_quest_reference,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_literal,
    STATE(24), 1,
      sym_left_operand,
    STATE(28), 1,
      sym_declarator,
    STATE(36), 1,
      sym_parenthetical,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(30), 2,
      sym_equality,
      sym_contained,
    ACTIONS(13), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [308] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(42), 1,
      sym_functions,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_comment,
    STATE(86), 1,
      sym_quest_variable,
    STATE(87), 1,
      sym_array_variable,
    STATE(92), 1,
      sym_left_operand,
    STATE(93), 1,
      sym_literal,
    STATE(94), 1,
      sym_interpreted,
    STATE(95), 1,
      sym_quest_reference,
    STATE(96), 1,
      sym_parenthetical,
    STATE(99), 1,
      sym_declarator,
    STATE(100), 1,
      sym_contained,
    STATE(101), 1,
      sym_right_hand,
    ACTIONS(38), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(40), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [366] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(15), 1,
      sym_functions,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_comment,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_quest_reference,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_literal,
    STATE(24), 1,
      sym_left_operand,
    STATE(36), 1,
      sym_parenthetical,
    STATE(55), 1,
      sym_right_hand,
    STATE(58), 1,
      sym_contained,
    STATE(59), 1,
      sym_declarator,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(13), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [424] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(15), 1,
      sym_functions,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_comment,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_quest_reference,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_literal,
    STATE(24), 1,
      sym_left_operand,
    STATE(36), 1,
      sym_parenthetical,
    STATE(58), 1,
      sym_contained,
    STATE(59), 1,
      sym_declarator,
    STATE(62), 1,
      sym_right_hand,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(13), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [482] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(15), 1,
      sym_functions,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_comment,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_quest_reference,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_literal,
    STATE(24), 1,
      sym_left_operand,
    STATE(28), 1,
      sym_declarator,
    STATE(36), 1,
      sym_parenthetical,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(29), 2,
      sym_equality,
      sym_contained,
    ACTIONS(13), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [538] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      aux_sym_array_variable_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      sym_array_index,
    ACTIONS(48), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(46), 12,
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
  [573] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_comment,
    ACTIONS(52), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(50), 15,
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
  [602] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_comment,
    ACTIONS(56), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(54), 15,
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
  [631] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_float_token1,
    ACTIONS(64), 1,
      aux_sym_string_token1,
    ACTIONS(66), 1,
      aux_sym_array_token1,
    ACTIONS(68), 1,
      aux_sym_block_token1,
    STATE(15), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_script_file_repeat1,
    STATE(41), 1,
      sym_script_body,
    STATE(42), 1,
      sym_var_declare,
    STATE(43), 1,
      sym_block,
    STATE(102), 1,
      sym_type,
    ACTIONS(60), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(113), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [679] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
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
  [707] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym_float_token1,
    ACTIONS(82), 1,
      aux_sym_string_token1,
    ACTIONS(85), 1,
      aux_sym_array_token1,
    ACTIONS(88), 1,
      aux_sym_block_token1,
    STATE(41), 1,
      sym_script_body,
    STATE(42), 1,
      sym_var_declare,
    STATE(43), 1,
      sym_block,
    STATE(102), 1,
      sym_type,
    STATE(17), 2,
      sym_comment,
      aux_sym_script_file_repeat1,
    ACTIONS(76), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(113), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [753] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(91), 14,
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
  [781] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      aux_sym_float_token1,
    ACTIONS(64), 1,
      aux_sym_string_token1,
    ACTIONS(66), 1,
      aux_sym_array_token1,
    ACTIONS(68), 1,
      aux_sym_block_token1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_script_file_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(41), 1,
      sym_script_body,
    STATE(42), 1,
      sym_var_declare,
    STATE(43), 1,
      sym_block,
    STATE(102), 1,
      sym_type,
    ACTIONS(60), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
    STATE(113), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_array,
  [829] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(97), 13,
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
  [856] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(101), 12,
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
  [882] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(105), 12,
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
  [908] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
    ACTIONS(109), 12,
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
  [934] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
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
  [960] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(15), 1,
      sym_functions,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(21), 1,
      sym_quest_reference,
    STATE(22), 1,
      sym_interpreted,
    STATE(23), 1,
      sym_literal,
    STATE(24), 1,
      sym_left_operand,
    STATE(25), 1,
      sym_comment,
    STATE(40), 1,
      sym_declarator,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(13), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1006] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
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
  [1032] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    ACTIONS(124), 3,
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
  [1058] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_function_call,
    STATE(28), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(127), 7,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1087] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      aux_sym_set_statement_token1,
    ACTIONS(137), 1,
      aux_sym_let_statement_token1,
    ACTIONS(139), 1,
      aux_sym_conditional_token1,
    ACTIONS(141), 1,
      sym_function_call,
    ACTIONS(143), 1,
      sym_loop,
    STATE(29), 1,
      sym_comment,
    STATE(35), 1,
      sym_and_or,
    STATE(73), 1,
      sym_block_body,
    STATE(82), 1,
      sym_statement,
    STATE(83), 1,
      sym_set_statement,
    STATE(84), 1,
      sym_let_statement,
    STATE(85), 1,
      sym_conditional,
    ACTIONS(19), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1131] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      aux_sym_set_statement_token1,
    ACTIONS(137), 1,
      aux_sym_let_statement_token1,
    ACTIONS(139), 1,
      aux_sym_conditional_token1,
    ACTIONS(141), 1,
      sym_function_call,
    ACTIONS(143), 1,
      sym_loop,
    STATE(30), 1,
      sym_comment,
    STATE(34), 1,
      sym_and_or,
    STATE(77), 1,
      sym_block_body,
    STATE(82), 1,
      sym_statement,
    STATE(83), 1,
      sym_set_statement,
    STATE(84), 1,
      sym_let_statement,
    STATE(85), 1,
      sym_conditional,
    ACTIONS(19), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1175] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      aux_sym_block_token2,
    ACTIONS(147), 1,
      aux_sym_set_statement_token1,
    ACTIONS(149), 1,
      aux_sym_let_statement_token1,
    ACTIONS(151), 1,
      aux_sym_conditional_token1,
    ACTIONS(153), 1,
      sym_function_call,
    ACTIONS(155), 1,
      sym_loop,
    STATE(31), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_block_repeat1,
    STATE(47), 1,
      sym_let_statement,
    STATE(48), 1,
      sym_set_statement,
    STATE(49), 1,
      sym_statement,
    STATE(50), 1,
      sym_block_body,
    STATE(57), 1,
      sym_conditional,
  [1218] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      aux_sym_block_token2,
    ACTIONS(159), 1,
      aux_sym_set_statement_token1,
    ACTIONS(162), 1,
      aux_sym_let_statement_token1,
    ACTIONS(165), 1,
      aux_sym_conditional_token1,
    ACTIONS(168), 1,
      sym_function_call,
    ACTIONS(171), 1,
      sym_loop,
    STATE(47), 1,
      sym_let_statement,
    STATE(48), 1,
      sym_set_statement,
    STATE(49), 1,
      sym_statement,
    STATE(50), 1,
      sym_block_body,
    STATE(57), 1,
      sym_conditional,
    STATE(32), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [1259] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      aux_sym_set_statement_token1,
    ACTIONS(149), 1,
      aux_sym_let_statement_token1,
    ACTIONS(151), 1,
      aux_sym_conditional_token1,
    ACTIONS(153), 1,
      sym_function_call,
    ACTIONS(155), 1,
      sym_loop,
    ACTIONS(174), 1,
      aux_sym_block_token2,
    STATE(32), 1,
      aux_sym_block_repeat1,
    STATE(33), 1,
      sym_comment,
    STATE(47), 1,
      sym_let_statement,
    STATE(48), 1,
      sym_set_statement,
    STATE(49), 1,
      sym_statement,
    STATE(50), 1,
      sym_block_body,
    STATE(57), 1,
      sym_conditional,
  [1302] = 12,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      aux_sym_set_statement_token1,
    ACTIONS(137), 1,
      aux_sym_let_statement_token1,
    ACTIONS(139), 1,
      aux_sym_conditional_token1,
    ACTIONS(141), 1,
      sym_function_call,
    ACTIONS(143), 1,
      sym_loop,
    STATE(34), 1,
      sym_comment,
    STATE(76), 1,
      sym_block_body,
    STATE(82), 1,
      sym_statement,
    STATE(83), 1,
      sym_set_statement,
    STATE(84), 1,
      sym_let_statement,
    STATE(85), 1,
      sym_conditional,
  [1339] = 12,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      aux_sym_set_statement_token1,
    ACTIONS(137), 1,
      aux_sym_let_statement_token1,
    ACTIONS(139), 1,
      aux_sym_conditional_token1,
    ACTIONS(141), 1,
      sym_function_call,
    ACTIONS(143), 1,
      sym_loop,
    STATE(35), 1,
      sym_comment,
    STATE(75), 1,
      sym_block_body,
    STATE(82), 1,
      sym_statement,
    STATE(83), 1,
      sym_set_statement,
    STATE(84), 1,
      sym_let_statement,
    STATE(85), 1,
      sym_conditional,
  [1376] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_function_call,
    STATE(36), 1,
      sym_comment,
    ACTIONS(127), 8,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1396] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      sym_function_call,
    STATE(37), 1,
      sym_comment,
    ACTIONS(176), 8,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1416] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1433] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_comment,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1450] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(186), 1,
      sym_function_call,
    STATE(40), 1,
      sym_comment,
    ACTIONS(184), 7,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_loop,
  [1469] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_comment,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1486] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1503] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_comment,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1520] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1537] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [1554] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_comment,
    STATE(107), 1,
      sym_literal,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(13), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1573] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      sym_function_call,
    STATE(47), 1,
      sym_comment,
    ACTIONS(198), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1590] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      sym_function_call,
    STATE(48), 1,
      sym_comment,
    ACTIONS(202), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1607] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      sym_function_call,
    STATE(49), 1,
      sym_comment,
    ACTIONS(206), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1624] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      sym_function_call,
    STATE(50), 1,
      sym_comment,
    ACTIONS(210), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1641] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(216), 1,
      sym_function_call,
    STATE(51), 1,
      sym_comment,
    ACTIONS(214), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1658] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(220), 1,
      sym_function_call,
    STATE(52), 1,
      sym_comment,
    ACTIONS(218), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1675] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(224), 1,
      sym_function_call,
    STATE(53), 1,
      sym_comment,
    ACTIONS(222), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1692] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_comment,
    STATE(115), 1,
      sym_literal,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(13), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1711] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      sym_function_call,
    STATE(55), 1,
      sym_comment,
    ACTIONS(226), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1728] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      sym_function_call,
    STATE(56), 1,
      sym_comment,
    ACTIONS(230), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1745] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      sym_function_call,
    STATE(57), 1,
      sym_comment,
    ACTIONS(234), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1762] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      sym_function_call,
    STATE(58), 1,
      sym_comment,
    ACTIONS(238), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1779] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_function_call,
    STATE(59), 1,
      sym_comment,
    ACTIONS(127), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1796] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(244), 1,
      sym_function_call,
    STATE(60), 1,
      sym_comment,
    ACTIONS(242), 5,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RPAREN,
      aux_sym_conditional_token1,
      sym_loop,
  [1813] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      sym_function_call,
    STATE(61), 1,
      sym_comment,
    ACTIONS(246), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1830] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      sym_function_call,
    STATE(62), 1,
      sym_comment,
    ACTIONS(250), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_loop,
  [1847] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      aux_sym_quest_variable_token1,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(63), 1,
      sym_comment,
    STATE(111), 1,
      sym_left_operand,
  [1869] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_array_index,
    ACTIONS(27), 2,
      aux_sym_conditional_token2,
      sym_con_else,
    STATE(64), 2,
      sym_comment,
      aux_sym_array_variable_repeat1,
  [1887] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      aux_sym_quest_variable_token1,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(65), 1,
      sym_comment,
    STATE(109), 1,
      sym_left_operand,
  [1909] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      aux_sym_array_variable_repeat1,
    STATE(13), 1,
      sym_array_index,
    STATE(66), 1,
      sym_comment,
    ACTIONS(46), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [1929] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      aux_sym_array_variable_repeat1,
    STATE(67), 1,
      sym_comment,
    STATE(72), 1,
      sym_array_index,
    ACTIONS(21), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1949] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      aux_sym_quest_variable_token1,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(68), 1,
      sym_comment,
    STATE(112), 1,
      sym_left_operand,
  [1971] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      aux_sym_array_variable_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(72), 1,
      sym_array_index,
    ACTIONS(46), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [1991] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      aux_sym_quest_variable_token1,
    STATE(16), 1,
      sym_array_variable,
    STATE(18), 1,
      sym_quest_variable,
    STATE(70), 1,
      sym_comment,
    STATE(106), 1,
      sym_left_operand,
  [2013] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_comment,
    ACTIONS(54), 3,
      anon_sym_LBRACK,
      aux_sym_conditional_token2,
      sym_con_else,
  [2025] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_comment,
    ACTIONS(50), 3,
      anon_sym_LBRACK,
      aux_sym_conditional_token2,
      sym_con_else,
  [2037] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(263), 1,
      aux_sym_conditional_token2,
    ACTIONS(265), 1,
      sym_con_else,
    STATE(73), 1,
      sym_comment,
  [2050] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_comment,
    ACTIONS(121), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2061] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(267), 1,
      aux_sym_conditional_token2,
    ACTIONS(269), 1,
      sym_con_else,
    STATE(75), 1,
      sym_comment,
  [2074] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      aux_sym_conditional_token2,
    ACTIONS(273), 1,
      sym_con_else,
    STATE(76), 1,
      sym_comment,
  [2087] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      aux_sym_conditional_token2,
    ACTIONS(277), 1,
      sym_con_else,
    STATE(77), 1,
      sym_comment,
  [2100] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_comment,
    ACTIONS(230), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2111] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_comment,
    ACTIONS(246), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2122] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_comment,
    ACTIONS(218), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2133] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym_comment,
    ACTIONS(214), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2144] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym_comment,
    ACTIONS(206), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2155] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_comment,
    ACTIONS(202), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2166] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      sym_comment,
    ACTIONS(198), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2177] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_comment,
    ACTIONS(234), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2188] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_comment,
    ACTIONS(91), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2199] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym_comment,
    ACTIONS(70), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2210] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_comment,
    ACTIONS(176), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2221] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_comment,
    ACTIONS(97), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2232] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_comment,
    ACTIONS(117), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2243] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_comment,
    ACTIONS(222), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2254] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_comment,
    ACTIONS(113), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2265] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_comment,
    ACTIONS(109), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2276] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      sym_comment,
    ACTIONS(105), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2287] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_comment,
    ACTIONS(101), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2298] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      sym_comment,
    ACTIONS(127), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2309] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_comment,
    ACTIONS(279), 2,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
  [2320] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_comment,
    ACTIONS(250), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2331] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_comment,
    ACTIONS(127), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2342] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_comment,
    ACTIONS(238), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2353] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym_comment,
    ACTIONS(226), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2364] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(102), 1,
      sym_comment,
  [2374] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      sym_comment,
  [2384] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(267), 1,
      aux_sym_conditional_token2,
    STATE(104), 1,
      sym_comment,
  [2394] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(105), 1,
      sym_comment,
  [2404] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(287), 1,
      aux_sym_set_statement_token2,
    STATE(106), 1,
      sym_comment,
  [2414] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym_comment,
  [2424] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(108), 1,
      sym_comment,
  [2434] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(293), 1,
      anon_sym_COLON_EQ,
    STATE(109), 1,
      sym_comment,
  [2444] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_comment,
  [2454] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(297), 1,
      aux_sym_set_statement_token2,
    STATE(111), 1,
      sym_comment,
  [2464] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      anon_sym_COLON_EQ,
    STATE(112), 1,
      sym_comment,
  [2474] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(113), 1,
      sym_comment,
  [2484] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(303), 1,
      aux_sym_conditional_token2,
    STATE(114), 1,
      sym_comment,
  [2494] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      sym_comment,
  [2504] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      aux_sym_conditional_token2,
    STATE(116), 1,
      sym_comment,
  [2514] = 3,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    STATE(117), 1,
      sym_comment,
  [2524] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      aux_sym_conditional_token2,
    STATE(118), 1,
      sym_comment,
  [2534] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(119), 1,
      sym_comment,
  [2544] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(120), 1,
      sym_comment,
  [2554] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      sym_identifier,
    STATE(121), 1,
      sym_comment,
  [2564] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      sym_identifier,
    STATE(122), 1,
      sym_comment,
  [2574] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(123), 1,
      sym_comment,
  [2584] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym_comment,
  [2594] = 1,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 308,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 482,
  [SMALL_STATE(12)] = 538,
  [SMALL_STATE(13)] = 573,
  [SMALL_STATE(14)] = 602,
  [SMALL_STATE(15)] = 631,
  [SMALL_STATE(16)] = 679,
  [SMALL_STATE(17)] = 707,
  [SMALL_STATE(18)] = 753,
  [SMALL_STATE(19)] = 781,
  [SMALL_STATE(20)] = 829,
  [SMALL_STATE(21)] = 856,
  [SMALL_STATE(22)] = 882,
  [SMALL_STATE(23)] = 908,
  [SMALL_STATE(24)] = 934,
  [SMALL_STATE(25)] = 960,
  [SMALL_STATE(26)] = 1006,
  [SMALL_STATE(27)] = 1032,
  [SMALL_STATE(28)] = 1058,
  [SMALL_STATE(29)] = 1087,
  [SMALL_STATE(30)] = 1131,
  [SMALL_STATE(31)] = 1175,
  [SMALL_STATE(32)] = 1218,
  [SMALL_STATE(33)] = 1259,
  [SMALL_STATE(34)] = 1302,
  [SMALL_STATE(35)] = 1339,
  [SMALL_STATE(36)] = 1376,
  [SMALL_STATE(37)] = 1396,
  [SMALL_STATE(38)] = 1416,
  [SMALL_STATE(39)] = 1433,
  [SMALL_STATE(40)] = 1450,
  [SMALL_STATE(41)] = 1469,
  [SMALL_STATE(42)] = 1486,
  [SMALL_STATE(43)] = 1503,
  [SMALL_STATE(44)] = 1520,
  [SMALL_STATE(45)] = 1537,
  [SMALL_STATE(46)] = 1554,
  [SMALL_STATE(47)] = 1573,
  [SMALL_STATE(48)] = 1590,
  [SMALL_STATE(49)] = 1607,
  [SMALL_STATE(50)] = 1624,
  [SMALL_STATE(51)] = 1641,
  [SMALL_STATE(52)] = 1658,
  [SMALL_STATE(53)] = 1675,
  [SMALL_STATE(54)] = 1692,
  [SMALL_STATE(55)] = 1711,
  [SMALL_STATE(56)] = 1728,
  [SMALL_STATE(57)] = 1745,
  [SMALL_STATE(58)] = 1762,
  [SMALL_STATE(59)] = 1779,
  [SMALL_STATE(60)] = 1796,
  [SMALL_STATE(61)] = 1813,
  [SMALL_STATE(62)] = 1830,
  [SMALL_STATE(63)] = 1847,
  [SMALL_STATE(64)] = 1869,
  [SMALL_STATE(65)] = 1887,
  [SMALL_STATE(66)] = 1909,
  [SMALL_STATE(67)] = 1929,
  [SMALL_STATE(68)] = 1949,
  [SMALL_STATE(69)] = 1971,
  [SMALL_STATE(70)] = 1991,
  [SMALL_STATE(71)] = 2013,
  [SMALL_STATE(72)] = 2025,
  [SMALL_STATE(73)] = 2037,
  [SMALL_STATE(74)] = 2050,
  [SMALL_STATE(75)] = 2061,
  [SMALL_STATE(76)] = 2074,
  [SMALL_STATE(77)] = 2087,
  [SMALL_STATE(78)] = 2100,
  [SMALL_STATE(79)] = 2111,
  [SMALL_STATE(80)] = 2122,
  [SMALL_STATE(81)] = 2133,
  [SMALL_STATE(82)] = 2144,
  [SMALL_STATE(83)] = 2155,
  [SMALL_STATE(84)] = 2166,
  [SMALL_STATE(85)] = 2177,
  [SMALL_STATE(86)] = 2188,
  [SMALL_STATE(87)] = 2199,
  [SMALL_STATE(88)] = 2210,
  [SMALL_STATE(89)] = 2221,
  [SMALL_STATE(90)] = 2232,
  [SMALL_STATE(91)] = 2243,
  [SMALL_STATE(92)] = 2254,
  [SMALL_STATE(93)] = 2265,
  [SMALL_STATE(94)] = 2276,
  [SMALL_STATE(95)] = 2287,
  [SMALL_STATE(96)] = 2298,
  [SMALL_STATE(97)] = 2309,
  [SMALL_STATE(98)] = 2320,
  [SMALL_STATE(99)] = 2331,
  [SMALL_STATE(100)] = 2342,
  [SMALL_STATE(101)] = 2353,
  [SMALL_STATE(102)] = 2364,
  [SMALL_STATE(103)] = 2374,
  [SMALL_STATE(104)] = 2384,
  [SMALL_STATE(105)] = 2394,
  [SMALL_STATE(106)] = 2404,
  [SMALL_STATE(107)] = 2414,
  [SMALL_STATE(108)] = 2424,
  [SMALL_STATE(109)] = 2434,
  [SMALL_STATE(110)] = 2444,
  [SMALL_STATE(111)] = 2454,
  [SMALL_STATE(112)] = 2464,
  [SMALL_STATE(113)] = 2474,
  [SMALL_STATE(114)] = 2484,
  [SMALL_STATE(115)] = 2494,
  [SMALL_STATE(116)] = 2504,
  [SMALL_STATE(117)] = 2514,
  [SMALL_STATE(118)] = 2524,
  [SMALL_STATE(119)] = 2534,
  [SMALL_STATE(120)] = 2544,
  [SMALL_STATE(121)] = 2554,
  [SMALL_STATE(122)] = 2564,
  [SMALL_STATE(123)] = 2574,
  [SMALL_STATE(124)] = 2584,
  [SMALL_STATE(125)] = 2594,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_variable, 2, .production_id = 29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_variable, 2, .production_id = 29),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 30),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 30), SHIFT_REPEAT(46),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 30),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_operand, 1, .production_id = 17),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_operand, 1, .production_id = 17),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 1, .production_id = 28),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_variable_repeat1, 1, .production_id = 28),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3, .production_id = 32),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3, .production_id = 32),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_operand, 1, .production_id = 19),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_operand, 1, .production_id = 19),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(121),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(120),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(119),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(108),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(105),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_operand, 1, .production_id = 18),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_operand, 1, .production_id = 18),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 25),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 25),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 24),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 24),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 23),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 23),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 22),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 22),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 20),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 20),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contained, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contained, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27), SHIFT_REPEAT(70),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27), SHIFT_REPEAT(65),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27), SHIFT_REPEAT(11),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27), SHIFT_REPEAT(52),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 27), SHIFT_REPEAT(51),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 26),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 7),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 1, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 2, .production_id = 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 9),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 15),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 15),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 14),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 14),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_body, 1, .production_id = 13),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_body, 1, .production_id = 13),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 12),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 12),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 11),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 11),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 10),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 10),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 31),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 31),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, .production_id = 16),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, .production_id = 16),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_hand, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_hand, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_or, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_or, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 31),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 31),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 30), SHIFT_REPEAT(54),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_variable, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarator, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [323] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
