#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef enum  { HT_Invalid = 0, HT_Map = 1, HT_Pass = 2, HT_Fail = 3, HT_DefProt = 4, HT_Protect = 5, HT_Progress = 6, HT_InfoMsg = 7, HT_UserMsg = 8, HT_Alert = 9, HT_AlwaysAlert = 10, HT_Redirect = 11, HT_RedirectPerm = 12, HT_PermitRedir = 13, HT_UseProxy = 14, } HTRuleOp;
typedef struct _rule rule;
struct _rule {
     struct _rule *next;
     HTRuleOp op;
     char *pattern;
     char *equiv;
     char *condition_op;
     char *condition;
  } ;
typedef enum  { mediaINT = 1, mediaEXT = 2, mediaCFG = 4, mediaUSR = 8, mediaSYS = 16, mediaOpt1 = 1, mediaOpt2 = 5, mediaOpt3 = 13, mediaOpt4 = 29, mediaALL = 31, } AcceptMedia;
typedef struct _IO_FILE FILE;
struct _IO_marker {
     struct _IO_marker *_next;
     struct _IO_FILE *_sbuf;
     int _pos;
  } ;
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned int size_t;
struct _IO_FILE {
     int _flags;
     char *_IO_read_ptr;
     char *_IO_read_end;
     char *_IO_read_base;
     char *_IO_write_base;
     char *_IO_write_ptr;
     char *_IO_write_end;
     char *_IO_buf_base;
     char *_IO_buf_end;
     char *_IO_save_base;
     char *_IO_backup_base;
     char *_IO_save_end;
     struct _IO_marker *_markers;
     struct _IO_FILE *_chain;
     int _fileno;
     int _flags2;
     __off_t _old_offset;
     unsigned short _cur_column;
     char _vtable_offset;
     char _shortbuf[1];
     _IO_lock_t *_lock;
     __off64_t _offset;
     void *__pad1;
     void *__pad2;
     void *__pad3;
     void *__pad4;
     size_t __pad5;
     int _mode;
     char _unused2[40];
  } ;
typedef char BOOLEAN;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void HTAlert( char * );
void HTAlwaysAlert( char *, char * );
void HTInfoMsg( char * );
void HTUserMsg2( char *, char * );
void HTProgress( char * );
FILE *TraceFP( void );
void LYFixCursesOn( char * );
void outofmem( char *, char * );
void HTSetSuffix5( char *, char *, char *, char *, double  );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTNextField( char ** );
char *HTSprintf0( char **, char *, ... );
int HTAddRule( HTRuleOp , char *, char *, char *, char * );
void HTClearRules( void );
BOOLEAN rule_cond_ok( rule * );
char *HTTranslate( char * );
int HTSetConfiguration( char * );
int HTLoadRules( char * );
void HTSetPresentation( char *, char *, char *, double , double , double , long , AcceptMedia  );
void HTAA_setDefaultProtection( char *, char *, char * );
void HTAA_setCurrentProtection( char *, char *, char * );
void HTAA_clearProtections( void );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
char *fgets( char *, int , FILE * );
FILE *fopen64( char *, char * );
char *gettext( char * );
void free( void * );
int fclose( FILE * );
unsigned int strlen( char * );
int fprintf( FILE *, char *, ... );
void __stack_chk_fail( void );
int sscanf( char *, char *, ... );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern BOOLEAN LYUserSpecifiedURL;
extern int redirection_attempts;
extern BOOLEAN HTPermitRedir;
extern char *redirecting_url;
extern BOOLEAN permanent_redirection;
extern BOOLEAN WWW_TraceFlag;
extern char *HTBinDir;
extern char *HTSearchScript;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
