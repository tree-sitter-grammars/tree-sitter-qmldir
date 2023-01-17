#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  sym_varname = 2,
  anon_sym_DOT = 3,
  anon_sym_SLASH = 4,
  anon_sym_COLON = 5,
  anon_sym_POUND = 6,
  aux_sym_comment_token1 = 7,
  sym_source_file = 8,
  sym_line = 9,
  sym_spliter = 10,
  sym_comment = 11,
  aux_sym_source_file_repeat1 = 12,
  aux_sym_line_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_varname] = "varname",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_spliter] = "spliter",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_varname] = sym_varname,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_spliter] = sym_spliter,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_varname] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_spliter] = {
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
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
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
  [5] = 4,
  [6] = 3,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
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
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_varname] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_line] = STATE(15),
    [sym_comment] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_varname] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
  },
  [2] = {
    [sym_spliter] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_line_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(9),
    [sym_varname] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
  },
  [3] = {
    [sym_spliter] = STATE(4),
    [sym_comment] = STATE(4),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(17),
    [sym_varname] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
  },
  [4] = {
    [sym_spliter] = STATE(4),
    [sym_comment] = STATE(4),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(21),
    [sym_varname] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(26),
    [anon_sym_SLASH] = ACTIONS(26),
    [anon_sym_COLON] = ACTIONS(26),
    [anon_sym_POUND] = ACTIONS(29),
  },
  [5] = {
    [sym_spliter] = STATE(5),
    [sym_comment] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(21),
    [sym_varname] = ACTIONS(32),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(38),
  },
  [6] = {
    [sym_spliter] = STATE(5),
    [sym_comment] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(17),
    [sym_varname] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
  },
  [7] = {
    [sym_spliter] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_line_repeat1] = STATE(6),
    [anon_sym_LF] = ACTIONS(9),
    [sym_varname] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(51), 5,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [12] = 2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 5,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [24] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 5,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [35] = 2,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 5,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [46] = 6,
    ACTIONS(5), 1,
      sym_varname,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    STATE(16), 1,
      sym_line,
    STATE(17), 1,
      sym_comment,
  [65] = 6,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_varname,
    ACTIONS(64), 1,
      anon_sym_POUND,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      sym_line,
  [84] = 1,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      sym_varname,
      anon_sym_POUND,
  [90] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_LF,
  [97] = 2,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [104] = 1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [109] = 1,
    ACTIONS(67), 1,
      anon_sym_LF,
  [113] = 1,
    ACTIONS(73), 1,
      aux_sym_comment_token1,
  [117] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [121] = 1,
    ACTIONS(77), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 12,
  [SMALL_STATE(10)] = 24,
  [SMALL_STATE(11)] = 35,
  [SMALL_STATE(12)] = 46,
  [SMALL_STATE(13)] = 65,
  [SMALL_STATE(14)] = 84,
  [SMALL_STATE(15)] = 90,
  [SMALL_STATE(16)] = 97,
  [SMALL_STATE(17)] = 104,
  [SMALL_STATE(18)] = 109,
  [SMALL_STATE(19)] = 113,
  [SMALL_STATE(20)] = 117,
  [SMALL_STATE(21)] = 121,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, .production_id = 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(19),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(21),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spliter, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spliter, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_qmldir(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
