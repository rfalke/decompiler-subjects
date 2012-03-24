!include "leave_new.F90.h"
subroutine leave_new_(mode_paral)
use interfaces_01manage_mpi
use interfaces_00basis
use defs_basis
implicit none
  character(4) :: mode_paral

  character(500) :: message
  write(0,'(a)')ch10,' leave_new : decision taken to exit ...'
  call wrtout_( "", message, "PERS", 500, 4 )
  call leave_myproc_( )
  return
end subroutine leave_new_
#if 0
#endif
