(varname) @variable
(comment) @comment

(spliter) @punctuation.delimiter

;(number) @number

((varname) @property
  (#any-of? @property
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
