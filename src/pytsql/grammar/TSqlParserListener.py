# Generated from TSqlParser.g4 by ANTLR 4.13.1
from antlr4 import *
if "." in __name__:
    from .TSqlParser import TSqlParser
else:
    from TSqlParser import TSqlParser

# This class defines a complete listener for a parse tree produced by TSqlParser.
class TSqlParserListener(ParseTreeListener):

    # Enter a parse tree produced by TSqlParser#tsql_file.
    def enterTsql_file(self, ctx:TSqlParser.Tsql_fileContext):
        pass

    # Exit a parse tree produced by TSqlParser#tsql_file.
    def exitTsql_file(self, ctx:TSqlParser.Tsql_fileContext):
        pass


    # Enter a parse tree produced by TSqlParser#batch.
    def enterBatch(self, ctx:TSqlParser.BatchContext):
        pass

    # Exit a parse tree produced by TSqlParser#batch.
    def exitBatch(self, ctx:TSqlParser.BatchContext):
        pass


    # Enter a parse tree produced by TSqlParser#batch_level_statement.
    def enterBatch_level_statement(self, ctx:TSqlParser.Batch_level_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#batch_level_statement.
    def exitBatch_level_statement(self, ctx:TSqlParser.Batch_level_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#sql_clauses.
    def enterSql_clauses(self, ctx:TSqlParser.Sql_clausesContext):
        pass

    # Exit a parse tree produced by TSqlParser#sql_clauses.
    def exitSql_clauses(self, ctx:TSqlParser.Sql_clausesContext):
        pass


    # Enter a parse tree produced by TSqlParser#dml_clause.
    def enterDml_clause(self, ctx:TSqlParser.Dml_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#dml_clause.
    def exitDml_clause(self, ctx:TSqlParser.Dml_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#ddl_clause.
    def enterDdl_clause(self, ctx:TSqlParser.Ddl_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#ddl_clause.
    def exitDdl_clause(self, ctx:TSqlParser.Ddl_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#backup_statement.
    def enterBackup_statement(self, ctx:TSqlParser.Backup_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#backup_statement.
    def exitBackup_statement(self, ctx:TSqlParser.Backup_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#cfl_statement.
    def enterCfl_statement(self, ctx:TSqlParser.Cfl_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#cfl_statement.
    def exitCfl_statement(self, ctx:TSqlParser.Cfl_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#block_statement.
    def enterBlock_statement(self, ctx:TSqlParser.Block_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#block_statement.
    def exitBlock_statement(self, ctx:TSqlParser.Block_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#break_statement.
    def enterBreak_statement(self, ctx:TSqlParser.Break_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#break_statement.
    def exitBreak_statement(self, ctx:TSqlParser.Break_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#continue_statement.
    def enterContinue_statement(self, ctx:TSqlParser.Continue_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#continue_statement.
    def exitContinue_statement(self, ctx:TSqlParser.Continue_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#goto_statement.
    def enterGoto_statement(self, ctx:TSqlParser.Goto_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#goto_statement.
    def exitGoto_statement(self, ctx:TSqlParser.Goto_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#return_statement.
    def enterReturn_statement(self, ctx:TSqlParser.Return_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#return_statement.
    def exitReturn_statement(self, ctx:TSqlParser.Return_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#if_statement.
    def enterIf_statement(self, ctx:TSqlParser.If_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#if_statement.
    def exitIf_statement(self, ctx:TSqlParser.If_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#throw_statement.
    def enterThrow_statement(self, ctx:TSqlParser.Throw_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#throw_statement.
    def exitThrow_statement(self, ctx:TSqlParser.Throw_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#throw_error_number.
    def enterThrow_error_number(self, ctx:TSqlParser.Throw_error_numberContext):
        pass

    # Exit a parse tree produced by TSqlParser#throw_error_number.
    def exitThrow_error_number(self, ctx:TSqlParser.Throw_error_numberContext):
        pass


    # Enter a parse tree produced by TSqlParser#throw_message.
    def enterThrow_message(self, ctx:TSqlParser.Throw_messageContext):
        pass

    # Exit a parse tree produced by TSqlParser#throw_message.
    def exitThrow_message(self, ctx:TSqlParser.Throw_messageContext):
        pass


    # Enter a parse tree produced by TSqlParser#throw_state.
    def enterThrow_state(self, ctx:TSqlParser.Throw_stateContext):
        pass

    # Exit a parse tree produced by TSqlParser#throw_state.
    def exitThrow_state(self, ctx:TSqlParser.Throw_stateContext):
        pass


    # Enter a parse tree produced by TSqlParser#try_catch_statement.
    def enterTry_catch_statement(self, ctx:TSqlParser.Try_catch_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#try_catch_statement.
    def exitTry_catch_statement(self, ctx:TSqlParser.Try_catch_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#waitfor_statement.
    def enterWaitfor_statement(self, ctx:TSqlParser.Waitfor_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#waitfor_statement.
    def exitWaitfor_statement(self, ctx:TSqlParser.Waitfor_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#while_statement.
    def enterWhile_statement(self, ctx:TSqlParser.While_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#while_statement.
    def exitWhile_statement(self, ctx:TSqlParser.While_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#print_statement.
    def enterPrint_statement(self, ctx:TSqlParser.Print_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#print_statement.
    def exitPrint_statement(self, ctx:TSqlParser.Print_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#raiseerror_statement.
    def enterRaiseerror_statement(self, ctx:TSqlParser.Raiseerror_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#raiseerror_statement.
    def exitRaiseerror_statement(self, ctx:TSqlParser.Raiseerror_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#empty_statement.
    def enterEmpty_statement(self, ctx:TSqlParser.Empty_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#empty_statement.
    def exitEmpty_statement(self, ctx:TSqlParser.Empty_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#another_statement.
    def enterAnother_statement(self, ctx:TSqlParser.Another_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#another_statement.
    def exitAnother_statement(self, ctx:TSqlParser.Another_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_application_role.
    def enterAlter_application_role(self, ctx:TSqlParser.Alter_application_roleContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_application_role.
    def exitAlter_application_role(self, ctx:TSqlParser.Alter_application_roleContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_xml_schema_collection.
    def enterAlter_xml_schema_collection(self, ctx:TSqlParser.Alter_xml_schema_collectionContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_xml_schema_collection.
    def exitAlter_xml_schema_collection(self, ctx:TSqlParser.Alter_xml_schema_collectionContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_application_role.
    def enterCreate_application_role(self, ctx:TSqlParser.Create_application_roleContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_application_role.
    def exitCreate_application_role(self, ctx:TSqlParser.Create_application_roleContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_aggregate.
    def enterDrop_aggregate(self, ctx:TSqlParser.Drop_aggregateContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_aggregate.
    def exitDrop_aggregate(self, ctx:TSqlParser.Drop_aggregateContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_application_role.
    def enterDrop_application_role(self, ctx:TSqlParser.Drop_application_roleContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_application_role.
    def exitDrop_application_role(self, ctx:TSqlParser.Drop_application_roleContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly.
    def enterAlter_assembly(self, ctx:TSqlParser.Alter_assemblyContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly.
    def exitAlter_assembly(self, ctx:TSqlParser.Alter_assemblyContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_start.
    def enterAlter_assembly_start(self, ctx:TSqlParser.Alter_assembly_startContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_start.
    def exitAlter_assembly_start(self, ctx:TSqlParser.Alter_assembly_startContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_clause.
    def enterAlter_assembly_clause(self, ctx:TSqlParser.Alter_assembly_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_clause.
    def exitAlter_assembly_clause(self, ctx:TSqlParser.Alter_assembly_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_from_clause.
    def enterAlter_assembly_from_clause(self, ctx:TSqlParser.Alter_assembly_from_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_from_clause.
    def exitAlter_assembly_from_clause(self, ctx:TSqlParser.Alter_assembly_from_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_from_clause_start.
    def enterAlter_assembly_from_clause_start(self, ctx:TSqlParser.Alter_assembly_from_clause_startContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_from_clause_start.
    def exitAlter_assembly_from_clause_start(self, ctx:TSqlParser.Alter_assembly_from_clause_startContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_drop_clause.
    def enterAlter_assembly_drop_clause(self, ctx:TSqlParser.Alter_assembly_drop_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_drop_clause.
    def exitAlter_assembly_drop_clause(self, ctx:TSqlParser.Alter_assembly_drop_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_drop_multiple_files.
    def enterAlter_assembly_drop_multiple_files(self, ctx:TSqlParser.Alter_assembly_drop_multiple_filesContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_drop_multiple_files.
    def exitAlter_assembly_drop_multiple_files(self, ctx:TSqlParser.Alter_assembly_drop_multiple_filesContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_drop.
    def enterAlter_assembly_drop(self, ctx:TSqlParser.Alter_assembly_dropContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_drop.
    def exitAlter_assembly_drop(self, ctx:TSqlParser.Alter_assembly_dropContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_add_clause.
    def enterAlter_assembly_add_clause(self, ctx:TSqlParser.Alter_assembly_add_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_add_clause.
    def exitAlter_assembly_add_clause(self, ctx:TSqlParser.Alter_assembly_add_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_asssembly_add_clause_start.
    def enterAlter_asssembly_add_clause_start(self, ctx:TSqlParser.Alter_asssembly_add_clause_startContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_asssembly_add_clause_start.
    def exitAlter_asssembly_add_clause_start(self, ctx:TSqlParser.Alter_asssembly_add_clause_startContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_client_file_clause.
    def enterAlter_assembly_client_file_clause(self, ctx:TSqlParser.Alter_assembly_client_file_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_client_file_clause.
    def exitAlter_assembly_client_file_clause(self, ctx:TSqlParser.Alter_assembly_client_file_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_file_name.
    def enterAlter_assembly_file_name(self, ctx:TSqlParser.Alter_assembly_file_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_file_name.
    def exitAlter_assembly_file_name(self, ctx:TSqlParser.Alter_assembly_file_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_file_bits.
    def enterAlter_assembly_file_bits(self, ctx:TSqlParser.Alter_assembly_file_bitsContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_file_bits.
    def exitAlter_assembly_file_bits(self, ctx:TSqlParser.Alter_assembly_file_bitsContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_as.
    def enterAlter_assembly_as(self, ctx:TSqlParser.Alter_assembly_asContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_as.
    def exitAlter_assembly_as(self, ctx:TSqlParser.Alter_assembly_asContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_with_clause.
    def enterAlter_assembly_with_clause(self, ctx:TSqlParser.Alter_assembly_with_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_with_clause.
    def exitAlter_assembly_with_clause(self, ctx:TSqlParser.Alter_assembly_with_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_assembly_with.
    def enterAlter_assembly_with(self, ctx:TSqlParser.Alter_assembly_withContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_assembly_with.
    def exitAlter_assembly_with(self, ctx:TSqlParser.Alter_assembly_withContext):
        pass


    # Enter a parse tree produced by TSqlParser#client_assembly_specifier.
    def enterClient_assembly_specifier(self, ctx:TSqlParser.Client_assembly_specifierContext):
        pass

    # Exit a parse tree produced by TSqlParser#client_assembly_specifier.
    def exitClient_assembly_specifier(self, ctx:TSqlParser.Client_assembly_specifierContext):
        pass


    # Enter a parse tree produced by TSqlParser#assembly_option.
    def enterAssembly_option(self, ctx:TSqlParser.Assembly_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#assembly_option.
    def exitAssembly_option(self, ctx:TSqlParser.Assembly_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#network_file_share.
    def enterNetwork_file_share(self, ctx:TSqlParser.Network_file_shareContext):
        pass

    # Exit a parse tree produced by TSqlParser#network_file_share.
    def exitNetwork_file_share(self, ctx:TSqlParser.Network_file_shareContext):
        pass


    # Enter a parse tree produced by TSqlParser#network_computer.
    def enterNetwork_computer(self, ctx:TSqlParser.Network_computerContext):
        pass

    # Exit a parse tree produced by TSqlParser#network_computer.
    def exitNetwork_computer(self, ctx:TSqlParser.Network_computerContext):
        pass


    # Enter a parse tree produced by TSqlParser#network_file_start.
    def enterNetwork_file_start(self, ctx:TSqlParser.Network_file_startContext):
        pass

    # Exit a parse tree produced by TSqlParser#network_file_start.
    def exitNetwork_file_start(self, ctx:TSqlParser.Network_file_startContext):
        pass


    # Enter a parse tree produced by TSqlParser#file_path.
    def enterFile_path(self, ctx:TSqlParser.File_pathContext):
        pass

    # Exit a parse tree produced by TSqlParser#file_path.
    def exitFile_path(self, ctx:TSqlParser.File_pathContext):
        pass


    # Enter a parse tree produced by TSqlParser#file_directory_path_separator.
    def enterFile_directory_path_separator(self, ctx:TSqlParser.File_directory_path_separatorContext):
        pass

    # Exit a parse tree produced by TSqlParser#file_directory_path_separator.
    def exitFile_directory_path_separator(self, ctx:TSqlParser.File_directory_path_separatorContext):
        pass


    # Enter a parse tree produced by TSqlParser#local_file.
    def enterLocal_file(self, ctx:TSqlParser.Local_fileContext):
        pass

    # Exit a parse tree produced by TSqlParser#local_file.
    def exitLocal_file(self, ctx:TSqlParser.Local_fileContext):
        pass


    # Enter a parse tree produced by TSqlParser#local_drive.
    def enterLocal_drive(self, ctx:TSqlParser.Local_driveContext):
        pass

    # Exit a parse tree produced by TSqlParser#local_drive.
    def exitLocal_drive(self, ctx:TSqlParser.Local_driveContext):
        pass


    # Enter a parse tree produced by TSqlParser#multiple_local_files.
    def enterMultiple_local_files(self, ctx:TSqlParser.Multiple_local_filesContext):
        pass

    # Exit a parse tree produced by TSqlParser#multiple_local_files.
    def exitMultiple_local_files(self, ctx:TSqlParser.Multiple_local_filesContext):
        pass


    # Enter a parse tree produced by TSqlParser#multiple_local_file_start.
    def enterMultiple_local_file_start(self, ctx:TSqlParser.Multiple_local_file_startContext):
        pass

    # Exit a parse tree produced by TSqlParser#multiple_local_file_start.
    def exitMultiple_local_file_start(self, ctx:TSqlParser.Multiple_local_file_startContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_assembly.
    def enterCreate_assembly(self, ctx:TSqlParser.Create_assemblyContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_assembly.
    def exitCreate_assembly(self, ctx:TSqlParser.Create_assemblyContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_assembly.
    def enterDrop_assembly(self, ctx:TSqlParser.Drop_assemblyContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_assembly.
    def exitDrop_assembly(self, ctx:TSqlParser.Drop_assemblyContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_asymmetric_key.
    def enterAlter_asymmetric_key(self, ctx:TSqlParser.Alter_asymmetric_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_asymmetric_key.
    def exitAlter_asymmetric_key(self, ctx:TSqlParser.Alter_asymmetric_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_asymmetric_key_start.
    def enterAlter_asymmetric_key_start(self, ctx:TSqlParser.Alter_asymmetric_key_startContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_asymmetric_key_start.
    def exitAlter_asymmetric_key_start(self, ctx:TSqlParser.Alter_asymmetric_key_startContext):
        pass


    # Enter a parse tree produced by TSqlParser#asymmetric_key_option.
    def enterAsymmetric_key_option(self, ctx:TSqlParser.Asymmetric_key_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#asymmetric_key_option.
    def exitAsymmetric_key_option(self, ctx:TSqlParser.Asymmetric_key_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#asymmetric_key_option_start.
    def enterAsymmetric_key_option_start(self, ctx:TSqlParser.Asymmetric_key_option_startContext):
        pass

    # Exit a parse tree produced by TSqlParser#asymmetric_key_option_start.
    def exitAsymmetric_key_option_start(self, ctx:TSqlParser.Asymmetric_key_option_startContext):
        pass


    # Enter a parse tree produced by TSqlParser#asymmetric_key_password_change_option.
    def enterAsymmetric_key_password_change_option(self, ctx:TSqlParser.Asymmetric_key_password_change_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#asymmetric_key_password_change_option.
    def exitAsymmetric_key_password_change_option(self, ctx:TSqlParser.Asymmetric_key_password_change_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_asymmetric_key.
    def enterCreate_asymmetric_key(self, ctx:TSqlParser.Create_asymmetric_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_asymmetric_key.
    def exitCreate_asymmetric_key(self, ctx:TSqlParser.Create_asymmetric_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_asymmetric_key.
    def enterDrop_asymmetric_key(self, ctx:TSqlParser.Drop_asymmetric_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_asymmetric_key.
    def exitDrop_asymmetric_key(self, ctx:TSqlParser.Drop_asymmetric_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_authorization.
    def enterAlter_authorization(self, ctx:TSqlParser.Alter_authorizationContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_authorization.
    def exitAlter_authorization(self, ctx:TSqlParser.Alter_authorizationContext):
        pass


    # Enter a parse tree produced by TSqlParser#authorization_grantee.
    def enterAuthorization_grantee(self, ctx:TSqlParser.Authorization_granteeContext):
        pass

    # Exit a parse tree produced by TSqlParser#authorization_grantee.
    def exitAuthorization_grantee(self, ctx:TSqlParser.Authorization_granteeContext):
        pass


    # Enter a parse tree produced by TSqlParser#entity_to.
    def enterEntity_to(self, ctx:TSqlParser.Entity_toContext):
        pass

    # Exit a parse tree produced by TSqlParser#entity_to.
    def exitEntity_to(self, ctx:TSqlParser.Entity_toContext):
        pass


    # Enter a parse tree produced by TSqlParser#colon_colon.
    def enterColon_colon(self, ctx:TSqlParser.Colon_colonContext):
        pass

    # Exit a parse tree produced by TSqlParser#colon_colon.
    def exitColon_colon(self, ctx:TSqlParser.Colon_colonContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_authorization_start.
    def enterAlter_authorization_start(self, ctx:TSqlParser.Alter_authorization_startContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_authorization_start.
    def exitAlter_authorization_start(self, ctx:TSqlParser.Alter_authorization_startContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_authorization_for_sql_database.
    def enterAlter_authorization_for_sql_database(self, ctx:TSqlParser.Alter_authorization_for_sql_databaseContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_authorization_for_sql_database.
    def exitAlter_authorization_for_sql_database(self, ctx:TSqlParser.Alter_authorization_for_sql_databaseContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_authorization_for_azure_dw.
    def enterAlter_authorization_for_azure_dw(self, ctx:TSqlParser.Alter_authorization_for_azure_dwContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_authorization_for_azure_dw.
    def exitAlter_authorization_for_azure_dw(self, ctx:TSqlParser.Alter_authorization_for_azure_dwContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_authorization_for_parallel_dw.
    def enterAlter_authorization_for_parallel_dw(self, ctx:TSqlParser.Alter_authorization_for_parallel_dwContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_authorization_for_parallel_dw.
    def exitAlter_authorization_for_parallel_dw(self, ctx:TSqlParser.Alter_authorization_for_parallel_dwContext):
        pass


    # Enter a parse tree produced by TSqlParser#class_type.
    def enterClass_type(self, ctx:TSqlParser.Class_typeContext):
        pass

    # Exit a parse tree produced by TSqlParser#class_type.
    def exitClass_type(self, ctx:TSqlParser.Class_typeContext):
        pass


    # Enter a parse tree produced by TSqlParser#class_type_for_sql_database.
    def enterClass_type_for_sql_database(self, ctx:TSqlParser.Class_type_for_sql_databaseContext):
        pass

    # Exit a parse tree produced by TSqlParser#class_type_for_sql_database.
    def exitClass_type_for_sql_database(self, ctx:TSqlParser.Class_type_for_sql_databaseContext):
        pass


    # Enter a parse tree produced by TSqlParser#class_type_for_azure_dw.
    def enterClass_type_for_azure_dw(self, ctx:TSqlParser.Class_type_for_azure_dwContext):
        pass

    # Exit a parse tree produced by TSqlParser#class_type_for_azure_dw.
    def exitClass_type_for_azure_dw(self, ctx:TSqlParser.Class_type_for_azure_dwContext):
        pass


    # Enter a parse tree produced by TSqlParser#class_type_for_parallel_dw.
    def enterClass_type_for_parallel_dw(self, ctx:TSqlParser.Class_type_for_parallel_dwContext):
        pass

    # Exit a parse tree produced by TSqlParser#class_type_for_parallel_dw.
    def exitClass_type_for_parallel_dw(self, ctx:TSqlParser.Class_type_for_parallel_dwContext):
        pass


    # Enter a parse tree produced by TSqlParser#class_type_for_grant.
    def enterClass_type_for_grant(self, ctx:TSqlParser.Class_type_for_grantContext):
        pass

    # Exit a parse tree produced by TSqlParser#class_type_for_grant.
    def exitClass_type_for_grant(self, ctx:TSqlParser.Class_type_for_grantContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_availability_group.
    def enterDrop_availability_group(self, ctx:TSqlParser.Drop_availability_groupContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_availability_group.
    def exitDrop_availability_group(self, ctx:TSqlParser.Drop_availability_groupContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_availability_group.
    def enterAlter_availability_group(self, ctx:TSqlParser.Alter_availability_groupContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_availability_group.
    def exitAlter_availability_group(self, ctx:TSqlParser.Alter_availability_groupContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_availability_group_start.
    def enterAlter_availability_group_start(self, ctx:TSqlParser.Alter_availability_group_startContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_availability_group_start.
    def exitAlter_availability_group_start(self, ctx:TSqlParser.Alter_availability_group_startContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_availability_group_options.
    def enterAlter_availability_group_options(self, ctx:TSqlParser.Alter_availability_group_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_availability_group_options.
    def exitAlter_availability_group_options(self, ctx:TSqlParser.Alter_availability_group_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#ip_v4_failover.
    def enterIp_v4_failover(self, ctx:TSqlParser.Ip_v4_failoverContext):
        pass

    # Exit a parse tree produced by TSqlParser#ip_v4_failover.
    def exitIp_v4_failover(self, ctx:TSqlParser.Ip_v4_failoverContext):
        pass


    # Enter a parse tree produced by TSqlParser#ip_v6_failover.
    def enterIp_v6_failover(self, ctx:TSqlParser.Ip_v6_failoverContext):
        pass

    # Exit a parse tree produced by TSqlParser#ip_v6_failover.
    def exitIp_v6_failover(self, ctx:TSqlParser.Ip_v6_failoverContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_or_alter_broker_priority.
    def enterCreate_or_alter_broker_priority(self, ctx:TSqlParser.Create_or_alter_broker_priorityContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_or_alter_broker_priority.
    def exitCreate_or_alter_broker_priority(self, ctx:TSqlParser.Create_or_alter_broker_priorityContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_broker_priority.
    def enterDrop_broker_priority(self, ctx:TSqlParser.Drop_broker_priorityContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_broker_priority.
    def exitDrop_broker_priority(self, ctx:TSqlParser.Drop_broker_priorityContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_certificate.
    def enterAlter_certificate(self, ctx:TSqlParser.Alter_certificateContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_certificate.
    def exitAlter_certificate(self, ctx:TSqlParser.Alter_certificateContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_column_encryption_key.
    def enterAlter_column_encryption_key(self, ctx:TSqlParser.Alter_column_encryption_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_column_encryption_key.
    def exitAlter_column_encryption_key(self, ctx:TSqlParser.Alter_column_encryption_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_column_encryption_key.
    def enterCreate_column_encryption_key(self, ctx:TSqlParser.Create_column_encryption_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_column_encryption_key.
    def exitCreate_column_encryption_key(self, ctx:TSqlParser.Create_column_encryption_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_certificate.
    def enterDrop_certificate(self, ctx:TSqlParser.Drop_certificateContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_certificate.
    def exitDrop_certificate(self, ctx:TSqlParser.Drop_certificateContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_column_encryption_key.
    def enterDrop_column_encryption_key(self, ctx:TSqlParser.Drop_column_encryption_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_column_encryption_key.
    def exitDrop_column_encryption_key(self, ctx:TSqlParser.Drop_column_encryption_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_column_master_key.
    def enterDrop_column_master_key(self, ctx:TSqlParser.Drop_column_master_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_column_master_key.
    def exitDrop_column_master_key(self, ctx:TSqlParser.Drop_column_master_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_contract.
    def enterDrop_contract(self, ctx:TSqlParser.Drop_contractContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_contract.
    def exitDrop_contract(self, ctx:TSqlParser.Drop_contractContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_credential.
    def enterDrop_credential(self, ctx:TSqlParser.Drop_credentialContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_credential.
    def exitDrop_credential(self, ctx:TSqlParser.Drop_credentialContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_cryptograhic_provider.
    def enterDrop_cryptograhic_provider(self, ctx:TSqlParser.Drop_cryptograhic_providerContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_cryptograhic_provider.
    def exitDrop_cryptograhic_provider(self, ctx:TSqlParser.Drop_cryptograhic_providerContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_database.
    def enterDrop_database(self, ctx:TSqlParser.Drop_databaseContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_database.
    def exitDrop_database(self, ctx:TSqlParser.Drop_databaseContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_database_audit_specification.
    def enterDrop_database_audit_specification(self, ctx:TSqlParser.Drop_database_audit_specificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_database_audit_specification.
    def exitDrop_database_audit_specification(self, ctx:TSqlParser.Drop_database_audit_specificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_database_encryption_key.
    def enterDrop_database_encryption_key(self, ctx:TSqlParser.Drop_database_encryption_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_database_encryption_key.
    def exitDrop_database_encryption_key(self, ctx:TSqlParser.Drop_database_encryption_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_database_scoped_credential.
    def enterDrop_database_scoped_credential(self, ctx:TSqlParser.Drop_database_scoped_credentialContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_database_scoped_credential.
    def exitDrop_database_scoped_credential(self, ctx:TSqlParser.Drop_database_scoped_credentialContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_default.
    def enterDrop_default(self, ctx:TSqlParser.Drop_defaultContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_default.
    def exitDrop_default(self, ctx:TSqlParser.Drop_defaultContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_endpoint.
    def enterDrop_endpoint(self, ctx:TSqlParser.Drop_endpointContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_endpoint.
    def exitDrop_endpoint(self, ctx:TSqlParser.Drop_endpointContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_external_data_source.
    def enterDrop_external_data_source(self, ctx:TSqlParser.Drop_external_data_sourceContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_external_data_source.
    def exitDrop_external_data_source(self, ctx:TSqlParser.Drop_external_data_sourceContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_external_file_format.
    def enterDrop_external_file_format(self, ctx:TSqlParser.Drop_external_file_formatContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_external_file_format.
    def exitDrop_external_file_format(self, ctx:TSqlParser.Drop_external_file_formatContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_external_library.
    def enterDrop_external_library(self, ctx:TSqlParser.Drop_external_libraryContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_external_library.
    def exitDrop_external_library(self, ctx:TSqlParser.Drop_external_libraryContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_external_resource_pool.
    def enterDrop_external_resource_pool(self, ctx:TSqlParser.Drop_external_resource_poolContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_external_resource_pool.
    def exitDrop_external_resource_pool(self, ctx:TSqlParser.Drop_external_resource_poolContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_external_table.
    def enterDrop_external_table(self, ctx:TSqlParser.Drop_external_tableContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_external_table.
    def exitDrop_external_table(self, ctx:TSqlParser.Drop_external_tableContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_event_notifications.
    def enterDrop_event_notifications(self, ctx:TSqlParser.Drop_event_notificationsContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_event_notifications.
    def exitDrop_event_notifications(self, ctx:TSqlParser.Drop_event_notificationsContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_event_session.
    def enterDrop_event_session(self, ctx:TSqlParser.Drop_event_sessionContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_event_session.
    def exitDrop_event_session(self, ctx:TSqlParser.Drop_event_sessionContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_fulltext_catalog.
    def enterDrop_fulltext_catalog(self, ctx:TSqlParser.Drop_fulltext_catalogContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_fulltext_catalog.
    def exitDrop_fulltext_catalog(self, ctx:TSqlParser.Drop_fulltext_catalogContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_fulltext_index.
    def enterDrop_fulltext_index(self, ctx:TSqlParser.Drop_fulltext_indexContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_fulltext_index.
    def exitDrop_fulltext_index(self, ctx:TSqlParser.Drop_fulltext_indexContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_fulltext_stoplist.
    def enterDrop_fulltext_stoplist(self, ctx:TSqlParser.Drop_fulltext_stoplistContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_fulltext_stoplist.
    def exitDrop_fulltext_stoplist(self, ctx:TSqlParser.Drop_fulltext_stoplistContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_login.
    def enterDrop_login(self, ctx:TSqlParser.Drop_loginContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_login.
    def exitDrop_login(self, ctx:TSqlParser.Drop_loginContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_master_key.
    def enterDrop_master_key(self, ctx:TSqlParser.Drop_master_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_master_key.
    def exitDrop_master_key(self, ctx:TSqlParser.Drop_master_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_message_type.
    def enterDrop_message_type(self, ctx:TSqlParser.Drop_message_typeContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_message_type.
    def exitDrop_message_type(self, ctx:TSqlParser.Drop_message_typeContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_partition_function.
    def enterDrop_partition_function(self, ctx:TSqlParser.Drop_partition_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_partition_function.
    def exitDrop_partition_function(self, ctx:TSqlParser.Drop_partition_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_partition_scheme.
    def enterDrop_partition_scheme(self, ctx:TSqlParser.Drop_partition_schemeContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_partition_scheme.
    def exitDrop_partition_scheme(self, ctx:TSqlParser.Drop_partition_schemeContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_queue.
    def enterDrop_queue(self, ctx:TSqlParser.Drop_queueContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_queue.
    def exitDrop_queue(self, ctx:TSqlParser.Drop_queueContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_remote_service_binding.
    def enterDrop_remote_service_binding(self, ctx:TSqlParser.Drop_remote_service_bindingContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_remote_service_binding.
    def exitDrop_remote_service_binding(self, ctx:TSqlParser.Drop_remote_service_bindingContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_resource_pool.
    def enterDrop_resource_pool(self, ctx:TSqlParser.Drop_resource_poolContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_resource_pool.
    def exitDrop_resource_pool(self, ctx:TSqlParser.Drop_resource_poolContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_db_role.
    def enterDrop_db_role(self, ctx:TSqlParser.Drop_db_roleContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_db_role.
    def exitDrop_db_role(self, ctx:TSqlParser.Drop_db_roleContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_route.
    def enterDrop_route(self, ctx:TSqlParser.Drop_routeContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_route.
    def exitDrop_route(self, ctx:TSqlParser.Drop_routeContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_rule.
    def enterDrop_rule(self, ctx:TSqlParser.Drop_ruleContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_rule.
    def exitDrop_rule(self, ctx:TSqlParser.Drop_ruleContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_schema.
    def enterDrop_schema(self, ctx:TSqlParser.Drop_schemaContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_schema.
    def exitDrop_schema(self, ctx:TSqlParser.Drop_schemaContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_search_property_list.
    def enterDrop_search_property_list(self, ctx:TSqlParser.Drop_search_property_listContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_search_property_list.
    def exitDrop_search_property_list(self, ctx:TSqlParser.Drop_search_property_listContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_security_policy.
    def enterDrop_security_policy(self, ctx:TSqlParser.Drop_security_policyContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_security_policy.
    def exitDrop_security_policy(self, ctx:TSqlParser.Drop_security_policyContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_sequence.
    def enterDrop_sequence(self, ctx:TSqlParser.Drop_sequenceContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_sequence.
    def exitDrop_sequence(self, ctx:TSqlParser.Drop_sequenceContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_server_audit.
    def enterDrop_server_audit(self, ctx:TSqlParser.Drop_server_auditContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_server_audit.
    def exitDrop_server_audit(self, ctx:TSqlParser.Drop_server_auditContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_server_audit_specification.
    def enterDrop_server_audit_specification(self, ctx:TSqlParser.Drop_server_audit_specificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_server_audit_specification.
    def exitDrop_server_audit_specification(self, ctx:TSqlParser.Drop_server_audit_specificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_server_role.
    def enterDrop_server_role(self, ctx:TSqlParser.Drop_server_roleContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_server_role.
    def exitDrop_server_role(self, ctx:TSqlParser.Drop_server_roleContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_service.
    def enterDrop_service(self, ctx:TSqlParser.Drop_serviceContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_service.
    def exitDrop_service(self, ctx:TSqlParser.Drop_serviceContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_signature.
    def enterDrop_signature(self, ctx:TSqlParser.Drop_signatureContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_signature.
    def exitDrop_signature(self, ctx:TSqlParser.Drop_signatureContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_statistics_name_azure_dw_and_pdw.
    def enterDrop_statistics_name_azure_dw_and_pdw(self, ctx:TSqlParser.Drop_statistics_name_azure_dw_and_pdwContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_statistics_name_azure_dw_and_pdw.
    def exitDrop_statistics_name_azure_dw_and_pdw(self, ctx:TSqlParser.Drop_statistics_name_azure_dw_and_pdwContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_symmetric_key.
    def enterDrop_symmetric_key(self, ctx:TSqlParser.Drop_symmetric_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_symmetric_key.
    def exitDrop_symmetric_key(self, ctx:TSqlParser.Drop_symmetric_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_synonym.
    def enterDrop_synonym(self, ctx:TSqlParser.Drop_synonymContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_synonym.
    def exitDrop_synonym(self, ctx:TSqlParser.Drop_synonymContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_user.
    def enterDrop_user(self, ctx:TSqlParser.Drop_userContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_user.
    def exitDrop_user(self, ctx:TSqlParser.Drop_userContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_workload_group.
    def enterDrop_workload_group(self, ctx:TSqlParser.Drop_workload_groupContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_workload_group.
    def exitDrop_workload_group(self, ctx:TSqlParser.Drop_workload_groupContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_xml_schema_collection.
    def enterDrop_xml_schema_collection(self, ctx:TSqlParser.Drop_xml_schema_collectionContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_xml_schema_collection.
    def exitDrop_xml_schema_collection(self, ctx:TSqlParser.Drop_xml_schema_collectionContext):
        pass


    # Enter a parse tree produced by TSqlParser#disable_trigger.
    def enterDisable_trigger(self, ctx:TSqlParser.Disable_triggerContext):
        pass

    # Exit a parse tree produced by TSqlParser#disable_trigger.
    def exitDisable_trigger(self, ctx:TSqlParser.Disable_triggerContext):
        pass


    # Enter a parse tree produced by TSqlParser#enable_trigger.
    def enterEnable_trigger(self, ctx:TSqlParser.Enable_triggerContext):
        pass

    # Exit a parse tree produced by TSqlParser#enable_trigger.
    def exitEnable_trigger(self, ctx:TSqlParser.Enable_triggerContext):
        pass


    # Enter a parse tree produced by TSqlParser#lock_table.
    def enterLock_table(self, ctx:TSqlParser.Lock_tableContext):
        pass

    # Exit a parse tree produced by TSqlParser#lock_table.
    def exitLock_table(self, ctx:TSqlParser.Lock_tableContext):
        pass


    # Enter a parse tree produced by TSqlParser#truncate_table.
    def enterTruncate_table(self, ctx:TSqlParser.Truncate_tableContext):
        pass

    # Exit a parse tree produced by TSqlParser#truncate_table.
    def exitTruncate_table(self, ctx:TSqlParser.Truncate_tableContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_column_master_key.
    def enterCreate_column_master_key(self, ctx:TSqlParser.Create_column_master_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_column_master_key.
    def exitCreate_column_master_key(self, ctx:TSqlParser.Create_column_master_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_credential.
    def enterAlter_credential(self, ctx:TSqlParser.Alter_credentialContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_credential.
    def exitAlter_credential(self, ctx:TSqlParser.Alter_credentialContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_credential.
    def enterCreate_credential(self, ctx:TSqlParser.Create_credentialContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_credential.
    def exitCreate_credential(self, ctx:TSqlParser.Create_credentialContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_cryptographic_provider.
    def enterAlter_cryptographic_provider(self, ctx:TSqlParser.Alter_cryptographic_providerContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_cryptographic_provider.
    def exitAlter_cryptographic_provider(self, ctx:TSqlParser.Alter_cryptographic_providerContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_cryptographic_provider.
    def enterCreate_cryptographic_provider(self, ctx:TSqlParser.Create_cryptographic_providerContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_cryptographic_provider.
    def exitCreate_cryptographic_provider(self, ctx:TSqlParser.Create_cryptographic_providerContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_endpoint.
    def enterCreate_endpoint(self, ctx:TSqlParser.Create_endpointContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_endpoint.
    def exitCreate_endpoint(self, ctx:TSqlParser.Create_endpointContext):
        pass


    # Enter a parse tree produced by TSqlParser#endpoint_encryption_alogorithm_clause.
    def enterEndpoint_encryption_alogorithm_clause(self, ctx:TSqlParser.Endpoint_encryption_alogorithm_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#endpoint_encryption_alogorithm_clause.
    def exitEndpoint_encryption_alogorithm_clause(self, ctx:TSqlParser.Endpoint_encryption_alogorithm_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#endpoint_authentication_clause.
    def enterEndpoint_authentication_clause(self, ctx:TSqlParser.Endpoint_authentication_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#endpoint_authentication_clause.
    def exitEndpoint_authentication_clause(self, ctx:TSqlParser.Endpoint_authentication_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#endpoint_listener_clause.
    def enterEndpoint_listener_clause(self, ctx:TSqlParser.Endpoint_listener_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#endpoint_listener_clause.
    def exitEndpoint_listener_clause(self, ctx:TSqlParser.Endpoint_listener_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_event_notification.
    def enterCreate_event_notification(self, ctx:TSqlParser.Create_event_notificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_event_notification.
    def exitCreate_event_notification(self, ctx:TSqlParser.Create_event_notificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_or_alter_event_session.
    def enterCreate_or_alter_event_session(self, ctx:TSqlParser.Create_or_alter_event_sessionContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_or_alter_event_session.
    def exitCreate_or_alter_event_session(self, ctx:TSqlParser.Create_or_alter_event_sessionContext):
        pass


    # Enter a parse tree produced by TSqlParser#event_session_predicate_expression.
    def enterEvent_session_predicate_expression(self, ctx:TSqlParser.Event_session_predicate_expressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#event_session_predicate_expression.
    def exitEvent_session_predicate_expression(self, ctx:TSqlParser.Event_session_predicate_expressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#event_session_predicate_factor.
    def enterEvent_session_predicate_factor(self, ctx:TSqlParser.Event_session_predicate_factorContext):
        pass

    # Exit a parse tree produced by TSqlParser#event_session_predicate_factor.
    def exitEvent_session_predicate_factor(self, ctx:TSqlParser.Event_session_predicate_factorContext):
        pass


    # Enter a parse tree produced by TSqlParser#event_session_predicate_leaf.
    def enterEvent_session_predicate_leaf(self, ctx:TSqlParser.Event_session_predicate_leafContext):
        pass

    # Exit a parse tree produced by TSqlParser#event_session_predicate_leaf.
    def exitEvent_session_predicate_leaf(self, ctx:TSqlParser.Event_session_predicate_leafContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_external_data_source.
    def enterAlter_external_data_source(self, ctx:TSqlParser.Alter_external_data_sourceContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_external_data_source.
    def exitAlter_external_data_source(self, ctx:TSqlParser.Alter_external_data_sourceContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_external_library.
    def enterAlter_external_library(self, ctx:TSqlParser.Alter_external_libraryContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_external_library.
    def exitAlter_external_library(self, ctx:TSqlParser.Alter_external_libraryContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_external_library.
    def enterCreate_external_library(self, ctx:TSqlParser.Create_external_libraryContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_external_library.
    def exitCreate_external_library(self, ctx:TSqlParser.Create_external_libraryContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_external_resource_pool.
    def enterAlter_external_resource_pool(self, ctx:TSqlParser.Alter_external_resource_poolContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_external_resource_pool.
    def exitAlter_external_resource_pool(self, ctx:TSqlParser.Alter_external_resource_poolContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_external_resource_pool.
    def enterCreate_external_resource_pool(self, ctx:TSqlParser.Create_external_resource_poolContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_external_resource_pool.
    def exitCreate_external_resource_pool(self, ctx:TSqlParser.Create_external_resource_poolContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_fulltext_catalog.
    def enterAlter_fulltext_catalog(self, ctx:TSqlParser.Alter_fulltext_catalogContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_fulltext_catalog.
    def exitAlter_fulltext_catalog(self, ctx:TSqlParser.Alter_fulltext_catalogContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_fulltext_catalog.
    def enterCreate_fulltext_catalog(self, ctx:TSqlParser.Create_fulltext_catalogContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_fulltext_catalog.
    def exitCreate_fulltext_catalog(self, ctx:TSqlParser.Create_fulltext_catalogContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_fulltext_stoplist.
    def enterAlter_fulltext_stoplist(self, ctx:TSqlParser.Alter_fulltext_stoplistContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_fulltext_stoplist.
    def exitAlter_fulltext_stoplist(self, ctx:TSqlParser.Alter_fulltext_stoplistContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_fulltext_stoplist.
    def enterCreate_fulltext_stoplist(self, ctx:TSqlParser.Create_fulltext_stoplistContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_fulltext_stoplist.
    def exitCreate_fulltext_stoplist(self, ctx:TSqlParser.Create_fulltext_stoplistContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_login_sql_server.
    def enterAlter_login_sql_server(self, ctx:TSqlParser.Alter_login_sql_serverContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_login_sql_server.
    def exitAlter_login_sql_server(self, ctx:TSqlParser.Alter_login_sql_serverContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_login_sql_server.
    def enterCreate_login_sql_server(self, ctx:TSqlParser.Create_login_sql_serverContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_login_sql_server.
    def exitCreate_login_sql_server(self, ctx:TSqlParser.Create_login_sql_serverContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_login_azure_sql.
    def enterAlter_login_azure_sql(self, ctx:TSqlParser.Alter_login_azure_sqlContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_login_azure_sql.
    def exitAlter_login_azure_sql(self, ctx:TSqlParser.Alter_login_azure_sqlContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_login_azure_sql.
    def enterCreate_login_azure_sql(self, ctx:TSqlParser.Create_login_azure_sqlContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_login_azure_sql.
    def exitCreate_login_azure_sql(self, ctx:TSqlParser.Create_login_azure_sqlContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_login_azure_sql_dw_and_pdw.
    def enterAlter_login_azure_sql_dw_and_pdw(self, ctx:TSqlParser.Alter_login_azure_sql_dw_and_pdwContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_login_azure_sql_dw_and_pdw.
    def exitAlter_login_azure_sql_dw_and_pdw(self, ctx:TSqlParser.Alter_login_azure_sql_dw_and_pdwContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_login_pdw.
    def enterCreate_login_pdw(self, ctx:TSqlParser.Create_login_pdwContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_login_pdw.
    def exitCreate_login_pdw(self, ctx:TSqlParser.Create_login_pdwContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_master_key_sql_server.
    def enterAlter_master_key_sql_server(self, ctx:TSqlParser.Alter_master_key_sql_serverContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_master_key_sql_server.
    def exitAlter_master_key_sql_server(self, ctx:TSqlParser.Alter_master_key_sql_serverContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_master_key_sql_server.
    def enterCreate_master_key_sql_server(self, ctx:TSqlParser.Create_master_key_sql_serverContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_master_key_sql_server.
    def exitCreate_master_key_sql_server(self, ctx:TSqlParser.Create_master_key_sql_serverContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_master_key_azure_sql.
    def enterAlter_master_key_azure_sql(self, ctx:TSqlParser.Alter_master_key_azure_sqlContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_master_key_azure_sql.
    def exitAlter_master_key_azure_sql(self, ctx:TSqlParser.Alter_master_key_azure_sqlContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_master_key_azure_sql.
    def enterCreate_master_key_azure_sql(self, ctx:TSqlParser.Create_master_key_azure_sqlContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_master_key_azure_sql.
    def exitCreate_master_key_azure_sql(self, ctx:TSqlParser.Create_master_key_azure_sqlContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_message_type.
    def enterAlter_message_type(self, ctx:TSqlParser.Alter_message_typeContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_message_type.
    def exitAlter_message_type(self, ctx:TSqlParser.Alter_message_typeContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_partition_function.
    def enterAlter_partition_function(self, ctx:TSqlParser.Alter_partition_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_partition_function.
    def exitAlter_partition_function(self, ctx:TSqlParser.Alter_partition_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_partition_scheme.
    def enterAlter_partition_scheme(self, ctx:TSqlParser.Alter_partition_schemeContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_partition_scheme.
    def exitAlter_partition_scheme(self, ctx:TSqlParser.Alter_partition_schemeContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_remote_service_binding.
    def enterAlter_remote_service_binding(self, ctx:TSqlParser.Alter_remote_service_bindingContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_remote_service_binding.
    def exitAlter_remote_service_binding(self, ctx:TSqlParser.Alter_remote_service_bindingContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_remote_service_binding.
    def enterCreate_remote_service_binding(self, ctx:TSqlParser.Create_remote_service_bindingContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_remote_service_binding.
    def exitCreate_remote_service_binding(self, ctx:TSqlParser.Create_remote_service_bindingContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_resource_pool.
    def enterCreate_resource_pool(self, ctx:TSqlParser.Create_resource_poolContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_resource_pool.
    def exitCreate_resource_pool(self, ctx:TSqlParser.Create_resource_poolContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_resource_governor.
    def enterAlter_resource_governor(self, ctx:TSqlParser.Alter_resource_governorContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_resource_governor.
    def exitAlter_resource_governor(self, ctx:TSqlParser.Alter_resource_governorContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_database_audit_specification.
    def enterAlter_database_audit_specification(self, ctx:TSqlParser.Alter_database_audit_specificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_database_audit_specification.
    def exitAlter_database_audit_specification(self, ctx:TSqlParser.Alter_database_audit_specificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#audit_action_spec_group.
    def enterAudit_action_spec_group(self, ctx:TSqlParser.Audit_action_spec_groupContext):
        pass

    # Exit a parse tree produced by TSqlParser#audit_action_spec_group.
    def exitAudit_action_spec_group(self, ctx:TSqlParser.Audit_action_spec_groupContext):
        pass


    # Enter a parse tree produced by TSqlParser#audit_action_specification.
    def enterAudit_action_specification(self, ctx:TSqlParser.Audit_action_specificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#audit_action_specification.
    def exitAudit_action_specification(self, ctx:TSqlParser.Audit_action_specificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#action_specification.
    def enterAction_specification(self, ctx:TSqlParser.Action_specificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#action_specification.
    def exitAction_specification(self, ctx:TSqlParser.Action_specificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#audit_class_name.
    def enterAudit_class_name(self, ctx:TSqlParser.Audit_class_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#audit_class_name.
    def exitAudit_class_name(self, ctx:TSqlParser.Audit_class_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#audit_securable.
    def enterAudit_securable(self, ctx:TSqlParser.Audit_securableContext):
        pass

    # Exit a parse tree produced by TSqlParser#audit_securable.
    def exitAudit_securable(self, ctx:TSqlParser.Audit_securableContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_db_role.
    def enterAlter_db_role(self, ctx:TSqlParser.Alter_db_roleContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_db_role.
    def exitAlter_db_role(self, ctx:TSqlParser.Alter_db_roleContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_database_audit_specification.
    def enterCreate_database_audit_specification(self, ctx:TSqlParser.Create_database_audit_specificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_database_audit_specification.
    def exitCreate_database_audit_specification(self, ctx:TSqlParser.Create_database_audit_specificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_db_role.
    def enterCreate_db_role(self, ctx:TSqlParser.Create_db_roleContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_db_role.
    def exitCreate_db_role(self, ctx:TSqlParser.Create_db_roleContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_route.
    def enterCreate_route(self, ctx:TSqlParser.Create_routeContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_route.
    def exitCreate_route(self, ctx:TSqlParser.Create_routeContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_rule.
    def enterCreate_rule(self, ctx:TSqlParser.Create_ruleContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_rule.
    def exitCreate_rule(self, ctx:TSqlParser.Create_ruleContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_schema_sql.
    def enterAlter_schema_sql(self, ctx:TSqlParser.Alter_schema_sqlContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_schema_sql.
    def exitAlter_schema_sql(self, ctx:TSqlParser.Alter_schema_sqlContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_schema.
    def enterCreate_schema(self, ctx:TSqlParser.Create_schemaContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_schema.
    def exitCreate_schema(self, ctx:TSqlParser.Create_schemaContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_schema_azure_sql_dw_and_pdw.
    def enterCreate_schema_azure_sql_dw_and_pdw(self, ctx:TSqlParser.Create_schema_azure_sql_dw_and_pdwContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_schema_azure_sql_dw_and_pdw.
    def exitCreate_schema_azure_sql_dw_and_pdw(self, ctx:TSqlParser.Create_schema_azure_sql_dw_and_pdwContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_schema_azure_sql_dw_and_pdw.
    def enterAlter_schema_azure_sql_dw_and_pdw(self, ctx:TSqlParser.Alter_schema_azure_sql_dw_and_pdwContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_schema_azure_sql_dw_and_pdw.
    def exitAlter_schema_azure_sql_dw_and_pdw(self, ctx:TSqlParser.Alter_schema_azure_sql_dw_and_pdwContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_search_property_list.
    def enterCreate_search_property_list(self, ctx:TSqlParser.Create_search_property_listContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_search_property_list.
    def exitCreate_search_property_list(self, ctx:TSqlParser.Create_search_property_listContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_security_policy.
    def enterCreate_security_policy(self, ctx:TSqlParser.Create_security_policyContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_security_policy.
    def exitCreate_security_policy(self, ctx:TSqlParser.Create_security_policyContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_sequence.
    def enterAlter_sequence(self, ctx:TSqlParser.Alter_sequenceContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_sequence.
    def exitAlter_sequence(self, ctx:TSqlParser.Alter_sequenceContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_sequence.
    def enterCreate_sequence(self, ctx:TSqlParser.Create_sequenceContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_sequence.
    def exitCreate_sequence(self, ctx:TSqlParser.Create_sequenceContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_server_audit.
    def enterAlter_server_audit(self, ctx:TSqlParser.Alter_server_auditContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_server_audit.
    def exitAlter_server_audit(self, ctx:TSqlParser.Alter_server_auditContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_server_audit.
    def enterCreate_server_audit(self, ctx:TSqlParser.Create_server_auditContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_server_audit.
    def exitCreate_server_audit(self, ctx:TSqlParser.Create_server_auditContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_server_audit_specification.
    def enterAlter_server_audit_specification(self, ctx:TSqlParser.Alter_server_audit_specificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_server_audit_specification.
    def exitAlter_server_audit_specification(self, ctx:TSqlParser.Alter_server_audit_specificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_server_audit_specification.
    def enterCreate_server_audit_specification(self, ctx:TSqlParser.Create_server_audit_specificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_server_audit_specification.
    def exitCreate_server_audit_specification(self, ctx:TSqlParser.Create_server_audit_specificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_server_configuration.
    def enterAlter_server_configuration(self, ctx:TSqlParser.Alter_server_configurationContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_server_configuration.
    def exitAlter_server_configuration(self, ctx:TSqlParser.Alter_server_configurationContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_server_role.
    def enterAlter_server_role(self, ctx:TSqlParser.Alter_server_roleContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_server_role.
    def exitAlter_server_role(self, ctx:TSqlParser.Alter_server_roleContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_server_role.
    def enterCreate_server_role(self, ctx:TSqlParser.Create_server_roleContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_server_role.
    def exitCreate_server_role(self, ctx:TSqlParser.Create_server_roleContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_server_role_pdw.
    def enterAlter_server_role_pdw(self, ctx:TSqlParser.Alter_server_role_pdwContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_server_role_pdw.
    def exitAlter_server_role_pdw(self, ctx:TSqlParser.Alter_server_role_pdwContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_service.
    def enterAlter_service(self, ctx:TSqlParser.Alter_serviceContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_service.
    def exitAlter_service(self, ctx:TSqlParser.Alter_serviceContext):
        pass


    # Enter a parse tree produced by TSqlParser#opt_arg_clause.
    def enterOpt_arg_clause(self, ctx:TSqlParser.Opt_arg_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#opt_arg_clause.
    def exitOpt_arg_clause(self, ctx:TSqlParser.Opt_arg_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_service.
    def enterCreate_service(self, ctx:TSqlParser.Create_serviceContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_service.
    def exitCreate_service(self, ctx:TSqlParser.Create_serviceContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_service_master_key.
    def enterAlter_service_master_key(self, ctx:TSqlParser.Alter_service_master_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_service_master_key.
    def exitAlter_service_master_key(self, ctx:TSqlParser.Alter_service_master_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_symmetric_key.
    def enterAlter_symmetric_key(self, ctx:TSqlParser.Alter_symmetric_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_symmetric_key.
    def exitAlter_symmetric_key(self, ctx:TSqlParser.Alter_symmetric_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_synonym.
    def enterCreate_synonym(self, ctx:TSqlParser.Create_synonymContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_synonym.
    def exitCreate_synonym(self, ctx:TSqlParser.Create_synonymContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_user.
    def enterAlter_user(self, ctx:TSqlParser.Alter_userContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_user.
    def exitAlter_user(self, ctx:TSqlParser.Alter_userContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_user.
    def enterCreate_user(self, ctx:TSqlParser.Create_userContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_user.
    def exitCreate_user(self, ctx:TSqlParser.Create_userContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_user_azure_sql_dw.
    def enterCreate_user_azure_sql_dw(self, ctx:TSqlParser.Create_user_azure_sql_dwContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_user_azure_sql_dw.
    def exitCreate_user_azure_sql_dw(self, ctx:TSqlParser.Create_user_azure_sql_dwContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_user_azure_sql.
    def enterAlter_user_azure_sql(self, ctx:TSqlParser.Alter_user_azure_sqlContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_user_azure_sql.
    def exitAlter_user_azure_sql(self, ctx:TSqlParser.Alter_user_azure_sqlContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_workload_group.
    def enterAlter_workload_group(self, ctx:TSqlParser.Alter_workload_groupContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_workload_group.
    def exitAlter_workload_group(self, ctx:TSqlParser.Alter_workload_groupContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_workload_group.
    def enterCreate_workload_group(self, ctx:TSqlParser.Create_workload_groupContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_workload_group.
    def exitCreate_workload_group(self, ctx:TSqlParser.Create_workload_groupContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_xml_schema_collection.
    def enterCreate_xml_schema_collection(self, ctx:TSqlParser.Create_xml_schema_collectionContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_xml_schema_collection.
    def exitCreate_xml_schema_collection(self, ctx:TSqlParser.Create_xml_schema_collectionContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_partition_function.
    def enterCreate_partition_function(self, ctx:TSqlParser.Create_partition_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_partition_function.
    def exitCreate_partition_function(self, ctx:TSqlParser.Create_partition_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_partition_scheme.
    def enterCreate_partition_scheme(self, ctx:TSqlParser.Create_partition_schemeContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_partition_scheme.
    def exitCreate_partition_scheme(self, ctx:TSqlParser.Create_partition_schemeContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_queue.
    def enterCreate_queue(self, ctx:TSqlParser.Create_queueContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_queue.
    def exitCreate_queue(self, ctx:TSqlParser.Create_queueContext):
        pass


    # Enter a parse tree produced by TSqlParser#queue_settings.
    def enterQueue_settings(self, ctx:TSqlParser.Queue_settingsContext):
        pass

    # Exit a parse tree produced by TSqlParser#queue_settings.
    def exitQueue_settings(self, ctx:TSqlParser.Queue_settingsContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_queue.
    def enterAlter_queue(self, ctx:TSqlParser.Alter_queueContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_queue.
    def exitAlter_queue(self, ctx:TSqlParser.Alter_queueContext):
        pass


    # Enter a parse tree produced by TSqlParser#queue_action.
    def enterQueue_action(self, ctx:TSqlParser.Queue_actionContext):
        pass

    # Exit a parse tree produced by TSqlParser#queue_action.
    def exitQueue_action(self, ctx:TSqlParser.Queue_actionContext):
        pass


    # Enter a parse tree produced by TSqlParser#queue_rebuild_options.
    def enterQueue_rebuild_options(self, ctx:TSqlParser.Queue_rebuild_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#queue_rebuild_options.
    def exitQueue_rebuild_options(self, ctx:TSqlParser.Queue_rebuild_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_contract.
    def enterCreate_contract(self, ctx:TSqlParser.Create_contractContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_contract.
    def exitCreate_contract(self, ctx:TSqlParser.Create_contractContext):
        pass


    # Enter a parse tree produced by TSqlParser#conversation_statement.
    def enterConversation_statement(self, ctx:TSqlParser.Conversation_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#conversation_statement.
    def exitConversation_statement(self, ctx:TSqlParser.Conversation_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#message_statement.
    def enterMessage_statement(self, ctx:TSqlParser.Message_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#message_statement.
    def exitMessage_statement(self, ctx:TSqlParser.Message_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#merge_statement.
    def enterMerge_statement(self, ctx:TSqlParser.Merge_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#merge_statement.
    def exitMerge_statement(self, ctx:TSqlParser.Merge_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#when_matches.
    def enterWhen_matches(self, ctx:TSqlParser.When_matchesContext):
        pass

    # Exit a parse tree produced by TSqlParser#when_matches.
    def exitWhen_matches(self, ctx:TSqlParser.When_matchesContext):
        pass


    # Enter a parse tree produced by TSqlParser#merge_matched.
    def enterMerge_matched(self, ctx:TSqlParser.Merge_matchedContext):
        pass

    # Exit a parse tree produced by TSqlParser#merge_matched.
    def exitMerge_matched(self, ctx:TSqlParser.Merge_matchedContext):
        pass


    # Enter a parse tree produced by TSqlParser#merge_not_matched.
    def enterMerge_not_matched(self, ctx:TSqlParser.Merge_not_matchedContext):
        pass

    # Exit a parse tree produced by TSqlParser#merge_not_matched.
    def exitMerge_not_matched(self, ctx:TSqlParser.Merge_not_matchedContext):
        pass


    # Enter a parse tree produced by TSqlParser#delete_statement.
    def enterDelete_statement(self, ctx:TSqlParser.Delete_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#delete_statement.
    def exitDelete_statement(self, ctx:TSqlParser.Delete_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#delete_statement_from.
    def enterDelete_statement_from(self, ctx:TSqlParser.Delete_statement_fromContext):
        pass

    # Exit a parse tree produced by TSqlParser#delete_statement_from.
    def exitDelete_statement_from(self, ctx:TSqlParser.Delete_statement_fromContext):
        pass


    # Enter a parse tree produced by TSqlParser#insert_statement.
    def enterInsert_statement(self, ctx:TSqlParser.Insert_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#insert_statement.
    def exitInsert_statement(self, ctx:TSqlParser.Insert_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#insert_statement_value.
    def enterInsert_statement_value(self, ctx:TSqlParser.Insert_statement_valueContext):
        pass

    # Exit a parse tree produced by TSqlParser#insert_statement_value.
    def exitInsert_statement_value(self, ctx:TSqlParser.Insert_statement_valueContext):
        pass


    # Enter a parse tree produced by TSqlParser#receive_statement.
    def enterReceive_statement(self, ctx:TSqlParser.Receive_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#receive_statement.
    def exitReceive_statement(self, ctx:TSqlParser.Receive_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#select_statement_standalone.
    def enterSelect_statement_standalone(self, ctx:TSqlParser.Select_statement_standaloneContext):
        pass

    # Exit a parse tree produced by TSqlParser#select_statement_standalone.
    def exitSelect_statement_standalone(self, ctx:TSqlParser.Select_statement_standaloneContext):
        pass


    # Enter a parse tree produced by TSqlParser#select_statement.
    def enterSelect_statement(self, ctx:TSqlParser.Select_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#select_statement.
    def exitSelect_statement(self, ctx:TSqlParser.Select_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#time.
    def enterTime(self, ctx:TSqlParser.TimeContext):
        pass

    # Exit a parse tree produced by TSqlParser#time.
    def exitTime(self, ctx:TSqlParser.TimeContext):
        pass


    # Enter a parse tree produced by TSqlParser#update_statement.
    def enterUpdate_statement(self, ctx:TSqlParser.Update_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#update_statement.
    def exitUpdate_statement(self, ctx:TSqlParser.Update_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#output_clause.
    def enterOutput_clause(self, ctx:TSqlParser.Output_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#output_clause.
    def exitOutput_clause(self, ctx:TSqlParser.Output_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#output_dml_list_elem.
    def enterOutput_dml_list_elem(self, ctx:TSqlParser.Output_dml_list_elemContext):
        pass

    # Exit a parse tree produced by TSqlParser#output_dml_list_elem.
    def exitOutput_dml_list_elem(self, ctx:TSqlParser.Output_dml_list_elemContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_database.
    def enterCreate_database(self, ctx:TSqlParser.Create_databaseContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_database.
    def exitCreate_database(self, ctx:TSqlParser.Create_databaseContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_index.
    def enterCreate_index(self, ctx:TSqlParser.Create_indexContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_index.
    def exitCreate_index(self, ctx:TSqlParser.Create_indexContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_index_options.
    def enterCreate_index_options(self, ctx:TSqlParser.Create_index_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_index_options.
    def exitCreate_index_options(self, ctx:TSqlParser.Create_index_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#relational_index_option.
    def enterRelational_index_option(self, ctx:TSqlParser.Relational_index_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#relational_index_option.
    def exitRelational_index_option(self, ctx:TSqlParser.Relational_index_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_index.
    def enterAlter_index(self, ctx:TSqlParser.Alter_indexContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_index.
    def exitAlter_index(self, ctx:TSqlParser.Alter_indexContext):
        pass


    # Enter a parse tree produced by TSqlParser#resumable_index_options.
    def enterResumable_index_options(self, ctx:TSqlParser.Resumable_index_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#resumable_index_options.
    def exitResumable_index_options(self, ctx:TSqlParser.Resumable_index_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#resumable_index_option.
    def enterResumable_index_option(self, ctx:TSqlParser.Resumable_index_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#resumable_index_option.
    def exitResumable_index_option(self, ctx:TSqlParser.Resumable_index_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#reorganize_partition.
    def enterReorganize_partition(self, ctx:TSqlParser.Reorganize_partitionContext):
        pass

    # Exit a parse tree produced by TSqlParser#reorganize_partition.
    def exitReorganize_partition(self, ctx:TSqlParser.Reorganize_partitionContext):
        pass


    # Enter a parse tree produced by TSqlParser#reorganize_options.
    def enterReorganize_options(self, ctx:TSqlParser.Reorganize_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#reorganize_options.
    def exitReorganize_options(self, ctx:TSqlParser.Reorganize_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#reorganize_option.
    def enterReorganize_option(self, ctx:TSqlParser.Reorganize_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#reorganize_option.
    def exitReorganize_option(self, ctx:TSqlParser.Reorganize_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#set_index_options.
    def enterSet_index_options(self, ctx:TSqlParser.Set_index_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#set_index_options.
    def exitSet_index_options(self, ctx:TSqlParser.Set_index_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#set_index_option.
    def enterSet_index_option(self, ctx:TSqlParser.Set_index_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#set_index_option.
    def exitSet_index_option(self, ctx:TSqlParser.Set_index_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#rebuild_partition.
    def enterRebuild_partition(self, ctx:TSqlParser.Rebuild_partitionContext):
        pass

    # Exit a parse tree produced by TSqlParser#rebuild_partition.
    def exitRebuild_partition(self, ctx:TSqlParser.Rebuild_partitionContext):
        pass


    # Enter a parse tree produced by TSqlParser#rebuild_index_options.
    def enterRebuild_index_options(self, ctx:TSqlParser.Rebuild_index_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#rebuild_index_options.
    def exitRebuild_index_options(self, ctx:TSqlParser.Rebuild_index_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#rebuild_index_option.
    def enterRebuild_index_option(self, ctx:TSqlParser.Rebuild_index_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#rebuild_index_option.
    def exitRebuild_index_option(self, ctx:TSqlParser.Rebuild_index_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#single_partition_rebuild_index_options.
    def enterSingle_partition_rebuild_index_options(self, ctx:TSqlParser.Single_partition_rebuild_index_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#single_partition_rebuild_index_options.
    def exitSingle_partition_rebuild_index_options(self, ctx:TSqlParser.Single_partition_rebuild_index_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#single_partition_rebuild_index_option.
    def enterSingle_partition_rebuild_index_option(self, ctx:TSqlParser.Single_partition_rebuild_index_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#single_partition_rebuild_index_option.
    def exitSingle_partition_rebuild_index_option(self, ctx:TSqlParser.Single_partition_rebuild_index_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#on_partitions.
    def enterOn_partitions(self, ctx:TSqlParser.On_partitionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#on_partitions.
    def exitOn_partitions(self, ctx:TSqlParser.On_partitionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_columnstore_index.
    def enterCreate_columnstore_index(self, ctx:TSqlParser.Create_columnstore_indexContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_columnstore_index.
    def exitCreate_columnstore_index(self, ctx:TSqlParser.Create_columnstore_indexContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_columnstore_index_options.
    def enterCreate_columnstore_index_options(self, ctx:TSqlParser.Create_columnstore_index_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_columnstore_index_options.
    def exitCreate_columnstore_index_options(self, ctx:TSqlParser.Create_columnstore_index_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#columnstore_index_option.
    def enterColumnstore_index_option(self, ctx:TSqlParser.Columnstore_index_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#columnstore_index_option.
    def exitColumnstore_index_option(self, ctx:TSqlParser.Columnstore_index_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_nonclustered_columnstore_index.
    def enterCreate_nonclustered_columnstore_index(self, ctx:TSqlParser.Create_nonclustered_columnstore_indexContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_nonclustered_columnstore_index.
    def exitCreate_nonclustered_columnstore_index(self, ctx:TSqlParser.Create_nonclustered_columnstore_indexContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_xml_index.
    def enterCreate_xml_index(self, ctx:TSqlParser.Create_xml_indexContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_xml_index.
    def exitCreate_xml_index(self, ctx:TSqlParser.Create_xml_indexContext):
        pass


    # Enter a parse tree produced by TSqlParser#xml_index_options.
    def enterXml_index_options(self, ctx:TSqlParser.Xml_index_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#xml_index_options.
    def exitXml_index_options(self, ctx:TSqlParser.Xml_index_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#xml_index_option.
    def enterXml_index_option(self, ctx:TSqlParser.Xml_index_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#xml_index_option.
    def exitXml_index_option(self, ctx:TSqlParser.Xml_index_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_or_alter_procedure.
    def enterCreate_or_alter_procedure(self, ctx:TSqlParser.Create_or_alter_procedureContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_or_alter_procedure.
    def exitCreate_or_alter_procedure(self, ctx:TSqlParser.Create_or_alter_procedureContext):
        pass


    # Enter a parse tree produced by TSqlParser#as_external_name.
    def enterAs_external_name(self, ctx:TSqlParser.As_external_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#as_external_name.
    def exitAs_external_name(self, ctx:TSqlParser.As_external_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_or_alter_trigger.
    def enterCreate_or_alter_trigger(self, ctx:TSqlParser.Create_or_alter_triggerContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_or_alter_trigger.
    def exitCreate_or_alter_trigger(self, ctx:TSqlParser.Create_or_alter_triggerContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_or_alter_dml_trigger.
    def enterCreate_or_alter_dml_trigger(self, ctx:TSqlParser.Create_or_alter_dml_triggerContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_or_alter_dml_trigger.
    def exitCreate_or_alter_dml_trigger(self, ctx:TSqlParser.Create_or_alter_dml_triggerContext):
        pass


    # Enter a parse tree produced by TSqlParser#dml_trigger_option.
    def enterDml_trigger_option(self, ctx:TSqlParser.Dml_trigger_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#dml_trigger_option.
    def exitDml_trigger_option(self, ctx:TSqlParser.Dml_trigger_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#dml_trigger_operation.
    def enterDml_trigger_operation(self, ctx:TSqlParser.Dml_trigger_operationContext):
        pass

    # Exit a parse tree produced by TSqlParser#dml_trigger_operation.
    def exitDml_trigger_operation(self, ctx:TSqlParser.Dml_trigger_operationContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_or_alter_ddl_trigger.
    def enterCreate_or_alter_ddl_trigger(self, ctx:TSqlParser.Create_or_alter_ddl_triggerContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_or_alter_ddl_trigger.
    def exitCreate_or_alter_ddl_trigger(self, ctx:TSqlParser.Create_or_alter_ddl_triggerContext):
        pass


    # Enter a parse tree produced by TSqlParser#ddl_trigger_operation.
    def enterDdl_trigger_operation(self, ctx:TSqlParser.Ddl_trigger_operationContext):
        pass

    # Exit a parse tree produced by TSqlParser#ddl_trigger_operation.
    def exitDdl_trigger_operation(self, ctx:TSqlParser.Ddl_trigger_operationContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_or_alter_function.
    def enterCreate_or_alter_function(self, ctx:TSqlParser.Create_or_alter_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_or_alter_function.
    def exitCreate_or_alter_function(self, ctx:TSqlParser.Create_or_alter_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#func_body_returns_select.
    def enterFunc_body_returns_select(self, ctx:TSqlParser.Func_body_returns_selectContext):
        pass

    # Exit a parse tree produced by TSqlParser#func_body_returns_select.
    def exitFunc_body_returns_select(self, ctx:TSqlParser.Func_body_returns_selectContext):
        pass


    # Enter a parse tree produced by TSqlParser#func_body_returns_table.
    def enterFunc_body_returns_table(self, ctx:TSqlParser.Func_body_returns_tableContext):
        pass

    # Exit a parse tree produced by TSqlParser#func_body_returns_table.
    def exitFunc_body_returns_table(self, ctx:TSqlParser.Func_body_returns_tableContext):
        pass


    # Enter a parse tree produced by TSqlParser#func_body_returns_scalar.
    def enterFunc_body_returns_scalar(self, ctx:TSqlParser.Func_body_returns_scalarContext):
        pass

    # Exit a parse tree produced by TSqlParser#func_body_returns_scalar.
    def exitFunc_body_returns_scalar(self, ctx:TSqlParser.Func_body_returns_scalarContext):
        pass


    # Enter a parse tree produced by TSqlParser#procedure_param_default_value.
    def enterProcedure_param_default_value(self, ctx:TSqlParser.Procedure_param_default_valueContext):
        pass

    # Exit a parse tree produced by TSqlParser#procedure_param_default_value.
    def exitProcedure_param_default_value(self, ctx:TSqlParser.Procedure_param_default_valueContext):
        pass


    # Enter a parse tree produced by TSqlParser#procedure_param.
    def enterProcedure_param(self, ctx:TSqlParser.Procedure_paramContext):
        pass

    # Exit a parse tree produced by TSqlParser#procedure_param.
    def exitProcedure_param(self, ctx:TSqlParser.Procedure_paramContext):
        pass


    # Enter a parse tree produced by TSqlParser#procedure_option.
    def enterProcedure_option(self, ctx:TSqlParser.Procedure_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#procedure_option.
    def exitProcedure_option(self, ctx:TSqlParser.Procedure_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#function_option.
    def enterFunction_option(self, ctx:TSqlParser.Function_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#function_option.
    def exitFunction_option(self, ctx:TSqlParser.Function_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_statistics.
    def enterCreate_statistics(self, ctx:TSqlParser.Create_statisticsContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_statistics.
    def exitCreate_statistics(self, ctx:TSqlParser.Create_statisticsContext):
        pass


    # Enter a parse tree produced by TSqlParser#update_statistics.
    def enterUpdate_statistics(self, ctx:TSqlParser.Update_statisticsContext):
        pass

    # Exit a parse tree produced by TSqlParser#update_statistics.
    def exitUpdate_statistics(self, ctx:TSqlParser.Update_statisticsContext):
        pass


    # Enter a parse tree produced by TSqlParser#update_statistics_options.
    def enterUpdate_statistics_options(self, ctx:TSqlParser.Update_statistics_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#update_statistics_options.
    def exitUpdate_statistics_options(self, ctx:TSqlParser.Update_statistics_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#update_statistics_option.
    def enterUpdate_statistics_option(self, ctx:TSqlParser.Update_statistics_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#update_statistics_option.
    def exitUpdate_statistics_option(self, ctx:TSqlParser.Update_statistics_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_table.
    def enterCreate_table(self, ctx:TSqlParser.Create_tableContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_table.
    def exitCreate_table(self, ctx:TSqlParser.Create_tableContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_indices.
    def enterTable_indices(self, ctx:TSqlParser.Table_indicesContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_indices.
    def exitTable_indices(self, ctx:TSqlParser.Table_indicesContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_options.
    def enterTable_options(self, ctx:TSqlParser.Table_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_options.
    def exitTable_options(self, ctx:TSqlParser.Table_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_option.
    def enterTable_option(self, ctx:TSqlParser.Table_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_option.
    def exitTable_option(self, ctx:TSqlParser.Table_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_table_index_options.
    def enterCreate_table_index_options(self, ctx:TSqlParser.Create_table_index_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_table_index_options.
    def exitCreate_table_index_options(self, ctx:TSqlParser.Create_table_index_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_table_index_option.
    def enterCreate_table_index_option(self, ctx:TSqlParser.Create_table_index_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_table_index_option.
    def exitCreate_table_index_option(self, ctx:TSqlParser.Create_table_index_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_view.
    def enterCreate_view(self, ctx:TSqlParser.Create_viewContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_view.
    def exitCreate_view(self, ctx:TSqlParser.Create_viewContext):
        pass


    # Enter a parse tree produced by TSqlParser#view_attribute.
    def enterView_attribute(self, ctx:TSqlParser.View_attributeContext):
        pass

    # Exit a parse tree produced by TSqlParser#view_attribute.
    def exitView_attribute(self, ctx:TSqlParser.View_attributeContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_table.
    def enterAlter_table(self, ctx:TSqlParser.Alter_tableContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_table.
    def exitAlter_table(self, ctx:TSqlParser.Alter_tableContext):
        pass


    # Enter a parse tree produced by TSqlParser#switch_partition.
    def enterSwitch_partition(self, ctx:TSqlParser.Switch_partitionContext):
        pass

    # Exit a parse tree produced by TSqlParser#switch_partition.
    def exitSwitch_partition(self, ctx:TSqlParser.Switch_partitionContext):
        pass


    # Enter a parse tree produced by TSqlParser#low_priority_lock_wait.
    def enterLow_priority_lock_wait(self, ctx:TSqlParser.Low_priority_lock_waitContext):
        pass

    # Exit a parse tree produced by TSqlParser#low_priority_lock_wait.
    def exitLow_priority_lock_wait(self, ctx:TSqlParser.Low_priority_lock_waitContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_database.
    def enterAlter_database(self, ctx:TSqlParser.Alter_databaseContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_database.
    def exitAlter_database(self, ctx:TSqlParser.Alter_databaseContext):
        pass


    # Enter a parse tree produced by TSqlParser#add_or_modify_files.
    def enterAdd_or_modify_files(self, ctx:TSqlParser.Add_or_modify_filesContext):
        pass

    # Exit a parse tree produced by TSqlParser#add_or_modify_files.
    def exitAdd_or_modify_files(self, ctx:TSqlParser.Add_or_modify_filesContext):
        pass


    # Enter a parse tree produced by TSqlParser#filespec.
    def enterFilespec(self, ctx:TSqlParser.FilespecContext):
        pass

    # Exit a parse tree produced by TSqlParser#filespec.
    def exitFilespec(self, ctx:TSqlParser.FilespecContext):
        pass


    # Enter a parse tree produced by TSqlParser#add_or_modify_filegroups.
    def enterAdd_or_modify_filegroups(self, ctx:TSqlParser.Add_or_modify_filegroupsContext):
        pass

    # Exit a parse tree produced by TSqlParser#add_or_modify_filegroups.
    def exitAdd_or_modify_filegroups(self, ctx:TSqlParser.Add_or_modify_filegroupsContext):
        pass


    # Enter a parse tree produced by TSqlParser#filegroup_updatability_option.
    def enterFilegroup_updatability_option(self, ctx:TSqlParser.Filegroup_updatability_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#filegroup_updatability_option.
    def exitFilegroup_updatability_option(self, ctx:TSqlParser.Filegroup_updatability_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#database_optionspec.
    def enterDatabase_optionspec(self, ctx:TSqlParser.Database_optionspecContext):
        pass

    # Exit a parse tree produced by TSqlParser#database_optionspec.
    def exitDatabase_optionspec(self, ctx:TSqlParser.Database_optionspecContext):
        pass


    # Enter a parse tree produced by TSqlParser#auto_option.
    def enterAuto_option(self, ctx:TSqlParser.Auto_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#auto_option.
    def exitAuto_option(self, ctx:TSqlParser.Auto_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#change_tracking_option.
    def enterChange_tracking_option(self, ctx:TSqlParser.Change_tracking_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#change_tracking_option.
    def exitChange_tracking_option(self, ctx:TSqlParser.Change_tracking_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#change_tracking_option_list.
    def enterChange_tracking_option_list(self, ctx:TSqlParser.Change_tracking_option_listContext):
        pass

    # Exit a parse tree produced by TSqlParser#change_tracking_option_list.
    def exitChange_tracking_option_list(self, ctx:TSqlParser.Change_tracking_option_listContext):
        pass


    # Enter a parse tree produced by TSqlParser#containment_option.
    def enterContainment_option(self, ctx:TSqlParser.Containment_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#containment_option.
    def exitContainment_option(self, ctx:TSqlParser.Containment_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#cursor_option.
    def enterCursor_option(self, ctx:TSqlParser.Cursor_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#cursor_option.
    def exitCursor_option(self, ctx:TSqlParser.Cursor_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_endpoint.
    def enterAlter_endpoint(self, ctx:TSqlParser.Alter_endpointContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_endpoint.
    def exitAlter_endpoint(self, ctx:TSqlParser.Alter_endpointContext):
        pass


    # Enter a parse tree produced by TSqlParser#database_mirroring_option.
    def enterDatabase_mirroring_option(self, ctx:TSqlParser.Database_mirroring_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#database_mirroring_option.
    def exitDatabase_mirroring_option(self, ctx:TSqlParser.Database_mirroring_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#mirroring_set_option.
    def enterMirroring_set_option(self, ctx:TSqlParser.Mirroring_set_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#mirroring_set_option.
    def exitMirroring_set_option(self, ctx:TSqlParser.Mirroring_set_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#mirroring_partner.
    def enterMirroring_partner(self, ctx:TSqlParser.Mirroring_partnerContext):
        pass

    # Exit a parse tree produced by TSqlParser#mirroring_partner.
    def exitMirroring_partner(self, ctx:TSqlParser.Mirroring_partnerContext):
        pass


    # Enter a parse tree produced by TSqlParser#mirroring_witness.
    def enterMirroring_witness(self, ctx:TSqlParser.Mirroring_witnessContext):
        pass

    # Exit a parse tree produced by TSqlParser#mirroring_witness.
    def exitMirroring_witness(self, ctx:TSqlParser.Mirroring_witnessContext):
        pass


    # Enter a parse tree produced by TSqlParser#witness_partner_equal.
    def enterWitness_partner_equal(self, ctx:TSqlParser.Witness_partner_equalContext):
        pass

    # Exit a parse tree produced by TSqlParser#witness_partner_equal.
    def exitWitness_partner_equal(self, ctx:TSqlParser.Witness_partner_equalContext):
        pass


    # Enter a parse tree produced by TSqlParser#partner_option.
    def enterPartner_option(self, ctx:TSqlParser.Partner_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#partner_option.
    def exitPartner_option(self, ctx:TSqlParser.Partner_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#witness_option.
    def enterWitness_option(self, ctx:TSqlParser.Witness_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#witness_option.
    def exitWitness_option(self, ctx:TSqlParser.Witness_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#witness_server.
    def enterWitness_server(self, ctx:TSqlParser.Witness_serverContext):
        pass

    # Exit a parse tree produced by TSqlParser#witness_server.
    def exitWitness_server(self, ctx:TSqlParser.Witness_serverContext):
        pass


    # Enter a parse tree produced by TSqlParser#partner_server.
    def enterPartner_server(self, ctx:TSqlParser.Partner_serverContext):
        pass

    # Exit a parse tree produced by TSqlParser#partner_server.
    def exitPartner_server(self, ctx:TSqlParser.Partner_serverContext):
        pass


    # Enter a parse tree produced by TSqlParser#mirroring_host_port_seperator.
    def enterMirroring_host_port_seperator(self, ctx:TSqlParser.Mirroring_host_port_seperatorContext):
        pass

    # Exit a parse tree produced by TSqlParser#mirroring_host_port_seperator.
    def exitMirroring_host_port_seperator(self, ctx:TSqlParser.Mirroring_host_port_seperatorContext):
        pass


    # Enter a parse tree produced by TSqlParser#partner_server_tcp_prefix.
    def enterPartner_server_tcp_prefix(self, ctx:TSqlParser.Partner_server_tcp_prefixContext):
        pass

    # Exit a parse tree produced by TSqlParser#partner_server_tcp_prefix.
    def exitPartner_server_tcp_prefix(self, ctx:TSqlParser.Partner_server_tcp_prefixContext):
        pass


    # Enter a parse tree produced by TSqlParser#port_number.
    def enterPort_number(self, ctx:TSqlParser.Port_numberContext):
        pass

    # Exit a parse tree produced by TSqlParser#port_number.
    def exitPort_number(self, ctx:TSqlParser.Port_numberContext):
        pass


    # Enter a parse tree produced by TSqlParser#host.
    def enterHost(self, ctx:TSqlParser.HostContext):
        pass

    # Exit a parse tree produced by TSqlParser#host.
    def exitHost(self, ctx:TSqlParser.HostContext):
        pass


    # Enter a parse tree produced by TSqlParser#date_correlation_optimization_option.
    def enterDate_correlation_optimization_option(self, ctx:TSqlParser.Date_correlation_optimization_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#date_correlation_optimization_option.
    def exitDate_correlation_optimization_option(self, ctx:TSqlParser.Date_correlation_optimization_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#db_encryption_option.
    def enterDb_encryption_option(self, ctx:TSqlParser.Db_encryption_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#db_encryption_option.
    def exitDb_encryption_option(self, ctx:TSqlParser.Db_encryption_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#db_state_option.
    def enterDb_state_option(self, ctx:TSqlParser.Db_state_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#db_state_option.
    def exitDb_state_option(self, ctx:TSqlParser.Db_state_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#db_update_option.
    def enterDb_update_option(self, ctx:TSqlParser.Db_update_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#db_update_option.
    def exitDb_update_option(self, ctx:TSqlParser.Db_update_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#db_user_access_option.
    def enterDb_user_access_option(self, ctx:TSqlParser.Db_user_access_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#db_user_access_option.
    def exitDb_user_access_option(self, ctx:TSqlParser.Db_user_access_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#delayed_durability_option.
    def enterDelayed_durability_option(self, ctx:TSqlParser.Delayed_durability_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#delayed_durability_option.
    def exitDelayed_durability_option(self, ctx:TSqlParser.Delayed_durability_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#external_access_option.
    def enterExternal_access_option(self, ctx:TSqlParser.External_access_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#external_access_option.
    def exitExternal_access_option(self, ctx:TSqlParser.External_access_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#hadr_options.
    def enterHadr_options(self, ctx:TSqlParser.Hadr_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#hadr_options.
    def exitHadr_options(self, ctx:TSqlParser.Hadr_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#mixed_page_allocation_option.
    def enterMixed_page_allocation_option(self, ctx:TSqlParser.Mixed_page_allocation_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#mixed_page_allocation_option.
    def exitMixed_page_allocation_option(self, ctx:TSqlParser.Mixed_page_allocation_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#parameterization_option.
    def enterParameterization_option(self, ctx:TSqlParser.Parameterization_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#parameterization_option.
    def exitParameterization_option(self, ctx:TSqlParser.Parameterization_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#recovery_option.
    def enterRecovery_option(self, ctx:TSqlParser.Recovery_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#recovery_option.
    def exitRecovery_option(self, ctx:TSqlParser.Recovery_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#service_broker_option.
    def enterService_broker_option(self, ctx:TSqlParser.Service_broker_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#service_broker_option.
    def exitService_broker_option(self, ctx:TSqlParser.Service_broker_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#snapshot_option.
    def enterSnapshot_option(self, ctx:TSqlParser.Snapshot_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#snapshot_option.
    def exitSnapshot_option(self, ctx:TSqlParser.Snapshot_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#sql_option.
    def enterSql_option(self, ctx:TSqlParser.Sql_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#sql_option.
    def exitSql_option(self, ctx:TSqlParser.Sql_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#target_recovery_time_option.
    def enterTarget_recovery_time_option(self, ctx:TSqlParser.Target_recovery_time_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#target_recovery_time_option.
    def exitTarget_recovery_time_option(self, ctx:TSqlParser.Target_recovery_time_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#termination.
    def enterTermination(self, ctx:TSqlParser.TerminationContext):
        pass

    # Exit a parse tree produced by TSqlParser#termination.
    def exitTermination(self, ctx:TSqlParser.TerminationContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_index.
    def enterDrop_index(self, ctx:TSqlParser.Drop_indexContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_index.
    def exitDrop_index(self, ctx:TSqlParser.Drop_indexContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_relational_or_xml_or_spatial_index.
    def enterDrop_relational_or_xml_or_spatial_index(self, ctx:TSqlParser.Drop_relational_or_xml_or_spatial_indexContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_relational_or_xml_or_spatial_index.
    def exitDrop_relational_or_xml_or_spatial_index(self, ctx:TSqlParser.Drop_relational_or_xml_or_spatial_indexContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_backward_compatible_index.
    def enterDrop_backward_compatible_index(self, ctx:TSqlParser.Drop_backward_compatible_indexContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_backward_compatible_index.
    def exitDrop_backward_compatible_index(self, ctx:TSqlParser.Drop_backward_compatible_indexContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_procedure.
    def enterDrop_procedure(self, ctx:TSqlParser.Drop_procedureContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_procedure.
    def exitDrop_procedure(self, ctx:TSqlParser.Drop_procedureContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_trigger.
    def enterDrop_trigger(self, ctx:TSqlParser.Drop_triggerContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_trigger.
    def exitDrop_trigger(self, ctx:TSqlParser.Drop_triggerContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_dml_trigger.
    def enterDrop_dml_trigger(self, ctx:TSqlParser.Drop_dml_triggerContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_dml_trigger.
    def exitDrop_dml_trigger(self, ctx:TSqlParser.Drop_dml_triggerContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_ddl_trigger.
    def enterDrop_ddl_trigger(self, ctx:TSqlParser.Drop_ddl_triggerContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_ddl_trigger.
    def exitDrop_ddl_trigger(self, ctx:TSqlParser.Drop_ddl_triggerContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_function.
    def enterDrop_function(self, ctx:TSqlParser.Drop_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_function.
    def exitDrop_function(self, ctx:TSqlParser.Drop_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_statistics.
    def enterDrop_statistics(self, ctx:TSqlParser.Drop_statisticsContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_statistics.
    def exitDrop_statistics(self, ctx:TSqlParser.Drop_statisticsContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_table.
    def enterDrop_table(self, ctx:TSqlParser.Drop_tableContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_table.
    def exitDrop_table(self, ctx:TSqlParser.Drop_tableContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_view.
    def enterDrop_view(self, ctx:TSqlParser.Drop_viewContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_view.
    def exitDrop_view(self, ctx:TSqlParser.Drop_viewContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_type.
    def enterCreate_type(self, ctx:TSqlParser.Create_typeContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_type.
    def exitCreate_type(self, ctx:TSqlParser.Create_typeContext):
        pass


    # Enter a parse tree produced by TSqlParser#drop_type.
    def enterDrop_type(self, ctx:TSqlParser.Drop_typeContext):
        pass

    # Exit a parse tree produced by TSqlParser#drop_type.
    def exitDrop_type(self, ctx:TSqlParser.Drop_typeContext):
        pass


    # Enter a parse tree produced by TSqlParser#rowset_function_limited.
    def enterRowset_function_limited(self, ctx:TSqlParser.Rowset_function_limitedContext):
        pass

    # Exit a parse tree produced by TSqlParser#rowset_function_limited.
    def exitRowset_function_limited(self, ctx:TSqlParser.Rowset_function_limitedContext):
        pass


    # Enter a parse tree produced by TSqlParser#openquery.
    def enterOpenquery(self, ctx:TSqlParser.OpenqueryContext):
        pass

    # Exit a parse tree produced by TSqlParser#openquery.
    def exitOpenquery(self, ctx:TSqlParser.OpenqueryContext):
        pass


    # Enter a parse tree produced by TSqlParser#opendatasource.
    def enterOpendatasource(self, ctx:TSqlParser.OpendatasourceContext):
        pass

    # Exit a parse tree produced by TSqlParser#opendatasource.
    def exitOpendatasource(self, ctx:TSqlParser.OpendatasourceContext):
        pass


    # Enter a parse tree produced by TSqlParser#declare_statement.
    def enterDeclare_statement(self, ctx:TSqlParser.Declare_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#declare_statement.
    def exitDeclare_statement(self, ctx:TSqlParser.Declare_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#xml_declaration.
    def enterXml_declaration(self, ctx:TSqlParser.Xml_declarationContext):
        pass

    # Exit a parse tree produced by TSqlParser#xml_declaration.
    def exitXml_declaration(self, ctx:TSqlParser.Xml_declarationContext):
        pass


    # Enter a parse tree produced by TSqlParser#cursor_statement.
    def enterCursor_statement(self, ctx:TSqlParser.Cursor_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#cursor_statement.
    def exitCursor_statement(self, ctx:TSqlParser.Cursor_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#backup_database.
    def enterBackup_database(self, ctx:TSqlParser.Backup_databaseContext):
        pass

    # Exit a parse tree produced by TSqlParser#backup_database.
    def exitBackup_database(self, ctx:TSqlParser.Backup_databaseContext):
        pass


    # Enter a parse tree produced by TSqlParser#backup_log.
    def enterBackup_log(self, ctx:TSqlParser.Backup_logContext):
        pass

    # Exit a parse tree produced by TSqlParser#backup_log.
    def exitBackup_log(self, ctx:TSqlParser.Backup_logContext):
        pass


    # Enter a parse tree produced by TSqlParser#backup_certificate.
    def enterBackup_certificate(self, ctx:TSqlParser.Backup_certificateContext):
        pass

    # Exit a parse tree produced by TSqlParser#backup_certificate.
    def exitBackup_certificate(self, ctx:TSqlParser.Backup_certificateContext):
        pass


    # Enter a parse tree produced by TSqlParser#backup_master_key.
    def enterBackup_master_key(self, ctx:TSqlParser.Backup_master_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#backup_master_key.
    def exitBackup_master_key(self, ctx:TSqlParser.Backup_master_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#backup_service_master_key.
    def enterBackup_service_master_key(self, ctx:TSqlParser.Backup_service_master_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#backup_service_master_key.
    def exitBackup_service_master_key(self, ctx:TSqlParser.Backup_service_master_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#kill_statement.
    def enterKill_statement(self, ctx:TSqlParser.Kill_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#kill_statement.
    def exitKill_statement(self, ctx:TSqlParser.Kill_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#kill_process.
    def enterKill_process(self, ctx:TSqlParser.Kill_processContext):
        pass

    # Exit a parse tree produced by TSqlParser#kill_process.
    def exitKill_process(self, ctx:TSqlParser.Kill_processContext):
        pass


    # Enter a parse tree produced by TSqlParser#kill_query_notification.
    def enterKill_query_notification(self, ctx:TSqlParser.Kill_query_notificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#kill_query_notification.
    def exitKill_query_notification(self, ctx:TSqlParser.Kill_query_notificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#kill_stats_job.
    def enterKill_stats_job(self, ctx:TSqlParser.Kill_stats_jobContext):
        pass

    # Exit a parse tree produced by TSqlParser#kill_stats_job.
    def exitKill_stats_job(self, ctx:TSqlParser.Kill_stats_jobContext):
        pass


    # Enter a parse tree produced by TSqlParser#execute_statement.
    def enterExecute_statement(self, ctx:TSqlParser.Execute_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#execute_statement.
    def exitExecute_statement(self, ctx:TSqlParser.Execute_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#execute_body_batch.
    def enterExecute_body_batch(self, ctx:TSqlParser.Execute_body_batchContext):
        pass

    # Exit a parse tree produced by TSqlParser#execute_body_batch.
    def exitExecute_body_batch(self, ctx:TSqlParser.Execute_body_batchContext):
        pass


    # Enter a parse tree produced by TSqlParser#execute_body.
    def enterExecute_body(self, ctx:TSqlParser.Execute_bodyContext):
        pass

    # Exit a parse tree produced by TSqlParser#execute_body.
    def exitExecute_body(self, ctx:TSqlParser.Execute_bodyContext):
        pass


    # Enter a parse tree produced by TSqlParser#execute_statement_arg.
    def enterExecute_statement_arg(self, ctx:TSqlParser.Execute_statement_argContext):
        pass

    # Exit a parse tree produced by TSqlParser#execute_statement_arg.
    def exitExecute_statement_arg(self, ctx:TSqlParser.Execute_statement_argContext):
        pass


    # Enter a parse tree produced by TSqlParser#execute_statement_arg_named.
    def enterExecute_statement_arg_named(self, ctx:TSqlParser.Execute_statement_arg_namedContext):
        pass

    # Exit a parse tree produced by TSqlParser#execute_statement_arg_named.
    def exitExecute_statement_arg_named(self, ctx:TSqlParser.Execute_statement_arg_namedContext):
        pass


    # Enter a parse tree produced by TSqlParser#execute_statement_arg_unnamed.
    def enterExecute_statement_arg_unnamed(self, ctx:TSqlParser.Execute_statement_arg_unnamedContext):
        pass

    # Exit a parse tree produced by TSqlParser#execute_statement_arg_unnamed.
    def exitExecute_statement_arg_unnamed(self, ctx:TSqlParser.Execute_statement_arg_unnamedContext):
        pass


    # Enter a parse tree produced by TSqlParser#execute_parameter.
    def enterExecute_parameter(self, ctx:TSqlParser.Execute_parameterContext):
        pass

    # Exit a parse tree produced by TSqlParser#execute_parameter.
    def exitExecute_parameter(self, ctx:TSqlParser.Execute_parameterContext):
        pass


    # Enter a parse tree produced by TSqlParser#execute_var_string.
    def enterExecute_var_string(self, ctx:TSqlParser.Execute_var_stringContext):
        pass

    # Exit a parse tree produced by TSqlParser#execute_var_string.
    def exitExecute_var_string(self, ctx:TSqlParser.Execute_var_stringContext):
        pass


    # Enter a parse tree produced by TSqlParser#security_statement.
    def enterSecurity_statement(self, ctx:TSqlParser.Security_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#security_statement.
    def exitSecurity_statement(self, ctx:TSqlParser.Security_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#principal_id.
    def enterPrincipal_id(self, ctx:TSqlParser.Principal_idContext):
        pass

    # Exit a parse tree produced by TSqlParser#principal_id.
    def exitPrincipal_id(self, ctx:TSqlParser.Principal_idContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_certificate.
    def enterCreate_certificate(self, ctx:TSqlParser.Create_certificateContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_certificate.
    def exitCreate_certificate(self, ctx:TSqlParser.Create_certificateContext):
        pass


    # Enter a parse tree produced by TSqlParser#existing_keys.
    def enterExisting_keys(self, ctx:TSqlParser.Existing_keysContext):
        pass

    # Exit a parse tree produced by TSqlParser#existing_keys.
    def exitExisting_keys(self, ctx:TSqlParser.Existing_keysContext):
        pass


    # Enter a parse tree produced by TSqlParser#private_key_options.
    def enterPrivate_key_options(self, ctx:TSqlParser.Private_key_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#private_key_options.
    def exitPrivate_key_options(self, ctx:TSqlParser.Private_key_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#generate_new_keys.
    def enterGenerate_new_keys(self, ctx:TSqlParser.Generate_new_keysContext):
        pass

    # Exit a parse tree produced by TSqlParser#generate_new_keys.
    def exitGenerate_new_keys(self, ctx:TSqlParser.Generate_new_keysContext):
        pass


    # Enter a parse tree produced by TSqlParser#date_options.
    def enterDate_options(self, ctx:TSqlParser.Date_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#date_options.
    def exitDate_options(self, ctx:TSqlParser.Date_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#open_key.
    def enterOpen_key(self, ctx:TSqlParser.Open_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#open_key.
    def exitOpen_key(self, ctx:TSqlParser.Open_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#close_key.
    def enterClose_key(self, ctx:TSqlParser.Close_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#close_key.
    def exitClose_key(self, ctx:TSqlParser.Close_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_key.
    def enterCreate_key(self, ctx:TSqlParser.Create_keyContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_key.
    def exitCreate_key(self, ctx:TSqlParser.Create_keyContext):
        pass


    # Enter a parse tree produced by TSqlParser#key_options.
    def enterKey_options(self, ctx:TSqlParser.Key_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#key_options.
    def exitKey_options(self, ctx:TSqlParser.Key_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#algorithm.
    def enterAlgorithm(self, ctx:TSqlParser.AlgorithmContext):
        pass

    # Exit a parse tree produced by TSqlParser#algorithm.
    def exitAlgorithm(self, ctx:TSqlParser.AlgorithmContext):
        pass


    # Enter a parse tree produced by TSqlParser#encryption_mechanism.
    def enterEncryption_mechanism(self, ctx:TSqlParser.Encryption_mechanismContext):
        pass

    # Exit a parse tree produced by TSqlParser#encryption_mechanism.
    def exitEncryption_mechanism(self, ctx:TSqlParser.Encryption_mechanismContext):
        pass


    # Enter a parse tree produced by TSqlParser#decryption_mechanism.
    def enterDecryption_mechanism(self, ctx:TSqlParser.Decryption_mechanismContext):
        pass

    # Exit a parse tree produced by TSqlParser#decryption_mechanism.
    def exitDecryption_mechanism(self, ctx:TSqlParser.Decryption_mechanismContext):
        pass


    # Enter a parse tree produced by TSqlParser#grant_permission.
    def enterGrant_permission(self, ctx:TSqlParser.Grant_permissionContext):
        pass

    # Exit a parse tree produced by TSqlParser#grant_permission.
    def exitGrant_permission(self, ctx:TSqlParser.Grant_permissionContext):
        pass


    # Enter a parse tree produced by TSqlParser#set_statement.
    def enterSet_statement(self, ctx:TSqlParser.Set_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#set_statement.
    def exitSet_statement(self, ctx:TSqlParser.Set_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#transaction_statement.
    def enterTransaction_statement(self, ctx:TSqlParser.Transaction_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#transaction_statement.
    def exitTransaction_statement(self, ctx:TSqlParser.Transaction_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#go_statement.
    def enterGo_statement(self, ctx:TSqlParser.Go_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#go_statement.
    def exitGo_statement(self, ctx:TSqlParser.Go_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#use_statement.
    def enterUse_statement(self, ctx:TSqlParser.Use_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#use_statement.
    def exitUse_statement(self, ctx:TSqlParser.Use_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#setuser_statement.
    def enterSetuser_statement(self, ctx:TSqlParser.Setuser_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#setuser_statement.
    def exitSetuser_statement(self, ctx:TSqlParser.Setuser_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#reconfigure_statement.
    def enterReconfigure_statement(self, ctx:TSqlParser.Reconfigure_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#reconfigure_statement.
    def exitReconfigure_statement(self, ctx:TSqlParser.Reconfigure_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#shutdown_statement.
    def enterShutdown_statement(self, ctx:TSqlParser.Shutdown_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#shutdown_statement.
    def exitShutdown_statement(self, ctx:TSqlParser.Shutdown_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#checkpoint_statement.
    def enterCheckpoint_statement(self, ctx:TSqlParser.Checkpoint_statementContext):
        pass

    # Exit a parse tree produced by TSqlParser#checkpoint_statement.
    def exitCheckpoint_statement(self, ctx:TSqlParser.Checkpoint_statementContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_checkalloc_option.
    def enterDbcc_checkalloc_option(self, ctx:TSqlParser.Dbcc_checkalloc_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_checkalloc_option.
    def exitDbcc_checkalloc_option(self, ctx:TSqlParser.Dbcc_checkalloc_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_checkalloc.
    def enterDbcc_checkalloc(self, ctx:TSqlParser.Dbcc_checkallocContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_checkalloc.
    def exitDbcc_checkalloc(self, ctx:TSqlParser.Dbcc_checkallocContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_checkcatalog.
    def enterDbcc_checkcatalog(self, ctx:TSqlParser.Dbcc_checkcatalogContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_checkcatalog.
    def exitDbcc_checkcatalog(self, ctx:TSqlParser.Dbcc_checkcatalogContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_checkconstraints_option.
    def enterDbcc_checkconstraints_option(self, ctx:TSqlParser.Dbcc_checkconstraints_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_checkconstraints_option.
    def exitDbcc_checkconstraints_option(self, ctx:TSqlParser.Dbcc_checkconstraints_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_checkconstraints.
    def enterDbcc_checkconstraints(self, ctx:TSqlParser.Dbcc_checkconstraintsContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_checkconstraints.
    def exitDbcc_checkconstraints(self, ctx:TSqlParser.Dbcc_checkconstraintsContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_checkdb_table_option.
    def enterDbcc_checkdb_table_option(self, ctx:TSqlParser.Dbcc_checkdb_table_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_checkdb_table_option.
    def exitDbcc_checkdb_table_option(self, ctx:TSqlParser.Dbcc_checkdb_table_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_checkdb.
    def enterDbcc_checkdb(self, ctx:TSqlParser.Dbcc_checkdbContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_checkdb.
    def exitDbcc_checkdb(self, ctx:TSqlParser.Dbcc_checkdbContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_checkfilegroup_option.
    def enterDbcc_checkfilegroup_option(self, ctx:TSqlParser.Dbcc_checkfilegroup_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_checkfilegroup_option.
    def exitDbcc_checkfilegroup_option(self, ctx:TSqlParser.Dbcc_checkfilegroup_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_checkfilegroup.
    def enterDbcc_checkfilegroup(self, ctx:TSqlParser.Dbcc_checkfilegroupContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_checkfilegroup.
    def exitDbcc_checkfilegroup(self, ctx:TSqlParser.Dbcc_checkfilegroupContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_checktable.
    def enterDbcc_checktable(self, ctx:TSqlParser.Dbcc_checktableContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_checktable.
    def exitDbcc_checktable(self, ctx:TSqlParser.Dbcc_checktableContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_cleantable.
    def enterDbcc_cleantable(self, ctx:TSqlParser.Dbcc_cleantableContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_cleantable.
    def exitDbcc_cleantable(self, ctx:TSqlParser.Dbcc_cleantableContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_clonedatabase_option.
    def enterDbcc_clonedatabase_option(self, ctx:TSqlParser.Dbcc_clonedatabase_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_clonedatabase_option.
    def exitDbcc_clonedatabase_option(self, ctx:TSqlParser.Dbcc_clonedatabase_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_clonedatabase.
    def enterDbcc_clonedatabase(self, ctx:TSqlParser.Dbcc_clonedatabaseContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_clonedatabase.
    def exitDbcc_clonedatabase(self, ctx:TSqlParser.Dbcc_clonedatabaseContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_pdw_showspaceused.
    def enterDbcc_pdw_showspaceused(self, ctx:TSqlParser.Dbcc_pdw_showspaceusedContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_pdw_showspaceused.
    def exitDbcc_pdw_showspaceused(self, ctx:TSqlParser.Dbcc_pdw_showspaceusedContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_proccache.
    def enterDbcc_proccache(self, ctx:TSqlParser.Dbcc_proccacheContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_proccache.
    def exitDbcc_proccache(self, ctx:TSqlParser.Dbcc_proccacheContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_showcontig_option.
    def enterDbcc_showcontig_option(self, ctx:TSqlParser.Dbcc_showcontig_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_showcontig_option.
    def exitDbcc_showcontig_option(self, ctx:TSqlParser.Dbcc_showcontig_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_showcontig.
    def enterDbcc_showcontig(self, ctx:TSqlParser.Dbcc_showcontigContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_showcontig.
    def exitDbcc_showcontig(self, ctx:TSqlParser.Dbcc_showcontigContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_shrinklog.
    def enterDbcc_shrinklog(self, ctx:TSqlParser.Dbcc_shrinklogContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_shrinklog.
    def exitDbcc_shrinklog(self, ctx:TSqlParser.Dbcc_shrinklogContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_dbreindex.
    def enterDbcc_dbreindex(self, ctx:TSqlParser.Dbcc_dbreindexContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_dbreindex.
    def exitDbcc_dbreindex(self, ctx:TSqlParser.Dbcc_dbreindexContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_dll_free.
    def enterDbcc_dll_free(self, ctx:TSqlParser.Dbcc_dll_freeContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_dll_free.
    def exitDbcc_dll_free(self, ctx:TSqlParser.Dbcc_dll_freeContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_dropcleanbuffers.
    def enterDbcc_dropcleanbuffers(self, ctx:TSqlParser.Dbcc_dropcleanbuffersContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_dropcleanbuffers.
    def exitDbcc_dropcleanbuffers(self, ctx:TSqlParser.Dbcc_dropcleanbuffersContext):
        pass


    # Enter a parse tree produced by TSqlParser#dbcc_clause.
    def enterDbcc_clause(self, ctx:TSqlParser.Dbcc_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#dbcc_clause.
    def exitDbcc_clause(self, ctx:TSqlParser.Dbcc_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#execute_clause.
    def enterExecute_clause(self, ctx:TSqlParser.Execute_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#execute_clause.
    def exitExecute_clause(self, ctx:TSqlParser.Execute_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#declare_local.
    def enterDeclare_local(self, ctx:TSqlParser.Declare_localContext):
        pass

    # Exit a parse tree produced by TSqlParser#declare_local.
    def exitDeclare_local(self, ctx:TSqlParser.Declare_localContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_type_definition.
    def enterTable_type_definition(self, ctx:TSqlParser.Table_type_definitionContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_type_definition.
    def exitTable_type_definition(self, ctx:TSqlParser.Table_type_definitionContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_type_indices.
    def enterTable_type_indices(self, ctx:TSqlParser.Table_type_indicesContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_type_indices.
    def exitTable_type_indices(self, ctx:TSqlParser.Table_type_indicesContext):
        pass


    # Enter a parse tree produced by TSqlParser#xml_type_definition.
    def enterXml_type_definition(self, ctx:TSqlParser.Xml_type_definitionContext):
        pass

    # Exit a parse tree produced by TSqlParser#xml_type_definition.
    def exitXml_type_definition(self, ctx:TSqlParser.Xml_type_definitionContext):
        pass


    # Enter a parse tree produced by TSqlParser#xml_schema_collection.
    def enterXml_schema_collection(self, ctx:TSqlParser.Xml_schema_collectionContext):
        pass

    # Exit a parse tree produced by TSqlParser#xml_schema_collection.
    def exitXml_schema_collection(self, ctx:TSqlParser.Xml_schema_collectionContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_def_table_constraints.
    def enterColumn_def_table_constraints(self, ctx:TSqlParser.Column_def_table_constraintsContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_def_table_constraints.
    def exitColumn_def_table_constraints(self, ctx:TSqlParser.Column_def_table_constraintsContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_def_table_constraint.
    def enterColumn_def_table_constraint(self, ctx:TSqlParser.Column_def_table_constraintContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_def_table_constraint.
    def exitColumn_def_table_constraint(self, ctx:TSqlParser.Column_def_table_constraintContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_definition.
    def enterColumn_definition(self, ctx:TSqlParser.Column_definitionContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_definition.
    def exitColumn_definition(self, ctx:TSqlParser.Column_definitionContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_definition_element.
    def enterColumn_definition_element(self, ctx:TSqlParser.Column_definition_elementContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_definition_element.
    def exitColumn_definition_element(self, ctx:TSqlParser.Column_definition_elementContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_modifier.
    def enterColumn_modifier(self, ctx:TSqlParser.Column_modifierContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_modifier.
    def exitColumn_modifier(self, ctx:TSqlParser.Column_modifierContext):
        pass


    # Enter a parse tree produced by TSqlParser#materialized_column_definition.
    def enterMaterialized_column_definition(self, ctx:TSqlParser.Materialized_column_definitionContext):
        pass

    # Exit a parse tree produced by TSqlParser#materialized_column_definition.
    def exitMaterialized_column_definition(self, ctx:TSqlParser.Materialized_column_definitionContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_constraint.
    def enterColumn_constraint(self, ctx:TSqlParser.Column_constraintContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_constraint.
    def exitColumn_constraint(self, ctx:TSqlParser.Column_constraintContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_index.
    def enterColumn_index(self, ctx:TSqlParser.Column_indexContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_index.
    def exitColumn_index(self, ctx:TSqlParser.Column_indexContext):
        pass


    # Enter a parse tree produced by TSqlParser#on_partition_or_filegroup.
    def enterOn_partition_or_filegroup(self, ctx:TSqlParser.On_partition_or_filegroupContext):
        pass

    # Exit a parse tree produced by TSqlParser#on_partition_or_filegroup.
    def exitOn_partition_or_filegroup(self, ctx:TSqlParser.On_partition_or_filegroupContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_constraint.
    def enterTable_constraint(self, ctx:TSqlParser.Table_constraintContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_constraint.
    def exitTable_constraint(self, ctx:TSqlParser.Table_constraintContext):
        pass


    # Enter a parse tree produced by TSqlParser#connection_node.
    def enterConnection_node(self, ctx:TSqlParser.Connection_nodeContext):
        pass

    # Exit a parse tree produced by TSqlParser#connection_node.
    def exitConnection_node(self, ctx:TSqlParser.Connection_nodeContext):
        pass


    # Enter a parse tree produced by TSqlParser#primary_key_options.
    def enterPrimary_key_options(self, ctx:TSqlParser.Primary_key_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#primary_key_options.
    def exitPrimary_key_options(self, ctx:TSqlParser.Primary_key_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#foreign_key_options.
    def enterForeign_key_options(self, ctx:TSqlParser.Foreign_key_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#foreign_key_options.
    def exitForeign_key_options(self, ctx:TSqlParser.Foreign_key_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#check_constraint.
    def enterCheck_constraint(self, ctx:TSqlParser.Check_constraintContext):
        pass

    # Exit a parse tree produced by TSqlParser#check_constraint.
    def exitCheck_constraint(self, ctx:TSqlParser.Check_constraintContext):
        pass


    # Enter a parse tree produced by TSqlParser#on_delete.
    def enterOn_delete(self, ctx:TSqlParser.On_deleteContext):
        pass

    # Exit a parse tree produced by TSqlParser#on_delete.
    def exitOn_delete(self, ctx:TSqlParser.On_deleteContext):
        pass


    # Enter a parse tree produced by TSqlParser#on_update.
    def enterOn_update(self, ctx:TSqlParser.On_updateContext):
        pass

    # Exit a parse tree produced by TSqlParser#on_update.
    def exitOn_update(self, ctx:TSqlParser.On_updateContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_table_index_options.
    def enterAlter_table_index_options(self, ctx:TSqlParser.Alter_table_index_optionsContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_table_index_options.
    def exitAlter_table_index_options(self, ctx:TSqlParser.Alter_table_index_optionsContext):
        pass


    # Enter a parse tree produced by TSqlParser#alter_table_index_option.
    def enterAlter_table_index_option(self, ctx:TSqlParser.Alter_table_index_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#alter_table_index_option.
    def exitAlter_table_index_option(self, ctx:TSqlParser.Alter_table_index_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#declare_cursor.
    def enterDeclare_cursor(self, ctx:TSqlParser.Declare_cursorContext):
        pass

    # Exit a parse tree produced by TSqlParser#declare_cursor.
    def exitDeclare_cursor(self, ctx:TSqlParser.Declare_cursorContext):
        pass


    # Enter a parse tree produced by TSqlParser#declare_set_cursor_common.
    def enterDeclare_set_cursor_common(self, ctx:TSqlParser.Declare_set_cursor_commonContext):
        pass

    # Exit a parse tree produced by TSqlParser#declare_set_cursor_common.
    def exitDeclare_set_cursor_common(self, ctx:TSqlParser.Declare_set_cursor_commonContext):
        pass


    # Enter a parse tree produced by TSqlParser#declare_set_cursor_common_partial.
    def enterDeclare_set_cursor_common_partial(self, ctx:TSqlParser.Declare_set_cursor_common_partialContext):
        pass

    # Exit a parse tree produced by TSqlParser#declare_set_cursor_common_partial.
    def exitDeclare_set_cursor_common_partial(self, ctx:TSqlParser.Declare_set_cursor_common_partialContext):
        pass


    # Enter a parse tree produced by TSqlParser#fetch_cursor.
    def enterFetch_cursor(self, ctx:TSqlParser.Fetch_cursorContext):
        pass

    # Exit a parse tree produced by TSqlParser#fetch_cursor.
    def exitFetch_cursor(self, ctx:TSqlParser.Fetch_cursorContext):
        pass


    # Enter a parse tree produced by TSqlParser#set_special.
    def enterSet_special(self, ctx:TSqlParser.Set_specialContext):
        pass

    # Exit a parse tree produced by TSqlParser#set_special.
    def exitSet_special(self, ctx:TSqlParser.Set_specialContext):
        pass


    # Enter a parse tree produced by TSqlParser#special_list.
    def enterSpecial_list(self, ctx:TSqlParser.Special_listContext):
        pass

    # Exit a parse tree produced by TSqlParser#special_list.
    def exitSpecial_list(self, ctx:TSqlParser.Special_listContext):
        pass


    # Enter a parse tree produced by TSqlParser#constant_LOCAL_ID.
    def enterConstant_LOCAL_ID(self, ctx:TSqlParser.Constant_LOCAL_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#constant_LOCAL_ID.
    def exitConstant_LOCAL_ID(self, ctx:TSqlParser.Constant_LOCAL_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#expression.
    def enterExpression(self, ctx:TSqlParser.ExpressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#expression.
    def exitExpression(self, ctx:TSqlParser.ExpressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#parameter.
    def enterParameter(self, ctx:TSqlParser.ParameterContext):
        pass

    # Exit a parse tree produced by TSqlParser#parameter.
    def exitParameter(self, ctx:TSqlParser.ParameterContext):
        pass


    # Enter a parse tree produced by TSqlParser#time_zone.
    def enterTime_zone(self, ctx:TSqlParser.Time_zoneContext):
        pass

    # Exit a parse tree produced by TSqlParser#time_zone.
    def exitTime_zone(self, ctx:TSqlParser.Time_zoneContext):
        pass


    # Enter a parse tree produced by TSqlParser#primitive_expression.
    def enterPrimitive_expression(self, ctx:TSqlParser.Primitive_expressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#primitive_expression.
    def exitPrimitive_expression(self, ctx:TSqlParser.Primitive_expressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#case_expression.
    def enterCase_expression(self, ctx:TSqlParser.Case_expressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#case_expression.
    def exitCase_expression(self, ctx:TSqlParser.Case_expressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#unary_operator_expression.
    def enterUnary_operator_expression(self, ctx:TSqlParser.Unary_operator_expressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#unary_operator_expression.
    def exitUnary_operator_expression(self, ctx:TSqlParser.Unary_operator_expressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#bracket_expression.
    def enterBracket_expression(self, ctx:TSqlParser.Bracket_expressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#bracket_expression.
    def exitBracket_expression(self, ctx:TSqlParser.Bracket_expressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#subquery.
    def enterSubquery(self, ctx:TSqlParser.SubqueryContext):
        pass

    # Exit a parse tree produced by TSqlParser#subquery.
    def exitSubquery(self, ctx:TSqlParser.SubqueryContext):
        pass


    # Enter a parse tree produced by TSqlParser#with_expression.
    def enterWith_expression(self, ctx:TSqlParser.With_expressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#with_expression.
    def exitWith_expression(self, ctx:TSqlParser.With_expressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#common_table_expression.
    def enterCommon_table_expression(self, ctx:TSqlParser.Common_table_expressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#common_table_expression.
    def exitCommon_table_expression(self, ctx:TSqlParser.Common_table_expressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#update_elem.
    def enterUpdate_elem(self, ctx:TSqlParser.Update_elemContext):
        pass

    # Exit a parse tree produced by TSqlParser#update_elem.
    def exitUpdate_elem(self, ctx:TSqlParser.Update_elemContext):
        pass


    # Enter a parse tree produced by TSqlParser#update_elem_merge.
    def enterUpdate_elem_merge(self, ctx:TSqlParser.Update_elem_mergeContext):
        pass

    # Exit a parse tree produced by TSqlParser#update_elem_merge.
    def exitUpdate_elem_merge(self, ctx:TSqlParser.Update_elem_mergeContext):
        pass


    # Enter a parse tree produced by TSqlParser#search_condition.
    def enterSearch_condition(self, ctx:TSqlParser.Search_conditionContext):
        pass

    # Exit a parse tree produced by TSqlParser#search_condition.
    def exitSearch_condition(self, ctx:TSqlParser.Search_conditionContext):
        pass


    # Enter a parse tree produced by TSqlParser#predicate.
    def enterPredicate(self, ctx:TSqlParser.PredicateContext):
        pass

    # Exit a parse tree produced by TSqlParser#predicate.
    def exitPredicate(self, ctx:TSqlParser.PredicateContext):
        pass


    # Enter a parse tree produced by TSqlParser#query_expression.
    def enterQuery_expression(self, ctx:TSqlParser.Query_expressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#query_expression.
    def exitQuery_expression(self, ctx:TSqlParser.Query_expressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#sql_union.
    def enterSql_union(self, ctx:TSqlParser.Sql_unionContext):
        pass

    # Exit a parse tree produced by TSqlParser#sql_union.
    def exitSql_union(self, ctx:TSqlParser.Sql_unionContext):
        pass


    # Enter a parse tree produced by TSqlParser#query_specification.
    def enterQuery_specification(self, ctx:TSqlParser.Query_specificationContext):
        pass

    # Exit a parse tree produced by TSqlParser#query_specification.
    def exitQuery_specification(self, ctx:TSqlParser.Query_specificationContext):
        pass


    # Enter a parse tree produced by TSqlParser#top_clause.
    def enterTop_clause(self, ctx:TSqlParser.Top_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#top_clause.
    def exitTop_clause(self, ctx:TSqlParser.Top_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#top_percent.
    def enterTop_percent(self, ctx:TSqlParser.Top_percentContext):
        pass

    # Exit a parse tree produced by TSqlParser#top_percent.
    def exitTop_percent(self, ctx:TSqlParser.Top_percentContext):
        pass


    # Enter a parse tree produced by TSqlParser#top_count.
    def enterTop_count(self, ctx:TSqlParser.Top_countContext):
        pass

    # Exit a parse tree produced by TSqlParser#top_count.
    def exitTop_count(self, ctx:TSqlParser.Top_countContext):
        pass


    # Enter a parse tree produced by TSqlParser#order_by_clause.
    def enterOrder_by_clause(self, ctx:TSqlParser.Order_by_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#order_by_clause.
    def exitOrder_by_clause(self, ctx:TSqlParser.Order_by_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#select_order_by_clause.
    def enterSelect_order_by_clause(self, ctx:TSqlParser.Select_order_by_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#select_order_by_clause.
    def exitSelect_order_by_clause(self, ctx:TSqlParser.Select_order_by_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#for_clause.
    def enterFor_clause(self, ctx:TSqlParser.For_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#for_clause.
    def exitFor_clause(self, ctx:TSqlParser.For_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#xml_common_directives.
    def enterXml_common_directives(self, ctx:TSqlParser.Xml_common_directivesContext):
        pass

    # Exit a parse tree produced by TSqlParser#xml_common_directives.
    def exitXml_common_directives(self, ctx:TSqlParser.Xml_common_directivesContext):
        pass


    # Enter a parse tree produced by TSqlParser#order_by_expression.
    def enterOrder_by_expression(self, ctx:TSqlParser.Order_by_expressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#order_by_expression.
    def exitOrder_by_expression(self, ctx:TSqlParser.Order_by_expressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#grouping_sets_item.
    def enterGrouping_sets_item(self, ctx:TSqlParser.Grouping_sets_itemContext):
        pass

    # Exit a parse tree produced by TSqlParser#grouping_sets_item.
    def exitGrouping_sets_item(self, ctx:TSqlParser.Grouping_sets_itemContext):
        pass


    # Enter a parse tree produced by TSqlParser#group_by_item.
    def enterGroup_by_item(self, ctx:TSqlParser.Group_by_itemContext):
        pass

    # Exit a parse tree produced by TSqlParser#group_by_item.
    def exitGroup_by_item(self, ctx:TSqlParser.Group_by_itemContext):
        pass


    # Enter a parse tree produced by TSqlParser#option_clause.
    def enterOption_clause(self, ctx:TSqlParser.Option_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#option_clause.
    def exitOption_clause(self, ctx:TSqlParser.Option_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#option.
    def enterOption(self, ctx:TSqlParser.OptionContext):
        pass

    # Exit a parse tree produced by TSqlParser#option.
    def exitOption(self, ctx:TSqlParser.OptionContext):
        pass


    # Enter a parse tree produced by TSqlParser#optimize_for_arg.
    def enterOptimize_for_arg(self, ctx:TSqlParser.Optimize_for_argContext):
        pass

    # Exit a parse tree produced by TSqlParser#optimize_for_arg.
    def exitOptimize_for_arg(self, ctx:TSqlParser.Optimize_for_argContext):
        pass


    # Enter a parse tree produced by TSqlParser#select_list.
    def enterSelect_list(self, ctx:TSqlParser.Select_listContext):
        pass

    # Exit a parse tree produced by TSqlParser#select_list.
    def exitSelect_list(self, ctx:TSqlParser.Select_listContext):
        pass


    # Enter a parse tree produced by TSqlParser#udt_method_arguments.
    def enterUdt_method_arguments(self, ctx:TSqlParser.Udt_method_argumentsContext):
        pass

    # Exit a parse tree produced by TSqlParser#udt_method_arguments.
    def exitUdt_method_arguments(self, ctx:TSqlParser.Udt_method_argumentsContext):
        pass


    # Enter a parse tree produced by TSqlParser#asterisk.
    def enterAsterisk(self, ctx:TSqlParser.AsteriskContext):
        pass

    # Exit a parse tree produced by TSqlParser#asterisk.
    def exitAsterisk(self, ctx:TSqlParser.AsteriskContext):
        pass


    # Enter a parse tree produced by TSqlParser#udt_elem.
    def enterUdt_elem(self, ctx:TSqlParser.Udt_elemContext):
        pass

    # Exit a parse tree produced by TSqlParser#udt_elem.
    def exitUdt_elem(self, ctx:TSqlParser.Udt_elemContext):
        pass


    # Enter a parse tree produced by TSqlParser#expression_elem.
    def enterExpression_elem(self, ctx:TSqlParser.Expression_elemContext):
        pass

    # Exit a parse tree produced by TSqlParser#expression_elem.
    def exitExpression_elem(self, ctx:TSqlParser.Expression_elemContext):
        pass


    # Enter a parse tree produced by TSqlParser#select_list_elem.
    def enterSelect_list_elem(self, ctx:TSqlParser.Select_list_elemContext):
        pass

    # Exit a parse tree produced by TSqlParser#select_list_elem.
    def exitSelect_list_elem(self, ctx:TSqlParser.Select_list_elemContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_sources.
    def enterTable_sources(self, ctx:TSqlParser.Table_sourcesContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_sources.
    def exitTable_sources(self, ctx:TSqlParser.Table_sourcesContext):
        pass


    # Enter a parse tree produced by TSqlParser#non_ansi_join.
    def enterNon_ansi_join(self, ctx:TSqlParser.Non_ansi_joinContext):
        pass

    # Exit a parse tree produced by TSqlParser#non_ansi_join.
    def exitNon_ansi_join(self, ctx:TSqlParser.Non_ansi_joinContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_source.
    def enterTable_source(self, ctx:TSqlParser.Table_sourceContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_source.
    def exitTable_source(self, ctx:TSqlParser.Table_sourceContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_source_item.
    def enterTable_source_item(self, ctx:TSqlParser.Table_source_itemContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_source_item.
    def exitTable_source_item(self, ctx:TSqlParser.Table_source_itemContext):
        pass


    # Enter a parse tree produced by TSqlParser#open_xml.
    def enterOpen_xml(self, ctx:TSqlParser.Open_xmlContext):
        pass

    # Exit a parse tree produced by TSqlParser#open_xml.
    def exitOpen_xml(self, ctx:TSqlParser.Open_xmlContext):
        pass


    # Enter a parse tree produced by TSqlParser#open_json.
    def enterOpen_json(self, ctx:TSqlParser.Open_jsonContext):
        pass

    # Exit a parse tree produced by TSqlParser#open_json.
    def exitOpen_json(self, ctx:TSqlParser.Open_jsonContext):
        pass


    # Enter a parse tree produced by TSqlParser#json_declaration.
    def enterJson_declaration(self, ctx:TSqlParser.Json_declarationContext):
        pass

    # Exit a parse tree produced by TSqlParser#json_declaration.
    def exitJson_declaration(self, ctx:TSqlParser.Json_declarationContext):
        pass


    # Enter a parse tree produced by TSqlParser#json_column_declaration.
    def enterJson_column_declaration(self, ctx:TSqlParser.Json_column_declarationContext):
        pass

    # Exit a parse tree produced by TSqlParser#json_column_declaration.
    def exitJson_column_declaration(self, ctx:TSqlParser.Json_column_declarationContext):
        pass


    # Enter a parse tree produced by TSqlParser#schema_declaration.
    def enterSchema_declaration(self, ctx:TSqlParser.Schema_declarationContext):
        pass

    # Exit a parse tree produced by TSqlParser#schema_declaration.
    def exitSchema_declaration(self, ctx:TSqlParser.Schema_declarationContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_declaration.
    def enterColumn_declaration(self, ctx:TSqlParser.Column_declarationContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_declaration.
    def exitColumn_declaration(self, ctx:TSqlParser.Column_declarationContext):
        pass


    # Enter a parse tree produced by TSqlParser#change_table.
    def enterChange_table(self, ctx:TSqlParser.Change_tableContext):
        pass

    # Exit a parse tree produced by TSqlParser#change_table.
    def exitChange_table(self, ctx:TSqlParser.Change_tableContext):
        pass


    # Enter a parse tree produced by TSqlParser#change_table_changes.
    def enterChange_table_changes(self, ctx:TSqlParser.Change_table_changesContext):
        pass

    # Exit a parse tree produced by TSqlParser#change_table_changes.
    def exitChange_table_changes(self, ctx:TSqlParser.Change_table_changesContext):
        pass


    # Enter a parse tree produced by TSqlParser#change_table_version.
    def enterChange_table_version(self, ctx:TSqlParser.Change_table_versionContext):
        pass

    # Exit a parse tree produced by TSqlParser#change_table_version.
    def exitChange_table_version(self, ctx:TSqlParser.Change_table_versionContext):
        pass


    # Enter a parse tree produced by TSqlParser#join_part.
    def enterJoin_part(self, ctx:TSqlParser.Join_partContext):
        pass

    # Exit a parse tree produced by TSqlParser#join_part.
    def exitJoin_part(self, ctx:TSqlParser.Join_partContext):
        pass


    # Enter a parse tree produced by TSqlParser#join_on.
    def enterJoin_on(self, ctx:TSqlParser.Join_onContext):
        pass

    # Exit a parse tree produced by TSqlParser#join_on.
    def exitJoin_on(self, ctx:TSqlParser.Join_onContext):
        pass


    # Enter a parse tree produced by TSqlParser#cross_join.
    def enterCross_join(self, ctx:TSqlParser.Cross_joinContext):
        pass

    # Exit a parse tree produced by TSqlParser#cross_join.
    def exitCross_join(self, ctx:TSqlParser.Cross_joinContext):
        pass


    # Enter a parse tree produced by TSqlParser#apply_.
    def enterApply_(self, ctx:TSqlParser.Apply_Context):
        pass

    # Exit a parse tree produced by TSqlParser#apply_.
    def exitApply_(self, ctx:TSqlParser.Apply_Context):
        pass


    # Enter a parse tree produced by TSqlParser#pivot.
    def enterPivot(self, ctx:TSqlParser.PivotContext):
        pass

    # Exit a parse tree produced by TSqlParser#pivot.
    def exitPivot(self, ctx:TSqlParser.PivotContext):
        pass


    # Enter a parse tree produced by TSqlParser#unpivot.
    def enterUnpivot(self, ctx:TSqlParser.UnpivotContext):
        pass

    # Exit a parse tree produced by TSqlParser#unpivot.
    def exitUnpivot(self, ctx:TSqlParser.UnpivotContext):
        pass


    # Enter a parse tree produced by TSqlParser#pivot_clause.
    def enterPivot_clause(self, ctx:TSqlParser.Pivot_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#pivot_clause.
    def exitPivot_clause(self, ctx:TSqlParser.Pivot_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#unpivot_clause.
    def enterUnpivot_clause(self, ctx:TSqlParser.Unpivot_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#unpivot_clause.
    def exitUnpivot_clause(self, ctx:TSqlParser.Unpivot_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#full_column_name_list.
    def enterFull_column_name_list(self, ctx:TSqlParser.Full_column_name_listContext):
        pass

    # Exit a parse tree produced by TSqlParser#full_column_name_list.
    def exitFull_column_name_list(self, ctx:TSqlParser.Full_column_name_listContext):
        pass


    # Enter a parse tree produced by TSqlParser#rowset_function.
    def enterRowset_function(self, ctx:TSqlParser.Rowset_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#rowset_function.
    def exitRowset_function(self, ctx:TSqlParser.Rowset_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#bulk_option.
    def enterBulk_option(self, ctx:TSqlParser.Bulk_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#bulk_option.
    def exitBulk_option(self, ctx:TSqlParser.Bulk_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#derived_table.
    def enterDerived_table(self, ctx:TSqlParser.Derived_tableContext):
        pass

    # Exit a parse tree produced by TSqlParser#derived_table.
    def exitDerived_table(self, ctx:TSqlParser.Derived_tableContext):
        pass


    # Enter a parse tree produced by TSqlParser#RANKING_WINDOWED_FUNC.
    def enterRANKING_WINDOWED_FUNC(self, ctx:TSqlParser.RANKING_WINDOWED_FUNCContext):
        pass

    # Exit a parse tree produced by TSqlParser#RANKING_WINDOWED_FUNC.
    def exitRANKING_WINDOWED_FUNC(self, ctx:TSqlParser.RANKING_WINDOWED_FUNCContext):
        pass


    # Enter a parse tree produced by TSqlParser#AGGREGATE_WINDOWED_FUNC.
    def enterAGGREGATE_WINDOWED_FUNC(self, ctx:TSqlParser.AGGREGATE_WINDOWED_FUNCContext):
        pass

    # Exit a parse tree produced by TSqlParser#AGGREGATE_WINDOWED_FUNC.
    def exitAGGREGATE_WINDOWED_FUNC(self, ctx:TSqlParser.AGGREGATE_WINDOWED_FUNCContext):
        pass


    # Enter a parse tree produced by TSqlParser#ANALYTIC_WINDOWED_FUNC.
    def enterANALYTIC_WINDOWED_FUNC(self, ctx:TSqlParser.ANALYTIC_WINDOWED_FUNCContext):
        pass

    # Exit a parse tree produced by TSqlParser#ANALYTIC_WINDOWED_FUNC.
    def exitANALYTIC_WINDOWED_FUNC(self, ctx:TSqlParser.ANALYTIC_WINDOWED_FUNCContext):
        pass


    # Enter a parse tree produced by TSqlParser#BUILT_IN_FUNC.
    def enterBUILT_IN_FUNC(self, ctx:TSqlParser.BUILT_IN_FUNCContext):
        pass

    # Exit a parse tree produced by TSqlParser#BUILT_IN_FUNC.
    def exitBUILT_IN_FUNC(self, ctx:TSqlParser.BUILT_IN_FUNCContext):
        pass


    # Enter a parse tree produced by TSqlParser#SCALAR_FUNCTION.
    def enterSCALAR_FUNCTION(self, ctx:TSqlParser.SCALAR_FUNCTIONContext):
        pass

    # Exit a parse tree produced by TSqlParser#SCALAR_FUNCTION.
    def exitSCALAR_FUNCTION(self, ctx:TSqlParser.SCALAR_FUNCTIONContext):
        pass


    # Enter a parse tree produced by TSqlParser#FREE_TEXT.
    def enterFREE_TEXT(self, ctx:TSqlParser.FREE_TEXTContext):
        pass

    # Exit a parse tree produced by TSqlParser#FREE_TEXT.
    def exitFREE_TEXT(self, ctx:TSqlParser.FREE_TEXTContext):
        pass


    # Enter a parse tree produced by TSqlParser#PARTITION_FUNC.
    def enterPARTITION_FUNC(self, ctx:TSqlParser.PARTITION_FUNCContext):
        pass

    # Exit a parse tree produced by TSqlParser#PARTITION_FUNC.
    def exitPARTITION_FUNC(self, ctx:TSqlParser.PARTITION_FUNCContext):
        pass


    # Enter a parse tree produced by TSqlParser#HIERARCHYID_METHOD.
    def enterHIERARCHYID_METHOD(self, ctx:TSqlParser.HIERARCHYID_METHODContext):
        pass

    # Exit a parse tree produced by TSqlParser#HIERARCHYID_METHOD.
    def exitHIERARCHYID_METHOD(self, ctx:TSqlParser.HIERARCHYID_METHODContext):
        pass


    # Enter a parse tree produced by TSqlParser#partition_function.
    def enterPartition_function(self, ctx:TSqlParser.Partition_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#partition_function.
    def exitPartition_function(self, ctx:TSqlParser.Partition_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#freetext_function.
    def enterFreetext_function(self, ctx:TSqlParser.Freetext_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#freetext_function.
    def exitFreetext_function(self, ctx:TSqlParser.Freetext_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#freetext_predicate.
    def enterFreetext_predicate(self, ctx:TSqlParser.Freetext_predicateContext):
        pass

    # Exit a parse tree produced by TSqlParser#freetext_predicate.
    def exitFreetext_predicate(self, ctx:TSqlParser.Freetext_predicateContext):
        pass


    # Enter a parse tree produced by TSqlParser#json_key_value.
    def enterJson_key_value(self, ctx:TSqlParser.Json_key_valueContext):
        pass

    # Exit a parse tree produced by TSqlParser#json_key_value.
    def exitJson_key_value(self, ctx:TSqlParser.Json_key_valueContext):
        pass


    # Enter a parse tree produced by TSqlParser#json_null_clause.
    def enterJson_null_clause(self, ctx:TSqlParser.Json_null_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#json_null_clause.
    def exitJson_null_clause(self, ctx:TSqlParser.Json_null_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#APP_NAME.
    def enterAPP_NAME(self, ctx:TSqlParser.APP_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#APP_NAME.
    def exitAPP_NAME(self, ctx:TSqlParser.APP_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#APPLOCK_MODE.
    def enterAPPLOCK_MODE(self, ctx:TSqlParser.APPLOCK_MODEContext):
        pass

    # Exit a parse tree produced by TSqlParser#APPLOCK_MODE.
    def exitAPPLOCK_MODE(self, ctx:TSqlParser.APPLOCK_MODEContext):
        pass


    # Enter a parse tree produced by TSqlParser#APPLOCK_TEST.
    def enterAPPLOCK_TEST(self, ctx:TSqlParser.APPLOCK_TESTContext):
        pass

    # Exit a parse tree produced by TSqlParser#APPLOCK_TEST.
    def exitAPPLOCK_TEST(self, ctx:TSqlParser.APPLOCK_TESTContext):
        pass


    # Enter a parse tree produced by TSqlParser#ASSEMBLYPROPERTY.
    def enterASSEMBLYPROPERTY(self, ctx:TSqlParser.ASSEMBLYPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#ASSEMBLYPROPERTY.
    def exitASSEMBLYPROPERTY(self, ctx:TSqlParser.ASSEMBLYPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#COL_LENGTH.
    def enterCOL_LENGTH(self, ctx:TSqlParser.COL_LENGTHContext):
        pass

    # Exit a parse tree produced by TSqlParser#COL_LENGTH.
    def exitCOL_LENGTH(self, ctx:TSqlParser.COL_LENGTHContext):
        pass


    # Enter a parse tree produced by TSqlParser#COL_NAME.
    def enterCOL_NAME(self, ctx:TSqlParser.COL_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#COL_NAME.
    def exitCOL_NAME(self, ctx:TSqlParser.COL_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#COLUMNPROPERTY.
    def enterCOLUMNPROPERTY(self, ctx:TSqlParser.COLUMNPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#COLUMNPROPERTY.
    def exitCOLUMNPROPERTY(self, ctx:TSqlParser.COLUMNPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATABASEPROPERTYEX.
    def enterDATABASEPROPERTYEX(self, ctx:TSqlParser.DATABASEPROPERTYEXContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATABASEPROPERTYEX.
    def exitDATABASEPROPERTYEX(self, ctx:TSqlParser.DATABASEPROPERTYEXContext):
        pass


    # Enter a parse tree produced by TSqlParser#DB_ID.
    def enterDB_ID(self, ctx:TSqlParser.DB_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#DB_ID.
    def exitDB_ID(self, ctx:TSqlParser.DB_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#DB_NAME.
    def enterDB_NAME(self, ctx:TSqlParser.DB_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#DB_NAME.
    def exitDB_NAME(self, ctx:TSqlParser.DB_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#FILE_ID.
    def enterFILE_ID(self, ctx:TSqlParser.FILE_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#FILE_ID.
    def exitFILE_ID(self, ctx:TSqlParser.FILE_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#FILE_IDEX.
    def enterFILE_IDEX(self, ctx:TSqlParser.FILE_IDEXContext):
        pass

    # Exit a parse tree produced by TSqlParser#FILE_IDEX.
    def exitFILE_IDEX(self, ctx:TSqlParser.FILE_IDEXContext):
        pass


    # Enter a parse tree produced by TSqlParser#FILE_NAME.
    def enterFILE_NAME(self, ctx:TSqlParser.FILE_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#FILE_NAME.
    def exitFILE_NAME(self, ctx:TSqlParser.FILE_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#FILEGROUP_ID.
    def enterFILEGROUP_ID(self, ctx:TSqlParser.FILEGROUP_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#FILEGROUP_ID.
    def exitFILEGROUP_ID(self, ctx:TSqlParser.FILEGROUP_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#FILEGROUP_NAME.
    def enterFILEGROUP_NAME(self, ctx:TSqlParser.FILEGROUP_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#FILEGROUP_NAME.
    def exitFILEGROUP_NAME(self, ctx:TSqlParser.FILEGROUP_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#FILEGROUPPROPERTY.
    def enterFILEGROUPPROPERTY(self, ctx:TSqlParser.FILEGROUPPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#FILEGROUPPROPERTY.
    def exitFILEGROUPPROPERTY(self, ctx:TSqlParser.FILEGROUPPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#FILEPROPERTY.
    def enterFILEPROPERTY(self, ctx:TSqlParser.FILEPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#FILEPROPERTY.
    def exitFILEPROPERTY(self, ctx:TSqlParser.FILEPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#FILEPROPERTYEX.
    def enterFILEPROPERTYEX(self, ctx:TSqlParser.FILEPROPERTYEXContext):
        pass

    # Exit a parse tree produced by TSqlParser#FILEPROPERTYEX.
    def exitFILEPROPERTYEX(self, ctx:TSqlParser.FILEPROPERTYEXContext):
        pass


    # Enter a parse tree produced by TSqlParser#FULLTEXTCATALOGPROPERTY.
    def enterFULLTEXTCATALOGPROPERTY(self, ctx:TSqlParser.FULLTEXTCATALOGPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#FULLTEXTCATALOGPROPERTY.
    def exitFULLTEXTCATALOGPROPERTY(self, ctx:TSqlParser.FULLTEXTCATALOGPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#FULLTEXTSERVICEPROPERTY.
    def enterFULLTEXTSERVICEPROPERTY(self, ctx:TSqlParser.FULLTEXTSERVICEPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#FULLTEXTSERVICEPROPERTY.
    def exitFULLTEXTSERVICEPROPERTY(self, ctx:TSqlParser.FULLTEXTSERVICEPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#INDEX_COL.
    def enterINDEX_COL(self, ctx:TSqlParser.INDEX_COLContext):
        pass

    # Exit a parse tree produced by TSqlParser#INDEX_COL.
    def exitINDEX_COL(self, ctx:TSqlParser.INDEX_COLContext):
        pass


    # Enter a parse tree produced by TSqlParser#INDEXKEY_PROPERTY.
    def enterINDEXKEY_PROPERTY(self, ctx:TSqlParser.INDEXKEY_PROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#INDEXKEY_PROPERTY.
    def exitINDEXKEY_PROPERTY(self, ctx:TSqlParser.INDEXKEY_PROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#INDEXPROPERTY.
    def enterINDEXPROPERTY(self, ctx:TSqlParser.INDEXPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#INDEXPROPERTY.
    def exitINDEXPROPERTY(self, ctx:TSqlParser.INDEXPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#NEXT_VALUE_FOR.
    def enterNEXT_VALUE_FOR(self, ctx:TSqlParser.NEXT_VALUE_FORContext):
        pass

    # Exit a parse tree produced by TSqlParser#NEXT_VALUE_FOR.
    def exitNEXT_VALUE_FOR(self, ctx:TSqlParser.NEXT_VALUE_FORContext):
        pass


    # Enter a parse tree produced by TSqlParser#OBJECT_DEFINITION.
    def enterOBJECT_DEFINITION(self, ctx:TSqlParser.OBJECT_DEFINITIONContext):
        pass

    # Exit a parse tree produced by TSqlParser#OBJECT_DEFINITION.
    def exitOBJECT_DEFINITION(self, ctx:TSqlParser.OBJECT_DEFINITIONContext):
        pass


    # Enter a parse tree produced by TSqlParser#OBJECT_ID.
    def enterOBJECT_ID(self, ctx:TSqlParser.OBJECT_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#OBJECT_ID.
    def exitOBJECT_ID(self, ctx:TSqlParser.OBJECT_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#OBJECT_NAME.
    def enterOBJECT_NAME(self, ctx:TSqlParser.OBJECT_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#OBJECT_NAME.
    def exitOBJECT_NAME(self, ctx:TSqlParser.OBJECT_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#OBJECT_SCHEMA_NAME.
    def enterOBJECT_SCHEMA_NAME(self, ctx:TSqlParser.OBJECT_SCHEMA_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#OBJECT_SCHEMA_NAME.
    def exitOBJECT_SCHEMA_NAME(self, ctx:TSqlParser.OBJECT_SCHEMA_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#OBJECTPROPERTY.
    def enterOBJECTPROPERTY(self, ctx:TSqlParser.OBJECTPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#OBJECTPROPERTY.
    def exitOBJECTPROPERTY(self, ctx:TSqlParser.OBJECTPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#OBJECTPROPERTYEX.
    def enterOBJECTPROPERTYEX(self, ctx:TSqlParser.OBJECTPROPERTYEXContext):
        pass

    # Exit a parse tree produced by TSqlParser#OBJECTPROPERTYEX.
    def exitOBJECTPROPERTYEX(self, ctx:TSqlParser.OBJECTPROPERTYEXContext):
        pass


    # Enter a parse tree produced by TSqlParser#ORIGINAL_DB_NAME.
    def enterORIGINAL_DB_NAME(self, ctx:TSqlParser.ORIGINAL_DB_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#ORIGINAL_DB_NAME.
    def exitORIGINAL_DB_NAME(self, ctx:TSqlParser.ORIGINAL_DB_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#PARSENAME.
    def enterPARSENAME(self, ctx:TSqlParser.PARSENAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#PARSENAME.
    def exitPARSENAME(self, ctx:TSqlParser.PARSENAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#SCHEMA_ID.
    def enterSCHEMA_ID(self, ctx:TSqlParser.SCHEMA_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#SCHEMA_ID.
    def exitSCHEMA_ID(self, ctx:TSqlParser.SCHEMA_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#SCHEMA_NAME.
    def enterSCHEMA_NAME(self, ctx:TSqlParser.SCHEMA_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#SCHEMA_NAME.
    def exitSCHEMA_NAME(self, ctx:TSqlParser.SCHEMA_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#SCOPE_IDENTITY.
    def enterSCOPE_IDENTITY(self, ctx:TSqlParser.SCOPE_IDENTITYContext):
        pass

    # Exit a parse tree produced by TSqlParser#SCOPE_IDENTITY.
    def exitSCOPE_IDENTITY(self, ctx:TSqlParser.SCOPE_IDENTITYContext):
        pass


    # Enter a parse tree produced by TSqlParser#SERVERPROPERTY.
    def enterSERVERPROPERTY(self, ctx:TSqlParser.SERVERPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#SERVERPROPERTY.
    def exitSERVERPROPERTY(self, ctx:TSqlParser.SERVERPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#STATS_DATE.
    def enterSTATS_DATE(self, ctx:TSqlParser.STATS_DATEContext):
        pass

    # Exit a parse tree produced by TSqlParser#STATS_DATE.
    def exitSTATS_DATE(self, ctx:TSqlParser.STATS_DATEContext):
        pass


    # Enter a parse tree produced by TSqlParser#TYPE_ID.
    def enterTYPE_ID(self, ctx:TSqlParser.TYPE_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#TYPE_ID.
    def exitTYPE_ID(self, ctx:TSqlParser.TYPE_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#TYPE_NAME.
    def enterTYPE_NAME(self, ctx:TSqlParser.TYPE_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#TYPE_NAME.
    def exitTYPE_NAME(self, ctx:TSqlParser.TYPE_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#TYPEPROPERTY.
    def enterTYPEPROPERTY(self, ctx:TSqlParser.TYPEPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#TYPEPROPERTY.
    def exitTYPEPROPERTY(self, ctx:TSqlParser.TYPEPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#ASCII.
    def enterASCII(self, ctx:TSqlParser.ASCIIContext):
        pass

    # Exit a parse tree produced by TSqlParser#ASCII.
    def exitASCII(self, ctx:TSqlParser.ASCIIContext):
        pass


    # Enter a parse tree produced by TSqlParser#CHAR.
    def enterCHAR(self, ctx:TSqlParser.CHARContext):
        pass

    # Exit a parse tree produced by TSqlParser#CHAR.
    def exitCHAR(self, ctx:TSqlParser.CHARContext):
        pass


    # Enter a parse tree produced by TSqlParser#CHARINDEX.
    def enterCHARINDEX(self, ctx:TSqlParser.CHARINDEXContext):
        pass

    # Exit a parse tree produced by TSqlParser#CHARINDEX.
    def exitCHARINDEX(self, ctx:TSqlParser.CHARINDEXContext):
        pass


    # Enter a parse tree produced by TSqlParser#CONCAT.
    def enterCONCAT(self, ctx:TSqlParser.CONCATContext):
        pass

    # Exit a parse tree produced by TSqlParser#CONCAT.
    def exitCONCAT(self, ctx:TSqlParser.CONCATContext):
        pass


    # Enter a parse tree produced by TSqlParser#CONCAT_WS.
    def enterCONCAT_WS(self, ctx:TSqlParser.CONCAT_WSContext):
        pass

    # Exit a parse tree produced by TSqlParser#CONCAT_WS.
    def exitCONCAT_WS(self, ctx:TSqlParser.CONCAT_WSContext):
        pass


    # Enter a parse tree produced by TSqlParser#DIFFERENCE.
    def enterDIFFERENCE(self, ctx:TSqlParser.DIFFERENCEContext):
        pass

    # Exit a parse tree produced by TSqlParser#DIFFERENCE.
    def exitDIFFERENCE(self, ctx:TSqlParser.DIFFERENCEContext):
        pass


    # Enter a parse tree produced by TSqlParser#FORMAT.
    def enterFORMAT(self, ctx:TSqlParser.FORMATContext):
        pass

    # Exit a parse tree produced by TSqlParser#FORMAT.
    def exitFORMAT(self, ctx:TSqlParser.FORMATContext):
        pass


    # Enter a parse tree produced by TSqlParser#LEFT.
    def enterLEFT(self, ctx:TSqlParser.LEFTContext):
        pass

    # Exit a parse tree produced by TSqlParser#LEFT.
    def exitLEFT(self, ctx:TSqlParser.LEFTContext):
        pass


    # Enter a parse tree produced by TSqlParser#LEN.
    def enterLEN(self, ctx:TSqlParser.LENContext):
        pass

    # Exit a parse tree produced by TSqlParser#LEN.
    def exitLEN(self, ctx:TSqlParser.LENContext):
        pass


    # Enter a parse tree produced by TSqlParser#LOWER.
    def enterLOWER(self, ctx:TSqlParser.LOWERContext):
        pass

    # Exit a parse tree produced by TSqlParser#LOWER.
    def exitLOWER(self, ctx:TSqlParser.LOWERContext):
        pass


    # Enter a parse tree produced by TSqlParser#LTRIM.
    def enterLTRIM(self, ctx:TSqlParser.LTRIMContext):
        pass

    # Exit a parse tree produced by TSqlParser#LTRIM.
    def exitLTRIM(self, ctx:TSqlParser.LTRIMContext):
        pass


    # Enter a parse tree produced by TSqlParser#NCHAR.
    def enterNCHAR(self, ctx:TSqlParser.NCHARContext):
        pass

    # Exit a parse tree produced by TSqlParser#NCHAR.
    def exitNCHAR(self, ctx:TSqlParser.NCHARContext):
        pass


    # Enter a parse tree produced by TSqlParser#PATINDEX.
    def enterPATINDEX(self, ctx:TSqlParser.PATINDEXContext):
        pass

    # Exit a parse tree produced by TSqlParser#PATINDEX.
    def exitPATINDEX(self, ctx:TSqlParser.PATINDEXContext):
        pass


    # Enter a parse tree produced by TSqlParser#QUOTENAME.
    def enterQUOTENAME(self, ctx:TSqlParser.QUOTENAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#QUOTENAME.
    def exitQUOTENAME(self, ctx:TSqlParser.QUOTENAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#REPLACE.
    def enterREPLACE(self, ctx:TSqlParser.REPLACEContext):
        pass

    # Exit a parse tree produced by TSqlParser#REPLACE.
    def exitREPLACE(self, ctx:TSqlParser.REPLACEContext):
        pass


    # Enter a parse tree produced by TSqlParser#REPLICATE.
    def enterREPLICATE(self, ctx:TSqlParser.REPLICATEContext):
        pass

    # Exit a parse tree produced by TSqlParser#REPLICATE.
    def exitREPLICATE(self, ctx:TSqlParser.REPLICATEContext):
        pass


    # Enter a parse tree produced by TSqlParser#REVERSE.
    def enterREVERSE(self, ctx:TSqlParser.REVERSEContext):
        pass

    # Exit a parse tree produced by TSqlParser#REVERSE.
    def exitREVERSE(self, ctx:TSqlParser.REVERSEContext):
        pass


    # Enter a parse tree produced by TSqlParser#RIGHT.
    def enterRIGHT(self, ctx:TSqlParser.RIGHTContext):
        pass

    # Exit a parse tree produced by TSqlParser#RIGHT.
    def exitRIGHT(self, ctx:TSqlParser.RIGHTContext):
        pass


    # Enter a parse tree produced by TSqlParser#RTRIM.
    def enterRTRIM(self, ctx:TSqlParser.RTRIMContext):
        pass

    # Exit a parse tree produced by TSqlParser#RTRIM.
    def exitRTRIM(self, ctx:TSqlParser.RTRIMContext):
        pass


    # Enter a parse tree produced by TSqlParser#SOUNDEX.
    def enterSOUNDEX(self, ctx:TSqlParser.SOUNDEXContext):
        pass

    # Exit a parse tree produced by TSqlParser#SOUNDEX.
    def exitSOUNDEX(self, ctx:TSqlParser.SOUNDEXContext):
        pass


    # Enter a parse tree produced by TSqlParser#SPACE.
    def enterSPACE(self, ctx:TSqlParser.SPACEContext):
        pass

    # Exit a parse tree produced by TSqlParser#SPACE.
    def exitSPACE(self, ctx:TSqlParser.SPACEContext):
        pass


    # Enter a parse tree produced by TSqlParser#STR.
    def enterSTR(self, ctx:TSqlParser.STRContext):
        pass

    # Exit a parse tree produced by TSqlParser#STR.
    def exitSTR(self, ctx:TSqlParser.STRContext):
        pass


    # Enter a parse tree produced by TSqlParser#STRINGAGG.
    def enterSTRINGAGG(self, ctx:TSqlParser.STRINGAGGContext):
        pass

    # Exit a parse tree produced by TSqlParser#STRINGAGG.
    def exitSTRINGAGG(self, ctx:TSqlParser.STRINGAGGContext):
        pass


    # Enter a parse tree produced by TSqlParser#STRING_ESCAPE.
    def enterSTRING_ESCAPE(self, ctx:TSqlParser.STRING_ESCAPEContext):
        pass

    # Exit a parse tree produced by TSqlParser#STRING_ESCAPE.
    def exitSTRING_ESCAPE(self, ctx:TSqlParser.STRING_ESCAPEContext):
        pass


    # Enter a parse tree produced by TSqlParser#STUFF.
    def enterSTUFF(self, ctx:TSqlParser.STUFFContext):
        pass

    # Exit a parse tree produced by TSqlParser#STUFF.
    def exitSTUFF(self, ctx:TSqlParser.STUFFContext):
        pass


    # Enter a parse tree produced by TSqlParser#SUBSTRING.
    def enterSUBSTRING(self, ctx:TSqlParser.SUBSTRINGContext):
        pass

    # Exit a parse tree produced by TSqlParser#SUBSTRING.
    def exitSUBSTRING(self, ctx:TSqlParser.SUBSTRINGContext):
        pass


    # Enter a parse tree produced by TSqlParser#TRANSLATE.
    def enterTRANSLATE(self, ctx:TSqlParser.TRANSLATEContext):
        pass

    # Exit a parse tree produced by TSqlParser#TRANSLATE.
    def exitTRANSLATE(self, ctx:TSqlParser.TRANSLATEContext):
        pass


    # Enter a parse tree produced by TSqlParser#TRIM.
    def enterTRIM(self, ctx:TSqlParser.TRIMContext):
        pass

    # Exit a parse tree produced by TSqlParser#TRIM.
    def exitTRIM(self, ctx:TSqlParser.TRIMContext):
        pass


    # Enter a parse tree produced by TSqlParser#UNICODE.
    def enterUNICODE(self, ctx:TSqlParser.UNICODEContext):
        pass

    # Exit a parse tree produced by TSqlParser#UNICODE.
    def exitUNICODE(self, ctx:TSqlParser.UNICODEContext):
        pass


    # Enter a parse tree produced by TSqlParser#UPPER.
    def enterUPPER(self, ctx:TSqlParser.UPPERContext):
        pass

    # Exit a parse tree produced by TSqlParser#UPPER.
    def exitUPPER(self, ctx:TSqlParser.UPPERContext):
        pass


    # Enter a parse tree produced by TSqlParser#BINARY_CHECKSUM.
    def enterBINARY_CHECKSUM(self, ctx:TSqlParser.BINARY_CHECKSUMContext):
        pass

    # Exit a parse tree produced by TSqlParser#BINARY_CHECKSUM.
    def exitBINARY_CHECKSUM(self, ctx:TSqlParser.BINARY_CHECKSUMContext):
        pass


    # Enter a parse tree produced by TSqlParser#CHECKSUM.
    def enterCHECKSUM(self, ctx:TSqlParser.CHECKSUMContext):
        pass

    # Exit a parse tree produced by TSqlParser#CHECKSUM.
    def exitCHECKSUM(self, ctx:TSqlParser.CHECKSUMContext):
        pass


    # Enter a parse tree produced by TSqlParser#COMPRESS.
    def enterCOMPRESS(self, ctx:TSqlParser.COMPRESSContext):
        pass

    # Exit a parse tree produced by TSqlParser#COMPRESS.
    def exitCOMPRESS(self, ctx:TSqlParser.COMPRESSContext):
        pass


    # Enter a parse tree produced by TSqlParser#CONNECTIONPROPERTY.
    def enterCONNECTIONPROPERTY(self, ctx:TSqlParser.CONNECTIONPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#CONNECTIONPROPERTY.
    def exitCONNECTIONPROPERTY(self, ctx:TSqlParser.CONNECTIONPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#CONTEXT_INFO.
    def enterCONTEXT_INFO(self, ctx:TSqlParser.CONTEXT_INFOContext):
        pass

    # Exit a parse tree produced by TSqlParser#CONTEXT_INFO.
    def exitCONTEXT_INFO(self, ctx:TSqlParser.CONTEXT_INFOContext):
        pass


    # Enter a parse tree produced by TSqlParser#CURRENT_REQUEST_ID.
    def enterCURRENT_REQUEST_ID(self, ctx:TSqlParser.CURRENT_REQUEST_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#CURRENT_REQUEST_ID.
    def exitCURRENT_REQUEST_ID(self, ctx:TSqlParser.CURRENT_REQUEST_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#CURRENT_TRANSACTION_ID.
    def enterCURRENT_TRANSACTION_ID(self, ctx:TSqlParser.CURRENT_TRANSACTION_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#CURRENT_TRANSACTION_ID.
    def exitCURRENT_TRANSACTION_ID(self, ctx:TSqlParser.CURRENT_TRANSACTION_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#DECOMPRESS.
    def enterDECOMPRESS(self, ctx:TSqlParser.DECOMPRESSContext):
        pass

    # Exit a parse tree produced by TSqlParser#DECOMPRESS.
    def exitDECOMPRESS(self, ctx:TSqlParser.DECOMPRESSContext):
        pass


    # Enter a parse tree produced by TSqlParser#ERROR_LINE.
    def enterERROR_LINE(self, ctx:TSqlParser.ERROR_LINEContext):
        pass

    # Exit a parse tree produced by TSqlParser#ERROR_LINE.
    def exitERROR_LINE(self, ctx:TSqlParser.ERROR_LINEContext):
        pass


    # Enter a parse tree produced by TSqlParser#ERROR_MESSAGE.
    def enterERROR_MESSAGE(self, ctx:TSqlParser.ERROR_MESSAGEContext):
        pass

    # Exit a parse tree produced by TSqlParser#ERROR_MESSAGE.
    def exitERROR_MESSAGE(self, ctx:TSqlParser.ERROR_MESSAGEContext):
        pass


    # Enter a parse tree produced by TSqlParser#ERROR_NUMBER.
    def enterERROR_NUMBER(self, ctx:TSqlParser.ERROR_NUMBERContext):
        pass

    # Exit a parse tree produced by TSqlParser#ERROR_NUMBER.
    def exitERROR_NUMBER(self, ctx:TSqlParser.ERROR_NUMBERContext):
        pass


    # Enter a parse tree produced by TSqlParser#ERROR_PROCEDURE.
    def enterERROR_PROCEDURE(self, ctx:TSqlParser.ERROR_PROCEDUREContext):
        pass

    # Exit a parse tree produced by TSqlParser#ERROR_PROCEDURE.
    def exitERROR_PROCEDURE(self, ctx:TSqlParser.ERROR_PROCEDUREContext):
        pass


    # Enter a parse tree produced by TSqlParser#ERROR_SEVERITY.
    def enterERROR_SEVERITY(self, ctx:TSqlParser.ERROR_SEVERITYContext):
        pass

    # Exit a parse tree produced by TSqlParser#ERROR_SEVERITY.
    def exitERROR_SEVERITY(self, ctx:TSqlParser.ERROR_SEVERITYContext):
        pass


    # Enter a parse tree produced by TSqlParser#ERROR_STATE.
    def enterERROR_STATE(self, ctx:TSqlParser.ERROR_STATEContext):
        pass

    # Exit a parse tree produced by TSqlParser#ERROR_STATE.
    def exitERROR_STATE(self, ctx:TSqlParser.ERROR_STATEContext):
        pass


    # Enter a parse tree produced by TSqlParser#FORMATMESSAGE.
    def enterFORMATMESSAGE(self, ctx:TSqlParser.FORMATMESSAGEContext):
        pass

    # Exit a parse tree produced by TSqlParser#FORMATMESSAGE.
    def exitFORMATMESSAGE(self, ctx:TSqlParser.FORMATMESSAGEContext):
        pass


    # Enter a parse tree produced by TSqlParser#GET_FILESTREAM_TRANSACTION_CONTEXT.
    def enterGET_FILESTREAM_TRANSACTION_CONTEXT(self, ctx:TSqlParser.GET_FILESTREAM_TRANSACTION_CONTEXTContext):
        pass

    # Exit a parse tree produced by TSqlParser#GET_FILESTREAM_TRANSACTION_CONTEXT.
    def exitGET_FILESTREAM_TRANSACTION_CONTEXT(self, ctx:TSqlParser.GET_FILESTREAM_TRANSACTION_CONTEXTContext):
        pass


    # Enter a parse tree produced by TSqlParser#GETANSINULL.
    def enterGETANSINULL(self, ctx:TSqlParser.GETANSINULLContext):
        pass

    # Exit a parse tree produced by TSqlParser#GETANSINULL.
    def exitGETANSINULL(self, ctx:TSqlParser.GETANSINULLContext):
        pass


    # Enter a parse tree produced by TSqlParser#HOST_ID.
    def enterHOST_ID(self, ctx:TSqlParser.HOST_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#HOST_ID.
    def exitHOST_ID(self, ctx:TSqlParser.HOST_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#HOST_NAME.
    def enterHOST_NAME(self, ctx:TSqlParser.HOST_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#HOST_NAME.
    def exitHOST_NAME(self, ctx:TSqlParser.HOST_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#ISNULL.
    def enterISNULL(self, ctx:TSqlParser.ISNULLContext):
        pass

    # Exit a parse tree produced by TSqlParser#ISNULL.
    def exitISNULL(self, ctx:TSqlParser.ISNULLContext):
        pass


    # Enter a parse tree produced by TSqlParser#ISNUMERIC.
    def enterISNUMERIC(self, ctx:TSqlParser.ISNUMERICContext):
        pass

    # Exit a parse tree produced by TSqlParser#ISNUMERIC.
    def exitISNUMERIC(self, ctx:TSqlParser.ISNUMERICContext):
        pass


    # Enter a parse tree produced by TSqlParser#MIN_ACTIVE_ROWVERSION.
    def enterMIN_ACTIVE_ROWVERSION(self, ctx:TSqlParser.MIN_ACTIVE_ROWVERSIONContext):
        pass

    # Exit a parse tree produced by TSqlParser#MIN_ACTIVE_ROWVERSION.
    def exitMIN_ACTIVE_ROWVERSION(self, ctx:TSqlParser.MIN_ACTIVE_ROWVERSIONContext):
        pass


    # Enter a parse tree produced by TSqlParser#NEWID.
    def enterNEWID(self, ctx:TSqlParser.NEWIDContext):
        pass

    # Exit a parse tree produced by TSqlParser#NEWID.
    def exitNEWID(self, ctx:TSqlParser.NEWIDContext):
        pass


    # Enter a parse tree produced by TSqlParser#NEWSEQUENTIALID.
    def enterNEWSEQUENTIALID(self, ctx:TSqlParser.NEWSEQUENTIALIDContext):
        pass

    # Exit a parse tree produced by TSqlParser#NEWSEQUENTIALID.
    def exitNEWSEQUENTIALID(self, ctx:TSqlParser.NEWSEQUENTIALIDContext):
        pass


    # Enter a parse tree produced by TSqlParser#ROWCOUNT_BIG.
    def enterROWCOUNT_BIG(self, ctx:TSqlParser.ROWCOUNT_BIGContext):
        pass

    # Exit a parse tree produced by TSqlParser#ROWCOUNT_BIG.
    def exitROWCOUNT_BIG(self, ctx:TSqlParser.ROWCOUNT_BIGContext):
        pass


    # Enter a parse tree produced by TSqlParser#SESSION_CONTEXT.
    def enterSESSION_CONTEXT(self, ctx:TSqlParser.SESSION_CONTEXTContext):
        pass

    # Exit a parse tree produced by TSqlParser#SESSION_CONTEXT.
    def exitSESSION_CONTEXT(self, ctx:TSqlParser.SESSION_CONTEXTContext):
        pass


    # Enter a parse tree produced by TSqlParser#XACT_STATE.
    def enterXACT_STATE(self, ctx:TSqlParser.XACT_STATEContext):
        pass

    # Exit a parse tree produced by TSqlParser#XACT_STATE.
    def exitXACT_STATE(self, ctx:TSqlParser.XACT_STATEContext):
        pass


    # Enter a parse tree produced by TSqlParser#CAST.
    def enterCAST(self, ctx:TSqlParser.CASTContext):
        pass

    # Exit a parse tree produced by TSqlParser#CAST.
    def exitCAST(self, ctx:TSqlParser.CASTContext):
        pass


    # Enter a parse tree produced by TSqlParser#TRY_CAST.
    def enterTRY_CAST(self, ctx:TSqlParser.TRY_CASTContext):
        pass

    # Exit a parse tree produced by TSqlParser#TRY_CAST.
    def exitTRY_CAST(self, ctx:TSqlParser.TRY_CASTContext):
        pass


    # Enter a parse tree produced by TSqlParser#CONVERT.
    def enterCONVERT(self, ctx:TSqlParser.CONVERTContext):
        pass

    # Exit a parse tree produced by TSqlParser#CONVERT.
    def exitCONVERT(self, ctx:TSqlParser.CONVERTContext):
        pass


    # Enter a parse tree produced by TSqlParser#COALESCE.
    def enterCOALESCE(self, ctx:TSqlParser.COALESCEContext):
        pass

    # Exit a parse tree produced by TSqlParser#COALESCE.
    def exitCOALESCE(self, ctx:TSqlParser.COALESCEContext):
        pass


    # Enter a parse tree produced by TSqlParser#CURSOR_ROWS.
    def enterCURSOR_ROWS(self, ctx:TSqlParser.CURSOR_ROWSContext):
        pass

    # Exit a parse tree produced by TSqlParser#CURSOR_ROWS.
    def exitCURSOR_ROWS(self, ctx:TSqlParser.CURSOR_ROWSContext):
        pass


    # Enter a parse tree produced by TSqlParser#FETCH_STATUS.
    def enterFETCH_STATUS(self, ctx:TSqlParser.FETCH_STATUSContext):
        pass

    # Exit a parse tree produced by TSqlParser#FETCH_STATUS.
    def exitFETCH_STATUS(self, ctx:TSqlParser.FETCH_STATUSContext):
        pass


    # Enter a parse tree produced by TSqlParser#CURSOR_STATUS.
    def enterCURSOR_STATUS(self, ctx:TSqlParser.CURSOR_STATUSContext):
        pass

    # Exit a parse tree produced by TSqlParser#CURSOR_STATUS.
    def exitCURSOR_STATUS(self, ctx:TSqlParser.CURSOR_STATUSContext):
        pass


    # Enter a parse tree produced by TSqlParser#CERT_ID.
    def enterCERT_ID(self, ctx:TSqlParser.CERT_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#CERT_ID.
    def exitCERT_ID(self, ctx:TSqlParser.CERT_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATALENGTH.
    def enterDATALENGTH(self, ctx:TSqlParser.DATALENGTHContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATALENGTH.
    def exitDATALENGTH(self, ctx:TSqlParser.DATALENGTHContext):
        pass


    # Enter a parse tree produced by TSqlParser#IDENT_CURRENT.
    def enterIDENT_CURRENT(self, ctx:TSqlParser.IDENT_CURRENTContext):
        pass

    # Exit a parse tree produced by TSqlParser#IDENT_CURRENT.
    def exitIDENT_CURRENT(self, ctx:TSqlParser.IDENT_CURRENTContext):
        pass


    # Enter a parse tree produced by TSqlParser#IDENT_INCR.
    def enterIDENT_INCR(self, ctx:TSqlParser.IDENT_INCRContext):
        pass

    # Exit a parse tree produced by TSqlParser#IDENT_INCR.
    def exitIDENT_INCR(self, ctx:TSqlParser.IDENT_INCRContext):
        pass


    # Enter a parse tree produced by TSqlParser#IDENT_SEED.
    def enterIDENT_SEED(self, ctx:TSqlParser.IDENT_SEEDContext):
        pass

    # Exit a parse tree produced by TSqlParser#IDENT_SEED.
    def exitIDENT_SEED(self, ctx:TSqlParser.IDENT_SEEDContext):
        pass


    # Enter a parse tree produced by TSqlParser#IDENTITY.
    def enterIDENTITY(self, ctx:TSqlParser.IDENTITYContext):
        pass

    # Exit a parse tree produced by TSqlParser#IDENTITY.
    def exitIDENTITY(self, ctx:TSqlParser.IDENTITYContext):
        pass


    # Enter a parse tree produced by TSqlParser#SQL_VARIANT_PROPERTY.
    def enterSQL_VARIANT_PROPERTY(self, ctx:TSqlParser.SQL_VARIANT_PROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#SQL_VARIANT_PROPERTY.
    def exitSQL_VARIANT_PROPERTY(self, ctx:TSqlParser.SQL_VARIANT_PROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#CURRENT_DATE.
    def enterCURRENT_DATE(self, ctx:TSqlParser.CURRENT_DATEContext):
        pass

    # Exit a parse tree produced by TSqlParser#CURRENT_DATE.
    def exitCURRENT_DATE(self, ctx:TSqlParser.CURRENT_DATEContext):
        pass


    # Enter a parse tree produced by TSqlParser#CURRENT_TIMESTAMP.
    def enterCURRENT_TIMESTAMP(self, ctx:TSqlParser.CURRENT_TIMESTAMPContext):
        pass

    # Exit a parse tree produced by TSqlParser#CURRENT_TIMESTAMP.
    def exitCURRENT_TIMESTAMP(self, ctx:TSqlParser.CURRENT_TIMESTAMPContext):
        pass


    # Enter a parse tree produced by TSqlParser#CURRENT_TIMEZONE.
    def enterCURRENT_TIMEZONE(self, ctx:TSqlParser.CURRENT_TIMEZONEContext):
        pass

    # Exit a parse tree produced by TSqlParser#CURRENT_TIMEZONE.
    def exitCURRENT_TIMEZONE(self, ctx:TSqlParser.CURRENT_TIMEZONEContext):
        pass


    # Enter a parse tree produced by TSqlParser#CURRENT_TIMEZONE_ID.
    def enterCURRENT_TIMEZONE_ID(self, ctx:TSqlParser.CURRENT_TIMEZONE_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#CURRENT_TIMEZONE_ID.
    def exitCURRENT_TIMEZONE_ID(self, ctx:TSqlParser.CURRENT_TIMEZONE_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATE_BUCKET.
    def enterDATE_BUCKET(self, ctx:TSqlParser.DATE_BUCKETContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATE_BUCKET.
    def exitDATE_BUCKET(self, ctx:TSqlParser.DATE_BUCKETContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATEADD.
    def enterDATEADD(self, ctx:TSqlParser.DATEADDContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATEADD.
    def exitDATEADD(self, ctx:TSqlParser.DATEADDContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATEDIFF.
    def enterDATEDIFF(self, ctx:TSqlParser.DATEDIFFContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATEDIFF.
    def exitDATEDIFF(self, ctx:TSqlParser.DATEDIFFContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATEDIFF_BIG.
    def enterDATEDIFF_BIG(self, ctx:TSqlParser.DATEDIFF_BIGContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATEDIFF_BIG.
    def exitDATEDIFF_BIG(self, ctx:TSqlParser.DATEDIFF_BIGContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATEFROMPARTS.
    def enterDATEFROMPARTS(self, ctx:TSqlParser.DATEFROMPARTSContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATEFROMPARTS.
    def exitDATEFROMPARTS(self, ctx:TSqlParser.DATEFROMPARTSContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATENAME.
    def enterDATENAME(self, ctx:TSqlParser.DATENAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATENAME.
    def exitDATENAME(self, ctx:TSqlParser.DATENAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATEPART.
    def enterDATEPART(self, ctx:TSqlParser.DATEPARTContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATEPART.
    def exitDATEPART(self, ctx:TSqlParser.DATEPARTContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATETIME2FROMPARTS.
    def enterDATETIME2FROMPARTS(self, ctx:TSqlParser.DATETIME2FROMPARTSContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATETIME2FROMPARTS.
    def exitDATETIME2FROMPARTS(self, ctx:TSqlParser.DATETIME2FROMPARTSContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATETIMEFROMPARTS.
    def enterDATETIMEFROMPARTS(self, ctx:TSqlParser.DATETIMEFROMPARTSContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATETIMEFROMPARTS.
    def exitDATETIMEFROMPARTS(self, ctx:TSqlParser.DATETIMEFROMPARTSContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATETIMEOFFSETFROMPARTS.
    def enterDATETIMEOFFSETFROMPARTS(self, ctx:TSqlParser.DATETIMEOFFSETFROMPARTSContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATETIMEOFFSETFROMPARTS.
    def exitDATETIMEOFFSETFROMPARTS(self, ctx:TSqlParser.DATETIMEOFFSETFROMPARTSContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATETRUNC.
    def enterDATETRUNC(self, ctx:TSqlParser.DATETRUNCContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATETRUNC.
    def exitDATETRUNC(self, ctx:TSqlParser.DATETRUNCContext):
        pass


    # Enter a parse tree produced by TSqlParser#DAY.
    def enterDAY(self, ctx:TSqlParser.DAYContext):
        pass

    # Exit a parse tree produced by TSqlParser#DAY.
    def exitDAY(self, ctx:TSqlParser.DAYContext):
        pass


    # Enter a parse tree produced by TSqlParser#EOMONTH.
    def enterEOMONTH(self, ctx:TSqlParser.EOMONTHContext):
        pass

    # Exit a parse tree produced by TSqlParser#EOMONTH.
    def exitEOMONTH(self, ctx:TSqlParser.EOMONTHContext):
        pass


    # Enter a parse tree produced by TSqlParser#GETDATE.
    def enterGETDATE(self, ctx:TSqlParser.GETDATEContext):
        pass

    # Exit a parse tree produced by TSqlParser#GETDATE.
    def exitGETDATE(self, ctx:TSqlParser.GETDATEContext):
        pass


    # Enter a parse tree produced by TSqlParser#GETUTCDATE.
    def enterGETUTCDATE(self, ctx:TSqlParser.GETUTCDATEContext):
        pass

    # Exit a parse tree produced by TSqlParser#GETUTCDATE.
    def exitGETUTCDATE(self, ctx:TSqlParser.GETUTCDATEContext):
        pass


    # Enter a parse tree produced by TSqlParser#ISDATE.
    def enterISDATE(self, ctx:TSqlParser.ISDATEContext):
        pass

    # Exit a parse tree produced by TSqlParser#ISDATE.
    def exitISDATE(self, ctx:TSqlParser.ISDATEContext):
        pass


    # Enter a parse tree produced by TSqlParser#MONTH.
    def enterMONTH(self, ctx:TSqlParser.MONTHContext):
        pass

    # Exit a parse tree produced by TSqlParser#MONTH.
    def exitMONTH(self, ctx:TSqlParser.MONTHContext):
        pass


    # Enter a parse tree produced by TSqlParser#SMALLDATETIMEFROMPARTS.
    def enterSMALLDATETIMEFROMPARTS(self, ctx:TSqlParser.SMALLDATETIMEFROMPARTSContext):
        pass

    # Exit a parse tree produced by TSqlParser#SMALLDATETIMEFROMPARTS.
    def exitSMALLDATETIMEFROMPARTS(self, ctx:TSqlParser.SMALLDATETIMEFROMPARTSContext):
        pass


    # Enter a parse tree produced by TSqlParser#SWITCHOFFSET.
    def enterSWITCHOFFSET(self, ctx:TSqlParser.SWITCHOFFSETContext):
        pass

    # Exit a parse tree produced by TSqlParser#SWITCHOFFSET.
    def exitSWITCHOFFSET(self, ctx:TSqlParser.SWITCHOFFSETContext):
        pass


    # Enter a parse tree produced by TSqlParser#SYSDATETIME.
    def enterSYSDATETIME(self, ctx:TSqlParser.SYSDATETIMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#SYSDATETIME.
    def exitSYSDATETIME(self, ctx:TSqlParser.SYSDATETIMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#SYSDATETIMEOFFSET.
    def enterSYSDATETIMEOFFSET(self, ctx:TSqlParser.SYSDATETIMEOFFSETContext):
        pass

    # Exit a parse tree produced by TSqlParser#SYSDATETIMEOFFSET.
    def exitSYSDATETIMEOFFSET(self, ctx:TSqlParser.SYSDATETIMEOFFSETContext):
        pass


    # Enter a parse tree produced by TSqlParser#SYSUTCDATETIME.
    def enterSYSUTCDATETIME(self, ctx:TSqlParser.SYSUTCDATETIMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#SYSUTCDATETIME.
    def exitSYSUTCDATETIME(self, ctx:TSqlParser.SYSUTCDATETIMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#TIMEFROMPARTS.
    def enterTIMEFROMPARTS(self, ctx:TSqlParser.TIMEFROMPARTSContext):
        pass

    # Exit a parse tree produced by TSqlParser#TIMEFROMPARTS.
    def exitTIMEFROMPARTS(self, ctx:TSqlParser.TIMEFROMPARTSContext):
        pass


    # Enter a parse tree produced by TSqlParser#TODATETIMEOFFSET.
    def enterTODATETIMEOFFSET(self, ctx:TSqlParser.TODATETIMEOFFSETContext):
        pass

    # Exit a parse tree produced by TSqlParser#TODATETIMEOFFSET.
    def exitTODATETIMEOFFSET(self, ctx:TSqlParser.TODATETIMEOFFSETContext):
        pass


    # Enter a parse tree produced by TSqlParser#YEAR.
    def enterYEAR(self, ctx:TSqlParser.YEARContext):
        pass

    # Exit a parse tree produced by TSqlParser#YEAR.
    def exitYEAR(self, ctx:TSqlParser.YEARContext):
        pass


    # Enter a parse tree produced by TSqlParser#NULLIF.
    def enterNULLIF(self, ctx:TSqlParser.NULLIFContext):
        pass

    # Exit a parse tree produced by TSqlParser#NULLIF.
    def exitNULLIF(self, ctx:TSqlParser.NULLIFContext):
        pass


    # Enter a parse tree produced by TSqlParser#PARSE.
    def enterPARSE(self, ctx:TSqlParser.PARSEContext):
        pass

    # Exit a parse tree produced by TSqlParser#PARSE.
    def exitPARSE(self, ctx:TSqlParser.PARSEContext):
        pass


    # Enter a parse tree produced by TSqlParser#XML_DATA_TYPE_FUNC.
    def enterXML_DATA_TYPE_FUNC(self, ctx:TSqlParser.XML_DATA_TYPE_FUNCContext):
        pass

    # Exit a parse tree produced by TSqlParser#XML_DATA_TYPE_FUNC.
    def exitXML_DATA_TYPE_FUNC(self, ctx:TSqlParser.XML_DATA_TYPE_FUNCContext):
        pass


    # Enter a parse tree produced by TSqlParser#IIF.
    def enterIIF(self, ctx:TSqlParser.IIFContext):
        pass

    # Exit a parse tree produced by TSqlParser#IIF.
    def exitIIF(self, ctx:TSqlParser.IIFContext):
        pass


    # Enter a parse tree produced by TSqlParser#ISJSON.
    def enterISJSON(self, ctx:TSqlParser.ISJSONContext):
        pass

    # Exit a parse tree produced by TSqlParser#ISJSON.
    def exitISJSON(self, ctx:TSqlParser.ISJSONContext):
        pass


    # Enter a parse tree produced by TSqlParser#JSON_OBJECT.
    def enterJSON_OBJECT(self, ctx:TSqlParser.JSON_OBJECTContext):
        pass

    # Exit a parse tree produced by TSqlParser#JSON_OBJECT.
    def exitJSON_OBJECT(self, ctx:TSqlParser.JSON_OBJECTContext):
        pass


    # Enter a parse tree produced by TSqlParser#JSON_ARRAY.
    def enterJSON_ARRAY(self, ctx:TSqlParser.JSON_ARRAYContext):
        pass

    # Exit a parse tree produced by TSqlParser#JSON_ARRAY.
    def exitJSON_ARRAY(self, ctx:TSqlParser.JSON_ARRAYContext):
        pass


    # Enter a parse tree produced by TSqlParser#JSON_VALUE.
    def enterJSON_VALUE(self, ctx:TSqlParser.JSON_VALUEContext):
        pass

    # Exit a parse tree produced by TSqlParser#JSON_VALUE.
    def exitJSON_VALUE(self, ctx:TSqlParser.JSON_VALUEContext):
        pass


    # Enter a parse tree produced by TSqlParser#JSON_QUERY.
    def enterJSON_QUERY(self, ctx:TSqlParser.JSON_QUERYContext):
        pass

    # Exit a parse tree produced by TSqlParser#JSON_QUERY.
    def exitJSON_QUERY(self, ctx:TSqlParser.JSON_QUERYContext):
        pass


    # Enter a parse tree produced by TSqlParser#JSON_MODIFY.
    def enterJSON_MODIFY(self, ctx:TSqlParser.JSON_MODIFYContext):
        pass

    # Exit a parse tree produced by TSqlParser#JSON_MODIFY.
    def exitJSON_MODIFY(self, ctx:TSqlParser.JSON_MODIFYContext):
        pass


    # Enter a parse tree produced by TSqlParser#JSON_PATH_EXISTS.
    def enterJSON_PATH_EXISTS(self, ctx:TSqlParser.JSON_PATH_EXISTSContext):
        pass

    # Exit a parse tree produced by TSqlParser#JSON_PATH_EXISTS.
    def exitJSON_PATH_EXISTS(self, ctx:TSqlParser.JSON_PATH_EXISTSContext):
        pass


    # Enter a parse tree produced by TSqlParser#ABS.
    def enterABS(self, ctx:TSqlParser.ABSContext):
        pass

    # Exit a parse tree produced by TSqlParser#ABS.
    def exitABS(self, ctx:TSqlParser.ABSContext):
        pass


    # Enter a parse tree produced by TSqlParser#ACOS.
    def enterACOS(self, ctx:TSqlParser.ACOSContext):
        pass

    # Exit a parse tree produced by TSqlParser#ACOS.
    def exitACOS(self, ctx:TSqlParser.ACOSContext):
        pass


    # Enter a parse tree produced by TSqlParser#ASIN.
    def enterASIN(self, ctx:TSqlParser.ASINContext):
        pass

    # Exit a parse tree produced by TSqlParser#ASIN.
    def exitASIN(self, ctx:TSqlParser.ASINContext):
        pass


    # Enter a parse tree produced by TSqlParser#ATAN.
    def enterATAN(self, ctx:TSqlParser.ATANContext):
        pass

    # Exit a parse tree produced by TSqlParser#ATAN.
    def exitATAN(self, ctx:TSqlParser.ATANContext):
        pass


    # Enter a parse tree produced by TSqlParser#ATN2.
    def enterATN2(self, ctx:TSqlParser.ATN2Context):
        pass

    # Exit a parse tree produced by TSqlParser#ATN2.
    def exitATN2(self, ctx:TSqlParser.ATN2Context):
        pass


    # Enter a parse tree produced by TSqlParser#CEILING.
    def enterCEILING(self, ctx:TSqlParser.CEILINGContext):
        pass

    # Exit a parse tree produced by TSqlParser#CEILING.
    def exitCEILING(self, ctx:TSqlParser.CEILINGContext):
        pass


    # Enter a parse tree produced by TSqlParser#COS.
    def enterCOS(self, ctx:TSqlParser.COSContext):
        pass

    # Exit a parse tree produced by TSqlParser#COS.
    def exitCOS(self, ctx:TSqlParser.COSContext):
        pass


    # Enter a parse tree produced by TSqlParser#COT.
    def enterCOT(self, ctx:TSqlParser.COTContext):
        pass

    # Exit a parse tree produced by TSqlParser#COT.
    def exitCOT(self, ctx:TSqlParser.COTContext):
        pass


    # Enter a parse tree produced by TSqlParser#DEGREES.
    def enterDEGREES(self, ctx:TSqlParser.DEGREESContext):
        pass

    # Exit a parse tree produced by TSqlParser#DEGREES.
    def exitDEGREES(self, ctx:TSqlParser.DEGREESContext):
        pass


    # Enter a parse tree produced by TSqlParser#EXP.
    def enterEXP(self, ctx:TSqlParser.EXPContext):
        pass

    # Exit a parse tree produced by TSqlParser#EXP.
    def exitEXP(self, ctx:TSqlParser.EXPContext):
        pass


    # Enter a parse tree produced by TSqlParser#FLOOR.
    def enterFLOOR(self, ctx:TSqlParser.FLOORContext):
        pass

    # Exit a parse tree produced by TSqlParser#FLOOR.
    def exitFLOOR(self, ctx:TSqlParser.FLOORContext):
        pass


    # Enter a parse tree produced by TSqlParser#LOG.
    def enterLOG(self, ctx:TSqlParser.LOGContext):
        pass

    # Exit a parse tree produced by TSqlParser#LOG.
    def exitLOG(self, ctx:TSqlParser.LOGContext):
        pass


    # Enter a parse tree produced by TSqlParser#LOG10.
    def enterLOG10(self, ctx:TSqlParser.LOG10Context):
        pass

    # Exit a parse tree produced by TSqlParser#LOG10.
    def exitLOG10(self, ctx:TSqlParser.LOG10Context):
        pass


    # Enter a parse tree produced by TSqlParser#PI.
    def enterPI(self, ctx:TSqlParser.PIContext):
        pass

    # Exit a parse tree produced by TSqlParser#PI.
    def exitPI(self, ctx:TSqlParser.PIContext):
        pass


    # Enter a parse tree produced by TSqlParser#POWER.
    def enterPOWER(self, ctx:TSqlParser.POWERContext):
        pass

    # Exit a parse tree produced by TSqlParser#POWER.
    def exitPOWER(self, ctx:TSqlParser.POWERContext):
        pass


    # Enter a parse tree produced by TSqlParser#RADIANS.
    def enterRADIANS(self, ctx:TSqlParser.RADIANSContext):
        pass

    # Exit a parse tree produced by TSqlParser#RADIANS.
    def exitRADIANS(self, ctx:TSqlParser.RADIANSContext):
        pass


    # Enter a parse tree produced by TSqlParser#RAND.
    def enterRAND(self, ctx:TSqlParser.RANDContext):
        pass

    # Exit a parse tree produced by TSqlParser#RAND.
    def exitRAND(self, ctx:TSqlParser.RANDContext):
        pass


    # Enter a parse tree produced by TSqlParser#ROUND.
    def enterROUND(self, ctx:TSqlParser.ROUNDContext):
        pass

    # Exit a parse tree produced by TSqlParser#ROUND.
    def exitROUND(self, ctx:TSqlParser.ROUNDContext):
        pass


    # Enter a parse tree produced by TSqlParser#MATH_SIGN.
    def enterMATH_SIGN(self, ctx:TSqlParser.MATH_SIGNContext):
        pass

    # Exit a parse tree produced by TSqlParser#MATH_SIGN.
    def exitMATH_SIGN(self, ctx:TSqlParser.MATH_SIGNContext):
        pass


    # Enter a parse tree produced by TSqlParser#SIN.
    def enterSIN(self, ctx:TSqlParser.SINContext):
        pass

    # Exit a parse tree produced by TSqlParser#SIN.
    def exitSIN(self, ctx:TSqlParser.SINContext):
        pass


    # Enter a parse tree produced by TSqlParser#SQRT.
    def enterSQRT(self, ctx:TSqlParser.SQRTContext):
        pass

    # Exit a parse tree produced by TSqlParser#SQRT.
    def exitSQRT(self, ctx:TSqlParser.SQRTContext):
        pass


    # Enter a parse tree produced by TSqlParser#SQUARE.
    def enterSQUARE(self, ctx:TSqlParser.SQUAREContext):
        pass

    # Exit a parse tree produced by TSqlParser#SQUARE.
    def exitSQUARE(self, ctx:TSqlParser.SQUAREContext):
        pass


    # Enter a parse tree produced by TSqlParser#TAN.
    def enterTAN(self, ctx:TSqlParser.TANContext):
        pass

    # Exit a parse tree produced by TSqlParser#TAN.
    def exitTAN(self, ctx:TSqlParser.TANContext):
        pass


    # Enter a parse tree produced by TSqlParser#GREATEST.
    def enterGREATEST(self, ctx:TSqlParser.GREATESTContext):
        pass

    # Exit a parse tree produced by TSqlParser#GREATEST.
    def exitGREATEST(self, ctx:TSqlParser.GREATESTContext):
        pass


    # Enter a parse tree produced by TSqlParser#LEAST.
    def enterLEAST(self, ctx:TSqlParser.LEASTContext):
        pass

    # Exit a parse tree produced by TSqlParser#LEAST.
    def exitLEAST(self, ctx:TSqlParser.LEASTContext):
        pass


    # Enter a parse tree produced by TSqlParser#CERTENCODED.
    def enterCERTENCODED(self, ctx:TSqlParser.CERTENCODEDContext):
        pass

    # Exit a parse tree produced by TSqlParser#CERTENCODED.
    def exitCERTENCODED(self, ctx:TSqlParser.CERTENCODEDContext):
        pass


    # Enter a parse tree produced by TSqlParser#CERTPRIVATEKEY.
    def enterCERTPRIVATEKEY(self, ctx:TSqlParser.CERTPRIVATEKEYContext):
        pass

    # Exit a parse tree produced by TSqlParser#CERTPRIVATEKEY.
    def exitCERTPRIVATEKEY(self, ctx:TSqlParser.CERTPRIVATEKEYContext):
        pass


    # Enter a parse tree produced by TSqlParser#CURRENT_USER.
    def enterCURRENT_USER(self, ctx:TSqlParser.CURRENT_USERContext):
        pass

    # Exit a parse tree produced by TSqlParser#CURRENT_USER.
    def exitCURRENT_USER(self, ctx:TSqlParser.CURRENT_USERContext):
        pass


    # Enter a parse tree produced by TSqlParser#DATABASE_PRINCIPAL_ID.
    def enterDATABASE_PRINCIPAL_ID(self, ctx:TSqlParser.DATABASE_PRINCIPAL_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#DATABASE_PRINCIPAL_ID.
    def exitDATABASE_PRINCIPAL_ID(self, ctx:TSqlParser.DATABASE_PRINCIPAL_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#HAS_DBACCESS.
    def enterHAS_DBACCESS(self, ctx:TSqlParser.HAS_DBACCESSContext):
        pass

    # Exit a parse tree produced by TSqlParser#HAS_DBACCESS.
    def exitHAS_DBACCESS(self, ctx:TSqlParser.HAS_DBACCESSContext):
        pass


    # Enter a parse tree produced by TSqlParser#HAS_PERMS_BY_NAME.
    def enterHAS_PERMS_BY_NAME(self, ctx:TSqlParser.HAS_PERMS_BY_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#HAS_PERMS_BY_NAME.
    def exitHAS_PERMS_BY_NAME(self, ctx:TSqlParser.HAS_PERMS_BY_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#IS_MEMBER.
    def enterIS_MEMBER(self, ctx:TSqlParser.IS_MEMBERContext):
        pass

    # Exit a parse tree produced by TSqlParser#IS_MEMBER.
    def exitIS_MEMBER(self, ctx:TSqlParser.IS_MEMBERContext):
        pass


    # Enter a parse tree produced by TSqlParser#IS_ROLEMEMBER.
    def enterIS_ROLEMEMBER(self, ctx:TSqlParser.IS_ROLEMEMBERContext):
        pass

    # Exit a parse tree produced by TSqlParser#IS_ROLEMEMBER.
    def exitIS_ROLEMEMBER(self, ctx:TSqlParser.IS_ROLEMEMBERContext):
        pass


    # Enter a parse tree produced by TSqlParser#IS_SRVROLEMEMBER.
    def enterIS_SRVROLEMEMBER(self, ctx:TSqlParser.IS_SRVROLEMEMBERContext):
        pass

    # Exit a parse tree produced by TSqlParser#IS_SRVROLEMEMBER.
    def exitIS_SRVROLEMEMBER(self, ctx:TSqlParser.IS_SRVROLEMEMBERContext):
        pass


    # Enter a parse tree produced by TSqlParser#LOGINPROPERTY.
    def enterLOGINPROPERTY(self, ctx:TSqlParser.LOGINPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#LOGINPROPERTY.
    def exitLOGINPROPERTY(self, ctx:TSqlParser.LOGINPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#ORIGINAL_LOGIN.
    def enterORIGINAL_LOGIN(self, ctx:TSqlParser.ORIGINAL_LOGINContext):
        pass

    # Exit a parse tree produced by TSqlParser#ORIGINAL_LOGIN.
    def exitORIGINAL_LOGIN(self, ctx:TSqlParser.ORIGINAL_LOGINContext):
        pass


    # Enter a parse tree produced by TSqlParser#PERMISSIONS.
    def enterPERMISSIONS(self, ctx:TSqlParser.PERMISSIONSContext):
        pass

    # Exit a parse tree produced by TSqlParser#PERMISSIONS.
    def exitPERMISSIONS(self, ctx:TSqlParser.PERMISSIONSContext):
        pass


    # Enter a parse tree produced by TSqlParser#PWDENCRYPT.
    def enterPWDENCRYPT(self, ctx:TSqlParser.PWDENCRYPTContext):
        pass

    # Exit a parse tree produced by TSqlParser#PWDENCRYPT.
    def exitPWDENCRYPT(self, ctx:TSqlParser.PWDENCRYPTContext):
        pass


    # Enter a parse tree produced by TSqlParser#PWDCOMPARE.
    def enterPWDCOMPARE(self, ctx:TSqlParser.PWDCOMPAREContext):
        pass

    # Exit a parse tree produced by TSqlParser#PWDCOMPARE.
    def exitPWDCOMPARE(self, ctx:TSqlParser.PWDCOMPAREContext):
        pass


    # Enter a parse tree produced by TSqlParser#SESSION_USER.
    def enterSESSION_USER(self, ctx:TSqlParser.SESSION_USERContext):
        pass

    # Exit a parse tree produced by TSqlParser#SESSION_USER.
    def exitSESSION_USER(self, ctx:TSqlParser.SESSION_USERContext):
        pass


    # Enter a parse tree produced by TSqlParser#SESSIONPROPERTY.
    def enterSESSIONPROPERTY(self, ctx:TSqlParser.SESSIONPROPERTYContext):
        pass

    # Exit a parse tree produced by TSqlParser#SESSIONPROPERTY.
    def exitSESSIONPROPERTY(self, ctx:TSqlParser.SESSIONPROPERTYContext):
        pass


    # Enter a parse tree produced by TSqlParser#SUSER_ID.
    def enterSUSER_ID(self, ctx:TSqlParser.SUSER_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#SUSER_ID.
    def exitSUSER_ID(self, ctx:TSqlParser.SUSER_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#SUSER_SNAME.
    def enterSUSER_SNAME(self, ctx:TSqlParser.SUSER_SNAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#SUSER_SNAME.
    def exitSUSER_SNAME(self, ctx:TSqlParser.SUSER_SNAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#SUSER_SID.
    def enterSUSER_SID(self, ctx:TSqlParser.SUSER_SIDContext):
        pass

    # Exit a parse tree produced by TSqlParser#SUSER_SID.
    def exitSUSER_SID(self, ctx:TSqlParser.SUSER_SIDContext):
        pass


    # Enter a parse tree produced by TSqlParser#SYSTEM_USER.
    def enterSYSTEM_USER(self, ctx:TSqlParser.SYSTEM_USERContext):
        pass

    # Exit a parse tree produced by TSqlParser#SYSTEM_USER.
    def exitSYSTEM_USER(self, ctx:TSqlParser.SYSTEM_USERContext):
        pass


    # Enter a parse tree produced by TSqlParser#USER.
    def enterUSER(self, ctx:TSqlParser.USERContext):
        pass

    # Exit a parse tree produced by TSqlParser#USER.
    def exitUSER(self, ctx:TSqlParser.USERContext):
        pass


    # Enter a parse tree produced by TSqlParser#USER_ID.
    def enterUSER_ID(self, ctx:TSqlParser.USER_IDContext):
        pass

    # Exit a parse tree produced by TSqlParser#USER_ID.
    def exitUSER_ID(self, ctx:TSqlParser.USER_IDContext):
        pass


    # Enter a parse tree produced by TSqlParser#USER_NAME.
    def enterUSER_NAME(self, ctx:TSqlParser.USER_NAMEContext):
        pass

    # Exit a parse tree produced by TSqlParser#USER_NAME.
    def exitUSER_NAME(self, ctx:TSqlParser.USER_NAMEContext):
        pass


    # Enter a parse tree produced by TSqlParser#xml_data_type_methods.
    def enterXml_data_type_methods(self, ctx:TSqlParser.Xml_data_type_methodsContext):
        pass

    # Exit a parse tree produced by TSqlParser#xml_data_type_methods.
    def exitXml_data_type_methods(self, ctx:TSqlParser.Xml_data_type_methodsContext):
        pass


    # Enter a parse tree produced by TSqlParser#dateparts_9.
    def enterDateparts_9(self, ctx:TSqlParser.Dateparts_9Context):
        pass

    # Exit a parse tree produced by TSqlParser#dateparts_9.
    def exitDateparts_9(self, ctx:TSqlParser.Dateparts_9Context):
        pass


    # Enter a parse tree produced by TSqlParser#dateparts_12.
    def enterDateparts_12(self, ctx:TSqlParser.Dateparts_12Context):
        pass

    # Exit a parse tree produced by TSqlParser#dateparts_12.
    def exitDateparts_12(self, ctx:TSqlParser.Dateparts_12Context):
        pass


    # Enter a parse tree produced by TSqlParser#dateparts_15.
    def enterDateparts_15(self, ctx:TSqlParser.Dateparts_15Context):
        pass

    # Exit a parse tree produced by TSqlParser#dateparts_15.
    def exitDateparts_15(self, ctx:TSqlParser.Dateparts_15Context):
        pass


    # Enter a parse tree produced by TSqlParser#dateparts_datetrunc.
    def enterDateparts_datetrunc(self, ctx:TSqlParser.Dateparts_datetruncContext):
        pass

    # Exit a parse tree produced by TSqlParser#dateparts_datetrunc.
    def exitDateparts_datetrunc(self, ctx:TSqlParser.Dateparts_datetruncContext):
        pass


    # Enter a parse tree produced by TSqlParser#value_method.
    def enterValue_method(self, ctx:TSqlParser.Value_methodContext):
        pass

    # Exit a parse tree produced by TSqlParser#value_method.
    def exitValue_method(self, ctx:TSqlParser.Value_methodContext):
        pass


    # Enter a parse tree produced by TSqlParser#value_call.
    def enterValue_call(self, ctx:TSqlParser.Value_callContext):
        pass

    # Exit a parse tree produced by TSqlParser#value_call.
    def exitValue_call(self, ctx:TSqlParser.Value_callContext):
        pass


    # Enter a parse tree produced by TSqlParser#query_method.
    def enterQuery_method(self, ctx:TSqlParser.Query_methodContext):
        pass

    # Exit a parse tree produced by TSqlParser#query_method.
    def exitQuery_method(self, ctx:TSqlParser.Query_methodContext):
        pass


    # Enter a parse tree produced by TSqlParser#query_call.
    def enterQuery_call(self, ctx:TSqlParser.Query_callContext):
        pass

    # Exit a parse tree produced by TSqlParser#query_call.
    def exitQuery_call(self, ctx:TSqlParser.Query_callContext):
        pass


    # Enter a parse tree produced by TSqlParser#exist_method.
    def enterExist_method(self, ctx:TSqlParser.Exist_methodContext):
        pass

    # Exit a parse tree produced by TSqlParser#exist_method.
    def exitExist_method(self, ctx:TSqlParser.Exist_methodContext):
        pass


    # Enter a parse tree produced by TSqlParser#exist_call.
    def enterExist_call(self, ctx:TSqlParser.Exist_callContext):
        pass

    # Exit a parse tree produced by TSqlParser#exist_call.
    def exitExist_call(self, ctx:TSqlParser.Exist_callContext):
        pass


    # Enter a parse tree produced by TSqlParser#modify_method.
    def enterModify_method(self, ctx:TSqlParser.Modify_methodContext):
        pass

    # Exit a parse tree produced by TSqlParser#modify_method.
    def exitModify_method(self, ctx:TSqlParser.Modify_methodContext):
        pass


    # Enter a parse tree produced by TSqlParser#modify_call.
    def enterModify_call(self, ctx:TSqlParser.Modify_callContext):
        pass

    # Exit a parse tree produced by TSqlParser#modify_call.
    def exitModify_call(self, ctx:TSqlParser.Modify_callContext):
        pass


    # Enter a parse tree produced by TSqlParser#hierarchyid_call.
    def enterHierarchyid_call(self, ctx:TSqlParser.Hierarchyid_callContext):
        pass

    # Exit a parse tree produced by TSqlParser#hierarchyid_call.
    def exitHierarchyid_call(self, ctx:TSqlParser.Hierarchyid_callContext):
        pass


    # Enter a parse tree produced by TSqlParser#hierarchyid_static_method.
    def enterHierarchyid_static_method(self, ctx:TSqlParser.Hierarchyid_static_methodContext):
        pass

    # Exit a parse tree produced by TSqlParser#hierarchyid_static_method.
    def exitHierarchyid_static_method(self, ctx:TSqlParser.Hierarchyid_static_methodContext):
        pass


    # Enter a parse tree produced by TSqlParser#nodes_method.
    def enterNodes_method(self, ctx:TSqlParser.Nodes_methodContext):
        pass

    # Exit a parse tree produced by TSqlParser#nodes_method.
    def exitNodes_method(self, ctx:TSqlParser.Nodes_methodContext):
        pass


    # Enter a parse tree produced by TSqlParser#switch_section.
    def enterSwitch_section(self, ctx:TSqlParser.Switch_sectionContext):
        pass

    # Exit a parse tree produced by TSqlParser#switch_section.
    def exitSwitch_section(self, ctx:TSqlParser.Switch_sectionContext):
        pass


    # Enter a parse tree produced by TSqlParser#switch_search_condition_section.
    def enterSwitch_search_condition_section(self, ctx:TSqlParser.Switch_search_condition_sectionContext):
        pass

    # Exit a parse tree produced by TSqlParser#switch_search_condition_section.
    def exitSwitch_search_condition_section(self, ctx:TSqlParser.Switch_search_condition_sectionContext):
        pass


    # Enter a parse tree produced by TSqlParser#as_column_alias.
    def enterAs_column_alias(self, ctx:TSqlParser.As_column_aliasContext):
        pass

    # Exit a parse tree produced by TSqlParser#as_column_alias.
    def exitAs_column_alias(self, ctx:TSqlParser.As_column_aliasContext):
        pass


    # Enter a parse tree produced by TSqlParser#as_table_alias.
    def enterAs_table_alias(self, ctx:TSqlParser.As_table_aliasContext):
        pass

    # Exit a parse tree produced by TSqlParser#as_table_alias.
    def exitAs_table_alias(self, ctx:TSqlParser.As_table_aliasContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_alias.
    def enterTable_alias(self, ctx:TSqlParser.Table_aliasContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_alias.
    def exitTable_alias(self, ctx:TSqlParser.Table_aliasContext):
        pass


    # Enter a parse tree produced by TSqlParser#with_table_hints.
    def enterWith_table_hints(self, ctx:TSqlParser.With_table_hintsContext):
        pass

    # Exit a parse tree produced by TSqlParser#with_table_hints.
    def exitWith_table_hints(self, ctx:TSqlParser.With_table_hintsContext):
        pass


    # Enter a parse tree produced by TSqlParser#deprecated_table_hint.
    def enterDeprecated_table_hint(self, ctx:TSqlParser.Deprecated_table_hintContext):
        pass

    # Exit a parse tree produced by TSqlParser#deprecated_table_hint.
    def exitDeprecated_table_hint(self, ctx:TSqlParser.Deprecated_table_hintContext):
        pass


    # Enter a parse tree produced by TSqlParser#sybase_legacy_hints.
    def enterSybase_legacy_hints(self, ctx:TSqlParser.Sybase_legacy_hintsContext):
        pass

    # Exit a parse tree produced by TSqlParser#sybase_legacy_hints.
    def exitSybase_legacy_hints(self, ctx:TSqlParser.Sybase_legacy_hintsContext):
        pass


    # Enter a parse tree produced by TSqlParser#sybase_legacy_hint.
    def enterSybase_legacy_hint(self, ctx:TSqlParser.Sybase_legacy_hintContext):
        pass

    # Exit a parse tree produced by TSqlParser#sybase_legacy_hint.
    def exitSybase_legacy_hint(self, ctx:TSqlParser.Sybase_legacy_hintContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_hint.
    def enterTable_hint(self, ctx:TSqlParser.Table_hintContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_hint.
    def exitTable_hint(self, ctx:TSqlParser.Table_hintContext):
        pass


    # Enter a parse tree produced by TSqlParser#index_value.
    def enterIndex_value(self, ctx:TSqlParser.Index_valueContext):
        pass

    # Exit a parse tree produced by TSqlParser#index_value.
    def exitIndex_value(self, ctx:TSqlParser.Index_valueContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_alias_list.
    def enterColumn_alias_list(self, ctx:TSqlParser.Column_alias_listContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_alias_list.
    def exitColumn_alias_list(self, ctx:TSqlParser.Column_alias_listContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_alias.
    def enterColumn_alias(self, ctx:TSqlParser.Column_aliasContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_alias.
    def exitColumn_alias(self, ctx:TSqlParser.Column_aliasContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_value_constructor.
    def enterTable_value_constructor(self, ctx:TSqlParser.Table_value_constructorContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_value_constructor.
    def exitTable_value_constructor(self, ctx:TSqlParser.Table_value_constructorContext):
        pass


    # Enter a parse tree produced by TSqlParser#expression_list_.
    def enterExpression_list_(self, ctx:TSqlParser.Expression_list_Context):
        pass

    # Exit a parse tree produced by TSqlParser#expression_list_.
    def exitExpression_list_(self, ctx:TSqlParser.Expression_list_Context):
        pass


    # Enter a parse tree produced by TSqlParser#ranking_windowed_function.
    def enterRanking_windowed_function(self, ctx:TSqlParser.Ranking_windowed_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#ranking_windowed_function.
    def exitRanking_windowed_function(self, ctx:TSqlParser.Ranking_windowed_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#aggregate_windowed_function.
    def enterAggregate_windowed_function(self, ctx:TSqlParser.Aggregate_windowed_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#aggregate_windowed_function.
    def exitAggregate_windowed_function(self, ctx:TSqlParser.Aggregate_windowed_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#analytic_windowed_function.
    def enterAnalytic_windowed_function(self, ctx:TSqlParser.Analytic_windowed_functionContext):
        pass

    # Exit a parse tree produced by TSqlParser#analytic_windowed_function.
    def exitAnalytic_windowed_function(self, ctx:TSqlParser.Analytic_windowed_functionContext):
        pass


    # Enter a parse tree produced by TSqlParser#all_distinct_expression.
    def enterAll_distinct_expression(self, ctx:TSqlParser.All_distinct_expressionContext):
        pass

    # Exit a parse tree produced by TSqlParser#all_distinct_expression.
    def exitAll_distinct_expression(self, ctx:TSqlParser.All_distinct_expressionContext):
        pass


    # Enter a parse tree produced by TSqlParser#over_clause.
    def enterOver_clause(self, ctx:TSqlParser.Over_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#over_clause.
    def exitOver_clause(self, ctx:TSqlParser.Over_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#row_or_range_clause.
    def enterRow_or_range_clause(self, ctx:TSqlParser.Row_or_range_clauseContext):
        pass

    # Exit a parse tree produced by TSqlParser#row_or_range_clause.
    def exitRow_or_range_clause(self, ctx:TSqlParser.Row_or_range_clauseContext):
        pass


    # Enter a parse tree produced by TSqlParser#window_frame_extent.
    def enterWindow_frame_extent(self, ctx:TSqlParser.Window_frame_extentContext):
        pass

    # Exit a parse tree produced by TSqlParser#window_frame_extent.
    def exitWindow_frame_extent(self, ctx:TSqlParser.Window_frame_extentContext):
        pass


    # Enter a parse tree produced by TSqlParser#window_frame_bound.
    def enterWindow_frame_bound(self, ctx:TSqlParser.Window_frame_boundContext):
        pass

    # Exit a parse tree produced by TSqlParser#window_frame_bound.
    def exitWindow_frame_bound(self, ctx:TSqlParser.Window_frame_boundContext):
        pass


    # Enter a parse tree produced by TSqlParser#window_frame_preceding.
    def enterWindow_frame_preceding(self, ctx:TSqlParser.Window_frame_precedingContext):
        pass

    # Exit a parse tree produced by TSqlParser#window_frame_preceding.
    def exitWindow_frame_preceding(self, ctx:TSqlParser.Window_frame_precedingContext):
        pass


    # Enter a parse tree produced by TSqlParser#window_frame_following.
    def enterWindow_frame_following(self, ctx:TSqlParser.Window_frame_followingContext):
        pass

    # Exit a parse tree produced by TSqlParser#window_frame_following.
    def exitWindow_frame_following(self, ctx:TSqlParser.Window_frame_followingContext):
        pass


    # Enter a parse tree produced by TSqlParser#create_database_option.
    def enterCreate_database_option(self, ctx:TSqlParser.Create_database_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#create_database_option.
    def exitCreate_database_option(self, ctx:TSqlParser.Create_database_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#database_filestream_option.
    def enterDatabase_filestream_option(self, ctx:TSqlParser.Database_filestream_optionContext):
        pass

    # Exit a parse tree produced by TSqlParser#database_filestream_option.
    def exitDatabase_filestream_option(self, ctx:TSqlParser.Database_filestream_optionContext):
        pass


    # Enter a parse tree produced by TSqlParser#database_file_spec.
    def enterDatabase_file_spec(self, ctx:TSqlParser.Database_file_specContext):
        pass

    # Exit a parse tree produced by TSqlParser#database_file_spec.
    def exitDatabase_file_spec(self, ctx:TSqlParser.Database_file_specContext):
        pass


    # Enter a parse tree produced by TSqlParser#file_group.
    def enterFile_group(self, ctx:TSqlParser.File_groupContext):
        pass

    # Exit a parse tree produced by TSqlParser#file_group.
    def exitFile_group(self, ctx:TSqlParser.File_groupContext):
        pass


    # Enter a parse tree produced by TSqlParser#file_spec.
    def enterFile_spec(self, ctx:TSqlParser.File_specContext):
        pass

    # Exit a parse tree produced by TSqlParser#file_spec.
    def exitFile_spec(self, ctx:TSqlParser.File_specContext):
        pass


    # Enter a parse tree produced by TSqlParser#entity_name.
    def enterEntity_name(self, ctx:TSqlParser.Entity_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#entity_name.
    def exitEntity_name(self, ctx:TSqlParser.Entity_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#entity_name_for_azure_dw.
    def enterEntity_name_for_azure_dw(self, ctx:TSqlParser.Entity_name_for_azure_dwContext):
        pass

    # Exit a parse tree produced by TSqlParser#entity_name_for_azure_dw.
    def exitEntity_name_for_azure_dw(self, ctx:TSqlParser.Entity_name_for_azure_dwContext):
        pass


    # Enter a parse tree produced by TSqlParser#entity_name_for_parallel_dw.
    def enterEntity_name_for_parallel_dw(self, ctx:TSqlParser.Entity_name_for_parallel_dwContext):
        pass

    # Exit a parse tree produced by TSqlParser#entity_name_for_parallel_dw.
    def exitEntity_name_for_parallel_dw(self, ctx:TSqlParser.Entity_name_for_parallel_dwContext):
        pass


    # Enter a parse tree produced by TSqlParser#full_table_name.
    def enterFull_table_name(self, ctx:TSqlParser.Full_table_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#full_table_name.
    def exitFull_table_name(self, ctx:TSqlParser.Full_table_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#table_name.
    def enterTable_name(self, ctx:TSqlParser.Table_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#table_name.
    def exitTable_name(self, ctx:TSqlParser.Table_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#simple_name.
    def enterSimple_name(self, ctx:TSqlParser.Simple_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#simple_name.
    def exitSimple_name(self, ctx:TSqlParser.Simple_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#func_proc_name_schema.
    def enterFunc_proc_name_schema(self, ctx:TSqlParser.Func_proc_name_schemaContext):
        pass

    # Exit a parse tree produced by TSqlParser#func_proc_name_schema.
    def exitFunc_proc_name_schema(self, ctx:TSqlParser.Func_proc_name_schemaContext):
        pass


    # Enter a parse tree produced by TSqlParser#func_proc_name_database_schema.
    def enterFunc_proc_name_database_schema(self, ctx:TSqlParser.Func_proc_name_database_schemaContext):
        pass

    # Exit a parse tree produced by TSqlParser#func_proc_name_database_schema.
    def exitFunc_proc_name_database_schema(self, ctx:TSqlParser.Func_proc_name_database_schemaContext):
        pass


    # Enter a parse tree produced by TSqlParser#func_proc_name_server_database_schema.
    def enterFunc_proc_name_server_database_schema(self, ctx:TSqlParser.Func_proc_name_server_database_schemaContext):
        pass

    # Exit a parse tree produced by TSqlParser#func_proc_name_server_database_schema.
    def exitFunc_proc_name_server_database_schema(self, ctx:TSqlParser.Func_proc_name_server_database_schemaContext):
        pass


    # Enter a parse tree produced by TSqlParser#ddl_object.
    def enterDdl_object(self, ctx:TSqlParser.Ddl_objectContext):
        pass

    # Exit a parse tree produced by TSqlParser#ddl_object.
    def exitDdl_object(self, ctx:TSqlParser.Ddl_objectContext):
        pass


    # Enter a parse tree produced by TSqlParser#full_column_name.
    def enterFull_column_name(self, ctx:TSqlParser.Full_column_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#full_column_name.
    def exitFull_column_name(self, ctx:TSqlParser.Full_column_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_name_list_with_order.
    def enterColumn_name_list_with_order(self, ctx:TSqlParser.Column_name_list_with_orderContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_name_list_with_order.
    def exitColumn_name_list_with_order(self, ctx:TSqlParser.Column_name_list_with_orderContext):
        pass


    # Enter a parse tree produced by TSqlParser#insert_column_name_list.
    def enterInsert_column_name_list(self, ctx:TSqlParser.Insert_column_name_listContext):
        pass

    # Exit a parse tree produced by TSqlParser#insert_column_name_list.
    def exitInsert_column_name_list(self, ctx:TSqlParser.Insert_column_name_listContext):
        pass


    # Enter a parse tree produced by TSqlParser#insert_column_id.
    def enterInsert_column_id(self, ctx:TSqlParser.Insert_column_idContext):
        pass

    # Exit a parse tree produced by TSqlParser#insert_column_id.
    def exitInsert_column_id(self, ctx:TSqlParser.Insert_column_idContext):
        pass


    # Enter a parse tree produced by TSqlParser#column_name_list.
    def enterColumn_name_list(self, ctx:TSqlParser.Column_name_listContext):
        pass

    # Exit a parse tree produced by TSqlParser#column_name_list.
    def exitColumn_name_list(self, ctx:TSqlParser.Column_name_listContext):
        pass


    # Enter a parse tree produced by TSqlParser#cursor_name.
    def enterCursor_name(self, ctx:TSqlParser.Cursor_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#cursor_name.
    def exitCursor_name(self, ctx:TSqlParser.Cursor_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#on_off.
    def enterOn_off(self, ctx:TSqlParser.On_offContext):
        pass

    # Exit a parse tree produced by TSqlParser#on_off.
    def exitOn_off(self, ctx:TSqlParser.On_offContext):
        pass


    # Enter a parse tree produced by TSqlParser#clustered.
    def enterClustered(self, ctx:TSqlParser.ClusteredContext):
        pass

    # Exit a parse tree produced by TSqlParser#clustered.
    def exitClustered(self, ctx:TSqlParser.ClusteredContext):
        pass


    # Enter a parse tree produced by TSqlParser#null_notnull.
    def enterNull_notnull(self, ctx:TSqlParser.Null_notnullContext):
        pass

    # Exit a parse tree produced by TSqlParser#null_notnull.
    def exitNull_notnull(self, ctx:TSqlParser.Null_notnullContext):
        pass


    # Enter a parse tree produced by TSqlParser#scalar_function_name.
    def enterScalar_function_name(self, ctx:TSqlParser.Scalar_function_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#scalar_function_name.
    def exitScalar_function_name(self, ctx:TSqlParser.Scalar_function_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#begin_conversation_timer.
    def enterBegin_conversation_timer(self, ctx:TSqlParser.Begin_conversation_timerContext):
        pass

    # Exit a parse tree produced by TSqlParser#begin_conversation_timer.
    def exitBegin_conversation_timer(self, ctx:TSqlParser.Begin_conversation_timerContext):
        pass


    # Enter a parse tree produced by TSqlParser#begin_conversation_dialog.
    def enterBegin_conversation_dialog(self, ctx:TSqlParser.Begin_conversation_dialogContext):
        pass

    # Exit a parse tree produced by TSqlParser#begin_conversation_dialog.
    def exitBegin_conversation_dialog(self, ctx:TSqlParser.Begin_conversation_dialogContext):
        pass


    # Enter a parse tree produced by TSqlParser#contract_name.
    def enterContract_name(self, ctx:TSqlParser.Contract_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#contract_name.
    def exitContract_name(self, ctx:TSqlParser.Contract_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#service_name.
    def enterService_name(self, ctx:TSqlParser.Service_nameContext):
        pass

    # Exit a parse tree produced by TSqlParser#service_name.
    def exitService_name(self, ctx:TSqlParser.Service_nameContext):
        pass


    # Enter a parse tree produced by TSqlParser#end_conversation.
    def enterEnd_conversation(self, ctx:TSqlParser.End_conversationContext):
        pass

    # Exit a parse tree produced by TSqlParser#end_conversation.
    def exitEnd_conversation(self, ctx:TSqlParser.End_conversationContext):
        pass


    # Enter a parse tree produced by TSqlParser#waitfor_conversation.
    def enterWaitfor_conversation(self, ctx:TSqlParser.Waitfor_conversationContext):
        pass

    # Exit a parse tree produced by TSqlParser#waitfor_conversation.
    def exitWaitfor_conversation(self, ctx:TSqlParser.Waitfor_conversationContext):
        pass


    # Enter a parse tree produced by TSqlParser#get_conversation.
    def enterGet_conversation(self, ctx:TSqlParser.Get_conversationContext):
        pass

    # Exit a parse tree produced by TSqlParser#get_conversation.
    def exitGet_conversation(self, ctx:TSqlParser.Get_conversationContext):
        pass


    # Enter a parse tree produced by TSqlParser#queue_id.
    def enterQueue_id(self, ctx:TSqlParser.Queue_idContext):
        pass

    # Exit a parse tree produced by TSqlParser#queue_id.
    def exitQueue_id(self, ctx:TSqlParser.Queue_idContext):
        pass


    # Enter a parse tree produced by TSqlParser#send_conversation.
    def enterSend_conversation(self, ctx:TSqlParser.Send_conversationContext):
        pass

    # Exit a parse tree produced by TSqlParser#send_conversation.
    def exitSend_conversation(self, ctx:TSqlParser.Send_conversationContext):
        pass


    # Enter a parse tree produced by TSqlParser#data_type.
    def enterData_type(self, ctx:TSqlParser.Data_typeContext):
        pass

    # Exit a parse tree produced by TSqlParser#data_type.
    def exitData_type(self, ctx:TSqlParser.Data_typeContext):
        pass


    # Enter a parse tree produced by TSqlParser#constant.
    def enterConstant(self, ctx:TSqlParser.ConstantContext):
        pass

    # Exit a parse tree produced by TSqlParser#constant.
    def exitConstant(self, ctx:TSqlParser.ConstantContext):
        pass


    # Enter a parse tree produced by TSqlParser#primitive_constant.
    def enterPrimitive_constant(self, ctx:TSqlParser.Primitive_constantContext):
        pass

    # Exit a parse tree produced by TSqlParser#primitive_constant.
    def exitPrimitive_constant(self, ctx:TSqlParser.Primitive_constantContext):
        pass


    # Enter a parse tree produced by TSqlParser#keyword.
    def enterKeyword(self, ctx:TSqlParser.KeywordContext):
        pass

    # Exit a parse tree produced by TSqlParser#keyword.
    def exitKeyword(self, ctx:TSqlParser.KeywordContext):
        pass


    # Enter a parse tree produced by TSqlParser#id_.
    def enterId_(self, ctx:TSqlParser.Id_Context):
        pass

    # Exit a parse tree produced by TSqlParser#id_.
    def exitId_(self, ctx:TSqlParser.Id_Context):
        pass


    # Enter a parse tree produced by TSqlParser#simple_id.
    def enterSimple_id(self, ctx:TSqlParser.Simple_idContext):
        pass

    # Exit a parse tree produced by TSqlParser#simple_id.
    def exitSimple_id(self, ctx:TSqlParser.Simple_idContext):
        pass


    # Enter a parse tree produced by TSqlParser#id_or_string.
    def enterId_or_string(self, ctx:TSqlParser.Id_or_stringContext):
        pass

    # Exit a parse tree produced by TSqlParser#id_or_string.
    def exitId_or_string(self, ctx:TSqlParser.Id_or_stringContext):
        pass


    # Enter a parse tree produced by TSqlParser#comparison_operator.
    def enterComparison_operator(self, ctx:TSqlParser.Comparison_operatorContext):
        pass

    # Exit a parse tree produced by TSqlParser#comparison_operator.
    def exitComparison_operator(self, ctx:TSqlParser.Comparison_operatorContext):
        pass


    # Enter a parse tree produced by TSqlParser#assignment_operator.
    def enterAssignment_operator(self, ctx:TSqlParser.Assignment_operatorContext):
        pass

    # Exit a parse tree produced by TSqlParser#assignment_operator.
    def exitAssignment_operator(self, ctx:TSqlParser.Assignment_operatorContext):
        pass


    # Enter a parse tree produced by TSqlParser#file_size.
    def enterFile_size(self, ctx:TSqlParser.File_sizeContext):
        pass

    # Exit a parse tree produced by TSqlParser#file_size.
    def exitFile_size(self, ctx:TSqlParser.File_sizeContext):
        pass



del TSqlParser