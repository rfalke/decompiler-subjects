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
int next_sign( long * );
int found_var( token_type *, int , long  );
int min_level( token_type *, int  );
void error_huge( void );
void error( char * );
void check_err( void );
int flip( token_type *, int *, token_type *, int * );
int g_of_f( int , token_type *, token_type *, int *, token_type *, int * );
int quad_solve( long  );
int solve_sub( token_type *, int , token_type *, int *, token_type *, int * );
int solve_espace( int , int  );
char *parse_var( long *, char * );
int se_compare( token_type *, int , token_type *, int , int * );
int simp_loop( token_type *, int * );
void factorv( token_type *, int *, long  );
void simp_ssub( token_type *, int *, long , double , int , int , int  );
void calc_simp( token_type *, int * );
void simps_side( token_type *, int *, int  );
int factor_plus( token_type *, int *, long , double  );
int super_factor( token_type *, int *, int  );
int uf_power( token_type *, int * );
int ufactor( token_type *, int * );
int uf_tsimp( token_type *, int * );
void uf_simp( token_type *, int * );
int get_constant( token_type *, int , double * );
int parse_complex( token_type *, int , complexs * );
complexs complex_div( complexs , complexs  );
complexs complex_log( complexs  );
int list_var( long , int  );
int list_proc( token_type *, int , int  );
void list_debug( int , token_type *, int , token_type *, int  );
int f_to_fraction( double , double *, double * );
double fmod( double , double  );
int *__errno_location( void );
int __fprintf_chk( void *, int , char *, ... );
int __printf_chk( int , char *, ... );
void __stack_chk_fail( void );
void *memmove( void *, void *, unsigned int  );
int __snprintf_chk( char *, unsigned int , int , unsigned int , char *, ... );
void *__memmove_chk( void *, void *, unsigned int , unsigned int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int n_tokens;
extern token_type *tlhs;
extern FILE *gfp;
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern token_type *trhs;
extern token_type *scratch;
extern token_type zero_token;
extern token_type one_token;
extern int debug_level;
extern int partial_flag;
extern int symb_flag;
extern int n_tlhs;
extern int n_trhs;
extern int precision;
extern int symblify;
extern char var_str[180];
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
