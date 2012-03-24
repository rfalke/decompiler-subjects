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
void print_warning( char *, ... );
int chop( char * );
int insert_str( char *, int , char ** );
int delete_str( int , char ** );
int find_pos( char *, char **, int  );
char *nc_fgets_nb( char *, int , FILE * );
int is_submenu( char * );
int check_ext_menu( char ** );
int new_submenu( char *, char *, char ** );
int new_item( char *, char *, char **, int  );
void register_entries_gisman( char *, char * );
void register_entries_gisman2( char *, char * );
int deregister_entries_gisman( char *, char * );
void deregister_entries_gisman2( char *, char * );
int restore_entries_gisman( char * );
int *__errno_location( void );
int sprintf( char *, char *, ... );
char *strerror( int  );
void rewind( void * );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
char *strncpy( char *, char *, unsigned int  );
char *fgets( char *, int , void * );
char *strrchr( char *, char  );
void *readdir( DIR * );
void free( void * );
int fflush( void * );
int mkstemp( char * );
DIR *opendir( char * );
int fclose( void * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
void *fopen( char *, char * );
char *strcpy( char *, char * );
int closedir( DIR * );
int fprintf( void *, char *, ... );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
char *strtok( char *, char * );
int strcmp( char *, char * );
int atexit( void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int VERBOSE;
extern char TMP_GISMAN[2048];
extern char TMP_NULL[2048];
extern char GISMAN_CMD[2048];
extern char GISMAN2_CMD[2048];
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
