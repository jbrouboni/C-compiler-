
// Generated from ifcc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  ifccParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, RETURN = 2, INT32_T = 3, INT64_T = 4, NOMBRE = 5, OPEN_PAR = 6, 
    CLOSE_PAR = 7, OPEN_BRACE = 8, CLOSE_BRACE = 9, SEMICOLON = 10, STAR = 11, 
    PLUS = 12, DIV = 13, MINUS = 14, EQ = 15, VIRG = 16, NAME = 17, WS = 18
  };

  enum {
    RuleAxiom = 0, RuleProg = 1, RuleDecl = 2, RuleFunc_decl = 3, RuleVar_decl = 4, 
    RuleType = 5, RuleParam_list = 6, RuleParam = 7, RuleBloc = 8, RuleStmt_list = 9, 
    RuleStmt = 10, RuleAff_stmt = 11, RuleExpr_stmt = 12, RuleArgs = 13, 
    RuleExpr = 14, RuleReturn_stmt = 15
  };

  ifccParser(antlr4::TokenStream *input);
  ~ifccParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class AxiomContext;
  class ProgContext;
  class DeclContext;
  class Func_declContext;
  class Var_declContext;
  class TypeContext;
  class Param_listContext;
  class ParamContext;
  class BlocContext;
  class Stmt_listContext;
  class StmtContext;
  class Aff_stmtContext;
  class Expr_stmtContext;
  class ArgsContext;
  class ExprContext;
  class Return_stmtContext; 

  class  AxiomContext : public antlr4::ParserRuleContext {
  public:
    AxiomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgContext *prog();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AxiomContext* axiom();

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_declContext *func_decl();
    Var_declContext *var_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class  Func_declContext : public antlr4::ParserRuleContext {
  public:
    Func_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *OPEN_PAR();
    ArgsContext *args();
    antlr4::tree::TerminalNode *CLOSE_PAR();
    BlocContext *bloc();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_declContext* func_decl();

  class  Var_declContext : public antlr4::ParserRuleContext {
  public:
    Var_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Var_declContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Var_declContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Variable_declarationContext : public Var_declContext {
  public:
    Variable_declarationContext(Var_declContext *ctx);

    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> VIRG();
    antlr4::tree::TerminalNode* VIRG(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_affectationContext : public Var_declContext {
  public:
    Variable_affectationContext(Var_declContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *EQ();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Var_declContext* var_decl();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Param_listContext : public antlr4::ParserRuleContext {
  public:
    Param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VIRG();
    antlr4::tree::TerminalNode* VIRG(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_listContext* param_list();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  BlocContext : public antlr4::ParserRuleContext {
  public:
    BlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    Stmt_listContext *stmt_list();
    antlr4::tree::TerminalNode *CLOSE_BRACE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocContext* bloc();

  class  Stmt_listContext : public antlr4::ParserRuleContext {
  public:
    Stmt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stmt_listContext* stmt_list();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_declContext *var_decl();
    Aff_stmtContext *aff_stmt();
    Expr_stmtContext *expr_stmt();
    BlocContext *bloc();
    Return_stmtContext *return_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Aff_stmtContext : public antlr4::ParserRuleContext {
  public:
    Aff_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *EQ();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aff_stmtContext* aff_stmt();

  class  Expr_stmtContext : public antlr4::ParserRuleContext {
  public:
    Expr_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_stmtContext* expr_stmt();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VIRG();
    antlr4::tree::TerminalNode* VIRG(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DivContext : public ExprContext {
  public:
    DivContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *DIV();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MinusContext : public ExprContext {
  public:
    MinusContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MINUS();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StarContext : public ExprContext {
  public:
    StarContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *STAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NameContext : public ExprContext {
  public:
    NameContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParentheseContext : public ExprContext {
  public:
    ParentheseContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PAR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NombreContext : public ExprContext {
  public:
    NombreContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NOMBRE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusContext : public ExprContext {
  public:
    PlusContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

