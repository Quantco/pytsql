
// Generated from tsql.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "tsqlVisitor.h"


/**
 * This class provides an empty implementation of tsqlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  tsqlBaseVisitor : public tsqlVisitor {
public:

  virtual antlrcpp::Any visitTsql_file(tsqlParser::Tsql_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBatch(tsqlParser::BatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_clauses(tsqlParser::Sql_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_clause(tsqlParser::Sql_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_clause(tsqlParser::Dml_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDdl_clause(tsqlParser::Ddl_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCfl_statement(tsqlParser::Cfl_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCfl_clause(tsqlParser::Cfl_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock_statement(tsqlParser::Block_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreak_statement(tsqlParser::Break_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinue_statement(tsqlParser::Continue_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGoto_statement(tsqlParser::Goto_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(tsqlParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_block(tsqlParser::If_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_statement(tsqlParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThrow_statement(tsqlParser::Throw_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTry_catch_statement(tsqlParser::Try_catch_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWaitfor_statement(tsqlParser::Waitfor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_statement(tsqlParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint_statement(tsqlParser::Print_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRaiseerror_statement(tsqlParser::Raiseerror_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnother_statement(tsqlParser::Another_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_statement(tsqlParser::Delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_statement_from(tsqlParser::Delete_statement_fromContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_statement(tsqlParser::Insert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_statement_value(tsqlParser::Insert_statement_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_statement(tsqlParser::Select_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_statement(tsqlParser::Update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhere_clause_dml(tsqlParser::Where_clause_dmlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutput_clause(tsqlParser::Output_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutput_dml_list_elem(tsqlParser::Output_dml_list_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutput_column_name(tsqlParser::Output_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database(tsqlParser::Create_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_index(tsqlParser::Create_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_statistics(tsqlParser::Create_statisticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table(tsqlParser::Create_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_schema(tsqlParser::Create_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_synonym(tsqlParser::Create_synonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_view(tsqlParser::Create_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitView_attribute(tsqlParser::View_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table(tsqlParser::Alter_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_database(tsqlParser::Alter_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatabase_optionspec(tsqlParser::Database_optionspecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuto_option(tsqlParser::Auto_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChange_tracking_option(tsqlParser::Change_tracking_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChange_tracking_option_list(tsqlParser::Change_tracking_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContainment_option(tsqlParser::Containment_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_option(tsqlParser::Cursor_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDate_correlation_optimization_option(tsqlParser::Date_correlation_optimization_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDb_encryption_option(tsqlParser::Db_encryption_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDb_state_option(tsqlParser::Db_state_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDb_update_option(tsqlParser::Db_update_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDb_user_access_option(tsqlParser::Db_user_access_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelayed_durability_option(tsqlParser::Delayed_durability_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExternal_access_option(tsqlParser::External_access_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHadr_options(tsqlParser::Hadr_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMixed_page_allocation_option(tsqlParser::Mixed_page_allocation_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterization_option(tsqlParser::Parameterization_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecovery_option(tsqlParser::Recovery_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitService_broker_option(tsqlParser::Service_broker_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSnapshot_option(tsqlParser::Snapshot_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_option(tsqlParser::Sql_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTarget_recovery_time_option(tsqlParser::Target_recovery_time_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTermination(tsqlParser::TerminationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_index(tsqlParser::Drop_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_procedure(tsqlParser::Drop_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_statistics(tsqlParser::Drop_statisticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_table(tsqlParser::Drop_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_database(tsqlParser::Drop_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_synonym(tsqlParser::Drop_synonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_view(tsqlParser::Drop_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_schema(tsqlParser::Drop_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_type(tsqlParser::Create_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_type(tsqlParser::Drop_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRowset_function_limited(tsqlParser::Rowset_function_limitedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpenquery(tsqlParser::OpenqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpendatasource(tsqlParser::OpendatasourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_statement(tsqlParser::Declare_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_statement(tsqlParser::Cursor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecute_statement(tsqlParser::Execute_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecute_statement_arg(tsqlParser::Execute_statement_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecute_var_string(tsqlParser::Execute_var_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSecurity_statement(tsqlParser::Security_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_permission(tsqlParser::Grant_permissionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_statement(tsqlParser::Set_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransaction_statement(tsqlParser::Transaction_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGo_statement(tsqlParser::Go_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse_statement(tsqlParser::Use_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecute_clause(tsqlParser::Execute_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_local(tsqlParser::Declare_localContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_type_definition(tsqlParser::Table_type_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_def_table_constraints(tsqlParser::Column_def_table_constraintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_def_table_constraint(tsqlParser::Column_def_table_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_definition(tsqlParser::Column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_constraint(tsqlParser::Column_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_constraint(tsqlParser::Table_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_options(tsqlParser::Index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_option(tsqlParser::Index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_cursor(tsqlParser::Declare_cursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_set_cursor_common(tsqlParser::Declare_set_cursor_commonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFetch_cursor(tsqlParser::Fetch_cursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_special(tsqlParser::Set_specialContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant_LOCAL_ID(tsqlParser::Constant_LOCAL_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_operator_expression(tsqlParser::Binary_operator_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_operator_expression(tsqlParser::Unary_operator_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call_expression(tsqlParser::Function_call_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversion_expression(tsqlParser::Conversion_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_expression(tsqlParser::Case_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_ref_expression(tsqlParser::Column_ref_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_agg_expression(tsqlParser::String_agg_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPercentile_cont_expression(tsqlParser::Percentile_cont_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitive_expression(tsqlParser::Primitive_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBracket_expression(tsqlParser::Bracket_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_expression(tsqlParser::Subquery_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOver_clause_expression(tsqlParser::Over_clause_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_method_expression(tsqlParser::Xml_method_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_method_call(tsqlParser::Xml_method_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_xml_method_name(tsqlParser::Simple_xml_method_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant_expression(tsqlParser::Constant_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery(tsqlParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWith_expression(tsqlParser::With_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommon_table_expression(tsqlParser::Common_table_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_elem(tsqlParser::Update_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearch_condition_list(tsqlParser::Search_condition_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearch_cond_or(tsqlParser::Search_cond_orContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearch_cond_pred(tsqlParser::Search_cond_predContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearch_cond_and(tsqlParser::Search_cond_andContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_operator_expression3(tsqlParser::Unary_operator_expression3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_operator_expression2(tsqlParser::Unary_operator_expression2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_operator_expression2(tsqlParser::Binary_operator_expression2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSublink_expression(tsqlParser::Sublink_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_mod_expression(tsqlParser::Binary_mod_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_in_expression(tsqlParser::Binary_in_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_operator_expression3(tsqlParser::Binary_operator_expression3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBracket_search_expression(tsqlParser::Bracket_search_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimal_expression(tsqlParser::Decimal_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBracket_query_expression(tsqlParser::Bracket_query_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_specification_expression(tsqlParser::Query_specification_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnion_query_expression(tsqlParser::Union_query_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnion_op(tsqlParser::Union_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCross_apply_expression(tsqlParser::Cross_apply_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_specification(tsqlParser::Query_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_grouping_sets(tsqlParser::Group_by_grouping_setsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrouping_set(tsqlParser::Grouping_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTop_clause(tsqlParser::Top_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTop_clause_dm(tsqlParser::Top_clause_dmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_clause(tsqlParser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFetch_expression(tsqlParser::Fetch_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_clause(tsqlParser::For_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_common_directives(tsqlParser::Xml_common_directivesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_expression(tsqlParser::Order_by_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_item(tsqlParser::Group_by_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOption_clause(tsqlParser::Option_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOption(tsqlParser::OptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptimize_for_arg(tsqlParser::Optimize_for_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list(tsqlParser::Select_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_elem(tsqlParser::Select_list_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_sources(tsqlParser::Table_sourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCross_join(tsqlParser::Cross_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_source_item_join(tsqlParser::Table_source_item_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_join(tsqlParser::Standard_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitApply_join(tsqlParser::Apply_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBracket_table_source(tsqlParser::Bracket_table_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_source_item_name(tsqlParser::Table_source_item_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_source_item_simple(tsqlParser::Table_source_item_simpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_source_item_complex(tsqlParser::Table_source_item_complexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablesample_clause(tsqlParser::Tablesample_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSample_number(tsqlParser::Sample_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat_seed(tsqlParser::Repeat_seedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_alias(tsqlParser::Table_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChange_table(tsqlParser::Change_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_type(tsqlParser::Join_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_name_with_hint(tsqlParser::Table_name_with_hintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRowset_function(tsqlParser::Rowset_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBulk_option(tsqlParser::Bulk_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDerived_table(tsqlParser::Derived_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRank_call(tsqlParser::Rank_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregate_call(tsqlParser::Aggregate_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_call(tsqlParser::Standard_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNvf_call(tsqlParser::Nvf_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCast_call(tsqlParser::Cast_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_call(tsqlParser::Simple_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_call(tsqlParser::Expression_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitch_section(tsqlParser::Switch_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitch_search_condition_section(tsqlParser::Switch_search_condition_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWith_table_hints(tsqlParser::With_table_hintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_with_table_hints(tsqlParser::Insert_with_table_hintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_hint(tsqlParser::Table_hintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_value(tsqlParser::Index_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_alias_list(tsqlParser::Column_alias_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_alias(tsqlParser::Column_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitA_star(tsqlParser::A_starContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_value_constructor(tsqlParser::Table_value_constructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_list(tsqlParser::Expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_list(tsqlParser::Value_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNext_value_for(tsqlParser::Next_value_forContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNext_value_for_function(tsqlParser::Next_value_for_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRanking_windowed_function(tsqlParser::Ranking_windowed_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregate_windowed_function(tsqlParser::Aggregate_windowed_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAll_distinct(tsqlParser::All_distinctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOver_clause(tsqlParser::Over_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRow_or_range_clause(tsqlParser::Row_or_range_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindow_frame_extent(tsqlParser::Window_frame_extentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindow_frame_bound(tsqlParser::Window_frame_boundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindow_frame_preceding(tsqlParser::Window_frame_precedingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindow_frame_following(tsqlParser::Window_frame_followingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database_option(tsqlParser::Create_database_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatabase_filestream_option(tsqlParser::Database_filestream_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatabase_file_spec(tsqlParser::Database_file_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_group(tsqlParser::File_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_spec(tsqlParser::File_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFull_table_name(tsqlParser::Full_table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_name(tsqlParser::Table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_name(tsqlParser::Simple_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_proc_name(tsqlParser::Func_proc_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDdl_object(tsqlParser::Ddl_objectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFull_column_name(tsqlParser::Full_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_name_list(tsqlParser::Column_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_name(tsqlParser::Cursor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_off(tsqlParser::On_offContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClustered(tsqlParser::ClusteredContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_notnull(tsqlParser::Null_notnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalar_function_name(tsqlParser::Scalar_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefault_value(tsqlParser::Default_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(tsqlParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(tsqlParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitR_id(tsqlParser::R_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_id(tsqlParser::Simple_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparison_operator(tsqlParser::Comparison_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_operator(tsqlParser::Assignment_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_size(tsqlParser::File_sizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_or_alter_procedure(tsqlParser::Create_or_alter_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_or_alter_function(tsqlParser::Create_or_alter_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_body_returns_select(tsqlParser::Func_body_returns_selectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_body_returns_table(tsqlParser::Func_body_returns_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_body_returns_scalar(tsqlParser::Func_body_returns_scalarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_param(tsqlParser::Procedure_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_option(tsqlParser::Procedure_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_option(tsqlParser::Function_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPercentile_cont(tsqlParser::Percentile_contContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_agg(tsqlParser::String_aggContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_type(tsqlParser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }


};

