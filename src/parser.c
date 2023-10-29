#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
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
  sym__S = 13,
  sym_source_file = 14,
  sym_node = 15,
  sym_node_body = 16,
  sym_text_node = 17,
  sym_attribute_list = 18,
  sym_attribute = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_text_node_repeat1 = 21,
  aux_sym_attribute_list_repeat1 = 22,
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
  [sym__S] = "_S",
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
  [sym__S] = sym__S,
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
  [sym__S] = {
    .visible = false,
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

static inline bool sym_literal_text_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 133
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 133 || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_id_shorthand_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= ' ' || (c < 160
        ? c == 133
        : c <= 160)))
    : (c <= 5760 || (c < 8239
      ? (c < 8232
        ? (c >= 8192 && c <= 8202)
        : c <= 8233)
      : (c <= 8239 || (c < 12288
        ? c == 8287
        : c <= 12288)))));
}

static inline bool sym__S_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 133
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 133 || c == 160))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == 5760) ADVANCE(11);
      if (sym__S_character_set_1(lookahead)) ADVANCE(23);
      if (sym_node_name_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '}') ADVANCE(10);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 3:
      if (!sym_id_shorthand_character_set_1(lookahead)) ADVANCE(20);
      END_STATE();
    case 4:
      if (!sym_id_shorthand_character_set_1(lookahead)) ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
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
      if (lookahead == 5760) ADVANCE(11);
      if (sym__S_character_set_1(lookahead)) ADVANCE(23);
      if (sym_node_name_character_set_2(lookahead)) ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_node_name);
      if (sym_node_name_character_set_2(lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_literal_text);
      if (lookahead == '\\') ADVANCE(18);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_literal_text);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_literal_text);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_class_shorthand);
      if (!sym_id_shorthand_character_set_1(lookahead)) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_id_shorthand);
      if (!sym_id_shorthand_character_set_1(lookahead)) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_attribute_value);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__S);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(23);
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
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
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
    [sym__S] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym_node] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(7),
    [sym_node_name] = ACTIONS(9),
    [sym__S] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(7), 1,
      anon_sym_GT,
    ACTIONS(9), 1,
      sym_node_name,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_text_node,
    STATE(42), 1,
      sym_node_body,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [27] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(7), 1,
      anon_sym_GT,
    ACTIONS(9), 1,
      sym_node_name,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_text_node,
    STATE(43), 1,
      sym_node_body,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [54] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(7), 1,
      anon_sym_GT,
    ACTIONS(9), 1,
      sym_node_name,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_node_body,
    STATE(41), 1,
      sym_text_node,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [81] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(7), 1,
      anon_sym_GT,
    ACTIONS(9), 1,
      sym_node_name,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_node_body,
    STATE(41), 1,
      sym_text_node,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [108] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(7), 1,
      anon_sym_GT,
    ACTIONS(9), 1,
      sym_node_name,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_node_body,
    STATE(41), 1,
      sym_text_node,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [135] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(7), 1,
      anon_sym_GT,
    ACTIONS(9), 1,
      sym_node_name,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_node_body,
    STATE(41), 1,
      sym_text_node,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(17), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [162] = 6,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_attribute_name,
    ACTIONS(31), 1,
      sym__S,
    STATE(46), 1,
      sym_attribute_list,
    ACTIONS(27), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(14), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [183] = 6,
    ACTIONS(29), 1,
      sym_attribute_name,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_attribute_list,
    ACTIONS(27), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(14), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [204] = 6,
    ACTIONS(29), 1,
      sym_attribute_name,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_attribute_list,
    ACTIONS(27), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(14), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [225] = 6,
    ACTIONS(29), 1,
      sym_attribute_name,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_attribute_list,
    ACTIONS(27), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(14), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [246] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(41), 1,
      anon_sym_GT,
    ACTIONS(44), 1,
      sym_node_name,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [264] = 5,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      sym_attribute_name,
    ACTIONS(49), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(13), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [282] = 5,
    ACTIONS(29), 1,
      sym_attribute_name,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(13), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [300] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(7), 1,
      anon_sym_GT,
    ACTIONS(9), 1,
      sym_node_name,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [317] = 3,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(61), 1,
      anon_sym_EQ,
    ACTIONS(59), 4,
      anon_sym_LBRACE,
      sym_class_shorthand,
      sym_id_shorthand,
      sym_attribute_name,
  [330] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(7), 1,
      anon_sym_GT,
    ACTIONS(9), 1,
      sym_node_name,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [347] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(67), 1,
      sym_node_name,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_RBRACE,
  [359] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_AT,
    ACTIONS(73), 1,
      sym_literal_text,
    STATE(22), 1,
      aux_sym_text_node_repeat1,
  [375] = 2,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(59), 4,
      anon_sym_LBRACE,
      sym_class_shorthand,
      sym_id_shorthand,
      sym_attribute_name,
  [385] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(77), 1,
      sym_node_name,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_RBRACE,
  [397] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(71), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      sym_literal_text,
    STATE(25), 1,
      aux_sym_text_node_repeat1,
  [413] = 2,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(83), 4,
      anon_sym_LBRACE,
      sym_class_shorthand,
      sym_id_shorthand,
      sym_attribute_name,
  [423] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(87), 1,
      sym_node_name,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_RBRACE,
  [435] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_AT,
    ACTIONS(94), 1,
      sym_literal_text,
    STATE(25), 1,
      aux_sym_text_node_repeat1,
  [451] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(99), 1,
      sym_node_name,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_RBRACE,
  [463] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(65), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_literal_text,
  [472] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(97), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_literal_text,
  [481] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(85), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_literal_text,
  [490] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(75), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_literal_text,
  [499] = 4,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(101), 1,
      anon_sym_GT,
    ACTIONS(103), 1,
      sym_node_name,
    STATE(32), 1,
      sym_node,
  [512] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(89), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_literal_text,
  [521] = 2,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
  [528] = 2,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
  [535] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(109), 1,
      sym_node_name,
  [542] = 2,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym__S,
  [549] = 2,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
  [556] = 2,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(111), 1,
      sym_attribute_value,
  [563] = 2,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym__S,
  [570] = 2,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym__S,
  [577] = 2,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
  [584] = 2,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
  [591] = 2,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym__S,
  [598] = 2,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [605] = 2,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__S,
  [612] = 2,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
  [619] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(119), 1,
      sym_node_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 183,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 225,
  [SMALL_STATE(12)] = 246,
  [SMALL_STATE(13)] = 264,
  [SMALL_STATE(14)] = 282,
  [SMALL_STATE(15)] = 300,
  [SMALL_STATE(16)] = 317,
  [SMALL_STATE(17)] = 330,
  [SMALL_STATE(18)] = 347,
  [SMALL_STATE(19)] = 359,
  [SMALL_STATE(20)] = 375,
  [SMALL_STATE(21)] = 385,
  [SMALL_STATE(22)] = 397,
  [SMALL_STATE(23)] = 413,
  [SMALL_STATE(24)] = 423,
  [SMALL_STATE(25)] = 435,
  [SMALL_STATE(26)] = 451,
  [SMALL_STATE(27)] = 463,
  [SMALL_STATE(28)] = 472,
  [SMALL_STATE(29)] = 481,
  [SMALL_STATE(30)] = 490,
  [SMALL_STATE(31)] = 499,
  [SMALL_STATE(32)] = 512,
  [SMALL_STATE(33)] = 521,
  [SMALL_STATE(34)] = 528,
  [SMALL_STATE(35)] = 535,
  [SMALL_STATE(36)] = 542,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 556,
  [SMALL_STATE(39)] = 563,
  [SMALL_STATE(40)] = 570,
  [SMALL_STATE(41)] = 577,
  [SMALL_STATE(42)] = 584,
  [SMALL_STATE(43)] = 591,
  [SMALL_STATE(44)] = 598,
  [SMALL_STATE(45)] = 605,
  [SMALL_STATE(46)] = 612,
  [SMALL_STATE(47)] = 619,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(20),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_body, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_node, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_node, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_node_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_node_repeat1, 2), SHIFT_REPEAT(31),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_node_repeat1, 2), SHIFT_REPEAT(25),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
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
