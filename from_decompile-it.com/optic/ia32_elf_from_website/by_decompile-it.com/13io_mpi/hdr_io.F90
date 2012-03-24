!include "hdr_io.F90.h"
subroutine hdr_io_wfftype_(fform,hdr,rdwr,wff)
use interfaces_13io_mpi
use defs_datatypes
use defs_basis
implicit none
  integer :: fform
  type(hdr_type) :: hdr
  integer :: rdwr
  type(wffile_type) :: wff

  if ( wff%accesswff.eq.0 ) then
    goto B2;
  else
    if ( wff%accesswff.eq.-1 ) then
      if ( wff%me.ne.wff%master ) then
        goto B5;
      end if
    end if
B5:;
    if ( wff%accesswff.eq.1 ) then
      if ( wff%me.ne.wff%master ) then
        return
      end if
    end if
    return
  end if
B2:;
  call hdr_io_int_( fform, "badarg" )
  return
end subroutine hdr_io_wfftype_
subroutine hdr_io_int_(fform,hdr,rdwr,unitfi)
use defs_datatypes
use defs_basis
use interfaces_11util
use interfaces_01manage_mpi
implicit none
  integer :: fform
  type(hdr_type) :: hdr
  integer :: rdwr, unitfi

  integer :: eax
  integer :: ecx
  integer :: edx
  real(dp) :: fp7
  integer ebp_2208;
  real(dp) :: acell(3)
  integer :: bantot, bsize
  real(dp) :: buffer(:)
  character(6) :: codvsn
  integer :: headform, iatom
  integer :: ibuffer(:)
  integer :: ierr, ii, ikpt, ipsp, ispden, isym
  integer :: itypat, lloc, lmax, lmn2_size
  character(500) :: message
  integer :: mmax, natinc, natom, nkpt, npsp
  integer :: nsel(:,:)
  integer :: nselect, nsppol
  integer :: nsym, ntypat
  if ( rdwr.eq.1 ) then
    goto B2;
  else
  if ( rdwr.eq.5 ) then
    goto B2;
  else
    if ( rdwr.eq.2 ) then
      goto B8;
    else
    if ( rdwr.eq.6 ) then
      goto B8;
    else
      if ( rdwr.eq.3 ) then
        goto B14;
      else
      if ( rdwr.eq.4 ) then
        goto B14;
      else
        if ( 0.ne.0 ) then
          call free( 0 )
        end if
        if ( 0.ne.0 ) then
          call free( 0 )
        end if
        if ( 0.ne.0 ) then
          call free( 0 )
        end if
        return
      end if
      end if
B14:;
      write(0,'(a)')' ==============================================================================='
      if ( rdwr.eq.3 ) then
        write(0,'(a)')' ECHO of part of the ABINIT file header '
      end if
      if ( rdwr.eq.4 ) then
        write(0,'(a)')' ECHO of the ABINIT file header '
      end if
      write(0,'(a)')' '
      write(0,'(a)')' First record :'
      write(0,'(a)')'.codvsn,headform,fform = ',hdr%codvsn(1),hdr%headform,fform
      write(0,'(a)')' '
      write(0,'(a)')' Second record :'
      write(0,'(a)')' bantot,intxc,ixc,natom  =',hdr%bantot,hdr%intxc,hdr%ixc&
& ,hdr%natom
      write(0,'(a)')' ngfft(1:3),nkpt         =',hdr%ngfft(1,:,:),hdr%nkpt
      if ( hdr%headform.gt.22 ) then
        write(0,'(a)')' nspden,nspinor          =',hdr%nspden,hdr%nspinor
      end if
      if ( hdr%headform.le.23 ) then
        write(0,'(a)')' nsppol,nsym,ntypat,occopt=',hdr%nsppol,hdr%nsym,hdr%ntypat&
& ,hdr%occopt
      else
      if ( hdr%headform.le.40 ) then
        write(0,'(a)')' nsppol,nsym,npsp,ntypat,occopt=',hdr%nsppol,hdr%nsym,hdr%npsp&
& ,hdr%ntypat,hdr%occopt
      else
        if ( hdr%headform.eq.41 ) then
          goto B891;
        else
        if ( hdr%headform.eq.42 ) then
          goto B891;
        else
          if ( hdr%headform.gt.43 ) then
            write(0,'(a)')' nsppol,nsym,npsp,ntypat =',hdr%nsppol,hdr%nsym,hdr%npsp&
& ,hdr%ntypat
            write(0,'(a)')' occopt,pertcase,usepaw  =',hdr%occopt,hdr%pertcase,hdr%usepaw
          end if
        end if
        end if
B891:;
        write(0,'(a)')' nsppol,nsym,npsp,ntypat,occopt,pertcase=',hdr%nsppol,hdr%nsym&
& ,hdr%npsp,hdr%ntypat,hdr%occopt,hdr%pertcase
      end if
      end if
      if ( hdr%headform.eq.40 ) then
        goto B898;
      else
      if ( hdr%headform.eq.41 ) then
        goto B898;
      else
      if ( hdr%headform.eq.42 ) then
        goto B898;
      else
        if ( hdr%headform.gt.43 ) then
          write(0,'(a)')' ecut,ecutdg,ecutsm      =',hdr%ecut,hdr%ecutdg,hdr%ecutsm
          write(0,'(a)')' ecut_eff                =',hdr%ecut_eff
          if ( hdr%headform.gt.40 ) then
            write(0,'(a)')' qptn(1:3)               =',hdr%qptn(1,:,:)
          end if
          write(0,'(a)')' rprimd(1:3,1)           =',hdr%rprimd(1,1,:,:)
          write(0,'(a)')' rprimd(1:3,2)           =',hdr%rprimd(2,1,:,:)
          write(0,'(a)')' rprimd(1:3,3)           =',hdr%rprimd(3,1,:,:)
          if ( hdr%headform.eq.40 ) then
            goto B982;
          else
          if ( hdr%headform.eq.41 ) then
            goto B982;
          else
            if ( hdr%headform.gt.41 ) then
              write(0,'(a)')' stmbias,tphysel,tsmear  =',hdr%stmbias,hdr%tphysel,hdr%tsmear
              write(0,'(a)')
              if ( rdwr.eq.3 ) then
                write(0,'(a)')' The header contain ',hdr%npsp + 2,' additional records.'
              else
                write(0,'(a)')' Third record :'
                write(0,'(a)')' istwfk=',hdr%hdr_type(:,:)
                write(0,'(a)')' nband =',hdr%hdr_type(:,:)
                write(0,'(a)')' npwarr=',hdr%hdr_type(:,:)
                if ( hdr%headform.gt.39 ) then
                  write(0,'(a)')' so_typat=',hdr%hdr_type(:,:)
                end if
                if ( hdr%headform.gt.39 ) then
                  write(0,'(a)')' symafm='
                  write(0,'(a)')hdr%hdr_type(:,:)
                end if
                write(0,'(a)')' symrel='
                isym = 1
                if ( isym.le.hdr%nsym / 2 ) then
                  do
                    call _gfortran_transfer_array( ebp_2184, hdr%hdr_type + ( ( ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) &
& + ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) + ( hdr%hdr_type * ( ( ( isym * 2 ) &
& + -1 ) - hdr%hdr_type ) ) ) * 4 ), 4, 0 )
                    call _gfortran_transfer_array( ebp_2184, hdr%hdr_type + ( ( ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) &
& + ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) + ( hdr%hdr_type * ( ( isym * 2 ) - hdr%hdr_type ) ) ) * 4 )&
& , 4, 0 )
                    write(0,'(a)')'        ','  '
                    isym = isym + 1
                  while ( (logical)( hdr%nsym / 2.ne.isym ) );
                end if
                if ( hdr%nsym.ne.( ( hdr%nsym / 2 ) * 2 ) ) then
                  call _gfortran_transfer_array( ebp_2184, hdr%hdr_type + ( ( ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) &
& + ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) + ( hdr%hdr_type * ( hdr%nsym - hdr%hdr_type ) ) ) * 4 )&
& , 4, 0 )
                  write(0,'(a)')'        '
                end if
                write(0,'(a)')' type  =',hdr%hdr_type(:,:)
                write(0,'(a)')' kptns =                 (max 50 k-points will be written)'
                ikpt = 1
                if ( ikpt.le.50 ) then
                  do
                    call _gfortran_transfer_array( ebp_2184, hdr%hdr_type + ( ( ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) &
& + ( hdr%hdr_type * ( ikpt - hdr%hdr_type ) ) ) << 3 ), 8, 0 )
                    write(0,'(a)')'        '
                    ikpt = ikpt + 1
                  while ( (logical)( ikpt.ne.50 ) );
                end if
                write(0,'(a)')' wtk ='
                ikpt = 1
                if ( hdr%nkpt.gt.0 ) then
                  while ( 1 )
                    call _gfortran_transfer_array( ebp_2184, hdr%hdr_type + ( ( hdr%hdr_type * ( ikpt - hdr%hdr_type ) ) << 3 )&
& , 8, 0 )
                    write(0,'(a)')'        '
                    ikpt = ikpt + 10
                    if ( ( (/*HI*/int)( ( hdr%nkpt + -1 ) * -858993459 ) >> 3 ).eq.0 ) then
                      goto B1071;
                    else
                    end if
                end if
B1071:;
                write(0,'(a)')'   occ ='
                ii = 1
                if ( hdr%bantot.gt.0 ) then
                  while ( 1 )
                    call _gfortran_transfer_array( ebp_2184, hdr%hdr_type + ( ( hdr%hdr_type * ( ii - hdr%hdr_type ) ) << 3 )&
& , 8, 0 )
                    write(0,'(a)')'        '
                    ii = ii + 10
                    if ( ( (/*HI*/int)( ( hdr%bantot + -1 ) * -858993459 ) >> 3 ).eq.0 ) then
                      goto B1084;
                    else
                    end if
                end if
B1084:;
                write(0,'(a)')' tnons ='
                isym = 1
                if ( isym.le.hdr%nsym / 2 ) then
                  do
                    call _gfortran_transfer_array( ebp_2184, hdr%hdr_type + ( ( ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) &
& + ( hdr%hdr_type * ( ( ( isym * 2 ) + -1 ) - hdr%hdr_type ) ) ) << 3 ), 8&
& , 0 )
                    call _gfortran_transfer_array( ebp_2184, hdr%hdr_type + ( ( ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) &
& + ( hdr%hdr_type * ( ( isym * 2 ) - hdr%hdr_type ) ) ) << 3 ), 8, 0 )
                    write(0,'(a)')'        ','  '
                    isym = isym + 1
                  while ( (logical)( isym.ne.hdr%nsym / 2 ) );
                end if
                if ( hdr%nsym.ne.( ( hdr%nsym / 2 ) * 2 ) ) then
                  call _gfortran_transfer_array( ebp_2184, hdr%hdr_type + ( ( ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) &
& + ( hdr%hdr_type * ( hdr%nsym - hdr%hdr_type ) ) ) << 3 ), 8, 0 )
                  write(0,'(a)')'        '
                end if
                write(0,'(a)')'  znucl=',hdr%hdr_type(:,:)
                write(0,'(a)')
                write(0,'(a)')' Pseudopotential info :'
                ipsp = 1
                if ( ipsp.le.hdr%npsp ) then
                  do
                      call free( ebp_1432 )
                    end if
                    write(0,'(a)')' title=',ebp_1432
                    write(0,'(a)')'  znuclpsp=',hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 )&
& ,', zionpsp=',hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 )&
& ,', pspso=',hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )&
& ,', pspdat=',hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )&
& ,', pspcod=',hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )&
& ,', pspxc=',hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )
                    if ( hdr%headform.gt.43 ) then
                      if ( hdr%usepaw.eq.1 ) then
                        write(0,'(a)')'  lmn_size=',hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )
                      else
                        write(0,'(a)')'  lmnmax  =',hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )
                      end if
                    end if
                    ipsp = ipsp + 1
                  while ( (logical)( ipsp.ne.hdr%npsp ) );
                end if
                write(0,'(a)')' '
                write(0,'(a)')' Last record :'
                write(0,'(a)')' residm,etot,fermie=',hdr%residm,hdr%etot,hdr%fermie
                write(0,'(a)')' xred ='
                iatom = 1
                if ( iatom.le.hdr%natom ) then
                  do
                    call _gfortran_transfer_array( ebp_2184, hdr%hdr_type + ( ( ( hdr%hdr_type * ( hdr%hdr_type - hdr%hdr_type ) ) &
& + ( hdr%hdr_type * ( iatom - hdr%hdr_type ) ) ) << 3 ), 8, 0 )
                    write(0,'(a)')'        '
                    iatom = iatom + 1
                  while ( (logical)( iatom.ne.hdr%natom ) );
                end if
                if ( hdr%usepaw.eq.1 ) then
                  natinc = 1
                  if ( hdr%natom.gt.1 ) then
                    natinc = hdr%natom + -1
                  end if
                  iatom = 1
                  if ( natinc.gt.0 ) then
                    if ( hdr%natom.gt.0 ) then
                      ebp_2208 = (long long, hdr%natom + -1 ) / natinc
                      do itypat = hdr%hdr_type, ispden = 1, hdr%nspden
                        iatom = natinc + iatom
                        if ( ebp_2208.eq.0 ) then
                          goto B1178;
                        else
                          ebp_2208 = ebp_2208 + -1
                        end if
                      end do
                      do
                        write(0,'(a)')' rhoij(',iatom,',',ispden,')=  (max 12 non-zero components will be written)'
                        call print_ij_( )
                        if ( hdr%__pad(1).ne._gfortran_internal_pack( hdr%__pad(1) + ( ( ( hdr%__pad(1) * ( hdr%__pad(1) - hdr%__pad(1) ) ) + ( hdr%__pad(1) * ( ispden - hdr%__pad(1) ) ) ) << 3 ) ).and._gfortran_internal_pack( hdr%__pad(1) + ( ( ( hdr%__pad(1) * ( hdr%__pad(1) - hdr%__pad(1) ) ) + ( hdr%__pad(1) * ( ispden - hdr%__pad(1) ) ) ) << 3 ) ).ne.0 ) then
                          call free( _gfortran_internal_pack( hdr%__pad(1) + ( ( ( hdr%__pad(1) * ( hdr%__pad(1) - hdr%__pad(1) ) ) &
& + ( hdr%__pad(1) * ( ispden - hdr%__pad(1) ) ) ) << 3 ) ) )
                        end if
                        if ( hdr%__pad(1) + ( ( ( hdr%__pad(1) * ( hdr%__pad(1) - hdr%__pad(1) ) ) + ( hdr%__pad(1) * ( ispden - hdr%__pad(1) ) ) ) << 2 ).ne._gfortran_internal_pack( hdr%__pad(1) + ( ( ( hdr%__pad(1) * ( hdr%__pad(1) - hdr%__pad(1) ) ) + ( hdr%__pad(1) * ( ispden - hdr%__pad(1) ) ) ) << 2 ) ).and._gfortran_internal_pack( hdr%__pad(1) + ( ( ( hdr%__pad(1) * ( hdr%__pad(1) - hdr%__pad(1) ) ) + ( hdr%__pad(1) * ( ispden - hdr%__pad(1) ) ) ) << 2 ) ).ne.0 ) then
                          call free( _gfortran_internal_pack( hdr%__pad(1) + ( ( ( hdr%__pad(1) * ( hdr%__pad(1) - hdr%__pad(1) ) ) &
& + ( hdr%__pad(1) * ( ispden - hdr%__pad(1) ) ) ) << 2 ) ) )
                        end if
                        ispden = ispden + 1
                      while ( (logical)( hdr%nspden.ne.ispden ) );
                      iatom = natinc + iatom
                    end if
                  else
                    if ( hdr%natom.le.1 ) then
                      ebp_2208 = (long long, 1 - hdr%natom ) / ( 0 - natinc )
                    end if
                  end if
                end if
B1178:;
                if ( rdwr.eq.3 ) then
                  write(0,'(a)')' End the ECHO of part of the ABINIT file header '
                end if
                if ( rdwr.eq.4 ) then
                  write(0,'(a)')' End the ECHO of the ABINIT file header '
                end if
                write(0,'(a)')' ==============================================================================='
              end if
            end if
          end if
          end if
B982:;
          write(0,'(a)')' tphysel,tsmear          =',hdr%tphysel,hdr%tsmear
        end if
      end if
      end if
      end if
B898:;
      write(0,'(a)')' ecut,ecutsm             =',hdr%ecut,hdr%ecutsm
    end if
    end if
B8:;
    if ( rdwr.eq.2 ) then
      rewind(0)
    end if
    headform = 53
    write(0,'(a)')hdr%codvsn(1),headform,fform
    write(0,'(a)')hdr%bantot,hdr%date,hdr%intxc,hdr%ixc,hdr%natom,hdr%ngfft(1,:&
& ,:),hdr%nkpt,hdr%nspden,hdr%nspinor,hdr%nsppol,hdr%nsym,hdr%npsp,hdr%ntypat&
& ,hdr%occopt,hdr%pertcase,hdr%usepaw,hdr%ecut,hdr%ecutdg,hdr%ecutsm,hdr%ecut_eff&
& ,hdr%qptn(1,:,:),hdr%rprimd(1,1,:,:),hdr%stmbias,hdr%tphysel,hdr%tsmear
    write(0,'(a)')hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:)
    ipsp = 1
    if ( ipsp.le.hdr%npsp ) then
      do
        write(0,'(a)')hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) * 132 )&
& ,hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 ),hdr%hdr_type &
& + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 ),hdr%hdr_type + ( ( hdr%hdr_type &
& + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )&
& ,hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type &
& + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type + ( ( hdr%hdr_type &
& + ( hdr%hdr_type * ipsp ) ) << 2 )
        ipsp = ipsp + 1
      while ( (logical)( ipsp.ne.hdr%npsp ) );
    end if
    write(0,'(a)')hdr%residm,hdr%hdr_type(:,:),hdr%etot,hdr%fermie
    if ( hdr%usepaw.ne.1 ) then
      continue;
    else
      if ( 0.ne.0 ) then
        errorat "Attempting to allocate already allocated array '%s'", "nsel"
        do
          do hdr%nspden
          end do
          iatom = iatom + 1
        while ( (logical)( hdr%natom.ne.iatom ) );
      else
        if ( ( ( ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) * ( hdr%natom.lt.0 ? hdr%natom : 0 ) ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( ( hdr%natom.le.0 ) | ( hdr%nspden.le.0 ) ).ne.0 ? 0 : ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) * ( hdr%natom.lt.0 ? hdr%natom : 0 ) ) << 2 ).le.0 ? ( ( ( hdr%natom.le.0 ) | ( hdr%nspden.le.0 ) ).ne.0 ? 0 : ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) * ( hdr%natom.lt.0 ? hdr%natom : 0 ) ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        iatom = 1
        if ( iatom.le.hdr%natom ) then
          continue;
        end if
      end if
      iatom = 1
      if ( iatom.le.hdr%natom ) then
        do
          ispden = 1
          if ( ispden.le.hdr%nspden ) then
            do
                      while ( (logical, ispden.ne.hdr%nspden ) );
          end if
iatom = iatom &
& + 1
        while ( !(logical)( iatom.ne.hdr%natom ) );
      end if
      write(0,'(a)')ebp_724 + ( ebp_712 * ispden * 4 ) + ( ebp_700 * iatom * 4 ) &
& + ( ebp_720 * 4 )
      do hdr%natom
        do hdr%nspden
        end do
      end do
      bsize = 0
      if ( 0.ne.0 ) then
        errorat "Attempting to allocate already allocated array '%s'", "ibuffer"
      else
        if ( ( ( (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( bsize.le.0 ).ne.0 ? 0 : (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 2 ).le.0 ? ( ( bsize.le.0 ).ne.0 ? 0 : (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        if ( 0.ne.0 ) then
          errorat "Attempting to allocate already allocated array '%s'", "buffer"
          do
            ispden = 1
            if ( ispden.le.hdr%nspden ) then
              do
                nselect = *(int*,ebp_724 + ( ebp_712 * ispden * 4 ) + ( ebp_700 * iatom * 4 ) &
& + ( ebp_720 * 4 ))
                do nselect
                end do
                do nselect
                end do
                ii = nselect + ii
                ispden = ispden + 1
              while ( (logical)( hdr%nspden.ne.ispden ) );
            end if
            iatom = iatom + 1
          while ( !(logical)( hdr%natom.ne.iatom ) );
        else
          if ( ( ( (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 3 ).lt.0 ) then
            error "Attempt to allocate negative amount of memory. Possible integer overflow"
          end if
          if ( malloc( ( ( (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 3 ).le.0 ? ( (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 3 : 1 ).eq.0 ) then
            oserror "Out of memory"
          end if
          ii = 0
          iatom = 1
          if ( iatom.le.hdr%natom ) then
            continue;
          end if
        end if
        write(0,'(a)')ebp_156(:,:),ebp_116(:,:)
        if ( ebp_156.eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "ibuffer"
        end if
        call free( ebp_156 )
        if ( ebp_116.eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "buffer"
        end if
        call free( ebp_116 )
        if ( ebp_724.eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "nsel"
        end if
        call free( ebp_724 )
      end if
    end if
  end if
  end if
B2:;
  if ( rdwr.eq.1 ) then
    rewind(0)
  end if
  ierr = 0
  read(0,'(a)')codvsn(1),fform
  if ( ierr.ne.0 ) then
    fform = 0
  else
    if ( fform.eq.1 ) then
      goto B29;
    else
    if ( fform.eq.2 ) then
      goto B29;
    else
    if ( fform.eq.51 ) then
      goto B29;
    else
    if ( fform.eq.52 ) then
      goto B29;
    else
    if ( fform.eq.101 ) then
      goto B29;
    else
    if ( fform.eq.102 ) then
      goto B29;
    else
      backspace(0)
      read(0,'(a)')codvsn(1),headform,fform
      if ( headform.eq.23 ) then
        hdr%codvsn(1) = codvsn(1)
        hdr%headform = headform
        hdr%nspden = 1
        hdr%nspinor = 1
        hdr%occopt = 1
        hdr%pertcase = 1
        hdr%usepaw = 0
        hdr%ecut = 0.000000000000
        hdr%ecutdg = 0.000000000000
        hdr%ecutsm = 0.000000000000
        do 3
          hdr%residm = 0.000000000000
        end do
        hdr%stmbias = 0.000000000000
        hdr%tphysel = 0.000000000000
        hdr%tsmear = 0.000000000000
        if ( headform.eq.22 ) then
          read(0,'(a)')bantot,hdr%date,hdr%intxc,hdr%ixc,natom,hdr%ngfft(1,:,:),nkpt&
& ,nsppol,nsym,ntypat,acell(1,:,:),hdr%ecut_eff,hdr%rprimd(1,1,:,:)
          npsp = ntypat
        else
        if ( headform.eq.23 ) then
          read(0,'(a)')bantot,hdr%date,hdr%intxc,hdr%ixc,natom,hdr%ngfft(1,:,:),nkpt&
& ,hdr%nspden,hdr%nspinor,nsppol,nsym,ntypat,hdr%occopt,acell(1,:,:),hdr%ecut_eff&
& ,hdr%rprimd(1,1,:,:)
          npsp = ntypat
        else
        if ( headform.eq.34 ) then
          read(0,'(a)')bantot,hdr%date,hdr%intxc,hdr%ixc,natom,hdr%ngfft(1,:,:),nkpt&
& ,hdr%nspden,hdr%nspinor,nsppol,nsym,npsp,ntypat,hdr%occopt,hdr%ecut_eff,hdr%rprimd(1,1,:&
& ,:)
        else
        if ( headform.eq.40 ) then
          read(0,'(a)')bantot,hdr%date,hdr%intxc,hdr%ixc,natom,hdr%ngfft(1,:,:),nkpt&
& ,hdr%nspden,hdr%nspinor,nsppol,nsym,npsp,ntypat,hdr%occopt,hdr%ecut,hdr%ecutsm&
& ,hdr%ecut_eff,hdr%rprimd(1,1,:,:),hdr%tphysel,hdr%tsmear
        else
        if ( headform.eq.41 ) then
          read(0,'(a)')bantot,hdr%date,hdr%intxc,hdr%ixc,natom,hdr%ngfft(1,:,:),nkpt&
& ,hdr%nspden,hdr%nspinor,nsppol,nsym,npsp,ntypat,hdr%occopt,hdr%pertcase,hdr%ecut&
& ,hdr%ecutsm,hdr%ecut_eff,hdr%qptn(1,:,:),hdr%rprimd(1,1,:,:),hdr%tphysel,hdr%tsmear
        else
        if ( headform.eq.42 ) then
          read(0,'(a)')bantot,hdr%date,hdr%intxc,hdr%ixc,natom,hdr%ngfft(1,:,:),nkpt&
& ,hdr%nspden,hdr%nspinor,nsppol,nsym,npsp,ntypat,hdr%occopt,hdr%pertcase,hdr%ecut&
& ,hdr%ecutsm,hdr%ecut_eff,hdr%qptn(1,:,:),hdr%rprimd(1,1,:,:),hdr%stmbias,hdr%tphysel&
& ,hdr%tsmear
        else
        if ( headform.gt.43 ) then
          read(0,'(a)')bantot,hdr%date,hdr%intxc,hdr%ixc,natom,hdr%ngfft(1,:,:),nkpt&
& ,hdr%nspden,hdr%nspinor,nsppol,nsym,npsp,ntypat,hdr%occopt,hdr%pertcase,hdr%usepaw&
& ,hdr%ecut,hdr%ecutdg,hdr%ecutsm,hdr%ecut_eff,hdr%qptn(1,:,:),hdr%rprimd(1,1,:&
& ,:),hdr%stmbias,hdr%tphysel,hdr%tsmear
        end if
        end if
        end if
        end if
        end if
        end if
        end if
        hdr%bantot = bantot
        hdr%natom = natom
        hdr%nkpt = nkpt
        hdr%npsp = npsp
        hdr%nsppol = nsppol
        hdr%nsym = nsym
        hdr%ntypat = ntypat
        if ( ( hdr%ecutsm.lt.0.000001000000 ).ne.0.and.headform.le.43.and.fform.ne.51.and.fform.ne.52.and.fform.ne.101.and.fform.ne.102 ) then
          write(0,'(a)')ch10,' hdr_io : ERROR -',ch10,'  The value of ecutsm is',hdr%ecutsm&
& ,', while the file has been produced prior to v4.4 .',ch10,'  The definition of the smearing function has changed, so that you are not allowed'&
& ,ch10,'  to restart from a old wavefunction file. By contrast, you can restart from an old'&
& ,ch10,'  potential or density file, and perform a self-consistent cycle with a new ABINIT version.'&
& ,ch10,'  Action : produce a density or potential file using the old version of ABINIT, and restart from it.'
          call wrtout_( "", message, "COLL", 500, 4 )
          call leave_new_( "COLL", 4 )
        end if
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = nkpt
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 2 ).le.0 ? ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char, ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 2 ).le.0 ? ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char, ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 538
        hdr%hdr_type = 1
        hdr%hdr_type = 3
        hdr%hdr_type = 1
        hdr%hdr_type = 1
        hdr%hdr_type = nkpt
        hdr%hdr_type = 3
        if ( ( ( ( (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) * 3 ) << 3 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( nkpt.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) * 3 ) << 3 ).le.0 ? ( ( nkpt.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) * 3 ) << 3 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( nkpt.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) * 3 ) << 3 ).le.0 ? ( ( nkpt.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) * 3 ) << 3 : 1 )
        hdr%hdr_type = -4
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = npsp
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = nsppol * nkpt
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( ( nsppol * nkpt ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( nsppol * nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( ( nsppol * nkpt ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt ) << 2 ).le.0 ? ( ( nsppol * nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( ( nsppol * nkpt ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( nsppol * nkpt.le.0 ).ne.0 ? 0 : (unsigned char, ( ( ( nsppol * nkpt ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt ) << 2 ).le.0 ? ( ( nsppol * nkpt.le.0 ).ne.0 ? 0 : (unsigned char, ( ( ( nsppol * nkpt ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = nkpt
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 2 ).le.0 ? ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char, ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 2 ).le.0 ? ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char, ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 537
        hdr%hdr_type = 1
        hdr%hdr_type = bantot
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( bantot >> 31 ) & 1 ) ^ 1 ) ? 0 : bantot ) << 3 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( bantot.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( bantot >> 31 ) & 1 ) ^ 1 ) ? 0 : bantot ) << 3 ).le.0 ? ( ( bantot.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( bantot >> 31 ) & 1 ) ^ 1 ) ? 0 : bantot ) << 3 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( bantot.le.0 ).ne.0 ? 0 : (unsigned char, ( ( bantot >> 31 ) & 1 ) ^ 1 ) ? 0 : bantot ) << 3 ).le.0 ? ( ( bantot.le.0 ).ne.0 ? 0 : (unsigned char, ( ( bantot >> 31 ) & 1 ) ^ 1 ) ? 0 : bantot ) << 3 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = npsp
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = npsp
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = npsp
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = npsp
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = ntypat
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( ntypat >> 31 ) & 1 ) ^ 1 ) ? 0 : ntypat ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( ntypat.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( ntypat >> 31 ) & 1 ) ^ 1 ) ? 0 : ntypat ) << 2 ).le.0 ? ( ( ntypat.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( ntypat >> 31 ) & 1 ) ^ 1 ) ? 0 : ntypat ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( ntypat.le.0 ).ne.0 ? 0 : (unsigned char, ( ( ntypat >> 31 ) & 1 ) ^ 1 ) ? 0 : ntypat ) << 2 ).le.0 ? ( ( ntypat.le.0 ).ne.0 ? 0 : (unsigned char, ( ( ntypat >> 31 ) & 1 ) ^ 1 ) ? 0 : ntypat ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = nsym
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( nsym.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) << 2 ).le.0 ? ( ( nsym.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( nsym.le.0 ).ne.0 ? 0 : (unsigned char, ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) << 2 ).le.0 ? ( ( nsym.le.0 ).ne.0 ? 0 : (unsigned char, ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 267
        hdr%hdr_type = 1
        hdr%hdr_type = 3
        hdr%hdr_type = 1
        hdr%hdr_type = 1
        hdr%hdr_type = 3
        hdr%hdr_type = 3
        hdr%hdr_type = 1
        hdr%hdr_type = nsym
        hdr%hdr_type = 9
        if ( ( ( ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( nsym.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 ).le.0 ? ( ( nsym.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( nsym.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 ).le.0 ? ( ( nsym.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 : 1 )
        hdr%hdr_type = -13
        hdr%hdr_type = 8497
        hdr%hdr_type = 1
        hdr%hdr_type = npsp
        hdr%hdr_type = 1
        if ( ( (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) * 132.lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( npsp.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) * 132 ).le.0 ? ( npsp.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) * 132 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( npsp.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) * 132 ).le.0 ? ( npsp.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) * 132 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 538
        hdr%hdr_type = 1
        hdr%hdr_type = 3
        hdr%hdr_type = 1
        hdr%hdr_type = 1
        hdr%hdr_type = nsym
        hdr%hdr_type = 3
        if ( ( ( ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 3 ) << 3 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( nsym.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 3 ) << 3 ).le.0 ? ( ( nsym.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 3 ) << 3 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( nsym.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 3 ) << 3 ).le.0 ? ( ( nsym.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 3 ) << 3 : 1 )
        hdr%hdr_type = -4
        hdr%hdr_type = 265
        hdr%hdr_type = 1
        hdr%hdr_type = natom
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( natom.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) << 2 ).le.0 ? ( ( natom.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( natom.le.0 ).ne.0 ? 0 : (unsigned char, ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) << 2 ).le.0 ? ( ( natom.le.0 ).ne.0 ? 0 : (unsigned char, ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) << 2 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 537
        hdr%hdr_type = 1
        hdr%hdr_type = nkpt
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 3 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 3 ).le.0 ? ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 3 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char, ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 3 ).le.0 ? ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char, ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 3 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 538
        hdr%hdr_type = 1
        hdr%hdr_type = 3
        hdr%hdr_type = 1
        hdr%hdr_type = 1
        hdr%hdr_type = natom
        hdr%hdr_type = 3
        if ( ( ( ( (unsigned char)( ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) * 3 ) << 3 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( natom.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) * 3 ) << 3 ).le.0 ? ( ( natom.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) * 3 ) << 3 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( natom.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) * 3 ) << 3 ).le.0 ? ( ( natom.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) * 3 ) << 3 : 1 )
        hdr%hdr_type = -4
        hdr%hdr_type = 537
        hdr%hdr_type = 1
        hdr%hdr_type = npsp
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 3 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 3 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 3 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 3 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 3 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 537
        hdr%hdr_type = 1
        hdr%hdr_type = npsp
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 3 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 3 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 3 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 3 ).le.0 ? ( ( npsp.le.0 ).ne.0 ? 0 : (unsigned char, ( ( npsp >> 31 ) & 1 ) ^ 1 ) ? 0 : npsp ) << 3 : 1 )
        hdr%hdr_type = -1
        hdr%hdr_type = 537
        hdr%hdr_type = 1
        hdr%hdr_type = ntypat
        hdr%hdr_type = 1
        if ( ( ( (unsigned char)( ( ( ntypat >> 31 ) & 1 ) ^ 1 ) ? 0 : ntypat ) << 3 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( ntypat.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( ntypat >> 31 ) & 1 ) ^ 1 ) ? 0 : ntypat ) << 3 ).le.0 ? ( ( ntypat.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( ntypat >> 31 ) & 1 ) ^ 1 ) ? 0 : ntypat ) << 3 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        hdr%hdr_type = malloc( ( ( ( ntypat.le.0 ).ne.0 ? 0 : (unsigned char, ( ( ntypat >> 31 ) & 1 ) ^ 1 ) ? 0 : ntypat ) << 3 ).le.0 ? ( ( ntypat.le.0 ).ne.0 ? 0 : (unsigned char, ( ( ntypat >> 31 ) & 1 ) ^ 1 ) ? 0 : ntypat ) << 3 : 1 )
        hdr%hdr_type = -1
        if ( hdr%usepaw.eq.1 ) then
          *(int*)&hdr%__pad(9) = 16937
          *(int*)&hdr%__pad(17) = 1
          hdr%__pad(21) = natom
          *(int*)&hdr%__pad(13) = 1
          if ( ( (unsigned char)( ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) * 264.lt.0 ) then
            error "Attempt to allocate negative amount of memory. Possible integer overflow"
          end if
          if ( malloc( ( ( natom.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) * 264 ).le.0 ? ( natom.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) * 264 : 1 ).eq.0 ) then
            oserror "Out of memory"
          end if
          hdr%__pad(1) = malloc( ( ( natom.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) * 264 ).le.0 ? ( natom.le.0 ).ne.0 ? 0 : ( (unsigned char, ( ( natom >> 31 ) & 1 ) ^ 1 ) ? 0 : natom ) * 264 : 1 )
          *(int*)&hdr%__pad(5) = -1
        end if
        do hdr%hdr_type
          hdr%hdr_type = 1
          hdr%hdr_type = hdr%hdr_type + 1
        end do
        do hdr%hdr_type
          hdr%hdr_type = 1
          hdr%hdr_type = hdr%hdr_type + 1
        end do
        do hdr%hdr_type
          hdr%hdr_type = 1
          hdr%hdr_type = hdr%hdr_type + 1
        end do
        if ( headform.eq.22 ) then
          if ( fform.eq.1 ) then
            goto B494;
          else
          if ( fform.eq.51 ) then
            goto B494;
          else
          if ( fform.eq.101 ) then
            goto B494;
          end if
          end if
          end if
B494:;
          read(0,'(a)')hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:)
          do hdr%hdr_type
            hdr%hdr_type = 1
            hdr%hdr_type = hdr%hdr_type + 1
          end do
          do hdr%hdr_type
            hdr%hdr_type = 0
            hdr%hdr_type = hdr%hdr_type + 1
          end do
          if ( headform.eq.22 ) then
            ipsp = 1
            if ( ipsp.le.npsp ) then
              do
                read(0,'(a)')hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) * 132 )&
& ,hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 ),hdr%hdr_type &
& + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 ),hdr%hdr_type + ( ( hdr%hdr_type &
& + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )&
& ,hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 ),lmax&
& ,lloc,mmax
                ipsp = ipsp + 1
              while ( (logical)( ipsp.ne.npsp ) );
            end if
          else
          if ( headform.eq.23 ) then
            ipsp = 1
            if ( ipsp.le.npsp ) then
              do
                read(0,'(a)')hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) * 132 )&
& ,hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 ),hdr%hdr_type &
& + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 ),hdr%hdr_type + ( ( hdr%hdr_type &
& + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )&
& ,hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type &
& + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 ),lmax,lloc,mmax
                ipsp = ipsp + 1
              while ( (logical)( ipsp.ne.npsp ) );
            end if
          else
            if ( headform.eq.34 ) then
              goto B533;
            else
            if ( headform.eq.40 ) then
              goto B533;
            else
            if ( headform.eq.41 ) then
              goto B533;
            else
            if ( headform.eq.42 ) then
              goto B533;
            else
              if ( headform.gt.43 ) then
                ipsp = 1
                if ( ipsp.le.npsp ) then
                  do
                    read(0,'(a)')hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) * 132 )&
& ,hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 ),hdr%hdr_type &
& + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 ),hdr%hdr_type + ( ( hdr%hdr_type &
& + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )&
& ,hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type &
& + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type + ( ( hdr%hdr_type &
& + ( hdr%hdr_type * ipsp ) ) << 2 )
                    ipsp = ipsp + 1
                  while ( (logical)( ipsp.ne.npsp ) );
                end if
              end if
            end if
            end if
            end if
            end if
B533:;
            ipsp = 1
            if ( npsp.lt.ipsp ) then
            else
              do
                read(0,'(a)')hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) * 132 )&
& ,hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 ),hdr%hdr_type &
& + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 3 ),hdr%hdr_type + ( ( hdr%hdr_type &
& + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )&
& ,hdr%hdr_type + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 ),hdr%hdr_type &
& + ( ( hdr%hdr_type + ( hdr%hdr_type * ipsp ) ) << 2 )
                ipsp = ipsp + 1
              while ( (logical)( ipsp.ne.npsp ) );
            end if
          end if
          end if
          hdr%fermie = 0.000000000000
          if ( headform.eq.22 ) then
            read(0,'(a)')hdr%residm,hdr%hdr_type(:,:),hdr%etot
          else
            if ( headform.eq.23 ) then
              goto B548;
            else
            if ( headform.eq.34 ) then
              goto B548;
            else
            if ( headform.gt.39 ) then
              goto B548;
            end if
            end if
            end if
B548:;
            read(0,'(a)')hdr%residm,hdr%hdr_type(:,:),hdr%etot,hdr%fermie
          end if
          if ( headform.gt.43 ) then
            if ( hdr%usepaw.ne.1 ) then
            else
              iatom = 1
              if ( iatom.le.hdr%natom ) then
                do
                  itypat = hdr%hdr_type
                  lmn2_size = ( hdr%hdr_type * ( hdr%hdr_type + 1 ) ) / 2
                  hdr%__pad(1) = lmn2_size
                  hdr%__pad(1) = hdr%hdr_type
                  hdr%__pad(1) = hdr%nspden
                  hdr%__pad(1) = hdr%nsppol
                  hdr%__pad(1) = 265
                  hdr%__pad(1) = 1
                  hdr%__pad(1) = hdr%nspden
                  hdr%__pad(1) = 1
                  if ( ( ( (unsigned char)( ( ( hdr%nspden >> 31 ) & 1 ) ^ 1 ) ? 0 : hdr%nspden ) << 2 ).lt.0 ) then
                    error "Attempt to allocate negative amount of memory. Possible integer overflow"
                  end if
                  if ( malloc( ( ( ( *(int*)(( ( (unsigned char)( ( ( hdr%nspden >> 31 ) & 1 ) ^ 1 ) ? 0 : hdr%nspden ) << 2 ) + 32).le.0 ).ne.0 ? 0 : (unsigned char)( ( ( hdr%nspden >> 31 ) & 1 ) ^ 1 ) ? 0 : hdr%nspden ) << 2 ).le.0 ? ( ( *(int*)(( ( (unsigned char)( ( ( hdr%nspden >> 31 ) & 1 ) ^ 1 ) ? 0 : hdr%nspden ) << 2 ) + 32).le.0 ).ne.0 ? 0 : (unsigned char)( ( ( hdr%nspden >> 31 ) & 1 ) ^ 1 ) ? 0 : hdr%nspden ) << 2 : 1 ).eq.0 ) then
                    oserror "Out of memory"
                  end if
                  hdr%__pad(1) = edx
                  hdr%__pad(1) = -1
                  hdr%__pad(1) = 538
                  hdr%__pad(1) = 1
                  hdr%__pad(1) = lmn2_size
                  hdr%__pad(1) = 1
                  hdr%__pad(1) = 1
                  hdr%__pad(1) = hdr%nspden
                  hdr%__pad(1) = (unsigned char, ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size
                  if ( ( ( ( (unsigned char)( ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size ) * ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) ) << 3 ).lt.0 ) then
                    error "Attempt to allocate negative amount of memory. Possible integer overflow"
                  end if
                  if ( malloc( ( ( ( ( hdr%nspden.le.0 ) | ( lmn2_size.le.0 ) ).ne.0 ? 0 : ( (unsigned char)( ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size ) * ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) ) << 3 ).le.0 ? ( ( ( hdr%nspden.le.0 ) | ( lmn2_size.le.0 ) ).ne.0 ? 0 : ( (unsigned char)( ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size ) * ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) ) << 3 : 1 ).eq.0 ) then
                    oserror "Out of memory"
                  end if
                  hdr%__pad(1) = malloc( ( ( ( ( hdr%nspden.le.0 ) | ( lmn2_size.le.0 ) ).ne.0 ? 0 : ( (unsigned char, ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size ) * ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) ) << 3 ).le.0 ? ( ( ( hdr%nspden.le.0 ) | ( lmn2_size.le.0 ) ).ne.0 ? 0 : ( (unsigned char, ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size ) * ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) ) << 3 : 1 )
                  hdr%__pad(1) = ~( (unsigned char, ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size )
                  hdr%__pad(1) = 266
                  hdr%__pad(1) = 1
                  hdr%__pad(1) = lmn2_size
                  hdr%__pad(1) = 1
                  hdr%__pad(1) = 1
                  hdr%__pad(1) = hdr%nspden
                  hdr%__pad(1) = (unsigned char, ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size
                  if ( ( ( ( (unsigned char)( ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size ) * ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) ) << 2 ).lt.0 ) then
                    error "Attempt to allocate negative amount of memory. Possible integer overflow"
                  end if
                  if ( malloc( ( ( ( ( hdr%nspden.le.0 ) | ( lmn2_size.le.0 ) ).ne.0 ? 0 : ( (unsigned char)( ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size ) * ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) ) << 2 ).le.0 ? ( ( ( hdr%nspden.le.0 ) | ( lmn2_size.le.0 ) ).ne.0 ? 0 : ( (unsigned char)( ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size ) * ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) ) << 2 : 1 ).eq.0 ) then
                    oserror "Out of memory"
                  end if
                  hdr%__pad(1) = malloc( ( ( ( ( hdr%nspden.le.0 ) | ( lmn2_size.le.0 ) ).ne.0 ? 0 : ( (unsigned char, ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size ) * ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) ) << 2 ).le.0 ? ( ( ( hdr%nspden.le.0 ) | ( lmn2_size.le.0 ) ).ne.0 ? 0 : ( (unsigned char, ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size ) * ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) ) << 2 : 1 )
                  hdr%__pad(1) = ~( (unsigned char, ( lmn2_size.lt.0 ) ^ 1 ) ? 0 : lmn2_size )
                  iatom = iatom + 1
                while ( (logical)( iatom.ne.hdr%natom ) );
              end if
              if ( 0.ne.0 ) then
                errorat "Attempting to allocate already allocated array '%s'", "nsel"
                do
                  ispden = 1
                  if ( ispden.le.hdr%nspden ) then
                    do
                                      while ( (logical, ispden.ne.hdr%nspden ) );
                  end if
iatom = iatom &
& + 1
                while ( !(logical)( iatom.ne.hdr%natom ) );
              else
                if ( ( ( ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) * ( hdr%natom.lt.0 ? hdr%natom : 0 ) ) << 2 ).lt.0 ) then
                  error "Attempt to allocate negative amount of memory. Possible integer overflow"
                end if
                if ( malloc( ( ( ( ( hdr%natom.le.0 ) | ( hdr%nspden.le.0 ) ).ne.0 ? 0 : ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) * ( hdr%natom.lt.0 ? hdr%natom : 0 ) ) << 2 ).le.0 ? ( ( ( hdr%natom.le.0 ) | ( hdr%nspden.le.0 ) ).ne.0 ? 0 : ( hdr%nspden.lt.0 ? hdr%nspden : 0 ) * ( hdr%natom.lt.0 ? hdr%natom : 0 ) ) << 2 : 1 ).eq.0 ) then
                  oserror "Out of memory"
                end if
                iatom = 1
                if ( iatom.le.hdr%natom ) then
                  continue;
                end if
              end if
              read(0,'(a)')
              iatom = 1
              if ( iatom.le.hdr%natom ) then
                do
                  do hdr%nspden
                    hdr%__pad(1) = *(int*,ebp_2400 + ( ( ebp_2396 + ( esi * edx ) ) << 2 ))
                  end do
                  iatom = iatom + 1
                while ( (logical)( hdr%natom.ne.iatom ) );
              end if
              do hdr%natom
                do hdr%nspden
                end do
              end do
              bsize = 0
              if ( 0.ne.0 ) then
                errorat "Attempting to allocate already allocated array '%s'", "ibuffer"
              else
                if ( ( ( (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 2 ).lt.0 ) then
                  error "Attempt to allocate negative amount of memory. Possible integer overflow"
                end if
                if ( malloc( ( ( ( bsize.le.0 ).ne.0 ? 0 : (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 2 ).le.0 ? ( ( bsize.le.0 ).ne.0 ? 0 : (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 2 : 1 ).eq.0 ) then
                  oserror "Out of memory"
                end if
                if ( 0.ne.0 ) then
                  errorat "Attempting to allocate already allocated array '%s'", "buffer"
                  do
                    ispden = 1
                    if ( ispden.le.hdr%nspden ) then
                      do
                        nselect = *(int*,ebp_724 + ( ebp_712 * ispden * 4 ) + ( ebp_700 * iatom * 4 ) &
& + ( ebp_720 * 4 ))
                        do nselect
                          hdr%__pad(1) = *(int*,ebp_2348 + ( ( ebp_2352 + ( edi * ( ebp_2364 + edx ) ) ) << 2 ))
                        end do
                        do nselect
                          hdr%__pad(1) = *(double*,ebp_2328 + ( ( ebp_2332 + ( edi * ( ebp_2344 + edx ) ) ) << 3 ))
                        end do
                        ii = nselect + ii
                        ispden = ispden + 1
                      while ( (logical)( hdr%nspden.ne.ispden ) );
                    end if
                    iatom = iatom + 1
                  while ( !(logical)( hdr%natom.ne.iatom ) );
                else
                  if ( ( ( (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 3 ).lt.0 ) then
                    error "Attempt to allocate negative amount of memory. Possible integer overflow"
                  end if
                  if ( malloc( ( ( (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 3 ).le.0 ? ( (unsigned char)( ( bsize.lt.0 ) ^ 1 ) ? 0 : bsize ) << 3 : 1 ).eq.0 ) then
                    oserror "Out of memory"
                  end if
                  ii = 0
                  read(0,'(a)')ebp_156(:,:),ebp_116(:,:)
                  iatom = 1
                  if ( iatom.le.hdr%natom ) then
                    continue;
                  end if
                end if
                if ( ebp_156.eq.0 ) then
                  errorat "Attempt to DEALLOCATE unallocated '%s'", "ibuffer"
                end if
                call free( ebp_156 )
                if ( ebp_116.eq.0 ) then
                  errorat "Attempt to DEALLOCATE unallocated '%s'", "buffer"
                end if
                call free( ebp_116 )
                if ( ebp_724.eq.0 ) then
                  errorat "Attempt to DEALLOCATE unallocated '%s'", "nsel"
                end if
                call free( ebp_724 )
              end if
            end if
          else
          end if
        end if
        if ( headform.eq.22 ) then
          goto B498;
        else
        if ( headform.eq.23 ) then
          goto B498;
        else
        if ( headform.eq.34 ) then
          goto B498;
        else
          if ( headform.le.39 ) then
            goto B503;
          else
          if ( headform.le.49 ) then
            read(0,'(a)')hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:)
          end if
          end if
B503:;
          if ( headform.gt.49 ) then
            read(0,'(a)')hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:)
          end if
        end if
        end if
        end if
B498:;
        read(0,'(a)')hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:,:),hdr%hdr_type(:&
& ,:),hdr%hdr_type(:,:)
      else
        if ( headform.eq.34 ) then
          continue;
        else
          if ( headform.eq.40 ) then
            continue;
          else
            if ( headform.eq.41 ) then
              continue;
            else
              if ( headform.eq.42 ) then
                continue;
              else
                if ( headform.eq.44 ) then
                  continue;
                else
                  if ( headform.ne.53 ) then
                    write(0,'(a)')ch10,' hdr_io : ERROR -',ch10,'  The first line of the (WF, DEN or POT) file read in unit '&
& ,unitfi,' is erroneous.',ch10,'  headform is ',headform,', while it should be 23, 34, 40, 41, 42, 44 or 53.'&
& ,ch10,'  Action : check the correctness of your file.'
                    call wrtout_( "", message, "COLL", 500, 4 )
                    call leave_new_( "COLL", 4 )
                  end if
                end if
              end if
            end if
          end if
        end if
      end if
    end if
    end if
    end if
    end if
    end if
    end if
B29:;
    headform = 22
  end if
end subroutine hdr_io_int_
#if 0
#endif
