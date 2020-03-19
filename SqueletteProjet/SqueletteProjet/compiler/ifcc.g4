grammar ifcc;

axiom 
  : prog       
  ;

prog 
  : decl*
  ;

decl
 : func_decl
 | var_decl
 ;

func_decl
 : type NAME OPEN_PAR args CLOSE_PAR bloc
 ;
 
var_decl
 : type NAME (EQ expr)? SEMICOLON
 ;


type
 : type_id=INT32_T
 | type_id=INT64_T
 ;

param_list
  : param (VIRG param)*
  |
  ;

param
  : type NAME
  ;

bloc
 : OPEN_BRACE stmt_list CLOSE_BRACE
 ;

stmt_list
  : (stmt)*
  ;

stmt
  : var_decl
  | expr_stmt
  | bloc
  | return_stmt
  ; ty
  
expr_stmt
  : expr SEMICOLON
  ;

args
  : expr (VIRG expr)*
  |
  ;

//A comprendre

expr returns[bool postfix]
  : callee=expr OPEN_PAR arg_list CLOSE_PAR
  | bin_lhs=expr bin_op=STAR bin_rhs=expr
  | bin_lhs=expr bin_op=DIV bin_rhs=expr
  | bin_lhs=expr bin_op=MOD bin_rhs=expr
  | bin_lhs=expr bin_op=PLUS bin_rhs=expr
  | bin_lhs=expr bin_op=MINUS bin_rhs=expr
  | bin_lhs=expr bin_op=EQ bin_rhs=expr
  | bin_lhs=expr bin_op=STAR_EQ bin_rhs=expr
  | bin_lhs=expr bin_op=DIV_EQ bin_rhs=expr
  | bin_lhs=expr bin_op=MOD_EQ bin_rhs=expr
  | bin_lhs=expr bin_op=PLUS_EQ bin_rhs=expr
  | bin_lhs=expr bin_op=MINUS_EQ bin_rhs=expr
  | bin_lhs=expr bin_op=AND_EQ bin_rhs=expr
  | bin_lhs=expr bin_op=OR_EQ bin_rhs=expr
  | bin_lhs=expr bin_op=XOR_EQ bin_rhs=expr
  | bin_lhs=expr bin_op=AND_AND bin_rhs=expr
  | bin_lhs=expr bin_op=OR_OR bin_rhs=expr
  | bin_lhs=expr bin_op=OR bin_rhs=expr
  | bin_lhs=expr bin_op=AND bin_rhs=expr
  | bin_lhs=expr bin_op=XOR bin_rhs=expr
  | bin_lhs=expr bin_op=LSH bin_rhs=expr
  | bin_lhs=expr bin_op=RSH bin_rhs=expr
  | bin_lhs=expr bin_op=EQ_EQ bin_rhs=expr
  | bin_lhs=expr bin_op=NOT_EQ bin_rhs=expr
  | bin_lhs=expr bin_op=GT bin_rhs=expr
  | bin_lhs=expr bin_op=LT bin_rhs=expr
  | bin_lhs=expr bin_op=GE bin_rhs=expr
  | bin_lhs=expr bin_op=LE bin_rhs=expr
  | bin_lhs=expr bin_op=VIRG bin_rhs=expr

  | OPEN_PAR group_expr=expr CLOSE_PAR
  | un_op=PLUS un_expr=expr { $postfix = false; }
  | un_op=MINUS un_expr=expr { $postfix = false; }
  | un_op=PLUS_PLUS un_expr=expr { $postfix = false; }
  | un_op=MINUS_MINUS un_expr=expr { $postfix = false; }
  | un_op=NOT un_expr=expr { $postfix = false; }
  | un_op=TILDE un_expr=expr { $postfix = false; }
  | un_expr=expr un_op=PLUS_PLUS { $postfix = true; }
  | un_expr=expr un_op=MINUS_MINUS { $postfix = true; }
  | literal
  ;
  
literal
  : INT_LIT
  | NAME
  ;



return_stmt
  : RETURN (expr)? SEMICOLON





// Terminals(à placer dans un autre programme?)

RETURN : 'return' ;
INT32_T : 'int32_t' ;
INT64_T : 'int64_t' ;
INCLUDE : 'include' ;
INT_LIT : ('0'..'9')+ ;
OPEN_PAR : '(' ;
CLOSE_PAR : ')' ;
OPEN_BRACE : '{' ;
CLOSE_BRACE : '}' ;
OPEN_BRACKET : '[' ;
CLOSE_BRACKET : ']' ;
SEMICOLON : ';' ;
STAR : '*' ;
PLUS : '+' ;
DIV : '/' ;
MINUS : '-' ;
MOD : '%' ;
EQ : '=' ;
PLUS_EQ : '+=' ;
MINUS_EQ : '-=' ;
DIV_EQ : '/=' ;
STAR_EQ : '*=' ;
MOD_EQ : '%=' ;
AND_EQ : '&=' ;
OR_EQ : '|=' ;
XOR_EQ : '^=' ;
EQ_EQ : '==' ;
NOT_EQ : '!=' ;
GT : '>' ;
LT : '<' ;
GE : '>=' ;
LE : '<=' ;
NOT : '!' ;
PLUS_PLUS : '++' ;
MINUS_MINUS : '--' ;
VIRG : ',' ;
AND_AND : '&&' ;
OR_OR : '||' ;
AND : '&' ;
OR : '|' ;
LSH : '<<' ;
RSH : '>>' ;
XOR : '^' ;
TILDE : '~' ;
HASH : '#' ;
DOT : '.' ;
NAME: [_a-zA-Z][_a-zA-Z0-9]* ;
WS: [ \n\t\r]+ -> channel(HIDDEN);

