#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_number = 2,
  sym_varname = 3,
  anon_sym_DOT = 4,
  anon_sym_SLASH = 5,
  anon_sym_COLON = 6,
  sym_source_file = 7,
  sym_line = 8,
  sym_spliter = 9,
  aux_sym_source_file_repeat1 = 10,
  aux_sym_line_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_number] = "number",
  [sym_varname] = "varname",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_spliter] = "spliter",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_number] = sym_number,
  [sym_varname] = sym_varname,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_spliter] = sym_spliter,
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
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 1:
      if (eof) ADVANCE(2);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == '-' ||
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
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_varname] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_line] = STATE(11),
    [sym_spliter] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_varname] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
  },
  [2] = {
    [sym_line] = STATE(12),
    [sym_spliter] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_number] = ACTIONS(5),
    [sym_varname] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
  },
  [3] = {
    [sym_line] = STATE(14),
    [sym_spliter] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_varname] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(16),
  },
  [4] = {
    [sym_spliter] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_varname] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
  },
  [5] = {
    [sym_spliter] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_varname] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_SLASH] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(30),
  },
  [6] = {
    [sym_spliter] = STATE(7),
    [aux_sym_line_repeat1] = STATE(7),
    [anon_sym_LF] = ACTIONS(19),
    [sym_number] = ACTIONS(33),
    [sym_varname] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
  },
  [7] = {
    [sym_spliter] = STATE(7),
    [aux_sym_line_repeat1] = STATE(7),
    [anon_sym_LF] = ACTIONS(25),
    [sym_number] = ACTIONS(37),
    [sym_varname] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(43),
    [sym_number] = ACTIONS(45),
    [sym_varname] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [9] = 2,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(45), 5,
      sym_number,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [20] = 2,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LF,
  [27] = 2,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
  [34] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
  [38] = 1,
    ACTIONS(47), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 9,
  [SMALL_STATE(11)] = 20,
  [SMALL_STATE(12)] = 27,
  [SMALL_STATE(13)] = 34,
  [SMALL_STATE(14)] = 38,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spliter, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spliter, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [51] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
