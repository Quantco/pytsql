
// Generated from TSqlParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  TSqlParser : public antlr4::Parser {
public:
  enum {
    ABORT = 1, ABORT_AFTER_WAIT = 2, ABSENT = 3, ABSOLUTE = 4, ACCELERATED_DATABASE_RECOVERY = 5, 
    ACCENT_SENSITIVITY = 6, ACCESS = 7, ACTION = 8, ACTIVATION = 9, ACTIVE = 10, 
    ADD = 11, ADDRESS = 12, ADMINISTER = 13, AES = 14, AES_128 = 15, AES_192 = 16, 
    AES_256 = 17, AFFINITY = 18, AFTER = 19, AGGREGATE = 20, ALGORITHM = 21, 
    ALL = 22, ALLOWED = 23, ALLOW_CONNECTIONS = 24, ALLOW_ENCRYPTED_VALUE_MODIFICATIONS = 25, 
    ALLOW_MULTIPLE_EVENT_LOSS = 26, ALLOW_PAGE_LOCKS = 27, ALLOW_ROW_LOCKS = 28, 
    ALLOW_SINGLE_EVENT_LOSS = 29, ALLOW_SNAPSHOT_ISOLATION = 30, ALL_CONSTRAINTS = 31, 
    ALL_ERRORMSGS = 32, ALL_INDEXES = 33, ALL_LEVELS = 34, ALTER = 35, ALWAYS = 36, 
    AND = 37, ANONYMOUS = 38, ANSI_DEFAULTS = 39, ANSI_NULLS = 40, ANSI_NULL_DEFAULT = 41, 
    ANSI_NULL_DFLT_OFF = 42, ANSI_NULL_DFLT_ON = 43, ANSI_PADDING = 44, 
    ANSI_WARNINGS = 45, ANY = 46, APPEND = 47, APPLICATION = 48, APPLICATION_LOG = 49, 
    APPLOCK_MODE = 50, APPLOCK_TEST = 51, APPLY = 52, APP_NAME = 53, ARITHABORT = 54, 
    ARITHIGNORE = 55, AS = 56, ASC = 57, ASCII = 58, ASSEMBLY = 59, ASSEMBLYPROPERTY = 60, 
    ASYMMETRIC = 61, ASYNCHRONOUS_COMMIT = 62, AT_KEYWORD = 63, AUDIT = 64, 
    AUDIT_GUID = 65, AUTHENTICATE = 66, AUTHENTICATION = 67, AUTHORIZATION = 68, 
    AUTO = 69, AUTOGROW_ALL_FILES = 70, AUTOGROW_SINGLE_FILE = 71, AUTOMATED_BACKUP_PREFERENCE = 72, 
    AUTOMATIC = 73, AUTO_CLEANUP = 74, AUTO_CLOSE = 75, AUTO_CREATE_STATISTICS = 76, 
    AUTO_DROP = 77, AUTO_SHRINK = 78, AUTO_UPDATE_STATISTICS = 79, AUTO_UPDATE_STATISTICS_ASYNC = 80, 
    AVAILABILITY = 81, AVAILABILITY_MODE = 82, AVG = 83, BACKSLASH = 84, 
    BACKUP = 85, BACKUP_CLONEDB = 86, BACKUP_PRIORITY = 87, BASE64 = 88, 
    BEFORE = 89, BEGIN = 90, BEGIN_DIALOG = 91, BETWEEN = 92, BIGINT = 93, 
    BINARY_CHECKSUM = 94, BINARY_KEYWORD = 95, BINDING = 96, BLOB_STORAGE = 97, 
    BLOCK = 98, BLOCKERS = 99, BLOCKING_HIERARCHY = 100, BLOCKSIZE = 101, 
    BREAK = 102, BROKER = 103, BROKER_INSTANCE = 104, BROWSE = 105, BUFFER = 106, 
    BUFFERCOUNT = 107, BULK = 108, BULK_LOGGED = 109, BY = 110, CACHE = 111, 
    CALLED = 112, CALLER = 113, CAP_CPU_PERCENT = 114, CASCADE = 115, CASE = 116, 
    CAST = 117, CATALOG = 118, CATCH = 119, CERTENCODED = 120, CERTIFICATE = 121, 
    CERTPRIVATEKEY = 122, CERT_ID = 123, CHANGE = 124, CHANGES = 125, CHANGETABLE = 126, 
    CHANGE_RETENTION = 127, CHANGE_TRACKING = 128, CHAR = 129, CHARINDEX = 130, 
    CHECK = 131, CHECKALLOC = 132, CHECKCATALOG = 133, CHECKCONSTRAINTS = 134, 
    CHECKDB = 135, CHECKFILEGROUP = 136, CHECKPOINT = 137, CHECKSUM = 138, 
    CHECKSUM_AGG = 139, CHECKTABLE = 140, CHECK_EXPIRATION = 141, CHECK_POLICY = 142, 
    CLASSIFIER_FUNCTION = 143, CLEANTABLE = 144, CLEANUP = 145, CLONEDATABASE = 146, 
    CLOSE = 147, CLUSTER = 148, CLUSTERED = 149, COALESCE = 150, COLLATE = 151, 
    COLLECTION = 152, COLUMN = 153, COLUMNPROPERTY = 154, COLUMNS = 155, 
    COLUMNSTORE = 156, COLUMNSTORE_ARCHIVE = 157, COLUMN_ENCRYPTION_KEY = 158, 
    COLUMN_MASTER_KEY = 159, COL_LENGTH = 160, COL_NAME = 161, COMMIT = 162, 
    COMMITTED = 163, COMPATIBILITY_LEVEL = 164, COMPRESS = 165, COMPRESSION = 166, 
    COMPRESSION_DELAY = 167, COMPRESS_ALL_ROW_GROUPS = 168, COMPUTE = 169, 
    CONCAT = 170, CONCAT_NULL_YIELDS_NULL = 171, CONCAT_WS = 172, CONFIGURATION = 173, 
    CONNECT = 174, CONNECTION = 175, CONNECTIONPROPERTY = 176, CONSTRAINT = 177, 
    CONTAINMENT = 178, CONTAINS = 179, CONTAINSTABLE = 180, CONTENT = 181, 
    CONTEXT = 182, CONTEXT_INFO = 183, CONTINUE = 184, CONTINUE_AFTER_ERROR = 185, 
    CONTRACT = 186, CONTRACT_NAME = 187, CONTROL = 188, CONVERSATION = 189, 
    CONVERT = 190, COOKIE = 191, COPY_ONLY = 192, COUNT = 193, COUNTER = 194, 
    COUNT_BIG = 195, CPU = 196, CREATE = 197, CREATE_NEW = 198, CREATION_DISPOSITION = 199, 
    CREDENTIAL = 200, CROSS = 201, CRYPTOGRAPHIC = 202, CUME_DIST = 203, 
    CURRENT = 204, CURRENT_DATE = 205, CURRENT_REQUEST_ID = 206, CURRENT_TIME = 207, 
    CURRENT_TIMESTAMP = 208, CURRENT_TRANSACTION_ID = 209, CURRENT_USER = 210, 
    CURSOR = 211, CURSOR_CLOSE_ON_COMMIT = 212, CURSOR_DEFAULT = 213, CURSOR_STATUS = 214, 
    CYCLE = 215, DATA = 216, DATABASE = 217, DATABASEPROPERTYEX = 218, DATABASE_MIRRORING = 219, 
    DATABASE_PRINCIPAL_ID = 220, DATALENGTH = 221, DATASPACE = 222, DATA_COMPRESSION = 223, 
    DATA_PURITY = 224, DATA_SOURCE = 225, DATEADD = 226, DATEDIFF = 227, 
    DATENAME = 228, DATEPART = 229, DATE_CORRELATION_OPTIMIZATION = 230, 
    DAYS = 231, DBCC = 232, DBREINDEX = 233, DB_CHAINING = 234, DB_FAILOVER = 235, 
    DB_ID = 236, DB_NAME = 237, DDL = 238, DEALLOCATE = 239, DECLARE = 240, 
    DECOMPRESS = 241, DECRYPTION = 242, DEFAULT = 243, DEFAULT_DATABASE = 244, 
    DEFAULT_DOUBLE_QUOTE = 245, DEFAULT_FULLTEXT_LANGUAGE = 246, DEFAULT_LANGUAGE = 247, 
    DEFAULT_SCHEMA = 248, DEFINITION = 249, DELAY = 250, DELAYED_DURABILITY = 251, 
    DELETE = 252, DELETED = 253, DENSE_RANK = 254, DENY = 255, DEPENDENTS = 256, 
    DES = 257, DESC = 258, DESCRIPTION = 259, DESX = 260, DETERMINISTIC = 261, 
    DHCP = 262, DIAGNOSTICS = 263, DIALOG = 264, DIFFERENCE = 265, DIFFERENTIAL = 266, 
    DIRECTORY_NAME = 267, DISABLE = 268, DISABLED = 269, DISABLE_BROKER = 270, 
    DISK = 271, DISTINCT = 272, DISTRIBUTED = 273, DISTRIBUTION = 274, DOCUMENT = 275, 
    DOLLAR_PARTITION = 276, DOUBLE = 277, DOUBLE_BACK_SLASH = 278, DOUBLE_FORWARD_SLASH = 279, 
    DROP = 280, DROPCLEANBUFFERS = 281, DROP_EXISTING = 282, DTC_SUPPORT = 283, 
    DUMP = 284, DYNAMIC = 285, ELEMENTS = 286, ELSE = 287, EMERGENCY = 288, 
    EMPTY = 289, ENABLE = 290, ENABLED = 291, ENABLE_BROKER = 292, ENCRYPTED = 293, 
    ENCRYPTED_VALUE = 294, ENCRYPTION = 295, ENCRYPTION_TYPE = 296, END = 297, 
    ENDPOINT = 298, ENDPOINT_URL = 299, ERRLVL = 300, ERROR = 301, ERROR_BROKER_CONVERSATIONS = 302, 
    ERROR_LINE = 303, ERROR_MESSAGE = 304, ERROR_NUMBER = 305, ERROR_PROCEDURE = 306, 
    ERROR_SEVERITY = 307, ERROR_STATE = 308, ESCAPE = 309, ESTIMATEONLY = 310, 
    EVENT = 311, EVENTDATA = 312, EVENT_RETENTION_MODE = 313, EXCEPT = 314, 
    EXCLUSIVE = 315, EXECUTABLE = 316, EXECUTABLE_FILE = 317, EXECUTE = 318, 
    EXIST = 319, EXISTS = 320, EXIST_SQUARE_BRACKET = 321, EXIT = 322, EXPAND = 323, 
    EXPIREDATE = 324, EXPIRY_DATE = 325, EXPLICIT = 326, EXTENDED_LOGICAL_CHECKS = 327, 
    EXTENSION = 328, EXTERNAL = 329, EXTERNAL_ACCESS = 330, FAILOVER = 331, 
    FAILOVER_MODE = 332, FAILURE = 333, FAILURECONDITIONLEVEL = 334, FAILURE_CONDITION_LEVEL = 335, 
    FAIL_OPERATION = 336, FAN_IN = 337, FAST = 338, FAST_FORWARD = 339, 
    FETCH = 340, FILE = 341, FILEGROUP = 342, FILEGROUPPROPERTY = 343, FILEGROUP_ID = 344, 
    FILEGROUP_NAME = 345, FILEGROWTH = 346, FILENAME = 347, FILEPATH = 348, 
    FILEPROPERTY = 349, FILEPROPERTYEX = 350, FILESTREAM = 351, FILESTREAM_ON = 352, 
    FILE_ID = 353, FILE_IDEX = 354, FILE_NAME = 355, FILE_SNAPSHOT = 356, 
    FILLFACTOR = 357, FILTER = 358, FIRST = 359, FIRST_VALUE = 360, FMTONLY = 361, 
    FOLLOWING = 362, FOR = 363, FORCE = 364, FORCED = 365, FORCEPLAN = 366, 
    FORCESCAN = 367, FORCESEEK = 368, FORCE_FAILOVER_ALLOW_DATA_LOSS = 369, 
    FORCE_SERVICE_ALLOW_DATA_LOSS = 370, FOREIGN = 371, FORMAT = 372, FORMATMESSAGE = 373, 
    FORWARD_ONLY = 374, FREE = 375, FREETEXT = 376, FREETEXTTABLE = 377, 
    FROM = 378, FULL = 379, FULLSCAN = 380, FULLTEXT = 381, FULLTEXTCATALOGPROPERTY = 382, 
    FULLTEXTSERVICEPROPERTY = 383, FUNCTION = 384, GB = 385, GENERATED = 386, 
    GET = 387, GETANCESTOR = 388, GETANSINULL = 389, GETDATE = 390, GETDESCENDANT = 391, 
    GETLEVEL = 392, GETREPARENTEDVALUE = 393, GETROOT = 394, GETUTCDATE = 395, 
    GET_FILESTREAM_TRANSACTION_CONTEXT = 396, GLOBAL = 397, GO = 398, GOTO = 399, 
    GOVERNOR = 400, GRANT = 401, GREATEST = 402, GROUP = 403, GROUPING = 404, 
    GROUPING_ID = 405, GROUP_MAX_REQUESTS = 406, HADR = 407, HASH = 408, 
    HASHED = 409, HAS_DBACCESS = 410, HAS_PERMS_BY_NAME = 411, HAVING = 412, 
    HEALTHCHECKTIMEOUT = 413, HEALTH_CHECK_TIMEOUT = 414, HEAP = 415, HIDDEN_KEYWORD = 416, 
    HIERARCHYID = 417, HIGH = 418, HOLDLOCK = 419, HONOR_BROKER_PRIORITY = 420, 
    HOST_ID = 421, HOST_NAME = 422, HOURS = 423, IDENTITY = 424, IDENTITYCOL = 425, 
    IDENTITY_INSERT = 426, IDENTITY_VALUE = 427, IDENT_CURRENT = 428, IDENT_INCR = 429, 
    IDENT_SEED = 430, IF = 431, IGNORE_CONSTRAINTS = 432, IGNORE_DUP_KEY = 433, 
    IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX = 434, IGNORE_REPLICATED_TABLE_CACHE = 435, 
    IGNORE_TRIGGERS = 436, IIF = 437, IMMEDIATE = 438, IMPERSONATE = 439, 
    IMPLICIT_TRANSACTIONS = 440, IMPORTANCE = 441, IN = 442, INCLUDE = 443, 
    INCLUDE_NULL_VALUES = 444, INCREMENT = 445, INCREMENTAL = 446, INDEX = 447, 
    INDEXKEY_PROPERTY = 448, INDEXPROPERTY = 449, INDEX_COL = 450, INFINITE = 451, 
    INIT = 452, INITIATOR = 453, INNER = 454, INPUT = 455, INSENSITIVE = 456, 
    INSERT = 457, INSERTED = 458, INSTEAD = 459, INT = 460, INTERSECT = 461, 
    INTO = 462, IO = 463, IP = 464, IS = 465, ISDESCENDANTOF = 466, ISJSON = 467, 
    ISNULL = 468, ISNUMERIC = 469, ISOLATION = 470, IS_MEMBER = 471, IS_ROLEMEMBER = 472, 
    IS_SRVROLEMEMBER = 473, JOB = 474, JOIN = 475, JSON = 476, JSON_ARRAY = 477, 
    JSON_MODIFY = 478, JSON_OBJECT = 479, JSON_PATH_EXISTS = 480, JSON_QUERY = 481, 
    JSON_VALUE = 482, KB = 483, KEEP = 484, KEEPDEFAULTS = 485, KEEPFIXED = 486, 
    KEEPIDENTITY = 487, KERBEROS = 488, KEY = 489, KEYS = 490, KEYSET = 491, 
    KEY_PATH = 492, KEY_SOURCE = 493, KEY_STORE_PROVIDER_NAME = 494, KILL = 495, 
    LAG = 496, LANGUAGE = 497, LAST = 498, LAST_VALUE = 499, LEAD = 500, 
    LEAST = 501, LEFT = 502, LEN = 503, LEVEL = 504, LIBRARY = 505, LIFETIME = 506, 
    LIKE = 507, LINENO = 508, LINKED = 509, LINUX = 510, LIST = 511, LISTENER = 512, 
    LISTENER_IP = 513, LISTENER_PORT = 514, LISTENER_URL = 515, LOAD = 516, 
    LOB_COMPACTION = 517, LOCAL = 518, LOCAL_SERVICE_NAME = 519, LOCATION = 520, 
    LOCK = 521, LOCK_ESCALATION = 522, LOG = 523, LOGIN = 524, LOGINPROPERTY = 525, 
    LOOP = 526, LOW = 527, LOWER = 528, LTRIM = 529, MANUAL = 530, MARK = 531, 
    MASK = 532, MASKED = 533, MASTER = 534, MATCHED = 535, MATERIALIZED = 536, 
    MAX = 537, MAXDOP = 538, MAXRECURSION = 539, MAXSIZE = 540, MAXTRANSFER = 541, 
    MAXVALUE = 542, MAX_CPU_PERCENT = 543, MAX_DISPATCH_LATENCY = 544, MAX_DOP = 545, 
    MAX_DURATION = 546, MAX_EVENT_SIZE = 547, MAX_FILES = 548, MAX_IOPS_PER_VOLUME = 549, 
    MAX_MEMORY = 550, MAX_MEMORY_PERCENT = 551, MAX_OUTSTANDING_IO_PER_VOLUME = 552, 
    MAX_PROCESSES = 553, MAX_QUEUE_READERS = 554, MAX_ROLLOVER_FILES = 555, 
    MAX_SIZE = 556, MB = 557, MEDIADESCRIPTION = 558, MEDIANAME = 559, MEDIUM = 560, 
    MEMBER = 561, MEMORY_OPTIMIZED_DATA = 562, MEMORY_PARTITION_MODE = 563, 
    MERGE = 564, MESSAGE = 565, MESSAGE_FORWARDING = 566, MESSAGE_FORWARD_SIZE = 567, 
    MIN = 568, MINUTES = 569, MINVALUE = 570, MIN_ACTIVE_ROWVERSION = 571, 
    MIN_CPU_PERCENT = 572, MIN_IOPS_PER_VOLUME = 573, MIN_MEMORY_PERCENT = 574, 
    MIRROR = 575, MIRROR_ADDRESS = 576, MIXED_PAGE_ALLOCATION = 577, MODE = 578, 
    MODIFY = 579, MODIFY_SQUARE_BRACKET = 580, MOVE = 581, MULTI_USER = 582, 
    MUST_CHANGE = 583, NAME = 584, NATIONAL = 585, NCHAR = 586, NEGOTIATE = 587, 
    NESTED_TRIGGERS = 588, NEWID = 589, NEWNAME = 590, NEWSEQUENTIALID = 591, 
    NEW_ACCOUNT = 592, NEW_BROKER = 593, NEW_PASSWORD = 594, NEXT = 595, 
    NO = 596, NOCHECK = 597, NOCOUNT = 598, NODES = 599, NOEXEC = 600, NOEXPAND = 601, 
    NOFORMAT = 602, NOHOLDLOCK = 603, NOINDEX = 604, NOINIT = 605, NOLOCK = 606, 
    NONCLUSTERED = 607, NONE = 608, NON_TRANSACTED_ACCESS = 609, NORECOMPUTE = 610, 
    NORECOVERY = 611, NOREWIND = 612, NOSKIP = 613, NOT = 614, NOTIFICATION = 615, 
    NOTIFICATIONS = 616, NOUNLOAD = 617, NOWAIT = 618, NO_CHECKSUM = 619, 
    NO_COMPRESSION = 620, NO_EVENT_LOSS = 621, NO_INFOMSGS = 622, NO_QUERYSTORE = 623, 
    NO_STATISTICS = 624, NO_TRUNCATE = 625, NO_WAIT = 626, NTILE = 627, 
    NTLM = 628, NULLIF = 629, NULL_ = 630, NULL_DOUBLE_QUOTE = 631, NUMANODE = 632, 
    NUMBER = 633, NUMERIC_ROUNDABORT = 634, OBJECT = 635, OBJECTPROPERTY = 636, 
    OBJECTPROPERTYEX = 637, OBJECT_DEFINITION = 638, OBJECT_ID = 639, OBJECT_NAME = 640, 
    OBJECT_SCHEMA_NAME = 641, OF = 642, OFF = 643, OFFLINE = 644, OFFSET = 645, 
    OFFSETS = 646, OLD_ACCOUNT = 647, OLD_PASSWORD = 648, ON = 649, ONLINE = 650, 
    ONLY = 651, ON_FAILURE = 652, OPEN = 653, OPENDATASOURCE = 654, OPENJSON = 655, 
    OPENQUERY = 656, OPENROWSET = 657, OPENXML = 658, OPEN_EXISTING = 659, 
    OPERATIONS = 660, OPTIMISTIC = 661, OPTIMIZE = 662, OPTIMIZE_FOR_SEQUENTIAL_KEY = 663, 
    OPTION = 664, OR = 665, ORDER = 666, ORIGINAL_DB_NAME = 667, ORIGINAL_LOGIN = 668, 
    OUT = 669, OUTER = 670, OUTPUT = 671, OVER = 672, OVERRIDE = 673, OWNER = 674, 
    OWNERSHIP = 675, PAD_INDEX = 676, PAGE = 677, PAGECOUNT = 678, PAGE_VERIFY = 679, 
    PAGLOCK = 680, PARAMETERIZATION = 681, PARAM_NODE = 682, PARSE = 683, 
    PARSENAME = 684, PARSEONLY = 685, PARTIAL = 686, PARTITION = 687, PARTITIONS = 688, 
    PARTNER = 689, PASSWORD = 690, PATH = 691, PATINDEX = 692, PAUSE = 693, 
    PDW_SHOWSPACEUSED = 694, PERCENT = 695, PERCENTILE_CONT = 696, PERCENTILE_DISC = 697, 
    PERCENT_RANK = 698, PERMISSIONS = 699, PERMISSION_SET = 700, PERSISTED = 701, 
    PERSIST_SAMPLE_PERCENT = 702, PER_CPU = 703, PER_DB = 704, PER_NODE = 705, 
    PHYSICAL_ONLY = 706, PIVOT = 707, PLAN = 708, PLATFORM = 709, POISON_MESSAGE_HANDLING = 710, 
    POLICY = 711, POOL = 712, PORT = 713, PRECEDING = 714, PRECISION = 715, 
    PREDICATE = 716, PRIMARY = 717, PRIMARY_ROLE = 718, PRINT = 719, PRIOR = 720, 
    PRIORITY = 721, PRIORITY_LEVEL = 722, PRIVATE = 723, PRIVATE_KEY = 724, 
    PRIVILEGES = 725, PROC = 726, PROCCACHE = 727, PROCEDURE = 728, PROCEDURE_NAME = 729, 
    PROCESS = 730, PROFILE = 731, PROPERTY = 732, PROVIDER = 733, PROVIDER_KEY_NAME = 734, 
    PUBLIC = 735, PWDCOMPARE = 736, PWDENCRYPT = 737, PYTHON = 738, QUERY = 739, 
    QUERY_SQUARE_BRACKET = 740, QUEUE = 741, QUEUE_DELAY = 742, QUOTED_IDENTIFIER = 743, 
    QUOTENAME = 744, R = 745, RAISERROR = 746, RANDOMIZED = 747, RANGE = 748, 
    RANK = 749, RAW = 750, RC2 = 751, RC4 = 752, RC4_128 = 753, READ = 754, 
    READCOMMITTED = 755, READCOMMITTEDLOCK = 756, READONLY = 757, READPAST = 758, 
    READTEXT = 759, READUNCOMMITTED = 760, READWRITE = 761, READ_COMMITTED_SNAPSHOT = 762, 
    READ_ONLY = 763, READ_ONLY_ROUTING_LIST = 764, READ_WRITE = 765, READ_WRITE_FILEGROUPS = 766, 
    REBUILD = 767, RECEIVE = 768, RECOMPILE = 769, RECONFIGURE = 770, RECOVERY = 771, 
    RECURSIVE_TRIGGERS = 772, REFERENCES = 773, REGENERATE = 774, RELATED_CONVERSATION = 775, 
    RELATED_CONVERSATION_GROUP = 776, RELATIVE = 777, REMOTE = 778, REMOTE_PROC_TRANSACTIONS = 779, 
    REMOTE_SERVICE_NAME = 780, REMOVE = 781, REORGANIZE = 782, REPAIR_ALLOW_DATA_LOSS = 783, 
    REPAIR_FAST = 784, REPAIR_REBUILD = 785, REPEATABLE = 786, REPEATABLEREAD = 787, 
    REPLACE = 788, REPLICA = 789, REPLICATE = 790, REPLICATION = 791, REQUEST_MAX_CPU_TIME_SEC = 792, 
    REQUEST_MAX_MEMORY_GRANT_PERCENT = 793, REQUEST_MEMORY_GRANT_TIMEOUT_SEC = 794, 
    REQUIRED = 795, REQUIRED_SYNCHRONIZED_SECONDARIES_TO_COMMIT = 796, RESAMPLE = 797, 
    RESERVE_DISK_SPACE = 798, RESET = 799, RESOURCE = 800, RESOURCES = 801, 
    RESOURCE_MANAGER_LOCATION = 802, RESTART = 803, RESTORE = 804, RESTRICT = 805, 
    RESTRICTED_USER = 806, RESUMABLE = 807, RESUME = 808, RETAINDAYS = 809, 
    RETENTION = 810, RETURN = 811, RETURNS = 812, REVERSE = 813, REVERT = 814, 
    REVOKE = 815, REWIND = 816, RIGHT = 817, ROBUST = 818, ROLE = 819, ROLLBACK = 820, 
    ROOT = 821, ROUND_ROBIN = 822, ROUTE = 823, ROW = 824, ROWCOUNT = 825, 
    ROWCOUNT_BIG = 826, ROWGUID = 827, ROWGUIDCOL = 828, ROWLOCK = 829, 
    ROWS = 830, ROW_NUMBER = 831, RSA_1024 = 832, RSA_2048 = 833, RSA_3072 = 834, 
    RSA_4096 = 835, RSA_512 = 836, RTRIM = 837, RULE = 838, SAFE = 839, 
    SAFETY = 840, SAMPLE = 841, SAVE = 842, SCHEDULER = 843, SCHEMA = 844, 
    SCHEMABINDING = 845, SCHEMA_ID = 846, SCHEMA_NAME = 847, SCHEME = 848, 
    SCOPED = 849, SCOPE_IDENTITY = 850, SCRIPT = 851, SCROLL = 852, SCROLL_LOCKS = 853, 
    SEARCH = 854, SECONDARY = 855, SECONDARY_ONLY = 856, SECONDARY_ROLE = 857, 
    SECONDS = 858, SECRET = 859, SECURABLES = 860, SECURITY = 861, SECURITYAUDIT = 862, 
    SECURITY_LOG = 863, SEEDING_MODE = 864, SELECT = 865, SELF = 866, SEMANTICKEYPHRASETABLE = 867, 
    SEMANTICSIMILARITYDETAILSTABLE = 868, SEMANTICSIMILARITYTABLE = 869, 
    SEMI_SENSITIVE = 870, SEND = 871, SENT = 872, SEQUENCE = 873, SEQUENCE_NUMBER = 874, 
    SERIALIZABLE = 875, SERVER = 876, SERVERPROPERTY = 877, SERVICE = 878, 
    SERVICEBROKER = 879, SERVICE_BROKER = 880, SERVICE_NAME = 881, SESSION = 882, 
    SESSIONPROPERTY = 883, SESSION_CONTEXT = 884, SESSION_TIMEOUT = 885, 
    SESSION_USER = 886, SET = 887, SETERROR = 888, SETS = 889, SETTINGS = 890, 
    SETUSER = 891, SHARE = 892, SHARED = 893, SHOWCONTIG = 894, SHOWPLAN = 895, 
    SHOWPLAN_ALL = 896, SHOWPLAN_TEXT = 897, SHOWPLAN_XML = 898, SHRINKLOG = 899, 
    SHUTDOWN = 900, SID = 901, SIGNATURE = 902, SIMPLE = 903, SINGLE_USER = 904, 
    SIZE = 905, SKIP_KEYWORD = 906, SMALLINT = 907, SNAPSHOT = 908, SOFTNUMA = 909, 
    SOME = 910, SORT_IN_TEMPDB = 911, SOUNDEX = 912, SOURCE = 913, SPACE_KEYWORD = 914, 
    SPARSE = 915, SPATIAL_WINDOW_MAX_CELLS = 916, SPECIFICATION = 917, SPLIT = 918, 
    SQL = 919, SQLDUMPERFLAGS = 920, SQLDUMPERPATH = 921, SQLDUMPERTIMEOUT = 922, 
    SQL_VARIANT_PROPERTY = 923, STANDBY = 924, START = 925, STARTED = 926, 
    STARTUP_STATE = 927, START_DATE = 928, STATE = 929, STATIC = 930, STATISTICS = 931, 
    STATISTICS_INCREMENTAL = 932, STATISTICS_NORECOMPUTE = 933, STATS = 934, 
    STATS_DATE = 935, STATS_STREAM = 936, STATUS = 937, STATUSONLY = 938, 
    STDEV = 939, STDEVP = 940, STOP = 941, STOPLIST = 942, STOPPED = 943, 
    STOP_ON_ERROR = 944, STR = 945, STRING_AGG = 946, STRING_ESCAPE = 947, 
    STUFF = 948, SUBJECT = 949, SUBSCRIBE = 950, SUBSCRIPTION = 951, SUBSTRING = 952, 
    SUM = 953, SUPPORTED = 954, SUSER_ID = 955, SUSER_NAME = 956, SUSER_SID = 957, 
    SUSER_SNAME = 958, SUSPEND = 959, SWITCH = 960, SYMMETRIC = 961, SYNCHRONOUS_COMMIT = 962, 
    SYNONYM = 963, SYSTEM = 964, SYSTEM_USER = 965, TABLE = 966, TABLERESULTS = 967, 
    TABLESAMPLE = 968, TABLOCK = 969, TABLOCKX = 970, TAKE = 971, TAPE = 972, 
    TARGET = 973, TARGET_RECOVERY_TIME = 974, TB = 975, TCP = 976, TEXTIMAGE_ON = 977, 
    TEXTSIZE = 978, THEN = 979, THROW = 980, TIES = 981, TIME = 982, TIMEOUT = 983, 
    TIMER = 984, TINYINT = 985, TO = 986, TOP = 987, TORN_PAGE_DETECTION = 988, 
    TOSTRING = 989, TRACE = 990, TRACKING = 991, TRACK_CAUSALITY = 992, 
    TRAN = 993, TRANSACTION = 994, TRANSACTION_ID = 995, TRANSFER = 996, 
    TRANSFORM_NOISE_WORDS = 997, TRANSLATE = 998, TRIGGER = 999, TRIM = 1000, 
    TRIPLE_DES = 1001, TRIPLE_DES_3KEY = 1002, TRUNCATE = 1003, TRUSTWORTHY = 1004, 
    TRY = 1005, TRY_CAST = 1006, TSEQUAL = 1007, TSQL = 1008, TWO_DIGIT_YEAR_CUTOFF = 1009, 
    TYPE = 1010, TYPEPROPERTY = 1011, TYPE_ID = 1012, TYPE_NAME = 1013, 
    TYPE_WARNING = 1014, UNBOUNDED = 1015, UNCHECKED = 1016, UNCOMMITTED = 1017, 
    UNICODE = 1018, UNION = 1019, UNIQUE = 1020, UNKNOWN = 1021, UNLIMITED = 1022, 
    UNLOCK = 1023, UNMASK = 1024, UNPIVOT = 1025, UNSAFE = 1026, UOW = 1027, 
    UPDATE = 1028, UPDATETEXT = 1029, UPDLOCK = 1030, UPPER = 1031, URL = 1032, 
    USE = 1033, USED = 1034, USER = 1035, USER_ID = 1036, USER_NAME = 1037, 
    USING = 1038, VALIDATION = 1039, VALID_XML = 1040, VALUE = 1041, VALUES = 1042, 
    VALUE_SQUARE_BRACKET = 1043, VAR = 1044, VARBINARY_KEYWORD = 1045, VARP = 1046, 
    VARYING = 1047, VERBOSELOGGING = 1048, VERIFY_CLONEDB = 1049, VERSION = 1050, 
    VIEW = 1051, VIEWS = 1052, VIEW_METADATA = 1053, VISIBILITY = 1054, 
    WAIT = 1055, WAITFOR = 1056, WAIT_AT_LOW_PRIORITY = 1057, WELL_FORMED_XML = 1058, 
    WHEN = 1059, WHERE = 1060, WHILE = 1061, WINDOWS = 1062, WITH = 1063, 
    WITHIN = 1064, WITHOUT = 1065, WITHOUT_ARRAY_WRAPPER = 1066, WITNESS = 1067, 
    WORK = 1068, WORKLOAD = 1069, WRITETEXT = 1070, XACT_ABORT = 1071, XACT_STATE = 1072, 
    XLOCK = 1073, XML = 1074, XMLDATA = 1075, XMLNAMESPACES = 1076, XMLSCHEMA = 1077, 
    XML_COMPRESSION = 1078, XSINIL = 1079, ZONE = 1080, ABS = 1081, ACOS = 1082, 
    ASIN = 1083, ATAN = 1084, ATN2 = 1085, CEILING = 1086, COS = 1087, COT = 1088, 
    DEGREES = 1089, EXP = 1090, FLOOR = 1091, LOG10 = 1092, PI = 1093, POWER = 1094, 
    RADIANS = 1095, RAND = 1096, ROUND = 1097, SIGN = 1098, SIN = 1099, 
    SQRT = 1100, SQUARE = 1101, TAN = 1102, CURRENT_TIMEZONE = 1103, CURRENT_TIMEZONE_ID = 1104, 
    DATE_BUCKET = 1105, DATEDIFF_BIG = 1106, DATEFROMPARTS = 1107, DATETIME2FROMPARTS = 1108, 
    DATETIMEFROMPARTS = 1109, DATETIMEOFFSETFROMPARTS = 1110, DATETRUNC = 1111, 
    DAY = 1112, EOMONTH = 1113, ISDATE = 1114, MONTH = 1115, SMALLDATETIMEFROMPARTS = 1116, 
    SWITCHOFFSET = 1117, SYSDATETIME = 1118, SYSDATETIMEOFFSET = 1119, SYSUTCDATETIME = 1120, 
    TIMEFROMPARTS = 1121, TODATETIMEOFFSET = 1122, YEAR = 1123, QUARTER = 1124, 
    DAYOFYEAR = 1125, WEEK = 1126, HOUR = 1127, MINUTE = 1128, SECOND = 1129, 
    MILLISECOND = 1130, MICROSECOND = 1131, NANOSECOND = 1132, TZOFFSET = 1133, 
    ISO_WEEK = 1134, WEEKDAY = 1135, YEAR_ABBR = 1136, QUARTER_ABBR = 1137, 
    MONTH_ABBR = 1138, DAYOFYEAR_ABBR = 1139, DAY_ABBR = 1140, WEEK_ABBR = 1141, 
    HOUR_ABBR = 1142, MINUTE_ABBR = 1143, SECOND_ABBR = 1144, MILLISECOND_ABBR = 1145, 
    MICROSECOND_ABBR = 1146, NANOSECOND_ABBR = 1147, TZOFFSET_ABBR = 1148, 
    ISO_WEEK_ABBR = 1149, WEEKDAY_ABBR = 1150, SP_EXECUTESQL = 1151, VARCHAR = 1152, 
    NVARCHAR = 1153, DISK_DRIVE = 1154, DOLLAR_ACTION = 1155, CURSOR_ROWS = 1156, 
    FETCH_STATUS = 1157, IPV4_ADDR = 1158, SPACE = 1159, COMMENT = 1160, 
    LINE_COMMENT = 1161, DOUBLE_QUOTE_ID = 1162, DOUBLE_QUOTE_BLANK = 1163, 
    SINGLE_QUOTE = 1164, SQUARE_BRACKET_ID = 1165, LOCAL_ID = 1166, TEMP_ID = 1167, 
    DECIMAL = 1168, ID = 1169, STRING = 1170, BINARY = 1171, FLOAT = 1172, 
    REAL = 1173, EQUAL = 1174, GREATER = 1175, LESS = 1176, EXCLAMATION = 1177, 
    PLUS_ASSIGN = 1178, MINUS_ASSIGN = 1179, MULT_ASSIGN = 1180, DIV_ASSIGN = 1181, 
    MOD_ASSIGN = 1182, AND_ASSIGN = 1183, XOR_ASSIGN = 1184, OR_ASSIGN = 1185, 
    DOUBLE_BAR = 1186, DOT = 1187, UNDERLINE = 1188, AT = 1189, SHARP = 1190, 
    DOLLAR = 1191, LR_BRACKET = 1192, RR_BRACKET = 1193, COMMA = 1194, SEMI = 1195, 
    COLON = 1196, DOUBLE_COLON = 1197, STAR = 1198, DIVIDE = 1199, MODULE = 1200, 
    PLUS = 1201, MINUS = 1202, BIT_NOT = 1203, BIT_OR = 1204, BIT_AND = 1205, 
    BIT_XOR = 1206, PLACEHOLDER = 1207
  };

  enum {
    RuleTsql_file = 0, RuleBatch = 1, RuleBatch_level_statement = 2, RuleSql_clauses = 3, 
    RuleDml_clause = 4, RuleDdl_clause = 5, RuleBackup_statement = 6, RuleCfl_statement = 7, 
    RuleBlock_statement = 8, RuleBreak_statement = 9, RuleContinue_statement = 10, 
    RuleGoto_statement = 11, RuleReturn_statement = 12, RuleIf_statement = 13, 
    RuleThrow_statement = 14, RuleThrow_error_number = 15, RuleThrow_message = 16, 
    RuleThrow_state = 17, RuleTry_catch_statement = 18, RuleWaitfor_statement = 19, 
    RuleWhile_statement = 20, RulePrint_statement = 21, RuleRaiseerror_statement = 22, 
    RuleEmpty_statement = 23, RuleAnother_statement = 24, RuleAlter_application_role = 25, 
    RuleAlter_xml_schema_collection = 26, RuleCreate_application_role = 27, 
    RuleDrop_aggregate = 28, RuleDrop_application_role = 29, RuleAlter_assembly = 30, 
    RuleAlter_assembly_start = 31, RuleAlter_assembly_clause = 32, RuleAlter_assembly_from_clause = 33, 
    RuleAlter_assembly_from_clause_start = 34, RuleAlter_assembly_drop_clause = 35, 
    RuleAlter_assembly_drop_multiple_files = 36, RuleAlter_assembly_drop = 37, 
    RuleAlter_assembly_add_clause = 38, RuleAlter_asssembly_add_clause_start = 39, 
    RuleAlter_assembly_client_file_clause = 40, RuleAlter_assembly_file_name = 41, 
    RuleAlter_assembly_file_bits = 42, RuleAlter_assembly_as = 43, RuleAlter_assembly_with_clause = 44, 
    RuleAlter_assembly_with = 45, RuleClient_assembly_specifier = 46, RuleAssembly_option = 47, 
    RuleNetwork_file_share = 48, RuleNetwork_computer = 49, RuleNetwork_file_start = 50, 
    RuleFile_path = 51, RuleFile_directory_path_separator = 52, RuleLocal_file = 53, 
    RuleLocal_drive = 54, RuleMultiple_local_files = 55, RuleMultiple_local_file_start = 56, 
    RuleCreate_assembly = 57, RuleDrop_assembly = 58, RuleAlter_asymmetric_key = 59, 
    RuleAlter_asymmetric_key_start = 60, RuleAsymmetric_key_option = 61, 
    RuleAsymmetric_key_option_start = 62, RuleAsymmetric_key_password_change_option = 63, 
    RuleCreate_asymmetric_key = 64, RuleDrop_asymmetric_key = 65, RuleAlter_authorization = 66, 
    RuleAuthorization_grantee = 67, RuleEntity_to = 68, RuleColon_colon = 69, 
    RuleAlter_authorization_start = 70, RuleAlter_authorization_for_sql_database = 71, 
    RuleAlter_authorization_for_azure_dw = 72, RuleAlter_authorization_for_parallel_dw = 73, 
    RuleClass_type = 74, RuleClass_type_for_sql_database = 75, RuleClass_type_for_azure_dw = 76, 
    RuleClass_type_for_parallel_dw = 77, RuleClass_type_for_grant = 78, 
    RuleDrop_availability_group = 79, RuleAlter_availability_group = 80, 
    RuleAlter_availability_group_start = 81, RuleAlter_availability_group_options = 82, 
    RuleIp_v4_failover = 83, RuleIp_v6_failover = 84, RuleCreate_or_alter_broker_priority = 85, 
    RuleDrop_broker_priority = 86, RuleAlter_certificate = 87, RuleAlter_column_encryption_key = 88, 
    RuleCreate_column_encryption_key = 89, RuleDrop_certificate = 90, RuleDrop_column_encryption_key = 91, 
    RuleDrop_column_master_key = 92, RuleDrop_contract = 93, RuleDrop_credential = 94, 
    RuleDrop_cryptograhic_provider = 95, RuleDrop_database = 96, RuleDrop_database_audit_specification = 97, 
    RuleDrop_database_encryption_key = 98, RuleDrop_database_scoped_credential = 99, 
    RuleDrop_default = 100, RuleDrop_endpoint = 101, RuleDrop_external_data_source = 102, 
    RuleDrop_external_file_format = 103, RuleDrop_external_library = 104, 
    RuleDrop_external_resource_pool = 105, RuleDrop_external_table = 106, 
    RuleDrop_event_notifications = 107, RuleDrop_event_session = 108, RuleDrop_fulltext_catalog = 109, 
    RuleDrop_fulltext_index = 110, RuleDrop_fulltext_stoplist = 111, RuleDrop_login = 112, 
    RuleDrop_master_key = 113, RuleDrop_message_type = 114, RuleDrop_partition_function = 115, 
    RuleDrop_partition_scheme = 116, RuleDrop_queue = 117, RuleDrop_remote_service_binding = 118, 
    RuleDrop_resource_pool = 119, RuleDrop_db_role = 120, RuleDrop_route = 121, 
    RuleDrop_rule = 122, RuleDrop_schema = 123, RuleDrop_search_property_list = 124, 
    RuleDrop_security_policy = 125, RuleDrop_sequence = 126, RuleDrop_server_audit = 127, 
    RuleDrop_server_audit_specification = 128, RuleDrop_server_role = 129, 
    RuleDrop_service = 130, RuleDrop_signature = 131, RuleDrop_statistics_name_azure_dw_and_pdw = 132, 
    RuleDrop_symmetric_key = 133, RuleDrop_synonym = 134, RuleDrop_user = 135, 
    RuleDrop_workload_group = 136, RuleDrop_xml_schema_collection = 137, 
    RuleDisable_trigger = 138, RuleEnable_trigger = 139, RuleLock_table = 140, 
    RuleTruncate_table = 141, RuleCreate_column_master_key = 142, RuleAlter_credential = 143, 
    RuleCreate_credential = 144, RuleAlter_cryptographic_provider = 145, 
    RuleCreate_cryptographic_provider = 146, RuleCreate_endpoint = 147, 
    RuleEndpoint_encryption_alogorithm_clause = 148, RuleEndpoint_authentication_clause = 149, 
    RuleEndpoint_listener_clause = 150, RuleCreate_event_notification = 151, 
    RuleCreate_or_alter_event_session = 152, RuleEvent_session_predicate_expression = 153, 
    RuleEvent_session_predicate_factor = 154, RuleEvent_session_predicate_leaf = 155, 
    RuleAlter_external_data_source = 156, RuleAlter_external_library = 157, 
    RuleCreate_external_library = 158, RuleAlter_external_resource_pool = 159, 
    RuleCreate_external_resource_pool = 160, RuleAlter_fulltext_catalog = 161, 
    RuleCreate_fulltext_catalog = 162, RuleAlter_fulltext_stoplist = 163, 
    RuleCreate_fulltext_stoplist = 164, RuleAlter_login_sql_server = 165, 
    RuleCreate_login_sql_server = 166, RuleAlter_login_azure_sql = 167, 
    RuleCreate_login_azure_sql = 168, RuleAlter_login_azure_sql_dw_and_pdw = 169, 
    RuleCreate_login_pdw = 170, RuleAlter_master_key_sql_server = 171, RuleCreate_master_key_sql_server = 172, 
    RuleAlter_master_key_azure_sql = 173, RuleCreate_master_key_azure_sql = 174, 
    RuleAlter_message_type = 175, RuleAlter_partition_function = 176, RuleAlter_partition_scheme = 177, 
    RuleAlter_remote_service_binding = 178, RuleCreate_remote_service_binding = 179, 
    RuleCreate_resource_pool = 180, RuleAlter_resource_governor = 181, RuleAlter_database_audit_specification = 182, 
    RuleAudit_action_spec_group = 183, RuleAudit_action_specification = 184, 
    RuleAction_specification = 185, RuleAudit_class_name = 186, RuleAudit_securable = 187, 
    RuleAlter_db_role = 188, RuleCreate_database_audit_specification = 189, 
    RuleCreate_db_role = 190, RuleCreate_route = 191, RuleCreate_rule = 192, 
    RuleAlter_schema_sql = 193, RuleCreate_schema = 194, RuleCreate_schema_azure_sql_dw_and_pdw = 195, 
    RuleAlter_schema_azure_sql_dw_and_pdw = 196, RuleCreate_search_property_list = 197, 
    RuleCreate_security_policy = 198, RuleAlter_sequence = 199, RuleCreate_sequence = 200, 
    RuleAlter_server_audit = 201, RuleCreate_server_audit = 202, RuleAlter_server_audit_specification = 203, 
    RuleCreate_server_audit_specification = 204, RuleAlter_server_configuration = 205, 
    RuleAlter_server_role = 206, RuleCreate_server_role = 207, RuleAlter_server_role_pdw = 208, 
    RuleAlter_service = 209, RuleOpt_arg_clause = 210, RuleCreate_service = 211, 
    RuleAlter_service_master_key = 212, RuleAlter_symmetric_key = 213, RuleCreate_synonym = 214, 
    RuleAlter_user = 215, RuleCreate_user = 216, RuleCreate_user_azure_sql_dw = 217, 
    RuleAlter_user_azure_sql = 218, RuleAlter_workload_group = 219, RuleCreate_workload_group = 220, 
    RuleCreate_xml_schema_collection = 221, RuleCreate_partition_function = 222, 
    RuleCreate_partition_scheme = 223, RuleCreate_queue = 224, RuleQueue_settings = 225, 
    RuleAlter_queue = 226, RuleQueue_action = 227, RuleQueue_rebuild_options = 228, 
    RuleCreate_contract = 229, RuleConversation_statement = 230, RuleMessage_statement = 231, 
    RuleMerge_statement = 232, RuleWhen_matches = 233, RuleMerge_matched = 234, 
    RuleMerge_not_matched = 235, RuleDelete_statement = 236, RuleDelete_statement_from = 237, 
    RuleInsert_statement = 238, RuleInsert_statement_value = 239, RuleReceive_statement = 240, 
    RuleSelect_statement_standalone = 241, RuleSelect_statement = 242, RuleTime = 243, 
    RuleUpdate_statement = 244, RuleOutput_clause = 245, RuleOutput_dml_list_elem = 246, 
    RuleCreate_database = 247, RuleCreate_index = 248, RuleCreate_index_options = 249, 
    RuleRelational_index_option = 250, RuleAlter_index = 251, RuleResumable_index_options = 252, 
    RuleResumable_index_option = 253, RuleReorganize_partition = 254, RuleReorganize_options = 255, 
    RuleReorganize_option = 256, RuleSet_index_options = 257, RuleSet_index_option = 258, 
    RuleRebuild_partition = 259, RuleRebuild_index_options = 260, RuleRebuild_index_option = 261, 
    RuleSingle_partition_rebuild_index_options = 262, RuleSingle_partition_rebuild_index_option = 263, 
    RuleOn_partitions = 264, RuleCreate_columnstore_index = 265, RuleCreate_columnstore_index_options = 266, 
    RuleColumnstore_index_option = 267, RuleCreate_nonclustered_columnstore_index = 268, 
    RuleCreate_xml_index = 269, RuleXml_index_options = 270, RuleXml_index_option = 271, 
    RuleCreate_or_alter_procedure = 272, RuleAs_external_name = 273, RuleCreate_or_alter_trigger = 274, 
    RuleCreate_or_alter_dml_trigger = 275, RuleDml_trigger_option = 276, 
    RuleDml_trigger_operation = 277, RuleCreate_or_alter_ddl_trigger = 278, 
    RuleDdl_trigger_operation = 279, RuleCreate_or_alter_function = 280, 
    RuleFunc_body_returns_select = 281, RuleFunc_body_returns_table = 282, 
    RuleFunc_body_returns_scalar = 283, RuleProcedure_param_default_value = 284, 
    RuleProcedure_param = 285, RuleProcedure_option = 286, RuleFunction_option = 287, 
    RuleCreate_statistics = 288, RuleUpdate_statistics = 289, RuleUpdate_statistics_options = 290, 
    RuleUpdate_statistics_option = 291, RuleCreate_table = 292, RuleTable_indices = 293, 
    RuleTable_options = 294, RuleTable_option = 295, RuleCreate_table_index_options = 296, 
    RuleCreate_table_index_option = 297, RuleCreate_view = 298, RuleView_attribute = 299, 
    RuleAlter_table = 300, RuleSwitch_partition = 301, RuleLow_priority_lock_wait = 302, 
    RuleAlter_database = 303, RuleAdd_or_modify_files = 304, RuleFilespec = 305, 
    RuleAdd_or_modify_filegroups = 306, RuleFilegroup_updatability_option = 307, 
    RuleDatabase_optionspec = 308, RuleAuto_option = 309, RuleChange_tracking_option = 310, 
    RuleChange_tracking_option_list = 311, RuleContainment_option = 312, 
    RuleCursor_option = 313, RuleAlter_endpoint = 314, RuleDatabase_mirroring_option = 315, 
    RuleMirroring_set_option = 316, RuleMirroring_partner = 317, RuleMirroring_witness = 318, 
    RuleWitness_partner_equal = 319, RulePartner_option = 320, RuleWitness_option = 321, 
    RuleWitness_server = 322, RulePartner_server = 323, RuleMirroring_host_port_seperator = 324, 
    RulePartner_server_tcp_prefix = 325, RulePort_number = 326, RuleHost = 327, 
    RuleDate_correlation_optimization_option = 328, RuleDb_encryption_option = 329, 
    RuleDb_state_option = 330, RuleDb_update_option = 331, RuleDb_user_access_option = 332, 
    RuleDelayed_durability_option = 333, RuleExternal_access_option = 334, 
    RuleHadr_options = 335, RuleMixed_page_allocation_option = 336, RuleParameterization_option = 337, 
    RuleRecovery_option = 338, RuleService_broker_option = 339, RuleSnapshot_option = 340, 
    RuleSql_option = 341, RuleTarget_recovery_time_option = 342, RuleTermination = 343, 
    RuleDrop_index = 344, RuleDrop_relational_or_xml_or_spatial_index = 345, 
    RuleDrop_backward_compatible_index = 346, RuleDrop_procedure = 347, 
    RuleDrop_trigger = 348, RuleDrop_dml_trigger = 349, RuleDrop_ddl_trigger = 350, 
    RuleDrop_function = 351, RuleDrop_statistics = 352, RuleDrop_table = 353, 
    RuleDrop_view = 354, RuleCreate_type = 355, RuleDrop_type = 356, RuleRowset_function_limited = 357, 
    RuleOpenquery = 358, RuleOpendatasource = 359, RuleDeclare_statement = 360, 
    RuleXml_declaration = 361, RuleCursor_statement = 362, RuleBackup_database = 363, 
    RuleBackup_log = 364, RuleBackup_certificate = 365, RuleBackup_master_key = 366, 
    RuleBackup_service_master_key = 367, RuleKill_statement = 368, RuleKill_process = 369, 
    RuleKill_query_notification = 370, RuleKill_stats_job = 371, RuleExecute_statement = 372, 
    RuleExecute_body_batch = 373, RuleExecute_body = 374, RuleExecute_statement_arg = 375, 
    RuleExecute_statement_arg_named = 376, RuleExecute_statement_arg_unnamed = 377, 
    RuleExecute_parameter = 378, RuleExecute_var_string = 379, RuleSecurity_statement = 380, 
    RulePrincipal_id = 381, RuleCreate_certificate = 382, RuleExisting_keys = 383, 
    RulePrivate_key_options = 384, RuleGenerate_new_keys = 385, RuleDate_options = 386, 
    RuleOpen_key = 387, RuleClose_key = 388, RuleCreate_key = 389, RuleKey_options = 390, 
    RuleAlgorithm = 391, RuleEncryption_mechanism = 392, RuleDecryption_mechanism = 393, 
    RuleGrant_permission = 394, RuleSet_statement = 395, RuleTransaction_statement = 396, 
    RuleGo_statement = 397, RuleUse_statement = 398, RuleSetuser_statement = 399, 
    RuleReconfigure_statement = 400, RuleShutdown_statement = 401, RuleCheckpoint_statement = 402, 
    RuleDbcc_checkalloc_option = 403, RuleDbcc_checkalloc = 404, RuleDbcc_checkcatalog = 405, 
    RuleDbcc_checkconstraints_option = 406, RuleDbcc_checkconstraints = 407, 
    RuleDbcc_checkdb_table_option = 408, RuleDbcc_checkdb = 409, RuleDbcc_checkfilegroup_option = 410, 
    RuleDbcc_checkfilegroup = 411, RuleDbcc_checktable = 412, RuleDbcc_cleantable = 413, 
    RuleDbcc_clonedatabase_option = 414, RuleDbcc_clonedatabase = 415, RuleDbcc_pdw_showspaceused = 416, 
    RuleDbcc_proccache = 417, RuleDbcc_showcontig_option = 418, RuleDbcc_showcontig = 419, 
    RuleDbcc_shrinklog = 420, RuleDbcc_dbreindex = 421, RuleDbcc_dll_free = 422, 
    RuleDbcc_dropcleanbuffers = 423, RuleDbcc_clause = 424, RuleExecute_clause = 425, 
    RuleDeclare_local = 426, RuleTable_type_definition = 427, RuleTable_type_indices = 428, 
    RuleXml_type_definition = 429, RuleXml_schema_collection = 430, RuleColumn_def_table_constraints = 431, 
    RuleColumn_def_table_constraint = 432, RuleColumn_definition = 433, 
    RuleColumn_definition_element = 434, RuleColumn_modifier = 435, RuleMaterialized_column_definition = 436, 
    RuleColumn_constraint = 437, RuleColumn_index = 438, RuleOn_partition_or_filegroup = 439, 
    RuleTable_constraint = 440, RuleConnection_node = 441, RulePrimary_key_options = 442, 
    RuleForeign_key_options = 443, RuleCheck_constraint = 444, RuleOn_delete = 445, 
    RuleOn_update = 446, RuleAlter_table_index_options = 447, RuleAlter_table_index_option = 448, 
    RuleDeclare_cursor = 449, RuleDeclare_set_cursor_common = 450, RuleDeclare_set_cursor_common_partial = 451, 
    RuleFetch_cursor = 452, RuleSet_special = 453, RuleSpecial_list = 454, 
    RuleConstant_LOCAL_ID = 455, RuleExpression = 456, RuleParameter = 457, 
    RuleTime_zone = 458, RulePrimitive_expression = 459, RuleCase_expression = 460, 
    RuleUnary_operator_expression = 461, RuleBracket_expression = 462, RuleSubquery = 463, 
    RuleWith_expression = 464, RuleCommon_table_expression = 465, RuleUpdate_elem = 466, 
    RuleUpdate_elem_merge = 467, RuleSearch_condition = 468, RulePredicate = 469, 
    RuleQuery_expression = 470, RuleSql_union = 471, RuleQuery_specification = 472, 
    RuleTop_clause = 473, RuleTop_percent = 474, RuleTop_count = 475, RuleOrder_by_clause = 476, 
    RuleSelect_order_by_clause = 477, RuleFor_clause = 478, RuleXml_common_directives = 479, 
    RuleOrder_by_expression = 480, RuleGrouping_sets_item = 481, RuleGroup_by_item = 482, 
    RuleOption_clause = 483, RuleOption = 484, RuleOptimize_for_arg = 485, 
    RuleSelect_list = 486, RuleUdt_method_arguments = 487, RuleAsterisk = 488, 
    RuleUdt_elem = 489, RuleExpression_elem = 490, RuleSelect_list_elem = 491, 
    RuleTable_sources = 492, RuleNon_ansi_join = 493, RuleTable_source = 494, 
    RuleTable_source_item = 495, RuleOpen_xml = 496, RuleOpen_json = 497, 
    RuleJson_declaration = 498, RuleJson_column_declaration = 499, RuleSchema_declaration = 500, 
    RuleColumn_declaration = 501, RuleChange_table = 502, RuleChange_table_changes = 503, 
    RuleChange_table_version = 504, RuleJoin_part = 505, RuleJoin_on = 506, 
    RuleCross_join = 507, RuleApply_ = 508, RulePivot = 509, RuleUnpivot = 510, 
    RulePivot_clause = 511, RuleUnpivot_clause = 512, RuleFull_column_name_list = 513, 
    RuleRowset_function = 514, RuleBulk_option = 515, RuleDerived_table = 516, 
    RuleFunction_call = 517, RulePartition_function = 518, RuleFreetext_function = 519, 
    RuleFreetext_predicate = 520, RuleJson_key_value = 521, RuleJson_null_clause = 522, 
    RuleBuilt_in_functions = 523, RuleXml_data_type_methods = 524, RuleDateparts_9 = 525, 
    RuleDateparts_12 = 526, RuleDateparts_15 = 527, RuleDateparts_datetrunc = 528, 
    RuleValue_method = 529, RuleValue_call = 530, RuleQuery_method = 531, 
    RuleQuery_call = 532, RuleExist_method = 533, RuleExist_call = 534, 
    RuleModify_method = 535, RuleModify_call = 536, RuleHierarchyid_call = 537, 
    RuleHierarchyid_static_method = 538, RuleNodes_method = 539, RuleSwitch_section = 540, 
    RuleSwitch_search_condition_section = 541, RuleAs_column_alias = 542, 
    RuleAs_table_alias = 543, RuleTable_alias = 544, RuleWith_table_hints = 545, 
    RuleDeprecated_table_hint = 546, RuleSybase_legacy_hints = 547, RuleSybase_legacy_hint = 548, 
    RuleTable_hint = 549, RuleIndex_value = 550, RuleColumn_alias_list = 551, 
    RuleColumn_alias = 552, RuleTable_value_constructor = 553, RuleExpression_list_ = 554, 
    RuleRanking_windowed_function = 555, RuleAggregate_windowed_function = 556, 
    RuleAnalytic_windowed_function = 557, RuleAll_distinct_expression = 558, 
    RuleOver_clause = 559, RuleRow_or_range_clause = 560, RuleWindow_frame_extent = 561, 
    RuleWindow_frame_bound = 562, RuleWindow_frame_preceding = 563, RuleWindow_frame_following = 564, 
    RuleCreate_database_option = 565, RuleDatabase_filestream_option = 566, 
    RuleDatabase_file_spec = 567, RuleFile_group = 568, RuleFile_spec = 569, 
    RuleEntity_name = 570, RuleEntity_name_for_azure_dw = 571, RuleEntity_name_for_parallel_dw = 572, 
    RuleFull_table_name = 573, RuleTable_name = 574, RuleSimple_name = 575, 
    RuleFunc_proc_name_schema = 576, RuleFunc_proc_name_database_schema = 577, 
    RuleFunc_proc_name_server_database_schema = 578, RuleDdl_object = 579, 
    RuleFull_column_name = 580, RuleColumn_name_list_with_order = 581, RuleInsert_column_name_list = 582, 
    RuleInsert_column_id = 583, RuleColumn_name_list = 584, RuleCursor_name = 585, 
    RuleOn_off = 586, RuleClustered = 587, RuleNull_notnull = 588, RuleScalar_function_name = 589, 
    RuleBegin_conversation_timer = 590, RuleBegin_conversation_dialog = 591, 
    RuleContract_name = 592, RuleService_name = 593, RuleEnd_conversation = 594, 
    RuleWaitfor_conversation = 595, RuleGet_conversation = 596, RuleQueue_id = 597, 
    RuleSend_conversation = 598, RuleData_type = 599, RuleConstant = 600, 
    RulePrimitive_constant = 601, RuleKeyword = 602, RuleId_ = 603, RuleSimple_id = 604, 
    RuleId_or_string = 605, RuleComparison_operator = 606, RuleAssignment_operator = 607, 
    RuleFile_size = 608
  };

  explicit TSqlParser(antlr4::TokenStream *input);

  TSqlParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~TSqlParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Tsql_fileContext;
  class BatchContext;
  class Batch_level_statementContext;
  class Sql_clausesContext;
  class Dml_clauseContext;
  class Ddl_clauseContext;
  class Backup_statementContext;
  class Cfl_statementContext;
  class Block_statementContext;
  class Break_statementContext;
  class Continue_statementContext;
  class Goto_statementContext;
  class Return_statementContext;
  class If_statementContext;
  class Throw_statementContext;
  class Throw_error_numberContext;
  class Throw_messageContext;
  class Throw_stateContext;
  class Try_catch_statementContext;
  class Waitfor_statementContext;
  class While_statementContext;
  class Print_statementContext;
  class Raiseerror_statementContext;
  class Empty_statementContext;
  class Another_statementContext;
  class Alter_application_roleContext;
  class Alter_xml_schema_collectionContext;
  class Create_application_roleContext;
  class Drop_aggregateContext;
  class Drop_application_roleContext;
  class Alter_assemblyContext;
  class Alter_assembly_startContext;
  class Alter_assembly_clauseContext;
  class Alter_assembly_from_clauseContext;
  class Alter_assembly_from_clause_startContext;
  class Alter_assembly_drop_clauseContext;
  class Alter_assembly_drop_multiple_filesContext;
  class Alter_assembly_dropContext;
  class Alter_assembly_add_clauseContext;
  class Alter_asssembly_add_clause_startContext;
  class Alter_assembly_client_file_clauseContext;
  class Alter_assembly_file_nameContext;
  class Alter_assembly_file_bitsContext;
  class Alter_assembly_asContext;
  class Alter_assembly_with_clauseContext;
  class Alter_assembly_withContext;
  class Client_assembly_specifierContext;
  class Assembly_optionContext;
  class Network_file_shareContext;
  class Network_computerContext;
  class Network_file_startContext;
  class File_pathContext;
  class File_directory_path_separatorContext;
  class Local_fileContext;
  class Local_driveContext;
  class Multiple_local_filesContext;
  class Multiple_local_file_startContext;
  class Create_assemblyContext;
  class Drop_assemblyContext;
  class Alter_asymmetric_keyContext;
  class Alter_asymmetric_key_startContext;
  class Asymmetric_key_optionContext;
  class Asymmetric_key_option_startContext;
  class Asymmetric_key_password_change_optionContext;
  class Create_asymmetric_keyContext;
  class Drop_asymmetric_keyContext;
  class Alter_authorizationContext;
  class Authorization_granteeContext;
  class Entity_toContext;
  class Colon_colonContext;
  class Alter_authorization_startContext;
  class Alter_authorization_for_sql_databaseContext;
  class Alter_authorization_for_azure_dwContext;
  class Alter_authorization_for_parallel_dwContext;
  class Class_typeContext;
  class Class_type_for_sql_databaseContext;
  class Class_type_for_azure_dwContext;
  class Class_type_for_parallel_dwContext;
  class Class_type_for_grantContext;
  class Drop_availability_groupContext;
  class Alter_availability_groupContext;
  class Alter_availability_group_startContext;
  class Alter_availability_group_optionsContext;
  class Ip_v4_failoverContext;
  class Ip_v6_failoverContext;
  class Create_or_alter_broker_priorityContext;
  class Drop_broker_priorityContext;
  class Alter_certificateContext;
  class Alter_column_encryption_keyContext;
  class Create_column_encryption_keyContext;
  class Drop_certificateContext;
  class Drop_column_encryption_keyContext;
  class Drop_column_master_keyContext;
  class Drop_contractContext;
  class Drop_credentialContext;
  class Drop_cryptograhic_providerContext;
  class Drop_databaseContext;
  class Drop_database_audit_specificationContext;
  class Drop_database_encryption_keyContext;
  class Drop_database_scoped_credentialContext;
  class Drop_defaultContext;
  class Drop_endpointContext;
  class Drop_external_data_sourceContext;
  class Drop_external_file_formatContext;
  class Drop_external_libraryContext;
  class Drop_external_resource_poolContext;
  class Drop_external_tableContext;
  class Drop_event_notificationsContext;
  class Drop_event_sessionContext;
  class Drop_fulltext_catalogContext;
  class Drop_fulltext_indexContext;
  class Drop_fulltext_stoplistContext;
  class Drop_loginContext;
  class Drop_master_keyContext;
  class Drop_message_typeContext;
  class Drop_partition_functionContext;
  class Drop_partition_schemeContext;
  class Drop_queueContext;
  class Drop_remote_service_bindingContext;
  class Drop_resource_poolContext;
  class Drop_db_roleContext;
  class Drop_routeContext;
  class Drop_ruleContext;
  class Drop_schemaContext;
  class Drop_search_property_listContext;
  class Drop_security_policyContext;
  class Drop_sequenceContext;
  class Drop_server_auditContext;
  class Drop_server_audit_specificationContext;
  class Drop_server_roleContext;
  class Drop_serviceContext;
  class Drop_signatureContext;
  class Drop_statistics_name_azure_dw_and_pdwContext;
  class Drop_symmetric_keyContext;
  class Drop_synonymContext;
  class Drop_userContext;
  class Drop_workload_groupContext;
  class Drop_xml_schema_collectionContext;
  class Disable_triggerContext;
  class Enable_triggerContext;
  class Lock_tableContext;
  class Truncate_tableContext;
  class Create_column_master_keyContext;
  class Alter_credentialContext;
  class Create_credentialContext;
  class Alter_cryptographic_providerContext;
  class Create_cryptographic_providerContext;
  class Create_endpointContext;
  class Endpoint_encryption_alogorithm_clauseContext;
  class Endpoint_authentication_clauseContext;
  class Endpoint_listener_clauseContext;
  class Create_event_notificationContext;
  class Create_or_alter_event_sessionContext;
  class Event_session_predicate_expressionContext;
  class Event_session_predicate_factorContext;
  class Event_session_predicate_leafContext;
  class Alter_external_data_sourceContext;
  class Alter_external_libraryContext;
  class Create_external_libraryContext;
  class Alter_external_resource_poolContext;
  class Create_external_resource_poolContext;
  class Alter_fulltext_catalogContext;
  class Create_fulltext_catalogContext;
  class Alter_fulltext_stoplistContext;
  class Create_fulltext_stoplistContext;
  class Alter_login_sql_serverContext;
  class Create_login_sql_serverContext;
  class Alter_login_azure_sqlContext;
  class Create_login_azure_sqlContext;
  class Alter_login_azure_sql_dw_and_pdwContext;
  class Create_login_pdwContext;
  class Alter_master_key_sql_serverContext;
  class Create_master_key_sql_serverContext;
  class Alter_master_key_azure_sqlContext;
  class Create_master_key_azure_sqlContext;
  class Alter_message_typeContext;
  class Alter_partition_functionContext;
  class Alter_partition_schemeContext;
  class Alter_remote_service_bindingContext;
  class Create_remote_service_bindingContext;
  class Create_resource_poolContext;
  class Alter_resource_governorContext;
  class Alter_database_audit_specificationContext;
  class Audit_action_spec_groupContext;
  class Audit_action_specificationContext;
  class Action_specificationContext;
  class Audit_class_nameContext;
  class Audit_securableContext;
  class Alter_db_roleContext;
  class Create_database_audit_specificationContext;
  class Create_db_roleContext;
  class Create_routeContext;
  class Create_ruleContext;
  class Alter_schema_sqlContext;
  class Create_schemaContext;
  class Create_schema_azure_sql_dw_and_pdwContext;
  class Alter_schema_azure_sql_dw_and_pdwContext;
  class Create_search_property_listContext;
  class Create_security_policyContext;
  class Alter_sequenceContext;
  class Create_sequenceContext;
  class Alter_server_auditContext;
  class Create_server_auditContext;
  class Alter_server_audit_specificationContext;
  class Create_server_audit_specificationContext;
  class Alter_server_configurationContext;
  class Alter_server_roleContext;
  class Create_server_roleContext;
  class Alter_server_role_pdwContext;
  class Alter_serviceContext;
  class Opt_arg_clauseContext;
  class Create_serviceContext;
  class Alter_service_master_keyContext;
  class Alter_symmetric_keyContext;
  class Create_synonymContext;
  class Alter_userContext;
  class Create_userContext;
  class Create_user_azure_sql_dwContext;
  class Alter_user_azure_sqlContext;
  class Alter_workload_groupContext;
  class Create_workload_groupContext;
  class Create_xml_schema_collectionContext;
  class Create_partition_functionContext;
  class Create_partition_schemeContext;
  class Create_queueContext;
  class Queue_settingsContext;
  class Alter_queueContext;
  class Queue_actionContext;
  class Queue_rebuild_optionsContext;
  class Create_contractContext;
  class Conversation_statementContext;
  class Message_statementContext;
  class Merge_statementContext;
  class When_matchesContext;
  class Merge_matchedContext;
  class Merge_not_matchedContext;
  class Delete_statementContext;
  class Delete_statement_fromContext;
  class Insert_statementContext;
  class Insert_statement_valueContext;
  class Receive_statementContext;
  class Select_statement_standaloneContext;
  class Select_statementContext;
  class TimeContext;
  class Update_statementContext;
  class Output_clauseContext;
  class Output_dml_list_elemContext;
  class Create_databaseContext;
  class Create_indexContext;
  class Create_index_optionsContext;
  class Relational_index_optionContext;
  class Alter_indexContext;
  class Resumable_index_optionsContext;
  class Resumable_index_optionContext;
  class Reorganize_partitionContext;
  class Reorganize_optionsContext;
  class Reorganize_optionContext;
  class Set_index_optionsContext;
  class Set_index_optionContext;
  class Rebuild_partitionContext;
  class Rebuild_index_optionsContext;
  class Rebuild_index_optionContext;
  class Single_partition_rebuild_index_optionsContext;
  class Single_partition_rebuild_index_optionContext;
  class On_partitionsContext;
  class Create_columnstore_indexContext;
  class Create_columnstore_index_optionsContext;
  class Columnstore_index_optionContext;
  class Create_nonclustered_columnstore_indexContext;
  class Create_xml_indexContext;
  class Xml_index_optionsContext;
  class Xml_index_optionContext;
  class Create_or_alter_procedureContext;
  class As_external_nameContext;
  class Create_or_alter_triggerContext;
  class Create_or_alter_dml_triggerContext;
  class Dml_trigger_optionContext;
  class Dml_trigger_operationContext;
  class Create_or_alter_ddl_triggerContext;
  class Ddl_trigger_operationContext;
  class Create_or_alter_functionContext;
  class Func_body_returns_selectContext;
  class Func_body_returns_tableContext;
  class Func_body_returns_scalarContext;
  class Procedure_param_default_valueContext;
  class Procedure_paramContext;
  class Procedure_optionContext;
  class Function_optionContext;
  class Create_statisticsContext;
  class Update_statisticsContext;
  class Update_statistics_optionsContext;
  class Update_statistics_optionContext;
  class Create_tableContext;
  class Table_indicesContext;
  class Table_optionsContext;
  class Table_optionContext;
  class Create_table_index_optionsContext;
  class Create_table_index_optionContext;
  class Create_viewContext;
  class View_attributeContext;
  class Alter_tableContext;
  class Switch_partitionContext;
  class Low_priority_lock_waitContext;
  class Alter_databaseContext;
  class Add_or_modify_filesContext;
  class FilespecContext;
  class Add_or_modify_filegroupsContext;
  class Filegroup_updatability_optionContext;
  class Database_optionspecContext;
  class Auto_optionContext;
  class Change_tracking_optionContext;
  class Change_tracking_option_listContext;
  class Containment_optionContext;
  class Cursor_optionContext;
  class Alter_endpointContext;
  class Database_mirroring_optionContext;
  class Mirroring_set_optionContext;
  class Mirroring_partnerContext;
  class Mirroring_witnessContext;
  class Witness_partner_equalContext;
  class Partner_optionContext;
  class Witness_optionContext;
  class Witness_serverContext;
  class Partner_serverContext;
  class Mirroring_host_port_seperatorContext;
  class Partner_server_tcp_prefixContext;
  class Port_numberContext;
  class HostContext;
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
  class Drop_relational_or_xml_or_spatial_indexContext;
  class Drop_backward_compatible_indexContext;
  class Drop_procedureContext;
  class Drop_triggerContext;
  class Drop_dml_triggerContext;
  class Drop_ddl_triggerContext;
  class Drop_functionContext;
  class Drop_statisticsContext;
  class Drop_tableContext;
  class Drop_viewContext;
  class Create_typeContext;
  class Drop_typeContext;
  class Rowset_function_limitedContext;
  class OpenqueryContext;
  class OpendatasourceContext;
  class Declare_statementContext;
  class Xml_declarationContext;
  class Cursor_statementContext;
  class Backup_databaseContext;
  class Backup_logContext;
  class Backup_certificateContext;
  class Backup_master_keyContext;
  class Backup_service_master_keyContext;
  class Kill_statementContext;
  class Kill_processContext;
  class Kill_query_notificationContext;
  class Kill_stats_jobContext;
  class Execute_statementContext;
  class Execute_body_batchContext;
  class Execute_bodyContext;
  class Execute_statement_argContext;
  class Execute_statement_arg_namedContext;
  class Execute_statement_arg_unnamedContext;
  class Execute_parameterContext;
  class Execute_var_stringContext;
  class Security_statementContext;
  class Principal_idContext;
  class Create_certificateContext;
  class Existing_keysContext;
  class Private_key_optionsContext;
  class Generate_new_keysContext;
  class Date_optionsContext;
  class Open_keyContext;
  class Close_keyContext;
  class Create_keyContext;
  class Key_optionsContext;
  class AlgorithmContext;
  class Encryption_mechanismContext;
  class Decryption_mechanismContext;
  class Grant_permissionContext;
  class Set_statementContext;
  class Transaction_statementContext;
  class Go_statementContext;
  class Use_statementContext;
  class Setuser_statementContext;
  class Reconfigure_statementContext;
  class Shutdown_statementContext;
  class Checkpoint_statementContext;
  class Dbcc_checkalloc_optionContext;
  class Dbcc_checkallocContext;
  class Dbcc_checkcatalogContext;
  class Dbcc_checkconstraints_optionContext;
  class Dbcc_checkconstraintsContext;
  class Dbcc_checkdb_table_optionContext;
  class Dbcc_checkdbContext;
  class Dbcc_checkfilegroup_optionContext;
  class Dbcc_checkfilegroupContext;
  class Dbcc_checktableContext;
  class Dbcc_cleantableContext;
  class Dbcc_clonedatabase_optionContext;
  class Dbcc_clonedatabaseContext;
  class Dbcc_pdw_showspaceusedContext;
  class Dbcc_proccacheContext;
  class Dbcc_showcontig_optionContext;
  class Dbcc_showcontigContext;
  class Dbcc_shrinklogContext;
  class Dbcc_dbreindexContext;
  class Dbcc_dll_freeContext;
  class Dbcc_dropcleanbuffersContext;
  class Dbcc_clauseContext;
  class Execute_clauseContext;
  class Declare_localContext;
  class Table_type_definitionContext;
  class Table_type_indicesContext;
  class Xml_type_definitionContext;
  class Xml_schema_collectionContext;
  class Column_def_table_constraintsContext;
  class Column_def_table_constraintContext;
  class Column_definitionContext;
  class Column_definition_elementContext;
  class Column_modifierContext;
  class Materialized_column_definitionContext;
  class Column_constraintContext;
  class Column_indexContext;
  class On_partition_or_filegroupContext;
  class Table_constraintContext;
  class Connection_nodeContext;
  class Primary_key_optionsContext;
  class Foreign_key_optionsContext;
  class Check_constraintContext;
  class On_deleteContext;
  class On_updateContext;
  class Alter_table_index_optionsContext;
  class Alter_table_index_optionContext;
  class Declare_cursorContext;
  class Declare_set_cursor_commonContext;
  class Declare_set_cursor_common_partialContext;
  class Fetch_cursorContext;
  class Set_specialContext;
  class Special_listContext;
  class Constant_LOCAL_IDContext;
  class ExpressionContext;
  class ParameterContext;
  class Time_zoneContext;
  class Primitive_expressionContext;
  class Case_expressionContext;
  class Unary_operator_expressionContext;
  class Bracket_expressionContext;
  class SubqueryContext;
  class With_expressionContext;
  class Common_table_expressionContext;
  class Update_elemContext;
  class Update_elem_mergeContext;
  class Search_conditionContext;
  class PredicateContext;
  class Query_expressionContext;
  class Sql_unionContext;
  class Query_specificationContext;
  class Top_clauseContext;
  class Top_percentContext;
  class Top_countContext;
  class Order_by_clauseContext;
  class Select_order_by_clauseContext;
  class For_clauseContext;
  class Xml_common_directivesContext;
  class Order_by_expressionContext;
  class Grouping_sets_itemContext;
  class Group_by_itemContext;
  class Option_clauseContext;
  class OptionContext;
  class Optimize_for_argContext;
  class Select_listContext;
  class Udt_method_argumentsContext;
  class AsteriskContext;
  class Udt_elemContext;
  class Expression_elemContext;
  class Select_list_elemContext;
  class Table_sourcesContext;
  class Non_ansi_joinContext;
  class Table_sourceContext;
  class Table_source_itemContext;
  class Open_xmlContext;
  class Open_jsonContext;
  class Json_declarationContext;
  class Json_column_declarationContext;
  class Schema_declarationContext;
  class Column_declarationContext;
  class Change_tableContext;
  class Change_table_changesContext;
  class Change_table_versionContext;
  class Join_partContext;
  class Join_onContext;
  class Cross_joinContext;
  class Apply_Context;
  class PivotContext;
  class UnpivotContext;
  class Pivot_clauseContext;
  class Unpivot_clauseContext;
  class Full_column_name_listContext;
  class Rowset_functionContext;
  class Bulk_optionContext;
  class Derived_tableContext;
  class Function_callContext;
  class Partition_functionContext;
  class Freetext_functionContext;
  class Freetext_predicateContext;
  class Json_key_valueContext;
  class Json_null_clauseContext;
  class Built_in_functionsContext;
  class Xml_data_type_methodsContext;
  class Dateparts_9Context;
  class Dateparts_12Context;
  class Dateparts_15Context;
  class Dateparts_datetruncContext;
  class Value_methodContext;
  class Value_callContext;
  class Query_methodContext;
  class Query_callContext;
  class Exist_methodContext;
  class Exist_callContext;
  class Modify_methodContext;
  class Modify_callContext;
  class Hierarchyid_callContext;
  class Hierarchyid_static_methodContext;
  class Nodes_methodContext;
  class Switch_sectionContext;
  class Switch_search_condition_sectionContext;
  class As_column_aliasContext;
  class As_table_aliasContext;
  class Table_aliasContext;
  class With_table_hintsContext;
  class Deprecated_table_hintContext;
  class Sybase_legacy_hintsContext;
  class Sybase_legacy_hintContext;
  class Table_hintContext;
  class Index_valueContext;
  class Column_alias_listContext;
  class Column_aliasContext;
  class Table_value_constructorContext;
  class Expression_list_Context;
  class Ranking_windowed_functionContext;
  class Aggregate_windowed_functionContext;
  class Analytic_windowed_functionContext;
  class All_distinct_expressionContext;
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
  class Entity_nameContext;
  class Entity_name_for_azure_dwContext;
  class Entity_name_for_parallel_dwContext;
  class Full_table_nameContext;
  class Table_nameContext;
  class Simple_nameContext;
  class Func_proc_name_schemaContext;
  class Func_proc_name_database_schemaContext;
  class Func_proc_name_server_database_schemaContext;
  class Ddl_objectContext;
  class Full_column_nameContext;
  class Column_name_list_with_orderContext;
  class Insert_column_name_listContext;
  class Insert_column_idContext;
  class Column_name_listContext;
  class Cursor_nameContext;
  class On_offContext;
  class ClusteredContext;
  class Null_notnullContext;
  class Scalar_function_nameContext;
  class Begin_conversation_timerContext;
  class Begin_conversation_dialogContext;
  class Contract_nameContext;
  class Service_nameContext;
  class End_conversationContext;
  class Waitfor_conversationContext;
  class Get_conversationContext;
  class Queue_idContext;
  class Send_conversationContext;
  class Data_typeContext;
  class ConstantContext;
  class Primitive_constantContext;
  class KeywordContext;
  class Id_Context;
  class Simple_idContext;
  class Id_or_stringContext;
  class Comparison_operatorContext;
  class Assignment_operatorContext;
  class File_sizeContext; 

  class  Tsql_fileContext : public antlr4::ParserRuleContext {
  public:
    Tsql_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<BatchContext *> batch();
    BatchContext* batch(size_t i);
    Execute_body_batchContext *execute_body_batch();
    std::vector<Go_statementContext *> go_statement();
    Go_statementContext* go_statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tsql_fileContext* tsql_file();

  class  BatchContext : public antlr4::ParserRuleContext {
  public:
    BatchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Go_statementContext *> go_statement();
    Go_statementContext* go_statement(size_t i);
    Execute_body_batchContext *execute_body_batch();
    std::vector<Sql_clausesContext *> sql_clauses();
    Sql_clausesContext* sql_clauses(size_t i);
    Batch_level_statementContext *batch_level_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BatchContext* batch();

  class  Batch_level_statementContext : public antlr4::ParserRuleContext {
  public:
    Batch_level_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_or_alter_functionContext *create_or_alter_function();
    Create_or_alter_procedureContext *create_or_alter_procedure();
    Create_or_alter_triggerContext *create_or_alter_trigger();
    Create_viewContext *create_view();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Batch_level_statementContext* batch_level_statement();

  class  Sql_clausesContext : public antlr4::ParserRuleContext {
  public:
    Sql_clausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dml_clauseContext *dml_clause();
    antlr4::tree::TerminalNode *SEMI();
    Cfl_statementContext *cfl_statement();
    Another_statementContext *another_statement();
    Ddl_clauseContext *ddl_clause();
    Dbcc_clauseContext *dbcc_clause();
    Backup_statementContext *backup_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_clausesContext* sql_clauses();

  class  Dml_clauseContext : public antlr4::ParserRuleContext {
  public:
    Dml_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Merge_statementContext *merge_statement();
    Delete_statementContext *delete_statement();
    Insert_statementContext *insert_statement();
    Select_statement_standaloneContext *select_statement_standalone();
    Update_statementContext *update_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dml_clauseContext* dml_clause();

  class  Ddl_clauseContext : public antlr4::ParserRuleContext {
  public:
    Ddl_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_application_roleContext *alter_application_role();
    Alter_assemblyContext *alter_assembly();
    Alter_asymmetric_keyContext *alter_asymmetric_key();
    Alter_authorizationContext *alter_authorization();
    Alter_authorization_for_azure_dwContext *alter_authorization_for_azure_dw();
    Alter_authorization_for_parallel_dwContext *alter_authorization_for_parallel_dw();
    Alter_authorization_for_sql_databaseContext *alter_authorization_for_sql_database();
    Alter_availability_groupContext *alter_availability_group();
    Alter_certificateContext *alter_certificate();
    Alter_column_encryption_keyContext *alter_column_encryption_key();
    Alter_credentialContext *alter_credential();
    Alter_cryptographic_providerContext *alter_cryptographic_provider();
    Alter_databaseContext *alter_database();
    Alter_database_audit_specificationContext *alter_database_audit_specification();
    Alter_db_roleContext *alter_db_role();
    Alter_endpointContext *alter_endpoint();
    Alter_external_data_sourceContext *alter_external_data_source();
    Alter_external_libraryContext *alter_external_library();
    Alter_external_resource_poolContext *alter_external_resource_pool();
    Alter_fulltext_catalogContext *alter_fulltext_catalog();
    Alter_fulltext_stoplistContext *alter_fulltext_stoplist();
    Alter_indexContext *alter_index();
    Alter_login_azure_sqlContext *alter_login_azure_sql();
    Alter_login_azure_sql_dw_and_pdwContext *alter_login_azure_sql_dw_and_pdw();
    Alter_login_sql_serverContext *alter_login_sql_server();
    Alter_master_key_azure_sqlContext *alter_master_key_azure_sql();
    Alter_master_key_sql_serverContext *alter_master_key_sql_server();
    Alter_message_typeContext *alter_message_type();
    Alter_partition_functionContext *alter_partition_function();
    Alter_partition_schemeContext *alter_partition_scheme();
    Alter_remote_service_bindingContext *alter_remote_service_binding();
    Alter_resource_governorContext *alter_resource_governor();
    Alter_schema_azure_sql_dw_and_pdwContext *alter_schema_azure_sql_dw_and_pdw();
    Alter_schema_sqlContext *alter_schema_sql();
    Alter_sequenceContext *alter_sequence();
    Alter_server_auditContext *alter_server_audit();
    Alter_server_audit_specificationContext *alter_server_audit_specification();
    Alter_server_configurationContext *alter_server_configuration();
    Alter_server_roleContext *alter_server_role();
    Alter_server_role_pdwContext *alter_server_role_pdw();
    Alter_serviceContext *alter_service();
    Alter_service_master_keyContext *alter_service_master_key();
    Alter_symmetric_keyContext *alter_symmetric_key();
    Alter_tableContext *alter_table();
    Alter_userContext *alter_user();
    Alter_user_azure_sqlContext *alter_user_azure_sql();
    Alter_workload_groupContext *alter_workload_group();
    Alter_xml_schema_collectionContext *alter_xml_schema_collection();
    Create_application_roleContext *create_application_role();
    Create_assemblyContext *create_assembly();
    Create_asymmetric_keyContext *create_asymmetric_key();
    Create_column_encryption_keyContext *create_column_encryption_key();
    Create_column_master_keyContext *create_column_master_key();
    Create_columnstore_indexContext *create_columnstore_index();
    Create_credentialContext *create_credential();
    Create_cryptographic_providerContext *create_cryptographic_provider();
    Create_databaseContext *create_database();
    Create_database_audit_specificationContext *create_database_audit_specification();
    Create_db_roleContext *create_db_role();
    Create_endpointContext *create_endpoint();
    Create_event_notificationContext *create_event_notification();
    Create_external_libraryContext *create_external_library();
    Create_external_resource_poolContext *create_external_resource_pool();
    Create_fulltext_catalogContext *create_fulltext_catalog();
    Create_fulltext_stoplistContext *create_fulltext_stoplist();
    Create_indexContext *create_index();
    Create_login_azure_sqlContext *create_login_azure_sql();
    Create_login_pdwContext *create_login_pdw();
    Create_login_sql_serverContext *create_login_sql_server();
    Create_master_key_azure_sqlContext *create_master_key_azure_sql();
    Create_master_key_sql_serverContext *create_master_key_sql_server();
    Create_nonclustered_columnstore_indexContext *create_nonclustered_columnstore_index();
    Create_or_alter_broker_priorityContext *create_or_alter_broker_priority();
    Create_or_alter_event_sessionContext *create_or_alter_event_session();
    Create_partition_functionContext *create_partition_function();
    Create_partition_schemeContext *create_partition_scheme();
    Create_remote_service_bindingContext *create_remote_service_binding();
    Create_resource_poolContext *create_resource_pool();
    Create_routeContext *create_route();
    Create_ruleContext *create_rule();
    Create_schemaContext *create_schema();
    Create_schema_azure_sql_dw_and_pdwContext *create_schema_azure_sql_dw_and_pdw();
    Create_search_property_listContext *create_search_property_list();
    Create_security_policyContext *create_security_policy();
    Create_sequenceContext *create_sequence();
    Create_server_auditContext *create_server_audit();
    Create_server_audit_specificationContext *create_server_audit_specification();
    Create_server_roleContext *create_server_role();
    Create_serviceContext *create_service();
    Create_statisticsContext *create_statistics();
    Create_synonymContext *create_synonym();
    Create_tableContext *create_table();
    Create_typeContext *create_type();
    Create_userContext *create_user();
    Create_user_azure_sql_dwContext *create_user_azure_sql_dw();
    Create_workload_groupContext *create_workload_group();
    Create_xml_indexContext *create_xml_index();
    Create_xml_schema_collectionContext *create_xml_schema_collection();
    Disable_triggerContext *disable_trigger();
    Drop_aggregateContext *drop_aggregate();
    Drop_application_roleContext *drop_application_role();
    Drop_assemblyContext *drop_assembly();
    Drop_asymmetric_keyContext *drop_asymmetric_key();
    Drop_availability_groupContext *drop_availability_group();
    Drop_broker_priorityContext *drop_broker_priority();
    Drop_certificateContext *drop_certificate();
    Drop_column_encryption_keyContext *drop_column_encryption_key();
    Drop_column_master_keyContext *drop_column_master_key();
    Drop_contractContext *drop_contract();
    Drop_credentialContext *drop_credential();
    Drop_cryptograhic_providerContext *drop_cryptograhic_provider();
    Drop_databaseContext *drop_database();
    Drop_database_audit_specificationContext *drop_database_audit_specification();
    Drop_database_encryption_keyContext *drop_database_encryption_key();
    Drop_database_scoped_credentialContext *drop_database_scoped_credential();
    Drop_db_roleContext *drop_db_role();
    Drop_defaultContext *drop_default();
    Drop_endpointContext *drop_endpoint();
    Drop_event_notificationsContext *drop_event_notifications();
    Drop_event_sessionContext *drop_event_session();
    Drop_external_data_sourceContext *drop_external_data_source();
    Drop_external_file_formatContext *drop_external_file_format();
    Drop_external_libraryContext *drop_external_library();
    Drop_external_resource_poolContext *drop_external_resource_pool();
    Drop_external_tableContext *drop_external_table();
    Drop_fulltext_catalogContext *drop_fulltext_catalog();
    Drop_fulltext_indexContext *drop_fulltext_index();
    Drop_fulltext_stoplistContext *drop_fulltext_stoplist();
    Drop_functionContext *drop_function();
    Drop_indexContext *drop_index();
    Drop_loginContext *drop_login();
    Drop_master_keyContext *drop_master_key();
    Drop_message_typeContext *drop_message_type();
    Drop_partition_functionContext *drop_partition_function();
    Drop_partition_schemeContext *drop_partition_scheme();
    Drop_procedureContext *drop_procedure();
    Drop_queueContext *drop_queue();
    Drop_remote_service_bindingContext *drop_remote_service_binding();
    Drop_resource_poolContext *drop_resource_pool();
    Drop_routeContext *drop_route();
    Drop_ruleContext *drop_rule();
    Drop_schemaContext *drop_schema();
    Drop_search_property_listContext *drop_search_property_list();
    Drop_security_policyContext *drop_security_policy();
    Drop_sequenceContext *drop_sequence();
    Drop_server_auditContext *drop_server_audit();
    Drop_server_audit_specificationContext *drop_server_audit_specification();
    Drop_server_roleContext *drop_server_role();
    Drop_serviceContext *drop_service();
    Drop_signatureContext *drop_signature();
    Drop_statisticsContext *drop_statistics();
    Drop_statistics_name_azure_dw_and_pdwContext *drop_statistics_name_azure_dw_and_pdw();
    Drop_symmetric_keyContext *drop_symmetric_key();
    Drop_synonymContext *drop_synonym();
    Drop_tableContext *drop_table();
    Drop_triggerContext *drop_trigger();
    Drop_typeContext *drop_type();
    Drop_userContext *drop_user();
    Drop_viewContext *drop_view();
    Drop_workload_groupContext *drop_workload_group();
    Drop_xml_schema_collectionContext *drop_xml_schema_collection();
    Enable_triggerContext *enable_trigger();
    Lock_tableContext *lock_table();
    Truncate_tableContext *truncate_table();
    Update_statisticsContext *update_statistics();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ddl_clauseContext* ddl_clause();

  class  Backup_statementContext : public antlr4::ParserRuleContext {
  public:
    Backup_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Backup_databaseContext *backup_database();
    Backup_logContext *backup_log();
    Backup_certificateContext *backup_certificate();
    Backup_master_keyContext *backup_master_key();
    Backup_service_master_keyContext *backup_service_master_key();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Backup_statementContext* backup_statement();

  class  Cfl_statementContext : public antlr4::ParserRuleContext {
  public:
    Cfl_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_statementContext *block_statement();
    Break_statementContext *break_statement();
    Continue_statementContext *continue_statement();
    Goto_statementContext *goto_statement();
    If_statementContext *if_statement();
    Print_statementContext *print_statement();
    Raiseerror_statementContext *raiseerror_statement();
    Return_statementContext *return_statement();
    Throw_statementContext *throw_statement();
    Try_catch_statementContext *try_catch_statement();
    Waitfor_statementContext *waitfor_statement();
    While_statementContext *while_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cfl_statementContext* cfl_statement();

  class  Block_statementContext : public antlr4::ParserRuleContext {
  public:
    Block_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<Sql_clausesContext *> sql_clauses();
    Sql_clausesContext* sql_clauses(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_statementContext* block_statement();

  class  Break_statementContext : public antlr4::ParserRuleContext {
  public:
    Break_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_statementContext* break_statement();

  class  Continue_statementContext : public antlr4::ParserRuleContext {
  public:
    Continue_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Continue_statementContext* continue_statement();

  class  Goto_statementContext : public antlr4::ParserRuleContext {
  public:
    Goto_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    Id_Context *id_();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *COLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Goto_statementContext* goto_statement();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    Search_conditionContext *search_condition();
    std::vector<Sql_clausesContext *> sql_clauses();
    Sql_clausesContext* sql_clauses(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  Throw_statementContext : public antlr4::ParserRuleContext {
  public:
    Throw_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW();
    Throw_error_numberContext *throw_error_number();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Throw_messageContext *throw_message();
    Throw_stateContext *throw_state();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Throw_statementContext* throw_statement();

  class  Throw_error_numberContext : public antlr4::ParserRuleContext {
  public:
    Throw_error_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Throw_error_numberContext* throw_error_number();

  class  Throw_messageContext : public antlr4::ParserRuleContext {
  public:
    Throw_messageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Throw_messageContext* throw_message();

  class  Throw_stateContext : public antlr4::ParserRuleContext {
  public:
    Throw_stateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Throw_stateContext* throw_state();

  class  Try_catch_statementContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Sql_clausesContext *try_clauses = nullptr;
    TSqlParser::Sql_clausesContext *catch_clauses = nullptr;
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Try_catch_statementContext* try_catch_statement();

  class  Waitfor_statementContext : public antlr4::ParserRuleContext {
  public:
    Waitfor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAITFOR();
    Receive_statementContext *receive_statement();
    antlr4::tree::TerminalNode *COMMA();
    TimeContext *time();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *DELAY();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMEOUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Waitfor_statementContext* waitfor_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    Search_conditionContext *search_condition();
    Sql_clausesContext *sql_clauses();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_statementContext* while_statement();

  class  Print_statementContext : public antlr4::ParserRuleContext {
  public:
    Print_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_ID();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Print_statementContext* print_statement();

  class  Raiseerror_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *msg = nullptr;
    TSqlParser::Constant_LOCAL_IDContext *severity = nullptr;
    TSqlParser::Constant_LOCAL_IDContext *state = nullptr;
    antlr4::Token *formatstring = nullptr;
    antlr4::Token *argument = nullptr;
    Raiseerror_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAISERROR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Constant_LOCAL_IDContext *> constant_LOCAL_ID();
    Constant_LOCAL_IDContext* constant_LOCAL_ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *SETERROR();
    antlr4::tree::TerminalNode *NOWAIT();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Raiseerror_statementContext* raiseerror_statement();

  class  Empty_statementContext : public antlr4::ParserRuleContext {
  public:
    Empty_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_statementContext* empty_statement();

  class  Another_statementContext : public antlr4::ParserRuleContext {
  public:
    Another_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_queueContext *alter_queue();
    Checkpoint_statementContext *checkpoint_statement();
    Conversation_statementContext *conversation_statement();
    Create_contractContext *create_contract();
    Create_queueContext *create_queue();
    Cursor_statementContext *cursor_statement();
    Declare_statementContext *declare_statement();
    Execute_statementContext *execute_statement();
    Kill_statementContext *kill_statement();
    Message_statementContext *message_statement();
    Reconfigure_statementContext *reconfigure_statement();
    Security_statementContext *security_statement();
    Set_statementContext *set_statement();
    Setuser_statementContext *setuser_statement();
    Shutdown_statementContext *shutdown_statement();
    Transaction_statementContext *transaction_statement();
    Use_statementContext *use_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Another_statementContext* another_statement();

  class  Alter_application_roleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *appliction_role = nullptr;
    TSqlParser::Id_Context *new_application_role_name = nullptr;
    antlr4::Token *application_role_password = nullptr;
    TSqlParser::Id_Context *app_role_default_schema = nullptr;
    Alter_application_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *DEFAULT_SCHEMA();
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_application_roleContext* alter_application_role();

  class  Alter_xml_schema_collectionContext : public antlr4::ParserRuleContext {
  public:
    Alter_xml_schema_collectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *COLLECTION();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_xml_schema_collectionContext* alter_xml_schema_collection();

  class  Create_application_roleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *appliction_role = nullptr;
    antlr4::Token *application_role_password = nullptr;
    TSqlParser::Id_Context *app_role_default_schema = nullptr;
    Create_application_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *DEFAULT_SCHEMA();
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_application_roleContext* create_application_role();

  class  Drop_aggregateContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *aggregate_name = nullptr;
    Drop_aggregateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *AGGREGATE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_aggregateContext* drop_aggregate();

  class  Drop_application_roleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *rolename = nullptr;
    Drop_application_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *ROLE();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_application_roleContext* drop_application_role();

  class  Alter_assemblyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *assembly_name = nullptr;
    Alter_assemblyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_assembly_startContext *alter_assembly_start();
    Alter_assembly_clauseContext *alter_assembly_clause();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assemblyContext* alter_assembly();

  class  Alter_assembly_startContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ASSEMBLY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_startContext* alter_assembly_start();

  class  Alter_assembly_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_assembly_from_clauseContext *alter_assembly_from_clause();
    Alter_assembly_with_clauseContext *alter_assembly_with_clause();
    Alter_assembly_drop_clauseContext *alter_assembly_drop_clause();
    Alter_assembly_add_clauseContext *alter_assembly_add_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_clauseContext* alter_assembly_clause();

  class  Alter_assembly_from_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_from_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_assembly_from_clause_startContext *alter_assembly_from_clause_start();
    Client_assembly_specifierContext *client_assembly_specifier();
    Alter_assembly_file_bitsContext *alter_assembly_file_bits();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_from_clauseContext* alter_assembly_from_clause();

  class  Alter_assembly_from_clause_startContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_from_clause_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_from_clause_startContext* alter_assembly_from_clause_start();

  class  Alter_assembly_drop_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_drop_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_assembly_dropContext *alter_assembly_drop();
    Alter_assembly_drop_multiple_filesContext *alter_assembly_drop_multiple_files();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_drop_clauseContext* alter_assembly_drop_clause();

  class  Alter_assembly_drop_multiple_filesContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_drop_multiple_filesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    Multiple_local_filesContext *multiple_local_files();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_drop_multiple_filesContext* alter_assembly_drop_multiple_files();

  class  Alter_assembly_dropContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_dropContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_dropContext* alter_assembly_drop();

  class  Alter_assembly_add_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_add_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_asssembly_add_clause_startContext *alter_asssembly_add_clause_start();
    Alter_assembly_client_file_clauseContext *alter_assembly_client_file_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_add_clauseContext* alter_assembly_add_clause();

  class  Alter_asssembly_add_clause_startContext : public antlr4::ParserRuleContext {
  public:
    Alter_asssembly_add_clause_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FROM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_asssembly_add_clause_startContext* alter_asssembly_add_clause_start();

  class  Alter_assembly_client_file_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_client_file_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_assembly_file_nameContext *alter_assembly_file_name();
    Alter_assembly_asContext *alter_assembly_as();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_client_file_clauseContext* alter_assembly_client_file_clause();

  class  Alter_assembly_file_nameContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_file_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_file_nameContext* alter_assembly_file_name();

  class  Alter_assembly_file_bitsContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_file_bitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_assembly_asContext *alter_assembly_as();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_file_bitsContext* alter_assembly_file_bits();

  class  Alter_assembly_asContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_asContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_asContext* alter_assembly_as();

  class  Alter_assembly_with_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_with_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_assembly_withContext *alter_assembly_with();
    Assembly_optionContext *assembly_option();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_with_clauseContext* alter_assembly_with_clause();

  class  Alter_assembly_withContext : public antlr4::ParserRuleContext {
  public:
    Alter_assembly_withContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_assembly_withContext* alter_assembly_with();

  class  Client_assembly_specifierContext : public antlr4::ParserRuleContext {
  public:
    Client_assembly_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Network_file_shareContext *network_file_share();
    Local_fileContext *local_file();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Client_assembly_specifierContext* client_assembly_specifier();

  class  Assembly_optionContext : public antlr4::ParserRuleContext {
  public:
    Assembly_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERMISSION_SET();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *SAFE();
    antlr4::tree::TerminalNode *EXTERNAL_ACCESS();
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *VISIBILITY();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *DATA();
    Assembly_optionContext *assembly_option();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assembly_optionContext* assembly_option();
  Assembly_optionContext* assembly_option(int precedence);
  class  Network_file_shareContext : public antlr4::ParserRuleContext {
  public:
    Network_file_shareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Network_file_startContext *network_file_start();
    Network_computerContext *network_computer();
    File_pathContext *file_path();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Network_file_shareContext* network_file_share();

  class  Network_computerContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *computer_name = nullptr;
    Network_computerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Network_computerContext* network_computer();

  class  Network_file_startContext : public antlr4::ParserRuleContext {
  public:
    Network_file_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLE_BACK_SLASH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Network_file_startContext* network_file_start();

  class  File_pathContext : public antlr4::ParserRuleContext {
  public:
    File_pathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_directory_path_separatorContext *file_directory_path_separator();
    File_pathContext *file_path();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_pathContext* file_path();

  class  File_directory_path_separatorContext : public antlr4::ParserRuleContext {
  public:
    File_directory_path_separatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKSLASH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_directory_path_separatorContext* file_directory_path_separator();

  class  Local_fileContext : public antlr4::ParserRuleContext {
  public:
    Local_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_driveContext *local_drive();
    File_pathContext *file_path();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Local_fileContext* local_file();

  class  Local_driveContext : public antlr4::ParserRuleContext {
  public:
    Local_driveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISK_DRIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Local_driveContext* local_drive();

  class  Multiple_local_filesContext : public antlr4::ParserRuleContext {
  public:
    Multiple_local_filesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multiple_local_file_startContext *multiple_local_file_start();
    Local_fileContext *local_file();
    antlr4::tree::TerminalNode *SINGLE_QUOTE();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiple_local_filesContext* multiple_local_files();

  class  Multiple_local_file_startContext : public antlr4::ParserRuleContext {
  public:
    Multiple_local_file_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SINGLE_QUOTE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiple_local_file_startContext* multiple_local_file_start();

  class  Create_assemblyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *assembly_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    Create_assemblyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ASSEMBLY();
    antlr4::tree::TerminalNode *FROM();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PERMISSION_SET();
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BINARY();
    antlr4::tree::TerminalNode* BINARY(size_t i);
    antlr4::tree::TerminalNode *SAFE();
    antlr4::tree::TerminalNode *EXTERNAL_ACCESS();
    antlr4::tree::TerminalNode *UNSAFE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_assemblyContext* create_assembly();

  class  Drop_assemblyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *assembly_name = nullptr;
    Drop_assemblyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ASSEMBLY();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *DEPENDENTS();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_assemblyContext* drop_assembly();

  class  Alter_asymmetric_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *Asym_Key_Name = nullptr;
    Alter_asymmetric_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_asymmetric_key_startContext *alter_asymmetric_key_start();
    Id_Context *id_();
    Asymmetric_key_optionContext *asymmetric_key_option();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *KEY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_asymmetric_keyContext* alter_asymmetric_key();

  class  Alter_asymmetric_key_startContext : public antlr4::ParserRuleContext {
  public:
    Alter_asymmetric_key_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *KEY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_asymmetric_key_startContext* alter_asymmetric_key_start();

  class  Asymmetric_key_optionContext : public antlr4::ParserRuleContext {
  public:
    Asymmetric_key_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Asymmetric_key_option_startContext *asymmetric_key_option_start();
    std::vector<Asymmetric_key_password_change_optionContext *> asymmetric_key_password_change_option();
    Asymmetric_key_password_change_optionContext* asymmetric_key_password_change_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Asymmetric_key_optionContext* asymmetric_key_option();

  class  Asymmetric_key_option_startContext : public antlr4::ParserRuleContext {
  public:
    Asymmetric_key_option_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Asymmetric_key_option_startContext* asymmetric_key_option_start();

  class  Asymmetric_key_password_change_optionContext : public antlr4::ParserRuleContext {
  public:
    Asymmetric_key_password_change_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECRYPTION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ENCRYPTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Asymmetric_key_password_change_optionContext* asymmetric_key_password_change_option();

  class  Create_asymmetric_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *Asym_Key_Nam = nullptr;
    TSqlParser::Id_Context *database_principal_name = nullptr;
    TSqlParser::Id_Context *Assembly_Name = nullptr;
    TSqlParser::Id_Context *Provider_Name = nullptr;
    antlr4::Token *provider_key_name = nullptr;
    antlr4::Token *asymmetric_key_password = nullptr;
    Create_asymmetric_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *KEY();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *EXECUTABLE_FILE();
    antlr4::tree::TerminalNode *ASSEMBLY();
    antlr4::tree::TerminalNode *PROVIDER();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *PROVIDER_KEY_NAME();
    antlr4::tree::TerminalNode *CREATION_DISPOSITION();
    antlr4::tree::TerminalNode *RSA_4096();
    antlr4::tree::TerminalNode *RSA_3072();
    antlr4::tree::TerminalNode *RSA_2048();
    antlr4::tree::TerminalNode *RSA_1024();
    antlr4::tree::TerminalNode *RSA_512();
    antlr4::tree::TerminalNode *CREATE_NEW();
    antlr4::tree::TerminalNode *OPEN_EXISTING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_asymmetric_keyContext* create_asymmetric_key();

  class  Drop_asymmetric_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *key_name = nullptr;
    Drop_asymmetric_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    Id_Context *id_();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *PROVIDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_asymmetric_keyContext* drop_asymmetric_key();

  class  Alter_authorizationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Entity_nameContext *entity = nullptr;
    Alter_authorizationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_authorization_startContext *alter_authorization_start();
    Entity_toContext *entity_to();
    Authorization_granteeContext *authorization_grantee();
    Entity_nameContext *entity_name();
    Class_typeContext *class_type();
    Colon_colonContext *colon_colon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_authorizationContext* alter_authorization();

  class  Authorization_granteeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *principal_name = nullptr;
    Authorization_granteeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *OWNER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Authorization_granteeContext* authorization_grantee();

  class  Entity_toContext : public antlr4::ParserRuleContext {
  public:
    Entity_toContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_toContext* entity_to();

  class  Colon_colonContext : public antlr4::ParserRuleContext {
  public:
    Colon_colonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLE_COLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Colon_colonContext* colon_colon();

  class  Alter_authorization_startContext : public antlr4::ParserRuleContext {
  public:
    Alter_authorization_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *ON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_authorization_startContext* alter_authorization_start();

  class  Alter_authorization_for_sql_databaseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Entity_nameContext *entity = nullptr;
    Alter_authorization_for_sql_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_authorization_startContext *alter_authorization_start();
    Entity_toContext *entity_to();
    Authorization_granteeContext *authorization_grantee();
    Entity_nameContext *entity_name();
    Class_type_for_sql_databaseContext *class_type_for_sql_database();
    Colon_colonContext *colon_colon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_authorization_for_sql_databaseContext* alter_authorization_for_sql_database();

  class  Alter_authorization_for_azure_dwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Entity_name_for_azure_dwContext *entity = nullptr;
    Alter_authorization_for_azure_dwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_authorization_startContext *alter_authorization_start();
    Entity_toContext *entity_to();
    Authorization_granteeContext *authorization_grantee();
    Entity_name_for_azure_dwContext *entity_name_for_azure_dw();
    Class_type_for_azure_dwContext *class_type_for_azure_dw();
    Colon_colonContext *colon_colon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_authorization_for_azure_dwContext* alter_authorization_for_azure_dw();

  class  Alter_authorization_for_parallel_dwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Entity_name_for_parallel_dwContext *entity = nullptr;
    Alter_authorization_for_parallel_dwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_authorization_startContext *alter_authorization_start();
    Entity_toContext *entity_to();
    Authorization_granteeContext *authorization_grantee();
    Entity_name_for_parallel_dwContext *entity_name_for_parallel_dw();
    Class_type_for_parallel_dwContext *class_type_for_parallel_dw();
    Colon_colonContext *colon_colon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_authorization_for_parallel_dwContext* alter_authorization_for_parallel_dw();

  class  Class_typeContext : public antlr4::ParserRuleContext {
  public:
    Class_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *ASSEMBLY();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *AVAILABILITY();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *CERTIFICATE();
    antlr4::tree::TerminalNode *CONTRACT();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *ENDPOINT();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *CATALOG();
    antlr4::tree::TerminalNode *STOPLIST();
    antlr4::tree::TerminalNode *MESSAGE();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *BINDING();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROUTE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *COLLECTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_typeContext* class_type();

  class  Class_type_for_sql_databaseContext : public antlr4::ParserRuleContext {
  public:
    Class_type_for_sql_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *ASSEMBLY();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *CERTIFICATE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *CATALOG();
    antlr4::tree::TerminalNode *STOPLIST();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *COLLECTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_type_for_sql_databaseContext* class_type_for_sql_database();

  class  Class_type_for_azure_dwContext : public antlr4::ParserRuleContext {
  public:
    Class_type_for_azure_dwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *OBJECT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_type_for_azure_dwContext* class_type_for_azure_dw();

  class  Class_type_for_parallel_dwContext : public antlr4::ParserRuleContext {
  public:
    Class_type_for_parallel_dwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *OBJECT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_type_for_parallel_dwContext* class_type_for_parallel_dw();

  class  Class_type_for_grantContext : public antlr4::ParserRuleContext {
  public:
    Class_type_for_grantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ASSEMBLY();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *AVAILABILITY();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BROKER();
    antlr4::tree::TerminalNode *PRIORITY();
    antlr4::tree::TerminalNode *CERTIFICATE();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *CONTRACT();
    antlr4::tree::TerminalNode *CREDENTIAL();
    antlr4::tree::TerminalNode *CRYPTOGRAPHIC();
    antlr4::tree::TerminalNode *PROVIDER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SPECIFICATION();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SCOPED();
    antlr4::tree::TerminalNode *CONFIGURATION();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *GOVERNOR();
    antlr4::tree::TerminalNode *ENDPOINT();
    antlr4::tree::TerminalNode *NOTIFICATION();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *POOL();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *CATALOG();
    antlr4::tree::TerminalNode *STOPLIST();
    antlr4::tree::TerminalNode *LOGIN();
    antlr4::tree::TerminalNode *MESSAGE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *SCHEME();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *BINDING();
    antlr4::tree::TerminalNode *ROUTE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *COLLECTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_type_for_grantContext* class_type_for_grant();

  class  Drop_availability_groupContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *group_name = nullptr;
    Drop_availability_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *AVAILABILITY();
    antlr4::tree::TerminalNode *GROUP();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_availability_groupContext* drop_availability_group();

  class  Alter_availability_groupContext : public antlr4::ParserRuleContext {
  public:
    Alter_availability_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_availability_group_startContext *alter_availability_group_start();
    Alter_availability_group_optionsContext *alter_availability_group_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_availability_groupContext* alter_availability_group();

  class  Alter_availability_group_startContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *group_name = nullptr;
    Alter_availability_group_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *AVAILABILITY();
    antlr4::tree::TerminalNode *GROUP();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_availability_group_startContext* alter_availability_group_start();

  class  Alter_availability_group_optionsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *milliseconds = nullptr;
    TSqlParser::Id_Context *database_name = nullptr;
    antlr4::Token *server_instance = nullptr;
    antlr4::Token *session_timeout = nullptr;
    antlr4::Token *ag_name = nullptr;
    antlr4::Token *ag_name_modified = nullptr;
    antlr4::Token *listener_name = nullptr;
    Alter_availability_group_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *AUTOMATED_BACKUP_PREFERENCE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *FAILURE_CONDITION_LEVEL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *HEALTH_CHECK_TIMEOUT();
    antlr4::tree::TerminalNode *DB_FAILOVER();
    antlr4::tree::TerminalNode *REQUIRED_SYNCHRONIZED_SECONDARIES_TO_COMMIT();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *SECONDARY_ONLY();
    antlr4::tree::TerminalNode *SECONDARY();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATABASE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *REPLICA();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    antlr4::tree::TerminalNode *ENDPOINT_URL();
    std::vector<antlr4::tree::TerminalNode *> AVAILABILITY_MODE();
    antlr4::tree::TerminalNode* AVAILABILITY_MODE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FAILOVER_MODE();
    antlr4::tree::TerminalNode* FAILOVER_MODE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEEDING_MODE();
    antlr4::tree::TerminalNode* SEEDING_MODE(size_t i);
    antlr4::tree::TerminalNode *BACKUP_PRIORITY();
    antlr4::tree::TerminalNode *PRIMARY_ROLE();
    std::vector<antlr4::tree::TerminalNode *> ALLOW_CONNECTIONS();
    antlr4::tree::TerminalNode* ALLOW_CONNECTIONS(size_t i);
    antlr4::tree::TerminalNode *SECONDARY_ROLE();
    std::vector<antlr4::tree::TerminalNode *> SYNCHRONOUS_COMMIT();
    antlr4::tree::TerminalNode* SYNCHRONOUS_COMMIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASYNCHRONOUS_COMMIT();
    antlr4::tree::TerminalNode* ASYNCHRONOUS_COMMIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AUTOMATIC();
    antlr4::tree::TerminalNode* AUTOMATIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MANUAL();
    antlr4::tree::TerminalNode* MANUAL(size_t i);
    antlr4::tree::TerminalNode *READ_WRITE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *READ_ONLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *READ_ONLY_ROUTING_LIST();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *SESSION_TIMEOUT();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *AVAILABILITY();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<antlr4::tree::TerminalNode *> LISTENER_URL();
    antlr4::tree::TerminalNode* LISTENER_URL(size_t i);
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *DENY();
    antlr4::tree::TerminalNode *FAILOVER();
    antlr4::tree::TerminalNode *FORCE_FAILOVER_ALLOW_DATA_LOSS();
    antlr4::tree::TerminalNode *LISTENER();
    antlr4::tree::TerminalNode *DHCP();
    antlr4::tree::TerminalNode *IP();
    std::vector<Ip_v4_failoverContext *> ip_v4_failover();
    Ip_v4_failoverContext* ip_v4_failover(size_t i);
    antlr4::tree::TerminalNode *PORT();
    std::vector<Ip_v6_failoverContext *> ip_v6_failover();
    Ip_v6_failoverContext* ip_v6_failover(size_t i);
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *DTC_SUPPORT();
    antlr4::tree::TerminalNode *PER_DB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_availability_group_optionsContext* alter_availability_group_options();

  class  Ip_v4_failoverContext : public antlr4::ParserRuleContext {
  public:
    Ip_v4_failoverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ip_v4_failoverContext* ip_v4_failover();

  class  Ip_v6_failoverContext : public antlr4::ParserRuleContext {
  public:
    Ip_v6_failoverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ip_v6_failoverContext* ip_v6_failover();

  class  Create_or_alter_broker_priorityContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *ConversationPriorityName = nullptr;
    antlr4::Token *RemoteServiceName = nullptr;
    antlr4::Token *PriorityValue = nullptr;
    Create_or_alter_broker_priorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BROKER();
    antlr4::tree::TerminalNode *PRIORITY();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CONVERSATION();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ALTER();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *CONTRACT_NAME();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *LOCAL_SERVICE_NAME();
    antlr4::tree::TerminalNode *REMOTE_SERVICE_NAME();
    antlr4::tree::TerminalNode *PRIORITY_LEVEL();
    std::vector<antlr4::tree::TerminalNode *> ANY();
    antlr4::tree::TerminalNode* ANY(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DOUBLE_FORWARD_SLASH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_or_alter_broker_priorityContext* create_or_alter_broker_priority();

  class  Drop_broker_priorityContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *ConversationPriorityName = nullptr;
    Drop_broker_priorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *BROKER();
    antlr4::tree::TerminalNode *PRIORITY();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_broker_priorityContext* drop_broker_priority();

  class  Alter_certificateContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *certificate_name = nullptr;
    Alter_certificateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *CERTIFICATE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *PRIVATE_KEY();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *BEGIN_DIALOG();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    std::vector<antlr4::tree::TerminalNode *> FILE();
    antlr4::tree::TerminalNode* FILE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECRYPTION();
    antlr4::tree::TerminalNode* DECRYPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PASSWORD();
    antlr4::tree::TerminalNode* PASSWORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENCRYPTION();
    antlr4::tree::TerminalNode* ENCRYPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_certificateContext* alter_certificate();

  class  Alter_column_encryption_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *column_encryption_key = nullptr;
    TSqlParser::Id_Context *column_master_key_name = nullptr;
    antlr4::Token *algorithm_name = nullptr;
    Alter_column_encryption_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COLUMN_MASTER_KEY();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *ENCRYPTED_VALUE();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_column_encryption_keyContext* alter_column_encryption_key();

  class  Create_column_encryption_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *column_encryption_key = nullptr;
    TSqlParser::Id_Context *column_master_key_name = nullptr;
    antlr4::Token *algorithm_name = nullptr;
    antlr4::Token *encrypted_value = nullptr;
    Create_column_encryption_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN_MASTER_KEY();
    antlr4::tree::TerminalNode* COLUMN_MASTER_KEY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALGORITHM();
    antlr4::tree::TerminalNode* ALGORITHM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENCRYPTED_VALUE();
    antlr4::tree::TerminalNode* ENCRYPTED_VALUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BINARY();
    antlr4::tree::TerminalNode* BINARY(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_column_encryption_keyContext* create_column_encryption_key();

  class  Drop_certificateContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *certificate_name = nullptr;
    Drop_certificateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *CERTIFICATE();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_certificateContext* drop_certificate();

  class  Drop_column_encryption_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *key_name = nullptr;
    Drop_column_encryption_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *KEY();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_column_encryption_keyContext* drop_column_encryption_key();

  class  Drop_column_master_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *key_name = nullptr;
    Drop_column_master_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_column_master_keyContext* drop_column_master_key();

  class  Drop_contractContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *dropped_contract_name = nullptr;
    Drop_contractContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *CONTRACT();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_contractContext* drop_contract();

  class  Drop_credentialContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *credential_name = nullptr;
    Drop_credentialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *CREDENTIAL();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_credentialContext* drop_credential();

  class  Drop_cryptograhic_providerContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *provider_name = nullptr;
    Drop_cryptograhic_providerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *CRYPTOGRAPHIC();
    antlr4::tree::TerminalNode *PROVIDER();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_cryptograhic_providerContext* drop_cryptograhic_provider();

  class  Drop_databaseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database_name_or_database_snapshot_name = nullptr;
    Drop_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_databaseContext* drop_database();

  class  Drop_database_audit_specificationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *audit_specification_name = nullptr;
    Drop_database_audit_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *SPECIFICATION();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_database_audit_specificationContext* drop_database_audit_specification();

  class  Drop_database_encryption_keyContext : public antlr4::ParserRuleContext {
  public:
    Drop_database_encryption_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *KEY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_database_encryption_keyContext* drop_database_encryption_key();

  class  Drop_database_scoped_credentialContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *credential_name = nullptr;
    Drop_database_scoped_credentialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCOPED();
    antlr4::tree::TerminalNode *CREDENTIAL();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_database_scoped_credentialContext* drop_database_scoped_credential();

  class  Drop_defaultContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *default_name = nullptr;
    Drop_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_defaultContext* drop_default();

  class  Drop_endpointContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *endPointName = nullptr;
    Drop_endpointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ENDPOINT();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_endpointContext* drop_endpoint();

  class  Drop_external_data_sourceContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *external_data_source_name = nullptr;
    Drop_external_data_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *SOURCE();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_external_data_sourceContext* drop_external_data_source();

  class  Drop_external_file_formatContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *external_file_format_name = nullptr;
    Drop_external_file_formatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FORMAT();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_external_file_formatContext* drop_external_file_format();

  class  Drop_external_libraryContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *library_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    Drop_external_libraryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *LIBRARY();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_external_libraryContext* drop_external_library();

  class  Drop_external_resource_poolContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *pool_name = nullptr;
    Drop_external_resource_poolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *POOL();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_external_resource_poolContext* drop_external_resource_pool();

  class  Drop_external_tableContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database_name = nullptr;
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *table = nullptr;
    Drop_external_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_external_tableContext* drop_external_table();

  class  Drop_event_notificationsContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *notification_name = nullptr;
    TSqlParser::Id_Context *queue_name = nullptr;
    Drop_event_notificationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *NOTIFICATION();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *QUEUE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_event_notificationsContext* drop_event_notifications();

  class  Drop_event_sessionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *event_session_name = nullptr;
    Drop_event_sessionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SERVER();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_event_sessionContext* drop_event_session();

  class  Drop_fulltext_catalogContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *catalog_name = nullptr;
    Drop_fulltext_catalogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *CATALOG();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_fulltext_catalogContext* drop_fulltext_catalog();

  class  Drop_fulltext_indexContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *table = nullptr;
    Drop_fulltext_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *ON();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_fulltext_indexContext* drop_fulltext_index();

  class  Drop_fulltext_stoplistContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *stoplist_name = nullptr;
    Drop_fulltext_stoplistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *STOPLIST();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_fulltext_stoplistContext* drop_fulltext_stoplist();

  class  Drop_loginContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *login_name = nullptr;
    Drop_loginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *LOGIN();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_loginContext* drop_login();

  class  Drop_master_keyContext : public antlr4::ParserRuleContext {
  public:
    Drop_master_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_master_keyContext* drop_master_key();

  class  Drop_message_typeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *message_type_name = nullptr;
    Drop_message_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *MESSAGE();
    antlr4::tree::TerminalNode *TYPE();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_message_typeContext* drop_message_type();

  class  Drop_partition_functionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *partition_function_name = nullptr;
    Drop_partition_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *FUNCTION();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_partition_functionContext* drop_partition_function();

  class  Drop_partition_schemeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *partition_scheme_name = nullptr;
    Drop_partition_schemeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *SCHEME();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_partition_schemeContext* drop_partition_scheme();

  class  Drop_queueContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database_name = nullptr;
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *queue_name = nullptr;
    Drop_queueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *QUEUE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_queueContext* drop_queue();

  class  Drop_remote_service_bindingContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *binding_name = nullptr;
    Drop_remote_service_bindingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *BINDING();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_remote_service_bindingContext* drop_remote_service_binding();

  class  Drop_resource_poolContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *pool_name = nullptr;
    Drop_resource_poolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *POOL();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_resource_poolContext* drop_resource_pool();

  class  Drop_db_roleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *role_name = nullptr;
    Drop_db_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ROLE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_db_roleContext* drop_db_role();

  class  Drop_routeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *route_name = nullptr;
    Drop_routeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ROUTE();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_routeContext* drop_route();

  class  Drop_ruleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *rule_name = nullptr;
    Drop_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *RULE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_ruleContext* drop_rule();

  class  Drop_schemaContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    Drop_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SCHEMA();
    Id_Context *id_();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_schemaContext* drop_schema();

  class  Drop_search_property_listContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *property_list_name = nullptr;
    Drop_search_property_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LIST();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_search_property_listContext* drop_search_property_list();

  class  Drop_security_policyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *security_policy_name = nullptr;
    Drop_security_policyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *POLICY();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_security_policyContext* drop_security_policy();

  class  Drop_sequenceContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database_name = nullptr;
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *sequence_name = nullptr;
    Drop_sequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_sequenceContext* drop_sequence();

  class  Drop_server_auditContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *audit_name = nullptr;
    Drop_server_auditContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *AUDIT();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_server_auditContext* drop_server_audit();

  class  Drop_server_audit_specificationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *audit_specification_name = nullptr;
    Drop_server_audit_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *SPECIFICATION();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_server_audit_specificationContext* drop_server_audit_specification();

  class  Drop_server_roleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *role_name = nullptr;
    Drop_server_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *ROLE();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_server_roleContext* drop_server_role();

  class  Drop_serviceContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *dropped_service_name = nullptr;
    Drop_serviceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVICE();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_serviceContext* drop_service();

  class  Drop_signatureContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *module_name = nullptr;
    TSqlParser::Id_Context *cert_name = nullptr;
    TSqlParser::Id_Context *Asym_key_name = nullptr;
    Drop_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SIGNATURE();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *BY();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *COUNTER();
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> CERTIFICATE();
    antlr4::tree::TerminalNode* CERTIFICATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASYMMETRIC();
    antlr4::tree::TerminalNode* ASYMMETRIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_signatureContext* drop_signature();

  class  Drop_statistics_name_azure_dw_and_pdwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *object_name = nullptr;
    TSqlParser::Id_Context *statistics_name = nullptr;
    Drop_statistics_name_azure_dw_and_pdwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *STATISTICS();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_statistics_name_azure_dw_and_pdwContext* drop_statistics_name_azure_dw_and_pdw();

  class  Drop_symmetric_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *symmetric_key_name = nullptr;
    Drop_symmetric_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SYMMETRIC();
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    Id_Context *id_();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *PROVIDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_symmetric_keyContext* drop_symmetric_key();

  class  Drop_synonymContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *synonym_name = nullptr;
    Drop_synonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SYNONYM();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_synonymContext* drop_synonym();

  class  Drop_userContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *user_name = nullptr;
    Drop_userContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *USER();
    Id_Context *id_();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_userContext* drop_user();

  class  Drop_workload_groupContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *group_name = nullptr;
    Drop_workload_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *GROUP();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_workload_groupContext* drop_workload_group();

  class  Drop_xml_schema_collectionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *relational_schema = nullptr;
    TSqlParser::Id_Context *sql_identifier = nullptr;
    Drop_xml_schema_collectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *COLLECTION();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_xml_schema_collectionContext* drop_xml_schema_collection();

  class  Disable_triggerContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *trigger_name = nullptr;
    TSqlParser::Id_Context *schema_id = nullptr;
    TSqlParser::Id_Context *object_name = nullptr;
    Disable_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SERVER();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Disable_triggerContext* disable_trigger();

  class  Enable_triggerContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *trigger_name = nullptr;
    TSqlParser::Id_Context *schema_id = nullptr;
    TSqlParser::Id_Context *object_name = nullptr;
    Enable_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SERVER();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_triggerContext* enable_trigger();

  class  Lock_tableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *seconds = nullptr;
    Lock_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lock_tableContext* lock_table();

  class  Truncate_tableContext : public antlr4::ParserRuleContext {
  public:
    Truncate_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *PARTITIONS();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Truncate_tableContext* truncate_table();

  class  Create_column_master_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *key_name = nullptr;
    antlr4::Token *key_store_provider_name = nullptr;
    antlr4::Token *key_path = nullptr;
    Create_column_master_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *KEY_STORE_PROVIDER_NAME();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *KEY_PATH();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Id_Context *id_();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_column_master_keyContext* create_column_master_key();

  class  Alter_credentialContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *credential_name = nullptr;
    antlr4::Token *identity_name = nullptr;
    antlr4::Token *secret = nullptr;
    Alter_credentialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *CREDENTIAL();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *IDENTITY();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    Id_Context *id_();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *SECRET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_credentialContext* alter_credential();

  class  Create_credentialContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *credential_name = nullptr;
    antlr4::Token *identity_name = nullptr;
    antlr4::Token *secret = nullptr;
    TSqlParser::Id_Context *cryptographic_provider_name = nullptr;
    Create_credentialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CREDENTIAL();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *IDENTITY();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *SECRET();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CRYPTOGRAPHIC();
    antlr4::tree::TerminalNode *PROVIDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_credentialContext* create_credential();

  class  Alter_cryptographic_providerContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *provider_name = nullptr;
    antlr4::Token *crypto_provider_ddl_file = nullptr;
    Alter_cryptographic_providerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *CRYPTOGRAPHIC();
    antlr4::tree::TerminalNode *PROVIDER();
    Id_Context *id_();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_cryptographic_providerContext* alter_cryptographic_provider();

  class  Create_cryptographic_providerContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *provider_name = nullptr;
    antlr4::Token *path_of_DLL = nullptr;
    Create_cryptographic_providerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CRYPTOGRAPHIC();
    antlr4::tree::TerminalNode *PROVIDER();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *EQUAL();
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_cryptographic_providerContext* create_cryptographic_provider();

  class  Create_endpointContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *endpointname = nullptr;
    TSqlParser::Id_Context *login = nullptr;
    antlr4::Token *state = nullptr;
    Create_endpointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ENDPOINT();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *TCP();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    Endpoint_listener_clauseContext *endpoint_listener_clause();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *TSQL();
    antlr4::tree::TerminalNode *SERVICE_BROKER();
    Endpoint_authentication_clauseContext *endpoint_authentication_clause();
    antlr4::tree::TerminalNode *DATABASE_MIRRORING();
    antlr4::tree::TerminalNode *ROLE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *WITNESS();
    antlr4::tree::TerminalNode *PARTNER();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *STARTED();
    antlr4::tree::TerminalNode *STOPPED();
    std::vector<antlr4::tree::TerminalNode *> DISABLED();
    antlr4::tree::TerminalNode* DISABLED(size_t i);
    Endpoint_encryption_alogorithm_clauseContext *endpoint_encryption_alogorithm_clause();
    antlr4::tree::TerminalNode *MESSAGE_FORWARDING();
    antlr4::tree::TerminalNode *MESSAGE_FORWARD_SIZE();
    antlr4::tree::TerminalNode *DECIMAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ENABLED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_endpointContext* create_endpoint();

  class  Endpoint_encryption_alogorithm_clauseContext : public antlr4::ParserRuleContext {
  public:
    Endpoint_encryption_alogorithm_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DISABLED();
    antlr4::tree::TerminalNode *SUPPORTED();
    antlr4::tree::TerminalNode *REQUIRED();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *AES();
    antlr4::tree::TerminalNode *RC4();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Endpoint_encryption_alogorithm_clauseContext* endpoint_encryption_alogorithm_clause();

  class  Endpoint_authentication_clauseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *cert_name = nullptr;
    Endpoint_authentication_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *WINDOWS();
    antlr4::tree::TerminalNode *CERTIFICATE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *NTLM();
    antlr4::tree::TerminalNode *KERBEROS();
    antlr4::tree::TerminalNode *NEGOTIATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Endpoint_authentication_clauseContext* endpoint_authentication_clause();

  class  Endpoint_listener_clauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *port = nullptr;
    antlr4::Token *ipv4 = nullptr;
    antlr4::Token *ipv6 = nullptr;
    Endpoint_listener_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LISTENER_PORT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *LISTENER_IP();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *IPV4_ADDR();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Endpoint_listener_clauseContext* endpoint_listener_clause();

  class  Create_event_notificationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *event_notification_name = nullptr;
    TSqlParser::Id_Context *queue_name = nullptr;
    TSqlParser::Id_Context *event_type_or_group = nullptr;
    antlr4::Token *broker_service = nullptr;
    antlr4::Token *broker_service_specifier_or_current_database = nullptr;
    Create_event_notificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *NOTIFICATION();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *SERVICE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FAN_IN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_event_notificationContext* create_event_notification();

  class  Create_or_alter_event_sessionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *event_session_name = nullptr;
    TSqlParser::Id_Context *event_module_guid = nullptr;
    TSqlParser::Id_Context *event_package_name = nullptr;
    TSqlParser::Id_Context *event_name = nullptr;
    TSqlParser::Id_Context *event_customizable_attributue = nullptr;
    TSqlParser::Id_Context *action_name = nullptr;
    TSqlParser::Id_Context *target_name = nullptr;
    TSqlParser::Id_Context *target_parameter_name = nullptr;
    antlr4::Token *max_memory = nullptr;
    antlr4::Token *max_dispatch_latency_seconds = nullptr;
    antlr4::Token *max_event_size = nullptr;
    Create_or_alter_event_sessionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EVENT();
    antlr4::tree::TerminalNode* EVENT(size_t i);
    antlr4::tree::TerminalNode *SESSION();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ALTER();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TARGET();
    antlr4::tree::TerminalNode* TARGET(size_t i);
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *STATE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STOP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *MAX_MEMORY();
    antlr4::tree::TerminalNode *EVENT_RETENTION_MODE();
    antlr4::tree::TerminalNode *MAX_DISPATCH_LATENCY();
    antlr4::tree::TerminalNode *MAX_EVENT_SIZE();
    antlr4::tree::TerminalNode *MEMORY_PARTITION_MODE();
    antlr4::tree::TerminalNode *TRACK_CAUSALITY();
    antlr4::tree::TerminalNode *STARTUP_STATE();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KB();
    antlr4::tree::TerminalNode* KB(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MB();
    antlr4::tree::TerminalNode* MB(size_t i);
    antlr4::tree::TerminalNode *ALLOW_SINGLE_EVENT_LOSS();
    antlr4::tree::TerminalNode *ALLOW_MULTIPLE_EVENT_LOSS();
    antlr4::tree::TerminalNode *NO_EVENT_LOSS();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *PER_NODE();
    antlr4::tree::TerminalNode *PER_CPU();
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *INFINITE();
    std::vector<antlr4::tree::TerminalNode *> ACTION();
    antlr4::tree::TerminalNode* ACTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHERE();
    antlr4::tree::TerminalNode* WHERE(size_t i);
    std::vector<Event_session_predicate_expressionContext *> event_session_predicate_expression();
    Event_session_predicate_expressionContext* event_session_predicate_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_or_alter_event_sessionContext* create_or_alter_event_session();

  class  Event_session_predicate_expressionContext : public antlr4::ParserRuleContext {
  public:
    Event_session_predicate_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Event_session_predicate_factorContext *> event_session_predicate_factor();
    Event_session_predicate_factorContext* event_session_predicate_factor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Event_session_predicate_expressionContext *> event_session_predicate_expression();
    Event_session_predicate_expressionContext* event_session_predicate_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_session_predicate_expressionContext* event_session_predicate_expression();

  class  Event_session_predicate_factorContext : public antlr4::ParserRuleContext {
  public:
    Event_session_predicate_factorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_session_predicate_leafContext *event_session_predicate_leaf();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Event_session_predicate_expressionContext *event_session_predicate_expression();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_session_predicate_factorContext* event_session_predicate_factor();

  class  Event_session_predicate_leafContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *event_field_name = nullptr;
    TSqlParser::Id_Context *event_module_guid = nullptr;
    TSqlParser::Id_Context *event_package_name = nullptr;
    TSqlParser::Id_Context *predicate_source_name = nullptr;
    TSqlParser::Id_Context *predicate_compare_name = nullptr;
    Event_session_predicate_leafContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESS();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *EXCLAMATION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_session_predicate_leafContext* event_session_predicate_leaf();

  class  Alter_external_data_sourceContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *data_source_name = nullptr;
    antlr4::Token *location = nullptr;
    antlr4::Token *resource_manager_location = nullptr;
    TSqlParser::Id_Context *credential_name = nullptr;
    Alter_external_data_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SET();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCATION();
    antlr4::tree::TerminalNode* LOCATION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RESOURCE_MANAGER_LOCATION();
    antlr4::tree::TerminalNode* RESOURCE_MANAGER_LOCATION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CREDENTIAL();
    antlr4::tree::TerminalNode* CREDENTIAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *BLOB_STORAGE();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_external_data_sourceContext* alter_external_data_source();

  class  Alter_external_libraryContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *library_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    antlr4::Token *client_library = nullptr;
    TSqlParser::Id_Context *external_data_source_name = nullptr;
    Alter_external_libraryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *LIBRARY();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *CONTENT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *NONE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *PLATFORM();
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> LANGUAGE();
    antlr4::tree::TerminalNode* LANGUAGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DATA_SOURCE();
    antlr4::tree::TerminalNode* DATA_SOURCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> R();
    antlr4::tree::TerminalNode* R(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PYTHON();
    antlr4::tree::TerminalNode* PYTHON(size_t i);
    antlr4::tree::TerminalNode *WINDOWS();
    antlr4::tree::TerminalNode *LINUX();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_external_libraryContext* alter_external_library();

  class  Create_external_libraryContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *library_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    antlr4::Token *client_library = nullptr;
    TSqlParser::Id_Context *external_data_source_name = nullptr;
    Create_external_libraryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *FROM();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *NONE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *CONTENT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *PLATFORM();
    std::vector<antlr4::tree::TerminalNode *> LANGUAGE();
    antlr4::tree::TerminalNode* LANGUAGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DATA_SOURCE();
    antlr4::tree::TerminalNode* DATA_SOURCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> R();
    antlr4::tree::TerminalNode* R(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PYTHON();
    antlr4::tree::TerminalNode* PYTHON(size_t i);
    antlr4::tree::TerminalNode *WINDOWS();
    antlr4::tree::TerminalNode *LINUX();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_external_libraryContext* create_external_library();

  class  Alter_external_resource_poolContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *pool_name = nullptr;
    antlr4::Token *max_cpu_percent = nullptr;
    antlr4::Token *max_memory_percent = nullptr;
    antlr4::Token *max_processes = nullptr;
    Alter_external_resource_poolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *POOL();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *MAX_CPU_PERCENT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    antlr4::tree::TerminalNode *DEFAULT_DOUBLE_QUOTE();
    antlr4::tree::TerminalNode *AFFINITY();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *NUMANODE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *MAX_MEMORY_PERCENT();
    antlr4::tree::TerminalNode *MAX_PROCESSES();
    antlr4::tree::TerminalNode *AUTO();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_external_resource_poolContext* alter_external_resource_pool();

  class  Create_external_resource_poolContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *pool_name = nullptr;
    antlr4::Token *max_cpu_percent = nullptr;
    antlr4::Token *max_memory_percent = nullptr;
    antlr4::Token *max_processes = nullptr;
    Create_external_resource_poolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *POOL();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *MAX_CPU_PERCENT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Id_Context *id_();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    antlr4::tree::TerminalNode *AFFINITY();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *NUMANODE();
    antlr4::tree::TerminalNode *MAX_MEMORY_PERCENT();
    antlr4::tree::TerminalNode *MAX_PROCESSES();
    antlr4::tree::TerminalNode *AUTO();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_external_resource_poolContext* create_external_resource_pool();

  class  Alter_fulltext_catalogContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *catalog_name = nullptr;
    Alter_fulltext_catalogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *CATALOG();
    Id_Context *id_();
    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ACCENT_SENSITIVITY();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_fulltext_catalogContext* alter_fulltext_catalog();

  class  Create_fulltext_catalogContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *catalog_name = nullptr;
    TSqlParser::Id_Context *filegroup = nullptr;
    antlr4::Token *rootpath = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    Create_fulltext_catalogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *CATALOG();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *FILEGROUP();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ACCENT_SENSITIVITY();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_fulltext_catalogContext* create_fulltext_catalog();

  class  Alter_fulltext_stoplistContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *stoplist_name = nullptr;
    antlr4::Token *stopword = nullptr;
    Alter_fulltext_stoplistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *STOPLIST();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *DROP();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_fulltext_stoplistContext* alter_fulltext_stoplist();

  class  Create_fulltext_stoplistContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *stoplist_name = nullptr;
    TSqlParser::Id_Context *database_name = nullptr;
    TSqlParser::Id_Context *source_stoplist_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    Create_fulltext_stoplistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FULLTEXT();
    std::vector<antlr4::tree::TerminalNode *> STOPLIST();
    antlr4::tree::TerminalNode* STOPLIST(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_fulltext_stoplistContext* create_fulltext_stoplist();

  class  Alter_login_sql_serverContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *login_name = nullptr;
    antlr4::Token *password = nullptr;
    antlr4::Token *password_hash = nullptr;
    antlr4::Token *old_password = nullptr;
    TSqlParser::Id_Context *default_database = nullptr;
    TSqlParser::Id_Context *default_laguage = nullptr;
    TSqlParser::Id_Context *credential_name = nullptr;
    Alter_login_sql_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *LOGIN();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> CREDENTIAL();
    antlr4::tree::TerminalNode* CREDENTIAL(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *OLD_PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *DEFAULT_DATABASE();
    antlr4::tree::TerminalNode *DEFAULT_LANGUAGE();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *CHECK_POLICY();
    antlr4::tree::TerminalNode *CHECK_EXPIRATION();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *HASHED();
    std::vector<antlr4::tree::TerminalNode *> MUST_CHANGE();
    antlr4::tree::TerminalNode* MUST_CHANGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNLOCK();
    antlr4::tree::TerminalNode* UNLOCK(size_t i);
    antlr4::tree::TerminalNode *BINARY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_login_sql_serverContext* alter_login_sql_server();

  class  Create_login_sql_serverContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *login_name = nullptr;
    antlr4::Token *password = nullptr;
    antlr4::Token *password_hash = nullptr;
    antlr4::Token *sid = nullptr;
    TSqlParser::Id_Context *default_database = nullptr;
    TSqlParser::Id_Context *default_laguage = nullptr;
    TSqlParser::Id_Context *credential_name = nullptr;
    antlr4::Token *default_language = nullptr;
    TSqlParser::Id_Context *certname = nullptr;
    TSqlParser::Id_Context *asym_key_name = nullptr;
    Create_login_sql_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *LOGIN();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *SID();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *DEFAULT_DATABASE();
    antlr4::tree::TerminalNode *DEFAULT_LANGUAGE();
    antlr4::tree::TerminalNode *CHECK_EXPIRATION();
    antlr4::tree::TerminalNode *CHECK_POLICY();
    antlr4::tree::TerminalNode *CREDENTIAL();
    std::vector<antlr4::tree::TerminalNode *> BINARY();
    antlr4::tree::TerminalNode* BINARY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    antlr4::tree::TerminalNode *WINDOWS();
    antlr4::tree::TerminalNode *CERTIFICATE();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *HASHED();
    std::vector<antlr4::tree::TerminalNode *> MUST_CHANGE();
    antlr4::tree::TerminalNode* MUST_CHANGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNLOCK();
    antlr4::tree::TerminalNode* UNLOCK(size_t i);
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_login_sql_serverContext* create_login_sql_server();

  class  Alter_login_azure_sqlContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *login_name = nullptr;
    antlr4::Token *password = nullptr;
    antlr4::Token *old_password = nullptr;
    Alter_login_azure_sqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *LOGIN();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *OLD_PASSWORD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_login_azure_sqlContext* alter_login_azure_sql();

  class  Create_login_azure_sqlContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *login_name = nullptr;
    antlr4::Token *sid = nullptr;
    Create_login_azure_sqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *LOGIN();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *STRING();
    Id_Context *id_();
    antlr4::tree::TerminalNode *SID();
    antlr4::tree::TerminalNode *BINARY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_login_azure_sqlContext* create_login_azure_sql();

  class  Alter_login_azure_sql_dw_and_pdwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *login_name = nullptr;
    antlr4::Token *password = nullptr;
    antlr4::Token *old_password = nullptr;
    Alter_login_azure_sql_dw_and_pdwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *LOGIN();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *OLD_PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> MUST_CHANGE();
    antlr4::tree::TerminalNode* MUST_CHANGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNLOCK();
    antlr4::tree::TerminalNode* UNLOCK(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_login_azure_sql_dw_and_pdwContext* alter_login_azure_sql_dw_and_pdw();

  class  Create_login_pdwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *loginName = nullptr;
    antlr4::Token *password = nullptr;
    Create_login_pdwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *LOGIN();
    Id_Context *id_();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *WINDOWS();
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *MUST_CHANGE();
    antlr4::tree::TerminalNode *CHECK_POLICY();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_login_pdwContext* create_login_pdw();

  class  Alter_master_key_sql_serverContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *password = nullptr;
    antlr4::Token *encryption_password = nullptr;
    Alter_master_key_sql_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> MASTER();
    antlr4::tree::TerminalNode* MASTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    antlr4::tree::TerminalNode *REGENERATE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *FORCE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_master_key_sql_serverContext* alter_master_key_sql_server();

  class  Create_master_key_sql_serverContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *password = nullptr;
    Create_master_key_sql_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_master_key_sql_serverContext* create_master_key_sql_server();

  class  Alter_master_key_azure_sqlContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *password = nullptr;
    antlr4::Token *encryption_password = nullptr;
    Alter_master_key_azure_sqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> MASTER();
    antlr4::tree::TerminalNode* MASTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    antlr4::tree::TerminalNode *REGENERATE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *FORCE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_master_key_azure_sqlContext* alter_master_key_azure_sql();

  class  Create_master_key_azure_sqlContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *password = nullptr;
    Create_master_key_azure_sqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_master_key_azure_sqlContext* create_master_key_azure_sql();

  class  Alter_message_typeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *message_type_name = nullptr;
    TSqlParser::Id_Context *schema_collection_name = nullptr;
    Alter_message_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *MESSAGE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *WELL_FORMED_XML();
    antlr4::tree::TerminalNode *VALID_XML();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *COLLECTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_message_typeContext* alter_message_type();

  class  Alter_partition_functionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *partition_function_name = nullptr;
    Alter_partition_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *DECIMAL();
    Id_Context *id_();
    antlr4::tree::TerminalNode *SPLIT();
    antlr4::tree::TerminalNode *MERGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_partition_functionContext* alter_partition_function();

  class  Alter_partition_schemeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *partition_scheme_name = nullptr;
    TSqlParser::Id_Context *file_group_name = nullptr;
    Alter_partition_schemeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *SCHEME();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *USED();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_partition_schemeContext* alter_partition_scheme();

  class  Alter_remote_service_bindingContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *binding_name = nullptr;
    TSqlParser::Id_Context *user_name = nullptr;
    Alter_remote_service_bindingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *BINDING();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *USER();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ANONYMOUS();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_remote_service_bindingContext* alter_remote_service_binding();

  class  Create_remote_service_bindingContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *binding_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    antlr4::Token *remote_service_name = nullptr;
    TSqlParser::Id_Context *user_name = nullptr;
    Create_remote_service_bindingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *REMOTE();
    std::vector<antlr4::tree::TerminalNode *> SERVICE();
    antlr4::tree::TerminalNode* SERVICE(size_t i);
    antlr4::tree::TerminalNode *BINDING();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *USER();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ANONYMOUS();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_remote_service_bindingContext* create_remote_service_binding();

  class  Create_resource_poolContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *pool_name = nullptr;
    Create_resource_poolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *POOL();
    Id_Context *id_();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *MIN_CPU_PERCENT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    antlr4::tree::TerminalNode *MAX_CPU_PERCENT();
    antlr4::tree::TerminalNode *CAP_CPU_PERCENT();
    antlr4::tree::TerminalNode *AFFINITY();
    antlr4::tree::TerminalNode *SCHEDULER();
    antlr4::tree::TerminalNode *MIN_MEMORY_PERCENT();
    antlr4::tree::TerminalNode *MAX_MEMORY_PERCENT();
    antlr4::tree::TerminalNode *MIN_IOPS_PER_VOLUME();
    antlr4::tree::TerminalNode *MAX_IOPS_PER_VOLUME();
    antlr4::tree::TerminalNode *AUTO();
    antlr4::tree::TerminalNode *NUMANODE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_resource_poolContext* create_resource_pool();

  class  Alter_resource_governorContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *function_name = nullptr;
    antlr4::Token *max_outstanding_io_per_volume = nullptr;
    Alter_resource_governorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *GOVERNOR();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *CLASSIFIER_FUNCTION();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *MAX_OUTSTANDING_IO_PER_VOLUME();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *RECONFIGURE();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *NULL_();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_resource_governorContext* alter_resource_governor();

  class  Alter_database_audit_specificationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *audit_specification_name = nullptr;
    TSqlParser::Id_Context *audit_name = nullptr;
    Alter_database_audit_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    std::vector<antlr4::tree::TerminalNode *> AUDIT();
    antlr4::tree::TerminalNode* AUDIT(size_t i);
    antlr4::tree::TerminalNode *SPECIFICATION();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SERVER();
    std::vector<Audit_action_spec_groupContext *> audit_action_spec_group();
    Audit_action_spec_groupContext* audit_action_spec_group(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_database_audit_specificationContext* alter_database_audit_specification();

  class  Audit_action_spec_groupContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *audit_action_group_name = nullptr;
    Audit_action_spec_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    Audit_action_specificationContext *audit_action_specification();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_action_spec_groupContext* audit_action_spec_group();

  class  Audit_action_specificationContext : public antlr4::ParserRuleContext {
  public:
    Audit_action_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Action_specificationContext *> action_specification();
    Action_specificationContext* action_specification(size_t i);
    antlr4::tree::TerminalNode *ON();
    Audit_securableContext *audit_securable();
    antlr4::tree::TerminalNode *BY();
    std::vector<Principal_idContext *> principal_id();
    Principal_idContext* principal_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Audit_class_nameContext *audit_class_name();
    antlr4::tree::TerminalNode *DOUBLE_COLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_action_specificationContext* audit_action_specification();

  class  Action_specificationContext : public antlr4::ParserRuleContext {
  public:
    Action_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *RECEIVE();
    antlr4::tree::TerminalNode *REFERENCES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_specificationContext* action_specification();

  class  Audit_class_nameContext : public antlr4::ParserRuleContext {
  public:
    Audit_class_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *TABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_class_nameContext* audit_class_name();

  class  Audit_securableContext : public antlr4::ParserRuleContext {
  public:
    Audit_securableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_securableContext* audit_securable();

  class  Alter_db_roleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *role_name = nullptr;
    TSqlParser::Id_Context *database_principal = nullptr;
    TSqlParser::Id_Context *new_role_name = nullptr;
    Alter_db_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ROLE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_db_roleContext* alter_db_role();

  class  Create_database_audit_specificationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *audit_specification_name = nullptr;
    TSqlParser::Id_Context *audit_name = nullptr;
    Create_database_audit_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *DATABASE();
    std::vector<antlr4::tree::TerminalNode *> AUDIT();
    antlr4::tree::TerminalNode* AUDIT(size_t i);
    antlr4::tree::TerminalNode *SPECIFICATION();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SERVER();
    std::vector<Audit_action_spec_groupContext *> audit_action_spec_group();
    Audit_action_spec_groupContext* audit_action_spec_group(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_audit_specificationContext* create_database_audit_specification();

  class  Create_db_roleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *role_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    Create_db_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ROLE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_db_roleContext* create_db_role();

  class  Create_routeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *route_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    antlr4::Token *route_service_name = nullptr;
    antlr4::Token *broker_instance_identifier = nullptr;
    Create_routeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ROUTE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ADDRESS();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *SERVICE_NAME();
    antlr4::tree::TerminalNode *BROKER_INSTANCE();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *DECIMAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *MIRROR_ADDRESS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_routeContext* create_route();

  class  Create_ruleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *rule_name = nullptr;
    Create_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *RULE();
    antlr4::tree::TerminalNode *AS();
    Search_conditionContext *search_condition();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_ruleContext* create_rule();

  class  Alter_schema_sqlContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    Alter_schema_sqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> SCHEMA();
    antlr4::tree::TerminalNode* SCHEMA(size_t i);
    antlr4::tree::TerminalNode *TRANSFER();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOUBLE_COLON();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *COLLECTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_schema_sqlContext* alter_schema_sql();

  class  Create_schemaContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    TSqlParser::Id_Context *object_name = nullptr;
    Create_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> SCHEMA();
    antlr4::tree::TerminalNode* SCHEMA(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<Create_tableContext *> create_table();
    Create_tableContext* create_table(size_t i);
    std::vector<Create_viewContext *> create_view();
    Create_viewContext* create_view(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REVOKE();
    antlr4::tree::TerminalNode* REVOKE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DENY();
    antlr4::tree::TerminalNode* DENY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SELECT();
    antlr4::tree::TerminalNode* SELECT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INSERT();
    antlr4::tree::TerminalNode* INSERT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DELETE();
    antlr4::tree::TerminalNode* DELETE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UPDATE();
    antlr4::tree::TerminalNode* UPDATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOUBLE_COLON();
    antlr4::tree::TerminalNode* DOUBLE_COLON(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_schemaContext* create_schema();

  class  Create_schema_azure_sql_dw_and_pdwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    Create_schema_azure_sql_dw_and_pdwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SCHEMA();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_schema_azure_sql_dw_and_pdwContext* create_schema_azure_sql_dw_and_pdw();

  class  Alter_schema_azure_sql_dw_and_pdwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    Alter_schema_azure_sql_dw_and_pdwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *TRANSFER();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *DOUBLE_COLON();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_schema_azure_sql_dw_and_pdwContext* alter_schema_azure_sql_dw_and_pdw();

  class  Create_search_property_listContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *new_list_name = nullptr;
    TSqlParser::Id_Context *database_name = nullptr;
    TSqlParser::Id_Context *source_list_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    Create_search_property_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LIST();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_search_property_listContext* create_search_property_list();

  class  Create_security_policyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *security_policy_name = nullptr;
    TSqlParser::Id_Context *tvf_schema_name = nullptr;
    TSqlParser::Id_Context *security_predicate_function_name = nullptr;
    TSqlParser::Id_Context *column_name_or_arguments = nullptr;
    TSqlParser::Id_Context *table_schema_name = nullptr;
    TSqlParser::Id_Context *name = nullptr;
    Create_security_policyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *POLICY();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PREDICATE();
    antlr4::tree::TerminalNode* PREDICATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *REPLICATION();
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AFTER();
    antlr4::tree::TerminalNode* AFTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BEFORE();
    antlr4::tree::TerminalNode* BEFORE(size_t i);
    antlr4::tree::TerminalNode *SCHEMABINDING();
    std::vector<antlr4::tree::TerminalNode *> FILTER();
    antlr4::tree::TerminalNode* FILTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BLOCK();
    antlr4::tree::TerminalNode* BLOCK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INSERT();
    antlr4::tree::TerminalNode* INSERT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UPDATE();
    antlr4::tree::TerminalNode* UPDATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DELETE();
    antlr4::tree::TerminalNode* DELETE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_security_policyContext* create_security_policy();

  class  Alter_sequenceContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *sequence_name = nullptr;
    antlr4::Token *sequnce_increment = nullptr;
    Alter_sequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SEQUENCE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *MINVALUE();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *WITH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_sequenceContext* alter_sequence();

  class  Create_sequenceContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *sequence_name = nullptr;
    Create_sequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SEQUENCE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *AS();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *MINVALUE();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *CACHE();
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_sequenceContext* create_sequence();

  class  Alter_server_auditContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *audit_name = nullptr;
    antlr4::Token *filepath = nullptr;
    antlr4::Token *max_rollover_files = nullptr;
    antlr4::Token *max_files = nullptr;
    antlr4::Token *queue_delay = nullptr;
    TSqlParser::Id_Context *event_field_name = nullptr;
    TSqlParser::Id_Context *new_audit_name = nullptr;
    Alter_server_auditContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *AUDIT();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *APPLICATION_LOG();
    antlr4::tree::TerminalNode *SECURITY_LOG();
    std::vector<antlr4::tree::TerminalNode *> QUEUE_DELAY();
    antlr4::tree::TerminalNode* QUEUE_DELAY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON_FAILURE();
    antlr4::tree::TerminalNode* ON_FAILURE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STATE();
    antlr4::tree::TerminalNode* STATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    std::vector<antlr4::tree::TerminalNode *> CONTINUE();
    antlr4::tree::TerminalNode* CONTINUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHUTDOWN();
    antlr4::tree::TerminalNode* SHUTDOWN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FAIL_OPERATION();
    antlr4::tree::TerminalNode* FAIL_OPERATION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXCLAMATION();
    std::vector<antlr4::tree::TerminalNode *> FILEPATH();
    antlr4::tree::TerminalNode* FILEPATH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAXSIZE();
    antlr4::tree::TerminalNode* MAXSIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_ROLLOVER_FILES();
    antlr4::tree::TerminalNode* MAX_ROLLOVER_FILES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_FILES();
    antlr4::tree::TerminalNode* MAX_FILES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RESERVE_DISK_SPACE();
    antlr4::tree::TerminalNode* RESERVE_DISK_SPACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNLIMITED();
    antlr4::tree::TerminalNode* UNLIMITED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MB();
    antlr4::tree::TerminalNode* MB(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GB();
    antlr4::tree::TerminalNode* GB(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TB();
    antlr4::tree::TerminalNode* TB(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_server_auditContext* alter_server_audit();

  class  Create_server_auditContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *audit_name = nullptr;
    antlr4::Token *filepath = nullptr;
    antlr4::Token *max_rollover_files = nullptr;
    antlr4::Token *max_files = nullptr;
    antlr4::Token *queue_delay = nullptr;
    TSqlParser::Id_Context *audit_guid = nullptr;
    TSqlParser::Id_Context *event_field_name = nullptr;
    TSqlParser::Id_Context *new_audit_name = nullptr;
    Create_server_auditContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *AUDIT();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *APPLICATION_LOG();
    antlr4::tree::TerminalNode *SECURITY_LOG();
    std::vector<antlr4::tree::TerminalNode *> QUEUE_DELAY();
    antlr4::tree::TerminalNode* QUEUE_DELAY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON_FAILURE();
    antlr4::tree::TerminalNode* ON_FAILURE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STATE();
    antlr4::tree::TerminalNode* STATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AUDIT_GUID();
    antlr4::tree::TerminalNode* AUDIT_GUID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    std::vector<antlr4::tree::TerminalNode *> CONTINUE();
    antlr4::tree::TerminalNode* CONTINUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHUTDOWN();
    antlr4::tree::TerminalNode* SHUTDOWN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FAIL_OPERATION();
    antlr4::tree::TerminalNode* FAIL_OPERATION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXCLAMATION();
    std::vector<antlr4::tree::TerminalNode *> FILEPATH();
    antlr4::tree::TerminalNode* FILEPATH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAXSIZE();
    antlr4::tree::TerminalNode* MAXSIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_ROLLOVER_FILES();
    antlr4::tree::TerminalNode* MAX_ROLLOVER_FILES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_FILES();
    antlr4::tree::TerminalNode* MAX_FILES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RESERVE_DISK_SPACE();
    antlr4::tree::TerminalNode* RESERVE_DISK_SPACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNLIMITED();
    antlr4::tree::TerminalNode* UNLIMITED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MB();
    antlr4::tree::TerminalNode* MB(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GB();
    antlr4::tree::TerminalNode* GB(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TB();
    antlr4::tree::TerminalNode* TB(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_server_auditContext* create_server_audit();

  class  Alter_server_audit_specificationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *audit_specification_name = nullptr;
    TSqlParser::Id_Context *audit_name = nullptr;
    TSqlParser::Id_Context *audit_action_group_name = nullptr;
    Alter_server_audit_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> SERVER();
    antlr4::tree::TerminalNode* SERVER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AUDIT();
    antlr4::tree::TerminalNode* AUDIT(size_t i);
    antlr4::tree::TerminalNode *SPECIFICATION();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_server_audit_specificationContext* alter_server_audit_specification();

  class  Create_server_audit_specificationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *audit_specification_name = nullptr;
    TSqlParser::Id_Context *audit_name = nullptr;
    TSqlParser::Id_Context *audit_action_group_name = nullptr;
    Create_server_audit_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> SERVER();
    antlr4::tree::TerminalNode* SERVER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AUDIT();
    antlr4::tree::TerminalNode* AUDIT(size_t i);
    antlr4::tree::TerminalNode *SPECIFICATION();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_server_audit_specificationContext* create_server_audit_specification();

  class  Alter_server_configurationContext : public antlr4::ParserRuleContext {
  public:
    Alter_server_configurationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *CONFIGURATION();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *AFFINITY();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *FAILOVER();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *HADR();
    antlr4::tree::TerminalNode *CONTEXT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *POOL();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *SOFTNUMA();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *NUMANODE();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *MAX_FILES();
    antlr4::tree::TerminalNode *VERBOSELOGGING();
    antlr4::tree::TerminalNode *SQLDUMPERFLAGS();
    antlr4::tree::TerminalNode *SQLDUMPERPATH();
    antlr4::tree::TerminalNode *SQLDUMPERTIMEOUT();
    antlr4::tree::TerminalNode *FAILURECONDITIONLEVEL();
    antlr4::tree::TerminalNode *HEALTHCHECKTIMEOUT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *FILENAME();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SIZE();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *KB();
    antlr4::tree::TerminalNode *MB();
    antlr4::tree::TerminalNode *GB();
    antlr4::tree::TerminalNode *AUTO();
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_server_configurationContext* alter_server_configuration();

  class  Alter_server_roleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *server_role_name = nullptr;
    TSqlParser::Id_Context *server_principal = nullptr;
    TSqlParser::Id_Context *new_server_role_name = nullptr;
    Alter_server_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *ROLE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_server_roleContext* alter_server_role();

  class  Create_server_roleContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *server_role = nullptr;
    TSqlParser::Id_Context *server_principal = nullptr;
    Create_server_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *ROLE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_server_roleContext* create_server_role();

  class  Alter_server_role_pdwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *server_role_name = nullptr;
    TSqlParser::Id_Context *login = nullptr;
    Alter_server_role_pdwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *MEMBER();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_server_role_pdwContext* alter_server_role_pdw();

  class  Alter_serviceContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *modified_service_name = nullptr;
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *queue_name = nullptr;
    Alter_serviceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVICE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Opt_arg_clauseContext *> opt_arg_clause();
    Opt_arg_clauseContext* opt_arg_clause(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_serviceContext* alter_service();

  class  Opt_arg_clauseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *modified_contract_name = nullptr;
    Opt_arg_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTRACT();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_arg_clauseContext* opt_arg_clause();

  class  Create_serviceContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *create_service_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *queue_name = nullptr;
    Create_serviceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *QUEUE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_serviceContext* create_service();

  class  Alter_service_master_keyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *acold_account_name = nullptr;
    antlr4::Token *old_password = nullptr;
    antlr4::Token *new_account_name = nullptr;
    antlr4::Token *new_password = nullptr;
    Alter_service_master_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *REGENERATE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *OLD_ACCOUNT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *OLD_PASSWORD();
    antlr4::tree::TerminalNode *NEW_ACCOUNT();
    antlr4::tree::TerminalNode *NEW_PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_service_master_keyContext* alter_service_master_key();

  class  Alter_symmetric_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *key_name = nullptr;
    TSqlParser::Id_Context *certificate_name = nullptr;
    antlr4::Token *password = nullptr;
    TSqlParser::Id_Context *symmetric_key_name = nullptr;
    TSqlParser::Id_Context *Asym_key_name = nullptr;
    Alter_symmetric_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> SYMMETRIC();
    antlr4::tree::TerminalNode* SYMMETRIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *CERTIFICATE();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_symmetric_keyContext* alter_symmetric_key();

  class  Create_synonymContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_name_1 = nullptr;
    TSqlParser::Id_Context *synonym_name = nullptr;
    TSqlParser::Id_Context *server_name = nullptr;
    TSqlParser::Id_Context *database_name = nullptr;
    TSqlParser::Id_Context *schema_name_2 = nullptr;
    TSqlParser::Id_Context *object_name = nullptr;
    TSqlParser::Id_Context *database_or_schema2 = nullptr;
    TSqlParser::Id_Context *schema_id_2_or_object_name = nullptr;
    Create_synonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SYNONYM();
    antlr4::tree::TerminalNode *FOR();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_synonymContext* create_synonym();

  class  Alter_userContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *username = nullptr;
    TSqlParser::Id_Context *newusername = nullptr;
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *loginame = nullptr;
    antlr4::Token *lcid = nullptr;
    TSqlParser::Id_Context *language_name_or_alias = nullptr;
    Alter_userContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT_SCHEMA();
    antlr4::tree::TerminalNode* DEFAULT_SCHEMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOGIN();
    antlr4::tree::TerminalNode* LOGIN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PASSWORD();
    antlr4::tree::TerminalNode* PASSWORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT_LANGUAGE();
    antlr4::tree::TerminalNode* DEFAULT_LANGUAGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALLOW_ENCRYPTED_VALUE_MODIFICATIONS();
    antlr4::tree::TerminalNode* ALLOW_ENCRYPTED_VALUE_MODIFICATIONS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OLD_PASSWORD();
    antlr4::tree::TerminalNode* OLD_PASSWORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_userContext* alter_user();

  class  Create_userContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *user_name = nullptr;
    TSqlParser::Id_Context *login_name = nullptr;
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *windows_principal = nullptr;
    TSqlParser::Id_Context *language_name_or_alias = nullptr;
    antlr4::Token *password = nullptr;
    TSqlParser::Id_Context *Azure_Active_Directory_principal = nullptr;
    TSqlParser::Id_Context *cert_name = nullptr;
    TSqlParser::Id_Context *asym_key_name = nullptr;
    Create_userContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *LOGIN();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FROM();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT_SCHEMA();
    antlr4::tree::TerminalNode* DEFAULT_SCHEMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALLOW_ENCRYPTED_VALUE_MODIFICATIONS();
    antlr4::tree::TerminalNode* ALLOW_ENCRYPTED_VALUE_MODIFICATIONS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *PROVIDER();
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT_LANGUAGE();
    antlr4::tree::TerminalNode* DEFAULT_LANGUAGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SID();
    antlr4::tree::TerminalNode* SID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BINARY();
    antlr4::tree::TerminalNode* BINARY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *CERTIFICATE();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *KEY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_userContext* create_user();

  class  Create_user_azure_sql_dwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *user_name = nullptr;
    TSqlParser::Id_Context *login_name = nullptr;
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *Azure_Active_Directory_principal = nullptr;
    Create_user_azure_sql_dwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *LOGIN();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *DEFAULT_SCHEMA();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *PROVIDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_user_azure_sql_dwContext* create_user_azure_sql_dw();

  class  Alter_user_azure_sqlContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *username = nullptr;
    TSqlParser::Id_Context *newusername = nullptr;
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *loginame = nullptr;
    Alter_user_azure_sqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT_SCHEMA();
    antlr4::tree::TerminalNode* DEFAULT_SCHEMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOGIN();
    antlr4::tree::TerminalNode* LOGIN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALLOW_ENCRYPTED_VALUE_MODIFICATIONS();
    antlr4::tree::TerminalNode* ALLOW_ENCRYPTED_VALUE_MODIFICATIONS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_user_azure_sqlContext* alter_user_azure_sql();

  class  Alter_workload_groupContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *workload_group_group_name = nullptr;
    antlr4::Token *request_max_memory_grant = nullptr;
    antlr4::Token *request_max_cpu_time_sec = nullptr;
    antlr4::Token *request_memory_grant_timeout_sec = nullptr;
    antlr4::Token *max_dop = nullptr;
    antlr4::Token *group_max_requests = nullptr;
    TSqlParser::Id_Context *workload_group_pool_name = nullptr;
    Alter_workload_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT_DOUBLE_QUOTE();
    antlr4::tree::TerminalNode* DEFAULT_DOUBLE_QUOTE(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *USING();
    std::vector<antlr4::tree::TerminalNode *> IMPORTANCE();
    antlr4::tree::TerminalNode* IMPORTANCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REQUEST_MAX_MEMORY_GRANT_PERCENT();
    antlr4::tree::TerminalNode* REQUEST_MAX_MEMORY_GRANT_PERCENT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REQUEST_MAX_CPU_TIME_SEC();
    antlr4::tree::TerminalNode* REQUEST_MAX_CPU_TIME_SEC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REQUEST_MEMORY_GRANT_TIMEOUT_SEC();
    antlr4::tree::TerminalNode* REQUEST_MEMORY_GRANT_TIMEOUT_SEC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_DOP();
    antlr4::tree::TerminalNode* MAX_DOP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GROUP_MAX_REQUESTS();
    antlr4::tree::TerminalNode* GROUP_MAX_REQUESTS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOW();
    antlr4::tree::TerminalNode* LOW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEDIUM();
    antlr4::tree::TerminalNode* MEDIUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HIGH();
    antlr4::tree::TerminalNode* HIGH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_workload_groupContext* alter_workload_group();

  class  Create_workload_groupContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *workload_group_group_name = nullptr;
    antlr4::Token *request_max_memory_grant = nullptr;
    antlr4::Token *request_max_cpu_time_sec = nullptr;
    antlr4::Token *request_memory_grant_timeout_sec = nullptr;
    antlr4::Token *max_dop = nullptr;
    antlr4::Token *group_max_requests = nullptr;
    TSqlParser::Id_Context *workload_group_pool_name = nullptr;
    TSqlParser::Id_Context *external_pool_name = nullptr;
    Create_workload_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *USING();
    std::vector<antlr4::tree::TerminalNode *> IMPORTANCE();
    antlr4::tree::TerminalNode* IMPORTANCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REQUEST_MAX_MEMORY_GRANT_PERCENT();
    antlr4::tree::TerminalNode* REQUEST_MAX_MEMORY_GRANT_PERCENT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REQUEST_MAX_CPU_TIME_SEC();
    antlr4::tree::TerminalNode* REQUEST_MAX_CPU_TIME_SEC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REQUEST_MEMORY_GRANT_TIMEOUT_SEC();
    antlr4::tree::TerminalNode* REQUEST_MEMORY_GRANT_TIMEOUT_SEC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_DOP();
    antlr4::tree::TerminalNode* MAX_DOP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GROUP_MAX_REQUESTS();
    antlr4::tree::TerminalNode* GROUP_MAX_REQUESTS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT_DOUBLE_QUOTE();
    antlr4::tree::TerminalNode* DEFAULT_DOUBLE_QUOTE(size_t i);
    antlr4::tree::TerminalNode *EXTERNAL();
    std::vector<antlr4::tree::TerminalNode *> LOW();
    antlr4::tree::TerminalNode* LOW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEDIUM();
    antlr4::tree::TerminalNode* MEDIUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HIGH();
    antlr4::tree::TerminalNode* HIGH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_workload_groupContext* create_workload_group();

  class  Create_xml_schema_collectionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *relational_schema = nullptr;
    TSqlParser::Id_Context *sql_identifier = nullptr;
    Create_xml_schema_collectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *AS();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_xml_schema_collectionContext* create_xml_schema_collection();

  class  Create_partition_functionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *partition_function_name = nullptr;
    TSqlParser::Data_typeContext *input_parameter_type = nullptr;
    TSqlParser::Expression_list_Context *boundary_values = nullptr;
    Create_partition_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *VALUES();
    Id_Context *id_();
    Data_typeContext *data_type();
    Expression_list_Context *expression_list_();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_partition_functionContext* create_partition_function();

  class  Create_partition_schemeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *partition_scheme_name = nullptr;
    TSqlParser::Id_Context *partition_function_name = nullptr;
    TSqlParser::Id_Context *id_Context = nullptr;
    std::vector<Id_Context *> file_group_names;
    Create_partition_schemeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> PARTITION();
    antlr4::tree::TerminalNode* PARTITION(size_t i);
    antlr4::tree::TerminalNode *SCHEME();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_partition_schemeContext* create_partition_scheme();

  class  Create_queueContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *queue_name = nullptr;
    TSqlParser::Id_Context *filegroup = nullptr;
    Create_queueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *QUEUE();
    Full_table_nameContext *full_table_name();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    Queue_settingsContext *queue_settings();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_queueContext* create_queue();

  class  Queue_settingsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *max_readers = nullptr;
    antlr4::Token *user_name = nullptr;
    Queue_settingsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> STATUS();
    antlr4::tree::TerminalNode* STATUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<On_offContext *> on_off();
    On_offContext* on_off(size_t i);
    antlr4::tree::TerminalNode *RETENTION();
    antlr4::tree::TerminalNode *ACTIVATION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *POISON_MESSAGE_HANDLING();
    antlr4::tree::TerminalNode *DROP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *PROCEDURE_NAME();
    Func_proc_name_database_schemaContext *func_proc_name_database_schema();
    antlr4::tree::TerminalNode *MAX_QUEUE_READERS();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Queue_settingsContext* queue_settings();

  class  Alter_queueContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *queue_name = nullptr;
    Alter_queueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *QUEUE();
    Full_table_nameContext *full_table_name();
    Queue_settingsContext *queue_settings();
    Queue_actionContext *queue_action();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_queueContext* alter_queue();

  class  Queue_actionContext : public antlr4::ParserRuleContext {
  public:
    Queue_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Queue_rebuild_optionsContext *queue_rebuild_options();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *LOB_COMPACTION();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *MOVE();
    antlr4::tree::TerminalNode *TO();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Queue_actionContext* queue_action();

  class  Queue_rebuild_optionsContext : public antlr4::ParserRuleContext {
  public:
    Queue_rebuild_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Queue_rebuild_optionsContext* queue_rebuild_options();

  class  Create_contractContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *owner_name = nullptr;
    TSqlParser::Id_Context *message_type_name = nullptr;
    Create_contractContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CONTRACT();
    Contract_nameContext *contract_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    std::vector<antlr4::tree::TerminalNode *> SENT();
    antlr4::tree::TerminalNode* SENT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INITIATOR();
    antlr4::tree::TerminalNode* INITIATOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TARGET();
    antlr4::tree::TerminalNode* TARGET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ANY();
    antlr4::tree::TerminalNode* ANY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_contractContext* create_contract();

  class  Conversation_statementContext : public antlr4::ParserRuleContext {
  public:
    Conversation_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Begin_conversation_timerContext *begin_conversation_timer();
    Begin_conversation_dialogContext *begin_conversation_dialog();
    End_conversationContext *end_conversation();
    Get_conversationContext *get_conversation();
    Send_conversationContext *send_conversation();
    Waitfor_conversationContext *waitfor_conversation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conversation_statementContext* conversation_statement();

  class  Message_statementContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *message_type_name = nullptr;
    TSqlParser::Id_Context *owner_name = nullptr;
    TSqlParser::Id_Context *schema_collection_name = nullptr;
    Message_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *MESSAGE();
    antlr4::tree::TerminalNode *TYPE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *WELL_FORMED_XML();
    antlr4::tree::TerminalNode *VALID_XML();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *COLLECTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Message_statementContext* message_statement();

  class  Merge_statementContext : public antlr4::ParserRuleContext {
  public:
    Merge_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MERGE();
    Ddl_objectContext *ddl_object();
    antlr4::tree::TerminalNode *USING();
    Table_sourcesContext *table_sources();
    antlr4::tree::TerminalNode *ON();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *SEMI();
    With_expressionContext *with_expression();
    antlr4::tree::TerminalNode *TOP();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *INTO();
    With_table_hintsContext *with_table_hints();
    As_table_aliasContext *as_table_alias();
    std::vector<When_matchesContext *> when_matches();
    When_matchesContext* when_matches(size_t i);
    Output_clauseContext *output_clause();
    Option_clauseContext *option_clause();
    antlr4::tree::TerminalNode *PERCENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_statementContext* merge_statement();

  class  When_matchesContext : public antlr4::ParserRuleContext {
  public:
    When_matchesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MATCHED();
    antlr4::tree::TerminalNode* MATCHED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<Merge_matchedContext *> merge_matched();
    Merge_matchedContext* merge_matched(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    Merge_not_matchedContext *merge_not_matched();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    antlr4::tree::TerminalNode *TARGET();
    std::vector<antlr4::tree::TerminalNode *> SOURCE();
    antlr4::tree::TerminalNode* SOURCE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  When_matchesContext* when_matches();

  class  Merge_matchedContext : public antlr4::ParserRuleContext {
  public:
    Merge_matchedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    std::vector<Update_elem_mergeContext *> update_elem_merge();
    Update_elem_mergeContext* update_elem_merge(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DELETE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_matchedContext* merge_matched();

  class  Merge_not_matchedContext : public antlr4::ParserRuleContext {
  public:
    Merge_not_matchedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    Table_value_constructorContext *table_value_constructor();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_not_matchedContext* merge_not_matched();

  class  Delete_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *cursor_var = nullptr;
    Delete_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    Delete_statement_fromContext *delete_statement_from();
    With_expressionContext *with_expression();
    antlr4::tree::TerminalNode *TOP();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *DECIMAL();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    With_table_hintsContext *with_table_hints();
    Output_clauseContext *output_clause();
    Table_sourcesContext *table_sources();
    antlr4::tree::TerminalNode *WHERE();
    For_clauseContext *for_clause();
    Option_clauseContext *option_clause();
    antlr4::tree::TerminalNode *SEMI();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *PERCENT();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_statementContext* delete_statement();

  class  Delete_statement_fromContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *table_var = nullptr;
    Delete_statement_fromContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ddl_objectContext *ddl_object();
    Rowset_function_limitedContext *rowset_function_limited();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    antlr4::tree::TerminalNode *TOP();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *INTO();
    With_table_hintsContext *with_table_hints();
    Insert_column_name_listContext *insert_column_name_list();
    Output_clauseContext *output_clause();
    For_clauseContext *for_clause();
    Option_clauseContext *option_clause();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *PERCENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_statement_valueContext* insert_statement_value();

  class  Receive_statementContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *table_variable = nullptr;
    TSqlParser::Search_conditionContext *where = nullptr;
    Receive_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECEIVE();
    antlr4::tree::TerminalNode *FROM();
    Full_table_nameContext *full_table_name();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    Top_clauseContext *top_clause();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Id_Context *id_();
    antlr4::tree::TerminalNode *WHERE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Search_conditionContext *search_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Receive_statementContext* receive_statement();

  class  Select_statement_standaloneContext : public antlr4::ParserRuleContext {
  public:
    Select_statement_standaloneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_statementContext *select_statement();
    With_expressionContext *with_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_statement_standaloneContext* select_statement_standalone();

  class  Select_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Query_expressionContext *query_expression();
    Select_order_by_clauseContext *select_order_by_clause();
    For_clauseContext *for_clause();
    Option_clauseContext *option_clause();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_statementContext* select_statement();

  class  TimeContext : public antlr4::ParserRuleContext {
  public:
    TimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    ConstantContext *constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimeContext* time();

  class  Update_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *cursor_var = nullptr;
    Update_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    std::vector<Update_elemContext *> update_elem();
    Update_elemContext* update_elem(size_t i);
    Ddl_objectContext *ddl_object();
    Rowset_function_limitedContext *rowset_function_limited();
    With_expressionContext *with_expression();
    antlr4::tree::TerminalNode *TOP();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    With_table_hintsContext *with_table_hints();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Output_clauseContext *output_clause();
    antlr4::tree::TerminalNode *FROM();
    Table_sourcesContext *table_sources();
    antlr4::tree::TerminalNode *WHERE();
    For_clauseContext *for_clause();
    Option_clauseContext *option_clause();
    antlr4::tree::TerminalNode *SEMI();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *PERCENT();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statementContext* update_statement();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_clauseContext* output_clause();

  class  Output_dml_list_elemContext : public antlr4::ParserRuleContext {
  public:
    Output_dml_list_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    AsteriskContext *asterisk();
    As_column_aliasContext *as_column_alias();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_dml_list_elemContext* output_dml_list_elem();

  class  Create_databaseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database = nullptr;
    TSqlParser::Id_Context *collation_name = nullptr;
    Create_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *DATABASE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_databaseContext* create_database();

  class  Create_indexContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Search_conditionContext *where = nullptr;
    Create_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    Table_nameContext *table_name();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    Column_name_list_with_orderContext *column_name_list_with_order();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *UNIQUE();
    ClusteredContext *clustered();
    antlr4::tree::TerminalNode *INCLUDE();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *WHERE();
    Create_index_optionsContext *create_index_options();
    antlr4::tree::TerminalNode *SEMI();
    Search_conditionContext *search_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_indexContext* create_index();

  class  Create_index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Create_index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Relational_index_optionContext *> relational_index_option();
    Relational_index_optionContext* relational_index_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_index_optionsContext* create_index_options();

  class  Relational_index_optionContext : public antlr4::ParserRuleContext {
  public:
    Relational_index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rebuild_index_optionContext *rebuild_index_option();
    antlr4::tree::TerminalNode *DROP_EXISTING();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *OPTIMIZE_FOR_SEQUENTIAL_KEY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_index_optionContext* relational_index_option();

  class  Alter_indexContext : public antlr4::ParserRuleContext {
  public:
    Alter_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *PAUSE();
    antlr4::tree::TerminalNode *ABORT();
    antlr4::tree::TerminalNode *RESUME();
    Reorganize_partitionContext *reorganize_partition();
    Set_index_optionsContext *set_index_options();
    Rebuild_partitionContext *rebuild_partition();
    Resumable_index_optionsContext *resumable_index_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_indexContext* alter_index();

  class  Resumable_index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Resumable_index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Resumable_index_optionContext *> resumable_index_option();
    Resumable_index_optionContext* resumable_index_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Resumable_index_optionsContext* resumable_index_options();

  class  Resumable_index_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *max_degree_of_parallelism = nullptr;
    antlr4::Token *max_duration = nullptr;
    Resumable_index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *MAX_DURATION();
    antlr4::tree::TerminalNode *MINUTES();
    Low_priority_lock_waitContext *low_priority_lock_wait();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Resumable_index_optionContext* resumable_index_option();

  class  Reorganize_partitionContext : public antlr4::ParserRuleContext {
  public:
    Reorganize_partitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DECIMAL();
    Reorganize_optionsContext *reorganize_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reorganize_partitionContext* reorganize_partition();

  class  Reorganize_optionsContext : public antlr4::ParserRuleContext {
  public:
    Reorganize_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Reorganize_optionContext *> reorganize_option();
    Reorganize_optionContext* reorganize_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reorganize_optionsContext* reorganize_options();

  class  Reorganize_optionContext : public antlr4::ParserRuleContext {
  public:
    Reorganize_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOB_COMPACTION();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *COMPRESS_ALL_ROW_GROUPS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reorganize_optionContext* reorganize_option();

  class  Set_index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Set_index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Set_index_optionContext *> set_index_option();
    Set_index_optionContext* set_index_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_index_optionsContext* set_index_options();

  class  Set_index_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *delay = nullptr;
    Set_index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALLOW_ROW_LOCKS();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *ALLOW_PAGE_LOCKS();
    antlr4::tree::TerminalNode *OPTIMIZE_FOR_SEQUENTIAL_KEY();
    antlr4::tree::TerminalNode *IGNORE_DUP_KEY();
    antlr4::tree::TerminalNode *STATISTICS_NORECOMPUTE();
    antlr4::tree::TerminalNode *COMPRESSION_DELAY();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *MINUTES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_index_optionContext* set_index_option();

  class  Rebuild_partitionContext : public antlr4::ParserRuleContext {
  public:
    Rebuild_partitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *ALL();
    Rebuild_index_optionsContext *rebuild_index_options();
    antlr4::tree::TerminalNode *DECIMAL();
    Single_partition_rebuild_index_optionsContext *single_partition_rebuild_index_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rebuild_partitionContext* rebuild_partition();

  class  Rebuild_index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Rebuild_index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Rebuild_index_optionContext *> rebuild_index_option();
    Rebuild_index_optionContext* rebuild_index_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rebuild_index_optionsContext* rebuild_index_options();

  class  Rebuild_index_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *times = nullptr;
    antlr4::Token *max_degree_of_parallelism = nullptr;
    Rebuild_index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAD_INDEX();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *FILLFACTOR();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *SORT_IN_TEMPDB();
    antlr4::tree::TerminalNode *IGNORE_DUP_KEY();
    antlr4::tree::TerminalNode *STATISTICS_NORECOMPUTE();
    antlr4::tree::TerminalNode *STATISTICS_INCREMENTAL();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Low_priority_lock_waitContext *low_priority_lock_wait();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *RESUMABLE();
    antlr4::tree::TerminalNode *MAX_DURATION();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *ALLOW_ROW_LOCKS();
    antlr4::tree::TerminalNode *ALLOW_PAGE_LOCKS();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *DATA_COMPRESSION();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *COLUMNSTORE();
    antlr4::tree::TerminalNode *COLUMNSTORE_ARCHIVE();
    On_partitionsContext *on_partitions();
    antlr4::tree::TerminalNode *XML_COMPRESSION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rebuild_index_optionContext* rebuild_index_option();

  class  Single_partition_rebuild_index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Single_partition_rebuild_index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Single_partition_rebuild_index_optionContext *> single_partition_rebuild_index_option();
    Single_partition_rebuild_index_optionContext* single_partition_rebuild_index_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_partition_rebuild_index_optionsContext* single_partition_rebuild_index_options();

  class  Single_partition_rebuild_index_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *max_degree_of_parallelism = nullptr;
    Single_partition_rebuild_index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SORT_IN_TEMPDB();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *RESUMABLE();
    antlr4::tree::TerminalNode *DATA_COMPRESSION();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *COLUMNSTORE();
    antlr4::tree::TerminalNode *COLUMNSTORE_ARCHIVE();
    On_partitionsContext *on_partitions();
    antlr4::tree::TerminalNode *XML_COMPRESSION();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Low_priority_lock_waitContext *low_priority_lock_wait();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_partition_rebuild_index_optionContext* single_partition_rebuild_index_option();

  class  On_partitionsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *partition_number = nullptr;
    antlr4::Token *to_partition_number = nullptr;
    On_partitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_partitionsContext* on_partitions();

  class  Create_columnstore_indexContext : public antlr4::ParserRuleContext {
  public:
    Create_columnstore_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *COLUMNSTORE();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    Table_nameContext *table_name();
    Create_columnstore_index_optionsContext *create_columnstore_index_options();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_columnstore_indexContext* create_columnstore_index();

  class  Create_columnstore_index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Create_columnstore_index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Columnstore_index_optionContext *> columnstore_index_option();
    Columnstore_index_optionContext* columnstore_index_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_columnstore_index_optionsContext* create_columnstore_index_options();

  class  Columnstore_index_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *max_degree_of_parallelism = nullptr;
    antlr4::Token *delay = nullptr;
    Columnstore_index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_EXISTING();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *COMPRESSION_DELAY();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *DATA_COMPRESSION();
    antlr4::tree::TerminalNode *COLUMNSTORE();
    antlr4::tree::TerminalNode *COLUMNSTORE_ARCHIVE();
    On_partitionsContext *on_partitions();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Columnstore_index_optionContext* columnstore_index_option();

  class  Create_nonclustered_columnstore_indexContext : public antlr4::ParserRuleContext {
  public:
    Create_nonclustered_columnstore_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *COLUMNSTORE();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_list_with_orderContext *column_name_list_with_order();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *NONCLUSTERED();
    antlr4::tree::TerminalNode *WHERE();
    Search_conditionContext *search_condition();
    Create_columnstore_index_optionsContext *create_columnstore_index_options();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_nonclustered_columnstore_indexContext* create_nonclustered_columnstore_index();

  class  Create_xml_indexContext : public antlr4::ParserRuleContext {
  public:
    Create_xml_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> XML();
    antlr4::tree::TerminalNode* XML(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INDEX();
    antlr4::tree::TerminalNode* INDEX(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *USING();
    Xml_index_optionsContext *xml_index_options();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *PROPERTY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_xml_indexContext* create_xml_index();

  class  Xml_index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Xml_index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Xml_index_optionContext *> xml_index_option();
    Xml_index_optionContext* xml_index_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_index_optionsContext* xml_index_options();

  class  Xml_index_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *max_degree_of_parallelism = nullptr;
    Xml_index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAD_INDEX();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *FILLFACTOR();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *SORT_IN_TEMPDB();
    antlr4::tree::TerminalNode *IGNORE_DUP_KEY();
    antlr4::tree::TerminalNode *DROP_EXISTING();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Low_priority_lock_waitContext *low_priority_lock_wait();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ALLOW_ROW_LOCKS();
    antlr4::tree::TerminalNode *ALLOW_PAGE_LOCKS();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *XML_COMPRESSION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_index_optionContext* xml_index_option();

  class  Create_or_alter_procedureContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *proc = nullptr;
    TSqlParser::Func_proc_name_schemaContext *procName = nullptr;
    Create_or_alter_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    Func_proc_name_schemaContext *func_proc_name_schema();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PROC();
    antlr4::tree::TerminalNode *PROCEDURE();
    As_external_nameContext *as_external_name();
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
    std::vector<Sql_clausesContext *> sql_clauses();
    Sql_clausesContext* sql_clauses(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_or_alter_procedureContext* create_or_alter_procedure();

  class  As_external_nameContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *assembly_name = nullptr;
    TSqlParser::Id_Context *class_name = nullptr;
    TSqlParser::Id_Context *method_name = nullptr;
    As_external_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_external_nameContext* as_external_name();

  class  Create_or_alter_triggerContext : public antlr4::ParserRuleContext {
  public:
    Create_or_alter_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_or_alter_dml_triggerContext *create_or_alter_dml_trigger();
    Create_or_alter_ddl_triggerContext *create_or_alter_ddl_trigger();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_or_alter_triggerContext* create_or_alter_trigger();

  class  Create_or_alter_dml_triggerContext : public antlr4::ParserRuleContext {
  public:
    Create_or_alter_dml_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIGGER();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    std::vector<Dml_trigger_operationContext *> dml_trigger_operation();
    Dml_trigger_operationContext* dml_trigger_operation(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *OF();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<Dml_trigger_optionContext *> dml_trigger_option();
    Dml_trigger_optionContext* dml_trigger_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *REPLICATION();
    std::vector<Sql_clausesContext *> sql_clauses();
    Sql_clausesContext* sql_clauses(size_t i);
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_or_alter_dml_triggerContext* create_or_alter_dml_trigger();

  class  Dml_trigger_optionContext : public antlr4::ParserRuleContext {
  public:
    Dml_trigger_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION();
    Execute_clauseContext *execute_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dml_trigger_optionContext* dml_trigger_option();

  class  Dml_trigger_operationContext : public antlr4::ParserRuleContext {
  public:
    Dml_trigger_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dml_trigger_operationContext* dml_trigger_operation();

  class  Create_or_alter_ddl_triggerContext : public antlr4::ParserRuleContext {
  public:
    Create_or_alter_ddl_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIGGER();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *ON();
    std::vector<Ddl_trigger_operationContext *> ddl_trigger_operation();
    Ddl_trigger_operationContext* ddl_trigger_operation(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Dml_trigger_optionContext *> dml_trigger_option();
    Dml_trigger_optionContext* dml_trigger_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Sql_clausesContext *> sql_clauses();
    Sql_clausesContext* sql_clauses(size_t i);
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_or_alter_ddl_triggerContext* create_or_alter_ddl_trigger();

  class  Ddl_trigger_operationContext : public antlr4::ParserRuleContext {
  public:
    Ddl_trigger_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_idContext *simple_id();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ddl_trigger_operationContext* ddl_trigger_operation();

  class  Create_or_alter_functionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Func_proc_name_schemaContext *funcName = nullptr;
    Create_or_alter_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Func_proc_name_schemaContext *func_proc_name_schema();
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_or_alter_functionContext* create_or_alter_function();

  class  Func_body_returns_selectContext : public antlr4::ParserRuleContext {
  public:
    Func_body_returns_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *TABLE();
    As_external_nameContext *as_external_name();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Function_optionContext *> function_option();
    Function_optionContext* function_option(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Select_statement_standaloneContext *select_statement_standalone();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_body_returns_selectContext* func_body_returns_select();

  class  Func_body_returns_tableContext : public antlr4::ParserRuleContext {
  public:
    Func_body_returns_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Table_type_definitionContext *table_type_definition();
    As_external_nameContext *as_external_name();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Function_optionContext *> function_option();
    Function_optionContext* function_option(size_t i);
    antlr4::tree::TerminalNode *AS();
    std::vector<Sql_clausesContext *> sql_clauses();
    Sql_clausesContext* sql_clauses(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_body_returns_tableContext* func_body_returns_table();

  class  Func_body_returns_scalarContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::ExpressionContext *ret = nullptr;
    Func_body_returns_scalarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNS();
    Data_typeContext *data_type();
    As_external_nameContext *as_external_name();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Function_optionContext *> function_option();
    Function_optionContext* function_option(size_t i);
    antlr4::tree::TerminalNode *AS();
    ExpressionContext *expression();
    std::vector<Sql_clausesContext *> sql_clauses();
    Sql_clausesContext* sql_clauses(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_body_returns_scalarContext* func_body_returns_scalar();

  class  Procedure_param_default_valueContext : public antlr4::ParserRuleContext {
  public:
    Procedure_param_default_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *DEFAULT();
    ConstantContext *constant();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_param_default_valueContext* procedure_param_default_value();

  class  Procedure_paramContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *type_schema = nullptr;
    TSqlParser::Procedure_param_default_valueContext *default_val = nullptr;
    Procedure_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *EQUAL();
    Id_Context *id_();
    Procedure_param_default_valueContext *procedure_param_default_value();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *READONLY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_paramContext* procedure_param();

  class  Procedure_optionContext : public antlr4::ParserRuleContext {
  public:
    Procedure_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *RECOMPILE();
    Execute_clauseContext *execute_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_optionContext* function_option();

  class  Create_statisticsContext : public antlr4::ParserRuleContext {
  public:
    Create_statisticsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *STATISTICS();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_statisticsContext* create_statistics();

  class  Update_statisticsContext : public antlr4::ParserRuleContext {
  public:
    Update_statisticsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *STATISTICS();
    Full_table_nameContext *full_table_name();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Update_statistics_optionsContext *update_statistics_options();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statisticsContext* update_statistics();

  class  Update_statistics_optionsContext : public antlr4::ParserRuleContext {
  public:
    Update_statistics_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<Update_statistics_optionContext *> update_statistics_option();
    Update_statistics_optionContext* update_statistics_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statistics_optionsContext* update_statistics_options();

  class  Update_statistics_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *number = nullptr;
    TSqlParser::ExpressionContext *stats_stream_ = nullptr;
    antlr4::Token *max_dregree_of_parallelism = nullptr;
    Update_statistics_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FULLSCAN();
    antlr4::tree::TerminalNode *PERSIST_SAMPLE_PERCENT();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *RESAMPLE();
    On_partitionsContext *on_partitions();
    antlr4::tree::TerminalNode *STATS_STREAM();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ROWCOUNT();
    antlr4::tree::TerminalNode *PAGECOUNT();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *NORECOMPUTE();
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *AUTO_DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statistics_optionContext* update_statistics_option();

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
    std::vector<Table_indicesContext *> table_indices();
    Table_indicesContext* table_indices(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *LOCK();
    Simple_idContext *simple_id();
    std::vector<Table_optionsContext *> table_options();
    Table_optionsContext* table_options(size_t i);
    antlr4::tree::TerminalNode *ON();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    On_partition_or_filegroupContext *on_partition_or_filegroup();
    antlr4::tree::TerminalNode *TEXTIMAGE_ON();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_tableContext* create_table();

  class  Table_indicesContext : public antlr4::ParserRuleContext {
  public:
    Table_indicesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDEX();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_list_with_orderContext *column_name_list_with_order();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *UNIQUE();
    ClusteredContext *clustered();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *COLUMNSTORE();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *NONCLUSTERED();
    Create_table_index_optionsContext *create_table_index_options();
    antlr4::tree::TerminalNode *ON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_indicesContext* table_indices();

  class  Table_optionsContext : public antlr4::ParserRuleContext {
  public:
    Table_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Table_optionContext *> table_option();
    Table_optionContext* table_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_optionsContext* table_options();

  class  Table_optionContext : public antlr4::ParserRuleContext {
  public:
    Table_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<Simple_idContext *> simple_id();
    Simple_idContext* simple_id(size_t i);
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);
    On_offContext *on_off();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *COLUMNSTORE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *HEAP();
    antlr4::tree::TerminalNode *FILLFACTOR();
    antlr4::tree::TerminalNode *DISTRIBUTION();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASC();
    antlr4::tree::TerminalNode* ASC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESC();
    antlr4::tree::TerminalNode* DESC(size_t i);
    antlr4::tree::TerminalNode *DATA_COMPRESSION();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *PAGE();
    On_partitionsContext *on_partitions();
    antlr4::tree::TerminalNode *XML_COMPRESSION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_optionContext* table_option();

  class  Create_table_index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Create_table_index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Create_table_index_optionContext *> create_table_index_option();
    Create_table_index_optionContext* create_table_index_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_index_optionsContext* create_table_index_options();

  class  Create_table_index_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_table_index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAD_INDEX();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *FILLFACTOR();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *IGNORE_DUP_KEY();
    antlr4::tree::TerminalNode *STATISTICS_NORECOMPUTE();
    antlr4::tree::TerminalNode *STATISTICS_INCREMENTAL();
    antlr4::tree::TerminalNode *ALLOW_ROW_LOCKS();
    antlr4::tree::TerminalNode *ALLOW_PAGE_LOCKS();
    antlr4::tree::TerminalNode *OPTIMIZE_FOR_SEQUENTIAL_KEY();
    antlr4::tree::TerminalNode *DATA_COMPRESSION();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *COLUMNSTORE();
    antlr4::tree::TerminalNode *COLUMNSTORE_ARCHIVE();
    On_partitionsContext *on_partitions();
    antlr4::tree::TerminalNode *XML_COMPRESSION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_index_optionContext* create_table_index_option();

  class  Create_viewContext : public antlr4::ParserRuleContext {
  public:
    Create_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *AS();
    Select_statement_standaloneContext *select_statement_standalone();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ALTER();
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
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_viewContext* create_view();

  class  View_attributeContext : public antlr4::ParserRuleContext {
  public:
    View_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *SCHEMABINDING();
    antlr4::tree::TerminalNode *VIEW_METADATA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_attributeContext* view_attribute();

  class  Alter_tableContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *constraint = nullptr;
    TSqlParser::Column_name_listContext *fk = nullptr;
    TSqlParser::Column_name_listContext *pk = nullptr;
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
    Column_def_table_constraintsContext *column_def_table_constraints();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *DROP();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *REBUILD();
    Table_optionsContext *table_options();
    antlr4::tree::TerminalNode *SWITCH();
    Switch_partitionContext *switch_partition();
    antlr4::tree::TerminalNode *AUTO();
    antlr4::tree::TerminalNode *DISABLE();
    std::vector<antlr4::tree::TerminalNode *> CHECK();
    antlr4::tree::TerminalNode* CHECK(size_t i);
    antlr4::tree::TerminalNode *NOCHECK();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *SEMI();
    Column_definitionContext *column_definition();
    Column_modifierContext *column_modifier();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *REFERENCES();
    Search_conditionContext *search_condition();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Column_name_listContext *> column_name_list();
    Column_name_listContext* column_name_list(size_t i);
    std::vector<On_deleteContext *> on_delete();
    On_deleteContext* on_delete(size_t i);
    std::vector<On_updateContext *> on_update();
    On_updateContext* on_update(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tableContext* alter_table();

  class  Switch_partitionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::ExpressionContext *source_partition_number_expression = nullptr;
    TSqlParser::Table_nameContext *target_table = nullptr;
    TSqlParser::ExpressionContext *target_partition_number_expression = nullptr;
    Switch_partitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    Table_nameContext *table_name();
    std::vector<antlr4::tree::TerminalNode *> PARTITION();
    antlr4::tree::TerminalNode* PARTITION(size_t i);
    antlr4::tree::TerminalNode *WITH();
    Low_priority_lock_waitContext *low_priority_lock_wait();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_partitionContext* switch_partition();

  class  Low_priority_lock_waitContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::TimeContext *max_duration = nullptr;
    antlr4::Token *abort_after_wait = nullptr;
    Low_priority_lock_waitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT_AT_LOW_PRIORITY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *MAX_DURATION();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ABORT_AFTER_WAIT();
    antlr4::tree::TerminalNode *RR_BRACKET();
    TimeContext *time();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *BLOCKERS();
    antlr4::tree::TerminalNode *MINUTES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Low_priority_lock_waitContext* low_priority_lock_wait();

  class  Alter_databaseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database = nullptr;
    TSqlParser::Id_Context *new_name = nullptr;
    TSqlParser::Id_Context *collation = nullptr;
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
    Add_or_modify_filesContext *add_or_modify_files();
    Add_or_modify_filegroupsContext *add_or_modify_filegroups();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *WITH();
    TerminationContext *termination();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_databaseContext* alter_database();

  class  Add_or_modify_filesContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *filegroup_name = nullptr;
    TSqlParser::Id_Context *logical_file_name = nullptr;
    Add_or_modify_filesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *FILE();
    std::vector<FilespecContext *> filespec();
    FilespecContext* filespec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *FILEGROUP();
    Id_Context *id_();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *MODIFY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_or_modify_filesContext* add_or_modify_files();

  class  FilespecContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_or_stringContext *name = nullptr;
    TSqlParser::Id_or_stringContext *new_name = nullptr;
    antlr4::Token *file_name = nullptr;
    TSqlParser::File_sizeContext *size = nullptr;
    TSqlParser::File_sizeContext *max_size = nullptr;
    TSqlParser::File_sizeContext *growth_increment = nullptr;
    FilespecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Id_or_stringContext *> id_or_string();
    Id_or_stringContext* id_or_string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NEWNAME();
    antlr4::tree::TerminalNode *FILENAME();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *MAXSIZE();
    antlr4::tree::TerminalNode *UNLIMITED();
    antlr4::tree::TerminalNode *FILEGROWTH();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *STRING();
    std::vector<File_sizeContext *> file_size();
    File_sizeContext* file_size(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilespecContext* filespec();

  class  Add_or_modify_filegroupsContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *filegroup_name = nullptr;
    TSqlParser::Id_Context *filegrou_name = nullptr;
    TSqlParser::Id_Context *new_filegroup_name = nullptr;
    Add_or_modify_filegroupsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *FILEGROUP();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *FILESTREAM();
    antlr4::tree::TerminalNode *MEMORY_OPTIMIZED_DATA();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *MODIFY();
    Filegroup_updatability_optionContext *filegroup_updatability_option();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *AUTOGROW_SINGLE_FILE();
    antlr4::tree::TerminalNode *AUTOGROW_ALL_FILES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_or_modify_filegroupsContext* add_or_modify_filegroups();

  class  Filegroup_updatability_optionContext : public antlr4::ParserRuleContext {
  public:
    Filegroup_updatability_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *READWRITE();
    antlr4::tree::TerminalNode *READ_ONLY();
    antlr4::tree::TerminalNode *READ_WRITE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Filegroup_updatability_optionContext* filegroup_updatability_option();

  class  Database_optionspecContext : public antlr4::ParserRuleContext {
  public:
    Database_optionspecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Auto_optionContext *auto_option();
    Change_tracking_optionContext *change_tracking_option();
    Containment_optionContext *containment_option();
    Cursor_optionContext *cursor_option();
    Database_mirroring_optionContext *database_mirroring_option();
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Change_tracking_option_listContext *> change_tracking_option_list();
    Change_tracking_option_listContext* change_tracking_option_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_optionContext* cursor_option();

  class  Alter_endpointContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *endpointname = nullptr;
    TSqlParser::Id_Context *login = nullptr;
    antlr4::Token *state = nullptr;
    Alter_endpointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ENDPOINT();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *TCP();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    Endpoint_listener_clauseContext *endpoint_listener_clause();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *TSQL();
    antlr4::tree::TerminalNode *SERVICE_BROKER();
    Endpoint_authentication_clauseContext *endpoint_authentication_clause();
    antlr4::tree::TerminalNode *DATABASE_MIRRORING();
    antlr4::tree::TerminalNode *ROLE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *WITNESS();
    antlr4::tree::TerminalNode *PARTNER();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *STARTED();
    antlr4::tree::TerminalNode *STOPPED();
    std::vector<antlr4::tree::TerminalNode *> DISABLED();
    antlr4::tree::TerminalNode* DISABLED(size_t i);
    Endpoint_encryption_alogorithm_clauseContext *endpoint_encryption_alogorithm_clause();
    antlr4::tree::TerminalNode *MESSAGE_FORWARDING();
    antlr4::tree::TerminalNode *MESSAGE_FORWARD_SIZE();
    antlr4::tree::TerminalNode *DECIMAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ENABLED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_endpointContext* alter_endpoint();

  class  Database_mirroring_optionContext : public antlr4::ParserRuleContext {
  public:
    Database_mirroring_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mirroring_set_optionContext *mirroring_set_option();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_mirroring_optionContext* database_mirroring_option();

  class  Mirroring_set_optionContext : public antlr4::ParserRuleContext {
  public:
    Mirroring_set_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mirroring_partnerContext *mirroring_partner();
    Partner_optionContext *partner_option();
    Mirroring_witnessContext *mirroring_witness();
    Witness_optionContext *witness_option();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mirroring_set_optionContext* mirroring_set_option();

  class  Mirroring_partnerContext : public antlr4::ParserRuleContext {
  public:
    Mirroring_partnerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTNER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mirroring_partnerContext* mirroring_partner();

  class  Mirroring_witnessContext : public antlr4::ParserRuleContext {
  public:
    Mirroring_witnessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITNESS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mirroring_witnessContext* mirroring_witness();

  class  Witness_partner_equalContext : public antlr4::ParserRuleContext {
  public:
    Witness_partner_equalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Witness_partner_equalContext* witness_partner_equal();

  class  Partner_optionContext : public antlr4::ParserRuleContext {
  public:
    Partner_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Witness_partner_equalContext *witness_partner_equal();
    Partner_serverContext *partner_server();
    antlr4::tree::TerminalNode *FAILOVER();
    antlr4::tree::TerminalNode *FORCE_SERVICE_ALLOW_DATA_LOSS();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *SAFETY();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partner_optionContext* partner_option();

  class  Witness_optionContext : public antlr4::ParserRuleContext {
  public:
    Witness_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Witness_partner_equalContext *witness_partner_equal();
    Witness_serverContext *witness_server();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Witness_optionContext* witness_option();

  class  Witness_serverContext : public antlr4::ParserRuleContext {
  public:
    Witness_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Partner_serverContext *partner_server();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Witness_serverContext* witness_server();

  class  Partner_serverContext : public antlr4::ParserRuleContext {
  public:
    Partner_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Partner_server_tcp_prefixContext *partner_server_tcp_prefix();
    HostContext *host();
    Mirroring_host_port_seperatorContext *mirroring_host_port_seperator();
    Port_numberContext *port_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partner_serverContext* partner_server();

  class  Mirroring_host_port_seperatorContext : public antlr4::ParserRuleContext {
  public:
    Mirroring_host_port_seperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mirroring_host_port_seperatorContext* mirroring_host_port_seperator();

  class  Partner_server_tcp_prefixContext : public antlr4::ParserRuleContext {
  public:
    Partner_server_tcp_prefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TCP();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *DOUBLE_FORWARD_SLASH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partner_server_tcp_prefixContext* partner_server_tcp_prefix();

  class  Port_numberContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *port = nullptr;
    Port_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_numberContext* port_number();

  class  HostContext : public antlr4::ParserRuleContext {
  public:
    HostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *DOT();
    HostContext *host();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HostContext* host();

  class  Date_correlation_optimization_optionContext : public antlr4::ParserRuleContext {
  public:
    Date_correlation_optimization_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE_CORRELATION_OPTIMIZATION();
    On_offContext *on_off();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Date_correlation_optimization_optionContext* date_correlation_optimization_option();

  class  Db_encryption_optionContext : public antlr4::ParserRuleContext {
  public:
    Db_encryption_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION();
    On_offContext *on_off();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_encryption_optionContext* db_encryption_option();

  class  Db_state_optionContext : public antlr4::ParserRuleContext {
  public:
    Db_state_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *EMERGENCY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_state_optionContext* db_state_option();

  class  Db_update_optionContext : public antlr4::ParserRuleContext {
  public:
    Db_update_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ_ONLY();
    antlr4::tree::TerminalNode *READ_WRITE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_update_optionContext* db_update_option();

  class  Db_user_access_optionContext : public antlr4::ParserRuleContext {
  public:
    Db_user_access_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SINGLE_USER();
    antlr4::tree::TerminalNode *RESTRICTED_USER();
    antlr4::tree::TerminalNode *MULTI_USER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DEFAULT_FULLTEXT_LANGUAGE();
    antlr4::tree::TerminalNode *NESTED_TRIGGERS();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TRANSFORM_NOISE_WORDS();
    antlr4::tree::TerminalNode *TWO_DIGIT_YEAR_CUTOFF();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  External_access_optionContext* external_access_option();

  class  Hadr_optionsContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *availability_group_name = nullptr;
    Hadr_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HADR();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *AVAILABILITY();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *OFF();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hadr_optionsContext* hadr_options();

  class  Mixed_page_allocation_optionContext : public antlr4::ParserRuleContext {
  public:
    Mixed_page_allocation_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIXED_PAGE_ALLOCATION();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *ON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mixed_page_allocation_optionContext* mixed_page_allocation_option();

  class  Parameterization_optionContext : public antlr4::ParserRuleContext {
  public:
    Parameterization_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETERIZATION();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *FORCED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    antlr4::tree::TerminalNode *ACCELERATED_DATABASE_RECOVERY();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *PAGE_VERIFY();
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *NONE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TerminationContext* termination();

  class  Drop_indexContext : public antlr4::ParserRuleContext {
  public:
    Drop_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<Drop_relational_or_xml_or_spatial_indexContext *> drop_relational_or_xml_or_spatial_index();
    Drop_relational_or_xml_or_spatial_indexContext* drop_relational_or_xml_or_spatial_index(size_t i);
    std::vector<Drop_backward_compatible_indexContext *> drop_backward_compatible_index();
    Drop_backward_compatible_indexContext* drop_backward_compatible_index(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_indexContext* drop_index();

  class  Drop_relational_or_xml_or_spatial_indexContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *index_name = nullptr;
    Drop_relational_or_xml_or_spatial_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    Full_table_nameContext *full_table_name();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_relational_or_xml_or_spatial_indexContext* drop_relational_or_xml_or_spatial_index();

  class  Drop_backward_compatible_indexContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *owner_name = nullptr;
    TSqlParser::Id_Context *table_or_view_name = nullptr;
    TSqlParser::Id_Context *index_name = nullptr;
    Drop_backward_compatible_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_backward_compatible_indexContext* drop_backward_compatible_index();

  class  Drop_procedureContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *proc = nullptr;
    Drop_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    std::vector<Func_proc_name_schemaContext *> func_proc_name_schema();
    Func_proc_name_schemaContext* func_proc_name_schema(size_t i);
    antlr4::tree::TerminalNode *PROC();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_procedureContext* drop_procedure();

  class  Drop_triggerContext : public antlr4::ParserRuleContext {
  public:
    Drop_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Drop_dml_triggerContext *drop_dml_trigger();
    Drop_ddl_triggerContext *drop_ddl_trigger();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_triggerContext* drop_trigger();

  class  Drop_dml_triggerContext : public antlr4::ParserRuleContext {
  public:
    Drop_dml_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TRIGGER();
    std::vector<Simple_nameContext *> simple_name();
    Simple_nameContext* simple_name(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_dml_triggerContext* drop_dml_trigger();

  class  Drop_ddl_triggerContext : public antlr4::ParserRuleContext {
  public:
    Drop_ddl_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TRIGGER();
    std::vector<Simple_nameContext *> simple_name();
    Simple_nameContext* simple_name(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_ddl_triggerContext* drop_ddl_trigger();

  class  Drop_functionContext : public antlr4::ParserRuleContext {
  public:
    Drop_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<Func_proc_name_schemaContext *> func_proc_name_schema();
    Func_proc_name_schemaContext* func_proc_name_schema(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_functionContext* drop_function();

  class  Drop_statisticsContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *name = nullptr;
    Drop_statisticsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_statisticsContext* drop_statistics();

  class  Drop_tableContext : public antlr4::ParserRuleContext {
  public:
    Drop_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_tableContext* drop_table();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_viewContext* drop_view();

  class  Create_typeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Simple_nameContext *name = nullptr;
    Create_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TYPE();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *FROM();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_def_table_constraintsContext *column_def_table_constraints();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Null_notnullContext *null_notnull();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_typeContext* create_type();

  class  Drop_typeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Simple_nameContext *name = nullptr;
    Drop_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TYPE();
    Simple_nameContext *simple_name();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_typeContext* drop_type();

  class  Rowset_function_limitedContext : public antlr4::ParserRuleContext {
  public:
    Rowset_function_limitedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpenqueryContext *openquery();
    OpendatasourceContext *opendatasource();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rowset_function_limitedContext* rowset_function_limited();

  class  OpenqueryContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *linked_server = nullptr;
    antlr4::Token *query = nullptr;
    OpenqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENQUERY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpenqueryContext* openquery();

  class  OpendatasourceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *provider = nullptr;
    antlr4::Token *init = nullptr;
    TSqlParser::Id_Context *database = nullptr;
    TSqlParser::Id_Context *scheme = nullptr;
    TSqlParser::Id_Context *table = nullptr;
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
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpendatasourceContext* opendatasource();

  class  Declare_statementContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Declare_localContext *declare_localContext = nullptr;
    std::vector<Declare_localContext *> loc;
    TSqlParser::Xml_declarationContext *xml_declarationContext = nullptr;
    std::vector<Xml_declarationContext *> xml_dec;
    Declare_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Data_typeContext *data_type();
    Table_type_definitionContext *table_type_definition();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *AS();
    std::vector<Declare_localContext *> declare_local();
    Declare_localContext* declare_local(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Xml_type_definitionContext *xml_type_definition();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *XMLNAMESPACES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Xml_declarationContext *> xml_declaration();
    Xml_declarationContext* xml_declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_statementContext* declare_statement();

  class  Xml_declarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *xml_namespace_uri = nullptr;
    Xml_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_declarationContext* xml_declaration();

  class  Cursor_statementContext : public antlr4::ParserRuleContext {
  public:
    Cursor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *CURSOR();
    Declare_cursorContext *declare_cursor();
    Fetch_cursorContext *fetch_cursor();
    antlr4::tree::TerminalNode *OPEN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_statementContext* cursor_statement();

  class  Backup_databaseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database_name = nullptr;
    antlr4::Token *file_or_filegroup = nullptr;
    TSqlParser::Id_Context *logical_device_name = nullptr;
    TSqlParser::Id_Context *backup_set_name = nullptr;
    antlr4::Token *medianame = nullptr;
    antlr4::Token *stats_percent = nullptr;
    TSqlParser::Id_Context *encryptor_name = nullptr;
    Backup_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *DATABASE();
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *READ_WRITE_FILEGROUPS();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> FILE();
    antlr4::tree::TerminalNode* FILE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FILEGROUP();
    antlr4::tree::TerminalNode* FILEGROUP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISK();
    antlr4::tree::TerminalNode* DISK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TAPE();
    antlr4::tree::TerminalNode* TAPE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> URL();
    antlr4::tree::TerminalNode* URL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MIRROR();
    antlr4::tree::TerminalNode* MIRROR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIFFERENTIAL();
    antlr4::tree::TerminalNode* DIFFERENTIAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COPY_ONLY();
    antlr4::tree::TerminalNode* COPY_ONLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESCRIPTION();
    antlr4::tree::TerminalNode* DESCRIPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CREDENTIAL();
    antlr4::tree::TerminalNode* CREDENTIAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FILE_SNAPSHOT();
    antlr4::tree::TerminalNode* FILE_SNAPSHOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEDIADESCRIPTION();
    antlr4::tree::TerminalNode* MEDIADESCRIPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEDIANAME();
    antlr4::tree::TerminalNode* MEDIANAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BLOCKSIZE();
    antlr4::tree::TerminalNode* BLOCKSIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BUFFERCOUNT();
    antlr4::tree::TerminalNode* BUFFERCOUNT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAXTRANSFER();
    antlr4::tree::TerminalNode* MAXTRANSFER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RESTART();
    antlr4::tree::TerminalNode* RESTART(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STATS();
    antlr4::tree::TerminalNode* STATS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENCRYPTION();
    antlr4::tree::TerminalNode* ENCRYPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALGORITHM();
    antlr4::tree::TerminalNode* ALGORITHM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SERVER();
    antlr4::tree::TerminalNode* SERVER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CERTIFICATE();
    antlr4::tree::TerminalNode* CERTIFICATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMPRESSION();
    antlr4::tree::TerminalNode* COMPRESSION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO_COMPRESSION();
    antlr4::tree::TerminalNode* NO_COMPRESSION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOINIT();
    antlr4::tree::TerminalNode* NOINIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INIT();
    antlr4::tree::TerminalNode* INIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOSKIP();
    antlr4::tree::TerminalNode* NOSKIP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SKIP_KEYWORD();
    antlr4::tree::TerminalNode* SKIP_KEYWORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOFORMAT();
    antlr4::tree::TerminalNode* NOFORMAT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FORMAT();
    antlr4::tree::TerminalNode* FORMAT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO_CHECKSUM();
    antlr4::tree::TerminalNode* NO_CHECKSUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CHECKSUM();
    antlr4::tree::TerminalNode* CHECKSUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STOP_ON_ERROR();
    antlr4::tree::TerminalNode* STOP_ON_ERROR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONTINUE_AFTER_ERROR();
    antlr4::tree::TerminalNode* CONTINUE_AFTER_ERROR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REWIND();
    antlr4::tree::TerminalNode* REWIND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOREWIND();
    antlr4::tree::TerminalNode* NOREWIND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOAD();
    antlr4::tree::TerminalNode* LOAD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOUNLOAD();
    antlr4::tree::TerminalNode* NOUNLOAD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AES_128();
    antlr4::tree::TerminalNode* AES_128(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AES_192();
    antlr4::tree::TerminalNode* AES_192(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AES_256();
    antlr4::tree::TerminalNode* AES_256(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TRIPLE_DES_3KEY();
    antlr4::tree::TerminalNode* TRIPLE_DES_3KEY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXPIREDATE();
    antlr4::tree::TerminalNode* EXPIREDATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RETAINDAYS();
    antlr4::tree::TerminalNode* RETAINDAYS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASYMMETRIC();
    antlr4::tree::TerminalNode* ASYMMETRIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Backup_databaseContext* backup_database();

  class  Backup_logContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database_name = nullptr;
    TSqlParser::Id_Context *logical_device_name = nullptr;
    TSqlParser::Id_Context *backup_set_name = nullptr;
    antlr4::Token *medianame = nullptr;
    antlr4::Token *stats_percent = nullptr;
    antlr4::Token *undo_file_name = nullptr;
    TSqlParser::Id_Context *encryptor_name = nullptr;
    Backup_logContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *LOG();
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISK();
    antlr4::tree::TerminalNode* DISK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TAPE();
    antlr4::tree::TerminalNode* TAPE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> URL();
    antlr4::tree::TerminalNode* URL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MIRROR();
    antlr4::tree::TerminalNode* MIRROR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIFFERENTIAL();
    antlr4::tree::TerminalNode* DIFFERENTIAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COPY_ONLY();
    antlr4::tree::TerminalNode* COPY_ONLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESCRIPTION();
    antlr4::tree::TerminalNode* DESCRIPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CREDENTIAL();
    antlr4::tree::TerminalNode* CREDENTIAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FILE_SNAPSHOT();
    antlr4::tree::TerminalNode* FILE_SNAPSHOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEDIADESCRIPTION();
    antlr4::tree::TerminalNode* MEDIADESCRIPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEDIANAME();
    antlr4::tree::TerminalNode* MEDIANAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BLOCKSIZE();
    antlr4::tree::TerminalNode* BLOCKSIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BUFFERCOUNT();
    antlr4::tree::TerminalNode* BUFFERCOUNT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAXTRANSFER();
    antlr4::tree::TerminalNode* MAXTRANSFER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RESTART();
    antlr4::tree::TerminalNode* RESTART(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STATS();
    antlr4::tree::TerminalNode* STATS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO_TRUNCATE();
    antlr4::tree::TerminalNode* NO_TRUNCATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENCRYPTION();
    antlr4::tree::TerminalNode* ENCRYPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALGORITHM();
    antlr4::tree::TerminalNode* ALGORITHM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SERVER();
    antlr4::tree::TerminalNode* SERVER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CERTIFICATE();
    antlr4::tree::TerminalNode* CERTIFICATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMPRESSION();
    antlr4::tree::TerminalNode* COMPRESSION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO_COMPRESSION();
    antlr4::tree::TerminalNode* NO_COMPRESSION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOINIT();
    antlr4::tree::TerminalNode* NOINIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INIT();
    antlr4::tree::TerminalNode* INIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOSKIP();
    antlr4::tree::TerminalNode* NOSKIP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SKIP_KEYWORD();
    antlr4::tree::TerminalNode* SKIP_KEYWORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOFORMAT();
    antlr4::tree::TerminalNode* NOFORMAT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FORMAT();
    antlr4::tree::TerminalNode* FORMAT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO_CHECKSUM();
    antlr4::tree::TerminalNode* NO_CHECKSUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CHECKSUM();
    antlr4::tree::TerminalNode* CHECKSUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STOP_ON_ERROR();
    antlr4::tree::TerminalNode* STOP_ON_ERROR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONTINUE_AFTER_ERROR();
    antlr4::tree::TerminalNode* CONTINUE_AFTER_ERROR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REWIND();
    antlr4::tree::TerminalNode* REWIND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOREWIND();
    antlr4::tree::TerminalNode* NOREWIND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOAD();
    antlr4::tree::TerminalNode* LOAD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOUNLOAD();
    antlr4::tree::TerminalNode* NOUNLOAD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AES_128();
    antlr4::tree::TerminalNode* AES_128(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AES_192();
    antlr4::tree::TerminalNode* AES_192(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AES_256();
    antlr4::tree::TerminalNode* AES_256(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TRIPLE_DES_3KEY();
    antlr4::tree::TerminalNode* TRIPLE_DES_3KEY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXPIREDATE();
    antlr4::tree::TerminalNode* EXPIREDATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RETAINDAYS();
    antlr4::tree::TerminalNode* RETAINDAYS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NORECOVERY();
    antlr4::tree::TerminalNode* NORECOVERY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STANDBY();
    antlr4::tree::TerminalNode* STANDBY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASYMMETRIC();
    antlr4::tree::TerminalNode* ASYMMETRIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Backup_logContext* backup_log();

  class  Backup_certificateContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *certname = nullptr;
    antlr4::Token *cert_file = nullptr;
    antlr4::Token *private_key_file = nullptr;
    antlr4::Token *encryption_password = nullptr;
    antlr4::Token *decryption_pasword = nullptr;
    Backup_certificateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *CERTIFICATE();
    antlr4::tree::TerminalNode *TO();
    std::vector<antlr4::tree::TerminalNode *> FILE();
    antlr4::tree::TerminalNode* FILE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    Id_Context *id_();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> ENCRYPTION();
    antlr4::tree::TerminalNode* ENCRYPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PASSWORD();
    antlr4::tree::TerminalNode* PASSWORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECRYPTION();
    antlr4::tree::TerminalNode* DECRYPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Backup_certificateContext* backup_certificate();

  class  Backup_master_keyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *master_key_backup_file = nullptr;
    antlr4::Token *encryption_password = nullptr;
    Backup_master_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *FILE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Backup_master_keyContext* backup_master_key();

  class  Backup_service_master_keyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *service_master_key_backup_file = nullptr;
    antlr4::Token *encryption_password = nullptr;
    Backup_service_master_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *FILE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Backup_service_master_keyContext* backup_service_master_key();

  class  Kill_statementContext : public antlr4::ParserRuleContext {
  public:
    Kill_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KILL();
    Kill_processContext *kill_process();
    Kill_query_notificationContext *kill_query_notification();
    Kill_stats_jobContext *kill_stats_job();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Kill_statementContext* kill_statement();

  class  Kill_processContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *session_id = nullptr;
    Kill_processContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UOW();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *STATUSONLY();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Kill_processContext* kill_process();

  class  Kill_query_notificationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *subscription_id = nullptr;
    Kill_query_notificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *NOTIFICATION();
    antlr4::tree::TerminalNode *SUBSCRIPTION();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Kill_query_notificationContext* kill_query_notification();

  class  Kill_stats_jobContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *job_id = nullptr;
    Kill_stats_jobContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATS();
    antlr4::tree::TerminalNode *JOB();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Kill_stats_jobContext* kill_stats_job();

  class  Execute_statementContext : public antlr4::ParserRuleContext {
  public:
    Execute_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    Execute_bodyContext *execute_body();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_statementContext* execute_statement();

  class  Execute_body_batchContext : public antlr4::ParserRuleContext {
  public:
    Execute_body_batchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_proc_name_server_database_schemaContext *func_proc_name_server_database_schema();
    std::vector<Execute_statement_argContext *> execute_statement_arg();
    Execute_statement_argContext* execute_statement_arg(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_body_batchContext* execute_body_batch();

  class  Execute_bodyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *return_status = nullptr;
    TSqlParser::Id_Context *linkedServer = nullptr;
    Execute_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_proc_name_server_database_schemaContext *func_proc_name_server_database_schema();
    std::vector<Execute_var_stringContext *> execute_var_string();
    Execute_var_stringContext* execute_var_string(size_t i);
    antlr4::tree::TerminalNode *EQUAL();
    Execute_statement_argContext *execute_statement_arg();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *AT_KEYWORD();
    antlr4::tree::TerminalNode *LOGIN();
    antlr4::tree::TerminalNode *USER();
    Id_Context *id_();
    antlr4::tree::TerminalNode *CALLER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_bodyContext* execute_body();

  class  Execute_statement_argContext : public antlr4::ParserRuleContext {
  public:
    Execute_statement_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Execute_statement_arg_unnamedContext *execute_statement_arg_unnamed();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Execute_statement_argContext *> execute_statement_arg();
    Execute_statement_argContext* execute_statement_arg(size_t i);
    std::vector<Execute_statement_arg_namedContext *> execute_statement_arg_named();
    Execute_statement_arg_namedContext* execute_statement_arg_named(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_statement_argContext* execute_statement_arg();

  class  Execute_statement_arg_namedContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TSqlParser::Execute_parameterContext *value = nullptr;
    Execute_statement_arg_namedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Execute_parameterContext *execute_parameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_statement_arg_namedContext* execute_statement_arg_named();

  class  Execute_statement_arg_unnamedContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Execute_parameterContext *value = nullptr;
    Execute_statement_arg_unnamedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Execute_parameterContext *execute_parameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_statement_arg_unnamedContext* execute_statement_arg_unnamed();

  class  Execute_parameterContext : public antlr4::ParserRuleContext {
  public:
    Execute_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *OUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_parameterContext* execute_parameter();

  class  Execute_var_stringContext : public antlr4::ParserRuleContext {
  public:
    Execute_var_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *OUT();
    Execute_var_stringContext *execute_var_string();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_var_stringContext* execute_var_string();

  class  Security_statementContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Table_nameContext *on_id = nullptr;
    TSqlParser::Principal_idContext *principal_idContext = nullptr;
    std::vector<Principal_idContext *> to_principal;
    TSqlParser::Principal_idContext *as_principal = nullptr;
    Security_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Execute_clauseContext *execute_clause();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    antlr4::tree::TerminalNode *TO();
    std::vector<Principal_idContext *> principal_id();
    Principal_idContext* principal_id(size_t i);
    antlr4::tree::TerminalNode *ALL();
    Grant_permissionContext *grant_permission();
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *AS();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Class_type_for_grantContext *class_type_for_grant();
    antlr4::tree::TerminalNode *DOUBLE_COLON();
    antlr4::tree::TerminalNode *REVERT();
    antlr4::tree::TerminalNode *COOKIE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Open_keyContext *open_key();
    Close_keyContext *close_key();
    Create_keyContext *create_key();
    Create_certificateContext *create_certificate();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Security_statementContext* security_statement();

  class  Principal_idContext : public antlr4::ParserRuleContext {
  public:
    Principal_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Principal_idContext* principal_id();

  class  Create_certificateContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *certificate_name = nullptr;
    TSqlParser::Id_Context *user_name = nullptr;
    Create_certificateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CERTIFICATE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *FROM();
    Existing_keysContext *existing_keys();
    Generate_new_keysContext *generate_new_keys();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *DIALOG();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_certificateContext* create_certificate();

  class  Existing_keysContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *assembly_name = nullptr;
    antlr4::Token *path_to_file = nullptr;
    Existing_keysContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSEMBLY();
    Id_Context *id_();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *EXECUTABLE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Private_key_optionsContext *private_key_options();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Existing_keysContext* existing_keys();

  class  Private_key_optionsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *path = nullptr;
    antlr4::Token *password = nullptr;
    Private_key_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *BINARY();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *DECRYPTION();
    antlr4::tree::TerminalNode *ENCRYPTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Private_key_optionsContext* private_key_options();

  class  Generate_new_keysContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *password = nullptr;
    antlr4::Token *certificate_subject_name = nullptr;
    Generate_new_keysContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SUBJECT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Date_optionsContext *> date_options();
    Date_optionsContext* date_options(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_new_keysContext* generate_new_keys();

  class  Date_optionsContext : public antlr4::ParserRuleContext {
  public:
    Date_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *START_DATE();
    antlr4::tree::TerminalNode *EXPIRY_DATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Date_optionsContext* date_options();

  class  Open_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *key_name = nullptr;
    antlr4::Token *password = nullptr;
    Open_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *DECRYPTION();
    antlr4::tree::TerminalNode *BY();
    Decryption_mechanismContext *decryption_mechanism();
    Id_Context *id_();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Open_keyContext* open_key();

  class  Close_keyContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *key_name = nullptr;
    Close_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *KEY();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *MASTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Close_keyContext* close_key();

  class  Create_keyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *password = nullptr;
    TSqlParser::Id_Context *key_name = nullptr;
    TSqlParser::Id_Context *user_name = nullptr;
    TSqlParser::Id_Context *provider_name = nullptr;
    Create_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();
    std::vector<antlr4::tree::TerminalNode *> ENCRYPTION();
    antlr4::tree::TerminalNode* ENCRYPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *PROVIDER();
    std::vector<Key_optionsContext *> key_options();
    Key_optionsContext* key_options(size_t i);
    std::vector<Encryption_mechanismContext *> encryption_mechanism();
    Encryption_mechanismContext* encryption_mechanism(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_keyContext* create_key();

  class  Key_optionsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *pass_phrase = nullptr;
    antlr4::Token *identity_phrase = nullptr;
    antlr4::Token *key_name_in_provider = nullptr;
    Key_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_SOURCE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ALGORITHM();
    AlgorithmContext *algorithm();
    antlr4::tree::TerminalNode *IDENTITY_VALUE();
    antlr4::tree::TerminalNode *PROVIDER_KEY_NAME();
    antlr4::tree::TerminalNode *CREATION_DISPOSITION();
    antlr4::tree::TerminalNode *CREATE_NEW();
    antlr4::tree::TerminalNode *OPEN_EXISTING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Key_optionsContext* key_options();

  class  AlgorithmContext : public antlr4::ParserRuleContext {
  public:
    AlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DES();
    antlr4::tree::TerminalNode *TRIPLE_DES();
    antlr4::tree::TerminalNode *TRIPLE_DES_3KEY();
    antlr4::tree::TerminalNode *RC2();
    antlr4::tree::TerminalNode *RC4();
    antlr4::tree::TerminalNode *RC4_128();
    antlr4::tree::TerminalNode *DESX();
    antlr4::tree::TerminalNode *AES_128();
    antlr4::tree::TerminalNode *AES_192();
    antlr4::tree::TerminalNode *AES_256();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlgorithmContext* algorithm();

  class  Encryption_mechanismContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *certificate_name = nullptr;
    TSqlParser::Id_Context *asym_key_name = nullptr;
    TSqlParser::Id_Context *decrypting_Key_name = nullptr;
    Encryption_mechanismContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CERTIFICATE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Encryption_mechanismContext* encryption_mechanism();

  class  Decryption_mechanismContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *certificate_name = nullptr;
    TSqlParser::Id_Context *asym_key_name = nullptr;
    TSqlParser::Id_Context *decrypting_Key_name = nullptr;
    Decryption_mechanismContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CERTIFICATE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *SYMMETRIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decryption_mechanismContext* decryption_mechanism();

  class  Grant_permissionContext : public antlr4::ParserRuleContext {
  public:
    Grant_permissionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADMINISTER();
    antlr4::tree::TerminalNode *BULK();
    antlr4::tree::TerminalNode *OPERATIONS();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *RESOURCES();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *SETTINGS();
    antlr4::tree::TerminalNode *TRACE();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ASSEMBLY();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *AVAILABILITY();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *CERTIFICATE();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONTRACT();
    antlr4::tree::TerminalNode *CREDENTIAL();
    antlr4::tree::TerminalNode *DATASPACE();
    antlr4::tree::TerminalNode *ENDPOINT();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *CATALOG();
    antlr4::tree::TerminalNode *LINKED();
    antlr4::tree::TerminalNode *LOGIN();
    antlr4::tree::TerminalNode *MASK();
    antlr4::tree::TerminalNode *MESSAGE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *BINDING();
    antlr4::tree::TerminalNode *ROUTE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *POLICY();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *NOTIFICATION();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *DDL();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *SCOPED();
    antlr4::tree::TerminalNode *CONFIGURATION();
    antlr4::tree::TerminalNode *AUTHENTICATE();
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *CHECKPOINT();
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *RULE();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SYNONYM();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *SCRIPT();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *IMPERSONATE();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *KILL();
    antlr4::tree::TerminalNode *RECEIVE();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *SECURABLES();
    antlr4::tree::TerminalNode *SEND();
    antlr4::tree::TerminalNode *SHOWPLAN();
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *SUBSCRIBE();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *NOTIFICATIONS();
    antlr4::tree::TerminalNode *TAKE();
    antlr4::tree::TerminalNode *OWNERSHIP();
    antlr4::tree::TerminalNode *UNMASK();
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *TRACKING();
    antlr4::tree::TerminalNode *DEFINITION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_permissionContext* grant_permission();

  class  Set_statementContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *member_name = nullptr;
    Set_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DOT();
    Id_Context *id_();
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Id_Context *id_();
    antlr4::tree::TerminalNode *LOCAL_ID();
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transaction_statementContext* transaction_statement();

  class  Go_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *count = nullptr;
    Go_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Go_statementContext* go_statement();

  class  Use_statementContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database = nullptr;
    Use_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_statementContext* use_statement();

  class  Setuser_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *user = nullptr;
    Setuser_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SETUSER();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Setuser_statementContext* setuser_statement();

  class  Reconfigure_statementContext : public antlr4::ParserRuleContext {
  public:
    Reconfigure_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECONFIGURE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OVERRIDE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reconfigure_statementContext* reconfigure_statement();

  class  Shutdown_statementContext : public antlr4::ParserRuleContext {
  public:
    Shutdown_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NOWAIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Shutdown_statementContext* shutdown_statement();

  class  Checkpoint_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *checkPointDuration = nullptr;
    Checkpoint_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKPOINT();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checkpoint_statementContext* checkpoint_statement();

  class  Dbcc_checkalloc_optionContext : public antlr4::ParserRuleContext {
  public:
    Dbcc_checkalloc_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_ERRORMSGS();
    antlr4::tree::TerminalNode *NO_INFOMSGS();
    antlr4::tree::TerminalNode *TABLOCK();
    antlr4::tree::TerminalNode *ESTIMATEONLY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_checkalloc_optionContext* dbcc_checkalloc_option();

  class  Dbcc_checkallocContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TSqlParser::Id_Context *database = nullptr;
    antlr4::Token *databaseid = nullptr;
    TSqlParser::Dbcc_checkalloc_optionContext *dbcc_option = nullptr;
    Dbcc_checkallocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKALLOC();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *DECIMAL();
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NOINDEX();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *REPAIR_ALLOW_DATA_LOSS();
    antlr4::tree::TerminalNode *REPAIR_FAST();
    antlr4::tree::TerminalNode *REPAIR_REBUILD();
    std::vector<Dbcc_checkalloc_optionContext *> dbcc_checkalloc_option();
    Dbcc_checkalloc_optionContext* dbcc_checkalloc_option(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_checkallocContext* dbcc_checkalloc();

  class  Dbcc_checkcatalogContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TSqlParser::Id_Context *database = nullptr;
    antlr4::Token *databasename = nullptr;
    antlr4::Token *dbcc_option = nullptr;
    Dbcc_checkcatalogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKCATALOG();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NO_INFOMSGS();
    antlr4::tree::TerminalNode *DECIMAL();
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_checkcatalogContext* dbcc_checkcatalog();

  class  Dbcc_checkconstraints_optionContext : public antlr4::ParserRuleContext {
  public:
    Dbcc_checkconstraints_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_CONSTRAINTS();
    antlr4::tree::TerminalNode *ALL_ERRORMSGS();
    antlr4::tree::TerminalNode *NO_INFOMSGS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_checkconstraints_optionContext* dbcc_checkconstraints_option();

  class  Dbcc_checkconstraintsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TSqlParser::Id_Context *table_or_constraint = nullptr;
    antlr4::Token *table_or_constraint_name = nullptr;
    TSqlParser::Dbcc_checkconstraints_optionContext *dbcc_option = nullptr;
    Dbcc_checkconstraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKCONSTRAINTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Dbcc_checkconstraints_optionContext *> dbcc_checkconstraints_option();
    Dbcc_checkconstraints_optionContext* dbcc_checkconstraints_option(size_t i);
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_checkconstraintsContext* dbcc_checkconstraints();

  class  Dbcc_checkdb_table_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *max_dregree_of_parallelism = nullptr;
    Dbcc_checkdb_table_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_ERRORMSGS();
    antlr4::tree::TerminalNode *EXTENDED_LOGICAL_CHECKS();
    antlr4::tree::TerminalNode *NO_INFOMSGS();
    antlr4::tree::TerminalNode *TABLOCK();
    antlr4::tree::TerminalNode *ESTIMATEONLY();
    antlr4::tree::TerminalNode *PHYSICAL_ONLY();
    antlr4::tree::TerminalNode *DATA_PURITY();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_checkdb_table_optionContext* dbcc_checkdb_table_option();

  class  Dbcc_checkdbContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TSqlParser::Id_Context *database = nullptr;
    antlr4::Token *databasename = nullptr;
    TSqlParser::Dbcc_checkdb_table_optionContext *dbcc_option = nullptr;
    Dbcc_checkdbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKDB();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Dbcc_checkdb_table_optionContext *> dbcc_checkdb_table_option();
    Dbcc_checkdb_table_optionContext* dbcc_checkdb_table_option(size_t i);
    antlr4::tree::TerminalNode *DECIMAL();
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NOINDEX();
    antlr4::tree::TerminalNode *REPAIR_ALLOW_DATA_LOSS();
    antlr4::tree::TerminalNode *REPAIR_FAST();
    antlr4::tree::TerminalNode *REPAIR_REBUILD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_checkdbContext* dbcc_checkdb();

  class  Dbcc_checkfilegroup_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *max_dregree_of_parallelism = nullptr;
    Dbcc_checkfilegroup_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_ERRORMSGS();
    antlr4::tree::TerminalNode *NO_INFOMSGS();
    antlr4::tree::TerminalNode *TABLOCK();
    antlr4::tree::TerminalNode *ESTIMATEONLY();
    antlr4::tree::TerminalNode *PHYSICAL_ONLY();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_checkfilegroup_optionContext* dbcc_checkfilegroup_option();

  class  Dbcc_checkfilegroupContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    antlr4::Token *filegroup_id = nullptr;
    antlr4::Token *filegroup_name = nullptr;
    TSqlParser::Dbcc_checkfilegroup_optionContext *dbcc_option = nullptr;
    Dbcc_checkfilegroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKFILEGROUP();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Dbcc_checkfilegroup_optionContext *> dbcc_checkfilegroup_option();
    Dbcc_checkfilegroup_optionContext* dbcc_checkfilegroup_option(size_t i);
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NOINDEX();
    antlr4::tree::TerminalNode *REPAIR_ALLOW_DATA_LOSS();
    antlr4::tree::TerminalNode *REPAIR_FAST();
    antlr4::tree::TerminalNode *REPAIR_REBUILD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_checkfilegroupContext* dbcc_checkfilegroup();

  class  Dbcc_checktableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    antlr4::Token *table_or_view_name = nullptr;
    TSqlParser::ExpressionContext *index_id = nullptr;
    TSqlParser::Dbcc_checkdb_table_optionContext *dbcc_option = nullptr;
    Dbcc_checktableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CHECKTABLE();
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    std::vector<Dbcc_checkdb_table_optionContext *> dbcc_checkdb_table_option();
    Dbcc_checkdb_table_optionContext* dbcc_checkdb_table_option(size_t i);
    antlr4::tree::TerminalNode *NOINDEX();
    antlr4::tree::TerminalNode *REPAIR_ALLOW_DATA_LOSS();
    antlr4::tree::TerminalNode *REPAIR_FAST();
    antlr4::tree::TerminalNode *REPAIR_REBUILD();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_checktableContext* dbcc_checktable();

  class  Dbcc_cleantableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TSqlParser::Id_Context *database = nullptr;
    antlr4::Token *databasename = nullptr;
    TSqlParser::Id_Context *table_or_view = nullptr;
    antlr4::Token *table_or_view_name = nullptr;
    antlr4::Token *batch_size = nullptr;
    antlr4::Token *dbcc_option = nullptr;
    Dbcc_cleantableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CLEANTABLE();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NO_INFOMSGS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_cleantableContext* dbcc_cleantable();

  class  Dbcc_clonedatabase_optionContext : public antlr4::ParserRuleContext {
  public:
    Dbcc_clonedatabase_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NO_STATISTICS();
    antlr4::tree::TerminalNode *NO_QUERYSTORE();
    antlr4::tree::TerminalNode *SERVICEBROKER();
    antlr4::tree::TerminalNode *VERIFY_CLONEDB();
    antlr4::tree::TerminalNode *BACKUP_CLONEDB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_clonedatabase_optionContext* dbcc_clonedatabase_option();

  class  Dbcc_clonedatabaseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TSqlParser::Id_Context *source_database = nullptr;
    TSqlParser::Id_Context *target_database = nullptr;
    TSqlParser::Dbcc_clonedatabase_optionContext *dbcc_option = nullptr;
    Dbcc_clonedatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CLONEDATABASE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *WITH();
    std::vector<Dbcc_clonedatabase_optionContext *> dbcc_clonedatabase_option();
    Dbcc_clonedatabase_optionContext* dbcc_clonedatabase_option(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_clonedatabaseContext* dbcc_clonedatabase();

  class  Dbcc_pdw_showspaceusedContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TSqlParser::Id_Context *tablename = nullptr;
    antlr4::Token *dbcc_option = nullptr;
    Dbcc_pdw_showspaceusedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PDW_SHOWSPACEUSED();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    Id_Context *id_();
    antlr4::tree::TerminalNode *IGNORE_REPLICATED_TABLE_CACHE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_pdw_showspaceusedContext* dbcc_pdw_showspaceused();

  class  Dbcc_proccacheContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    antlr4::Token *dbcc_option = nullptr;
    Dbcc_proccacheContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCCACHE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NO_INFOMSGS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_proccacheContext* dbcc_proccache();

  class  Dbcc_showcontig_optionContext : public antlr4::ParserRuleContext {
  public:
    Dbcc_showcontig_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_INDEXES();
    antlr4::tree::TerminalNode *TABLERESULTS();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *ALL_LEVELS();
    antlr4::tree::TerminalNode *NO_INFOMSGS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_showcontig_optionContext* dbcc_showcontig_option();

  class  Dbcc_showcontigContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TSqlParser::ExpressionContext *table_or_view = nullptr;
    TSqlParser::ExpressionContext *index = nullptr;
    TSqlParser::Dbcc_showcontig_optionContext *dbcc_option = nullptr;
    Dbcc_showcontigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOWCONTIG();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<Dbcc_showcontig_optionContext *> dbcc_showcontig_option();
    Dbcc_showcontig_optionContext* dbcc_showcontig_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_showcontigContext* dbcc_showcontig();

  class  Dbcc_shrinklogContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    antlr4::Token *dbcc_option = nullptr;
    Dbcc_shrinklogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHRINKLOG();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NO_INFOMSGS();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *MB();
    antlr4::tree::TerminalNode *GB();
    antlr4::tree::TerminalNode *TB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_shrinklogContext* dbcc_shrinklog();

  class  Dbcc_dbreindexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TSqlParser::Id_or_stringContext *table = nullptr;
    TSqlParser::Id_or_stringContext *index_name = nullptr;
    TSqlParser::ExpressionContext *fillfactor = nullptr;
    antlr4::Token *dbcc_option = nullptr;
    Dbcc_dbreindexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *DBREINDEX();
    std::vector<Id_or_stringContext *> id_or_string();
    Id_or_stringContext* id_or_string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NO_INFOMSGS();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_dbreindexContext* dbcc_dbreindex();

  class  Dbcc_dll_freeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *dllname = nullptr;
    antlr4::Token *name = nullptr;
    antlr4::Token *dbcc_option = nullptr;
    Dbcc_dll_freeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Id_Context *id_();
    antlr4::tree::TerminalNode *FREE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NO_INFOMSGS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_dll_freeContext* dbcc_dll_free();

  class  Dbcc_dropcleanbuffersContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    antlr4::Token *dbcc_option = nullptr;
    Dbcc_dropcleanbuffersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROPCLEANBUFFERS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMPUTE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NO_INFOMSGS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_dropcleanbuffersContext* dbcc_dropcleanbuffers();

  class  Dbcc_clauseContext : public antlr4::ParserRuleContext {
  public:
    Dbcc_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DBCC();
    Dbcc_checkallocContext *dbcc_checkalloc();
    Dbcc_checkcatalogContext *dbcc_checkcatalog();
    Dbcc_checkconstraintsContext *dbcc_checkconstraints();
    Dbcc_checkdbContext *dbcc_checkdb();
    Dbcc_checkfilegroupContext *dbcc_checkfilegroup();
    Dbcc_checktableContext *dbcc_checktable();
    Dbcc_cleantableContext *dbcc_cleantable();
    Dbcc_clonedatabaseContext *dbcc_clonedatabase();
    Dbcc_dbreindexContext *dbcc_dbreindex();
    Dbcc_dll_freeContext *dbcc_dll_free();
    Dbcc_dropcleanbuffersContext *dbcc_dropcleanbuffers();
    Dbcc_pdw_showspaceusedContext *dbcc_pdw_showspaceused();
    Dbcc_proccacheContext *dbcc_proccache();
    Dbcc_showcontigContext *dbcc_showcontig();
    Dbcc_shrinklogContext *dbcc_shrinklog();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dbcc_clauseContext* dbcc_clause();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    std::vector<Table_type_indicesContext *> table_type_indices();
    Table_type_indicesContext* table_type_indices(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_type_definitionContext* table_type_definition();

  class  Table_type_indicesContext : public antlr4::ParserRuleContext {
  public:
    Table_type_indicesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_list_with_orderContext *column_name_list_with_order();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *INDEX();
    Id_Context *id_();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *NONCLUSTERED();
    antlr4::tree::TerminalNode *CHECK();
    Search_conditionContext *search_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_type_indicesContext* table_type_indices();

  class  Xml_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Xml_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Xml_schema_collectionContext *xml_schema_collection();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONTENT();
    antlr4::tree::TerminalNode *DOCUMENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_type_definitionContext* xml_type_definition();

  class  Xml_schema_collectionContext : public antlr4::ParserRuleContext {
  public:
    Xml_schema_collectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_schema_collectionContext* xml_schema_collection();

  class  Column_def_table_constraintsContext : public antlr4::ParserRuleContext {
  public:
    Column_def_table_constraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_def_table_constraintContext *> column_def_table_constraint();
    Column_def_table_constraintContext* column_def_table_constraint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_def_table_constraintsContext* column_def_table_constraints();

  class  Column_def_table_constraintContext : public antlr4::ParserRuleContext {
  public:
    Column_def_table_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_definitionContext *column_definition();
    Materialized_column_definitionContext *materialized_column_definition();
    Table_constraintContext *table_constraint();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_def_table_constraintContext* column_def_table_constraint();

  class  Column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *AS();
    ExpressionContext *expression();
    std::vector<Column_definition_elementContext *> column_definition_element();
    Column_definition_elementContext* column_definition_element(size_t i);
    Column_indexContext *column_index();
    antlr4::tree::TerminalNode *PERSISTED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_definitionContext* column_definition();

  class  Column_definition_elementContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *collation_name = nullptr;
    antlr4::Token *mask_function = nullptr;
    TSqlParser::Id_Context *constraint = nullptr;
    TSqlParser::ExpressionContext *constant_expr = nullptr;
    antlr4::Token *seed = nullptr;
    antlr4::Token *increment = nullptr;
    antlr4::Token *key_name = nullptr;
    antlr4::Token *algo = nullptr;
    Column_definition_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILESTREAM();
    antlr4::tree::TerminalNode *COLLATE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *SPARSE();
    antlr4::tree::TerminalNode *MASKED();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *IDENTITY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *TRANSACTION_ID();
    antlr4::tree::TerminalNode *SEQUENCE_NUMBER();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *HIDDEN_KEYWORD();
    antlr4::tree::TerminalNode *ROWGUIDCOL();
    antlr4::tree::TerminalNode *ENCRYPTED();
    antlr4::tree::TerminalNode *COLUMN_ENCRYPTION_KEY();
    antlr4::tree::TerminalNode *ENCRYPTION_TYPE();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *RANDOMIZED();
    Column_constraintContext *column_constraint();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_definition_elementContext* column_definition_element();

  class  Column_modifierContext : public antlr4::ParserRuleContext {
  public:
    Column_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ROWGUIDCOL();
    antlr4::tree::TerminalNode *PERSISTED();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *SPARSE();
    antlr4::tree::TerminalNode *HIDDEN_KEYWORD();
    antlr4::tree::TerminalNode *MASKED();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_modifierContext* column_modifier();

  class  Materialized_column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Materialized_column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COMPUTE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Materialized_column_definitionContext* materialized_column_definition();

  class  Column_constraintContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *constraint = nullptr;
    Column_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Null_notnullContext *null_notnull();
    Check_constraintContext *check_constraint();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Id_Context *id_();
    Primary_key_optionsContext *primary_key_options();
    Foreign_key_optionsContext *foreign_key_options();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UNIQUE();
    ClusteredContext *clustered();
    antlr4::tree::TerminalNode *FOREIGN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_constraintContext* column_constraint();

  class  Column_indexContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *index_name = nullptr;
    TSqlParser::Id_Context *filestream_filegroup_or_partition_schema_name = nullptr;
    Column_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDEX();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    ClusteredContext *clustered();
    Create_table_index_optionsContext *create_table_index_options();
    On_partition_or_filegroupContext *on_partition_or_filegroup();
    antlr4::tree::TerminalNode *FILESTREAM_ON();
    antlr4::tree::TerminalNode *NULL_DOUBLE_QUOTE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_indexContext* column_index();

  class  On_partition_or_filegroupContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *partition_scheme_name = nullptr;
    TSqlParser::Id_Context *partition_column_name = nullptr;
    TSqlParser::Id_Context *filegroup = nullptr;
    On_partition_or_filegroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DEFAULT_DOUBLE_QUOTE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_partition_or_filegroupContext* on_partition_or_filegroup();

  class  Table_constraintContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *constraint = nullptr;
    TSqlParser::Column_name_listContext *fk = nullptr;
    TSqlParser::ExpressionContext *constant_expr = nullptr;
    TSqlParser::Id_Context *column = nullptr;
    Table_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Check_constraintContext *check_constraint();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    Column_name_list_with_orderContext *column_name_list_with_order();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Primary_key_optionsContext *primary_key_options();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    Foreign_key_optionsContext *foreign_key_options();
    antlr4::tree::TerminalNode *CONNECTION();
    std::vector<Connection_nodeContext *> connection_node();
    Connection_nodeContext* connection_node(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *FOR();
    Column_name_listContext *column_name_list();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *UNIQUE();
    ClusteredContext *clustered();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *VALUES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_constraintContext* table_constraint();

  class  Connection_nodeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *from_node_table = nullptr;
    TSqlParser::Id_Context *to_node_table = nullptr;
    Connection_nodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Connection_nodeContext* connection_node();

  class  Primary_key_optionsContext : public antlr4::ParserRuleContext {
  public:
    Primary_key_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FILLFACTOR();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DECIMAL();
    Alter_table_index_optionsContext *alter_table_index_options();
    On_partition_or_filegroupContext *on_partition_or_filegroup();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primary_key_optionsContext* primary_key_options();

  class  Foreign_key_optionsContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Column_name_listContext *pk = nullptr;
    Foreign_key_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCES();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Column_name_listContext *column_name_list();
    std::vector<On_deleteContext *> on_delete();
    On_deleteContext* on_delete(size_t i);
    std::vector<On_updateContext *> on_update();
    On_updateContext* on_update(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *REPLICATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Foreign_key_optionsContext* foreign_key_options();

  class  Check_constraintContext : public antlr4::ParserRuleContext {
  public:
    Check_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *REPLICATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Check_constraintContext* check_constraint();

  class  On_deleteContext : public antlr4::ParserRuleContext {
  public:
    On_deleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_deleteContext* on_delete();

  class  On_updateContext : public antlr4::ParserRuleContext {
  public:
    On_updateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_updateContext* on_update();

  class  Alter_table_index_optionsContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_index_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Alter_table_index_optionContext *> alter_table_index_option();
    Alter_table_index_optionContext* alter_table_index_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_index_optionsContext* alter_table_index_options();

  class  Alter_table_index_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *max_degree_of_parallelism = nullptr;
    antlr4::Token *times = nullptr;
    Alter_table_index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAD_INDEX();
    antlr4::tree::TerminalNode *EQUAL();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *FILLFACTOR();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *IGNORE_DUP_KEY();
    antlr4::tree::TerminalNode *STATISTICS_NORECOMPUTE();
    antlr4::tree::TerminalNode *ALLOW_ROW_LOCKS();
    antlr4::tree::TerminalNode *ALLOW_PAGE_LOCKS();
    antlr4::tree::TerminalNode *OPTIMIZE_FOR_SEQUENTIAL_KEY();
    antlr4::tree::TerminalNode *SORT_IN_TEMPDB();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *DATA_COMPRESSION();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *COLUMNSTORE();
    antlr4::tree::TerminalNode *COLUMNSTORE_ARCHIVE();
    On_partitionsContext *on_partitions();
    antlr4::tree::TerminalNode *XML_COMPRESSION();
    antlr4::tree::TerminalNode *DISTRIBUTION();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASC();
    antlr4::tree::TerminalNode* ASC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESC();
    antlr4::tree::TerminalNode* DESC(size_t i);
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    Low_priority_lock_waitContext *low_priority_lock_wait();
    antlr4::tree::TerminalNode *RESUMABLE();
    antlr4::tree::TerminalNode *MAX_DURATION();
    antlr4::tree::TerminalNode *MINUTES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_index_optionContext* alter_table_index_option();

  class  Declare_cursorContext : public antlr4::ParserRuleContext {
  public:
    Declare_cursorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *CURSOR();
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    Select_statement_standaloneContext *select_statement_standalone();
    antlr4::tree::TerminalNode *SEMI();
    Declare_set_cursor_commonContext *declare_set_cursor_common();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *SEMI_SENSITIVE();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *OF();
    Column_name_listContext *column_name_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_cursorContext* declare_cursor();

  class  Declare_set_cursor_commonContext : public antlr4::ParserRuleContext {
  public:
    Declare_set_cursor_commonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Select_statement_standaloneContext *select_statement_standalone();
    std::vector<Declare_set_cursor_common_partialContext *> declare_set_cursor_common_partial();
    Declare_set_cursor_common_partialContext* declare_set_cursor_common_partial(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_set_cursor_commonContext* declare_set_cursor_common();

  class  Declare_set_cursor_common_partialContext : public antlr4::ParserRuleContext {
  public:
    Declare_set_cursor_common_partialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
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
    antlr4::tree::TerminalNode *TYPE_WARNING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_set_cursor_common_partialContext* declare_set_cursor_common_partial();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_cursorContext* fetch_cursor();

  class  Set_specialContext : public antlr4::ParserRuleContext {
  public:
    Set_specialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    Constant_LOCAL_IDContext *constant_LOCAL_ID();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *ROWCOUNT();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *TEXTSIZE();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *IDENTITY_INSERT();
    Table_nameContext *table_name();
    std::vector<Special_listContext *> special_list();
    Special_listContext* special_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Modify_methodContext *modify_method();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_specialContext* set_special();

  class  Special_listContext : public antlr4::ParserRuleContext {
  public:
    Special_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANSI_NULLS();
    antlr4::tree::TerminalNode *QUOTED_IDENTIFIER();
    antlr4::tree::TerminalNode *ANSI_PADDING();
    antlr4::tree::TerminalNode *ANSI_WARNINGS();
    antlr4::tree::TerminalNode *ANSI_DEFAULTS();
    antlr4::tree::TerminalNode *ANSI_NULL_DFLT_OFF();
    antlr4::tree::TerminalNode *ANSI_NULL_DFLT_ON();
    antlr4::tree::TerminalNode *ARITHABORT();
    antlr4::tree::TerminalNode *ARITHIGNORE();
    antlr4::tree::TerminalNode *CONCAT_NULL_YIELDS_NULL();
    antlr4::tree::TerminalNode *CURSOR_CLOSE_ON_COMMIT();
    antlr4::tree::TerminalNode *FMTONLY();
    antlr4::tree::TerminalNode *FORCEPLAN();
    antlr4::tree::TerminalNode *IMPLICIT_TRANSACTIONS();
    antlr4::tree::TerminalNode *NOCOUNT();
    antlr4::tree::TerminalNode *NOEXEC();
    antlr4::tree::TerminalNode *NUMERIC_ROUNDABORT();
    antlr4::tree::TerminalNode *PARSEONLY();
    antlr4::tree::TerminalNode *REMOTE_PROC_TRANSACTIONS();
    antlr4::tree::TerminalNode *SHOWPLAN_ALL();
    antlr4::tree::TerminalNode *SHOWPLAN_TEXT();
    antlr4::tree::TerminalNode *SHOWPLAN_XML();
    antlr4::tree::TerminalNode *XACT_ABORT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Special_listContext* special_list();

  class  Constant_LOCAL_IDContext : public antlr4::ParserRuleContext {
  public:
    Constant_LOCAL_IDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_LOCAL_IDContext* constant_LOCAL_ID();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primitive_expressionContext *primitive_expression();
    Function_callContext *function_call();
    Case_expressionContext *case_expression();
    Full_column_nameContext *full_column_name();
    Bracket_expressionContext *bracket_expression();
    Unary_operator_expressionContext *unary_operator_expression();
    Over_clauseContext *over_clause();
    antlr4::tree::TerminalNode *DOLLAR_ACTION();
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
    antlr4::tree::TerminalNode *DOUBLE_BAR();
    antlr4::tree::TerminalNode *DOT();
    Value_callContext *value_call();
    Query_callContext *query_call();
    Exist_callContext *exist_call();
    Modify_callContext *modify_call();
    Hierarchyid_callContext *hierarchyid_call();
    antlr4::tree::TerminalNode *COLLATE();
    Id_Context *id_();
    Time_zoneContext *time_zone();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLACEHOLDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  Time_zoneContext : public antlr4::ParserRuleContext {
  public:
    Time_zoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_KEYWORD();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *ZONE();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_zoneContext* time_zone();

  class  Primitive_expressionContext : public antlr4::ParserRuleContext {
  public:
    Primitive_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Primitive_constantContext *primitive_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primitive_expressionContext* primitive_expression();

  class  Case_expressionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::ExpressionContext *caseExpr = nullptr;
    TSqlParser::ExpressionContext *elseExpr = nullptr;
    Case_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<Switch_sectionContext *> switch_section();
    Switch_sectionContext* switch_section(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<Switch_search_condition_sectionContext *> switch_search_condition_section();
    Switch_search_condition_sectionContext* switch_search_condition_section(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_expressionContext* case_expression();

  class  Unary_operator_expressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    Unary_operator_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT_NOT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_operator_expressionContext* unary_operator_expression();

  class  Bracket_expressionContext : public antlr4::ParserRuleContext {
  public:
    Bracket_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    SubqueryContext *subquery();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bracket_expressionContext* bracket_expression();

  class  SubqueryContext : public antlr4::ParserRuleContext {
  public:
    SubqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_statementContext *select_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubqueryContext* subquery();

  class  With_expressionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Common_table_expressionContext *common_table_expressionContext = nullptr;
    std::vector<Common_table_expressionContext *> ctes;
    With_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<Common_table_expressionContext *> common_table_expression();
    Common_table_expressionContext* common_table_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_expressionContext* with_expression();

  class  Common_table_expressionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *expression_name = nullptr;
    TSqlParser::Column_name_listContext *columns = nullptr;
    TSqlParser::Select_statementContext *cte_query = nullptr;
    Common_table_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    Id_Context *id_();
    Select_statementContext *select_statement();
    Column_name_listContext *column_name_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Common_table_expressionContext* common_table_expression();

  class  Update_elemContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *udt_column_name = nullptr;
    TSqlParser::Id_Context *method_name = nullptr;
    Update_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    Full_column_nameContext *full_column_name();
    ExpressionContext *expression();
    Assignment_operatorContext *assignment_operator();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Expression_list_Context *expression_list_();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_elemContext* update_elem();

  class  Update_elem_mergeContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *udt_column_name = nullptr;
    TSqlParser::Id_Context *method_name = nullptr;
    Update_elem_mergeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Full_column_nameContext *full_column_name();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *EQUAL();
    Assignment_operatorContext *assignment_operator();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Expression_list_Context *expression_list_();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_elem_mergeContext* update_elem_merge();

  class  Search_conditionContext : public antlr4::ParserRuleContext {
  public:
    Search_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateContext *predicate();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Search_conditionContext* search_condition();
  Search_conditionContext* search_condition(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Freetext_predicateContext *freetext_predicate();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Comparison_operatorContext *comparison_operator();
    antlr4::tree::TerminalNode *MULT_ASSIGN();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *IN();
    Expression_list_Context *expression_list_();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *IS();
    Null_notnullContext *null_notnull();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class  Query_expressionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Sql_unionContext *sql_unionContext = nullptr;
    std::vector<Sql_unionContext *> unions;
    Query_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Query_specificationContext *query_specification();
    Select_order_by_clauseContext *select_order_by_clause();
    std::vector<Sql_unionContext *> sql_union();
    Sql_unionContext* sql_union(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Query_expressionContext *> query_expression();
    Query_expressionContext* query_expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_expressionContext* query_expression();

  class  Sql_unionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Query_specificationContext *spec = nullptr;
    TSqlParser::Query_expressionContext *op = nullptr;
    Sql_unionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *INTERSECT();
    Query_specificationContext *query_specification();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ALL();
    Query_expressionContext *query_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_unionContext* sql_union();

  class  Query_specificationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *allOrDistinct = nullptr;
    TSqlParser::Top_clauseContext *top = nullptr;
    TSqlParser::Select_listContext *columns = nullptr;
    TSqlParser::Table_nameContext *into = nullptr;
    TSqlParser::Table_sourcesContext *from_label = nullptr;
    TSqlParser::Search_conditionContext *where = nullptr;
    antlr4::Token *groupByAll = nullptr;
    TSqlParser::Group_by_itemContext *group_by_itemContext = nullptr;
    std::vector<Group_by_itemContext *> groupBys;
    TSqlParser::Grouping_sets_itemContext *grouping_sets_itemContext = nullptr;
    std::vector<Grouping_sets_itemContext *> groupSets;
    TSqlParser::Search_conditionContext *having = nullptr;
    Query_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Select_listContext *select_list();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *HAVING();
    Top_clauseContext *top_clause();
    Table_nameContext *table_name();
    Table_sourcesContext *table_sources();
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Grouping_sets_itemContext *> grouping_sets_item();
    Grouping_sets_itemContext* grouping_sets_item(size_t i);
    std::vector<Group_by_itemContext *> group_by_item();
    Group_by_itemContext* group_by_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_specificationContext* query_specification();

  class  Top_clauseContext : public antlr4::ParserRuleContext {
  public:
    Top_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOP();
    Top_percentContext *top_percent();
    Top_countContext *top_count();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TIES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Top_clauseContext* top_clause();

  class  Top_percentContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *percent_constant = nullptr;
    TSqlParser::ExpressionContext *topper_expression = nullptr;
    Top_percentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Top_percentContext* top_percent();

  class  Top_countContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *count_constant = nullptr;
    TSqlParser::ExpressionContext *topcount_expression = nullptr;
    Top_countContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Top_countContext* top_count();

  class  Order_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Order_by_expressionContext *order_by_expressionContext = nullptr;
    std::vector<Order_by_expressionContext *> order_bys;
    Order_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<Order_by_expressionContext *> order_by_expression();
    Order_by_expressionContext* order_by_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clauseContext* order_by_clause();

  class  Select_order_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::ExpressionContext *offset_exp = nullptr;
    antlr4::Token *offset_rows = nullptr;
    antlr4::Token *fetch_offset = nullptr;
    TSqlParser::ExpressionContext *fetch_exp = nullptr;
    antlr4::Token *fetch_rows = nullptr;
    Select_order_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Order_by_clauseContext *order_by_clause();
    antlr4::tree::TerminalNode *OFFSET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ROW();
    antlr4::tree::TerminalNode* ROW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ROWS();
    antlr4::tree::TerminalNode* ROWS(size_t i);
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_order_by_clauseContext* select_order_by_clause();

  class  For_clauseContext : public antlr4::ParserRuleContext {
  public:
    For_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *BROWSE();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *RAW();
    antlr4::tree::TerminalNode *AUTO();
    std::vector<Xml_common_directivesContext *> xml_common_directives();
    Xml_common_directivesContext* xml_common_directives(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ELEMENTS();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *XMLDATA();
    antlr4::tree::TerminalNode *XMLSCHEMA();
    antlr4::tree::TerminalNode *XSINIL();
    antlr4::tree::TerminalNode *ABSENT();
    antlr4::tree::TerminalNode *EXPLICIT();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *JSON();
    std::vector<antlr4::tree::TerminalNode *> ROOT();
    antlr4::tree::TerminalNode* ROOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INCLUDE_NULL_VALUES();
    antlr4::tree::TerminalNode* INCLUDE_NULL_VALUES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITHOUT_ARRAY_WRAPPER();
    antlr4::tree::TerminalNode* WITHOUT_ARRAY_WRAPPER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_clauseContext* for_clause();

  class  Xml_common_directivesContext : public antlr4::ParserRuleContext {
  public:
    Xml_common_directivesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *BINARY_KEYWORD();
    antlr4::tree::TerminalNode *BASE64();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_common_directivesContext* xml_common_directives();

  class  Order_by_expressionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::ExpressionContext *order_by = nullptr;
    antlr4::Token *ascending = nullptr;
    antlr4::Token *descending = nullptr;
    Order_by_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_expressionContext* order_by_expression();

  class  Grouping_sets_itemContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Group_by_itemContext *group_by_itemContext = nullptr;
    std::vector<Group_by_itemContext *> groupSetItems;
    Grouping_sets_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Group_by_itemContext *> group_by_item();
    Group_by_itemContext* group_by_item(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grouping_sets_itemContext* grouping_sets_item();

  class  Group_by_itemContext : public antlr4::ParserRuleContext {
  public:
    Group_by_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_by_itemContext* group_by_item();

  class  Option_clauseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::OptionContext *optionContext = nullptr;
    std::vector<OptionContext *> options;
    Option_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    antlr4::tree::TerminalNode *NULL_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optimize_for_argContext* optimize_for_arg();

  class  Select_listContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Select_list_elemContext *select_list_elemContext = nullptr;
    std::vector<Select_list_elemContext *> selectElement;
    Select_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_list_elemContext *> select_list_elem();
    Select_list_elemContext* select_list_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_listContext* select_list();

  class  Udt_method_argumentsContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Execute_var_stringContext *execute_var_stringContext = nullptr;
    std::vector<Execute_var_stringContext *> argument;
    Udt_method_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Execute_var_stringContext *> execute_var_string();
    Execute_var_stringContext* execute_var_string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udt_method_argumentsContext* udt_method_arguments();

  class  AsteriskContext : public antlr4::ParserRuleContext {
  public:
    AsteriskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *INSERTED();
    antlr4::tree::TerminalNode *DELETED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsteriskContext* asterisk();

  class  Udt_elemContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *udt_column_name = nullptr;
    TSqlParser::Id_Context *non_static_attr = nullptr;
    TSqlParser::Id_Context *static_attr = nullptr;
    Udt_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    Udt_method_argumentsContext *udt_method_arguments();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    As_column_aliasContext *as_column_alias();
    antlr4::tree::TerminalNode *DOUBLE_COLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udt_elemContext* udt_elem();

  class  Expression_elemContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Column_aliasContext *leftAlias = nullptr;
    antlr4::Token *eq = nullptr;
    TSqlParser::ExpressionContext *leftAssignment = nullptr;
    TSqlParser::ExpressionContext *expressionAs = nullptr;
    Expression_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_aliasContext *column_alias();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();
    As_column_aliasContext *as_column_alias();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_elemContext* expression_elem();

  class  Select_list_elemContext : public antlr4::ParserRuleContext {
  public:
    Select_list_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsteriskContext *asterisk();
    Udt_elemContext *udt_elem();
    antlr4::tree::TerminalNode *LOCAL_ID();
    ExpressionContext *expression();
    Assignment_operatorContext *assignment_operator();
    antlr4::tree::TerminalNode *EQUAL();
    Expression_elemContext *expression_elem();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_elemContext* select_list_elem();

  class  Table_sourcesContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Table_sourceContext *table_sourceContext = nullptr;
    std::vector<Table_sourceContext *> source;
    Table_sourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Non_ansi_joinContext *non_ansi_join();
    std::vector<Table_sourceContext *> table_source();
    Table_sourceContext* table_source(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_sourcesContext* table_sources();

  class  Non_ansi_joinContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Table_sourceContext *table_sourceContext = nullptr;
    std::vector<Table_sourceContext *> source;
    Non_ansi_joinContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_sourceContext *> table_source();
    Table_sourceContext* table_source(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_ansi_joinContext* non_ansi_join();

  class  Table_sourceContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Join_partContext *join_partContext = nullptr;
    std::vector<Join_partContext *> joins;
    Table_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_source_itemContext *table_source_item();
    std::vector<Join_partContext *> join_part();
    Join_partContext* join_part(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_sourceContext* table_source();

  class  Table_source_itemContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *loc_id = nullptr;
    antlr4::Token *loc_id_call = nullptr;
    TSqlParser::Function_callContext *loc_fcall = nullptr;
    TSqlParser::Function_callContext *oldstyle_fcall = nullptr;
    Table_source_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Full_table_nameContext *full_table_name();
    Deprecated_table_hintContext *deprecated_table_hint();
    As_table_aliasContext *as_table_alias();
    With_table_hintsContext *with_table_hints();
    Sybase_legacy_hintsContext *sybase_legacy_hints();
    Rowset_functionContext *rowset_function();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Derived_tableContext *derived_table();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Column_alias_listContext *column_alias_list();
    Change_tableContext *change_table();
    Nodes_methodContext *nodes_method();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *DOT();
    Open_xmlContext *open_xml();
    Open_jsonContext *open_json();
    antlr4::tree::TerminalNode *DOUBLE_COLON();
    Table_sourceContext *table_source();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_source_itemContext* table_source_item();

  class  Open_xmlContext : public antlr4::ParserRuleContext {
  public:
    Open_xmlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENXML();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *WITH();
    Schema_declarationContext *schema_declaration();
    As_table_aliasContext *as_table_alias();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Open_xmlContext* open_xml();

  class  Open_jsonContext : public antlr4::ParserRuleContext {
  public:
    Open_jsonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENJSON();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *WITH();
    Json_declarationContext *json_declaration();
    As_table_aliasContext *as_table_alias();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Open_jsonContext* open_json();

  class  Json_declarationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Json_column_declarationContext *json_column_declarationContext = nullptr;
    std::vector<Json_column_declarationContext *> json_col;
    Json_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Json_column_declarationContext *> json_column_declaration();
    Json_column_declarationContext* json_column_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_declarationContext* json_declaration();

  class  Json_column_declarationContext : public antlr4::ParserRuleContext {
  public:
    Json_column_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_declarationContext *column_declaration();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *JSON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_column_declarationContext* json_column_declaration();

  class  Schema_declarationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Column_declarationContext *column_declarationContext = nullptr;
    std::vector<Column_declarationContext *> xml_col;
    Schema_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_declarationContext *> column_declaration();
    Column_declarationContext* column_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_declarationContext* schema_declaration();

  class  Column_declarationContext : public antlr4::ParserRuleContext {
  public:
    Column_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_declarationContext* column_declaration();

  class  Change_tableContext : public antlr4::ParserRuleContext {
  public:
    Change_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Change_table_changesContext *change_table_changes();
    Change_table_versionContext *change_table_version();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Change_tableContext* change_table();

  class  Change_table_changesContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Table_nameContext *changetable = nullptr;
    antlr4::Token *changesid = nullptr;
    Change_table_changesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGETABLE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *CHANGES();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Change_table_changesContext* change_table_changes();

  class  Change_table_versionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Table_nameContext *versiontable = nullptr;
    TSqlParser::Full_column_name_listContext *pk_columns = nullptr;
    TSqlParser::Select_listContext *pk_values = nullptr;
    Change_table_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGETABLE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *VERSION();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Table_nameContext *table_name();
    Full_column_name_listContext *full_column_name_list();
    Select_listContext *select_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Change_table_versionContext* change_table_version();

  class  Join_partContext : public antlr4::ParserRuleContext {
  public:
    Join_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Join_onContext *join_on();
    Cross_joinContext *cross_join();
    Apply_Context *apply_();
    PivotContext *pivot();
    UnpivotContext *unpivot();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_partContext* join_part();

  class  Join_onContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *inner = nullptr;
    antlr4::Token *join_type = nullptr;
    antlr4::Token *outer = nullptr;
    antlr4::Token *join_hint = nullptr;
    TSqlParser::Table_sourceContext *source = nullptr;
    TSqlParser::Search_conditionContext *cond = nullptr;
    Join_onContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *ON();
    Table_sourceContext *table_source();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *OUTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_onContext* join_on();

  class  Cross_joinContext : public antlr4::ParserRuleContext {
  public:
    Cross_joinContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *JOIN();
    Table_source_itemContext *table_source_item();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_joinContext* cross_join();

  class  Apply_Context : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *apply_style = nullptr;
    TSqlParser::Table_source_itemContext *source = nullptr;
    Apply_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *APPLY();
    Table_source_itemContext *table_source_item();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *OUTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Apply_Context* apply_();

  class  PivotContext : public antlr4::ParserRuleContext {
  public:
    PivotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PIVOT();
    Pivot_clauseContext *pivot_clause();
    As_table_aliasContext *as_table_alias();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PivotContext* pivot();

  class  UnpivotContext : public antlr4::ParserRuleContext {
  public:
    UnpivotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNPIVOT();
    Unpivot_clauseContext *unpivot_clause();
    As_table_aliasContext *as_table_alias();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnpivotContext* unpivot();

  class  Pivot_clauseContext : public antlr4::ParserRuleContext {
  public:
    Pivot_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    Aggregate_windowed_functionContext *aggregate_windowed_function();
    antlr4::tree::TerminalNode *FOR();
    Full_column_nameContext *full_column_name();
    antlr4::tree::TerminalNode *IN();
    Column_alias_listContext *column_alias_list();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pivot_clauseContext* pivot_clause();

  class  Unpivot_clauseContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::ExpressionContext *unpivot_exp = nullptr;
    Unpivot_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *FOR();
    Full_column_nameContext *full_column_name();
    antlr4::tree::TerminalNode *IN();
    Full_column_name_listContext *full_column_name_list();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unpivot_clauseContext* unpivot_clause();

  class  Full_column_name_listContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Full_column_nameContext *full_column_nameContext = nullptr;
    std::vector<Full_column_nameContext *> column;
    Full_column_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Full_column_nameContext *> full_column_name();
    Full_column_nameContext* full_column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_column_name_listContext* full_column_name_list();

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
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rowset_functionContext* rowset_function();

  class  Bulk_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *bulk_option_value = nullptr;
    Bulk_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bulk_optionContext* bulk_option();

  class  Derived_tableContext : public antlr4::ParserRuleContext {
  public:
    Derived_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubqueryContext *> subquery();
    SubqueryContext* subquery(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> UNION();
    antlr4::tree::TerminalNode* UNION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);
    Table_value_constructorContext *table_value_constructor();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

  class  RANKING_WINDOWED_FUNCContext : public Function_callContext {
  public:
    RANKING_WINDOWED_FUNCContext(Function_callContext *ctx);

    Ranking_windowed_functionContext *ranking_windowed_function();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BUILT_IN_FUNCContext : public Function_callContext {
  public:
    BUILT_IN_FUNCContext(Function_callContext *ctx);

    Built_in_functionsContext *built_in_functions();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FREE_TEXTContext : public Function_callContext {
  public:
    FREE_TEXTContext(Function_callContext *ctx);

    Freetext_functionContext *freetext_function();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ANALYTIC_WINDOWED_FUNCContext : public Function_callContext {
  public:
    ANALYTIC_WINDOWED_FUNCContext(Function_callContext *ctx);

    Analytic_windowed_functionContext *analytic_windowed_function();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SCALAR_FUNCTIONContext : public Function_callContext {
  public:
    SCALAR_FUNCTIONContext(Function_callContext *ctx);

    Scalar_function_nameContext *scalar_function_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Expression_list_Context *expression_list_();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PARTITION_FUNCContext : public Function_callContext {
  public:
    PARTITION_FUNCContext(Function_callContext *ctx);

    Partition_functionContext *partition_function();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AGGREGATE_WINDOWED_FUNCContext : public Function_callContext {
  public:
    AGGREGATE_WINDOWED_FUNCContext(Function_callContext *ctx);

    Aggregate_windowed_functionContext *aggregate_windowed_function();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HIERARCHYID_METHODContext : public Function_callContext {
  public:
    HIERARCHYID_METHODContext(Function_callContext *ctx);

    Hierarchyid_static_methodContext *hierarchyid_static_method();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Function_callContext* function_call();

  class  Partition_functionContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database = nullptr;
    TSqlParser::Id_Context *func_name = nullptr;
    Partition_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR_PARTITION();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_functionContext* partition_function();

  class  Freetext_functionContext : public antlr4::ParserRuleContext {
  public:
    Freetext_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    Table_nameContext *table_name();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *CONTAINSTABLE();
    antlr4::tree::TerminalNode *FREETEXTTABLE();
    std::vector<Full_column_nameContext *> full_column_name();
    Full_column_nameContext* full_column_name(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SEMANTICSIMILARITYTABLE();
    antlr4::tree::TerminalNode *SEMANTICKEYPHRASETABLE();
    antlr4::tree::TerminalNode *SEMANTICSIMILARITYDETAILSTABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Freetext_functionContext* freetext_function();

  class  Freetext_predicateContext : public antlr4::ParserRuleContext {
  public:
    Freetext_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTAINS();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<Full_column_nameContext *> full_column_name();
    Full_column_nameContext* full_column_name(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *FREETEXT();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LANGUAGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Freetext_predicateContext* freetext_predicate();

  class  Json_key_valueContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::ExpressionContext *json_key_name = nullptr;
    TSqlParser::ExpressionContext *value_expression = nullptr;
    Json_key_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_key_valueContext* json_key_value();

  class  Json_null_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_null_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *ABSENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_null_clauseContext* json_null_clause();

  class  Built_in_functionsContext : public antlr4::ParserRuleContext {
  public:
    Built_in_functionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Built_in_functionsContext() = default;
    void copyFrom(Built_in_functionsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  COL_NAMEContext : public Built_in_functionsContext {
  public:
    COL_NAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *table_id = nullptr;
    TSqlParser::ExpressionContext *column_id = nullptr;
    antlr4::tree::TerminalNode *COL_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CHECKSUMContext : public Built_in_functionsContext {
  public:
    CHECKSUMContext(Built_in_functionsContext *ctx);

    antlr4::Token *star = nullptr;
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *STAR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DECOMPRESSContext : public Built_in_functionsContext {
  public:
    DECOMPRESSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *expr = nullptr;
    antlr4::tree::TerminalNode *DECOMPRESS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CURRENT_TIMEZONE_IDContext : public Built_in_functionsContext {
  public:
    CURRENT_TIMEZONE_IDContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_TIMEZONE_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MONTHContext : public Built_in_functionsContext {
  public:
    MONTHContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *date = nullptr;
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RANDContext : public Built_in_functionsContext {
  public:
    RANDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *seed = nullptr;
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FORMATContext : public Built_in_functionsContext {
  public:
    FORMATContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *value = nullptr;
    TSqlParser::ExpressionContext *format_label = nullptr;
    TSqlParser::ExpressionContext *culture = nullptr;
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TRIMContext : public Built_in_functionsContext {
  public:
    TRIMContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *characters = nullptr;
    TSqlParser::ExpressionContext *string_ = nullptr;
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *FROM();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LEASTContext : public Built_in_functionsContext {
  public:
    LEASTContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *LEAST();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Expression_list_Context *expression_list_();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  APP_NAMEContext : public Built_in_functionsContext {
  public:
    APP_NAMEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *APP_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  USER_IDContext : public Built_in_functionsContext {
  public:
    USER_IDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *user = nullptr;
    antlr4::tree::TerminalNode *USER_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FILE_NAMEContext : public Built_in_functionsContext {
  public:
    FILE_NAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *file_id = nullptr;
    antlr4::tree::TerminalNode *FILE_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SESSION_CONTEXTContext : public Built_in_functionsContext {
  public:
    SESSION_CONTEXTContext(Built_in_functionsContext *ctx);

    antlr4::Token *key = nullptr;
    antlr4::tree::TerminalNode *SESSION_CONTEXT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  STRContext : public Built_in_functionsContext {
  public:
    STRContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    TSqlParser::ExpressionContext *length_expression = nullptr;
    TSqlParser::ExpressionContext *decimal = nullptr;
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CONVERTContext : public Built_in_functionsContext {
  public:
    CONVERTContext(Built_in_functionsContext *ctx);

    TSqlParser::Data_typeContext *convert_data_type = nullptr;
    TSqlParser::ExpressionContext *convert_expression = nullptr;
    TSqlParser::ExpressionContext *style = nullptr;
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Data_typeContext *data_type();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  XML_DATA_TYPE_FUNCContext : public Built_in_functionsContext {
  public:
    XML_DATA_TYPE_FUNCContext(Built_in_functionsContext *ctx);

    Xml_data_type_methodsContext *xml_data_type_methods();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LOG10Context : public Built_in_functionsContext {
  public:
    LOG10Context(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FLOORContext : public Built_in_functionsContext {
  public:
    FLOORContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *numeric_expression = nullptr;
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  YEARContext : public Built_in_functionsContext {
  public:
    YEARContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *date = nullptr;
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PARSEContext : public Built_in_functionsContext {
  public:
    PARSEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *str_label = nullptr;
    TSqlParser::ExpressionContext *culture = nullptr;
    antlr4::tree::TerminalNode *PARSE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *AS();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *USING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ORIGINAL_LOGINContext : public Built_in_functionsContext {
  public:
    ORIGINAL_LOGINContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ORIGINAL_LOGIN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MATH_SIGNContext : public Built_in_functionsContext {
  public:
    MATH_SIGNContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *numeric_expression = nullptr;
    antlr4::tree::TerminalNode *SIGN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TIMEFROMPARTSContext : public Built_in_functionsContext {
  public:
    TIMEFROMPARTSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *hour = nullptr;
    TSqlParser::ExpressionContext *minute = nullptr;
    TSqlParser::ExpressionContext *seconds = nullptr;
    TSqlParser::ExpressionContext *fractions = nullptr;
    antlr4::Token *precision = nullptr;
    antlr4::tree::TerminalNode *TIMEFROMPARTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DECIMAL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LEFTContext : public Built_in_functionsContext {
  public:
    LEFTContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *character_expression = nullptr;
    TSqlParser::ExpressionContext *integer_expression = nullptr;
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GET_FILESTREAM_TRANSACTION_CONTEXTContext : public Built_in_functionsContext {
  public:
    GET_FILESTREAM_TRANSACTION_CONTEXTContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *GET_FILESTREAM_TRANSACTION_CONTEXT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FILEPROPERTYContext : public Built_in_functionsContext {
  public:
    FILEPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *file_name = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *FILEPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IDENT_SEEDContext : public Built_in_functionsContext {
  public:
    IDENT_SEEDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *table_or_view = nullptr;
    antlr4::tree::TerminalNode *IDENT_SEED();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IDENTITYContext : public Built_in_functionsContext {
  public:
    IDENTITYContext(Built_in_functionsContext *ctx);

    TSqlParser::Data_typeContext *datatype = nullptr;
    antlr4::Token *seed = nullptr;
    antlr4::Token *increment = nullptr;
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Data_typeContext *data_type();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CURRENT_TRANSACTION_IDContext : public Built_in_functionsContext {
  public:
    CURRENT_TRANSACTION_IDContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_TRANSACTION_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LTRIMContext : public Built_in_functionsContext {
  public:
    LTRIMContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *character_expression = nullptr;
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ROWCOUNT_BIGContext : public Built_in_functionsContext {
  public:
    ROWCOUNT_BIGContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ROWCOUNT_BIG();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CERTENCODEDContext : public Built_in_functionsContext {
  public:
    CERTENCODEDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *certid = nullptr;
    antlr4::tree::TerminalNode *CERTENCODED();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JSON_VALUEContext : public Built_in_functionsContext {
  public:
    JSON_VALUEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *expr = nullptr;
    TSqlParser::ExpressionContext *path = nullptr;
    antlr4::tree::TerminalNode *JSON_VALUE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SYSDATETIMEContext : public Built_in_functionsContext {
  public:
    SYSDATETIMEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *SYSDATETIME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CERTPRIVATEKEYContext : public Built_in_functionsContext {
  public:
    CERTPRIVATEKEYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *certid = nullptr;
    TSqlParser::ExpressionContext *encryption_password = nullptr;
    TSqlParser::ExpressionContext *decryption_pasword = nullptr;
    antlr4::tree::TerminalNode *CERTPRIVATEKEY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SPACEContext : public Built_in_functionsContext {
  public:
    SPACEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *integer_expression = nullptr;
    antlr4::tree::TerminalNode *SPACE_KEYWORD();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UPPERContext : public Built_in_functionsContext {
  public:
    UPPERContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *character_expression = nullptr;
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ABSContext : public Built_in_functionsContext {
  public:
    ABSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *numeric_expression = nullptr;
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ISJSONContext : public Built_in_functionsContext {
  public:
    ISJSONContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *json_expr = nullptr;
    TSqlParser::ExpressionContext *json_type_constraint = nullptr;
    antlr4::tree::TerminalNode *ISJSON();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HAS_PERMS_BY_NAMEContext : public Built_in_functionsContext {
  public:
    HAS_PERMS_BY_NAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *securable = nullptr;
    TSqlParser::ExpressionContext *securable_class = nullptr;
    TSqlParser::ExpressionContext *permission = nullptr;
    TSqlParser::ExpressionContext *sub_securable = nullptr;
    TSqlParser::ExpressionContext *sub_securable_class = nullptr;
    antlr4::tree::TerminalNode *HAS_PERMS_BY_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SUSER_IDContext : public Built_in_functionsContext {
  public:
    SUSER_IDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *login = nullptr;
    antlr4::tree::TerminalNode *SUSER_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SCOPE_IDENTITYContext : public Built_in_functionsContext {
  public:
    SCOPE_IDENTITYContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *SCOPE_IDENTITY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JSON_QUERYContext : public Built_in_functionsContext {
  public:
    JSON_QUERYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *expr = nullptr;
    TSqlParser::ExpressionContext *path = nullptr;
    antlr4::tree::TerminalNode *JSON_QUERY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  INDEX_COLContext : public Built_in_functionsContext {
  public:
    INDEX_COLContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *table_or_view_name = nullptr;
    TSqlParser::ExpressionContext *index_id = nullptr;
    TSqlParser::ExpressionContext *key_id = nullptr;
    antlr4::tree::TerminalNode *INDEX_COL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATABASE_PRINCIPAL_IDContext : public Built_in_functionsContext {
  public:
    DATABASE_PRINCIPAL_IDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *principal_name = nullptr;
    antlr4::tree::TerminalNode *DATABASE_PRINCIPAL_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PATINDEXContext : public Built_in_functionsContext {
  public:
    PATINDEXContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *pattern = nullptr;
    TSqlParser::ExpressionContext *string_expression = nullptr;
    antlr4::tree::TerminalNode *PATINDEX();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FULLTEXTSERVICEPROPERTYContext : public Built_in_functionsContext {
  public:
    FULLTEXTSERVICEPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *FULLTEXTSERVICEPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SMALLDATETIMEFROMPARTSContext : public Built_in_functionsContext {
  public:
    SMALLDATETIMEFROMPARTSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *year = nullptr;
    TSqlParser::ExpressionContext *month = nullptr;
    TSqlParser::ExpressionContext *day = nullptr;
    TSqlParser::ExpressionContext *hour = nullptr;
    TSqlParser::ExpressionContext *minute = nullptr;
    antlr4::tree::TerminalNode *SMALLDATETIMEFROMPARTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IDENT_CURRENTContext : public Built_in_functionsContext {
  public:
    IDENT_CURRENTContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *table_or_view = nullptr;
    antlr4::tree::TerminalNode *IDENT_CURRENT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SESSIONPROPERTYContext : public Built_in_functionsContext {
  public:
    SESSIONPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *option_name = nullptr;
    antlr4::tree::TerminalNode *SESSIONPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FETCH_STATUSContext : public Built_in_functionsContext {
  public:
    FETCH_STATUSContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *FETCH_STATUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  POWERContext : public Built_in_functionsContext {
  public:
    POWERContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    TSqlParser::ExpressionContext *y = nullptr;
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  REPLICATEContext : public Built_in_functionsContext {
  public:
    REPLICATEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *string_expression = nullptr;
    TSqlParser::ExpressionContext *integer_expression = nullptr;
    antlr4::tree::TerminalNode *REPLICATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  USER_NAMEContext : public Built_in_functionsContext {
  public:
    USER_NAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *id_label = nullptr;
    antlr4::tree::TerminalNode *USER_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OBJECT_DEFINITIONContext : public Built_in_functionsContext {
  public:
    OBJECT_DEFINITIONContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *object_id = nullptr;
    antlr4::tree::TerminalNode *OBJECT_DEFINITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IS_SRVROLEMEMBERContext : public Built_in_functionsContext {
  public:
    IS_SRVROLEMEMBERContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *role = nullptr;
    TSqlParser::ExpressionContext *login = nullptr;
    antlr4::tree::TerminalNode *IS_SRVROLEMEMBER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NEWSEQUENTIALIDContext : public Built_in_functionsContext {
  public:
    NEWSEQUENTIALIDContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *NEWSEQUENTIALID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OBJECT_NAMEContext : public Built_in_functionsContext {
  public:
    OBJECT_NAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *object_id = nullptr;
    TSqlParser::ExpressionContext *database_id = nullptr;
    antlr4::tree::TerminalNode *OBJECT_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JSON_PATH_EXISTSContext : public Built_in_functionsContext {
  public:
    JSON_PATH_EXISTSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *value_expression = nullptr;
    TSqlParser::ExpressionContext *sql_json_path = nullptr;
    antlr4::tree::TerminalNode *JSON_PATH_EXISTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PWDCOMPAREContext : public Built_in_functionsContext {
  public:
    PWDCOMPAREContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *clear_text_password = nullptr;
    TSqlParser::ExpressionContext *password_hash = nullptr;
    TSqlParser::ExpressionContext *version = nullptr;
    antlr4::tree::TerminalNode *PWDCOMPARE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SCHEMA_IDContext : public Built_in_functionsContext {
  public:
    SCHEMA_IDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *schema_name = nullptr;
    antlr4::tree::TerminalNode *SCHEMA_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OBJECT_SCHEMA_NAMEContext : public Built_in_functionsContext {
  public:
    OBJECT_SCHEMA_NAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *object_id = nullptr;
    TSqlParser::ExpressionContext *database_id = nullptr;
    antlr4::tree::TerminalNode *OBJECT_SCHEMA_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SUSER_SNAMEContext : public Built_in_functionsContext {
  public:
    SUSER_SNAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *server_user_sid = nullptr;
    antlr4::tree::TerminalNode *SUSER_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SUSER_SNAME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DB_NAMEContext : public Built_in_functionsContext {
  public:
    DB_NAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *database_id = nullptr;
    antlr4::tree::TerminalNode *DB_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SUSER_SIDContext : public Built_in_functionsContext {
  public:
    SUSER_SIDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *login = nullptr;
    TSqlParser::ExpressionContext *param2 = nullptr;
    antlr4::tree::TerminalNode *SUSER_SID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ASCIIContext : public Built_in_functionsContext {
  public:
    ASCIIContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *character_expression = nullptr;
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FILE_IDEXContext : public Built_in_functionsContext {
  public:
    FILE_IDEXContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *file_name = nullptr;
    antlr4::tree::TerminalNode *FILE_IDEX();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ERROR_SEVERITYContext : public Built_in_functionsContext {
  public:
    ERROR_SEVERITYContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ERROR_SEVERITY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  REVERSEContext : public Built_in_functionsContext {
  public:
    REVERSEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *string_expression = nullptr;
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ISDATEContext : public Built_in_functionsContext {
  public:
    ISDATEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ISDATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  REPLACEContext : public Built_in_functionsContext {
  public:
    REPLACEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *input_label = nullptr;
    TSqlParser::ExpressionContext *replacing = nullptr;
    TSqlParser::ExpressionContext *with_label = nullptr;
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CURSOR_STATUSContext : public Built_in_functionsContext {
  public:
    CURSOR_STATUSContext(Built_in_functionsContext *ctx);

    antlr4::Token *scope = nullptr;
    TSqlParser::ExpressionContext *cursor = nullptr;
    antlr4::tree::TerminalNode *CURSOR_STATUS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *STRING();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MIN_ACTIVE_ROWVERSIONContext : public Built_in_functionsContext {
  public:
    MIN_ACTIVE_ROWVERSIONContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *MIN_ACTIVE_ROWVERSION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HAS_DBACCESSContext : public Built_in_functionsContext {
  public:
    HAS_DBACCESSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *database_name = nullptr;
    antlr4::tree::TerminalNode *HAS_DBACCESS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NEXT_VALUE_FORContext : public Built_in_functionsContext {
  public:
    NEXT_VALUE_FORContext(Built_in_functionsContext *ctx);

    TSqlParser::Table_nameContext *sequence_name = nullptr;
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *FOR();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Order_by_clauseContext *order_by_clause();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FILEGROUP_IDContext : public Built_in_functionsContext {
  public:
    FILEGROUP_IDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *filegroup_name = nullptr;
    antlr4::tree::TerminalNode *FILEGROUP_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LOWERContext : public Built_in_functionsContext {
  public:
    LOWERContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *character_expression = nullptr;
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATENAMEContext : public Built_in_functionsContext {
  public:
    DATENAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::Dateparts_15Context *datepart = nullptr;
    TSqlParser::ExpressionContext *date = nullptr;
    antlr4::tree::TerminalNode *DATENAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Dateparts_15Context *dateparts_15();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CEILINGContext : public Built_in_functionsContext {
  public:
    CEILINGContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *numeric_expression = nullptr;
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  APPLOCK_TESTContext : public Built_in_functionsContext {
  public:
    APPLOCK_TESTContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *database_principal = nullptr;
    TSqlParser::ExpressionContext *resource_name = nullptr;
    TSqlParser::ExpressionContext *lock_mode = nullptr;
    TSqlParser::ExpressionContext *lock_owner = nullptr;
    antlr4::tree::TerminalNode *APPLOCK_TEST();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SINContext : public Built_in_functionsContext {
  public:
    SINContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TYPE_NAMEContext : public Built_in_functionsContext {
  public:
    TYPE_NAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *type_id = nullptr;
    antlr4::tree::TerminalNode *TYPE_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SYSUTCDATETIMEContext : public Built_in_functionsContext {
  public:
    SYSUTCDATETIMEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *SYSUTCDATETIME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATEADDContext : public Built_in_functionsContext {
  public:
    DATEADDContext(Built_in_functionsContext *ctx);

    TSqlParser::Dateparts_12Context *datepart = nullptr;
    TSqlParser::ExpressionContext *number = nullptr;
    TSqlParser::ExpressionContext *date = nullptr;
    antlr4::tree::TerminalNode *DATEADD();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Dateparts_12Context *dateparts_12();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATETIMEFROMPARTSContext : public Built_in_functionsContext {
  public:
    DATETIMEFROMPARTSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *year = nullptr;
    TSqlParser::ExpressionContext *month = nullptr;
    TSqlParser::ExpressionContext *day = nullptr;
    TSqlParser::ExpressionContext *hour = nullptr;
    TSqlParser::ExpressionContext *minute = nullptr;
    TSqlParser::ExpressionContext *seconds = nullptr;
    TSqlParser::ExpressionContext *milliseconds = nullptr;
    antlr4::tree::TerminalNode *DATETIMEFROMPARTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ERROR_MESSAGEContext : public Built_in_functionsContext {
  public:
    ERROR_MESSAGEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ERROR_MESSAGE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FILEGROUPPROPERTYContext : public Built_in_functionsContext {
  public:
    FILEGROUPPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *filegroup_name = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *FILEGROUPPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EOMONTHContext : public Built_in_functionsContext {
  public:
    EOMONTHContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *start_date = nullptr;
    TSqlParser::ExpressionContext *month_to_add = nullptr;
    antlr4::tree::TerminalNode *EOMONTH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IDENT_INCRContext : public Built_in_functionsContext {
  public:
    IDENT_INCRContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *table_or_view = nullptr;
    antlr4::tree::TerminalNode *IDENT_INCR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ASINContext : public Built_in_functionsContext {
  public:
    ASINContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NCHARContext : public Built_in_functionsContext {
  public:
    NCHARContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *integer_expression = nullptr;
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DIFFERENCEContext : public Built_in_functionsContext {
  public:
    DIFFERENCEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *character_expression_1 = nullptr;
    TSqlParser::ExpressionContext *character_expression_2 = nullptr;
    antlr4::tree::TerminalNode *DIFFERENCE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CHARINDEXContext : public Built_in_functionsContext {
  public:
    CHARINDEXContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *expressionToFind = nullptr;
    TSqlParser::ExpressionContext *expressionToSearch = nullptr;
    TSqlParser::ExpressionContext *start_location = nullptr;
    antlr4::tree::TerminalNode *CHARINDEX();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TODATETIMEOFFSETContext : public Built_in_functionsContext {
  public:
    TODATETIMEOFFSETContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *datetime_expression = nullptr;
    TSqlParser::ExpressionContext *timezoneoffset_expression = nullptr;
    antlr4::tree::TerminalNode *TODATETIMEOFFSET();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RADIANSContext : public Built_in_functionsContext {
  public:
    RADIANSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *numeric_expression = nullptr;
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CURRENT_TIMEZONEContext : public Built_in_functionsContext {
  public:
    CURRENT_TIMEZONEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_TIMEZONE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  COL_LENGTHContext : public Built_in_functionsContext {
  public:
    COL_LENGTHContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *table = nullptr;
    TSqlParser::ExpressionContext *column = nullptr;
    antlr4::tree::TerminalNode *COL_LENGTH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATEFROMPARTSContext : public Built_in_functionsContext {
  public:
    DATEFROMPARTSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *year = nullptr;
    TSqlParser::ExpressionContext *month = nullptr;
    TSqlParser::ExpressionContext *day = nullptr;
    antlr4::tree::TerminalNode *DATEFROMPARTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NEWIDContext : public Built_in_functionsContext {
  public:
    NEWIDContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *NEWID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATETRUNCContext : public Built_in_functionsContext {
  public:
    DATETRUNCContext(Built_in_functionsContext *ctx);

    TSqlParser::Dateparts_datetruncContext *datepart = nullptr;
    TSqlParser::ExpressionContext *date = nullptr;
    antlr4::tree::TerminalNode *DATETRUNC();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Dateparts_datetruncContext *dateparts_datetrunc();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ISNULLContext : public Built_in_functionsContext {
  public:
    ISNULLContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *left = nullptr;
    TSqlParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *ISNULL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JSON_MODIFYContext : public Built_in_functionsContext {
  public:
    JSON_MODIFYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *expr = nullptr;
    TSqlParser::ExpressionContext *path = nullptr;
    TSqlParser::ExpressionContext *new_value = nullptr;
    antlr4::tree::TerminalNode *JSON_MODIFY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CURRENT_REQUEST_IDContext : public Built_in_functionsContext {
  public:
    CURRENT_REQUEST_IDContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_REQUEST_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IS_MEMBERContext : public Built_in_functionsContext {
  public:
    IS_MEMBERContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *group_or_role = nullptr;
    antlr4::tree::TerminalNode *IS_MEMBER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SERVERPROPERTYContext : public Built_in_functionsContext {
  public:
    SERVERPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *SERVERPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SQRTContext : public Built_in_functionsContext {
  public:
    SQRTContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ATN2Context : public Built_in_functionsContext {
  public:
    ATN2Context(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *ATN2();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UNICODEContext : public Built_in_functionsContext {
  public:
    UNICODEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *ncharacter_expression = nullptr;
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NULLIFContext : public Built_in_functionsContext {
  public:
    NULLIFContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *left = nullptr;
    TSqlParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SESSION_USERContext : public Built_in_functionsContext {
  public:
    SESSION_USERContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *SESSION_USER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CASTContext : public Built_in_functionsContext {
  public:
    CASTContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATETIME2FROMPARTSContext : public Built_in_functionsContext {
  public:
    DATETIME2FROMPARTSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *year = nullptr;
    TSqlParser::ExpressionContext *month = nullptr;
    TSqlParser::ExpressionContext *day = nullptr;
    TSqlParser::ExpressionContext *hour = nullptr;
    TSqlParser::ExpressionContext *minute = nullptr;
    TSqlParser::ExpressionContext *seconds = nullptr;
    TSqlParser::ExpressionContext *fractions = nullptr;
    TSqlParser::ExpressionContext *precision = nullptr;
    antlr4::tree::TerminalNode *DATETIME2FROMPARTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SQUAREContext : public Built_in_functionsContext {
  public:
    SQUAREContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *SQUARE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LOGContext : public Built_in_functionsContext {
  public:
    LOGContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    TSqlParser::ExpressionContext *base = nullptr;
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IIFContext : public Built_in_functionsContext {
  public:
    IIFContext(Built_in_functionsContext *ctx);

    TSqlParser::Search_conditionContext *cond = nullptr;
    TSqlParser::ExpressionContext *left = nullptr;
    TSqlParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *IIF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Search_conditionContext *search_condition();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATEPARTContext : public Built_in_functionsContext {
  public:
    DATEPARTContext(Built_in_functionsContext *ctx);

    TSqlParser::Dateparts_15Context *datepart = nullptr;
    TSqlParser::ExpressionContext *date = nullptr;
    antlr4::tree::TerminalNode *DATEPART();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Dateparts_15Context *dateparts_15();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CONTEXT_INFOContext : public Built_in_functionsContext {
  public:
    CONTEXT_INFOContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *CONTEXT_INFO();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATEDIFFContext : public Built_in_functionsContext {
  public:
    DATEDIFFContext(Built_in_functionsContext *ctx);

    TSqlParser::Dateparts_12Context *datepart = nullptr;
    TSqlParser::ExpressionContext *date_first = nullptr;
    TSqlParser::ExpressionContext *date_second = nullptr;
    antlr4::tree::TerminalNode *DATEDIFF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Dateparts_12Context *dateparts_12();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OBJECTPROPERTYContext : public Built_in_functionsContext {
  public:
    OBJECTPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *id_label = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *OBJECTPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CHARContext : public Built_in_functionsContext {
  public:
    CHARContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *integer_expression = nullptr;
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  STRING_ESCAPEContext : public Built_in_functionsContext {
  public:
    STRING_ESCAPEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *text_ = nullptr;
    TSqlParser::ExpressionContext *type_ = nullptr;
    antlr4::tree::TerminalNode *STRING_ESCAPE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GETANSINULLContext : public Built_in_functionsContext {
  public:
    GETANSINULLContext(Built_in_functionsContext *ctx);

    antlr4::Token *database = nullptr;
    antlr4::tree::TerminalNode *GETANSINULL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SYSTEM_USERContext : public Built_in_functionsContext {
  public:
    SYSTEM_USERContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *SYSTEM_USER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OBJECT_IDContext : public Built_in_functionsContext {
  public:
    OBJECT_IDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *object_name = nullptr;
    TSqlParser::ExpressionContext *object_type = nullptr;
    antlr4::tree::TerminalNode *OBJECT_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ERROR_PROCEDUREContext : public Built_in_functionsContext {
  public:
    ERROR_PROCEDUREContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ERROR_PROCEDURE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QUOTENAMEContext : public Built_in_functionsContext {
  public:
    QUOTENAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *character_string = nullptr;
    TSqlParser::ExpressionContext *quote_character = nullptr;
    antlr4::tree::TerminalNode *QUOTENAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RIGHTContext : public Built_in_functionsContext {
  public:
    RIGHTContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *character_expression = nullptr;
    TSqlParser::ExpressionContext *integer_expression = nullptr;
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HOST_IDContext : public Built_in_functionsContext {
  public:
    HOST_IDContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *HOST_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATETIMEOFFSETFROMPARTSContext : public Built_in_functionsContext {
  public:
    DATETIMEOFFSETFROMPARTSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *year = nullptr;
    TSqlParser::ExpressionContext *month = nullptr;
    TSqlParser::ExpressionContext *day = nullptr;
    TSqlParser::ExpressionContext *hour = nullptr;
    TSqlParser::ExpressionContext *minute = nullptr;
    TSqlParser::ExpressionContext *seconds = nullptr;
    TSqlParser::ExpressionContext *fractions = nullptr;
    TSqlParser::ExpressionContext *hour_offset = nullptr;
    TSqlParser::ExpressionContext *minute_offset = nullptr;
    antlr4::Token *precision = nullptr;
    antlr4::tree::TerminalNode *DATETIMEOFFSETFROMPARTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DECIMAL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  COSContext : public Built_in_functionsContext {
  public:
    COSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  COTContext : public Built_in_functionsContext {
  public:
    COTContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *COT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FILE_IDContext : public Built_in_functionsContext {
  public:
    FILE_IDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *file_name = nullptr;
    antlr4::tree::TerminalNode *FILE_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ASSEMBLYPROPERTYContext : public Built_in_functionsContext {
  public:
    ASSEMBLYPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *assembly_name = nullptr;
    TSqlParser::ExpressionContext *property_name = nullptr;
    antlr4::tree::TerminalNode *ASSEMBLYPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  STUFFContext : public Built_in_functionsContext {
  public:
    STUFFContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *str_label = nullptr;
    TSqlParser::ExpressionContext *from_label = nullptr;
    TSqlParser::ExpressionContext *to = nullptr;
    TSqlParser::ExpressionContext *str_with = nullptr;
    antlr4::tree::TerminalNode *STUFF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IS_ROLEMEMBERContext : public Built_in_functionsContext {
  public:
    IS_ROLEMEMBERContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *role = nullptr;
    TSqlParser::ExpressionContext *database_principal = nullptr;
    antlr4::tree::TerminalNode *IS_ROLEMEMBER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SQL_VARIANT_PROPERTYContext : public Built_in_functionsContext {
  public:
    SQL_VARIANT_PROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *expr = nullptr;
    antlr4::Token *property_label = nullptr;
    antlr4::tree::TerminalNode *SQL_VARIANT_PROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GREATESTContext : public Built_in_functionsContext {
  public:
    GREATESTContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *GREATEST();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Expression_list_Context *expression_list_();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GETUTCDATEContext : public Built_in_functionsContext {
  public:
    GETUTCDATEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *GETUTCDATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LOGINPROPERTYContext : public Built_in_functionsContext {
  public:
    LOGINPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *login_name = nullptr;
    TSqlParser::ExpressionContext *property_name = nullptr;
    antlr4::tree::TerminalNode *LOGINPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CONCAT_WSContext : public Built_in_functionsContext {
  public:
    CONCAT_WSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *separator = nullptr;
    TSqlParser::ExpressionContext *argument_1 = nullptr;
    TSqlParser::ExpressionContext *argument_2 = nullptr;
    TSqlParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> argument_n;
    antlr4::tree::TerminalNode *CONCAT_WS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ERROR_STATEContext : public Built_in_functionsContext {
  public:
    ERROR_STATEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ERROR_STATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DAYContext : public Built_in_functionsContext {
  public:
    DAYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *date = nullptr;
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PARSENAMEContext : public Built_in_functionsContext {
  public:
    PARSENAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *object_name = nullptr;
    TSqlParser::ExpressionContext *object_piece = nullptr;
    antlr4::tree::TerminalNode *PARSENAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TANContext : public Built_in_functionsContext {
  public:
    TANContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CURRENT_USERContext : public Built_in_functionsContext {
  public:
    CURRENT_USERContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_USER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PERMISSIONSContext : public Built_in_functionsContext {
  public:
    PERMISSIONSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *object_id = nullptr;
    TSqlParser::ExpressionContext *column = nullptr;
    antlr4::tree::TerminalNode *PERMISSIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SYSDATETIMEOFFSETContext : public Built_in_functionsContext {
  public:
    SYSDATETIMEOFFSETContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *SYSDATETIMEOFFSET();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  INDEXPROPERTYContext : public Built_in_functionsContext {
  public:
    INDEXPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *object_id = nullptr;
    TSqlParser::ExpressionContext *index_or_statistics_name = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *INDEXPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OBJECTPROPERTYEXContext : public Built_in_functionsContext {
  public:
    OBJECTPROPERTYEXContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *id_label = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *OBJECTPROPERTYEX();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SUBSTRINGContext : public Built_in_functionsContext {
  public:
    SUBSTRINGContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *string_expression = nullptr;
    TSqlParser::ExpressionContext *start_ = nullptr;
    TSqlParser::ExpressionContext *length = nullptr;
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BINARY_CHECKSUMContext : public Built_in_functionsContext {
  public:
    BINARY_CHECKSUMContext(Built_in_functionsContext *ctx);

    antlr4::Token *star = nullptr;
    antlr4::tree::TerminalNode *BINARY_CHECKSUM();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *STAR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  INDEXKEY_PROPERTYContext : public Built_in_functionsContext {
  public:
    INDEXKEY_PROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *object_id = nullptr;
    TSqlParser::ExpressionContext *index_id = nullptr;
    TSqlParser::ExpressionContext *key_id = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *INDEXKEY_PROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PWDENCRYPTContext : public Built_in_functionsContext {
  public:
    PWDENCRYPTContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *password = nullptr;
    antlr4::tree::TerminalNode *PWDENCRYPT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  COMPRESSContext : public Built_in_functionsContext {
  public:
    COMPRESSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *expr = nullptr;
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  COALESCEContext : public Built_in_functionsContext {
  public:
    COALESCEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Expression_list_Context *expression_list_();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  STATS_DATEContext : public Built_in_functionsContext {
  public:
    STATS_DATEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *object_id = nullptr;
    TSqlParser::ExpressionContext *stats_id = nullptr;
    antlr4::tree::TerminalNode *STATS_DATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ISNUMERICContext : public Built_in_functionsContext {
  public:
    ISNUMERICContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ISNUMERIC();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ACOSContext : public Built_in_functionsContext {
  public:
    ACOSContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *ACOS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FILEGROUP_NAMEContext : public Built_in_functionsContext {
  public:
    FILEGROUP_NAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *filegroup_id = nullptr;
    antlr4::tree::TerminalNode *FILEGROUP_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  COLUMNPROPERTYContext : public Built_in_functionsContext {
  public:
    COLUMNPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *id_label = nullptr;
    TSqlParser::ExpressionContext *column = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *COLUMNPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DB_IDContext : public Built_in_functionsContext {
  public:
    DB_IDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *database_name = nullptr;
    antlr4::tree::TerminalNode *DB_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SOUNDEXContext : public Built_in_functionsContext {
  public:
    SOUNDEXContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *character_expression = nullptr;
    antlr4::tree::TerminalNode *SOUNDEX();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CURSOR_ROWSContext : public Built_in_functionsContext {
  public:
    CURSOR_ROWSContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *CURSOR_ROWS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FULLTEXTCATALOGPROPERTYContext : public Built_in_functionsContext {
  public:
    FULLTEXTCATALOGPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *catalog_name = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *FULLTEXTCATALOGPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TYPEPROPERTYContext : public Built_in_functionsContext {
  public:
    TYPEPROPERTYContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *type_label = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *TYPEPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SCHEMA_NAMEContext : public Built_in_functionsContext {
  public:
    SCHEMA_NAMEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *schema_id = nullptr;
    antlr4::tree::TerminalNode *SCHEMA_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TYPE_IDContext : public Built_in_functionsContext {
  public:
    TYPE_IDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *type_name = nullptr;
    antlr4::tree::TerminalNode *TYPE_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TRY_CASTContext : public Built_in_functionsContext {
  public:
    TRY_CASTContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *TRY_CAST();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  APPLOCK_MODEContext : public Built_in_functionsContext {
  public:
    APPLOCK_MODEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *database_principal = nullptr;
    TSqlParser::ExpressionContext *resource_name = nullptr;
    TSqlParser::ExpressionContext *lock_owner = nullptr;
    antlr4::tree::TerminalNode *APPLOCK_MODE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CURRENT_DATEContext : public Built_in_functionsContext {
  public:
    CURRENT_DATEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GETDATEContext : public Built_in_functionsContext {
  public:
    GETDATEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *GETDATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CERT_IDContext : public Built_in_functionsContext {
  public:
    CERT_IDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *cert_name = nullptr;
    antlr4::tree::TerminalNode *CERT_ID();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ATANContext : public Built_in_functionsContext {
  public:
    ATANContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CONNECTIONPROPERTYContext : public Built_in_functionsContext {
  public:
    CONNECTIONPROPERTYContext(Built_in_functionsContext *ctx);

    antlr4::Token *property_label = nullptr;
    antlr4::tree::TerminalNode *CONNECTIONPROPERTY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ERROR_NUMBERContext : public Built_in_functionsContext {
  public:
    ERROR_NUMBERContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ERROR_NUMBER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ERROR_LINEContext : public Built_in_functionsContext {
  public:
    ERROR_LINEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ERROR_LINE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CURRENT_TIMESTAMPContext : public Built_in_functionsContext {
  public:
    CURRENT_TIMESTAMPContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CONCATContext : public Built_in_functionsContext {
  public:
    CONCATContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *string_value_1 = nullptr;
    TSqlParser::ExpressionContext *string_value_2 = nullptr;
    TSqlParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> string_value_n;
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JSON_ARRAYContext : public Built_in_functionsContext {
  public:
    JSON_ARRAYContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *JSON_ARRAY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Expression_list_Context *expression_list_();
    Json_null_clauseContext *json_null_clause();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ROUNDContext : public Built_in_functionsContext {
  public:
    ROUNDContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *numeric_expression = nullptr;
    TSqlParser::ExpressionContext *length = nullptr;
    TSqlParser::ExpressionContext *function = nullptr;
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATALENGTHContext : public Built_in_functionsContext {
  public:
    DATALENGTHContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *DATALENGTH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HOST_NAMEContext : public Built_in_functionsContext {
  public:
    HOST_NAMEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *HOST_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATABASEPROPERTYEXContext : public Built_in_functionsContext {
  public:
    DATABASEPROPERTYEXContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *database = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *DATABASEPROPERTYEX();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ORIGINAL_DB_NAMEContext : public Built_in_functionsContext {
  public:
    ORIGINAL_DB_NAMEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *ORIGINAL_DB_NAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FILEPROPERTYEXContext : public Built_in_functionsContext {
  public:
    FILEPROPERTYEXContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *name = nullptr;
    TSqlParser::ExpressionContext *property_label = nullptr;
    antlr4::tree::TerminalNode *FILEPROPERTYEX();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RTRIMContext : public Built_in_functionsContext {
  public:
    RTRIMContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *character_expression = nullptr;
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JSON_OBJECTContext : public Built_in_functionsContext {
  public:
    JSON_OBJECTContext(Built_in_functionsContext *ctx);

    TSqlParser::Json_key_valueContext *key_value = nullptr;
    antlr4::tree::TerminalNode *JSON_OBJECT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Json_null_clauseContext *json_null_clause();
    std::vector<Json_key_valueContext *> json_key_value();
    Json_key_valueContext* json_key_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  XACT_STATEContext : public Built_in_functionsContext {
  public:
    XACT_STATEContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *XACT_STATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FORMATMESSAGEContext : public Built_in_functionsContext {
  public:
    FORMATMESSAGEContext(Built_in_functionsContext *ctx);

    antlr4::Token *msg_number = nullptr;
    antlr4::Token *msg_string = nullptr;
    antlr4::Token *msg_variable = nullptr;
    antlr4::tree::TerminalNode *FORMATMESSAGE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LOCAL_ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATEDIFF_BIGContext : public Built_in_functionsContext {
  public:
    DATEDIFF_BIGContext(Built_in_functionsContext *ctx);

    TSqlParser::Dateparts_12Context *datepart = nullptr;
    TSqlParser::ExpressionContext *startdate = nullptr;
    TSqlParser::ExpressionContext *enddate = nullptr;
    antlr4::tree::TerminalNode *DATEDIFF_BIG();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Dateparts_12Context *dateparts_12();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  USERContext : public Built_in_functionsContext {
  public:
    USERContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *USER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DEGREESContext : public Built_in_functionsContext {
  public:
    DEGREESContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *numeric_expression = nullptr;
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LENContext : public Built_in_functionsContext {
  public:
    LENContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *string_expression = nullptr;
    antlr4::tree::TerminalNode *LEN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TRANSLATEContext : public Built_in_functionsContext {
  public:
    TRANSLATEContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *inputString = nullptr;
    TSqlParser::ExpressionContext *characters = nullptr;
    TSqlParser::ExpressionContext *translations = nullptr;
    antlr4::tree::TerminalNode *TRANSLATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SWITCHOFFSETContext : public Built_in_functionsContext {
  public:
    SWITCHOFFSETContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *datetimeoffset_expression = nullptr;
    TSqlParser::ExpressionContext *timezoneoffset_expression = nullptr;
    antlr4::tree::TerminalNode *SWITCHOFFSET();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PIContext : public Built_in_functionsContext {
  public:
    PIContext(Built_in_functionsContext *ctx);

    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DATE_BUCKETContext : public Built_in_functionsContext {
  public:
    DATE_BUCKETContext(Built_in_functionsContext *ctx);

    TSqlParser::Dateparts_9Context *datepart = nullptr;
    TSqlParser::ExpressionContext *number = nullptr;
    TSqlParser::ExpressionContext *date = nullptr;
    TSqlParser::ExpressionContext *origin = nullptr;
    antlr4::tree::TerminalNode *DATE_BUCKET();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Dateparts_9Context *dateparts_9();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EXPContext : public Built_in_functionsContext {
  public:
    EXPContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *float_expression = nullptr;
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  STRINGAGGContext : public Built_in_functionsContext {
  public:
    STRINGAGGContext(Built_in_functionsContext *ctx);

    TSqlParser::ExpressionContext *expr = nullptr;
    TSqlParser::ExpressionContext *separator = nullptr;
    antlr4::tree::TerminalNode *STRING_AGG();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *GROUP();
    Order_by_clauseContext *order_by_clause();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Built_in_functionsContext* built_in_functions();

  class  Xml_data_type_methodsContext : public antlr4::ParserRuleContext {
  public:
    Xml_data_type_methodsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_methodContext *value_method();
    Query_methodContext *query_method();
    Exist_methodContext *exist_method();
    Modify_methodContext *modify_method();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_data_type_methodsContext* xml_data_type_methods();

  class  Dateparts_9Context : public antlr4::ParserRuleContext {
  public:
    Dateparts_9Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEAR_ABBR();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUARTER_ABBR();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTH_ABBR();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAY_ABBR();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WEEK_ABBR();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOUR_ABBR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTE_ABBR();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECOND_ABBR();
    antlr4::tree::TerminalNode *MILLISECOND();
    antlr4::tree::TerminalNode *MILLISECOND_ABBR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dateparts_9Context* dateparts_9();

  class  Dateparts_12Context : public antlr4::ParserRuleContext {
  public:
    Dateparts_12Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dateparts_9Context *dateparts_9();
    antlr4::tree::TerminalNode *DAYOFYEAR();
    antlr4::tree::TerminalNode *DAYOFYEAR_ABBR();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MICROSECOND_ABBR();
    antlr4::tree::TerminalNode *NANOSECOND();
    antlr4::tree::TerminalNode *NANOSECOND_ABBR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dateparts_12Context* dateparts_12();

  class  Dateparts_15Context : public antlr4::ParserRuleContext {
  public:
    Dateparts_15Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dateparts_12Context *dateparts_12();
    antlr4::tree::TerminalNode *WEEKDAY();
    antlr4::tree::TerminalNode *WEEKDAY_ABBR();
    antlr4::tree::TerminalNode *TZOFFSET();
    antlr4::tree::TerminalNode *TZOFFSET_ABBR();
    antlr4::tree::TerminalNode *ISO_WEEK();
    antlr4::tree::TerminalNode *ISO_WEEK_ABBR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dateparts_15Context* dateparts_15();

  class  Dateparts_datetruncContext : public antlr4::ParserRuleContext {
  public:
    Dateparts_datetruncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dateparts_9Context *dateparts_9();
    antlr4::tree::TerminalNode *DAYOFYEAR();
    antlr4::tree::TerminalNode *DAYOFYEAR_ABBR();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MICROSECOND_ABBR();
    antlr4::tree::TerminalNode *ISO_WEEK();
    antlr4::tree::TerminalNode *ISO_WEEK_ABBR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dateparts_datetruncContext* dateparts_datetrunc();

  class  Value_methodContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *loc_id = nullptr;
    TSqlParser::Full_column_nameContext *value_id = nullptr;
    antlr4::Token *eventdata = nullptr;
    TSqlParser::Query_methodContext *query = nullptr;
    TSqlParser::Value_callContext *call = nullptr;
    Value_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    Value_callContext *value_call();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Full_column_nameContext *full_column_name();
    antlr4::tree::TerminalNode *EVENTDATA();
    Query_methodContext *query_method();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_methodContext* value_method();

  class  Value_callContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *xquery = nullptr;
    antlr4::Token *sqltype = nullptr;
    Value_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VALUE_SQUARE_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_callContext* value_call();

  class  Query_methodContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *loc_id = nullptr;
    TSqlParser::Full_column_nameContext *value_id = nullptr;
    TSqlParser::Query_callContext *call = nullptr;
    Query_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    Query_callContext *query_call();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Full_column_nameContext *full_column_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_methodContext* query_method();

  class  Query_callContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *xquery = nullptr;
    Query_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUERY_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_callContext* query_call();

  class  Exist_methodContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *loc_id = nullptr;
    TSqlParser::Full_column_nameContext *value_id = nullptr;
    TSqlParser::Exist_callContext *call = nullptr;
    Exist_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    Exist_callContext *exist_call();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Full_column_nameContext *full_column_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exist_methodContext* exist_method();

  class  Exist_callContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *xquery = nullptr;
    Exist_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *EXIST();
    antlr4::tree::TerminalNode *EXIST_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exist_callContext* exist_call();

  class  Modify_methodContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *loc_id = nullptr;
    TSqlParser::Full_column_nameContext *value_id = nullptr;
    TSqlParser::Modify_callContext *call = nullptr;
    Modify_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    Modify_callContext *modify_call();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Full_column_nameContext *full_column_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modify_methodContext* modify_method();

  class  Modify_callContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *xml_dml = nullptr;
    Modify_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *MODIFY_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modify_callContext* modify_call();

  class  Hierarchyid_callContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::ExpressionContext *n = nullptr;
    TSqlParser::ExpressionContext *child1 = nullptr;
    TSqlParser::ExpressionContext *child2 = nullptr;
    TSqlParser::ExpressionContext *parent_ = nullptr;
    TSqlParser::ExpressionContext *oldroot = nullptr;
    TSqlParser::ExpressionContext *newroot = nullptr;
    Hierarchyid_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GETANCESTOR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *GETDESCENDANT();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *GETLEVEL();
    antlr4::tree::TerminalNode *ISDESCENDANTOF();
    antlr4::tree::TerminalNode *GETREPARENTEDVALUE();
    antlr4::tree::TerminalNode *TOSTRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchyid_callContext* hierarchyid_call();

  class  Hierarchyid_static_methodContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::ExpressionContext *input_label = nullptr;
    Hierarchyid_static_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HIERARCHYID();
    antlr4::tree::TerminalNode *DOUBLE_COLON();
    antlr4::tree::TerminalNode *GETROOT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *PARSE();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchyid_static_methodContext* hierarchyid_static_method();

  class  Nodes_methodContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *loc_id = nullptr;
    TSqlParser::Full_column_nameContext *value_id = nullptr;
    antlr4::Token *xquery = nullptr;
    Nodes_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *NODES();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *STRING();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *LOCAL_ID();
    Full_column_nameContext *full_column_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nodes_methodContext* nodes_method();

  class  Switch_sectionContext : public antlr4::ParserRuleContext {
  public:
    Switch_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *THEN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_sectionContext* switch_section();

  class  Switch_search_condition_sectionContext : public antlr4::ParserRuleContext {
  public:
    Switch_search_condition_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *THEN();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_search_condition_sectionContext* switch_search_condition_section();

  class  As_column_aliasContext : public antlr4::ParserRuleContext {
  public:
    As_column_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_aliasContext *column_alias();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_column_aliasContext* as_column_alias();

  class  As_table_aliasContext : public antlr4::ParserRuleContext {
  public:
    As_table_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_aliasContext *table_alias();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_table_aliasContext* as_table_alias();

  class  Table_aliasContext : public antlr4::ParserRuleContext {
  public:
    Table_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_aliasContext* table_alias();

  class  With_table_hintsContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Table_hintContext *table_hintContext = nullptr;
    std::vector<Table_hintContext *> hint;
    With_table_hintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Table_hintContext *> table_hint();
    Table_hintContext* table_hint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_table_hintsContext* with_table_hints();

  class  Deprecated_table_hintContext : public antlr4::ParserRuleContext {
  public:
    Deprecated_table_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    Table_hintContext *table_hint();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deprecated_table_hintContext* deprecated_table_hint();

  class  Sybase_legacy_hintsContext : public antlr4::ParserRuleContext {
  public:
    Sybase_legacy_hintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sybase_legacy_hintContext *> sybase_legacy_hint();
    Sybase_legacy_hintContext* sybase_legacy_hint(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sybase_legacy_hintsContext* sybase_legacy_hints();

  class  Sybase_legacy_hintContext : public antlr4::ParserRuleContext {
  public:
    Sybase_legacy_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOLDLOCK();
    antlr4::tree::TerminalNode *NOHOLDLOCK();
    antlr4::tree::TerminalNode *READPAST();
    antlr4::tree::TerminalNode *SHARED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sybase_legacy_hintContext* sybase_legacy_hint();

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
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FORCESEEK();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *FORCESCAN();
    antlr4::tree::TerminalNode *HOLDLOCK();
    antlr4::tree::TerminalNode *NOLOCK();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *PAGLOCK();
    antlr4::tree::TerminalNode *READCOMMITTED();
    antlr4::tree::TerminalNode *READCOMMITTEDLOCK();
    antlr4::tree::TerminalNode *READPAST();
    antlr4::tree::TerminalNode *READUNCOMMITTED();
    antlr4::tree::TerminalNode *REPEATABLEREAD();
    antlr4::tree::TerminalNode *ROWLOCK();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SPATIAL_WINDOW_MAX_CELLS();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *TABLOCK();
    antlr4::tree::TerminalNode *TABLOCKX();
    antlr4::tree::TerminalNode *UPDLOCK();
    antlr4::tree::TerminalNode *XLOCK();
    antlr4::tree::TerminalNode *KEEPIDENTITY();
    antlr4::tree::TerminalNode *KEEPDEFAULTS();
    antlr4::tree::TerminalNode *IGNORE_CONSTRAINTS();
    antlr4::tree::TerminalNode *IGNORE_TRIGGERS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_hintContext* table_hint();

  class  Index_valueContext : public antlr4::ParserRuleContext {
  public:
    Index_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_valueContext* index_value();

  class  Column_alias_listContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Column_aliasContext *column_aliasContext = nullptr;
    std::vector<Column_aliasContext *> alias;
    Column_alias_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Column_aliasContext *> column_alias();
    Column_aliasContext* column_alias(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_alias_listContext* column_alias_list();

  class  Column_aliasContext : public antlr4::ParserRuleContext {
  public:
    Column_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_aliasContext* column_alias();

  class  Table_value_constructorContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Expression_list_Context *expression_list_Context = nullptr;
    std::vector<Expression_list_Context *> exps;
    Table_value_constructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<Expression_list_Context *> expression_list_();
    Expression_list_Context* expression_list_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_value_constructorContext* table_value_constructor();

  class  Expression_list_Context : public antlr4::ParserRuleContext {
  public:
    TSqlParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> exp;
    Expression_list_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_list_Context* expression_list_();

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
    antlr4::tree::TerminalNode *NTILE();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ranking_windowed_functionContext* ranking_windowed_function();

  class  Aggregate_windowed_functionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *agg_func = nullptr;
    antlr4::Token *cnt = nullptr;
    Aggregate_windowed_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    All_distinct_expressionContext *all_distinct_expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *STDEV();
    antlr4::tree::TerminalNode *STDEVP();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *VARP();
    Over_clauseContext *over_clause();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COUNT_BIG();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *CHECKSUM_AGG();
    antlr4::tree::TerminalNode *GROUPING();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *GROUPING_ID();
    Expression_list_Context *expression_list_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregate_windowed_functionContext* aggregate_windowed_function();

  class  Analytic_windowed_functionContext : public antlr4::ParserRuleContext {
  public:
    Analytic_windowed_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    Over_clauseContext *over_clause();
    antlr4::tree::TerminalNode *FIRST_VALUE();
    antlr4::tree::TerminalNode *LAST_VALUE();
    antlr4::tree::TerminalNode *LAG();
    antlr4::tree::TerminalNode *LEAD();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *OVER();
    Order_by_clauseContext *order_by_clause();
    antlr4::tree::TerminalNode *CUME_DIST();
    antlr4::tree::TerminalNode *PERCENT_RANK();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *BY();
    Expression_list_Context *expression_list_();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *PERCENTILE_CONT();
    antlr4::tree::TerminalNode *PERCENTILE_DISC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analytic_windowed_functionContext* analytic_windowed_function();

  class  All_distinct_expressionContext : public antlr4::ParserRuleContext {
  public:
    All_distinct_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  All_distinct_expressionContext* all_distinct_expression();

  class  Over_clauseContext : public antlr4::ParserRuleContext {
  public:
    Over_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *BY();
    Expression_list_Context *expression_list_();
    Order_by_clauseContext *order_by_clause();
    Row_or_range_clauseContext *row_or_range_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Over_clauseContext* over_clause();

  class  Row_or_range_clauseContext : public antlr4::ParserRuleContext {
  public:
    Row_or_range_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_frame_extentContext *window_frame_extent();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *RANGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_extentContext* window_frame_extent();

  class  Window_frame_boundContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_boundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_frame_precedingContext *window_frame_preceding();
    Window_frame_followingContext *window_frame_following();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_precedingContext* window_frame_preceding();

  class  Window_frame_followingContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_followingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Id_Context *id_();
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_filestream_optionContext* database_filestream_option();

  class  Database_file_specContext : public antlr4::ParserRuleContext {
  public:
    Database_file_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_groupContext *file_group();
    File_specContext *file_spec();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_file_specContext* database_file_spec();

  class  File_groupContext : public antlr4::ParserRuleContext {
  public:
    File_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILEGROUP();
    Id_Context *id_();
    std::vector<File_specContext *> file_spec();
    File_specContext* file_spec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONTAINS();
    antlr4::tree::TerminalNode* CONTAINS(size_t i);
    antlr4::tree::TerminalNode *FILESTREAM();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *MEMORY_OPTIMIZED_DATA();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_groupContext* file_group();

  class  File_specContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *file_label = nullptr;
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
    Id_Context *id_();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SIZE();
    std::vector<File_sizeContext *> file_size();
    File_sizeContext* file_size(size_t i);
    antlr4::tree::TerminalNode *MAXSIZE();
    antlr4::tree::TerminalNode *FILEGROWTH();
    antlr4::tree::TerminalNode *UNLIMITED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_specContext* file_spec();

  class  Entity_nameContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *server = nullptr;
    TSqlParser::Id_Context *database = nullptr;
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *table = nullptr;
    Entity_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_nameContext* entity_name();

  class  Entity_name_for_azure_dwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *object_name = nullptr;
    Entity_name_for_azure_dwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_name_for_azure_dwContext* entity_name_for_azure_dw();

  class  Entity_name_for_parallel_dwContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema_database = nullptr;
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *object_name = nullptr;
    Entity_name_for_parallel_dwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_name_for_parallel_dwContext* entity_name_for_parallel_dw();

  class  Full_table_nameContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *linkedServer = nullptr;
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *server = nullptr;
    TSqlParser::Id_Context *database = nullptr;
    TSqlParser::Id_Context *table = nullptr;
    Full_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_table_nameContext* full_table_name();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database = nullptr;
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *table = nullptr;
    antlr4::Token *blocking_hierarchy = nullptr;
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *BLOCKING_HIERARCHY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_nameContext* table_name();

  class  Simple_nameContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *name = nullptr;
    Simple_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_nameContext* simple_name();

  class  Func_proc_name_schemaContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *procedure = nullptr;
    Func_proc_name_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_proc_name_schemaContext* func_proc_name_schema();

  class  Func_proc_name_database_schemaContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database = nullptr;
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *procedure = nullptr;
    Func_proc_name_database_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    Func_proc_name_schemaContext *func_proc_name_schema();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_proc_name_database_schemaContext* func_proc_name_database_schema();

  class  Func_proc_name_server_database_schemaContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *server = nullptr;
    TSqlParser::Id_Context *database = nullptr;
    TSqlParser::Id_Context *schema = nullptr;
    TSqlParser::Id_Context *procedure = nullptr;
    Func_proc_name_server_database_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    Func_proc_name_database_schemaContext *func_proc_name_database_schema();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_proc_name_server_database_schemaContext* func_proc_name_server_database_schema();

  class  Ddl_objectContext : public antlr4::ParserRuleContext {
  public:
    Ddl_objectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Full_table_nameContext *full_table_name();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ddl_objectContext* ddl_object();

  class  Full_column_nameContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *column_name = nullptr;
    Full_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *DELETED();
    antlr4::tree::TerminalNode *INSERTED();
    Full_table_nameContext *full_table_name();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *ROWGUID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_column_nameContext* full_column_name();

  class  Column_name_list_with_orderContext : public antlr4::ParserRuleContext {
  public:
    Column_name_list_with_orderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASC();
    antlr4::tree::TerminalNode* ASC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESC();
    antlr4::tree::TerminalNode* DESC(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_name_list_with_orderContext* column_name_list_with_order();

  class  Insert_column_name_listContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Insert_column_idContext *insert_column_idContext = nullptr;
    std::vector<Insert_column_idContext *> col;
    Insert_column_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Insert_column_idContext *> insert_column_id();
    Insert_column_idContext* insert_column_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_column_name_listContext* insert_column_name_list();

  class  Insert_column_idContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *id_Context = nullptr;
    std::vector<Id_Context *> ignore;
    Insert_column_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_column_idContext* insert_column_id();

  class  Column_name_listContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *id_Context = nullptr;
    std::vector<Id_Context *> col;
    Column_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_name_listContext* column_name_list();

  class  Cursor_nameContext : public antlr4::ParserRuleContext {
  public:
    Cursor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *LOCAL_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_nameContext* cursor_name();

  class  On_offContext : public antlr4::ParserRuleContext {
  public:
    On_offContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_offContext* on_off();

  class  ClusteredContext : public antlr4::ParserRuleContext {
  public:
    ClusteredContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *NONCLUSTERED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClusteredContext* clustered();

  class  Null_notnullContext : public antlr4::ParserRuleContext {
  public:
    Null_notnullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_notnullContext* null_notnull();

  class  Scalar_function_nameContext : public antlr4::ParserRuleContext {
  public:
    Scalar_function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_proc_name_server_database_schemaContext *func_proc_name_server_database_schema();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *BINARY_CHECKSUM();
    antlr4::tree::TerminalNode *CHECKSUM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scalar_function_nameContext* scalar_function_name();

  class  Begin_conversation_timerContext : public antlr4::ParserRuleContext {
  public:
    Begin_conversation_timerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *CONVERSATION();
    antlr4::tree::TerminalNode *TIMER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *EQUAL();
    TimeContext *time();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Begin_conversation_timerContext* begin_conversation_timer();

  class  Begin_conversation_dialogContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dialog_handle = nullptr;
    TSqlParser::Service_nameContext *initiator_service_name = nullptr;
    TSqlParser::Service_nameContext *target_service_name = nullptr;
    antlr4::Token *service_broker_guid = nullptr;
    Begin_conversation_dialogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *DIALOG();
    antlr4::tree::TerminalNode *FROM();
    std::vector<antlr4::tree::TerminalNode *> SERVICE();
    antlr4::tree::TerminalNode* SERVICE(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *CONTRACT();
    Contract_nameContext *contract_name();
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    std::vector<Service_nameContext *> service_name();
    Service_nameContext* service_name(size_t i);
    antlr4::tree::TerminalNode *CONVERSATION();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *ENCRYPTION();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *RELATED_CONVERSATION();
    antlr4::tree::TerminalNode *RELATED_CONVERSATION_GROUP();
    antlr4::tree::TerminalNode *DECIMAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Begin_conversation_dialogContext* begin_conversation_dialog();

  class  Contract_nameContext : public antlr4::ParserRuleContext {
  public:
    Contract_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Contract_nameContext* contract_name();

  class  Service_nameContext : public antlr4::ParserRuleContext {
  public:
    Service_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Service_nameContext* service_name();

  class  End_conversationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *conversation_handle = nullptr;
    antlr4::Token *faliure_code = nullptr;
    antlr4::Token *failure_text = nullptr;
    End_conversationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *CONVERSATION();
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ERROR();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *DESCRIPTION();
    antlr4::tree::TerminalNode *CLEANUP();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_conversationContext* end_conversation();

  class  Waitfor_conversationContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::TimeContext *timeout = nullptr;
    Waitfor_conversationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    Get_conversationContext *get_conversation();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WAITFOR();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *SEMI();
    TimeContext *time();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Waitfor_conversationContext* waitfor_conversation();

  class  Get_conversationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *conversation_group_id = nullptr;
    TSqlParser::Queue_idContext *queue = nullptr;
    Get_conversationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *CONVERSATION();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *FROM();
    Queue_idContext *queue_id();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_conversationContext* get_conversation();

  class  Queue_idContext : public antlr4::ParserRuleContext {
  public:
    TSqlParser::Id_Context *database_name = nullptr;
    TSqlParser::Id_Context *schema_name = nullptr;
    TSqlParser::Id_Context *name = nullptr;
    Queue_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Queue_idContext* queue_id();

  class  Send_conversationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *conversation_handle = nullptr;
    TSqlParser::ExpressionContext *message_type_name = nullptr;
    antlr4::Token *message_body_expression = nullptr;
    Send_conversationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEND();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *CONVERSATION();
    antlr4::tree::TerminalNode *MESSAGE();
    antlr4::tree::TerminalNode *TYPE();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Send_conversationContext* send_conversation();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *scaled = nullptr;
    TSqlParser::Id_Context *ext_type = nullptr;
    antlr4::Token *scale = nullptr;
    antlr4::Token *prec = nullptr;
    antlr4::Token *seed = nullptr;
    antlr4::Token *inc = nullptr;
    antlr4::Token *double_prec = nullptr;
    TSqlParser::Id_Context *unscaled_type = nullptr;
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *BINARY_KEYWORD();
    antlr4::tree::TerminalNode *VARBINARY_KEYWORD();
    antlr4::tree::TerminalNode *SQUARE_BRACKET_ID();
    antlr4::tree::TerminalNode *COMMA();
    Id_Context *id_();
    std::vector<antlr4::tree::TerminalNode *> DECIMAL();
    antlr4::tree::TerminalNode* DECIMAL(size_t i);
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *PRECISION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_typeContext* data_type();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dollar = nullptr;
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *FLOAT();
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *PLUS();
    ParameterContext *parameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  Primitive_constantContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dollar = nullptr;
    Primitive_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();
    ParameterContext *parameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primitive_constantContext* primitive_constant();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABORT();
    antlr4::tree::TerminalNode *ABSOLUTE();
    antlr4::tree::TerminalNode *ACCENT_SENSITIVITY();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ACTIVATION();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ADDRESS();
    antlr4::tree::TerminalNode *AES_128();
    antlr4::tree::TerminalNode *AES_192();
    antlr4::tree::TerminalNode *AES_256();
    antlr4::tree::TerminalNode *AFFINITY();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *ALL_CONSTRAINTS();
    antlr4::tree::TerminalNode *ALL_ERRORMSGS();
    antlr4::tree::TerminalNode *ALL_INDEXES();
    antlr4::tree::TerminalNode *ALL_LEVELS();
    antlr4::tree::TerminalNode *ALLOW_ENCRYPTED_VALUE_MODIFICATIONS();
    antlr4::tree::TerminalNode *ALLOW_PAGE_LOCKS();
    antlr4::tree::TerminalNode *ALLOW_ROW_LOCKS();
    antlr4::tree::TerminalNode *ALLOW_SNAPSHOT_ISOLATION();
    antlr4::tree::TerminalNode *ALLOWED();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *ANSI_DEFAULTS();
    antlr4::tree::TerminalNode *ANSI_NULL_DEFAULT();
    antlr4::tree::TerminalNode *ANSI_NULL_DFLT_OFF();
    antlr4::tree::TerminalNode *ANSI_NULL_DFLT_ON();
    antlr4::tree::TerminalNode *ANSI_NULLS();
    antlr4::tree::TerminalNode *ANSI_PADDING();
    antlr4::tree::TerminalNode *ANSI_WARNINGS();
    antlr4::tree::TerminalNode *APP_NAME();
    antlr4::tree::TerminalNode *APPLICATION_LOG();
    antlr4::tree::TerminalNode *APPLOCK_MODE();
    antlr4::tree::TerminalNode *APPLOCK_TEST();
    antlr4::tree::TerminalNode *APPLY();
    antlr4::tree::TerminalNode *ARITHABORT();
    antlr4::tree::TerminalNode *ARITHIGNORE();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *ASSEMBLY();
    antlr4::tree::TerminalNode *ASSEMBLYPROPERTY();
    antlr4::tree::TerminalNode *AT_KEYWORD();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *AUDIT_GUID();
    antlr4::tree::TerminalNode *AUTO();
    antlr4::tree::TerminalNode *AUTO_CLEANUP();
    antlr4::tree::TerminalNode *AUTO_CLOSE();
    antlr4::tree::TerminalNode *AUTO_CREATE_STATISTICS();
    antlr4::tree::TerminalNode *AUTO_DROP();
    antlr4::tree::TerminalNode *AUTO_SHRINK();
    antlr4::tree::TerminalNode *AUTO_UPDATE_STATISTICS();
    antlr4::tree::TerminalNode *AUTO_UPDATE_STATISTICS_ASYNC();
    antlr4::tree::TerminalNode *AUTOGROW_ALL_FILES();
    antlr4::tree::TerminalNode *AUTOGROW_SINGLE_FILE();
    antlr4::tree::TerminalNode *AVAILABILITY();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *BACKUP_CLONEDB();
    antlr4::tree::TerminalNode *BACKUP_PRIORITY();
    antlr4::tree::TerminalNode *BASE64();
    antlr4::tree::TerminalNode *BEGIN_DIALOG();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *BINARY_KEYWORD();
    antlr4::tree::TerminalNode *BINARY_CHECKSUM();
    antlr4::tree::TerminalNode *BINDING();
    antlr4::tree::TerminalNode *BLOB_STORAGE();
    antlr4::tree::TerminalNode *BROKER();
    antlr4::tree::TerminalNode *BROKER_INSTANCE();
    antlr4::tree::TerminalNode *BULK_LOGGED();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *CAP_CPU_PERCENT();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *TRY_CAST();
    antlr4::tree::TerminalNode *CATALOG();
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *CERT_ID();
    antlr4::tree::TerminalNode *CERTENCODED();
    antlr4::tree::TerminalNode *CERTPRIVATEKEY();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *CHANGE_RETENTION();
    antlr4::tree::TerminalNode *CHANGE_TRACKING();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHARINDEX();
    antlr4::tree::TerminalNode *CHECKALLOC();
    antlr4::tree::TerminalNode *CHECKCATALOG();
    antlr4::tree::TerminalNode *CHECKCONSTRAINTS();
    antlr4::tree::TerminalNode *CHECKDB();
    antlr4::tree::TerminalNode *CHECKFILEGROUP();
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *CHECKSUM_AGG();
    antlr4::tree::TerminalNode *CHECKTABLE();
    antlr4::tree::TerminalNode *CLEANTABLE();
    antlr4::tree::TerminalNode *CLEANUP();
    antlr4::tree::TerminalNode *CLONEDATABASE();
    antlr4::tree::TerminalNode *COL_LENGTH();
    antlr4::tree::TerminalNode *COL_NAME();
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *COLUMN_ENCRYPTION_KEY();
    antlr4::tree::TerminalNode *COLUMN_MASTER_KEY();
    antlr4::tree::TerminalNode *COLUMNPROPERTY();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COLUMNSTORE();
    antlr4::tree::TerminalNode *COLUMNSTORE_ARCHIVE();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *COMPATIBILITY_LEVEL();
    antlr4::tree::TerminalNode *COMPRESS_ALL_ROW_GROUPS();
    antlr4::tree::TerminalNode *COMPRESSION_DELAY();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCAT_WS();
    antlr4::tree::TerminalNode *CONCAT_NULL_YIELDS_NULL();
    antlr4::tree::TerminalNode *CONTENT();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *COOKIE();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COUNT_BIG();
    antlr4::tree::TerminalNode *COUNTER();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *CREATE_NEW();
    antlr4::tree::TerminalNode *CREATION_DISPOSITION();
    antlr4::tree::TerminalNode *CREDENTIAL();
    antlr4::tree::TerminalNode *CRYPTOGRAPHIC();
    antlr4::tree::TerminalNode *CUME_DIST();
    antlr4::tree::TerminalNode *CURSOR_CLOSE_ON_COMMIT();
    antlr4::tree::TerminalNode *CURSOR_DEFAULT();
    antlr4::tree::TerminalNode *CURSOR_STATUS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATA_PURITY();
    antlr4::tree::TerminalNode *DATABASE_PRINCIPAL_ID();
    antlr4::tree::TerminalNode *DATABASEPROPERTYEX();
    antlr4::tree::TerminalNode *DATALENGTH();
    antlr4::tree::TerminalNode *DATE_CORRELATION_OPTIMIZATION();
    antlr4::tree::TerminalNode *DATEADD();
    antlr4::tree::TerminalNode *DATEDIFF();
    antlr4::tree::TerminalNode *DATENAME();
    antlr4::tree::TerminalNode *DATEPART();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *DB_CHAINING();
    antlr4::tree::TerminalNode *DB_FAILOVER();
    antlr4::tree::TerminalNode *DB_ID();
    antlr4::tree::TerminalNode *DB_NAME();
    antlr4::tree::TerminalNode *DBCC();
    antlr4::tree::TerminalNode *DBREINDEX();
    antlr4::tree::TerminalNode *DECRYPTION();
    antlr4::tree::TerminalNode *DEFAULT_DOUBLE_QUOTE();
    antlr4::tree::TerminalNode *DEFAULT_FULLTEXT_LANGUAGE();
    antlr4::tree::TerminalNode *DEFAULT_LANGUAGE();
    antlr4::tree::TerminalNode *DEFINITION();
    antlr4::tree::TerminalNode *DELAY();
    antlr4::tree::TerminalNode *DELAYED_DURABILITY();
    antlr4::tree::TerminalNode *DELETED();
    antlr4::tree::TerminalNode *DENSE_RANK();
    antlr4::tree::TerminalNode *DEPENDENTS();
    antlr4::tree::TerminalNode *DES();
    antlr4::tree::TerminalNode *DESCRIPTION();
    antlr4::tree::TerminalNode *DESX();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *DHCP();
    antlr4::tree::TerminalNode *DIALOG();
    antlr4::tree::TerminalNode *DIFFERENCE();
    antlr4::tree::TerminalNode *DIRECTORY_NAME();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DISABLE_BROKER();
    antlr4::tree::TerminalNode *DISABLED();
    antlr4::tree::TerminalNode *DOCUMENT();
    antlr4::tree::TerminalNode *DROP_EXISTING();
    antlr4::tree::TerminalNode *DROPCLEANBUFFERS();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *ELEMENTS();
    antlr4::tree::TerminalNode *EMERGENCY();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ENABLE_BROKER();
    antlr4::tree::TerminalNode *ENCRYPTED();
    antlr4::tree::TerminalNode *ENCRYPTED_VALUE();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *ENCRYPTION_TYPE();
    antlr4::tree::TerminalNode *ENDPOINT_URL();
    antlr4::tree::TerminalNode *ERROR_BROKER_CONVERSATIONS();
    antlr4::tree::TerminalNode *ESTIMATEONLY();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXECUTABLE();
    antlr4::tree::TerminalNode *EXIST();
    antlr4::tree::TerminalNode *EXIST_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *EXPAND();
    antlr4::tree::TerminalNode *EXPIRY_DATE();
    antlr4::tree::TerminalNode *EXPLICIT();
    antlr4::tree::TerminalNode *EXTENDED_LOGICAL_CHECKS();
    antlr4::tree::TerminalNode *FAIL_OPERATION();
    antlr4::tree::TerminalNode *FAILOVER_MODE();
    antlr4::tree::TerminalNode *FAILURE();
    antlr4::tree::TerminalNode *FAILURE_CONDITION_LEVEL();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *FAST_FORWARD();
    antlr4::tree::TerminalNode *FILE_ID();
    antlr4::tree::TerminalNode *FILE_IDEX();
    antlr4::tree::TerminalNode *FILE_NAME();
    antlr4::tree::TerminalNode *FILEGROUP();
    antlr4::tree::TerminalNode *FILEGROUP_ID();
    antlr4::tree::TerminalNode *FILEGROUP_NAME();
    antlr4::tree::TerminalNode *FILEGROUPPROPERTY();
    antlr4::tree::TerminalNode *FILEGROWTH();
    antlr4::tree::TerminalNode *FILENAME();
    antlr4::tree::TerminalNode *FILEPATH();
    antlr4::tree::TerminalNode *FILEPROPERTY();
    antlr4::tree::TerminalNode *FILEPROPERTYEX();
    antlr4::tree::TerminalNode *FILESTREAM();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FIRST_VALUE();
    antlr4::tree::TerminalNode *FMTONLY();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *FORCE_FAILOVER_ALLOW_DATA_LOSS();
    antlr4::tree::TerminalNode *FORCED();
    antlr4::tree::TerminalNode *FORCEPLAN();
    antlr4::tree::TerminalNode *FORCESCAN();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FORWARD_ONLY();
    antlr4::tree::TerminalNode *FREE();
    antlr4::tree::TerminalNode *FULLSCAN();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *FULLTEXTCATALOGPROPERTY();
    antlr4::tree::TerminalNode *FULLTEXTSERVICEPROPERTY();
    antlr4::tree::TerminalNode *GB();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *GETDATE();
    antlr4::tree::TerminalNode *GETUTCDATE();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *GREATEST();
    antlr4::tree::TerminalNode *GROUP_MAX_REQUESTS();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *GROUPING_ID();
    antlr4::tree::TerminalNode *HADR();
    antlr4::tree::TerminalNode *HAS_DBACCESS();
    antlr4::tree::TerminalNode *HAS_PERMS_BY_NAME();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HEALTH_CHECK_TIMEOUT();
    antlr4::tree::TerminalNode *HIDDEN_KEYWORD();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *HONOR_BROKER_PRIORITY();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *IDENT_CURRENT();
    antlr4::tree::TerminalNode *IDENT_INCR();
    antlr4::tree::TerminalNode *IDENT_SEED();
    antlr4::tree::TerminalNode *IDENTITY_VALUE();
    antlr4::tree::TerminalNode *IGNORE_CONSTRAINTS();
    antlr4::tree::TerminalNode *IGNORE_DUP_KEY();
    antlr4::tree::TerminalNode *IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX();
    antlr4::tree::TerminalNode *IGNORE_REPLICATED_TABLE_CACHE();
    antlr4::tree::TerminalNode *IGNORE_TRIGGERS();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *IMPERSONATE();
    antlr4::tree::TerminalNode *IMPLICIT_TRANSACTIONS();
    antlr4::tree::TerminalNode *IMPORTANCE();
    antlr4::tree::TerminalNode *INCLUDE_NULL_VALUES();
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *INDEX_COL();
    antlr4::tree::TerminalNode *INDEXKEY_PROPERTY();
    antlr4::tree::TerminalNode *INDEXPROPERTY();
    antlr4::tree::TerminalNode *INITIATOR();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *INSERTED();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *IP();
    antlr4::tree::TerminalNode *IS_MEMBER();
    antlr4::tree::TerminalNode *IS_ROLEMEMBER();
    antlr4::tree::TerminalNode *IS_SRVROLEMEMBER();
    antlr4::tree::TerminalNode *ISJSON();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *JOB();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *JSON_OBJECT();
    antlr4::tree::TerminalNode *JSON_ARRAY();
    antlr4::tree::TerminalNode *JSON_VALUE();
    antlr4::tree::TerminalNode *JSON_QUERY();
    antlr4::tree::TerminalNode *JSON_MODIFY();
    antlr4::tree::TerminalNode *JSON_PATH_EXISTS();
    antlr4::tree::TerminalNode *KB();
    antlr4::tree::TerminalNode *KEEP();
    antlr4::tree::TerminalNode *KEEPDEFAULTS();
    antlr4::tree::TerminalNode *KEEPFIXED();
    antlr4::tree::TerminalNode *KEEPIDENTITY();
    antlr4::tree::TerminalNode *KEY_SOURCE();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *KEYSET();
    antlr4::tree::TerminalNode *LAG();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LAST_VALUE();
    antlr4::tree::TerminalNode *LEAD();
    antlr4::tree::TerminalNode *LEAST();
    antlr4::tree::TerminalNode *LEN();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LISTENER();
    antlr4::tree::TerminalNode *LISTENER_URL();
    antlr4::tree::TerminalNode *LOB_COMPACTION();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCK_ESCALATION();
    antlr4::tree::TerminalNode *LOGIN();
    antlr4::tree::TerminalNode *LOGINPROPERTY();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *LOW();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *MANUAL();
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *MASKED();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MAX_CPU_PERCENT();
    antlr4::tree::TerminalNode *MAX_DOP();
    antlr4::tree::TerminalNode *MAX_FILES();
    antlr4::tree::TerminalNode *MAX_IOPS_PER_VOLUME();
    antlr4::tree::TerminalNode *MAX_MEMORY_PERCENT();
    antlr4::tree::TerminalNode *MAX_PROCESSES();
    antlr4::tree::TerminalNode *MAX_QUEUE_READERS();
    antlr4::tree::TerminalNode *MAX_ROLLOVER_FILES();
    antlr4::tree::TerminalNode *MAXDOP();
    antlr4::tree::TerminalNode *MAXRECURSION();
    antlr4::tree::TerminalNode *MAXSIZE();
    antlr4::tree::TerminalNode *MB();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *MEMORY_OPTIMIZED_DATA();
    antlr4::tree::TerminalNode *MESSAGE();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *MIN_ACTIVE_ROWVERSION();
    antlr4::tree::TerminalNode *MIN_CPU_PERCENT();
    antlr4::tree::TerminalNode *MIN_IOPS_PER_VOLUME();
    antlr4::tree::TerminalNode *MIN_MEMORY_PERCENT();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *MIRROR_ADDRESS();
    antlr4::tree::TerminalNode *MIXED_PAGE_ALLOCATION();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *MODIFY_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *MOVE();
    antlr4::tree::TerminalNode *MULTI_USER();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NESTED_TRIGGERS();
    antlr4::tree::TerminalNode *NEW_ACCOUNT();
    antlr4::tree::TerminalNode *NEW_BROKER();
    antlr4::tree::TerminalNode *NEW_PASSWORD();
    antlr4::tree::TerminalNode *NEWNAME();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NO_INFOMSGS();
    antlr4::tree::TerminalNode *NO_QUERYSTORE();
    antlr4::tree::TerminalNode *NO_STATISTICS();
    antlr4::tree::TerminalNode *NO_TRUNCATE();
    antlr4::tree::TerminalNode *NO_WAIT();
    antlr4::tree::TerminalNode *NOCOUNT();
    antlr4::tree::TerminalNode *NODES();
    antlr4::tree::TerminalNode *NOEXEC();
    antlr4::tree::TerminalNode *NOEXPAND();
    antlr4::tree::TerminalNode *NOINDEX();
    antlr4::tree::TerminalNode *NOLOCK();
    antlr4::tree::TerminalNode *NON_TRANSACTED_ACCESS();
    antlr4::tree::TerminalNode *NORECOMPUTE();
    antlr4::tree::TerminalNode *NORECOVERY();
    antlr4::tree::TerminalNode *NOTIFICATIONS();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *NTILE();
    antlr4::tree::TerminalNode *NULL_DOUBLE_QUOTE();
    antlr4::tree::TerminalNode *NUMANODE();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *NUMERIC_ROUNDABORT();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *OBJECT_DEFINITION();
    antlr4::tree::TerminalNode *OBJECT_ID();
    antlr4::tree::TerminalNode *OBJECT_NAME();
    antlr4::tree::TerminalNode *OBJECT_SCHEMA_NAME();
    antlr4::tree::TerminalNode *OBJECTPROPERTY();
    antlr4::tree::TerminalNode *OBJECTPROPERTYEX();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OLD_ACCOUNT();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN_EXISTING();
    antlr4::tree::TerminalNode *OPENJSON();
    antlr4::tree::TerminalNode *OPTIMISTIC();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *OPTIMIZE_FOR_SEQUENTIAL_KEY();
    antlr4::tree::TerminalNode *ORIGINAL_DB_NAME();
    antlr4::tree::TerminalNode *ORIGINAL_LOGIN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *OWNERSHIP();
    antlr4::tree::TerminalNode *PAD_INDEX();
    antlr4::tree::TerminalNode *PAGE_VERIFY();
    antlr4::tree::TerminalNode *PAGECOUNT();
    antlr4::tree::TerminalNode *PAGLOCK();
    antlr4::tree::TerminalNode *PARAMETERIZATION();
    antlr4::tree::TerminalNode *PARSENAME();
    antlr4::tree::TerminalNode *PARSEONLY();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PARTNER();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *PATINDEX();
    antlr4::tree::TerminalNode *PAUSE();
    antlr4::tree::TerminalNode *PDW_SHOWSPACEUSED();
    antlr4::tree::TerminalNode *PERCENT_RANK();
    antlr4::tree::TerminalNode *PERCENTILE_CONT();
    antlr4::tree::TerminalNode *PERCENTILE_DISC();
    antlr4::tree::TerminalNode *PERMISSIONS();
    antlr4::tree::TerminalNode *PERSIST_SAMPLE_PERCENT();
    antlr4::tree::TerminalNode *PHYSICAL_ONLY();
    antlr4::tree::TerminalNode *POISON_MESSAGE_HANDLING();
    antlr4::tree::TerminalNode *POOL();
    antlr4::tree::TerminalNode *PORT();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *PRIMARY_ROLE();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *PRIORITY();
    antlr4::tree::TerminalNode *PRIORITY_LEVEL();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PRIVATE_KEY();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCCACHE();
    antlr4::tree::TerminalNode *PROCEDURE_NAME();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *PROVIDER();
    antlr4::tree::TerminalNode *PROVIDER_KEY_NAME();
    antlr4::tree::TerminalNode *PWDCOMPARE();
    antlr4::tree::TerminalNode *PWDENCRYPT();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUERY_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *QUEUE_DELAY();
    antlr4::tree::TerminalNode *QUOTED_IDENTIFIER();
    antlr4::tree::TerminalNode *QUOTENAME();
    antlr4::tree::TerminalNode *RANDOMIZED();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RANK();
    antlr4::tree::TerminalNode *RC2();
    antlr4::tree::TerminalNode *RC4();
    antlr4::tree::TerminalNode *RC4_128();
    antlr4::tree::TerminalNode *READ_COMMITTED_SNAPSHOT();
    antlr4::tree::TerminalNode *READ_ONLY();
    antlr4::tree::TerminalNode *READ_ONLY_ROUTING_LIST();
    antlr4::tree::TerminalNode *READ_WRITE();
    antlr4::tree::TerminalNode *READCOMMITTED();
    antlr4::tree::TerminalNode *READCOMMITTEDLOCK();
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *READPAST();
    antlr4::tree::TerminalNode *READUNCOMMITTED();
    antlr4::tree::TerminalNode *READWRITE();
    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *RECEIVE();
    antlr4::tree::TerminalNode *RECOMPILE();
    antlr4::tree::TerminalNode *RECOVERY();
    antlr4::tree::TerminalNode *RECURSIVE_TRIGGERS();
    antlr4::tree::TerminalNode *RELATIVE();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *REMOTE_PROC_TRANSACTIONS();
    antlr4::tree::TerminalNode *REMOTE_SERVICE_NAME();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *REPAIR_ALLOW_DATA_LOSS();
    antlr4::tree::TerminalNode *REPAIR_FAST();
    antlr4::tree::TerminalNode *REPAIR_REBUILD();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *REPEATABLEREAD();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *REPLICA();
    antlr4::tree::TerminalNode *REPLICATE();
    antlr4::tree::TerminalNode *REQUEST_MAX_CPU_TIME_SEC();
    antlr4::tree::TerminalNode *REQUEST_MAX_MEMORY_GRANT_PERCENT();
    antlr4::tree::TerminalNode *REQUEST_MEMORY_GRANT_TIMEOUT_SEC();
    antlr4::tree::TerminalNode *REQUIRED_SYNCHRONIZED_SECONDARIES_TO_COMMIT();
    antlr4::tree::TerminalNode *RESAMPLE();
    antlr4::tree::TerminalNode *RESERVE_DISK_SPACE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *RESOURCE_MANAGER_LOCATION();
    antlr4::tree::TerminalNode *RESTRICTED_USER();
    antlr4::tree::TerminalNode *RESUMABLE();
    antlr4::tree::TerminalNode *RETENTION();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *ROBUST();
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *ROUTE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROW_NUMBER();
    antlr4::tree::TerminalNode *ROWGUID();
    antlr4::tree::TerminalNode *ROWLOCK();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *SCHEMA_ID();
    antlr4::tree::TerminalNode *SCHEMA_NAME();
    antlr4::tree::TerminalNode *SCHEMABINDING();
    antlr4::tree::TerminalNode *SCOPE_IDENTITY();
    antlr4::tree::TerminalNode *SCOPED();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *SCROLL_LOCKS();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *SECONDARY();
    antlr4::tree::TerminalNode *SECONDARY_ONLY();
    antlr4::tree::TerminalNode *SECONDARY_ROLE();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *SECRET();
    antlr4::tree::TerminalNode *SECURABLES();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SECURITY_LOG();
    antlr4::tree::TerminalNode *SEEDING_MODE();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *SEMI_SENSITIVE();
    antlr4::tree::TerminalNode *SEND();
    antlr4::tree::TerminalNode *SENT();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SEQUENCE_NUMBER();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SERVERPROPERTY();
    antlr4::tree::TerminalNode *SERVICEBROKER();
    antlr4::tree::TerminalNode *SESSIONPROPERTY();
    antlr4::tree::TerminalNode *SESSION_TIMEOUT();
    antlr4::tree::TerminalNode *SETERROR();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *SHOWCONTIG();
    antlr4::tree::TerminalNode *SHOWPLAN();
    antlr4::tree::TerminalNode *SHOWPLAN_ALL();
    antlr4::tree::TerminalNode *SHOWPLAN_TEXT();
    antlr4::tree::TerminalNode *SHOWPLAN_XML();
    antlr4::tree::TerminalNode *SIGNATURE();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *SINGLE_USER();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SORT_IN_TEMPDB();
    antlr4::tree::TerminalNode *SOUNDEX();
    antlr4::tree::TerminalNode *SPACE_KEYWORD();
    antlr4::tree::TerminalNode *SPARSE();
    antlr4::tree::TerminalNode *SPATIAL_WINDOW_MAX_CELLS();
    antlr4::tree::TerminalNode *SQL_VARIANT_PROPERTY();
    antlr4::tree::TerminalNode *STANDBY();
    antlr4::tree::TerminalNode *START_DATE();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STATISTICS_INCREMENTAL();
    antlr4::tree::TerminalNode *STATISTICS_NORECOMPUTE();
    antlr4::tree::TerminalNode *STATS_DATE();
    antlr4::tree::TerminalNode *STATS_STREAM();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STATUSONLY();
    antlr4::tree::TerminalNode *STDEV();
    antlr4::tree::TerminalNode *STDEVP();
    antlr4::tree::TerminalNode *STOPLIST();
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *STRING_AGG();
    antlr4::tree::TerminalNode *STRING_ESCAPE();
    antlr4::tree::TerminalNode *STUFF();
    antlr4::tree::TerminalNode *SUBJECT();
    antlr4::tree::TerminalNode *SUBSCRIBE();
    antlr4::tree::TerminalNode *SUBSCRIPTION();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *SUSER_ID();
    antlr4::tree::TerminalNode *SUSER_NAME();
    antlr4::tree::TerminalNode *SUSER_SID();
    antlr4::tree::TerminalNode *SUSER_SNAME();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *SYNCHRONOUS_COMMIT();
    antlr4::tree::TerminalNode *SYNONYM();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *TABLERESULTS();
    antlr4::tree::TerminalNode *TABLOCK();
    antlr4::tree::TerminalNode *TABLOCKX();
    antlr4::tree::TerminalNode *TAKE();
    antlr4::tree::TerminalNode *TARGET_RECOVERY_TIME();
    antlr4::tree::TerminalNode *TB();
    antlr4::tree::TerminalNode *TEXTIMAGE_ON();
    antlr4::tree::TerminalNode *THROW();
    antlr4::tree::TerminalNode *TIES();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *TIMER();
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *TORN_PAGE_DETECTION();
    antlr4::tree::TerminalNode *TRACKING();
    antlr4::tree::TerminalNode *TRANSACTION_ID();
    antlr4::tree::TerminalNode *TRANSFORM_NOISE_WORDS();
    antlr4::tree::TerminalNode *TRANSLATE();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *TRIPLE_DES();
    antlr4::tree::TerminalNode *TRIPLE_DES_3KEY();
    antlr4::tree::TerminalNode *TRUSTWORTHY();
    antlr4::tree::TerminalNode *TRY();
    antlr4::tree::TerminalNode *TSQL();
    antlr4::tree::TerminalNode *TWO_DIGIT_YEAR_CUTOFF();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TYPE_ID();
    antlr4::tree::TerminalNode *TYPE_NAME();
    antlr4::tree::TerminalNode *TYPE_WARNING();
    antlr4::tree::TerminalNode *TYPEPROPERTY();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNLIMITED();
    antlr4::tree::TerminalNode *UNMASK();
    antlr4::tree::TerminalNode *UOW();
    antlr4::tree::TerminalNode *UPDLOCK();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *USER_ID();
    antlr4::tree::TerminalNode *USER_NAME();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *VALID_XML();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VALUE_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *VARBINARY_KEYWORD();
    antlr4::tree::TerminalNode *VARP();
    antlr4::tree::TerminalNode *VERIFY_CLONEDB();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *VIEW_METADATA();
    antlr4::tree::TerminalNode *VIEWS();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WELL_FORMED_XML();
    antlr4::tree::TerminalNode *WITHOUT_ARRAY_WRAPPER();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *XLOCK();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *XML_COMPRESSION();
    antlr4::tree::TerminalNode *XMLDATA();
    antlr4::tree::TerminalNode *XMLNAMESPACES();
    antlr4::tree::TerminalNode *XMLSCHEMA();
    antlr4::tree::TerminalNode *XSINIL();
    antlr4::tree::TerminalNode *ZONE();
    antlr4::tree::TerminalNode *ABORT_AFTER_WAIT();
    antlr4::tree::TerminalNode *ABSENT();
    antlr4::tree::TerminalNode *ADMINISTER();
    antlr4::tree::TerminalNode *AES();
    antlr4::tree::TerminalNode *ALLOW_CONNECTIONS();
    antlr4::tree::TerminalNode *ALLOW_MULTIPLE_EVENT_LOSS();
    antlr4::tree::TerminalNode *ALLOW_SINGLE_EVENT_LOSS();
    antlr4::tree::TerminalNode *ANONYMOUS();
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *ASYNCHRONOUS_COMMIT();
    antlr4::tree::TerminalNode *AUTHENTICATE();
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *AUTOMATED_BACKUP_PREFERENCE();
    antlr4::tree::TerminalNode *AUTOMATIC();
    antlr4::tree::TerminalNode *AVAILABILITY_MODE();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *BLOCKERS();
    antlr4::tree::TerminalNode *BLOCKSIZE();
    antlr4::tree::TerminalNode *BLOCKING_HIERARCHY();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *BUFFERCOUNT();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *CERTIFICATE();
    antlr4::tree::TerminalNode *CHANGETABLE();
    antlr4::tree::TerminalNode *CHANGES();
    antlr4::tree::TerminalNode *CHECK_POLICY();
    antlr4::tree::TerminalNode *CHECK_EXPIRATION();
    antlr4::tree::TerminalNode *CLASSIFIER_FUNCTION();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONFIGURATION();
    antlr4::tree::TerminalNode *CONNECTIONPROPERTY();
    antlr4::tree::TerminalNode *CONTAINMENT();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *CONTEXT_INFO();
    antlr4::tree::TerminalNode *CONTINUE_AFTER_ERROR();
    antlr4::tree::TerminalNode *CONTRACT();
    antlr4::tree::TerminalNode *CONTRACT_NAME();
    antlr4::tree::TerminalNode *CONVERSATION();
    antlr4::tree::TerminalNode *COPY_ONLY();
    antlr4::tree::TerminalNode *CURRENT_REQUEST_ID();
    antlr4::tree::TerminalNode *CURRENT_TRANSACTION_ID();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *DATA_COMPRESSION();
    antlr4::tree::TerminalNode *DATA_SOURCE();
    antlr4::tree::TerminalNode *DATABASE_MIRRORING();
    antlr4::tree::TerminalNode *DATASPACE();
    antlr4::tree::TerminalNode *DDL();
    antlr4::tree::TerminalNode *DECOMPRESS();
    antlr4::tree::TerminalNode *DEFAULT_DATABASE();
    antlr4::tree::TerminalNode *DEFAULT_SCHEMA();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *DIFFERENTIAL();
    antlr4::tree::TerminalNode *DISTRIBUTION();
    antlr4::tree::TerminalNode *DTC_SUPPORT();
    antlr4::tree::TerminalNode *ENABLED();
    antlr4::tree::TerminalNode *ENDPOINT();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *ERROR_LINE();
    antlr4::tree::TerminalNode *ERROR_MESSAGE();
    antlr4::tree::TerminalNode *ERROR_NUMBER();
    antlr4::tree::TerminalNode *ERROR_PROCEDURE();
    antlr4::tree::TerminalNode *ERROR_SEVERITY();
    antlr4::tree::TerminalNode *ERROR_STATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVENTDATA();
    antlr4::tree::TerminalNode *EVENT_RETENTION_MODE();
    antlr4::tree::TerminalNode *EXECUTABLE_FILE();
    antlr4::tree::TerminalNode *EXPIREDATE();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *EXTERNAL_ACCESS();
    antlr4::tree::TerminalNode *FAILOVER();
    antlr4::tree::TerminalNode *FAILURECONDITIONLEVEL();
    antlr4::tree::TerminalNode *FAN_IN();
    antlr4::tree::TerminalNode *FILE_SNAPSHOT();
    antlr4::tree::TerminalNode *FORCESEEK();
    antlr4::tree::TerminalNode *FORCE_SERVICE_ALLOW_DATA_LOSS();
    antlr4::tree::TerminalNode *FORMATMESSAGE();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *GET_FILESTREAM_TRANSACTION_CONTEXT();
    antlr4::tree::TerminalNode *GETANCESTOR();
    antlr4::tree::TerminalNode *GETANSINULL();
    antlr4::tree::TerminalNode *GETDESCENDANT();
    antlr4::tree::TerminalNode *GETLEVEL();
    antlr4::tree::TerminalNode *GETREPARENTEDVALUE();
    antlr4::tree::TerminalNode *GETROOT();
    antlr4::tree::TerminalNode *GOVERNOR();
    antlr4::tree::TerminalNode *HASHED();
    antlr4::tree::TerminalNode *HEALTHCHECKTIMEOUT();
    antlr4::tree::TerminalNode *HEAP();
    antlr4::tree::TerminalNode *HIERARCHYID();
    antlr4::tree::TerminalNode *HOST_ID();
    antlr4::tree::TerminalNode *HOST_NAME();
    antlr4::tree::TerminalNode *IIF();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *INFINITE();
    antlr4::tree::TerminalNode *INIT();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *ISDESCENDANTOF();
    antlr4::tree::TerminalNode *ISNULL();
    antlr4::tree::TerminalNode *ISNUMERIC();
    antlr4::tree::TerminalNode *KERBEROS();
    antlr4::tree::TerminalNode *KEY_PATH();
    antlr4::tree::TerminalNode *KEY_STORE_PROVIDER_NAME();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *LINKED();
    antlr4::tree::TerminalNode *LINUX();
    antlr4::tree::TerminalNode *LISTENER_IP();
    antlr4::tree::TerminalNode *LISTENER_PORT();
    antlr4::tree::TerminalNode *LOCAL_SERVICE_NAME();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *MASK();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *MAX_MEMORY();
    antlr4::tree::TerminalNode *MAXTRANSFER();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *MAX_DISPATCH_LATENCY();
    antlr4::tree::TerminalNode *MAX_DURATION();
    antlr4::tree::TerminalNode *MAX_EVENT_SIZE();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *MAX_OUTSTANDING_IO_PER_VOLUME();
    antlr4::tree::TerminalNode *MEDIADESCRIPTION();
    antlr4::tree::TerminalNode *MEDIANAME();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMORY_PARTITION_MODE();
    antlr4::tree::TerminalNode *MESSAGE_FORWARDING();
    antlr4::tree::TerminalNode *MESSAGE_FORWARD_SIZE();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MIRROR();
    antlr4::tree::TerminalNode *MUST_CHANGE();
    antlr4::tree::TerminalNode *NEWID();
    antlr4::tree::TerminalNode *NEWSEQUENTIALID();
    antlr4::tree::TerminalNode *NOFORMAT();
    antlr4::tree::TerminalNode *NOINIT();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NOREWIND();
    antlr4::tree::TerminalNode *NOSKIP();
    antlr4::tree::TerminalNode *NOUNLOAD();
    antlr4::tree::TerminalNode *NO_CHECKSUM();
    antlr4::tree::TerminalNode *NO_COMPRESSION();
    antlr4::tree::TerminalNode *NO_EVENT_LOSS();
    antlr4::tree::TerminalNode *NOTIFICATION();
    antlr4::tree::TerminalNode *NTLM();
    antlr4::tree::TerminalNode *OLD_PASSWORD();
    antlr4::tree::TerminalNode *ON_FAILURE();
    antlr4::tree::TerminalNode *OPERATIONS();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *PARAM_NODE();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PERMISSION_SET();
    antlr4::tree::TerminalNode *PER_CPU();
    antlr4::tree::TerminalNode *PER_DB();
    antlr4::tree::TerminalNode *PER_NODE();
    antlr4::tree::TerminalNode *PERSISTED();
    antlr4::tree::TerminalNode *PLATFORM();
    antlr4::tree::TerminalNode *POLICY();
    antlr4::tree::TerminalNode *PREDICATE();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PYTHON();
    antlr4::tree::TerminalNode *R();
    antlr4::tree::TerminalNode *READ_WRITE_FILEGROUPS();
    antlr4::tree::TerminalNode *REGENERATE();
    antlr4::tree::TerminalNode *RELATED_CONVERSATION();
    antlr4::tree::TerminalNode *RELATED_CONVERSATION_GROUP();
    antlr4::tree::TerminalNode *REQUIRED();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESOURCES();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETAINDAYS();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *REWIND();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROUND_ROBIN();
    antlr4::tree::TerminalNode *ROWCOUNT_BIG();
    antlr4::tree::TerminalNode *RSA_512();
    antlr4::tree::TerminalNode *RSA_1024();
    antlr4::tree::TerminalNode *RSA_2048();
    antlr4::tree::TerminalNode *RSA_3072();
    antlr4::tree::TerminalNode *RSA_4096();
    antlr4::tree::TerminalNode *SAFETY();
    antlr4::tree::TerminalNode *SAFE();
    antlr4::tree::TerminalNode *SCHEDULER();
    antlr4::tree::TerminalNode *SCHEME();
    antlr4::tree::TerminalNode *SCRIPT();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *SERVICE_BROKER();
    antlr4::tree::TerminalNode *SERVICE_NAME();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SESSION_CONTEXT();
    antlr4::tree::TerminalNode *SETTINGS();
    antlr4::tree::TerminalNode *SHRINKLOG();
    antlr4::tree::TerminalNode *SID();
    antlr4::tree::TerminalNode *SKIP_KEYWORD();
    antlr4::tree::TerminalNode *SOFTNUMA();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SPECIFICATION();
    antlr4::tree::TerminalNode *SPLIT();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SQLDUMPERFLAGS();
    antlr4::tree::TerminalNode *SQLDUMPERPATH();
    antlr4::tree::TerminalNode *SQLDUMPERTIMEOUT();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *STATS();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTED();
    antlr4::tree::TerminalNode *STARTUP_STATE();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STOPPED();
    antlr4::tree::TerminalNode *STOP_ON_ERROR();
    antlr4::tree::TerminalNode *SUPPORTED();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *TAPE();
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *TCP();
    antlr4::tree::TerminalNode *TOSTRING();
    antlr4::tree::TerminalNode *TRACE();
    antlr4::tree::TerminalNode *TRACK_CAUSALITY();
    antlr4::tree::TerminalNode *TRANSFER();
    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *URL();
    antlr4::tree::TerminalNode *USED();
    antlr4::tree::TerminalNode *VERBOSELOGGING();
    antlr4::tree::TerminalNode *VISIBILITY();
    antlr4::tree::TerminalNode *WAIT_AT_LOW_PRIORITY();
    antlr4::tree::TerminalNode *WINDOWS();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WITNESS();
    antlr4::tree::TerminalNode *XACT_ABORT();
    antlr4::tree::TerminalNode *XACT_STATE();
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *ACOS();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *ATN2();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COT();
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *SIGN();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *SQUARE();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *CURRENT_TIMEZONE();
    antlr4::tree::TerminalNode *CURRENT_TIMEZONE_ID();
    antlr4::tree::TerminalNode *DATE_BUCKET();
    antlr4::tree::TerminalNode *DATEDIFF_BIG();
    antlr4::tree::TerminalNode *DATEFROMPARTS();
    antlr4::tree::TerminalNode *DATETIME2FROMPARTS();
    antlr4::tree::TerminalNode *DATETIMEFROMPARTS();
    antlr4::tree::TerminalNode *DATETIMEOFFSETFROMPARTS();
    antlr4::tree::TerminalNode *DATETRUNC();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *EOMONTH();
    antlr4::tree::TerminalNode *ISDATE();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *SMALLDATETIMEFROMPARTS();
    antlr4::tree::TerminalNode *SWITCHOFFSET();
    antlr4::tree::TerminalNode *SYSDATETIME();
    antlr4::tree::TerminalNode *SYSDATETIMEOFFSET();
    antlr4::tree::TerminalNode *SYSUTCDATETIME();
    antlr4::tree::TerminalNode *TIMEFROMPARTS();
    antlr4::tree::TerminalNode *TODATETIMEOFFSET();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *DAYOFYEAR();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *MILLISECOND();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *NANOSECOND();
    antlr4::tree::TerminalNode *TZOFFSET();
    antlr4::tree::TerminalNode *ISO_WEEK();
    antlr4::tree::TerminalNode *WEEKDAY();
    antlr4::tree::TerminalNode *YEAR_ABBR();
    antlr4::tree::TerminalNode *QUARTER_ABBR();
    antlr4::tree::TerminalNode *MONTH_ABBR();
    antlr4::tree::TerminalNode *DAYOFYEAR_ABBR();
    antlr4::tree::TerminalNode *DAY_ABBR();
    antlr4::tree::TerminalNode *WEEK_ABBR();
    antlr4::tree::TerminalNode *HOUR_ABBR();
    antlr4::tree::TerminalNode *MINUTE_ABBR();
    antlr4::tree::TerminalNode *SECOND_ABBR();
    antlr4::tree::TerminalNode *MILLISECOND_ABBR();
    antlr4::tree::TerminalNode *MICROSECOND_ABBR();
    antlr4::tree::TerminalNode *NANOSECOND_ABBR();
    antlr4::tree::TerminalNode *TZOFFSET_ABBR();
    antlr4::tree::TerminalNode *ISO_WEEK_ABBR();
    antlr4::tree::TerminalNode *WEEKDAY_ABBR();
    antlr4::tree::TerminalNode *SP_EXECUTESQL();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *FILESTREAM_ON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  Id_Context : public antlr4::ParserRuleContext {
  public:
    Id_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *TEMP_ID();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_ID();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_BLANK();
    antlr4::tree::TerminalNode *SQUARE_BRACKET_ID();
    KeywordContext *keyword();
    antlr4::tree::TerminalNode *RAW();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_Context* id_();

  class  Simple_idContext : public antlr4::ParserRuleContext {
  public:
    Simple_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_idContext* simple_id();

  class  Id_or_stringContext : public antlr4::ParserRuleContext {
  public:
    Id_or_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_or_stringContext* id_or_string();

  class  Comparison_operatorContext : public antlr4::ParserRuleContext {
  public:
    Comparison_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *EXCLAMATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_sizeContext* file_size();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool assembly_optionSempred(Assembly_optionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool search_conditionSempred(Search_conditionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

