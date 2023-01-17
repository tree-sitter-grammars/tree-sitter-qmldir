#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

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
  [5] = 5,
  [6] = 4,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
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
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('-' <= lookahead && lookahead <= '9') ||
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
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
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
    [sym_source_file] = STATE(16),
    [sym_line] = STATE(13),
    [sym_spliter] = STATE(4),
    [sym_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_varname] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
  },
  [2] = {
    [sym_line] = STATE(14),
    [sym_spliter] = STATE(4),
    [sym_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_varname] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
  },
  [3] = {
    [sym_line] = STATE(17),
    [sym_spliter] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_varname] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_POUND] = ACTIONS(21),
  },
  [4] = {
    [sym_spliter] = STATE(5),
    [sym_comment] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_LF] = ACTIONS(24),
    [sym_varname] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(28),
    [anon_sym_SLASH] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(28),
    [anon_sym_POUND] = ACTIONS(30),
  },
  [5] = {
    [sym_spliter] = STATE(5),
    [sym_comment] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_LF] = ACTIONS(32),
    [sym_varname] = ACTIONS(34),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(40),
  },
  [6] = {
    [sym_spliter] = STATE(7),
    [sym_comment] = STATE(7),
    [aux_sym_line_repeat1] = STATE(7),
    [anon_sym_LF] = ACTIONS(24),
    [sym_varname] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
  },
  [7] = {
    [sym_spliter] = STATE(7),
    [sym_comment] = STATE(7),
    [aux_sym_line_repeat1] = STATE(7),
    [anon_sym_LF] = ACTIONS(32),
    [sym_varname] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(52),
    [anon_sym_SLASH] = ACTIONS(52),
    [anon_sym_COLON] = ACTIONS(52),
    [anon_sym_POUND] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(60), 5,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [12] = 2,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(64), 5,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [24] = 1,
    ACTIONS(13), 6,
      ts_builtin_sym_end,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [33] = 2,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(60), 5,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [44] = 2,
    ACTIONS(62), 1,
      anon_sym_LF,
    ACTIONS(64), 5,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [55] = 2,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      anon_sym_LF,
  [62] = 2,
    ACTIONS(66), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [69] = 1,
    ACTIONS(70), 1,
      aux_sym_comment_token1,
  [73] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
  [77] = 1,
    ACTIONS(66), 1,
      anon_sym_LF,
  [81] = 1,
    ACTIONS(74), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 12,
  [SMALL_STATE(10)] = 24,
  [SMALL_STATE(11)] = 33,
  [SMALL_STATE(12)] = 44,
  [SMALL_STATE(13)] = 55,
  [SMALL_STATE(14)] = 62,
  [SMALL_STATE(15)] = 69,
  [SMALL_STATE(16)] = 73,
  [SMALL_STATE(17)] = 77,
  [SMALL_STATE(18)] = 81,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spliter, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spliter, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
