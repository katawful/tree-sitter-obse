; script control keywords
[
  "eval"
  "testexpr"
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
  "call"
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
variable: (identifier) @variable

; comment
(comment) @comment

; block type
block_type: (identifier) @label
; argument: (identifier) @parameter

; foreach
container: (identifier) @attribute
source: (identifier) @attribute

; variable types
array: (identifier) @variable
key: (identifier) @label

; literals
string: (string) @string
float: (float_num) @float
integer: (integer) @number

; operators
[
 (binary_operator)
 (unary_operator)
 "."
 "->"
 "<-"
 ":"
] @operator

; functions
function: (identifier) @function.builtin
user_function: (identifier) @function
option: (opt) @attribute

; top level items
plain: (identifier) @label
