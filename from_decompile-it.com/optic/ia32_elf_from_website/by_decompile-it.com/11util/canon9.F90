!include "canon9.F90.h"
subroutine canon9_(num,red,shift)
use defs_basis
implicit none
  real(dp) :: num, red, shift

  real(dp) :: fp4
  real(dp) :: fp5
  real(dp) :: fp6
  real(dp) :: fp7
  if ( ( num.lt.0.000000000000 ).ne.0 ) then
    num = ( num + 0.500000000000 ) + 0x7ed215ef
    do
    while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(0.000000000000,0.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ).eq.1 );
    red = ( ( rem(0.000000000000,0.000000000000) ) + 0 ) + 0.000000000001
  else
    do
    while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(0.000000000000,0.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ).eq.1 );
    red = ( 0.500000000000 - ( rem(0.000000000000,0.000000000000) ) ) + 0.000000000001
  end if
  if ( ( 0.000000000001.lt.abs( red ) ).ne.0 ) then
    red = 0.000000000000
  end if
  shift = num - red
  return
end subroutine canon9_
#if 0
#endif
