#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_GT = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_node_name = 4,
  anon_sym_DASH = 5,
  anon_sym_EQ = 6,
  anon_sym_AT = 7,
  sym_literal_text = 8,
  sym_class_shorthand = 9,
  sym_id_shorthand = 10,
  sym_attribute_name = 11,
  sym_attribute_value = 12,
  sym_source_file = 13,
  sym_node = 14,
  sym_node_body = 15,
  sym_text_node = 16,
  sym_attribute_list = 17,
  sym_attribute = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_text_node_repeat1 = 20,
  aux_sym_attribute_list_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_node_name] = "node_name",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ] = "=",
  [anon_sym_AT] = "@",
  [sym_literal_text] = "literal_text",
  [sym_class_shorthand] = "class_shorthand",
  [sym_id_shorthand] = "id_shorthand",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_source_file] = "source_file",
  [sym_node] = "node",
  [sym_node_body] = "node_body",
  [sym_text_node] = "text_node",
  [sym_attribute_list] = "attribute_list",
  [sym_attribute] = "attribute",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_text_node_repeat1] = "text_node_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_node_name] = sym_node_name,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [sym_literal_text] = sym_literal_text,
  [sym_class_shorthand] = sym_class_shorthand,
  [sym_id_shorthand] = sym_id_shorthand,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_source_file] = sym_source_file,
  [sym_node] = sym_node,
  [sym_node_body] = sym_node_body,
  [sym_text_node] = sym_text_node,
  [sym_attribute_list] = sym_attribute_list,
  [sym_attribute] = sym_attribute,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_text_node_repeat1] = aux_sym_text_node_repeat1,
  [aux_sym_attribute_list_repeat1] = aux_sym_attribute_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_node_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_literal_text] = {
    .visible = true,
    .named = true,
  },
  [sym_class_shorthand] = {
    .visible = true,
    .named = true,
  },
  [sym_id_shorthand] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_node_body] = {
    .visible = true,
    .named = true,
  },
  [sym_text_node] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 2,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 8,
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
  [27] = 18,
  [28] = 26,
  [29] = 24,
  [30] = 21,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 36,
  [41] = 41,
  [42] = 33,
  [43] = 39,
  [44] = 44,
  [45] = 37,
  [46] = 34,
  [47] = 35,
};

static inline bool sym_node_name_character_set_1(int32_t c) {
  return (c < 895
    ? (c < 192
      ? (c < '_'
        ? (c < 'A'
          ? c == ':'
          : c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'z')))
      : (c <= 214 || (c < 248
        ? (c >= 216 && c <= 246)
        : (c <= 767 || (c >= 880 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c >= 8204 && c <= 8205)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_node_name_character_set_2(int32_t c) {
  return (c < 895
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? (c >= '-' && c <= '.')
          : c <= ':')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (sym_node_name_character_set_1(lookahead)) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_node_name);
      if (sym_node_name_character_set_2(lookahead)) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_literal_text);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_literal_text);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_literal_text);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_class_shorthand);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_id_shorthand);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_attribute_value);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_node_name] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_class_shorthand] = ACTIONS(1),
    [sym_id_shorthand] = ACTIONS(1),
    [sym_attribute_value] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym_node] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(5),
    [sym_node_name] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_GT,
    ACTIONS(7), 1,
      sym_node_name,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_text_node,
    STATE(42), 1,
      sym_node_body,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [24] = 7,
    ACTIONS(5), 1,
      anon_sym_GT,
    ACTIONS(7), 1,
      sym_node_name,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_text_node,
    STATE(43), 1,
      sym_node_body,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [48] = 7,
    ACTIONS(5), 1,
      anon_sym_GT,
    ACTIONS(7), 1,
      sym_node_name,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_node_body,
    STATE(41), 1,
      sym_text_node,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [72] = 7,
    ACTIONS(5), 1,
      anon_sym_GT,
    ACTIONS(7), 1,
      sym_node_name,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_node_body,
    STATE(41), 1,
      sym_text_node,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [96] = 7,
    ACTIONS(5), 1,
      anon_sym_GT,
    ACTIONS(7), 1,
      sym_node_name,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_node_body,
    STATE(41), 1,
      sym_text_node,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [120] = 7,
    ACTIONS(5), 1,
      anon_sym_GT,
    ACTIONS(7), 1,
      sym_node_name,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_node_body,
    STATE(41), 1,
      sym_text_node,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [144] = 5,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_attribute_name,
    STATE(46), 1,
      sym_attribute_list,
    ACTIONS(25), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(14), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [162] = 5,
    ACTIONS(27), 1,
      sym_attribute_name,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_attribute_list,
    ACTIONS(25), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(14), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [180] = 5,
    ACTIONS(27), 1,
      sym_attribute_name,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_attribute_list,
    ACTIONS(25), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(14), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [198] = 5,
    ACTIONS(27), 1,
      sym_attribute_name,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_attribute_list,
    ACTIONS(25), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(14), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [216] = 4,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      sym_node_name,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [231] = 4,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      sym_attribute_name,
    ACTIONS(45), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(13), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [246] = 4,
    ACTIONS(27), 1,
      sym_attribute_name,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(13), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [261] = 4,
    ACTIONS(5), 1,
      anon_sym_GT,
    ACTIONS(7), 1,
      sym_node_name,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [275] = 2,
    ACTIONS(57), 1,
      anon_sym_EQ,
    ACTIONS(55), 4,
      anon_sym_LBRACE,
      sym_class_shorthand,
      sym_id_shorthand,
      sym_attribute_name,
  [285] = 4,
    ACTIONS(5), 1,
      anon_sym_GT,
    ACTIONS(7), 1,
      sym_node_name,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [299] = 1,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_node_name,
  [306] = 4,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_literal_text,
    STATE(22), 1,
      aux_sym_text_node_repeat1,
  [319] = 1,
    ACTIONS(55), 4,
      anon_sym_LBRACE,
      sym_class_shorthand,
      sym_id_shorthand,
      sym_attribute_name,
  [326] = 1,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_node_name,
  [333] = 4,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      sym_literal_text,
    STATE(25), 1,
      aux_sym_text_node_repeat1,
  [346] = 1,
    ACTIONS(75), 4,
      anon_sym_LBRACE,
      sym_class_shorthand,
      sym_id_shorthand,
      sym_attribute_name,
  [353] = 1,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_node_name,
  [360] = 4,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(84), 1,
      sym_literal_text,
    STATE(25), 1,
      aux_sym_text_node_repeat1,
  [373] = 1,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_node_name,
  [380] = 2,
    ACTIONS(61), 1,
      sym_literal_text,
    ACTIONS(89), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [388] = 2,
    ACTIONS(87), 1,
      sym_literal_text,
    ACTIONS(91), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [396] = 2,
    ACTIONS(77), 1,
      sym_literal_text,
    ACTIONS(93), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [404] = 2,
    ACTIONS(69), 1,
      sym_literal_text,
    ACTIONS(95), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [412] = 3,
    ACTIONS(97), 1,
      anon_sym_GT,
    ACTIONS(99), 1,
      sym_node_name,
    STATE(32), 1,
      sym_node,
  [422] = 2,
    ACTIONS(101), 1,
      sym_literal_text,
    ACTIONS(79), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [430] = 1,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
  [434] = 1,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
  [438] = 1,
    ACTIONS(107), 1,
      sym_node_name,
  [442] = 1,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
  [446] = 1,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
  [450] = 1,
    ACTIONS(109), 1,
      sym_attribute_value,
  [454] = 1,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
  [458] = 1,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
  [462] = 1,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
  [466] = 1,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
  [470] = 1,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
  [474] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [478] = 1,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
  [482] = 1,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
  [486] = 1,
    ACTIONS(117), 1,
      sym_node_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 180,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 231,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 261,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 299,
  [SMALL_STATE(19)] = 306,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 326,
  [SMALL_STATE(22)] = 333,
  [SMALL_STATE(23)] = 346,
  [SMALL_STATE(24)] = 353,
  [SMALL_STATE(25)] = 360,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 380,
  [SMALL_STATE(28)] = 388,
  [SMALL_STATE(29)] = 396,
  [SMALL_STATE(30)] = 404,
  [SMALL_STATE(31)] = 412,
  [SMALL_STATE(32)] = 422,
  [SMALL_STATE(33)] = 430,
  [SMALL_STATE(34)] = 434,
  [SMALL_STATE(35)] = 438,
  [SMALL_STATE(36)] = 442,
  [SMALL_STATE(37)] = 446,
  [SMALL_STATE(38)] = 450,
  [SMALL_STATE(39)] = 454,
  [SMALL_STATE(40)] = 458,
  [SMALL_STATE(41)] = 462,
  [SMALL_STATE(42)] = 466,
  [SMALL_STATE(43)] = 470,
  [SMALL_STATE(44)] = 474,
  [SMALL_STATE(45)] = 478,
  [SMALL_STATE(46)] = 482,
  [SMALL_STATE(47)] = 486,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(20),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_body, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_node, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_node, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_node_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_node_repeat1, 2), SHIFT_REPEAT(31),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_node_repeat1, 2), SHIFT_REPEAT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_node_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gsp(void) {
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
