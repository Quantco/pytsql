
// Generated from TSqlParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "TSqlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TSqlParser.
 */
class  TSqlParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TSqlParser.
   */
    virtual std::any visitTsql_file(TSqlParser::Tsql_fileContext *context) = 0;

    virtual std::any visitBatch(TSqlParser::BatchContext *context) = 0;

    virtual std::any visitBatch_level_statement(TSqlParser::Batch_level_statementContext *context) = 0;

    virtual std::any visitSql_clauses(TSqlParser::Sql_clausesContext *context) = 0;

    virtual std::any visitDml_clause(TSqlParser::Dml_clauseContext *context) = 0;

    virtual std::any visitDdl_clause(TSqlParser::Ddl_clauseContext *context) = 0;

    virtual std::any visitBackup_statement(TSqlParser::Backup_statementContext *context) = 0;

    virtual std::any visitCfl_statement(TSqlParser::Cfl_statementContext *context) = 0;

    virtual std::any visitBlock_statement(TSqlParser::Block_statementContext *context) = 0;

    virtual std::any visitBreak_statement(TSqlParser::Break_statementContext *context) = 0;

    virtual std::any visitContinue_statement(TSqlParser::Continue_statementContext *context) = 0;

    virtual std::any visitGoto_statement(TSqlParser::Goto_statementContext *context) = 0;

    virtual std::any visitReturn_statement(TSqlParser::Return_statementContext *context) = 0;

    virtual std::any visitIf_statement(TSqlParser::If_statementContext *context) = 0;

    virtual std::any visitThrow_statement(TSqlParser::Throw_statementContext *context) = 0;

    virtual std::any visitThrow_error_number(TSqlParser::Throw_error_numberContext *context) = 0;

    virtual std::any visitThrow_message(TSqlParser::Throw_messageContext *context) = 0;

    virtual std::any visitThrow_state(TSqlParser::Throw_stateContext *context) = 0;

    virtual std::any visitTry_catch_statement(TSqlParser::Try_catch_statementContext *context) = 0;

    virtual std::any visitWaitfor_statement(TSqlParser::Waitfor_statementContext *context) = 0;

    virtual std::any visitWhile_statement(TSqlParser::While_statementContext *context) = 0;

    virtual std::any visitPrint_statement(TSqlParser::Print_statementContext *context) = 0;

    virtual std::any visitRaiseerror_statement(TSqlParser::Raiseerror_statementContext *context) = 0;

    virtual std::any visitEmpty_statement(TSqlParser::Empty_statementContext *context) = 0;

    virtual std::any visitAnother_statement(TSqlParser::Another_statementContext *context) = 0;

    virtual std::any visitAlter_application_role(TSqlParser::Alter_application_roleContext *context) = 0;

    virtual std::any visitAlter_xml_schema_collection(TSqlParser::Alter_xml_schema_collectionContext *context) = 0;

    virtual std::any visitCreate_application_role(TSqlParser::Create_application_roleContext *context) = 0;

    virtual std::any visitDrop_aggregate(TSqlParser::Drop_aggregateContext *context) = 0;

    virtual std::any visitDrop_application_role(TSqlParser::Drop_application_roleContext *context) = 0;

    virtual std::any visitAlter_assembly(TSqlParser::Alter_assemblyContext *context) = 0;

    virtual std::any visitAlter_assembly_start(TSqlParser::Alter_assembly_startContext *context) = 0;

    virtual std::any visitAlter_assembly_clause(TSqlParser::Alter_assembly_clauseContext *context) = 0;

    virtual std::any visitAlter_assembly_from_clause(TSqlParser::Alter_assembly_from_clauseContext *context) = 0;

    virtual std::any visitAlter_assembly_from_clause_start(TSqlParser::Alter_assembly_from_clause_startContext *context) = 0;

    virtual std::any visitAlter_assembly_drop_clause(TSqlParser::Alter_assembly_drop_clauseContext *context) = 0;

    virtual std::any visitAlter_assembly_drop_multiple_files(TSqlParser::Alter_assembly_drop_multiple_filesContext *context) = 0;

    virtual std::any visitAlter_assembly_drop(TSqlParser::Alter_assembly_dropContext *context) = 0;

    virtual std::any visitAlter_assembly_add_clause(TSqlParser::Alter_assembly_add_clauseContext *context) = 0;

    virtual std::any visitAlter_asssembly_add_clause_start(TSqlParser::Alter_asssembly_add_clause_startContext *context) = 0;

    virtual std::any visitAlter_assembly_client_file_clause(TSqlParser::Alter_assembly_client_file_clauseContext *context) = 0;

    virtual std::any visitAlter_assembly_file_name(TSqlParser::Alter_assembly_file_nameContext *context) = 0;

    virtual std::any visitAlter_assembly_file_bits(TSqlParser::Alter_assembly_file_bitsContext *context) = 0;

    virtual std::any visitAlter_assembly_as(TSqlParser::Alter_assembly_asContext *context) = 0;

    virtual std::any visitAlter_assembly_with_clause(TSqlParser::Alter_assembly_with_clauseContext *context) = 0;

    virtual std::any visitAlter_assembly_with(TSqlParser::Alter_assembly_withContext *context) = 0;

    virtual std::any visitClient_assembly_specifier(TSqlParser::Client_assembly_specifierContext *context) = 0;

    virtual std::any visitAssembly_option(TSqlParser::Assembly_optionContext *context) = 0;

    virtual std::any visitNetwork_file_share(TSqlParser::Network_file_shareContext *context) = 0;

    virtual std::any visitNetwork_computer(TSqlParser::Network_computerContext *context) = 0;

    virtual std::any visitNetwork_file_start(TSqlParser::Network_file_startContext *context) = 0;

    virtual std::any visitFile_path(TSqlParser::File_pathContext *context) = 0;

    virtual std::any visitFile_directory_path_separator(TSqlParser::File_directory_path_separatorContext *context) = 0;

    virtual std::any visitLocal_file(TSqlParser::Local_fileContext *context) = 0;

    virtual std::any visitLocal_drive(TSqlParser::Local_driveContext *context) = 0;

    virtual std::any visitMultiple_local_files(TSqlParser::Multiple_local_filesContext *context) = 0;

    virtual std::any visitMultiple_local_file_start(TSqlParser::Multiple_local_file_startContext *context) = 0;

    virtual std::any visitCreate_assembly(TSqlParser::Create_assemblyContext *context) = 0;

    virtual std::any visitDrop_assembly(TSqlParser::Drop_assemblyContext *context) = 0;

    virtual std::any visitAlter_asymmetric_key(TSqlParser::Alter_asymmetric_keyContext *context) = 0;

    virtual std::any visitAlter_asymmetric_key_start(TSqlParser::Alter_asymmetric_key_startContext *context) = 0;

    virtual std::any visitAsymmetric_key_option(TSqlParser::Asymmetric_key_optionContext *context) = 0;

    virtual std::any visitAsymmetric_key_option_start(TSqlParser::Asymmetric_key_option_startContext *context) = 0;

    virtual std::any visitAsymmetric_key_password_change_option(TSqlParser::Asymmetric_key_password_change_optionContext *context) = 0;

    virtual std::any visitCreate_asymmetric_key(TSqlParser::Create_asymmetric_keyContext *context) = 0;

    virtual std::any visitDrop_asymmetric_key(TSqlParser::Drop_asymmetric_keyContext *context) = 0;

    virtual std::any visitAlter_authorization(TSqlParser::Alter_authorizationContext *context) = 0;

    virtual std::any visitAuthorization_grantee(TSqlParser::Authorization_granteeContext *context) = 0;

    virtual std::any visitEntity_to(TSqlParser::Entity_toContext *context) = 0;

    virtual std::any visitColon_colon(TSqlParser::Colon_colonContext *context) = 0;

    virtual std::any visitAlter_authorization_start(TSqlParser::Alter_authorization_startContext *context) = 0;

    virtual std::any visitAlter_authorization_for_sql_database(TSqlParser::Alter_authorization_for_sql_databaseContext *context) = 0;

    virtual std::any visitAlter_authorization_for_azure_dw(TSqlParser::Alter_authorization_for_azure_dwContext *context) = 0;

    virtual std::any visitAlter_authorization_for_parallel_dw(TSqlParser::Alter_authorization_for_parallel_dwContext *context) = 0;

    virtual std::any visitClass_type(TSqlParser::Class_typeContext *context) = 0;

    virtual std::any visitClass_type_for_sql_database(TSqlParser::Class_type_for_sql_databaseContext *context) = 0;

    virtual std::any visitClass_type_for_azure_dw(TSqlParser::Class_type_for_azure_dwContext *context) = 0;

    virtual std::any visitClass_type_for_parallel_dw(TSqlParser::Class_type_for_parallel_dwContext *context) = 0;

    virtual std::any visitClass_type_for_grant(TSqlParser::Class_type_for_grantContext *context) = 0;

    virtual std::any visitDrop_availability_group(TSqlParser::Drop_availability_groupContext *context) = 0;

    virtual std::any visitAlter_availability_group(TSqlParser::Alter_availability_groupContext *context) = 0;

    virtual std::any visitAlter_availability_group_start(TSqlParser::Alter_availability_group_startContext *context) = 0;

    virtual std::any visitAlter_availability_group_options(TSqlParser::Alter_availability_group_optionsContext *context) = 0;

    virtual std::any visitIp_v4_failover(TSqlParser::Ip_v4_failoverContext *context) = 0;

    virtual std::any visitIp_v6_failover(TSqlParser::Ip_v6_failoverContext *context) = 0;

    virtual std::any visitCreate_or_alter_broker_priority(TSqlParser::Create_or_alter_broker_priorityContext *context) = 0;

    virtual std::any visitDrop_broker_priority(TSqlParser::Drop_broker_priorityContext *context) = 0;

    virtual std::any visitAlter_certificate(TSqlParser::Alter_certificateContext *context) = 0;

    virtual std::any visitAlter_column_encryption_key(TSqlParser::Alter_column_encryption_keyContext *context) = 0;

    virtual std::any visitCreate_column_encryption_key(TSqlParser::Create_column_encryption_keyContext *context) = 0;

    virtual std::any visitDrop_certificate(TSqlParser::Drop_certificateContext *context) = 0;

    virtual std::any visitDrop_column_encryption_key(TSqlParser::Drop_column_encryption_keyContext *context) = 0;

    virtual std::any visitDrop_column_master_key(TSqlParser::Drop_column_master_keyContext *context) = 0;

    virtual std::any visitDrop_contract(TSqlParser::Drop_contractContext *context) = 0;

    virtual std::any visitDrop_credential(TSqlParser::Drop_credentialContext *context) = 0;

    virtual std::any visitDrop_cryptograhic_provider(TSqlParser::Drop_cryptograhic_providerContext *context) = 0;

    virtual std::any visitDrop_database(TSqlParser::Drop_databaseContext *context) = 0;

    virtual std::any visitDrop_database_audit_specification(TSqlParser::Drop_database_audit_specificationContext *context) = 0;

    virtual std::any visitDrop_database_encryption_key(TSqlParser::Drop_database_encryption_keyContext *context) = 0;

    virtual std::any visitDrop_database_scoped_credential(TSqlParser::Drop_database_scoped_credentialContext *context) = 0;

    virtual std::any visitDrop_default(TSqlParser::Drop_defaultContext *context) = 0;

    virtual std::any visitDrop_endpoint(TSqlParser::Drop_endpointContext *context) = 0;

    virtual std::any visitDrop_external_data_source(TSqlParser::Drop_external_data_sourceContext *context) = 0;

    virtual std::any visitDrop_external_file_format(TSqlParser::Drop_external_file_formatContext *context) = 0;

    virtual std::any visitDrop_external_library(TSqlParser::Drop_external_libraryContext *context) = 0;

    virtual std::any visitDrop_external_resource_pool(TSqlParser::Drop_external_resource_poolContext *context) = 0;

    virtual std::any visitDrop_external_table(TSqlParser::Drop_external_tableContext *context) = 0;

    virtual std::any visitDrop_event_notifications(TSqlParser::Drop_event_notificationsContext *context) = 0;

    virtual std::any visitDrop_event_session(TSqlParser::Drop_event_sessionContext *context) = 0;

    virtual std::any visitDrop_fulltext_catalog(TSqlParser::Drop_fulltext_catalogContext *context) = 0;

    virtual std::any visitDrop_fulltext_index(TSqlParser::Drop_fulltext_indexContext *context) = 0;

    virtual std::any visitDrop_fulltext_stoplist(TSqlParser::Drop_fulltext_stoplistContext *context) = 0;

    virtual std::any visitDrop_login(TSqlParser::Drop_loginContext *context) = 0;

    virtual std::any visitDrop_master_key(TSqlParser::Drop_master_keyContext *context) = 0;

    virtual std::any visitDrop_message_type(TSqlParser::Drop_message_typeContext *context) = 0;

    virtual std::any visitDrop_partition_function(TSqlParser::Drop_partition_functionContext *context) = 0;

    virtual std::any visitDrop_partition_scheme(TSqlParser::Drop_partition_schemeContext *context) = 0;

    virtual std::any visitDrop_queue(TSqlParser::Drop_queueContext *context) = 0;

    virtual std::any visitDrop_remote_service_binding(TSqlParser::Drop_remote_service_bindingContext *context) = 0;

    virtual std::any visitDrop_resource_pool(TSqlParser::Drop_resource_poolContext *context) = 0;

    virtual std::any visitDrop_db_role(TSqlParser::Drop_db_roleContext *context) = 0;

    virtual std::any visitDrop_route(TSqlParser::Drop_routeContext *context) = 0;

    virtual std::any visitDrop_rule(TSqlParser::Drop_ruleContext *context) = 0;

    virtual std::any visitDrop_schema(TSqlParser::Drop_schemaContext *context) = 0;

    virtual std::any visitDrop_search_property_list(TSqlParser::Drop_search_property_listContext *context) = 0;

    virtual std::any visitDrop_security_policy(TSqlParser::Drop_security_policyContext *context) = 0;

    virtual std::any visitDrop_sequence(TSqlParser::Drop_sequenceContext *context) = 0;

    virtual std::any visitDrop_server_audit(TSqlParser::Drop_server_auditContext *context) = 0;

    virtual std::any visitDrop_server_audit_specification(TSqlParser::Drop_server_audit_specificationContext *context) = 0;

    virtual std::any visitDrop_server_role(TSqlParser::Drop_server_roleContext *context) = 0;

    virtual std::any visitDrop_service(TSqlParser::Drop_serviceContext *context) = 0;

    virtual std::any visitDrop_signature(TSqlParser::Drop_signatureContext *context) = 0;

    virtual std::any visitDrop_statistics_name_azure_dw_and_pdw(TSqlParser::Drop_statistics_name_azure_dw_and_pdwContext *context) = 0;

    virtual std::any visitDrop_symmetric_key(TSqlParser::Drop_symmetric_keyContext *context) = 0;

    virtual std::any visitDrop_synonym(TSqlParser::Drop_synonymContext *context) = 0;

    virtual std::any visitDrop_user(TSqlParser::Drop_userContext *context) = 0;

    virtual std::any visitDrop_workload_group(TSqlParser::Drop_workload_groupContext *context) = 0;

    virtual std::any visitDrop_xml_schema_collection(TSqlParser::Drop_xml_schema_collectionContext *context) = 0;

    virtual std::any visitDisable_trigger(TSqlParser::Disable_triggerContext *context) = 0;

    virtual std::any visitEnable_trigger(TSqlParser::Enable_triggerContext *context) = 0;

    virtual std::any visitLock_table(TSqlParser::Lock_tableContext *context) = 0;

    virtual std::any visitTruncate_table(TSqlParser::Truncate_tableContext *context) = 0;

    virtual std::any visitCreate_column_master_key(TSqlParser::Create_column_master_keyContext *context) = 0;

    virtual std::any visitAlter_credential(TSqlParser::Alter_credentialContext *context) = 0;

    virtual std::any visitCreate_credential(TSqlParser::Create_credentialContext *context) = 0;

    virtual std::any visitAlter_cryptographic_provider(TSqlParser::Alter_cryptographic_providerContext *context) = 0;

    virtual std::any visitCreate_cryptographic_provider(TSqlParser::Create_cryptographic_providerContext *context) = 0;

    virtual std::any visitCreate_endpoint(TSqlParser::Create_endpointContext *context) = 0;

    virtual std::any visitEndpoint_encryption_alogorithm_clause(TSqlParser::Endpoint_encryption_alogorithm_clauseContext *context) = 0;

    virtual std::any visitEndpoint_authentication_clause(TSqlParser::Endpoint_authentication_clauseContext *context) = 0;

    virtual std::any visitEndpoint_listener_clause(TSqlParser::Endpoint_listener_clauseContext *context) = 0;

    virtual std::any visitCreate_event_notification(TSqlParser::Create_event_notificationContext *context) = 0;

    virtual std::any visitCreate_or_alter_event_session(TSqlParser::Create_or_alter_event_sessionContext *context) = 0;

    virtual std::any visitEvent_session_predicate_expression(TSqlParser::Event_session_predicate_expressionContext *context) = 0;

    virtual std::any visitEvent_session_predicate_factor(TSqlParser::Event_session_predicate_factorContext *context) = 0;

    virtual std::any visitEvent_session_predicate_leaf(TSqlParser::Event_session_predicate_leafContext *context) = 0;

    virtual std::any visitAlter_external_data_source(TSqlParser::Alter_external_data_sourceContext *context) = 0;

    virtual std::any visitAlter_external_library(TSqlParser::Alter_external_libraryContext *context) = 0;

    virtual std::any visitCreate_external_library(TSqlParser::Create_external_libraryContext *context) = 0;

    virtual std::any visitAlter_external_resource_pool(TSqlParser::Alter_external_resource_poolContext *context) = 0;

    virtual std::any visitCreate_external_resource_pool(TSqlParser::Create_external_resource_poolContext *context) = 0;

    virtual std::any visitAlter_fulltext_catalog(TSqlParser::Alter_fulltext_catalogContext *context) = 0;

    virtual std::any visitCreate_fulltext_catalog(TSqlParser::Create_fulltext_catalogContext *context) = 0;

    virtual std::any visitAlter_fulltext_stoplist(TSqlParser::Alter_fulltext_stoplistContext *context) = 0;

    virtual std::any visitCreate_fulltext_stoplist(TSqlParser::Create_fulltext_stoplistContext *context) = 0;

    virtual std::any visitAlter_login_sql_server(TSqlParser::Alter_login_sql_serverContext *context) = 0;

    virtual std::any visitCreate_login_sql_server(TSqlParser::Create_login_sql_serverContext *context) = 0;

    virtual std::any visitAlter_login_azure_sql(TSqlParser::Alter_login_azure_sqlContext *context) = 0;

    virtual std::any visitCreate_login_azure_sql(TSqlParser::Create_login_azure_sqlContext *context) = 0;

    virtual std::any visitAlter_login_azure_sql_dw_and_pdw(TSqlParser::Alter_login_azure_sql_dw_and_pdwContext *context) = 0;

    virtual std::any visitCreate_login_pdw(TSqlParser::Create_login_pdwContext *context) = 0;

    virtual std::any visitAlter_master_key_sql_server(TSqlParser::Alter_master_key_sql_serverContext *context) = 0;

    virtual std::any visitCreate_master_key_sql_server(TSqlParser::Create_master_key_sql_serverContext *context) = 0;

    virtual std::any visitAlter_master_key_azure_sql(TSqlParser::Alter_master_key_azure_sqlContext *context) = 0;

    virtual std::any visitCreate_master_key_azure_sql(TSqlParser::Create_master_key_azure_sqlContext *context) = 0;

    virtual std::any visitAlter_message_type(TSqlParser::Alter_message_typeContext *context) = 0;

    virtual std::any visitAlter_partition_function(TSqlParser::Alter_partition_functionContext *context) = 0;

    virtual std::any visitAlter_partition_scheme(TSqlParser::Alter_partition_schemeContext *context) = 0;

    virtual std::any visitAlter_remote_service_binding(TSqlParser::Alter_remote_service_bindingContext *context) = 0;

    virtual std::any visitCreate_remote_service_binding(TSqlParser::Create_remote_service_bindingContext *context) = 0;

    virtual std::any visitCreate_resource_pool(TSqlParser::Create_resource_poolContext *context) = 0;

    virtual std::any visitAlter_resource_governor(TSqlParser::Alter_resource_governorContext *context) = 0;

    virtual std::any visitAlter_database_audit_specification(TSqlParser::Alter_database_audit_specificationContext *context) = 0;

    virtual std::any visitAudit_action_spec_group(TSqlParser::Audit_action_spec_groupContext *context) = 0;

    virtual std::any visitAudit_action_specification(TSqlParser::Audit_action_specificationContext *context) = 0;

    virtual std::any visitAction_specification(TSqlParser::Action_specificationContext *context) = 0;

    virtual std::any visitAudit_class_name(TSqlParser::Audit_class_nameContext *context) = 0;

    virtual std::any visitAudit_securable(TSqlParser::Audit_securableContext *context) = 0;

    virtual std::any visitAlter_db_role(TSqlParser::Alter_db_roleContext *context) = 0;

    virtual std::any visitCreate_database_audit_specification(TSqlParser::Create_database_audit_specificationContext *context) = 0;

    virtual std::any visitCreate_db_role(TSqlParser::Create_db_roleContext *context) = 0;

    virtual std::any visitCreate_route(TSqlParser::Create_routeContext *context) = 0;

    virtual std::any visitCreate_rule(TSqlParser::Create_ruleContext *context) = 0;

    virtual std::any visitAlter_schema_sql(TSqlParser::Alter_schema_sqlContext *context) = 0;

    virtual std::any visitCreate_schema(TSqlParser::Create_schemaContext *context) = 0;

    virtual std::any visitCreate_schema_azure_sql_dw_and_pdw(TSqlParser::Create_schema_azure_sql_dw_and_pdwContext *context) = 0;

    virtual std::any visitAlter_schema_azure_sql_dw_and_pdw(TSqlParser::Alter_schema_azure_sql_dw_and_pdwContext *context) = 0;

    virtual std::any visitCreate_search_property_list(TSqlParser::Create_search_property_listContext *context) = 0;

    virtual std::any visitCreate_security_policy(TSqlParser::Create_security_policyContext *context) = 0;

    virtual std::any visitAlter_sequence(TSqlParser::Alter_sequenceContext *context) = 0;

    virtual std::any visitCreate_sequence(TSqlParser::Create_sequenceContext *context) = 0;

    virtual std::any visitAlter_server_audit(TSqlParser::Alter_server_auditContext *context) = 0;

    virtual std::any visitCreate_server_audit(TSqlParser::Create_server_auditContext *context) = 0;

    virtual std::any visitAlter_server_audit_specification(TSqlParser::Alter_server_audit_specificationContext *context) = 0;

    virtual std::any visitCreate_server_audit_specification(TSqlParser::Create_server_audit_specificationContext *context) = 0;

    virtual std::any visitAlter_server_configuration(TSqlParser::Alter_server_configurationContext *context) = 0;

    virtual std::any visitAlter_server_role(TSqlParser::Alter_server_roleContext *context) = 0;

    virtual std::any visitCreate_server_role(TSqlParser::Create_server_roleContext *context) = 0;

    virtual std::any visitAlter_server_role_pdw(TSqlParser::Alter_server_role_pdwContext *context) = 0;

    virtual std::any visitAlter_service(TSqlParser::Alter_serviceContext *context) = 0;

    virtual std::any visitOpt_arg_clause(TSqlParser::Opt_arg_clauseContext *context) = 0;

    virtual std::any visitCreate_service(TSqlParser::Create_serviceContext *context) = 0;

    virtual std::any visitAlter_service_master_key(TSqlParser::Alter_service_master_keyContext *context) = 0;

    virtual std::any visitAlter_symmetric_key(TSqlParser::Alter_symmetric_keyContext *context) = 0;

    virtual std::any visitCreate_synonym(TSqlParser::Create_synonymContext *context) = 0;

    virtual std::any visitAlter_user(TSqlParser::Alter_userContext *context) = 0;

    virtual std::any visitCreate_user(TSqlParser::Create_userContext *context) = 0;

    virtual std::any visitCreate_user_azure_sql_dw(TSqlParser::Create_user_azure_sql_dwContext *context) = 0;

    virtual std::any visitAlter_user_azure_sql(TSqlParser::Alter_user_azure_sqlContext *context) = 0;

    virtual std::any visitAlter_workload_group(TSqlParser::Alter_workload_groupContext *context) = 0;

    virtual std::any visitCreate_workload_group(TSqlParser::Create_workload_groupContext *context) = 0;

    virtual std::any visitCreate_xml_schema_collection(TSqlParser::Create_xml_schema_collectionContext *context) = 0;

    virtual std::any visitCreate_partition_function(TSqlParser::Create_partition_functionContext *context) = 0;

    virtual std::any visitCreate_partition_scheme(TSqlParser::Create_partition_schemeContext *context) = 0;

    virtual std::any visitCreate_queue(TSqlParser::Create_queueContext *context) = 0;

    virtual std::any visitQueue_settings(TSqlParser::Queue_settingsContext *context) = 0;

    virtual std::any visitAlter_queue(TSqlParser::Alter_queueContext *context) = 0;

    virtual std::any visitQueue_action(TSqlParser::Queue_actionContext *context) = 0;

    virtual std::any visitQueue_rebuild_options(TSqlParser::Queue_rebuild_optionsContext *context) = 0;

    virtual std::any visitCreate_contract(TSqlParser::Create_contractContext *context) = 0;

    virtual std::any visitConversation_statement(TSqlParser::Conversation_statementContext *context) = 0;

    virtual std::any visitMessage_statement(TSqlParser::Message_statementContext *context) = 0;

    virtual std::any visitMerge_statement(TSqlParser::Merge_statementContext *context) = 0;

    virtual std::any visitWhen_matches(TSqlParser::When_matchesContext *context) = 0;

    virtual std::any visitMerge_matched(TSqlParser::Merge_matchedContext *context) = 0;

    virtual std::any visitMerge_not_matched(TSqlParser::Merge_not_matchedContext *context) = 0;

    virtual std::any visitDelete_statement(TSqlParser::Delete_statementContext *context) = 0;

    virtual std::any visitDelete_statement_from(TSqlParser::Delete_statement_fromContext *context) = 0;

    virtual std::any visitInsert_statement(TSqlParser::Insert_statementContext *context) = 0;

    virtual std::any visitInsert_statement_value(TSqlParser::Insert_statement_valueContext *context) = 0;

    virtual std::any visitReceive_statement(TSqlParser::Receive_statementContext *context) = 0;

    virtual std::any visitSelect_statement_standalone(TSqlParser::Select_statement_standaloneContext *context) = 0;

    virtual std::any visitSelect_statement(TSqlParser::Select_statementContext *context) = 0;

    virtual std::any visitTime(TSqlParser::TimeContext *context) = 0;

    virtual std::any visitUpdate_statement(TSqlParser::Update_statementContext *context) = 0;

    virtual std::any visitOutput_clause(TSqlParser::Output_clauseContext *context) = 0;

    virtual std::any visitOutput_dml_list_elem(TSqlParser::Output_dml_list_elemContext *context) = 0;

    virtual std::any visitCreate_database(TSqlParser::Create_databaseContext *context) = 0;

    virtual std::any visitCreate_index(TSqlParser::Create_indexContext *context) = 0;

    virtual std::any visitCreate_index_options(TSqlParser::Create_index_optionsContext *context) = 0;

    virtual std::any visitRelational_index_option(TSqlParser::Relational_index_optionContext *context) = 0;

    virtual std::any visitAlter_index(TSqlParser::Alter_indexContext *context) = 0;

    virtual std::any visitResumable_index_options(TSqlParser::Resumable_index_optionsContext *context) = 0;

    virtual std::any visitResumable_index_option(TSqlParser::Resumable_index_optionContext *context) = 0;

    virtual std::any visitReorganize_partition(TSqlParser::Reorganize_partitionContext *context) = 0;

    virtual std::any visitReorganize_options(TSqlParser::Reorganize_optionsContext *context) = 0;

    virtual std::any visitReorganize_option(TSqlParser::Reorganize_optionContext *context) = 0;

    virtual std::any visitSet_index_options(TSqlParser::Set_index_optionsContext *context) = 0;

    virtual std::any visitSet_index_option(TSqlParser::Set_index_optionContext *context) = 0;

    virtual std::any visitRebuild_partition(TSqlParser::Rebuild_partitionContext *context) = 0;

    virtual std::any visitRebuild_index_options(TSqlParser::Rebuild_index_optionsContext *context) = 0;

    virtual std::any visitRebuild_index_option(TSqlParser::Rebuild_index_optionContext *context) = 0;

    virtual std::any visitSingle_partition_rebuild_index_options(TSqlParser::Single_partition_rebuild_index_optionsContext *context) = 0;

    virtual std::any visitSingle_partition_rebuild_index_option(TSqlParser::Single_partition_rebuild_index_optionContext *context) = 0;

    virtual std::any visitOn_partitions(TSqlParser::On_partitionsContext *context) = 0;

    virtual std::any visitCreate_columnstore_index(TSqlParser::Create_columnstore_indexContext *context) = 0;

    virtual std::any visitCreate_columnstore_index_options(TSqlParser::Create_columnstore_index_optionsContext *context) = 0;

    virtual std::any visitColumnstore_index_option(TSqlParser::Columnstore_index_optionContext *context) = 0;

    virtual std::any visitCreate_nonclustered_columnstore_index(TSqlParser::Create_nonclustered_columnstore_indexContext *context) = 0;

    virtual std::any visitCreate_xml_index(TSqlParser::Create_xml_indexContext *context) = 0;

    virtual std::any visitXml_index_options(TSqlParser::Xml_index_optionsContext *context) = 0;

    virtual std::any visitXml_index_option(TSqlParser::Xml_index_optionContext *context) = 0;

    virtual std::any visitCreate_or_alter_procedure(TSqlParser::Create_or_alter_procedureContext *context) = 0;

    virtual std::any visitAs_external_name(TSqlParser::As_external_nameContext *context) = 0;

    virtual std::any visitCreate_or_alter_trigger(TSqlParser::Create_or_alter_triggerContext *context) = 0;

    virtual std::any visitCreate_or_alter_dml_trigger(TSqlParser::Create_or_alter_dml_triggerContext *context) = 0;

    virtual std::any visitDml_trigger_option(TSqlParser::Dml_trigger_optionContext *context) = 0;

    virtual std::any visitDml_trigger_operation(TSqlParser::Dml_trigger_operationContext *context) = 0;

    virtual std::any visitCreate_or_alter_ddl_trigger(TSqlParser::Create_or_alter_ddl_triggerContext *context) = 0;

    virtual std::any visitDdl_trigger_operation(TSqlParser::Ddl_trigger_operationContext *context) = 0;

    virtual std::any visitCreate_or_alter_function(TSqlParser::Create_or_alter_functionContext *context) = 0;

    virtual std::any visitFunc_body_returns_select(TSqlParser::Func_body_returns_selectContext *context) = 0;

    virtual std::any visitFunc_body_returns_table(TSqlParser::Func_body_returns_tableContext *context) = 0;

    virtual std::any visitFunc_body_returns_scalar(TSqlParser::Func_body_returns_scalarContext *context) = 0;

    virtual std::any visitProcedure_param_default_value(TSqlParser::Procedure_param_default_valueContext *context) = 0;

    virtual std::any visitProcedure_param(TSqlParser::Procedure_paramContext *context) = 0;

    virtual std::any visitProcedure_option(TSqlParser::Procedure_optionContext *context) = 0;

    virtual std::any visitFunction_option(TSqlParser::Function_optionContext *context) = 0;

    virtual std::any visitCreate_statistics(TSqlParser::Create_statisticsContext *context) = 0;

    virtual std::any visitUpdate_statistics(TSqlParser::Update_statisticsContext *context) = 0;

    virtual std::any visitUpdate_statistics_options(TSqlParser::Update_statistics_optionsContext *context) = 0;

    virtual std::any visitUpdate_statistics_option(TSqlParser::Update_statistics_optionContext *context) = 0;

    virtual std::any visitCreate_table(TSqlParser::Create_tableContext *context) = 0;

    virtual std::any visitTable_indices(TSqlParser::Table_indicesContext *context) = 0;

    virtual std::any visitTable_options(TSqlParser::Table_optionsContext *context) = 0;

    virtual std::any visitTable_option(TSqlParser::Table_optionContext *context) = 0;

    virtual std::any visitCreate_table_index_options(TSqlParser::Create_table_index_optionsContext *context) = 0;

    virtual std::any visitCreate_table_index_option(TSqlParser::Create_table_index_optionContext *context) = 0;

    virtual std::any visitCreate_view(TSqlParser::Create_viewContext *context) = 0;

    virtual std::any visitView_attribute(TSqlParser::View_attributeContext *context) = 0;

    virtual std::any visitAlter_table(TSqlParser::Alter_tableContext *context) = 0;

    virtual std::any visitSwitch_partition(TSqlParser::Switch_partitionContext *context) = 0;

    virtual std::any visitLow_priority_lock_wait(TSqlParser::Low_priority_lock_waitContext *context) = 0;

    virtual std::any visitAlter_database(TSqlParser::Alter_databaseContext *context) = 0;

    virtual std::any visitAdd_or_modify_files(TSqlParser::Add_or_modify_filesContext *context) = 0;

    virtual std::any visitFilespec(TSqlParser::FilespecContext *context) = 0;

    virtual std::any visitAdd_or_modify_filegroups(TSqlParser::Add_or_modify_filegroupsContext *context) = 0;

    virtual std::any visitFilegroup_updatability_option(TSqlParser::Filegroup_updatability_optionContext *context) = 0;

    virtual std::any visitDatabase_optionspec(TSqlParser::Database_optionspecContext *context) = 0;

    virtual std::any visitAuto_option(TSqlParser::Auto_optionContext *context) = 0;

    virtual std::any visitChange_tracking_option(TSqlParser::Change_tracking_optionContext *context) = 0;

    virtual std::any visitChange_tracking_option_list(TSqlParser::Change_tracking_option_listContext *context) = 0;

    virtual std::any visitContainment_option(TSqlParser::Containment_optionContext *context) = 0;

    virtual std::any visitCursor_option(TSqlParser::Cursor_optionContext *context) = 0;

    virtual std::any visitAlter_endpoint(TSqlParser::Alter_endpointContext *context) = 0;

    virtual std::any visitDatabase_mirroring_option(TSqlParser::Database_mirroring_optionContext *context) = 0;

    virtual std::any visitMirroring_set_option(TSqlParser::Mirroring_set_optionContext *context) = 0;

    virtual std::any visitMirroring_partner(TSqlParser::Mirroring_partnerContext *context) = 0;

    virtual std::any visitMirroring_witness(TSqlParser::Mirroring_witnessContext *context) = 0;

    virtual std::any visitWitness_partner_equal(TSqlParser::Witness_partner_equalContext *context) = 0;

    virtual std::any visitPartner_option(TSqlParser::Partner_optionContext *context) = 0;

    virtual std::any visitWitness_option(TSqlParser::Witness_optionContext *context) = 0;

    virtual std::any visitWitness_server(TSqlParser::Witness_serverContext *context) = 0;

    virtual std::any visitPartner_server(TSqlParser::Partner_serverContext *context) = 0;

    virtual std::any visitMirroring_host_port_seperator(TSqlParser::Mirroring_host_port_seperatorContext *context) = 0;

    virtual std::any visitPartner_server_tcp_prefix(TSqlParser::Partner_server_tcp_prefixContext *context) = 0;

    virtual std::any visitPort_number(TSqlParser::Port_numberContext *context) = 0;

    virtual std::any visitHost(TSqlParser::HostContext *context) = 0;

    virtual std::any visitDate_correlation_optimization_option(TSqlParser::Date_correlation_optimization_optionContext *context) = 0;

    virtual std::any visitDb_encryption_option(TSqlParser::Db_encryption_optionContext *context) = 0;

    virtual std::any visitDb_state_option(TSqlParser::Db_state_optionContext *context) = 0;

    virtual std::any visitDb_update_option(TSqlParser::Db_update_optionContext *context) = 0;

    virtual std::any visitDb_user_access_option(TSqlParser::Db_user_access_optionContext *context) = 0;

    virtual std::any visitDelayed_durability_option(TSqlParser::Delayed_durability_optionContext *context) = 0;

    virtual std::any visitExternal_access_option(TSqlParser::External_access_optionContext *context) = 0;

    virtual std::any visitHadr_options(TSqlParser::Hadr_optionsContext *context) = 0;

    virtual std::any visitMixed_page_allocation_option(TSqlParser::Mixed_page_allocation_optionContext *context) = 0;

    virtual std::any visitParameterization_option(TSqlParser::Parameterization_optionContext *context) = 0;

    virtual std::any visitRecovery_option(TSqlParser::Recovery_optionContext *context) = 0;

    virtual std::any visitService_broker_option(TSqlParser::Service_broker_optionContext *context) = 0;

    virtual std::any visitSnapshot_option(TSqlParser::Snapshot_optionContext *context) = 0;

    virtual std::any visitSql_option(TSqlParser::Sql_optionContext *context) = 0;

    virtual std::any visitTarget_recovery_time_option(TSqlParser::Target_recovery_time_optionContext *context) = 0;

    virtual std::any visitTermination(TSqlParser::TerminationContext *context) = 0;

    virtual std::any visitDrop_index(TSqlParser::Drop_indexContext *context) = 0;

    virtual std::any visitDrop_relational_or_xml_or_spatial_index(TSqlParser::Drop_relational_or_xml_or_spatial_indexContext *context) = 0;

    virtual std::any visitDrop_backward_compatible_index(TSqlParser::Drop_backward_compatible_indexContext *context) = 0;

    virtual std::any visitDrop_procedure(TSqlParser::Drop_procedureContext *context) = 0;

    virtual std::any visitDrop_trigger(TSqlParser::Drop_triggerContext *context) = 0;

    virtual std::any visitDrop_dml_trigger(TSqlParser::Drop_dml_triggerContext *context) = 0;

    virtual std::any visitDrop_ddl_trigger(TSqlParser::Drop_ddl_triggerContext *context) = 0;

    virtual std::any visitDrop_function(TSqlParser::Drop_functionContext *context) = 0;

    virtual std::any visitDrop_statistics(TSqlParser::Drop_statisticsContext *context) = 0;

    virtual std::any visitDrop_table(TSqlParser::Drop_tableContext *context) = 0;

    virtual std::any visitDrop_view(TSqlParser::Drop_viewContext *context) = 0;

    virtual std::any visitCreate_type(TSqlParser::Create_typeContext *context) = 0;

    virtual std::any visitDrop_type(TSqlParser::Drop_typeContext *context) = 0;

    virtual std::any visitRowset_function_limited(TSqlParser::Rowset_function_limitedContext *context) = 0;

    virtual std::any visitOpenquery(TSqlParser::OpenqueryContext *context) = 0;

    virtual std::any visitOpendatasource(TSqlParser::OpendatasourceContext *context) = 0;

    virtual std::any visitDeclare_statement(TSqlParser::Declare_statementContext *context) = 0;

    virtual std::any visitXml_declaration(TSqlParser::Xml_declarationContext *context) = 0;

    virtual std::any visitCursor_statement(TSqlParser::Cursor_statementContext *context) = 0;

    virtual std::any visitBackup_database(TSqlParser::Backup_databaseContext *context) = 0;

    virtual std::any visitBackup_log(TSqlParser::Backup_logContext *context) = 0;

    virtual std::any visitBackup_certificate(TSqlParser::Backup_certificateContext *context) = 0;

    virtual std::any visitBackup_master_key(TSqlParser::Backup_master_keyContext *context) = 0;

    virtual std::any visitBackup_service_master_key(TSqlParser::Backup_service_master_keyContext *context) = 0;

    virtual std::any visitKill_statement(TSqlParser::Kill_statementContext *context) = 0;

    virtual std::any visitKill_process(TSqlParser::Kill_processContext *context) = 0;

    virtual std::any visitKill_query_notification(TSqlParser::Kill_query_notificationContext *context) = 0;

    virtual std::any visitKill_stats_job(TSqlParser::Kill_stats_jobContext *context) = 0;

    virtual std::any visitExecute_statement(TSqlParser::Execute_statementContext *context) = 0;

    virtual std::any visitExecute_body_batch(TSqlParser::Execute_body_batchContext *context) = 0;

    virtual std::any visitExecute_body(TSqlParser::Execute_bodyContext *context) = 0;

    virtual std::any visitExecute_statement_arg(TSqlParser::Execute_statement_argContext *context) = 0;

    virtual std::any visitExecute_statement_arg_named(TSqlParser::Execute_statement_arg_namedContext *context) = 0;

    virtual std::any visitExecute_statement_arg_unnamed(TSqlParser::Execute_statement_arg_unnamedContext *context) = 0;

    virtual std::any visitExecute_parameter(TSqlParser::Execute_parameterContext *context) = 0;

    virtual std::any visitExecute_var_string(TSqlParser::Execute_var_stringContext *context) = 0;

    virtual std::any visitSecurity_statement(TSqlParser::Security_statementContext *context) = 0;

    virtual std::any visitPrincipal_id(TSqlParser::Principal_idContext *context) = 0;

    virtual std::any visitCreate_certificate(TSqlParser::Create_certificateContext *context) = 0;

    virtual std::any visitExisting_keys(TSqlParser::Existing_keysContext *context) = 0;

    virtual std::any visitPrivate_key_options(TSqlParser::Private_key_optionsContext *context) = 0;

    virtual std::any visitGenerate_new_keys(TSqlParser::Generate_new_keysContext *context) = 0;

    virtual std::any visitDate_options(TSqlParser::Date_optionsContext *context) = 0;

    virtual std::any visitOpen_key(TSqlParser::Open_keyContext *context) = 0;

    virtual std::any visitClose_key(TSqlParser::Close_keyContext *context) = 0;

    virtual std::any visitCreate_key(TSqlParser::Create_keyContext *context) = 0;

    virtual std::any visitKey_options(TSqlParser::Key_optionsContext *context) = 0;

    virtual std::any visitAlgorithm(TSqlParser::AlgorithmContext *context) = 0;

    virtual std::any visitEncryption_mechanism(TSqlParser::Encryption_mechanismContext *context) = 0;

    virtual std::any visitDecryption_mechanism(TSqlParser::Decryption_mechanismContext *context) = 0;

    virtual std::any visitGrant_permission(TSqlParser::Grant_permissionContext *context) = 0;

    virtual std::any visitSet_statement(TSqlParser::Set_statementContext *context) = 0;

    virtual std::any visitTransaction_statement(TSqlParser::Transaction_statementContext *context) = 0;

    virtual std::any visitGo_statement(TSqlParser::Go_statementContext *context) = 0;

    virtual std::any visitUse_statement(TSqlParser::Use_statementContext *context) = 0;

    virtual std::any visitSetuser_statement(TSqlParser::Setuser_statementContext *context) = 0;

    virtual std::any visitReconfigure_statement(TSqlParser::Reconfigure_statementContext *context) = 0;

    virtual std::any visitShutdown_statement(TSqlParser::Shutdown_statementContext *context) = 0;

    virtual std::any visitCheckpoint_statement(TSqlParser::Checkpoint_statementContext *context) = 0;

    virtual std::any visitDbcc_checkalloc_option(TSqlParser::Dbcc_checkalloc_optionContext *context) = 0;

    virtual std::any visitDbcc_checkalloc(TSqlParser::Dbcc_checkallocContext *context) = 0;

    virtual std::any visitDbcc_checkcatalog(TSqlParser::Dbcc_checkcatalogContext *context) = 0;

    virtual std::any visitDbcc_checkconstraints_option(TSqlParser::Dbcc_checkconstraints_optionContext *context) = 0;

    virtual std::any visitDbcc_checkconstraints(TSqlParser::Dbcc_checkconstraintsContext *context) = 0;

    virtual std::any visitDbcc_checkdb_table_option(TSqlParser::Dbcc_checkdb_table_optionContext *context) = 0;

    virtual std::any visitDbcc_checkdb(TSqlParser::Dbcc_checkdbContext *context) = 0;

    virtual std::any visitDbcc_checkfilegroup_option(TSqlParser::Dbcc_checkfilegroup_optionContext *context) = 0;

    virtual std::any visitDbcc_checkfilegroup(TSqlParser::Dbcc_checkfilegroupContext *context) = 0;

    virtual std::any visitDbcc_checktable(TSqlParser::Dbcc_checktableContext *context) = 0;

    virtual std::any visitDbcc_cleantable(TSqlParser::Dbcc_cleantableContext *context) = 0;

    virtual std::any visitDbcc_clonedatabase_option(TSqlParser::Dbcc_clonedatabase_optionContext *context) = 0;

    virtual std::any visitDbcc_clonedatabase(TSqlParser::Dbcc_clonedatabaseContext *context) = 0;

    virtual std::any visitDbcc_pdw_showspaceused(TSqlParser::Dbcc_pdw_showspaceusedContext *context) = 0;

    virtual std::any visitDbcc_proccache(TSqlParser::Dbcc_proccacheContext *context) = 0;

    virtual std::any visitDbcc_showcontig_option(TSqlParser::Dbcc_showcontig_optionContext *context) = 0;

    virtual std::any visitDbcc_showcontig(TSqlParser::Dbcc_showcontigContext *context) = 0;

    virtual std::any visitDbcc_shrinklog(TSqlParser::Dbcc_shrinklogContext *context) = 0;

    virtual std::any visitDbcc_dbreindex(TSqlParser::Dbcc_dbreindexContext *context) = 0;

    virtual std::any visitDbcc_dll_free(TSqlParser::Dbcc_dll_freeContext *context) = 0;

    virtual std::any visitDbcc_dropcleanbuffers(TSqlParser::Dbcc_dropcleanbuffersContext *context) = 0;

    virtual std::any visitDbcc_clause(TSqlParser::Dbcc_clauseContext *context) = 0;

    virtual std::any visitExecute_clause(TSqlParser::Execute_clauseContext *context) = 0;

    virtual std::any visitDeclare_local(TSqlParser::Declare_localContext *context) = 0;

    virtual std::any visitTable_type_definition(TSqlParser::Table_type_definitionContext *context) = 0;

    virtual std::any visitTable_type_indices(TSqlParser::Table_type_indicesContext *context) = 0;

    virtual std::any visitXml_type_definition(TSqlParser::Xml_type_definitionContext *context) = 0;

    virtual std::any visitXml_schema_collection(TSqlParser::Xml_schema_collectionContext *context) = 0;

    virtual std::any visitColumn_def_table_constraints(TSqlParser::Column_def_table_constraintsContext *context) = 0;

    virtual std::any visitColumn_def_table_constraint(TSqlParser::Column_def_table_constraintContext *context) = 0;

    virtual std::any visitColumn_definition(TSqlParser::Column_definitionContext *context) = 0;

    virtual std::any visitColumn_definition_element(TSqlParser::Column_definition_elementContext *context) = 0;

    virtual std::any visitColumn_modifier(TSqlParser::Column_modifierContext *context) = 0;

    virtual std::any visitMaterialized_column_definition(TSqlParser::Materialized_column_definitionContext *context) = 0;

    virtual std::any visitColumn_constraint(TSqlParser::Column_constraintContext *context) = 0;

    virtual std::any visitColumn_index(TSqlParser::Column_indexContext *context) = 0;

    virtual std::any visitOn_partition_or_filegroup(TSqlParser::On_partition_or_filegroupContext *context) = 0;

    virtual std::any visitTable_constraint(TSqlParser::Table_constraintContext *context) = 0;

    virtual std::any visitConnection_node(TSqlParser::Connection_nodeContext *context) = 0;

    virtual std::any visitPrimary_key_options(TSqlParser::Primary_key_optionsContext *context) = 0;

    virtual std::any visitForeign_key_options(TSqlParser::Foreign_key_optionsContext *context) = 0;

    virtual std::any visitCheck_constraint(TSqlParser::Check_constraintContext *context) = 0;

    virtual std::any visitOn_delete(TSqlParser::On_deleteContext *context) = 0;

    virtual std::any visitOn_update(TSqlParser::On_updateContext *context) = 0;

    virtual std::any visitAlter_table_index_options(TSqlParser::Alter_table_index_optionsContext *context) = 0;

    virtual std::any visitAlter_table_index_option(TSqlParser::Alter_table_index_optionContext *context) = 0;

    virtual std::any visitDeclare_cursor(TSqlParser::Declare_cursorContext *context) = 0;

    virtual std::any visitDeclare_set_cursor_common(TSqlParser::Declare_set_cursor_commonContext *context) = 0;

    virtual std::any visitDeclare_set_cursor_common_partial(TSqlParser::Declare_set_cursor_common_partialContext *context) = 0;

    virtual std::any visitFetch_cursor(TSqlParser::Fetch_cursorContext *context) = 0;

    virtual std::any visitSet_special(TSqlParser::Set_specialContext *context) = 0;

    virtual std::any visitSpecial_list(TSqlParser::Special_listContext *context) = 0;

    virtual std::any visitConstant_LOCAL_ID(TSqlParser::Constant_LOCAL_IDContext *context) = 0;

    virtual std::any visitExpression(TSqlParser::ExpressionContext *context) = 0;

    virtual std::any visitParameter(TSqlParser::ParameterContext *context) = 0;

    virtual std::any visitTime_zone(TSqlParser::Time_zoneContext *context) = 0;

    virtual std::any visitPrimitive_expression(TSqlParser::Primitive_expressionContext *context) = 0;

    virtual std::any visitCase_expression(TSqlParser::Case_expressionContext *context) = 0;

    virtual std::any visitUnary_operator_expression(TSqlParser::Unary_operator_expressionContext *context) = 0;

    virtual std::any visitBracket_expression(TSqlParser::Bracket_expressionContext *context) = 0;

    virtual std::any visitSubquery(TSqlParser::SubqueryContext *context) = 0;

    virtual std::any visitWith_expression(TSqlParser::With_expressionContext *context) = 0;

    virtual std::any visitCommon_table_expression(TSqlParser::Common_table_expressionContext *context) = 0;

    virtual std::any visitUpdate_elem(TSqlParser::Update_elemContext *context) = 0;

    virtual std::any visitUpdate_elem_merge(TSqlParser::Update_elem_mergeContext *context) = 0;

    virtual std::any visitSearch_condition(TSqlParser::Search_conditionContext *context) = 0;

    virtual std::any visitPredicate(TSqlParser::PredicateContext *context) = 0;

    virtual std::any visitQuery_expression(TSqlParser::Query_expressionContext *context) = 0;

    virtual std::any visitSql_union(TSqlParser::Sql_unionContext *context) = 0;

    virtual std::any visitQuery_specification(TSqlParser::Query_specificationContext *context) = 0;

    virtual std::any visitTop_clause(TSqlParser::Top_clauseContext *context) = 0;

    virtual std::any visitTop_percent(TSqlParser::Top_percentContext *context) = 0;

    virtual std::any visitTop_count(TSqlParser::Top_countContext *context) = 0;

    virtual std::any visitOrder_by_clause(TSqlParser::Order_by_clauseContext *context) = 0;

    virtual std::any visitSelect_order_by_clause(TSqlParser::Select_order_by_clauseContext *context) = 0;

    virtual std::any visitFor_clause(TSqlParser::For_clauseContext *context) = 0;

    virtual std::any visitXml_common_directives(TSqlParser::Xml_common_directivesContext *context) = 0;

    virtual std::any visitOrder_by_expression(TSqlParser::Order_by_expressionContext *context) = 0;

    virtual std::any visitGrouping_sets_item(TSqlParser::Grouping_sets_itemContext *context) = 0;

    virtual std::any visitGroup_by_item(TSqlParser::Group_by_itemContext *context) = 0;

    virtual std::any visitOption_clause(TSqlParser::Option_clauseContext *context) = 0;

    virtual std::any visitOption(TSqlParser::OptionContext *context) = 0;

    virtual std::any visitOptimize_for_arg(TSqlParser::Optimize_for_argContext *context) = 0;

    virtual std::any visitSelect_list(TSqlParser::Select_listContext *context) = 0;

    virtual std::any visitUdt_method_arguments(TSqlParser::Udt_method_argumentsContext *context) = 0;

    virtual std::any visitAsterisk(TSqlParser::AsteriskContext *context) = 0;

    virtual std::any visitUdt_elem(TSqlParser::Udt_elemContext *context) = 0;

    virtual std::any visitExpression_elem(TSqlParser::Expression_elemContext *context) = 0;

    virtual std::any visitSelect_list_elem(TSqlParser::Select_list_elemContext *context) = 0;

    virtual std::any visitTable_sources(TSqlParser::Table_sourcesContext *context) = 0;

    virtual std::any visitNon_ansi_join(TSqlParser::Non_ansi_joinContext *context) = 0;

    virtual std::any visitTable_source(TSqlParser::Table_sourceContext *context) = 0;

    virtual std::any visitTable_source_item(TSqlParser::Table_source_itemContext *context) = 0;

    virtual std::any visitOpen_xml(TSqlParser::Open_xmlContext *context) = 0;

    virtual std::any visitOpen_json(TSqlParser::Open_jsonContext *context) = 0;

    virtual std::any visitJson_declaration(TSqlParser::Json_declarationContext *context) = 0;

    virtual std::any visitJson_column_declaration(TSqlParser::Json_column_declarationContext *context) = 0;

    virtual std::any visitSchema_declaration(TSqlParser::Schema_declarationContext *context) = 0;

    virtual std::any visitColumn_declaration(TSqlParser::Column_declarationContext *context) = 0;

    virtual std::any visitChange_table(TSqlParser::Change_tableContext *context) = 0;

    virtual std::any visitChange_table_changes(TSqlParser::Change_table_changesContext *context) = 0;

    virtual std::any visitChange_table_version(TSqlParser::Change_table_versionContext *context) = 0;

    virtual std::any visitJoin_part(TSqlParser::Join_partContext *context) = 0;

    virtual std::any visitJoin_on(TSqlParser::Join_onContext *context) = 0;

    virtual std::any visitCross_join(TSqlParser::Cross_joinContext *context) = 0;

    virtual std::any visitApply_(TSqlParser::Apply_Context *context) = 0;

    virtual std::any visitPivot(TSqlParser::PivotContext *context) = 0;

    virtual std::any visitUnpivot(TSqlParser::UnpivotContext *context) = 0;

    virtual std::any visitPivot_clause(TSqlParser::Pivot_clauseContext *context) = 0;

    virtual std::any visitUnpivot_clause(TSqlParser::Unpivot_clauseContext *context) = 0;

    virtual std::any visitFull_column_name_list(TSqlParser::Full_column_name_listContext *context) = 0;

    virtual std::any visitRowset_function(TSqlParser::Rowset_functionContext *context) = 0;

    virtual std::any visitBulk_option(TSqlParser::Bulk_optionContext *context) = 0;

    virtual std::any visitDerived_table(TSqlParser::Derived_tableContext *context) = 0;

    virtual std::any visitRANKING_WINDOWED_FUNC(TSqlParser::RANKING_WINDOWED_FUNCContext *context) = 0;

    virtual std::any visitAGGREGATE_WINDOWED_FUNC(TSqlParser::AGGREGATE_WINDOWED_FUNCContext *context) = 0;

    virtual std::any visitANALYTIC_WINDOWED_FUNC(TSqlParser::ANALYTIC_WINDOWED_FUNCContext *context) = 0;

    virtual std::any visitBUILT_IN_FUNC(TSqlParser::BUILT_IN_FUNCContext *context) = 0;

    virtual std::any visitSCALAR_FUNCTION(TSqlParser::SCALAR_FUNCTIONContext *context) = 0;

    virtual std::any visitFREE_TEXT(TSqlParser::FREE_TEXTContext *context) = 0;

    virtual std::any visitPARTITION_FUNC(TSqlParser::PARTITION_FUNCContext *context) = 0;

    virtual std::any visitHIERARCHYID_METHOD(TSqlParser::HIERARCHYID_METHODContext *context) = 0;

    virtual std::any visitPartition_function(TSqlParser::Partition_functionContext *context) = 0;

    virtual std::any visitFreetext_function(TSqlParser::Freetext_functionContext *context) = 0;

    virtual std::any visitFreetext_predicate(TSqlParser::Freetext_predicateContext *context) = 0;

    virtual std::any visitJson_key_value(TSqlParser::Json_key_valueContext *context) = 0;

    virtual std::any visitJson_null_clause(TSqlParser::Json_null_clauseContext *context) = 0;

    virtual std::any visitAPP_NAME(TSqlParser::APP_NAMEContext *context) = 0;

    virtual std::any visitAPPLOCK_MODE(TSqlParser::APPLOCK_MODEContext *context) = 0;

    virtual std::any visitAPPLOCK_TEST(TSqlParser::APPLOCK_TESTContext *context) = 0;

    virtual std::any visitASSEMBLYPROPERTY(TSqlParser::ASSEMBLYPROPERTYContext *context) = 0;

    virtual std::any visitCOL_LENGTH(TSqlParser::COL_LENGTHContext *context) = 0;

    virtual std::any visitCOL_NAME(TSqlParser::COL_NAMEContext *context) = 0;

    virtual std::any visitCOLUMNPROPERTY(TSqlParser::COLUMNPROPERTYContext *context) = 0;

    virtual std::any visitDATABASEPROPERTYEX(TSqlParser::DATABASEPROPERTYEXContext *context) = 0;

    virtual std::any visitDB_ID(TSqlParser::DB_IDContext *context) = 0;

    virtual std::any visitDB_NAME(TSqlParser::DB_NAMEContext *context) = 0;

    virtual std::any visitFILE_ID(TSqlParser::FILE_IDContext *context) = 0;

    virtual std::any visitFILE_IDEX(TSqlParser::FILE_IDEXContext *context) = 0;

    virtual std::any visitFILE_NAME(TSqlParser::FILE_NAMEContext *context) = 0;

    virtual std::any visitFILEGROUP_ID(TSqlParser::FILEGROUP_IDContext *context) = 0;

    virtual std::any visitFILEGROUP_NAME(TSqlParser::FILEGROUP_NAMEContext *context) = 0;

    virtual std::any visitFILEGROUPPROPERTY(TSqlParser::FILEGROUPPROPERTYContext *context) = 0;

    virtual std::any visitFILEPROPERTY(TSqlParser::FILEPROPERTYContext *context) = 0;

    virtual std::any visitFILEPROPERTYEX(TSqlParser::FILEPROPERTYEXContext *context) = 0;

    virtual std::any visitFULLTEXTCATALOGPROPERTY(TSqlParser::FULLTEXTCATALOGPROPERTYContext *context) = 0;

    virtual std::any visitFULLTEXTSERVICEPROPERTY(TSqlParser::FULLTEXTSERVICEPROPERTYContext *context) = 0;

    virtual std::any visitINDEX_COL(TSqlParser::INDEX_COLContext *context) = 0;

    virtual std::any visitINDEXKEY_PROPERTY(TSqlParser::INDEXKEY_PROPERTYContext *context) = 0;

    virtual std::any visitINDEXPROPERTY(TSqlParser::INDEXPROPERTYContext *context) = 0;

    virtual std::any visitNEXT_VALUE_FOR(TSqlParser::NEXT_VALUE_FORContext *context) = 0;

    virtual std::any visitOBJECT_DEFINITION(TSqlParser::OBJECT_DEFINITIONContext *context) = 0;

    virtual std::any visitOBJECT_ID(TSqlParser::OBJECT_IDContext *context) = 0;

    virtual std::any visitOBJECT_NAME(TSqlParser::OBJECT_NAMEContext *context) = 0;

    virtual std::any visitOBJECT_SCHEMA_NAME(TSqlParser::OBJECT_SCHEMA_NAMEContext *context) = 0;

    virtual std::any visitOBJECTPROPERTY(TSqlParser::OBJECTPROPERTYContext *context) = 0;

    virtual std::any visitOBJECTPROPERTYEX(TSqlParser::OBJECTPROPERTYEXContext *context) = 0;

    virtual std::any visitORIGINAL_DB_NAME(TSqlParser::ORIGINAL_DB_NAMEContext *context) = 0;

    virtual std::any visitPARSENAME(TSqlParser::PARSENAMEContext *context) = 0;

    virtual std::any visitSCHEMA_ID(TSqlParser::SCHEMA_IDContext *context) = 0;

    virtual std::any visitSCHEMA_NAME(TSqlParser::SCHEMA_NAMEContext *context) = 0;

    virtual std::any visitSCOPE_IDENTITY(TSqlParser::SCOPE_IDENTITYContext *context) = 0;

    virtual std::any visitSERVERPROPERTY(TSqlParser::SERVERPROPERTYContext *context) = 0;

    virtual std::any visitSTATS_DATE(TSqlParser::STATS_DATEContext *context) = 0;

    virtual std::any visitTYPE_ID(TSqlParser::TYPE_IDContext *context) = 0;

    virtual std::any visitTYPE_NAME(TSqlParser::TYPE_NAMEContext *context) = 0;

    virtual std::any visitTYPEPROPERTY(TSqlParser::TYPEPROPERTYContext *context) = 0;

    virtual std::any visitASCII(TSqlParser::ASCIIContext *context) = 0;

    virtual std::any visitCHAR(TSqlParser::CHARContext *context) = 0;

    virtual std::any visitCHARINDEX(TSqlParser::CHARINDEXContext *context) = 0;

    virtual std::any visitCONCAT(TSqlParser::CONCATContext *context) = 0;

    virtual std::any visitCONCAT_WS(TSqlParser::CONCAT_WSContext *context) = 0;

    virtual std::any visitDIFFERENCE(TSqlParser::DIFFERENCEContext *context) = 0;

    virtual std::any visitFORMAT(TSqlParser::FORMATContext *context) = 0;

    virtual std::any visitLEFT(TSqlParser::LEFTContext *context) = 0;

    virtual std::any visitLEN(TSqlParser::LENContext *context) = 0;

    virtual std::any visitLOWER(TSqlParser::LOWERContext *context) = 0;

    virtual std::any visitLTRIM(TSqlParser::LTRIMContext *context) = 0;

    virtual std::any visitNCHAR(TSqlParser::NCHARContext *context) = 0;

    virtual std::any visitPATINDEX(TSqlParser::PATINDEXContext *context) = 0;

    virtual std::any visitQUOTENAME(TSqlParser::QUOTENAMEContext *context) = 0;

    virtual std::any visitREPLACE(TSqlParser::REPLACEContext *context) = 0;

    virtual std::any visitREPLICATE(TSqlParser::REPLICATEContext *context) = 0;

    virtual std::any visitREVERSE(TSqlParser::REVERSEContext *context) = 0;

    virtual std::any visitRIGHT(TSqlParser::RIGHTContext *context) = 0;

    virtual std::any visitRTRIM(TSqlParser::RTRIMContext *context) = 0;

    virtual std::any visitSOUNDEX(TSqlParser::SOUNDEXContext *context) = 0;

    virtual std::any visitSPACE(TSqlParser::SPACEContext *context) = 0;

    virtual std::any visitSTR(TSqlParser::STRContext *context) = 0;

    virtual std::any visitSTRINGAGG(TSqlParser::STRINGAGGContext *context) = 0;

    virtual std::any visitSTRING_ESCAPE(TSqlParser::STRING_ESCAPEContext *context) = 0;

    virtual std::any visitSTUFF(TSqlParser::STUFFContext *context) = 0;

    virtual std::any visitSUBSTRING(TSqlParser::SUBSTRINGContext *context) = 0;

    virtual std::any visitTRANSLATE(TSqlParser::TRANSLATEContext *context) = 0;

    virtual std::any visitTRIM(TSqlParser::TRIMContext *context) = 0;

    virtual std::any visitUNICODE(TSqlParser::UNICODEContext *context) = 0;

    virtual std::any visitUPPER(TSqlParser::UPPERContext *context) = 0;

    virtual std::any visitBINARY_CHECKSUM(TSqlParser::BINARY_CHECKSUMContext *context) = 0;

    virtual std::any visitCHECKSUM(TSqlParser::CHECKSUMContext *context) = 0;

    virtual std::any visitCOMPRESS(TSqlParser::COMPRESSContext *context) = 0;

    virtual std::any visitCONNECTIONPROPERTY(TSqlParser::CONNECTIONPROPERTYContext *context) = 0;

    virtual std::any visitCONTEXT_INFO(TSqlParser::CONTEXT_INFOContext *context) = 0;

    virtual std::any visitCURRENT_REQUEST_ID(TSqlParser::CURRENT_REQUEST_IDContext *context) = 0;

    virtual std::any visitCURRENT_TRANSACTION_ID(TSqlParser::CURRENT_TRANSACTION_IDContext *context) = 0;

    virtual std::any visitDECOMPRESS(TSqlParser::DECOMPRESSContext *context) = 0;

    virtual std::any visitERROR_LINE(TSqlParser::ERROR_LINEContext *context) = 0;

    virtual std::any visitERROR_MESSAGE(TSqlParser::ERROR_MESSAGEContext *context) = 0;

    virtual std::any visitERROR_NUMBER(TSqlParser::ERROR_NUMBERContext *context) = 0;

    virtual std::any visitERROR_PROCEDURE(TSqlParser::ERROR_PROCEDUREContext *context) = 0;

    virtual std::any visitERROR_SEVERITY(TSqlParser::ERROR_SEVERITYContext *context) = 0;

    virtual std::any visitERROR_STATE(TSqlParser::ERROR_STATEContext *context) = 0;

    virtual std::any visitFORMATMESSAGE(TSqlParser::FORMATMESSAGEContext *context) = 0;

    virtual std::any visitGET_FILESTREAM_TRANSACTION_CONTEXT(TSqlParser::GET_FILESTREAM_TRANSACTION_CONTEXTContext *context) = 0;

    virtual std::any visitGETANSINULL(TSqlParser::GETANSINULLContext *context) = 0;

    virtual std::any visitHOST_ID(TSqlParser::HOST_IDContext *context) = 0;

    virtual std::any visitHOST_NAME(TSqlParser::HOST_NAMEContext *context) = 0;

    virtual std::any visitISNULL(TSqlParser::ISNULLContext *context) = 0;

    virtual std::any visitISNUMERIC(TSqlParser::ISNUMERICContext *context) = 0;

    virtual std::any visitMIN_ACTIVE_ROWVERSION(TSqlParser::MIN_ACTIVE_ROWVERSIONContext *context) = 0;

    virtual std::any visitNEWID(TSqlParser::NEWIDContext *context) = 0;

    virtual std::any visitNEWSEQUENTIALID(TSqlParser::NEWSEQUENTIALIDContext *context) = 0;

    virtual std::any visitROWCOUNT_BIG(TSqlParser::ROWCOUNT_BIGContext *context) = 0;

    virtual std::any visitSESSION_CONTEXT(TSqlParser::SESSION_CONTEXTContext *context) = 0;

    virtual std::any visitXACT_STATE(TSqlParser::XACT_STATEContext *context) = 0;

    virtual std::any visitCAST(TSqlParser::CASTContext *context) = 0;

    virtual std::any visitTRY_CAST(TSqlParser::TRY_CASTContext *context) = 0;

    virtual std::any visitCONVERT(TSqlParser::CONVERTContext *context) = 0;

    virtual std::any visitCOALESCE(TSqlParser::COALESCEContext *context) = 0;

    virtual std::any visitCURSOR_ROWS(TSqlParser::CURSOR_ROWSContext *context) = 0;

    virtual std::any visitFETCH_STATUS(TSqlParser::FETCH_STATUSContext *context) = 0;

    virtual std::any visitCURSOR_STATUS(TSqlParser::CURSOR_STATUSContext *context) = 0;

    virtual std::any visitCERT_ID(TSqlParser::CERT_IDContext *context) = 0;

    virtual std::any visitDATALENGTH(TSqlParser::DATALENGTHContext *context) = 0;

    virtual std::any visitIDENT_CURRENT(TSqlParser::IDENT_CURRENTContext *context) = 0;

    virtual std::any visitIDENT_INCR(TSqlParser::IDENT_INCRContext *context) = 0;

    virtual std::any visitIDENT_SEED(TSqlParser::IDENT_SEEDContext *context) = 0;

    virtual std::any visitIDENTITY(TSqlParser::IDENTITYContext *context) = 0;

    virtual std::any visitSQL_VARIANT_PROPERTY(TSqlParser::SQL_VARIANT_PROPERTYContext *context) = 0;

    virtual std::any visitCURRENT_DATE(TSqlParser::CURRENT_DATEContext *context) = 0;

    virtual std::any visitCURRENT_TIMESTAMP(TSqlParser::CURRENT_TIMESTAMPContext *context) = 0;

    virtual std::any visitCURRENT_TIMEZONE(TSqlParser::CURRENT_TIMEZONEContext *context) = 0;

    virtual std::any visitCURRENT_TIMEZONE_ID(TSqlParser::CURRENT_TIMEZONE_IDContext *context) = 0;

    virtual std::any visitDATE_BUCKET(TSqlParser::DATE_BUCKETContext *context) = 0;

    virtual std::any visitDATEADD(TSqlParser::DATEADDContext *context) = 0;

    virtual std::any visitDATEDIFF(TSqlParser::DATEDIFFContext *context) = 0;

    virtual std::any visitDATEDIFF_BIG(TSqlParser::DATEDIFF_BIGContext *context) = 0;

    virtual std::any visitDATEFROMPARTS(TSqlParser::DATEFROMPARTSContext *context) = 0;

    virtual std::any visitDATENAME(TSqlParser::DATENAMEContext *context) = 0;

    virtual std::any visitDATEPART(TSqlParser::DATEPARTContext *context) = 0;

    virtual std::any visitDATETIME2FROMPARTS(TSqlParser::DATETIME2FROMPARTSContext *context) = 0;

    virtual std::any visitDATETIMEFROMPARTS(TSqlParser::DATETIMEFROMPARTSContext *context) = 0;

    virtual std::any visitDATETIMEOFFSETFROMPARTS(TSqlParser::DATETIMEOFFSETFROMPARTSContext *context) = 0;

    virtual std::any visitDATETRUNC(TSqlParser::DATETRUNCContext *context) = 0;

    virtual std::any visitDAY(TSqlParser::DAYContext *context) = 0;

    virtual std::any visitEOMONTH(TSqlParser::EOMONTHContext *context) = 0;

    virtual std::any visitGETDATE(TSqlParser::GETDATEContext *context) = 0;

    virtual std::any visitGETUTCDATE(TSqlParser::GETUTCDATEContext *context) = 0;

    virtual std::any visitISDATE(TSqlParser::ISDATEContext *context) = 0;

    virtual std::any visitMONTH(TSqlParser::MONTHContext *context) = 0;

    virtual std::any visitSMALLDATETIMEFROMPARTS(TSqlParser::SMALLDATETIMEFROMPARTSContext *context) = 0;

    virtual std::any visitSWITCHOFFSET(TSqlParser::SWITCHOFFSETContext *context) = 0;

    virtual std::any visitSYSDATETIME(TSqlParser::SYSDATETIMEContext *context) = 0;

    virtual std::any visitSYSDATETIMEOFFSET(TSqlParser::SYSDATETIMEOFFSETContext *context) = 0;

    virtual std::any visitSYSUTCDATETIME(TSqlParser::SYSUTCDATETIMEContext *context) = 0;

    virtual std::any visitTIMEFROMPARTS(TSqlParser::TIMEFROMPARTSContext *context) = 0;

    virtual std::any visitTODATETIMEOFFSET(TSqlParser::TODATETIMEOFFSETContext *context) = 0;

    virtual std::any visitYEAR(TSqlParser::YEARContext *context) = 0;

    virtual std::any visitNULLIF(TSqlParser::NULLIFContext *context) = 0;

    virtual std::any visitPARSE(TSqlParser::PARSEContext *context) = 0;

    virtual std::any visitXML_DATA_TYPE_FUNC(TSqlParser::XML_DATA_TYPE_FUNCContext *context) = 0;

    virtual std::any visitIIF(TSqlParser::IIFContext *context) = 0;

    virtual std::any visitISJSON(TSqlParser::ISJSONContext *context) = 0;

    virtual std::any visitJSON_OBJECT(TSqlParser::JSON_OBJECTContext *context) = 0;

    virtual std::any visitJSON_ARRAY(TSqlParser::JSON_ARRAYContext *context) = 0;

    virtual std::any visitJSON_VALUE(TSqlParser::JSON_VALUEContext *context) = 0;

    virtual std::any visitJSON_QUERY(TSqlParser::JSON_QUERYContext *context) = 0;

    virtual std::any visitJSON_MODIFY(TSqlParser::JSON_MODIFYContext *context) = 0;

    virtual std::any visitJSON_PATH_EXISTS(TSqlParser::JSON_PATH_EXISTSContext *context) = 0;

    virtual std::any visitABS(TSqlParser::ABSContext *context) = 0;

    virtual std::any visitACOS(TSqlParser::ACOSContext *context) = 0;

    virtual std::any visitASIN(TSqlParser::ASINContext *context) = 0;

    virtual std::any visitATAN(TSqlParser::ATANContext *context) = 0;

    virtual std::any visitATN2(TSqlParser::ATN2Context *context) = 0;

    virtual std::any visitCEILING(TSqlParser::CEILINGContext *context) = 0;

    virtual std::any visitCOS(TSqlParser::COSContext *context) = 0;

    virtual std::any visitCOT(TSqlParser::COTContext *context) = 0;

    virtual std::any visitDEGREES(TSqlParser::DEGREESContext *context) = 0;

    virtual std::any visitEXP(TSqlParser::EXPContext *context) = 0;

    virtual std::any visitFLOOR(TSqlParser::FLOORContext *context) = 0;

    virtual std::any visitLOG(TSqlParser::LOGContext *context) = 0;

    virtual std::any visitLOG10(TSqlParser::LOG10Context *context) = 0;

    virtual std::any visitPI(TSqlParser::PIContext *context) = 0;

    virtual std::any visitPOWER(TSqlParser::POWERContext *context) = 0;

    virtual std::any visitRADIANS(TSqlParser::RADIANSContext *context) = 0;

    virtual std::any visitRAND(TSqlParser::RANDContext *context) = 0;

    virtual std::any visitROUND(TSqlParser::ROUNDContext *context) = 0;

    virtual std::any visitMATH_SIGN(TSqlParser::MATH_SIGNContext *context) = 0;

    virtual std::any visitSIN(TSqlParser::SINContext *context) = 0;

    virtual std::any visitSQRT(TSqlParser::SQRTContext *context) = 0;

    virtual std::any visitSQUARE(TSqlParser::SQUAREContext *context) = 0;

    virtual std::any visitTAN(TSqlParser::TANContext *context) = 0;

    virtual std::any visitGREATEST(TSqlParser::GREATESTContext *context) = 0;

    virtual std::any visitLEAST(TSqlParser::LEASTContext *context) = 0;

    virtual std::any visitCERTENCODED(TSqlParser::CERTENCODEDContext *context) = 0;

    virtual std::any visitCERTPRIVATEKEY(TSqlParser::CERTPRIVATEKEYContext *context) = 0;

    virtual std::any visitCURRENT_USER(TSqlParser::CURRENT_USERContext *context) = 0;

    virtual std::any visitDATABASE_PRINCIPAL_ID(TSqlParser::DATABASE_PRINCIPAL_IDContext *context) = 0;

    virtual std::any visitHAS_DBACCESS(TSqlParser::HAS_DBACCESSContext *context) = 0;

    virtual std::any visitHAS_PERMS_BY_NAME(TSqlParser::HAS_PERMS_BY_NAMEContext *context) = 0;

    virtual std::any visitIS_MEMBER(TSqlParser::IS_MEMBERContext *context) = 0;

    virtual std::any visitIS_ROLEMEMBER(TSqlParser::IS_ROLEMEMBERContext *context) = 0;

    virtual std::any visitIS_SRVROLEMEMBER(TSqlParser::IS_SRVROLEMEMBERContext *context) = 0;

    virtual std::any visitLOGINPROPERTY(TSqlParser::LOGINPROPERTYContext *context) = 0;

    virtual std::any visitORIGINAL_LOGIN(TSqlParser::ORIGINAL_LOGINContext *context) = 0;

    virtual std::any visitPERMISSIONS(TSqlParser::PERMISSIONSContext *context) = 0;

    virtual std::any visitPWDENCRYPT(TSqlParser::PWDENCRYPTContext *context) = 0;

    virtual std::any visitPWDCOMPARE(TSqlParser::PWDCOMPAREContext *context) = 0;

    virtual std::any visitSESSION_USER(TSqlParser::SESSION_USERContext *context) = 0;

    virtual std::any visitSESSIONPROPERTY(TSqlParser::SESSIONPROPERTYContext *context) = 0;

    virtual std::any visitSUSER_ID(TSqlParser::SUSER_IDContext *context) = 0;

    virtual std::any visitSUSER_SNAME(TSqlParser::SUSER_SNAMEContext *context) = 0;

    virtual std::any visitSUSER_SID(TSqlParser::SUSER_SIDContext *context) = 0;

    virtual std::any visitSYSTEM_USER(TSqlParser::SYSTEM_USERContext *context) = 0;

    virtual std::any visitUSER(TSqlParser::USERContext *context) = 0;

    virtual std::any visitUSER_ID(TSqlParser::USER_IDContext *context) = 0;

    virtual std::any visitUSER_NAME(TSqlParser::USER_NAMEContext *context) = 0;

    virtual std::any visitXml_data_type_methods(TSqlParser::Xml_data_type_methodsContext *context) = 0;

    virtual std::any visitDateparts_9(TSqlParser::Dateparts_9Context *context) = 0;

    virtual std::any visitDateparts_12(TSqlParser::Dateparts_12Context *context) = 0;

    virtual std::any visitDateparts_15(TSqlParser::Dateparts_15Context *context) = 0;

    virtual std::any visitDateparts_datetrunc(TSqlParser::Dateparts_datetruncContext *context) = 0;

    virtual std::any visitValue_method(TSqlParser::Value_methodContext *context) = 0;

    virtual std::any visitValue_call(TSqlParser::Value_callContext *context) = 0;

    virtual std::any visitQuery_method(TSqlParser::Query_methodContext *context) = 0;

    virtual std::any visitQuery_call(TSqlParser::Query_callContext *context) = 0;

    virtual std::any visitExist_method(TSqlParser::Exist_methodContext *context) = 0;

    virtual std::any visitExist_call(TSqlParser::Exist_callContext *context) = 0;

    virtual std::any visitModify_method(TSqlParser::Modify_methodContext *context) = 0;

    virtual std::any visitModify_call(TSqlParser::Modify_callContext *context) = 0;

    virtual std::any visitHierarchyid_call(TSqlParser::Hierarchyid_callContext *context) = 0;

    virtual std::any visitHierarchyid_static_method(TSqlParser::Hierarchyid_static_methodContext *context) = 0;

    virtual std::any visitNodes_method(TSqlParser::Nodes_methodContext *context) = 0;

    virtual std::any visitSwitch_section(TSqlParser::Switch_sectionContext *context) = 0;

    virtual std::any visitSwitch_search_condition_section(TSqlParser::Switch_search_condition_sectionContext *context) = 0;

    virtual std::any visitAs_column_alias(TSqlParser::As_column_aliasContext *context) = 0;

    virtual std::any visitAs_table_alias(TSqlParser::As_table_aliasContext *context) = 0;

    virtual std::any visitTable_alias(TSqlParser::Table_aliasContext *context) = 0;

    virtual std::any visitWith_table_hints(TSqlParser::With_table_hintsContext *context) = 0;

    virtual std::any visitDeprecated_table_hint(TSqlParser::Deprecated_table_hintContext *context) = 0;

    virtual std::any visitSybase_legacy_hints(TSqlParser::Sybase_legacy_hintsContext *context) = 0;

    virtual std::any visitSybase_legacy_hint(TSqlParser::Sybase_legacy_hintContext *context) = 0;

    virtual std::any visitTable_hint(TSqlParser::Table_hintContext *context) = 0;

    virtual std::any visitIndex_value(TSqlParser::Index_valueContext *context) = 0;

    virtual std::any visitColumn_alias_list(TSqlParser::Column_alias_listContext *context) = 0;

    virtual std::any visitColumn_alias(TSqlParser::Column_aliasContext *context) = 0;

    virtual std::any visitTable_value_constructor(TSqlParser::Table_value_constructorContext *context) = 0;

    virtual std::any visitExpression_list_(TSqlParser::Expression_list_Context *context) = 0;

    virtual std::any visitRanking_windowed_function(TSqlParser::Ranking_windowed_functionContext *context) = 0;

    virtual std::any visitAggregate_windowed_function(TSqlParser::Aggregate_windowed_functionContext *context) = 0;

    virtual std::any visitAnalytic_windowed_function(TSqlParser::Analytic_windowed_functionContext *context) = 0;

    virtual std::any visitAll_distinct_expression(TSqlParser::All_distinct_expressionContext *context) = 0;

    virtual std::any visitOver_clause(TSqlParser::Over_clauseContext *context) = 0;

    virtual std::any visitRow_or_range_clause(TSqlParser::Row_or_range_clauseContext *context) = 0;

    virtual std::any visitWindow_frame_extent(TSqlParser::Window_frame_extentContext *context) = 0;

    virtual std::any visitWindow_frame_bound(TSqlParser::Window_frame_boundContext *context) = 0;

    virtual std::any visitWindow_frame_preceding(TSqlParser::Window_frame_precedingContext *context) = 0;

    virtual std::any visitWindow_frame_following(TSqlParser::Window_frame_followingContext *context) = 0;

    virtual std::any visitCreate_database_option(TSqlParser::Create_database_optionContext *context) = 0;

    virtual std::any visitDatabase_filestream_option(TSqlParser::Database_filestream_optionContext *context) = 0;

    virtual std::any visitDatabase_file_spec(TSqlParser::Database_file_specContext *context) = 0;

    virtual std::any visitFile_group(TSqlParser::File_groupContext *context) = 0;

    virtual std::any visitFile_spec(TSqlParser::File_specContext *context) = 0;

    virtual std::any visitEntity_name(TSqlParser::Entity_nameContext *context) = 0;

    virtual std::any visitEntity_name_for_azure_dw(TSqlParser::Entity_name_for_azure_dwContext *context) = 0;

    virtual std::any visitEntity_name_for_parallel_dw(TSqlParser::Entity_name_for_parallel_dwContext *context) = 0;

    virtual std::any visitFull_table_name(TSqlParser::Full_table_nameContext *context) = 0;

    virtual std::any visitTable_name(TSqlParser::Table_nameContext *context) = 0;

    virtual std::any visitSimple_name(TSqlParser::Simple_nameContext *context) = 0;

    virtual std::any visitFunc_proc_name_schema(TSqlParser::Func_proc_name_schemaContext *context) = 0;

    virtual std::any visitFunc_proc_name_database_schema(TSqlParser::Func_proc_name_database_schemaContext *context) = 0;

    virtual std::any visitFunc_proc_name_server_database_schema(TSqlParser::Func_proc_name_server_database_schemaContext *context) = 0;

    virtual std::any visitDdl_object(TSqlParser::Ddl_objectContext *context) = 0;

    virtual std::any visitFull_column_name(TSqlParser::Full_column_nameContext *context) = 0;

    virtual std::any visitColumn_name_list_with_order(TSqlParser::Column_name_list_with_orderContext *context) = 0;

    virtual std::any visitInsert_column_name_list(TSqlParser::Insert_column_name_listContext *context) = 0;

    virtual std::any visitInsert_column_id(TSqlParser::Insert_column_idContext *context) = 0;

    virtual std::any visitColumn_name_list(TSqlParser::Column_name_listContext *context) = 0;

    virtual std::any visitCursor_name(TSqlParser::Cursor_nameContext *context) = 0;

    virtual std::any visitOn_off(TSqlParser::On_offContext *context) = 0;

    virtual std::any visitClustered(TSqlParser::ClusteredContext *context) = 0;

    virtual std::any visitNull_notnull(TSqlParser::Null_notnullContext *context) = 0;

    virtual std::any visitScalar_function_name(TSqlParser::Scalar_function_nameContext *context) = 0;

    virtual std::any visitBegin_conversation_timer(TSqlParser::Begin_conversation_timerContext *context) = 0;

    virtual std::any visitBegin_conversation_dialog(TSqlParser::Begin_conversation_dialogContext *context) = 0;

    virtual std::any visitContract_name(TSqlParser::Contract_nameContext *context) = 0;

    virtual std::any visitService_name(TSqlParser::Service_nameContext *context) = 0;

    virtual std::any visitEnd_conversation(TSqlParser::End_conversationContext *context) = 0;

    virtual std::any visitWaitfor_conversation(TSqlParser::Waitfor_conversationContext *context) = 0;

    virtual std::any visitGet_conversation(TSqlParser::Get_conversationContext *context) = 0;

    virtual std::any visitQueue_id(TSqlParser::Queue_idContext *context) = 0;

    virtual std::any visitSend_conversation(TSqlParser::Send_conversationContext *context) = 0;

    virtual std::any visitData_type(TSqlParser::Data_typeContext *context) = 0;

    virtual std::any visitConstant(TSqlParser::ConstantContext *context) = 0;

    virtual std::any visitPrimitive_constant(TSqlParser::Primitive_constantContext *context) = 0;

    virtual std::any visitKeyword(TSqlParser::KeywordContext *context) = 0;

    virtual std::any visitId_(TSqlParser::Id_Context *context) = 0;

    virtual std::any visitSimple_id(TSqlParser::Simple_idContext *context) = 0;

    virtual std::any visitId_or_string(TSqlParser::Id_or_stringContext *context) = 0;

    virtual std::any visitComparison_operator(TSqlParser::Comparison_operatorContext *context) = 0;

    virtual std::any visitAssignment_operator(TSqlParser::Assignment_operatorContext *context) = 0;

    virtual std::any visitFile_size(TSqlParser::File_sizeContext *context) = 0;


};

