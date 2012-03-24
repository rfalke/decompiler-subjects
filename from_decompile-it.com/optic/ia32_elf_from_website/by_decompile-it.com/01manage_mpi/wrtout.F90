!include "wrtout.F90.h"
subroutine wrtout_(unit,message,mode_paral)
use defs_basis
implicit none
  integer :: unit
  character(500) :: message, mode_paral

  integer,save  :: iexit
  integer,save  :: ncomment, nwarning
  integer :: lenmessage
  character(500) :: messtmp
  integer :: rtnpos
  character(500) :: string
  character(7) :: tag
  logical :: test_mpi
  test_mpi = 0
  if ( _gfortran_compare_string( 500, message, 1, " \nwrtout.F90" ).ne.0 ) then
    messtmp(1) = message(1)
    lenmessage = 500
    rtnpos = index(messtmp(1),ch10
    do rtnpos.ne.0
      if ( ( (unsigned char)( ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos + -1 ).gt.499 ) then
        string(1) = messtmp(1)
      else
        string(1) = messtmp(1)
        call memset( string( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1+1 ), 32, 500 - ( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1 ) )
      end if
        call free( ebp_1052 )
      end if
      write(0,'(a)')ebp_1052
      if ( ( (unsigned char)( ( ( ( lenmessage + ( 1 - ( rtnpos + 1 ) ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : lenmessage + ( 1 - ( rtnpos + 1 ) ) ).gt.499 ) then
        messtmp(1) = messtmp( rtnpos + 1 + -1+1 )
      else
        messtmp(1) = messtmp( rtnpos + 1 + -1+1 )
        call memset( messtmp( (unsigned char, ( ( ( lenmessage + ( 1 - ( rtnpos &
& + 1 ) ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : lenmessage + ( 1 - ( rtnpos + 1 ) )+1 )&
& , 32, 500 - ( (unsigned char, ( ( ( lenmessage + ( 1 - ( rtnpos + 1 ) ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : lenmessage &
& + ( 1 - ( rtnpos + 1 ) ) ) )
      end if
      lenmessage = lenmessage - rtnpos
      rtnpos = index(messtmp(1),ch10
    end do
      call free( ebp_1060 )
    end if
    write(0,'(a)')ebp_1060
  else
    write(0,'(a)')
  end if
  trim( message(1) )
  if ( ebp_1064.gt.0.and.ebp_1068.ne.0 ) then
    call free( ebp_1068 )
  end if
  if ( _gfortran_string_index( ebp_1064, ebp_1068, 3, "BUG", 0 ).ne.0.ne.0 ) then
    write(0,'(a)')'  Action : contact ABINIT group.'
    write(0,'(a)')
  end if
  trim( message(1) )
  trim( message(1) )
  if ( ebp_1072.gt.0.and.ebp_1076.ne.0 ) then
    call free( ebp_1076 )
  end if
  if ( ebp_1080.gt.0.and.ebp_1084.ne.0 ) then
    call free( ebp_1084 )
  end if
  if ( ebp_1084.ne.0 ) then
    if ( nwarning.le.9999.and.ncomment.le.999 ) then
      write(0,'(a)')'.Delivered',nwarning,' WARNINGs and',ncomment,' COMMENTs to log file.'
    else
      write(0,'(a)')'.Delivered',nwarning,' WARNINGs and',ncomment,' COMMENTs to log file.'
    end if
    if ( iexit.ne.0 ) then
      write(0,'(a)')' Note : exit requested by the user.'
    end if
  end if
  trim( message(1) )
  if ( ebp_1088.gt.0.and.ebp_1092.ne.0 ) then
    call free( ebp_1092 )
  end if
  if ( _gfortran_string_index( ebp_1088, ebp_1092, 4, "ExitWARNINGCOMMENT", 0 ).ne.0.ne.0 ) then
    iexit = 1
  end if
  trim( message(1) )
  if ( ebp_1096.gt.0.and.ebp_1100.ne.0 ) then
    call free( ebp_1100 )
  end if
  if ( ebp_1100.ne.0 ) then
    nwarning = nwarning + 1
  end if
  trim( message(1) )
  if ( ebp_1104.gt.0.and.ebp_1108.ne.0 ) then
    call free( ebp_1108 )
  end if
  if ( ebp_1108.ne.0 ) then
    ncomment = ncomment + 1
  end if
  if ( test_mpi.eq.0 ) then
    return
  do rtnpos.ne.0
    call _gfortran_concat_string( 8, ebp_1116, 7, tag, 1, " \nwrtout.F90" )
    if ( ( ( ( (unsigned char)( ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos + -1 ) + 8 ) << 5 ).lt.0 ) then
      error "Attempt to allocate a negative amount of memory."
    end if
    if ( malloc( ( ( ( (unsigned char)( ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos + -1 ) + 8 ) << 5 ).le.0 ? ( ( (unsigned char)( ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos + -1 ) + 8 ) << 5 : 1 ).eq.0 ) then
      oserror "Memory allocation failed"
    end if
    call _gfortran_concat_string( ( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1 ) + 8, malloc( ( ( ( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1 ) + 8 ) << 5 ).le.0 ? ( ( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1 ) + 8 ) << 5 : 1 ), 8, ebp_1116, (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1, message )
    if ( ( (unsigned char)( ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos + -1 ) + 8.gt.499 ) then
      string(1) = malloc( ( ( ( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1 ) + 8 ) << 5 ).le.0 ? ( ( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1 ) + 8 ) << 5 : 1 )
    else
      string(1) = malloc( ( ( ( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1 ) + 8 ) << 5 ).le.0 ? ( ( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1 ) + 8 ) << 5 : 1 )
      call memset( string( ( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1 ) + 8+1 ), 32, 500 - ( ( (unsigned char, ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos &
& + -1 ) + 8 ) )
    end if
    if ( malloc( ( ( ( (unsigned char)( ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos + -1 ) + 8 ) << 5 ).le.0 ? ( ( (unsigned char)( ( ( ( rtnpos + -1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : rtnpos + -1 ) + 8 ) << 5 : 1 ).ne.0 ) then
      call free( eax )
    end if
      call free( ebp_1124 )
    end if
    write(0,'(a)')ebp_1124
    if ( ( (unsigned char)( ( ( ( 501 - ( rtnpos + 1 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : 501 - ( rtnpos + 1 ) ).gt.499 ) then
      message(1) = message(1) + rtnpos + 1 + -1
    else
      message(1) = message(1) + rtnpos + 1 + -1
      call memset( message(1) + ( (unsigned char, ( ( ( 501 - ( rtnpos + 1 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : 501 - ( rtnpos &
& + 1 ) ), 32, 500 - ( (unsigned char, ( ( ( 501 - ( rtnpos + 1 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : 501 - ( rtnpos &
& + 1 ) ) )
    end if
    rtnpos = index(message(1),ch10
  end do
  call _gfortran_concat_string( 8, ebp_1132, 7, tag, 1, " \nwrtout.F90" )
  call _gfortran_concat_string( 508, ebp_1640, 8, ebp_1132, 500, message )
  string(1) = ebp_1640
  end if
  return
end subroutine wrtout_
#if 0
#endif
