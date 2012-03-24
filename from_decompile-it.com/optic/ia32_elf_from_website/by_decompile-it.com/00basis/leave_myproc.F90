!include "leave_myproc.F90.h"
subroutine leave_myproc_()
use defs_basis
implicit none

  logical :: testopen
  inquire(0)
  if ( testopen ) then
    close(0)
  end if
  stop 1
end subroutine leave_myproc_
#if 0
#endif
