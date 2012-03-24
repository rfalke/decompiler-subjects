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
void wffopen_( integer , integer , character (132), integer , type(wffile_type) , integer , integer , integer , integer  );
void leave_new_( character (4), integer  );
void wrtout_( integer , character (500), character (4), integer , integer  );
void _gfortran_st_open( void * );
void _gfortran_st_write_done( void * );
void _gfortran_transfer_integer( void *, void *, integer  );
void _gfortran_transfer_character( void *, void *, integer  );
void _gfortran_st_write( void * );
void *memmove( void *, void *, unsigned int  );
void _gfortran_st_rewind( void * );
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
