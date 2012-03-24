#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
struct pawrhoij_type {
     integer lmn_size;
     integer lmn2_size;
     integer lmnmix_sz;
     integer ngrhoij;
     integer nspden;
     integer nsppol;
     integer nrhoijsel(:);
     integer kpawmix(:);
     integer rhoijselect(:,:);
     real(dp) grhoij(:,:,:);
     real(dp) rhoij_(:,:);
     real(dp) rhoijp(:,:);
     real(dp) rhoijres(:,:);
  } ;
struct hdr_type {
     integer bantot;
     integer date;
     integer headform;
     integer intxc;
     integer ixc;
     integer natom;
     integer nkpt;
     integer npsp;
     integer nspden;
     integer nspinor;
     integer nsppol;
     integer nsym;
     integer ntypat;
     integer occopt;
     integer pertcase;
     integer usepaw;
     integer ngfft(3);
     integer istwfk(:);
     integer lmn_size(:);
     integer nband(:);
     integer npwarr(:);
     integer pspcod(:);
     integer pspdat(:);
     integer pspso(:);
     integer pspxc(:);
     integer so_typat(:);
     integer symafm(:);
     integer symrel(:,:,:);
     integer typat(:);
     real(dp) ecut;
     real(dp) ecutdg;
     real(dp) ecutsm;
     real(dp) ecut_eff;
     real(dp) etot;
     real(dp) fermie;
     real(dp) residm;
     real(dp) qptn(3);
     real(dp) rprimd(3,3);
     real(dp) stmbias;
     real(dp) tphysel;
     real(dp) tsmear;
     real(dp) kptns(:,:);
     real(dp) occ(:);
     real(dp) tnons(:,:);
     real(dp) wtk(:);
     real(dp) xred(:,:);
     real(dp) zionpsp(:);
     real(dp) znuclpsp(:);
     real(dp) znucltypat(:);
     character codvsn(6);
     character title(:,132);
     struct pawrhoij_type  pawrhoij(:);
     character __pad(24);
  } ;
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
void MAIN__( ... );
void linopt_( integer , real(dp) , integer , real(dp) (:), integer , real(dp) (3,3,:), integer , real(dp) (:,:,:), real(dp) (:,:,:), real(dp) , complex(dp) (:,:,:,3,:), integer , integer , integer , real(dp) , real(dp) , real(dp) , character (256), integer  );
void nlinopt_( integer , real(dp) , integer , real(dp) (:), integer , real(dp) (3,3,:), integer , real(dp) (:,:,:), real(dp) , complex(dp) (:,:,:,3,:), integer , integer , integer , integer , real(dp) , real(dp) , real(dp) , real(dp) , character (256), integer  );
void hdr_clean_( type(hdr_type)  );
void wffreadeigk_( real(dp) (:), integer , integer , integer , integer , integer , integer , integer , type(wffile_type)  );
void getwtk_( real(dp) (3,:), integer , integer , integer (3,3,:), real(dp) (:) );
void pmat2cart_( real(dp) (2,:,:,:,:), real(dp) (2,:,:,:,:), real(dp) (2,:,:,:,:), integer , integer , integer , complex(dp) (:,:,:,3,:), real(dp) (3,3) );
void hdr_io_wfftype_( integer , type(hdr_type) , integer , type(wffile_type)  );
void hdr_skip_wfftype_( type(wffile_type) , integer  );
void wffclose_( type(wffile_type) , integer  );
void wffopen_( integer , integer , character (132), integer , type(wffile_type) , integer , integer , integer , integer  );
void metric_( real(dp) (3,3), real(dp) (3,3), integer , real(dp) (3,3), real(dp) (3,3), real(dp)  );
void sym2cart_( real(dp) (3,3), integer , real(dp) (3,3), integer (3,3,:), real(dp) (3,3,:) );
void int2char4_( integer , character (4), integer  );
void mati3inv_( integer (3,3), integer (3,3) );
void matr3inv_( real(dp) (3,3), real(dp) (3,3) );
void herald_( character (24), character (6), integer , integer , integer  );
void _gfortran_os_error( character * );
void _gfortran_st_open( void * );
void _gfortran_st_write_done( void * );
void *memset( void *, integer , unsigned int  );
void free( void * );
void _gfortran_transfer_array( void *, void *, integer , integer  );
void _gfortran_st_read_done( void * );
void _gfortran_set_options( integer , integer (0) );
void _gfortran_internal_unpack( void *, void * );
void _gfortran_concat_string( integer , void *, integer , void *, integer , void * );
void _gfortran_runtime_error_at( character *, character *, ... );
void _gfortran_transfer_integer( void *, void *, integer  );
void _gfortran_st_close( void * );
void _gfortran_runtime_error( character *, ... );
void _gfortran_string_trim( void *, void *, integer , void * );
void _gfortran_transfer_character( void *, void *, integer  );
void _gfortran_st_write( void * );
void *malloc( unsigned int  );
void *_gfortran_internal_pack( void * );
void *memmove( void *, void *, unsigned int  );
void _gfortran_st_rewind( void * );
void _gfortran_st_read( void * );
void _gfortran_transfer_real( void *, void *, integer  );
void _gfortran_stop_numeric( integer  );
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
