!include "rwwf.F90.h"
subroutine rwwf_(cg,eigen,formeig,headform,icg,ikpt,isppol,kg_k,mband,mcg,nband,nband_disk&
& ,npw,nspinor,occ,option,optkg,tim_rwwf,wff)
use interfaces_lib01hidempi
use interfaces_13io_mpi
use interfaces_11util
use interfaces_01manage_mpi
use defs_datatypes
use defs_basis
implicit none
  real(dp) :: cg(2,:), eigen(:)
  integer :: formeig, headform, icg, ikpt, isppol, kg_k(3,:), mband, mcg, nband, nband_disk, npw, nspinor
  real(dp) :: occ(:)
  integer :: option, optkg, tim_rwwf
  type(wffile_type) :: wff

  integer :: eax
  integer :: ch
  integer :: edx
  integer :: iband, indxx, ios, ipw
  character(500) :: message
  integer :: nband1
  integer :: ncid_hdr
  integer :: npw1, npwso1
  integer :: nrec
  integer :: nspinor1
  real(dp) :: tsec(2)
  integer :: unitwf
  integer :: use_f90
  ubound/*.4*/ = optkg * npw
  ubound/*.2*/ = mband * _gfortran_pow_i4_i4( mband * 2, formeig )
  ubound/*.0*/ = mcg
  ubound/*.6*/ = mband
  call timab_( tim_rwwf + 270, "", tsec )
  if ( mband.lt.nband.and.option.ne.-1 ) then
    write(0,'(a)')ch10,' rwwf : BUG -',ch10,'  One should have nband<=mband'&
& ,ch10,'  However, nband=',nband,', and mband=',mband,'.'
    call wrtout_( "", message, "PERS", 500, 4 )
    call leave_new_( "PERS", 4 )
  end if
  if ( formeig.ne.0.and.formeig.ne.1 ) then
    write(0,'(a)')ch10,' rwwf : BUG -',ch10,'  The argument formeig should be 0 or 1.'&
& ,ch10,'  However, formeig=',formeig,'.'
    call wrtout_( "", message, "PERS", 500, 4 )
    call leave_new_( "PERS", 4 )
  end if
  if ( option.eq.1 ) then
    goto B12;
  else
  if ( option.eq.2 ) then
    goto B12;
  else
  if ( option.eq.3 ) then
    goto B12;
  else
  if ( option.eq.4 ) then
    goto B12;
  else
  if ( option.eq.-1 ) then
    goto B12;
  else
  if ( option.eq.-2 ) then
    goto B12;
  else
  if ( option.ne.-4 ) then
    write(0,'(a)')ch10,' rwwf : BUG -',ch10,'  The argument option should be 1, 2, 3, -1 or -2.'&
& ,ch10,'  However, option=',option,'.'
    call wrtout_( "", message, "PERS", 500, 4 )
    call leave_new_( "PERS", 4 )
  end if
  end if
  end if
  end if
  end if
  end if
  end if
B12:;
  unitwf = wff%unwff
  ncid_hdr = unitwf
  use_f90 = 0
  if ( wff%accesswff.eq.0.or.( wff%accesswff.eq.-1.and.wff%me.eq.wff%master ) ) then
    use_f90 = 1
  end if
  if ( option.eq.2 ) then
    goto B28;
  else
  if ( option.eq.4 ) then
    goto B28;
  else
    if ( headform.gt.39.or.headform.eq.0 ) then
      call wffreadnpwrec_( ios, ikpt, nband_disk, npw1, nspinor1, "badarg" )
      npwso1 = nspinor1 * npw1
      if ( ios.ne.0 ) then
        write(0,'(a)')ch10,' rwwf: ERROR -',ch10,'  Reading option of rwwf. Trying to read'&
& ,ch10,'  the (npw,nspinor,nband) record of a wf file, unit=',unitwf,ch10&
& ,'  gave iostat=',ios,'. Your file is likely not correct.',ch10,'  Action: check your input wf file.'
        call wrtout_( "", message, "PERS", 500, 4 )
        call leave_new_( "PERS", 4 )
      end if
    else
      if ( use_f90.eq.1 ) then
        ios = 0
        read(0,'(a)')npwso1,nband_disk
      end if
      if ( ios.ne.0 ) then
        write(0,'(a)')ch10,' rwwf: ERROR -',ch10,'  Reading option of rwwf. Trying to read'&
& ,ch10,'  the (npw,nband) record of a wf file, unit=',unitwf,ch10,'  gave iostat='&
& ,ios,'. Your file is likely not correct.',ch10,'  Action: check your input wf file.'
        call wrtout_( "", message, "PERS", 500, 4 )
        call leave_new_( "PERS", 4 )
      end if
    end if
    if ( option.eq.1.or.option.eq.-2 ) then
      if ( headform.gt.39.or.headform.eq.0 ) then
        if ( npw.ne.npw1 ) then
          write(0,'(a)')ch10,' rwwf : BUG -',ch10,'  Reading option of rwwf. One should have npw=npw1'&
& ,ch10,'  However, npw=',npw,', and npw1=',npw1,'.'
          call wrtout_( "", message, "PERS", 500, 4 )
          call leave_new_( "PERS", 4 )
        end if
        if ( nspinor.ne.nspinor1 ) then
          write(0,'(a)')ch10,' rwwf : BUG -',ch10,'  Reading option of rwwf. One should have nspinor=nspinor1'&
& ,ch10,'  However, nspinor=',nspinor,', and nspinor1=',nspinor1,'.'
          call wrtout_( "", message, "PERS", 500, 4 )
          call leave_new_( "PERS", 4 )
        end if
      else
      if ( nspinor.ne.npwso1 ) then
        write(0,'(a)')ch10,' rwwf : BUG -',ch10,'  Reading option of rwwf. One should have npwso=npwso1'&
& ,ch10,'  However, npwso=',nspinor * npw,', and npwso1=',npwso1,'.'
        call wrtout_( "", message, "PERS", 500, 4 )
        call leave_new_( "PERS", 4 )
      end if
      end if
    end if
    if ( headform.gt.39.or.headform.eq.0 ) then
      if ( option.eq.1 ) then
        goto B75;
      else
      if ( option.eq.-2 ) then
        goto B75;
      else
      if ( option.eq.3 ) then
        goto B75;
      else
        call wffreadskiprec_( ios, "", "badarg" )
        if ( ios.ne.0 ) then
          write(0,'(a)')ch10,' rwwf: ERROR -',ch10,'  Reading option of rwwf. Trying to read'&
& ,ch10,'  the k+g record of a wf file, unit=',unitwf,ch10,'  gave iostat='&
& ,ios,'. Your file is likely not correct.',ch10,'  Action: check your input wf file.'
          call wrtout_( "", message, "PERS", 500, 4 )
          call leave_new_( "PERS", 4 )
        end if
      end if
      end if
      end if
B75:;
      if ( optkg.ne.0 ) then
        if ( use_f90.eq.1 ) then
          ios = 0
          read(0,'(a)')ebp_36(:,:)
        end if
      else
        call wffreadskiprec_( ios, "", "badarg" )
      end if
    end if
    nband1 = nband_disk
    if ( formeig.eq.0 ) then
      if ( option.eq.1 ) then
        goto B110;
      else
      if ( option.eq.3 ) then
        goto B110;
      else
      if ( option.eq.-4 ) then
        goto B110;
      else
        call wffreadskiprec_( ios, "", "badarg" )
        if ( ios.ne.0 ) then
          write(0,'(a)')ch10,' rwwf: ERROR -',ch10,'  Reading option of rwwf. Trying to read'&
& ,ch10,'  an eigenvalue record of a wf file, unit=',unitwf,ch10,'  gave iostat='&
& ,ios,'. Your file is likely not correct.',ch10,'  Action: check your input wf file.'
          call wrtout_( "", message, "PERS", 500, 4 )
          call leave_new_( "PERS", 4 )
        end if
      end if
      end if
      end if
B110:;
      if ( use_f90.eq.1 ) then
        ios = 0
        read(0,'(a)')ebp_12(:,:)
      end if
    end if
    indxx = 0
    nband1 = max( nband_disk, nband )
    if ( nband1.gt.0.and.option.ne.-1 ) then
      iband = 1
      if ( iband.le.nband1 ) then
        do
          if ( formeig.eq.1 ) then
            if ( option.eq.1 ) then
              goto B151;
            else
            if ( option.eq.3 ) then
              goto B151;
            else
            if ( option.eq.-4 ) then
              goto B151;
            else
              call wffreadskiprec_( ios, "", "badarg" )
              if ( ios.ne.0 ) then
                write(0,'(a)')ch10,' rwwf: ERROR -',ch10,'  Reading option of rwwf. Trying to read'&
& ,ch10,'  a RF eigenvalue record of a wf file, unit=',unitwf,ch10,'  gave iostat='&
& ,ios,'. Your file is likely not correct.',ch10,'  Action: check your input wf file.'
                call wrtout_( "", message, "PERS", 500, 4 )
                call leave_new_( "PERS", 4 )
              end if
            end if
            end if
            end if
B151:;
            if ( use_f90.eq.1 ) then
              ios = 0
              call _gfortran_transfer_array( ebp_1344, ebp_12 + ( indxx << 3 ), 8, 0 )
              read(0,'(a)')
            end if
            indxx = indxx + ( nband1 * 2 )
          end if
          if ( option.eq.1 ) then
            goto B161;
          else
          if ( option.eq.-2 ) then
            goto B161;
          else
            if ( option.ne.-4 ) then
              call wffreadskiprec_( ios, "", "badarg" )
            end if
            if ( ios.ne.0 ) then
              write(0,'(a)')ch10,' rwwf: ERROR -',ch10,'  Reading option of rwwf. Trying to read'&
& ,ch10,'  a RF wf record of a wf file, unit=',unitwf,ch10,'  gave iostat='&
& ,ios,'. Your file is likely not correct.',ch10,'  Action: check your input wf file.'
              call wrtout_( "", message, "PERS", 500, 4 )
              call leave_new_( "PERS", 4 )
            end if
            iband = iband + 1
          end if
          end if
B161:;
          ipw = icg + ( npwso1 * ( iband + -1 ) )
          if ( use_f90.eq.1 ) then
            ios = 0
            call _gfortran_transfer_array( ebp_1344, ebp_8 + ( ipw * 16 ), 8, 0 )
            read(0,'(a)')
          end if
        while ( !(logical)( iband.ne.nband1 ) );
      end if
    end if
    if ( nband.lt.nband_disk.or.option.eq.-1 ) then
      nrec = ( formeig + 1 ) * ( nband_disk - nband )
      if ( option.eq.-1 ) then
        nrec = nband_disk * ( formeig + 1 )
      end if
      call wffreadskiprec_( ios, nrec, "badarg" )
      call timab_( tim_rwwf + 270, "", tsec )
      return
    end if
  end if
  end if
B28:;
  if ( option.eq.2 ) then
    goto B218;
  else
  if ( option.eq.4 ) then
    goto B218;
  end if
  end if
B218:;
  call writewf_( )
end subroutine rwwf_
subroutine writewf_()
use interfaces_lib01hidempi
use interfaces_13io_mpi
use interfaces_11util
use interfaces_01manage_mpi
use defs_datatypes
use defs_basis
implicit none

  integer :: ch
  integer :: edx
  /* phantom */ integer :: nspinor1
  real(dp) :: cg(2,:), eigen(:)
  integer :: formeig, headform, icg, ikpt, isppol, kg_k(3,:), mband, mcg, nband, nband_disk, npw, nspinor
  real(dp) :: occ(:)
  integer :: option, optkg
  type(wffile_type) :: wff
  integer :: iband, ii, ios, ipw
  character(500) :: message
  integer :: nband2
  integer :: ncid_hdr
  integer :: npwso
  integer :: unitwf
  integer :: use_f90
  ubound/*.65*/ = optkg * npw
  ubound/*.63*/ = mband * _gfortran_pow_i4_i4( mband * 2, formeig )
  ubound/*.67*/ = mband
  ubound/*.61*/ = mcg
  if ( option.ne.2.and.option.ne.4 ) then
    write(0,'(a)')ch10,' writewf : BUG -',ch10,'  The argument option should be 2 or 4.'&
& ,ch10,'  However, option=',option,'.'
    call wrtout_( "", message, "PERS", 500, 4 )
    call leave_new_( "PERS", 4 )
  end if
  unitwf = wff%unwff
  ncid_hdr = unitwf
  use_f90 = 0
  if ( wff%accesswff.eq.0.or.( wff%accesswff.eq.-1.and.wff%me.eq.wff%master ) ) then
    use_f90 = 1
  end if
  if ( nband.lt.nband_disk ) then
    write(0,'(a)')ch10,' rwwf : BUG -',ch10,'  Writing option of rwwf. One should have nband<=nband_disk'&
& ,ch10,'  However, nband=',nband,', and nband_disk=',nband_disk,'.'
    call wrtout_( "", message, "PERS", 500, 4 )
    call leave_new_( "PERS", 4 )
  end if
  call wffwritenpwrec_( ios, nband_disk, npw, nspinor, "badarg" )
  if ( optkg.ne.0.and.option.ne.4 ) then
    if ( use_f90.eq.1 ) then
      write(0,'(a)')ebp_36(:,:)
    end if
  else
  if ( use_f90.eq.1 ) then
    write(0,'(a)')
  end if
  end if
  if ( formeig.eq.0 ) then
    if ( use_f90.eq.1 ) then
      iband = 1
      if ( iband.le.nband_disk ) then
        do
              while ( (logical, iband.ne.nband_disk ) );
      end if
iband = 1
      if ( iband.le.nband_disk ) then
        do
              while ( (logical, iband.ne.nband_disk ) );
      end if
write(0,'(a)')ebp_12 &
& + ( ( iband + -1 ) << 3 ),ebp_64 + ( ( iband + -1 ) << 3 )
    end if
    if ( option.ne.4 ) then
      npwso = nspinor * npw
      iband = 1
      if ( iband.le.nband_disk ) then
        do
          ipw = icg + ( npwso * ( iband + -1 ) )
          if ( use_f90.eq.1 ) then
            call _gfortran_transfer_array( ebp_1280, ebp_8 + ( ipw * 16 ), 8, 0 )
            write(0,'(a)')
          end if
          iband = iband + 1
        while ( !(logical)( iband.ne.nband_disk ) );
      end if
    end if
  else
  if ( formeig.eq.1 ) then
    npwso = nspinor * npw
    nband2 = nband_disk * 2
    iband = 1
    if ( iband.le.nband_disk ) then
      do
        ipw = icg + ( npwso * ( iband + -1 ) )
        ii = nband2 * ( iband + -1 )
        if ( use_f90.eq.1 ) then
          call _gfortran_transfer_array( ebp_1280, ebp_12 + ( ii << 3 ), 8, 0 )
          write(0,'(a)')
          if ( option.ne.4 ) then
            call _gfortran_transfer_array( ebp_1280, ebp_8 + ( ipw * 16 ), 8, 0 )
            write(0,'(a)')
          end if
        end if
        iband = iband + 1
      while ( !(logical)( iband.ne.nband_disk ) );
    end if
  end if
  end if
  return
end subroutine writewf_
#if 0
#endif
