#include "common.c.h"
static struct mime_backend *mime_backends[4] = { &default_mime_backend, &mailcap_mime_backend, &mimetypes_mime_backend, 0 };
unsigned char *get_content_type_backends( unsigned char *extension )
{
  struct mime_backend *backend;
  int i;
  backend[0].get_content_type = default_mime_backend.get_content_type;
  i = 0;
  do
  {
  }
  while ( ( default_mime_backend.get_content_type == 0 || !content_type[0] ) && mime_backends[ i + 1 ] );
  return (unsigned char*)mime_backends[ i + 1 ];
}
struct mime_handler *get_mime_handler_backends( unsigned char *ctype, int have_x )
{
  struct mime_backend *backend;
  int i;
  backend[0].get_content_type = default_mime_backend.get_content_type;
  i = 0;
  do
  {
  }
  while ( ( default_mime_backend.get_mime_handler == 0 || !handler[0].description ) && mime_backends[ i + 1 ] );
  return &(struct mime_handler*)(mime_backends[ i + 1 ]->get_content_type[0]);
}
unsigned char *get_next_path_filename( unsigned char **path_ptr, unsigned char separator )
{
  int eax;
  int ecx;
  unsigned char *path;
  unsigned char *filename;
  int filenamelen;
  path[0] = path_ptr[0];
{
  unsigned char *tmp;
  filenamelen = 0;
  if ( path[0] & 255 )
  {
    if ( path[0] != separator )
    {
      do
      {
        path[0] = path[1];
        if ( path[0] == 0 )
          filenamelen = path[0] - path[0];
        else
        {
          path_ptr[0] = path_ptr[0];
        }
      }
      while ( path[0] != separator );
      filenamelen = path[0] - path[0];
    }
    path_ptr[0] = &path[1];
    if ( filenamelen >= 1 )
    {
      if ( memacpy( &path[0], filenamelen ) )
      {
        mem_free( (void*)memacpy( &path[0], filenamelen ) );
        return expand_tilde( memacpy( &path[0], filenamelen ) );
      }
      filename[0] = 0;
    }
  }
  path_ptr[0] = &path[0];
  if ( filenamelen >= 1 )
  {
  }
  path_ptr[0] = &path[1];
}
}
struct mime_handler *init_mime_handler( unsigned char *program, unsigned char *description, unsigned char *backend_name, int ask, int block )
{
  int edx;
  struct mime_handler *handler;
  *ebp_28 = strlen( (char*)program );
  if ( mem_calloc( 1, strlen( (char*)program ) + 12 ) )
  {
    memcpy( mem_calloc( 1, strlen( (char*)program ) + 12 ) + 9, &program[0], strlen( (char*)program ) );
    description[0] = description[0] == 0 ? description[0] : "";
    handler->description = description[0] == 0 ? &description[0] : "";
    handler->backend_name = backend_name;
    handler->bits_at_8/*.1_1of4*/ = ( *(char*)(handler[0].description + 8) & -4 ) | ( ( block & 1 ) * 2 ) | ( ask & 1 );
  }
  return &handler[0];
}
#if 0
#endif
