#ifndef src_symbol_table_class_hpp
#define src_symbol_table_class_hpp

// src/symbol_table_class.hpp

#include "misc_includes.hpp"
#include "general_allocator_class.hpp"
#include "scoped_table_base_class.hpp"
#include "ident_table_classes.hpp"
//#include "expression_classes.hpp"
//#include "hdl_type_table_class.hpp"

namespace frost_hdl
{

class HdlType;
class Expression;

// This class represents variables and named constants, including named
// constants used as parameters to a parameterized... thing (such as an
// "HdlModule" or a composite type).
//
// An instantiation of a "parameter"ized construct will have a different
// set of "Symbol"s for its "parameter"s than the set of "Symbol"s used for
// the construct's definition.
class Symbol
{
public:		// types
	typedef Expression* Dimension;
	typedef Dimension OneValueExpr;
	typedef std::vector<OneValueExpr> ValueExprs;

protected:		// variables
	SavedString _ident = nullptr;

	// Whether or not this symbol is a named constant.
	bool _is_constant = false;

	HdlType* _hdl_type = nullptr;

	// For arrays, this *must* be set an Expression that evaluates to the
	// size of the array.  If "_right_dim_expr" is set to "nullptr", then
	// this "Symbol" is not an array.,
	Dimension _right_dim_expr = nullptr;

	// Compile-time values are stored here for both scalars and arrays.
	// For parameters, store a "nullptr" in *any* of the elements of this
	// "ValueExprs" to indicate that this parameter *does not* have a
	// default value.
	ValueExprs _value_exprs;

public:		// functions
	Symbol() = default;

	// Non-constant scalar constructor
	Symbol(SavedString s_ident, HdlType* s_hdl_type);

	// Constant scalar constructor, or non-constant array constructor
	Symbol(SavedString s_ident, HdlType* s_hdl_type,
		bool s_is_array, Expression* scalar_val_or_arr_size);

	// Constant array constructor
	Symbol(SavedString s_ident, HdlType* s_hdl_type,
		ValueExprs&& s_value_exprs);


	// We really don't want copies of "Symbol"s.
	inline Symbol(const Symbol& to_copy) = delete;
	inline Symbol(Symbol&& to_move) = default;

	virtual ~Symbol() = default;


	// We really don't want copies of "Symbol"s.
	inline Symbol& operator = (const Symbol& to_copy) = delete;
	inline Symbol& operator = (Symbol&& to_move) = default;

	// Used to determine if a "parameter" has a default value.
	bool has_default_value() const;

	inline bool is_array() const
	{
		return (_right_dim_expr != nullptr);
	}


	GEN_GETTER_BY_VAL(ident)
	GEN_GETTER_BY_VAL(is_constant)
	GEN_GETTER_BY_VAL(hdl_type)

	GEN_GETTER_BY_VAL(right_dim_expr)
	GEN_GETTER_BY_CON_REF(value_exprs)


};

// "SymbolTable" isn't scoped because scoping information is stored in the
// "StatementTable" class.
class SymbolTable : public IdentToPointerTable<Symbol>
{
public:		// functions
	SymbolTable() = default;
	virtual ~SymbolTable() = default;
};

} // namespace frost_hdl

#endif		// src_symbol_table_class_hpp
