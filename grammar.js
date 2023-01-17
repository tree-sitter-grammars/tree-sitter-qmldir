module.exports = grammar({
  name: "qmldir",
  rules: {
    source_file: ($) => seq(repeat(seq($.line, "\n")), optional($.line)),
    line: ($) =>
      choice(
        seq(
          field("left", $.varname),
          repeat(choice($.varname, $.spliter, $.comment))
        ),
        $.comment
      ),
    varname: (_) => /[\dA-Za-z\-_]+/,
    spliter: (_) => choice(".", "/", ":"),
    comment: (_) => seq("#", /[^\n]+/g),
  },
});
