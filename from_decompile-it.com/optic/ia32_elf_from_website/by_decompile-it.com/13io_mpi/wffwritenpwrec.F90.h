#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
struct wffile_type {
     integer unwff;
     integer accesswff;
     integer formwff;
     integer kgwff;
     character fname(132);
     integer master;
     integer me;
     integer nproc;
     integer spacecomm;
     integer fhwff;
     integer nboct_int;
     integer nboct_dp;
     integer nboct_ch;
     integer lght_recs;
     long offwff;
     long off_recs;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void wffwritenpwrec_( integer , integer , integer , integer , type(wffile_type)  );
void _gfortran_st_write_done( void * );
void _gfortran_transfer_integer( void *, void *, integer  );
void _gfortran_st_write( void * );
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
