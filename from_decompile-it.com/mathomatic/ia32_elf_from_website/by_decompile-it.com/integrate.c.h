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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int solved_equation( int  );
int min_level( token_type *, int  );
int exp_contains_infinity( token_type *, int  );
int strcmp_tospace( char *, char * );
char *skip_param( char * );
long decstrtol( char *, char ** );
int return_result( int  );
int get_expr( token_type *, int * );
void error_huge( void );
void subst_var_with_exp( token_type *, int *, token_type *, int , long  );
void warning( char * );
void error( char * );
int extra_characters( char * );
int prompt_var( long * );
int current_not_defined( void );
int next_espace( void );
char *parse_var2( long *, char * );
int subst_constants( token_type *, int * );
int my_strlcpy( char *, char *, int  );
int isvarchar( int  );
char *parse_var( long *, char * );
void elim_loop( token_type *, int * );
int simp_loop( token_type *, int * );
void simp_divide( token_type *, int * );
void factorv( token_type *, int *, long  );
void simpa_side( token_type *, int *, int , int  );
int ufactor( token_type *, int * );
void uf_simp( token_type *, int * );
int poly_in_v( token_type *, int , long , int  );
int nintegrate_cmd( char * );
void make_powers( token_type *, int *, long  );
int int_dispatch( token_type *, int *, long , int (*)( void ) );
int laplace_cmd( char * );
int laplace_sub( token_type *, int *, int , int , long  );
int inv_laplace_sub( token_type *, int *, int , int , long  );
int integrate_sub( token_type *, int *, int , int , long  );
int integrate_cmd( char * );
int list_var( long , int  );
double fmod( double , double  );
int __printf_chk( int , char *, ... );
double strtod( char *, char ** );
void __stack_chk_fail( void );
int strncasecmp( char *, char *, unsigned int  );
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
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern token_type *trhs;
extern token_type *scratch;
extern token_type zero_token;
extern int approximate_roots;
extern int debug_level;
extern int partial_flag;
extern int n_tlhs;
extern int n_trhs;
extern int precision;
extern char var_str[180];
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
