!include "sym2cart.F90.h"
subroutine sym2cart_(gprimd,nsym,rprimd,symrel,symcart)
use defs_basis
implicit none
  real(dp) :: gprimd(3,3)
  integer :: nsym
  real(dp) :: rprimd(3,3)
  integer :: symrel(3,3,:)
  real(dp) :: symcart(3,3,:)

  integer :: ecx
  integer :: ch
  integer :: edx
  integer :: isym
  real(dp) :: rsym(3,3), rsymcart(3,3)
  real(dp) :: tmp(3,3)
  ubound/*.2*/ = nsym
  ubound/*.0*/ = nsym
  isym = 1
  if ( isym.le.nsym ) then
    do
      do 3
        do 3
          rsym(1, ( 1 * 3 ) + -4 + 1+1 ) = dble( *(int*,1 + 5) )
        end do
      end do
      call dgemm_( "N", "N", "", "", "", "", rprimd(1), "", rsym(1), "", ""&
& , tmp(1), "" )
      call dgemm_( "N", "N", "", "", "", "", tmp(1), "", gprimd(1), "", ""&
& , rsymcart(1), "" )
      do 3
        do 3
        end do
      end do
      isym = isym + 1
    while ( (logical)( nsym.ne.isym ) );
  end if
  return
end subroutine sym2cart_
#if 0
#endif
