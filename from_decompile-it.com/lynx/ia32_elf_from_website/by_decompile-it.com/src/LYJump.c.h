#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
typedef enum  { NORECALL = 0, RECALL_URL = 1, RECALL_CMD = 2, RECALL_MAIL = 3, } RecallType;
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
typedef char BOOLEAN;
typedef struct _JumpDatum JumpDatum;
struct _JumpDatum {
     char *key;
     char *url;
  } ;
struct JumpTable {
     int key;
     int nel;
     char *msg;
     char *file;
     char *shortcut;
     HTList *history;
     JumpDatum *table;
     struct JumpTable *next;
     char *mp;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
char *LYstrncpy( char *, char *, int  );
char *LYSkipBlanks( char * );
int LYgetstr( char *, int , size_t , RecallType  );
char *LYstrstr( char *, char * );
void HTAlert( char * );
void HTInfoMsg( char * );
void LYSleepAlert( void );
void user_message( char *, char * );
FILE *TraceFP( void );
void statusline( char * );
void LYFreeStringList( HTList * );
int remap( char *, char *, BOOLEAN  );
void outofmem( char *, char * );
void LYJumpTable_free( void );
void LYAddJumpShortcut( HTList *, char * );
BOOLEAN LYJumpInit( char * );
char *LYJump( int  );
unsigned int LYRead_Jumpfile( struct JumpTable * );
int LYCompare( void *, void * );
HTList *HTList_new( void );
void HTList_addObject( HTList *, void * );
BOOLEAN HTList_removeObject( HTList *, void * );
int HTList_count( HTList * );
void *HTList_objectAt( HTList *, int  );
int strcasecomp( char *, char * );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
void *bsearch( void *, void *, unsigned int , unsigned int , void * );
int open64( char *, int , ... );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
int toupper( int  );
int read( int , void *, unsigned int  );
char *gettext( char * );
void free( void * );
short **__ctype_b_loc( void );
unsigned int strlen( char * );
char *strcpy( char *, char * );
int close( int  );
int fprintf( FILE *, char *, ... );
void *malloc( unsigned int  );
char *strtok( char *, char * );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
int stat64( char *, void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN mustshow;
extern BOOLEAN jump_buffer;
extern char *jumpprompt;
extern char *jumpfile;
extern struct JumpTable  *JThead;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
