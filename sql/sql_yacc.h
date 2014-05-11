/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACCESSIBLE_SYM = 259,
     ACTION = 260,
     ADD = 261,
     ADDDATE_SYM = 262,
     AFTER_SYM = 263,
     AGAINST = 264,
     AGGREGATE_SYM = 265,
     ALGORITHM_SYM = 266,
     ALL = 267,
     ALTER = 268,
     ANALYZE_SYM = 269,
     AND_AND_SYM = 270,
     AND_SYM = 271,
     ANY_SYM = 272,
     AS = 273,
     ASC = 274,
     ASCII_SYM = 275,
     ASENSITIVE_SYM = 276,
     AT_SYM = 277,
     AUTHORS_SYM = 278,
     AUTOEXTEND_SIZE_SYM = 279,
     AUTO_INC = 280,
     AVG_ROW_LENGTH = 281,
     AVG_SYM = 282,
     BACKUP_SYM = 283,
     BEFORE_SYM = 284,
     BEGIN_SYM = 285,
     BETWEEN_SYM = 286,
     BIGINT = 287,
     BINARY = 288,
     BINLOG_SYM = 289,
     BIN_NUM = 290,
     BIT_AND = 291,
     BIT_OR = 292,
     BIT_SYM = 293,
     BIT_XOR = 294,
     BLOB_SYM = 295,
     BLOCK_SYM = 296,
     BOOLEAN_SYM = 297,
     BOOL_SYM = 298,
     BOTH = 299,
     BTREE_SYM = 300,
     BY = 301,
     BYTE_SYM = 302,
     CACHE_SYM = 303,
     CALL_SYM = 304,
     CASCADE = 305,
     CASCADED = 306,
     CASE_SYM = 307,
     CAST_SYM = 308,
     CATALOG_NAME_SYM = 309,
     CHAIN_SYM = 310,
     CHANGE = 311,
     CHANGED = 312,
     CHANGED_PAGE_BITMAPS_SYM = 313,
     CHARSET = 314,
     CHAR_SYM = 315,
     CHECKSUM_SYM = 316,
     CHECK_SYM = 317,
     CIPHER_SYM = 318,
     CLASS_ORIGIN_SYM = 319,
     CLIENT_SYM = 320,
     CLIENT_STATS_SYM = 321,
     CLOSE_SYM = 322,
     COALESCE = 323,
     CODE_SYM = 324,
     COLLATE_SYM = 325,
     COLLATION_SYM = 326,
     COLUMNS = 327,
     COLUMN_SYM = 328,
     COLUMN_NAME_SYM = 329,
     COMMENT_SYM = 330,
     COMMITTED_SYM = 331,
     COMMIT_SYM = 332,
     COMPACT_SYM = 333,
     COMPLETION_SYM = 334,
     COMPRESSED_SYM = 335,
     CONCURRENT = 336,
     CONDITION_SYM = 337,
     CONNECTION_SYM = 338,
     CONSISTENT_SYM = 339,
     CONSTRAINT = 340,
     CONSTRAINT_CATALOG_SYM = 341,
     CONSTRAINT_NAME_SYM = 342,
     CONSTRAINT_SCHEMA_SYM = 343,
     CONTAINS_SYM = 344,
     CONTEXT_SYM = 345,
     CONTINUE_SYM = 346,
     CONTRIBUTORS_SYM = 347,
     CONVERT_SYM = 348,
     COUNT_SYM = 349,
     CPU_SYM = 350,
     CREATE = 351,
     CROSS = 352,
     CUBE_SYM = 353,
     CURDATE = 354,
     CURRENT_USER = 355,
     CURSOR_SYM = 356,
     CURSOR_NAME_SYM = 357,
     CURTIME = 358,
     DATABASE = 359,
     DATABASES = 360,
     DATAFILE_SYM = 361,
     DATA_SYM = 362,
     DATETIME = 363,
     DATE_ADD_INTERVAL = 364,
     DATE_SUB_INTERVAL = 365,
     DATE_SYM = 366,
     DAY_HOUR_SYM = 367,
     DAY_MICROSECOND_SYM = 368,
     DAY_MINUTE_SYM = 369,
     DAY_SECOND_SYM = 370,
     DAY_SYM = 371,
     DEALLOCATE_SYM = 372,
     DECIMAL_NUM = 373,
     DECIMAL_SYM = 374,
     DECLARE_SYM = 375,
     DEFAULT = 376,
     DEFINER_SYM = 377,
     DELAYED_SYM = 378,
     DELAY_KEY_WRITE_SYM = 379,
     DELETE_SYM = 380,
     DESC = 381,
     DESCRIBE = 382,
     DES_KEY_FILE = 383,
     DETERMINISTIC_SYM = 384,
     DIRECTORY_SYM = 385,
     DISABLE_SYM = 386,
     DISCARD = 387,
     DISK_SYM = 388,
     DISTINCT = 389,
     DIV_SYM = 390,
     DOUBLE_SYM = 391,
     DO_SYM = 392,
     DROP = 393,
     DUAL_SYM = 394,
     DUMPFILE = 395,
     DUPLICATE_SYM = 396,
     DYNAMIC_SYM = 397,
     EACH_SYM = 398,
     ELSE = 399,
     ELSEIF_SYM = 400,
     ENABLE_SYM = 401,
     ENCLOSED = 402,
     END = 403,
     ENDS_SYM = 404,
     END_OF_INPUT = 405,
     ENGINES_SYM = 406,
     ENGINE_SYM = 407,
     ENUM = 408,
     EQ = 409,
     EQUAL_SYM = 410,
     ERROR_SYM = 411,
     ERRORS = 412,
     ESCAPED = 413,
     ESCAPE_SYM = 414,
     EVENTS_SYM = 415,
     EVENT_SYM = 416,
     EVERY_SYM = 417,
     EXECUTE_SYM = 418,
     EXISTS = 419,
     EXIT_SYM = 420,
     EXPANSION_SYM = 421,
     EXTENDED_SYM = 422,
     EXTENT_SIZE_SYM = 423,
     EXTRACT_SYM = 424,
     FALSE_SYM = 425,
     FAST_SYM = 426,
     FAULTS_SYM = 427,
     FETCH_SYM = 428,
     FILE_SYM = 429,
     FIRST_SYM = 430,
     FIXED_SYM = 431,
     FLOAT_NUM = 432,
     FLOAT_SYM = 433,
     FLUSH_SYM = 434,
     FORCE_SYM = 435,
     FOREIGN = 436,
     FOR_SYM = 437,
     FOUND_SYM = 438,
     FROM = 439,
     FULL = 440,
     FULLTEXT_SYM = 441,
     FUNCTION_SYM = 442,
     GE = 443,
     GENERAL = 444,
     GEOMETRYCOLLECTION = 445,
     GEOMETRY_SYM = 446,
     GET_FORMAT = 447,
     GLOBAL_SYM = 448,
     GRANT = 449,
     GRANTS = 450,
     GROUP_SYM = 451,
     GROUP_CONCAT_SYM = 452,
     GT_SYM = 453,
     HANDLER_SYM = 454,
     HASH_SYM = 455,
     HAVING = 456,
     HELP_SYM = 457,
     HEX_NUM = 458,
     HIGH_PRIORITY = 459,
     HOST_SYM = 460,
     HOSTS_SYM = 461,
     HOUR_MICROSECOND_SYM = 462,
     HOUR_MINUTE_SYM = 463,
     HOUR_SECOND_SYM = 464,
     HOUR_SYM = 465,
     IDENT = 466,
     IDENTIFIED_SYM = 467,
     IDENT_QUOTED = 468,
     IF = 469,
     IGNORE_SYM = 470,
     IGNORE_SERVER_IDS_SYM = 471,
     IMPORT = 472,
     INDEXES = 473,
     INDEX_SYM = 474,
     INDEX_STATS_SYM = 475,
     INFILE = 476,
     INITIAL_SIZE_SYM = 477,
     INNER_SYM = 478,
     INOUT_SYM = 479,
     INSENSITIVE_SYM = 480,
     INSERT = 481,
     INSERT_METHOD = 482,
     INSTALL_SYM = 483,
     INTERVAL_SYM = 484,
     INTO = 485,
     INT_SYM = 486,
     INVOKER_SYM = 487,
     IN_SYM = 488,
     IO_SYM = 489,
     IPC_SYM = 490,
     IS = 491,
     ISOLATION = 492,
     ISSUER_SYM = 493,
     ITERATE_SYM = 494,
     JOIN_SYM = 495,
     KEYS = 496,
     KEY_BLOCK_SIZE = 497,
     KEY_SYM = 498,
     KILL_SYM = 499,
     LANGUAGE_SYM = 500,
     LAST_SYM = 501,
     LE = 502,
     LEADING = 503,
     LEAVES = 504,
     LEAVE_SYM = 505,
     LEFT = 506,
     LESS_SYM = 507,
     LEVEL_SYM = 508,
     LEX_HOSTNAME = 509,
     LIKE = 510,
     LIMIT = 511,
     LINEAR_SYM = 512,
     LINES = 513,
     LINESTRING = 514,
     LIST_SYM = 515,
     LOAD = 516,
     LOCAL_SYM = 517,
     LOCATOR_SYM = 518,
     LOCKS_SYM = 519,
     LOCK_SYM = 520,
     LOGFILE_SYM = 521,
     LOGS_SYM = 522,
     LONGBLOB = 523,
     LONGTEXT = 524,
     LONG_NUM = 525,
     LONG_SYM = 526,
     LOOP_SYM = 527,
     LOW_PRIORITY = 528,
     LT = 529,
     MASTER_CONNECT_RETRY_SYM = 530,
     MASTER_HOST_SYM = 531,
     MASTER_LOG_FILE_SYM = 532,
     MASTER_LOG_POS_SYM = 533,
     MASTER_PASSWORD_SYM = 534,
     MASTER_PORT_SYM = 535,
     MASTER_SERVER_ID_SYM = 536,
     MASTER_SSL_CAPATH_SYM = 537,
     MASTER_SSL_CA_SYM = 538,
     MASTER_SSL_CERT_SYM = 539,
     MASTER_SSL_CIPHER_SYM = 540,
     MASTER_SSL_KEY_SYM = 541,
     MASTER_SSL_SYM = 542,
     MASTER_SSL_VERIFY_SERVER_CERT_SYM = 543,
     MASTER_SYM = 544,
     MASTER_USER_SYM = 545,
     MASTER_HEARTBEAT_PERIOD_SYM = 546,
     MATCH = 547,
     MAX_CONNECTIONS_PER_HOUR = 548,
     MAX_QUERIES_PER_HOUR = 549,
     MAX_ROWS = 550,
     MAX_SIZE_SYM = 551,
     MAX_SYM = 552,
     MAX_UPDATES_PER_HOUR = 553,
     MAX_USER_CONNECTIONS_SYM = 554,
     MAX_VALUE_SYM = 555,
     MEDIUMBLOB = 556,
     MEDIUMINT = 557,
     MEDIUMTEXT = 558,
     MEDIUM_SYM = 559,
     MEMORY_SYM = 560,
     MERGE_SYM = 561,
     MESSAGE_TEXT_SYM = 562,
     MICROSECOND_SYM = 563,
     MIGRATE_SYM = 564,
     MINUTE_MICROSECOND_SYM = 565,
     MINUTE_SECOND_SYM = 566,
     MINUTE_SYM = 567,
     MIN_ROWS = 568,
     MIN_SYM = 569,
     MODE_SYM = 570,
     MODIFIES_SYM = 571,
     MODIFY_SYM = 572,
     MOD_SYM = 573,
     MONTH_SYM = 574,
     MULTILINESTRING = 575,
     MULTIPOINT = 576,
     MULTIPOLYGON = 577,
     MUTEX_SYM = 578,
     MYSQL_ERRNO_SYM = 579,
     NAMES_SYM = 580,
     NAME_SYM = 581,
     NATIONAL_SYM = 582,
     NATURAL = 583,
     NCHAR_STRING = 584,
     NCHAR_SYM = 585,
     NDBCLUSTER_SYM = 586,
     NE = 587,
     NEG = 588,
     NEW_SYM = 589,
     NEXT_SYM = 590,
     NODEGROUP_SYM = 591,
     NONE_SYM = 592,
     NOT2_SYM = 593,
     NOT_SYM = 594,
     NOW_SYM = 595,
     NO_SYM = 596,
     NO_WAIT_SYM = 597,
     NO_WRITE_TO_BINLOG = 598,
     NULL_SYM = 599,
     NUM = 600,
     NUMERIC_SYM = 601,
     NVARCHAR_SYM = 602,
     OFFSET_SYM = 603,
     OLD_PASSWORD = 604,
     ON = 605,
     ONE_SHOT_SYM = 606,
     ONE_SYM = 607,
     OPEN_SYM = 608,
     OPTIMIZE = 609,
     OPTIONS_SYM = 610,
     OPTION = 611,
     OPTIONALLY = 612,
     OR2_SYM = 613,
     ORDER_SYM = 614,
     OR_OR_SYM = 615,
     OR_SYM = 616,
     OUTER = 617,
     OUTFILE = 618,
     OUT_SYM = 619,
     OWNER_SYM = 620,
     PACK_KEYS_SYM = 621,
     PAGE_SYM = 622,
     PARAM_MARKER = 623,
     PARSER_SYM = 624,
     PARTIAL = 625,
     PARTITIONING_SYM = 626,
     PARTITIONS_SYM = 627,
     PARTITION_SYM = 628,
     PASSWORD = 629,
     PHASE_SYM = 630,
     PLUGINS_SYM = 631,
     PLUGIN_SYM = 632,
     POINT_SYM = 633,
     POLYGON = 634,
     PORT_SYM = 635,
     POSITION_SYM = 636,
     PRECISION = 637,
     PREPARE_SYM = 638,
     PRESERVE_SYM = 639,
     PREV_SYM = 640,
     PRIMARY_SYM = 641,
     PRIVILEGES = 642,
     PROCEDURE_SYM = 643,
     PROCESS = 644,
     PROCESSLIST_SYM = 645,
     PROFILE_SYM = 646,
     PROFILES_SYM = 647,
     PROXY_SYM = 648,
     PURGE = 649,
     QUARTER_SYM = 650,
     QUERY_SYM = 651,
     QUERY_RESPONSE_TIME_SYM = 652,
     QUICK = 653,
     RANGE_SYM = 654,
     READS_SYM = 655,
     READ_ONLY_SYM = 656,
     READ_SYM = 657,
     READ_WRITE_SYM = 658,
     REAL = 659,
     REBUILD_SYM = 660,
     RECOVER_SYM = 661,
     REDOFILE_SYM = 662,
     REDO_BUFFER_SIZE_SYM = 663,
     REDUNDANT_SYM = 664,
     REFERENCES = 665,
     REGEXP = 666,
     RELAY = 667,
     RELAYLOG_SYM = 668,
     RELAY_LOG_FILE_SYM = 669,
     RELAY_LOG_POS_SYM = 670,
     RELAY_THREAD = 671,
     RELEASE_SYM = 672,
     RELOAD = 673,
     REMOVE_SYM = 674,
     RENAME = 675,
     REORGANIZE_SYM = 676,
     REPAIR = 677,
     REPEATABLE_SYM = 678,
     REPEAT_SYM = 679,
     REPLACE = 680,
     REPLICATION = 681,
     REQUIRE_SYM = 682,
     RESET_SYM = 683,
     RESIGNAL_SYM = 684,
     RESOURCES = 685,
     RESTORE_SYM = 686,
     RESTRICT = 687,
     RESUME_SYM = 688,
     RETURNS_SYM = 689,
     RETURN_SYM = 690,
     REVOKE = 691,
     RIGHT = 692,
     ROLLBACK_SYM = 693,
     ROLLUP_SYM = 694,
     ROUTINE_SYM = 695,
     ROWS_SYM = 696,
     ROW_FORMAT_SYM = 697,
     ROW_SYM = 698,
     RTREE_SYM = 699,
     SAVEPOINT_SYM = 700,
     SCHEDULE_SYM = 701,
     SCHEMA_NAME_SYM = 702,
     SECOND_MICROSECOND_SYM = 703,
     SECOND_SYM = 704,
     SECURITY_SYM = 705,
     SELECT_SYM = 706,
     SENSITIVE_SYM = 707,
     SEPARATOR_SYM = 708,
     SERIALIZABLE_SYM = 709,
     SERIAL_SYM = 710,
     SESSION_SYM = 711,
     SERVER_SYM = 712,
     SERVER_OPTIONS = 713,
     SET = 714,
     SET_VAR = 715,
     SHARE_SYM = 716,
     SHIFT_LEFT = 717,
     SHIFT_RIGHT = 718,
     SHOW = 719,
     SHUTDOWN = 720,
     SIGNAL_SYM = 721,
     SIGNED_SYM = 722,
     SIMPLE_SYM = 723,
     SLAVE = 724,
     SLOW = 725,
     SMALLINT = 726,
     SNAPSHOT_SYM = 727,
     SOCKET_SYM = 728,
     SONAME_SYM = 729,
     SOUNDS_SYM = 730,
     SOURCE_SYM = 731,
     SPATIAL_SYM = 732,
     SPECIFIC_SYM = 733,
     SQLEXCEPTION_SYM = 734,
     SQLSTATE_SYM = 735,
     SQLWARNING_SYM = 736,
     SQL_BIG_RESULT = 737,
     SQL_BUFFER_RESULT = 738,
     SQL_CACHE_SYM = 739,
     SQL_CALC_FOUND_ROWS = 740,
     SQL_NO_CACHE_SYM = 741,
     SQL_NO_FCACHE_SYM = 742,
     SQL_SMALL_RESULT = 743,
     SQL_SYM = 744,
     SQL_THREAD = 745,
     SSL_SYM = 746,
     STARTING = 747,
     STARTS_SYM = 748,
     START_SYM = 749,
     STATUS_SYM = 750,
     NOLOCK_SYM = 751,
     STDDEV_SAMP_SYM = 752,
     STD_SYM = 753,
     STOP_SYM = 754,
     STORAGE_SYM = 755,
     STRAIGHT_JOIN = 756,
     STRING_SYM = 757,
     SUBCLASS_ORIGIN_SYM = 758,
     SUBDATE_SYM = 759,
     SUBJECT_SYM = 760,
     SUBPARTITIONS_SYM = 761,
     SUBPARTITION_SYM = 762,
     SUBSTRING = 763,
     SUM_SYM = 764,
     SUPER_SYM = 765,
     SUSPEND_SYM = 766,
     SWAPS_SYM = 767,
     SWITCHES_SYM = 768,
     SYSDATE = 769,
     TABLES = 770,
     TABLESPACE = 771,
     TABLE_REF_PRIORITY = 772,
     TABLE_SYM = 773,
     TABLE_STATS_SYM = 774,
     TABLE_CHECKSUM_SYM = 775,
     TABLE_NAME_SYM = 776,
     TEMPORARY = 777,
     TEMPTABLE_SYM = 778,
     TERMINATED = 779,
     TEXT_STRING = 780,
     TEXT_SYM = 781,
     THAN_SYM = 782,
     THEN_SYM = 783,
     THREAD_STATS_SYM = 784,
     TIMESTAMP = 785,
     TIMESTAMP_ADD = 786,
     TIMESTAMP_DIFF = 787,
     TIME_SYM = 788,
     TINYBLOB = 789,
     TINYINT = 790,
     TINYTEXT = 791,
     TO_SYM = 792,
     TRAILING = 793,
     TRANSACTION_SYM = 794,
     TRIGGERS_SYM = 795,
     TRIGGER_SYM = 796,
     TRIM = 797,
     TRUE_SYM = 798,
     TRUNCATE_SYM = 799,
     TYPES_SYM = 800,
     TYPE_SYM = 801,
     UDF_RETURNS_SYM = 802,
     ULONGLONG_NUM = 803,
     UNCOMMITTED_SYM = 804,
     UNDEFINED_SYM = 805,
     UNDERSCORE_CHARSET = 806,
     UNDOFILE_SYM = 807,
     UNDO_BUFFER_SIZE_SYM = 808,
     UNDO_SYM = 809,
     UNICODE_SYM = 810,
     UNINSTALL_SYM = 811,
     UNION_SYM = 812,
     UNIQUE_SYM = 813,
     UNKNOWN_SYM = 814,
     UNLOCK_SYM = 815,
     UNSIGNED = 816,
     UNTIL_SYM = 817,
     UPDATE_SYM = 818,
     UPGRADE_SYM = 819,
     USAGE = 820,
     USER = 821,
     USER_STATS_SYM = 822,
     USE_FRM = 823,
     USE_SYM = 824,
     USING = 825,
     UTC_DATE_SYM = 826,
     UTC_TIMESTAMP_SYM = 827,
     UTC_TIME_SYM = 828,
     VALUES = 829,
     VALUE_SYM = 830,
     VARBINARY = 831,
     VARCHAR = 832,
     VARIABLES = 833,
     VARIANCE_SYM = 834,
     VARYING = 835,
     VAR_SAMP_SYM = 836,
     VIEW_SYM = 837,
     WAIT_SYM = 838,
     WARNINGS = 839,
     WEEK_SYM = 840,
     WHEN_SYM = 841,
     WHERE = 842,
     WHILE_SYM = 843,
     WITH = 844,
     WITH_CUBE_SYM = 845,
     WITH_ROLLUP_SYM = 846,
     WORK_SYM = 847,
     WRAPPER_SYM = 848,
     WRITE_SYM = 849,
     X509_SYM = 850,
     XA_SYM = 851,
     XML_SYM = 852,
     XOR = 853,
     YEAR_MONTH_SYM = 854,
     YEAR_SYM = 855,
     ZEROFILL = 856
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADDDATE_SYM 262
#define AFTER_SYM 263
#define AGAINST 264
#define AGGREGATE_SYM 265
#define ALGORITHM_SYM 266
#define ALL 267
#define ALTER 268
#define ANALYZE_SYM 269
#define AND_AND_SYM 270
#define AND_SYM 271
#define ANY_SYM 272
#define AS 273
#define ASC 274
#define ASCII_SYM 275
#define ASENSITIVE_SYM 276
#define AT_SYM 277
#define AUTHORS_SYM 278
#define AUTOEXTEND_SIZE_SYM 279
#define AUTO_INC 280
#define AVG_ROW_LENGTH 281
#define AVG_SYM 282
#define BACKUP_SYM 283
#define BEFORE_SYM 284
#define BEGIN_SYM 285
#define BETWEEN_SYM 286
#define BIGINT 287
#define BINARY 288
#define BINLOG_SYM 289
#define BIN_NUM 290
#define BIT_AND 291
#define BIT_OR 292
#define BIT_SYM 293
#define BIT_XOR 294
#define BLOB_SYM 295
#define BLOCK_SYM 296
#define BOOLEAN_SYM 297
#define BOOL_SYM 298
#define BOTH 299
#define BTREE_SYM 300
#define BY 301
#define BYTE_SYM 302
#define CACHE_SYM 303
#define CALL_SYM 304
#define CASCADE 305
#define CASCADED 306
#define CASE_SYM 307
#define CAST_SYM 308
#define CATALOG_NAME_SYM 309
#define CHAIN_SYM 310
#define CHANGE 311
#define CHANGED 312
#define CHANGED_PAGE_BITMAPS_SYM 313
#define CHARSET 314
#define CHAR_SYM 315
#define CHECKSUM_SYM 316
#define CHECK_SYM 317
#define CIPHER_SYM 318
#define CLASS_ORIGIN_SYM 319
#define CLIENT_SYM 320
#define CLIENT_STATS_SYM 321
#define CLOSE_SYM 322
#define COALESCE 323
#define CODE_SYM 324
#define COLLATE_SYM 325
#define COLLATION_SYM 326
#define COLUMNS 327
#define COLUMN_SYM 328
#define COLUMN_NAME_SYM 329
#define COMMENT_SYM 330
#define COMMITTED_SYM 331
#define COMMIT_SYM 332
#define COMPACT_SYM 333
#define COMPLETION_SYM 334
#define COMPRESSED_SYM 335
#define CONCURRENT 336
#define CONDITION_SYM 337
#define CONNECTION_SYM 338
#define CONSISTENT_SYM 339
#define CONSTRAINT 340
#define CONSTRAINT_CATALOG_SYM 341
#define CONSTRAINT_NAME_SYM 342
#define CONSTRAINT_SCHEMA_SYM 343
#define CONTAINS_SYM 344
#define CONTEXT_SYM 345
#define CONTINUE_SYM 346
#define CONTRIBUTORS_SYM 347
#define CONVERT_SYM 348
#define COUNT_SYM 349
#define CPU_SYM 350
#define CREATE 351
#define CROSS 352
#define CUBE_SYM 353
#define CURDATE 354
#define CURRENT_USER 355
#define CURSOR_SYM 356
#define CURSOR_NAME_SYM 357
#define CURTIME 358
#define DATABASE 359
#define DATABASES 360
#define DATAFILE_SYM 361
#define DATA_SYM 362
#define DATETIME 363
#define DATE_ADD_INTERVAL 364
#define DATE_SUB_INTERVAL 365
#define DATE_SYM 366
#define DAY_HOUR_SYM 367
#define DAY_MICROSECOND_SYM 368
#define DAY_MINUTE_SYM 369
#define DAY_SECOND_SYM 370
#define DAY_SYM 371
#define DEALLOCATE_SYM 372
#define DECIMAL_NUM 373
#define DECIMAL_SYM 374
#define DECLARE_SYM 375
#define DEFAULT 376
#define DEFINER_SYM 377
#define DELAYED_SYM 378
#define DELAY_KEY_WRITE_SYM 379
#define DELETE_SYM 380
#define DESC 381
#define DESCRIBE 382
#define DES_KEY_FILE 383
#define DETERMINISTIC_SYM 384
#define DIRECTORY_SYM 385
#define DISABLE_SYM 386
#define DISCARD 387
#define DISK_SYM 388
#define DISTINCT 389
#define DIV_SYM 390
#define DOUBLE_SYM 391
#define DO_SYM 392
#define DROP 393
#define DUAL_SYM 394
#define DUMPFILE 395
#define DUPLICATE_SYM 396
#define DYNAMIC_SYM 397
#define EACH_SYM 398
#define ELSE 399
#define ELSEIF_SYM 400
#define ENABLE_SYM 401
#define ENCLOSED 402
#define END 403
#define ENDS_SYM 404
#define END_OF_INPUT 405
#define ENGINES_SYM 406
#define ENGINE_SYM 407
#define ENUM 408
#define EQ 409
#define EQUAL_SYM 410
#define ERROR_SYM 411
#define ERRORS 412
#define ESCAPED 413
#define ESCAPE_SYM 414
#define EVENTS_SYM 415
#define EVENT_SYM 416
#define EVERY_SYM 417
#define EXECUTE_SYM 418
#define EXISTS 419
#define EXIT_SYM 420
#define EXPANSION_SYM 421
#define EXTENDED_SYM 422
#define EXTENT_SIZE_SYM 423
#define EXTRACT_SYM 424
#define FALSE_SYM 425
#define FAST_SYM 426
#define FAULTS_SYM 427
#define FETCH_SYM 428
#define FILE_SYM 429
#define FIRST_SYM 430
#define FIXED_SYM 431
#define FLOAT_NUM 432
#define FLOAT_SYM 433
#define FLUSH_SYM 434
#define FORCE_SYM 435
#define FOREIGN 436
#define FOR_SYM 437
#define FOUND_SYM 438
#define FROM 439
#define FULL 440
#define FULLTEXT_SYM 441
#define FUNCTION_SYM 442
#define GE 443
#define GENERAL 444
#define GEOMETRYCOLLECTION 445
#define GEOMETRY_SYM 446
#define GET_FORMAT 447
#define GLOBAL_SYM 448
#define GRANT 449
#define GRANTS 450
#define GROUP_SYM 451
#define GROUP_CONCAT_SYM 452
#define GT_SYM 453
#define HANDLER_SYM 454
#define HASH_SYM 455
#define HAVING 456
#define HELP_SYM 457
#define HEX_NUM 458
#define HIGH_PRIORITY 459
#define HOST_SYM 460
#define HOSTS_SYM 461
#define HOUR_MICROSECOND_SYM 462
#define HOUR_MINUTE_SYM 463
#define HOUR_SECOND_SYM 464
#define HOUR_SYM 465
#define IDENT 466
#define IDENTIFIED_SYM 467
#define IDENT_QUOTED 468
#define IF 469
#define IGNORE_SYM 470
#define IGNORE_SERVER_IDS_SYM 471
#define IMPORT 472
#define INDEXES 473
#define INDEX_SYM 474
#define INDEX_STATS_SYM 475
#define INFILE 476
#define INITIAL_SIZE_SYM 477
#define INNER_SYM 478
#define INOUT_SYM 479
#define INSENSITIVE_SYM 480
#define INSERT 481
#define INSERT_METHOD 482
#define INSTALL_SYM 483
#define INTERVAL_SYM 484
#define INTO 485
#define INT_SYM 486
#define INVOKER_SYM 487
#define IN_SYM 488
#define IO_SYM 489
#define IPC_SYM 490
#define IS 491
#define ISOLATION 492
#define ISSUER_SYM 493
#define ITERATE_SYM 494
#define JOIN_SYM 495
#define KEYS 496
#define KEY_BLOCK_SIZE 497
#define KEY_SYM 498
#define KILL_SYM 499
#define LANGUAGE_SYM 500
#define LAST_SYM 501
#define LE 502
#define LEADING 503
#define LEAVES 504
#define LEAVE_SYM 505
#define LEFT 506
#define LESS_SYM 507
#define LEVEL_SYM 508
#define LEX_HOSTNAME 509
#define LIKE 510
#define LIMIT 511
#define LINEAR_SYM 512
#define LINES 513
#define LINESTRING 514
#define LIST_SYM 515
#define LOAD 516
#define LOCAL_SYM 517
#define LOCATOR_SYM 518
#define LOCKS_SYM 519
#define LOCK_SYM 520
#define LOGFILE_SYM 521
#define LOGS_SYM 522
#define LONGBLOB 523
#define LONGTEXT 524
#define LONG_NUM 525
#define LONG_SYM 526
#define LOOP_SYM 527
#define LOW_PRIORITY 528
#define LT 529
#define MASTER_CONNECT_RETRY_SYM 530
#define MASTER_HOST_SYM 531
#define MASTER_LOG_FILE_SYM 532
#define MASTER_LOG_POS_SYM 533
#define MASTER_PASSWORD_SYM 534
#define MASTER_PORT_SYM 535
#define MASTER_SERVER_ID_SYM 536
#define MASTER_SSL_CAPATH_SYM 537
#define MASTER_SSL_CA_SYM 538
#define MASTER_SSL_CERT_SYM 539
#define MASTER_SSL_CIPHER_SYM 540
#define MASTER_SSL_KEY_SYM 541
#define MASTER_SSL_SYM 542
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 543
#define MASTER_SYM 544
#define MASTER_USER_SYM 545
#define MASTER_HEARTBEAT_PERIOD_SYM 546
#define MATCH 547
#define MAX_CONNECTIONS_PER_HOUR 548
#define MAX_QUERIES_PER_HOUR 549
#define MAX_ROWS 550
#define MAX_SIZE_SYM 551
#define MAX_SYM 552
#define MAX_UPDATES_PER_HOUR 553
#define MAX_USER_CONNECTIONS_SYM 554
#define MAX_VALUE_SYM 555
#define MEDIUMBLOB 556
#define MEDIUMINT 557
#define MEDIUMTEXT 558
#define MEDIUM_SYM 559
#define MEMORY_SYM 560
#define MERGE_SYM 561
#define MESSAGE_TEXT_SYM 562
#define MICROSECOND_SYM 563
#define MIGRATE_SYM 564
#define MINUTE_MICROSECOND_SYM 565
#define MINUTE_SECOND_SYM 566
#define MINUTE_SYM 567
#define MIN_ROWS 568
#define MIN_SYM 569
#define MODE_SYM 570
#define MODIFIES_SYM 571
#define MODIFY_SYM 572
#define MOD_SYM 573
#define MONTH_SYM 574
#define MULTILINESTRING 575
#define MULTIPOINT 576
#define MULTIPOLYGON 577
#define MUTEX_SYM 578
#define MYSQL_ERRNO_SYM 579
#define NAMES_SYM 580
#define NAME_SYM 581
#define NATIONAL_SYM 582
#define NATURAL 583
#define NCHAR_STRING 584
#define NCHAR_SYM 585
#define NDBCLUSTER_SYM 586
#define NE 587
#define NEG 588
#define NEW_SYM 589
#define NEXT_SYM 590
#define NODEGROUP_SYM 591
#define NONE_SYM 592
#define NOT2_SYM 593
#define NOT_SYM 594
#define NOW_SYM 595
#define NO_SYM 596
#define NO_WAIT_SYM 597
#define NO_WRITE_TO_BINLOG 598
#define NULL_SYM 599
#define NUM 600
#define NUMERIC_SYM 601
#define NVARCHAR_SYM 602
#define OFFSET_SYM 603
#define OLD_PASSWORD 604
#define ON 605
#define ONE_SHOT_SYM 606
#define ONE_SYM 607
#define OPEN_SYM 608
#define OPTIMIZE 609
#define OPTIONS_SYM 610
#define OPTION 611
#define OPTIONALLY 612
#define OR2_SYM 613
#define ORDER_SYM 614
#define OR_OR_SYM 615
#define OR_SYM 616
#define OUTER 617
#define OUTFILE 618
#define OUT_SYM 619
#define OWNER_SYM 620
#define PACK_KEYS_SYM 621
#define PAGE_SYM 622
#define PARAM_MARKER 623
#define PARSER_SYM 624
#define PARTIAL 625
#define PARTITIONING_SYM 626
#define PARTITIONS_SYM 627
#define PARTITION_SYM 628
#define PASSWORD 629
#define PHASE_SYM 630
#define PLUGINS_SYM 631
#define PLUGIN_SYM 632
#define POINT_SYM 633
#define POLYGON 634
#define PORT_SYM 635
#define POSITION_SYM 636
#define PRECISION 637
#define PREPARE_SYM 638
#define PRESERVE_SYM 639
#define PREV_SYM 640
#define PRIMARY_SYM 641
#define PRIVILEGES 642
#define PROCEDURE_SYM 643
#define PROCESS 644
#define PROCESSLIST_SYM 645
#define PROFILE_SYM 646
#define PROFILES_SYM 647
#define PROXY_SYM 648
#define PURGE 649
#define QUARTER_SYM 650
#define QUERY_SYM 651
#define QUERY_RESPONSE_TIME_SYM 652
#define QUICK 653
#define RANGE_SYM 654
#define READS_SYM 655
#define READ_ONLY_SYM 656
#define READ_SYM 657
#define READ_WRITE_SYM 658
#define REAL 659
#define REBUILD_SYM 660
#define RECOVER_SYM 661
#define REDOFILE_SYM 662
#define REDO_BUFFER_SIZE_SYM 663
#define REDUNDANT_SYM 664
#define REFERENCES 665
#define REGEXP 666
#define RELAY 667
#define RELAYLOG_SYM 668
#define RELAY_LOG_FILE_SYM 669
#define RELAY_LOG_POS_SYM 670
#define RELAY_THREAD 671
#define RELEASE_SYM 672
#define RELOAD 673
#define REMOVE_SYM 674
#define RENAME 675
#define REORGANIZE_SYM 676
#define REPAIR 677
#define REPEATABLE_SYM 678
#define REPEAT_SYM 679
#define REPLACE 680
#define REPLICATION 681
#define REQUIRE_SYM 682
#define RESET_SYM 683
#define RESIGNAL_SYM 684
#define RESOURCES 685
#define RESTORE_SYM 686
#define RESTRICT 687
#define RESUME_SYM 688
#define RETURNS_SYM 689
#define RETURN_SYM 690
#define REVOKE 691
#define RIGHT 692
#define ROLLBACK_SYM 693
#define ROLLUP_SYM 694
#define ROUTINE_SYM 695
#define ROWS_SYM 696
#define ROW_FORMAT_SYM 697
#define ROW_SYM 698
#define RTREE_SYM 699
#define SAVEPOINT_SYM 700
#define SCHEDULE_SYM 701
#define SCHEMA_NAME_SYM 702
#define SECOND_MICROSECOND_SYM 703
#define SECOND_SYM 704
#define SECURITY_SYM 705
#define SELECT_SYM 706
#define SENSITIVE_SYM 707
#define SEPARATOR_SYM 708
#define SERIALIZABLE_SYM 709
#define SERIAL_SYM 710
#define SESSION_SYM 711
#define SERVER_SYM 712
#define SERVER_OPTIONS 713
#define SET 714
#define SET_VAR 715
#define SHARE_SYM 716
#define SHIFT_LEFT 717
#define SHIFT_RIGHT 718
#define SHOW 719
#define SHUTDOWN 720
#define SIGNAL_SYM 721
#define SIGNED_SYM 722
#define SIMPLE_SYM 723
#define SLAVE 724
#define SLOW 725
#define SMALLINT 726
#define SNAPSHOT_SYM 727
#define SOCKET_SYM 728
#define SONAME_SYM 729
#define SOUNDS_SYM 730
#define SOURCE_SYM 731
#define SPATIAL_SYM 732
#define SPECIFIC_SYM 733
#define SQLEXCEPTION_SYM 734
#define SQLSTATE_SYM 735
#define SQLWARNING_SYM 736
#define SQL_BIG_RESULT 737
#define SQL_BUFFER_RESULT 738
#define SQL_CACHE_SYM 739
#define SQL_CALC_FOUND_ROWS 740
#define SQL_NO_CACHE_SYM 741
#define SQL_NO_FCACHE_SYM 742
#define SQL_SMALL_RESULT 743
#define SQL_SYM 744
#define SQL_THREAD 745
#define SSL_SYM 746
#define STARTING 747
#define STARTS_SYM 748
#define START_SYM 749
#define STATUS_SYM 750
#define NOLOCK_SYM 751
#define STDDEV_SAMP_SYM 752
#define STD_SYM 753
#define STOP_SYM 754
#define STORAGE_SYM 755
#define STRAIGHT_JOIN 756
#define STRING_SYM 757
#define SUBCLASS_ORIGIN_SYM 758
#define SUBDATE_SYM 759
#define SUBJECT_SYM 760
#define SUBPARTITIONS_SYM 761
#define SUBPARTITION_SYM 762
#define SUBSTRING 763
#define SUM_SYM 764
#define SUPER_SYM 765
#define SUSPEND_SYM 766
#define SWAPS_SYM 767
#define SWITCHES_SYM 768
#define SYSDATE 769
#define TABLES 770
#define TABLESPACE 771
#define TABLE_REF_PRIORITY 772
#define TABLE_SYM 773
#define TABLE_STATS_SYM 774
#define TABLE_CHECKSUM_SYM 775
#define TABLE_NAME_SYM 776
#define TEMPORARY 777
#define TEMPTABLE_SYM 778
#define TERMINATED 779
#define TEXT_STRING 780
#define TEXT_SYM 781
#define THAN_SYM 782
#define THEN_SYM 783
#define THREAD_STATS_SYM 784
#define TIMESTAMP 785
#define TIMESTAMP_ADD 786
#define TIMESTAMP_DIFF 787
#define TIME_SYM 788
#define TINYBLOB 789
#define TINYINT 790
#define TINYTEXT 791
#define TO_SYM 792
#define TRAILING 793
#define TRANSACTION_SYM 794
#define TRIGGERS_SYM 795
#define TRIGGER_SYM 796
#define TRIM 797
#define TRUE_SYM 798
#define TRUNCATE_SYM 799
#define TYPES_SYM 800
#define TYPE_SYM 801
#define UDF_RETURNS_SYM 802
#define ULONGLONG_NUM 803
#define UNCOMMITTED_SYM 804
#define UNDEFINED_SYM 805
#define UNDERSCORE_CHARSET 806
#define UNDOFILE_SYM 807
#define UNDO_BUFFER_SIZE_SYM 808
#define UNDO_SYM 809
#define UNICODE_SYM 810
#define UNINSTALL_SYM 811
#define UNION_SYM 812
#define UNIQUE_SYM 813
#define UNKNOWN_SYM 814
#define UNLOCK_SYM 815
#define UNSIGNED 816
#define UNTIL_SYM 817
#define UPDATE_SYM 818
#define UPGRADE_SYM 819
#define USAGE 820
#define USER 821
#define USER_STATS_SYM 822
#define USE_FRM 823
#define USE_SYM 824
#define USING 825
#define UTC_DATE_SYM 826
#define UTC_TIMESTAMP_SYM 827
#define UTC_TIME_SYM 828
#define VALUES 829
#define VALUE_SYM 830
#define VARBINARY 831
#define VARCHAR 832
#define VARIABLES 833
#define VARIANCE_SYM 834
#define VARYING 835
#define VAR_SAMP_SYM 836
#define VIEW_SYM 837
#define WAIT_SYM 838
#define WARNINGS 839
#define WEEK_SYM 840
#define WHEN_SYM 841
#define WHERE 842
#define WHILE_SYM 843
#define WITH 844
#define WITH_CUBE_SYM 845
#define WITH_ROLLUP_SYM 846
#define WORK_SYM 847
#define WRAPPER_SYM 848
#define WRITE_SYM 849
#define X509_SYM 850
#define XA_SYM 851
#define XML_SYM 852
#define XOR 853
#define YEAR_MONTH_SYM 854
#define YEAR_SYM 855
#define ZEROFILL 856




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 735 "/home/jenkins/workspace/percona-xtradb-cluster-5.5-source-tarball/sql/sql_yacc.yy"

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  struct sp_cond_type *spcondtype;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  LEX *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;
  enum enum_filetype filetype;
  enum Foreign_key::fk_option m_fk_option;
  enum enum_yes_no_unknown m_yes_no_unk;
  Diag_condition_item_name diag_condition_item_name;
  bool is_not_empty;



/* Line 2068 of yacc.c  */
#line 1303 "/home/jenkins/workspace/percona-xtradb-cluster-5.5-source-tarball/sql/sql_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




