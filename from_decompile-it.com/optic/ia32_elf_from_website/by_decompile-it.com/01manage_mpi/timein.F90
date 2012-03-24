!include "timein.F90.h"
subroutine timein_(cpu,wall)
use interfaces_01manage_mpi
use defs_basis
implicit none
  real(dp) :: cpu, wall

  integer,save  :: month_init, month_now
  integer,save  :: start = 1
  integer,save  :: year_init
  integer,save  :: nday(24) = (/31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31/)
  integer :: count, count_max, count_rate
  character(10) :: date
  character(500) :: message
  integer :: months
  character(10) :: time
  integer :: values(8)
  character(10) :: zone
  cpu = 0.000000000000
  call system_clock( count, count_rate, count_max )
  cpu = dble( count ) / dble( count_rate )
  if ( start.eq.1 ) then
    start = 0
    call date_and_time( date, time, zone, values, 10, 10, 10 )
    year_init = values(1)
    month_init = values(2)
  end if
  call date_and_time( date, time, zone, values, 10, 10, 10 )
  wall = ( ( ( dble( values(3) ) * 24.000000000000 ) + dble( values(5) ) &
& + dble( values(6) ) ) * 60.000000000000 ) + dble( values(7) ) + ( dble( values(8) ) * 0.001000000000 )
  month_now = values(2)
  if ( month_now.ne.month_init ) then
    if ( values(1).eq.year_init + 1 ) then
      month_now = month_now + 12
    end if
    if ( month_now.le.month_init ) then
      write(0,'(a)')ch10,' timein : BUG -',ch10,'  Problem with month and year numbers.'
      call wrtout_( "", message, "COLL", 500, 4 )
      call leave_new_( "COLL", 4 )
    end if
    months = month_init
    if ( months.le.month_now + -1 ) then
      do
        wall = wall + ( dble( nday( months + -1+1 ) ) * 86400.000000000000 )
        months = months + 1
      while ( (logical)( months.ne.month_now + -1 ) );
    end if
  end if
  if ( ( mod(year_init,4) ).eq.0.and.month_init.le.2.and.month_now.gt.2 ) then
    wall = wall + 3600.000000000000
  end if
  if ( ( mod(values(1),4) ).eq.0.and.month_init.le.14.and.month_now.gt.14 ) then
    wall = wall + 3600.000000000000
  end if
  return
end subroutine timein_
#if 0
#endif
