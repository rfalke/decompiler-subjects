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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int min_level( token_type *, int  );
void error( char * );
int my_strlcpy( char *, char *, int  );
int make_fractions_and_group( int  );
char *var_name( long  );
void trim_zeros( char * );
int int_expr( token_type *, int  );
int list_var( long , int  );
int list_code( token_type *, int *, enum language_list  , int  );
int list_c_equation( int , enum language_list  , int  );
void set_color( int  );
int flist_recurse( token_type *, int , int , int , int , int , int *, int * );
int list_string_sub( token_type *, int , int , char *, int  );
int list_string( token_type *, int , char *, int  );
char *list_expression( token_type *, int , int  );
char *list_equation( int , int  );
int list_proc( token_type *, int , int  );
void list_debug( int , token_type *, int , token_type *, int  );
int list1_sub( int , int  );
void default_color( void );
int flist_sub( token_type *, int , int , int , int *, int * );
int flist_equation( int  );
int list_sub( int  );
void reset_attr( void );
void factor_int_sub( int  );
double fmod( double , double  );
int __fprintf_chk( void *, int , char *, ... );
int __printf_chk( int , char *, ... );
void perror( char * );
int fflush( void * );
short **__ctype_b_loc( void );
char *strcpy( char *, char * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int __snprintf_chk( char *, unsigned int , int , unsigned int , char *, ... );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern int screen_columns;
extern int color_flag;
extern int bold_colors;
extern int html_flag;
extern FILE *gfp;
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern int debug_level;
extern int high_prec;
extern char *var_names[8000];
extern int precision;
extern char var_str[180];
extern int negate_highest_precedence;
extern int factor_int_flag;
extern int display2d;
extern int finance_option;
extern int power_starstar;
extern int cur_color;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
