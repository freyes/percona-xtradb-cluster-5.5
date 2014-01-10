Description: Bison 3 compatibility.
Origin: https://raw.github.com/joyent/pkgsrc-joyent/master/percona55-cluster/patches/patch-sql_sql__yacc.yy

--- a/sql/sql_yacc.yy
+++ b/sql/sql_yacc.yy
@@ -26,8 +26,6 @@
 ** The type will be void*, so it must be  cast to (THD*) when used.
 ** Use the YYTHD macro for this.
 */
-#define YYPARSE_PARAM yythd
-#define YYLEX_PARAM yythd
 #define YYTHD ((THD *)yythd)
 #define YYLIP (& YYTHD->m_parser_state->m_lip)
 #define YYPS (& YYTHD->m_parser_state->m_yacc)
@@ -76,7 +74,7 @@ int yylex(void *yylval, void *yythd);
     ulong val= *(F);                          \
     if (my_yyoverflow((B), (D), &val))        \
     {                                         \
-      yyerror((char*) (A));                   \
+      yyerror(yythd, (char*) (A));            \
       return 2;                               \
     }                                         \
     else                                      \
@@ -174,7 +172,7 @@ void my_parse_error(const char *s)
   to abort from the parser.
 */
 
-void MYSQLerror(const char *s)
+void MYSQLerror(void *yythd, const char *s)
 {
   THD *thd= current_thd;
 
@@ -780,7 +778,9 @@ static bool add_create_index (LEX *lex,
 bool my_yyoverflow(short **a, YYSTYPE **b, ulong *yystacksize);
 %}
 
-%pure_parser                                    /* We have threads */
+%pure-parser                                    /* We have threads */
+%parse-param { void *yythd }
+%lex-param { void *yythd }
 /*
   Currently there are 168 shift/reduce conflicts.
   We should not introduce new conflicts any more.
