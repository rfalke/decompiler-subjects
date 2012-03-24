!include "mati3inv.F90.h"
subroutine mati3inv_(mm,mit)
use interfaces_01manage_mpi
use defs_basis
implicit none
  integer :: mm(3,3), mit(3,3)

  integer :: ecx
  integer :: dd
  character(500) :: message
  integer :: tt(3,3)
  tt(1,1) = ( mm(3,3) * mm(2,2) ) - ( mm(3,2) * mm(2,3) )
  tt(1,2) = ( mm(3,1) * mm(2,3) ) - ( mm(3,3) * mm(2,1) )
  tt(1,3) = ( mm(3,2) * mm(2,1) ) - ( mm(3,1) * mm(2,2) )
  tt(2,1) = ( mm(3,2) * mm(1,3) ) - ( mm(3,3) * mm(1,2) )
  tt(2,2) = ( mm(3,3) * mm(1,1) ) - ( mm(3,1) * mm(1,3) )
  tt(2,3) = ( mm(3,1) * mm(1,2) ) - ( mm(3,2) * mm(1,1) )
  tt(3,1) = ( mm(2,3) * mm(1,2) ) - ( mm(2,2) * mm(1,3) )
  tt(3,2) = ( mm(2,1) * mm(1,3) ) - ( mm(2,3) * mm(1,1) )
  tt(3,3) = ( mm(2,2) * mm(1,1) ) - ( mm(2,1) * mm(1,2) )
  dd = ( mm(1,1) * tt(1,1) ) + ( tt(1,2) * mm(1,2) ) + ( tt(1,3) * mm(1,3) )
  if ( dd.ne.0 ) then
    do 3
      do 3
        mit(1,1) = tt(1, ( 1 * 3 ) + -4 + 1+1 ) / dd
      end do
    end do
  else
    write(0,'(a)')ch10,' mati3inv : BUG -',ch10,'  Attempting to invert integer array'&
& ,ch10,mm(1,1,:,:),'   ==> determinant is zero.'
    call wrtout_( "", message, "COLL", 500, 4 )
    call leave_new_( "COLL", 4 )
  end if
  return
end subroutine mati3inv_
#if 0
#endif
