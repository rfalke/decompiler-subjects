!include "getwtk.F90.h"
subroutine getwtk_(kpt,nkpt,nsym,symrel,wtk)
use interfaces_11util
use defs_basis
implicit none
  real(dp) :: kpt(3,:)
  integer :: nkpt, nsym, symrel(3,3,:)
  real(dp) :: wtk(:)

  integer :: eax
  integer :: ch
  integer :: edx
  integer :: bh
  real(dp) :: fp7
  real(dp) :: dkpt(3)
  integer :: ikpt, istar, isym, itim
  real(dp) :: (*kptstar)(3,:)
  integer :: new, nkpt_tot
  integer :: (*nstar)(:)
  real(dp) :: (*rsymrel)(3,3,:)
  real(dp) :: shift
  real(dp) :: symkpt(3)
  real(dp) :: timsign, tmp
  real(dp) :: tsymkpt(3)
  ubound/*.8*/ = nsym
  ubound/*.0*/ = nkpt
  ubound/*.10*/ = nkpt
  ubound/*.2*/ = nsym * ( nkpt * 2 )
  if ( ( ( (unsigned char)( ( ( ( ubound/*.2*/ * 3 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.2*/ * 3 ) << 3 ).lt.0 ) then
    error "Attempt to allocate a negative amount of memory."
  end if
  if ( malloc( ( ( (unsigned char)( ( ( ( ubound/*.2*/ * 3 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.2*/ * 3 ) << 3 ).le.0 ? ( (unsigned char)( ( ( ( ubound/*.2*/ * 3 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.2*/ * 3 ) << 3 : 1 ).eq.0 ) then
    oserror "Memory allocation failed"
  end if
  kptstar = malloc( ( ( (unsigned char, ( ( ( ubound/*.2*/ * 3 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.2*/ * 3 ) << 3 ).le.0 ? ( (unsigned char, ( ( ( ubound/*.2*/ * 3 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.2*/ * 3 ) << 3 : 1 )
  ubound/*.4*/ = nkpt
  if ( ( ( (unsigned char)( ( ( ubound/*.4*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.4*/ ) << 2 ).lt.0 ) then
    error "Attempt to allocate a negative amount of memory."
  end if
  if ( malloc( ( ( (unsigned char)( ( ( ubound/*.4*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.4*/ ) << 2 ).le.0 ? ( (unsigned char)( ( ( ubound/*.4*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.4*/ ) << 2 : 1 ).eq.0 ) then
    oserror "Memory allocation failed"
  end if
  nstar = malloc( ( ( (unsigned char, ( ( ubound/*.4*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.4*/ ) << 2 ).le.0 ? ( (unsigned char, ( ( ubound/*.4*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.4*/ ) << 2 : 1 )
  ubound/*.6*/ = nsym
  if ( ( ( (unsigned char)( ( ( ( ubound/*.6*/ * 9 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.6*/ * 9 ) << 3 ).lt.0 ) then
    error "Attempt to allocate a negative amount of memory."
  end if
  if ( malloc( ( ( (unsigned char)( ( ( ( ubound/*.6*/ * 9 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.6*/ * 9 ) << 3 ).le.0 ? ( (unsigned char)( ( ( ( ubound/*.6*/ * 9 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.6*/ * 9 ) << 3 : 1 ).eq.0 ) then
    oserror "Memory allocation failed"
  end if
  rsymrel = malloc( ( ( (unsigned char, ( ( ( ubound/*.6*/ * 9 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.6*/ * 9 ) << 3 ).le.0 ? ( (unsigned char, ( ( ( ubound/*.6*/ * 9 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.6*/ * 9 ) << 3 : 1 )
  isym = 1
  if ( isym.le.nsym ) then
    do
      do 3
        do 3
          rsymrel = dble( *(int*,ebp_20 + ( ( ( ( isym + -1 ) * 9 ) + -4 + ( 1 * 3 ) &
& + 1 ) << 2 )) )
        end do
      end do
      isym = isym + 1
    while ( (logical)( isym.ne.nsym ) );
  end if
  ikpt = 1
  if ( ikpt.le.nkpt ) then
    do
      write(0,'(a)')' getwtk : ikpt = ',ikpt
      nstar = 0
      do ubound/*.2*/
        do 3
          kptstar = 0.000000000000
        end do
      end do
      isym = 1
      if ( isym.le.nsym ) then
        do
          call dgemv_( "N", "", "", "", _gfortran_internal_pack( rsymrel ), ""&
& , _gfortran_internal_pack( ebp_8 + ( ( ikpt + -1 ) * 24 ) ), "", "", symkpt&
& , "" )
          if ( rsymrel.ne.isym + -1 ) then
            call _gfortran_internal_unpack( ebp_556, _gfortran_internal_pack( rsymrel ) )
            if ( _gfortran_internal_pack( rsymrel ).ne.0 ) then
              call free( _gfortran_internal_pack( rsymrel ) )
            end if
          end if
          if ( ebp_8 + ( ( ikpt + -1 ) * 24 ).ne._gfortran_internal_pack( ebp_8 + ( ( ikpt + -1 ) * 24 ) ) ) then
            call _gfortran_internal_unpack( ebp_216, _gfortran_internal_pack( ebp_8 &
& + ( ( ikpt + -1 ) * 24 ) ) )
            if ( _gfortran_internal_pack( ebp_8 + ( ( ikpt + -1 ) * 24 ) ).ne.0 ) then
              call free( _gfortran_internal_pack( ebp_8 + ( ( ikpt + -1 ) * 24 ) ) )
            end if
          end if
          itim = 0
          if ( itim.le.1 ) then
            do
              timsign = ( dble( itim ) * -2.000000000000 ) + 1.000000000000
              do 3
                tsymkpt( 1 + -1+1 ) = symkpt( 1 + -1+1 ) * timsign
              end do
              call canon9_( tsymkpt(1), tmp, shift )
              tsymkpt(1) = tmp
              call canon9_( tsymkpt(2), tmp, shift )
              tsymkpt(2) = tmp
              call canon9_( tsymkpt(3), tmp, shift )
              tsymkpt(3) = tmp
              new = 1
              istar = 1
              if ( istar.le.nstar ) then
                do
                  do 3
                    dkpt( 1 + -1+1 ) = abs( tsymkpt( 1 + -1+1 ) - kptstar )
                  end do
                  do 3
                  end do
                  if ( ( 0.000001000000.lt.0.000000000000 ).ne.0 ) then
                    new = 0
                  else
                    istar = istar + 1
                  end if
                while ( (logical)( istar.ne.nstar ) );
              end if
              if ( new.eq.1 ) then
                nstar = nstar
                do 3
                  kptstar = tsymkpt( 1 + -1+1 )
                end do
              end if
              itim = itim + 1
            while ( (logical)( itim.ne.1 ) );
          end if
          isym = isym + 1
        while ( (logical)( isym.ne.nsym ) );
      end if
      ikpt = ikpt + 1
    while ( (logical)( nkpt.ne.ikpt ) );
  end if
  do ubound/*.4*/
  end do
  nkpt_tot = 0
  ikpt = 1
  if ( ikpt.le.nkpt ) then
    do
      ikpt = ikpt + 1
    while ( (logical)( ikpt.ne.nkpt ) );
  end if
  if ( rsymrel.ne.0 ) then
    call free( rsymrel )
  end if
  if ( nstar.ne.0 ) then
    call free( nstar )
  end if
  if ( kptstar.ne.0 ) then
    call free( kptstar )
  end if
  return
end subroutine getwtk_
#if 0
#endif
