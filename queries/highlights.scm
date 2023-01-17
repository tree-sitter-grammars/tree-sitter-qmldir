(comment) @comment

(varname) @variable

(spliter) @punctuation.delimiter

; definition
(line
  left: (varname) @type.definition)

; left keyword
(line
  left: (varname)
	@keyword
  (#any-of? @keyword
    "module"
    "plugin"
    "typeinfo"
    "linktarget"
    "prefer"
    "classname"
    "optional"
    "depends"
   )
)

; keyword
((unit) @keyword
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

; number
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
