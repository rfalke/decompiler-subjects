!include "wffreadskiprec.F90.h"
subroutine wffreadskiprec_(ierr,nrec,wff)
use interfaces_11util
use defs_datatypes
use defs_basis
implicit none
  integer :: ierr, nrec
  type(wffile_type) :: wff

  ierr = 0
  if ( wff%accesswff.eq.0.or.( wff%accesswff.eq.-1.and.wff%me.eq.wff%master ) ) then
    call mvrecord_( ierr, nrec, wff%unwff )
  end if
  return
end subroutine wffreadskiprec_
#if 0
#endif
