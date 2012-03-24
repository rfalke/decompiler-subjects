#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _HTChunk HTChunk;
struct _HTChunk {
     int size;
     int growby;
     int allocated;
     char *data;
     int failok;
     HTChunk *next;
  } ;
typedef unsigned int size_t;
typedef long UCode_t;
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
FILE *TraceFP( void );
void outofmem( char *, char * );
void HTChunkInit( HTChunk *, int  );
HTChunk *HTChunkCreate( int  );
HTChunk *HTChunkCreateMayFail( int , int  );
HTChunk *HTChunkCreate2( int , size_t  );
void HTChunkClear( HTChunk * );
void HTChunkFree( HTChunk * );
BOOLEAN HTChunkRealloc( HTChunk *, int  );
void HTChunkPutc( HTChunk *, char  );
HTChunk *HTChunkPutc2( HTChunk *, char  );
void HTChunkEnsure( HTChunk *, int  );
void HTChunkPutb( HTChunk *, char *, int  );
HTChunk *HTChunkPutb2( HTChunk *, char *, int  );
void HTChunkPutUtf8Char( HTChunk *, UCode_t  );
void HTChunkTerminate( HTChunk * );
void HTChunkPuts( HTChunk *, char * );
HTChunk *HTChunkPuts2( HTChunk *, char * );
void *realloc( void *, unsigned int  );
void *calloc( unsigned int , unsigned int  );
void free( void * );
void *memcpy( void *, void *, unsigned int  );
int fprintf( FILE *, char *, ... );
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
