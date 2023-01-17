module.exports = grammar({
  name: "qmldir",
  rules: {
    source_file: ($) => seq(repeat(seq($.line, "\n")), optional($.line)),
    line: ($) => repeat1(choice($.varname, $.spliter, $.comment)),
    varname: (_) => /[\dA-Za-z\-_]+/,
    spliter: (_) => choice(".", "/", ":"),
    comment: (_) => seq("#", /[^\n]+/g),
  },
});
