#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct complexs complexs;
struct complexs {
     double re;
     double im;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int complex_fixup( complexs * );
complexs complex_mult( complexs , complexs  );
complexs complex_div( complexs , complexs  );
complexs complex_exp( complexs  );
complexs complex_log( complexs  );
complexs complex_pow( complexs , complexs  );
double exp( double  );
double atan2( double , double  );
double log( double  );
void sincos( double , void *, void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
