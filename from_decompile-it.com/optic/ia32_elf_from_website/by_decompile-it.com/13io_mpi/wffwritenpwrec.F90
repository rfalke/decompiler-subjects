!include "wffwritenpwrec.F90.h"
subroutine wffwritenpwrec_(ierr,nband_disk,npw,nspinor,wff)
use interfaces_lib01hidempi
use defs_datatypes
use defs_basis
implicit none
  integer :: ierr, nband_disk, npw, nspinor
  type(wffile_type) :: wff

  ierr = 0
  if ( wff%accesswff.eq.0.or.( wff%accesswff.eq.-1.and.wff%me.eq.wff%master ) ) then
    ierr = 0
    write(0,'(a)')npw,nspinor,nband_disk
  end if
  return
end subroutine wffwritenpwrec_
#if 0
#endif
