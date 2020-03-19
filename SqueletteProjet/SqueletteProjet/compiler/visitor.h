
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

  virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitDecl(ifccParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitFunc_decl(ifccParser::Func_declContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitVar_decl(ifccParser::Var_declContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitType(ifccParser::TypeContext *ctx) override {
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
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitOp(ifccParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }
  

};

