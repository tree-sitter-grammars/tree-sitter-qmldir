module.exports = grammar({
  name: "qmldir",
  rules: {
    source_file: ($) => seq(repeat(seq($.line, "\n")), optional($.line)),
    unit: ($) => repeat1(choice($.varname, $.spliter)),
    line: ($) =>
      choice(
        seq(
          field("left", $.varname),
          repeat(seq(choice($.unit, $.comment), repeat1(" "))),
          optional(choice($.unit, $.comment))
        ),
        $.comment
      ),
    varname: (_) => /[\dA-Za-z\-_]+/,
    spliter: (_) => choice(".", "/", ":"),
    comment: (_) => seq("#", /[^\n]+/g),
  },
});
