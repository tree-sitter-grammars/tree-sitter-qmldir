import {
  defineConfig,
} from "eslint/config";

import globals from "globals";

export default defineConfig([{
  languageOptions: {
    globals: {
      ...globals.es2024,
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
