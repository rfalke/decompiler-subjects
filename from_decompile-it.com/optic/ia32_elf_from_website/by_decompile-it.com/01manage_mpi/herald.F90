!include "herald.F90.h"
subroutine herald_(code_name,code_version,iout)
use defs_infos
use defs_basis
implicit none
  character(24) :: code_name, code_version
  integer :: iout

    call free( ebp_104 )
  end if
    call free( ebp_112 )
  end if
  write(0,'(a)')'.Copyright (C) 1998-2007 ABINIT group . ',' ',ebp_112,' comes with ABSOLUTELY NO WARRANTY.'&
& ,' It is free software, and you are welcome to redistribute it',' under certain conditions (GNU General Public License,'&
& ,' see ~abinit/COPYING or http://www.gnu.org/copyleft/gpl.txt).'
  trim( code_name(1) )
  if ( ebp_116.gt.0.and.ebp_120.ne.0 ) then
    call free( ebp_120 )
  end if
  if ( ( _gfortran_compare_string( ebp_116, ebp_120, 9, "ABINIT-GW(a,a,a,/,a,/,a,/)" ).eq.0 ).ne.0 ) then
      call free( ebp_128 )
    end if
    write(0,'(a)')' ',ebp_128,' has originally been developed by',' R.W. Godby, V. Olevano, G. Onida, L. Reining, M. Torrent,'&
& ,' and incorporated in ABINIT by G.M. Rignanese.'
  end if
  trim( code_name(1) )
  if ( ebp_132.gt.0.and.ebp_136.ne.0 ) then
    call free( ebp_136 )
  end if
  if ( ( _gfortran_compare_string( ebp_132, ebp_136, 5, "OPTIC(a,a,a,/,a,/,a,/,a,/,a,/) Sangeeta Sharma and incorporated in ABINIT with the help of M. Verstraete. Please refer to : " ).eq.0 ).ne.0 ) then
      call free( ebp_144 )
    end if
    write(0,'(a)')' ',ebp_144,' has originally been developed by',' Sangeeta Sharma and incorporated in ABINIT with the help of M. Verstraete.'&
& ,' Please refer to : ',' S. Sharma, J. K. Dewhurst and C. Ambrosch-Draxl, Phys. Rev. B 67, 165332 (2003), and'&
& ,' S. Sharma and C. Ambrosch-Draxl, Physica Scripta T 109 (2004).'
  end if
  write(0,'(a)')' ABINIT is a project of the Universite Catholique de Louvain,'&
& ,' Corning Inc. and other collaborators, see ~abinit/doc/developers/contributors.txt .'&
& ,' Please read ~abinit/doc/users/acknowledgments.html for suggested',' acknowledgments of the ABINIT effort.'&
& ,' For more information, see http://www.abinit.org .'
  call date_and_time( strdat, strtime, strzone, values, 8, 10, 5 )
  yyyy = values(1)
  mm = values(2)
  dd = values(3)
  if ( mm.gt.2 ) then
    jy = yyyy
    jm = mm + 1
  else
    jy = yyyy + -1
    jm = mm + 13
  end if
  jdn = dd + ( (int, dble( jy ) * 365.250000000000 ) * 2 ) + 0x1a42a3
  ja = (int, dble( jy ) * 0.010000000000 )
  jdn = ( ( jdn + 2 ) - ja ) + (int, dble( ja ) * 0.250000000000 )
  day = ( mod(jdn,7) ) + 1
  write(0,'(a)')'.Starting date : ',daynam( day + -1+1 ,1),dd,monnam( mm + -1&
& +1 ,1),yyyy,'.'
  write(0,'(a)')' '
  return
end subroutine herald_
#if 0
#endif
