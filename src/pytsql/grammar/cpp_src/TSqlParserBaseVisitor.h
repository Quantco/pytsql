
// Generated from TSqlParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "TSqlParserVisitor.h"


/**
 * This class provides an empty implementation of TSqlParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TSqlParserBaseVisitor : public TSqlParserVisitor {
public:

  virtual std::any visitTsql_file(TSqlParser::Tsql_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBatch(TSqlParser::BatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBatch_level_statement(TSqlParser::Batch_level_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_clauses(TSqlParser::Sql_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDml_clause(TSqlParser::Dml_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDdl_clause(TSqlParser::Ddl_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackup_statement(TSqlParser::Backup_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCfl_statement(TSqlParser::Cfl_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock_statement(TSqlParser::Block_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreak_statement(TSqlParser::Break_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinue_statement(TSqlParser::Continue_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGoto_statement(TSqlParser::Goto_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_statement(TSqlParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(TSqlParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrow_statement(TSqlParser::Throw_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrow_error_number(TSqlParser::Throw_error_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrow_message(TSqlParser::Throw_messageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrow_state(TSqlParser::Throw_stateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTry_catch_statement(TSqlParser::Try_catch_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWaitfor_statement(TSqlParser::Waitfor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_statement(TSqlParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_statement(TSqlParser::Print_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaiseerror_statement(TSqlParser::Raiseerror_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmpty_statement(TSqlParser::Empty_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnother_statement(TSqlParser::Another_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_application_role(TSqlParser::Alter_application_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_xml_schema_collection(TSqlParser::Alter_xml_schema_collectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_application_role(TSqlParser::Create_application_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_aggregate(TSqlParser::Drop_aggregateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_application_role(TSqlParser::Drop_application_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly(TSqlParser::Alter_assemblyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_start(TSqlParser::Alter_assembly_startContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_clause(TSqlParser::Alter_assembly_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_from_clause(TSqlParser::Alter_assembly_from_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_from_clause_start(TSqlParser::Alter_assembly_from_clause_startContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_drop_clause(TSqlParser::Alter_assembly_drop_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_drop_multiple_files(TSqlParser::Alter_assembly_drop_multiple_filesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_drop(TSqlParser::Alter_assembly_dropContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_add_clause(TSqlParser::Alter_assembly_add_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_asssembly_add_clause_start(TSqlParser::Alter_asssembly_add_clause_startContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_client_file_clause(TSqlParser::Alter_assembly_client_file_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_file_name(TSqlParser::Alter_assembly_file_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_file_bits(TSqlParser::Alter_assembly_file_bitsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_as(TSqlParser::Alter_assembly_asContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_with_clause(TSqlParser::Alter_assembly_with_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_assembly_with(TSqlParser::Alter_assembly_withContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClient_assembly_specifier(TSqlParser::Client_assembly_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssembly_option(TSqlParser::Assembly_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNetwork_file_share(TSqlParser::Network_file_shareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNetwork_computer(TSqlParser::Network_computerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNetwork_file_start(TSqlParser::Network_file_startContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_path(TSqlParser::File_pathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_directory_path_separator(TSqlParser::File_directory_path_separatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocal_file(TSqlParser::Local_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocal_drive(TSqlParser::Local_driveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiple_local_files(TSqlParser::Multiple_local_filesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiple_local_file_start(TSqlParser::Multiple_local_file_startContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_assembly(TSqlParser::Create_assemblyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_assembly(TSqlParser::Drop_assemblyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_asymmetric_key(TSqlParser::Alter_asymmetric_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_asymmetric_key_start(TSqlParser::Alter_asymmetric_key_startContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsymmetric_key_option(TSqlParser::Asymmetric_key_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsymmetric_key_option_start(TSqlParser::Asymmetric_key_option_startContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsymmetric_key_password_change_option(TSqlParser::Asymmetric_key_password_change_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_asymmetric_key(TSqlParser::Create_asymmetric_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_asymmetric_key(TSqlParser::Drop_asymmetric_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_authorization(TSqlParser::Alter_authorizationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAuthorization_grantee(TSqlParser::Authorization_granteeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntity_to(TSqlParser::Entity_toContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColon_colon(TSqlParser::Colon_colonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_authorization_start(TSqlParser::Alter_authorization_startContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_authorization_for_sql_database(TSqlParser::Alter_authorization_for_sql_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_authorization_for_azure_dw(TSqlParser::Alter_authorization_for_azure_dwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_authorization_for_parallel_dw(TSqlParser::Alter_authorization_for_parallel_dwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_type(TSqlParser::Class_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_type_for_sql_database(TSqlParser::Class_type_for_sql_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_type_for_azure_dw(TSqlParser::Class_type_for_azure_dwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_type_for_parallel_dw(TSqlParser::Class_type_for_parallel_dwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_type_for_grant(TSqlParser::Class_type_for_grantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_availability_group(TSqlParser::Drop_availability_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_availability_group(TSqlParser::Alter_availability_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_availability_group_start(TSqlParser::Alter_availability_group_startContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_availability_group_options(TSqlParser::Alter_availability_group_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIp_v4_failover(TSqlParser::Ip_v4_failoverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIp_v6_failover(TSqlParser::Ip_v6_failoverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_or_alter_broker_priority(TSqlParser::Create_or_alter_broker_priorityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_broker_priority(TSqlParser::Drop_broker_priorityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_certificate(TSqlParser::Alter_certificateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_column_encryption_key(TSqlParser::Alter_column_encryption_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_column_encryption_key(TSqlParser::Create_column_encryption_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_certificate(TSqlParser::Drop_certificateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_column_encryption_key(TSqlParser::Drop_column_encryption_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_column_master_key(TSqlParser::Drop_column_master_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_contract(TSqlParser::Drop_contractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_credential(TSqlParser::Drop_credentialContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_cryptograhic_provider(TSqlParser::Drop_cryptograhic_providerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_database(TSqlParser::Drop_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_database_audit_specification(TSqlParser::Drop_database_audit_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_database_encryption_key(TSqlParser::Drop_database_encryption_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_database_scoped_credential(TSqlParser::Drop_database_scoped_credentialContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_default(TSqlParser::Drop_defaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_endpoint(TSqlParser::Drop_endpointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_external_data_source(TSqlParser::Drop_external_data_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_external_file_format(TSqlParser::Drop_external_file_formatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_external_library(TSqlParser::Drop_external_libraryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_external_resource_pool(TSqlParser::Drop_external_resource_poolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_external_table(TSqlParser::Drop_external_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_event_notifications(TSqlParser::Drop_event_notificationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_event_session(TSqlParser::Drop_event_sessionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_fulltext_catalog(TSqlParser::Drop_fulltext_catalogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_fulltext_index(TSqlParser::Drop_fulltext_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_fulltext_stoplist(TSqlParser::Drop_fulltext_stoplistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_login(TSqlParser::Drop_loginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_master_key(TSqlParser::Drop_master_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_message_type(TSqlParser::Drop_message_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_partition_function(TSqlParser::Drop_partition_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_partition_scheme(TSqlParser::Drop_partition_schemeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_queue(TSqlParser::Drop_queueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_remote_service_binding(TSqlParser::Drop_remote_service_bindingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_resource_pool(TSqlParser::Drop_resource_poolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_db_role(TSqlParser::Drop_db_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_route(TSqlParser::Drop_routeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_rule(TSqlParser::Drop_ruleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_schema(TSqlParser::Drop_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_search_property_list(TSqlParser::Drop_search_property_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_security_policy(TSqlParser::Drop_security_policyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_sequence(TSqlParser::Drop_sequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_server_audit(TSqlParser::Drop_server_auditContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_server_audit_specification(TSqlParser::Drop_server_audit_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_server_role(TSqlParser::Drop_server_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_service(TSqlParser::Drop_serviceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_signature(TSqlParser::Drop_signatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_statistics_name_azure_dw_and_pdw(TSqlParser::Drop_statistics_name_azure_dw_and_pdwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_symmetric_key(TSqlParser::Drop_symmetric_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_synonym(TSqlParser::Drop_synonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_user(TSqlParser::Drop_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_workload_group(TSqlParser::Drop_workload_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_xml_schema_collection(TSqlParser::Drop_xml_schema_collectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDisable_trigger(TSqlParser::Disable_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnable_trigger(TSqlParser::Enable_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLock_table(TSqlParser::Lock_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTruncate_table(TSqlParser::Truncate_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_column_master_key(TSqlParser::Create_column_master_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_credential(TSqlParser::Alter_credentialContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_credential(TSqlParser::Create_credentialContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_cryptographic_provider(TSqlParser::Alter_cryptographic_providerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_cryptographic_provider(TSqlParser::Create_cryptographic_providerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_endpoint(TSqlParser::Create_endpointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndpoint_encryption_alogorithm_clause(TSqlParser::Endpoint_encryption_alogorithm_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndpoint_authentication_clause(TSqlParser::Endpoint_authentication_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndpoint_listener_clause(TSqlParser::Endpoint_listener_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_event_notification(TSqlParser::Create_event_notificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_or_alter_event_session(TSqlParser::Create_or_alter_event_sessionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_session_predicate_expression(TSqlParser::Event_session_predicate_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_session_predicate_factor(TSqlParser::Event_session_predicate_factorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_session_predicate_leaf(TSqlParser::Event_session_predicate_leafContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_external_data_source(TSqlParser::Alter_external_data_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_external_library(TSqlParser::Alter_external_libraryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_external_library(TSqlParser::Create_external_libraryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_external_resource_pool(TSqlParser::Alter_external_resource_poolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_external_resource_pool(TSqlParser::Create_external_resource_poolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_fulltext_catalog(TSqlParser::Alter_fulltext_catalogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_fulltext_catalog(TSqlParser::Create_fulltext_catalogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_fulltext_stoplist(TSqlParser::Alter_fulltext_stoplistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_fulltext_stoplist(TSqlParser::Create_fulltext_stoplistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_login_sql_server(TSqlParser::Alter_login_sql_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_login_sql_server(TSqlParser::Create_login_sql_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_login_azure_sql(TSqlParser::Alter_login_azure_sqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_login_azure_sql(TSqlParser::Create_login_azure_sqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_login_azure_sql_dw_and_pdw(TSqlParser::Alter_login_azure_sql_dw_and_pdwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_login_pdw(TSqlParser::Create_login_pdwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_master_key_sql_server(TSqlParser::Alter_master_key_sql_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_master_key_sql_server(TSqlParser::Create_master_key_sql_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_master_key_azure_sql(TSqlParser::Alter_master_key_azure_sqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_master_key_azure_sql(TSqlParser::Create_master_key_azure_sqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_message_type(TSqlParser::Alter_message_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_partition_function(TSqlParser::Alter_partition_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_partition_scheme(TSqlParser::Alter_partition_schemeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_remote_service_binding(TSqlParser::Alter_remote_service_bindingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_remote_service_binding(TSqlParser::Create_remote_service_bindingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_resource_pool(TSqlParser::Create_resource_poolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_resource_governor(TSqlParser::Alter_resource_governorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_database_audit_specification(TSqlParser::Alter_database_audit_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAudit_action_spec_group(TSqlParser::Audit_action_spec_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAudit_action_specification(TSqlParser::Audit_action_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAction_specification(TSqlParser::Action_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAudit_class_name(TSqlParser::Audit_class_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAudit_securable(TSqlParser::Audit_securableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_db_role(TSqlParser::Alter_db_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_database_audit_specification(TSqlParser::Create_database_audit_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_db_role(TSqlParser::Create_db_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_route(TSqlParser::Create_routeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_rule(TSqlParser::Create_ruleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_schema_sql(TSqlParser::Alter_schema_sqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_schema(TSqlParser::Create_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_schema_azure_sql_dw_and_pdw(TSqlParser::Create_schema_azure_sql_dw_and_pdwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_schema_azure_sql_dw_and_pdw(TSqlParser::Alter_schema_azure_sql_dw_and_pdwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_search_property_list(TSqlParser::Create_search_property_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_security_policy(TSqlParser::Create_security_policyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_sequence(TSqlParser::Alter_sequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_sequence(TSqlParser::Create_sequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_server_audit(TSqlParser::Alter_server_auditContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_server_audit(TSqlParser::Create_server_auditContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_server_audit_specification(TSqlParser::Alter_server_audit_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_server_audit_specification(TSqlParser::Create_server_audit_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_server_configuration(TSqlParser::Alter_server_configurationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_server_role(TSqlParser::Alter_server_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_server_role(TSqlParser::Create_server_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_server_role_pdw(TSqlParser::Alter_server_role_pdwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_service(TSqlParser::Alter_serviceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpt_arg_clause(TSqlParser::Opt_arg_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_service(TSqlParser::Create_serviceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_service_master_key(TSqlParser::Alter_service_master_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_symmetric_key(TSqlParser::Alter_symmetric_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_synonym(TSqlParser::Create_synonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_user(TSqlParser::Alter_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_user(TSqlParser::Create_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_user_azure_sql_dw(TSqlParser::Create_user_azure_sql_dwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_user_azure_sql(TSqlParser::Alter_user_azure_sqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_workload_group(TSqlParser::Alter_workload_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_workload_group(TSqlParser::Create_workload_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_xml_schema_collection(TSqlParser::Create_xml_schema_collectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_partition_function(TSqlParser::Create_partition_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_partition_scheme(TSqlParser::Create_partition_schemeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_queue(TSqlParser::Create_queueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueue_settings(TSqlParser::Queue_settingsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_queue(TSqlParser::Alter_queueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueue_action(TSqlParser::Queue_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueue_rebuild_options(TSqlParser::Queue_rebuild_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_contract(TSqlParser::Create_contractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConversation_statement(TSqlParser::Conversation_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMessage_statement(TSqlParser::Message_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMerge_statement(TSqlParser::Merge_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhen_matches(TSqlParser::When_matchesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMerge_matched(TSqlParser::Merge_matchedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMerge_not_matched(TSqlParser::Merge_not_matchedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelete_statement(TSqlParser::Delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelete_statement_from(TSqlParser::Delete_statement_fromContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_statement(TSqlParser::Insert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_statement_value(TSqlParser::Insert_statement_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReceive_statement(TSqlParser::Receive_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_statement_standalone(TSqlParser::Select_statement_standaloneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_statement(TSqlParser::Select_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTime(TSqlParser::TimeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_statement(TSqlParser::Update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutput_clause(TSqlParser::Output_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutput_dml_list_elem(TSqlParser::Output_dml_list_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_database(TSqlParser::Create_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_index(TSqlParser::Create_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_index_options(TSqlParser::Create_index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelational_index_option(TSqlParser::Relational_index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_index(TSqlParser::Alter_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResumable_index_options(TSqlParser::Resumable_index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResumable_index_option(TSqlParser::Resumable_index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReorganize_partition(TSqlParser::Reorganize_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReorganize_options(TSqlParser::Reorganize_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReorganize_option(TSqlParser::Reorganize_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_index_options(TSqlParser::Set_index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_index_option(TSqlParser::Set_index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRebuild_partition(TSqlParser::Rebuild_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRebuild_index_options(TSqlParser::Rebuild_index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRebuild_index_option(TSqlParser::Rebuild_index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingle_partition_rebuild_index_options(TSqlParser::Single_partition_rebuild_index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingle_partition_rebuild_index_option(TSqlParser::Single_partition_rebuild_index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOn_partitions(TSqlParser::On_partitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_columnstore_index(TSqlParser::Create_columnstore_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_columnstore_index_options(TSqlParser::Create_columnstore_index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnstore_index_option(TSqlParser::Columnstore_index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_nonclustered_columnstore_index(TSqlParser::Create_nonclustered_columnstore_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_xml_index(TSqlParser::Create_xml_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_index_options(TSqlParser::Xml_index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_index_option(TSqlParser::Xml_index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_or_alter_procedure(TSqlParser::Create_or_alter_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_external_name(TSqlParser::As_external_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_or_alter_trigger(TSqlParser::Create_or_alter_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_or_alter_dml_trigger(TSqlParser::Create_or_alter_dml_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDml_trigger_option(TSqlParser::Dml_trigger_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDml_trigger_operation(TSqlParser::Dml_trigger_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_or_alter_ddl_trigger(TSqlParser::Create_or_alter_ddl_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDdl_trigger_operation(TSqlParser::Ddl_trigger_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_or_alter_function(TSqlParser::Create_or_alter_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_body_returns_select(TSqlParser::Func_body_returns_selectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_body_returns_table(TSqlParser::Func_body_returns_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_body_returns_scalar(TSqlParser::Func_body_returns_scalarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure_param_default_value(TSqlParser::Procedure_param_default_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure_param(TSqlParser::Procedure_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure_option(TSqlParser::Procedure_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_option(TSqlParser::Function_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_statistics(TSqlParser::Create_statisticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_statistics(TSqlParser::Update_statisticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_statistics_options(TSqlParser::Update_statistics_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_statistics_option(TSqlParser::Update_statistics_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_table(TSqlParser::Create_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_indices(TSqlParser::Table_indicesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_options(TSqlParser::Table_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_option(TSqlParser::Table_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_table_index_options(TSqlParser::Create_table_index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_table_index_option(TSqlParser::Create_table_index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_view(TSqlParser::Create_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitView_attribute(TSqlParser::View_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_table(TSqlParser::Alter_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_partition(TSqlParser::Switch_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLow_priority_lock_wait(TSqlParser::Low_priority_lock_waitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_database(TSqlParser::Alter_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd_or_modify_files(TSqlParser::Add_or_modify_filesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilespec(TSqlParser::FilespecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd_or_modify_filegroups(TSqlParser::Add_or_modify_filegroupsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilegroup_updatability_option(TSqlParser::Filegroup_updatability_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatabase_optionspec(TSqlParser::Database_optionspecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAuto_option(TSqlParser::Auto_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChange_tracking_option(TSqlParser::Change_tracking_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChange_tracking_option_list(TSqlParser::Change_tracking_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContainment_option(TSqlParser::Containment_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_option(TSqlParser::Cursor_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_endpoint(TSqlParser::Alter_endpointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatabase_mirroring_option(TSqlParser::Database_mirroring_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMirroring_set_option(TSqlParser::Mirroring_set_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMirroring_partner(TSqlParser::Mirroring_partnerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMirroring_witness(TSqlParser::Mirroring_witnessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWitness_partner_equal(TSqlParser::Witness_partner_equalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartner_option(TSqlParser::Partner_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWitness_option(TSqlParser::Witness_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWitness_server(TSqlParser::Witness_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartner_server(TSqlParser::Partner_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMirroring_host_port_seperator(TSqlParser::Mirroring_host_port_seperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartner_server_tcp_prefix(TSqlParser::Partner_server_tcp_prefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPort_number(TSqlParser::Port_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHost(TSqlParser::HostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDate_correlation_optimization_option(TSqlParser::Date_correlation_optimization_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_encryption_option(TSqlParser::Db_encryption_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_state_option(TSqlParser::Db_state_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_update_option(TSqlParser::Db_update_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_user_access_option(TSqlParser::Db_user_access_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelayed_durability_option(TSqlParser::Delayed_durability_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternal_access_option(TSqlParser::External_access_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHadr_options(TSqlParser::Hadr_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMixed_page_allocation_option(TSqlParser::Mixed_page_allocation_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterization_option(TSqlParser::Parameterization_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecovery_option(TSqlParser::Recovery_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitService_broker_option(TSqlParser::Service_broker_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSnapshot_option(TSqlParser::Snapshot_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_option(TSqlParser::Sql_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_recovery_time_option(TSqlParser::Target_recovery_time_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermination(TSqlParser::TerminationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_index(TSqlParser::Drop_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_relational_or_xml_or_spatial_index(TSqlParser::Drop_relational_or_xml_or_spatial_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_backward_compatible_index(TSqlParser::Drop_backward_compatible_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_procedure(TSqlParser::Drop_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_trigger(TSqlParser::Drop_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_dml_trigger(TSqlParser::Drop_dml_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_ddl_trigger(TSqlParser::Drop_ddl_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_function(TSqlParser::Drop_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_statistics(TSqlParser::Drop_statisticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_table(TSqlParser::Drop_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_view(TSqlParser::Drop_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_type(TSqlParser::Create_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_type(TSqlParser::Drop_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowset_function_limited(TSqlParser::Rowset_function_limitedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpenquery(TSqlParser::OpenqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpendatasource(TSqlParser::OpendatasourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_statement(TSqlParser::Declare_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_declaration(TSqlParser::Xml_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_statement(TSqlParser::Cursor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackup_database(TSqlParser::Backup_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackup_log(TSqlParser::Backup_logContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackup_certificate(TSqlParser::Backup_certificateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackup_master_key(TSqlParser::Backup_master_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackup_service_master_key(TSqlParser::Backup_service_master_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKill_statement(TSqlParser::Kill_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKill_process(TSqlParser::Kill_processContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKill_query_notification(TSqlParser::Kill_query_notificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKill_stats_job(TSqlParser::Kill_stats_jobContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_statement(TSqlParser::Execute_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_body_batch(TSqlParser::Execute_body_batchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_body(TSqlParser::Execute_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_statement_arg(TSqlParser::Execute_statement_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_statement_arg_named(TSqlParser::Execute_statement_arg_namedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_statement_arg_unnamed(TSqlParser::Execute_statement_arg_unnamedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_parameter(TSqlParser::Execute_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_var_string(TSqlParser::Execute_var_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSecurity_statement(TSqlParser::Security_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrincipal_id(TSqlParser::Principal_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_certificate(TSqlParser::Create_certificateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExisting_keys(TSqlParser::Existing_keysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivate_key_options(TSqlParser::Private_key_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenerate_new_keys(TSqlParser::Generate_new_keysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDate_options(TSqlParser::Date_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpen_key(TSqlParser::Open_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClose_key(TSqlParser::Close_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_key(TSqlParser::Create_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_options(TSqlParser::Key_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlgorithm(TSqlParser::AlgorithmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEncryption_mechanism(TSqlParser::Encryption_mechanismContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecryption_mechanism(TSqlParser::Decryption_mechanismContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_permission(TSqlParser::Grant_permissionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_statement(TSqlParser::Set_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransaction_statement(TSqlParser::Transaction_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGo_statement(TSqlParser::Go_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUse_statement(TSqlParser::Use_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetuser_statement(TSqlParser::Setuser_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReconfigure_statement(TSqlParser::Reconfigure_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShutdown_statement(TSqlParser::Shutdown_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCheckpoint_statement(TSqlParser::Checkpoint_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_checkalloc_option(TSqlParser::Dbcc_checkalloc_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_checkalloc(TSqlParser::Dbcc_checkallocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_checkcatalog(TSqlParser::Dbcc_checkcatalogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_checkconstraints_option(TSqlParser::Dbcc_checkconstraints_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_checkconstraints(TSqlParser::Dbcc_checkconstraintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_checkdb_table_option(TSqlParser::Dbcc_checkdb_table_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_checkdb(TSqlParser::Dbcc_checkdbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_checkfilegroup_option(TSqlParser::Dbcc_checkfilegroup_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_checkfilegroup(TSqlParser::Dbcc_checkfilegroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_checktable(TSqlParser::Dbcc_checktableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_cleantable(TSqlParser::Dbcc_cleantableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_clonedatabase_option(TSqlParser::Dbcc_clonedatabase_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_clonedatabase(TSqlParser::Dbcc_clonedatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_pdw_showspaceused(TSqlParser::Dbcc_pdw_showspaceusedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_proccache(TSqlParser::Dbcc_proccacheContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_showcontig_option(TSqlParser::Dbcc_showcontig_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_showcontig(TSqlParser::Dbcc_showcontigContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_shrinklog(TSqlParser::Dbcc_shrinklogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_dbreindex(TSqlParser::Dbcc_dbreindexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_dll_free(TSqlParser::Dbcc_dll_freeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_dropcleanbuffers(TSqlParser::Dbcc_dropcleanbuffersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbcc_clause(TSqlParser::Dbcc_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_clause(TSqlParser::Execute_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_local(TSqlParser::Declare_localContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_type_definition(TSqlParser::Table_type_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_type_indices(TSqlParser::Table_type_indicesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_type_definition(TSqlParser::Xml_type_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_schema_collection(TSqlParser::Xml_schema_collectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_def_table_constraints(TSqlParser::Column_def_table_constraintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_def_table_constraint(TSqlParser::Column_def_table_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_definition(TSqlParser::Column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_definition_element(TSqlParser::Column_definition_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_modifier(TSqlParser::Column_modifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMaterialized_column_definition(TSqlParser::Materialized_column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_constraint(TSqlParser::Column_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_index(TSqlParser::Column_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOn_partition_or_filegroup(TSqlParser::On_partition_or_filegroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_constraint(TSqlParser::Table_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConnection_node(TSqlParser::Connection_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary_key_options(TSqlParser::Primary_key_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForeign_key_options(TSqlParser::Foreign_key_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCheck_constraint(TSqlParser::Check_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOn_delete(TSqlParser::On_deleteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOn_update(TSqlParser::On_updateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_table_index_options(TSqlParser::Alter_table_index_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_table_index_option(TSqlParser::Alter_table_index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_cursor(TSqlParser::Declare_cursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_set_cursor_common(TSqlParser::Declare_set_cursor_commonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_set_cursor_common_partial(TSqlParser::Declare_set_cursor_common_partialContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFetch_cursor(TSqlParser::Fetch_cursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_special(TSqlParser::Set_specialContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpecial_list(TSqlParser::Special_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant_LOCAL_ID(TSqlParser::Constant_LOCAL_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(TSqlParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(TSqlParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTime_zone(TSqlParser::Time_zoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitive_expression(TSqlParser::Primitive_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_expression(TSqlParser::Case_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary_operator_expression(TSqlParser::Unary_operator_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracket_expression(TSqlParser::Bracket_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubquery(TSqlParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_expression(TSqlParser::With_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommon_table_expression(TSqlParser::Common_table_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_elem(TSqlParser::Update_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_elem_merge(TSqlParser::Update_elem_mergeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearch_condition(TSqlParser::Search_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicate(TSqlParser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_expression(TSqlParser::Query_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_union(TSqlParser::Sql_unionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_specification(TSqlParser::Query_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTop_clause(TSqlParser::Top_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTop_percent(TSqlParser::Top_percentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTop_count(TSqlParser::Top_countContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrder_by_clause(TSqlParser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_order_by_clause(TSqlParser::Select_order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_clause(TSqlParser::For_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_common_directives(TSqlParser::Xml_common_directivesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrder_by_expression(TSqlParser::Order_by_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrouping_sets_item(TSqlParser::Grouping_sets_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_by_item(TSqlParser::Group_by_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption_clause(TSqlParser::Option_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption(TSqlParser::OptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptimize_for_arg(TSqlParser::Optimize_for_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_list(TSqlParser::Select_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUdt_method_arguments(TSqlParser::Udt_method_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsterisk(TSqlParser::AsteriskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUdt_elem(TSqlParser::Udt_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_elem(TSqlParser::Expression_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_list_elem(TSqlParser::Select_list_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_sources(TSqlParser::Table_sourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNon_ansi_join(TSqlParser::Non_ansi_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_source(TSqlParser::Table_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_source_item(TSqlParser::Table_source_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpen_xml(TSqlParser::Open_xmlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpen_json(TSqlParser::Open_jsonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_declaration(TSqlParser::Json_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_column_declaration(TSqlParser::Json_column_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSchema_declaration(TSqlParser::Schema_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_declaration(TSqlParser::Column_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChange_table(TSqlParser::Change_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChange_table_changes(TSqlParser::Change_table_changesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChange_table_version(TSqlParser::Change_table_versionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoin_part(TSqlParser::Join_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoin_on(TSqlParser::Join_onContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCross_join(TSqlParser::Cross_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitApply_(TSqlParser::Apply_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPivot(TSqlParser::PivotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnpivot(TSqlParser::UnpivotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPivot_clause(TSqlParser::Pivot_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnpivot_clause(TSqlParser::Unpivot_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFull_column_name_list(TSqlParser::Full_column_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowset_function(TSqlParser::Rowset_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBulk_option(TSqlParser::Bulk_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDerived_table(TSqlParser::Derived_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRANKING_WINDOWED_FUNC(TSqlParser::RANKING_WINDOWED_FUNCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAGGREGATE_WINDOWED_FUNC(TSqlParser::AGGREGATE_WINDOWED_FUNCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitANALYTIC_WINDOWED_FUNC(TSqlParser::ANALYTIC_WINDOWED_FUNCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBUILT_IN_FUNC(TSqlParser::BUILT_IN_FUNCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSCALAR_FUNCTION(TSqlParser::SCALAR_FUNCTIONContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFREE_TEXT(TSqlParser::FREE_TEXTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPARTITION_FUNC(TSqlParser::PARTITION_FUNCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHIERARCHYID_METHOD(TSqlParser::HIERARCHYID_METHODContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartition_function(TSqlParser::Partition_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFreetext_function(TSqlParser::Freetext_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFreetext_predicate(TSqlParser::Freetext_predicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_key_value(TSqlParser::Json_key_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_null_clause(TSqlParser::Json_null_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAPP_NAME(TSqlParser::APP_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAPPLOCK_MODE(TSqlParser::APPLOCK_MODEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAPPLOCK_TEST(TSqlParser::APPLOCK_TESTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitASSEMBLYPROPERTY(TSqlParser::ASSEMBLYPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCOL_LENGTH(TSqlParser::COL_LENGTHContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCOL_NAME(TSqlParser::COL_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCOLUMNPROPERTY(TSqlParser::COLUMNPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATABASEPROPERTYEX(TSqlParser::DATABASEPROPERTYEXContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDB_ID(TSqlParser::DB_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDB_NAME(TSqlParser::DB_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFILE_ID(TSqlParser::FILE_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFILE_IDEX(TSqlParser::FILE_IDEXContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFILE_NAME(TSqlParser::FILE_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFILEGROUP_ID(TSqlParser::FILEGROUP_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFILEGROUP_NAME(TSqlParser::FILEGROUP_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFILEGROUPPROPERTY(TSqlParser::FILEGROUPPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFILEPROPERTY(TSqlParser::FILEPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFILEPROPERTYEX(TSqlParser::FILEPROPERTYEXContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFULLTEXTCATALOGPROPERTY(TSqlParser::FULLTEXTCATALOGPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFULLTEXTSERVICEPROPERTY(TSqlParser::FULLTEXTSERVICEPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitINDEX_COL(TSqlParser::INDEX_COLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitINDEXKEY_PROPERTY(TSqlParser::INDEXKEY_PROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitINDEXPROPERTY(TSqlParser::INDEXPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNEXT_VALUE_FOR(TSqlParser::NEXT_VALUE_FORContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOBJECT_DEFINITION(TSqlParser::OBJECT_DEFINITIONContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOBJECT_ID(TSqlParser::OBJECT_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOBJECT_NAME(TSqlParser::OBJECT_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOBJECT_SCHEMA_NAME(TSqlParser::OBJECT_SCHEMA_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOBJECTPROPERTY(TSqlParser::OBJECTPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOBJECTPROPERTYEX(TSqlParser::OBJECTPROPERTYEXContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitORIGINAL_DB_NAME(TSqlParser::ORIGINAL_DB_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPARSENAME(TSqlParser::PARSENAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSCHEMA_ID(TSqlParser::SCHEMA_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSCHEMA_NAME(TSqlParser::SCHEMA_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSCOPE_IDENTITY(TSqlParser::SCOPE_IDENTITYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSERVERPROPERTY(TSqlParser::SERVERPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSTATS_DATE(TSqlParser::STATS_DATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTYPE_ID(TSqlParser::TYPE_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTYPE_NAME(TSqlParser::TYPE_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTYPEPROPERTY(TSqlParser::TYPEPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitASCII(TSqlParser::ASCIIContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCHAR(TSqlParser::CHARContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCHARINDEX(TSqlParser::CHARINDEXContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCONCAT(TSqlParser::CONCATContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCONCAT_WS(TSqlParser::CONCAT_WSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDIFFERENCE(TSqlParser::DIFFERENCEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFORMAT(TSqlParser::FORMATContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLEFT(TSqlParser::LEFTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLEN(TSqlParser::LENContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLOWER(TSqlParser::LOWERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLTRIM(TSqlParser::LTRIMContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNCHAR(TSqlParser::NCHARContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPATINDEX(TSqlParser::PATINDEXContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQUOTENAME(TSqlParser::QUOTENAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitREPLACE(TSqlParser::REPLACEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitREPLICATE(TSqlParser::REPLICATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitREVERSE(TSqlParser::REVERSEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRIGHT(TSqlParser::RIGHTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRTRIM(TSqlParser::RTRIMContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSOUNDEX(TSqlParser::SOUNDEXContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSPACE(TSqlParser::SPACEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSTR(TSqlParser::STRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSTRINGAGG(TSqlParser::STRINGAGGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSTRING_ESCAPE(TSqlParser::STRING_ESCAPEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSTUFF(TSqlParser::STUFFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSUBSTRING(TSqlParser::SUBSTRINGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTRANSLATE(TSqlParser::TRANSLATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTRIM(TSqlParser::TRIMContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUNICODE(TSqlParser::UNICODEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUPPER(TSqlParser::UPPERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBINARY_CHECKSUM(TSqlParser::BINARY_CHECKSUMContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCHECKSUM(TSqlParser::CHECKSUMContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCOMPRESS(TSqlParser::COMPRESSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCONNECTIONPROPERTY(TSqlParser::CONNECTIONPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCONTEXT_INFO(TSqlParser::CONTEXT_INFOContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCURRENT_REQUEST_ID(TSqlParser::CURRENT_REQUEST_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCURRENT_TRANSACTION_ID(TSqlParser::CURRENT_TRANSACTION_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDECOMPRESS(TSqlParser::DECOMPRESSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitERROR_LINE(TSqlParser::ERROR_LINEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitERROR_MESSAGE(TSqlParser::ERROR_MESSAGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitERROR_NUMBER(TSqlParser::ERROR_NUMBERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitERROR_PROCEDURE(TSqlParser::ERROR_PROCEDUREContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitERROR_SEVERITY(TSqlParser::ERROR_SEVERITYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitERROR_STATE(TSqlParser::ERROR_STATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFORMATMESSAGE(TSqlParser::FORMATMESSAGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGET_FILESTREAM_TRANSACTION_CONTEXT(TSqlParser::GET_FILESTREAM_TRANSACTION_CONTEXTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGETANSINULL(TSqlParser::GETANSINULLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHOST_ID(TSqlParser::HOST_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHOST_NAME(TSqlParser::HOST_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitISNULL(TSqlParser::ISNULLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitISNUMERIC(TSqlParser::ISNUMERICContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMIN_ACTIVE_ROWVERSION(TSqlParser::MIN_ACTIVE_ROWVERSIONContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNEWID(TSqlParser::NEWIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNEWSEQUENTIALID(TSqlParser::NEWSEQUENTIALIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitROWCOUNT_BIG(TSqlParser::ROWCOUNT_BIGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSESSION_CONTEXT(TSqlParser::SESSION_CONTEXTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXACT_STATE(TSqlParser::XACT_STATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCAST(TSqlParser::CASTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTRY_CAST(TSqlParser::TRY_CASTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCONVERT(TSqlParser::CONVERTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCOALESCE(TSqlParser::COALESCEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCURSOR_ROWS(TSqlParser::CURSOR_ROWSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFETCH_STATUS(TSqlParser::FETCH_STATUSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCURSOR_STATUS(TSqlParser::CURSOR_STATUSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCERT_ID(TSqlParser::CERT_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATALENGTH(TSqlParser::DATALENGTHContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIDENT_CURRENT(TSqlParser::IDENT_CURRENTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIDENT_INCR(TSqlParser::IDENT_INCRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIDENT_SEED(TSqlParser::IDENT_SEEDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIDENTITY(TSqlParser::IDENTITYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSQL_VARIANT_PROPERTY(TSqlParser::SQL_VARIANT_PROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCURRENT_DATE(TSqlParser::CURRENT_DATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCURRENT_TIMESTAMP(TSqlParser::CURRENT_TIMESTAMPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCURRENT_TIMEZONE(TSqlParser::CURRENT_TIMEZONEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCURRENT_TIMEZONE_ID(TSqlParser::CURRENT_TIMEZONE_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATE_BUCKET(TSqlParser::DATE_BUCKETContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATEADD(TSqlParser::DATEADDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATEDIFF(TSqlParser::DATEDIFFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATEDIFF_BIG(TSqlParser::DATEDIFF_BIGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATEFROMPARTS(TSqlParser::DATEFROMPARTSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATENAME(TSqlParser::DATENAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATEPART(TSqlParser::DATEPARTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATETIME2FROMPARTS(TSqlParser::DATETIME2FROMPARTSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATETIMEFROMPARTS(TSqlParser::DATETIMEFROMPARTSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATETIMEOFFSETFROMPARTS(TSqlParser::DATETIMEOFFSETFROMPARTSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATETRUNC(TSqlParser::DATETRUNCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDAY(TSqlParser::DAYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEOMONTH(TSqlParser::EOMONTHContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGETDATE(TSqlParser::GETDATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGETUTCDATE(TSqlParser::GETUTCDATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitISDATE(TSqlParser::ISDATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMONTH(TSqlParser::MONTHContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSMALLDATETIMEFROMPARTS(TSqlParser::SMALLDATETIMEFROMPARTSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSWITCHOFFSET(TSqlParser::SWITCHOFFSETContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSYSDATETIME(TSqlParser::SYSDATETIMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSYSDATETIMEOFFSET(TSqlParser::SYSDATETIMEOFFSETContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSYSUTCDATETIME(TSqlParser::SYSUTCDATETIMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTIMEFROMPARTS(TSqlParser::TIMEFROMPARTSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTODATETIMEOFFSET(TSqlParser::TODATETIMEOFFSETContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitYEAR(TSqlParser::YEARContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNULLIF(TSqlParser::NULLIFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPARSE(TSqlParser::PARSEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXML_DATA_TYPE_FUNC(TSqlParser::XML_DATA_TYPE_FUNCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIIF(TSqlParser::IIFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitISJSON(TSqlParser::ISJSONContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJSON_OBJECT(TSqlParser::JSON_OBJECTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJSON_ARRAY(TSqlParser::JSON_ARRAYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJSON_VALUE(TSqlParser::JSON_VALUEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJSON_QUERY(TSqlParser::JSON_QUERYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJSON_MODIFY(TSqlParser::JSON_MODIFYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJSON_PATH_EXISTS(TSqlParser::JSON_PATH_EXISTSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitABS(TSqlParser::ABSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitACOS(TSqlParser::ACOSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitASIN(TSqlParser::ASINContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitATAN(TSqlParser::ATANContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitATN2(TSqlParser::ATN2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCEILING(TSqlParser::CEILINGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCOS(TSqlParser::COSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCOT(TSqlParser::COTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDEGREES(TSqlParser::DEGREESContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEXP(TSqlParser::EXPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFLOOR(TSqlParser::FLOORContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLOG(TSqlParser::LOGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLOG10(TSqlParser::LOG10Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPI(TSqlParser::PIContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPOWER(TSqlParser::POWERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRADIANS(TSqlParser::RADIANSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRAND(TSqlParser::RANDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitROUND(TSqlParser::ROUNDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMATH_SIGN(TSqlParser::MATH_SIGNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSIN(TSqlParser::SINContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSQRT(TSqlParser::SQRTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSQUARE(TSqlParser::SQUAREContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTAN(TSqlParser::TANContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGREATEST(TSqlParser::GREATESTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLEAST(TSqlParser::LEASTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCERTENCODED(TSqlParser::CERTENCODEDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCERTPRIVATEKEY(TSqlParser::CERTPRIVATEKEYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCURRENT_USER(TSqlParser::CURRENT_USERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDATABASE_PRINCIPAL_ID(TSqlParser::DATABASE_PRINCIPAL_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHAS_DBACCESS(TSqlParser::HAS_DBACCESSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHAS_PERMS_BY_NAME(TSqlParser::HAS_PERMS_BY_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIS_MEMBER(TSqlParser::IS_MEMBERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIS_ROLEMEMBER(TSqlParser::IS_ROLEMEMBERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIS_SRVROLEMEMBER(TSqlParser::IS_SRVROLEMEMBERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLOGINPROPERTY(TSqlParser::LOGINPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitORIGINAL_LOGIN(TSqlParser::ORIGINAL_LOGINContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPERMISSIONS(TSqlParser::PERMISSIONSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPWDENCRYPT(TSqlParser::PWDENCRYPTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPWDCOMPARE(TSqlParser::PWDCOMPAREContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSESSION_USER(TSqlParser::SESSION_USERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSESSIONPROPERTY(TSqlParser::SESSIONPROPERTYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSUSER_ID(TSqlParser::SUSER_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSUSER_SNAME(TSqlParser::SUSER_SNAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSUSER_SID(TSqlParser::SUSER_SIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSYSTEM_USER(TSqlParser::SYSTEM_USERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUSER(TSqlParser::USERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUSER_ID(TSqlParser::USER_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUSER_NAME(TSqlParser::USER_NAMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_data_type_methods(TSqlParser::Xml_data_type_methodsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateparts_9(TSqlParser::Dateparts_9Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateparts_12(TSqlParser::Dateparts_12Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateparts_15(TSqlParser::Dateparts_15Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateparts_datetrunc(TSqlParser::Dateparts_datetruncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue_method(TSqlParser::Value_methodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue_call(TSqlParser::Value_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_method(TSqlParser::Query_methodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_call(TSqlParser::Query_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExist_method(TSqlParser::Exist_methodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExist_call(TSqlParser::Exist_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModify_method(TSqlParser::Modify_methodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModify_call(TSqlParser::Modify_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHierarchyid_call(TSqlParser::Hierarchyid_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHierarchyid_static_method(TSqlParser::Hierarchyid_static_methodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNodes_method(TSqlParser::Nodes_methodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_section(TSqlParser::Switch_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_search_condition_section(TSqlParser::Switch_search_condition_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_column_alias(TSqlParser::As_column_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_table_alias(TSqlParser::As_table_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_alias(TSqlParser::Table_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_table_hints(TSqlParser::With_table_hintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeprecated_table_hint(TSqlParser::Deprecated_table_hintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSybase_legacy_hints(TSqlParser::Sybase_legacy_hintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSybase_legacy_hint(TSqlParser::Sybase_legacy_hintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_hint(TSqlParser::Table_hintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_value(TSqlParser::Index_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_alias_list(TSqlParser::Column_alias_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_alias(TSqlParser::Column_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_value_constructor(TSqlParser::Table_value_constructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_list_(TSqlParser::Expression_list_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRanking_windowed_function(TSqlParser::Ranking_windowed_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregate_windowed_function(TSqlParser::Aggregate_windowed_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnalytic_windowed_function(TSqlParser::Analytic_windowed_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAll_distinct_expression(TSqlParser::All_distinct_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOver_clause(TSqlParser::Over_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_or_range_clause(TSqlParser::Row_or_range_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_extent(TSqlParser::Window_frame_extentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_bound(TSqlParser::Window_frame_boundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_preceding(TSqlParser::Window_frame_precedingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_following(TSqlParser::Window_frame_followingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_database_option(TSqlParser::Create_database_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatabase_filestream_option(TSqlParser::Database_filestream_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatabase_file_spec(TSqlParser::Database_file_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_group(TSqlParser::File_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_spec(TSqlParser::File_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntity_name(TSqlParser::Entity_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntity_name_for_azure_dw(TSqlParser::Entity_name_for_azure_dwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntity_name_for_parallel_dw(TSqlParser::Entity_name_for_parallel_dwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFull_table_name(TSqlParser::Full_table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_name(TSqlParser::Table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_name(TSqlParser::Simple_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_proc_name_schema(TSqlParser::Func_proc_name_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_proc_name_database_schema(TSqlParser::Func_proc_name_database_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_proc_name_server_database_schema(TSqlParser::Func_proc_name_server_database_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDdl_object(TSqlParser::Ddl_objectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFull_column_name(TSqlParser::Full_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_name_list_with_order(TSqlParser::Column_name_list_with_orderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_column_name_list(TSqlParser::Insert_column_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_column_id(TSqlParser::Insert_column_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_name_list(TSqlParser::Column_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_name(TSqlParser::Cursor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOn_off(TSqlParser::On_offContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClustered(TSqlParser::ClusteredContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNull_notnull(TSqlParser::Null_notnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScalar_function_name(TSqlParser::Scalar_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBegin_conversation_timer(TSqlParser::Begin_conversation_timerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBegin_conversation_dialog(TSqlParser::Begin_conversation_dialogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContract_name(TSqlParser::Contract_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitService_name(TSqlParser::Service_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnd_conversation(TSqlParser::End_conversationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWaitfor_conversation(TSqlParser::Waitfor_conversationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGet_conversation(TSqlParser::Get_conversationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueue_id(TSqlParser::Queue_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSend_conversation(TSqlParser::Send_conversationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type(TSqlParser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(TSqlParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitive_constant(TSqlParser::Primitive_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKeyword(TSqlParser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_(TSqlParser::Id_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_id(TSqlParser::Simple_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_or_string(TSqlParser::Id_or_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison_operator(TSqlParser::Comparison_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_operator(TSqlParser::Assignment_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_size(TSqlParser::File_sizeContext *ctx) override {
    return visitChildren(ctx);
  }


};

