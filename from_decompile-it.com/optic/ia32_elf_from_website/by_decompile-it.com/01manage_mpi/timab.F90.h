#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void leave_new_( character (4), integer  );
void timab_( integer , integer , real(dp) (2) );
void timein_( real(dp) , real(dp)  );
void wrtout_( integer , character (500), character (4), integer , integer  );
void _gfortran_st_write_done( void * );
void *memset( void *, integer , unsigned int  );
void _gfortran_transfer_integer( void *, void *, integer  );
void _gfortran_transfer_character( void *, void *, integer  );
void _gfortran_st_write( void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern real(dp) acctim(2,599);
extern integer ncount(599);
extern integer timopt;
extern real(dp) tzero(2,599);
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
