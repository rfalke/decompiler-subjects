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
typedef char sign_array_type[64];
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int next_sign( long * );
int is_all( char * );
char *skip_space( char * );
long decstrtol( char *, char ** );
void error_huge( void );
void warning( char * );
void error( char * );
int extra_characters( char * );
void error_bug( char * );
int var_is_const( long , double * );
int subst_constants( token_type *, int * );
int my_strlcpy( char *, char *, int  );
void remove_trailing_spaces( char * );
void set_error_level( char * );
void binary_parenthesize( token_type *, int , int  );
void give_priority( token_type *, int * );
void handle_negate( token_type *, int * );
int isvarchar( int  );
char *parse_var( long *, char * );
void put_up_arrow( int , char * );
char *parse_section( token_type *, int *, char *, int  );
void str_tolower( char * );
char *parse_expr( token_type *, int *, char * );
char *parse_equation( int , char * );
void organize( token_type *, int * );
int list_proc( token_type *, int , int  );
int *__errno_location( void );
int __fprintf_chk( void *, int , char *, ... );
int __printf_chk( int , char *, ... );
double strtod( char *, char ** );
char *strchr( char *, char  );
void *strtol( char *, char **, int  );
short **__ctype_b_loc( void );
int isatty( int  );
int strcasecmp( char *, char * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int strncasecmp( char *, char *, unsigned int  );
void *memmove( void *, void *, unsigned int  );
void *__ctype_tolower_loc( void );
char *strpbrk( char *, char * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int n_tokens;
extern int cur_equation;
extern int html_flag;
extern FILE *gfp;
extern int n_equations;
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern int input_column;
extern char *var_names[8000];
extern sign_array_type sign_array;
extern int case_sensitive_flag;
extern char special_variable_characters[256];
extern int right_associative_power;
extern int negate_highest_precedence;
extern int point_flag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
