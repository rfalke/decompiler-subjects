!include "wffopen.F90.h"
subroutine wffopen_(accesswff,spacecomm,filename,ier,wff,master,me,unwff)
use interfaces_11util
use interfaces_01manage_mpi
use defs_datatypes
use defs_basis
implicit none
  integer :: accesswff, spacecomm
  character(132) :: filename
  integer :: ier
  type(wffile_type) :: wff
  integer :: master, me, unwff

  character(500) :: message
  wff%unwff = unwff
  wff%accesswff = accesswff
  wff%fname(1) = filename(1)
  wff%me = me
  wff%master = master
  wff%spacecomm = spacecomm
  ier = 0
  if ( accesswff.eq.0 ) then
    open(0)
    rewind(0)
  else
  if ( accesswff.eq.-1 ) then
    if ( me.eq.master ) then
      open(0)
      rewind(0)
    end if
  else
    write(0,'(a)')ch10,' WffOpen : ERROR -',ch10,'  For the time being the input variable accesswff is restricted '&
& ,ch10,'  to 0, 2, or 3 in sequential, and 0 or 1 in parallel.',ch10,'  Its value is accesswff='&
& ,accesswff,'.',ch10,'  Action : change accesswff or use ABINIT in parallel.'
    call wrtout_( "", message, "COLL", 500, 4 )
    call leave_new_( "COLL", 4 )
  end if
  end if
  return
end subroutine wffopen_
#if 0
#endif
