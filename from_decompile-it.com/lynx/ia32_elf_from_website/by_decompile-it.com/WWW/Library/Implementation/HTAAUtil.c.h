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
typedef HTList HTAssocList;
typedef enum  { METHOD_UNKNOWN = 0, METHOD_GET = 1, METHOD_PUT = 2, } HTAAMethod;
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
void LYUpperCase( char * );
FILE *TraceFP( void );
void outofmem( char *, char * );
int HTDoRead( int , void *, unsigned int  );
int strcasecomp( char *, char * );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
HTAssocList *HTAssocList_new( void );
void HTAssocList_add( HTAssocList *, char *, char * );
HTAAScheme HTAAScheme_enum( char * );
HTAAMethod HTAAMethod_enum( char * );
BOOLEAN HTAAMethod_inList( HTAAMethod , HTList * );
BOOLEAN HTAA_templateMatch( char *, char * );
BOOLEAN HTAA_templateCaseMatch( char *, char * );
char *HTAA_makeProtectionTemplate( char * );
HTList *HTAA_parseArgList( char * );
void HTAA_setupReader( char *, int , int  );
char *HTAA_getUnfoldedLine( void );
void *realloc( void *, unsigned int  );
char *strncpy( char *, char *, unsigned int  );
int toupper( int  );
char *strrchr( char *, char  );
void free( void * );
short **__ctype_b_loc( void );
unsigned int strlen( char * );
int fprintf( FILE *, char *, ... );
void *malloc( unsigned int  );
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
