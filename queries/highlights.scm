(varname) @variable

(spliter) @punctuation.delimiter

(number) @number

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
