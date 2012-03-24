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
void error_huge( void );
int reorder( token_type *, int * );
void organize( token_type *, int * );
int simp_loop( token_type *, int * );
void group_proc( token_type *, int * );
int patch_root_div( token_type *, int * );
void uf_neg_help( token_type *, int * );
int unsimp_power( token_type *, int * );
int sub_ufactor( token_type *, int *, int  );
void uf_repeat_always( token_type *, int * );
void uf_repeat( token_type *, int * );
void uf_allpower( token_type *, int * );
int uf_pplus( token_type *, int * );
int uf_power( token_type *, int * );
int uf_times( token_type *, int * );
int ufactor( token_type *, int * );
int uf_tsimp( token_type *, int * );
void uf_simp_no_repeat( token_type *, int * );
void uf_simp( token_type *, int * );
double fmod( double , double  );
int __finite( double  );
void *memmove( void *, void *, unsigned int  );
double ceil( double  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int n_tokens;
extern token_type *scratch;
extern int partial_flag;
extern int rationalize_denominators;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
