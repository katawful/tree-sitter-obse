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

; statement
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

; punctuation
[
 ")"
 "("
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket
"," @punctuation.delimiter

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
variable: (identifier) @label

; comment
(comment) @comment

; block type
block_type: (identifier) @label
argument: (identifier) @parameter

; foreach
container: (identifier) @attribute
source: (identifier) @attribute

; variable types
array: (identifier) @attribute

; literals
string: (string) @string
float: (float_num) @number
integer: (integer) @number

; operators
[
 (binary_operator)
 (unary_operator)
 "."
 "->"
 "<-"
] @operator
