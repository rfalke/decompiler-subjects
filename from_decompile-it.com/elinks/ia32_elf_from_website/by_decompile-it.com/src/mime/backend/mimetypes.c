#include "mimetypes.c.h"
static struct option_info mimetypes_options[4] = { { { 0, 0, { 0 }
, "mimetypes", 0, 9, 0, 0, { 0, 135393400, 135469408, 0, 0, 0 }
, "Options for the support of mime.types files. These files can be used to find the content type of a URL by looking at the extension of the file name.", "Mimetypes files", 0, 0, 0 }
, "mime" }
, { { 0, 0, { 0 }
, "enable", 0, 0, 0, 1, { 0, 135469424, 135427955, 0, 0, 0 }
, "Enable mime.types support.", "Enable", 0, 0, 0 }
, "mime.mimetypes" }
, { { 0, 0, { 0 }
, "path", 0, 3, 0, 1024, { "~/.mime.types:/etc/mime.types:/usr/local/etc/mime.types:/usr/share/mime.types:/usr/share/misc/mime.types", 135393552, 135443141, 0, 0, 0 }
, "The search path for mime.types files. Colon-separated list of files.", "Path", 0, 0, 0 }
, "mime.mimetypes" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
static struct hash *mimetypes_map;
struct mime_backend mimetypes_mime_backend = { &get_content_type_mimetypes, 0 };
struct module mimetypes_mime_module = { "Mimetypes files", mimetypes_options, 0, 0, 0, &init_mimetypes, &done_mimetypes };
void done_mimetypes_entry( struct mimetypes_entry *entry )
{
  if ( entry[0].content_type )
  {
    void *p = &((int*)p)[0];
    if ( ((int*)p)[0] )
      mem_free( &((int*)p)[0] );
    mem_free( (void*)entry[0].content_type );
  }
  return;
}
void parse_mimetypes_file( unsigned char *filename )
{
  int edx;
  FILE *file = fopen64( &filename[0], "rb" );
  unsigned char line[1024];
  if ( file )
  {
    do
    {
      if ( fgets( line, 1023, file ) )
      {
        unsigned char *ctype;
        unsigned char *token;
        if ( strchr( line, 35 ) )
          *(char*)(strchr( line, 35 )) = 0;
        ctype[0] = line[0];
        if ( ( ctype[0] & 255 ) && token[0] )
        {
          token[0] = 0;
          if ( strchr( &ctype[0], 47 ) )
          {
            token[0] = token[1];
            while ( token[0] == 0 || token[0] == 0 )
            {
              token[0] = 0;
              if ( !get_hash_item( mimetypes_map, &token[0], strlen( &token[0] ) ) && get_hash_item( mimetypes_map, &token[0], strlen( &token[0] ) ) )
              {
                *ebp_1084 = memacpy( &ctype[0], strlen( &ctype[0] ) );
                if ( ebp_1084 )
                {
                  memcpy( &token[0], &edi, edx + 4 );
                  if ( eax == 0 )
                    goto B34;
                  else
                  {
                    token[0] = token[0] + 1;
                  }
                }
B34:                done_mimetypes_entry( &edx );
              }
            }
          }
        }
      }
      else
        fclose( file );
    }
    while ( token[0] );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void done_mimetypes( struct module *module )
{
  int eax;
  int ecx;
  int edx;
  struct hash_item *item;
  int i;
  if ( mimetypes_map )
  {
    if ( ( 1 << mimetypes_map->width ) >= 1 )
    {
      i = 0;
      edx = mimetypes_map;
      while ( item = &mimetypes_map->hash[ i ].next[0], *(int*)(eax + ( i << 3 ) + 8) == ecx + ( i << 3 ) + 8 )
      {
        i++;
        if ( ( 1 << mimetypes_map->width ) <= i + 1 )
          goto B3;
        eax = &mimetypes_map->width;
      }
      do
      {
        if ( item->value )
        {
          done_mimetypes_entry(  );
          mimetypes_map->width = mimetypes_map;
        }
        item = &item;
      }
      while ( item->next != mimetypes_map + ( i << 3 ) + 8 );
      i++;
    }
B3:    module = &mimetypes_map[0].width;
  }
  else
  {
    return;
  }
}
int change_hook_mimetypes( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  if ( mimetypes_options[2].option_elinks.next == changed || ( mimetypes_options[1].option_elinks.next == changed[0].next && mimetypes_options[1].option_elinks.value.tree == 0 ) )
  {
    done_mimetypes( &mimetypes_mime_module );
    return 0;
  }
  return 0;
}
void init_mimetypes( struct module *module )
{
  static struct change_hook_info mimetypes_change_hooks[2] = { { "mime.mimetypes", &change_hook_mimetypes }
, { 0, 0 }
 };
  register_change_hooks( mimetypes_change_hooks );
  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) )
  {
    mimetypes_options[1].option_elinks.value.tree = 0;
  }
  return;
}
unsigned char *get_content_type_mimetypes( unsigned char *extension )
{
  int eax;
#error unstructured control flow
}
#if 0
#endif
