#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int guint;
typedef struct _GtsFile GtsFile;
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
typedef char gchar;
typedef struct _GString GString;
typedef unsigned int gsize;
struct _GString {
     gchar *str;
     gsize len;
     gsize allocated_len;
  } ;
enum  { GTS_NONE = 256, GTS_INT = 512, GTS_UINT = 1024, GTS_FLOAT = 2048, GTS_DOUBLE = 4096, GTS_STRING = 8192, GTS_FILE = 16384, GTS_ERROR = 32768, };
typedef enum  { GTS_NONE = 256, GTS_INT = 512, GTS_UINT = 1024, GTS_FLOAT = 2048, GTS_DOUBLE = 4096, GTS_STRING = 8192, GTS_FILE = 16384, GTS_ERROR = 32768, } GtsTokenType;
typedef int gint;
struct _GtsFile {
     FILE *fp;
     gchar *s;
     gchar *s1;
     guint line;
     guint pos;
     GString *token;
     GtsTokenType type;
     gchar *error;
     guint curline;
     guint curpos;
     guint scope;
     guint scope_max;
     gint next_token;
     gchar *delimiters;
     gchar *comments;
     gchar *tokens;
  } ;
typedef void *gpointer;
typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef struct _GtsFileVariable GtsFileVariable;
enum  { GTS_NONE = 256, GTS_INT = 512, GTS_UINT = 1024, GTS_FLOAT = 2048, GTS_DOUBLE = 4096, GTS_STRING = 8192, GTS_FILE = 16384, GTS_ERROR = 32768, };
typedef gint gboolean;
struct _GtsFileVariable {
     GtsTokenType type;
     gchar name[30];
     gboolean unique;
     gpointer data;
     gboolean set;
     guint line;
     guint pos;
  } ;
enum  { GTS_NONE = 256, GTS_INT = 512, GTS_UINT = 1024, GTS_FLOAT = 2048, GTS_DOUBLE = 4096, GTS_STRING = 8192, GTS_FILE = 16384, GTS_ERROR = 32768, };
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
guint gts_file_read( GtsFile *, gpointer , guint , guint  );
void gts_file_verror( GtsFile *, gchar *, va_list  );
void gts_file_variable_error( GtsFile *, GtsFileVariable *, gchar *, gchar *, ... );
void gts_file_error( GtsFile *, gchar *, ... );
gint gts_file_getc( GtsFile * );
gint gts_file_getc_scope( GtsFile * );
void gts_file_destroy( GtsFile * );
GtsFile *file_new( void );
void gts_file_next_token( GtsFile * );
GtsFileVariable *gts_file_assign_next( GtsFile *, GtsFileVariable * );
void gts_file_assign_start( GtsFile *, GtsFileVariable * );
void gts_file_assign_variables( GtsFile *, GtsFileVariable * );
void gts_file_first_token_after( GtsFile *, GtsTokenType  );
GtsFile *gts_file_new_from_string( gchar * );
GtsFile *gts_file_new( FILE * );
void g_free( gpointer  );
gchar *g_strdup( gchar * );
double strtod( char *, char ** );
gpointer g_malloc( gsize  );
GString *g_string_new( gchar * );
void *strtol( char *, char **, int  );
void g_assertion_message_expr( char *, char *, int , char *, char * );
gchar *g_string_free( GString *, gboolean  );
gchar *g_strdup_vprintf( gchar *, va_list  );
void g_return_if_fail_warning( char *, char *, char * );
int fgetc( void * );
GString *g_string_insert_c( GString *, void *, gchar  );
void g_assertion_message( char *, char *, int , char *, char * );
int strncmp( char *, char *, unsigned int  );
unsigned int fread( void *, unsigned int , unsigned int , void * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
