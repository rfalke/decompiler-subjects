#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
struct struct_parts {
     char *access;
     char *host;
     char *absolute;
     char *relative;
     char *search;
     char *anchor;
  } ;
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
char *LYRemoveBlanks( char * );
FILE *TraceFP( void );
UrlTypes is_url( char * );
void outofmem( char *, char * );
void LYFillLocalFileURL( char **, char * );
void scan( char *, struct struct_parts * );
char *strchr_or_end( char *, int  );
char *HTParsePort( char *, int * );
char *HTParse( char *, char *, int  );
char *HTParseAnchor( char * );
void HTSimplify( char * );
char *HTRelative( char *, char * );
char *HTEscape( char *, unsigned char  );
char *HTEscapeUnsafe( char * );
char *HTEscapeSP( char *, unsigned char  );
char from_hex( char  );
char *HTUnEscape( char * );
char *HTUnEscapeSome( char *, char * );
void HTMake822Word( char **, int  );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
void *strtol( char *, char **, int  );
void free( void * );
short **__ctype_b_loc( void );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *strcpy( char *, char * );
int fprintf( FILE *, char *, ... );
void __stack_chk_fail( void );
char *strcat( char *, char * );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
