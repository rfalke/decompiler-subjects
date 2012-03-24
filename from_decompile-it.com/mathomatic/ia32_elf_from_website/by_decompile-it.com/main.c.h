#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
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
typedef union {
     double constant;
     long variable;
     int operatr;
  } storage_type;
typedef struct {
     enum kind_list { CONSTANT = 0, VARIABLE = 1, OPERATOR = 2, } kind;
     int level;
     storage_type token;
  } token_type;
typedef struct _IO_FILE FILE;
typedef int __jmp_buf[6];
typedef struct {
     unsigned long __val[32];
  } __sigset_t;
struct __jmp_buf_tag {
     __jmp_buf __jmpbuf;
     int __mask_was_saved;
     __sigset_t __saved_mask;
  } ;
typedef struct __jmp_buf_tag  jmp_buf[1];
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void fphandler( int  );
void exit_program( int  );
void exithandler( int  );
void alarmhandler( int  );
void inthandler( int  );
void usage( void );
void resizehandler( int  );
int load_rc( void );
int set_signals( void );
void main_io_loop( void );
int main( int , char ** );
void init_gvars( void );
char *get_string( char *, int  );
void clean_up( void );
void get_screen_size( void );
void error( char * );
int init_mem( void );
int process( char * );
void set_error_level( char * );
int set_options( char * );
int read_file( char * );
void default_color( void );
void reset_attr( void );
int f_to_fraction( double , double *, double * );
int rl_initialize( void );
int write_history( char * );
int __fprintf_chk( void *, int , char *, ... );
void *signal( int , void * );
int __printf_chk( int , char *, ... );
int read_history( char * );
char *getenv( char * );
char *fgets( char *, int , void * );
int tigetnum( char * );
int fclose( void * );
int _setjmp( void *[1] );
int getopt( void * );
void *fopen( char *, char * );
void stifle_history( int  );
void __stack_chk_fail( void );
void using_history( void );
int __snprintf_chk( char *, unsigned int , int , unsigned int , char *, ... );
void exit( int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern struct _IO_FILE  *stderr;
extern int optind;
extern int rl_inhibit_completion;
extern int n_tokens;
extern int cur_equation;
extern token_type *tlhs;
extern int screen_columns;
extern int screen_rows;
extern int color_flag;
extern int bold_colors;
extern int html_flag;
extern int readline_enabled;
extern char *prog_name;
extern char prompt_str[80];
extern char rc_file[4096];
extern char *history_filename;
extern char history_filename_storage[4096];
extern FILE *default_out;
extern FILE *gfp;
extern jmp_buf jmp_save;
extern int test_mode;
extern int quiet_mode;
extern int abort_flag;
extern int security_level;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
