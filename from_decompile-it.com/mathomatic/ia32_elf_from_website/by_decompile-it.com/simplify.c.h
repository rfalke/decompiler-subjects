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
typedef struct {
     long v;
     int count;
  } sort_type;
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
int min_level( token_type *, int  );
void error_huge( void );
void warning( char * );
int check_divide_by_zero( double  );
void check_err( void );
void error_bug( char * );
int subst_constants( token_type *, int * );
void binary_parenthesize( token_type *, int , int  );
void org_up_level( token_type *, token_type *, int , int  );
int org_recurse( token_type *, int *, int , int , int * );
int simpb_vcmp( sort_type *, sort_type * );
int div_imaginary( token_type *, int * );
int simp2_power( token_type *, int * );
int simp_constant_power( token_type *, int * );
int rationalize( token_type *, int * );
int order_recurse( token_type *, int *, int , int  );
int reorder( token_type *, int * );
int elim_sign( token_type *, int * );
int simp_pp( token_type *, int * );
int compare_recurse( token_type *, int , int , token_type *, int , int , int * );
int se_compare( token_type *, int , token_type *, int , int * );
int elim_k( token_type *, int * );
int calc( int *, double *, int , double  );
int const_recurse( token_type *, int *, int , int , int  );
int combine_constants( token_type *, int *, int  );
int integer_root_simp( token_type *, int * );
void organize( token_type *, int * );
void elim_loop( token_type *, int * );
int simp_loop( token_type *, int * );
void simp_divide( token_type *, int * );
void factorv( token_type *, int *, long  );
void simp_equation( int  );
void simp2_divide( token_type *, int *, long , int  );
void simp_ssub( token_type *, int *, long , double , int , int , int  );
void simpb_side( token_type *, int *, int , int , int  );
void simple_frac_side( token_type *, int * );
void simpv_side( token_type *, int *, long  );
void simp_side( token_type *, int * );
void calc_simp( token_type *, int * );
void simps_side( token_type *, int *, int  );
void simp_i( token_type *, int * );
void simpa_side( token_type *, int *, int , int  );
void simpa_repeat_side( token_type *, int *, int , int  );
int factor_power( token_type *, int * );
int factor_times( token_type *, int * );
int factor_plus( token_type *, int *, long , double  );
int subtract_itself( token_type *, int * );
int factor_divide( token_type *, int *, long , double  );
int super_factor( token_type *, int *, int  );
int fractions_and_group( token_type *, int * );
void uf_neg_help( token_type *, int * );
int unsimp_power( token_type *, int * );
void uf_repeat( token_type *, int * );
void uf_allpower( token_type *, int * );
int uf_pplus( token_type *, int * );
int uf_power( token_type *, int * );
int uf_times( token_type *, int * );
int ufactor( token_type *, int * );
int uf_tsimp( token_type *, int * );
void uf_simp( token_type *, int * );
int div_remainder( token_type *, int *, int , int  );
int mod_simp( token_type *, int * );
int poly_gcd_simp( token_type *, int * );
int poly_factor( token_type *, int *, int  );
void approximate_complex_roots( token_type *, int * );
complexs complex_pow( complexs , complexs  );
void list_debug( int , token_type *, int , token_type *, int  );
int f_to_fraction( double , double *, double * );
int make_fractions( token_type *, int * );
double multiply_out_unique( void );
int factor_constants( token_type *, int *, int  );
int factor_one( double  );
double fmod( double , double  );
int *__errno_location( void );
void qsort( void *, unsigned int , unsigned int , void * );
void __longjmp_chk( void *[1], int  );
int __fprintf_chk( void *, int , char *, ... );
int __printf_chk( int , char *, ... );
int __isinf( double  );
void pow( void *, void *, void *, void * );
double modf( double , void * );
double exp( double  );
int _setjmp( void *[1] );
int __finite( double  );
double lgamma( double  );
void __stack_chk_fail( void );
void *memmove( void *, void *, unsigned int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int n_tokens;
extern token_type *tlhs;
extern FILE *gfp;
extern jmp_buf jmp_save;
extern int abort_flag;
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern token_type *tes;
extern token_type *scratch;
extern int approximate_roots;
extern int debug_level;
extern int domain_check;
extern int partial_flag;
extern int symb_flag;
extern int sign_cmp_flag;
extern int repeat_flag;
extern int n_tlhs;
extern int n_tes;
extern int preserve_surds;
extern int rationalize_denominators;
extern int modulus_mode;
extern int signgam;
extern double epsilon;
extern double unique[];
extern int ucnt[];
extern int uno;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
