#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 1
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_label = 1,
  anon_sym_COMMA = 2,
  sym_directive_name = 3,
  anon_sym_AT = 4,
  anon_sym_EQ = 5,
  anon_sym_DASH = 6,
  anon_sym_PLUS = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  aux_sym_instruction_prefix_token1 = 12,
  aux_sym_instruction_prefix_token2 = 13,
  aux_sym_instruction_prefix_token3 = 14,
  aux_sym_instruction_prefix_token4 = 15,
  aux_sym_instruction_prefix_token5 = 16,
  aux_sym_instruction_prefix_token6 = 17,
  aux_sym_instruction_prefix_token7 = 18,
  aux_sym_instruction_prefix_token8 = 19,
  aux_sym_instruction_prefix_token9 = 20,
  aux_sym_instruction_prefix_token10 = 21,
  aux_sym__operand_symbol_token1 = 22,
  aux_sym__operand_symbol_token2 = 23,
  sym_operand_modifier = 24,
  anon_sym_COLON = 25,
  anon_sym_DOLLAR = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_char_token1 = 28,
  sym__character_escapes = 29,
  sym_string = 30,
  sym__integer = 31,
  sym__float = 32,
  sym__identifier = 33,
  sym_register = 34,
  aux_sym_comment_token1 = 35,
  anon_sym_SLASH_STAR = 36,
  aux_sym_comment_token2 = 37,
  anon_sym_STAR_SLASH = 38,
  sym__inline_space = 39,
  sym__eol = 40,
  sym_source_file = 41,
  sym__statement = 42,
  sym_directive = 43,
  sym__directive_arg = 44,
  sym_type = 45,
  sym_assignment = 46,
  sym_expression = 47,
  sym__paren_expression = 48,
  sym__sub_expression = 49,
  sym_instruction = 50,
  sym_instruction_prefix = 51,
  sym__operand = 52,
  sym__operand_symbol = 53,
  sym__displacement_expression = 54,
  sym__displacement_expression_offset = 55,
  sym_constant = 56,
  sym_char = 57,
  sym_number = 58,
  sym_symbol = 59,
  sym_comment = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_directive_repeat1 = 62,
  aux_sym_assignment_repeat1 = 63,
  aux_sym_expression_repeat1 = 64,
  aux_sym_instruction_repeat1 = 65,
  aux_sym_comment_repeat1 = 66,
  alias_sym_instruction_name = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_label] = "label",
  [anon_sym_COMMA] = ",",
  [sym_directive_name] = "directive_name",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_instruction_prefix_token1] = "instruction_prefix_token1",
  [aux_sym_instruction_prefix_token2] = "instruction_prefix_token2",
  [aux_sym_instruction_prefix_token3] = "instruction_prefix_token3",
  [aux_sym_instruction_prefix_token4] = "instruction_prefix_token4",
  [aux_sym_instruction_prefix_token5] = "instruction_prefix_token5",
  [aux_sym_instruction_prefix_token6] = "instruction_prefix_token6",
  [aux_sym_instruction_prefix_token7] = "instruction_prefix_token7",
  [aux_sym_instruction_prefix_token8] = "instruction_prefix_token8",
  [aux_sym_instruction_prefix_token9] = "instruction_prefix_token9",
  [aux_sym_instruction_prefix_token10] = "instruction_prefix_token10",
  [aux_sym__operand_symbol_token1] = "symbol",
  [aux_sym__operand_symbol_token2] = "symbol",
  [sym_operand_modifier] = "operand_modifier",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym__character_escapes] = "_character_escapes",
  [sym_string] = "string",
  [sym__integer] = "_integer",
  [sym__float] = "_float",
  [sym__identifier] = "_identifier",
  [sym_register] = "register",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [sym__inline_space] = "_inline_space",
  [sym__eol] = "_eol",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_directive] = "directive",
  [sym__directive_arg] = "_directive_arg",
  [sym_type] = "type",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym__paren_expression] = "_paren_expression",
  [sym__sub_expression] = "_sub_expression",
  [sym_instruction] = "instruction",
  [sym_instruction_prefix] = "instruction_prefix",
  [sym__operand] = "_operand",
  [sym__operand_symbol] = "_operand_symbol",
  [sym__displacement_expression] = "_displacement_expression",
  [sym__displacement_expression_offset] = "_displacement_expression_offset",
  [sym_constant] = "constant",
  [sym_char] = "char",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [alias_sym_instruction_name] = "instruction_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_label] = sym_label,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_directive_name] = sym_directive_name,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_instruction_prefix_token1] = aux_sym_instruction_prefix_token1,
  [aux_sym_instruction_prefix_token2] = aux_sym_instruction_prefix_token2,
  [aux_sym_instruction_prefix_token3] = aux_sym_instruction_prefix_token3,
  [aux_sym_instruction_prefix_token4] = aux_sym_instruction_prefix_token4,
  [aux_sym_instruction_prefix_token5] = aux_sym_instruction_prefix_token5,
  [aux_sym_instruction_prefix_token6] = aux_sym_instruction_prefix_token6,
  [aux_sym_instruction_prefix_token7] = aux_sym_instruction_prefix_token7,
  [aux_sym_instruction_prefix_token8] = aux_sym_instruction_prefix_token8,
  [aux_sym_instruction_prefix_token9] = aux_sym_instruction_prefix_token9,
  [aux_sym_instruction_prefix_token10] = aux_sym_instruction_prefix_token10,
  [aux_sym__operand_symbol_token1] = sym_symbol,
  [aux_sym__operand_symbol_token2] = sym_symbol,
  [sym_operand_modifier] = sym_operand_modifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym__character_escapes] = sym__character_escapes,
  [sym_string] = sym_string,
  [sym__integer] = sym__integer,
  [sym__float] = sym__float,
  [sym__identifier] = sym__identifier,
  [sym_register] = sym_register,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym__inline_space] = sym__inline_space,
  [sym__eol] = sym__eol,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_directive] = sym_directive,
  [sym__directive_arg] = sym__directive_arg,
  [sym_type] = sym_type,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym__paren_expression] = sym__paren_expression,
  [sym__sub_expression] = sym__sub_expression,
  [sym_instruction] = sym_instruction,
  [sym_instruction_prefix] = sym_instruction_prefix,
  [sym__operand] = sym__operand,
  [sym__operand_symbol] = sym__operand_symbol,
  [sym__displacement_expression] = sym__displacement_expression,
  [sym__displacement_expression_offset] = sym__displacement_expression_offset,
  [sym_constant] = sym_constant,
  [sym_char] = sym_char,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [alias_sym_instruction_name] = alias_sym_instruction_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_instruction_prefix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__operand_symbol_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__operand_symbol_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_modifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__character_escapes] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__inline_space] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__directive_arg] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__paren_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__sub_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym__operand_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__displacement_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__displacement_expression_offset] = {
    .visible = false,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_instruction_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_instruction_name,
  },
  [2] = {
    [2] = alias_sym_instruction_name,
  },
  [3] = {
    [0] = sym_number,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_symbol, 2,
    sym_symbol,
    alias_sym_instruction_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 60,
  [74] = 71,
  [75] = 75,
  [76] = 76,
  [77] = 23,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 23,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 127,
  [135] = 130,
  [136] = 129,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '\n', 58,
        '#', 61,
        '$', 56,
        '\'', 57,
        '(', 33,
        ')', 34,
        '*', 31,
        '+', 29,
        ',', 24,
        '-', 28,
        '/', 32,
        ':', 55,
        '=', 27,
        '@', 26,
        '\\', 111,
        '\t', 60,
        ' ', 60,
      );
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 120,
        '\r', 112,
        '#', 109,
        '*', 114,
        '/', 113,
        ';', 111,
        '\t', 115,
        ' ', 115,
      );
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '#', 109,
        '$', 56,
        '%', 18,
        '\'', 57,
        '(', 33,
        '*', 30,
        ',', 24,
        '-', 7,
        '/', 6,
        '0', 67,
        '=', 27,
        '\t', 117,
        ' ', 117,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(58);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 109,
        '%', 18,
        '(', 33,
        '-', 7,
        '/', 6,
        '0', 68,
        '\t', 117,
        ' ', 117,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(110);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        'x', 17,
        '"', 3,
        '\\', 3,
        'b', 3,
        'f', 3,
        'n', 3,
        'r', 3,
        't', 3,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 62,
        '\'', 62,
        '\\', 62,
        'b', 62,
        'f', 62,
        'n', 62,
        'r', 62,
        't', 62,
      );
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 18:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '\n', 120,
        '\r', 119,
        '"', 3,
        '#', 109,
        '\'', 57,
        '(', 33,
        ',', 24,
        '-', 7,
        '/', 6,
        '0', 70,
        ';', 118,
        '@', 26,
        '\t', 117,
        ' ', 117,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '\n', 120,
        '\r', 119,
        '#', 109,
        '\'', 57,
        '(', 33,
        ')', 34,
        '*', 30,
        '+', 29,
        ',', 24,
        '-', 28,
        '.', 105,
        '/', 32,
        ':', 55,
        ';', 118,
        '=', 27,
        '@', 19,
        '\t', 117,
        ' ', 117,
        'A', 95,
        'a', 95,
        'D', 90,
        'd', 90,
        'L', 100,
        'l', 100,
        'R', 96,
        'r', 96,
        'W', 91,
        'w', 91,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(110);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token1);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token2);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token3);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token4);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token5);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token6);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token7);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token8);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token9);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      ADVANCE_MAP(
        '6', 87,
        ':', 23,
        'X', 46,
        'x', 46,
        'Y', 47,
        'y', 47,
        'Z', 48,
        'z', 48,
      );
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w')) ADVANCE(106);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(46);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(47);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w')) ADVANCE(106);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(47);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(106);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(106);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__operand_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__operand_symbol_token2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__operand_symbol_token2);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__operand_symbol_token2);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__operand_symbol_token2);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(73);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_operand_modifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(110);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__character_escapes);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(64);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(73);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(88);
      if (lookahead == '3') ADVANCE(85);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(89);
      if (lookahead == '3') ADVANCE(86);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(38);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4') ADVANCE(45);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '6') ADVANCE(36);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '6') ADVANCE(35);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(44);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(110);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__inline_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\r') ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 21},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 21},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 21},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 21},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 21},
  [124] = {.lex_state = 21},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 21},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 21},
  [134] = {(TSStateId)(-1)},
  [135] = {(TSStateId)(-1)},
  [136] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym__operand_symbol_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym__inline_space] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(116),
    [sym__statement] = STATE(92),
    [sym_directive] = STATE(109),
    [sym_assignment] = STATE(109),
    [sym_instruction] = STATE(109),
    [sym_instruction_prefix] = STATE(133),
    [sym_symbol] = STATE(65),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [sym_directive_name] = ACTIONS(13),
    [aux_sym_instruction_prefix_token1] = ACTIONS(15),
    [aux_sym_instruction_prefix_token2] = ACTIONS(15),
    [aux_sym_instruction_prefix_token3] = ACTIONS(15),
    [aux_sym_instruction_prefix_token4] = ACTIONS(15),
    [aux_sym_instruction_prefix_token5] = ACTIONS(15),
    [aux_sym_instruction_prefix_token6] = ACTIONS(15),
    [aux_sym_instruction_prefix_token7] = ACTIONS(15),
    [aux_sym_instruction_prefix_token8] = ACTIONS(15),
    [aux_sym_instruction_prefix_token9] = ACTIONS(15),
    [aux_sym_instruction_prefix_token10] = ACTIONS(15),
    [sym__identifier] = ACTIONS(17),
    [aux_sym_comment_token1] = ACTIONS(19),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym__inline_space] = ACTIONS(21),
    [sym__eol] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_label,
    ACTIONS(30), 1,
      sym_directive_name,
    ACTIONS(36), 1,
      sym__identifier,
    ACTIONS(39), 1,
      sym__eol,
    STATE(65), 1,
      sym_symbol,
    STATE(120), 1,
      sym__statement,
    STATE(133), 1,
      sym_instruction_prefix,
    STATE(2), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(109), 3,
      sym_directive,
      sym_assignment,
      sym_instruction,
    ACTIONS(33), 10,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
  [55] = 15,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym_directive_name,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(23), 1,
      sym__eol,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_label,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(65), 1,
      sym_symbol,
    STATE(102), 1,
      sym__statement,
    STATE(133), 1,
      sym_instruction_prefix,
    STATE(109), 3,
      sym_directive,
      sym_assignment,
      sym_instruction,
    ACTIONS(15), 10,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
  [112] = 13,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_directive_name,
    ACTIONS(48), 1,
      sym__eol,
    STATE(4), 1,
      sym_comment,
    STATE(65), 1,
      sym_symbol,
    STATE(108), 1,
      sym__statement,
    STATE(133), 1,
      sym_instruction_prefix,
    STATE(109), 3,
      sym_directive,
      sym_assignment,
      sym_instruction,
    ACTIONS(15), 10,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
  [163] = 13,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(46), 1,
      sym_directive_name,
    ACTIONS(48), 1,
      sym__eol,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(65), 1,
      sym_symbol,
    STATE(103), 1,
      sym__statement,
    STATE(133), 1,
      sym_instruction_prefix,
    STATE(109), 3,
      sym_directive,
      sym_assignment,
      sym_instruction,
    ACTIONS(15), 10,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
  [214] = 12,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(46), 1,
      sym_directive_name,
    ACTIONS(48), 1,
      sym__eol,
    STATE(6), 1,
      sym_comment,
    STATE(65), 1,
      sym_symbol,
    STATE(131), 1,
      sym__statement,
    STATE(133), 1,
      sym_instruction_prefix,
    STATE(109), 3,
      sym_directive,
      sym_assignment,
      sym_instruction,
    ACTIONS(15), 10,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
  [262] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(54), 1,
      anon_sym_AT,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      sym_string,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(7), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(38), 1,
      sym__sub_expression,
    STATE(81), 1,
      sym__directive_arg,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(29), 2,
      sym_number,
      sym_symbol,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
    STATE(75), 3,
      sym_type,
      sym_expression,
      sym_char,
  [317] = 16,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(68), 1,
      anon_sym_STAR,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 1,
      sym_string,
    ACTIONS(80), 1,
      sym__integer,
    ACTIONS(82), 1,
      sym_register,
    STATE(8), 1,
      sym_comment,
    STATE(52), 1,
      sym__operand_symbol,
    STATE(53), 1,
      sym__operand,
    STATE(118), 1,
      sym__displacement_expression_offset,
    ACTIONS(66), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
    STATE(76), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [372] = 18,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 1,
      sym_string,
    ACTIONS(80), 1,
      sym__integer,
    ACTIONS(82), 1,
      sym_register,
    ACTIONS(84), 1,
      anon_sym_STAR,
    STATE(9), 1,
      sym_comment,
    STATE(52), 1,
      sym__operand_symbol,
    STATE(56), 1,
      sym__operand,
    STATE(118), 1,
      sym__displacement_expression_offset,
    STATE(76), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [430] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 1,
      sym_string,
    ACTIONS(80), 1,
      sym__integer,
    ACTIONS(82), 1,
      sym_register,
    STATE(10), 1,
      sym_comment,
    STATE(52), 1,
      sym__operand_symbol,
    STATE(90), 1,
      sym__operand,
    STATE(118), 1,
      sym__displacement_expression_offset,
    STATE(76), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [485] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 1,
      sym_string,
    ACTIONS(80), 1,
      sym__integer,
    ACTIONS(82), 1,
      sym_register,
    STATE(11), 1,
      sym_comment,
    STATE(52), 1,
      sym__operand_symbol,
    STATE(67), 1,
      sym__operand,
    STATE(118), 1,
      sym__displacement_expression_offset,
    STATE(76), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [540] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 1,
      sym_string,
    ACTIONS(80), 1,
      sym__integer,
    ACTIONS(82), 1,
      sym_register,
    STATE(12), 1,
      sym_comment,
    STATE(52), 1,
      sym__operand_symbol,
    STATE(54), 1,
      sym__operand,
    STATE(118), 1,
      sym__displacement_expression_offset,
    STATE(76), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [595] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(13), 1,
      sym_comment,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      sym_label,
      sym__eol,
    ACTIONS(88), 12,
      sym_directive_name,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      sym__identifier,
  [627] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(14), 1,
      sym_comment,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      sym_label,
      sym__eol,
    ACTIONS(92), 12,
      sym_directive_name,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      sym__identifier,
  [659] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(15), 1,
      sym_comment,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      sym_label,
      sym__eol,
    ACTIONS(94), 12,
      sym_directive_name,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      sym__identifier,
  [691] = 15,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(54), 1,
      anon_sym_AT,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      sym_string,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(16), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(38), 1,
      sym__sub_expression,
    STATE(70), 1,
      sym__directive_arg,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(29), 2,
      sym_number,
      sym_symbol,
    STATE(75), 3,
      sym_type,
      sym_expression,
      sym_char,
  [741] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    STATE(17), 2,
      sym_comment,
      aux_sym_expression_repeat1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
    ACTIONS(98), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [770] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      aux_sym_expression_repeat1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
    ACTIONS(106), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [801] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    STATE(19), 1,
      sym_comment,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [827] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(114), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      sym_comment,
    ACTIONS(96), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [853] = 11,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(21), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(38), 1,
      sym__sub_expression,
    STATE(96), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(19), 2,
      sym_number,
      sym_symbol,
  [889] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      sym_comment,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [915] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(122), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      sym_comment,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [941] = 11,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(24), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(38), 1,
      sym__sub_expression,
    STATE(111), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(19), 2,
      sym_number,
      sym_symbol,
  [977] = 11,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(25), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(38), 1,
      sym__sub_expression,
    STATE(124), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(19), 2,
      sym_number,
      sym_symbol,
  [1013] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [1039] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      sym_comment,
    ACTIONS(110), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
  [1067] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      sym__identifier,
    ACTIONS(130), 1,
      sym_string,
    STATE(28), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(82), 3,
      sym_char,
      sym_number,
      sym_symbol,
  [1098] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
    ACTIONS(110), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1125] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(20), 1,
      sym__sub_expression,
    STATE(30), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(19), 3,
      sym__paren_expression,
      sym_number,
      sym_symbol,
  [1156] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    ACTIONS(136), 1,
      sym_register,
    STATE(31), 1,
      sym_comment,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(123), 1,
      sym__displacement_expression_offset,
  [1187] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    ACTIONS(138), 1,
      sym_register,
    STATE(32), 1,
      sym_comment,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(117), 1,
      sym__displacement_expression_offset,
  [1218] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_comment,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(69), 1,
      sym__displacement_expression_offset,
  [1249] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(144), 1,
      sym_operand_modifier,
    STATE(34), 1,
      sym_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1272] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    ACTIONS(146), 1,
      sym_register,
    STATE(35), 1,
      sym_comment,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(126), 1,
      sym__displacement_expression_offset,
  [1303] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    ACTIONS(148), 1,
      sym_register,
    STATE(36), 1,
      sym_comment,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(121), 1,
      sym__displacement_expression_offset,
  [1334] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    ACTIONS(150), 1,
      sym_register,
    STATE(37), 1,
      sym_comment,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(115), 1,
      sym__displacement_expression_offset,
  [1365] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    STATE(18), 1,
      aux_sym_expression_repeat1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(106), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1390] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(156), 1,
      sym_register,
    STATE(39), 1,
      sym_comment,
    STATE(123), 1,
      sym__operand_symbol,
  [1418] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    STATE(40), 1,
      sym_comment,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(126), 1,
      sym__displacement_expression_offset,
  [1446] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(154), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      sym_register,
    STATE(41), 1,
      sym_comment,
    STATE(117), 1,
      sym__operand_symbol,
  [1474] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    STATE(42), 1,
      sym_comment,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(128), 1,
      sym__displacement_expression_offset,
  [1502] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(43), 1,
      sym_comment,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1522] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(154), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      sym_register,
    STATE(44), 1,
      sym_comment,
    STATE(122), 1,
      sym__operand_symbol,
  [1550] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    STATE(45), 1,
      sym_comment,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(125), 1,
      sym__displacement_expression_offset,
  [1578] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(46), 1,
      sym_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1598] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    STATE(47), 1,
      sym_comment,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(121), 1,
      sym__displacement_expression_offset,
  [1626] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(48), 1,
      sym_comment,
    ACTIONS(168), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1646] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(154), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      sym_register,
    STATE(49), 1,
      sym_comment,
    STATE(115), 1,
      sym__operand_symbol,
  [1674] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      aux_sym__operand_symbol_token2,
    ACTIONS(134), 1,
      sym__integer,
    STATE(48), 1,
      sym__operand_symbol,
    STATE(50), 1,
      sym_comment,
    STATE(123), 1,
      sym__displacement_expression_offset,
  [1702] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(51), 1,
      sym_comment,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1722] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_comment,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1743] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1766] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1789] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1812] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1835] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1858] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(188), 1,
      anon_sym_COLON,
    STATE(58), 1,
      sym_comment,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1879] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(59), 2,
      sym_comment,
      aux_sym_directive_repeat1,
  [1900] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      anon_sym_STAR_SLASH,
    STATE(60), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_comment_repeat1,
    ACTIONS(195), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1923] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1944] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1967] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_directive_repeat1,
    STATE(63), 1,
      sym_comment,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1990] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_comment,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2011] = 7,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(213), 1,
      aux_sym_comment_token1,
    ACTIONS(215), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      sym__inline_space,
    STATE(65), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2034] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(219), 2,
      aux_sym_comment_token2,
      sym__eol,
    STATE(66), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [2055] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_instruction_repeat1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2078] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(68), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
  [2099] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_comment,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2120] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_directive_repeat1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2143] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(237), 1,
      anon_sym_STAR_SLASH,
    STATE(71), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_comment_repeat1,
    ACTIONS(195), 2,
      aux_sym_comment_token2,
      sym__eol,
  [2166] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_instruction_repeat1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2189] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(239), 1,
      anon_sym_STAR_SLASH,
    STATE(66), 1,
      aux_sym_comment_repeat1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(195), 2,
      aux_sym_comment_token2,
      sym__eol,
  [2212] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(241), 1,
      anon_sym_STAR_SLASH,
    STATE(60), 1,
      aux_sym_comment_repeat1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(195), 2,
      aux_sym_comment_token2,
      sym__eol,
  [2235] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(75), 1,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2253] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(76), 1,
      sym_comment,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2271] = 2,
    STATE(77), 1,
      sym_comment,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
      sym__eol,
  [2283] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(78), 1,
      sym_comment,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2301] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(79), 1,
      sym_comment,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2319] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(80), 1,
      sym_comment,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2337] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(81), 1,
      sym_comment,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2355] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(82), 1,
      sym_comment,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2373] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(83), 1,
      sym_comment,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2391] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(84), 1,
      sym_comment,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2409] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(85), 1,
      sym_comment,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2427] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(86), 1,
      sym_comment,
    ACTIONS(257), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2445] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      anon_sym_STAR_SLASH,
    STATE(87), 1,
      sym_comment,
    ACTIONS(259), 2,
      aux_sym_comment_token2,
      sym__eol,
  [2465] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(88), 1,
      sym_comment,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2483] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(89), 1,
      sym_comment,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2501] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(90), 1,
      sym_comment,
    ACTIONS(226), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2519] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(91), 1,
      sym_comment,
    ACTIONS(265), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2537] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym__eol,
    STATE(92), 1,
      sym_comment,
  [2556] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_comment,
  [2575] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      sym__inline_space,
    STATE(94), 1,
      sym_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2592] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      sym__inline_space,
      sym__eol,
  [2607] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(96), 1,
      sym_comment,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2624] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(279), 1,
      sym__inline_space,
    STATE(97), 1,
      sym_comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2641] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(281), 1,
      aux_sym_char_token1,
    ACTIONS(283), 1,
      sym__character_escapes,
    STATE(98), 1,
      sym_comment,
  [2660] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_comment,
  [2679] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_comment,
  [2698] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_comment,
  [2717] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(48), 1,
      sym__eol,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym_comment,
  [2736] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      sym__eol,
    STATE(103), 1,
      sym_comment,
  [2755] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      sym_comment,
  [2774] = 6,
    ACTIONS(213), 1,
      aux_sym_comment_token1,
    ACTIONS(215), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      sym__inline_space,
    STATE(105), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_assignment_repeat1,
  [2793] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_comment,
  [2812] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(303), 1,
      sym__identifier,
    STATE(97), 1,
      sym_symbol,
    STATE(107), 1,
      sym_comment,
  [2831] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      sym__eol,
    STATE(108), 1,
      sym_comment,
  [2850] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(109), 1,
      sym_comment,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2867] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_comment,
  [2886] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(111), 1,
      sym_comment,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2903] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_comment,
  [2922] = 5,
    ACTIONS(317), 1,
      anon_sym_EQ,
    ACTIONS(319), 1,
      aux_sym_comment_token1,
    ACTIONS(322), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(325), 1,
      sym__inline_space,
    STATE(113), 2,
      sym_comment,
      aux_sym_assignment_repeat1,
  [2939] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_comment,
  [2958] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_comment,
  [2974] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_comment,
  [2990] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_comment,
  [3006] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_comment,
  [3022] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(334), 1,
      sym__identifier,
    STATE(119), 1,
      sym_comment,
  [3038] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(48), 1,
      sym__eol,
    STATE(120), 1,
      sym_comment,
  [3054] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [3070] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_comment,
  [3086] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_comment,
  [3102] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
  [3118] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
  [3134] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_comment,
  [3150] = 2,
    STATE(127), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3160] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_comment,
  [3176] = 2,
    STATE(129), 1,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3186] = 2,
    STATE(130), 1,
      sym_comment,
    ACTIONS(346), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3196] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(295), 1,
      sym__eol,
    STATE(131), 1,
      sym_comment,
  [3212] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      sym__inline_space,
    STATE(132), 1,
      sym_comment,
  [3225] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(350), 1,
      sym__inline_space,
    STATE(133), 1,
      sym_comment,
  [3238] = 1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
  [3242] = 1,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
  [3246] = 1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 163,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 317,
  [SMALL_STATE(9)] = 372,
  [SMALL_STATE(10)] = 430,
  [SMALL_STATE(11)] = 485,
  [SMALL_STATE(12)] = 540,
  [SMALL_STATE(13)] = 595,
  [SMALL_STATE(14)] = 627,
  [SMALL_STATE(15)] = 659,
  [SMALL_STATE(16)] = 691,
  [SMALL_STATE(17)] = 741,
  [SMALL_STATE(18)] = 770,
  [SMALL_STATE(19)] = 801,
  [SMALL_STATE(20)] = 827,
  [SMALL_STATE(21)] = 853,
  [SMALL_STATE(22)] = 889,
  [SMALL_STATE(23)] = 915,
  [SMALL_STATE(24)] = 941,
  [SMALL_STATE(25)] = 977,
  [SMALL_STATE(26)] = 1013,
  [SMALL_STATE(27)] = 1039,
  [SMALL_STATE(28)] = 1067,
  [SMALL_STATE(29)] = 1098,
  [SMALL_STATE(30)] = 1125,
  [SMALL_STATE(31)] = 1156,
  [SMALL_STATE(32)] = 1187,
  [SMALL_STATE(33)] = 1218,
  [SMALL_STATE(34)] = 1249,
  [SMALL_STATE(35)] = 1272,
  [SMALL_STATE(36)] = 1303,
  [SMALL_STATE(37)] = 1334,
  [SMALL_STATE(38)] = 1365,
  [SMALL_STATE(39)] = 1390,
  [SMALL_STATE(40)] = 1418,
  [SMALL_STATE(41)] = 1446,
  [SMALL_STATE(42)] = 1474,
  [SMALL_STATE(43)] = 1502,
  [SMALL_STATE(44)] = 1522,
  [SMALL_STATE(45)] = 1550,
  [SMALL_STATE(46)] = 1578,
  [SMALL_STATE(47)] = 1598,
  [SMALL_STATE(48)] = 1626,
  [SMALL_STATE(49)] = 1646,
  [SMALL_STATE(50)] = 1674,
  [SMALL_STATE(51)] = 1702,
  [SMALL_STATE(52)] = 1722,
  [SMALL_STATE(53)] = 1743,
  [SMALL_STATE(54)] = 1766,
  [SMALL_STATE(55)] = 1789,
  [SMALL_STATE(56)] = 1812,
  [SMALL_STATE(57)] = 1835,
  [SMALL_STATE(58)] = 1858,
  [SMALL_STATE(59)] = 1879,
  [SMALL_STATE(60)] = 1900,
  [SMALL_STATE(61)] = 1923,
  [SMALL_STATE(62)] = 1944,
  [SMALL_STATE(63)] = 1967,
  [SMALL_STATE(64)] = 1990,
  [SMALL_STATE(65)] = 2011,
  [SMALL_STATE(66)] = 2034,
  [SMALL_STATE(67)] = 2055,
  [SMALL_STATE(68)] = 2078,
  [SMALL_STATE(69)] = 2099,
  [SMALL_STATE(70)] = 2120,
  [SMALL_STATE(71)] = 2143,
  [SMALL_STATE(72)] = 2166,
  [SMALL_STATE(73)] = 2189,
  [SMALL_STATE(74)] = 2212,
  [SMALL_STATE(75)] = 2235,
  [SMALL_STATE(76)] = 2253,
  [SMALL_STATE(77)] = 2271,
  [SMALL_STATE(78)] = 2283,
  [SMALL_STATE(79)] = 2301,
  [SMALL_STATE(80)] = 2319,
  [SMALL_STATE(81)] = 2337,
  [SMALL_STATE(82)] = 2355,
  [SMALL_STATE(83)] = 2373,
  [SMALL_STATE(84)] = 2391,
  [SMALL_STATE(85)] = 2409,
  [SMALL_STATE(86)] = 2427,
  [SMALL_STATE(87)] = 2445,
  [SMALL_STATE(88)] = 2465,
  [SMALL_STATE(89)] = 2483,
  [SMALL_STATE(90)] = 2501,
  [SMALL_STATE(91)] = 2519,
  [SMALL_STATE(92)] = 2537,
  [SMALL_STATE(93)] = 2556,
  [SMALL_STATE(94)] = 2575,
  [SMALL_STATE(95)] = 2592,
  [SMALL_STATE(96)] = 2607,
  [SMALL_STATE(97)] = 2624,
  [SMALL_STATE(98)] = 2641,
  [SMALL_STATE(99)] = 2660,
  [SMALL_STATE(100)] = 2679,
  [SMALL_STATE(101)] = 2698,
  [SMALL_STATE(102)] = 2717,
  [SMALL_STATE(103)] = 2736,
  [SMALL_STATE(104)] = 2755,
  [SMALL_STATE(105)] = 2774,
  [SMALL_STATE(106)] = 2793,
  [SMALL_STATE(107)] = 2812,
  [SMALL_STATE(108)] = 2831,
  [SMALL_STATE(109)] = 2850,
  [SMALL_STATE(110)] = 2867,
  [SMALL_STATE(111)] = 2886,
  [SMALL_STATE(112)] = 2903,
  [SMALL_STATE(113)] = 2922,
  [SMALL_STATE(114)] = 2939,
  [SMALL_STATE(115)] = 2958,
  [SMALL_STATE(116)] = 2974,
  [SMALL_STATE(117)] = 2990,
  [SMALL_STATE(118)] = 3006,
  [SMALL_STATE(119)] = 3022,
  [SMALL_STATE(120)] = 3038,
  [SMALL_STATE(121)] = 3054,
  [SMALL_STATE(122)] = 3070,
  [SMALL_STATE(123)] = 3086,
  [SMALL_STATE(124)] = 3102,
  [SMALL_STATE(125)] = 3118,
  [SMALL_STATE(126)] = 3134,
  [SMALL_STATE(127)] = 3150,
  [SMALL_STATE(128)] = 3160,
  [SMALL_STATE(129)] = 3176,
  [SMALL_STATE(130)] = 3186,
  [SMALL_STATE(131)] = 3196,
  [SMALL_STATE(132)] = 3212,
  [SMALL_STATE(133)] = 3225,
  [SMALL_STATE(134)] = 3238,
  [SMALL_STATE(135)] = 3242,
  [SMALL_STATE(136)] = 3246,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_expression, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sub_expression, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_expression, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_expression, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_arg, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_symbol, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_symbol, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1, 0, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, 0, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, 0, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, 0, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, 0, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 10, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 9, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 8, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 7, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 6, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 5, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [330] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_prefix, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gas(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
