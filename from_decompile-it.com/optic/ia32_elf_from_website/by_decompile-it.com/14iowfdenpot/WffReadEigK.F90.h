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
void wffreadeigk_( real(dp) (:), integer , integer , integer , integer , integer , integer , integer , type(wffile_type)  );
void rwwf_( real(dp) (2,:), real(dp) (:), integer , integer , integer , integer , integer , integer (3,:), integer , integer , integer , integer , integer , integer , real(dp) (:), integer , integer , integer , type(wffile_type)  );
void _gfortran_os_error( character * );
void free( void * );
void _gfortran_runtime_error_at( character *, character *, ... );
void _gfortran_runtime_error( character *, ... );
void *malloc( unsigned int  );
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
