grammar ifcc;
axiom  
  : prog   
  ;

prog
 : preproc*
 | decl*
 ;

preproc
 : HASH INCLUDE LT NAME DOT NAME GT
 ;

decl
 : func_decl
 | var_decl
 ;

func_decl
 : type NAME OPEN_PAR args CLOSE_PAR bloc 
 ;
 
var_decl
 : type NAME (VIRG NAME)* SEMICOLON  # variable_declaration
 | type NAME EQ expr SEMICOLON # variable_affectation
 | type NAME OPEN_BRACKET NOMBRE CLOSE_BRACKET SEMICOLON # tab_declaration
 | type NAME OPEN_BRACKET NOMBRE CLOSE_BRACKET EQ OPEN_BRACE tab_list CLOSE_BRACE SEMICOLON #tab_affectation
 ;

 tab_list
 : NOMBRE (VIRG NOMBRE)*
 | CHAR_LIT (VIRG CHAR_LIT)*
 ;

type
 : 'int'
 | 'char'
 | 'void'
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
  | if_stmt
  | while_stmt
  | putchar_stmt 
  ; 
  
aff_stmt                                                              
  : NAME EQ expr SEMICOLON                                        # aff_stmt
  | NAME OPEN_BRACKET NOMBRE CLOSE_BRACKET EQ expr SEMICOLON      # affTab_stmt
  ;
  
expr_stmt
  : expr SEMICOLON
  ;

args
  : type NAME (VIRG type Name)*
  |
  ;

expr 
  : GETCHAR OPEN_PAR CLOSE_PAR                         #getchar
  | expr STAR expr                                     #star
  | expr DIV expr                                      #div
  | expr PLUS expr                                     #plus
  | expr MINUS expr                                    #minus
  | expr EQ expr                                       #EQ
  | expr EQ_EQ expr                                    #EQ_EQ
  | expr NON_EQ expr                                   #NON_EQ
  | expr GT expr                                       #GT
  | expr LT expr                                       #LT
  | expr GE expr                                       #GE
  | expr LE expr                                       #LE
  | expr AND_AND expr                                  #AND_AND
  | expr OR_OR expr                                    #OR_OR
  | expr AND expr                                      #AND
  | expr OR expr                                       #OR
  | expr LSH expr                                      #LSH
  | expr RSH expr                                      #RSH
  | expr XOR expr                                      #XOR
  | OPEN_PAR expr CLOSE_PAR                            #parenthese
  | NOMBRE                                             #nombre
  | NAME                                               #name
  ;

if_stmt
: IF OPEN_PAR expr CLOSE_PAR stmt (ELSE stmt)?
;

while_stmt
: WHILE OPEN_PAR expr CLOSE_PAR stmt
;

return_stmt
  : RETURN expr SEMICOLON // A remarquer
  ;

putchar_stmt
  : PUTCHAR OPEN_PAR CHAR_LIT CLOSE_PAR SEMICOLON                              
  ;
// Syntaxe C

RETURN : 'return' ;
INCLUDE : 'include' ;
INT32_T : 'int32_t' ;
INT64_T : 'int64_t' ;
NOMBRE: ('0'..'9')+ ;
CHAR_LIT : '\'' .*? '\'' ;
OPEN_PAR : '(' ;
CLOSE_PAR : ')' ;
OPEN_BRACKET : '[' ;
CLOSE_BRACKET : ']' ;
OPEN_BRACE : '{' ;
CLOSE_BRACE : '}' ;
SEMICOLON : ';' ;
STAR : '*' ;
PLUS : '+' ;
DIV : '/' ;
MINUS : '-' ;
EQ : '=' ;

EQ_EQ : '==';
NON_EQ : '!=';
GT : '>';
LT : '<';
GE : '>=';
LE : '<=';
AND_AND : '&&' ;
OR_OR : '||' ;

AND : '&' ;
OR : '|' ;
LSH : '<<' ;
RSH : '>>' ;
XOR : '^' ;

VIRG : ',';
IF : 'if';
ELSE : 'else';
WHILE : 'while';

HASH : '#' ;
DOT : '.';

GETCHAR : 'getchar';
PUTCHAR : 'putchar';

DOUBLE_SLASH : '//';
NAME: [_a-zA-Z][_a-zA-Z0-9]* ;
//CONST : [0-9]+ ;                  A enlever, meme chose que NOMBRE
WS: [ \n\t\r]+ -> channel(HIDDEN);
