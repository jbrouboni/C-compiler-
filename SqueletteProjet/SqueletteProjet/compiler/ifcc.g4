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
 : 'int'
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
  | aff_stmt
  | expr_stmt
  | bloc
  | return_stmt
  ; 
  
aff_stmt
  : NAME EQ expr SEMICOLON
  ;
  
expr_stmt
  : expr SEMICOLON
  ;

args
  : expr (VIRG expr)*
  |
  ;

expr 
  : expr op expr
  | OPEN_PAR expr CLOSE_PAR
  | NOMBRE
  | NAME
  ;

op
  : PLUS
  | MINUS
  | STAR
  | DIV
  ;

return_stmt
  : RETURN (CONST|NAME) SEMICOLON
  ;

// Syntaxe C

RETURN : 'return' ;
INT32_T : 'int32_t' ;
INT64_T : 'int64_t' ;
NOMBRE: ('0'..'9')+ ;
OPEN_PAR : '(' ;
CLOSE_PAR : ')' ;
OPEN_BRACE : '{' ;
CLOSE_BRACE : '}' ;
SEMICOLON : ';' ;
STAR : '*' ;
PLUS : '+' ;
DIV : '/' ;
MINUS : '-' ;
EQ : '=' ;
VIRG : ',' ;

NAME: [_a-zA-Z][_a-zA-Z0-9]* ;
CONST : [0-9]+ ;
WS: [ \n\t\r]+ -> channel(HIDDEN);
