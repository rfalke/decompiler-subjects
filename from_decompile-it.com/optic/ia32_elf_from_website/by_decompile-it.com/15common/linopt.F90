!include "linopt.F90.h"
subroutine linopt_(nspin,omega,nkpt,wkpt,nsymcrys,symcrys,nstval,occv,evalv,efermi,pmat,v1&
& ,v2,nmesh,de,sc,brod,fnam)
use defs_basis
implicit none
  integer :: nspin
  real(dp) :: omega
  integer :: nkpt
  real(dp) :: wkpt(:)
  integer :: nsymcrys
  real(dp) :: symcrys(3,3,:)
  integer :: nstval
  real(dp) :: occv(:,:,:), evalv(:,:,:), efermi
  complex(dp) :: pmat(:,:,:,3,:)
  integer :: v1, v2, nmesh
  real(dp) :: de, sc, brod
  character(256) :: fnam

  integer :: eax
  integer :: ecx
  integer :: ch
  integer :: edx
  real(dp) :: fp1
  real(dp) :: fp2
  real(dp) :: fp3
  real(dp) :: fp4
  real(dp) :: fp5
  real(dp) :: fp6
  real(dp) :: fp7
  complex(dp) :: b11, b12
  complex(dp) :: chi(:)
  real(dp) :: const
  real(dp) :: corec
  real(dp) :: e1, e12, e2
  real(dp) :: emax, emin
  real(dp) :: ene
  complex(dp) :: eps(:)
  character(256) :: fnam1
  real(dp) :: ha2ev
  integer :: i
  complex(dp) :: ieta
  integer :: ik
  integer :: isp
  integer :: ist1, ist2
  integer :: isym
  integer :: iw
  integer :: j, lx, ly
  real(dp) :: s(:,:)
  real(dp) :: sym(:,:)
  complex(dp) :: w
  ubound/*.24*/ = nsymcrys
  ubound/*.0*/ = nstval
  ubound/*.1*/ = nspin
  ubound/*.3*/ = nkpt
  ubound/*.14*/ = nstval
  ubound/*.15*/ = nstval
  ubound/*.17*/ = nkpt
  ubound/*.20*/ = nspin
  ubound/*.26*/ = nkpt
  ubound/*.7*/ = nstval
  ubound/*.8*/ = nspin
  ubound/*.10*/ = nkpt
  if ( v1.le.0.or.v2.le.0.or.v1.gt.3.or.v2.gt.3 ) then
    write(0,'(a)')'---------------------------------------------'
    write(0,'(a)')'    Error in linopt:                         '
    write(0,'(a)')'    the polarisation directions incorrect    '
    write(0,'(a)')'    1=x and 2=y and 3=z                      '
    write(0,'(a)')'---------------------------------------------'
    stop
  end if
  if ( nmesh.le.0 ) then
    write(0,'(a)')'---------------------------------------------'
    write(0,'(a)')'    Error in linopt:                         '
    write(0,'(a)')'    number of energy mesh points incorrect   '
    write(0,'(a)')'    number has to integer greater than 0     '
    write(0,'(a)')'    nmesh*de = max energy for calculation    '
    write(0,'(a)')'---------------------------------------------'
    stop
  end if
  if ( ( (integer)de.le.0 ).ne.0 ) then
    write(0,'(a)')'---------------------------------------------'
    write(0,'(a)')'    Error in linopt:                         '
    write(0,'(a)')'    energy step is incorrect                 '
    write(0,'(a)')'    number has to real greater than 0.0      '
    write(0,'(a)')'    nmesh*de = max energy for calculation    '
    write(0,'(a)')'---------------------------------------------'
    stop
  end if
  if ( ( 0.000000000000.lt.sc ).ne.0 ) then
    write(0,'(a)')'---------------------------------------------'
    write(0,'(a)')'    Error in linopt:                         '
    write(0,'(a)')'    scissors shift is incorrect              '
    write(0,'(a)')'    number has to real greater than 0.0      '
    write(0,'(a)')'---------------------------------------------'
    stop
  end if
  if ( ( brod.lt.0.008999999613 ).eq.0 ) then
    if ( ( brod.lt.0.014999999665 ).ne.0 ) then
      write(0,'(a)')'----------------------------------------'
      write(0,'(a)')'    ATTENTION: broadening is too high   '
      write(0,'(a)')'    ideally should be less than 0.005   '
      write(0,'(a)')'----------------------------------------'
    end if
  else
    write(0,'(a)')'---------------------------------------------'
    write(0,'(a)')'    ATTENTION: broadening is quite high      '
    write(0,'(a)')'    ideally should be less than 0.005        '
    write(0,'(a)')'---------------------------------------------'
  end if
  if ( 0.ne.0 ) then
    errorat "Attempting to allocate already allocated array '%s'", "chi"
  else
    if ( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).lt.0 ) then
      error "Attempt to allocate negative amount of memory. Possible integer overflow"
    end if
    if ( malloc( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).le.0 ? ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 : 1 ).eq.0 ) then
      oserror "Out of memory"
    end if
    if ( 0.ne.0 ) then
      errorat "Attempting to allocate already allocated array '%s'", "eps"
    else
      if ( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).lt.0 ) then
        error "Attempt to allocate negative amount of memory. Possible integer overflow"
      end if
      if ( malloc( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).le.0 ? ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 : 1 ).eq.0 ) then
        oserror "Out of memory"
      end if
      if ( 0.ne.0 ) then
        errorat "Attempting to allocate already allocated array '%s'", "s"
        if ( malloc( 72 ).eq.0 ) then
          oserror "Out of memory"
        end if
        ieta = 0.000000000000
        *(double*,ebp_2147483632 + -528) = (integer)brod
        const = 1.000000000000 / ( omega * dble( nsymcrys ) )
        ha2ev = 27.211383819580
        trim( fnam(1) )
        if ( ( ( ebp_636 + 11 ) << 5 ).lt.0 ) then
          error "Attempt to allocate a negative amount of memory."
        end if
        if ( malloc( (unsigned char)( ( 1 << 4 ).gt.0 ) ? 1 : 1 << 4 ).eq.0 ) then
          oserror "Memory allocation failed"
        end if
        call _gfortran_concat_string( ebp_636 + 11, eax, ebp_636, ebp_640, 11, "-linopt.outofFORMATTEDWRITE(a) # Energy(eV)         Im(chi1(w),a&
& ,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a&
& ,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a&
& ,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)" )
        if ( ebp_636.gt.0.and.ebp_640.ne.0 ) then
          call free( ebp_640 )
        end if
        if ( ebp_636 + 11.gt.255 ) then
          fnam1(1) = ebp_640
        else
          fnam1(1) = ebp_640
          call memset( fnam1( ebp_636 + 11+1 ), 32, 256 - ( ebp_636 + 11 ) )
        end if
        if ( ebp_640.ne.0 ) then
          call free( eax )
        end if
        do 3
          do 3
          end do
        end do
        isym = 1
        if ( isym.le.nsymcrys ) then
          do
            do 3
              do 3
              end do
            end do
            i = 1
            if ( i.le.3 ) then
              do
                j = 1
                if ( j.le.3 ) then
                  do
                    j = j + 1
                  while ( (logical)( j.ne.3 ) );
                end if
                i = i + 1
              while ( !(logical)( i.ne.3 ) );
            end if
            isym = isym + 1
          while ( (logical)( nsymcrys.ne.isym ) );
        end if
        emin = 0.000000000000
        emax = 0.000000000000
        ik = 1
        if ( ik.le.nkpt ) then
          do
            isp = 1
            if ( isp.le.nspin ) then
              do
                ist1 = 1
                if ( ist1.le.nstval ) then
                  do
                    emin = 0.000000000000
                    emax = 0.000000000000
                    ist1 = ist1 + 1
                  while ( (logical)( ist1.ne.nstval ) );
                end if
                isp = isp + 1
              while ( !(logical)( isp.ne.nspin ) );
            end if
            ik = ik + 1
          while ( !(logical)( ik.ne.nkpt ) );
        end if
        do nmesh
        end do
        ik = 1
        if ( ik.le.nkpt ) then
          do
            write(0,'(a)')ik,'of',nkpt
            isp = 1
            if ( isp.le.nspin ) then
              do
                ist1 = 1
                if ( ist1.le.nstval ) then
                  do
                    e1 = *(double*,ebp_40 + ( ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) * isp * 8 ) &
& + ( ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) * ik * 8 ) &
& + ( ist1 * 8 ) + ( ( ~( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) - ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) ) * 8 ))
                    if ( ( efermi.lt.e1 ).ne.0 ) then
                      ist2 = ist1
                      if ( ist2.le.nstval ) then
                        do
                          e2 = *(double*,ebp_40 + ( ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) * isp * 8 ) &
& + ( ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) * ik * 8 ) &
& + ( ist2 * 8 ) + ( ( ~( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) - ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) ) * 8 ))
                          if ( ( e2.lt.efermi ).ne.0 ) then
                            e12 = e1 - e2 - sc
                            corec = e12 / ( sc + e12 )
                            b11 = 0.000000000000
                            *(double*,ebp_2147483632 + -184) = 0.000000000000
                            lx = 1
                            if ( lx.le.3 ) then
                              do
                                ly = 1
                                if ( ly.le.3 ) then
                                  do
                                    b11 = ( "Huge expression, analysis aborted...", 0 )
                                    *(double*,ebp_2147483632 + -184) = ( "Huge expression, analysis aborted..."&
& , 0 )
                                    ly = ly + 1
                                  while ( (logical)( ly.ne.3 ) );
                                end if
                                lx = lx + 1
                              while ( !(logical)( lx.ne.3 ) );
                            end if
                            b12 = corec * corec * const * b11 * ( 1.000000000000 / ( e12 * e12 ) )
                            *(double*,ebp_2147483632 + -200) = corec * corec * const * *(double*,ebp_2147483632 &
& + -184) * ( 1.000000000000 / ( e12 * e12 ) )
                            iw = 2
                            if ( iw.le.nmesh ) then
                              do
                                iw = iw + 1
                              while ( !(logical)( iw.ne.nmesh ) );
                            end if
                          end if
                          ist2 = ist2 + 1
                        while ( !(logical)( nstval.ne.ist2 ) );
                      end if
                    end if
                    ist1 = ist1 + 1
                  while ( !(logical)( nstval.ne.ist1 ) );
                end if
                isp = isp + 1
              while ( !(logical)( nspin.ne.isp ) );
            end if
            ik = ik + 1
          while ( (logical)( nkpt.ne.ik ) );
        end if
        open(0)
        write(0,'(a)')' # Energy(eV)         Im(chi1(w))'
        write(0,'(a)')' #calculated the component:',v1,v2,'of linear susceptibility'
        write(0,'(a)')'calculated the component:',v1,v2,'of linear susceptibility'
        write(0,'(a)')' #broadening:',ieta,*(double*,ebp_2147483632 + -528)
        call _gfortran_transfer_complex( ebp_1052, ieta, 8 )
        write(0,'(a)')' with broadening:'
        write(0,'(a)')' #scissors shift:',(sc & 0xFFFFFFFF)
        write(0,'(a)')'and scissors shift:',(sc & 0xFFFFFFFF)
        write(0,'(a)')' #energy window:',ha2ev * ( emax - emin ),'eV',emax - emin&
& ,'Ha'
        write(0,'(a)')'energy window:',ha2ev * ( emax - emin ),'eV',emax - emin&
& ,'Ha'
        do nmesh
          *(double*,edx + ( ( ebx + ( esi * eax ) ) << 4 ) + 8) = 0.000000000000
        end do
        iw = 2
        if ( iw.le.nmesh ) then
          do
                        ene = de * dble( iw + -1 )
            ene = ha2ev * ene
write(0&
& ,'(a)')ene,*(double*,1 + 1 + ( ( -1 + ( 1 * iw ) ) << 4 ) + 8)
            iw = iw + 1
          while ( (logical)( iw.ne.nmesh ) );
        end if
        write(0,'(a)')
        write(0,'(a)')
        write(0,'(a)')' # Energy(eV)         Re(chi1(w))'
        iw = 2
        if ( iw.le.nmesh ) then
          do
                        ene = de * dble( iw + -1 )
            ene = ha2ev * ene
write(0&
& ,'(a)')ene,*(double*,1 + 1 + ( ( -1 + ( 1 * iw ) ) << 4 ))
            iw = iw + 1
          while ( (logical)( iw.ne.nmesh ) );
        end if
        write(0,'(a)')
        write(0,'(a)')
        write(0,'(a)')' # Energy(eV)         abs(chi1(w))'
        iw = 2
        if ( iw.le.nmesh ) then
          do
                        ene = de * dble( iw + -1 )
            ene = ha2ev * ene
write(0&
& ,'(a)')ene,fp7
            iw = iw + 1
          while ( (logical)( iw.ne.nmesh ) );
        end if
        close(0)
        if ( 1 + 1.eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "s"
        end if
        call free( 1 + 1 )
        if ( ubound/*.10*/ * ( (unsigned char)( ( ( ( ubound/*.8*/ * ( (unsigned char)( ( ( ubound/*.7*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.7*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.8*/ * ( (unsigned char)( ( ( ubound/*.7*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.7*/ ) ).eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "sym"
        end if
        call free( ubound/*.10*/ * ( (unsigned char, ( ( ( ubound/*.8*/ * ( (unsigned char, ( ( ubound/*.7*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.7*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.8*/ * ( (unsigned char, ( ( ubound/*.7*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.7*/ ) ) )
        if ( ubound/*.10*/ * ( (unsigned char)( ( ( ( ubound/*.8*/ * ( (unsigned char)( ( ( ubound/*.7*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.7*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.8*/ * ( (unsigned char)( ( ( ubound/*.7*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.7*/ ) ).eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "chi"
        end if
        call free( ubound/*.10*/ * ( (unsigned char, ( ( ( ubound/*.8*/ * ( (unsigned char, ( ( ubound/*.7*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.7*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.8*/ * ( (unsigned char, ( ( ubound/*.7*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.7*/ ) ) )
        if ( 1 + 1.eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "eps"
        end if
        call free( 1 + 1 )
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
    if ( malloc( 72 ).eq.0 ) then
      oserror "Out of memory"
    end if
    if ( 0.ne.0 ) then
      errorat "Attempting to allocate already allocated array '%s'", "sym"
      error "Attempt to allocate a negative amount of memory."
    else
    end if
  end if
end subroutine linopt_
#if 0
#endif
