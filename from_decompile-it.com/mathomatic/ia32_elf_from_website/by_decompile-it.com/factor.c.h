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
int min_level( token_type *, int  );
void error_huge( void );
void binary_parenthesize( token_type *, int , int  );
int se_compare( token_type *, int , token_type *, int , int * );
int fpower_recurse( token_type *, int *, int , int  );
int factor_power( token_type *, int * );
int ftimes_recurse( token_type *, int *, int , int  );
int factor_times( token_type *, int * );
int big_fplus( token_type *, int , int , int , int , int , int , int , int , int , int , int , int , int , int , int  );
int fplus_recurse( token_type *, int *, int , int , long , double , int , int  );
int factor_plus( token_type *, int *, long , double  );
int subtract_itself( token_type *, int * );
int factor_divide( token_type *, int *, long , double  );
double fmod( double , double  );
double modf( double , void * );
void *memmove( void *, void *, unsigned int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int n_tokens;
extern token_type *scratch;
extern token_type one_token;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
