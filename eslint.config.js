const {
  defineConfig,
} = require("eslint/config");

const globals = require("globals");
const js = require("@eslint/js");

const {
  FlatCompat,
} = require("@eslint/eslintrc");

const compat = new FlatCompat({
  baseDirectory: __dirname,
  recommendedConfig: js.configs.recommended,
  allConfig: js.configs.all
});

module.exports = defineConfig([{
  languageOptions: {
    globals: {
      ...globals.commonjs,
    },

    ecmaVersion: "latest",
    sourceType: "module",
    parserOptions: {},
  },

  rules: {
    "indent": ["error", 2, {
      "SwitchCase": 1,
    }],

    "max-len": ["error", {
      "code": 120,
      "ignoreComments": true,
      "ignoreUrls": true,
      "ignoreStrings": true,
    }],
  },
}]);
