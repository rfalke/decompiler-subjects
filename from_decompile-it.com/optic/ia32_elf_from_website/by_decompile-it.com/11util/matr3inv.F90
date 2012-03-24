!include "matr3inv.F90.h"
subroutine matr3inv_(aa,ait)
use defs_basis
implicit none
  real(dp) :: aa(3,3), ait(3,3)

  real(dp) :: dd, t1, t2, t3
  t1 = ( aa(3,3) * aa(2,2) ) - ( aa(3,2) * aa(2,3) )
  t2 = ( aa(3,1) * aa(2,3) ) - ( aa(3,3) * aa(2,1) )
  t3 = ( aa(3,2) * aa(2,1) ) - ( aa(3,1) * aa(2,2) )
  dd = 1.000000000000 / ( ( aa(1,1) * t1 ) + ( aa(1,2) * t2 ) + ( aa(1,3) * t3 ) )
  ait(1,1) = t1 * dd
  ait(1,2) = t2 * dd
  ait(1,3) = t3 * dd
  ait(2,1) = dd * ( ( aa(3,2) * aa(1,3) ) - ( aa(3,3) * aa(1,2) ) )
  ait(2,2) = dd * ( ( aa(3,3) * aa(1,1) ) - ( aa(3,1) * aa(1,3) ) )
  ait(2,3) = dd * ( ( aa(3,1) * aa(1,2) ) - ( aa(3,2) * aa(1,1) ) )
  ait(3,1) = dd * ( ( aa(2,3) * aa(1,2) ) - ( aa(2,2) * aa(1,3) ) )
  ait(3,2) = dd * ( ( aa(2,1) * aa(1,3) ) - ( aa(2,3) * aa(1,1) ) )
  ait(3,3) = dd * ( ( aa(2,2) * aa(1,1) ) - ( aa(2,1) * aa(1,2) ) )
  return
end subroutine matr3inv_
#if 0
#endif
