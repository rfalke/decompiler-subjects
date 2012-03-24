!include "hdr_skip.F90.h"
subroutine hdr_skip_int_(unitfi,ierr)
use interfaces_13io_mpi
use defs_datatypes
use defs_basis
implicit none
  integer :: unitfi, ierr

  type(wffile_type) :: wff
  wff%unwff = unitfi
  wff%accesswff = 0
  wff%me = 0
  wff%master = 0
  call hdr_skip_wfftype_( "badarg" )
  return
end subroutine hdr_skip_int_
subroutine hdr_skip_wfftype_(wff,ierr)
use defs_datatypes
use defs_basis
implicit none
  type(wffile_type) :: wff
  integer :: ierr

  character(6) :: codvsn
  integer :: headform
  integer :: integers(17)
  integer :: mu, npsp, unit, usepaw
  unit = wff%unwff
  ierr = 0
  if ( wff%accesswff.eq.0.or.( wff%accesswff.eq.-1.and.wff%me.eq.wff%master ) ) then
    rewind(0)
    read(0,'(a)')codvsn(1),headform
    if ( headform.eq.1 ) then
      goto B11;
    else
    if ( headform.eq.2 ) then
      goto B11;
    else
    if ( headform.eq.51 ) then
      goto B11;
    else
    if ( headform.eq.52 ) then
      goto B11;
    else
    if ( headform.eq.101 ) then
      goto B11;
    else
    if ( headform.eq.102 ) then
      goto B11;
    else
      if ( headform.le.43 ) then
        read(0,'(a)')integers(1,:,:),npsp
      else
        read(0,'(a)')integers(1,:,:),npsp,integers(15,:,:),usepaw
      end if
      mu = 1
      if ( mu.le.npsp + 2 ) then
        do
          read(0,'(a)')
          mu = mu + 1
        while ( (logical)( mu.ne.npsp + 2 ) );
      end if
      if ( headform.gt.43.and.usepaw.eq.1 ) then
        read(0,'(a)')
        read(0,'(a)')
      end if
    end if
    end if
    end if
    end if
    end if
    end if
B11:;
    headform = 22
  end if
  return
end subroutine hdr_skip_wfftype_
#if 0
#endif
