
// Generated from tsql.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  tsqlParser : public antlr4::Parser {
public:
  enum {
    ADD = 1, ALL = 2, ALTER = 3, AND = 4, ANY = 5, AS = 6, ASC = 7, AUTHORIZATION = 8, 
    BACKUP = 9, BEGIN = 10, BETWEEN = 11, BREAK = 12, BROWSE = 13, BULK = 14, 
    BY = 15, CALLED = 16, CASCADE = 17, CASE = 18, CHANGETABLE = 19, CHANGES = 20, 
    CHECK = 21, CHECKPOINT = 22, CLOSE = 23, CLUSTERED = 24, COALESCE = 25, 
    COLLATE = 26, COLUMN = 27, COMMIT = 28, COMPUTE = 29, CONSTRAINT = 30, 
    CONTAINMENT = 31, CONTAINS = 32, CONTAINSTABLE = 33, CONTINUE = 34, 
    CONVERT = 35, CREATE = 36, CROSS = 37, CURRENT = 38, CURRENT_DATE = 39, 
    CURRENT_TIME = 40, CURRENT_TIMESTAMP = 41, CURRENT_USER = 42, CURSOR = 43, 
    DATABASE = 44, DBCC = 45, DEALLOCATE = 46, DECLARE = 47, DEFAULT = 48, 
    DELETE = 49, DENY = 50, DESC = 51, DISK = 52, DISTINCT = 53, DISTRIBUTED = 54, 
    DOUBLE = 55, DROP = 56, DUMP = 57, ELSE = 58, END = 59, ERRLVL = 60, 
    ESCAPE = 61, EXCEPT = 62, EXECUTE = 63, EXISTS = 64, EXIT = 65, EXP = 66, 
    EXTERNAL = 67, FETCH = 68, FILE = 69, FILENAME = 70, FILLFACTOR = 71, 
    FOR = 72, FORCESEEK = 73, FOREIGN = 74, FREETEXT = 75, FREETEXTTABLE = 76, 
    FROM = 77, FULL = 78, FUNCTION = 79, GOTO = 80, GRANT = 81, GROUP = 82, 
    HAVING = 83, IDENTITY = 84, IDENTITYCOL = 85, IDENTITY_INSERT = 86, 
    IIF = 87, IF = 88, IN = 89, INDEX = 90, INCLUDE = 91, INNER = 92, INSERT = 93, 
    INTERSECT = 94, INTO = 95, IS = 96, JOIN = 97, KEY = 98, KILL = 99, 
    LEFT = 100, LIKE = 101, LINENO = 102, LOAD = 103, LOG = 104, LOG10 = 105, 
    MERGE = 106, NATIONAL = 107, NEXT = 108, NOCHECK = 109, NONCLUSTERED = 110, 
    NONE = 111, NOT = 112, NULL_ = 113, NULLIF = 114, NUMERIC = 115, OF = 116, 
    OFF = 117, OFFSETS = 118, ON = 119, OPEN = 120, OPENDATASOURCE = 121, 
    OPENQUERY = 122, OPENROWSET = 123, OPENXML = 124, OPTION = 125, OR = 126, 
    ORDER = 127, OUTER = 128, OVER = 129, PARTIAL = 130, PERCENT = 131, 
    PIVOT = 132, PLAN = 133, PRECISION = 134, PRIMARY = 135, PRINT = 136, 
    PROC = 137, PROCEDURE = 138, PUBLIC = 139, RAISERROR = 140, READ = 141, 
    READTEXT = 142, RECONFIGURE = 143, REFERENCES = 144, REPLICATION = 145, 
    RESTORE = 146, RESTRICT = 147, RETURN = 148, RETURNS = 149, REVERT = 150, 
    REVOKE = 151, RIGHT = 152, ROLLBACK = 153, ROWCOUNT = 154, ROWGUIDCOL = 155, 
    RULE = 156, SAVE = 157, SCHEMA = 158, SECURITYAUDIT = 159, SELECT = 160, 
    SEMANTICKEYPHRASETABLE = 161, SEMANTICSIMILARITYDETAILSTABLE = 162, 
    SEMANTICSIMILARITYTABLE = 163, SESSION_USER = 164, SET = 165, SETUSER = 166, 
    SHUTDOWN = 167, SIGN = 168, SOME = 169, STATISTICS = 170, SYNONYM = 171, 
    SYSTEM = 172, SYSTEM_USER = 173, TABLE = 174, TABLESAMPLE = 175, TEXTSIZE = 176, 
    THEN = 177, TO = 178, TOP = 179, TRAN = 180, TRANSACTION = 181, TRIGGER = 182, 
    TRUNCATE = 183, TRY_CAST = 184, TRY_CONVERT = 185, TRY_PARSE = 186, 
    TSEQUAL = 187, UNION = 188, UNIQUE = 189, UNPIVOT = 190, UPDATE = 191, 
    UPDATETEXT = 192, USE = 193, USER = 194, VALUES = 195, VALUE = 196, 
    VARYING = 197, VIEW = 198, WAITFOR = 199, WHEN = 200, WHERE = 201, WHILE = 202, 
    WITH = 203, WITHIN = 204, WRITETEXT = 205, ABSOLUTE = 206, AFTER = 207, 
    ALLOWED = 208, ALLOW_SNAPSHOT_ISOLATION = 209, ANSI_NULLS = 210, ANSI_NULL_DEFAULT = 211, 
    ANSI_PADDING = 212, ANSI_WARNINGS = 213, APPLY = 214, ARITHABORT = 215, 
    AT = 216, AUTO = 217, AUTO_CLEANUP = 218, AUTO_CLOSE = 219, AUTO_CREATE_STATISTICS = 220, 
    AUTO_SHRINK = 221, AUTO_UPDATE_STATISTICS = 222, AUTO_UPDATE_STATISTICS_ASYNC = 223, 
    AVG = 224, BASE64 = 225, BIGINT = 226, BINARY_CHECKSUM = 227, BULK_LOGGED = 228, 
    CALLER = 229, CAST = 230, CATCH = 231, CEILING = 232, CHANGE_RETENTION = 233, 
    CHANGE_TRACKING = 234, CHECKSUM = 235, CHECKSUM_AGG = 236, COMMITTED = 237, 
    COMPATIBILITY_LEVEL = 238, CONCAT = 239, CONCAT_NULL_YIELDS_NULL = 240, 
    CONTROL = 241, COOKIE = 242, COS = 243, COUNT = 244, COUNT_BIG = 245, 
    CUBE = 246, CURSOR_CLOSE_ON_COMMIT = 247, CURSOR_DEFAULT = 248, DATE = 249, 
    DATEADD = 250, DATEDIFF = 251, DATENAME = 252, DATEPART = 253, DATETIME2 = 254, 
    DATETIMEOFFSETFROMPARTS = 255, DATE_CORRELATION_OPTIMIZATION = 256, 
    DAYS = 257, DB_CHAINING = 258, DEFAULT_FULLTEXT_LANGUAGE = 259, DEFAULT_LANGUAGE = 260, 
    DELAY = 261, DELAYED_DURABILITY = 262, DELETED = 263, DENSE_RANK = 264, 
    DIRECTORY_NAME = 265, DISABLE = 266, DISABLED = 267, DISABLE_BROKER = 268, 
    DYNAMIC = 269, EMERGENCY = 270, ENABLE_BROKER = 271, ENCRYPTION = 272, 
    ERROR_BROKER_CONVERSATIONS = 273, EXIST = 274, EXPAND = 275, FAST = 276, 
    FAST_FORWARD = 277, FILEGROUP = 278, FILEGROWTH = 279, FILESTREAM = 280, 
    FIRST = 281, FIRST_VALUE = 282, FLOOR = 283, FOLLOWING = 284, FORCE = 285, 
    FORCED = 286, FORWARD_ONLY = 287, FULLSCAN = 288, GB = 289, GLOBAL = 290, 
    GO = 291, GROUPING = 292, GROUPING_ID = 293, HADR = 294, HASH = 295, 
    HONOR_BROKER_PRIORITY = 296, HOURS = 297, IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX = 298, 
    IMMEDIATE = 299, IMPERSONATE = 300, INCREMENTAL = 301, INPUT = 302, 
    INT = 303, INSENSITIVE = 304, INSERTED = 305, ISOLATION = 306, IO = 307, 
    KB = 308, KEEP = 309, KEEPFIXED = 310, KEYSET = 311, LAG = 312, LAST = 313, 
    LAST_VALUE = 314, LEAD = 315, LEVEL = 316, LOCAL = 317, LOCK_ESCALATION = 318, 
    LOGIN = 319, LOOP = 320, MARK = 321, MAX = 322, MAXDOP = 323, MAXRECURSION = 324, 
    MAXSIZE = 325, MB = 326, MEMORY_OPTIMIZED_DATA = 327, MIN = 328, MINUTES = 329, 
    MIN_ACTIVE_ROWVERSION = 330, MIXED_PAGE_ALLOCATION = 331, MODIFY = 332, 
    MULTI_USER = 333, NAME = 334, NESTED_TRIGGERS = 335, NEW_BROKER = 336, 
    NOCOUNT = 337, NODES = 338, NOEXPAND = 339, NON_TRANSACTED_ACCESS = 340, 
    NORECOMPUTE = 341, NO_WAIT = 342, NTILE = 343, NUMBER = 344, NUMERIC_ROUNDABORT = 345, 
    OFFLINE = 346, OFFSET = 347, ONLINE = 348, ONLY = 349, OPTIMISTIC = 350, 
    OPTIMIZE = 351, OUT = 352, OUTPUT = 353, OWNER = 354, PAGE_VERIFY = 355, 
    PARAMETERIZATION = 356, PARSE = 357, PARTITION = 358, PATH = 359, PERCENTILE_CONT = 360, 
    POWER = 361, PRECEDING = 362, PRIOR = 363, PRIVILEGES = 364, QUERY = 365, 
    QUOTED_IDENTIFIER = 366, RANGE = 367, RANK = 368, READONLY = 369, READ_COMMITTED_SNAPSHOT = 370, 
    READ_ONLY = 371, READ_WRITE = 372, RECOMPILE = 373, RECOVERY = 374, 
    RECURSIVE_TRIGGERS = 375, RELATIVE = 376, REMOTE = 377, REPEATABLE = 378, 
    RESTRICTED_USER = 379, ROBUST = 380, ROLLUP = 381, ROOT = 382, ROUND = 383, 
    ROW = 384, ROWGUID = 385, ROWS = 386, ROW_NUMBER = 387, SAMPLE = 388, 
    SCHEMABINDING = 389, SCROLL = 390, SCROLL_LOCKS = 391, SECONDS = 392, 
    SELF = 393, SERIALIZABLE = 394, SETS = 395, SHOWPLAN = 396, SIMPLE = 397, 
    SIN = 398, SINGLE_USER = 399, SIZE = 400, SMALLINT = 401, SNAPSHOT = 402, 
    SPATIAL_WINDOW_MAX_CELLS = 403, STATIC = 404, STATS_STREAM = 405, STDEV = 406, 
    STDEVP = 407, STRING_AGG = 408, STRING_SPLIT = 409, SUM = 410, SQRT = 411, 
    SQUARE = 412, TAKE = 413, TAN = 414, TARGET_RECOVERY_TIME = 415, TB = 416, 
    TEXTIMAGE_ON = 417, THROW = 418, TIES = 419, TIME = 420, TINYINT = 421, 
    TORN_PAGE_DETECTION = 422, TRANSFORM_NOISE_WORDS = 423, TRUSTWORTHY = 424, 
    TRY = 425, TWO_DIGIT_YEAR_CUTOFF = 426, TYPE = 427, TYPE_WARNING = 428, 
    UNBOUNDED = 429, UNCOMMITTED = 430, UNKNOWN = 431, UNLIMITED = 432, 
    USING = 433, VAR = 434, VARP = 435, VIEWS = 436, VIEW_METADATA = 437, 
    WORK = 438, XML = 439, XMLNAMESPACES = 440, ZONE = 441, DOLLAR_ACTION = 442, 
    SPACE = 443, COMMENT = 444, LINE_COMMENT = 445, DOUBLE_QUOTE_ID = 446, 
    SQUARE_BRACKET_ID = 447, LOCAL_ID = 448, DECIMAL = 449, ID = 450, STRING = 451, 
    BINARY = 452, FLOAT = 453, REAL = 454, EQUAL = 455, GREATER = 456, LESS = 457, 
    EXCLAMATION = 458, PLUS_ASSIGN = 459, MINUS_ASSIGN = 460, MULT_ASSIGN = 461, 
    DIV_ASSIGN = 462, MOD_ASSIGN = 463, AND_ASSIGN = 464, XOR_ASSIGN = 465, 
    OR_ASSIGN = 466, DOT = 467, UNDERLINE = 468, AT_SIGN = 469, SHARP = 470, 
    DOLLAR = 471, LR_BRACKET = 472, RR_BRACKET = 473, COMMA = 474, SEMI = 475, 
    COLON = 476, STAR = 477, DIVIDE = 478, MODULE = 479, PLUS = 480, MINUS = 481, 
    BIT_NOT = 482, BIT_OR = 483, BIT_AND = 484, BIT_XOR = 485
  };

  enum {
    RuleTsql_file = 0, RuleBatch = 1, RuleSql_clauses = 2, RuleSql_clause = 3, 
    RuleDml_clause = 4, RuleDdl_clause = 5, RuleCfl_statement = 6, RuleCfl_clause = 7, 
    RuleBlock_statement = 8, RuleBreak_statement = 9, RuleContinue_statement = 10, 
    RuleGoto_statement = 11, RuleIf_statement = 12, RuleIf_block = 13, RuleReturn_statement = 14, 
    RuleThrow_statement = 15, RuleTry_catch_statement = 16, RuleWaitfor_statement = 17, 
    RuleWhile_statement = 18, RulePrint_statement = 19, RuleRaiseerror_statement = 20, 
    RuleAnother_statement = 21, RuleDelete_statement = 22, RuleDelete_statement_from = 23, 
    RuleInsert_statement = 24, RuleInsert_statement_value = 25, RuleSelect_statement = 26, 
    RuleUpdate_statement = 27, RuleWhere_clause_dml = 28, RuleOutput_clause = 29, 
    RuleOutput_dml_list_elem = 30, RuleOutput_column_name = 31, RuleCreate_database = 32, 
    RuleCreate_index = 33, RuleCreate_statistics = 34, RuleCreate_table = 35, 
    RuleCreate_schema = 36, RuleCreate_synonym = 37, RuleCreate_view = 38, 
    RuleView_attribute = 39, RuleAlter_table = 40, RuleAlter_database = 41, 
    RuleDatabase_optionspec = 42, RuleAuto_option = 43, RuleChange_tracking_option = 44, 
    RuleChange_tracking_option_list = 45, RuleContainment_option = 46, RuleCursor_option = 47, 
    RuleDate_correlation_optimization_option = 48, RuleDb_encryption_option = 49, 
    RuleDb_state_option = 50, RuleDb_update_option = 51, RuleDb_user_access_option = 52, 
    RuleDelayed_durability_option = 53, RuleExternal_access_option = 54, 
    RuleHadr_options = 55, RuleMixed_page_allocation_option = 56, RuleParameterization_option = 57, 
    RuleRecovery_option = 58, RuleService_broker_option = 59, RuleSnapshot_option = 60, 
    RuleSql_option = 61, RuleTarget_recovery_time_option = 62, RuleTermination = 63, 
    RuleDrop_index = 64, RuleDrop_procedure = 65, RuleDrop_statistics = 66, 
    RuleDrop_table = 67, RuleDrop_database = 68, RuleDrop_synonym = 69, 
    RuleDrop_view = 70, RuleDrop_schema = 71, RuleCreate_type = 72, RuleDrop_type = 73, 
    RuleRowset_function_limited = 74, RuleOpenquery = 75, RuleOpendatasource = 76, 
    RuleDeclare_statement = 77, RuleCursor_statement = 78, RuleExecute_statement = 79, 
    RuleExecute_statement_arg = 80, RuleExecute_var_string = 81, RuleSecurity_statement = 82, 
    RuleGrant_permission = 83, RuleSet_statement = 84, RuleTransaction_statement = 85, 
    RuleGo_statement = 86, RuleUse_statement = 87, RuleExecute_clause = 88, 
    RuleDeclare_local = 89, RuleTable_type_definition = 90, RuleColumn_def_table_constraints = 91, 
    RuleColumn_def_table_constraint = 92, RuleColumn_definition = 93, RuleColumn_constraint = 94, 
    RuleTable_constraint = 95, RuleIndex_options = 96, RuleIndex_option = 97, 
    RuleDeclare_cursor = 98, RuleDeclare_set_cursor_common = 99, RuleFetch_cursor = 100, 
    RuleSet_special = 101, RuleConstant_LOCAL_ID = 102, RuleExpression = 103, 
    RuleXml_method_call = 104, RuleSimple_xml_method_name = 105, RuleConstant_expression = 106, 
    RuleSubquery = 107, RuleWith_expression = 108, RuleCommon_table_expression = 109, 
    RuleUpdate_elem = 110, RuleSearch_condition_list = 111, RuleSearch_condition = 112, 
    RulePredicate = 113, RuleQuery_expression = 114, RuleUnion_op = 115, 
    RuleCross_apply_expression = 116, RuleQuery_specification = 117, RuleGroup_by_grouping_sets = 118, 
    RuleGrouping_set = 119, RuleTop_clause = 120, RuleTop_clause_dm = 121, 
    RuleOrder_by_clause = 122, RuleFetch_expression = 123, RuleFor_clause = 124, 
    RuleXml_common_directives = 125, RuleOrder_by_expression = 126, RuleGroup_by_item = 127, 
    RuleOption_clause = 128, RuleOption = 129, RuleOptimize_for_arg = 130, 
    RuleSelect_list = 131, RuleSelect_list_elem = 132, RuleTable_sources = 133, 
    RuleTable_source = 134, RuleTable_source_item = 135, RuleTablesample_clause = 136, 
    RuleSample_number = 137, RuleRepeat_seed = 138, RuleTable_alias = 139, 
    RuleChange_table = 140, RuleJoin_type = 141, RuleTable_name_with_hint = 142, 
    RuleRowset_function = 143, RuleBulk_option = 144, RuleDerived_table = 145, 
    RuleFunction_call = 146, RuleSwitch_section = 147, RuleSwitch_search_condition_section = 148, 
    RuleWith_table_hints = 149, RuleInsert_with_table_hints = 150, RuleTable_hint = 151, 
    RuleIndex_value = 152, RuleColumn_alias_list = 153, RuleColumn_alias = 154, 
    RuleA_star = 155, RuleTable_value_constructor = 156, RuleExpression_list = 157, 
    RuleValue_list = 158, RuleNext_value_for = 159, RuleNext_value_for_function = 160, 
    RuleRanking_windowed_function = 161, RuleAggregate_windowed_function = 162, 
    RuleAll_distinct = 163, RuleOver_clause = 164, RuleRow_or_range_clause = 165, 
    RuleWindow_frame_extent = 166, RuleWindow_frame_bound = 167, RuleWindow_frame_preceding = 168, 
    RuleWindow_frame_following = 169, RuleCreate_database_option = 170, 
    RuleDatabase_filestream_option = 171, RuleDatabase_file_spec = 172, 
    RuleFile_group = 173, RuleFile_spec = 174, RuleFull_table_name = 175, 
    RuleTable_name = 176, RuleSimple_name = 177, RuleFunc_proc_name = 178, 
    RuleDdl_object = 179, RuleFull_column_name = 180, RuleColumn_name_list = 181, 
    RuleCursor_name = 182, RuleOn_off = 183, RuleClustered = 184, RuleNull_notnull = 185, 
    RuleScalar_function_name = 186, RuleDefault_value = 187, RuleConstant = 188, 
    RuleSign = 189, RuleR_id = 190, RuleSimple_id = 191, RuleComparison_operator = 192, 
    RuleAssignment_operator = 193, RuleFile_size = 194, RuleCreate_or_alter_procedure = 195, 
    RuleCreate_or_alter_function = 196, RuleFunc_body_returns_select = 197, 
    RuleFunc_body_returns_table = 198, RuleFunc_body_returns_scalar = 199, 
    RuleProcedure_param = 200, RuleProcedure_option = 201, RuleFunction_option = 202, 
    RulePercentile_cont = 203, RuleString_agg = 204, RuleData_type = 205
  };

  explicit tsqlParser(antlr4::TokenStream *input);
  ~tsqlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Tsql_fileContext;
  class BatchContext;
  class Sql_clausesContext;
  class Sql_clauseContext;
  class Dml_clauseContext;
  class Ddl_clauseContext;
  class Cfl_statementContext;
  class Cfl_clauseContext;
  class Block_statementContext;
  class Break_statementContext;
  class Continue_statementContext;
  class Goto_statementContext;
  class If_statementContext;
  class If_blockContext;
  class Return_statementContext;
  class Throw_statementContext;
  class Try_catch_statementContext;
  class Waitfor_statementContext;
  class While_statementContext;
  class Print_statementContext;
  class Raiseerror_statementContext;
  class Another_statementContext;
  class Delete_statementContext;
  class Delete_statement_fromContext;
  class Insert_statementContext;
  class Insert_statement_valueContext;
  class Select_statementContext;
  class Update_statementContext;
  class Where_clause_dmlContext;
  class Output_clauseContext;
  class Output_dml_list_elemContext;
  class Output_column_nameContext;
  class Create_databaseContext;
  class Create_indexContext;
  class Create_statisticsContext;
  class Create_tableContext;
  class Create_schemaContext;
  class Create_synonymContext;
  class Create_viewContext;
  class View_attributeContext;
  class Alter_tableContext;
  class Alter_databaseContext;
  class Database_optionspecContext;
  class Auto_optionContext;
  class Change_tracking_optionContext;
  class Change_tracking_option_listContext;
  class Containment_optionContext;
  class Cursor_optionContext;
  class Date_correlation_optimization_optionContext;
  class Db_encryption_optionContext;
  class Db_state_optionContext;
  class Db_update_optionContext;
  class Db_user_access_optionContext;
  class Delayed_durability_optionContext;
  class External_access_optionContext;
  class Hadr_optionsContext;
  class Mixed_page_allocation_optionContext;
  class Parameterization_optionContext;
  class Recovery_optionContext;
  class Service_broker_optionContext;
  class Snapshot_optionContext;
  class Sql_optionContext;
  class Target_recovery_time_optionContext;
  class TerminationContext;
  class Drop_indexContext;
  class Drop_procedureContext;
  class Drop_statisticsContext;
  class Drop_tableContext;
  class Drop_databaseContext;
  class Drop_synonymContext;
  class Drop_viewContext;
  class Drop_schemaContext;
  class Create_typeContext;
  class Drop_typeContext;
  class Rowset_function_limitedContext;
  class OpenqueryContext;
  class OpendatasourceContext;
  class Declare_statementContext;
  class Cursor_statementContext;
  class Execute_statementContext;
  class Execute_statement_argContext;
  class Execute_var_stringContext;
  class Security_statementContext;
  class Grant_permissionContext;
  class Set_statementContext;
  class Transaction_statementContext;
  class Go_statementContext;
  class Use_statementContext;
  class Execute_clauseContext;
  class Declare_localContext;
  class Table_type_definitionContext;
  class Column_def_table_constraintsContext;
  class Column_def_table_constraintContext;
  class Column_definitionContext;
  class Column_constraintContext;
  class Table_constraintContext;
  class Index_optionsContext;
  class Index_optionContext;
  class Declare_cursorContext;
  class Declare_set_cursor_commonContext;
  class Fetch_cursorContext;
  class Set_specialContext;
  class Constant_LOCAL_IDContext;
  class ExpressionContext;
  class Xml_method_callContext;
  class Simple_xml_method_nameContext;
  class Constant_expressionContext;
  class SubqueryContext;
  class With_expressionContext;
  class Common_table_expressionContext;
  class Update_elemContext;
  class Search_condition_listContext;
  class Search_conditionContext;
  class PredicateContext;
  class Query_expressionContext;
  class Union_opContext;
  class Cross_apply_expressionContext;
  class Query_specificationContext;
  class Group_by_grouping_setsContext;
  class Grouping_setContext;
  class Top_clauseContext;
  class Top_clause_dmContext;
  class Order_by_clauseContext;
  class Fetch_expressionContext;
  class For_clauseContext;
  class Xml_common_directivesContext;
  class Order_by_expressionContext;
  class Group_by_itemContext;
  class Option_clauseContext;
  class OptionContext;
  class Optimize_for_argContext;
  class Select_listContext;
  class Select_list_elemContext;
  class Table_sourcesContext;
  class Table_sourceContext;
  class Table_source_itemContext;
  class Tablesample_clauseContext;
  class Sample_numberContext;
  class Repeat_seedContext;
  class Table_aliasContext;
  class Change_tableContext;
  class Join_typeContext;
  class Table_name_with_hintContext;
  class Rowset_functionContext;
  class Bulk_optionContext;
  class Derived_tableContext;
  class Function_callContext;
  class Switch_sectionContext;
  class Switch_search_condition_sectionContext;
  class With_table_hintsContext;
  class Insert_with_table_hintsContext;
  class Table_hintContext;
  class Index_valueContext;
  class Column_alias_listContext;
  class Column_aliasContext;
  class A_starContext;
  class Table_value_constructorContext;
  class Expression_listContext;
  class Value_listContext;
  class Next_value_forContext;
  class Next_value_for_functionContext;
  class Ranking_windowed_functionContext;
  class Aggregate_windowed_functionContext;
  class All_distinctContext;
  class Over_clauseContext;
  class Row_or_range_clauseContext;
  class Window_frame_extentContext;
  class Window_frame_boundContext;
  class Window_frame_precedingContext;
  class Window_frame_followingContext;
  class Create_database_optionContext;
  class Database_filestream_optionContext;
  class Database_file_specContext;
  class File_groupContext;
  class File_specContext;
  class Full_table_nameContext;
  class Table_nameContext;
  class Simple_nameContext;
  class Func_proc_nameContext;
  class Ddl_objectContext;
  class Full_column_nameContext;
  class Column_name_listContext;
  class Cursor_nameContext;
  class On_offContext;
  class ClusteredContext;
  class Null_notnullContext;
  class Scalar_function_nameContext;
  class Default_valueContext;
  class ConstantContext;
  class SignContext;
  class R_idContext;
  class Simple_idContext;
  class Comparison_operatorContext;
  class Assignment_operatorContext;
  class File_sizeContext;
  class Create_or_alter_procedureContext;
  class Create_or_alter_functionContext;
  class Func_body_returns_selectContext;
  class Func_body_returns_tableContext;
  class Func_body_returns_scalarContext;
  class Procedure_paramContext;
  class Procedure_optionContext;
  class Function_optionContext;
  class Percentile_contContext;
  class String_aggContext;
  class Data_typeContext; 

  class  Tsql_fileContext : public antlr4::ParserRuleContext {
  public:
    Tsql_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<BatchContext *> batch();
    BatchContext* batch(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tsql_fileContext* tsql_file();

  class  BatchContext : public antlr4::ParserRuleContext {
  public:
    BatchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sql_clausesContext *sql_clauses();
    std::vector<Go_statementContext *> go_statement();
    Go_statementContext* go_statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BatchContext* batch();

  class  Sql_clausesContext : public antlr4::ParserRuleContext {
  public:
    Sql_clausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sql_clauseContext *> sql_clause();
    Sql_clauseContext* sql_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_clausesContext* sql_clauses();

  class  Sql_clauseContext : public antlr4::ParserRuleContext {
  public:
    Sql_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dml_clauseContext *dml_clause();
    Ddl_clauseContext *ddl_clause();
    Cfl_statementContext *cfl_statement();
    Another_statementContext *another_statement();
    Cfl_clauseContext *cfl_clause();
    Declare_statementContext *declare_statement();
    Print_statementContext *print_statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_clauseContext* sql_clause();

  class  Dml_clauseContext : public antlr4::ParserRuleContext {
  public:
    Dml_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delete_statementContext *delete_statement();
    Insert_statementContext *insert_statement();
    Select_statementContext *select_statement();
    Update_statementContext *update_statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dml_clauseContext* dml_clause();

  class  Ddl_clauseContext : public antlr4::ParserRuleContext {
  public:
    Ddl_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_databaseContext *create_database();
    Create_indexContext *create_index();
    Create_or_alter_functionContext *create_or_alter_function();
    Create_or_alter_procedureContext *create_or_alter_procedure();
    Create_statisticsContext *create_statistics();
    Create_schemaContext *create_schema();
    Create_synonymContext *create_synonym();
    Create_tableContext *create_table();
    Create_typeContext *create_type();
    Create_viewContext *create_view();
    Alter_tableContext *alter_table();
    Alter_databaseContext *alter_database();
    Drop_indexContext *drop_index();
    Drop_procedureContext *drop_procedure();
    Drop_statisticsContext *drop_statistics();
    Drop_synonymContext *drop_synonym();
    Drop_tableContext *drop_table();
    Drop_typeContext *drop_type();
    Drop_viewContext *drop_view();
    Drop_databaseContext *drop_database();
    Drop_schemaContext *drop_schema();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ddl_clauseContext* ddl_clause();

  class  Cfl_statementContext : public antlr4::ParserRuleContext {
  public:
    Cfl_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_statementContext *if_statement();
    Try_catch_statementContext *try_catch_statement();
    Waitfor_statementContext *waitfor_statement();
    While_statementContext *while_statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cfl_statementContext* cfl_statement();

  class  Cfl_clauseContext : public antlr4::ParserRuleContext {
  public:
    Cfl_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_statementContext *block_statement();
    Break_statementContext *break_statement();
    Continue_statementContext *continue_statement();
    Goto_statementContext *goto_statement();
    Return_statementContext *return_statement();
    Throw_statementContext *throw_statement();
    Raiseerror_statementContext *raiseerror_statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cfl_clauseContext* cfl_clause();

  class  Block_statementContext : public antlr4::ParserRuleContext {
  public:
    Block_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    Sql_clausesContext *sql_clauses();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_statementContext* block_statement();

  class  Break_statementContext : public antlr4::ParserRuleContext {
  public:
    Break_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_statementContext* break_statement();

  class  Continue_statementContext : public antlr4::ParserRuleContext {
  public:
    Continue_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Continue_statementContext* continue_statement();

  class  Goto_statementContext : public antlr4::ParserRuleContext {
  public:
    Goto_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *COLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Goto_statementContext* goto_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    Search_conditionContext *search_condition();
    If_blockContext *if_block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  If_blockContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Sql_clauseContext *if_expr = nullptr;
    tsqlParser::Sql_clauseContext *else_expr = nullptr;
    tsqlParser::Block_statementContext *if_block_expr = nullptr;
    tsqlParser::Block_statementContext *else_block_expr = nullptr;
    If_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sql_clauseContext *> sql_clause();
    Sql_clauseContext* sql_clause(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Block_statementContext *> block_statement();
    Block_statementContext* block_statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_blockContext* if_block();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  Throw_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *error_number = nullptr;
    antlr4::Token *message = nullptr;
    antlr4::Token *state = nullptr;
    Throw_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Throw_statementContext* throw_statement();

  class  Try_catch_statementContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Sql_clausesContext *try_clauses = nullptr;
    tsqlParser::Sql_clausesContext *catch_clauses = nullptr;
    Try_catch_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> BEGIN();
    antlr4::tree::TerminalNode* BEGIN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TRY();
    antlr4::tree::TerminalNode* TRY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> END();
    antlr4::tree::TerminalNode* END(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CATCH();
    antlr4::tree::TerminalNode* CATCH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<Sql_clausesContext *> sql_clauses();
    Sql_clausesContext* sql_clauses(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Try_catch_statementContext* try_catch_statement();

  class  Waitfor_statementContext : public antlr4::ParserRuleContext {
  public:
    Waitfor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAITFOR();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DELAY();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Waitfor_statementContext* waitfor_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    Search_conditionContext *search_condition();
    Sql_clauseContext *sql_clause();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_statementContext* while_statement();

  class  Print_statementContext : public antlr4::ParserRuleContext {
  public:
    Print_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Print_statementContext* print_statement();

  class  Raiseerror_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *msg = nullptr;
    tsqlParser::Constant_LOCAL_IDContext *severity = nullptr;
    tsqlParser::Constant_LOCAL_IDContext *state = nullptr;
    Raiseerror_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAISERROR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Constant_LOCAL_IDContext *> constant_LOCAL_ID();
    Constant_LOCAL_IDContext* constant_LOCAL_ID(size_t i);
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Raiseerror_statementContext* raiseerror_statement();

  class  Another_statementContext : public antlr4::ParserRuleContext {
  public:
    Another_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cursor_statementContext *cursor_statement();
    Execute_statementContext *execute_statement();
    Security_statementContext *security_statement();
    Set_statementContext *set_statement();
    Transaction_statementContext *transaction_statement();
    Use_statementContext *use_statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Another_statementContext* another_statement();

  class  Delete_statementContext : public antlr4::ParserRuleContext {
  public:
    Delete_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    Delete_statement_fromContext *delete_statement_from();
    With_expressionContext *with_expression();
    Top_clause_dmContext *top_clause_dm();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    Insert_with_table_hintsContext *insert_with_table_hints();
    Output_clauseContext *output_clause();
    Table_sourcesContext *table_sources();
    Where_clause_dmlContext *where_clause_dml();
    For_clauseContext *for_clause();
    Option_clauseContext *option_clause();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_statementContext* delete_statement();

  class  Delete_statement_fromContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *table_var = nullptr;
    Delete_statement_fromContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    R_idContext *r_id();
    With_table_hintsContext *with_table_hints();
    Ddl_objectContext *ddl_object();
    Rowset_function_limitedContext *rowset_function_limited();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_statement_fromContext* delete_statement_from();

  class  Insert_statementContext : public antlr4::ParserRuleContext {
  public:
    Insert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    Insert_statement_valueContext *insert_statement_value();
    Ddl_objectContext *ddl_object();
    Rowset_function_limitedContext *rowset_function_limited();
    With_expressionContext *with_expression();
    Top_clause_dmContext *top_clause_dm();
    antlr4::tree::TerminalNode *INTO();
    Insert_with_table_hintsContext *insert_with_table_hints();
    antlr4::tree::TerminalNode *FROM();
    Derived_tableContext *derived_table();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Output_clauseContext *output_clause();
    For_clauseContext *for_clause();
    Option_clauseContext *option_clause();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_statementContext* insert_statement();

  class  Insert_statement_valueContext : public antlr4::ParserRuleContext {
  public:
    Insert_statement_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_value_constructorContext *table_value_constructor();
    Derived_tableContext *derived_table();
    Execute_statementContext *execute_statement();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *VALUES();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_statement_valueContext* insert_statement_value();

  class  Select_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Query_expressionContext *query_expression();
    With_expressionContext *with_expression();
    Order_by_clauseContext *order_by_clause();
    For_clauseContext *for_clause();
    Option_clauseContext *option_clause();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_statementContext* select_statement();

  class  Update_statementContext : public antlr4::ParserRuleContext {
  public:
    Update_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    std::vector<Update_elemContext *> update_elem();
    Update_elemContext* update_elem(size_t i);
    Ddl_objectContext *ddl_object();
    Rowset_function_limitedContext *rowset_function_limited();
    With_expressionContext *with_expression();
    Top_clause_dmContext *top_clause_dm();
    With_table_hintsContext *with_table_hints();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Output_clauseContext *output_clause();
    antlr4::tree::TerminalNode *FROM();
    Table_sourcesContext *table_sources();
    Where_clause_dmlContext *where_clause_dml();
    For_clauseContext *for_clause();
    Option_clauseContext *option_clause();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statementContext* update_statement();

  class  Where_clause_dmlContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *cursor_var = nullptr;
    Where_clause_dmlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Search_condition_listContext *search_condition_list();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *OF();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Where_clause_dmlContext* where_clause_dml();

  class  Output_clauseContext : public antlr4::ParserRuleContext {
  public:
    Output_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    std::vector<Output_dml_list_elemContext *> output_dml_list_elem();
    Output_dml_list_elemContext* output_dml_list_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_clauseContext* output_clause();

  class  Output_dml_list_elemContext : public antlr4::ParserRuleContext {
  public:
    Output_dml_list_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_column_nameContext *output_column_name();
    ExpressionContext *expression();
    Column_aliasContext *column_alias();
    antlr4::tree::TerminalNode *AS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_dml_list_elemContext* output_dml_list_elem();

  class  Output_column_nameContext : public antlr4::ParserRuleContext {
  public:
    Output_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *DELETED();
    antlr4::tree::TerminalNode *INSERTED();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *STAR();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *DOLLAR_ACTION();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_column_nameContext* output_column_name();

  class  Create_databaseContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *database = nullptr;
    tsqlParser::R_idContext *collation_name = nullptr;
    Create_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *DATABASE();
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    antlr4::tree::TerminalNode *CONTAINMENT();
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<Database_file_specContext *> database_file_spec();
    Database_file_specContext* database_file_spec(size_t i);
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Create_database_optionContext *> create_database_option();
    Create_database_optionContext* create_database_option(size_t i);
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PRIMARY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_databaseContext* create_database();

  class  Create_indexContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Search_conditionContext *where = nullptr;
    Create_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    Table_name_with_hintContext *table_name_with_hint();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Column_name_listContext *> column_name_list();
    Column_name_listContext* column_name_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *UNIQUE();
    ClusteredContext *clustered();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *WHERE();
    Index_optionsContext *index_options();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> ASC();
    antlr4::tree::TerminalNode* ASC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESC();
    antlr4::tree::TerminalNode* DESC(size_t i);
    Search_conditionContext *search_condition();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_indexContext* create_index();

  class  Create_statisticsContext : public antlr4::ParserRuleContext {
  public:
    Create_statisticsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *STATISTICS();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *ON();
    Table_name_with_hintContext *table_name_with_hint();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *FULLSCAN();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *STATS_STREAM();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *ROWS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NORECOMPUTE();
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_statisticsContext* create_statistics();

  class  Create_tableContext : public antlr4::ParserRuleContext {
  public:
    Create_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_def_table_constraintsContext *column_def_table_constraints();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ON();
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    antlr4::tree::TerminalNode *TEXTIMAGE_ON();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_tableContext* create_table();

  class  Create_schemaContext : public antlr4::ParserRuleContext {
  public:
    Create_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SCHEMA();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_schemaContext* create_schema();

  class  Create_synonymContext : public antlr4::ParserRuleContext {
  public:
    Create_synonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SYNONYM();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *FOR();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_synonymContext* create_synonym();

  class  Create_viewContext : public antlr4::ParserRuleContext {
  public:
    Create_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *AS();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<View_attributeContext *> view_attribute();
    View_attributeContext* view_attribute(size_t i);
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_viewContext* create_view();

  class  View_attributeContext : public antlr4::ParserRuleContext {
  public:
    View_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *SCHEMABINDING();
    antlr4::tree::TerminalNode *VIEW_METADATA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_attributeContext* view_attribute();

  class  Alter_tableContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *constraint = nullptr;
    tsqlParser::Column_name_listContext *fk = nullptr;
    tsqlParser::Column_name_listContext *pk = nullptr;
    Alter_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TABLE();
    antlr4::tree::TerminalNode* TABLE(size_t i);
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    antlr4::tree::TerminalNode *SET();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *LOCK_ESCALATION();
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *ADD();
    Column_def_table_constraintContext *column_def_table_constraint();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *COLUMN();
    Column_def_table_constraintsContext *column_def_table_constraints();
    antlr4::tree::TerminalNode *AUTO();
    antlr4::tree::TerminalNode *DISABLE();
    R_idContext *r_id();
    std::vector<Column_name_listContext *> column_name_list();
    Column_name_listContext* column_name_list(size_t i);
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tableContext* alter_table();

  class  Alter_databaseContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *database = nullptr;
    tsqlParser::R_idContext *new_name = nullptr;
    tsqlParser::R_idContext *collation = nullptr;
    Alter_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *SET();
    Database_optionspecContext *database_optionspec();
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *WITH();
    TerminationContext *termination();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_databaseContext* alter_database();

  class  Database_optionspecContext : public antlr4::ParserRuleContext {
  public:
    Database_optionspecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Auto_optionContext *auto_option();
    Change_tracking_optionContext *change_tracking_option();
    Containment_optionContext *containment_option();
    Cursor_optionContext *cursor_option();
    Date_correlation_optimization_optionContext *date_correlation_optimization_option();
    Db_encryption_optionContext *db_encryption_option();
    Db_state_optionContext *db_state_option();
    Db_update_optionContext *db_update_option();
    Db_user_access_optionContext *db_user_access_option();
    Delayed_durability_optionContext *delayed_durability_option();
    External_access_optionContext *external_access_option();
    antlr4::tree::TerminalNode *FILESTREAM();
    Database_filestream_optionContext *database_filestream_option();
    Hadr_optionsContext *hadr_options();
    Mixed_page_allocation_optionContext *mixed_page_allocation_option();
    Parameterization_optionContext *parameterization_option();
    Recovery_optionContext *recovery_option();
    Service_broker_optionContext *service_broker_option();
    Snapshot_optionContext *snapshot_option();
    Sql_optionContext *sql_option();
    Target_recovery_time_optionContext *target_recovery_time_option();
    TerminationContext *termination();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_optionspecContext* database_optionspec();

  class  Auto_optionContext : public antlr4::ParserRuleContext {
  public:
    Auto_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTO_CLOSE();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *AUTO_CREATE_STATISTICS();
    antlr4::tree::TerminalNode *OFF();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *AUTO_SHRINK();
    antlr4::tree::TerminalNode *AUTO_UPDATE_STATISTICS();
    antlr4::tree::TerminalNode *AUTO_UPDATE_STATISTICS_ASYNC();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Auto_optionContext* auto_option();

  class  Change_tracking_optionContext : public antlr4::ParserRuleContext {
  public:
    Change_tracking_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE_TRACKING();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *ON();
    std::vector<Change_tracking_option_listContext *> change_tracking_option_list();
    Change_tracking_option_listContext* change_tracking_option_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Change_tracking_optionContext* change_tracking_option();

  class  Change_tracking_option_listContext : public antlr4::ParserRuleContext {
  public:
    Change_tracking_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTO_CLEANUP();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *CHANGE_RETENTION();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTES();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Change_tracking_option_listContext* change_tracking_option_list();

  class  Containment_optionContext : public antlr4::ParserRuleContext {
  public:
    Containment_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTAINMENT();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *PARTIAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Containment_optionContext* containment_option();

  class  Cursor_optionContext : public antlr4::ParserRuleContext {
  public:
    Cursor_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURSOR_CLOSE_ON_COMMIT();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *CURSOR_DEFAULT();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *GLOBAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_optionContext* cursor_option();

  class  Date_correlation_optimization_optionContext : public antlr4::ParserRuleContext {
  public:
    Date_correlation_optimization_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE_CORRELATION_OPTIMIZATION();
    On_offContext *on_off();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Date_correlation_optimization_optionContext* date_correlation_optimization_option();

  class  Db_encryption_optionContext : public antlr4::ParserRuleContext {
  public:
    Db_encryption_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION();
    On_offContext *on_off();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_encryption_optionContext* db_encryption_option();

  class  Db_state_optionContext : public antlr4::ParserRuleContext {
  public:
    Db_state_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *EMERGENCY();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_state_optionContext* db_state_option();

  class  Db_update_optionContext : public antlr4::ParserRuleContext {
  public:
    Db_update_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ_ONLY();
    antlr4::tree::TerminalNode *READ_WRITE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_update_optionContext* db_update_option();

  class  Db_user_access_optionContext : public antlr4::ParserRuleContext {
  public:
    Db_user_access_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SINGLE_USER();
    antlr4::tree::TerminalNode *RESTRICTED_USER();
    antlr4::tree::TerminalNode *MULTI_USER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_user_access_optionContext* db_user_access_option();

  class  Delayed_durability_optionContext : public antlr4::ParserRuleContext {
  public:
    Delayed_durability_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELAYED_DURABILITY();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DISABLED();
    antlr4::tree::TerminalNode *ALLOWED();
    antlr4::tree::TerminalNode *FORCED();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_durability_optionContext* delayed_durability_option();

  class  External_access_optionContext : public antlr4::ParserRuleContext {
  public:
    External_access_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DB_CHAINING();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *TRUSTWORTHY();
    antlr4::tree::TerminalNode *DEFAULT_LANGUAGE();
    antlr4::tree::TerminalNode *EQUAL();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DEFAULT_FULLTEXT_LANGUAGE();
    antlr4::tree::TerminalNode *NESTED_TRIGGERS();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TRANSFORM_NOISE_WORDS();
    antlr4::tree::TerminalNode *TWO_DIGIT_YEAR_CUTOFF();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  External_access_optionContext* external_access_option();

  class  Hadr_optionsContext : public antlr4::ParserRuleContext {
  public:
    Hadr_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *HADR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hadr_optionsContext* hadr_options();

  class  Mixed_page_allocation_optionContext : public antlr4::ParserRuleContext {
  public:
    Mixed_page_allocation_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIXED_PAGE_ALLOCATION();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *ON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mixed_page_allocation_optionContext* mixed_page_allocation_option();

  class  Parameterization_optionContext : public antlr4::ParserRuleContext {
  public:
    Parameterization_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETERIZATION();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *FORCED();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameterization_optionContext* parameterization_option();

  class  Recovery_optionContext : public antlr4::ParserRuleContext {
  public:
    Recovery_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECOVERY();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *BULK_LOGGED();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *TORN_PAGE_DETECTION();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *PAGE_VERIFY();
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *NONE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Recovery_optionContext* recovery_option();

  class  Service_broker_optionContext : public antlr4::ParserRuleContext {
  public:
    Service_broker_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENABLE_BROKER();
    antlr4::tree::TerminalNode *DISABLE_BROKER();
    antlr4::tree::TerminalNode *NEW_BROKER();
    antlr4::tree::TerminalNode *ERROR_BROKER_CONVERSATIONS();
    antlr4::tree::TerminalNode *HONOR_BROKER_PRIORITY();
    On_offContext *on_off();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Service_broker_optionContext* service_broker_option();

  class  Snapshot_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *MEMORY_OPTIMIZED_ELEVATE_TO_SNAPSHOT = nullptr;
    Snapshot_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALLOW_SNAPSHOT_ISOLATION();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *READ_COMMITTED_SNAPSHOT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Snapshot_optionContext* snapshot_option();

  class  Sql_optionContext : public antlr4::ParserRuleContext {
  public:
    Sql_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANSI_NULL_DEFAULT();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *ANSI_NULLS();
    antlr4::tree::TerminalNode *ANSI_PADDING();
    antlr4::tree::TerminalNode *ANSI_WARNINGS();
    antlr4::tree::TerminalNode *ARITHABORT();
    antlr4::tree::TerminalNode *COMPATIBILITY_LEVEL();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *CONCAT_NULL_YIELDS_NULL();
    antlr4::tree::TerminalNode *NUMERIC_ROUNDABORT();
    antlr4::tree::TerminalNode *QUOTED_IDENTIFIER();
    antlr4::tree::TerminalNode *RECURSIVE_TRIGGERS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_optionContext* sql_option();

  class  Target_recovery_time_optionContext : public antlr4::ParserRuleContext {
  public:
    Target_recovery_time_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARGET_RECOVERY_TIME();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *MINUTES();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_recovery_time_optionContext* target_recovery_time_option();

  class  TerminationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *seconds = nullptr;
    TerminationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *NO_WAIT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TerminationContext* termination();

  class  Drop_indexContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *name = nullptr;
    Drop_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INDEX();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_indexContext* drop_index();

  class  Drop_procedureContext : public antlr4::ParserRuleContext {
  public:
    Drop_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PROCEDURE();
    Func_proc_nameContext *func_proc_name();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_procedureContext* drop_procedure();

  class  Drop_statisticsContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *name = nullptr;
    Drop_statisticsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *SEMI();
    R_idContext *r_id();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *DOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_statisticsContext* drop_statistics();

  class  Drop_tableContext : public antlr4::ParserRuleContext {
  public:
    Drop_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_tableContext* drop_table();

  class  Drop_databaseContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *database = nullptr;
    Drop_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_databaseContext* drop_database();

  class  Drop_synonymContext : public antlr4::ParserRuleContext {
  public:
    Drop_synonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SYNONYM();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_synonymContext* drop_synonym();

  class  Drop_viewContext : public antlr4::ParserRuleContext {
  public:
    Drop_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    std::vector<Simple_nameContext *> simple_name();
    Simple_nameContext* simple_name(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_viewContext* drop_view();

  class  Drop_schemaContext : public antlr4::ParserRuleContext {
  public:
    Drop_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SCHEMA();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_schemaContext* drop_schema();

  class  Create_typeContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Simple_nameContext *name = nullptr;
    Create_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *FROM();
    Data_typeContext *data_type();
    Default_valueContext *default_value();
    Simple_nameContext *simple_name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_typeContext* create_type();

  class  Drop_typeContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Simple_nameContext *name = nullptr;
    Drop_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TYPE();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_typeContext* drop_type();

  class  Rowset_function_limitedContext : public antlr4::ParserRuleContext {
  public:
    Rowset_function_limitedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpenqueryContext *openquery();
    OpendatasourceContext *opendatasource();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rowset_function_limitedContext* rowset_function_limited();

  class  OpenqueryContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *linked_server = nullptr;
    antlr4::Token *query = nullptr;
    OpenqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENQUERY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpenqueryContext* openquery();

  class  OpendatasourceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *provider = nullptr;
    antlr4::Token *init = nullptr;
    tsqlParser::R_idContext *database = nullptr;
    tsqlParser::R_idContext *scheme = nullptr;
    tsqlParser::R_idContext *table = nullptr;
    OpendatasourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENDATASOURCE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpendatasourceContext* opendatasource();

  class  Declare_statementContext : public antlr4::ParserRuleContext {
  public:
    Declare_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Table_type_definitionContext *table_type_definition();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Declare_localContext *> declare_local();
    Declare_localContext* declare_local(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_statementContext* declare_statement();

  class  Cursor_statementContext : public antlr4::ParserRuleContext {
  public:
    Cursor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *DEALLOCATE();
    Declare_cursorContext *declare_cursor();
    Fetch_cursorContext *fetch_cursor();
    antlr4::tree::TerminalNode *OPEN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_statementContext* cursor_statement();

  class  Execute_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *return_status = nullptr;
    Execute_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    Func_proc_nameContext *func_proc_name();
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<Execute_statement_argContext *> execute_statement_arg();
    Execute_statement_argContext* execute_statement_arg(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LOCAL_ID();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Execute_var_stringContext *> execute_var_string();
    Execute_var_stringContext* execute_var_string(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LOGIN();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *AS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_statementContext* execute_statement();

  class  Execute_statement_argContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *parameter = nullptr;
    Execute_statement_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Constant_LOCAL_IDContext *constant_LOCAL_ID();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *OUT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_statement_argContext* execute_statement_arg();

  class  Execute_var_stringContext : public antlr4::ParserRuleContext {
  public:
    Execute_var_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_var_stringContext* execute_var_string();

  class  Security_statementContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Table_nameContext *on_id = nullptr;
    tsqlParser::R_idContext *to_principal = nullptr;
    tsqlParser::R_idContext *as_principal = nullptr;
    Security_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Execute_clauseContext *execute_clause();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ALL();
    Grant_permissionContext *grant_permission();
    antlr4::tree::TerminalNode *ON();
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *AS();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *REVERT();
    antlr4::tree::TerminalNode *COOKIE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Security_statementContext* security_statement();

  class  Grant_permissionContext : public antlr4::ParserRuleContext {
  public:
    Grant_permissionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *VIEW();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *TAKE();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *SHOWPLAN();
    antlr4::tree::TerminalNode *IMPERSONATE();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *ANY();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_permissionContext* grant_permission();

  class  Set_statementContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *member_name = nullptr;
    Set_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *SEMI();
    R_idContext *r_id();
    Assignment_operatorContext *assignment_operator();
    antlr4::tree::TerminalNode *CURSOR();
    Declare_set_cursor_commonContext *declare_set_cursor_common();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *OF();
    Column_name_listContext *column_name_list();
    Set_specialContext *set_special();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_statementContext* set_statement();

  class  Transaction_statementContext : public antlr4::ParserRuleContext {
  public:
    Transaction_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *TRAN();
    antlr4::tree::TerminalNode *TRANSACTION();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *DELAYED_DURABILITY();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *SAVE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transaction_statementContext* transaction_statement();

  class  Go_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *count = nullptr;
    Go_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Go_statementContext* go_statement();

  class  Use_statementContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *database = nullptr;
    Use_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_statementContext* use_statement();

  class  Execute_clauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *clause = nullptr;
    Execute_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_clauseContext* execute_clause();

  class  Declare_localContext : public antlr4::ParserRuleContext {
  public:
    Declare_localContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_localContext* declare_local();

  class  Table_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Table_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_def_table_constraintsContext *column_def_table_constraints();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_type_definitionContext* table_type_definition();

  class  Column_def_table_constraintsContext : public antlr4::ParserRuleContext {
  public:
    Column_def_table_constraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_def_table_constraintContext *> column_def_table_constraint();
    Column_def_table_constraintContext* column_def_table_constraint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_def_table_constraintsContext* column_def_table_constraints();

  class  Column_def_table_constraintContext : public antlr4::ParserRuleContext {
  public:
    Column_def_table_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_definitionContext *column_definition();
    Table_constraintContext *table_constraint();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_def_table_constraintContext* column_def_table_constraint();

  class  Column_definitionContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *constraint = nullptr;
    antlr4::Token *seed = nullptr;
    antlr4::Token *increment = nullptr;
    Column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *AS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLLATE();
    Null_notnullContext *null_notnull();
    antlr4::tree::TerminalNode *DEFAULT();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *ROWGUIDCOL();
    std::vector<Column_constraintContext *> column_constraint();
    Column_constraintContext* column_constraint(size_t i);
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *REPLICATION();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_definitionContext* column_definition();

  class  Column_constraintContext : public antlr4::ParserRuleContext {
  public:
    Column_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONSTRAINT();
    R_idContext *r_id();
    Null_notnullContext *null_notnull();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UNIQUE();
    ClusteredContext *clustered();
    Index_optionsContext *index_options();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *REPLICATION();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_constraintContext* column_constraint();

  class  Table_constraintContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Column_name_listContext *fk = nullptr;
    tsqlParser::Column_name_listContext *pk = nullptr;
    Table_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *REFERENCES();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *CHECK();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<Column_name_listContext *> column_name_list();
    Column_name_listContext* column_name_list(size_t i);
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *UNIQUE();
    ClusteredContext *clustered();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Index_optionsContext *index_options();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *REPLICATION();
    std::vector<antlr4::tree::TerminalNode *> ASC();
    antlr4::tree::TerminalNode* ASC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESC();
    antlr4::tree::TerminalNode* DESC(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_constraintContext* table_constraint();

  class  Index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Index_optionContext *> index_option();
    Index_optionContext* index_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_optionsContext* index_options();

  class  Index_optionContext : public antlr4::ParserRuleContext {
  public:
    Index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_idContext *> simple_id();
    Simple_idContext* simple_id(size_t i);
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_optionContext* index_option();

  class  Declare_cursorContext : public antlr4::ParserRuleContext {
  public:
    Declare_cursorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *CURSOR();
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *SEMI();
    Declare_set_cursor_commonContext *declare_set_cursor_common();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *OF();
    Column_name_listContext *column_name_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_cursorContext* declare_cursor();

  class  Declare_set_cursor_commonContext : public antlr4::ParserRuleContext {
  public:
    Declare_set_cursor_commonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *TYPE_WARNING();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *FORWARD_ONLY();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *KEYSET();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *FAST_FORWARD();
    antlr4::tree::TerminalNode *READ_ONLY();
    antlr4::tree::TerminalNode *SCROLL_LOCKS();
    antlr4::tree::TerminalNode *OPTIMISTIC();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_set_cursor_commonContext* declare_set_cursor_common();

  class  Fetch_cursorContext : public antlr4::ParserRuleContext {
  public:
    Fetch_cursorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *INTO();
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ABSOLUTE();
    antlr4::tree::TerminalNode *RELATIVE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_cursorContext* fetch_cursor();

  class  Set_specialContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *key = nullptr;
    tsqlParser::R_idContext *value = nullptr;
    antlr4::Token *set_type = nullptr;
    Set_specialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    Constant_LOCAL_IDContext *constant_LOCAL_ID();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *IDENTITY_INSERT();
    antlr4::tree::TerminalNode *ANSI_NULLS();
    antlr4::tree::TerminalNode *QUOTED_IDENTIFIER();
    antlr4::tree::TerminalNode *ANSI_PADDING();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *IO();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_specialContext* set_special();

  class  Constant_LOCAL_IDContext : public antlr4::ParserRuleContext {
  public:
    Constant_LOCAL_IDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_LOCAL_IDContext* constant_LOCAL_ID();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Binary_operator_expressionContext : public ExpressionContext {
  public:
    Binary_operator_expressionContext(ExpressionContext *ctx);

    tsqlParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    tsqlParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_XOR();
    antlr4::tree::TerminalNode *BIT_OR();
    Comparison_operatorContext *comparison_operator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_operator_expressionContext : public ExpressionContext {
  public:
    Unary_operator_expressionContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *BIT_NOT();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Function_call_expressionContext : public ExpressionContext {
  public:
    Function_call_expressionContext(ExpressionContext *ctx);

    Function_callContext *function_call();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLLATE();
    R_idContext *r_id();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Conversion_expressionContext : public ExpressionContext {
  public:
    Conversion_expressionContext(ExpressionContext *ctx);

    tsqlParser::ExpressionContext *left = nullptr;
    tsqlParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *ZONE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Case_expressionContext : public ExpressionContext {
  public:
    Case_expressionContext(ExpressionContext *ctx);

    tsqlParser::ExpressionContext *caseExpr = nullptr;
    tsqlParser::ExpressionContext *elseExpr = nullptr;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<Switch_sectionContext *> switch_section();
    Switch_sectionContext* switch_section(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<Switch_search_condition_sectionContext *> switch_search_condition_section();
    Switch_search_condition_sectionContext* switch_search_condition_section(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Column_ref_expressionContext : public ExpressionContext {
  public:
    Column_ref_expressionContext(ExpressionContext *ctx);

    Full_column_nameContext *full_column_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  String_agg_expressionContext : public ExpressionContext {
  public:
    String_agg_expressionContext(ExpressionContext *ctx);

    String_aggContext *string_agg();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Percentile_cont_expressionContext : public ExpressionContext {
  public:
    Percentile_cont_expressionContext(ExpressionContext *ctx);

    Percentile_contContext *percentile_cont();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Primitive_expressionContext : public ExpressionContext {
  public:
    Primitive_expressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *LOCAL_ID();
    ConstantContext *constant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Bracket_expressionContext : public ExpressionContext {
  public:
    Bracket_expressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Subquery_expressionContext : public ExpressionContext {
  public:
    Subquery_expressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Over_clause_expressionContext : public ExpressionContext {
  public:
    Over_clause_expressionContext(ExpressionContext *ctx);

    Over_clauseContext *over_clause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Xml_method_expressionContext : public ExpressionContext {
  public:
    Xml_method_expressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DOT();
    Xml_method_callContext *xml_method_call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Xml_method_callContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *table = nullptr;
    tsqlParser::R_idContext *column = nullptr;
    Xml_method_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_xml_method_nameContext *simple_xml_method_name();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *NODES();
    antlr4::tree::TerminalNode *AS();
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_method_callContext* xml_method_call();

  class  Simple_xml_method_nameContext : public antlr4::ParserRuleContext {
  public:
    Simple_xml_method_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *EXIST();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_xml_method_nameContext* simple_xml_method_name();

  class  Constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();
    ConstantContext *constant();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_expressionContext* constant_expression();

  class  SubqueryContext : public antlr4::ParserRuleContext {
  public:
    SubqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_statementContext *select_statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubqueryContext* subquery();

  class  With_expressionContext : public antlr4::ParserRuleContext {
  public:
    With_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<Common_table_expressionContext *> common_table_expression();
    Common_table_expressionContext* common_table_expression(size_t i);
    antlr4::tree::TerminalNode *XMLNAMESPACES();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_expressionContext* with_expression();

  class  Common_table_expressionContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *expression_name = nullptr;
    Common_table_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    Select_statementContext *select_statement();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    R_idContext *r_id();
    Column_name_listContext *column_name_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Common_table_expressionContext* common_table_expression();

  class  Update_elemContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    tsqlParser::R_idContext *udt_column_name = nullptr;
    tsqlParser::R_idContext *method_name = nullptr;
    Update_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Full_column_nameContext *full_column_name();
    antlr4::tree::TerminalNode *EQUAL();
    Assignment_operatorContext *assignment_operator();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_elemContext* update_elem();

  class  Search_condition_listContext : public antlr4::ParserRuleContext {
  public:
    Search_condition_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Search_condition_listContext* search_condition_list();

  class  Search_conditionContext : public antlr4::ParserRuleContext {
  public:
    Search_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Search_conditionContext() = default;
    void copyFrom(Search_conditionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Search_cond_orContext : public Search_conditionContext {
  public:
    Search_cond_orContext(Search_conditionContext *ctx);

    tsqlParser::Search_conditionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    tsqlParser::Search_conditionContext *right = nullptr;
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Search_cond_predContext : public Search_conditionContext {
  public:
    Search_cond_predContext(Search_conditionContext *ctx);

    PredicateContext *predicate();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Search_cond_andContext : public Search_conditionContext {
  public:
    Search_cond_andContext(Search_conditionContext *ctx);

    tsqlParser::Search_conditionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    tsqlParser::Search_conditionContext *right = nullptr;
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Search_conditionContext* search_condition();
  Search_conditionContext* search_condition(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PredicateContext() = default;
    void copyFrom(PredicateContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Binary_in_expressionContext : public PredicateContext {
  public:
    Binary_in_expressionContext(PredicateContext *ctx);

    tsqlParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IN();
    SubqueryContext *subquery();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *NOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_operator_expression2Context : public PredicateContext {
  public:
    Unary_operator_expression2Context(PredicateContext *ctx);

    antlr4::Token *op = nullptr;
    tsqlParser::SubqueryContext *expr = nullptr;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *EXISTS();
    SubqueryContext *subquery();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Binary_mod_expressionContext : public PredicateContext {
  public:
    Binary_mod_expressionContext(PredicateContext *ctx);

    tsqlParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    tsqlParser::ExpressionContext *right_1 = nullptr;
    tsqlParser::ExpressionContext *right_2 = nullptr;
    antlr4::tree::TerminalNode *AND();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *ESCAPE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_operator_expression3Context : public PredicateContext {
  public:
    Unary_operator_expression3Context(PredicateContext *ctx);

    antlr4::Token *op = nullptr;
    tsqlParser::PredicateContext *expr = nullptr;
    antlr4::tree::TerminalNode *NOT();
    PredicateContext *predicate();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Bracket_search_expressionContext : public PredicateContext {
  public:
    Bracket_search_expressionContext(PredicateContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Sublink_expressionContext : public PredicateContext {
  public:
    Sublink_expressionContext(PredicateContext *ctx);

    tsqlParser::ExpressionContext *test_expr = nullptr;
    tsqlParser::Comparison_operatorContext *op = nullptr;
    antlr4::Token *pref = nullptr;
    antlr4::tree::TerminalNode *LR_BRACKET();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();
    Comparison_operatorContext *comparison_operator();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *ANY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Binary_operator_expression3Context : public PredicateContext {
  public:
    Binary_operator_expression3Context(PredicateContext *ctx);

    tsqlParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    tsqlParser::Null_notnullContext *right = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IS();
    Null_notnullContext *null_notnull();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Binary_operator_expression2Context : public PredicateContext {
  public:
    Binary_operator_expression2Context(PredicateContext *ctx);

    tsqlParser::ExpressionContext *left = nullptr;
    tsqlParser::Comparison_operatorContext *op = nullptr;
    tsqlParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Comparison_operatorContext *comparison_operator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Decimal_expressionContext : public PredicateContext {
  public:
    Decimal_expressionContext(PredicateContext *ctx);

    antlr4::tree::TerminalNode *DECIMAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PredicateContext* predicate();

  class  Query_expressionContext : public antlr4::ParserRuleContext {
  public:
    Query_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Query_expressionContext() = default;
    void copyFrom(Query_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Bracket_query_expressionContext : public Query_expressionContext {
  public:
    Bracket_query_expressionContext(Query_expressionContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    Query_expressionContext *query_expression();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Query_specification_expressionContext : public Query_expressionContext {
  public:
    Query_specification_expressionContext(Query_expressionContext *ctx);

    Query_specificationContext *query_specification();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Union_query_expressionContext : public Query_expressionContext {
  public:
    Union_query_expressionContext(Query_expressionContext *ctx);

    tsqlParser::Query_expressionContext *left = nullptr;
    tsqlParser::Union_opContext *op = nullptr;
    tsqlParser::Query_expressionContext *right = nullptr;
    std::vector<Query_expressionContext *> query_expression();
    Query_expressionContext* query_expression(size_t i);
    Union_opContext *union_op();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Query_expressionContext* query_expression();
  Query_expressionContext* query_expression(int precedence);
  class  Union_opContext : public antlr4::ParserRuleContext {
  public:
    Union_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *ALL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Union_opContext* union_op();

  class  Cross_apply_expressionContext : public antlr4::ParserRuleContext {
  public:
    Cross_apply_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    Cross_apply_expressionContext *cross_apply_expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Query_expressionContext *query_expression();
    ExpressionContext *expression();
    Table_value_constructorContext *table_value_constructor();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_apply_expressionContext* cross_apply_expression();

  class  Query_specificationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *pref = nullptr;
    tsqlParser::Search_conditionContext *where = nullptr;
    tsqlParser::Search_conditionContext *having = nullptr;
    Query_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Select_listContext *select_list();
    Top_clauseContext *top_clause();
    antlr4::tree::TerminalNode *INTO();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *FROM();
    Table_sourcesContext *table_sources();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *APPLY();
    Cross_apply_expressionContext *cross_apply_expression();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<Group_by_itemContext *> group_by_item();
    Group_by_itemContext* group_by_item(size_t i);
    Group_by_grouping_setsContext *group_by_grouping_sets();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *HAVING();
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    Output_dml_list_elemContext *output_dml_list_elem();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_specificationContext* query_specification();

  class  Group_by_grouping_setsContext : public antlr4::ParserRuleContext {
  public:
    Group_by_grouping_setsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Grouping_setContext *> grouping_set();
    Grouping_setContext* grouping_set(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_by_grouping_setsContext* group_by_grouping_sets();

  class  Grouping_setContext : public antlr4::ParserRuleContext {
  public:
    Grouping_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Group_by_itemContext *> group_by_item();
    Group_by_itemContext* group_by_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grouping_setContext* grouping_set();

  class  Top_clauseContext : public antlr4::ParserRuleContext {
  public:
    Top_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TIES();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Top_clauseContext* top_clause();

  class  Top_clause_dmContext : public antlr4::ParserRuleContext {
  public:
    Top_clause_dmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOP();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *PERCENT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Top_clause_dmContext* top_clause_dm();

  class  Order_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::ExpressionContext *offset = nullptr;
    Order_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<Order_by_expressionContext *> order_by_expression();
    Order_by_expressionContext* order_by_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *OFFSET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    Fetch_expressionContext *fetch_expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clauseContext* order_by_clause();

  class  Fetch_expressionContext : public antlr4::ParserRuleContext {
  public:
    Fetch_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_expressionContext* fetch_expression();

  class  For_clauseContext : public antlr4::ParserRuleContext {
  public:
    For_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *BROWSE();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *AUTO();
    Xml_common_directivesContext *xml_common_directives();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_clauseContext* for_clause();

  class  Xml_common_directivesContext : public antlr4::ParserRuleContext {
  public:
    Xml_common_directivesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *BASE64();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *ROOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_common_directivesContext* xml_common_directives();

  class  Order_by_expressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *direction = nullptr;
    Order_by_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_expressionContext* order_by_expression();

  class  Group_by_itemContext : public antlr4::ParserRuleContext {
  public:
    Group_by_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_by_itemContext* group_by_item();

  class  Option_clauseContext : public antlr4::ParserRuleContext {
  public:
    Option_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Option_clauseContext* option_clause();

  class  OptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *number_rows = nullptr;
    antlr4::Token *number_of_processors = nullptr;
    antlr4::Token *number_recursion = nullptr;
    OptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *EXPAND();
    antlr4::tree::TerminalNode *VIEWS();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX();
    antlr4::tree::TerminalNode *KEEP();
    antlr4::tree::TerminalNode *PLAN();
    antlr4::tree::TerminalNode *KEEPFIXED();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *MAXRECURSION();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Optimize_for_argContext *> optimize_for_arg();
    Optimize_for_argContext* optimize_for_arg(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *PARAMETERIZATION();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *FORCED();
    antlr4::tree::TerminalNode *RECOMPILE();
    antlr4::tree::TerminalNode *ROBUST();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionContext* option();

  class  Optimize_for_argContext : public antlr4::ParserRuleContext {
  public:
    Optimize_for_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *EQUAL();
    ConstantContext *constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optimize_for_argContext* optimize_for_arg();

  class  Select_listContext : public antlr4::ParserRuleContext {
  public:
    Select_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_list_elemContext *> select_list_elem();
    Select_list_elemContext* select_list_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_listContext* select_list();

  class  Select_list_elemContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Column_aliasContext *alias = nullptr;
    Select_list_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_starContext *a_star();
    antlr4::tree::TerminalNode *DOLLAR();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *ROWGUID();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();
    Column_aliasContext *column_alias();
    antlr4::tree::TerminalNode *AS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_elemContext* select_list_elem();

  class  Table_sourcesContext : public antlr4::ParserRuleContext {
  public:
    Table_sourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_sourceContext *> table_source();
    Table_sourceContext* table_source(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_sourcesContext* table_sources();

  class  Table_sourceContext : public antlr4::ParserRuleContext {
  public:
    Table_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Table_sourceContext() = default;
    void copyFrom(Table_sourceContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Cross_joinContext : public Table_sourceContext {
  public:
    Cross_joinContext(Table_sourceContext *ctx);

    tsqlParser::Table_sourceContext *left = nullptr;
    antlr4::Token *op = nullptr;
    tsqlParser::Table_sourceContext *right = nullptr;
    antlr4::tree::TerminalNode *JOIN();
    std::vector<Table_sourceContext *> table_source();
    Table_sourceContext* table_source(size_t i);
    antlr4::tree::TerminalNode *CROSS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_source_item_joinContext : public Table_sourceContext {
  public:
    Table_source_item_joinContext(Table_sourceContext *ctx);

    Table_source_itemContext *table_source_item();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Standard_joinContext : public Table_sourceContext {
  public:
    Standard_joinContext(Table_sourceContext *ctx);

    tsqlParser::Table_sourceContext *left = nullptr;
    tsqlParser::Table_sourceContext *right = nullptr;
    Join_typeContext *join_type();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *ON();
    Search_conditionContext *search_condition();
    std::vector<Table_sourceContext *> table_source();
    Table_sourceContext* table_source(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Apply_joinContext : public Table_sourceContext {
  public:
    Apply_joinContext(Table_sourceContext *ctx);

    tsqlParser::Table_sourceContext *left = nullptr;
    antlr4::Token *op = nullptr;
    tsqlParser::Table_sourceContext *right = nullptr;
    antlr4::tree::TerminalNode *APPLY();
    std::vector<Table_sourceContext *> table_source();
    Table_sourceContext* table_source(size_t i);
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *OUTER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Bracket_table_sourceContext : public Table_sourceContext {
  public:
    Bracket_table_sourceContext(Table_sourceContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    Table_sourceContext *table_source();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Table_sourceContext* table_source();
  Table_sourceContext* table_source(int precedence);
  class  Table_source_itemContext : public antlr4::ParserRuleContext {
  public:
    Table_source_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Table_source_itemContext() = default;
    void copyFrom(Table_source_itemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Table_source_item_simpleContext : public Table_source_itemContext {
  public:
    Table_source_item_simpleContext(Table_source_itemContext *ctx);

    Rowset_functionContext *rowset_function();
    Table_aliasContext *table_alias();
    Change_tableContext *change_table();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *LOCAL_ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_source_item_complexContext : public Table_source_itemContext {
  public:
    Table_source_item_complexContext(Table_source_itemContext *ctx);

    Derived_tableContext *derived_table();
    Table_aliasContext *table_alias();
    Column_alias_listContext *column_alias_list();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *DOT();
    Function_callContext *function_call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_source_item_nameContext : public Table_source_itemContext {
  public:
    Table_source_item_nameContext(Table_source_itemContext *ctx);

    Table_nameContext *table_name();
    Tablesample_clauseContext *tablesample_clause();
    Table_aliasContext *table_alias();
    With_table_hintsContext *with_table_hints();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Table_source_itemContext* table_source_item();

  class  Tablesample_clauseContext : public antlr4::ParserRuleContext {
  public:
    Tablesample_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Sample_numberContext *sample_number();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *ROWS();
    Repeat_seedContext *repeat_seed();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tablesample_clauseContext* tablesample_clause();

  class  Sample_numberContext : public antlr4::ParserRuleContext {
  public:
    Sample_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sample_numberContext* sample_number();

  class  Repeat_seedContext : public antlr4::ParserRuleContext {
  public:
    Repeat_seedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_seedContext* repeat_seed();

  class  Table_aliasContext : public antlr4::ParserRuleContext {
  public:
    Table_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    R_idContext *r_id();
    antlr4::tree::TerminalNode *AS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_aliasContext* table_alias();

  class  Change_tableContext : public antlr4::ParserRuleContext {
  public:
    Change_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGETABLE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *CHANGES();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Change_tableContext* change_table();

  class  Join_typeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *join_hint = nullptr;
    Join_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *REMOTE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_typeContext* join_type();

  class  Table_name_with_hintContext : public antlr4::ParserRuleContext {
  public:
    Table_name_with_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    With_table_hintsContext *with_table_hints();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_name_with_hintContext* table_name_with_hint();

  class  Rowset_functionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *provider_name = nullptr;
    antlr4::Token *connectionString = nullptr;
    antlr4::Token *sql = nullptr;
    antlr4::Token *data_file = nullptr;
    Rowset_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENROWSET();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *BULK();
    std::vector<Bulk_optionContext *> bulk_option();
    Bulk_optionContext* bulk_option(size_t i);
    R_idContext *r_id();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rowset_functionContext* rowset_function();

  class  Bulk_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *bulk_option_value = nullptr;
    Bulk_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    R_idContext *r_id();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bulk_optionContext* bulk_option();

  class  Derived_tableContext : public antlr4::ParserRuleContext {
  public:
    Derived_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Table_value_constructorContext *table_value_constructor();
    Table_aliasContext *table_alias();
    Column_alias_listContext *column_alias_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Derived_tableContext* derived_table();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Function_callContext() = default;
    void copyFrom(Function_callContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Standard_callContext : public Function_callContext {
  public:
    Standard_callContext(Function_callContext *ctx);

    tsqlParser::ExpressionContext *style = nullptr;
    antlr4::Token *seed = nullptr;
    antlr4::Token *increment = nullptr;
    Scalar_function_nameContext *scalar_function_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *BINARY_CHECKSUM();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *CONVERT();
    Data_typeContext *data_type();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *DATEADD();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *DATEDIFF();
    antlr4::tree::TerminalNode *DATENAME();
    antlr4::tree::TerminalNode *DATEPART();
    antlr4::tree::TerminalNode *DATETIMEOFFSETFROMPARTS();
    antlr4::tree::TerminalNode *IDENTITY();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    antlr4::tree::TerminalNode *IIF();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *STRING_SPLIT();
    antlr4::tree::TerminalNode *TRY_CONVERT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Aggregate_callContext : public Function_callContext {
  public:
    Aggregate_callContext(Function_callContext *ctx);

    Aggregate_windowed_functionContext *aggregate_windowed_function();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Nvf_callContext : public Function_callContext {
  public:
    Nvf_callContext(Function_callContext *ctx);

    Next_value_for_functionContext *next_value_for_function();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Rank_callContext : public Function_callContext {
  public:
    Rank_callContext(Function_callContext *ctx);

    Ranking_windowed_functionContext *ranking_windowed_function();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_callContext : public Function_callContext {
  public:
    Expression_callContext(Function_callContext *ctx);

    tsqlParser::ExpressionContext *left = nullptr;
    tsqlParser::Data_typeContext *alias = nullptr;
    tsqlParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *PARSE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *TRY_PARSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Simple_callContext : public Function_callContext {
  public:
    Simple_callContext(Function_callContext *ctx);

    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *MIN_ACTIVE_ROWVERSION();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SYSTEM_USER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Cast_callContext : public Function_callContext {
  public:
    Cast_callContext(Function_callContext *ctx);

    tsqlParser::Data_typeContext *alias = nullptr;
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *TRY_CAST();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Function_callContext* function_call();

  class  Switch_sectionContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::ExpressionContext *whenExpr = nullptr;
    tsqlParser::ExpressionContext *thenExpr = nullptr;
    Switch_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_sectionContext* switch_section();

  class  Switch_search_condition_sectionContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Search_conditionContext *whenExpr = nullptr;
    tsqlParser::ExpressionContext *thenExpr = nullptr;
    Switch_search_condition_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    Search_conditionContext *search_condition();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_search_condition_sectionContext* switch_search_condition_section();

  class  With_table_hintsContext : public antlr4::ParserRuleContext {
  public:
    With_table_hintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Table_hintContext *> table_hint();
    Table_hintContext* table_hint(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_table_hintsContext* with_table_hints();

  class  Insert_with_table_hintsContext : public antlr4::ParserRuleContext {
  public:
    Insert_with_table_hintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Table_hintContext *> table_hint();
    Table_hintContext* table_hint(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_with_table_hintsContext* insert_with_table_hints();

  class  Table_hintContext : public antlr4::ParserRuleContext {
  public:
    Table_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOEXPAND();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Index_valueContext *> index_value();
    Index_valueContext* index_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *FORCESEEK();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SPATIAL_WINDOW_MAX_CELLS();
    antlr4::tree::TerminalNode *DECIMAL();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_hintContext* table_hint();

  class  Index_valueContext : public antlr4::ParserRuleContext {
  public:
    Index_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    R_idContext *r_id();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_valueContext* index_value();

  class  Column_alias_listContext : public antlr4::ParserRuleContext {
  public:
    Column_alias_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Column_aliasContext *> column_alias();
    Column_aliasContext* column_alias(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_alias_listContext* column_alias_list();

  class  Column_aliasContext : public antlr4::ParserRuleContext {
  public:
    Column_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    R_idContext *r_id();
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_aliasContext* column_alias();

  class  A_starContext : public antlr4::ParserRuleContext {
  public:
    A_starContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  A_starContext* a_star();

  class  Table_value_constructorContext : public antlr4::ParserRuleContext {
  public:
    Table_value_constructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    std::vector<Value_listContext *> value_list();
    Value_listContext* value_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_value_constructorContext* table_value_constructor();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_listContext* expression_list();

  class  Value_listContext : public antlr4::ParserRuleContext {
  public:
    Value_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_listContext* value_list();

  class  Next_value_forContext : public antlr4::ParserRuleContext {
  public:
    Next_value_forContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *FOR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Next_value_forContext* next_value_for();

  class  Next_value_for_functionContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Func_proc_nameContext *args = nullptr;
    Next_value_for_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Next_value_forContext *next_value_for();
    Over_clauseContext *over_clause();
    Func_proc_nameContext *func_proc_name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Next_value_for_functionContext* next_value_for_function();

  class  Ranking_windowed_functionContext : public antlr4::ParserRuleContext {
  public:
    Ranking_windowed_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Over_clauseContext *over_clause();
    antlr4::tree::TerminalNode *RANK();
    antlr4::tree::TerminalNode *DENSE_RANK();
    antlr4::tree::TerminalNode *ROW_NUMBER();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *NTILE();
    antlr4::tree::TerminalNode *FIRST_VALUE();
    antlr4::tree::TerminalNode *LAST_VALUE();
    antlr4::tree::TerminalNode *LEAD();
    antlr4::tree::TerminalNode *LAG();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ranking_windowed_functionContext* ranking_windowed_function();

  class  Aggregate_windowed_functionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *args = nullptr;
    Aggregate_windowed_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *STDEV();
    antlr4::tree::TerminalNode *STDEVP();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *VARP();
    All_distinctContext *all_distinct();
    Over_clauseContext *over_clause();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COUNT_BIG();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *CHECKSUM_AGG();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *GROUPING_ID();
    Expression_listContext *expression_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregate_windowed_functionContext* aggregate_windowed_function();

  class  All_distinctContext : public antlr4::ParserRuleContext {
  public:
    All_distinctContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  All_distinctContext* all_distinct();

  class  Over_clauseContext : public antlr4::ParserRuleContext {
  public:
    Over_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *BY();
    Expression_listContext *expression_list();
    Order_by_clauseContext *order_by_clause();
    Row_or_range_clauseContext *row_or_range_clause();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Over_clauseContext* over_clause();

  class  Row_or_range_clauseContext : public antlr4::ParserRuleContext {
  public:
    Row_or_range_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_frame_extentContext *window_frame_extent();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *RANGE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_or_range_clauseContext* row_or_range_clause();

  class  Window_frame_extentContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_extentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_frame_precedingContext *window_frame_preceding();
    antlr4::tree::TerminalNode *BETWEEN();
    std::vector<Window_frame_boundContext *> window_frame_bound();
    Window_frame_boundContext* window_frame_bound(size_t i);
    antlr4::tree::TerminalNode *AND();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_extentContext* window_frame_extent();

  class  Window_frame_boundContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_boundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_frame_precedingContext *window_frame_preceding();
    Window_frame_followingContext *window_frame_following();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_boundContext* window_frame_bound();

  class  Window_frame_precedingContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_precedingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *ROW();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_precedingContext* window_frame_preceding();

  class  Window_frame_followingContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_followingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_followingContext* window_frame_following();

  class  Create_database_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_database_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILESTREAM();
    std::vector<Database_filestream_optionContext *> database_filestream_option();
    Database_filestream_optionContext* database_filestream_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT_LANGUAGE();
    antlr4::tree::TerminalNode *EQUAL();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DEFAULT_FULLTEXT_LANGUAGE();
    antlr4::tree::TerminalNode *NESTED_TRIGGERS();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TRANSFORM_NOISE_WORDS();
    antlr4::tree::TerminalNode *TWO_DIGIT_YEAR_CUTOFF();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DB_CHAINING();
    antlr4::tree::TerminalNode *TRUSTWORTHY();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_optionContext* create_database_option();

  class  Database_filestream_optionContext : public antlr4::ParserRuleContext {
  public:
    Database_filestream_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *NON_TRANSACTED_ACCESS();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DIRECTORY_NAME();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *READ_ONLY();
    antlr4::tree::TerminalNode *FULL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_filestream_optionContext* database_filestream_option();

  class  Database_file_specContext : public antlr4::ParserRuleContext {
  public:
    Database_file_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_groupContext *file_group();
    File_specContext *file_spec();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_file_specContext* database_file_spec();

  class  File_groupContext : public antlr4::ParserRuleContext {
  public:
    File_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILEGROUP();
    R_idContext *r_id();
    std::vector<File_specContext *> file_spec();
    File_specContext* file_spec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONTAINS();
    antlr4::tree::TerminalNode* CONTAINS(size_t i);
    antlr4::tree::TerminalNode *FILESTREAM();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *MEMORY_OPTIMIZED_DATA();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_groupContext* file_group();

  class  File_specContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *r_file = nullptr;
    File_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *FILENAME();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    R_idContext *r_id();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SIZE();
    std::vector<File_sizeContext *> file_size();
    File_sizeContext* file_size(size_t i);
    antlr4::tree::TerminalNode *MAXSIZE();
    antlr4::tree::TerminalNode *FILEGROWTH();
    antlr4::tree::TerminalNode *UNLIMITED();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_specContext* file_spec();

  class  Full_table_nameContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *server = nullptr;
    tsqlParser::R_idContext *database = nullptr;
    tsqlParser::R_idContext *schema = nullptr;
    tsqlParser::R_idContext *table = nullptr;
    Full_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_table_nameContext* full_table_name();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *database = nullptr;
    tsqlParser::R_idContext *schema = nullptr;
    tsqlParser::R_idContext *table = nullptr;
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_nameContext* table_name();

  class  Simple_nameContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *schema = nullptr;
    tsqlParser::R_idContext *name = nullptr;
    Simple_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_nameContext* simple_name();

  class  Func_proc_nameContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::R_idContext *database = nullptr;
    tsqlParser::R_idContext *schema = nullptr;
    tsqlParser::R_idContext *procedure = nullptr;
    Func_proc_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_proc_nameContext* func_proc_name();

  class  Ddl_objectContext : public antlr4::ParserRuleContext {
  public:
    Ddl_objectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Full_table_nameContext *full_table_name();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ddl_objectContext* ddl_object();

  class  Full_column_nameContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Table_nameContext *table = nullptr;
    tsqlParser::R_idContext *name = nullptr;
    Full_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    R_idContext *r_id();
    antlr4::tree::TerminalNode *DOT();
    Table_nameContext *table_name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_column_nameContext* full_column_name();

  class  Column_name_listContext : public antlr4::ParserRuleContext {
  public:
    Column_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<R_idContext *> r_id();
    R_idContext* r_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_name_listContext* column_name_list();

  class  Cursor_nameContext : public antlr4::ParserRuleContext {
  public:
    Cursor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    R_idContext *r_id();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_nameContext* cursor_name();

  class  On_offContext : public antlr4::ParserRuleContext {
  public:
    On_offContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_offContext* on_off();

  class  ClusteredContext : public antlr4::ParserRuleContext {
  public:
    ClusteredContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *NONCLUSTERED();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClusteredContext* clustered();

  class  Null_notnullContext : public antlr4::ParserRuleContext {
  public:
    Null_notnullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *NOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_notnullContext* null_notnull();

  class  Scalar_function_nameContext : public antlr4::ParserRuleContext {
  public:
    Scalar_function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_proc_nameContext *func_proc_name();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *BINARY_CHECKSUM();
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *SQUARE();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *SIGN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scalar_function_nameContext* scalar_function_name();

  class  Default_valueContext : public antlr4::ParserRuleContext {
  public:
    Default_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();
    ConstantContext *constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_valueContext* default_value();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dollar = nullptr;
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *DECIMAL();
    SignContext *sign();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOLLAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  R_idContext : public antlr4::ParserRuleContext {
  public:
    R_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_idContext *simple_id();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_ID();
    antlr4::tree::TerminalNode *SQUARE_BRACKET_ID();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  R_idContext* r_id();

  class  Simple_idContext : public antlr4::ParserRuleContext {
  public:
    Simple_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *ABSOLUTE();
    antlr4::tree::TerminalNode *APPLY();
    antlr4::tree::TerminalNode *AUTO();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *BASE64();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *CHECKSUM_AGG();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *COOKIE();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COUNT_BIG();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DELAY();
    antlr4::tree::TerminalNode *DELETED();
    antlr4::tree::TerminalNode *DENSE_RANK();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *EXIST();
    antlr4::tree::TerminalNode *EXPAND();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *FAST_FORWARD();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FIRST_VALUE();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *FORCESEEK();
    antlr4::tree::TerminalNode *FORWARD_ONLY();
    antlr4::tree::TerminalNode *FULLSCAN();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *GROUPING_ID();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *IMPERSONATE();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *INSERTED();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *KEEP();
    antlr4::tree::TerminalNode *KEEPFIXED();
    antlr4::tree::TerminalNode *FORCED();
    antlr4::tree::TerminalNode *KEYSET();
    antlr4::tree::TerminalNode *IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX();
    antlr4::tree::TerminalNode *LAG();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LAST_VALUE();
    antlr4::tree::TerminalNode *LEAD();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCK_ESCALATION();
    antlr4::tree::TerminalNode *LOGIN();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *MAXRECURSION();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NOCOUNT();
    antlr4::tree::TerminalNode *NODES();
    antlr4::tree::TerminalNode *NOEXPAND();
    antlr4::tree::TerminalNode *NORECOMPUTE();
    antlr4::tree::TerminalNode *NTILE();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPTIMISTIC();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PARAMETERIZATION();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RANK();
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *READ_ONLY();
    antlr4::tree::TerminalNode *RECOMPILE();
    antlr4::tree::TerminalNode *RELATIVE();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *ROBUST();
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWGUID();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *ROW_NUMBER();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *SCHEMABINDING();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *SCROLL_LOCKS();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SPATIAL_WINDOW_MAX_CELLS();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STATS_STREAM();
    antlr4::tree::TerminalNode *STDEV();
    antlr4::tree::TerminalNode *STDEVP();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *TEXTIMAGE_ON();
    antlr4::tree::TerminalNode *THROW();
    antlr4::tree::TerminalNode *TIES();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TRY();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TYPE_WARNING();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *VARP();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VIEW_METADATA();
    antlr4::tree::TerminalNode *VIEWS();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *XMLNAMESPACES();
    antlr4::tree::TerminalNode *ZONE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_idContext* simple_id();

  class  Comparison_operatorContext : public antlr4::ParserRuleContext {
  public:
    Comparison_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *EXCLAMATION();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_operatorContext* comparison_operator();

  class  Assignment_operatorContext : public antlr4::ParserRuleContext {
  public:
    Assignment_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS_ASSIGN();
    antlr4::tree::TerminalNode *MINUS_ASSIGN();
    antlr4::tree::TerminalNode *MULT_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *AND_ASSIGN();
    antlr4::tree::TerminalNode *XOR_ASSIGN();
    antlr4::tree::TerminalNode *OR_ASSIGN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_operatorContext* assignment_operator();

  class  File_sizeContext : public antlr4::ParserRuleContext {
  public:
    File_sizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *KB();
    antlr4::tree::TerminalNode *MB();
    antlr4::tree::TerminalNode *GB();
    antlr4::tree::TerminalNode *TB();
    antlr4::tree::TerminalNode *MODULE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_sizeContext* file_size();

  class  Create_or_alter_procedureContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *proc = nullptr;
    Create_or_alter_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_proc_nameContext *func_proc_name();
    antlr4::tree::TerminalNode *AS();
    Sql_clausesContext *sql_clauses();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PROC();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *DECIMAL();
    std::vector<Procedure_paramContext *> procedure_param();
    Procedure_paramContext* procedure_param(size_t i);
    antlr4::tree::TerminalNode *WITH();
    std::vector<Procedure_optionContext *> procedure_option();
    Procedure_optionContext* procedure_option(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *OR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_or_alter_procedureContext* create_or_alter_procedure();

  class  Create_or_alter_functionContext : public antlr4::ParserRuleContext {
  public:
    Create_or_alter_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Func_proc_nameContext *func_proc_name();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Func_body_returns_selectContext *func_body_returns_select();
    Func_body_returns_tableContext *func_body_returns_table();
    Func_body_returns_scalarContext *func_body_returns_scalar();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *CREATE();
    std::vector<Procedure_paramContext *> procedure_param();
    Procedure_paramContext* procedure_param(size_t i);
    antlr4::tree::TerminalNode *OR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_or_alter_functionContext* create_or_alter_function();

  class  Func_body_returns_selectContext : public antlr4::ParserRuleContext {
  public:
    Func_body_returns_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Function_optionContext *> function_option();
    Function_optionContext* function_option(size_t i);
    antlr4::tree::TerminalNode *AS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_body_returns_selectContext* func_body_returns_select();

  class  Func_body_returns_tableContext : public antlr4::ParserRuleContext {
  public:
    Func_body_returns_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Table_type_definitionContext *table_type_definition();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Function_optionContext *> function_option();
    Function_optionContext* function_option(size_t i);
    antlr4::tree::TerminalNode *AS();
    std::vector<Sql_clauseContext *> sql_clause();
    Sql_clauseContext* sql_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_body_returns_tableContext* func_body_returns_table();

  class  Func_body_returns_scalarContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::ExpressionContext *ret = nullptr;
    Func_body_returns_scalarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNS();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *END();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Function_optionContext *> function_option();
    Function_optionContext* function_option(size_t i);
    antlr4::tree::TerminalNode *AS();
    std::vector<Sql_clauseContext *> sql_clause();
    Sql_clauseContext* sql_clause(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_body_returns_scalarContext* func_body_returns_scalar();

  class  Procedure_paramContext : public antlr4::ParserRuleContext {
  public:
    tsqlParser::Default_valueContext *default_val = nullptr;
    Procedure_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    Data_typeContext *data_type();
    R_idContext *r_id();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *EQUAL();
    Default_valueContext *default_value();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *READONLY();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_paramContext* procedure_param();

  class  Procedure_optionContext : public antlr4::ParserRuleContext {
  public:
    Procedure_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *RECOMPILE();
    Execute_clauseContext *execute_clause();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_optionContext* procedure_option();

  class  Function_optionContext : public antlr4::ParserRuleContext {
  public:
    Function_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *SCHEMABINDING();
    antlr4::tree::TerminalNode *RETURNS();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *CALLED();
    Execute_clauseContext *execute_clause();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_optionContext* function_option();

  class  Percentile_contContext : public antlr4::ParserRuleContext {
  public:
    Percentile_contContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERCENTILE_CONT();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *GROUP();
    Order_by_clauseContext *order_by_clause();
    Over_clauseContext *over_clause();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Percentile_contContext* percentile_cont();

  class  String_aggContext : public antlr4::ParserRuleContext {
  public:
    String_aggContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_AGG();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *GROUP();
    Order_by_clauseContext *order_by_clause();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_aggContext* string_agg();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    R_idContext *r_id();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATETIME2();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *BIGINT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_typeContext* data_type();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool search_conditionSempred(Search_conditionContext *_localctx, size_t predicateIndex);
  bool query_expressionSempred(Query_expressionContext *_localctx, size_t predicateIndex);
  bool table_sourceSempred(Table_sourceContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

