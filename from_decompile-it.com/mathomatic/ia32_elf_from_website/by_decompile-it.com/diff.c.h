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
typedef struct complexs complexs;
struct complexs {
     double re;
     double im;
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
int found_var( token_type *, int , long  );
int solved_equation( int  );
int no_vars( token_type *, int , long * );
int exp_contains_nan( token_type *, int  );
int exp_contains_infinity( token_type *, int  );
int strcmp_tospace( char *, char * );
int is_all( char * );
char *skip_space( char * );
char *skip_param( char * );
long decstrtol( char *, char ** );
int return_result( int  );
char *get_string( char *, int  );
int get_expr( token_type *, int * );
void copy_espace( int , int  );
void error_huge( void );
void subst_var_with_exp( token_type *, int *, token_type *, int , long  );
void warning( char * );
int alloc_next_espace( void );
void error( char * );
int prompt_var( long * );
int current_not_defined( void );
int next_espace( void );
void error_bug( char * );
int solve_sub( token_type *, int , token_type *, int *, token_type *, int * );
char *parse_var2( long *, char * );
int my_strlcpy( char *, char *, int  );
void binary_parenthesize( token_type *, int , int  );
int isvarchar( int  );
char *parse_var( long *, char * );
char *parse_expr( token_type *, int *, char * );
void organize( token_type *, int * );
void elim_loop( token_type *, int * );
int simp_loop( token_type *, int * );
void simpa_side( token_type *, int *, int , int  );
void uf_simp( token_type *, int * );
int limit_cmd( char * );
int d_recurse( token_type *, int *, int , int , long  );
int differentiate( token_type *, int *, long  );
int taylor_cmd( char * );
int extrema_cmd( char * );
int derivative_cmd( char * );
int parse_complex( token_type *, int , complexs * );
complexs complex_log( complexs  );
int list_var( long , int  );
void list_debug( int , token_type *, int , token_type *, int  );
int __fprintf_chk( void *, int , char *, ... );
int __printf_chk( int , char *, ... );
void __stack_chk_fail( void );
void *memmove( void *, void *, unsigned int  );
int __snprintf_chk( char *, unsigned int , int , unsigned int , char *, ... );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int n_tokens;
extern int cur_equation;
extern token_type *tlhs;
extern char prompt_str[80];
extern FILE *gfp;
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern token_type *tes;
extern token_type *scratch;
extern token_type zero_token;
extern token_type one_token;
extern int debug_level;
extern int symb_flag;
extern int input_column;
extern int n_tlhs;
extern int symblify;
extern char var_str[180];
extern int n_tes;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
