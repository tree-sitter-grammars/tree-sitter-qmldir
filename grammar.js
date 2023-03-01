/**
 * @file QMLDir grammar for tree-sitter
 * @author Decodetalkers <ShootingStarDragons@protonmail.com>
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 * @see {@link https://doc.qt.io/qt-6/qtqml-modules-qmldir.html|official documentation}
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'qmldir',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    module_definition: $ => repeat($.command),

    command: $ => seq(
      choice($.keyword, $.identifier),
      repeat(choice($.unit, $.number, $.float)),
      '\n',
    ),

    keyword: _ => choice(
      'classname',
      'depends',
      'designersupported',
      'internal',
      'linktarget',
      'module',
      'optional',
      'plugin',
      'prefer',
      'singleton',
      'typeinfo',
    ),

    identifier: _ => /[A-Za-z_][A-Za-z0-9_]*/,

    unit: _ => /[A-Za-z_:\.\/][A-Za-z0-9_\.\/:]*/,

    number: _ => /[0-9]+/,

    float: _ => /[0-9]*\.[0-9]+/,

    comment: _ => token(seq('#', /[^\n]+/g)),
  },
});
