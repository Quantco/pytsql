
// Generated from tsql.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "tsqlVisitor.h"


/**
 * This class provides an empty implementation of tsqlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  tsqlBaseVisitor : public tsqlVisitor {
public:

  virtual std::any visitTsql_file(tsqlParser::Tsql_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBatch(tsqlParser::BatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_clauses(tsqlParser::Sql_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_clause(tsqlParser::Sql_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDml_clause(tsqlParser::Dml_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDdl_clause(tsqlParser::Ddl_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCfl_statement(tsqlParser::Cfl_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCfl_clause(tsqlParser::Cfl_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock_statement(tsqlParser::Block_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreak_statement(tsqlParser::Break_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinue_statement(tsqlParser::Continue_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGoto_statement(tsqlParser::Goto_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(tsqlParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_block(tsqlParser::If_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_statement(tsqlParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrow_statement(tsqlParser::Throw_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTry_catch_statement(tsqlParser::Try_catch_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWaitfor_statement(tsqlParser::Waitfor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_statement(tsqlParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_statement(tsqlParser::Print_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaiseerror_statement(tsqlParser::Raiseerror_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnother_statement(tsqlParser::Another_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelete_statement(tsqlParser::Delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelete_statement_from(tsqlParser::Delete_statement_fromContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_statement(tsqlParser::Insert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_statement_value(tsqlParser::Insert_statement_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_statement(tsqlParser::Select_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_statement(tsqlParser::Update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhere_clause_dml(tsqlParser::Where_clause_dmlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutput_clause(tsqlParser::Output_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutput_dml_list_elem(tsqlParser::Output_dml_list_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutput_column_name(tsqlParser::Output_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_database(tsqlParser::Create_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_index(tsqlParser::Create_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_statistics(tsqlParser::Create_statisticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_table(tsqlParser::Create_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_schema(tsqlParser::Create_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_synonym(tsqlParser::Create_synonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_view(tsqlParser::Create_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitView_attribute(tsqlParser::View_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_table(tsqlParser::Alter_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_database(tsqlParser::Alter_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatabase_optionspec(tsqlParser::Database_optionspecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAuto_option(tsqlParser::Auto_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChange_tracking_option(tsqlParser::Change_tracking_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChange_tracking_option_list(tsqlParser::Change_tracking_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContainment_option(tsqlParser::Containment_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_option(tsqlParser::Cursor_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDate_correlation_optimization_option(tsqlParser::Date_correlation_optimization_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_encryption_option(tsqlParser::Db_encryption_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_state_option(tsqlParser::Db_state_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_update_option(tsqlParser::Db_update_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_user_access_option(tsqlParser::Db_user_access_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelayed_durability_option(tsqlParser::Delayed_durability_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternal_access_option(tsqlParser::External_access_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHadr_options(tsqlParser::Hadr_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMixed_page_allocation_option(tsqlParser::Mixed_page_allocation_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterization_option(tsqlParser::Parameterization_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecovery_option(tsqlParser::Recovery_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitService_broker_option(tsqlParser::Service_broker_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSnapshot_option(tsqlParser::Snapshot_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_option(tsqlParser::Sql_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_recovery_time_option(tsqlParser::Target_recovery_time_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermination(tsqlParser::TerminationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_index(tsqlParser::Drop_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_procedure(tsqlParser::Drop_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_statistics(tsqlParser::Drop_statisticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_table(tsqlParser::Drop_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_database(tsqlParser::Drop_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_synonym(tsqlParser::Drop_synonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_view(tsqlParser::Drop_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_schema(tsqlParser::Drop_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_function(tsqlParser::Drop_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_type(tsqlParser::Create_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_type(tsqlParser::Drop_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowset_function_limited(tsqlParser::Rowset_function_limitedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpenquery(tsqlParser::OpenqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpendatasource(tsqlParser::OpendatasourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_statement(tsqlParser::Declare_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_statement(tsqlParser::Cursor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_statement(tsqlParser::Execute_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_statement_arg(tsqlParser::Execute_statement_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_var_string(tsqlParser::Execute_var_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSecurity_statement(tsqlParser::Security_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_permission(tsqlParser::Grant_permissionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_statement(tsqlParser::Set_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransaction_statement(tsqlParser::Transaction_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGo_statement(tsqlParser::Go_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUse_statement(tsqlParser::Use_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_clause(tsqlParser::Execute_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_local(tsqlParser::Declare_localContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_type_definition(tsqlParser::Table_type_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_def_table_constraints(tsqlParser::Column_def_table_constraintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_def_table_constraint(tsqlParser::Column_def_table_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_definition(tsqlParser::Column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_constraint(tsqlParser::Column_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_constraint(tsqlParser::Table_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_options(tsqlParser::Index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_option(tsqlParser::Index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_cursor(tsqlParser::Declare_cursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_set_cursor_common(tsqlParser::Declare_set_cursor_commonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFetch_cursor(tsqlParser::Fetch_cursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_special(tsqlParser::Set_specialContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant_LOCAL_ID(tsqlParser::Constant_LOCAL_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_operator_expression(tsqlParser::Binary_operator_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary_operator_expression(tsqlParser::Unary_operator_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call_expression(tsqlParser::Function_call_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConversion_expression(tsqlParser::Conversion_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_expression(tsqlParser::Case_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_ref_expression(tsqlParser::Column_ref_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_agg_expression(tsqlParser::String_agg_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPercentile_cont_expression(tsqlParser::Percentile_cont_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitive_expression(tsqlParser::Primitive_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracket_expression(tsqlParser::Bracket_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubquery_expression(tsqlParser::Subquery_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOver_clause_expression(tsqlParser::Over_clause_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_method_expression(tsqlParser::Xml_method_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_method_call(tsqlParser::Xml_method_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_xml_method_name(tsqlParser::Simple_xml_method_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant_expression(tsqlParser::Constant_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubquery(tsqlParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_expression(tsqlParser::With_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommon_table_expression(tsqlParser::Common_table_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_elem(tsqlParser::Update_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearch_condition_list(tsqlParser::Search_condition_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearch_cond_or(tsqlParser::Search_cond_orContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearch_cond_pred(tsqlParser::Search_cond_predContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearch_cond_and(tsqlParser::Search_cond_andContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary_operator_expression3(tsqlParser::Unary_operator_expression3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary_operator_expression2(tsqlParser::Unary_operator_expression2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_operator_expression2(tsqlParser::Binary_operator_expression2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSublink_expression(tsqlParser::Sublink_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_mod_expression(tsqlParser::Binary_mod_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_in_expression(tsqlParser::Binary_in_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_operator_expression3(tsqlParser::Binary_operator_expression3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracket_search_expression(tsqlParser::Bracket_search_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecimal_expression(tsqlParser::Decimal_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracket_query_expression(tsqlParser::Bracket_query_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_specification_expression(tsqlParser::Query_specification_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnion_query_expression(tsqlParser::Union_query_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnion_op(tsqlParser::Union_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCross_apply_expression(tsqlParser::Cross_apply_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_specification(tsqlParser::Query_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_by_grouping_sets(tsqlParser::Group_by_grouping_setsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrouping_set(tsqlParser::Grouping_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTop_clause(tsqlParser::Top_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTop_clause_dm(tsqlParser::Top_clause_dmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrder_by_clause(tsqlParser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFetch_expression(tsqlParser::Fetch_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_clause(tsqlParser::For_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_common_directives(tsqlParser::Xml_common_directivesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrder_by_expression(tsqlParser::Order_by_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_by_item(tsqlParser::Group_by_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption_clause(tsqlParser::Option_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption(tsqlParser::OptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptimize_for_arg(tsqlParser::Optimize_for_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_list(tsqlParser::Select_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_list_elem(tsqlParser::Select_list_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_sources(tsqlParser::Table_sourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCross_join(tsqlParser::Cross_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_source_item_join(tsqlParser::Table_source_item_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStandard_join(tsqlParser::Standard_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitApply_join(tsqlParser::Apply_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracket_table_source(tsqlParser::Bracket_table_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_source_item_name(tsqlParser::Table_source_item_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_source_item_simple(tsqlParser::Table_source_item_simpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_source_item_complex(tsqlParser::Table_source_item_complexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablesample_clause(tsqlParser::Tablesample_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSample_number(tsqlParser::Sample_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeat_seed(tsqlParser::Repeat_seedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_alias(tsqlParser::Table_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChange_table(tsqlParser::Change_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoin_type(tsqlParser::Join_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_name_with_hint(tsqlParser::Table_name_with_hintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowset_function(tsqlParser::Rowset_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBulk_option(tsqlParser::Bulk_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDerived_table(tsqlParser::Derived_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRank_call(tsqlParser::Rank_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregate_call(tsqlParser::Aggregate_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStandard_call(tsqlParser::Standard_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNvf_call(tsqlParser::Nvf_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast_call(tsqlParser::Cast_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_call(tsqlParser::Simple_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_call(tsqlParser::Expression_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_section(tsqlParser::Switch_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_search_condition_section(tsqlParser::Switch_search_condition_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_table_hints(tsqlParser::With_table_hintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_with_table_hints(tsqlParser::Insert_with_table_hintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_hint(tsqlParser::Table_hintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_value(tsqlParser::Index_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_alias_list(tsqlParser::Column_alias_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_alias(tsqlParser::Column_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_star(tsqlParser::A_starContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_value_constructor(tsqlParser::Table_value_constructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_list(tsqlParser::Expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue_list(tsqlParser::Value_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNext_value_for(tsqlParser::Next_value_forContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNext_value_for_function(tsqlParser::Next_value_for_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRanking_windowed_function(tsqlParser::Ranking_windowed_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregate_windowed_function(tsqlParser::Aggregate_windowed_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAll_distinct(tsqlParser::All_distinctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOver_clause(tsqlParser::Over_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_or_range_clause(tsqlParser::Row_or_range_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_extent(tsqlParser::Window_frame_extentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_bound(tsqlParser::Window_frame_boundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_preceding(tsqlParser::Window_frame_precedingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_following(tsqlParser::Window_frame_followingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_database_option(tsqlParser::Create_database_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatabase_filestream_option(tsqlParser::Database_filestream_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatabase_file_spec(tsqlParser::Database_file_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_group(tsqlParser::File_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_spec(tsqlParser::File_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFull_table_name(tsqlParser::Full_table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_name(tsqlParser::Simple_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_proc_name(tsqlParser::Func_proc_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDdl_object(tsqlParser::Ddl_objectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFull_column_name(tsqlParser::Full_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_name_list(tsqlParser::Column_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_name(tsqlParser::Cursor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOn_off(tsqlParser::On_offContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClustered(tsqlParser::ClusteredContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNull_notnull(tsqlParser::Null_notnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScalar_function_name(tsqlParser::Scalar_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_value(tsqlParser::Default_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(tsqlParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSign(tsqlParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitR_id(tsqlParser::R_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_id(tsqlParser::Simple_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison_operator(tsqlParser::Comparison_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_operator(tsqlParser::Assignment_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_size(tsqlParser::File_sizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_or_alter_procedure(tsqlParser::Create_or_alter_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_or_alter_function(tsqlParser::Create_or_alter_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_body_returns_select(tsqlParser::Func_body_returns_selectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_body_returns_table(tsqlParser::Func_body_returns_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_body_returns_scalar(tsqlParser::Func_body_returns_scalarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure_param(tsqlParser::Procedure_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure_option(tsqlParser::Procedure_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_option(tsqlParser::Function_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPercentile_cont(tsqlParser::Percentile_contContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_agg(tsqlParser::String_aggContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type(tsqlParser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }


};

