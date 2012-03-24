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
void exit_tmp( void );
void print_error( int , char *, ... );
void print_warning( char *, ... );
void print_done( void );
char *basename( char * );
void mkdir_s( char *, char * );
void get_package_name( char *, char * );
char *nc_fgets_nb( char *, int , FILE * );
void dump_ascii( char *, char * );
void dump_plain( char *, char * );
void dump_html( char *, char * );
void list_binaries( char * );
int check_filetype( char * );
void su( char *, char * );
void register_extension( char *, char *, char *, int , int , int  );
void deregister_extension( char *, char *, char * );
void check_dependencies( char *, char *, char * );
void register_entries_gisman( char *, char * );
void register_entries_gisman2( char *, char * );
int deregister_entries_gisman( char *, char * );
void deregister_entries_gisman2( char *, char * );
int restore_entries_gisman( char * );
void register_html( char *, char *, int , int , int  );
void deregister_html( char *, char * );
int restore_html( char * );
void check_extension( char *, char *, int *, int *, int * );
void unpack_extension( char * );
void query_extension( char *, char *, int , int , int , char *, char *, char * );
void print_cfg( void );
void source_install( char *, char *, char *, int , int , int , char * );
void bin_install( char *, char *, char *, char *, int , int , int , char * );
void test_install( char *, char *, char *, int , int , int , char * );
void uninstall( char *, char *, char *, char * );
int source_clean( char * );
void restore( char *, char * );
void list_extensions( char * );
void run_post( char *, int , char *, char * );
int fputs( char *, void * );
int *__errno_location( void );
int sprintf( char *, char *, ... );
int open( char *, int , ... );
char *strerror( int  );
int __isoc99_fscanf( void *, char *, ... );
int __isoc99_sscanf( char *, char *, ... );
int system( char * );
char *fgets( char *, int , void * );
void *strtol( char *, char **, int  );
void free( void * );
int mkstemp( char * );
int fclose( void * );
void *memcpy( void *, void *, unsigned int  );
void *fopen( char *, char * );
char *strcpy( char *, char * );
int chdir( char * );
int putenv( char * );
int close( int  );
unsigned int fwrite( void *, unsigned int , unsigned int , void * );
int fprintf( void *, char *, ... );
int remove( char * );
void __stack_chk_fail( void );
int fputc( int , void * );
char *strtok( char *, char * );
char *getcwd( char *, unsigned int  );
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
extern struct _IO_FILE  *stderr;
extern char GINSTALL_DST[2048];
extern char GINSTALL_INC[2048];
extern char GINSTALL_LIB[2048];
extern char UNINSTALL_BASE[2048];
extern char GEM_EXT_NAME[2048];
extern char GEM_EXT_VERSION[2048];
extern char GEM_EXT_DESCR[2048];
extern char GEM_EXT_INFO[2048];
extern char GEM_EXT_DEPS[2048];
extern char GEM_EXT_BUGS[2048];
extern char GEM_EXT_AUTHORS[2048];
extern char GEM_GRASS_DIR[2048];
extern char GEM_ACTION[2048];
extern char INSTALL_BASE[2048];
extern char INSTALL_TYPE[2048];
extern char GEM_FORCE[2048];
extern char GEM_VERBOSE[2048];
extern char GEM_GUI[2048];
extern char EXT_BASE[2048];
extern int VERBOSE;
extern char TMPDIR[2048];
extern char TMPDB[2048];
extern char TMP_GISMAN[2048];
extern char TMP_DESCR[2048];
extern char TMP_INFO[2048];
extern char TMP_DEPS[2048];
extern char TMP_BUGS[2048];
extern char TMP_AUTHORS[2048];
extern char TMP_NULL[2048];
extern char TMP_HTML[2048];
extern int FORCE;
extern int SKIP_CFG;
extern char GISMAN_CMD[2048];
extern char GISMAN2_CMD[2048];
extern char HTML_CMD[2048];
extern char UNINSTALL_CMD[2048];
extern char CONFIG_OPTS[2048];
extern char CONFIG_CMD[2048];
extern char MAKE_CMD[2048];
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
