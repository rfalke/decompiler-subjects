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
int level1_plus_count( token_type *, int  );
int var_count( token_type *, int  );
void error_huge( void );
int se_compare( token_type *, int , token_type *, int , int * );
void organize( token_type *, int * );
int simp_loop( token_type *, int * );
void simp_ssub( token_type *, int *, long , double , int , int , int  );
void simpb_side( token_type *, int *, int , int , int  );
int factor_plus( token_type *, int *, long , double  );
void group_proc( token_type *, int * );
void uf_repeat( token_type *, int * );
int uf_pplus( token_type *, int * );
int uf_power( token_type *, int * );
int uf_tsimp( token_type *, int * );
void uf_simp_no_repeat( token_type *, int * );
void uf_simp( token_type *, int * );
int vcmp( sort_type *, sort_type * );
int get_term( token_type *, int , int , int *, int * );
void term_value( double *, token_type *, int , int  );
int basic_size( token_type *, int  );
int poly_in_v( token_type *, int , long , int  );
int smart_div( token_type *, int , token_type *, int  );
void save_factors( token_type *, int *, int , int , int  );
int is_integer_var( long  );
int is_integer_expr( token_type *, int  );
int remove_factors( void );
int find_greatest_power( token_type *, int , long *, double *, int *, int *, int * );
int find_highest_count( token_type *, int , token_type *, int , long * );
int poly_div( token_type *, int , token_type *, int , long * );
int do_gcd( long * );
int pdiv_recurse( token_type *, int *, int , int , int  );
int div_remainder( token_type *, int *, int , int  );
int mod_recurse( token_type *, int *, int , int  );
int mod_simp( token_type *, int * );
int poly_gcd( token_type *, int , token_type *, int , long  );
int poly2_gcd( token_type *, int , token_type *, int , long  );
int polydiv_recurse( token_type *, int *, int , int  );
int poly_gcd_simp( token_type *, int * );
int pf_sub( token_type *, int *, int , int , int , int  );
int pf_recurse( token_type *, int *, int , int , int  );
int poly_factor( token_type *, int *, int  );
int differentiate( token_type *, int *, long  );
char *var_name( long  );
int list_var( long , int  );
int list_proc( token_type *, int , int  );
void list_debug( int , token_type *, int , token_type *, int  );
double fmod( double , double  );
void qsort( void *, unsigned int , unsigned int , void * );
void __longjmp_chk( void *[1], int  );
int __fprintf_chk( void *, int , char *, ... );
int _setjmp( void *[1] );
int strncasecmp( char *, char *, unsigned int  );
void *memmove( void *, void *, unsigned int  );
int strncmp( char *, char *, unsigned int  );
void *__memmove_chk( void *, void *, unsigned int , unsigned int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int n_tokens;
extern token_type *tlhs;
extern FILE *gfp;
extern jmp_buf jmp_save;
extern token_type *trhs;
extern token_type *scratch;
extern token_type zero_token;
extern token_type one_token;
extern int debug_level;
extern int partial_flag;
extern int n_tlhs;
extern int n_trhs;
extern char var_str[180];
extern int case_sensitive_flag;
extern int n_divisor;
extern token_type quotient[30000];
extern int n_quotient;
extern token_type gcd_divisor[30000];
extern int len_d;
/* Warning:  conflicting decls for divisor */
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
