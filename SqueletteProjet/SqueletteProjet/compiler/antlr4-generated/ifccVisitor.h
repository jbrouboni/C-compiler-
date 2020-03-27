
// Generated from ifcc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ifccParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ifccParser.
 */
class  ifccVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ifccParser.
   */
    virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *context) = 0;

    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitDecl(ifccParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitFunc_decl(ifccParser::Func_declContext *context) = 0;

    virtual antlrcpp::Any visitVariable_declaration(ifccParser::Variable_declarationContext *context) = 0;

    virtual antlrcpp::Any visitVariable_affectation(ifccParser::Variable_affectationContext *context) = 0;

    virtual antlrcpp::Any visitType(ifccParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitParam_list(ifccParser::Param_listContext *context) = 0;

    virtual antlrcpp::Any visitParam(ifccParser::ParamContext *context) = 0;

    virtual antlrcpp::Any visitBloc(ifccParser::BlocContext *context) = 0;

    virtual antlrcpp::Any visitStmt_list(ifccParser::Stmt_listContext *context) = 0;

    virtual antlrcpp::Any visitStmt(ifccParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitAff_stmt(ifccParser::Aff_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExpr_stmt(ifccParser::Expr_stmtContext *context) = 0;

    virtual antlrcpp::Any visitArgs(ifccParser::ArgsContext *context) = 0;

    virtual antlrcpp::Any visitDiv(ifccParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitMinus(ifccParser::MinusContext *context) = 0;

    virtual antlrcpp::Any visitStar(ifccParser::StarContext *context) = 0;

    virtual antlrcpp::Any visitName(ifccParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitParenthese(ifccParser::ParentheseContext *context) = 0;

    virtual antlrcpp::Any visitNombre(ifccParser::NombreContext *context) = 0;

    virtual antlrcpp::Any visitPlus(ifccParser::PlusContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) = 0;


};

