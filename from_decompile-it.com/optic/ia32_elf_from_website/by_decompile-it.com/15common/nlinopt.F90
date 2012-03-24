!include "nlinopt.F90.h"
subroutine nlinopt_(nspin,omega,nkpt,wkpt,nsymcrys,symcrys,nstval,evalv,efermi,pmat,v1,v2,v3&
& ,nmesh,de,sc,brod,tol,fnam)
use defs_basis
implicit none
  integer :: nspin
  real(dp) :: omega
  integer :: nkpt
  real(dp) :: wkpt(:)
  integer :: nsymcrys
  real(dp) :: symcrys(3,3,:)
  integer :: nstval
  real(dp) :: evalv(:,:,:), efermi
  complex(dp) :: pmat(:,:,:,3,:)
  integer :: v1, v2, v3, nmesh
  real(dp) :: de, sc, brod, tol
  character(256) :: fnam

  integer :: eax
  integer :: ecx
  integer :: ch
  integer :: edx
  integer :: bh
  real(dp) :: fp0
  real(dp) :: fp1
  real(dp) :: fp2
  real(dp) :: fp3
  real(dp) :: fp4
  real(dp) :: fp5
  real(dp) :: fp6
  real(dp) :: fp7
  real(dp) :: au2esu
  complex(dp) :: b11
  complex(dp) :: b111, b112, b113, b121, b122, b123
  complex(dp) :: b12_13
  complex(dp) :: b131, b132, b133
  complex(dp) :: b211, b212, b213
  complex(dp) :: b21_22
  complex(dp) :: b221, b222, b223, b231
  complex(dp) :: b24
  complex(dp) :: b241, b242, b243
  complex(dp) :: b311, b312, b313
  complex(dp) :: b31_32
  complex(dp) :: b331
  real(dp) :: const, const_au
  real(dp) :: corec
  complex(dp) :: delta(:,:,:)
  real(dp) :: e1, e12, e2, el, em
  real(dp) :: emax, emin
  real(dp) :: en
  real(dp) :: ene
  character(256) :: fnam1, fnam2, fnam3, fnam4, fnam5
  real(dp) :: ha2ev
  integer :: i, i1, i2, i3
  complex(dp) :: idel
  integer :: ik
  complex(dp) :: inter1w(:)
  complex(dp) :: inter2w(:)
  complex(dp) :: intra1w(:)
  complex(dp) :: intra2w(:)
  integer :: isp
  integer :: ist1, ist2, istl, istm, istn
  integer :: isym
  integer :: iw
  integer :: j, k, lx, ly, lz
  complex(dp) :: mat1w1, mat1w2, mat1w3_tra, mat2w, mat2w_tra
  complex(dp) :: px(:,:,:,:,:)
  complex(dp) :: py(:,:,:,:,:)
  complex(dp) :: pz(:,:,:,:,:)
  real(dp) :: s(:,:)
  real(dp) :: sym(:,:,:)
  real(dp) :: t1, t2, t3
  real(dp) :: totabs, totim, totre
  real(dp) :: tst
  complex(dp) :: w
  real(dp) :: wlm, wln, wml, wmn, wnl, wnm
  complex(dp) :: zi
  ubound/*.17*/ = nsymcrys
  ubound/*.0*/ = nstval
  ubound/*.1*/ = nspin
  ubound/*.3*/ = nkpt
  ubound/*.7*/ = nstval
  ubound/*.8*/ = nstval
  ubound/*.10*/ = nkpt
  ubound/*.13*/ = nspin
  ubound/*.19*/ = nkpt
  zi = 0.000000000000
  *(double*,ebp_2147483632 + -2656) = 1.000000000000
  idel = (unsigned int)zi + 0
  *(double*,ebp_2147483632 + -2112) = ( brod * *(double*,ebp_2147483632 + -2656) ) &
& + ( 0.000000000000 * zi )
  const_au = -2.000000000000 / ( omega * dble( nsymcrys ) )
  au2esu = 0.000000058300
  const = const_au * au2esu
  ha2ev = 27.211383819580
  trim( fnam(1) )
  if ( ( ( ebp_2668 + 13 ) << 5 ).lt.0 ) then
    error "Attempt to allocate a negative amount of memory."
  end if
  if ( malloc( ( ( ebp_2668 + 13 ) << 5 ).le.0 ? ( ebp_2668 + 13 ) << 5 : 1 ).eq.0 ) then
    oserror "Memory allocation failed"
  end if
  call _gfortran_concat_string( ebp_2668 + 13, eax, ebp_2668, ebp_2672, 13&
& , "-ChiTotIm.out-ChiTotRe.out-ChiIm.out-ChiRe.out-ChiAbs.outnlinopt.F90" )
  if ( ebp_2668.gt.0.and.ebp_2672.ne.0 ) then
    call free( ebp_2672 )
  end if
  if ( ebp_2668 + 13.gt.255 ) then
    fnam1(1) = ebp_2672
  else
    fnam1(1) = ebp_2672
    call memset( fnam1( ebp_2668 + 13+1 ), 32, 256 - ( ebp_2668 + 13 ) )
  end if
  if ( ebp_2672.ne.0 ) then
    call free( eax )
  end if
  trim( fnam(1) )
  if ( ( ( ebp_2676 + 13 ) << 5 ).lt.0 ) then
    error "Attempt to allocate a negative amount of memory."
  end if
  if ( malloc( ( ( ebp_2676 + 13 ) << 5 ).le.0 ? ( ebp_2676 + 13 ) << 5 : 1 ).eq.0 ) then
    oserror "Memory allocation failed"
  end if
  call _gfortran_concat_string( ebp_2676 + 13, eax, ebp_2676, ebp_2680, 13&
& , "-ChiTotRe.out-ChiIm.out-ChiRe.out-ChiAbs.outnlinopt.F90" )
  if ( ebp_2676.gt.0.and.ebp_2680.ne.0 ) then
    call free( ebp_2680 )
  end if
  if ( ebp_2676 + 13.gt.255 ) then
    fnam2(1) = ebp_2680
  else
    fnam2(1) = ebp_2680
    call memset( fnam2( ebp_2676 + 13+1 ), 32, 256 - ( ebp_2676 + 13 ) )
  end if
  if ( ebp_2680.ne.0 ) then
    call free( eax )
  end if
  trim( fnam(1) )
  if ( ( ( ebp_2684 + 10 ) << 5 ).lt.0 ) then
    error "Attempt to allocate a negative amount of memory."
  end if
  if ( malloc( ( ( ebp_2684 + 10 ) << 5 ).le.0 ? ( ebp_2684 + 10 ) << 5 : 1 ).eq.0 ) then
    oserror "Memory allocation failed"
  end if
  call _gfortran_concat_string( ebp_2684 + 10, eax, ebp_2684, ebp_2688, 10&
& , "-ChiIm.out-ChiRe.out-ChiAbs.outnlinopt.F90" )
  if ( ebp_2684.gt.0.and.ebp_2688.ne.0 ) then
    call free( ebp_2688 )
  end if
  if ( ebp_2684 + 10.gt.255 ) then
    fnam3(1) = ebp_2688
  else
    fnam3(1) = ebp_2688
    call memset( fnam3( ebp_2684 + 10+1 ), 32, 256 - ( ebp_2684 + 10 ) )
  end if
  if ( ebp_2688.ne.0 ) then
    call free( eax )
  end if
  trim( fnam(1) )
  if ( ( ( ebp_2692 + 10 ) << 5 ).lt.0 ) then
    error "Attempt to allocate a negative amount of memory."
  end if
  if ( malloc( ( ( ebp_2692 + 10 ) << 5 ).le.0 ? ( ebp_2692 + 10 ) << 5 : 1 ).eq.0 ) then
    oserror "Memory allocation failed"
  end if
  call _gfortran_concat_string( ebp_2692 + 10, eax, ebp_2692, ebp_2696, 10&
& , "-ChiRe.out-ChiAbs.outnlinopt.F90" )
  if ( ebp_2692.gt.0.and.ebp_2696.ne.0 ) then
    call free( ebp_2696 )
  end if
  if ( ebp_2692 + 10.gt.255 ) then
    fnam4(1) = ebp_2696
  else
    fnam4(1) = ebp_2696
    call memset( fnam4( ebp_2692 + 10+1 ), 32, 256 - ( ebp_2692 + 10 ) )
  end if
  if ( ebp_2696.ne.0 ) then
    call free( eax )
  end if
  trim( fnam(1) )
  if ( ( ( ebp_2700 + 11 ) << 5 ).lt.0 ) then
    error "Attempt to allocate a negative amount of memory."
  end if
  if ( malloc( ( ( ebp_2700 + 11 ) << 5 ).le.0 ? ( ebp_2700 + 11 ) << 5 : 1 ).eq.0 ) then
    oserror "Memory allocation failed"
  end if
  call _gfortran_concat_string( ebp_2700 + 11, eax, ebp_2700, ebp_2704, 11&
& , "-ChiAbs.outnlinopt.F90" )
  if ( ebp_2700.gt.0.and.ebp_2704.ne.0 ) then
    call free( ebp_2704 )
  end if
  if ( ebp_2700 + 11.gt.255 ) then
    fnam5(1) = ebp_2704
  else
    fnam5(1) = ebp_2704
    call memset( fnam5( ebp_2700 + 11+1 ), 32, 256 - ( ebp_2700 + 11 ) )
  end if
  if ( ebp_2704.ne.0 ) then
    call free( eax )
  end if
  tst = 0.000000001000
  isym = 1
  if ( isym.le.nsymcrys ) then
    do
      t1 = *(double*,ebp_28 + ( ( isym + -1 ) * 72 )) + 1.000000000000
      t2 = *(double*,ebp_28 + ( ( ( isym * 9 ) + -5 ) << 3 )) + 1.000000000000
      t3 = *(double*,ebp_28 + ( ( ( isym * 9 ) + -1 ) << 3 )) + 1.000000000000
      if ( ( tst.lt.abs( t1 ) ).ne.0.and.( tst.lt.abs( t2 ) ).ne.0.and.( tst.lt.abs( t3 ) ).ne.0.and.( tst.lt.abs( *(double*)(ebp_28 + ( ( ( isym * 9 ) + -6 ) << 3 )) ) ).ne.0.and.( tst.lt.abs( *(double*)(ebp_28 + ( ( ( isym * 9 ) + -3 ) << 3 )) ) ).ne.0.and.( tst.lt.abs( *(double*)(ebp_28 + ( ( ( isym * 9 ) + -8 ) << 3 )) ) ).ne.0.and.( tst.lt.abs( *(double*)(ebp_28 + ( ( ( isym * 9 ) + -2 ) << 3 )) ) ).ne.0.and.( tst.lt.abs( *(double*)(ebp_28 + ( ( ( isym * 9 ) + -7 ) << 3 )) ) ).ne.0.and.( tst.lt.abs( *(double*)(ebp_28 + ( ( ( ( isym + 1 ) * 9 ) + -13 ) << 3 )) ) ).ne.0 ) then
        write(0,'(a)')'-----------------------------------------'
        write(0,'(a)')'    the crystal has inversion symmetry   '
        write(0,'(a)')'    the SHG sussceptibility is zero      '
        write(0,'(a)')'-----------------------------------------'
        stop
      end if
      isym = isym + 1
    while ( !(logical)( isym.ne.nsymcrys ) );
  end if
  if ( v1.le.0.or.v2.le.0.or.v3.le.0.or.v1.gt.3.or.v2.gt.3.or.v3.gt.3 ) then
    write(0,'(a)')'---------------------------------------------'
    write(0,'(a)')'    Error in nlinopt:                        '
    write(0,'(a)')'    the polarisation directions incorrect    '
    write(0,'(a)')'    1=x,  2=y  and 3=z                       '
    write(0,'(a)')'---------------------------------------------'
    stop
  end if
  if ( nmesh.le.0 ) then
    write(0,'(a)')'---------------------------------------------'
    write(0,'(a)')'    Error in nlinopt:                        '
    write(0,'(a)')'    number of energy mesh points incorrect   '
    write(0,'(a)')'    number has to integer greater than 0     '
    write(0,'(a)')'    nmesh*de = max energy for calculation    '
    write(0,'(a)')'---------------------------------------------'
    stop
  end if
  if ( ( (integer)de.le.0 ).ne.0 ) then
    write(0,'(a)')'---------------------------------------------'
    write(0,'(a)')'    Error in nlinopt:                        '
    write(0,'(a)')'    energy step is incorrect                 '
    write(0,'(a)')'    number has to real greater than 0.0      '
    write(0,'(a)')'    nmesh*de = max energy for calculation    '
    write(0,'(a)')'---------------------------------------------'
    stop
  end if
  if ( ( 0.000000000000.lt.sc ).ne.0 ) then
    write(0,'(a)')'---------------------------------------------'
    write(0,'(a)')'    Error in nlinopt:                        '
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
  if ( ( tol.lt.0.006000000052 ).ne.0 ) then
    write(0,'(a)')'----------------------------------------'
    write(0,'(a)')'    ATTENTION: tolerance is too high    '
    write(0,'(a)')'    ideally should be less than 0.004   '
    write(0,'(a)')'----------------------------------------'
  end if
  if ( 0.ne.0 ) then
    errorat "Attempting to allocate already allocated array '%s'", "px"
  else
    if ( ( ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 27 ) << 4 ).lt.0 ) then
      error "Attempt to allocate negative amount of memory. Possible integer overflow"
    end if
    if ( malloc( ( ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 27 ) << 4 ).le.0 ? ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 27 ) << 4 : 1 ).eq.0 ) then
      oserror "Out of memory"
    end if
    if ( 0.ne.0 ) then
      errorat "Attempting to allocate already allocated array '%s'", "py"
    else
      if ( ( ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 27 ) << 4 ).lt.0 ) then
        error "Attempt to allocate negative amount of memory. Possible integer overflow"
      end if
      if ( malloc( ( ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 27 ) << 4 ).le.0 ? ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 27 ) << 4 : 1 ).eq.0 ) then
        oserror "Out of memory"
      end if
      if ( 0.ne.0 ) then
        errorat "Attempting to allocate already allocated array '%s'", "pz"
      else
        if ( ( ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 27 ) << 4 ).lt.0 ) then
          error "Attempt to allocate negative amount of memory. Possible integer overflow"
        end if
        if ( malloc( ( ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 27 ) << 4 ).le.0 ? ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 27 ) << 4 : 1 ).eq.0 ) then
          oserror "Out of memory"
        end if
        if ( 0.ne.0 ) then
          errorat "Attempting to allocate already allocated array '%s'", "inter2w"
        else
          if ( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).lt.0 ) then
            error "Attempt to allocate negative amount of memory. Possible integer overflow"
          end if
          if ( malloc( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).le.0 ? ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 : 1 ).eq.0 ) then
            oserror "Out of memory"
          end if
          if ( 0.ne.0 ) then
            errorat "Attempting to allocate already allocated array '%s'", "inter1w"
          else
            if ( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).lt.0 ) then
              error "Attempt to allocate negative amount of memory. Possible integer overflow"
            end if
            if ( malloc( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).le.0 ? ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 : 1 ).eq.0 ) then
              oserror "Out of memory"
            end if
            if ( 0.ne.0 ) then
              errorat "Attempting to allocate already allocated array '%s'", "intra2w"
            else
              if ( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).lt.0 ) then
                error "Attempt to allocate negative amount of memory. Possible integer overflow"
              end if
              if ( malloc( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).le.0 ? ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 : 1 ).eq.0 ) then
                oserror "Out of memory"
              end if
              if ( 0.ne.0 ) then
                errorat "Attempting to allocate already allocated array '%s'", "intra1w"
              else
                if ( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).lt.0 ) then
                  error "Attempt to allocate negative amount of memory. Possible integer overflow"
                end if
                if ( malloc( ( ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 ).le.0 ? ( (unsigned char)( ( ( nmesh >> 31 ) & 1 ) ^ 1 ) ? 0 : nmesh ) << 4 : 1 ).eq.0 ) then
                  oserror "Out of memory"
                end if
                if ( 0.ne.0 ) then
                  errorat "Attempting to allocate already allocated array '%s'", "delta"
                else
                  if ( ( ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 ) << 4 ).lt.0 ) then
                    error "Attempt to allocate negative amount of memory. Possible integer overflow"
                  end if
                  if ( malloc( ( ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 ) << 4 ).le.0 ? ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 ) << 4 : 1 ).eq.0 ) then
                    oserror "Out of memory"
                  end if
                  if ( 0.ne.0 ) then
                    errorat "Attempting to allocate already allocated array '%s'", "sym"
                    if ( malloc( 72 ).eq.0 ) then
                      oserror "Out of memory"
                    end if
                    do 3
                      do 3
                        do 3
                        end do
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
                                k = 1
                                if ( k.le.3 ) then
                                  do
                                    k = k + 1
                                  while ( (logical)( k.ne.3 ) );
                                end if
                                j = j + 1
                              while ( !(logical)( j.ne.3 ) );
                            end if
                            i = i + 1
                          while ( !(logical)( i.ne.3 ) );
                        end if
                        isym = isym + 1
                      while ( (logical)( nsymcrys.ne.isym ) );
                    end if
                    do nmesh
                    end do
                    do nmesh
                    end do
                    do nmesh
                    end do
                    do nmesh
                    end do
                    do 3
                      do nstval
                        do nstval
                          *(double*,edi + ( ( esi + ( ebp_3384 * edx ) ) << 4 ) + 8) = 0.000000000000
                        end do
                      end do
                    end do
                    emin = 0.000000000000
                    emax = 0.000000000000
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
                                e1 = *(double*,ebp_36 + ( ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) * isp * 8 ) &
& + ( ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) * ik * 8 ) &
& + ( ist1 * 8 ) + ( ( ~( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) - ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) ) * 8 ))
                                if ( ( efermi.lt.e1 ).ne.0 ) then
                                  ist2 = 1
                                  if ( ist2.le.nstval ) then
                                    do
                                      e2 = *(double*,ebp_36 + ( ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) * isp * 8 ) &
& + ( ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) * ik * 8 ) &
& + ( ist2 * 8 ) + ( ( ~( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) - ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) ) * 8 ))
                                      if ( ( e2.lt.efermi ).ne.0 ) then
                                        e12 = e1 - e2
                                        corec = ( e12 - sc ) / e12
                                        do 3
                                        end do
                                        lx = 1
                                        if ( lx.le.3 ) then
                                          do
                                            ly = 1
                                            if ( ly.le.3 ) then
                                              do
                                                lz = 1
                                                if ( lz.le.3 ) then
                                                  do
                                                    i1 = (int, *(double*,malloc( 72 ) + ( 1 * lx * 8 ) + ( 3 * ly * 8 ) + ( 9 * lz * 8 ) &
& + ( -13 * 8 )) + *(double*,malloc( 72 ) + ( 1 * lx * 8 ) + ( 3 * lz * 8 ) &
& + ( 9 * ly * 8 ) + ( -13 * 8 )) )
                                                    i2 = (int, *(double*,malloc( 72 ) + ( 1 * ly * 8 ) + ( 3 * lx * 8 ) + ( 9 * lz * 8 ) &
& + ( -13 * 8 )) + *(double*,malloc( 72 ) + ( 1 * ly * 8 ) + ( 3 * lz * 8 ) &
& + ( 9 * lx * 8 ) + ( -13 * 8 )) )
                                                    i3 = (int, *(double*,malloc( 72 ) + ( 1 * lz * 8 ) + ( 3 * lx * 8 ) + ( 9 * ly * 8 ) &
& + ( -13 * 8 )) + *(double*,malloc( 72 ) + ( 1 * lz * 8 ) + ( 3 * ly * 8 ) &
& + ( 9 * lx * 8 ) + ( -13 * 8 )) )
                                                  while ( (logical)( lz.ne.3 ) );
                                                end if
                                                ly = ly + 1
                                              while ( !(logical)( ly.ne.3 ) );
                                            end if
                                            lx = lx + 1
                                          while ( !(logical)( lx.ne.3 ) );
                                        end if
                                      end if
                                      ist2 = ist2 + 1
                                    while ( !(logical)( nstval.ne.ist2 ) );
                                  end if
                                end if
                                ist1 = ist1 + 1
                              while ( !(logical)( nstval.ne.ist1 ) );
                            end if
                            ist1 = 1
                            if ( ist1.le.nstval ) then
                              do
                                emin = 0.000000000000
                                emax = 0.000000000000
                                ist2 = 1
                                if ( ist2.le.nstval ) then
                                  do
                                    do 3
                                    end do
                                    ist2 = ist2 + 1
                                  while ( (logical)( nstval.ne.ist2 ) );
                                end if
                                ist1 = ist1 + 1
                              while ( (logical)( nstval.ne.ist1 ) );
                            end if
                            b111 = 0.000000000000
                            *(double*,ebp_2147483632 + -344) = 0.000000000000
                            b121 = 0.000000000000
                            *(double*,ebp_2147483632 + -392) = 0.000000000000
                            b131 = 0.000000000000
                            *(double*,ebp_2147483632 + -456) = 0.000000000000
                            b112 = 0.000000000000
                            *(double*,ebp_2147483632 + -360) = 0.000000000000
                            b122 = 0.000000000000
                            *(double*,ebp_2147483632 + -408) = 0.000000000000
                            b132 = 0.000000000000
                            *(double*,ebp_2147483632 + -472) = 0.000000000000
                            b113 = 0.000000000000
                            *(double*,ebp_2147483632 + -376) = 0.000000000000
                            b123 = 0.000000000000
                            *(double*,ebp_2147483632 + -424) = 0.000000000000
                            b133 = 0.000000000000
                            *(double*,ebp_2147483632 + -488) = 0.000000000000
                            b211 = 0.000000000000
                            *(double*,ebp_2147483632 + -504) = 0.000000000000
                            b221 = 0.000000000000
                            *(double*,ebp_2147483632 + -568) = 0.000000000000
                            b212 = 0.000000000000
                            *(double*,ebp_2147483632 + -520) = 0.000000000000
                            b222 = 0.000000000000
                            *(double*,ebp_2147483632 + -584) = 0.000000000000
                            b213 = 0.000000000000
                            *(double*,ebp_2147483632 + -536) = 0.000000000000
                            b223 = 0.000000000000
                            *(double*,ebp_2147483632 + -600) = 0.000000000000
                            b231 = 0.000000000000
                            *(double*,ebp_2147483632 + -616) = 0.000000000000
                            b241 = 0.000000000000
                            *(double*,ebp_2147483632 + -648) = 0.000000000000
                            b242 = 0.000000000000
                            *(double*,ebp_2147483632 + -664) = 0.000000000000
                            b243 = 0.000000000000
                            *(double*,ebp_2147483632 + -680) = 0.000000000000
                            b311 = 0.000000000000
                            *(double*,ebp_2147483632 + -696) = 0.000000000000
                            b312 = 0.000000000000
                            *(double*,ebp_2147483632 + -712) = 0.000000000000
                            b313 = 0.000000000000
                            *(double*,ebp_2147483632 + -728) = 0.000000000000
                            b331 = 0.000000000000
                            *(double*,ebp_2147483632 + -760) = 0.000000000000
                            istn = 1
                            if ( istn.le.nstval ) then
                              do
                                en = *(double*,ebp_36 + ( ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) * isp * 8 ) &
& + ( ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) * ik * 8 ) &
& + ( istn * 8 ) + ( ( ~( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) - ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) ) * 8 ))
                                if ( ( efermi.lt.en ).ne.0 ) then
                                  istm = 1
                                  if ( istm.le.nstval ) then
                                    do
                                      em = *(double*,ebp_36 + ( ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) * isp * 8 ) &
& + ( ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) * ik * 8 ) &
& + ( istm * 8 ) + ( ( ~( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) - ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) ) * 8 ))
                                      if ( ( em.lt.efermi ).ne.0 ) then
                                        em = sc + em
                                        wmn = em - en
                                        wnm = -( wmn )
                                        mat2w_tra = 0.000000000000
                                        *(double*,ebp_2147483632 + -2296) = 0.000000000000
                                        mat1w3_tra = 0.000000000000
                                        *(double*,ebp_2147483632 + -2264) = 0.000000000000
                                        lx = 1
                                        if ( lx.le.3 ) then
                                          do
                                            ly = 1
                                            if ( ly.le.3 ) then
                                              do
                                                lz = 1
                                                if ( lz.le.3 ) then
                                                  do
                                                    mat2w_tra = ( "Huge expression, analysis aborted...", 0 )
                                                    *(double*,ebp_2147483632 + -2296) = ( "Huge expression, analysis aborted..."&
& , 0 )
                                                    mat1w3_tra = ( "Huge expression, analysis aborted...", 0 )
                                                    *(double*,ebp_2147483632 + -2264) = ( "Huge expression, analysis aborted..."&
& , 0 )
                                                    lz = lz + 1
                                                  while ( (logical)( lz.ne.3 ) );
                                                end if
                                                ly = ly + 1
                                              while ( !(logical)( ly.ne.3 ) );
                                            end if
                                            lx = lx + 1
                                          while ( !(logical)( lx.ne.3 ) );
                                        end if
                                        b331 = ( mat1w3_tra + ( *(double*,ebp_2147483632 + -2264) * ( 0.000000000000 / wnm ) ) ) / ( wnm &
& + ( 0.000000000000 * ( 0.000000000000 / wnm ) ) )
                                        *(double*,ebp_2147483632 + -760) = fp7
                                        b11 = 0.000000000000
                                        *(double*,ebp_2147483632 + -328) = 0.000000000000
                                        b12_13 = 0.000000000000
                                        *(double*,ebp_2147483632 + -440) = 0.000000000000
                                        b24 = 0.000000000000
                                        *(double*,ebp_2147483632 + -632) = 0.000000000000
                                        b31_32 = 0.000000000000
                                        *(double*,ebp_2147483632 + -744) = 0.000000000000
                                        b21_22 = 0.000000000000
                                        *(double*,ebp_2147483632 + -552) = 0.000000000000
                                        b231 = mat2w_tra * 8.000000000000
                                        *(double*,ebp_2147483632 + -616) = *(double*,ebp_2147483632 + -2296) * 8.000000000000
                                        b331 = ( mat1w3_tra + ( *(double*,ebp_2147483632 + -2264) * ( 0.000000000000 / wnm ) ) ) / ( wnm &
& + ( 0.000000000000 * ( 0.000000000000 / wnm ) ) )
                                        *(double*,ebp_2147483632 + -760) = fp7
                                        istl = 1
                                        if ( istl.le.istn + -1 ) then
                                          do
                                            el = *(double*,ebp_36 + ( ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) * isp * 8 ) &
& + ( ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) * ik * 8 ) &
& + ( istl * 8 ) + ( ( ~( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) - ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) ) * 8 ))
                                            wln = el - en
                                            wml = em - el
                                            wnl = -( wln )
                                            wlm = -( wml )
                                            mat2w = 0.000000000000
                                            *(double*,ebp_2147483632 + -2280) = 0.000000000000
                                            mat1w1 = 0.000000000000
                                            *(double*,ebp_2147483632 + -2232) = 0.000000000000
                                            mat1w2 = 0.000000000000
                                            *(double*,ebp_2147483632 + -2248) = 0.000000000000
                                            lx = 1
                                            if ( lx.le.3 ) then
                                              do
                                                ly = 1
                                                if ( ly.le.3 ) then
                                                  do
                                                    lz = 1
                                                    if ( lz.le.3 ) then
                                                      do
                                                        mat2w = ( "Huge expression, analysis aborted...", 0 )
                                                        *(double*,ebp_2147483632 + -2280) = ( "Huge expression, analysis aborted..."&
& , 0 )
                                                        mat1w1 = ( "Huge expression, analysis aborted...", 0 )
                                                        *(double*,ebp_2147483632 + -2232) = ( "Huge expression, analysis aborted..."&
& , 0 )
                                                      while ( (logical)( lz.ne.3 ) );
                                                    end if
                                                    ly = ly + 1
                                                  while ( !(logical)( ly.ne.3 ) );
                                                end if
                                                lx = lx + 1
                                              while ( !(logical)( lx.ne.3 ) );
                                            end if
                                            b111 = mat2w * ( 1.000000000000 / ( wln + wlm ) ) * ( 1.000000000000 / wlm )
                                            *(double*,ebp_2147483632 + -344) = ( 1.000000000000 / ( wln + wlm ) ) * *(double*,ebp_2147483632 &
& + -2280) * ( 1.000000000000 / wlm )
                                            b121 = mat1w1 * ( 1.000000000000 / ( wnm + wlm ) ) * ( 1.000000000000 / wlm )
                                            *(double*,ebp_2147483632 + -392) = ( 1.000000000000 / ( wnm + wlm ) ) * *(double*,ebp_2147483632 &
& + -2232) * ( 1.000000000000 / wlm )
                                            b131 = mat1w2 * ( 1.000000000000 / wlm )
                                            *(double*,ebp_2147483632 + -456) = ( 1.000000000000 / wlm ) * *(double*,ebp_2147483632 &
& + -2248)
                                            b221 = 0.000000000000
                                            *(double*,ebp_2147483632 + -568) = 0.000000000000
                                            b211 = ( mat1w1 + ( *(double*,ebp_2147483632 + -2232) * ( 0.000000000000 / wml ) ) ) / ( wml &
& + ( 0.000000000000 * ( 0.000000000000 / wml ) ) )
                                            *(double*,ebp_2147483632 + -504) = fp7
                                            b241 = -( ( mat2w + ( *(double*,ebp_2147483632 + -2280) * ( 0.000000000000 / wml ) ) ) / ( wml &
& + ( 0.000000000000 * ( 0.000000000000 / wml ) ) ) )
                                            *(double*,ebp_2147483632 + -648) = -( fp7 )
                                            b311 = ( mat1w2 + ( *(double*,ebp_2147483632 + -2248) * ( 0.000000000000 / wlm ) ) ) / ( wlm &
& + ( 0.000000000000 * ( 0.000000000000 / wlm ) ) )
                                            *(double*,ebp_2147483632 + -696) = fp7
                                            if ( ( abs( wln ).lt.tol ).ne.0 ) then
                                              b111 = ( b111 + ( *(double*,ebp_2147483632 + -344) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) )
                                              *(double*,ebp_2147483632 + -344) = fp7
                                              b121 = ( b121 + ( *(double*,ebp_2147483632 + -392) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) )
                                              *(double*,ebp_2147483632 + -392) = fp7
                                              b131 = ( b131 + ( *(double*,ebp_2147483632 + -456) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) )
                                              *(double*,ebp_2147483632 + -456) = fp7
                                              b221 = ( mat1w2 + ( *(double*,ebp_2147483632 + -2248) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) )
                                              *(double*,ebp_2147483632 + -568) = fp7
                                              b241 = b241 + ( ( mat2w + ( *(double*,ebp_2147483632 + -2280) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) ) )
                                              *(double*,ebp_2147483632 + -648) = fp7 + *(double*,ebp_2147483632 + -648)
                                              b311 = b311 + ( ( mat1w1 + ( *(double*,ebp_2147483632 + -2232) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) ) )
                                              *(double*,ebp_2147483632 + -696) = fp7 + *(double*,ebp_2147483632 + -696)
                                            else
                                              b111 = 0.000000000000
                                              *(double*,ebp_2147483632 + -344) = 0.000000000000
                                              b121 = 0.000000000000
                                              *(double*,ebp_2147483632 + -392) = 0.000000000000
                                              b131 = 0.000000000000
                                              *(double*,ebp_2147483632 + -456) = 0.000000000000
                                              b221 = 0.000000000000
                                              *(double*,ebp_2147483632 + -568) = 0.000000000000
                                            end if
                                            t1 = wln - wnm
                                            if ( ( abs( t1 ).lt.tol ).ne.0 ) then
                                              b131 = ( b131 + ( *(double*,ebp_2147483632 + -456) * ( 0.000000000000 / t1 ) ) ) / ( t1 &
& + ( 0.000000000000 * ( 0.000000000000 / t1 ) ) )
                                              *(double*,ebp_2147483632 + -456) = fp7
                                            else
                                              b131 = 0.000000000000
                                              *(double*,ebp_2147483632 + -456) = 0.000000000000
                                            end if
                                            b11 = b11 + ( ( b111 * -2.000000000000 ) - ( -0.000000000000 * *(double*,ebp_2147483632 &
& + -344) ) )
                                            *(double*,ebp_2147483632 + -328) = ( b111 * -0.000000000000 ) + ( *(double*,ebp_2147483632 &
& + -344) * -2.000000000000 ) + *(double*,ebp_2147483632 + -328)
                                            b12_13 = b131 + b12_13 + b121
                                            *(double*,ebp_2147483632 + -440) = *(double*,ebp_2147483632 + -440) + *(double*,ebp_2147483632 &
& + -392) + *(double*,ebp_2147483632 + -456)
                                            b21_22 = b221 - b211
                                            *(double*,ebp_2147483632 + -552) = *(double*,ebp_2147483632 + -568) - *(double*,ebp_2147483632 &
& + -504)
                                            b24 = b24 + ( b241 * 0.000000000000 )
                                            *(double*,ebp_2147483632 + -632) = *(double*,ebp_2147483632 + -632) + ( *(double*,ebp_2147483632 &
& + -648) * 0.000000000000 )
                                            b31_32 = b31_32 + b311
                                            *(double*,ebp_2147483632 + -744) = *(double*,ebp_2147483632 + -744) + *(double*,ebp_2147483632 &
& + -696)
                                            istl = istl + 1
                                          while ( !(logical)( istl.ne.istn + -1 ) );
                                        end if
                                        istl = istn + 1
                                        if ( istl.le.istm + -1 ) then
                                          do
                                            el = *(double*,ebp_36 + ( ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) * isp * 8 ) &
& + ( ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) * ik * 8 ) &
& + ( istl * 8 ) + ( ( ~( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) - ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) ) * 8 ))
                                            mat2w = 0.000000000000
                                            *(double*,ebp_2147483632 + -2280) = 0.000000000000
                                            mat1w1 = 0.000000000000
                                            *(double*,ebp_2147483632 + -2232) = 0.000000000000
                                            mat1w2 = 0.000000000000
                                            *(double*,ebp_2147483632 + -2248) = 0.000000000000
                                            lx = 1
                                            if ( lx.le.3 ) then
                                              do
                                                ly = 1
                                                if ( ly.le.3 ) then
                                                  do
                                                    lz = 1
                                                    if ( lz.le.3 ) then
                                                      do
                                                        mat2w = ( "Huge expression, analysis aborted...", 0 )
                                                        *(double*,ebp_2147483632 + -2280) = ( "Huge expression, analysis aborted..."&
& , 0 )
                                                        mat1w1 = ( "Huge expression, analysis aborted...", 0 )
                                                        *(double*,ebp_2147483632 + -2232) = ( "Huge expression, analysis aborted..."&
& , 0 )
                                                      while ( (logical)( lz.ne.3 ) );
                                                    end if
                                                    ly = ly + 1
                                                  while ( !(logical)( ly.ne.3 ) );
                                                end if
                                                lx = lx + 1
                                              while ( !(logical)( lx.ne.3 ) );
                                            end if
                                            if ( ( efermi.lt.el ).ne.0 ) then
                                              wln = el - en
                                              wnl = -( wln )
                                              wml = em - el
                                              wlm = -( wml )
                                            else
                                              el = sc + el
                                              wln = el - en
                                              wnl = -( wln )
                                              wml = em - el
                                              wlm = -( wml )
                                            end if
                                            b112 = 0.000000000000
                                            *(double*,ebp_2147483632 + -360) = 0.000000000000
                                            b122 = mat1w1 * ( 1.000000000000 / ( wnm + wlm ) )
                                            *(double*,ebp_2147483632 + -408) = ( 1.000000000000 / ( wnm + wlm ) ) * *(double*,ebp_2147483632 &
& + -2232)
                                            b132 = mat1w2 * ( 1.000000000000 / ( wnm + wnl ) )
                                            *(double*,ebp_2147483632 + -472) = ( 1.000000000000 / ( wnm + wnl ) ) * *(double*,ebp_2147483632 &
& + -2248)
                                            b242 = 0.000000000000
                                            *(double*,ebp_2147483632 + -664) = 0.000000000000
                                            b222 = 0.000000000000
                                            *(double*,ebp_2147483632 + -584) = 0.000000000000
                                            b212 = 0.000000000000
                                            *(double*,ebp_2147483632 + -520) = 0.000000000000
                                            if ( ( abs( wnl ).lt.tol ).ne.0 ) then
                                              b112 = ( mat2w + ( *(double*,ebp_2147483632 + -2280) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) )
                                              *(double*,ebp_2147483632 + -360) = fp7
                                              b122 = ( b122 + ( *(double*,ebp_2147483632 + -408) * ( 0.000000000000 / wnl ) ) ) / ( wnl &
& + ( 0.000000000000 * ( 0.000000000000 / wnl ) ) )
                                              *(double*,ebp_2147483632 + -408) = fp7
                                              b132 = ( b132 + ( *(double*,ebp_2147483632 + -472) * ( 0.000000000000 / wnl ) ) ) / ( wnl &
& + ( 0.000000000000 * ( 0.000000000000 / wnl ) ) )
                                              *(double*,ebp_2147483632 + -472) = fp7
                                              b242 = ( mat2w + ( *(double*,ebp_2147483632 + -2280) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) )
                                              *(double*,ebp_2147483632 + -664) = fp7
                                              b222 = ( mat1w2 + ( *(double*,ebp_2147483632 + -2248) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) )
                                              *(double*,ebp_2147483632 + -584) = fp7
                                              b312 = ( mat1w1 + ( *(double*,ebp_2147483632 + -2232) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) )
                                              *(double*,ebp_2147483632 + -712) = fp7
                                            else
                                              b122 = 0.000000000000
                                              *(double*,ebp_2147483632 + -408) = 0.000000000000
                                              b132 = 0.000000000000
                                              *(double*,ebp_2147483632 + -472) = 0.000000000000
                                            end if
                                            if ( ( abs( wlm ).lt.tol ).ne.0 ) then
                                              b112 = ( b112 + ( *(double*,ebp_2147483632 + -360) * ( 0.000000000000 / wml ) ) ) / ( wml &
& + ( 0.000000000000 * ( 0.000000000000 / wml ) ) )
                                              *(double*,ebp_2147483632 + -360) = fp7
                                              b122 = ( b122 + ( *(double*,ebp_2147483632 + -408) * ( 0.000000000000 / wlm ) ) ) / ( wlm &
& + ( 0.000000000000 * ( 0.000000000000 / wlm ) ) )
                                              *(double*,ebp_2147483632 + -408) = fp7
                                              b132 = ( b132 + ( *(double*,ebp_2147483632 + -472) * ( 0.000000000000 / wlm ) ) ) / ( wlm &
& + ( 0.000000000000 * ( 0.000000000000 / wlm ) ) )
                                              *(double*,ebp_2147483632 + -472) = fp7
                                              b242 = b242 - ( ( mat2w + ( *(double*,ebp_2147483632 + -2280) * ( 0.000000000000 / wml ) ) ) / ( wml &
& + ( 0.000000000000 * ( 0.000000000000 / wml ) ) ) )
                                              *(double*,ebp_2147483632 + -664) = *(double*,ebp_2147483632 + -664) - fp7
                                              b212 = ( mat1w1 + ( *(double*,ebp_2147483632 + -2232) * ( 0.000000000000 / wml ) ) ) / ( wml &
& + ( 0.000000000000 * ( 0.000000000000 / wml ) ) )
                                              *(double*,ebp_2147483632 + -520) = fp7
                                              b312 = b312 + ( ( mat1w2 + ( *(double*,ebp_2147483632 + -2248) * ( 0.000000000000 / wlm ) ) ) / ( wlm &
& + ( 0.000000000000 * ( 0.000000000000 / wlm ) ) ) )
                                              *(double*,ebp_2147483632 + -712) = fp7 + *(double*,ebp_2147483632 + -712)
                                            else
                                              b112 = 0.000000000000
                                              *(double*,ebp_2147483632 + -360) = 0.000000000000
                                              b122 = 0.000000000000
                                              *(double*,ebp_2147483632 + -408) = 0.000000000000
                                              b132 = 0.000000000000
                                              *(double*,ebp_2147483632 + -472) = 0.000000000000
                                              b212 = 0.000000000000
                                              *(double*,ebp_2147483632 + -520) = 0.000000000000
                                            end if
                                            t1 = wlm - wnl
                                            if ( ( abs( t1 ).lt.tol ).ne.0 ) then
                                              b112 = ( b112 + ( *(double*,ebp_2147483632 + -360) * ( 0.000000000000 / t1 ) ) ) / ( t1 &
& + ( 0.000000000000 * ( 0.000000000000 / t1 ) ) )
                                              *(double*,ebp_2147483632 + -360) = fp7
                                            else
                                              b112 = 0.000000000000
                                              *(double*,ebp_2147483632 + -360) = 0.000000000000
                                            end if
                                            b11 = b11 + ( b112 * 0.000000000000 )
                                            *(double*,ebp_2147483632 + -328) = *(double*,ebp_2147483632 + -328) + ( *(double*,ebp_2147483632 &
& + -360) * 0.000000000000 )
                                            b12_13 = b132 + ( b12_13 - b122 )
                                            *(double*,ebp_2147483632 + -440) = ( *(double*,ebp_2147483632 + -440) - *(double*,ebp_2147483632 &
& + -408) ) + *(double*,ebp_2147483632 + -472)
                                            b24 = b24 + ( b242 * 0.000000000000 )
                                            *(double*,ebp_2147483632 + -632) = *(double*,ebp_2147483632 + -632) + ( *(double*,ebp_2147483632 &
& + -664) * 0.000000000000 )
                                            b21_22 = b222 + ( b21_22 - b212 )
                                            *(double*,ebp_2147483632 + -552) = ( *(double*,ebp_2147483632 + -552) - *(double*,ebp_2147483632 &
& + -520) ) + *(double*,ebp_2147483632 + -584)
                                            b31_32 = b31_32 + b312
                                            *(double*,ebp_2147483632 + -744) = *(double*,ebp_2147483632 + -744) + *(double*,ebp_2147483632 &
& + -712)
                                            istl = istl + 1
                                          while ( !(logical)( istl.ne.istm + -1 ) );
                                        end if
                                        istl = istm + 1
                                        if ( istl.le.nstval ) then
                                          do
                                            el = sc + *(double*,ebp_36 + ( ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) * isp * 8 ) &
& + ( ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) * ik * 8 ) &
& + ( istl * 8 ) + ( ( ~( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) - ( (unsigned char, ( ( ( ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.1*/ * ( (unsigned char, ( ( ubound/*.0*/ >> 31 ) & 1 ) ^ 1 ) ? 0 : ubound/*.0*/ ) ) ) * 8 ))
                                            wln = el - en
                                            wnl = -( wln )
                                            wml = em - el
                                            wlm = -( wml )
                                            mat2w = 0.000000000000
                                            *(double*,ebp_2147483632 + -2280) = 0.000000000000
                                            mat1w1 = 0.000000000000
                                            *(double*,ebp_2147483632 + -2232) = 0.000000000000
                                            mat1w2 = 0.000000000000
                                            *(double*,ebp_2147483632 + -2248) = 0.000000000000
                                            lx = 1
                                            if ( lx.le.3 ) then
                                              do
                                                ly = 1
                                                if ( ly.le.3 ) then
                                                  do
                                                    lz = 1
                                                    if ( lz.le.3 ) then
                                                      do
                                                        mat2w = ( "Huge expression, analysis aborted...", 0 )
                                                        *(double*,ebp_2147483632 + -2280) = ( "Huge expression, analysis aborted..."&
& , 0 )
                                                        mat1w1 = ( "Huge expression, analysis aborted...", 0 )
                                                        *(double*,ebp_2147483632 + -2232) = ( "Huge expression, analysis aborted..."&
& , 0 )
                                                      while ( (logical)( lz.ne.3 ) );
                                                    end if
                                                    ly = ly + 1
                                                  while ( !(logical)( ly.ne.3 ) );
                                                end if
                                                lx = lx + 1
                                              while ( !(logical)( lx.ne.3 ) );
                                            end if
                                            b113 = mat2w * ( 1.000000000000 / ( wnl + wml ) ) * ( 1.000000000000 / wnl )
                                            *(double*,ebp_2147483632 + -376) = ( 1.000000000000 / ( wnl + wml ) ) * *(double*,ebp_2147483632 &
& + -2280) * ( 1.000000000000 / wnl )
                                            b123 = mat1w1 * ( 1.000000000000 / wnl )
                                            *(double*,ebp_2147483632 + -424) = ( 1.000000000000 / wnl ) * *(double*,ebp_2147483632 &
& + -2232)
                                            b133 = mat1w2 * ( 1.000000000000 / wnl ) * ( 1.000000000000 / ( wnm + wnl ) )
                                            *(double*,ebp_2147483632 + -488) = ( 1.000000000000 / wnl ) * *(double*,ebp_2147483632 &
& + -2248) * ( 1.000000000000 / ( wnm + wnl ) )
                                            b243 = ( mat2w + ( *(double*,ebp_2147483632 + -2280) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) )
                                            *(double*,ebp_2147483632 + -680) = fp7
                                            b223 = ( mat1w2 + ( *(double*,ebp_2147483632 + -2248) * ( 0.000000000000 / wln ) ) ) / ( wln &
& + ( 0.000000000000 * ( 0.000000000000 / wln ) ) )
                                            *(double*,ebp_2147483632 + -600) = fp7
                                            b213 = 0.000000000000
                                            *(double*,ebp_2147483632 + -536) = 0.000000000000
                                            b313 = -( ( mat1w1 + ( *(double*,ebp_2147483632 + -2232) * ( 0.000000000000 / wnl ) ) ) / ( wnl &
& + ( 0.000000000000 * ( 0.000000000000 / wnl ) ) ) )
                                            *(double*,ebp_2147483632 + -728) = -( fp7 )
                                            if ( ( abs( wml ).lt.tol ).ne.0 ) then
                                              b113 = ( b113 + ( *(double*,ebp_2147483632 + -376) * ( 0.000000000000 / wml ) ) ) / ( wml &
& + ( 0.000000000000 * ( 0.000000000000 / wml ) ) )
                                              *(double*,ebp_2147483632 + -376) = fp7
                                              b123 = ( b123 + ( *(double*,ebp_2147483632 + -424) * ( 0.000000000000 / wml ) ) ) / ( wml &
& + ( 0.000000000000 * ( 0.000000000000 / wml ) ) )
                                              *(double*,ebp_2147483632 + -424) = fp7
                                              b133 = ( b133 + ( *(double*,ebp_2147483632 + -488) * ( 0.000000000000 / wml ) ) ) / ( wml &
& + ( 0.000000000000 * ( 0.000000000000 / wml ) ) )
                                              *(double*,ebp_2147483632 + -488) = fp7
                                              b243 = b243 - ( ( mat2w + ( *(double*,ebp_2147483632 + -2280) * ( 0.000000000000 / wml ) ) ) / ( wml &
& + ( 0.000000000000 * ( 0.000000000000 / wml ) ) ) )
                                              *(double*,ebp_2147483632 + -680) = *(double*,ebp_2147483632 + -680) - fp7
                                              b213 = ( mat1w1 + ( *(double*,ebp_2147483632 + -2232) * ( 0.000000000000 / wml ) ) ) / ( wml &
& + ( 0.000000000000 * ( 0.000000000000 / wml ) ) )
                                              *(double*,ebp_2147483632 + -536) = fp7
                                              b313 = b313 + ( ( mat1w2 + ( *(double*,ebp_2147483632 + -2248) * ( 0.000000000000 / wlm ) ) ) / ( wlm &
& + ( 0.000000000000 * ( 0.000000000000 / wlm ) ) ) )
                                              *(double*,ebp_2147483632 + -728) = fp7 + *(double*,ebp_2147483632 + -728)
                                            else
                                              b113 = 0.000000000000
                                              *(double*,ebp_2147483632 + -376) = 0.000000000000
                                              b123 = 0.000000000000
                                              *(double*,ebp_2147483632 + -424) = 0.000000000000
                                              b133 = 0.000000000000
                                              *(double*,ebp_2147483632 + -488) = 0.000000000000
                                            end if
                                            t1 = wnm - wml
                                            if ( ( abs( t1 ).lt.tol ).ne.0 ) then
                                              b123 = ( b123 + ( *(double*,ebp_2147483632 + -424) * ( 0.000000000000 / t1 ) ) ) / ( t1 &
& + ( 0.000000000000 * ( 0.000000000000 / t1 ) ) )
                                              *(double*,ebp_2147483632 + -424) = fp7
                                            else
                                              b123 = 0.000000000000
                                              *(double*,ebp_2147483632 + -424) = 0.000000000000
                                            end if
                                            b11 = b11 + ( b113 * 0.000000000000 )
                                            *(double*,ebp_2147483632 + -328) = *(double*,ebp_2147483632 + -328) + ( *(double*,ebp_2147483632 &
& + -376) * 0.000000000000 )
                                            b12_13 = ( b12_13 + b123 ) - b133
                                            *(double*,ebp_2147483632 + -440) = ( *(double*,ebp_2147483632 + -440) + *(double*,ebp_2147483632 &
& + -424) ) - *(double*,ebp_2147483632 + -488)
                                            b21_22 = b223 + ( b21_22 - b213 )
                                            *(double*,ebp_2147483632 + -552) = ( *(double*,ebp_2147483632 + -552) - *(double*,ebp_2147483632 &
& + -536) ) + *(double*,ebp_2147483632 + -600)
                                            b24 = b24 + ( b243 * 0.000000000000 )
                                            *(double*,ebp_2147483632 + -632) = *(double*,ebp_2147483632 + -632) + ( *(double*,ebp_2147483632 &
& + -680) * 0.000000000000 )
                                            b31_32 = b31_32 + b313
                                            *(double*,ebp_2147483632 + -744) = *(double*,ebp_2147483632 + -744) + *(double*,ebp_2147483632 &
& + -728)
                                            istl = istl + 1
                                          while ( !(logical)( istl.ne.nstval ) );
                                        end if
                                        b11 = const * ( ( zi * b11 ) - ( *(double*,ebp_2147483632 + -328) * *(double*,ebp_2147483632 &
& + -2656) ) ) * ( 1.000000000000 / wnm )
                                        *(double*,ebp_2147483632 + -328) = const * ( ( b11 * *(double*,ebp_2147483632 &
& + -2656) ) + ( zi * *(double*,ebp_2147483632 + -328) ) ) * ( 1.000000000000 / wnm )
                                        b12_13 = const * ( ( zi * b12_13 ) - ( *(double*,ebp_2147483632 + -440) * *(double*,ebp_2147483632 &
& + -2656) ) ) * ( 1.000000000000 / wnm )
                                        *(double*,ebp_2147483632 + -440) = const * ( ( b12_13 * *(double*,ebp_2147483632 &
& + -2656) ) + ( zi * *(double*,ebp_2147483632 + -440) ) ) * ( 1.000000000000 / wnm )
                                        b24 = const * zi * ( b24 + b231 ) * ( 1.000000000000 / ( wnm * ( wnm * wnm ) ) )
                                        *(double*,ebp_2147483632 + -632) = const * ( ( ( b24 + b231 ) * *(double*,ebp_2147483632 &
& + -2656) ) + ( zi * ( *(double*,ebp_2147483632 + -632) + *(double*,ebp_2147483632 &
& + -616) ) ) ) * ( 1.000000000000 / ( wnm * ( wnm * wnm ) ) )
                                        b21_22 = const * ( ( zi * b21_22 ) - ( *(double*,ebp_2147483632 + -552) * *(double*,ebp_2147483632 &
& + -2656) ) ) * ( 1.000000000000 / ( wnm * ( wnm * wnm ) ) )
                                        *(double*,ebp_2147483632 + -552) = const * ( ( b21_22 * *(double*,ebp_2147483632 &
& + -2656) ) + ( zi * *(double*,ebp_2147483632 + -552) ) ) * ( 1.000000000000 / ( wnm * ( wnm * wnm ) ) )
                                        b31_32 = 0.500000000000 * const * ( 0.000000000000 - ( ( *(double*,ebp_2147483632 &
& + -744) - *(double*,ebp_2147483632 + -760) ) * *(double*,ebp_2147483632 + -2656) ) ) * ( 1.000000000000 / ( wmn * ( wmn * wmn ) ) )
                                        *(double*,ebp_2147483632 + -744) = const * ( ( ( b31_32 - b331 ) * *(double*,ebp_2147483632 &
& + -2656) ) + ( ( *(double*,ebp_2147483632 + -744) - *(double*,ebp_2147483632 &
& + -760) ) * zi * ( b31_32 - b331 ) ) ) * ( 1.000000000000 / ( wmn * ( wmn * wmn ) ) ) * 0.500000000000
                                        iw = 1
                                        if ( iw.le.nmesh ) then
                                          do
                                            *(double*,ebx + ( esi << 4 ) + 8) = ebp_3576 + ( ebp_3560 * fp7 ) + ( ebp_3552 * fp6 )
                                            *(double*,ebx + ( esi << 4 ) + 8) = fp6 + ( ebp_3544 * fp5 ) + ( ebp_3536 * fp4 )
                                            *(double*,ebx + ( esi << 4 ) + 8) = ebp_3528 + ( ebp_3512 * fp7 ) + ( ebp_3504 * fp6 )
                                            *(double*,ebx + ( esi << 4 ) + 8) = ( 0.000000000000 * ( ( *(double*,ebp_2147483632 &
& + -552) + *(double*,ebp_2147483632 + -744) + ( ( b31_32 + b21_22 ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) ) / ( ( 0.000000000000 - *(double*,ebp_2147483632 + -2640) ) &
& + ( ( wmn - w ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) ) ) ) + ( *(double*,ebp_20 + ( ( ik + -1 ) << 3 )) * ( ( ( ( ( *(double*,ebp_2147483632 &
& + -552) + *(double*,ebp_2147483632 + -744) + ( ( b31_32 + b21_22 ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) ) / ( ( 0.000000000000 - *(double*,ebp_2147483632 + -2640) ) &
& + ( ( wmn - w ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) ) ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) - ( b31_32 + b21_22 ) ) / ( ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) + ( ( wmn - w ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) ) ) ) + ( ( ( ( ( ( ( *(double*,ebp_2147483632 + -552) + *(double*,ebp_2147483632 &
& + -744) + ( ( b31_32 + b21_22 ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) ) / ( ( 0.000000000000 - *(double*,ebp_2147483632 + -2640) ) &
& + ( ( wmn - w ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) ) ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) - ( b31_32 + b21_22 ) ) / ( ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) + ( ( wmn - w ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) ) ) + ( ( ( *(double*,ebp_2147483632 + -552) + *(double*,ebp_2147483632 &
& + -744) + ( ( b31_32 + b21_22 ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) ) / ( ( 0.000000000000 - *(double*,ebp_2147483632 + -2640) ) &
& + ( ( wmn - w ) * ( ( wmn - w ) / ( 0.000000000000 - *(double*,ebp_2147483632 &
& + -2640) ) ) ) ) ) * ( *(double*,ebp_2147483632 + -440) / b12_13 ) ) ) / ( b12_13 &
& + ( *(double*,ebp_2147483632 + -440) * ( *(double*,ebp_2147483632 + -440) / b12_13 ) ) ) )
                                            iw = iw + 1
                                          while ( (logical)( iw.ne.nmesh ) );
                                        end if
                                      end if
                                      istm = istm + 1
                                    while ( !(logical)( nstval.ne.istm ) );
                                  end if
                                end if
                                istn = istn + 1
                              while ( !(logical)( nstval.ne.istn ) );
                            end if
                            isp = isp + 1
                          while ( !(logical)( nspin.ne.isp ) );
                        end if
                        ik = ik + 1
                      while ( (logical)( nkpt.ne.ik ) );
                    end if
                    open(0)
                    open(0)
                    open(0)
                    open(0)
                    open(0)
                    write(0,'(a)')' #calculated the component:',v1,v2,v3
                    write(0,'(a)')' #tolerence:',(tol & 0xFFFFFFFF)
                    write(0,'(a)')' #broadening:',(brod & 0xFFFFFFFF),'Ha'
                    write(0,'(a)')' #scissors shift:',(sc & 0xFFFFFFFF),'Ha'
                    write(0,'(a)')' #energy window:',ha2ev * ( emax - emin ),'eV',emax - emin&
& ,'Ha'
                    write(0,'(a)')' # Energy      Tot-Im Chi(-2w,w,w)  Tot-Im Chi(-2w,w,w)'
                    write(0,'(a)')' # eV          *10^-7 esu        *10^-12 m/V SI units '
                    write(0,'(a)')' # '
                    write(0,'(a)')' #calculated the component:',v1,v2,v3
                    write(0,'(a)')' #tolerence:',(tol & 0xFFFFFFFF)
                    write(0,'(a)')' #broadening:',(brod & 0xFFFFFFFF),'Ha'
                    write(0,'(a)')' #scissors shift:',(sc & 0xFFFFFFFF),'Ha'
                    write(0,'(a)')' #energy window:',ha2ev * ( emax - emin ),'eV',emax - emin&
& ,'Ha'
                    write(0,'(a)')' # Energy      Tot-Im Chi(-2w,w,w)  Tot-Im Chi(-2w,w,w)'
                    write(0,'(a)')' # eV          *10^-7 esu        *10^-12 m/V SI units '
                    write(0,'(a)')' # '
                    write(0,'(a)')' #calculated the component:',v1,v2,v3
                    write(0,'(a)')' #tolerence:',(tol & 0xFFFFFFFF)
                    write(0,'(a)')' #broadening:',(brod & 0xFFFFFFFF),'Ha'
                    write(0,'(a)')' #scissors shift:',(sc & 0xFFFFFFFF),'Ha'
                    write(0,'(a)')' #energy window:',ha2ev * ( emax - emin ),'eV',emax - emin&
& ,'Ha'
                    write(0,'(a)')' # Energy(eV) Inter(2w) inter(1w) intra(2w) intra(1w)'
                    write(0,'(a)')' # in esu'
                    write(0,'(a)')' # '
                    write(0,'(a)')' #calculated the component:',v1,v2,v3
                    write(0,'(a)')' #tolerence:',(tol & 0xFFFFFFFF)
                    write(0,'(a)')' #broadening:',(brod & 0xFFFFFFFF),'Ha'
                    write(0,'(a)')' #scissors shift:',(sc & 0xFFFFFFFF),'Ha'
                    write(0,'(a)')' #energy window:',ha2ev * ( emax - emin ),'eV',emax - emin&
& ,'Ha'
                    write(0,'(a)')' # Energy(eV) Inter(2w) inter(1w) intra(2w) intra(1w)'
                    write(0,'(a)')' # in esu'
                    write(0,'(a)')' # '
                    write(0,'(a)')' #calculated the component:',v1,v2,v3
                    write(0,'(a)')' #tolerence:',(tol & 0xFFFFFFFF)
                    write(0,'(a)')' #broadening:',(brod & 0xFFFFFFFF),'Ha'
                    write(0,'(a)')' #scissors shift:',(sc & 0xFFFFFFFF),'Ha'
                    write(0,'(a)')' #energy window:',ha2ev * ( emax - emin ),'eV',emax - emin&
& ,'Ha'
                    write(0,'(a)')' # Energy(eV)  |TotChi(-2w,w,w)|   |Tot Chi(-2w,w,w)|'
                    write(0,'(a)')' # eV          *10^-7 esu        *10^-12 m/V SI units '
                    write(0,'(a)')' # '
                    totim = 0.000000000000
                    totre = 0.000000000000
                    totabs = 0.000000000000
                    iw = 2
                    if ( iw.le.nmesh ) then
                      do
                                                ene = de * dble( iw + -1 )
                        ene = ha2ev * ene
                        totim = ( *(double*&
& ,ebp_2172 + ( ( ebp_2168 + ( ebp_2160 * iw ) ) << 4 ) &
& + 8) + *(double*&
& ,ebp_2148 + ( ( ebp_2144 + ( ebp_2136 * iw ) ) << 4 ) + 8) &
& + *(double*&
& ,ebp_2220 + ( ( ebp_2216 + ( ebp_2208 * iw ) ) << 4 ) + 8) + *(double*,ebp_2196 &
& &
& + ( ( ebp_2192 + ( ebp_2184 * iw ) ) << 4 ) + 8) ) / 0.000000100000
write(0&
& ,'(a)')ene,totim,totim * 4.000000000000 * 3.141592653590 * 0.000033333333 * 99999.999999999985
                        totim = 0.000000000000
                        totre = ( *(double*,ebp_2172 + ( ( ebp_2168 + ( ebp_2160 * iw ) ) << 4 )) &
& + *(double*,ebp_2148 + ( ( ebp_2144 + ( ebp_2136 * iw ) ) << 4 )) + *(double*,ebp_2220 &
& + ( ( ebp_2216 + ( ebp_2208 * iw ) ) << 4 )) + *(double*,ebp_2196 + ( ( ebp_2192 &
& + ( ebp_2184 * iw ) ) << 4 )) ) / 0.000000100000
                        write(0,'(a)')ene,totre,totre * 4.000000000000 * 3.141592653590 * 0.000033333333 * 99999.999999999985
                        totre = 0.000000000000
                        write(0,'(a)')ene,*(double*,ebp_2172 + ( ( ebp_2168 + ( ebp_2160 * iw ) ) << 4 ) &
& + 8) / 0.000000100000,*(double*,ebp_2148 + ( ( ebp_2144 + ( ebp_2136 * iw ) ) << 4 ) &
& + 8) / 0.000000100000,*(double*,ebp_2220 + ( ( ebp_2216 + ( ebp_2208 * iw ) ) << 4 ) &
& + 8) / 0.000000100000,*(double*,ebp_2196 + ( ( ebp_2192 + ( ebp_2184 * iw ) ) << 4 ) &
& + 8) / 0.000000100000
                        write(0,'(a)')ene,*(double*,ebp_2172 + ( ( ebp_2168 + ( ebp_2160 * iw ) ) << 4 )) / 0.000000100000&
& ,*(double*,ebp_2148 + ( ( ebp_2144 + ( ebp_2136 * iw ) ) << 4 )) / 0.000000100000&
& ,*(double*,ebp_2220 + ( ( ebp_2216 + ( ebp_2208 * iw ) ) << 4 )) / 0.000000100000&
& ,*(double*,ebp_2196 + ( ( ebp_2192 + ( ebp_2184 * iw ) ) << 4 )) / 0.000000100000
                        totabs = fp7 / 0.000000100000
                        write(0,'(a)')ene,totabs,totabs * 4.000000000000 * 3.141592653590 * 0.000033333333 * 99999.999999999985
                        totabs = 0.000000000000
                        iw = iw + 1
                      while ( (logical)( iw.ne.nmesh ) );
                    end if
                    if ( ( nmesh + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) + ( 1 * istm ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16.eq.0 ) then
                      errorat "Attempt to DEALLOCATE unallocated '%s'", "px"
                    end if
                    call free( ( ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) &
& + ( 1 * istm ) + nmesh + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 )
                    if ( ( nmesh + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) + ( 1 * istm ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16.eq.0 ) then
                      errorat "Attempt to DEALLOCATE unallocated '%s'", "py"
                    end if
                    call free( ( ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) &
& + ( 1 * istm ) + nmesh + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 )
                    if ( ( nmesh + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) + ( 1 * istm ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16.eq.0 ) then
                      errorat "Attempt to DEALLOCATE unallocated '%s'", "pz"
                    end if
                    call free( ( ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) &
& + ( 1 * istm ) + nmesh + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 )
                    if ( ( ( ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) + ( 1 * istm ) ) * 16 ) + ( ( nmesh + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 ).eq.0 ) then
                      errorat "Attempt to DEALLOCATE unallocated '%s'", "sym"
                    end if
                    call free( ( ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) &
& + ( 1 * istm ) + nmesh + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 )
                    if ( ( nmesh + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) + ( 1 * istm ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16.eq.0 ) then
                      errorat "Attempt to DEALLOCATE unallocated '%s'", "s"
                    end if
                    call free( ( ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) &
& + ( 1 * istm ) + nmesh + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 )
                    if ( ( nmesh + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) + ( 1 * istm ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16.eq.0 ) then
                      errorat "Attempt to DEALLOCATE unallocated '%s'", "inter2w"
                    end if
                    call free( ( ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) &
& + ( 1 * istm ) + nmesh + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 )
                    if ( ( nmesh + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) + ( 1 * istm ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16.eq.0 ) then
                      errorat "Attempt to DEALLOCATE unallocated '%s'", "inter1w"
                    end if
                    call free( ( ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) &
& + ( 1 * istm ) + nmesh + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 )
                    if ( ( nmesh + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) + ( 1 * istm ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16.eq.0 ) then
                      errorat "Attempt to DEALLOCATE unallocated '%s'", "intra2w"
                    end if
                    call free( ( ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) &
& + ( 1 * istm ) + nmesh + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 )
                    if ( ( nmesh + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) + ( 1 * istm ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16.eq.0 ) then
                      errorat "Attempt to DEALLOCATE unallocated '%s'", "intra1w"
                    end if
                    call free( ( ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) &
& + ( 1 * istm ) + nmesh + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 )
                    if ( ( ( ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) + ( 1 * istm ) ) * 16 ) + ( ( nmesh + ( ( (unsigned char)( ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 ).eq.0 ) then
                      errorat "Attempt to DEALLOCATE unallocated '%s'", "delta"
                    end if
                    call free( ( ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 3 * ly ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * lx ) &
& + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * istn ) &
& + ( 1 * istm ) + nmesh + ( ( (unsigned char, ( ( nstval >> 31 ) & 1 ) ^ 1 ) ? 0 : nstval ) * ( nstval.lt.0 ? nstval : 0 ) * 9 * lz ) ) * 16 )
                    close(0)
                    close(0)
                    close(0)
                    close(0)
                    close(0)
                    write(0,'(a)')' '
                    write(0,'(a)')'information about calculation just performed:'
                    write(0,'(a)')' '
                    write(0,'(a)')'calculated the component:',v1,v2,v3,'of second order susceptibility'
                    write(0,'(a)')'tolerence:',(tol & 0xFFFFFFFF)
                    if ( ( tol.lt.0.008000000380 ).ne.0 ) then
                      write(0,'(a)')'ATTENTION: tolerence is too high'
                    end if
                    write(0,'(a)')'broadening:',(brod & 0xFFFFFFFF),'Hartree'
                    if ( ( brod.lt.0.008999999613 ).eq.0 ) then
                      if ( ( brod.lt.0.014999999665 ).ne.0 ) then
                        write(0,'(a)')' '
                        write(0,'(a)')'ATTENTION: broadening is too high'
                        write(0,'(a)')' '
                      end if
                    else
                      write(0,'(a)')' '
                      write(0,'(a)')'ATTENTION: broadening is quite high'
                      write(0,'(a)')' '
                    end if
                    write(0,'(a)')'scissors shift:',(sc & 0xFFFFFFFF),'Hartree'
                    write(0,'(a)')'energy window:',ha2ev * ( emax - emin ),'eV',emax - emin&
& ,'Hartree'
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
                if ( malloc( 216 ).eq.0 ) then
                  oserror "Out of memory"
                end if
                if ( 0.ne.0 ) then
                  errorat "Attempting to allocate already allocated array '%s'", "s"
                else
                end if
              end if
            end if
          end if
        end if
      end if
    end if
  end if
end subroutine nlinopt_
#if 0
#endif
