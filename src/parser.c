#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 36
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 45

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
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_PIPE_PIPE = 14,
  anon_sym_AMP_AMP = 15,
  anon_sym_COLON = 16,
  anon_sym_COLON_COLON = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_GT = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_PIPE = 24,
  anon_sym_AMP = 25,
  anon_sym_LT_LT = 26,
  anon_sym_GT_GT = 27,
  anon_sym_PLUS = 28,
  anon_sym_DASH = 29,
  anon_sym_STAR = 30,
  anon_sym_SLASH = 31,
  anon_sym_PERCENT = 32,
  anon_sym_CARET = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_DOLLAR = 35,
  anon_sym_POUND = 36,
  anon_sym_BANG = 37,
  aux_sym_eval_token1 = 38,
  aux_sym_testexpr_token1 = 39,
  aux_sym_set_statement_token1 = 40,
  aux_sym_set_statement_token2 = 41,
  aux_sym_let_statement_token1 = 42,
  sym_assignment = 43,
  anon_sym_PLUS_EQ = 44,
  anon_sym_DASH_EQ = 45,
  anon_sym_STAR_EQ = 46,
  anon_sym_SLASH_EQ = 47,
  anon_sym_CARET_EQ = 48,
  aux_sym_quest_variable_token1 = 49,
  anon_sym_LBRACK = 50,
  anon_sym_RBRACK = 51,
  aux_sym_literal_token1 = 52,
  aux_sym_literal_token2 = 53,
  aux_sym_literal_token3 = 54,
  aux_sym_literal_token4 = 55,
  aux_sym_literal_token5 = 56,
  sym_functions = 57,
  aux_sym_conditional_token1 = 58,
  aux_sym_conditional_token2 = 59,
  sym_con_else = 60,
  sym_function_call = 61,
  sym_user_function = 62,
  sym_loop = 63,
  anon_sym_SEMI = 64,
  aux_sym_comment_token1 = 65,
  sym_script_file = 66,
  sym_script_name = 67,
  sym_script_declarator = 68,
  sym__script_body = 69,
  sym_var_declare = 70,
  sym__type = 71,
  sym_int = 72,
  sym_float = 73,
  sym_string = 74,
  sym_array = 75,
  sym_block = 76,
  sym__block_body = 77,
  sym__statement = 78,
  sym_eval = 79,
  sym_testexpr = 80,
  sym_set_statement = 81,
  sym_let_statement = 82,
  sym__let_assignment = 83,
  sym_compound_assignment = 84,
  sym_left_operand = 85,
  sym_quest_variable = 86,
  sym_array_variable = 87,
  sym_array_index = 88,
  sym_right_operand = 89,
  sym_literal = 90,
  sym_interpreted = 91,
  sym_quest_reference = 92,
  sym_declarator = 93,
  sym_parenthetical = 94,
  sym_equality = 95,
  sym_contained = 96,
  sym_conditional = 97,
  sym_and_or = 98,
  sym_comment = 99,
  aux_sym_script_file_repeat1 = 100,
  aux_sym_block_repeat1 = 101,
  aux_sym_array_variable_repeat1 = 102,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_POUND] = "#",
  [anon_sym_BANG] = "!",
  [aux_sym_eval_token1] = "eval",
  [aux_sym_testexpr_token1] = "testexpr",
  [aux_sym_set_statement_token1] = "set",
  [aux_sym_set_statement_token2] = "to",
  [aux_sym_let_statement_token1] = "let",
  [sym_assignment] = "assignment",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_CARET_EQ] = "^=",
  [aux_sym_quest_variable_token1] = "quest_variable_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_literal_token2] = "literal_token2",
  [aux_sym_literal_token3] = "literal_token3",
  [aux_sym_literal_token4] = "literal_token4",
  [aux_sym_literal_token5] = "literal_token5",
  [sym_functions] = "functions",
  [aux_sym_conditional_token1] = "if",
  [aux_sym_conditional_token2] = "endif",
  [sym_con_else] = "con_else",
  [sym_function_call] = "function_call",
  [sym_user_function] = "user_function",
  [sym_loop] = "loop",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_script_file] = "script_file",
  [sym_script_name] = "script_name",
  [sym_script_declarator] = "script_declarator",
  [sym__script_body] = "_script_body",
  [sym_var_declare] = "var_declare",
  [sym__type] = "_type",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym_block] = "block",
  [sym__block_body] = "_block_body",
  [sym__statement] = "_statement",
  [sym_eval] = "eval",
  [sym_testexpr] = "testexpr",
  [sym_set_statement] = "set_statement",
  [sym_let_statement] = "let_statement",
  [sym__let_assignment] = "_let_assignment",
  [sym_compound_assignment] = "compound_assignment",
  [sym_left_operand] = "left_operand",
  [sym_quest_variable] = "quest_variable",
  [sym_array_variable] = "array_variable",
  [sym_array_index] = "array_index",
  [sym_right_operand] = "right_operand",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_eval_token1] = aux_sym_eval_token1,
  [aux_sym_testexpr_token1] = aux_sym_testexpr_token1,
  [aux_sym_set_statement_token1] = aux_sym_set_statement_token1,
  [aux_sym_set_statement_token2] = aux_sym_set_statement_token2,
  [aux_sym_let_statement_token1] = aux_sym_let_statement_token1,
  [sym_assignment] = sym_assignment,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [aux_sym_quest_variable_token1] = aux_sym_quest_variable_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
  [aux_sym_literal_token3] = aux_sym_literal_token3,
  [aux_sym_literal_token4] = aux_sym_literal_token4,
  [aux_sym_literal_token5] = aux_sym_literal_token5,
  [sym_functions] = sym_functions,
  [aux_sym_conditional_token1] = aux_sym_conditional_token1,
  [aux_sym_conditional_token2] = aux_sym_conditional_token2,
  [sym_con_else] = sym_con_else,
  [sym_function_call] = sym_function_call,
  [sym_user_function] = sym_user_function,
  [sym_loop] = sym_loop,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_script_file] = sym_script_file,
  [sym_script_name] = sym_script_name,
  [sym_script_declarator] = sym_script_declarator,
  [sym__script_body] = sym__script_body,
  [sym_var_declare] = sym_var_declare,
  [sym__type] = sym__type,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym_block] = sym_block,
  [sym__block_body] = sym__block_body,
  [sym__statement] = sym__statement,
  [sym_eval] = sym_eval,
  [sym_testexpr] = sym_testexpr,
  [sym_set_statement] = sym_set_statement,
  [sym_let_statement] = sym_let_statement,
  [sym__let_assignment] = sym__let_assignment,
  [sym_compound_assignment] = sym_compound_assignment,
  [sym_left_operand] = sym_left_operand,
  [sym_quest_variable] = sym_quest_variable,
  [sym_array_variable] = sym_array_variable,
  [sym_array_index] = sym_array_index,
  [sym_right_operand] = sym_right_operand,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_eval_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_testexpr_token1] = {
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
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
  [aux_sym_conditional_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_conditional_token2] = {
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
  [sym_user_function] = {
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
  [sym__script_body] = {
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
  [sym__block_body] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_eval] = {
    .visible = true,
    .named = true,
  },
  [sym_testexpr] = {
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
  [sym__let_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_assignment] = {
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
  [sym_right_operand] = {
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
  field_assignment = 3,
  field_block_body = 4,
  field_block_mode = 5,
  field_block_type = 6,
  field_compound = 7,
  field_condition = 8,
  field_declaration = 9,
  field_eval = 10,
  field_function = 11,
  field_function_call = 12,
  field_function_reference = 13,
  field_index = 14,
  field_interpreted = 15,
  field_key = 16,
  field_left_operand = 17,
  field_let = 18,
  field_literal = 19,
  field_loop = 20,
  field_plain_var = 21,
  field_quest_reference = 22,
  field_quest_var = 23,
  field_script_body = 24,
  field_script_name = 25,
  field_set = 26,
  field_statement = 27,
  field_testexpr = 28,
  field_type = 29,
  field_type_array = 30,
  field_type_float = 31,
  field_type_int = 32,
  field_type_string = 33,
  field_user_function = 34,
  field_var_declaration = 35,
  field_variable = 36,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_array_var] = "array_var",
  [field_assignment] = "assignment",
  [field_block_body] = "block_body",
  [field_block_mode] = "block_mode",
  [field_block_type] = "block_type",
  [field_compound] = "compound",
  [field_condition] = "condition",
  [field_declaration] = "declaration",
  [field_eval] = "eval",
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
  [field_testexpr] = "testexpr",
  [field_type] = "type",
  [field_type_array] = "type_array",
  [field_type_float] = "type_float",
  [field_type_int] = "type_int",
  [field_type_string] = "type_string",
  [field_user_function] = "user_function",
  [field_var_declaration] = "var_declaration",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 4},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 6},
  [12] = {.index = 22, .length = 6},
  [13] = {.index = 28, .length = 1},
  [14] = {.index = 29, .length = 1},
  [15] = {.index = 30, .length = 1},
  [16] = {.index = 31, .length = 1},
  [17] = {.index = 32, .length = 10},
  [18] = {.index = 42, .length = 9},
  [19] = {.index = 51, .length = 1},
  [20] = {.index = 52, .length = 1},
  [21] = {.index = 53, .length = 1},
  [22] = {.index = 54, .length = 1},
  [23] = {.index = 55, .length = 1},
  [24] = {.index = 56, .length = 1},
  [25] = {.index = 57, .length = 1},
  [26] = {.index = 58, .length = 1},
  [27] = {.index = 59, .length = 1},
  [28] = {.index = 60, .length = 1},
  [29] = {.index = 61, .length = 1},
  [30] = {.index = 62, .length = 1},
  [31] = {.index = 63, .length = 1},
  [32] = {.index = 64, .length = 1},
  [33] = {.index = 65, .length = 11},
  [34] = {.index = 76, .length = 20},
  [35] = {.index = 96, .length = 1},
  [36] = {.index = 97, .length = 2},
  [37] = {.index = 99, .length = 1},
  [38] = {.index = 100, .length = 1},
  [39] = {.index = 101, .length = 2},
  [40] = {.index = 103, .length = 1},
  [41] = {.index = 104, .length = 3},
  [42] = {.index = 107, .length = 9},
  [43] = {.index = 116, .length = 1},
  [44] = {.index = 117, .length = 9},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_script_name, 0},
  [1] =
    {field_block_mode, 0, .inherited = true},
    {field_script_body, 0},
    {field_var_declaration, 0, .inherited = true},
  [4] =
    {field_var_declaration, 0},
  [5] =
    {field_type_int, 0},
  [6] =
    {field_type_float, 0},
  [7] =
    {field_type_string, 0},
  [8] =
    {field_type_array, 0},
  [9] =
    {field_block_mode, 0},
  [10] =
    {field_block_mode, 1, .inherited = true},
    {field_script_body, 1, .inherited = true},
    {field_script_name, 0},
    {field_var_declaration, 1, .inherited = true},
  [14] =
    {field_declaration, 0},
    {field_script_name, 1},
  [16] =
    {field_type, 0},
    {field_type_array, 0, .inherited = true},
    {field_type_float, 0, .inherited = true},
    {field_type_int, 0, .inherited = true},
    {field_type_string, 0, .inherited = true},
    {field_variable, 1},
  [22] =
    {field_block_mode, 0, .inherited = true},
    {field_block_mode, 1, .inherited = true},
    {field_script_body, 0, .inherited = true},
    {field_script_body, 1, .inherited = true},
    {field_var_declaration, 0, .inherited = true},
    {field_var_declaration, 1, .inherited = true},
  [28] =
    {field_block_type, 1},
  [29] =
    {field_function_call, 0},
  [30] =
    {field_user_function, 0},
  [31] =
    {field_loop, 0},
  [32] =
    {field_block_body, 0},
    {field_condition, 0, .inherited = true},
    {field_eval, 0, .inherited = true},
    {field_function_call, 0, .inherited = true},
    {field_let, 0, .inherited = true},
    {field_loop, 0, .inherited = true},
    {field_set, 0, .inherited = true},
    {field_statement, 0, .inherited = true},
    {field_testexpr, 0, .inherited = true},
    {field_user_function, 0, .inherited = true},
  [42] =
    {field_condition, 0, .inherited = true},
    {field_eval, 0, .inherited = true},
    {field_function_call, 0, .inherited = true},
    {field_let, 0, .inherited = true},
    {field_loop, 0, .inherited = true},
    {field_set, 0, .inherited = true},
    {field_statement, 0},
    {field_testexpr, 0, .inherited = true},
    {field_user_function, 0, .inherited = true},
  [51] =
    {field_eval, 0},
  [52] =
    {field_testexpr, 0},
  [53] =
    {field_set, 0},
  [54] =
    {field_let, 0},
  [55] =
    {field_condition, 0},
  [56] =
    {field_plain_var, 0},
  [57] =
    {field_quest_var, 0},
  [58] =
    {field_array_var, 0},
  [59] =
    {field_function, 0},
  [60] =
    {field_function_reference, 0},
  [61] =
    {field_variable, 0},
  [62] =
    {field_literal, 0},
  [63] =
    {field_interpreted, 0},
  [64] =
    {field_quest_reference, 0},
  [65] =
    {field_block_body, 2, .inherited = true},
    {field_block_type, 1},
    {field_condition, 2, .inherited = true},
    {field_eval, 2, .inherited = true},
    {field_function_call, 2, .inherited = true},
    {field_let, 2, .inherited = true},
    {field_loop, 2, .inherited = true},
    {field_set, 2, .inherited = true},
    {field_statement, 2, .inherited = true},
    {field_testexpr, 2, .inherited = true},
    {field_user_function, 2, .inherited = true},
  [76] =
    {field_block_body, 0, .inherited = true},
    {field_block_body, 1, .inherited = true},
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
    {field_eval, 0, .inherited = true},
    {field_eval, 1, .inherited = true},
    {field_function_call, 0, .inherited = true},
    {field_function_call, 1, .inherited = true},
    {field_let, 0, .inherited = true},
    {field_let, 1, .inherited = true},
    {field_loop, 0, .inherited = true},
    {field_loop, 1, .inherited = true},
    {field_set, 0, .inherited = true},
    {field_set, 1, .inherited = true},
    {field_statement, 0, .inherited = true},
    {field_statement, 1, .inherited = true},
    {field_testexpr, 0, .inherited = true},
    {field_testexpr, 1, .inherited = true},
    {field_user_function, 0, .inherited = true},
    {field_user_function, 1, .inherited = true},
  [96] =
    {field_index, 0},
  [97] =
    {field_array, 0},
    {field_index, 1, .inherited = true},
  [99] =
    {field_assignment, 0},
  [100] =
    {field_compound, 0},
  [101] =
    {field_index, 0, .inherited = true},
    {field_index, 1, .inherited = true},
  [103] =
    {field_left_operand, 1},
  [104] =
    {field_assignment, 2, .inherited = true},
    {field_compound, 2, .inherited = true},
    {field_left_operand, 1},
  [107] =
    {field_condition, 2, .inherited = true},
    {field_eval, 2, .inherited = true},
    {field_function_call, 2, .inherited = true},
    {field_let, 2, .inherited = true},
    {field_loop, 2, .inherited = true},
    {field_set, 2, .inherited = true},
    {field_statement, 2, .inherited = true},
    {field_testexpr, 2, .inherited = true},
    {field_user_function, 2, .inherited = true},
  [116] =
    {field_key, 1},
  [117] =
    {field_condition, 3, .inherited = true},
    {field_eval, 3, .inherited = true},
    {field_function_call, 3, .inherited = true},
    {field_let, 3, .inherited = true},
    {field_loop, 3, .inherited = true},
    {field_set, 3, .inherited = true},
    {field_statement, 3, .inherited = true},
    {field_testexpr, 3, .inherited = true},
    {field_user_function, 3, .inherited = true},
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
      if (eof) ADVANCE(26);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '^') ADVANCE(50);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '^') ADVANCE(17);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == '|') ADVANCE(29);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 20:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 21:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 22:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(77);
      if (lookahead == '\r') ADVANCE(78);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(29);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(30);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_assignment);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_quest_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_literal_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_literal_token5);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(23);
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
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 4:
      if (lookahead == 'j') ADVANCE(16);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(23);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(29);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_user_function);
      END_STATE();
    case 19:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      END_STATE();
    case 24:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_function_call);
      if (lookahead == 'T') ADVANCE(48);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_block_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_int_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 41:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_script_declarator_token1);
      END_STATE();
    case 43:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 45:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_loop);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_eval_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_int_token3);
      END_STATE();
    case 56:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 60:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_conditional_token2);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_int_token2);
      END_STATE();
    case 67:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_con_else);
      END_STATE();
    case 70:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_testexpr_token1);
      END_STATE();
    case 78:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_array_token1);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_script_declarator_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 7},
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
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
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
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 76},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {(TSStateId)(-1)},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_eval_token1] = ACTIONS(1),
    [aux_sym_testexpr_token1] = ACTIONS(1),
    [aux_sym_set_statement_token1] = ACTIONS(1),
    [aux_sym_set_statement_token2] = ACTIONS(1),
    [aux_sym_let_statement_token1] = ACTIONS(1),
    [sym_assignment] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [aux_sym_literal_token4] = ACTIONS(1),
    [aux_sym_literal_token5] = ACTIONS(1),
    [aux_sym_conditional_token1] = ACTIONS(1),
    [aux_sym_conditional_token2] = ACTIONS(1),
    [sym_con_else] = ACTIONS(1),
    [sym_function_call] = ACTIONS(1),
    [sym_user_function] = ACTIONS(1),
    [sym_loop] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
  },
  [1] = {
    [sym_script_file] = STATE(142),
    [sym_script_name] = STATE(30),
    [sym_script_declarator] = STATE(140),
    [sym_comment] = STATE(1),
    [aux_sym_script_declarator_token1] = ACTIONS(5),
    [aux_sym_script_declarator_token2] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_array_index,
    STATE(2), 2,
      sym_comment,
      aux_sym_array_variable_repeat1,
    ACTIONS(9), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(7), 21,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      sym_assignment,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
      aux_sym_conditional_token1,
      sym_user_function,
  [43] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(18), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      aux_sym_array_variable_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_array_index,
    ACTIONS(16), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(14), 21,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      sym_assignment,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
      aux_sym_conditional_token1,
      sym_user_function,
  [88] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      sym_comment,
    ACTIONS(22), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(20), 22,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      sym_assignment,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LBRACK,
      aux_sym_conditional_token1,
      sym_user_function,
  [125] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_comment,
    ACTIONS(26), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(24), 22,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      sym_assignment,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LBRACK,
      aux_sym_conditional_token1,
      sym_user_function,
  [162] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      sym_comment,
    ACTIONS(30), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(28), 21,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      sym_assignment,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
      aux_sym_conditional_token1,
      sym_user_function,
  [198] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_comment,
    ACTIONS(34), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(32), 21,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token2,
      aux_sym_let_statement_token1,
      sym_assignment,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
      aux_sym_conditional_token1,
      sym_user_function,
  [234] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(48), 1,
      sym_functions,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(8), 1,
      sym_comment,
    STATE(20), 1,
      sym_quest_reference,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
      sym_literal,
    STATE(23), 1,
      sym_left_operand,
    STATE(32), 1,
      sym_declarator,
    STATE(37), 1,
      sym_parenthetical,
    ACTIONS(40), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(44), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(46), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(125), 3,
      sym_equality,
      sym_contained,
      sym_and_or,
  [295] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(48), 1,
      sym_functions,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(9), 1,
      sym_comment,
    STATE(20), 1,
      sym_quest_reference,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
      sym_literal,
    STATE(23), 1,
      sym_left_operand,
    STATE(32), 1,
      sym_declarator,
    STATE(37), 1,
      sym_parenthetical,
    ACTIONS(40), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(44), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(46), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
    STATE(119), 3,
      sym_equality,
      sym_contained,
      sym_and_or,
  [356] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(18), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      aux_sym_array_variable_repeat1,
    STATE(4), 1,
      sym_array_index,
    STATE(10), 1,
      sym_comment,
    ACTIONS(52), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(50), 14,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [394] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(48), 1,
      sym_functions,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(11), 1,
      sym_comment,
    STATE(20), 1,
      sym_quest_reference,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
      sym_literal,
    STATE(23), 1,
      sym_left_operand,
    STATE(37), 1,
      sym_parenthetical,
    STATE(42), 1,
      sym_contained,
    STATE(45), 1,
      sym_declarator,
    STATE(49), 1,
      sym_right_operand,
    ACTIONS(44), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(46), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [452] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(48), 1,
      sym_functions,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(12), 1,
      sym_comment,
    STATE(20), 1,
      sym_quest_reference,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
      sym_literal,
    STATE(23), 1,
      sym_left_operand,
    STATE(32), 1,
      sym_declarator,
    STATE(37), 1,
      sym_parenthetical,
    ACTIONS(44), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(24), 2,
      sym_equality,
      sym_contained,
    ACTIONS(46), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [508] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(64), 1,
      sym_functions,
    STATE(13), 1,
      sym_comment,
    STATE(103), 1,
      sym_quest_variable,
    STATE(104), 1,
      sym_array_variable,
    STATE(109), 1,
      sym_left_operand,
    STATE(110), 1,
      sym_literal,
    STATE(111), 1,
      sym_interpreted,
    STATE(112), 1,
      sym_quest_reference,
    STATE(113), 1,
      sym_parenthetical,
    STATE(116), 1,
      sym_contained,
    STATE(117), 1,
      sym_declarator,
    STATE(118), 1,
      sym_right_operand,
    ACTIONS(60), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(62), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [566] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(64), 1,
      sym_functions,
    STATE(14), 1,
      sym_comment,
    STATE(103), 1,
      sym_quest_variable,
    STATE(104), 1,
      sym_array_variable,
    STATE(109), 1,
      sym_left_operand,
    STATE(110), 1,
      sym_literal,
    STATE(111), 1,
      sym_interpreted,
    STATE(112), 1,
      sym_quest_reference,
    STATE(113), 1,
      sym_parenthetical,
    STATE(115), 1,
      sym_right_operand,
    STATE(116), 1,
      sym_contained,
    STATE(117), 1,
      sym_declarator,
    ACTIONS(60), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(62), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [624] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(48), 1,
      sym_functions,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(15), 1,
      sym_comment,
    STATE(20), 1,
      sym_quest_reference,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
      sym_literal,
    STATE(23), 1,
      sym_left_operand,
    STATE(32), 1,
      sym_declarator,
    STATE(37), 1,
      sym_parenthetical,
    ACTIONS(44), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(19), 2,
      sym_equality,
      sym_contained,
    ACTIONS(46), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [680] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(48), 1,
      sym_functions,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(16), 1,
      sym_comment,
    STATE(20), 1,
      sym_quest_reference,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
      sym_literal,
    STATE(23), 1,
      sym_left_operand,
    STATE(37), 1,
      sym_parenthetical,
    STATE(42), 1,
      sym_contained,
    STATE(45), 1,
      sym_declarator,
    STATE(46), 1,
      sym_right_operand,
    ACTIONS(44), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(46), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [738] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_comment,
    ACTIONS(68), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(66), 15,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      anon_sym_RBRACK,
      aux_sym_conditional_token1,
      sym_user_function,
  [768] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
    ACTIONS(73), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(70), 14,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [797] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      aux_sym_eval_token1,
    ACTIONS(78), 1,
      aux_sym_testexpr_token1,
    ACTIONS(80), 1,
      aux_sym_set_statement_token1,
    ACTIONS(82), 1,
      aux_sym_let_statement_token1,
    ACTIONS(84), 1,
      aux_sym_conditional_token1,
    ACTIONS(86), 1,
      sym_function_call,
    ACTIONS(88), 1,
      sym_user_function,
    ACTIONS(90), 1,
      sym_loop,
    STATE(19), 1,
      sym_comment,
    STATE(35), 1,
      sym_and_or,
    STATE(86), 1,
      sym__block_body,
    STATE(97), 1,
      sym__statement,
    STATE(98), 1,
      sym_eval,
    STATE(99), 1,
      sym_testexpr,
    STATE(100), 1,
      sym_set_statement,
    STATE(101), 1,
      sym_let_statement,
    STATE(102), 1,
      sym_conditional,
    ACTIONS(40), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [856] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(92), 14,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [885] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_comment,
    ACTIONS(98), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(96), 14,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [914] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(100), 14,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [943] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(106), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(104), 14,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [972] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      aux_sym_eval_token1,
    ACTIONS(78), 1,
      aux_sym_testexpr_token1,
    ACTIONS(80), 1,
      aux_sym_set_statement_token1,
    ACTIONS(82), 1,
      aux_sym_let_statement_token1,
    ACTIONS(84), 1,
      aux_sym_conditional_token1,
    ACTIONS(86), 1,
      sym_function_call,
    ACTIONS(88), 1,
      sym_user_function,
    ACTIONS(90), 1,
      sym_loop,
    STATE(24), 1,
      sym_comment,
    STATE(33), 1,
      sym_and_or,
    STATE(88), 1,
      sym__block_body,
    STATE(97), 1,
      sym__statement,
    STATE(98), 1,
      sym_eval,
    STATE(99), 1,
      sym_testexpr,
    STATE(100), 1,
      sym_set_statement,
    STATE(101), 1,
      sym_let_statement,
    STATE(102), 1,
      sym_conditional,
    ACTIONS(40), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1031] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(110), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_call,
      sym_loop,
    ACTIONS(108), 14,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1060] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      aux_sym_float_token1,
    ACTIONS(120), 1,
      aux_sym_string_token1,
    ACTIONS(123), 1,
      aux_sym_array_token1,
    ACTIONS(126), 1,
      aux_sym_block_token1,
    STATE(68), 1,
      sym_var_declare,
    STATE(69), 1,
      sym__script_body,
    STATE(71), 1,
      sym_block,
    STATE(124), 1,
      sym_int,
    STATE(126), 1,
      sym__type,
    STATE(137), 1,
      sym_array,
    STATE(138), 1,
      sym_string,
    STATE(141), 1,
      sym_float,
    STATE(26), 2,
      sym_comment,
      aux_sym_script_file_repeat1,
    ACTIONS(114), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
  [1112] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(129), 1,
      aux_sym_block_token2,
    ACTIONS(131), 1,
      aux_sym_eval_token1,
    ACTIONS(134), 1,
      aux_sym_testexpr_token1,
    ACTIONS(137), 1,
      aux_sym_set_statement_token1,
    ACTIONS(140), 1,
      aux_sym_let_statement_token1,
    ACTIONS(143), 1,
      aux_sym_conditional_token1,
    ACTIONS(146), 1,
      sym_function_call,
    ACTIONS(149), 1,
      sym_user_function,
    ACTIONS(152), 1,
      sym_loop,
    STATE(57), 1,
      sym__block_body,
    STATE(58), 1,
      sym__statement,
    STATE(59), 1,
      sym_eval,
    STATE(60), 1,
      sym_testexpr,
    STATE(61), 1,
      sym_set_statement,
    STATE(62), 1,
      sym_let_statement,
    STATE(63), 1,
      sym_conditional,
    STATE(27), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [1168] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(155), 1,
      aux_sym_block_token2,
    ACTIONS(157), 1,
      aux_sym_eval_token1,
    ACTIONS(159), 1,
      aux_sym_testexpr_token1,
    ACTIONS(161), 1,
      aux_sym_set_statement_token1,
    ACTIONS(163), 1,
      aux_sym_let_statement_token1,
    ACTIONS(165), 1,
      aux_sym_conditional_token1,
    ACTIONS(167), 1,
      sym_function_call,
    ACTIONS(169), 1,
      sym_user_function,
    ACTIONS(171), 1,
      sym_loop,
    STATE(28), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_block_repeat1,
    STATE(57), 1,
      sym__block_body,
    STATE(58), 1,
      sym__statement,
    STATE(59), 1,
      sym_eval,
    STATE(60), 1,
      sym_testexpr,
    STATE(61), 1,
      sym_set_statement,
    STATE(62), 1,
      sym_let_statement,
    STATE(63), 1,
      sym_conditional,
  [1226] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      aux_sym_float_token1,
    ACTIONS(179), 1,
      aux_sym_string_token1,
    ACTIONS(181), 1,
      aux_sym_array_token1,
    ACTIONS(183), 1,
      aux_sym_block_token1,
    STATE(26), 1,
      aux_sym_script_file_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(68), 1,
      sym_var_declare,
    STATE(69), 1,
      sym__script_body,
    STATE(71), 1,
      sym_block,
    STATE(124), 1,
      sym_int,
    STATE(126), 1,
      sym__type,
    STATE(137), 1,
      sym_array,
    STATE(138), 1,
      sym_string,
    STATE(141), 1,
      sym_float,
    ACTIONS(175), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
  [1280] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(177), 1,
      aux_sym_float_token1,
    ACTIONS(179), 1,
      aux_sym_string_token1,
    ACTIONS(181), 1,
      aux_sym_array_token1,
    ACTIONS(183), 1,
      aux_sym_block_token1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_script_file_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(68), 1,
      sym_var_declare,
    STATE(69), 1,
      sym__script_body,
    STATE(71), 1,
      sym_block,
    STATE(124), 1,
      sym_int,
    STATE(126), 1,
      sym__type,
    STATE(137), 1,
      sym_array,
    STATE(138), 1,
      sym_string,
    STATE(141), 1,
      sym_float,
    ACTIONS(175), 3,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
  [1334] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      aux_sym_eval_token1,
    ACTIONS(159), 1,
      aux_sym_testexpr_token1,
    ACTIONS(161), 1,
      aux_sym_set_statement_token1,
    ACTIONS(163), 1,
      aux_sym_let_statement_token1,
    ACTIONS(165), 1,
      aux_sym_conditional_token1,
    ACTIONS(167), 1,
      sym_function_call,
    ACTIONS(169), 1,
      sym_user_function,
    ACTIONS(171), 1,
      sym_loop,
    ACTIONS(187), 1,
      aux_sym_block_token2,
    STATE(27), 1,
      aux_sym_block_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(57), 1,
      sym__block_body,
    STATE(58), 1,
      sym__statement,
    STATE(59), 1,
      sym_eval,
    STATE(60), 1,
      sym_testexpr,
    STATE(61), 1,
      sym_set_statement,
    STATE(62), 1,
      sym_let_statement,
    STATE(63), 1,
      sym_conditional,
  [1392] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(195), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(191), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(189), 9,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1424] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      aux_sym_eval_token1,
    ACTIONS(78), 1,
      aux_sym_testexpr_token1,
    ACTIONS(80), 1,
      aux_sym_set_statement_token1,
    ACTIONS(82), 1,
      aux_sym_let_statement_token1,
    ACTIONS(84), 1,
      aux_sym_conditional_token1,
    ACTIONS(86), 1,
      sym_function_call,
    ACTIONS(88), 1,
      sym_user_function,
    ACTIONS(90), 1,
      sym_loop,
    STATE(33), 1,
      sym_comment,
    STATE(87), 1,
      sym__block_body,
    STATE(97), 1,
      sym__statement,
    STATE(98), 1,
      sym_eval,
    STATE(99), 1,
      sym_testexpr,
    STATE(100), 1,
      sym_set_statement,
    STATE(101), 1,
      sym_let_statement,
    STATE(102), 1,
      sym_conditional,
  [1476] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(42), 1,
      aux_sym_quest_variable_token1,
    ACTIONS(48), 1,
      sym_functions,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(20), 1,
      sym_quest_reference,
    STATE(21), 1,
      sym_interpreted,
    STATE(22), 1,
      sym_literal,
    STATE(23), 1,
      sym_left_operand,
    STATE(34), 1,
      sym_comment,
    STATE(38), 1,
      sym_declarator,
    ACTIONS(44), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(46), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [1522] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      aux_sym_eval_token1,
    ACTIONS(78), 1,
      aux_sym_testexpr_token1,
    ACTIONS(80), 1,
      aux_sym_set_statement_token1,
    ACTIONS(82), 1,
      aux_sym_let_statement_token1,
    ACTIONS(84), 1,
      aux_sym_conditional_token1,
    ACTIONS(86), 1,
      sym_function_call,
    ACTIONS(88), 1,
      sym_user_function,
    ACTIONS(90), 1,
      sym_loop,
    STATE(35), 1,
      sym_comment,
    STATE(89), 1,
      sym__block_body,
    STATE(97), 1,
      sym__statement,
    STATE(98), 1,
      sym_eval,
    STATE(99), 1,
      sym_testexpr,
    STATE(100), 1,
      sym_set_statement,
    STATE(101), 1,
      sym_let_statement,
    STATE(102), 1,
      sym_conditional,
  [1574] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_comment,
    ACTIONS(199), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(197), 10,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1597] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
    ACTIONS(195), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(189), 10,
      aux_sym_block_token2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1620] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    ACTIONS(203), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(201), 9,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1642] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(18), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      aux_sym_array_variable_repeat1,
    STATE(4), 1,
      sym_array_index,
    STATE(39), 1,
      sym_comment,
    ACTIONS(50), 7,
      aux_sym_set_statement_token2,
      sym_assignment,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
  [1667] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(205), 7,
      anon_sym_RPAREN,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1687] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_comment,
    ACTIONS(211), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(209), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1707] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    ACTIONS(215), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(213), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1727] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(217), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1747] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(223), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(221), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1767] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(195), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(189), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1787] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_comment,
    ACTIONS(227), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(225), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1807] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    ACTIONS(229), 3,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_identifier,
    ACTIONS(231), 6,
      anon_sym_LPAREN,
      aux_sym_quest_variable_token1,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      sym_functions,
  [1827] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    ACTIONS(233), 3,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_identifier,
    ACTIONS(235), 6,
      anon_sym_LPAREN,
      aux_sym_quest_variable_token1,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      sym_functions,
  [1847] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_comment,
    ACTIONS(239), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(237), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1867] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_comment,
    ACTIONS(243), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(241), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1887] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_comment,
    ACTIONS(245), 3,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_identifier,
    ACTIONS(247), 6,
      anon_sym_LPAREN,
      aux_sym_quest_variable_token1,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      sym_functions,
  [1907] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_comment,
    ACTIONS(251), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(249), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1927] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_comment,
    ACTIONS(255), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(253), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1947] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_comment,
    ACTIONS(259), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(257), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1967] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
    ACTIONS(263), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(261), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [1987] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_comment,
    ACTIONS(267), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(265), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [2007] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_comment,
    ACTIONS(271), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(269), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [2027] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_comment,
    ACTIONS(275), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(273), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [2047] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_comment,
    ACTIONS(279), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(277), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [2067] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    ACTIONS(283), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(281), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [2087] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_comment,
    ACTIONS(287), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(285), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [2107] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_comment,
    ACTIONS(291), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(289), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [2127] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_comment,
    ACTIONS(295), 2,
      sym_function_call,
      sym_loop,
    ACTIONS(293), 7,
      aux_sym_block_token2,
      aux_sym_eval_token1,
      aux_sym_testexpr_token1,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
      aux_sym_conditional_token1,
      sym_user_function,
  [2147] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(64), 1,
      sym_comment,
    ACTIONS(297), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [2164] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      sym_assignment,
    STATE(11), 1,
      sym__let_assignment,
    STATE(47), 1,
      sym_compound_assignment,
    STATE(65), 1,
      sym_comment,
    ACTIONS(301), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
  [2187] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_comment,
    ACTIONS(303), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [2204] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_comment,
    ACTIONS(305), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [2221] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_comment,
    ACTIONS(307), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [2238] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      sym_comment,
    ACTIONS(309), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [2255] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_comment,
    ACTIONS(311), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [2272] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_comment,
    ACTIONS(313), 8,
      ts_builtin_sym_end,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
      aux_sym_string_token1,
      aux_sym_array_token1,
      aux_sym_block_token1,
  [2289] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      sym_assignment,
    STATE(14), 1,
      sym__let_assignment,
    STATE(47), 1,
      sym_compound_assignment,
    STATE(72), 1,
      sym_comment,
    ACTIONS(301), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
  [2312] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_comment,
    ACTIONS(315), 7,
      aux_sym_set_statement_token2,
      sym_assignment,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
  [2328] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_comment,
    STATE(131), 1,
      sym_literal,
    ACTIONS(44), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(46), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [2347] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym_comment,
    STATE(128), 1,
      sym_literal,
    ACTIONS(44), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(46), 3,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
  [2366] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      aux_sym_quest_variable_token1,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(76), 1,
      sym_comment,
    STATE(130), 1,
      sym_left_operand,
  [2388] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(321), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_array_index,
    ACTIONS(7), 2,
      aux_sym_conditional_token2,
      sym_con_else,
    STATE(77), 2,
      sym_comment,
      aux_sym_array_variable_repeat1,
  [2406] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      aux_sym_array_variable_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(83), 1,
      sym_array_index,
    ACTIONS(14), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2426] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      aux_sym_array_variable_repeat1,
    STATE(79), 1,
      sym_comment,
    STATE(83), 1,
      sym_array_index,
    ACTIONS(50), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2446] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      aux_sym_quest_variable_token1,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(72), 1,
      sym_left_operand,
    STATE(80), 1,
      sym_comment,
  [2468] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      aux_sym_quest_variable_token1,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(65), 1,
      sym_left_operand,
    STATE(81), 1,
      sym_comment,
  [2490] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      aux_sym_quest_variable_token1,
    STATE(6), 1,
      sym_array_variable,
    STATE(7), 1,
      sym_quest_variable,
    STATE(82), 1,
      sym_comment,
    STATE(129), 1,
      sym_left_operand,
  [2512] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_comment,
    ACTIONS(20), 3,
      anon_sym_LBRACK,
      aux_sym_conditional_token2,
      sym_con_else,
  [2524] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      sym_comment,
    ACTIONS(24), 3,
      anon_sym_LBRACK,
      aux_sym_conditional_token2,
      sym_con_else,
  [2536] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_comment,
    ACTIONS(241), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2547] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      aux_sym_conditional_token2,
    ACTIONS(328), 1,
      sym_con_else,
    STATE(86), 1,
      sym_comment,
  [2560] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(330), 1,
      aux_sym_conditional_token2,
    ACTIONS(332), 1,
      sym_con_else,
    STATE(87), 1,
      sym_comment,
  [2573] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(334), 1,
      aux_sym_conditional_token2,
    ACTIONS(336), 1,
      sym_con_else,
    STATE(88), 1,
      sym_comment,
  [2586] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(338), 1,
      aux_sym_conditional_token2,
    ACTIONS(340), 1,
      sym_con_else,
    STATE(89), 1,
      sym_comment,
  [2599] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_comment,
    ACTIONS(221), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2610] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_comment,
    ACTIONS(253), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2621] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_comment,
    ACTIONS(249), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2632] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_comment,
    ACTIONS(209), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2643] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      sym_comment,
    ACTIONS(257), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2654] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_comment,
    ACTIONS(261), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2665] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      sym_comment,
    ACTIONS(265), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2676] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_comment,
    ACTIONS(273), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2687] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_comment,
    ACTIONS(277), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2698] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_comment,
    ACTIONS(281), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2709] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_comment,
    ACTIONS(285), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2720] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym_comment,
    ACTIONS(289), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2731] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      sym_comment,
    ACTIONS(293), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2742] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      sym_comment,
    ACTIONS(32), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2753] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_comment,
    ACTIONS(28), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2764] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_comment,
    ACTIONS(70), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2775] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_comment,
    ACTIONS(66), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2786] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      sym_comment,
    ACTIONS(108), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2797] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_comment,
    ACTIONS(217), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2808] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_comment,
    ACTIONS(104), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2819] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_comment,
    ACTIONS(100), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2830] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym_comment,
    ACTIONS(96), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2841] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_comment,
    ACTIONS(92), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2852] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_comment,
    ACTIONS(189), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2863] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      sym_comment,
    ACTIONS(197), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2874] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym_comment,
    ACTIONS(237), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2885] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      sym_comment,
    ACTIONS(213), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2896] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      sym_comment,
    ACTIONS(189), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2907] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(118), 1,
      sym_comment,
    ACTIONS(225), 2,
      aux_sym_conditional_token2,
      sym_con_else,
  [2918] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [2928] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(344), 1,
      sym_identifier,
    STATE(120), 1,
      sym_comment,
  [2938] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(121), 1,
      sym_comment,
  [2948] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(122), 1,
      sym_comment,
  [2958] = 3,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    STATE(123), 1,
      sym_comment,
  [2968] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(354), 1,
      sym_identifier,
    STATE(124), 1,
      sym_comment,
  [2978] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
  [2988] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(126), 1,
      sym_comment,
  [2998] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(360), 1,
      aux_sym_conditional_token2,
    STATE(127), 1,
      sym_comment,
  [3008] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym_comment,
  [3018] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      aux_sym_set_statement_token2,
    STATE(129), 1,
      sym_comment,
  [3028] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      aux_sym_set_statement_token2,
    STATE(130), 1,
      sym_comment,
  [3038] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym_comment,
  [3048] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      aux_sym_conditional_token2,
    STATE(132), 1,
      sym_comment,
  [3058] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      sym_identifier,
    STATE(133), 1,
      sym_comment,
  [3068] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(374), 1,
      aux_sym_conditional_token2,
    STATE(134), 1,
      sym_comment,
  [3078] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(135), 1,
      sym_comment,
  [3088] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(378), 1,
      aux_sym_conditional_token2,
    STATE(136), 1,
      sym_comment,
  [3098] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(137), 1,
      sym_comment,
  [3108] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(382), 1,
      sym_identifier,
    STATE(138), 1,
      sym_comment,
  [3118] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(384), 1,
      sym_identifier,
    STATE(139), 1,
      sym_comment,
  [3128] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(140), 1,
      sym_comment,
  [3138] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(141), 1,
      sym_comment,
  [3148] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_comment,
  [3158] = 1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 198,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 394,
  [SMALL_STATE(12)] = 452,
  [SMALL_STATE(13)] = 508,
  [SMALL_STATE(14)] = 566,
  [SMALL_STATE(15)] = 624,
  [SMALL_STATE(16)] = 680,
  [SMALL_STATE(17)] = 738,
  [SMALL_STATE(18)] = 768,
  [SMALL_STATE(19)] = 797,
  [SMALL_STATE(20)] = 856,
  [SMALL_STATE(21)] = 885,
  [SMALL_STATE(22)] = 914,
  [SMALL_STATE(23)] = 943,
  [SMALL_STATE(24)] = 972,
  [SMALL_STATE(25)] = 1031,
  [SMALL_STATE(26)] = 1060,
  [SMALL_STATE(27)] = 1112,
  [SMALL_STATE(28)] = 1168,
  [SMALL_STATE(29)] = 1226,
  [SMALL_STATE(30)] = 1280,
  [SMALL_STATE(31)] = 1334,
  [SMALL_STATE(32)] = 1392,
  [SMALL_STATE(33)] = 1424,
  [SMALL_STATE(34)] = 1476,
  [SMALL_STATE(35)] = 1522,
  [SMALL_STATE(36)] = 1574,
  [SMALL_STATE(37)] = 1597,
  [SMALL_STATE(38)] = 1620,
  [SMALL_STATE(39)] = 1642,
  [SMALL_STATE(40)] = 1667,
  [SMALL_STATE(41)] = 1687,
  [SMALL_STATE(42)] = 1707,
  [SMALL_STATE(43)] = 1727,
  [SMALL_STATE(44)] = 1747,
  [SMALL_STATE(45)] = 1767,
  [SMALL_STATE(46)] = 1787,
  [SMALL_STATE(47)] = 1807,
  [SMALL_STATE(48)] = 1827,
  [SMALL_STATE(49)] = 1847,
  [SMALL_STATE(50)] = 1867,
  [SMALL_STATE(51)] = 1887,
  [SMALL_STATE(52)] = 1907,
  [SMALL_STATE(53)] = 1927,
  [SMALL_STATE(54)] = 1947,
  [SMALL_STATE(55)] = 1967,
  [SMALL_STATE(56)] = 1987,
  [SMALL_STATE(57)] = 2007,
  [SMALL_STATE(58)] = 2027,
  [SMALL_STATE(59)] = 2047,
  [SMALL_STATE(60)] = 2067,
  [SMALL_STATE(61)] = 2087,
  [SMALL_STATE(62)] = 2107,
  [SMALL_STATE(63)] = 2127,
  [SMALL_STATE(64)] = 2147,
  [SMALL_STATE(65)] = 2164,
  [SMALL_STATE(66)] = 2187,
  [SMALL_STATE(67)] = 2204,
  [SMALL_STATE(68)] = 2221,
  [SMALL_STATE(69)] = 2238,
  [SMALL_STATE(70)] = 2255,
  [SMALL_STATE(71)] = 2272,
  [SMALL_STATE(72)] = 2289,
  [SMALL_STATE(73)] = 2312,
  [SMALL_STATE(74)] = 2328,
  [SMALL_STATE(75)] = 2347,
  [SMALL_STATE(76)] = 2366,
  [SMALL_STATE(77)] = 2388,
  [SMALL_STATE(78)] = 2406,
  [SMALL_STATE(79)] = 2426,
  [SMALL_STATE(80)] = 2446,
  [SMALL_STATE(81)] = 2468,
  [SMALL_STATE(82)] = 2490,
  [SMALL_STATE(83)] = 2512,
  [SMALL_STATE(84)] = 2524,
  [SMALL_STATE(85)] = 2536,
  [SMALL_STATE(86)] = 2547,
  [SMALL_STATE(87)] = 2560,
  [SMALL_STATE(88)] = 2573,
  [SMALL_STATE(89)] = 2586,
  [SMALL_STATE(90)] = 2599,
  [SMALL_STATE(91)] = 2610,
  [SMALL_STATE(92)] = 2621,
  [SMALL_STATE(93)] = 2632,
  [SMALL_STATE(94)] = 2643,
  [SMALL_STATE(95)] = 2654,
  [SMALL_STATE(96)] = 2665,
  [SMALL_STATE(97)] = 2676,
  [SMALL_STATE(98)] = 2687,
  [SMALL_STATE(99)] = 2698,
  [SMALL_STATE(100)] = 2709,
  [SMALL_STATE(101)] = 2720,
  [SMALL_STATE(102)] = 2731,
  [SMALL_STATE(103)] = 2742,
  [SMALL_STATE(104)] = 2753,
  [SMALL_STATE(105)] = 2764,
  [SMALL_STATE(106)] = 2775,
  [SMALL_STATE(107)] = 2786,
  [SMALL_STATE(108)] = 2797,
  [SMALL_STATE(109)] = 2808,
  [SMALL_STATE(110)] = 2819,
  [SMALL_STATE(111)] = 2830,
  [SMALL_STATE(112)] = 2841,
  [SMALL_STATE(113)] = 2852,
  [SMALL_STATE(114)] = 2863,
  [SMALL_STATE(115)] = 2874,
  [SMALL_STATE(116)] = 2885,
  [SMALL_STATE(117)] = 2896,
  [SMALL_STATE(118)] = 2907,
  [SMALL_STATE(119)] = 2918,
  [SMALL_STATE(120)] = 2928,
  [SMALL_STATE(121)] = 2938,
  [SMALL_STATE(122)] = 2948,
  [SMALL_STATE(123)] = 2958,
  [SMALL_STATE(124)] = 2968,
  [SMALL_STATE(125)] = 2978,
  [SMALL_STATE(126)] = 2988,
  [SMALL_STATE(127)] = 2998,
  [SMALL_STATE(128)] = 3008,
  [SMALL_STATE(129)] = 3018,
  [SMALL_STATE(130)] = 3028,
  [SMALL_STATE(131)] = 3038,
  [SMALL_STATE(132)] = 3048,
  [SMALL_STATE(133)] = 3058,
  [SMALL_STATE(134)] = 3068,
  [SMALL_STATE(135)] = 3078,
  [SMALL_STATE(136)] = 3088,
  [SMALL_STATE(137)] = 3098,
  [SMALL_STATE(138)] = 3108,
  [SMALL_STATE(139)] = 3118,
  [SMALL_STATE(140)] = 3128,
  [SMALL_STATE(141)] = 3138,
  [SMALL_STATE(142)] = 3148,
  [SMALL_STATE(143)] = 3158,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 39),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 39),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 39), SHIFT_REPEAT(74),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_variable, 2, .production_id = 36),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_variable, 2, .production_id = 36),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 1, .production_id = 35),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_variable_repeat1, 1, .production_id = 35),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3, .production_id = 43),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3, .production_id = 43),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_operand, 1, .production_id = 26),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_operand, 1, .production_id = 26),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_operand, 1, .production_id = 25),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_operand, 1, .production_id = 25),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_operand, 1, .production_id = 24),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_operand, 1, .production_id = 24),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quest_variable, 1), REDUCE(sym_quest_reference, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 32),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 32),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 31),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 31),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 30),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 30),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1, .production_id = 29),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarator, 1, .production_id = 29),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted, 1, .production_id = 27),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted, 1, .production_id = 27),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 12),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(120),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(121),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(133),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(135),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(122),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 34),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 34), SHIFT_REPEAT(50),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 34), SHIFT_REPEAT(41),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 34), SHIFT_REPEAT(76),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 34), SHIFT_REPEAT(81),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 34), SHIFT_REPEAT(15),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 34), SHIFT_REPEAT(54),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 34), SHIFT_REPEAT(55),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 34), SHIFT_REPEAT(56),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2, .production_id = 9),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 1, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contained, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contained, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_or, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_or, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_testexpr, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_testexpr, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_operand, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_operand, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4, .production_id = 42),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4, .production_id = 42),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6, .production_id = 44),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6, .production_id = 44),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 40),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 40),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__let_assignment, 1, .production_id = 38),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__let_assignment, 1, .production_id = 38),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_assignment, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_assignment, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 41),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 41),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__let_assignment, 1, .production_id = 37),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__let_assignment, 1, .production_id = 37),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 42),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5, .production_id = 42),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 44),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5, .production_id = 44),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 14),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, .production_id = 14),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 15),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, .production_id = 15),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 16),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, .production_id = 16),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 17),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 17),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body, 1, .production_id = 18),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_body, 1, .production_id = 18),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 19),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, .production_id = 19),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 20),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, .production_id = 20),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 21),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, .production_id = 21),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 22),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, .production_id = 22),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 23),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, .production_id = 23),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 13),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 33),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 11),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__script_body, 1, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_file_repeat1, 1, .production_id = 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 2, .production_id = 10),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__script_body, 1, .production_id = 8),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quest_variable, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_variable_repeat1, 2, .production_id = 39), SHIFT_REPEAT(75),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 7),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 6),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarator, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 5),
  [390] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
