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
typedef struct __dirstream DIR;
struct __dirstream  ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void exit_db( void );
void print_error( int , char *, ... );
void print_done( void );
char *basename( char * );
void mkdir_s( char *, char * );
int chop( char * );
int insert_str( char *, int , char ** );
int delete_str( int , char ** );
int find_pos( char *, char **, int  );
void dump_str( FILE *, char ** );
void get_package_name( char *, char * );
char *nc_fgets( char *, int , FILE * );
char *nc_fgets_html( char *, int , FILE * );
int is_text( char * );
char *nc_fgets_nb( char *, int , FILE * );
void dump_ascii( char *, char * );
void dump_plain( char *, char * );
void dump_html( char *, char * );
void list_binaries( char * );
int binaries_exist( char *, char * );
int check_filetype( char * );
void wget_extension( char * );
void su( char *, char * );
int *__errno_location( void );
int sprintf( char *, char *, ... );
void srand( unsigned int  );
char *strerror( int  );
char *strchr( char *, char  );
int system( char * );
char *fgets( char *, int , void * );
void *readdir( DIR * );
void free( void * );
int mkstemp( char * );
DIR *opendir( char * );
int fclose( void * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
void *fopen( char *, char * );
char *strcpy( char *, char * );
int close( int  );
unsigned int fwrite( void *, unsigned int , unsigned int , void * );
int fprintf( void *, char *, ... );
char *strstr( char *, char * );
int remove( char * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int fputc( int , void * );
char *strtok( char *, char * );
int rand( void );
char *strdup( char * );
int strcmp( char *, char * );
void exit( int  );
int atexit( void * );
int stat( char *, void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern int VERBOSE;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
