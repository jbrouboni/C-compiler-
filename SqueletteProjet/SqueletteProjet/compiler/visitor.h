
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "antlr4-generated/ifccBaseVisitor.h"


/**
* This class provides an empty implementation of ifccVisitor, which can be
* extended to create a visitor which only needs to handle a subset of the available methods.
*/
class  Visitor : public ifccBaseVisitor {
public:
  
  int compt=0;
  
  virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override {
    //Joseph
    std::cout<< compt ;
    std::cout<<"main:\n"
    ".LFB0:\n"
    ".cfi_startproc\n"
    "pushq	%rbp\n"
    ".cfi_def_cfa_offset 16\n"
    ".cfi_offset 6, -16\n"
    "movq	%rsp, %rbp\n"
    ".cfi_def_cfa_register 6\n";
    return 0 ;
    std::cout<< visitChildren(visitChildren(visitChildren(ctx);););
    
  }
  
  virtual antlrcpp::Any visitDecl(ifccParser::DeclContext *ctx) override {
    //rien a mettre en assembleur si il n'y a pas d'affectation
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitFunc_decl(ifccParser::Func_declContext *ctx) override {
    //a faire plus tard (prochaine itération)
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitVar_decl(ifccParser::Var_declContext *ctx) override {
    //Joseph
    std::cout<<"damn\n";
    int val = stoi(ctx->expr()->NOMBRE()->getText());
    compt++;
    std::cout<<compt;
    std::cout<<" movl $ "<< val << ", -"<< 4 * compt <<" (%rbp) "; //*Voire ici ce qu'il faut mettre en imprimant retval(afin de voir ce que retourne exactement getText dans ce noeud) pour ensuite bien faire cette ligne*/<<", (%rbp)\n"
    //Un exemple de ligne finale doit etre : movl	$17, -4(%rbp)
    //il faudra ici aussi incrementer l'index de map
    //Fin Joseph
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitType(ifccParser::TypeContext *ctx) override {
    //prochaine itération il me semble (on a que des int nous)
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitParam_list(ifccParser::Param_listContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitParam(ifccParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitBloc(ifccParser::BlocContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitStmt_list(ifccParser::Stmt_listContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitStmt(ifccParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitExpr_stmt(ifccParser::Expr_stmtContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitArgs(ifccParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitExpr(ifccParser::ExprContext *ctx) override {
    /* Pour les expressions je sais aps trop quoi faire car il y a plusieurs actions qui s'expriment
     * différement en assembleur : une addition ou une soustraction par exemple. Il faudra par faire 
     * un visit pour chaque possibilité ?
     */
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitOp(ifccParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override {
    //Joseph
    int retval = stoi(ctx->CONST()->getText());
    std::cout<<" movl $"<<retval<<", %eax\n"
    "popq	%rbp\n"
    ".cfi_def_cfa 7, 8\n"
    "ret\n"
    ".cfi_endproc_n";
    //Fin Joseph
    return visitChildren(ctx);
  }
  


  
};

