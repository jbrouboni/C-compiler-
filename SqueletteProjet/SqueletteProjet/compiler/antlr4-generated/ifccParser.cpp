
// Generated from ifcc.g4 by ANTLR 4.7.1


#include "ifccVisitor.h"

#include "ifccParser.h"


using namespace antlrcpp;
using namespace antlr4;

ifccParser::ifccParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ifccParser::~ifccParser() {
  delete _interpreter;
}

std::string ifccParser::getGrammarFileName() const {
  return "ifcc.g4";
}

const std::vector<std::string>& ifccParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ifccParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- AxiomContext ------------------------------------------------------------------

ifccParser::AxiomContext::AxiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::ProgContext* ifccParser::AxiomContext::prog() {
  return getRuleContext<ifccParser::ProgContext>(0);
}


size_t ifccParser::AxiomContext::getRuleIndex() const {
  return ifccParser::RuleAxiom;
}

antlrcpp::Any ifccParser::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AxiomContext* ifccParser::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, ifccParser::RuleAxiom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    prog();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

ifccParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ifccParser::DeclContext *> ifccParser::ProgContext::decl() {
  return getRuleContexts<ifccParser::DeclContext>();
}

ifccParser::DeclContext* ifccParser::ProgContext::decl(size_t i) {
  return getRuleContext<ifccParser::DeclContext>(i);
}


size_t ifccParser::ProgContext::getRuleIndex() const {
  return ifccParser::RuleProg;
}

antlrcpp::Any ifccParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ProgContext* ifccParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 2, ifccParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::T__0) {
      setState(34);
      decl();
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

ifccParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::Func_declContext* ifccParser::DeclContext::func_decl() {
  return getRuleContext<ifccParser::Func_declContext>(0);
}

ifccParser::Var_declContext* ifccParser::DeclContext::var_decl() {
  return getRuleContext<ifccParser::Var_declContext>(0);
}


size_t ifccParser::DeclContext::getRuleIndex() const {
  return ifccParser::RuleDecl;
}

antlrcpp::Any ifccParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::DeclContext* ifccParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(40);
      func_decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(41);
      var_decl();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_declContext ------------------------------------------------------------------

ifccParser::Func_declContext::Func_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::TypeContext* ifccParser::Func_declContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::Func_declContext::NAME() {
  return getToken(ifccParser::NAME, 0);
}

tree::TerminalNode* ifccParser::Func_declContext::OPEN_PAR() {
  return getToken(ifccParser::OPEN_PAR, 0);
}

ifccParser::ArgsContext* ifccParser::Func_declContext::args() {
  return getRuleContext<ifccParser::ArgsContext>(0);
}

tree::TerminalNode* ifccParser::Func_declContext::CLOSE_PAR() {
  return getToken(ifccParser::CLOSE_PAR, 0);
}

ifccParser::BlocContext* ifccParser::Func_declContext::bloc() {
  return getRuleContext<ifccParser::BlocContext>(0);
}


size_t ifccParser::Func_declContext::getRuleIndex() const {
  return ifccParser::RuleFunc_decl;
}

antlrcpp::Any ifccParser::Func_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFunc_decl(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Func_declContext* ifccParser::func_decl() {
  Func_declContext *_localctx = _tracker.createInstance<Func_declContext>(_ctx, getState());
  enterRule(_localctx, 6, ifccParser::RuleFunc_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    type();
    setState(45);
    match(ifccParser::NAME);
    setState(46);
    match(ifccParser::OPEN_PAR);
    setState(47);
    args();
    setState(48);
    match(ifccParser::CLOSE_PAR);
    setState(49);
    bloc();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declContext ------------------------------------------------------------------

ifccParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::Var_declContext::getRuleIndex() const {
  return ifccParser::RuleVar_decl;
}

void ifccParser::Var_declContext::copyFrom(Var_declContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Variable_declarationContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::Variable_declarationContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> ifccParser::Variable_declarationContext::NAME() {
  return getTokens(ifccParser::NAME);
}

tree::TerminalNode* ifccParser::Variable_declarationContext::NAME(size_t i) {
  return getToken(ifccParser::NAME, i);
}

tree::TerminalNode* ifccParser::Variable_declarationContext::SEMICOLON() {
  return getToken(ifccParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> ifccParser::Variable_declarationContext::VIRG() {
  return getTokens(ifccParser::VIRG);
}

tree::TerminalNode* ifccParser::Variable_declarationContext::VIRG(size_t i) {
  return getToken(ifccParser::VIRG, i);
}

ifccParser::Variable_declarationContext::Variable_declarationContext(Var_declContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::Variable_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Variable_affectationContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::Variable_affectationContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::Variable_affectationContext::NAME() {
  return getToken(ifccParser::NAME, 0);
}

tree::TerminalNode* ifccParser::Variable_affectationContext::EQ() {
  return getToken(ifccParser::EQ, 0);
}

ifccParser::ExprContext* ifccParser::Variable_affectationContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

tree::TerminalNode* ifccParser::Variable_affectationContext::SEMICOLON() {
  return getToken(ifccParser::SEMICOLON, 0);
}

ifccParser::Variable_affectationContext::Variable_affectationContext(Var_declContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::Variable_affectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVariable_affectation(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::Var_declContext* ifccParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleVar_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Var_declContext *>(_tracker.createInstance<ifccParser::Variable_declarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(51);
      type();
      setState(52);
      match(ifccParser::NAME);
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ifccParser::VIRG) {
        setState(53);
        match(ifccParser::VIRG);
        setState(54);
        match(ifccParser::NAME);
        setState(59);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(60);
      match(ifccParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Var_declContext *>(_tracker.createInstance<ifccParser::Variable_affectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(62);
      type();
      setState(63);
      match(ifccParser::NAME);
      setState(64);
      match(ifccParser::EQ);
      setState(65);
      expr(0);
      setState(66);
      match(ifccParser::SEMICOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ifccParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::TypeContext::getRuleIndex() const {
  return ifccParser::RuleType;
}

antlrcpp::Any ifccParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::TypeContext* ifccParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, ifccParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(ifccParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_listContext ------------------------------------------------------------------

ifccParser::Param_listContext::Param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ifccParser::ParamContext *> ifccParser::Param_listContext::param() {
  return getRuleContexts<ifccParser::ParamContext>();
}

ifccParser::ParamContext* ifccParser::Param_listContext::param(size_t i) {
  return getRuleContext<ifccParser::ParamContext>(i);
}

std::vector<tree::TerminalNode *> ifccParser::Param_listContext::VIRG() {
  return getTokens(ifccParser::VIRG);
}

tree::TerminalNode* ifccParser::Param_listContext::VIRG(size_t i) {
  return getToken(ifccParser::VIRG, i);
}


size_t ifccParser::Param_listContext::getRuleIndex() const {
  return ifccParser::RuleParam_list;
}

antlrcpp::Any ifccParser::Param_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitParam_list(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Param_listContext* ifccParser::param_list() {
  Param_listContext *_localctx = _tracker.createInstance<Param_listContext>(_ctx, getState());
  enterRule(_localctx, 12, ifccParser::RuleParam_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(72);
        param();
        setState(77);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ifccParser::VIRG) {
          setState(73);
          match(ifccParser::VIRG);
          setState(74);
          param();
          setState(79);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case ifccParser::EOF: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

ifccParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::TypeContext* ifccParser::ParamContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::ParamContext::NAME() {
  return getToken(ifccParser::NAME, 0);
}


size_t ifccParser::ParamContext::getRuleIndex() const {
  return ifccParser::RuleParam;
}

antlrcpp::Any ifccParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ParamContext* ifccParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 14, ifccParser::RuleParam);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    type();
    setState(84);
    match(ifccParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocContext ------------------------------------------------------------------

ifccParser::BlocContext::BlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::BlocContext::OPEN_BRACE() {
  return getToken(ifccParser::OPEN_BRACE, 0);
}

ifccParser::Stmt_listContext* ifccParser::BlocContext::stmt_list() {
  return getRuleContext<ifccParser::Stmt_listContext>(0);
}

tree::TerminalNode* ifccParser::BlocContext::CLOSE_BRACE() {
  return getToken(ifccParser::CLOSE_BRACE, 0);
}


size_t ifccParser::BlocContext::getRuleIndex() const {
  return ifccParser::RuleBloc;
}

antlrcpp::Any ifccParser::BlocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBloc(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BlocContext* ifccParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 16, ifccParser::RuleBloc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(ifccParser::OPEN_BRACE);
    setState(87);
    stmt_list();
    setState(88);
    match(ifccParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stmt_listContext ------------------------------------------------------------------

ifccParser::Stmt_listContext::Stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ifccParser::StmtContext *> ifccParser::Stmt_listContext::stmt() {
  return getRuleContexts<ifccParser::StmtContext>();
}

ifccParser::StmtContext* ifccParser::Stmt_listContext::stmt(size_t i) {
  return getRuleContext<ifccParser::StmtContext>(i);
}


size_t ifccParser::Stmt_listContext::getRuleIndex() const {
  return ifccParser::RuleStmt_list;
}

antlrcpp::Any ifccParser::Stmt_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitStmt_list(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Stmt_listContext* ifccParser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 18, ifccParser::RuleStmt_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__0)
      | (1ULL << ifccParser::RETURN)
      | (1ULL << ifccParser::NOMBRE)
      | (1ULL << ifccParser::OPEN_PAR)
      | (1ULL << ifccParser::OPEN_BRACE)
      | (1ULL << ifccParser::NAME))) != 0)) {
      setState(90);
      stmt();
      setState(95);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

ifccParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::Var_declContext* ifccParser::StmtContext::var_decl() {
  return getRuleContext<ifccParser::Var_declContext>(0);
}

ifccParser::Aff_stmtContext* ifccParser::StmtContext::aff_stmt() {
  return getRuleContext<ifccParser::Aff_stmtContext>(0);
}

ifccParser::Expr_stmtContext* ifccParser::StmtContext::expr_stmt() {
  return getRuleContext<ifccParser::Expr_stmtContext>(0);
}

ifccParser::BlocContext* ifccParser::StmtContext::bloc() {
  return getRuleContext<ifccParser::BlocContext>(0);
}

ifccParser::Return_stmtContext* ifccParser::StmtContext::return_stmt() {
  return getRuleContext<ifccParser::Return_stmtContext>(0);
}


size_t ifccParser::StmtContext::getRuleIndex() const {
  return ifccParser::RuleStmt;
}

antlrcpp::Any ifccParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::StmtContext* ifccParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 20, ifccParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(96);
      var_decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(97);
      aff_stmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(98);
      expr_stmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(99);
      bloc();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(100);
      return_stmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Aff_stmtContext ------------------------------------------------------------------

ifccParser::Aff_stmtContext::Aff_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::Aff_stmtContext::NAME() {
  return getToken(ifccParser::NAME, 0);
}

tree::TerminalNode* ifccParser::Aff_stmtContext::EQ() {
  return getToken(ifccParser::EQ, 0);
}

ifccParser::ExprContext* ifccParser::Aff_stmtContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

tree::TerminalNode* ifccParser::Aff_stmtContext::SEMICOLON() {
  return getToken(ifccParser::SEMICOLON, 0);
}


size_t ifccParser::Aff_stmtContext::getRuleIndex() const {
  return ifccParser::RuleAff_stmt;
}

antlrcpp::Any ifccParser::Aff_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAff_stmt(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Aff_stmtContext* ifccParser::aff_stmt() {
  Aff_stmtContext *_localctx = _tracker.createInstance<Aff_stmtContext>(_ctx, getState());
  enterRule(_localctx, 22, ifccParser::RuleAff_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(ifccParser::NAME);
    setState(104);
    match(ifccParser::EQ);
    setState(105);
    expr(0);
    setState(106);
    match(ifccParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_stmtContext ------------------------------------------------------------------

ifccParser::Expr_stmtContext::Expr_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::ExprContext* ifccParser::Expr_stmtContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

tree::TerminalNode* ifccParser::Expr_stmtContext::SEMICOLON() {
  return getToken(ifccParser::SEMICOLON, 0);
}


size_t ifccParser::Expr_stmtContext::getRuleIndex() const {
  return ifccParser::RuleExpr_stmt;
}

antlrcpp::Any ifccParser::Expr_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitExpr_stmt(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Expr_stmtContext* ifccParser::expr_stmt() {
  Expr_stmtContext *_localctx = _tracker.createInstance<Expr_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, ifccParser::RuleExpr_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    expr(0);
    setState(109);
    match(ifccParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

ifccParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ifccParser::ExprContext *> ifccParser::ArgsContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::ArgsContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ifccParser::ArgsContext::VIRG() {
  return getTokens(ifccParser::VIRG);
}

tree::TerminalNode* ifccParser::ArgsContext::VIRG(size_t i) {
  return getToken(ifccParser::VIRG, i);
}


size_t ifccParser::ArgsContext::getRuleIndex() const {
  return ifccParser::RuleArgs;
}

antlrcpp::Any ifccParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ArgsContext* ifccParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 26, ifccParser::RuleArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(120);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::NOMBRE:
      case ifccParser::OPEN_PAR:
      case ifccParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(111);
        expr(0);
        setState(116);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ifccParser::VIRG) {
          setState(112);
          match(ifccParser::VIRG);
          setState(113);
          expr(0);
          setState(118);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case ifccParser::CLOSE_PAR: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ifccParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ExprContext::getRuleIndex() const {
  return ifccParser::RuleExpr;
}

void ifccParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DivContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::DivContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::DivContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

tree::TerminalNode* ifccParser::DivContext::DIV() {
  return getToken(ifccParser::DIV, 0);
}

ifccParser::DivContext::DivContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::MinusContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::MinusContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

tree::TerminalNode* ifccParser::MinusContext::MINUS() {
  return getToken(ifccParser::MINUS, 0);
}

ifccParser::MinusContext::MinusContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::MinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StarContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::StarContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::StarContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

tree::TerminalNode* ifccParser::StarContext::STAR() {
  return getToken(ifccParser::STAR, 0);
}

ifccParser::StarContext::StarContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::StarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitStar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NameContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::NameContext::NAME() {
  return getToken(ifccParser::NAME, 0);
}

ifccParser::NameContext::NameContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParentheseContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ParentheseContext::OPEN_PAR() {
  return getToken(ifccParser::OPEN_PAR, 0);
}

ifccParser::ExprContext* ifccParser::ParentheseContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

tree::TerminalNode* ifccParser::ParentheseContext::CLOSE_PAR() {
  return getToken(ifccParser::CLOSE_PAR, 0);
}

ifccParser::ParentheseContext::ParentheseContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ParentheseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitParenthese(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NombreContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::NombreContext::NOMBRE() {
  return getToken(ifccParser::NOMBRE, 0);
}

ifccParser::NombreContext::NombreContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::NombreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitNombre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::PlusContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::PlusContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

tree::TerminalNode* ifccParser::PlusContext::PLUS() {
  return getToken(ifccParser::PLUS, 0);
}

ifccParser::PlusContext::PlusContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ExprContext* ifccParser::expr() {
   return expr(0);
}

ifccParser::ExprContext* ifccParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ifccParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ifccParser::ExprContext *previousContext = _localctx;
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, ifccParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(129);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::OPEN_PAR: {
        _localctx = _tracker.createInstance<ParentheseContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(123);
        match(ifccParser::OPEN_PAR);
        setState(124);
        expr(0);
        setState(125);
        match(ifccParser::CLOSE_PAR);
        break;
      }

      case ifccParser::NOMBRE: {
        _localctx = _tracker.createInstance<NombreContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(127);
        match(ifccParser::NOMBRE);
        break;
      }

      case ifccParser::NAME: {
        _localctx = _tracker.createInstance<NameContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(128);
        match(ifccParser::NAME);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(145);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(143);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<StarContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(131);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(132);
          match(ifccParser::STAR);
          setState(133);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(134);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(135);
          match(ifccParser::DIV);
          setState(136);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(137);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(138);
          match(ifccParser::PLUS);
          setState(139);
          expr(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<MinusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(140);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(141);
          match(ifccParser::MINUS);
          setState(142);
          expr(5);
          break;
        }

        } 
      }
      setState(147);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

ifccParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::Return_stmtContext::RETURN() {
  return getToken(ifccParser::RETURN, 0);
}

ifccParser::ExprContext* ifccParser::Return_stmtContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

tree::TerminalNode* ifccParser::Return_stmtContext::SEMICOLON() {
  return getToken(ifccParser::SEMICOLON, 0);
}


size_t ifccParser::Return_stmtContext::getRuleIndex() const {
  return ifccParser::RuleReturn_stmt;
}

antlrcpp::Any ifccParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Return_stmtContext* ifccParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, ifccParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(ifccParser::RETURN);
    setState(149);
    expr(0);
    setState(150);
    match(ifccParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ifccParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 14: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ifccParser::_decisionToDFA;
atn::PredictionContextCache ifccParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ifccParser::_atn;
std::vector<uint16_t> ifccParser::_serializedATN;

std::vector<std::string> ifccParser::_ruleNames = {
  "axiom", "prog", "decl", "func_decl", "var_decl", "type", "param_list", 
  "param", "bloc", "stmt_list", "stmt", "aff_stmt", "expr_stmt", "args", 
  "expr", "return_stmt"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'int'", "'return'", "'int32_t'", "'int64_t'", "", "'('", "')'", "'{'", 
  "'}'", "';'", "'*'", "'+'", "'/'", "'-'", "'='", "','"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "RETURN", "INT32_T", "INT64_T", "NOMBRE", "OPEN_PAR", "CLOSE_PAR", 
  "OPEN_BRACE", "CLOSE_BRACE", "SEMICOLON", "STAR", "PLUS", "DIV", "MINUS", 
  "EQ", "VIRG", "NAME", "WS"
};

dfa::Vocabulary ifccParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ifccParser::_tokenNames;

ifccParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x14, 0x9b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x26, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x29, 
    0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2d, 0xa, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x3a, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0x3d, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x47, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x4e, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x51, 0xb, 0x8, 0x3, 0x8, 0x5, 0x8, 0x54, 0xa, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x7, 
    0xb, 0x5e, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x61, 0xb, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x68, 0xa, 0xc, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x75, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0x78, 0xb, 0xf, 0x3, 0xf, 0x5, 0xf, 0x7b, 0xa, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
    0x10, 0x84, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0x92, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x95, 0xb, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x2, 0x3, 
    0x1e, 0x12, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x2, 0x2, 0x2, 0x9d, 0x2, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x27, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x46, 0x3, 0x2, 0x2, 0x2, 0xc, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x53, 0x3, 0x2, 0x2, 0x2, 0x10, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x58, 0x3, 0x2, 0x2, 0x2, 0x14, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x67, 0x3, 0x2, 0x2, 0x2, 0x18, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x83, 0x3, 0x2, 0x2, 0x2, 0x20, 0x96, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x23, 0x5, 0x4, 0x3, 0x2, 0x23, 0x3, 0x3, 0x2, 0x2, 0x2, 0x24, 0x26, 
    0x5, 0x6, 0x4, 0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x5, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x2d, 0x5, 0x8, 0x5, 0x2, 0x2b, 0x2d, 0x5, 0xa, 0x6, 0x2, 
    0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0xc, 0x7, 0x2, 0x2f, 0x30, 
    0x7, 0x13, 0x2, 0x2, 0x30, 0x31, 0x7, 0x8, 0x2, 0x2, 0x31, 0x32, 0x5, 
    0x1c, 0xf, 0x2, 0x32, 0x33, 0x7, 0x9, 0x2, 0x2, 0x33, 0x34, 0x5, 0x12, 
    0xa, 0x2, 0x34, 0x9, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x5, 0xc, 0x7, 
    0x2, 0x36, 0x3b, 0x7, 0x13, 0x2, 0x2, 0x37, 0x38, 0x7, 0x12, 0x2, 0x2, 
    0x38, 0x3a, 0x7, 0x13, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0xc, 0x2, 0x2, 0x3f, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x41, 0x5, 0xc, 0x7, 0x2, 0x41, 0x42, 0x7, 0x13, 0x2, 
    0x2, 0x42, 0x43, 0x7, 0x11, 0x2, 0x2, 0x43, 0x44, 0x5, 0x1e, 0x10, 0x2, 
    0x44, 0x45, 0x7, 0xc, 0x2, 0x2, 0x45, 0x47, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x46, 0x40, 0x3, 0x2, 0x2, 0x2, 0x47, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x7, 0x3, 0x2, 0x2, 0x49, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x4f, 0x5, 0x10, 0x9, 0x2, 0x4b, 0x4c, 0x7, 0x12, 
    0x2, 0x2, 0x4c, 0x4e, 0x5, 0x10, 0x9, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x54, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x52, 0x54, 0x3, 0x2, 0x2, 0x2, 0x53, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0x53, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x56, 0x5, 0xc, 0x7, 0x2, 0x56, 0x57, 0x7, 0x13, 
    0x2, 0x2, 0x57, 0x11, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0xa, 0x2, 
    0x2, 0x59, 0x5a, 0x5, 0x14, 0xb, 0x2, 0x5a, 0x5b, 0x7, 0xb, 0x2, 0x2, 
    0x5b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 0x5, 0x16, 0xc, 0x2, 0x5d, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x61, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x68, 0x5, 0xa, 
    0x6, 0x2, 0x63, 0x68, 0x5, 0x18, 0xd, 0x2, 0x64, 0x68, 0x5, 0x1a, 0xe, 
    0x2, 0x65, 0x68, 0x5, 0x12, 0xa, 0x2, 0x66, 0x68, 0x5, 0x20, 0x11, 0x2, 
    0x67, 0x62, 0x3, 0x2, 0x2, 0x2, 0x67, 0x63, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x66, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x17, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 
    0x13, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x11, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x1e, 
    0x10, 0x2, 0x6c, 0x6d, 0x7, 0xc, 0x2, 0x2, 0x6d, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x6f, 0x5, 0x1e, 0x10, 0x2, 0x6f, 0x70, 0x7, 0xc, 0x2, 0x2, 
    0x70, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x71, 0x76, 0x5, 0x1e, 0x10, 0x2, 0x72, 
    0x73, 0x7, 0x12, 0x2, 0x2, 0x73, 0x75, 0x5, 0x1e, 0x10, 0x2, 0x74, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 0x3, 0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x71, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x8, 0x10, 0x1, 0x2, 0x7d, 
    0x7e, 0x7, 0x8, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x1e, 0x10, 0x2, 0x7f, 0x80, 
    0x7, 0x9, 0x2, 0x2, 0x80, 0x84, 0x3, 0x2, 0x2, 0x2, 0x81, 0x84, 0x7, 
    0x7, 0x2, 0x2, 0x82, 0x84, 0x7, 0x13, 0x2, 0x2, 0x83, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x93, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0xc, 0x9, 0x2, 0x2, 
    0x86, 0x87, 0x7, 0xd, 0x2, 0x2, 0x87, 0x92, 0x5, 0x1e, 0x10, 0xa, 0x88, 
    0x89, 0xc, 0x8, 0x2, 0x2, 0x89, 0x8a, 0x7, 0xf, 0x2, 0x2, 0x8a, 0x92, 
    0x5, 0x1e, 0x10, 0x9, 0x8b, 0x8c, 0xc, 0x7, 0x2, 0x2, 0x8c, 0x8d, 0x7, 
    0xe, 0x2, 0x2, 0x8d, 0x92, 0x5, 0x1e, 0x10, 0x8, 0x8e, 0x8f, 0xc, 0x6, 
    0x2, 0x2, 0x8f, 0x90, 0x7, 0x10, 0x2, 0x2, 0x90, 0x92, 0x5, 0x1e, 0x10, 
    0x7, 0x91, 0x85, 0x3, 0x2, 0x2, 0x2, 0x91, 0x88, 0x3, 0x2, 0x2, 0x2, 
    0x91, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x4, 0x2, 0x2, 0x97, 0x98, 0x5, 0x1e, 
    0x10, 0x2, 0x98, 0x99, 0x7, 0xc, 0x2, 0x2, 0x99, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xf, 0x27, 0x2c, 0x3b, 0x46, 0x4f, 0x53, 0x5f, 0x67, 0x76, 0x7a, 
    0x83, 0x91, 0x93, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ifccParser::Initializer ifccParser::_init;
