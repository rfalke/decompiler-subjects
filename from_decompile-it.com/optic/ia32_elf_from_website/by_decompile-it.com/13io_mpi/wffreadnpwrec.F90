!include "wffreadnpwrec.F90.h"
subroutine wffreadnpwrec_(ierr,ikpt,nband_disk,npw,nspinor,wff)
use interfaces_lib01hidempi
use interfaces_11util
use interfaces_01manage_mpi
use defs_datatypes
use defs_basis
implicit none
  integer :: ierr, ikpt, nband_disk, npw, nspinor
  type(wffile_type) :: wff

  ierr = 0
  if ( wff%accesswff.eq.0.or.( wff%accesswff.eq.-1.and.wff%me.eq.wff%master ) ) then
    ierr = 0
    read(0,'(a)')npw,nspinor,nband_disk
  end if
  return
end subroutine wffreadnpwrec_
#if 0
#endif
