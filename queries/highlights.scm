; [
;   "break"
;   "continue"
; ] @function
function: (function) @function
; script control keywords
[
  "begin"
  "end"
  "if"
  "elseif"
  "else"
  "endif"
  "while"
  "foreach"
  "loop"
  "break"
  "continue"
] @keyword
[
 "set"
 "to"
 ":="
 "/="
 "+="
 "-="
 "*="
 "^="
 "let"
] @constructor

; scriptname
script_name: (script_name
  declaration: (script_declarator) @keyword
  script_name: (identifier)) @label

; var declaration
[
 "int"
 "float"
 "short"
 "long"
 "string_var"
 "ref"
 "array_var"
] @type

; foreach
container: (identifier) @attribute
source: (identifier) @attribute

; variable types
array: (identifier) @attribute

; literals
string: (string) @string
float: (float_num) @number
integer: (integer) @number
