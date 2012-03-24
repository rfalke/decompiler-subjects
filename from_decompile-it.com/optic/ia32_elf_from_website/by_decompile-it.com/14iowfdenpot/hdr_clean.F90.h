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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void hdr_clean_( type(hdr_type)  );
void free( void * );
void _gfortran_runtime_error_at( character *, character *, ... );
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
