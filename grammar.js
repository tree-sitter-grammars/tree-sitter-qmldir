module.exports = grammar({
  name: "qmldir",
  rules: {
    source_file: ($) => seq(repeat(seq($.line, "\n")), optional($.line)),
    line: ($) => repeat1(choice($.number, $.varname, $.spliter)),
    number: (_) => /[\d]+/,
    varname: (_) => /[A-Za-z\-_]+/,
    spliter: (_) => choice(".", "/", ":"),
  },
});
