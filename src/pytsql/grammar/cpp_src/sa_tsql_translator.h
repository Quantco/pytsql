/*
 * This file was auto-generated by speedy-antlr-tool v1.3.1
 *  https://github.com/amykyta3/speedy-antlr-tool
 */

#pragma once

#include "tsqlBaseVisitor.h"
#include "speedy_antlr.h"

class SA_tsqlTranslator : public tsqlBaseVisitor {
    speedy_antlr::Translator *translator;

    // Cached context classes
    PyObject *Tsql_fileContext_cls = NULL;
    PyObject *BatchContext_cls = NULL;
    PyObject *Sql_clausesContext_cls = NULL;
    PyObject *Sql_clauseContext_cls = NULL;
    PyObject *Dml_clauseContext_cls = NULL;
    PyObject *Ddl_clauseContext_cls = NULL;
    PyObject *Cfl_statementContext_cls = NULL;
    PyObject *Cfl_clauseContext_cls = NULL;
    PyObject *Block_statementContext_cls = NULL;
    PyObject *Break_statementContext_cls = NULL;
    PyObject *Continue_statementContext_cls = NULL;
    PyObject *Goto_statementContext_cls = NULL;
    PyObject *If_statementContext_cls = NULL;
    PyObject *If_blockContext_cls = NULL;
    PyObject *Return_statementContext_cls = NULL;
    PyObject *Throw_statementContext_cls = NULL;
    PyObject *Try_catch_statementContext_cls = NULL;
    PyObject *Waitfor_statementContext_cls = NULL;
    PyObject *While_statementContext_cls = NULL;
    PyObject *Print_statementContext_cls = NULL;
    PyObject *Raiseerror_statementContext_cls = NULL;
    PyObject *Another_statementContext_cls = NULL;
    PyObject *Delete_statementContext_cls = NULL;
    PyObject *Delete_statement_fromContext_cls = NULL;
    PyObject *Insert_statementContext_cls = NULL;
    PyObject *Insert_statement_valueContext_cls = NULL;
    PyObject *Select_statementContext_cls = NULL;
    PyObject *Update_statementContext_cls = NULL;
    PyObject *Where_clause_dmlContext_cls = NULL;
    PyObject *Output_clauseContext_cls = NULL;
    PyObject *Output_dml_list_elemContext_cls = NULL;
    PyObject *Output_column_nameContext_cls = NULL;
    PyObject *Create_databaseContext_cls = NULL;
    PyObject *Create_indexContext_cls = NULL;
    PyObject *Create_statisticsContext_cls = NULL;
    PyObject *Create_tableContext_cls = NULL;
    PyObject *Create_schemaContext_cls = NULL;
    PyObject *Create_synonymContext_cls = NULL;
    PyObject *Create_viewContext_cls = NULL;
    PyObject *View_attributeContext_cls = NULL;
    PyObject *Alter_tableContext_cls = NULL;
    PyObject *Alter_databaseContext_cls = NULL;
    PyObject *Database_optionspecContext_cls = NULL;
    PyObject *Auto_optionContext_cls = NULL;
    PyObject *Change_tracking_optionContext_cls = NULL;
    PyObject *Change_tracking_option_listContext_cls = NULL;
    PyObject *Containment_optionContext_cls = NULL;
    PyObject *Cursor_optionContext_cls = NULL;
    PyObject *Date_correlation_optimization_optionContext_cls = NULL;
    PyObject *Db_encryption_optionContext_cls = NULL;
    PyObject *Db_state_optionContext_cls = NULL;
    PyObject *Db_update_optionContext_cls = NULL;
    PyObject *Db_user_access_optionContext_cls = NULL;
    PyObject *Delayed_durability_optionContext_cls = NULL;
    PyObject *External_access_optionContext_cls = NULL;
    PyObject *Hadr_optionsContext_cls = NULL;
    PyObject *Mixed_page_allocation_optionContext_cls = NULL;
    PyObject *Parameterization_optionContext_cls = NULL;
    PyObject *Recovery_optionContext_cls = NULL;
    PyObject *Service_broker_optionContext_cls = NULL;
    PyObject *Snapshot_optionContext_cls = NULL;
    PyObject *Sql_optionContext_cls = NULL;
    PyObject *Target_recovery_time_optionContext_cls = NULL;
    PyObject *TerminationContext_cls = NULL;
    PyObject *Drop_indexContext_cls = NULL;
    PyObject *Drop_procedureContext_cls = NULL;
    PyObject *Drop_statisticsContext_cls = NULL;
    PyObject *Drop_tableContext_cls = NULL;
    PyObject *Drop_databaseContext_cls = NULL;
    PyObject *Drop_synonymContext_cls = NULL;
    PyObject *Drop_viewContext_cls = NULL;
    PyObject *Drop_schemaContext_cls = NULL;
    PyObject *Create_typeContext_cls = NULL;
    PyObject *Drop_typeContext_cls = NULL;
    PyObject *Rowset_function_limitedContext_cls = NULL;
    PyObject *OpenqueryContext_cls = NULL;
    PyObject *OpendatasourceContext_cls = NULL;
    PyObject *Declare_statementContext_cls = NULL;
    PyObject *Cursor_statementContext_cls = NULL;
    PyObject *Execute_statementContext_cls = NULL;
    PyObject *Execute_statement_argContext_cls = NULL;
    PyObject *Execute_var_stringContext_cls = NULL;
    PyObject *Security_statementContext_cls = NULL;
    PyObject *Grant_permissionContext_cls = NULL;
    PyObject *Set_statementContext_cls = NULL;
    PyObject *Transaction_statementContext_cls = NULL;
    PyObject *Go_statementContext_cls = NULL;
    PyObject *Use_statementContext_cls = NULL;
    PyObject *Execute_clauseContext_cls = NULL;
    PyObject *Declare_localContext_cls = NULL;
    PyObject *Table_type_definitionContext_cls = NULL;
    PyObject *Column_def_table_constraintsContext_cls = NULL;
    PyObject *Column_def_table_constraintContext_cls = NULL;
    PyObject *Column_definitionContext_cls = NULL;
    PyObject *Column_constraintContext_cls = NULL;
    PyObject *Table_constraintContext_cls = NULL;
    PyObject *Index_optionsContext_cls = NULL;
    PyObject *Index_optionContext_cls = NULL;
    PyObject *Declare_cursorContext_cls = NULL;
    PyObject *Declare_set_cursor_commonContext_cls = NULL;
    PyObject *Fetch_cursorContext_cls = NULL;
    PyObject *Set_specialContext_cls = NULL;
    PyObject *Constant_LOCAL_IDContext_cls = NULL;
    PyObject *Binary_operator_expressionContext_cls = NULL;
    PyObject *Unary_operator_expressionContext_cls = NULL;
    PyObject *Function_call_expressionContext_cls = NULL;
    PyObject *Conversion_expressionContext_cls = NULL;
    PyObject *Case_expressionContext_cls = NULL;
    PyObject *Column_ref_expressionContext_cls = NULL;
    PyObject *String_agg_expressionContext_cls = NULL;
    PyObject *Percentile_cont_expressionContext_cls = NULL;
    PyObject *Primitive_expressionContext_cls = NULL;
    PyObject *Bracket_expressionContext_cls = NULL;
    PyObject *Subquery_expressionContext_cls = NULL;
    PyObject *Over_clause_expressionContext_cls = NULL;
    PyObject *Xml_method_expressionContext_cls = NULL;
    PyObject *Xml_method_callContext_cls = NULL;
    PyObject *Simple_xml_method_nameContext_cls = NULL;
    PyObject *Constant_expressionContext_cls = NULL;
    PyObject *SubqueryContext_cls = NULL;
    PyObject *With_expressionContext_cls = NULL;
    PyObject *Common_table_expressionContext_cls = NULL;
    PyObject *Update_elemContext_cls = NULL;
    PyObject *Search_condition_listContext_cls = NULL;
    PyObject *Search_cond_orContext_cls = NULL;
    PyObject *Search_cond_predContext_cls = NULL;
    PyObject *Search_cond_andContext_cls = NULL;
    PyObject *Binary_in_expressionContext_cls = NULL;
    PyObject *Unary_operator_expression2Context_cls = NULL;
    PyObject *Binary_mod_expressionContext_cls = NULL;
    PyObject *Unary_operator_expression3Context_cls = NULL;
    PyObject *Bracket_search_expressionContext_cls = NULL;
    PyObject *Sublink_expressionContext_cls = NULL;
    PyObject *Binary_operator_expression3Context_cls = NULL;
    PyObject *Binary_operator_expression2Context_cls = NULL;
    PyObject *Decimal_expressionContext_cls = NULL;
    PyObject *Bracket_query_expressionContext_cls = NULL;
    PyObject *Query_specification_expressionContext_cls = NULL;
    PyObject *Union_query_expressionContext_cls = NULL;
    PyObject *Union_opContext_cls = NULL;
    PyObject *Cross_apply_expressionContext_cls = NULL;
    PyObject *Query_specificationContext_cls = NULL;
    PyObject *Group_by_grouping_setsContext_cls = NULL;
    PyObject *Grouping_setContext_cls = NULL;
    PyObject *Top_clauseContext_cls = NULL;
    PyObject *Top_clause_dmContext_cls = NULL;
    PyObject *Order_by_clauseContext_cls = NULL;
    PyObject *Fetch_expressionContext_cls = NULL;
    PyObject *For_clauseContext_cls = NULL;
    PyObject *Xml_common_directivesContext_cls = NULL;
    PyObject *Order_by_expressionContext_cls = NULL;
    PyObject *Group_by_itemContext_cls = NULL;
    PyObject *Option_clauseContext_cls = NULL;
    PyObject *OptionContext_cls = NULL;
    PyObject *Optimize_for_argContext_cls = NULL;
    PyObject *Select_listContext_cls = NULL;
    PyObject *Select_list_elemContext_cls = NULL;
    PyObject *Table_sourcesContext_cls = NULL;
    PyObject *Cross_joinContext_cls = NULL;
    PyObject *Table_source_item_joinContext_cls = NULL;
    PyObject *Standard_joinContext_cls = NULL;
    PyObject *Apply_joinContext_cls = NULL;
    PyObject *Bracket_table_sourceContext_cls = NULL;
    PyObject *Table_source_item_simpleContext_cls = NULL;
    PyObject *Table_source_item_complexContext_cls = NULL;
    PyObject *Table_source_item_nameContext_cls = NULL;
    PyObject *Tablesample_clauseContext_cls = NULL;
    PyObject *Sample_numberContext_cls = NULL;
    PyObject *Repeat_seedContext_cls = NULL;
    PyObject *Table_aliasContext_cls = NULL;
    PyObject *Change_tableContext_cls = NULL;
    PyObject *Join_typeContext_cls = NULL;
    PyObject *Table_name_with_hintContext_cls = NULL;
    PyObject *Rowset_functionContext_cls = NULL;
    PyObject *Bulk_optionContext_cls = NULL;
    PyObject *Derived_tableContext_cls = NULL;
    PyObject *Standard_callContext_cls = NULL;
    PyObject *Aggregate_callContext_cls = NULL;
    PyObject *Nvf_callContext_cls = NULL;
    PyObject *Rank_callContext_cls = NULL;
    PyObject *Expression_callContext_cls = NULL;
    PyObject *Simple_callContext_cls = NULL;
    PyObject *Cast_callContext_cls = NULL;
    PyObject *Switch_sectionContext_cls = NULL;
    PyObject *Switch_search_condition_sectionContext_cls = NULL;
    PyObject *With_table_hintsContext_cls = NULL;
    PyObject *Insert_with_table_hintsContext_cls = NULL;
    PyObject *Table_hintContext_cls = NULL;
    PyObject *Index_valueContext_cls = NULL;
    PyObject *Column_alias_listContext_cls = NULL;
    PyObject *Column_aliasContext_cls = NULL;
    PyObject *A_starContext_cls = NULL;
    PyObject *Table_value_constructorContext_cls = NULL;
    PyObject *Expression_listContext_cls = NULL;
    PyObject *Value_listContext_cls = NULL;
    PyObject *Next_value_forContext_cls = NULL;
    PyObject *Next_value_for_functionContext_cls = NULL;
    PyObject *Ranking_windowed_functionContext_cls = NULL;
    PyObject *Aggregate_windowed_functionContext_cls = NULL;
    PyObject *All_distinctContext_cls = NULL;
    PyObject *Over_clauseContext_cls = NULL;
    PyObject *Row_or_range_clauseContext_cls = NULL;
    PyObject *Window_frame_extentContext_cls = NULL;
    PyObject *Window_frame_boundContext_cls = NULL;
    PyObject *Window_frame_precedingContext_cls = NULL;
    PyObject *Window_frame_followingContext_cls = NULL;
    PyObject *Create_database_optionContext_cls = NULL;
    PyObject *Database_filestream_optionContext_cls = NULL;
    PyObject *Database_file_specContext_cls = NULL;
    PyObject *File_groupContext_cls = NULL;
    PyObject *File_specContext_cls = NULL;
    PyObject *Full_table_nameContext_cls = NULL;
    PyObject *Table_nameContext_cls = NULL;
    PyObject *Simple_nameContext_cls = NULL;
    PyObject *Func_proc_nameContext_cls = NULL;
    PyObject *Ddl_objectContext_cls = NULL;
    PyObject *Full_column_nameContext_cls = NULL;
    PyObject *Column_name_listContext_cls = NULL;
    PyObject *Cursor_nameContext_cls = NULL;
    PyObject *On_offContext_cls = NULL;
    PyObject *ClusteredContext_cls = NULL;
    PyObject *Null_notnullContext_cls = NULL;
    PyObject *Scalar_function_nameContext_cls = NULL;
    PyObject *Default_valueContext_cls = NULL;
    PyObject *ConstantContext_cls = NULL;
    PyObject *SignContext_cls = NULL;
    PyObject *R_idContext_cls = NULL;
    PyObject *Simple_idContext_cls = NULL;
    PyObject *Comparison_operatorContext_cls = NULL;
    PyObject *Assignment_operatorContext_cls = NULL;
    PyObject *File_sizeContext_cls = NULL;
    PyObject *Create_or_alter_procedureContext_cls = NULL;
    PyObject *Create_or_alter_functionContext_cls = NULL;
    PyObject *Func_body_returns_selectContext_cls = NULL;
    PyObject *Func_body_returns_tableContext_cls = NULL;
    PyObject *Func_body_returns_scalarContext_cls = NULL;
    PyObject *Procedure_paramContext_cls = NULL;
    PyObject *Procedure_optionContext_cls = NULL;
    PyObject *Function_optionContext_cls = NULL;
    PyObject *Percentile_contContext_cls = NULL;
    PyObject *String_aggContext_cls = NULL;
    PyObject *Data_typeContext_cls = NULL;

    public:
    SA_tsqlTranslator(speedy_antlr::Translator *translator);
    ~SA_tsqlTranslator();
    antlrcpp::Any visitTsql_file(tsqlParser::Tsql_fileContext *ctx);

    antlrcpp::Any visitBatch(tsqlParser::BatchContext *ctx);

    antlrcpp::Any visitSql_clauses(tsqlParser::Sql_clausesContext *ctx);

    antlrcpp::Any visitSql_clause(tsqlParser::Sql_clauseContext *ctx);

    antlrcpp::Any visitDml_clause(tsqlParser::Dml_clauseContext *ctx);

    antlrcpp::Any visitDdl_clause(tsqlParser::Ddl_clauseContext *ctx);

    antlrcpp::Any visitCfl_statement(tsqlParser::Cfl_statementContext *ctx);

    antlrcpp::Any visitCfl_clause(tsqlParser::Cfl_clauseContext *ctx);

    antlrcpp::Any visitBlock_statement(tsqlParser::Block_statementContext *ctx);

    antlrcpp::Any visitBreak_statement(tsqlParser::Break_statementContext *ctx);

    antlrcpp::Any visitContinue_statement(tsqlParser::Continue_statementContext *ctx);

    antlrcpp::Any visitGoto_statement(tsqlParser::Goto_statementContext *ctx);

    antlrcpp::Any visitIf_statement(tsqlParser::If_statementContext *ctx);

    antlrcpp::Any visitIf_block(tsqlParser::If_blockContext *ctx);

    antlrcpp::Any visitReturn_statement(tsqlParser::Return_statementContext *ctx);

    antlrcpp::Any visitThrow_statement(tsqlParser::Throw_statementContext *ctx);

    antlrcpp::Any visitTry_catch_statement(tsqlParser::Try_catch_statementContext *ctx);

    antlrcpp::Any visitWaitfor_statement(tsqlParser::Waitfor_statementContext *ctx);

    antlrcpp::Any visitWhile_statement(tsqlParser::While_statementContext *ctx);

    antlrcpp::Any visitPrint_statement(tsqlParser::Print_statementContext *ctx);

    antlrcpp::Any visitRaiseerror_statement(tsqlParser::Raiseerror_statementContext *ctx);

    antlrcpp::Any visitAnother_statement(tsqlParser::Another_statementContext *ctx);

    antlrcpp::Any visitDelete_statement(tsqlParser::Delete_statementContext *ctx);

    antlrcpp::Any visitDelete_statement_from(tsqlParser::Delete_statement_fromContext *ctx);

    antlrcpp::Any visitInsert_statement(tsqlParser::Insert_statementContext *ctx);

    antlrcpp::Any visitInsert_statement_value(tsqlParser::Insert_statement_valueContext *ctx);

    antlrcpp::Any visitSelect_statement(tsqlParser::Select_statementContext *ctx);

    antlrcpp::Any visitUpdate_statement(tsqlParser::Update_statementContext *ctx);

    antlrcpp::Any visitWhere_clause_dml(tsqlParser::Where_clause_dmlContext *ctx);

    antlrcpp::Any visitOutput_clause(tsqlParser::Output_clauseContext *ctx);

    antlrcpp::Any visitOutput_dml_list_elem(tsqlParser::Output_dml_list_elemContext *ctx);

    antlrcpp::Any visitOutput_column_name(tsqlParser::Output_column_nameContext *ctx);

    antlrcpp::Any visitCreate_database(tsqlParser::Create_databaseContext *ctx);

    antlrcpp::Any visitCreate_index(tsqlParser::Create_indexContext *ctx);

    antlrcpp::Any visitCreate_statistics(tsqlParser::Create_statisticsContext *ctx);

    antlrcpp::Any visitCreate_table(tsqlParser::Create_tableContext *ctx);

    antlrcpp::Any visitCreate_schema(tsqlParser::Create_schemaContext *ctx);

    antlrcpp::Any visitCreate_synonym(tsqlParser::Create_synonymContext *ctx);

    antlrcpp::Any visitCreate_view(tsqlParser::Create_viewContext *ctx);

    antlrcpp::Any visitView_attribute(tsqlParser::View_attributeContext *ctx);

    antlrcpp::Any visitAlter_table(tsqlParser::Alter_tableContext *ctx);

    antlrcpp::Any visitAlter_database(tsqlParser::Alter_databaseContext *ctx);

    antlrcpp::Any visitDatabase_optionspec(tsqlParser::Database_optionspecContext *ctx);

    antlrcpp::Any visitAuto_option(tsqlParser::Auto_optionContext *ctx);

    antlrcpp::Any visitChange_tracking_option(tsqlParser::Change_tracking_optionContext *ctx);

    antlrcpp::Any visitChange_tracking_option_list(tsqlParser::Change_tracking_option_listContext *ctx);

    antlrcpp::Any visitContainment_option(tsqlParser::Containment_optionContext *ctx);

    antlrcpp::Any visitCursor_option(tsqlParser::Cursor_optionContext *ctx);

    antlrcpp::Any visitDate_correlation_optimization_option(tsqlParser::Date_correlation_optimization_optionContext *ctx);

    antlrcpp::Any visitDb_encryption_option(tsqlParser::Db_encryption_optionContext *ctx);

    antlrcpp::Any visitDb_state_option(tsqlParser::Db_state_optionContext *ctx);

    antlrcpp::Any visitDb_update_option(tsqlParser::Db_update_optionContext *ctx);

    antlrcpp::Any visitDb_user_access_option(tsqlParser::Db_user_access_optionContext *ctx);

    antlrcpp::Any visitDelayed_durability_option(tsqlParser::Delayed_durability_optionContext *ctx);

    antlrcpp::Any visitExternal_access_option(tsqlParser::External_access_optionContext *ctx);

    antlrcpp::Any visitHadr_options(tsqlParser::Hadr_optionsContext *ctx);

    antlrcpp::Any visitMixed_page_allocation_option(tsqlParser::Mixed_page_allocation_optionContext *ctx);

    antlrcpp::Any visitParameterization_option(tsqlParser::Parameterization_optionContext *ctx);

    antlrcpp::Any visitRecovery_option(tsqlParser::Recovery_optionContext *ctx);

    antlrcpp::Any visitService_broker_option(tsqlParser::Service_broker_optionContext *ctx);

    antlrcpp::Any visitSnapshot_option(tsqlParser::Snapshot_optionContext *ctx);

    antlrcpp::Any visitSql_option(tsqlParser::Sql_optionContext *ctx);

    antlrcpp::Any visitTarget_recovery_time_option(tsqlParser::Target_recovery_time_optionContext *ctx);

    antlrcpp::Any visitTermination(tsqlParser::TerminationContext *ctx);

    antlrcpp::Any visitDrop_index(tsqlParser::Drop_indexContext *ctx);

    antlrcpp::Any visitDrop_procedure(tsqlParser::Drop_procedureContext *ctx);

    antlrcpp::Any visitDrop_statistics(tsqlParser::Drop_statisticsContext *ctx);

    antlrcpp::Any visitDrop_table(tsqlParser::Drop_tableContext *ctx);

    antlrcpp::Any visitDrop_database(tsqlParser::Drop_databaseContext *ctx);

    antlrcpp::Any visitDrop_synonym(tsqlParser::Drop_synonymContext *ctx);

    antlrcpp::Any visitDrop_view(tsqlParser::Drop_viewContext *ctx);

    antlrcpp::Any visitDrop_schema(tsqlParser::Drop_schemaContext *ctx);

    antlrcpp::Any visitCreate_type(tsqlParser::Create_typeContext *ctx);

    antlrcpp::Any visitDrop_type(tsqlParser::Drop_typeContext *ctx);

    antlrcpp::Any visitRowset_function_limited(tsqlParser::Rowset_function_limitedContext *ctx);

    antlrcpp::Any visitOpenquery(tsqlParser::OpenqueryContext *ctx);

    antlrcpp::Any visitOpendatasource(tsqlParser::OpendatasourceContext *ctx);

    antlrcpp::Any visitDeclare_statement(tsqlParser::Declare_statementContext *ctx);

    antlrcpp::Any visitCursor_statement(tsqlParser::Cursor_statementContext *ctx);

    antlrcpp::Any visitExecute_statement(tsqlParser::Execute_statementContext *ctx);

    antlrcpp::Any visitExecute_statement_arg(tsqlParser::Execute_statement_argContext *ctx);

    antlrcpp::Any visitExecute_var_string(tsqlParser::Execute_var_stringContext *ctx);

    antlrcpp::Any visitSecurity_statement(tsqlParser::Security_statementContext *ctx);

    antlrcpp::Any visitGrant_permission(tsqlParser::Grant_permissionContext *ctx);

    antlrcpp::Any visitSet_statement(tsqlParser::Set_statementContext *ctx);

    antlrcpp::Any visitTransaction_statement(tsqlParser::Transaction_statementContext *ctx);

    antlrcpp::Any visitGo_statement(tsqlParser::Go_statementContext *ctx);

    antlrcpp::Any visitUse_statement(tsqlParser::Use_statementContext *ctx);

    antlrcpp::Any visitExecute_clause(tsqlParser::Execute_clauseContext *ctx);

    antlrcpp::Any visitDeclare_local(tsqlParser::Declare_localContext *ctx);

    antlrcpp::Any visitTable_type_definition(tsqlParser::Table_type_definitionContext *ctx);

    antlrcpp::Any visitColumn_def_table_constraints(tsqlParser::Column_def_table_constraintsContext *ctx);

    antlrcpp::Any visitColumn_def_table_constraint(tsqlParser::Column_def_table_constraintContext *ctx);

    antlrcpp::Any visitColumn_definition(tsqlParser::Column_definitionContext *ctx);

    antlrcpp::Any visitColumn_constraint(tsqlParser::Column_constraintContext *ctx);

    antlrcpp::Any visitTable_constraint(tsqlParser::Table_constraintContext *ctx);

    antlrcpp::Any visitIndex_options(tsqlParser::Index_optionsContext *ctx);

    antlrcpp::Any visitIndex_option(tsqlParser::Index_optionContext *ctx);

    antlrcpp::Any visitDeclare_cursor(tsqlParser::Declare_cursorContext *ctx);

    antlrcpp::Any visitDeclare_set_cursor_common(tsqlParser::Declare_set_cursor_commonContext *ctx);

    antlrcpp::Any visitFetch_cursor(tsqlParser::Fetch_cursorContext *ctx);

    antlrcpp::Any visitSet_special(tsqlParser::Set_specialContext *ctx);

    antlrcpp::Any visitConstant_LOCAL_ID(tsqlParser::Constant_LOCAL_IDContext *ctx);

    antlrcpp::Any visitBinary_operator_expression(tsqlParser::Binary_operator_expressionContext *ctx);

    antlrcpp::Any visitUnary_operator_expression(tsqlParser::Unary_operator_expressionContext *ctx);

    antlrcpp::Any visitFunction_call_expression(tsqlParser::Function_call_expressionContext *ctx);

    antlrcpp::Any visitConversion_expression(tsqlParser::Conversion_expressionContext *ctx);

    antlrcpp::Any visitCase_expression(tsqlParser::Case_expressionContext *ctx);

    antlrcpp::Any visitColumn_ref_expression(tsqlParser::Column_ref_expressionContext *ctx);

    antlrcpp::Any visitString_agg_expression(tsqlParser::String_agg_expressionContext *ctx);

    antlrcpp::Any visitPercentile_cont_expression(tsqlParser::Percentile_cont_expressionContext *ctx);

    antlrcpp::Any visitPrimitive_expression(tsqlParser::Primitive_expressionContext *ctx);

    antlrcpp::Any visitBracket_expression(tsqlParser::Bracket_expressionContext *ctx);

    antlrcpp::Any visitSubquery_expression(tsqlParser::Subquery_expressionContext *ctx);

    antlrcpp::Any visitOver_clause_expression(tsqlParser::Over_clause_expressionContext *ctx);

    antlrcpp::Any visitXml_method_expression(tsqlParser::Xml_method_expressionContext *ctx);

    antlrcpp::Any visitXml_method_call(tsqlParser::Xml_method_callContext *ctx);

    antlrcpp::Any visitSimple_xml_method_name(tsqlParser::Simple_xml_method_nameContext *ctx);

    antlrcpp::Any visitConstant_expression(tsqlParser::Constant_expressionContext *ctx);

    antlrcpp::Any visitSubquery(tsqlParser::SubqueryContext *ctx);

    antlrcpp::Any visitWith_expression(tsqlParser::With_expressionContext *ctx);

    antlrcpp::Any visitCommon_table_expression(tsqlParser::Common_table_expressionContext *ctx);

    antlrcpp::Any visitUpdate_elem(tsqlParser::Update_elemContext *ctx);

    antlrcpp::Any visitSearch_condition_list(tsqlParser::Search_condition_listContext *ctx);

    antlrcpp::Any visitSearch_cond_or(tsqlParser::Search_cond_orContext *ctx);

    antlrcpp::Any visitSearch_cond_pred(tsqlParser::Search_cond_predContext *ctx);

    antlrcpp::Any visitSearch_cond_and(tsqlParser::Search_cond_andContext *ctx);

    antlrcpp::Any visitBinary_in_expression(tsqlParser::Binary_in_expressionContext *ctx);

    antlrcpp::Any visitUnary_operator_expression2(tsqlParser::Unary_operator_expression2Context *ctx);

    antlrcpp::Any visitBinary_mod_expression(tsqlParser::Binary_mod_expressionContext *ctx);

    antlrcpp::Any visitUnary_operator_expression3(tsqlParser::Unary_operator_expression3Context *ctx);

    antlrcpp::Any visitBracket_search_expression(tsqlParser::Bracket_search_expressionContext *ctx);

    antlrcpp::Any visitSublink_expression(tsqlParser::Sublink_expressionContext *ctx);

    antlrcpp::Any visitBinary_operator_expression3(tsqlParser::Binary_operator_expression3Context *ctx);

    antlrcpp::Any visitBinary_operator_expression2(tsqlParser::Binary_operator_expression2Context *ctx);

    antlrcpp::Any visitDecimal_expression(tsqlParser::Decimal_expressionContext *ctx);

    antlrcpp::Any visitBracket_query_expression(tsqlParser::Bracket_query_expressionContext *ctx);

    antlrcpp::Any visitQuery_specification_expression(tsqlParser::Query_specification_expressionContext *ctx);

    antlrcpp::Any visitUnion_query_expression(tsqlParser::Union_query_expressionContext *ctx);

    antlrcpp::Any visitUnion_op(tsqlParser::Union_opContext *ctx);

    antlrcpp::Any visitCross_apply_expression(tsqlParser::Cross_apply_expressionContext *ctx);

    antlrcpp::Any visitQuery_specification(tsqlParser::Query_specificationContext *ctx);

    antlrcpp::Any visitGroup_by_grouping_sets(tsqlParser::Group_by_grouping_setsContext *ctx);

    antlrcpp::Any visitGrouping_set(tsqlParser::Grouping_setContext *ctx);

    antlrcpp::Any visitTop_clause(tsqlParser::Top_clauseContext *ctx);

    antlrcpp::Any visitTop_clause_dm(tsqlParser::Top_clause_dmContext *ctx);

    antlrcpp::Any visitOrder_by_clause(tsqlParser::Order_by_clauseContext *ctx);

    antlrcpp::Any visitFetch_expression(tsqlParser::Fetch_expressionContext *ctx);

    antlrcpp::Any visitFor_clause(tsqlParser::For_clauseContext *ctx);

    antlrcpp::Any visitXml_common_directives(tsqlParser::Xml_common_directivesContext *ctx);

    antlrcpp::Any visitOrder_by_expression(tsqlParser::Order_by_expressionContext *ctx);

    antlrcpp::Any visitGroup_by_item(tsqlParser::Group_by_itemContext *ctx);

    antlrcpp::Any visitOption_clause(tsqlParser::Option_clauseContext *ctx);

    antlrcpp::Any visitOption(tsqlParser::OptionContext *ctx);

    antlrcpp::Any visitOptimize_for_arg(tsqlParser::Optimize_for_argContext *ctx);

    antlrcpp::Any visitSelect_list(tsqlParser::Select_listContext *ctx);

    antlrcpp::Any visitSelect_list_elem(tsqlParser::Select_list_elemContext *ctx);

    antlrcpp::Any visitTable_sources(tsqlParser::Table_sourcesContext *ctx);

    antlrcpp::Any visitCross_join(tsqlParser::Cross_joinContext *ctx);

    antlrcpp::Any visitTable_source_item_join(tsqlParser::Table_source_item_joinContext *ctx);

    antlrcpp::Any visitStandard_join(tsqlParser::Standard_joinContext *ctx);

    antlrcpp::Any visitApply_join(tsqlParser::Apply_joinContext *ctx);

    antlrcpp::Any visitBracket_table_source(tsqlParser::Bracket_table_sourceContext *ctx);

    antlrcpp::Any visitTable_source_item_simple(tsqlParser::Table_source_item_simpleContext *ctx);

    antlrcpp::Any visitTable_source_item_complex(tsqlParser::Table_source_item_complexContext *ctx);

    antlrcpp::Any visitTable_source_item_name(tsqlParser::Table_source_item_nameContext *ctx);

    antlrcpp::Any visitTablesample_clause(tsqlParser::Tablesample_clauseContext *ctx);

    antlrcpp::Any visitSample_number(tsqlParser::Sample_numberContext *ctx);

    antlrcpp::Any visitRepeat_seed(tsqlParser::Repeat_seedContext *ctx);

    antlrcpp::Any visitTable_alias(tsqlParser::Table_aliasContext *ctx);

    antlrcpp::Any visitChange_table(tsqlParser::Change_tableContext *ctx);

    antlrcpp::Any visitJoin_type(tsqlParser::Join_typeContext *ctx);

    antlrcpp::Any visitTable_name_with_hint(tsqlParser::Table_name_with_hintContext *ctx);

    antlrcpp::Any visitRowset_function(tsqlParser::Rowset_functionContext *ctx);

    antlrcpp::Any visitBulk_option(tsqlParser::Bulk_optionContext *ctx);

    antlrcpp::Any visitDerived_table(tsqlParser::Derived_tableContext *ctx);

    antlrcpp::Any visitStandard_call(tsqlParser::Standard_callContext *ctx);

    antlrcpp::Any visitAggregate_call(tsqlParser::Aggregate_callContext *ctx);

    antlrcpp::Any visitNvf_call(tsqlParser::Nvf_callContext *ctx);

    antlrcpp::Any visitRank_call(tsqlParser::Rank_callContext *ctx);

    antlrcpp::Any visitExpression_call(tsqlParser::Expression_callContext *ctx);

    antlrcpp::Any visitSimple_call(tsqlParser::Simple_callContext *ctx);

    antlrcpp::Any visitCast_call(tsqlParser::Cast_callContext *ctx);

    antlrcpp::Any visitSwitch_section(tsqlParser::Switch_sectionContext *ctx);

    antlrcpp::Any visitSwitch_search_condition_section(tsqlParser::Switch_search_condition_sectionContext *ctx);

    antlrcpp::Any visitWith_table_hints(tsqlParser::With_table_hintsContext *ctx);

    antlrcpp::Any visitInsert_with_table_hints(tsqlParser::Insert_with_table_hintsContext *ctx);

    antlrcpp::Any visitTable_hint(tsqlParser::Table_hintContext *ctx);

    antlrcpp::Any visitIndex_value(tsqlParser::Index_valueContext *ctx);

    antlrcpp::Any visitColumn_alias_list(tsqlParser::Column_alias_listContext *ctx);

    antlrcpp::Any visitColumn_alias(tsqlParser::Column_aliasContext *ctx);

    antlrcpp::Any visitA_star(tsqlParser::A_starContext *ctx);

    antlrcpp::Any visitTable_value_constructor(tsqlParser::Table_value_constructorContext *ctx);

    antlrcpp::Any visitExpression_list(tsqlParser::Expression_listContext *ctx);

    antlrcpp::Any visitValue_list(tsqlParser::Value_listContext *ctx);

    antlrcpp::Any visitNext_value_for(tsqlParser::Next_value_forContext *ctx);

    antlrcpp::Any visitNext_value_for_function(tsqlParser::Next_value_for_functionContext *ctx);

    antlrcpp::Any visitRanking_windowed_function(tsqlParser::Ranking_windowed_functionContext *ctx);

    antlrcpp::Any visitAggregate_windowed_function(tsqlParser::Aggregate_windowed_functionContext *ctx);

    antlrcpp::Any visitAll_distinct(tsqlParser::All_distinctContext *ctx);

    antlrcpp::Any visitOver_clause(tsqlParser::Over_clauseContext *ctx);

    antlrcpp::Any visitRow_or_range_clause(tsqlParser::Row_or_range_clauseContext *ctx);

    antlrcpp::Any visitWindow_frame_extent(tsqlParser::Window_frame_extentContext *ctx);

    antlrcpp::Any visitWindow_frame_bound(tsqlParser::Window_frame_boundContext *ctx);

    antlrcpp::Any visitWindow_frame_preceding(tsqlParser::Window_frame_precedingContext *ctx);

    antlrcpp::Any visitWindow_frame_following(tsqlParser::Window_frame_followingContext *ctx);

    antlrcpp::Any visitCreate_database_option(tsqlParser::Create_database_optionContext *ctx);

    antlrcpp::Any visitDatabase_filestream_option(tsqlParser::Database_filestream_optionContext *ctx);

    antlrcpp::Any visitDatabase_file_spec(tsqlParser::Database_file_specContext *ctx);

    antlrcpp::Any visitFile_group(tsqlParser::File_groupContext *ctx);

    antlrcpp::Any visitFile_spec(tsqlParser::File_specContext *ctx);

    antlrcpp::Any visitFull_table_name(tsqlParser::Full_table_nameContext *ctx);

    antlrcpp::Any visitTable_name(tsqlParser::Table_nameContext *ctx);

    antlrcpp::Any visitSimple_name(tsqlParser::Simple_nameContext *ctx);

    antlrcpp::Any visitFunc_proc_name(tsqlParser::Func_proc_nameContext *ctx);

    antlrcpp::Any visitDdl_object(tsqlParser::Ddl_objectContext *ctx);

    antlrcpp::Any visitFull_column_name(tsqlParser::Full_column_nameContext *ctx);

    antlrcpp::Any visitColumn_name_list(tsqlParser::Column_name_listContext *ctx);

    antlrcpp::Any visitCursor_name(tsqlParser::Cursor_nameContext *ctx);

    antlrcpp::Any visitOn_off(tsqlParser::On_offContext *ctx);

    antlrcpp::Any visitClustered(tsqlParser::ClusteredContext *ctx);

    antlrcpp::Any visitNull_notnull(tsqlParser::Null_notnullContext *ctx);

    antlrcpp::Any visitScalar_function_name(tsqlParser::Scalar_function_nameContext *ctx);

    antlrcpp::Any visitDefault_value(tsqlParser::Default_valueContext *ctx);

    antlrcpp::Any visitConstant(tsqlParser::ConstantContext *ctx);

    antlrcpp::Any visitSign(tsqlParser::SignContext *ctx);

    antlrcpp::Any visitR_id(tsqlParser::R_idContext *ctx);

    antlrcpp::Any visitSimple_id(tsqlParser::Simple_idContext *ctx);

    antlrcpp::Any visitComparison_operator(tsqlParser::Comparison_operatorContext *ctx);

    antlrcpp::Any visitAssignment_operator(tsqlParser::Assignment_operatorContext *ctx);

    antlrcpp::Any visitFile_size(tsqlParser::File_sizeContext *ctx);

    antlrcpp::Any visitCreate_or_alter_procedure(tsqlParser::Create_or_alter_procedureContext *ctx);

    antlrcpp::Any visitCreate_or_alter_function(tsqlParser::Create_or_alter_functionContext *ctx);

    antlrcpp::Any visitFunc_body_returns_select(tsqlParser::Func_body_returns_selectContext *ctx);

    antlrcpp::Any visitFunc_body_returns_table(tsqlParser::Func_body_returns_tableContext *ctx);

    antlrcpp::Any visitFunc_body_returns_scalar(tsqlParser::Func_body_returns_scalarContext *ctx);

    antlrcpp::Any visitProcedure_param(tsqlParser::Procedure_paramContext *ctx);

    antlrcpp::Any visitProcedure_option(tsqlParser::Procedure_optionContext *ctx);

    antlrcpp::Any visitFunction_option(tsqlParser::Function_optionContext *ctx);

    antlrcpp::Any visitPercentile_cont(tsqlParser::Percentile_contContext *ctx);

    antlrcpp::Any visitString_agg(tsqlParser::String_aggContext *ctx);

    antlrcpp::Any visitData_type(tsqlParser::Data_typeContext *ctx);

};