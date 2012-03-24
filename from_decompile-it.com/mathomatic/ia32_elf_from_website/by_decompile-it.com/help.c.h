#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
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
typedef struct _IO_FILE FILE;
typedef struct {
     char *name;
     char *secondary_name;
     int (*func)( void );
     char *usage;
     char *info;
     char *extra;
  } com_type;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void init_gvars( void );
int exp_is_numeric( token_type *, int  );
int is_all( char * );
char *skip_space( char * );
long decstrtol( char *, char ** );
int return_result( int  );
void error( char * );
int next_espace( void );
void error_bug( char * );
void set_sign_array( void );
int solve_espace( int , int  );
int display_command( int  );
char *parse_var2( long *, char * );
int shell_out( char * );
int parse( int , char * );
int process_parse( int , char * );
int process( char * );
int display_process( char * );
int read_examples( char ** );
int help_cmd( char * );
int my_strlcpy( char *, char *, int  );
void remove_trailing_spaces( char * );
void set_error_level( char * );
char *parse_var( long *, char * );
char *parse_equation( int , char * );
int quit_cmd( char * );
int fraction_cmd( char * );
int unfactor_cmd( char * );
int factor_cmd( char * );
int echo_cmd( char * );
int version_report( void );
int version_cmd( char * );
int copy_cmd( char * );
int replace_cmd( char * );
int approximate_cmd( char * );
int variables_cmd( char * );
int code_cmd( char * );
int list_cmd( char * );
int save_cmd( char * );
int clear_cmd( char * );
int divide_cmd( char * );
int compare_cmd( char * );
int tally_cmd( char * );
int imaginary_cmd( char * );
int real_cmd( char * );
int pause_cmd( char * );
int set_cmd( char * );
int push_cmd( char * );
int optimize_cmd( char * );
int product_cmd( char * );
int sum_cmd( char * );
int solve_cmd( char * );
int plot_cmd( char * );
int read_cmd( char * );
int edit_cmd( char * );
int display_cmd( char * );
int eliminate_cmd( char * );
int simplify_cmd( char * );
int calculate_cmd( char * );
int limit_cmd( char * );
int taylor_cmd( char * );
int extrema_cmd( char * );
int derivative_cmd( char * );
int nintegrate_cmd( char * );
int laplace_cmd( char * );
int integrate_cmd( char * );
int roots_cmd( char * );
void default_color( void );
void reset_attr( void );
double fmod( double , double  );
int *__errno_location( void );
int __fprintf_chk( void *, int , char *, ... );
int __printf_chk( int , char *, ... );
char *getenv( char * );
int system( char * );
void perror( char * );
void free( void * );
int access( char *, int  );
short **__ctype_b_loc( void );
int fclose( void * );
void *fopen( char *, char * );
void __stack_chk_fail( void );
int strncasecmp( char *, char *, unsigned int  );
void *memmove( void *, void *, unsigned int  );
char *__strdup( char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern struct _IO_FILE  *stderr;
extern int cur_equation;
extern int screen_rows;
extern int html_flag;
extern FILE *default_out;
extern FILE *gfp;
extern int security_level;
extern int n_equations;
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern token_type *tes;
extern token_type zero_token;
extern int debug_level;
extern int input_column;
extern int repeat_flag;
extern int autosolve;
extern int autocalc;
extern int autoselect;
extern int pull_number;
extern char *license_string;
extern char *example_strings[18];
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
