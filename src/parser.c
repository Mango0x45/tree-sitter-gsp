#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
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
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 3,
  [8] = 3,
  [9] = 2,
  [10] = 5,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 11,
  [15] = 13,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 19,
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
  [34] = 29,
  [35] = 35,
  [36] = 33,
  [37] = 32,
  [38] = 29,
  [39] = 35,
  [40] = 33,
  [41] = 32,
  [42] = 35,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 44,
  [49] = 49,
  [50] = 44,
  [51] = 45,
  [52] = 45,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 54,
  [58] = 47,
  [59] = 59,
  [60] = 55,
  [61] = 54,
  [62] = 49,
  [63] = 49,
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
      ACCEPT_TOKEN(sym__S);
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == 5760) ADVANCE(9);
      if (sym__S_character_set_1(lookahead)) ADVANCE(30);
      if (sym_node_name_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (!sym_id_shorthand_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 3:
      if (!sym_id_shorthand_character_set_1(lookahead)) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_node_name);
      if (lookahead == 5760) ADVANCE(9);
      if (sym__S_character_set_1(lookahead)) ADVANCE(30);
      if (sym_node_name_character_set_2(lookahead)) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_node_name);
      if (sym_node_name_character_set_2(lookahead)) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_literal_text);
      if (lookahead == '\\') ADVANCE(16);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_literal_text);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_literal_text);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_class_shorthand);
      if (!sym_id_shorthand_character_set_1(lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_id_shorthand);
      if (!sym_id_shorthand_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_attribute_value);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '"') ADVANCE(1);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '{') ADVANCE(7);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '{') ADVANCE(7);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == 5760) ADVANCE(9);
      if (sym__S_character_set_1(lookahead)) ADVANCE(30);
      if (sym_node_name_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == 5760) ADVANCE(9);
      if (sym__S_character_set_1(lookahead)) ADVANCE(30);
      if (sym_node_name_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '}') ADVANCE(8);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '{') ADVANCE(7);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '}') ADVANCE(8);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == 5760) ADVANCE(9);
      if (sym__S_character_set_1(lookahead)) ADVANCE(30);
      if (sym_node_name_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__S);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__S);
      if (eof) ADVANCE(5);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == 5760) ADVANCE(9);
      if (sym__S_character_set_1(lookahead)) ADVANCE(30);
      if (sym_node_name_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__S);
      if (eof) ADVANCE(5);
      if (sym_literal_text_character_set_1(lookahead)) ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 29},
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
    [sym_source_file] = STATE(59),
    [sym_node] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
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
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_node_name,
    STATE(43), 1,
      sym_text_node,
    STATE(52), 1,
      sym_node_body,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(22), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [27] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_node_name,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_text_node,
    STATE(44), 1,
      sym_node_body,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(22), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [54] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_node_name,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_text_node,
    STATE(45), 1,
      sym_node_body,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(22), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [81] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_node_name,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_text_node,
    STATE(47), 1,
      sym_node_body,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(22), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [108] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_node_name,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_text_node,
    STATE(58), 1,
      sym_node_body,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(22), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [135] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_node_name,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_text_node,
    STATE(48), 1,
      sym_node_body,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(22), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [162] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_node_name,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_text_node,
    STATE(50), 1,
      sym_node_body,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(22), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [189] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_node_name,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_text_node,
    STATE(51), 1,
      sym_node_body,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(22), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [216] = 8,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_node_name,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_text_node,
    STATE(53), 1,
      sym_node_body,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    STATE(22), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [243] = 6,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_attribute_name,
    STATE(54), 1,
      sym_attribute_list,
    ACTIONS(37), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(17), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [264] = 6,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(39), 1,
      sym_attribute_name,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_attribute_list,
    ACTIONS(37), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(17), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [285] = 6,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(39), 1,
      sym_attribute_name,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_attribute_list,
    ACTIONS(37), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(17), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [306] = 6,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(39), 1,
      sym_attribute_name,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_attribute_list,
    ACTIONS(37), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(17), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [327] = 6,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(39), 1,
      sym_attribute_name,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_attribute_list,
    ACTIONS(37), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(17), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [348] = 6,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(39), 1,
      sym_attribute_name,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_attribute_list,
    ACTIONS(37), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(17), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [369] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(39), 1,
      sym_attribute_name,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(18), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [387] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      sym_attribute_name,
    ACTIONS(55), 2,
      sym_class_shorthand,
      sym_id_shorthand,
    STATE(18), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [405] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_GT,
    ACTIONS(66), 1,
      sym_node_name,
    STATE(19), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [422] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(69), 4,
      anon_sym_LBRACE,
      sym_class_shorthand,
      sym_id_shorthand,
      sym_attribute_name,
  [435] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(7), 1,
      anon_sym_GT,
    ACTIONS(9), 1,
      sym_node_name,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [452] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_node_name,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [469] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      anon_sym_GT,
    ACTIONS(80), 1,
      sym_node_name,
    STATE(23), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [486] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      sym_literal_text,
    STATE(24), 1,
      aux_sym_text_node_repeat1,
  [502] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_AT,
    ACTIONS(95), 1,
      sym_literal_text,
    STATE(26), 1,
      aux_sym_text_node_repeat1,
  [518] = 5,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(93), 1,
      anon_sym_AT,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym_literal_text,
    STATE(24), 1,
      aux_sym_text_node_repeat1,
  [534] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(101), 4,
      anon_sym_LBRACE,
      sym_class_shorthand,
      sym_id_shorthand,
      sym_attribute_name,
  [544] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(69), 4,
      anon_sym_LBRACE,
      sym_class_shorthand,
      sym_id_shorthand,
      sym_attribute_name,
  [554] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(105), 1,
      sym_node_name,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_GT,
  [565] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(83), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_literal_text,
  [574] = 4,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(107), 1,
      anon_sym_GT,
    ACTIONS(109), 1,
      sym_node_name,
    STATE(30), 1,
      sym_node,
  [587] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(113), 1,
      sym_node_name,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_GT,
  [598] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(117), 1,
      sym_node_name,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_GT,
  [609] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(105), 1,
      sym_node_name,
    ACTIONS(103), 2,
      anon_sym_GT,
      anon_sym_RBRACE,
  [620] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(121), 1,
      sym_node_name,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_RBRACE,
  [631] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(117), 1,
      sym_node_name,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_RBRACE,
  [642] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(113), 1,
      sym_node_name,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_RBRACE,
  [653] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(103), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_literal_text,
  [662] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(119), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_literal_text,
  [671] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(115), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_literal_text,
  [680] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(111), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_literal_text,
  [689] = 3,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(121), 1,
      sym_node_name,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_GT,
  [700] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
  [707] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
  [714] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
  [721] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(123), 1,
      sym_attribute_value,
  [728] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
  [735] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
  [742] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(127), 1,
      sym_node_name,
  [749] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
  [756] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
  [763] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
  [770] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
  [777] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
  [784] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
  [791] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
  [798] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
  [805] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
  [812] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym__S,
  [819] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
  [826] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
  [833] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(143), 1,
      sym_node_name,
  [840] = 2,
    ACTIONS(3), 1,
      sym__S,
    ACTIONS(145), 1,
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
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 243,
  [SMALL_STATE(12)] = 264,
  [SMALL_STATE(13)] = 285,
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 327,
  [SMALL_STATE(16)] = 348,
  [SMALL_STATE(17)] = 369,
  [SMALL_STATE(18)] = 387,
  [SMALL_STATE(19)] = 405,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 435,
  [SMALL_STATE(22)] = 452,
  [SMALL_STATE(23)] = 469,
  [SMALL_STATE(24)] = 486,
  [SMALL_STATE(25)] = 502,
  [SMALL_STATE(26)] = 518,
  [SMALL_STATE(27)] = 534,
  [SMALL_STATE(28)] = 544,
  [SMALL_STATE(29)] = 554,
  [SMALL_STATE(30)] = 565,
  [SMALL_STATE(31)] = 574,
  [SMALL_STATE(32)] = 587,
  [SMALL_STATE(33)] = 598,
  [SMALL_STATE(34)] = 609,
  [SMALL_STATE(35)] = 620,
  [SMALL_STATE(36)] = 631,
  [SMALL_STATE(37)] = 642,
  [SMALL_STATE(38)] = 653,
  [SMALL_STATE(39)] = 662,
  [SMALL_STATE(40)] = 671,
  [SMALL_STATE(41)] = 680,
  [SMALL_STATE(42)] = 689,
  [SMALL_STATE(43)] = 700,
  [SMALL_STATE(44)] = 707,
  [SMALL_STATE(45)] = 714,
  [SMALL_STATE(46)] = 721,
  [SMALL_STATE(47)] = 728,
  [SMALL_STATE(48)] = 735,
  [SMALL_STATE(49)] = 742,
  [SMALL_STATE(50)] = 749,
  [SMALL_STATE(51)] = 756,
  [SMALL_STATE(52)] = 763,
  [SMALL_STATE(53)] = 770,
  [SMALL_STATE(54)] = 777,
  [SMALL_STATE(55)] = 784,
  [SMALL_STATE(56)] = 791,
  [SMALL_STATE(57)] = 798,
  [SMALL_STATE(58)] = 805,
  [SMALL_STATE(59)] = 812,
  [SMALL_STATE(60)] = 819,
  [SMALL_STATE(61)] = 826,
  [SMALL_STATE(62)] = 833,
  [SMALL_STATE(63)] = 840,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(28),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(20),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_body, 1),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_node_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_node_repeat1, 2), SHIFT_REPEAT(31),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_node_repeat1, 2), SHIFT_REPEAT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_node, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_node, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
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
