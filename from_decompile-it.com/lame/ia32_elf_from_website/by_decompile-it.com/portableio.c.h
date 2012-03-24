#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int ReadByte( FILE * );
int Read16BitsLowHigh( FILE * );
int Read16BitsHighLow( FILE * );
void Write8Bits( FILE *, int  );
void Write16BitsLowHigh( FILE *, int  );
void Write16BitsHighLow( FILE *, int  );
int Read24BitsHighLow( FILE * );
int Read32Bits( FILE * );
int Read32BitsHighLow( FILE * );
void Write32Bits( FILE *, int  );
void Write32BitsLowHigh( FILE *, int  );
void Write32BitsHighLow( FILE *, int  );
void ReadBytes( FILE *, char *, int  );
void ReadBytesSwapped( FILE *, char *, int  );
void WriteBytes( FILE *, char *, int  );
void WriteBytesSwapped( FILE *, char *, int  );
double ConvertFromIeeeExtended( char * );
double ReadIeeeExtendedHighLow( FILE * );
double ldexp( double , int  );
int _IO_getc( void * );
int feof( FILE * );
void __stack_chk_fail( void );
int _IO_putc( char , void * );
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
