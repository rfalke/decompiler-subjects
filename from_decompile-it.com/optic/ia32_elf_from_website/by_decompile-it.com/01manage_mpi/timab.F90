!include "timab.F90.h"
subroutine timab_(nn,option,tottim)
use interfaces_01manage_mpi
use defs_time
use defs_basis
implicit none
  integer :: nn, option
  real(dp) :: tottim(2)

  real(dp) :: cpu
  character(500) :: message
  real(dp) :: wall
  if ( option.eq.5 ) then
    timopt = nn
  end if
  if ( timopt.eq.0.or.option.eq.5 ) then
    return
  if ( nn.lt.0.or.nn.gt.599 ) then
    write(0,'(a)')ch10,' timab: BUG -',ch10,'  dim mtim=',"W",' but input nn='&
& ,nn,'.'
    call wrtout_( "", message, "PERS", 500, 4 )
    call leave_new_( "PERS", 4 )
  end if
  if ( option.eq.0 ) then
    call memset( acctim(1), 0, 9584 )
    call memset( tzero(1), 0, 9584 )
    call memset( ncount, 0, 2396 )
  else
    if ( option.eq.1 ) then
      call timein_( cpu, wall )
      tzero(1, -2 + ( nn * 2 )+1 ) = cpu
      tzero(1, ( ( nn + 1 ) * 2 ) + -3+1 ) = wall
    else
      if ( option.eq.2 ) then
        call timein_( cpu, wall )
        acctim(1, -2 + ( nn * 2 )+1 ) = ( acctim(1, -2 + ( nn * 2 )+1 ) + cpu ) - tzero(1, -2 &
& + ( nn * 2 )+1 )
        acctim(1, ( ( nn + 1 ) * 2 ) + -3+1 ) = ( acctim(1, ( ( nn + 1 ) * 2 ) + -3&
& +1 ) + wall ) - tzero(1, ( ( nn + 1 ) * 2 ) + -3+1 )
        ncount( nn + -1+1 ) = ncount( nn + -1+1 ) + 1
      else
        if ( option.eq.3 ) then
          write(0,'(a)')ch10,' timab: BUG -',ch10,' option 3 not valid (use time_accu).'
          call wrtout_( "", message, "PERS", 500, 4 )
          call leave_new_( "PERS", 4 )
        else
          if ( option.eq.4 ) then
            call timein_( cpu, wall )
            tottim(1) = cpu - tzero(1, -2 + ( nn * 2 )+1 )
            tottim(2) = wall - tzero(1, ( ( nn + 1 ) * 2 ) + -3+1 )
          else
            write(0,'(a)')ch10,' timab: BUG -',ch10,'  Input option not valid, =',option&
& ,'.'
            call wrtout_( "", message, "PERS", 500, 4 )
            call leave_new_( "PERS", 4 )
          end if
        end if
      end if
    end if
  end if
  end if
  return
end subroutine timab_
#if 0
#endif
