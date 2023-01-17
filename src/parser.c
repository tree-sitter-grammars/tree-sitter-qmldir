#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_ = 2,
  sym_varname = 3,
  anon_sym_DOT = 4,
  anon_sym_SLASH = 5,
  anon_sym_COLON = 6,
  anon_sym_POUND = 7,
  aux_sym_comment_token1 = 8,
  sym_source_file = 9,
  sym_unit = 10,
  sym_line = 11,
  sym_spliter = 12,
  sym_comment = 13,
  aux_sym_source_file_repeat1 = 14,
  aux_sym_unit_repeat1 = 15,
  aux_sym_line_repeat1 = 16,
  aux_sym_line_repeat2 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_] = " ",
  [sym_varname] = "varname",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym_unit] = "unit",
  [sym_line] = "line",
  [sym_spliter] = "spliter",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym_line_repeat2] = "line_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_] = anon_sym_,
  [sym_varname] = sym_varname,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym_unit] = sym_unit,
  [sym_line] = sym_line,
  [sym_spliter] = sym_spliter,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_unit_repeat1] = aux_sym_unit_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [aux_sym_line_repeat2] = aux_sym_line_repeat2,
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
  [anon_sym_] = {
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
  [sym_unit] = {
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
  [aux_sym_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat2] = {
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
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 9,
  [14] = 10,
  [15] = 8,
  [16] = 11,
  [17] = 9,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 24,
  [29] = 29,
  [30] = 27,
  [31] = 31,
  [32] = 32,
  [33] = 29,
  [34] = 34,
  [35] = 27,
  [36] = 36,
  [37] = 37,
  [38] = 27,
  [39] = 39,
  [40] = 36,
  [41] = 36,
  [42] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 3:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_varname] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_line] = STATE(34),
    [sym_comment] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_varname] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
  },
  [2] = {
    [sym_unit] = STATE(23),
    [sym_spliter] = STATE(9),
    [sym_comment] = STATE(23),
    [aux_sym_unit_repeat1] = STATE(9),
    [aux_sym_line_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(9),
    [sym_varname] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
  },
  [3] = {
    [sym_unit] = STATE(24),
    [sym_spliter] = STATE(9),
    [sym_comment] = STATE(24),
    [aux_sym_unit_repeat1] = STATE(9),
    [aux_sym_line_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(17),
    [sym_varname] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
  },
  [4] = {
    [sym_unit] = STATE(29),
    [sym_spliter] = STATE(17),
    [sym_comment] = STATE(29),
    [aux_sym_unit_repeat1] = STATE(17),
    [aux_sym_line_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(19),
    [sym_varname] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_SLASH] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_POUND] = ACTIONS(27),
  },
  [5] = {
    [sym_unit] = STATE(33),
    [sym_spliter] = STATE(17),
    [sym_comment] = STATE(33),
    [aux_sym_unit_repeat1] = STATE(17),
    [aux_sym_line_repeat2] = STATE(5),
    [anon_sym_LF] = ACTIONS(19),
    [sym_varname] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_SLASH] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_POUND] = ACTIONS(27),
  },
  [6] = {
    [sym_unit] = STATE(28),
    [sym_spliter] = STATE(13),
    [sym_comment] = STATE(28),
    [aux_sym_unit_repeat1] = STATE(13),
    [aux_sym_line_repeat2] = STATE(5),
    [anon_sym_LF] = ACTIONS(17),
    [sym_varname] = ACTIONS(30),
    [anon_sym_DOT] = ACTIONS(32),
    [anon_sym_SLASH] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(32),
    [anon_sym_POUND] = ACTIONS(34),
  },
  [7] = {
    [sym_unit] = STATE(26),
    [sym_spliter] = STATE(13),
    [sym_comment] = STATE(26),
    [aux_sym_unit_repeat1] = STATE(13),
    [aux_sym_line_repeat2] = STATE(6),
    [anon_sym_LF] = ACTIONS(9),
    [sym_varname] = ACTIONS(30),
    [anon_sym_DOT] = ACTIONS(32),
    [anon_sym_SLASH] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(32),
    [anon_sym_POUND] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_line_repeat1,
    ACTIONS(36), 6,
      anon_sym_LF,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [18] = 5,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_varname,
    ACTIONS(42), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(11), 2,
      sym_spliter,
      aux_sym_unit_repeat1,
    ACTIONS(13), 3,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [38] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_line_repeat1,
    ACTIONS(48), 6,
      anon_sym_LF,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [56] = 5,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_varname,
    ACTIONS(55), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(11), 2,
      sym_spliter,
      aux_sym_unit_repeat1,
    ACTIONS(60), 3,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [76] = 4,
    ACTIONS(63), 1,
      sym_varname,
    ACTIONS(55), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(12), 2,
      sym_spliter,
      aux_sym_unit_repeat1,
    ACTIONS(66), 3,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [93] = 4,
    ACTIONS(69), 1,
      sym_varname,
    ACTIONS(42), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(12), 2,
      sym_spliter,
      aux_sym_unit_repeat1,
    ACTIONS(32), 3,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [110] = 3,
    ACTIONS(71), 1,
      anon_sym_,
    STATE(14), 1,
      aux_sym_line_repeat1,
    ACTIONS(48), 6,
      anon_sym_LF,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [125] = 3,
    ACTIONS(74), 1,
      anon_sym_,
    STATE(14), 1,
      aux_sym_line_repeat1,
    ACTIONS(36), 6,
      anon_sym_LF,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_POUND,
  [140] = 4,
    ACTIONS(53), 1,
      anon_sym_,
    ACTIONS(76), 1,
      sym_varname,
    STATE(16), 2,
      sym_spliter,
      aux_sym_unit_repeat1,
    ACTIONS(79), 3,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [156] = 4,
    ACTIONS(40), 1,
      anon_sym_,
    ACTIONS(82), 1,
      sym_varname,
    STATE(16), 2,
      sym_spliter,
      aux_sym_unit_repeat1,
    ACTIONS(84), 3,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [172] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 6,
      anon_sym_LF,
      anon_sym_,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [184] = 6,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym_varname,
    ACTIONS(95), 1,
      anon_sym_POUND,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(37), 1,
      sym_line,
  [203] = 1,
    ACTIONS(88), 6,
      anon_sym_LF,
      anon_sym_,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [212] = 6,
    ACTIONS(5), 1,
      sym_varname,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      sym_line,
    STATE(32), 1,
      sym_comment,
  [231] = 2,
    ACTIONS(86), 1,
      anon_sym_,
    ACTIONS(88), 4,
      sym_varname,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
  [241] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      anon_sym_,
    STATE(8), 1,
      aux_sym_line_repeat1,
  [254] = 4,
    ACTIONS(102), 1,
      anon_sym_,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_line_repeat1,
  [267] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      sym_varname,
      anon_sym_POUND,
  [273] = 3,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym_line_repeat1,
  [283] = 2,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 2,
      anon_sym_LF,
      anon_sym_,
  [291] = 3,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym_line_repeat1,
  [301] = 2,
    ACTIONS(114), 1,
      anon_sym_,
    STATE(8), 1,
      aux_sym_line_repeat1,
  [308] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [313] = 2,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_LF,
  [320] = 1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [325] = 2,
    ACTIONS(122), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym_line_repeat1,
  [332] = 2,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_LF,
  [339] = 1,
    ACTIONS(112), 2,
      anon_sym_LF,
      anon_sym_,
  [344] = 1,
    ACTIONS(124), 1,
      aux_sym_comment_token1,
  [348] = 1,
    ACTIONS(118), 1,
      anon_sym_LF,
  [352] = 1,
    ACTIONS(110), 1,
      anon_sym_,
  [356] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [360] = 1,
    ACTIONS(128), 1,
      aux_sym_comment_token1,
  [364] = 1,
    ACTIONS(130), 1,
      aux_sym_comment_token1,
  [368] = 1,
    ACTIONS(132), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 18,
  [SMALL_STATE(10)] = 38,
  [SMALL_STATE(11)] = 56,
  [SMALL_STATE(12)] = 76,
  [SMALL_STATE(13)] = 93,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 125,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 156,
  [SMALL_STATE(18)] = 172,
  [SMALL_STATE(19)] = 184,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 231,
  [SMALL_STATE(23)] = 241,
  [SMALL_STATE(24)] = 254,
  [SMALL_STATE(25)] = 267,
  [SMALL_STATE(26)] = 273,
  [SMALL_STATE(27)] = 283,
  [SMALL_STATE(28)] = 291,
  [SMALL_STATE(29)] = 301,
  [SMALL_STATE(30)] = 308,
  [SMALL_STATE(31)] = 313,
  [SMALL_STATE(32)] = 320,
  [SMALL_STATE(33)] = 325,
  [SMALL_STATE(34)] = 332,
  [SMALL_STATE(35)] = 339,
  [SMALL_STATE(36)] = 344,
  [SMALL_STATE(37)] = 348,
  [SMALL_STATE(38)] = 352,
  [SMALL_STATE(39)] = 356,
  [SMALL_STATE(40)] = 360,
  [SMALL_STATE(41)] = 364,
  [SMALL_STATE(42)] = 368,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, .production_id = 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat2, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat2, 2), SHIFT_REPEAT(17),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat2, 2), SHIFT_REPEAT(22),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat2, 2), SHIFT_REPEAT(41),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat2, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(18),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(12),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(20),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(14),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(16),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(22),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spliter, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spliter, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
