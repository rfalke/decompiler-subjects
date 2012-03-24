!include "optic.F90.h"
program main()
use interfaces_15common
use interfaces_14iowfdenpot
use interfaces_13recipspace
use interfaces_13io_mpi
use interfaces_12geometry
use interfaces_11util
use interfaces_01manage_mpi
use defs_infos
use defs_datatypes
use defs_basis
implicit none

  integer :: eax
  integer :: ecx
  integer :: edx
    call free( ebp_4288 )
  end if
  write(0,'(a)')' The root name of the output files is :',ebp_4288
  open(0)
  rewind(0)
  read(0,'(a)')filnam1(1)
  read(0,'(a)')filnam2(1)
  read(0,'(a)')filnam3(1)
  read(0,'(a)')filnam0(1)
  accesswff = 0
  spacecomm = 0
  master = 0
  me = 0
  call wffopen_( accesswff, spacecomm, filnam0, ierr, "badarg" )
  call wffopen_( accesswff, spacecomm, filnam1, ierr, "badarg" )
  call wffopen_( accesswff, spacecomm, filnam2, ierr, "badarg" )
  call wffopen_( accesswff, spacecomm, filnam3, ierr, "badarg" )
  rdwr = 1
  call hdr_io_wfftype_( fform0, "badarg" )
  headform = hdr%headform
  bantot = hdr%bantot
  ecut = hdr%ecut_eff
  natom = hdr%natom
  nkpt = hdr%nkpt
  nspinor = hdr%nspinor
  nsppol = hdr%nsppol
  ntypat = hdr%ntypat
  occopt = hdr%occopt
  do 3
    do 3
      rprimd(1, ( 1 * 3 ) + -4 + 1+1 ) = hdr%qptn(3)
    end do
  end do
  if ( 0.ne.0 ) then
    errorat "Attempting to allocate already allocated array '%s'", "nband"
  else
    if ( ( ( (unsigned char)( ( ( ( nsppol * nkpt ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt ) << 2 ).lt.0 ) then
      error "Attempt to allocate negative amount of memory. Possible integer overflow"
    end if
    if ( malloc( ( ( ( nsppol * nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( ( nsppol * nkpt ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt ) << 2 ).le.0 ? ( ( nsppol * nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( ( nsppol * nkpt ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt ) << 2 : 1 ).eq.0 ) then
      oserror "Out of memory"
    end if
    if ( 0.ne.0 ) then
      errorat "Attempting to allocate already allocated array '%s'", "occ"
      do bantot
      end do
      do nsppol * nkpt
      end do
      nsym = hdr%nsym
      if ( 0.ne.0 ) then
        errorat "Attempting to allocate already allocated array '%s'", "symrel"
      else
        if ( ( ( ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( nsym.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 ).le.0 ? ( ( nsym.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        if ( 0.ne.0 ) then
          errorat "Attempting to allocate already allocated array '%s'", "symrec"
          do *(int*)(ebp_2147483632 + -2088)
            do *(int*)(ebp_2147483632 + -2100)
              do *(int*)(ebp_2147483632 + -2112)
                *(int*,*(int*,ebp_2147483632 + -2116)) = *(int*,ebp_2147483632 + -2116) + 1
              end do
            end do
          end do
          isym = 1
          if ( isym.le.nsym ) then
            do
              call mati3inv_( esi, eax(1) )
              if ( ebp_4588.ne.esi.and.esi.ne.0 ) then
                call free( eax )
              end if
              if ( ebp_4928.ne.ebx ) then
                call _gfortran_internal_unpack( ebp_4928, ebx )
                if ( ebx.ne.0 ) then
                  call free( eax )
                end if
              end if
              isym = isym + 1
            while ( (logical)( nsym.ne.isym ) );
          end if
          if ( 0.ne.0 ) then
            errorat "Attempting to allocate already allocated array '%s'", "kpt"
            do ebp_5072
              do *(int*)(ebp_2147483632 + -1864)
                *(int*,*(int*,ebp_2147483632 + -1868)) = *(int*,ebp_2147483632 + -1868) + 1
              end do
            end do
            do nsppol * nkpt
            end do
            mband = ecx
            ii = 1
            if ( ii.le.nkpt ) then
              do
                if ( mband.ne.*(int*)(ebp_2604 + ( ( ebp_2600 + ( ebp_2592 * ii ) ) << 2 )) ) then
                  write(0,'(a)')'optic : Error : nband must be constant across kpts'
                  stop
                end if
                ii = ii + 1
              while ( !(logical)( ii.ne.ebp_4928 ) );
            end if
            write(0,'(a)')
            write(0,'(a)')' rprimd(bohr)      =',rprimd(1,1,:,:)
            write(0,'(a)')'                    ',rprimd(1,2,:,:)
            write(0,'(a)')'                    ',rprimd(1,3,:,:)
            write(0,'(a)')' natom             =',natom
            write(0,'(a)')' nkpt,mband        =',nkpt,mband
            write(0,'(a)')' ecut              =',ecut,' Ha'
            write(0,'(a)')' fermie            =',fermie,' Ha',fermie * 27.211384500000&
& ,' eV'
            formeig0 = 0
            formeig = 1
            tim_rwwf = 0
            if ( 0.ne.0 ) then
              errorat "Attempting to allocate already allocated array '%s'", "eigtmp"
            else
              if ( ( ( ( (unsigned char)( ( ( ( ( mband * mband ) * 2 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : mband * mband ) * 2 ) << 3 ).lt.0 ) then
                error "Attempt to allocate negative amount of memory. Possible integer overflow"
              end if
              if ( malloc( ( ( ( ( ( ( mband * mband ) * 2 ).le.0 ).ne.0 ? 0 : (unsigned char)( ( ( ( ( mband * mband ) * 2 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : mband * mband ) * 2 ) << 3 ).le.0 ? ( ( ( ( ( mband * mband ) * 2 ).le.0 ).ne.0 ? 0 : (unsigned char)( ( ( ( ( mband * mband ) * 2 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : mband * mband ) * 2 ) << 3 : 1 ).eq.0 ) then
                oserror "Out of memory"
              end if
              if ( 0.ne.0 ) then
                errorat "Attempting to allocate already allocated array '%s'", "eig0tmp"
              else
                if ( ( ( (unsigned char)( ( ( mband >> 31 ) & 1 ) ^ 1 ) ? 0 : mband ) << 3 ).lt.0 ) then
                  error "Attempt to allocate negative amount of memory. Possible integer overflow"
                end if
                if ( malloc( ( ( (unsigned char)( ( ( mband >> 31 ) & 1 ) ^ 1 ) ? 0 : mband ) << 3 ).le.0 ? ( (unsigned char)( ( ( mband >> 31 ) & 1 ) ^ 1 ) ? 0 : mband ) << 3 : 1 ).eq.0 ) then
                  oserror "Out of memory"
                end if
                call hdr_skip_wfftype_( "badarg" )
                call hdr_skip_wfftype_( "badarg" )
                call hdr_skip_wfftype_( "badarg" )
                if ( 0.ne.0 ) then
                  errorat "Attempting to allocate already allocated array '%s'", "eigen0"
                else
                  if ( ( ( (unsigned char)( ( ( ( nsppol * nkpt * mband ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * mband ) << 3 ).lt.0 ) then
                    error "Attempt to allocate negative amount of memory. Possible integer overflow"
                  end if
                  if ( malloc( ( ( (unsigned char)( ( ( ( nsppol * nkpt * mband ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * mband ) << 3 ).le.0 ? ( (unsigned char)( ( ( ( nsppol * nkpt * mband ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * mband ) << 3 : 1 ).eq.0 ) then
                    oserror "Out of memory"
                  end if
                  if ( 0.ne.0 ) then
                    errorat "Attempting to allocate already allocated array '%s'", "eigen11"
                  else
                    if ( ( ( (unsigned char)( ( ( ( nsppol * nkpt * ( ( mband * mband ) * 2 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * ( ( mband * mband ) * 2 ) ) << 3 ).lt.0 ) then
                      error "Attempt to allocate negative amount of memory. Possible integer overflow"
                    end if
                    if ( malloc( ( ( (unsigned char)( ( ( ( nsppol * nkpt * ( ( mband * mband ) * 2 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * ( ( mband * mband ) * 2 ) ) << 3 ).le.0 ? ( (unsigned char)( ( ( ( nsppol * nkpt * ( ( mband * mband ) * 2 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * ( ( mband * mband ) * 2 ) ) << 3 : 1 ).eq.0 ) then
                      oserror "Out of memory"
                    end if
                    if ( 0.ne.0 ) then
                      errorat "Attempting to allocate already allocated array '%s'", "eigen12"
                    else
                      if ( ( ( (unsigned char)( ( ( ( nsppol * nkpt * ( ( mband * mband ) * 2 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * ( ( mband * mband ) * 2 ) ) << 3 ).lt.0 ) then
                        error "Attempt to allocate negative amount of memory. Possible integer overflow"
                      end if
                      if ( malloc( ( ( (unsigned char)( ( ( ( nsppol * nkpt * ( ( mband * mband ) * 2 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * ( ( mband * mband ) * 2 ) ) << 3 ).le.0 ? ( (unsigned char)( ( ( ( nsppol * nkpt * ( ( mband * mband ) * 2 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * ( ( mband * mband ) * 2 ) ) << 3 : 1 ).eq.0 ) then
                        oserror "Out of memory"
                      end if
                      if ( 0.ne.0 ) then
                        errorat "Attempting to allocate already allocated array '%s'", "eigen13"
                        do
                          ikpt = 1
                          if ( ikpt.le.nkpt ) then
                            do
                              nband1 = *(int*,ebp_2604 + ( ( ebp_2600 + ( ebp_2592 * ( ikpt + ( nkpt * ( isppol &
& + -1 ) ) ) ) ) << 2 ))
                              call wffreadeigk_( ebp_200, "", headform, ikpt, isppol, mband, nband1, tim_rwwf&
& , "badarg" )
                              do nband1
                              end do
                              call wffreadeigk_( ebp_320, formeig, headform, ikpt, isppol, mband, nband1&
& , tim_rwwf, "badarg" )
                              do ( nband1 * nband1 ) * 2
                              end do
                              call wffreadeigk_( ebp_320, formeig, headform, ikpt, isppol, mband, nband1&
& , tim_rwwf, "badarg" )
                              do ( nband1 * nband1 ) * 2
                              end do
                              call wffreadeigk_( ebp_320, formeig, headform, ikpt, isppol, mband, nband1&
& , tim_rwwf, "badarg" )
                              do ( nband1 * nband1 ) * 2
                              end do
                              bdtot0_index = nband1 + bdtot0_index
                              bdtot_index = bdtot_index + ( ( nband1 * nband1 ) * 2 )
                              ikpt = ikpt + 1
                            while ( (logical)( nkpt.ne.ikpt ) );
                          end if
                          isppol = isppol + 1
                        while ( !(logical)( nsppol.ne.isppol ) );
                      else
                        if ( ( ( (unsigned char)( ( ( ( nsppol * nkpt * ( ( mband * mband ) * 2 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * ( ( mband * mband ) * 2 ) ) << 3 ).lt.0 ) then
                          error "Attempt to allocate negative amount of memory. Possible integer overflow"
                        end if
                        if ( malloc( ( ( (unsigned char)( ( ( ( nsppol * nkpt * ( ( mband * mband ) * 2 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * ( ( mband * mband ) * 2 ) ) << 3 ).le.0 ? ( (unsigned char)( ( ( ( nsppol * nkpt * ( ( mband * mband ) * 2 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * ( ( mband * mband ) * 2 ) ) << 3 : 1 ).eq.0 ) then
                          oserror "Out of memory"
                        end if
                        bdtot0_index = 0
                        bdtot_index = 0
                        isppol = 1
                        if ( isppol.le.nsppol ) then
                          continue;
                        end if
                      end if
                      call wffclose_( "badarg" )
                      call wffclose_( "badarg" )
                      call wffclose_( "badarg" )
                      call wffclose_( "badarg" )
                      if ( ebp_320.eq.0 ) then
                        errorat "Attempt to DEALLOCATE unallocated '%s'", "eigtmp"
                      end if
                      call free( ebp_320 )
                      if ( ebp_200.eq.0 ) then
                        errorat "Attempt to DEALLOCATE unallocated '%s'", "eig0tmp"
                      end if
                      call free( ebp_200 )
                      call metric_( gmet, gprimd, "ÿÿÿÿwtk", rmet, rprimd, (long long, ucvol ) )
                      call matr3inv_( gmet, gmet_inv )
                      if ( 0.ne.0 ) then
                        errorat "Attempting to allocate already allocated array '%s'", "wtk"
                      else
                        if ( ( ( (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 3 ).lt.0 ) then
                          error "Attempt to allocate negative amount of memory. Possible integer overflow"
                        end if
                        if ( malloc( ( ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 3 ).le.0 ? ( ( nkpt.le.0 ).ne.0 ? 0 : (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) << 3 : 1 ).eq.0 ) then
                          oserror "Out of memory"
                        end if
                        call getwtk_( ebp_2500, nkpt, nsym, ebp_3124, eax )
                        if ( 0.ne.0 ) then
                          errorat "Attempting to allocate already allocated array '%s'", "doccde"
                        else
                          if ( ( ( (unsigned char)( ( ( ( nsppol * nkpt * mband ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * mband ) << 3 ).lt.0 ) then
                            error "Attempt to allocate negative amount of memory. Possible integer overflow"
                          end if
                          if ( malloc( ( ( (unsigned char)( ( ( ( nsppol * nkpt * mband ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * mband ) << 3 ).le.0 ? ( (unsigned char)( ( ( ( nsppol * nkpt * mband ) >> 31 ) & 1 ) ^ 1 ) ? 0 : nsppol * nkpt * mband ) << 3 : 1 ).eq.0 ) then
                            oserror "Out of memory"
                          end if
                          read(0,'(a)')tsmear
                          read(0,'(a)')domega,maxomega
                          nomega = (int, maxomega / domega )
                          maxomega = domega * dble( nomega )
                          if ( 0.ne.0 ) then
                            errorat "Attempting to allocate already allocated array '%s'", "cond_nd"
                          else
                            if ( ( ( (unsigned char)( ( ( nomega >> 31 ) & 1 ) ^ 1 ) ? 0 : nomega ) << 3 ).lt.0 ) then
                              error "Attempt to allocate negative amount of memory. Possible integer overflow"
                            end if
                            if ( malloc( ( ( (unsigned char)( ( ( nomega >> 31 ) & 1 ) ^ 1 ) ? 0 : nomega ) << 3 ).le.0 ? ( (unsigned char)( ( ( nomega >> 31 ) & 1 ) ^ 1 ) ? 0 : nomega ) << 3 : 1 ).eq.0 ) then
                              oserror "Out of memory"
                            end if
                            if ( 0.ne.0 ) then
                              errorat "Attempting to allocate already allocated array '%s'", "cond_kg"
                            else
                              if ( ( ( (unsigned char)( ( ( nomega >> 31 ) & 1 ) ^ 1 ) ? 0 : nomega ) << 3 ).lt.0 ) then
                                error "Attempt to allocate negative amount of memory. Possible integer overflow"
                              end if
                              if ( malloc( ( ( (unsigned char)( ( ( nomega >> 31 ) & 1 ) ^ 1 ) ? 0 : nomega ) << 3 ).le.0 ? ( (unsigned char)( ( ( nomega >> 31 ) & 1 ) ^ 1 ) ? 0 : nomega ) << 3 : 1 ).eq.0 ) then
                                oserror "Out of memory"
                              end if
                              read(0,'(a)')sc
                              write(0,'(a)')' Scissor shift     =',sc,' Ha'
                              read(0,'(a)')tol
                              write(0,'(a)')' Tolerance on closeness to singularities     =',tol,' Ha'
                              read(0,'(a)')mlinflag
                              read(0,'(a)')linflag(1,:,:)
                              write(0,'(a)')' linear coeffs to be calculated : '
                              write(0,'(a)')linflag(1,:,:)
                              read(0,'(a)')mnlinflag
                              read(0,'(a)')nlinflag(1,:,:)
                              write(0,'(a)')' non-linear coeffs to be calculated : '
                              write(0,'(a)')nlinflag(1,:,:)
                              close(0)
                              if ( 0.ne.0 ) then
                                errorat "Attempting to allocate already allocated array '%s'", "symcart"
                              else
                                if ( ( ( ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 3 ).lt.0 ) then
                                  error "Attempt to allocate negative amount of memory. Possible integer overflow"
                                end if
                                if ( malloc( ( ( ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 3 ).le.0 ? ( ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 3 : 1 ).eq.0 ) then
                                  oserror "Out of memory"
                                end if
                                call sym2cart_( gprimd, nsym, rprimd, ebp_3172, eax(1) )
                                if ( 0.ne.0 ) then
                                  errorat "Attempting to allocate already allocated array '%s'", "pmat"
                                  do
                                                                        lin1 = (int, dble( linflag( ii + -1&
& +1 ) ) / 10.000000000000 )
                                    lin2 = linflag( ii &
& + -1+1 ) - ( ( ( (/*HI*/int, linflag( ii + -1+1 ) * 0x66666667 ) >> 2 ) - ( linflag( ii &
& &
& + -1+1 ) >> 31 ) ) * 10 )
write(0,'(a)')' linopt ',lin1,lin2
                                    call int2char4_( lin1, s1, 4 )
                                    call int2char4_( lin2, s2, 4 )
                                    trim( fn_radix(1) )
                                    if ( ( ( ebp_4516 + 1 ) << 5 ).lt.0 ) then
                                      error "Attempt to allocate a negative amount of memory."
                                    end if
                                    if ( malloc( ( ( ebp_4516 + 1 ) << 5 ).le.0 ? ( ebp_4516 + 1 ) << 5 : 1 ).eq.0 ) then
                                      oserror "Memory allocation failed"
                                    end if
                                    call _gfortran_concat_string( ebp_4516 + 1, eax, ebp_4516, ebp_4520, 1, "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90" )
                                    if ( ebp_4516.gt.0.and.ebp_4520.ne.0 ) then
                                      call free( ebp_4520 )
                                    end if
                                    trim( s1(1) )
                                    if ( ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ).lt.0 ) then
                                      error "Attempt to allocate a negative amount of memory."
                                    end if
                                    if ( malloc( ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ).le.0 ? ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ) : 1 ).eq.0 ) then
                                      oserror "Memory allocation failed"
                                    end if
                                    call _gfortran_concat_string( ebp_4508 + ebp_4516 + 1, eax, ebp_4516 + 1&
& , esi, ebp_4508, ebp_4512 )
                                    if ( ebp_4508.gt.0.and.ebp_4512.ne.0 ) then
                                      call free( ebp_4512 )
                                    end if
                                    if ( ebp_4512.ne.0 ) then
                                      call free( eax )
                                    end if
                                    if ( ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ) + 32.lt.0 ) then
                                      error "Attempt to allocate a negative amount of memory."
                                    end if
                                    if ( malloc( ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ) + 32.le.0 ? ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ) + 32 : 1 ).eq.0 ) then
                                      oserror "Memory allocation failed"
                                    end if
                                    call _gfortran_concat_string( ebp_4508 + ebp_4516 + 1 + 1, eax, ebp_4508 &
& + ebp_4516 + 1, ebx, 1, "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90" )
                                    if ( malloc( ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ) + 32.le.0 ? ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ) + 32 : 1 ).ne.0 ) then
                                      call free( eax )
                                    end if
                                    trim( s2(1) )
                                    if ( ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ) + 32 + ( ebp_4500 * 32 ).lt.0 ) then
                                      error "Attempt to allocate a negative amount of memory."
                                    end if
                                    if ( malloc( ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ) + 32 + ( ebp_4500 * 32 ).le.0 ? ( ebp_4516 * 32 ) + 32 + ( ebp_4508 * 32 ) + 32 + ( ebp_4500 * 32 ) : 1 ).eq.0 ) then
                                      oserror "Memory allocation failed"
                                    end if
                                    call _gfortran_concat_string( ebp_4500 + ebp_4508 + ebp_4516 + 1 + 1, eax&
& , ebp_4508 + ebp_4516 + 1 + 1, edi, ebp_4500, ebp_4504 )
                                    if ( ebp_4500.gt.0.and.ebp_4504.ne.0 ) then
                                      call free( ebp_4504 )
                                    end if
                                    if ( ebp_4504.ne.0 ) then
                                      call free( eax )
                                    end if
                                    if ( ebp_4500 + ebp_4508 + ebp_4516 + 1 + 1.gt.255 ) then
                                      tmp_radix(1) = esi
                                    else
                                      tmp_radix(1) = esi
                                      call memset( tmp_radix( ebp_4500 + ebp_4508 + ebp_4516 + 1 + 1+1 ), 32, 256 - ( ebp_4500 &
& + ebp_4508 + ebp_4516 + 1 + 1 ) )
                                    end if
                                    if ( esi.ne.0 ) then
                                      call free( eax )
                                    end if
                                    call linopt_( nsppol, ucvol, nkpt, ebp_4280, nsym, ebp_3076, mband, ebp_2768&
& , ebp_224, fermie, ebp_2852, lin1, lin2, nomega, domega, sc, tsmear, tmp_radix&
& , 256 )
                                    ii = ii + 1
                                  while ( (logical)( mlinflag.ne.ii ) );
                                else
                                  if ( ( ( ( ( mband.lt.0 ? mband : 0 ) * 2 ) * ( mband.lt.0 ? mband : 0 ) * ( nkpt.lt.0 ? nkpt : 0 ) * 3 * ( nsppol.lt.0 ? nsppol : 0 ) ) << 4 ).lt.0 ) then
                                    error "Attempt to allocate negative amount of memory. Possible integer overflow"
                                  end if
                                  if ( malloc( ( ( ( ( mband.lt.0 ? mband : 0 ) * 2 ) * ( mband.lt.0 ? mband : 0 ) * ( nkpt.lt.0 ? nkpt : 0 ) * 3 * ( nsppol.lt.0 ? nsppol : 0 ) ) << 4 ).le.0 ? ( ( ( mband.lt.0 ? mband : 0 ) * 2 ) * ( mband.lt.0 ? mband : 0 ) * ( nkpt.lt.0 ? nkpt : 0 ) * 3 * ( nsppol.lt.0 ? nsppol : 0 ) ) << 4 : 1 ).eq.0 ) then
                                    oserror "Out of memory"
                                  end if
                                  write(0,'(a)')' optic : Call pmat2cart'
                                  call pmat2cart_( ebp_248, ebp_272, ebp_296, mband, nkpt, nsppol, ebp_2852&
& , rprimd )
                                  write(0,'(a)')' optic : Call linopt'
                                  ii = 1
                                  if ( ii.le.mlinflag ) then
                                    continue;
                                  end if
                                end if
                                write(0,'(a)')' optic : Call nlinopt'
                                ii = 1
                                if ( ii.le.mnlinflag ) then
                                  do
                                    nlin1 = (int, dble( nlinflag( ii + -1+1 ) ) / 100.000000000000 )
                                    nlin2 = (int, ( dble( nlinflag( ii + -1+1 ) ) + ( dble( nlin1 ) * -100.000000000000 ) ) / 10.000000000000 )
                                    nlin3 = nlinflag( ii + -1+1 ) - ( ( ( (/*HI*/int, nlinflag( ii + -1+1 ) * 0x66666667 ) >> 2 ) - ( nlinflag( ii &
& + -1+1 ) >> 31 ) ) * 10 )
                                    call int2char4_( nlin1, s1, 4 )
                                    call int2char4_( nlin2, s2, 4 )
                                    call int2char4_( nlin3, s3, 4 )
                                    trim( fn_radix(1) )
                                    if ( ( ( ebp_4548 + 1 ) << 5 ).lt.0 ) then
                                      error "Attempt to allocate a negative amount of memory."
                                    end if
                                    if ( malloc( ( ( ebp_4548 + 1 ) << 5 ).le.0 ? ( ebp_4548 + 1 ) << 5 : 1 ).eq.0 ) then
                                      oserror "Memory allocation failed"
                                    end if
                                    call _gfortran_concat_string( ebp_4548 + 1, eax, ebp_4548, ebp_4552, 1, "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90" )
                                    if ( ebp_4548.gt.0.and.ebp_4552.ne.0 ) then
                                      call free( ebp_4552 )
                                    end if
                                    trim( s1(1) )
                                    if ( ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ).lt.0 ) then
                                      error "Attempt to allocate a negative amount of memory."
                                    end if
                                    if ( malloc( ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ).le.0 ? ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) : 1 ).eq.0 ) then
                                      oserror "Memory allocation failed"
                                    end if
                                    call _gfortran_concat_string( ebp_4540 + ebp_4548 + 1, eax, ebp_4548 + 1&
& , esi, ebp_4540, ebp_4544 )
                                    if ( ebp_4540.gt.0.and.ebp_4544.ne.0 ) then
                                      call free( ebp_4544 )
                                    end if
                                    if ( ebp_4544.ne.0 ) then
                                      call free( eax )
                                    end if
                                    if ( ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32.lt.0 ) then
                                      error "Attempt to allocate a negative amount of memory."
                                    end if
                                    if ( malloc( ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32.le.0 ? ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32 : 1 ).eq.0 ) then
                                      oserror "Memory allocation failed"
                                    end if
                                    call _gfortran_concat_string( ebp_4540 + ebp_4548 + 1 + 1, eax, ebp_4540 &
& + ebp_4548 + 1, ebx, 1, "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90" )
                                    if ( malloc( ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32.le.0 ? ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32 : 1 ).ne.0 ) then
                                      call free( eax )
                                    end if
                                    trim( s2(1) )
                                    if ( ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ).lt.0 ) then
                                      error "Attempt to allocate a negative amount of memory."
                                    end if
                                    if ( malloc( ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ).le.0 ? ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ) : 1 ).eq.0 ) then
                                      oserror "Memory allocation failed"
                                    end if
                                    call _gfortran_concat_string( ebp_4532 + ebp_4540 + ebp_4548 + 1 + 1, eax&
& , ebp_4540 + ebp_4548 + 1 + 1, esi, ebp_4532, ebp_4536 )
                                    if ( ebp_4532.gt.0.and.ebp_4536.ne.0 ) then
                                      call free( ebp_4536 )
                                    end if
                                    if ( ebp_4536.ne.0 ) then
                                      call free( eax )
                                    end if
                                    if ( ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ) + 32.lt.0 ) then
                                      error "Attempt to allocate a negative amount of memory."
                                    end if
                                    if ( malloc( ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ) + 32.le.0 ? ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ) + 32 : 1 ).eq.0 ) then
                                      oserror "Memory allocation failed"
                                    end if
                                    call _gfortran_concat_string( ebp_4532 + ebp_4540 + ebp_4548 + 1 + 1 + 1&
& , eax, ebp_4532 + ebp_4540 + ebp_4548 + 1 + 1, ebx, 1, "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90" )
                                    if ( malloc( ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ) + 32.le.0 ? ( ebp_4548 * 32 ) + 32 + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ) + 32 : 1 ).ne.0 ) then
                                      call free( eax )
                                    end if
                                    trim( s3(1) )
                                    if ( ( ( ebp_4548 + 1 ) * 32 ) + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ) + 32 + ( ebp_4524 * 32 ).lt.0 ) then
                                      error "Attempt to allocate a negative amount of memory."
                                    end if
                                    if ( malloc( ( ( ebp_4548 + 1 ) * 32 ) + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ) + 32 + ( ebp_4524 * 32 ).le.0 ? ( ( ebp_4548 + 1 ) * 32 ) + ( ebp_4540 * 32 ) + 32 + ( ebp_4532 * 32 ) + 32 + ( ebp_4524 * 32 ) : 1 ).eq.0 ) then
                                      oserror "Memory allocation failed"
                                    end if
                                    call _gfortran_concat_string( ebp_4524 + ebp_4532 + ebp_4540 + ebp_4548 &
& + 1 + 1 + 1, eax, ebp_4532 + ebp_4540 + ebp_4548 + 1 + 1 + 1, edi, ebp_4524&
& , ebp_4528 )
                                    if ( ebp_4524.gt.0.and.ebp_4528.ne.0 ) then
                                      call free( ebp_4528 )
                                    end if
                                    if ( ebp_4528.ne.0 ) then
                                      call free( eax )
                                    end if
                                    if ( ebp_4524 + ebp_4532 + ebp_4540 + ebp_4548 + 1 + 1 + 1.gt.255 ) then
                                      tmp_radix(1) = esi
                                    else
                                      tmp_radix(1) = esi
                                      call memset( tmp_radix( ebp_4524 + ebp_4532 + ebp_4540 + ebp_4548 + 1 + 1 &
& + 1+1 ), 32, 256 - ( ebp_4524 + ebp_4532 + ebp_4540 + ebp_4548 + 1 + 1 + 1 ) )
                                    end if
                                    if ( esi.ne.0 ) then
                                      call free( eax )
                                    end if
                                    write(0,'(a)')' nlinopt ',nlinflag( ii + -1+1 ),nlin1,nlin2,nlin3
                                    call nlinopt_( nsppol, ucvol, nkpt, ebp_4280, nsym, ebp_3076, mband, ebp_224&
& , fermie, ebp_2852, nlin1, nlin2, nlin3, nomega, domega, sc, tsmear, tol&
& , tmp_radix, 256 )
                                    ii = ii + 1
                                  while ( (logical)( mnlinflag.ne.ii ) );
                                end if
                                if ( ebp_2604.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "nband"
                                end if
                                call free( ebp_2604 )
                                if ( ebp_2768.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "occ"
                                end if
                                call free( ebp_2768 )
                                if ( ebp_248.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "eigen11"
                                end if
                                call free( ebp_248 )
                                if ( ebp_272.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "eigen12"
                                end if
                                call free( ebp_272 )
                                if ( ebp_296.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "eigen13"
                                end if
                                call free( ebp_296 )
                                if ( ebp_224.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "eigen0"
                                end if
                                call free( ebp_224 )
                                if ( ebp_160.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "doccde"
                                end if
                                call free( ebp_160 )
                                if ( ebp_4280.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "wtk"
                                end if
                                call free( ebp_4280 )
                                if ( ebp_136.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "cond_nd"
                                end if
                                call free( ebp_136 )
                                if ( ebp_112.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "cond_kg"
                                end if
                                call free( ebp_112 )
                                if ( ebp_2500.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "kpt"
                                end if
                                call free( ebp_2500 )
                                if ( ebp_3172.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "symrel"
                                end if
                                call free( ebp_3172 )
                                if ( ebp_3076.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "symcart"
                                end if
                                call free( ebp_3076 )
                                if ( ebp_2852.eq.0 ) then
                                  errorat "Attempt to DEALLOCATE unallocated '%s'", "pmat"
                                end if
                                call free( ebp_2852 )
                                call hdr_clean_( "badarg" )
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( ebp_3124.ne.0 ) then
                                  call free( ebp_3124 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
                                if ( 0.ne.0 ) then
                                  call free( 0 )
                                end if
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
                          end if
                        end if
                      end if
                    end if
                  end if
                end if
              end if
            end if
          else
            if ( ( ( ( (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) * 3 ) << 3 ).lt.0 ) then
              error "Attempt to allocate negative amount of memory. Possible integer overflow"
            end if
            if ( malloc( ( ( ( nkpt.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) * 3 ) << 3 ).le.0 ? ( ( nkpt.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( ( nkpt >> 31 ) & 1 ) ^ 1 ) ? 0 : nkpt ) * 3 ) << 3 : 1 ).eq.0 ) then
              oserror "Out of memory"
            end if
          end if
        else
          if ( ( ( ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 ).lt.0 ) then
            error "Attempt to allocate negative amount of memory. Possible integer overflow"
          end if
          if ( malloc( ( ( ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 ).le.0 ? ( ( (unsigned char)( ( ( nsym >> 31 ) & 1 ) ^ 1 ) ? 0 : nsym ) * 9 ) << 2 : 1 ).eq.0 ) then
            oserror "Out of memory"
          end if
        end if
      end if
    else
      if ( ( ( (unsigned char)( ( bantot.lt.0 ) ^ 1 ) ? 0 : bantot ) << 3 ).lt.0 ) then
        error "Attempt to allocate negative amount of memory. Possible integer overflow"
      end if
      if ( malloc( ( ( (unsigned char)( ( bantot.lt.0 ) ^ 1 ) ? 0 : bantot ) << 3 ).le.0 ? ( (unsigned char)( ( bantot.lt.0 ) ^ 1 ) ? 0 : bantot ) << 3 : 1 ).eq.0 ) then
        oserror "Out of memory"
      end if
      fermie = hdr%fermie
    end if
  end if
end program main
#if 0
#endif
