!include "print_ij.F90.h"
subroutine print_ij_()
use interfaces_01manage_mpi
use defs_basis
implicit none

  integer :: eax
  integer :: ecx
  integer :: ch
  integer :: edx
  integer :: bh
  real(dp) :: fp7
  real(dp) :: a_ij(:)
  integer :: adim, ndim, opt_io, opt_l, opt_l_index(:), opt_pack, pack2ij(:)
  real(dp) :: test_value
  integer :: unt
  real(dp) :: b_ij(:)
  integer :: ilmn, ilmn1, j0lmn, jlmn, jlmn1, klmn
  character(500) :: message
  integer :: nhigh, nmin
  real(dp) :: prtab(:,:)
  real(dp) :: testval
  ubound/*.2*/ = ndim * 1
  ubound/*.0*/ = adim
  ubound/*.4*/ = opt_pack * adim
  nmin = ndim.le.12 ? ndim : 12
  if ( opt_l.ge.0 ) then
    do ubound/*.2*/
    end do
    nmin = 0 + 1
  end if
  if ( 0.ne.0 ) then
    errorat "Attempting to allocate already allocated array '%s'", "prtab"
  else
    if ( ( ( ( (unsigned char)( ( nmin.lt.0 ) ^ 1 ) ? 0 : nmin ) * ( (unsigned char)( ( nmin.lt.0 ) ^ 1 ) ? 0 : nmin ) ) << 3 ).lt.0 ) then
      error "Attempt to allocate negative amount of memory. Possible integer overflow"
    end if
    if ( malloc( ( ( ( nmin.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( nmin.lt.0 ) ^ 1 ) ? 0 : nmin ) * ( (unsigned char)( ( nmin.lt.0 ) ^ 1 ) ? 0 : nmin ) ) << 3 ).le.0 ? ( ( nmin.le.0 ).ne.0 ? 0 : ( (unsigned char)( ( nmin.lt.0 ) ^ 1 ) ? 0 : nmin ) * ( (unsigned char)( ( nmin.lt.0 ) ^ 1 ) ? 0 : nmin ) ) << 3 : 1 ).eq.0 ) then
      oserror "Out of memory"
    end if
    if ( 0.ne.0 ) then
      errorat "Attempting to allocate already allocated array '%s'", "b_ij"
    else
      if ( ( ( ( ndim * ( ndim + 1 ).le.1 ? 0 : ( (unsigned char)( ( nmin.lt.0 ) ^ 1 ) ? 0 : nmin ) * ( (unsigned char)( ( nmin.lt.0 ) ^ 1 ) ? 0 : nmin ) ) << 3 ) << 3 ).lt.0 ) then
        error "Attempt to allocate negative amount of memory. Possible integer overflow"
      end if
      if ( eax.eq.0 ) then
        oserror "Out of memory"
      end if
      if ( opt_pack.eq.0 ) then
        goto B35;
      else
        do ( ndim * ( ndim + 1 ) ) / 2
        end do
        klmn = 1
        if ( klmn.le.adim ) then
          do
            adim = *(double*,ebp_8 + ( ( klmn + -1 ) << 3 ))
            klmn = klmn + 1
          while ( (logical)( klmn.ne.adim ) );
        end if
        jlmn1 = 0
        jlmn = 1
        if ( jlmn.le.ndim ) then
          do
            if ( opt_l.ge.0 ) then
              if ( opt_l.eq.*(int*)(ebp_28 + ( ( jlmn + -1 ) << 2 )) ) then
                jlmn1 = jlmn1 + 1
              else
                jlmn = jlmn + 1
              end if
            else
              jlmn1 = jlmn
              if ( nmin.lt.jlmn1 ) then
                continue;
              end if
            end if
            ilmn1 = 0
            j0lmn = ( jlmn * ( jlmn + -1 ) ) / 2
            ilmn = 1
            if ( ilmn.le.jlmn ) then
              do
                if ( opt_l.ge.0 ) then
                  if ( opt_l.eq.*(int*)(ebp_28 + ( ( ilmn + -1 ) << 2 )) ) then
                    ilmn1 = ilmn1 + 1
                  else
                    ilmn = ilmn + 1
                  end if
                else
                  ilmn1 = ilmn
                end if
                klmn = j0lmn + ilmn
              while ( !(logical)( jlmn.ne.ilmn ) );
            end if
          while ( !(logical)( jlmn.ne.ndim ) );
        end if
        if ( adim.eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "b_ij"
        end if
        call free( adim )
        if ( unt.eq.2 ) then
          do nmin
            do nmin
            end do
          end do
        end if
        if ( ndim.le.12.or.opt_l.ge.0 ) then
          ilmn = 1
          if ( nmin.lt.ilmn ) then
          else
            do
              call _gfortran_transfer_array( ebp_1028, adim + ( ( ( 1 * ( ilmn + -1 ) ) &
& + ( ( (unsigned char, ( nmin.lt.0 ) ^ 1 ) ? 0 : nmin ) * ( 1 + -1 ) ) ) << 3 )&
& , 8, 0 )
              write(0,'(a)')
              call wrtout_( "", message, "COLL", 500, 4 )
              if ( opt_io.eq.2 ) then
                call wrtout_( "", message, "COLL", 500, 4 )
              end if
              ilmn = ilmn + 1
            while ( (logical)( ilmn.ne.nmin ) );
          end if
        else
          ilmn = 1
          if ( ilmn.le.nmin ) then
            do
              call _gfortran_transfer_array( ebp_1028, adim + ( ( ( 1 * ( ilmn + -1 ) ) &
& + ( ( (unsigned char, ( nmin.lt.0 ) ^ 1 ) ? 0 : nmin ) * ( 1 + -1 ) ) ) << 3 )&
& , 8, 0 )
              write(0,'(a)')' ...'
              call wrtout_( "", message, "COLL", 500, 4 )
              if ( opt_io.eq.2 ) then
                call wrtout_( "", message, "COLL", 500, 4 )
              end if
              ilmn = ilmn + 1
            while ( (logical)( ilmn.ne.nmin ) );
          end if
          write(0,'(a)')'...  only ',"",'  components have been written...'
          call wrtout_( "", message, "COLL", 500, 4 )
          if ( opt_io.eq.2 ) then
            call wrtout_( "", message, "COLL", 500, 4 )
          end if
        end if
        if ( ( test_value.lt.0.000000000000 ).ne.0 ) then
          testval = test_value
          if ( unt.eq.2 ) then
            testval = testval * 27.211384500000
          end if
          nhigh = 0
          do nmin
            do nmin
            end do
          end do
          nhigh = 0 + 1
          if ( nhigh.gt.0 ) then
            write(0,'(a)')' print_ij: WARNING -',ch10,'  The matrix seems to have high value(s) !'&
& ,ch10,'  (',nhigh,' components have a value greater than ',testval,').',ch10&
& ,'  It can cause instabilities during SCF convergence.',ch10,'  Action: you should check your atomic dataset (psp file)'&
& ,ch10,'          and look for "high" projector functions...'
            call wrtout_( "", message, "COLL", 500, 4 )
            if ( opt_io.eq.2 ) then
              call wrtout_( "", message, "COLL", 500, 4 )
            end if
          end if
        end if
        if ( adim.eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "prtab"
        end if
        call free( adim )
        if ( 0.ne.0 ) then
          call free( 0 )
        end if
        if ( 0.ne.0 ) then
          call free( 0 )
        end if
        return
      end if
    end if
B35:;
    do ubound/*.0*/
    end do
  end if
end subroutine print_ij_
#if 0
#endif
