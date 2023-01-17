(comment) @comment

(varname) @variable

(spliter) @punctuation.delimiter

(line
  left: (varname) @type.definition)

((varname) @keyword
  (#any-of? @keyword
    "module"
    "plugin"
    "typeinfo"
    "linktarget"
    "prefer"
    "classname"
    "optional"
    "depends"
   ))
((varname) @number
  (#any-of? @number
    "0"
    "1"
    "2"
    "3"
    "4"
    "5"
    "6"
    "7"
    "8"
    "9"
    "10"
   ))
