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
void rwwf_( real(dp) (2,:), real(dp) (:), integer , integer , integer , integer , integer , integer (3,:), integer , integer , integer , integer , integer , integer , real(dp) (:), integer , integer , integer , type(wffile_type)  );
void writewf_( void );
void wffreadnpwrec_( integer , integer , integer , integer , integer , type(wffile_type)  );
void wffreadskiprec_( integer , integer , type(wffile_type)  );
void wffwritenpwrec_( integer , integer , integer , integer , type(wffile_type)  );
void leave_new_( character (4), integer  );
void timab_( integer , integer , real(dp) (2) );
void wrtout_( integer , character (500), character (4), integer , integer  );
void _gfortran_st_write_done( void * );
void _gfortran_transfer_array( void *, void *, integer , integer  );
void _gfortran_st_read_done( void * );
void _gfortran_transfer_integer( void *, void *, integer  );
void _gfortran_transfer_character( void *, void *, integer  );
void _gfortran_st_write( void * );
void _gfortran_st_read( void * );
void _gfortran_transfer_real( void *, void *, integer  );
integer _gfortran_pow_i4_i4( integer , integer  );
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
