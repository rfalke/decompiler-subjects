!include "hdr_clean.F90.h"
subroutine hdr_clean_(hdr)
use defs_datatypes
use defs_basis
implicit none
  type(hdr_type) :: hdr

  integer :: iatom
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%hdr_type.eq.0 ) then
    errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
  end if
  call free( hdr%hdr_type )
  hdr%hdr_type = 0
  if ( hdr%usepaw.eq.1 ) then
    iatom = 1
    if ( iatom.le.hdr%natom ) then
      do
        if ( hdr%__pad(1).eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
        end if
        call free( hdr%__pad(1) )
        hdr%__pad(1) = 0
        if ( hdr%__pad(1).eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
        end if
        call free( hdr%__pad(1) )
        hdr%__pad(1) = 0
        if ( hdr%__pad(1).eq.0 ) then
          errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
        end if
        call free( hdr%__pad(1) )
        hdr%__pad(1) = 0
        iatom = iatom + 1
      while ( !(logical)( iatom.ne.hdr%natom ) );
    end if
    if ( hdr%__pad(1).eq.0 ) then
      errorat "Attempt to DEALLOCATE unallocated '%s'", "hdr"
    end if
    call free( hdr%__pad(1) )
    *(int*)&hdr%__pad(1) = 0
  end if
  return
end subroutine hdr_clean_
#if 0
#endif
