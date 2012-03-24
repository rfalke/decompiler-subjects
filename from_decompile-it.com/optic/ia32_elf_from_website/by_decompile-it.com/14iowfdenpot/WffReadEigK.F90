!include "WffReadEigK.F90.h"
subroutine wffreadeigk_(eigen,formeig,headform,ikpt,isppol,mband,nband,tim_rwwf,wff)
use interfaces_13io_mpi
use defs_datatypes
use defs_basis
implicit none
  real(dp) :: eigen(:)
  integer :: formeig, headform, ikpt, isppol, mband, nband, tim_rwwf
  type(wffile_type) :: wff

  integer :: eax
  integer :: ch
  integer :: edx
  integer :: bh
  real(dp) :: cg_dum(2,1)
  integer :: icg
  integer :: kg_dum(:,:)
  integer :: mcg, nband_disk, npw, nspinor
  real(dp) :: occ_dum(:)
  integer :: option, optkg
  ubound/*.0*/ = mband * _gfortran_pow_i4_i4( mband * 2, formeig )
  option = 3
  mcg = 1
  icg = 0
  optkg = 0
  if ( 0.ne.0 ) then
    errorat "Attempting to allocate already allocated array '%s'", "kg_dum"
  else
    if ( ( ( ( (unsigned char)( ( ( optkg >> 31 ) & 1 ) ^ 1 ) ? 0 : optkg ) * 3 ) << 2 ).lt.0 ) then
      error "Attempt to allocate negative amount of memory. Possible integer overflow"
    end if
    if ( malloc( ( ( ( optkg.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( optkg >> 31 ) & 1 ) ^ 1 ) ? 0 : optkg ) * 3 ) << 2 ).le.0 ? ( ( optkg.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( optkg >> 31 ) & 1 ) ^ 1 ) ? 0 : optkg ) * 3 ) << 2 : 1 ).eq.0 ) then
      oserror "Out of memory"
    end if
    if ( 0.ne.0 ) then
      errorat "Attempting to allocate already allocated array '%s'", "occ_dum"
    else
      if ( ( ( (unsigned char)( ( ( mband >> 31 ) & 1 ) ^ 1 ) ? 0 : mband ) << 3 ).lt.0 ) then
        error "Attempt to allocate negative amount of memory. Possible integer overflow"
      end if
      if ( malloc( ( ( (unsigned char)( ( ( mband >> 31 ) & 1 ) ^ 1 ) ? 0 : mband ) << 3 ).le.0 ? ( (unsigned char)( ( ( mband >> 31 ) & 1 ) ^ 1 ) ? 0 : mband ) << 3 : 1 ).eq.0 ) then
        oserror "Out of memory"
      end if
      call rwwf_( cg_dum, ebp_8, formeig, headform, icg, ikpt, isppol, ebp_72&
& , mband, mcg, nband, nband_disk, npw, nspinor, eax, option, optkg, tim_rwwf&
& , "badarg" )
      if ( ebp_72.ne.0 ) then
        goto B27;
      end if
B27:;
      call free( ebp_72 )
      if ( ebp_112.eq.0 ) then
        errorat "Attempt to DEALLOCATE unallocated '%s'", "occ_dum"
      end if
      call free( ebp_112 )
      if ( 0.ne.0 ) then
        call free( 0 )
      end if
      if ( 0.ne.0 ) then
        call free( 0 )
      end if
      return
    end if
    errorat "Attempt to DEALLOCATE unallocated '%s'", "kg_dum"
B27:;
    call free( ebp_72 )
  end if
end subroutine wffreadeigk_
#if 0
#endif
