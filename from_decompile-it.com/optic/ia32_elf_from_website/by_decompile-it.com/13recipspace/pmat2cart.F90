!include "pmat2cart.F90.h"
subroutine pmat2cart_(eigen11,eigen12,eigen13,mband,nkpt,nsppol,pmat,rprimd)
use defs_basis
implicit none
  real(dp) :: eigen11(2,:,:,:,:), eigen12(2,:,:,:,:), eigen13(2,:,:,:,:)
  integer :: mband, nkpt, nsppol
  complex(dp) :: pmat(:,:,:,3,:)
  real(dp) :: rprimd(3,3)

  integer :: ecx
  integer :: ch
  integer :: edx
  real(dp) :: fp7
  integer :: iband1, iband2, ii, ikpt, isppol
  real(dp) :: norm
  real(dp) :: rprim(3,3)
  ubound/*.27*/ = mband
  ubound/*.28*/ = mband
  ubound/*.30*/ = nkpt
  ubound/*.33*/ = nsppol
  ubound/*.0*/ = mband
  ubound/*.1*/ = mband
  ubound/*.3*/ = nkpt
  ubound/*.5*/ = nsppol
  ubound/*.9*/ = mband
  ubound/*.10*/ = mband
  ubound/*.12*/ = nkpt
  ubound/*.14*/ = nsppol
  ubound/*.18*/ = mband
  ubound/*.19*/ = mband
  ubound/*.21*/ = nkpt
  ubound/*.23*/ = nsppol
  ii = 1
  if ( ii.le.3 ) then
    do
      norm = sqrt( ( rprimd(1,1) * rprimd(1,1) ) + ( rprimd(1,1) * rprimd(1,1) ) &
& + ( rprimd(1,1) * rprimd(1,1) ) )
      do 3
        rprim(1, ( ( ii + -1 ) * 3 ) + -1 + 1+1 ) = rprimd(1,1) / norm
      end do
      ii = ii + 1
    while ( (logical)( ii.ne.3 ) );
  end if
  isppol = 1
  if ( isppol.le.nsppol ) then
    do
      ikpt = 1
      if ( ikpt.le.nkpt ) then
        do
          iband1 = 1
          if ( iband1.le.mband ) then
            do
              iband2 = 1
              if ( iband2.le.mband ) then
                do
                  do 3
                  end do
                  iband2 = iband2 + 1
                while ( (logical)( iband2.ne.mband ) );
              end if
              iband1 = iband1 + 1
            while ( !(logical)( mband.ne.iband1 ) );
          end if
          ikpt = ikpt + 1
        while ( !(logical)( nkpt.ne.ikpt ) );
      end if
      isppol = isppol + 1
    while ( !(logical)( nsppol.ne.isppol ) );
  end if
  return
end subroutine pmat2cart_
#if 0
#endif
