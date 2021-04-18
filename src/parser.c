#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
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
  sym_float_type = 7,
  sym_string_type = 8,
  sym_array_type = 9,
  sym_variable = 10,
  aux_sym_block_token1 = 11,
  aux_sym_block_token2 = 12,
  aux_sym_block_type_token1 = 13,
  aux_sym_block_type_token2 = 14,
  aux_sym_block_type_token3 = 15,
  aux_sym_block_type_token4 = 16,
  aux_sym_block_type_token5 = 17,
  aux_sym_block_type_token6 = 18,
  aux_sym_block_type_token7 = 19,
  aux_sym_block_type_token8 = 20,
  aux_sym_block_type_token9 = 21,
  aux_sym_block_type_token10 = 22,
  aux_sym_block_type_token11 = 23,
  aux_sym_block_type_token12 = 24,
  aux_sym_block_type_token13 = 25,
  aux_sym_block_type_token14 = 26,
  aux_sym_block_type_token15 = 27,
  aux_sym_block_type_token16 = 28,
  aux_sym_block_type_token17 = 29,
  aux_sym_block_type_token18 = 30,
  aux_sym_block_type_token19 = 31,
  aux_sym_block_type_token20 = 32,
  aux_sym_block_type_token21 = 33,
  aux_sym_block_type_token22 = 34,
  aux_sym_block_type_token23 = 35,
  aux_sym_block_type_token24 = 36,
  aux_sym_block_type_token25 = 37,
  aux_sym_block_type_token26 = 38,
  aux_sym_block_type_token27 = 39,
  aux_sym_block_type_token28 = 40,
  aux_sym_block_type_token29 = 41,
  aux_sym_block_type_token30 = 42,
  aux_sym_block_type_token31 = 43,
  aux_sym_block_type_token32 = 44,
  aux_sym_block_type_token33 = 45,
  aux_sym_block_type_token34 = 46,
  aux_sym_block_type_token35 = 47,
  aux_sym_block_type_token36 = 48,
  aux_sym_block_type_token37 = 49,
  aux_sym_block_type_token38 = 50,
  aux_sym_block_type_token39 = 51,
  aux_sym_block_type_token40 = 52,
  aux_sym_block_type_token41 = 53,
  aux_sym_block_type_token42 = 54,
  aux_sym_block_type_token43 = 55,
  aux_sym_block_type_token44 = 56,
  aux_sym_block_type_token45 = 57,
  aux_sym_block_type_token46 = 58,
  aux_sym_block_type_token47 = 59,
  aux_sym_block_type_token48 = 60,
  aux_sym_block_type_token49 = 61,
  aux_sym_block_type_token50 = 62,
  aux_sym_block_type_token51 = 63,
  aux_sym_block_type_token52 = 64,
  aux_sym_block_type_token53 = 65,
  aux_sym_block_type_token54 = 66,
  aux_sym_block_type_token55 = 67,
  aux_sym_block_type_token56 = 68,
  aux_sym_block_type_token57 = 69,
  aux_sym_block_type_token58 = 70,
  aux_sym_block_type_token59 = 71,
  aux_sym_block_type_token60 = 72,
  aux_sym_block_type_token61 = 73,
  aux_sym_block_type_token62 = 74,
  aux_sym_block_type_token63 = 75,
  aux_sym_block_type_token64 = 76,
  aux_sym_block_type_token65 = 77,
  aux_sym_block_type_token66 = 78,
  aux_sym_block_type_token67 = 79,
  aux_sym_block_type_token68 = 80,
  aux_sym_block_type_token69 = 81,
  aux_sym_block_type_token70 = 82,
  aux_sym_block_type_token71 = 83,
  aux_sym_block_type_token72 = 84,
  aux_sym_set_statement_token1 = 85,
  aux_sym_set_statement_token2 = 86,
  anon_sym_let = 87,
  sym_function_call = 88,
  sym_loop = 89,
  sym_conditional = 90,
  sym_script_file = 91,
  sym_script_name_declare = 92,
  sym_script_declarer = 93,
  sym_script_body = 94,
  sym__top_level_items = 95,
  sym_var_declare = 96,
  sym__type = 97,
  sym_int_type = 98,
  sym_block = 99,
  sym_block_type = 100,
  sym_body_repeat = 101,
  sym_body = 102,
  sym_statement = 103,
  sym_set_statement = 104,
  sym_let_statement = 105,
  aux_sym_script_body_repeat1 = 106,
  aux_sym_body_repeat_repeat1 = 107,
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
  [sym_variable] = "variable",
  [aux_sym_block_token1] = "block_token1",
  [aux_sym_block_token2] = "block_token2",
  [aux_sym_block_type_token1] = "block_type_token1",
  [aux_sym_block_type_token2] = "block_type_token2",
  [aux_sym_block_type_token3] = "block_type_token3",
  [aux_sym_block_type_token4] = "block_type_token4",
  [aux_sym_block_type_token5] = "block_type_token5",
  [aux_sym_block_type_token6] = "block_type_token6",
  [aux_sym_block_type_token7] = "block_type_token7",
  [aux_sym_block_type_token8] = "block_type_token8",
  [aux_sym_block_type_token9] = "block_type_token9",
  [aux_sym_block_type_token10] = "block_type_token10",
  [aux_sym_block_type_token11] = "block_type_token11",
  [aux_sym_block_type_token12] = "block_type_token12",
  [aux_sym_block_type_token13] = "block_type_token13",
  [aux_sym_block_type_token14] = "block_type_token14",
  [aux_sym_block_type_token15] = "block_type_token15",
  [aux_sym_block_type_token16] = "block_type_token16",
  [aux_sym_block_type_token17] = "block_type_token17",
  [aux_sym_block_type_token18] = "block_type_token18",
  [aux_sym_block_type_token19] = "block_type_token19",
  [aux_sym_block_type_token20] = "block_type_token20",
  [aux_sym_block_type_token21] = "block_type_token21",
  [aux_sym_block_type_token22] = "block_type_token22",
  [aux_sym_block_type_token23] = "block_type_token23",
  [aux_sym_block_type_token24] = "block_type_token24",
  [aux_sym_block_type_token25] = "block_type_token25",
  [aux_sym_block_type_token26] = "block_type_token26",
  [aux_sym_block_type_token27] = "block_type_token27",
  [aux_sym_block_type_token28] = "block_type_token28",
  [aux_sym_block_type_token29] = "block_type_token29",
  [aux_sym_block_type_token30] = "block_type_token30",
  [aux_sym_block_type_token31] = "block_type_token31",
  [aux_sym_block_type_token32] = "block_type_token32",
  [aux_sym_block_type_token33] = "block_type_token33",
  [aux_sym_block_type_token34] = "block_type_token34",
  [aux_sym_block_type_token35] = "block_type_token35",
  [aux_sym_block_type_token36] = "block_type_token36",
  [aux_sym_block_type_token37] = "block_type_token37",
  [aux_sym_block_type_token38] = "block_type_token38",
  [aux_sym_block_type_token39] = "block_type_token39",
  [aux_sym_block_type_token40] = "block_type_token40",
  [aux_sym_block_type_token41] = "block_type_token41",
  [aux_sym_block_type_token42] = "block_type_token42",
  [aux_sym_block_type_token43] = "block_type_token43",
  [aux_sym_block_type_token44] = "block_type_token44",
  [aux_sym_block_type_token45] = "block_type_token45",
  [aux_sym_block_type_token46] = "block_type_token46",
  [aux_sym_block_type_token47] = "block_type_token47",
  [aux_sym_block_type_token48] = "block_type_token48",
  [aux_sym_block_type_token49] = "block_type_token49",
  [aux_sym_block_type_token50] = "block_type_token50",
  [aux_sym_block_type_token51] = "block_type_token51",
  [aux_sym_block_type_token52] = "block_type_token52",
  [aux_sym_block_type_token53] = "block_type_token53",
  [aux_sym_block_type_token54] = "block_type_token54",
  [aux_sym_block_type_token55] = "block_type_token55",
  [aux_sym_block_type_token56] = "block_type_token56",
  [aux_sym_block_type_token57] = "block_type_token57",
  [aux_sym_block_type_token58] = "block_type_token58",
  [aux_sym_block_type_token59] = "block_type_token59",
  [aux_sym_block_type_token60] = "block_type_token60",
  [aux_sym_block_type_token61] = "block_type_token61",
  [aux_sym_block_type_token62] = "block_type_token62",
  [aux_sym_block_type_token63] = "block_type_token63",
  [aux_sym_block_type_token64] = "block_type_token64",
  [aux_sym_block_type_token65] = "block_type_token65",
  [aux_sym_block_type_token66] = "block_type_token66",
  [aux_sym_block_type_token67] = "block_type_token67",
  [aux_sym_block_type_token68] = "block_type_token68",
  [aux_sym_block_type_token69] = "block_type_token69",
  [aux_sym_block_type_token70] = "block_type_token70",
  [aux_sym_block_type_token71] = "block_type_token71",
  [aux_sym_block_type_token72] = "block_type_token72",
  [aux_sym_set_statement_token1] = "set_statement_token1",
  [aux_sym_set_statement_token2] = "set_statement_token2",
  [anon_sym_let] = "let",
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
  [sym_block] = "block",
  [sym_block_type] = "block_type",
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
  [sym_float_type] = sym_float_type,
  [sym_string_type] = sym_string_type,
  [sym_array_type] = sym_array_type,
  [sym_variable] = sym_variable,
  [aux_sym_block_token1] = aux_sym_block_token1,
  [aux_sym_block_token2] = aux_sym_block_token2,
  [aux_sym_block_type_token1] = aux_sym_block_type_token1,
  [aux_sym_block_type_token2] = aux_sym_block_type_token2,
  [aux_sym_block_type_token3] = aux_sym_block_type_token3,
  [aux_sym_block_type_token4] = aux_sym_block_type_token4,
  [aux_sym_block_type_token5] = aux_sym_block_type_token5,
  [aux_sym_block_type_token6] = aux_sym_block_type_token6,
  [aux_sym_block_type_token7] = aux_sym_block_type_token7,
  [aux_sym_block_type_token8] = aux_sym_block_type_token8,
  [aux_sym_block_type_token9] = aux_sym_block_type_token9,
  [aux_sym_block_type_token10] = aux_sym_block_type_token10,
  [aux_sym_block_type_token11] = aux_sym_block_type_token11,
  [aux_sym_block_type_token12] = aux_sym_block_type_token12,
  [aux_sym_block_type_token13] = aux_sym_block_type_token13,
  [aux_sym_block_type_token14] = aux_sym_block_type_token14,
  [aux_sym_block_type_token15] = aux_sym_block_type_token15,
  [aux_sym_block_type_token16] = aux_sym_block_type_token16,
  [aux_sym_block_type_token17] = aux_sym_block_type_token17,
  [aux_sym_block_type_token18] = aux_sym_block_type_token18,
  [aux_sym_block_type_token19] = aux_sym_block_type_token19,
  [aux_sym_block_type_token20] = aux_sym_block_type_token20,
  [aux_sym_block_type_token21] = aux_sym_block_type_token21,
  [aux_sym_block_type_token22] = aux_sym_block_type_token22,
  [aux_sym_block_type_token23] = aux_sym_block_type_token23,
  [aux_sym_block_type_token24] = aux_sym_block_type_token24,
  [aux_sym_block_type_token25] = aux_sym_block_type_token25,
  [aux_sym_block_type_token26] = aux_sym_block_type_token26,
  [aux_sym_block_type_token27] = aux_sym_block_type_token27,
  [aux_sym_block_type_token28] = aux_sym_block_type_token28,
  [aux_sym_block_type_token29] = aux_sym_block_type_token29,
  [aux_sym_block_type_token30] = aux_sym_block_type_token30,
  [aux_sym_block_type_token31] = aux_sym_block_type_token31,
  [aux_sym_block_type_token32] = aux_sym_block_type_token32,
  [aux_sym_block_type_token33] = aux_sym_block_type_token33,
  [aux_sym_block_type_token34] = aux_sym_block_type_token34,
  [aux_sym_block_type_token35] = aux_sym_block_type_token35,
  [aux_sym_block_type_token36] = aux_sym_block_type_token36,
  [aux_sym_block_type_token37] = aux_sym_block_type_token37,
  [aux_sym_block_type_token38] = aux_sym_block_type_token38,
  [aux_sym_block_type_token39] = aux_sym_block_type_token39,
  [aux_sym_block_type_token40] = aux_sym_block_type_token40,
  [aux_sym_block_type_token41] = aux_sym_block_type_token41,
  [aux_sym_block_type_token42] = aux_sym_block_type_token42,
  [aux_sym_block_type_token43] = aux_sym_block_type_token43,
  [aux_sym_block_type_token44] = aux_sym_block_type_token44,
  [aux_sym_block_type_token45] = aux_sym_block_type_token45,
  [aux_sym_block_type_token46] = aux_sym_block_type_token46,
  [aux_sym_block_type_token47] = aux_sym_block_type_token47,
  [aux_sym_block_type_token48] = aux_sym_block_type_token48,
  [aux_sym_block_type_token49] = aux_sym_block_type_token49,
  [aux_sym_block_type_token50] = aux_sym_block_type_token50,
  [aux_sym_block_type_token51] = aux_sym_block_type_token51,
  [aux_sym_block_type_token52] = aux_sym_block_type_token52,
  [aux_sym_block_type_token53] = aux_sym_block_type_token53,
  [aux_sym_block_type_token54] = aux_sym_block_type_token54,
  [aux_sym_block_type_token55] = aux_sym_block_type_token55,
  [aux_sym_block_type_token56] = aux_sym_block_type_token56,
  [aux_sym_block_type_token57] = aux_sym_block_type_token57,
  [aux_sym_block_type_token58] = aux_sym_block_type_token58,
  [aux_sym_block_type_token59] = aux_sym_block_type_token59,
  [aux_sym_block_type_token60] = aux_sym_block_type_token60,
  [aux_sym_block_type_token61] = aux_sym_block_type_token61,
  [aux_sym_block_type_token62] = aux_sym_block_type_token62,
  [aux_sym_block_type_token63] = aux_sym_block_type_token63,
  [aux_sym_block_type_token64] = aux_sym_block_type_token64,
  [aux_sym_block_type_token65] = aux_sym_block_type_token65,
  [aux_sym_block_type_token66] = aux_sym_block_type_token66,
  [aux_sym_block_type_token67] = aux_sym_block_type_token67,
  [aux_sym_block_type_token68] = aux_sym_block_type_token68,
  [aux_sym_block_type_token69] = aux_sym_block_type_token69,
  [aux_sym_block_type_token70] = aux_sym_block_type_token70,
  [aux_sym_block_type_token71] = aux_sym_block_type_token71,
  [aux_sym_block_type_token72] = aux_sym_block_type_token72,
  [aux_sym_set_statement_token1] = aux_sym_set_statement_token1,
  [aux_sym_set_statement_token2] = aux_sym_set_statement_token2,
  [anon_sym_let] = anon_sym_let,
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
  [sym_block] = sym_block,
  [sym_block_type] = sym_block_type,
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token38] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token39] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token40] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token41] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token42] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token43] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token44] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token45] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token46] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token47] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token48] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token49] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token50] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token51] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token52] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token53] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token54] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token55] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token56] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token57] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token58] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token59] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token60] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token61] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token62] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token63] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token64] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token65] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token66] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token67] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token68] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token69] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token70] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token71] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token72] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_let] = {
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
      if (eof) ADVANCE(477);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == 'F') ADVANCE(262);
      if (lookahead == 'G') ADVANCE(45);
      if (lookahead == 'L') ADVANCE(317);
      if (lookahead == 'M') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(290);
      if (lookahead == 'P') ADVANCE(318);
      if (lookahead == 'Q') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(129);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(104);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == 'C') ADVANCE(251);
      if (lookahead == 'D') ADVANCE(177);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'H') ADVANCE(158);
      if (lookahead == 'K') ADVANCE(306);
      if (lookahead == 'L') ADVANCE(327);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(155);
      if (lookahead == 'O') ADVANCE(361);
      if (lookahead == 'P') ADVANCE(53);
      if (lookahead == 'Q') ADVANCE(454);
      if (lookahead == 'R') ADVANCE(131);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(383);
      if (lookahead == 'U') ADVANCE(308);
      if (lookahead == 'V') ADVANCE(52);
      if (lookahead == 'W') ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(355);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'E') ADVANCE(190);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(448);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(339);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(323);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'D') ADVANCE(337);
      if (lookahead == 'S') ADVANCE(440);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(240);
      if (lookahead == 'S') ADVANCE(455);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(365);
      if (lookahead == 'U') ADVANCE(316);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(186);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == 'F') ADVANCE(173);
      END_STATE();
    case 15:
      if (lookahead == 'F') ADVANCE(231);
      if (lookahead == 'S') ADVANCE(450);
      if (lookahead == 'U') ADVANCE(356);
      END_STATE();
    case 16:
      if (lookahead == 'G') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(335);
      END_STATE();
    case 17:
      if (lookahead == 'G') ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == 'G') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'G') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == 'H') ADVANCE(232);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(305);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(309);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(279);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(330);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(336);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(169);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(340);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(341);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(342);
      if (lookahead == 'S') ADVANCE(363);
      END_STATE();
    case 33:
      if (lookahead == 'Q') ADVANCE(557);
      END_STATE();
    case 34:
      if (lookahead == 'Q') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(250);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(387);
      END_STATE();
    case 37:
      if (lookahead == 'U') ADVANCE(345);
      END_STATE();
    case 38:
      if (lookahead == 'U') ADVANCE(351);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(467);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(468);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(322);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(458);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(457);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(381);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(236);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(551);
      END_STATE();
    case 95:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(431);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(435);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(328);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 111:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(322);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(489);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(500);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(553);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(528);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 186:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(188);
      END_STATE();
    case 187:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 188:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 189:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 190:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 191:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(482);
      END_STATE();
    case 192:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(219);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 193:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 194:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 195:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 196:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 197:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 198:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(223);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(194);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 204:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(511);
      END_STATE();
    case 205:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 206:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(521);
      END_STATE();
    case 207:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(559);
      END_STATE();
    case 208:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 209:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(469);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 213:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 214:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 215:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 216:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 217:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 242:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(505);
      END_STATE();
    case 243:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(507);
      END_STATE();
    case 244:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 245:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(504);
      END_STATE();
    case 246:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(506);
      END_STATE();
    case 247:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(85);
      END_STATE();
    case 248:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(326);
      END_STATE();
    case 249:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(170);
      END_STATE();
    case 250:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(241);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(473);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(501);
      END_STATE();
    case 275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 276:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(503);
      END_STATE();
    case 277:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(352);
      END_STATE();
    case 279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(359);
      END_STATE();
    case 280:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 281:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 282:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 283:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 284:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(213);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 325:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 326:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 327:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 328:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 329:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 330:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 331:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 332:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(465);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 343:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(514);
      END_STATE();
    case 344:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(517);
      END_STATE();
    case 345:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(544);
      END_STATE();
    case 346:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(552);
      END_STATE();
    case 347:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(545);
      END_STATE();
    case 348:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(497);
      END_STATE();
    case 349:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(498);
      END_STATE();
    case 350:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(499);
      END_STATE();
    case 351:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(541);
      END_STATE();
    case 352:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 353:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 354:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 355:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 356:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 357:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(414);
      END_STATE();
    case 358:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 359:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 360:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 364:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(459);
      END_STATE();
    case 365:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(460);
      END_STATE();
    case 366:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(461);
      END_STATE();
    case 367:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 368:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 369:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 370:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 371:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 372:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 374:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 394:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(502);
      END_STATE();
    case 395:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      END_STATE();
    case 396:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      END_STATE();
    case 397:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      END_STATE();
    case 398:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 399:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 400:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      END_STATE();
    case 401:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 402:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      END_STATE();
    case 403:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      END_STATE();
    case 404:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 405:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(360);
      END_STATE();
    case 406:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      END_STATE();
    case 407:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      END_STATE();
    case 408:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 409:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 410:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(484);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 412:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(520);
      END_STATE();
    case 413:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(483);
      END_STATE();
    case 414:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 415:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(5);
      END_STATE();
    case 416:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      END_STATE();
    case 417:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      END_STATE();
    case 418:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      END_STATE();
    case 419:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      END_STATE();
    case 420:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      END_STATE();
    case 421:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      END_STATE();
    case 422:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(542);
      END_STATE();
    case 423:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 424:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 425:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      END_STATE();
    case 426:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      END_STATE();
    case 427:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      END_STATE();
    case 428:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      END_STATE();
    case 429:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      END_STATE();
    case 430:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 431:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 432:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      END_STATE();
    case 433:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      END_STATE();
    case 434:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(6);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(238);
      END_STATE();
    case 452:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(491);
      END_STATE();
    case 453:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 454:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 455:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(380);
      END_STATE();
    case 456:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(418);
      END_STATE();
    case 457:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 458:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 459:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 460:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 461:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 462:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 463:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 464:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 465:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 466:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 467:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 468:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 469:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 470:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(4);
      END_STATE();
    case 471:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(19);
      END_STATE();
    case 472:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 473:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(524);
      END_STATE();
    case 474:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(474)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 475:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(475)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 476:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(487);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_script_declarer_token1);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_script_declarer_token2);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_int_type_token1);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_int_type_token2);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_int_type_token3);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_float_type);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_string_type);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_array_type);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_block_token2);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_block_type_token1);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_block_type_token2);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_block_type_token3);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_block_type_token4);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_block_type_token5);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_block_type_token6);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_block_type_token7);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_block_type_token8);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_block_type_token9);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_block_type_token10);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_block_type_token11);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_block_type_token12);
      if (lookahead == 'T') ADVANCE(391);
      if (lookahead == 'V') ADVANCE(233);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_block_type_token13);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_block_type_token14);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_block_type_token15);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_block_type_token16);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_block_type_token17);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_block_type_token18);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_block_type_token19);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_block_type_token20);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_block_type_token21);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_block_type_token22);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_block_type_token23);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_block_type_token24);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_block_type_token25);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_block_type_token26);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_block_type_token27);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_block_type_token28);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_block_type_token29);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_block_type_token30);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_block_type_token31);
      if (lookahead == 'W') ADVANCE(230);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_block_type_token32);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_block_type_token33);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_block_type_token34);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_block_type_token35);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_block_type_token36);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_block_type_token37);
      if (lookahead == '2') ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_block_type_token38);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_block_type_token39);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_block_type_token40);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_block_type_token41);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_block_type_token42);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_block_type_token43);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_block_type_token44);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_block_type_token45);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_block_type_token46);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_block_type_token47);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_block_type_token48);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_block_type_token49);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_block_type_token50);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_block_type_token51);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_block_type_token52);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_block_type_token53);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_block_type_token54);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_block_type_token55);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_block_type_token56);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_block_type_token57);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_block_type_token58);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_block_type_token59);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_block_type_token60);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'M') ADVANCE(321);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_block_type_token61);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_block_type_token62);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_block_type_token63);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_block_type_token64);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_block_type_token65);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_block_type_token66);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_block_type_token67);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_block_type_token68);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_block_type_token69);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_block_type_token70);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_block_type_token71);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_block_type_token72);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_function_call);
      if (lookahead == 'a') ADVANCE(567);
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_loop);
      END_STATE();
    case 567:
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
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 474},
  [26] = {.lex_state = 474},
  [27] = {.lex_state = 475},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 474},
  [31] = {.lex_state = 474},
  [32] = {.lex_state = 475},
  [33] = {.lex_state = 0},
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
    [aux_sym_block_type_token1] = ACTIONS(1),
    [aux_sym_block_type_token2] = ACTIONS(1),
    [aux_sym_block_type_token3] = ACTIONS(1),
    [aux_sym_block_type_token4] = ACTIONS(1),
    [aux_sym_block_type_token5] = ACTIONS(1),
    [aux_sym_block_type_token6] = ACTIONS(1),
    [aux_sym_block_type_token7] = ACTIONS(1),
    [aux_sym_block_type_token8] = ACTIONS(1),
    [aux_sym_block_type_token9] = ACTIONS(1),
    [aux_sym_block_type_token10] = ACTIONS(1),
    [aux_sym_block_type_token11] = ACTIONS(1),
    [aux_sym_block_type_token12] = ACTIONS(1),
    [aux_sym_block_type_token13] = ACTIONS(1),
    [aux_sym_block_type_token14] = ACTIONS(1),
    [aux_sym_block_type_token15] = ACTIONS(1),
    [aux_sym_block_type_token16] = ACTIONS(1),
    [aux_sym_block_type_token17] = ACTIONS(1),
    [aux_sym_block_type_token18] = ACTIONS(1),
    [aux_sym_block_type_token19] = ACTIONS(1),
    [aux_sym_block_type_token20] = ACTIONS(1),
    [aux_sym_block_type_token21] = ACTIONS(1),
    [aux_sym_block_type_token22] = ACTIONS(1),
    [aux_sym_block_type_token23] = ACTIONS(1),
    [aux_sym_block_type_token24] = ACTIONS(1),
    [aux_sym_block_type_token25] = ACTIONS(1),
    [aux_sym_block_type_token26] = ACTIONS(1),
    [aux_sym_block_type_token27] = ACTIONS(1),
    [aux_sym_block_type_token28] = ACTIONS(1),
    [aux_sym_block_type_token29] = ACTIONS(1),
    [aux_sym_block_type_token30] = ACTIONS(1),
    [aux_sym_block_type_token31] = ACTIONS(1),
    [aux_sym_block_type_token32] = ACTIONS(1),
    [aux_sym_block_type_token33] = ACTIONS(1),
    [aux_sym_block_type_token34] = ACTIONS(1),
    [aux_sym_block_type_token35] = ACTIONS(1),
    [aux_sym_block_type_token36] = ACTIONS(1),
    [aux_sym_block_type_token37] = ACTIONS(1),
    [aux_sym_block_type_token38] = ACTIONS(1),
    [aux_sym_block_type_token39] = ACTIONS(1),
    [aux_sym_block_type_token40] = ACTIONS(1),
    [aux_sym_block_type_token41] = ACTIONS(1),
    [aux_sym_block_type_token42] = ACTIONS(1),
    [aux_sym_block_type_token43] = ACTIONS(1),
    [aux_sym_block_type_token44] = ACTIONS(1),
    [aux_sym_block_type_token45] = ACTIONS(1),
    [aux_sym_block_type_token46] = ACTIONS(1),
    [aux_sym_block_type_token47] = ACTIONS(1),
    [aux_sym_block_type_token48] = ACTIONS(1),
    [aux_sym_block_type_token49] = ACTIONS(1),
    [aux_sym_block_type_token50] = ACTIONS(1),
    [aux_sym_block_type_token51] = ACTIONS(1),
    [aux_sym_block_type_token52] = ACTIONS(1),
    [aux_sym_block_type_token53] = ACTIONS(1),
    [aux_sym_block_type_token54] = ACTIONS(1),
    [aux_sym_block_type_token55] = ACTIONS(1),
    [aux_sym_block_type_token56] = ACTIONS(1),
    [aux_sym_block_type_token57] = ACTIONS(1),
    [aux_sym_block_type_token58] = ACTIONS(1),
    [aux_sym_block_type_token59] = ACTIONS(1),
    [aux_sym_block_type_token60] = ACTIONS(1),
    [aux_sym_block_type_token61] = ACTIONS(1),
    [aux_sym_block_type_token62] = ACTIONS(1),
    [aux_sym_block_type_token63] = ACTIONS(1),
    [aux_sym_block_type_token64] = ACTIONS(1),
    [aux_sym_block_type_token65] = ACTIONS(1),
    [aux_sym_block_type_token66] = ACTIONS(1),
    [aux_sym_block_type_token67] = ACTIONS(1),
    [aux_sym_block_type_token68] = ACTIONS(1),
    [aux_sym_block_type_token69] = ACTIONS(1),
    [aux_sym_block_type_token70] = ACTIONS(1),
    [aux_sym_block_type_token71] = ACTIONS(1),
    [aux_sym_block_type_token72] = ACTIONS(1),
    [aux_sym_set_statement_token1] = ACTIONS(1),
    [aux_sym_set_statement_token2] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [sym_function_call] = ACTIONS(1),
    [sym_loop] = ACTIONS(1),
    [sym_conditional] = ACTIONS(1),
  },
  [1] = {
    [sym_script_file] = STATE(33),
    [sym_script_name_declare] = STATE(4),
    [sym_script_declarer] = STATE(32),
    [aux_sym_script_declarer_token1] = ACTIONS(3),
    [aux_sym_script_declarer_token2] = ACTIONS(3),
  },
  [2] = {
    [sym_block_type] = STATE(7),
    [aux_sym_block_type_token1] = ACTIONS(5),
    [aux_sym_block_type_token2] = ACTIONS(5),
    [aux_sym_block_type_token3] = ACTIONS(5),
    [aux_sym_block_type_token4] = ACTIONS(5),
    [aux_sym_block_type_token5] = ACTIONS(5),
    [aux_sym_block_type_token6] = ACTIONS(5),
    [aux_sym_block_type_token7] = ACTIONS(5),
    [aux_sym_block_type_token8] = ACTIONS(5),
    [aux_sym_block_type_token9] = ACTIONS(5),
    [aux_sym_block_type_token10] = ACTIONS(5),
    [aux_sym_block_type_token11] = ACTIONS(5),
    [aux_sym_block_type_token12] = ACTIONS(7),
    [aux_sym_block_type_token13] = ACTIONS(5),
    [aux_sym_block_type_token14] = ACTIONS(5),
    [aux_sym_block_type_token15] = ACTIONS(5),
    [aux_sym_block_type_token16] = ACTIONS(5),
    [aux_sym_block_type_token17] = ACTIONS(5),
    [aux_sym_block_type_token18] = ACTIONS(5),
    [aux_sym_block_type_token19] = ACTIONS(5),
    [aux_sym_block_type_token20] = ACTIONS(5),
    [aux_sym_block_type_token21] = ACTIONS(5),
    [aux_sym_block_type_token22] = ACTIONS(5),
    [aux_sym_block_type_token23] = ACTIONS(5),
    [aux_sym_block_type_token24] = ACTIONS(5),
    [aux_sym_block_type_token25] = ACTIONS(5),
    [aux_sym_block_type_token26] = ACTIONS(5),
    [aux_sym_block_type_token27] = ACTIONS(5),
    [aux_sym_block_type_token28] = ACTIONS(5),
    [aux_sym_block_type_token29] = ACTIONS(5),
    [aux_sym_block_type_token30] = ACTIONS(5),
    [aux_sym_block_type_token31] = ACTIONS(7),
    [aux_sym_block_type_token32] = ACTIONS(5),
    [aux_sym_block_type_token33] = ACTIONS(5),
    [aux_sym_block_type_token34] = ACTIONS(5),
    [aux_sym_block_type_token35] = ACTIONS(5),
    [aux_sym_block_type_token36] = ACTIONS(5),
    [aux_sym_block_type_token37] = ACTIONS(7),
    [aux_sym_block_type_token38] = ACTIONS(5),
    [aux_sym_block_type_token39] = ACTIONS(5),
    [aux_sym_block_type_token40] = ACTIONS(5),
    [aux_sym_block_type_token41] = ACTIONS(5),
    [aux_sym_block_type_token42] = ACTIONS(5),
    [aux_sym_block_type_token43] = ACTIONS(5),
    [aux_sym_block_type_token44] = ACTIONS(5),
    [aux_sym_block_type_token45] = ACTIONS(5),
    [aux_sym_block_type_token46] = ACTIONS(5),
    [aux_sym_block_type_token47] = ACTIONS(5),
    [aux_sym_block_type_token48] = ACTIONS(5),
    [aux_sym_block_type_token49] = ACTIONS(5),
    [aux_sym_block_type_token50] = ACTIONS(5),
    [aux_sym_block_type_token51] = ACTIONS(5),
    [aux_sym_block_type_token52] = ACTIONS(5),
    [aux_sym_block_type_token53] = ACTIONS(5),
    [aux_sym_block_type_token54] = ACTIONS(5),
    [aux_sym_block_type_token55] = ACTIONS(5),
    [aux_sym_block_type_token56] = ACTIONS(5),
    [aux_sym_block_type_token57] = ACTIONS(5),
    [aux_sym_block_type_token58] = ACTIONS(5),
    [aux_sym_block_type_token59] = ACTIONS(5),
    [aux_sym_block_type_token60] = ACTIONS(7),
    [aux_sym_block_type_token61] = ACTIONS(5),
    [aux_sym_block_type_token62] = ACTIONS(5),
    [aux_sym_block_type_token63] = ACTIONS(5),
    [aux_sym_block_type_token64] = ACTIONS(5),
    [aux_sym_block_type_token65] = ACTIONS(5),
    [aux_sym_block_type_token66] = ACTIONS(5),
    [aux_sym_block_type_token67] = ACTIONS(5),
    [aux_sym_block_type_token68] = ACTIONS(5),
    [aux_sym_block_type_token69] = ACTIONS(5),
    [aux_sym_block_type_token70] = ACTIONS(5),
    [aux_sym_block_type_token71] = ACTIONS(5),
    [aux_sym_block_type_token72] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_block_token1,
    STATE(3), 1,
      aux_sym_script_body_repeat1,
    STATE(9), 1,
      sym_var_declare,
    STATE(10), 1,
      sym_block,
    STATE(11), 1,
      sym__top_level_items,
    STATE(30), 2,
      sym__type,
      sym_int_type,
    ACTIONS(11), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    ACTIONS(14), 3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [33] = 9,
    ACTIONS(24), 1,
      aux_sym_block_token1,
    STATE(5), 1,
      aux_sym_script_body_repeat1,
    STATE(9), 1,
      sym_var_declare,
    STATE(10), 1,
      sym_block,
    STATE(11), 1,
      sym__top_level_items,
    STATE(23), 1,
      sym_script_body,
    STATE(30), 2,
      sym__type,
      sym_int_type,
    ACTIONS(20), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    ACTIONS(22), 3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [66] = 9,
    ACTIONS(24), 1,
      aux_sym_block_token1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_script_body_repeat1,
    STATE(9), 1,
      sym_var_declare,
    STATE(10), 1,
      sym_block,
    STATE(11), 1,
      sym__top_level_items,
    STATE(30), 2,
      sym__type,
      sym_int_type,
    ACTIONS(20), 3,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
    ACTIONS(22), 3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
  [99] = 9,
    ACTIONS(28), 1,
      aux_sym_block_token2,
    ACTIONS(30), 1,
      aux_sym_set_statement_token1,
    ACTIONS(32), 1,
      anon_sym_let,
    ACTIONS(34), 1,
      sym_function_call,
    ACTIONS(36), 1,
      sym_loop,
    ACTIONS(38), 1,
      sym_conditional,
    STATE(21), 1,
      sym_statement,
    STATE(8), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    STATE(15), 2,
      sym_set_statement,
      sym_let_statement,
  [129] = 9,
    ACTIONS(30), 1,
      aux_sym_set_statement_token1,
    ACTIONS(32), 1,
      anon_sym_let,
    ACTIONS(34), 1,
      sym_function_call,
    ACTIONS(36), 1,
      sym_loop,
    ACTIONS(38), 1,
      sym_conditional,
    STATE(21), 1,
      sym_statement,
    STATE(24), 1,
      sym_body_repeat,
    STATE(6), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    STATE(15), 2,
      sym_set_statement,
      sym_let_statement,
  [159] = 9,
    ACTIONS(40), 1,
      aux_sym_block_token2,
    ACTIONS(42), 1,
      aux_sym_set_statement_token1,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(48), 1,
      sym_function_call,
    ACTIONS(51), 1,
      sym_loop,
    ACTIONS(54), 1,
      sym_conditional,
    STATE(21), 1,
      sym_statement,
    STATE(8), 2,
      sym_body,
      aux_sym_body_repeat_repeat1,
    STATE(15), 2,
      sym_set_statement,
      sym_let_statement,
  [189] = 1,
    ACTIONS(57), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [200] = 1,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [211] = 1,
    ACTIONS(61), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [222] = 1,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [233] = 1,
    ACTIONS(65), 8,
      ts_builtin_sym_end,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [244] = 1,
    ACTIONS(67), 7,
      aux_sym_int_type_token1,
      aux_sym_int_type_token2,
      aux_sym_int_type_token3,
      sym_float_type,
      sym_string_type,
      sym_array_type,
      aux_sym_block_token1,
  [254] = 2,
    ACTIONS(71), 1,
      sym_function_call,
    ACTIONS(69), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      anon_sym_let,
      sym_loop,
      sym_conditional,
  [265] = 2,
    ACTIONS(75), 1,
      sym_function_call,
    ACTIONS(73), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      anon_sym_let,
      sym_loop,
      sym_conditional,
  [276] = 2,
    ACTIONS(79), 1,
      sym_function_call,
    ACTIONS(77), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      anon_sym_let,
      sym_loop,
      sym_conditional,
  [287] = 2,
    ACTIONS(83), 1,
      sym_function_call,
    ACTIONS(81), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      anon_sym_let,
      sym_loop,
      sym_conditional,
  [298] = 2,
    ACTIONS(87), 1,
      sym_function_call,
    ACTIONS(85), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      anon_sym_let,
      sym_loop,
      sym_conditional,
  [309] = 2,
    ACTIONS(91), 1,
      sym_function_call,
    ACTIONS(89), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      anon_sym_let,
      sym_loop,
      sym_conditional,
  [320] = 2,
    ACTIONS(95), 1,
      sym_function_call,
    ACTIONS(93), 5,
      aux_sym_block_token2,
      aux_sym_set_statement_token1,
      anon_sym_let,
      sym_loop,
      sym_conditional,
  [331] = 2,
    ACTIONS(99), 1,
      sym_function_call,
    ACTIONS(97), 4,
      aux_sym_set_statement_token1,
      anon_sym_let,
      sym_loop,
      sym_conditional,
  [341] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [345] = 1,
    ACTIONS(103), 1,
      aux_sym_block_token2,
  [349] = 1,
    ACTIONS(105), 1,
      sym_variable,
  [353] = 1,
    ACTIONS(107), 1,
      sym_variable,
  [357] = 1,
    ACTIONS(109), 1,
      sym_identifier,
  [361] = 1,
    ACTIONS(111), 1,
      aux_sym_set_statement_token2,
  [365] = 1,
    ACTIONS(113), 1,
      aux_sym_set_statement_token2,
  [369] = 1,
    ACTIONS(115), 1,
      sym_variable,
  [373] = 1,
    ACTIONS(117), 1,
      sym_variable,
  [377] = 1,
    ACTIONS(119), 1,
      sym_identifier,
  [381] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 200,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 244,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 276,
  [SMALL_STATE(18)] = 287,
  [SMALL_STATE(19)] = 298,
  [SMALL_STATE(20)] = 309,
  [SMALL_STATE(21)] = 320,
  [SMALL_STATE(22)] = 331,
  [SMALL_STATE(23)] = 341,
  [SMALL_STATE(24)] = 345,
  [SMALL_STATE(25)] = 349,
  [SMALL_STATE(26)] = 353,
  [SMALL_STATE(27)] = 357,
  [SMALL_STATE(28)] = 361,
  [SMALL_STATE(29)] = 365,
  [SMALL_STATE(30)] = 369,
  [SMALL_STATE(31)] = 373,
  [SMALL_STATE(32)] = 377,
  [SMALL_STATE(33)] = 381,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(31),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(30),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 2, .production_id = 6), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_body, 1, .production_id = 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_repeat, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(26),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(25),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(18),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(19),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat_repeat1, 2), SHIFT_REPEAT(20),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_items, 1, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_body_repeat1, 1, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declare, 2, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name_declare, 2, .production_id = 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 3, .production_id = 11),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 3, .production_id = 11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, .production_id = 9),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, .production_id = 9),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_type, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_type, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_file, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declarer, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
