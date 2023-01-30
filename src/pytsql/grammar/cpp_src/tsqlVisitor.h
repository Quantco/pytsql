
// Generated from tsql.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "tsqlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by tsqlParser.
 */
class  tsqlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by tsqlParser.
   */
    virtual std::any visitTsql_file(tsqlParser::Tsql_fileContext *context) = 0;

    virtual std::any visitBatch(tsqlParser::BatchContext *context) = 0;

    virtual std::any visitSql_clauses(tsqlParser::Sql_clausesContext *context) = 0;

    virtual std::any visitSql_clause(tsqlParser::Sql_clauseContext *context) = 0;

    virtual std::any visitDml_clause(tsqlParser::Dml_clauseContext *context) = 0;

    virtual std::any visitDdl_clause(tsqlParser::Ddl_clauseContext *context) = 0;

    virtual std::any visitCfl_statement(tsqlParser::Cfl_statementContext *context) = 0;

    virtual std::any visitCfl_clause(tsqlParser::Cfl_clauseContext *context) = 0;

    virtual std::any visitBlock_statement(tsqlParser::Block_statementContext *context) = 0;

    virtual std::any visitBreak_statement(tsqlParser::Break_statementContext *context) = 0;

    virtual std::any visitContinue_statement(tsqlParser::Continue_statementContext *context) = 0;

    virtual std::any visitGoto_statement(tsqlParser::Goto_statementContext *context) = 0;

    virtual std::any visitIf_statement(tsqlParser::If_statementContext *context) = 0;

    virtual std::any visitIf_block(tsqlParser::If_blockContext *context) = 0;

    virtual std::any visitReturn_statement(tsqlParser::Return_statementContext *context) = 0;

    virtual std::any visitThrow_statement(tsqlParser::Throw_statementContext *context) = 0;

    virtual std::any visitTry_catch_statement(tsqlParser::Try_catch_statementContext *context) = 0;

    virtual std::any visitWaitfor_statement(tsqlParser::Waitfor_statementContext *context) = 0;

    virtual std::any visitWhile_statement(tsqlParser::While_statementContext *context) = 0;

    virtual std::any visitPrint_statement(tsqlParser::Print_statementContext *context) = 0;

    virtual std::any visitRaiseerror_statement(tsqlParser::Raiseerror_statementContext *context) = 0;

    virtual std::any visitAnother_statement(tsqlParser::Another_statementContext *context) = 0;

    virtual std::any visitDelete_statement(tsqlParser::Delete_statementContext *context) = 0;

    virtual std::any visitDelete_statement_from(tsqlParser::Delete_statement_fromContext *context) = 0;

    virtual std::any visitInsert_statement(tsqlParser::Insert_statementContext *context) = 0;

    virtual std::any visitInsert_statement_value(tsqlParser::Insert_statement_valueContext *context) = 0;

    virtual std::any visitSelect_statement(tsqlParser::Select_statementContext *context) = 0;

    virtual std::any visitUpdate_statement(tsqlParser::Update_statementContext *context) = 0;

    virtual std::any visitWhere_clause_dml(tsqlParser::Where_clause_dmlContext *context) = 0;

    virtual std::any visitOutput_clause(tsqlParser::Output_clauseContext *context) = 0;

    virtual std::any visitOutput_dml_list_elem(tsqlParser::Output_dml_list_elemContext *context) = 0;

    virtual std::any visitOutput_column_name(tsqlParser::Output_column_nameContext *context) = 0;

    virtual std::any visitCreate_database(tsqlParser::Create_databaseContext *context) = 0;

    virtual std::any visitCreate_index(tsqlParser::Create_indexContext *context) = 0;

    virtual std::any visitCreate_statistics(tsqlParser::Create_statisticsContext *context) = 0;

    virtual std::any visitCreate_table(tsqlParser::Create_tableContext *context) = 0;

    virtual std::any visitCreate_schema(tsqlParser::Create_schemaContext *context) = 0;

    virtual std::any visitCreate_synonym(tsqlParser::Create_synonymContext *context) = 0;

    virtual std::any visitCreate_view(tsqlParser::Create_viewContext *context) = 0;

    virtual std::any visitView_attribute(tsqlParser::View_attributeContext *context) = 0;

    virtual std::any visitAlter_table(tsqlParser::Alter_tableContext *context) = 0;

    virtual std::any visitAlter_database(tsqlParser::Alter_databaseContext *context) = 0;

    virtual std::any visitDatabase_optionspec(tsqlParser::Database_optionspecContext *context) = 0;

    virtual std::any visitAuto_option(tsqlParser::Auto_optionContext *context) = 0;

    virtual std::any visitChange_tracking_option(tsqlParser::Change_tracking_optionContext *context) = 0;

    virtual std::any visitChange_tracking_option_list(tsqlParser::Change_tracking_option_listContext *context) = 0;

    virtual std::any visitContainment_option(tsqlParser::Containment_optionContext *context) = 0;

    virtual std::any visitCursor_option(tsqlParser::Cursor_optionContext *context) = 0;

    virtual std::any visitDate_correlation_optimization_option(tsqlParser::Date_correlation_optimization_optionContext *context) = 0;

    virtual std::any visitDb_encryption_option(tsqlParser::Db_encryption_optionContext *context) = 0;

    virtual std::any visitDb_state_option(tsqlParser::Db_state_optionContext *context) = 0;

    virtual std::any visitDb_update_option(tsqlParser::Db_update_optionContext *context) = 0;

    virtual std::any visitDb_user_access_option(tsqlParser::Db_user_access_optionContext *context) = 0;

    virtual std::any visitDelayed_durability_option(tsqlParser::Delayed_durability_optionContext *context) = 0;

    virtual std::any visitExternal_access_option(tsqlParser::External_access_optionContext *context) = 0;

    virtual std::any visitHadr_options(tsqlParser::Hadr_optionsContext *context) = 0;

    virtual std::any visitMixed_page_allocation_option(tsqlParser::Mixed_page_allocation_optionContext *context) = 0;

    virtual std::any visitParameterization_option(tsqlParser::Parameterization_optionContext *context) = 0;

    virtual std::any visitRecovery_option(tsqlParser::Recovery_optionContext *context) = 0;

    virtual std::any visitService_broker_option(tsqlParser::Service_broker_optionContext *context) = 0;

    virtual std::any visitSnapshot_option(tsqlParser::Snapshot_optionContext *context) = 0;

    virtual std::any visitSql_option(tsqlParser::Sql_optionContext *context) = 0;

    virtual std::any visitTarget_recovery_time_option(tsqlParser::Target_recovery_time_optionContext *context) = 0;

    virtual std::any visitTermination(tsqlParser::TerminationContext *context) = 0;

    virtual std::any visitDrop_index(tsqlParser::Drop_indexContext *context) = 0;

    virtual std::any visitDrop_procedure(tsqlParser::Drop_procedureContext *context) = 0;

    virtual std::any visitDrop_statistics(tsqlParser::Drop_statisticsContext *context) = 0;

    virtual std::any visitDrop_table(tsqlParser::Drop_tableContext *context) = 0;

    virtual std::any visitDrop_database(tsqlParser::Drop_databaseContext *context) = 0;

    virtual std::any visitDrop_synonym(tsqlParser::Drop_synonymContext *context) = 0;

    virtual std::any visitDrop_view(tsqlParser::Drop_viewContext *context) = 0;

    virtual std::any visitDrop_schema(tsqlParser::Drop_schemaContext *context) = 0;

    virtual std::any visitDrop_function(tsqlParser::Drop_functionContext *context) = 0;

    virtual std::any visitCreate_type(tsqlParser::Create_typeContext *context) = 0;

    virtual std::any visitDrop_type(tsqlParser::Drop_typeContext *context) = 0;

    virtual std::any visitRowset_function_limited(tsqlParser::Rowset_function_limitedContext *context) = 0;

    virtual std::any visitOpenquery(tsqlParser::OpenqueryContext *context) = 0;

    virtual std::any visitOpendatasource(tsqlParser::OpendatasourceContext *context) = 0;

    virtual std::any visitDeclare_statement(tsqlParser::Declare_statementContext *context) = 0;

    virtual std::any visitCursor_statement(tsqlParser::Cursor_statementContext *context) = 0;

    virtual std::any visitExecute_statement(tsqlParser::Execute_statementContext *context) = 0;

    virtual std::any visitExecute_statement_arg(tsqlParser::Execute_statement_argContext *context) = 0;

    virtual std::any visitExecute_var_string(tsqlParser::Execute_var_stringContext *context) = 0;

    virtual std::any visitSecurity_statement(tsqlParser::Security_statementContext *context) = 0;

    virtual std::any visitGrant_permission(tsqlParser::Grant_permissionContext *context) = 0;

    virtual std::any visitSet_statement(tsqlParser::Set_statementContext *context) = 0;

    virtual std::any visitTransaction_statement(tsqlParser::Transaction_statementContext *context) = 0;

    virtual std::any visitGo_statement(tsqlParser::Go_statementContext *context) = 0;

    virtual std::any visitUse_statement(tsqlParser::Use_statementContext *context) = 0;

    virtual std::any visitExecute_clause(tsqlParser::Execute_clauseContext *context) = 0;

    virtual std::any visitDeclare_local(tsqlParser::Declare_localContext *context) = 0;

    virtual std::any visitTable_type_definition(tsqlParser::Table_type_definitionContext *context) = 0;

    virtual std::any visitColumn_def_table_constraints(tsqlParser::Column_def_table_constraintsContext *context) = 0;

    virtual std::any visitColumn_def_table_constraint(tsqlParser::Column_def_table_constraintContext *context) = 0;

    virtual std::any visitColumn_definition(tsqlParser::Column_definitionContext *context) = 0;

    virtual std::any visitColumn_constraint(tsqlParser::Column_constraintContext *context) = 0;

    virtual std::any visitTable_constraint(tsqlParser::Table_constraintContext *context) = 0;

    virtual std::any visitIndex_options(tsqlParser::Index_optionsContext *context) = 0;

    virtual std::any visitIndex_option(tsqlParser::Index_optionContext *context) = 0;

    virtual std::any visitDeclare_cursor(tsqlParser::Declare_cursorContext *context) = 0;

    virtual std::any visitDeclare_set_cursor_common(tsqlParser::Declare_set_cursor_commonContext *context) = 0;

    virtual std::any visitFetch_cursor(tsqlParser::Fetch_cursorContext *context) = 0;

    virtual std::any visitSet_special(tsqlParser::Set_specialContext *context) = 0;

    virtual std::any visitConstant_LOCAL_ID(tsqlParser::Constant_LOCAL_IDContext *context) = 0;

    virtual std::any visitBinary_operator_expression(tsqlParser::Binary_operator_expressionContext *context) = 0;

    virtual std::any visitUnary_operator_expression(tsqlParser::Unary_operator_expressionContext *context) = 0;

    virtual std::any visitFunction_call_expression(tsqlParser::Function_call_expressionContext *context) = 0;

    virtual std::any visitConversion_expression(tsqlParser::Conversion_expressionContext *context) = 0;

    virtual std::any visitCase_expression(tsqlParser::Case_expressionContext *context) = 0;

    virtual std::any visitColumn_ref_expression(tsqlParser::Column_ref_expressionContext *context) = 0;

    virtual std::any visitString_agg_expression(tsqlParser::String_agg_expressionContext *context) = 0;

    virtual std::any visitPercentile_cont_expression(tsqlParser::Percentile_cont_expressionContext *context) = 0;

    virtual std::any visitPrimitive_expression(tsqlParser::Primitive_expressionContext *context) = 0;

    virtual std::any visitBracket_expression(tsqlParser::Bracket_expressionContext *context) = 0;

    virtual std::any visitSubquery_expression(tsqlParser::Subquery_expressionContext *context) = 0;

    virtual std::any visitOver_clause_expression(tsqlParser::Over_clause_expressionContext *context) = 0;

    virtual std::any visitXml_method_expression(tsqlParser::Xml_method_expressionContext *context) = 0;

    virtual std::any visitXml_method_call(tsqlParser::Xml_method_callContext *context) = 0;

    virtual std::any visitSimple_xml_method_name(tsqlParser::Simple_xml_method_nameContext *context) = 0;

    virtual std::any visitConstant_expression(tsqlParser::Constant_expressionContext *context) = 0;

    virtual std::any visitSubquery(tsqlParser::SubqueryContext *context) = 0;

    virtual std::any visitWith_expression(tsqlParser::With_expressionContext *context) = 0;

    virtual std::any visitCommon_table_expression(tsqlParser::Common_table_expressionContext *context) = 0;

    virtual std::any visitUpdate_elem(tsqlParser::Update_elemContext *context) = 0;

    virtual std::any visitSearch_condition_list(tsqlParser::Search_condition_listContext *context) = 0;

    virtual std::any visitSearch_cond_or(tsqlParser::Search_cond_orContext *context) = 0;

    virtual std::any visitSearch_cond_pred(tsqlParser::Search_cond_predContext *context) = 0;

    virtual std::any visitSearch_cond_and(tsqlParser::Search_cond_andContext *context) = 0;

    virtual std::any visitUnary_operator_expression3(tsqlParser::Unary_operator_expression3Context *context) = 0;

    virtual std::any visitUnary_operator_expression2(tsqlParser::Unary_operator_expression2Context *context) = 0;

    virtual std::any visitBinary_operator_expression2(tsqlParser::Binary_operator_expression2Context *context) = 0;

    virtual std::any visitSublink_expression(tsqlParser::Sublink_expressionContext *context) = 0;

    virtual std::any visitBinary_mod_expression(tsqlParser::Binary_mod_expressionContext *context) = 0;

    virtual std::any visitBinary_in_expression(tsqlParser::Binary_in_expressionContext *context) = 0;

    virtual std::any visitBinary_operator_expression3(tsqlParser::Binary_operator_expression3Context *context) = 0;

    virtual std::any visitBracket_search_expression(tsqlParser::Bracket_search_expressionContext *context) = 0;

    virtual std::any visitDecimal_expression(tsqlParser::Decimal_expressionContext *context) = 0;

    virtual std::any visitBracket_query_expression(tsqlParser::Bracket_query_expressionContext *context) = 0;

    virtual std::any visitQuery_specification_expression(tsqlParser::Query_specification_expressionContext *context) = 0;

    virtual std::any visitUnion_query_expression(tsqlParser::Union_query_expressionContext *context) = 0;

    virtual std::any visitUnion_op(tsqlParser::Union_opContext *context) = 0;

    virtual std::any visitCross_apply_expression(tsqlParser::Cross_apply_expressionContext *context) = 0;

    virtual std::any visitQuery_specification(tsqlParser::Query_specificationContext *context) = 0;

    virtual std::any visitGroup_by_grouping_sets(tsqlParser::Group_by_grouping_setsContext *context) = 0;

    virtual std::any visitGrouping_set(tsqlParser::Grouping_setContext *context) = 0;

    virtual std::any visitTop_clause(tsqlParser::Top_clauseContext *context) = 0;

    virtual std::any visitTop_clause_dm(tsqlParser::Top_clause_dmContext *context) = 0;

    virtual std::any visitOrder_by_clause(tsqlParser::Order_by_clauseContext *context) = 0;

    virtual std::any visitFetch_expression(tsqlParser::Fetch_expressionContext *context) = 0;

    virtual std::any visitFor_clause(tsqlParser::For_clauseContext *context) = 0;

    virtual std::any visitXml_common_directives(tsqlParser::Xml_common_directivesContext *context) = 0;

    virtual std::any visitOrder_by_expression(tsqlParser::Order_by_expressionContext *context) = 0;

    virtual std::any visitGroup_by_item(tsqlParser::Group_by_itemContext *context) = 0;

    virtual std::any visitOption_clause(tsqlParser::Option_clauseContext *context) = 0;

    virtual std::any visitOption(tsqlParser::OptionContext *context) = 0;

    virtual std::any visitOptimize_for_arg(tsqlParser::Optimize_for_argContext *context) = 0;

    virtual std::any visitSelect_list(tsqlParser::Select_listContext *context) = 0;

    virtual std::any visitSelect_list_elem(tsqlParser::Select_list_elemContext *context) = 0;

    virtual std::any visitTable_sources(tsqlParser::Table_sourcesContext *context) = 0;

    virtual std::any visitCross_join(tsqlParser::Cross_joinContext *context) = 0;

    virtual std::any visitTable_source_item_join(tsqlParser::Table_source_item_joinContext *context) = 0;

    virtual std::any visitStandard_join(tsqlParser::Standard_joinContext *context) = 0;

    virtual std::any visitApply_join(tsqlParser::Apply_joinContext *context) = 0;

    virtual std::any visitBracket_table_source(tsqlParser::Bracket_table_sourceContext *context) = 0;

    virtual std::any visitTable_source_item_name(tsqlParser::Table_source_item_nameContext *context) = 0;

    virtual std::any visitTable_source_item_simple(tsqlParser::Table_source_item_simpleContext *context) = 0;

    virtual std::any visitTable_source_item_complex(tsqlParser::Table_source_item_complexContext *context) = 0;

    virtual std::any visitTablesample_clause(tsqlParser::Tablesample_clauseContext *context) = 0;

    virtual std::any visitSample_number(tsqlParser::Sample_numberContext *context) = 0;

    virtual std::any visitRepeat_seed(tsqlParser::Repeat_seedContext *context) = 0;

    virtual std::any visitTable_alias(tsqlParser::Table_aliasContext *context) = 0;

    virtual std::any visitChange_table(tsqlParser::Change_tableContext *context) = 0;

    virtual std::any visitJoin_type(tsqlParser::Join_typeContext *context) = 0;

    virtual std::any visitTable_name_with_hint(tsqlParser::Table_name_with_hintContext *context) = 0;

    virtual std::any visitRowset_function(tsqlParser::Rowset_functionContext *context) = 0;

    virtual std::any visitBulk_option(tsqlParser::Bulk_optionContext *context) = 0;

    virtual std::any visitDerived_table(tsqlParser::Derived_tableContext *context) = 0;

    virtual std::any visitRank_call(tsqlParser::Rank_callContext *context) = 0;

    virtual std::any visitAggregate_call(tsqlParser::Aggregate_callContext *context) = 0;

    virtual std::any visitStandard_call(tsqlParser::Standard_callContext *context) = 0;

    virtual std::any visitNvf_call(tsqlParser::Nvf_callContext *context) = 0;

    virtual std::any visitCast_call(tsqlParser::Cast_callContext *context) = 0;

    virtual std::any visitSimple_call(tsqlParser::Simple_callContext *context) = 0;

    virtual std::any visitExpression_call(tsqlParser::Expression_callContext *context) = 0;

    virtual std::any visitSwitch_section(tsqlParser::Switch_sectionContext *context) = 0;

    virtual std::any visitSwitch_search_condition_section(tsqlParser::Switch_search_condition_sectionContext *context) = 0;

    virtual std::any visitWith_table_hints(tsqlParser::With_table_hintsContext *context) = 0;

    virtual std::any visitInsert_with_table_hints(tsqlParser::Insert_with_table_hintsContext *context) = 0;

    virtual std::any visitTable_hint(tsqlParser::Table_hintContext *context) = 0;

    virtual std::any visitIndex_value(tsqlParser::Index_valueContext *context) = 0;

    virtual std::any visitColumn_alias_list(tsqlParser::Column_alias_listContext *context) = 0;

    virtual std::any visitColumn_alias(tsqlParser::Column_aliasContext *context) = 0;

    virtual std::any visitA_star(tsqlParser::A_starContext *context) = 0;

    virtual std::any visitTable_value_constructor(tsqlParser::Table_value_constructorContext *context) = 0;

    virtual std::any visitExpression_list(tsqlParser::Expression_listContext *context) = 0;

    virtual std::any visitValue_list(tsqlParser::Value_listContext *context) = 0;

    virtual std::any visitNext_value_for(tsqlParser::Next_value_forContext *context) = 0;

    virtual std::any visitNext_value_for_function(tsqlParser::Next_value_for_functionContext *context) = 0;

    virtual std::any visitRanking_windowed_function(tsqlParser::Ranking_windowed_functionContext *context) = 0;

    virtual std::any visitAggregate_windowed_function(tsqlParser::Aggregate_windowed_functionContext *context) = 0;

    virtual std::any visitAll_distinct(tsqlParser::All_distinctContext *context) = 0;

    virtual std::any visitOver_clause(tsqlParser::Over_clauseContext *context) = 0;

    virtual std::any visitRow_or_range_clause(tsqlParser::Row_or_range_clauseContext *context) = 0;

    virtual std::any visitWindow_frame_extent(tsqlParser::Window_frame_extentContext *context) = 0;

    virtual std::any visitWindow_frame_bound(tsqlParser::Window_frame_boundContext *context) = 0;

    virtual std::any visitWindow_frame_preceding(tsqlParser::Window_frame_precedingContext *context) = 0;

    virtual std::any visitWindow_frame_following(tsqlParser::Window_frame_followingContext *context) = 0;

    virtual std::any visitCreate_database_option(tsqlParser::Create_database_optionContext *context) = 0;

    virtual std::any visitDatabase_filestream_option(tsqlParser::Database_filestream_optionContext *context) = 0;

    virtual std::any visitDatabase_file_spec(tsqlParser::Database_file_specContext *context) = 0;

    virtual std::any visitFile_group(tsqlParser::File_groupContext *context) = 0;

    virtual std::any visitFile_spec(tsqlParser::File_specContext *context) = 0;

    virtual std::any visitFull_table_name(tsqlParser::Full_table_nameContext *context) = 0;

    virtual std::any visitSimple_name(tsqlParser::Simple_nameContext *context) = 0;

    virtual std::any visitFunc_proc_name(tsqlParser::Func_proc_nameContext *context) = 0;

    virtual std::any visitDdl_object(tsqlParser::Ddl_objectContext *context) = 0;

    virtual std::any visitFull_column_name(tsqlParser::Full_column_nameContext *context) = 0;

    virtual std::any visitColumn_name_list(tsqlParser::Column_name_listContext *context) = 0;

    virtual std::any visitCursor_name(tsqlParser::Cursor_nameContext *context) = 0;

    virtual std::any visitOn_off(tsqlParser::On_offContext *context) = 0;

    virtual std::any visitClustered(tsqlParser::ClusteredContext *context) = 0;

    virtual std::any visitNull_notnull(tsqlParser::Null_notnullContext *context) = 0;

    virtual std::any visitScalar_function_name(tsqlParser::Scalar_function_nameContext *context) = 0;

    virtual std::any visitDefault_value(tsqlParser::Default_valueContext *context) = 0;

    virtual std::any visitConstant(tsqlParser::ConstantContext *context) = 0;

    virtual std::any visitSign(tsqlParser::SignContext *context) = 0;

    virtual std::any visitR_id(tsqlParser::R_idContext *context) = 0;

    virtual std::any visitSimple_id(tsqlParser::Simple_idContext *context) = 0;

    virtual std::any visitComparison_operator(tsqlParser::Comparison_operatorContext *context) = 0;

    virtual std::any visitAssignment_operator(tsqlParser::Assignment_operatorContext *context) = 0;

    virtual std::any visitFile_size(tsqlParser::File_sizeContext *context) = 0;

    virtual std::any visitCreate_or_alter_procedure(tsqlParser::Create_or_alter_procedureContext *context) = 0;

    virtual std::any visitCreate_or_alter_function(tsqlParser::Create_or_alter_functionContext *context) = 0;

    virtual std::any visitFunc_body_returns_select(tsqlParser::Func_body_returns_selectContext *context) = 0;

    virtual std::any visitFunc_body_returns_table(tsqlParser::Func_body_returns_tableContext *context) = 0;

    virtual std::any visitFunc_body_returns_scalar(tsqlParser::Func_body_returns_scalarContext *context) = 0;

    virtual std::any visitProcedure_param(tsqlParser::Procedure_paramContext *context) = 0;

    virtual std::any visitProcedure_option(tsqlParser::Procedure_optionContext *context) = 0;

    virtual std::any visitFunction_option(tsqlParser::Function_optionContext *context) = 0;

    virtual std::any visitPercentile_cont(tsqlParser::Percentile_contContext *context) = 0;

    virtual std::any visitString_agg(tsqlParser::String_aggContext *context) = 0;

    virtual std::any visitData_type(tsqlParser::Data_typeContext *context) = 0;


};

