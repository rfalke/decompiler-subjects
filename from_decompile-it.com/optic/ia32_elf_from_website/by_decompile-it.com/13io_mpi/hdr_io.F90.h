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
void hdr_io_wfftype_( integer , type(hdr_type) , integer , type(wffile_type)  );
void hdr_io_int_( integer , type(hdr_type) , integer , integer  );
void print_ij_( void );
void leave_new_( character (4), integer  );
void wrtout_( integer , character (500), character (4), integer , integer  );
void _gfortran_os_error( character * );
void _gfortran_st_write_done( void * );
void free( void * );
void _gfortran_transfer_array( void *, void *, integer , integer  );
void _gfortran_st_read_done( void * );
void _gfortran_runtime_error_at( character *, character *, ... );
void _gfortran_transfer_integer( void *, void *, integer  );
void _gfortran_runtime_error( character *, ... );
void _gfortran_st_backspace( void * );
void _gfortran_string_trim( void *, void *, integer , void * );
void _gfortran_transfer_character( void *, void *, integer  );
void _gfortran_st_write( void * );
void *malloc( unsigned int  );
void *_gfortran_internal_pack( void * );
void *memmove( void *, void *, unsigned int  );
void _gfortran_st_rewind( void * );
void _gfortran_st_read( void * );
void _gfortran_transfer_real( void *, void *, integer  );
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
