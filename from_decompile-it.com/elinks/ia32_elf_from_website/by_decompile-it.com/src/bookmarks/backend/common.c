#include "common.c.h"
static struct bookmarks_backend *bookmarks_backends[2] = { &default_bookmarks_backend, &xbel_bookmarks_backend };
static int loaded_backend_num = -1;
void bookmarks_read( void )
{
  int eax;
  int backend_num = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  struct bookmarks_backend *backend = bookmarks_backends[ *(int*)(get_opt_( config_options, (unsigned char*)config_options )) ];
  unsigned char *file_name;
  FILE *f;
  if ( bookmarks_backends[ *(int*)(get_opt_( config_options, (unsigned char*)config_options )) ] && backend->read && backend && eax( 0 ) && ( elinks_home == 0 || straconcat( elinks_home ) ) )
  {
    fopen64( (char*)straconcat( elinks_home ), "rb" );
    if ( elinks_home )
    {
      mem_free( (void*)straconcat( elinks_home ) );
      *ebp_28 = ebp_28;
    }
    if ( f->_flags )
    {
      backend->read( &f[0] );
      fclose( &f[0] );
      bookmarks_unset_dirty(  );
      loaded_backend_num = backend_num;
    }
  }
  return;
}
void bookmarks_write( struct list_head_elinks *bookmarks_list )
{
  int backend_num = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  struct bookmarks_backend *backend = bookmarks_backends[ *(int*)(get_opt_( config_options, (unsigned char*)config_options )) ];
  struct secure_save_info *ssi;
  unsigned char *file_name;
  if ( ( bookmarks_are_dirty(  ) || loaded_backend_num != backend_num ) && backend[0] && backend->write && elinks_home && backend )
  {
    eax( 1 );
    if ( file_name && straconcat( elinks_home ) )
    {
      mem_free( &file_name );
      if ( secure_open( straconcat( elinks_home ) ) )
      {
        backend->write( &ssi[0], &bookmarks_list[0] );
        if ( eax )
        {
          backend_num = backend_num;
        }
        else
        {
        }
      }
    }
  }
  return;
}
#if 0
#endif
