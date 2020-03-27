
// Generated from ifcc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ifccVisitor.h"


/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ifccBaseVisitor : public ifccVisitor {
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

  virtual antlrcpp::Any visitVariable_declaration(ifccParser::Variable_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_affectation(ifccParser::Variable_affectationContext *ctx) override {
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

  virtual antlrcpp::Any visitAff_stmt(ifccParser::Aff_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_stmt(ifccParser::Expr_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(ifccParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(ifccParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMinus(ifccParser::MinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStar(ifccParser::StarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(ifccParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthese(ifccParser::ParentheseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNombre(ifccParser::NombreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus(ifccParser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }


};

