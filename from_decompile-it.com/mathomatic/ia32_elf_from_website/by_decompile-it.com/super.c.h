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
void organize( token_type *, int * );
void elim_loop( token_type *, int * );
int sf_recurse( token_type *, int *, int , int , int  );
void group_recurse( token_type *, int *, int , int  );
void group_proc( token_type *, int * );
int super_factor( token_type *, int *, int  );
int fractions_and_group( token_type *, int * );
int make_fractions_and_group( int  );
int poly2_gcd( token_type *, int , token_type *, int , long  );
int make_fractions( token_type *, int * );
void *memmove( void *, void *, unsigned int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int n_tokens;
extern token_type *tlhs;
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern token_type *trhs;
extern token_type *scratch;
extern int n_tlhs;
extern int n_trhs;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
