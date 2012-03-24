#include "mime.c.h"
static struct option_info mime_options[3] = { { { 0, 0, { 0 }
, "mime", 64, 9, 0, 0, { 0, 135391124, 135468814, 0, 0, 0 }
, "MIME-related options (handlers of various MIME types).", "MIME", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "default_type", 0, 3, 0, 1024, { "application/octet-stream", 135391180, 135468849, 0, 0, 0 }
, "Document MIME-type to assume by default (when we are unable to guess it properly from known information about the document).", "Default MIME-type", 0, 0, 0 }
, "mime" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
static struct module *mime_submodules[4] = { &default_mime_module, &mailcap_mime_module, &mimetypes_mime_module, 0 };
struct module mime_module = { "MIME", mime_options, 0, mime_submodules, 0, 0, 0 };
unsigned char *get_content_filename( struct uri *uri, struct cache_entry *cached )
{
  unsigned char *filename, *pos;
  if ( ( cached[0].next == 0 && find_in_cache( &uri[0] ) == 0 ) || cached->head == 0 || parse_header( cached->head, "Content-Disposition", 0 ) == 0 )
  {
    return 0;
  }
  parse_header_param( &pos[0], "filename", &filename );
  mem_free( &pos[0] );
  if ( filename )
  {
    if ( filename[0] == '"' )
    {
      if ( strlen( (char*)filename ) > 1 && *(char*)(( filename + strlen( (char*)filename ) ) - 1) == '"' )
      {
        *(char*)(( filename + strlen( (char*)filename ) ) - 1) = 0;
        memmove( filename, &filename[1], find_in_cache( &uri[0] ) );
      }
      if ( filename[1] == 0 )
      {
        mem_free( (void*)filename );
      }
    }
    if ( *(char*)(get_filename_position( filename )) == 0 )
    {
      mem_free( (void*)filename );
    }
    if ( filename < get_filename_position( filename ) )
    {
      memmove( filename, &pos[0], strlen( &pos[0] ) + 1 );
    }
  }
  else
  {
  }
}
unsigned char *get_extension_content_type( unsigned char *extension )
{
  unsigned char *ctype;
  if ( assert_failed == 0 )
  {
    if ( extension[0] && extension[0] )
    {
      assert_failed = 0;
      if ( get_content_type_backends( &extension[0] ) )
      {
        ctype[0] = ctype[0];
        return &ctype[0];
      }
      if ( strrchr( &extension[0], 46 ) == 0 )
        continue;
      if ( guess_encoding( &extension[0] ) )
      {
        if ( listext_encoded( guess_encoding( &extension[0] ) ) )
        {
          do
          {
            if ( edi )
            {
              if ( eax == 0 )
              {
                *(char*)(strrchr( &extension[0], 46 )) = 0;
                *(char*)(strrchr( &extension[0], 46 )) = '.';
                ctype[0] = get_content_type_backends( &extension[0] );
                if ( get_content_type_backends( &extension[0] ) == 0 )
                  break;
                else
                  break;
              }
              else
            }
            else
              break;
          }
          while ( edi + 4 );
        }
        strrchr( &extension[0], 46 );
      }
      if ( strrchr( &extension[0], 46 ) )
      {
        ctype[0] = straconcat( "application/x-" );
        if ( straconcat( "application/x-" ) == 0 )
        {
          return &ctype[0];
        }
        if ( get_mime_handler_backends( straconcat( "application/x-" ), 1 ) )
        {
          mem_free( (void*)get_mime_handler_backends( straconcat( "application/x-" ), 1 ) );
          return &ctype[0];
        }
        ctype[0] = 0;
        mem_free( &ctype[0] );
        return &ctype[0];
      }
    }
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/mime/mime.c";
      errline = 179;
      elinks_internal( "assertion extension && *extension failed!" );
    }
  }
  if ( get_content_type_backends( &extension[0] ) )
    continue;
}
unsigned char *get_cache_header_content_type( struct cache_entry *cached )
{
  int eax;
  int edx;
  unsigned char *extension, *ctype = parse_header( cached->head, "Content-Type", 0 );
  if ( ctype )
  {
    int ctypelen;
    if ( strchr( (char*)ctype, 59 ) )
      *(char*)(strchr( (char*)ctype, 59 )) = 0;
    if ( strlen( (char*)ctype ) && ' ' <= *(char*)(ctype + ( strlen( (char*)ctype ) - 1 )) )
    {
      do
      {
        *(char*)(( ctype + strlen( (char*)ctype ) ) - 2) = 0;
      }
      while ( ctypelen && ' ' <= eax );
    }
    if ( ctype[0] == 0 )
      mem_free( (void*)ctype );
    else
    {
      return ctype;
    }
  }
  ctype = 0;
  if ( get_content_filename( cached->uri, &cached[0] ) )
  {
    ctype = get_extension_content_type( get_content_filename( cached->uri, &cached[0] ) );
    mem_free( &extension[0] );
    return ctype;
  }
  return ctype;
}
unsigned char *get_content_type( struct cache_entry *cached )
{
  int edx;
  unsigned char *extension, *ctype;
  ctype[0] = cached->content_type;
  if ( cached->content_type == 0 )
  {
    if ( cached->head && ctype[0] )
    {
      if ( ctype[0] == 0 )
        mem_free( &ctype[0] );
      else
      {
        cached->content_type = &ctype[0];
      }
    }
    cached->uri = cached->uri;
    extension = get_extension_from_uri( cached->uri );
    if ( extension )
    {
      if ( strlen( (char*)extension ) - 1 >= 0 )
      {
        do
        {
          if ( eax == 0 )
          {
            if ( esi - 1 >= 0 )
              continue;
            else
              break;
          }
          else
          {
            *(char*)(ebx - 1) = eax;
          }
        }
        while ( esi - 1 >= 0 );
      }
      mem_free( (void*)extension );
      if ( get_extension_content_type( extension ) )
      {
        if ( ctype[0] == 0 )
          mem_free( &ctype[0] );
      }
    }
    cached->frag.next = cached->frag.next;
    if ( cached->frag.next != cached->frag.next && cached->frag.list_head_elinks == 0 )
    {
      if ( cached->frag.list_head_elinks >= 0 )
      {
        if ( *(int*)(eax + 20) == 0 )
        {
          if ( cached->frag.list_head_elinks > 1024 )
          {
          }
        }
      }
      if ( memacpy( &cached->frag.list_head_elinks, 1024 ) )
      {
        if ( c_strcasestr( (char*)memacpy( &cached->frag.list_head_elinks, 1024 ), "&lt;html&gt;" ) )
        {
          mem_free( (void*)memacpy( &cached->frag.list_head_elinks, 1024 ) );
          if ( stracpy( "text/html" ) && ctype[0] )
          {
          }
        }
        else
        {
          mem_free( (void*)memacpy( &cached->frag.list_head_elinks, 1024 ) );
        }
      }
    }
    mime_options[1].option_elinks.value = mime_options[1].option_elinks.value;
    stracpy( (unsigned char*)mime_options[1].option_elinks.value.tree );
  }
  return cached->content_type;
}
struct mime_handler *get_mime_type_handler( unsigned char *content_type, int xwin )
{
}
struct string *add_mime_filename_to_string( struct string *string, struct uri *uri )
{
  int eax;
  unsigned char *filename;
  filename[0] = get_content_filename( uri, 0 );
  if ( assert_failed == 0 )
  {
    assert_failed = uri->data == 0;
    if ( !(_Bool)( uri->data != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/mime/mime.c";
      errline = 331;
      elinks_internal( "assertion uri-&gt;data failed!" );
    }
  }
  if ( filename[0] )
  {
    add_shell_safe_to_string( &string[0], &filename[0], strlen( &filename[0] ) );
    mem_free( &filename[0] );
    return &string[0];
  }
  string[0].source = (unsigned char*)add_uri_to_string( &string[0], &uri[0], URI_FILENAME );
  return &string[0];
}
#if 0
#endif
