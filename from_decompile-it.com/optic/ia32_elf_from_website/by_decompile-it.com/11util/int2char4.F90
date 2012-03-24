!include "int2char4.F90.h"
subroutine int2char4_(iint,string)
use interfaces_01manage_mpi
use defs_basis
implicit none
  integer :: iint
  character(4) :: string

  character(500) :: message
  if ( iint.lt.0.or.iint.gt.9999 ) then
    write(0,'(a)')ch10,' int2char4: ERROR -',ch10,'  The integer argument should be between 0 and 9999, while'&
& ,ch10,'  it is ',iint
    call wrtout_( "", message, "COLL", 500, 4 )
    call leave_new_( "COLL", 4 )
  end if
  if ( iint.le.9 ) then
    write(0,'(a)')iint
  else
  if ( iint.le.99 ) then
    write(0,'(a)')iint
  else
  if ( iint.le.999 ) then
    write(0,'(a)')iint
  else
    write(0,'(a)')iint
  end if
  end if
  end if
  return
end subroutine int2char4_
#if 0
#endif
