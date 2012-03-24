#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef struct {
     char *str;
     int len;
  } bstring;
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
int UPPER8( int , int  );
FILE *TraceFP( void );
void outofmem( char *, char * );
int strcasecomp8( char *, char * );
int strncasecomp8( char *, char *, int  );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
int strcasecomp_asterisk( char *, char * );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
void HTSAFree_extra( char * );
char *HTSACopy_extra( char **, char * );
char *HTNextTok( char **, char *, char *, char * );
char *HTAlloc( char *, size_t  );
char *StrAllocVsprintf( char **, size_t , char *, va_list * );
char *HTSprintf( char **, char *, ... );
char *HTSprintf0( char **, char *, ... );
char *HTQuoteParameter( char * );
int HTCountCommandArgs( char * );
char *HTAfterCommandArg( char *, int  );
void HTAddXpand( char **, char *, int , char * );
void HTAddToCmd( char **, char *, int , char * );
void HTAddParam( char **, char *, int , char * );
void HTEndParam( char **, char *, int  );
void HTSABCopy( bstring **, char *, int  );
void HTSABCopy0( bstring **, char * );
void HTSABCat( bstring **, char *, int  );
void HTSABCat0( bstring **, char * );
BOOLEAN HTSABEql( bstring *, bstring * );
void HTSABFree( bstring ** );
bstring *HTBprintf( bstring **, char *, ... );
void trace_bstring2( char *, int  );
void trace_bstring( bstring * );
int memcmp( void *, void *, unsigned int  );
void *realloc( void *, unsigned int  );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
void free( void * );
short **__ctype_b_loc( void );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *strcpy( char *, char * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
void *malloc( unsigned int  );
int fputc( int , FILE * );
int vasprintf( char **, char *, void * );
int tolower( int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
