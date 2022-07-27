
// Generated from tsql.g4 by ANTLR 4.9.2

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
    virtual antlrcpp::Any visitTsql_file(tsqlParser::Tsql_fileContext *context) = 0;

    virtual antlrcpp::Any visitBatch(tsqlParser::BatchContext *context) = 0;

    virtual antlrcpp::Any visitSql_clauses(tsqlParser::Sql_clausesContext *context) = 0;

    virtual antlrcpp::Any visitSql_clause(tsqlParser::Sql_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDml_clause(tsqlParser::Dml_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDdl_clause(tsqlParser::Ddl_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCfl_statement(tsqlParser::Cfl_statementContext *context) = 0;

    virtual antlrcpp::Any visitCfl_clause(tsqlParser::Cfl_clauseContext *context) = 0;

    virtual antlrcpp::Any visitBlock_statement(tsqlParser::Block_statementContext *context) = 0;

    virtual antlrcpp::Any visitBreak_statement(tsqlParser::Break_statementContext *context) = 0;

    virtual antlrcpp::Any visitContinue_statement(tsqlParser::Continue_statementContext *context) = 0;

    virtual antlrcpp::Any visitGoto_statement(tsqlParser::Goto_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(tsqlParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_block(tsqlParser::If_blockContext *context) = 0;

    virtual antlrcpp::Any visitReturn_statement(tsqlParser::Return_statementContext *context) = 0;

    virtual antlrcpp::Any visitThrow_statement(tsqlParser::Throw_statementContext *context) = 0;

    virtual antlrcpp::Any visitTry_catch_statement(tsqlParser::Try_catch_statementContext *context) = 0;

    virtual antlrcpp::Any visitWaitfor_statement(tsqlParser::Waitfor_statementContext *context) = 0;

    virtual antlrcpp::Any visitWhile_statement(tsqlParser::While_statementContext *context) = 0;

    virtual antlrcpp::Any visitPrint_statement(tsqlParser::Print_statementContext *context) = 0;

    virtual antlrcpp::Any visitRaiseerror_statement(tsqlParser::Raiseerror_statementContext *context) = 0;

    virtual antlrcpp::Any visitAnother_statement(tsqlParser::Another_statementContext *context) = 0;

    virtual antlrcpp::Any visitDelete_statement(tsqlParser::Delete_statementContext *context) = 0;

    virtual antlrcpp::Any visitDelete_statement_from(tsqlParser::Delete_statement_fromContext *context) = 0;

    virtual antlrcpp::Any visitInsert_statement(tsqlParser::Insert_statementContext *context) = 0;

    virtual antlrcpp::Any visitInsert_statement_value(tsqlParser::Insert_statement_valueContext *context) = 0;

    virtual antlrcpp::Any visitSelect_statement(tsqlParser::Select_statementContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_statement(tsqlParser::Update_statementContext *context) = 0;

    virtual antlrcpp::Any visitWhere_clause_dml(tsqlParser::Where_clause_dmlContext *context) = 0;

    virtual antlrcpp::Any visitOutput_clause(tsqlParser::Output_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOutput_dml_list_elem(tsqlParser::Output_dml_list_elemContext *context) = 0;

    virtual antlrcpp::Any visitOutput_column_name(tsqlParser::Output_column_nameContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database(tsqlParser::Create_databaseContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index(tsqlParser::Create_indexContext *context) = 0;

    virtual antlrcpp::Any visitCreate_statistics(tsqlParser::Create_statisticsContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table(tsqlParser::Create_tableContext *context) = 0;

    virtual antlrcpp::Any visitCreate_schema(tsqlParser::Create_schemaContext *context) = 0;

    virtual antlrcpp::Any visitCreate_synonym(tsqlParser::Create_synonymContext *context) = 0;

    virtual antlrcpp::Any visitCreate_view(tsqlParser::Create_viewContext *context) = 0;

    virtual antlrcpp::Any visitView_attribute(tsqlParser::View_attributeContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table(tsqlParser::Alter_tableContext *context) = 0;

    virtual antlrcpp::Any visitAlter_database(tsqlParser::Alter_databaseContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_optionspec(tsqlParser::Database_optionspecContext *context) = 0;

    virtual antlrcpp::Any visitAuto_option(tsqlParser::Auto_optionContext *context) = 0;

    virtual antlrcpp::Any visitChange_tracking_option(tsqlParser::Change_tracking_optionContext *context) = 0;

    virtual antlrcpp::Any visitChange_tracking_option_list(tsqlParser::Change_tracking_option_listContext *context) = 0;

    virtual antlrcpp::Any visitContainment_option(tsqlParser::Containment_optionContext *context) = 0;

    virtual antlrcpp::Any visitCursor_option(tsqlParser::Cursor_optionContext *context) = 0;

    virtual antlrcpp::Any visitDate_correlation_optimization_option(tsqlParser::Date_correlation_optimization_optionContext *context) = 0;

    virtual antlrcpp::Any visitDb_encryption_option(tsqlParser::Db_encryption_optionContext *context) = 0;

    virtual antlrcpp::Any visitDb_state_option(tsqlParser::Db_state_optionContext *context) = 0;

    virtual antlrcpp::Any visitDb_update_option(tsqlParser::Db_update_optionContext *context) = 0;

    virtual antlrcpp::Any visitDb_user_access_option(tsqlParser::Db_user_access_optionContext *context) = 0;

    virtual antlrcpp::Any visitDelayed_durability_option(tsqlParser::Delayed_durability_optionContext *context) = 0;

    virtual antlrcpp::Any visitExternal_access_option(tsqlParser::External_access_optionContext *context) = 0;

    virtual antlrcpp::Any visitHadr_options(tsqlParser::Hadr_optionsContext *context) = 0;

    virtual antlrcpp::Any visitMixed_page_allocation_option(tsqlParser::Mixed_page_allocation_optionContext *context) = 0;

    virtual antlrcpp::Any visitParameterization_option(tsqlParser::Parameterization_optionContext *context) = 0;

    virtual antlrcpp::Any visitRecovery_option(tsqlParser::Recovery_optionContext *context) = 0;

    virtual antlrcpp::Any visitService_broker_option(tsqlParser::Service_broker_optionContext *context) = 0;

    virtual antlrcpp::Any visitSnapshot_option(tsqlParser::Snapshot_optionContext *context) = 0;

    virtual antlrcpp::Any visitSql_option(tsqlParser::Sql_optionContext *context) = 0;

    virtual antlrcpp::Any visitTarget_recovery_time_option(tsqlParser::Target_recovery_time_optionContext *context) = 0;

    virtual antlrcpp::Any visitTermination(tsqlParser::TerminationContext *context) = 0;

    virtual antlrcpp::Any visitDrop_index(tsqlParser::Drop_indexContext *context) = 0;

    virtual antlrcpp::Any visitDrop_procedure(tsqlParser::Drop_procedureContext *context) = 0;

    virtual antlrcpp::Any visitDrop_statistics(tsqlParser::Drop_statisticsContext *context) = 0;

    virtual antlrcpp::Any visitDrop_table(tsqlParser::Drop_tableContext *context) = 0;

    virtual antlrcpp::Any visitDrop_database(tsqlParser::Drop_databaseContext *context) = 0;

    virtual antlrcpp::Any visitDrop_synonym(tsqlParser::Drop_synonymContext *context) = 0;

    virtual antlrcpp::Any visitDrop_view(tsqlParser::Drop_viewContext *context) = 0;

    virtual antlrcpp::Any visitDrop_schema(tsqlParser::Drop_schemaContext *context) = 0;

    virtual antlrcpp::Any visitCreate_type(tsqlParser::Create_typeContext *context) = 0;

    virtual antlrcpp::Any visitDrop_type(tsqlParser::Drop_typeContext *context) = 0;

    virtual antlrcpp::Any visitRowset_function_limited(tsqlParser::Rowset_function_limitedContext *context) = 0;

    virtual antlrcpp::Any visitOpenquery(tsqlParser::OpenqueryContext *context) = 0;

    virtual antlrcpp::Any visitOpendatasource(tsqlParser::OpendatasourceContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_statement(tsqlParser::Declare_statementContext *context) = 0;

    virtual antlrcpp::Any visitCursor_statement(tsqlParser::Cursor_statementContext *context) = 0;

    virtual antlrcpp::Any visitExecute_statement(tsqlParser::Execute_statementContext *context) = 0;

    virtual antlrcpp::Any visitExecute_statement_arg(tsqlParser::Execute_statement_argContext *context) = 0;

    virtual antlrcpp::Any visitExecute_var_string(tsqlParser::Execute_var_stringContext *context) = 0;

    virtual antlrcpp::Any visitSecurity_statement(tsqlParser::Security_statementContext *context) = 0;

    virtual antlrcpp::Any visitGrant_permission(tsqlParser::Grant_permissionContext *context) = 0;

    virtual antlrcpp::Any visitSet_statement(tsqlParser::Set_statementContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_statement(tsqlParser::Transaction_statementContext *context) = 0;

    virtual antlrcpp::Any visitGo_statement(tsqlParser::Go_statementContext *context) = 0;

    virtual antlrcpp::Any visitUse_statement(tsqlParser::Use_statementContext *context) = 0;

    virtual antlrcpp::Any visitExecute_clause(tsqlParser::Execute_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_local(tsqlParser::Declare_localContext *context) = 0;

    virtual antlrcpp::Any visitTable_type_definition(tsqlParser::Table_type_definitionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_def_table_constraints(tsqlParser::Column_def_table_constraintsContext *context) = 0;

    virtual antlrcpp::Any visitColumn_def_table_constraint(tsqlParser::Column_def_table_constraintContext *context) = 0;

    virtual antlrcpp::Any visitColumn_definition(tsqlParser::Column_definitionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_constraint(tsqlParser::Column_constraintContext *context) = 0;

    virtual antlrcpp::Any visitTable_constraint(tsqlParser::Table_constraintContext *context) = 0;

    virtual antlrcpp::Any visitIndex_options(tsqlParser::Index_optionsContext *context) = 0;

    virtual antlrcpp::Any visitIndex_option(tsqlParser::Index_optionContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_cursor(tsqlParser::Declare_cursorContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_set_cursor_common(tsqlParser::Declare_set_cursor_commonContext *context) = 0;

    virtual antlrcpp::Any visitFetch_cursor(tsqlParser::Fetch_cursorContext *context) = 0;

    virtual antlrcpp::Any visitSet_special(tsqlParser::Set_specialContext *context) = 0;

    virtual antlrcpp::Any visitConstant_LOCAL_ID(tsqlParser::Constant_LOCAL_IDContext *context) = 0;

    virtual antlrcpp::Any visitBinary_operator_expression(tsqlParser::Binary_operator_expressionContext *context) = 0;

    virtual antlrcpp::Any visitUnary_operator_expression(tsqlParser::Unary_operator_expressionContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call_expression(tsqlParser::Function_call_expressionContext *context) = 0;

    virtual antlrcpp::Any visitConversion_expression(tsqlParser::Conversion_expressionContext *context) = 0;

    virtual antlrcpp::Any visitCase_expression(tsqlParser::Case_expressionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_ref_expression(tsqlParser::Column_ref_expressionContext *context) = 0;

    virtual antlrcpp::Any visitString_agg_expression(tsqlParser::String_agg_expressionContext *context) = 0;

    virtual antlrcpp::Any visitPercentile_cont_expression(tsqlParser::Percentile_cont_expressionContext *context) = 0;

    virtual antlrcpp::Any visitPrimitive_expression(tsqlParser::Primitive_expressionContext *context) = 0;

    virtual antlrcpp::Any visitBracket_expression(tsqlParser::Bracket_expressionContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_expression(tsqlParser::Subquery_expressionContext *context) = 0;

    virtual antlrcpp::Any visitOver_clause_expression(tsqlParser::Over_clause_expressionContext *context) = 0;

    virtual antlrcpp::Any visitXml_method_expression(tsqlParser::Xml_method_expressionContext *context) = 0;

    virtual antlrcpp::Any visitXml_method_call(tsqlParser::Xml_method_callContext *context) = 0;

    virtual antlrcpp::Any visitSimple_xml_method_name(tsqlParser::Simple_xml_method_nameContext *context) = 0;

    virtual antlrcpp::Any visitConstant_expression(tsqlParser::Constant_expressionContext *context) = 0;

    virtual antlrcpp::Any visitSubquery(tsqlParser::SubqueryContext *context) = 0;

    virtual antlrcpp::Any visitWith_expression(tsqlParser::With_expressionContext *context) = 0;

    virtual antlrcpp::Any visitCommon_table_expression(tsqlParser::Common_table_expressionContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_elem(tsqlParser::Update_elemContext *context) = 0;

    virtual antlrcpp::Any visitSearch_condition_list(tsqlParser::Search_condition_listContext *context) = 0;

    virtual antlrcpp::Any visitSearch_cond_or(tsqlParser::Search_cond_orContext *context) = 0;

    virtual antlrcpp::Any visitSearch_cond_pred(tsqlParser::Search_cond_predContext *context) = 0;

    virtual antlrcpp::Any visitSearch_cond_and(tsqlParser::Search_cond_andContext *context) = 0;

    virtual antlrcpp::Any visitUnary_operator_expression3(tsqlParser::Unary_operator_expression3Context *context) = 0;

    virtual antlrcpp::Any visitUnary_operator_expression2(tsqlParser::Unary_operator_expression2Context *context) = 0;

    virtual antlrcpp::Any visitBinary_operator_expression2(tsqlParser::Binary_operator_expression2Context *context) = 0;

    virtual antlrcpp::Any visitSublink_expression(tsqlParser::Sublink_expressionContext *context) = 0;

    virtual antlrcpp::Any visitBinary_mod_expression(tsqlParser::Binary_mod_expressionContext *context) = 0;

    virtual antlrcpp::Any visitBinary_in_expression(tsqlParser::Binary_in_expressionContext *context) = 0;

    virtual antlrcpp::Any visitBinary_operator_expression3(tsqlParser::Binary_operator_expression3Context *context) = 0;

    virtual antlrcpp::Any visitBracket_search_expression(tsqlParser::Bracket_search_expressionContext *context) = 0;

    virtual antlrcpp::Any visitDecimal_expression(tsqlParser::Decimal_expressionContext *context) = 0;

    virtual antlrcpp::Any visitBracket_query_expression(tsqlParser::Bracket_query_expressionContext *context) = 0;

    virtual antlrcpp::Any visitQuery_specification_expression(tsqlParser::Query_specification_expressionContext *context) = 0;

    virtual antlrcpp::Any visitUnion_query_expression(tsqlParser::Union_query_expressionContext *context) = 0;

    virtual antlrcpp::Any visitUnion_op(tsqlParser::Union_opContext *context) = 0;

    virtual antlrcpp::Any visitCross_apply_expression(tsqlParser::Cross_apply_expressionContext *context) = 0;

    virtual antlrcpp::Any visitQuery_specification(tsqlParser::Query_specificationContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_grouping_sets(tsqlParser::Group_by_grouping_setsContext *context) = 0;

    virtual antlrcpp::Any visitGrouping_set(tsqlParser::Grouping_setContext *context) = 0;

    virtual antlrcpp::Any visitTop_clause(tsqlParser::Top_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTop_clause_dm(tsqlParser::Top_clause_dmContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_clause(tsqlParser::Order_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFetch_expression(tsqlParser::Fetch_expressionContext *context) = 0;

    virtual antlrcpp::Any visitFor_clause(tsqlParser::For_clauseContext *context) = 0;

    virtual antlrcpp::Any visitXml_common_directives(tsqlParser::Xml_common_directivesContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_expression(tsqlParser::Order_by_expressionContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_item(tsqlParser::Group_by_itemContext *context) = 0;

    virtual antlrcpp::Any visitOption_clause(tsqlParser::Option_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOption(tsqlParser::OptionContext *context) = 0;

    virtual antlrcpp::Any visitOptimize_for_arg(tsqlParser::Optimize_for_argContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list(tsqlParser::Select_listContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list_elem(tsqlParser::Select_list_elemContext *context) = 0;

    virtual antlrcpp::Any visitTable_sources(tsqlParser::Table_sourcesContext *context) = 0;

    virtual antlrcpp::Any visitCross_join(tsqlParser::Cross_joinContext *context) = 0;

    virtual antlrcpp::Any visitTable_source_item_join(tsqlParser::Table_source_item_joinContext *context) = 0;

    virtual antlrcpp::Any visitStandard_join(tsqlParser::Standard_joinContext *context) = 0;

    virtual antlrcpp::Any visitApply_join(tsqlParser::Apply_joinContext *context) = 0;

    virtual antlrcpp::Any visitBracket_table_source(tsqlParser::Bracket_table_sourceContext *context) = 0;

    virtual antlrcpp::Any visitTable_source_item_name(tsqlParser::Table_source_item_nameContext *context) = 0;

    virtual antlrcpp::Any visitTable_source_item_simple(tsqlParser::Table_source_item_simpleContext *context) = 0;

    virtual antlrcpp::Any visitTable_source_item_complex(tsqlParser::Table_source_item_complexContext *context) = 0;

    virtual antlrcpp::Any visitTablesample_clause(tsqlParser::Tablesample_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSample_number(tsqlParser::Sample_numberContext *context) = 0;

    virtual antlrcpp::Any visitRepeat_seed(tsqlParser::Repeat_seedContext *context) = 0;

    virtual antlrcpp::Any visitTable_alias(tsqlParser::Table_aliasContext *context) = 0;

    virtual antlrcpp::Any visitChange_table(tsqlParser::Change_tableContext *context) = 0;

    virtual antlrcpp::Any visitJoin_type(tsqlParser::Join_typeContext *context) = 0;

    virtual antlrcpp::Any visitTable_name_with_hint(tsqlParser::Table_name_with_hintContext *context) = 0;

    virtual antlrcpp::Any visitRowset_function(tsqlParser::Rowset_functionContext *context) = 0;

    virtual antlrcpp::Any visitBulk_option(tsqlParser::Bulk_optionContext *context) = 0;

    virtual antlrcpp::Any visitDerived_table(tsqlParser::Derived_tableContext *context) = 0;

    virtual antlrcpp::Any visitRank_call(tsqlParser::Rank_callContext *context) = 0;

    virtual antlrcpp::Any visitAggregate_call(tsqlParser::Aggregate_callContext *context) = 0;

    virtual antlrcpp::Any visitStandard_call(tsqlParser::Standard_callContext *context) = 0;

    virtual antlrcpp::Any visitNvf_call(tsqlParser::Nvf_callContext *context) = 0;

    virtual antlrcpp::Any visitCast_call(tsqlParser::Cast_callContext *context) = 0;

    virtual antlrcpp::Any visitSimple_call(tsqlParser::Simple_callContext *context) = 0;

    virtual antlrcpp::Any visitExpression_call(tsqlParser::Expression_callContext *context) = 0;

    virtual antlrcpp::Any visitSwitch_section(tsqlParser::Switch_sectionContext *context) = 0;

    virtual antlrcpp::Any visitSwitch_search_condition_section(tsqlParser::Switch_search_condition_sectionContext *context) = 0;

    virtual antlrcpp::Any visitWith_table_hints(tsqlParser::With_table_hintsContext *context) = 0;

    virtual antlrcpp::Any visitInsert_with_table_hints(tsqlParser::Insert_with_table_hintsContext *context) = 0;

    virtual antlrcpp::Any visitTable_hint(tsqlParser::Table_hintContext *context) = 0;

    virtual antlrcpp::Any visitIndex_value(tsqlParser::Index_valueContext *context) = 0;

    virtual antlrcpp::Any visitColumn_alias_list(tsqlParser::Column_alias_listContext *context) = 0;

    virtual antlrcpp::Any visitColumn_alias(tsqlParser::Column_aliasContext *context) = 0;

    virtual antlrcpp::Any visitA_star(tsqlParser::A_starContext *context) = 0;

    virtual antlrcpp::Any visitTable_value_constructor(tsqlParser::Table_value_constructorContext *context) = 0;

    virtual antlrcpp::Any visitExpression_list(tsqlParser::Expression_listContext *context) = 0;

    virtual antlrcpp::Any visitValue_list(tsqlParser::Value_listContext *context) = 0;

    virtual antlrcpp::Any visitNext_value_for(tsqlParser::Next_value_forContext *context) = 0;

    virtual antlrcpp::Any visitNext_value_for_function(tsqlParser::Next_value_for_functionContext *context) = 0;

    virtual antlrcpp::Any visitRanking_windowed_function(tsqlParser::Ranking_windowed_functionContext *context) = 0;

    virtual antlrcpp::Any visitAggregate_windowed_function(tsqlParser::Aggregate_windowed_functionContext *context) = 0;

    virtual antlrcpp::Any visitAll_distinct(tsqlParser::All_distinctContext *context) = 0;

    virtual antlrcpp::Any visitOver_clause(tsqlParser::Over_clauseContext *context) = 0;

    virtual antlrcpp::Any visitRow_or_range_clause(tsqlParser::Row_or_range_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_extent(tsqlParser::Window_frame_extentContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_bound(tsqlParser::Window_frame_boundContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_preceding(tsqlParser::Window_frame_precedingContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_following(tsqlParser::Window_frame_followingContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database_option(tsqlParser::Create_database_optionContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_filestream_option(tsqlParser::Database_filestream_optionContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_file_spec(tsqlParser::Database_file_specContext *context) = 0;

    virtual antlrcpp::Any visitFile_group(tsqlParser::File_groupContext *context) = 0;

    virtual antlrcpp::Any visitFile_spec(tsqlParser::File_specContext *context) = 0;

    virtual antlrcpp::Any visitFull_table_name(tsqlParser::Full_table_nameContext *context) = 0;

    virtual antlrcpp::Any visitTable_name(tsqlParser::Table_nameContext *context) = 0;

    virtual antlrcpp::Any visitSimple_name(tsqlParser::Simple_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunc_proc_name(tsqlParser::Func_proc_nameContext *context) = 0;

    virtual antlrcpp::Any visitDdl_object(tsqlParser::Ddl_objectContext *context) = 0;

    virtual antlrcpp::Any visitFull_column_name(tsqlParser::Full_column_nameContext *context) = 0;

    virtual antlrcpp::Any visitColumn_name_list(tsqlParser::Column_name_listContext *context) = 0;

    virtual antlrcpp::Any visitCursor_name(tsqlParser::Cursor_nameContext *context) = 0;

    virtual antlrcpp::Any visitOn_off(tsqlParser::On_offContext *context) = 0;

    virtual antlrcpp::Any visitClustered(tsqlParser::ClusteredContext *context) = 0;

    virtual antlrcpp::Any visitNull_notnull(tsqlParser::Null_notnullContext *context) = 0;

    virtual antlrcpp::Any visitScalar_function_name(tsqlParser::Scalar_function_nameContext *context) = 0;

    virtual antlrcpp::Any visitDefault_value(tsqlParser::Default_valueContext *context) = 0;

    virtual antlrcpp::Any visitConstant(tsqlParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitSign(tsqlParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitR_id(tsqlParser::R_idContext *context) = 0;

    virtual antlrcpp::Any visitSimple_id(tsqlParser::Simple_idContext *context) = 0;

    virtual antlrcpp::Any visitComparison_operator(tsqlParser::Comparison_operatorContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_operator(tsqlParser::Assignment_operatorContext *context) = 0;

    virtual antlrcpp::Any visitFile_size(tsqlParser::File_sizeContext *context) = 0;

    virtual antlrcpp::Any visitCreate_or_alter_procedure(tsqlParser::Create_or_alter_procedureContext *context) = 0;

    virtual antlrcpp::Any visitCreate_or_alter_function(tsqlParser::Create_or_alter_functionContext *context) = 0;

    virtual antlrcpp::Any visitFunc_body_returns_select(tsqlParser::Func_body_returns_selectContext *context) = 0;

    virtual antlrcpp::Any visitFunc_body_returns_table(tsqlParser::Func_body_returns_tableContext *context) = 0;

    virtual antlrcpp::Any visitFunc_body_returns_scalar(tsqlParser::Func_body_returns_scalarContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_param(tsqlParser::Procedure_paramContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_option(tsqlParser::Procedure_optionContext *context) = 0;

    virtual antlrcpp::Any visitFunction_option(tsqlParser::Function_optionContext *context) = 0;

    virtual antlrcpp::Any visitPercentile_cont(tsqlParser::Percentile_contContext *context) = 0;

    virtual antlrcpp::Any visitString_agg(tsqlParser::String_aggContext *context) = 0;

    virtual antlrcpp::Any visitData_type(tsqlParser::Data_typeContext *context) = 0;


};

