!include "mvrecord.F90.h"
subroutine mvrecord_(ierr,nrec,unitfile)
use defs_basis
implicit none
  integer :: ierr, nrec, unitfile

  integer :: irec
  if ( nrec.gt.0 ) then
    irec = 1
    if ( irec.le.nrec ) then
      do
                ierr = 0
read(0,'(a)')
        irec = irec + 1
      while ( (logical)( irec.ne.nrec ) );
    end if
  else
    irec = 1
    if ( irec.le.0 - nrec ) then
      do
        ierr = 0
        backspace(0)
      while ( (logical)( irec.ne.0 - nrec ) );
    end if
  end if
  return
end subroutine mvrecord_
#if 0
#endif
