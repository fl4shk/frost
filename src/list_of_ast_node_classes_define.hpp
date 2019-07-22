// src/list_of_ast_node_classes_define.hpp

#define LIST_OF_AST_NODE_CLASSES(X) \
	X(NodeBase, Base) \
	X(NodeList, List) \
	X(NodeProgram, Program) \
	X(NodePackage, Package) \
	X(NodeScopePackage, ScopePackage) \
	X(NodeModule, Module) \
	X(NodeScopeModproc, ScopeModproc) \
	X(NodeInputPortArgSublist, InputPortArgSublist) \
	X(NodeOutputPortArgSublist, OutputPortArgSublist) \
	X(NodeBidirPortArgSublist, BidirPortArgSublist) \
	X(NodeParamArgSublist, ParamArgSublist) \
	X(NodeOneParamModule, OneParamModule) \
	X(NodeParamModuleSublist, ParamModuleSublist) \
	X(NodeParamArgList, ParamArgList) \
	X(NodeLeftRightBase, LeftRightBase) \
	X(NodeIdentTerminal, IdentTerminal) \
	X(NodeIdentMemberAccess, IdentMemberAccess) \
	X(NodeIdentScopeAccess, IdentScopeAccess) \
	X(NodeCall, Call) \
	X(NodeIdentEtc, IdentEtc) \
	X(NodeNumExpr, NumExpr) \
	X(NodeSizedNumExpr, SizedNumExpr) \
	X(NodeBracketPair, BracketPair) \
	X(NodeHasString, HasString) \
	X(NodeIdent, Ident) \
	X(NodeConstString, ConstString) \
	X(NodeScopeBehav, ScopeBehav) \
	X(NodeEnum, Enum) \
	X(NodeScopeEnum, ScopeEnum) \
	X(NodeClass, Class) \
	X(NodeScopeClass, ScopeClass) \
	X(NodeExtends, Extends) \
	X(NodeCallableMember, CallableMember) \
	X(NodeUnion, Union) \
	X(NodeScopeUnion, ScopeUnion) \
	X(NodeTypename, Typename) \
	X(NodeType, Type) \
	X(NodeAuto, Auto) \
	X(NodeVoid, Void) \
	X(NodeUwire, Uwire) \
	X(NodeSwire, Swire) \
	X(NodeUbit, Ubit) \
	X(NodeSbit, Sbit) \
	X(NodeUbyte, Ubyte) \
	X(NodeSbyte, Sbyte) \
	X(NodeUshortint, Ushortint) \
	X(NodeSshortint, Sshortint) \
	X(NodeUint, Uint) \
	X(NodeSint, Sint) \
	X(NodeUlongint, Ulongint) \
	X(NodeSlongint, Slongint) \
	X(NodeSelf, Self) \
	X(NodePosParamArgInstList, PosParamArgInstList) \
	X(NodeNamedParamArgInstList, NamedParamArgInstList) \
	X(NodeOneParamArgInst, OneParamArgInst) \
	X(NodeExprBase, ExprBase) \
	X(NodeExprBinopBase, ExprBinopBase) \
	X(NodeExprUnopBase, ExprUnopBase) \
	X(NodeExprBinopLogAnd, ExprBinopLogAnd) \
	X(NodeExprBinopLogOr, ExprBinopLogOr) \
	X(NodeExprBinopCmpEq, ExprBinopCmpEq) \
	X(NodeExprBinopCmpNe, ExprBinopCmpNe) \
	X(NodeExprBinopCmpLt, ExprBinopCmpLt) \
	X(NodeExprBinopCmpGt, ExprBinopCmpGt) \
	X(NodeExprBinopCmpLe, ExprBinopCmpLe) \
	X(NodeExprBinopCmpGe, ExprBinopCmpGe) \
	X(NodeExprBinopPlus, ExprBinopPlus) \
	X(NodeExprBinopMinus, ExprBinopMinus) \
	X(NodeExprBinopMul, ExprBinopMul) \
	X(NodeExprBinopDiv, ExprBinopDiv) \
	X(NodeExprBinopMod, ExprBinopMod) \
	X(NodeExprBinopBitAnd, ExprBinopBitAnd) \
	X(NodeExprBinopBitOr, ExprBinopBitOr) \
	X(NodeExprBinopBitXor, ExprBinopBitXor) \
	X(NodeExprBinopBitLsl, ExprBinopBitLsl) \
	X(NodeExprBinopBitLsr, ExprBinopBitLsr) \
	X(NodeExprBinopBitAsr, ExprBinopBitAsr) \
	X(NodeExprUnopLogNot, ExprUnopLogNot) \
	X(NodeExprUnopBitNot, ExprUnopBitNot) \
	X(NodeExprUnopPlus, ExprUnopPlus) \
	X(NodeExprUnopMinus, ExprUnopMinus) \
	X(NodeExprUnopDollarUnsgn, ExprUnopDollarUnsgn) \
	X(NodeExprUnopDollarSgn, ExprUnopDollarSgn) \
	X(NodeExprUnopDollarIsUnsgn, ExprUnopDollarIsUnsgn) \
	X(NodeExprUnopDollarIsSgn, ExprUnopDollarIsSgn) \
	X(NodeExprUnopDollarRange, ExprUnopDollarRange) \
	X(NodeExprUnopDollarSize, ExprUnopDollarSize) \
	X(NodeExprUnopDollarFirst, ExprUnopDollarFirst) \
	X(NodeExprUnopDollarLast, ExprUnopDollarLast) \
	X(NodeExprUnopDollarHigh, ExprUnopDollarHigh) \
	X(NodeExprUnopDollarLow, ExprUnopDollarLow) \
	X(NodeExprUnopDollarClog2, ExprUnopDollarClog2) \
	X(NodeExprBinopDollarPow, ExprBinopDollarPow) \
	X(NodePseudoExprDollarBase, PseudoExprDollarBase) \
	X(NodePseudoExprDollarPast, PseudoExprDollarPast) \
	X(NodePseudoExprDollarStable, PseudoExprDollarStable) \
	X(NodePseudoExprDollarRose, PseudoExprDollarRose) \
	X(NodePseudoExprDollarFell, PseudoExprDollarFell) \
	X(NodePseudoExprDollarGlobalClock, PseudoExprDollarGlobalClock) \
	X(NodeExprUnopTypeof, ExprUnopTypeof) \
	X(NodeExprCat, ExprCat) \
	X(NodeListCat, ListCat) \
	X(NodeExprRepl, ExprRepl) \
	X(NodeExprRangeAny, ExprRangeAny) \
	X(NodeRangeOne, RangeOne) \
	X(NodeRangeTwo, RangeTwo) \
	X(NodeStmtList, StmtList) \
	X(NodeStmtAnyFor, StmtAnyFor) \
	X(NodeStmtFor, StmtFor) \
	X(NodeStmtGenerateFor, StmtGenerateFor) \
	X(NodeStmtIf, StmtIf) \
	X(NodeStmtGenerateIf, StmtGenerateIf) \
	X(NodeStmtWhile, StmtWhile) \
	X(NodeStmtBehavAssign, StmtBehavAssign) \
	X(NodeStmtContAssign, StmtContAssign) \
	X(NodeStmtMemberAccessPublic, StmtMemberAccessPublic) \
	X(NodeStmtMemberAccessProtected, StmtMemberAccessProtected) \
	X(NodeStmtMemberAccessPrivate, StmtMemberAccessPrivate) \
	X(NodeStmtSwitch, StmtSwitch) \
	X(NodeStmtSwitchz, StmtSwitchz) \
	X(NodeStmtCase, StmtCase) \
	X(NodeStmtDefault, StmtDefault) \
	X(NodeScopeSwitch, ScopeSwitch) \
	X(NodeStmtUsing, StmtUsing) \
	X(NodeStmtInstModule, StmtInstModule) \
	X(NodeStmtReturn, StmtReturn) \
	X(NodeStmtInitial, StmtInitial) \
	X(NodeStmtAlwaysComb, StmtAlwaysComb) \
	X(NodeStmtAlwaysBlk, StmtAlwaysBlk) \
	X(NodeStmtAlwaysFf, StmtAlwaysFf) \
	X(NodeStmtAssert, StmtAssert) \
	X(NodeStmtAssume, StmtAssume) \
	X(NodeStmtCover, StmtCover) \
	X(NodeStmtRestrict, StmtRestrict) \
	X(NodeStmtStaticAssert, StmtStaticAssert) \
	X(NodePosedgeInst, PosedgeInst) \
	X(NodeNegedgeInst, NegedgeInst) \
	X(NodeEdgeList, EdgeList) \
	X(NodeDeclCallable, DeclCallable) \
	X(NodeDeclFunc, DeclFunc) \
	X(NodeDeclProc, DeclProc) \
	X(NodeDeclTask, DeclTask) \
	X(NodeIdentTermAndExtra, IdentTermAndExtra) \
	X(NodeIdentTermAndExtraList, IdentTermAndExtraList) \
	X(NodeDeclConstList, DeclConstList) \
	X(NodeDeclVarList, DeclVarList) \

