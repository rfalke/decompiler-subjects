!include "wffclose.F90.h"
subroutine wffclose_(wff,ier)
use interfaces_01manage_mpi
use defs_datatypes
use defs_basis
implicit none
  type(wffile_type) :: wff
  integer :: ier

  ier = 0
  if ( wff%accesswff.ne.0 ) then
    if ( wff%accesswff.eq.-1.and.wff%me.eq.wff%master ) then
      close(0)
    end if
  else
    close(0)
  end if
  return
end subroutine wffclose_
#if 0
#endif
