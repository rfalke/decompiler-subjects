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
void hdr_skip_int_( integer , integer  );
void hdr_skip_wfftype_( type(wffile_type) , integer  );
void _gfortran_transfer_array( void *, void *, integer , integer  );
void _gfortran_st_read_done( void * );
void _gfortran_transfer_integer( void *, void *, integer  );
void _gfortran_transfer_character( void *, void *, integer  );
void _gfortran_st_rewind( void * );
void _gfortran_st_read( void * );
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
