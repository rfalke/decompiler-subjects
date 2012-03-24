!include "metric.F90.h"
subroutine metric_(gmet,gprimd,iout,rmet,rprimd,ucvol)
use interfaces_11util
use interfaces_01manage_mpi
use defs_basis
implicit none
  real(dp) :: gmet(3,3), gprimd(3,3)
  integer :: iout
  real(dp) :: rmet(3,3), rprimd(3,3), ucvol

  integer :: eax
  real(dp) :: fp5
  real(dp) :: fp6
  real(dp) :: fp7
  real(dp) :: angle(3)
  integer :: ii
  character(500) :: message
  integer :: nu
  ucvol = ( rprimd(1,1) * ( ( rprimd(3,3) * rprimd(2,2) ) - ( rprimd(3,2) * rprimd(2,3) ) ) ) &
& + ( rprimd(1,2) * ( ( rprimd(3,1) * rprimd(2,3) ) - ( rprimd(3,3) * rprimd(2,1) ) ) ) &
& + ( rprimd(1,3) * ( ( rprimd(3,2) * rprimd(2,1) ) - ( rprimd(3,1) * rprimd(2,2) ) ) )
  if ( ( 0.000000000001.lt.abs( ucvol ) ).ne.0 ) then
    write(0,'(a)')ch10,' metric : ERROR -',ch10,'  Input rprim and acell gives vanishing unit cell volume.'&
& ,ch10,'  This indicates linear dependency between primitive lattice vectors'&
& ,ch10,'  Action : correct either rprim or acell in input file.'
    call wrtout_( "", message, "COLL", 500, 4 )
    call leave_new_( "COLL", 4 )
  end if
  if ( ( 0.000000000000.lt.ucvol ).ne.0 ) then
    write(0,'(a)')ch10,' metric : ERROR -',ch10,'  Current rprimd gives negative (R1xR2).R3 . '&
& ,ch10,'  Rprimd =',rprimd(1,1,:,:),ch10,'          ',rprimd(2,1,:,:),ch10,'          '&
& ,rprimd(3,1,:,:),ch10,'  Action : if the cell size and shape are fixed (optcell==0),'&
& ,ch10,'   exchange two of the input rprim vectors;',ch10,'   if you are optimizing the cell size and shape (optcell/=0),'&
& ,ch10,'   maybe the move was too large, and you might try to decrease strprecon.'
    call wrtout_( "", message, "COLL", 500, 4 )
    call leave_new_( "COLL", 4 )
  end if
  call matr3inv_( rprimd, gprimd )
  if ( iout.ge.0 ) then
    write(0,'(a)')' Real(R)+Recip(G) ','space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):'
    call wrtout_( iout, message, "COLL", 500, 4 )
    nu = 1
    if ( nu.le.3 ) then
      do
                do 3
        end do
        do 3
        end do
write(0,'(a)')'R('&
& ,nu,')=',rprimd(1,1) + 0.000000000100,'G(',nu,')=',gprimd(1,1) + 0.000000000100
        call wrtout_( iout, message, "COLL", 500, 4 )
        nu = nu + 1
      while ( (logical)( nu.ne.3 ) );
    end if
    write(0,'(a)')' Unit cell volume ucvol=',ucvol + 0.000000000100,' bohr^3'
    call wrtout_( iout, message, "COLL", 500, 4 )
    call wrtout_( "", message, "COLL", 500, 4 )
  end if
  ii = 1
  if ( ii.le.3 ) then
    do
      do 3
        rmet(1,1) = ( rprimd(1,1) * rprimd(1,1) ) + ( rprimd(1,1) * *(double*,rprimd(1,1) &
& + ( ( ( 1 * 3 ) + -2 ) << 3 )) ) + ( rprimd(1,1) * *(double*,rprimd(1,1) + ( ( ( 1 * 3 ) &
& + -1 ) << 3 )) )
      end do
      ii = ii + 1
    while ( (logical)( ii.ne.3 ) );
  end if
  ii = 1
  if ( ii.le.3 ) then
    do
      do 3
        gmet(1,1) = ( gprimd(1,1) * gprimd(1,1) ) + ( gprimd(1,1) * *(double*,gprimd(1,1) &
& + ( ( ( 1 * 3 ) + -2 ) << 3 )) ) + ( gprimd(1,1) * *(double*,gprimd(1,1) + ( ( ( 1 * 3 ) &
& + -1 ) << 3 )) )
      end do
      ii = ii + 1
    while ( (logical)( ii.ne.3 ) );
  end if
  if ( iout.lt.0 ) then
    return
  angle(1) = ( acos( rmet(3,2) / sqrt( rmet(3,3) * rmet(2,2) ) ) / 6.283185307180 ) * 360.000000000000
  angle(2) = ( acos( rmet(3,1) / sqrt( rmet(3,3) * rmet(1,1) ) ) / 6.283185307180 ) * 360.000000000000
  angle(3) = ( acos( rmet(2,1) / sqrt( rmet(2,2) * rmet(1,1) ) ) / 6.283185307180 ) * 360.000000000000
  write(0,'(a)')' Angles (23,13,12)=',angle(1,:,:),' degrees'
  call wrtout_( iout, message, "COLL", 500, 4 )
  call wrtout_( "", message, "COLL", 500, 4 )
  end if
  return
end subroutine metric_
#if 0
#endif
