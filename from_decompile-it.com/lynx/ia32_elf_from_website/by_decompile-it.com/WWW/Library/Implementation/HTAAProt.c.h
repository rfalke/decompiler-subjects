#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
typedef HTList ItemList;
typedef struct {
     char *group_name;
     ItemList *item_list;
  } GroupDef;
typedef HTList HTAssocList;
typedef struct {
     char *ctemplate;
     char *filename;
     char *uid_name;
     char *gid_name;
     GroupDef *mask_group;
     HTList *valid_schemes;
     HTAssocList *values;
  } HTAAProt;
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
typedef enum  { LEX_NONE = 0, LEX_EOF = 1, LEX_REC_SEP = 2, LEX_FIELD_SEP = 3, LEX_ITEM_SEP = 4, LEX_OPEN_PAREN = 5, LEX_CLOSE_PAREN = 6, LEX_AT_SIGN = 7, LEX_ALPH_STR = 8, LEX_TMPL_STR = 9, } LexItem;
typedef enum  { HTAA_UNKNOWN = 0, HTAA_NONE = 1, HTAA_BASIC = 2, HTAA_PUBKEY = 3, HTAA_KERBEROS_V4 = 4, HTAA_KERBEROS_V5 = 5, HTAA_MAX_SCHEMES = 6, } HTAAScheme;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef char BOOLEAN;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
FILE *TraceFP( void );
void outofmem( char *, char * );
HTList *HTList_new( void );
void HTList_addObject( HTList *, void * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
BOOLEAN isNumber( char * );
int HTAA_getUid( void );
int HTAA_getGid( void );
void HTAA_setIds( HTAAProt *, char * );
void HTAA_parseProtFile( HTAAProt *, FILE * );
HTAAProt *HTAAProt_new( char *, char *, char * );
void HTAA_setDefaultProtection( char *, char *, char * );
void HTAA_setCurrentProtection( char *, char *, char * );
void save_gid_info( char *, int  );
void save_uid_info( char *, int  );
char *HTAA_UidToName( int  );
int HTAA_NameToUid( char * );
char *HTAA_GidToName( int  );
int HTAA_NameToGid( char * );
HTAssocList *HTAssocList_new( void );
void HTAssocList_add( HTAssocList *, char *, char * );
void unlex( LexItem  );
LexItem lex( FILE * );
HTAAScheme HTAAScheme_enum( char * );
char *HTAAScheme_name( HTAAScheme  );
GroupDef *HTAA_parseGroupDef( FILE * );
void HTAA_printGroupDef( GroupDef * );
void *getgrnam( char * );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
FILE *fopen64( char *, char * );
void free( void * );
int fclose( FILE * );
void *getpwuid( __uid_t  );
int atoi( char * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
void *getgrgid( __gid_t  );
void *getpwnam( char * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN WWW_TraceFlag;
extern char HTlex_buffer[40];
extern int HTlex_line;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
