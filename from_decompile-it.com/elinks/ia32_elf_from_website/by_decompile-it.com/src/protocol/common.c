#include "common.c.h"
void close_all_non_term_fd( void )
{
  int n;
  int max;
  struct rlimit lim;
  if ( getrlimit64( 7, &lim.rlim_cur ) )
    max = 1024;
  else
  {
    max = (lim.rlim_max & 0xFFFFFFFF);
    if ( (int)(lim.rlim_max & 0xFFFFFFFF) <= 3 )
    {
      return;
    }
  }
  n = 3;
  max = max;
  do
  {
    n++;
    close( n );
  }
  while ( n < max );
  return;
}
struct connection_state init_directory_listing( struct string *page, struct uri *uri )
{
  int eax;
  int ecx;
  int edx;
  struct string dirpath;
  struct string decoded;
  struct string location;
  unsigned char *info;
  int local;
  dirpath.source = 0;
  dirpath.length = 0;
  decoded.source = 0;
  decoded.length = 0;
  location.source = 0;
  location.length = 0;
  local = uri->protocol;
  if ( init_string( page ) )
  {
    if ( init_string( &dirpath ) && init_string( &decoded ) && init_string( &location ) && add_uri_to_string( &dirpath, uri, URI_DATA ) && add_uri_to_string( &location, uri, URI_DIR_LOCATION ) && ( dirpath.length < 1 || *(char*)(( dirpath.length + dirpath.source ) - 1) == '/' || add_char_to_string( &dirpath, 47 ) ) && add_string_to_string( &decoded, &dirpath ) )
    {
      local = local == 4;
      decode_uri_string( &decoded );
      if ( ( local || add_char_to_string( &location, 47 ) ) && add_to_string( &page[0], "&lt;html&gt;\n&lt;head&gt;&lt;title&gt;" ) && ( local || add_html_to_string( &page[0], location.source, location.length ) ) && add_html_to_string( &page[0], decoded.source, decoded.length ) && add_to_string( &page[0], "&lt;/title&gt;\n&lt;base href=\"" ) && add_html_to_string( &page[0], location.source, location.length ) && add_html_to_string( &page[0], dirpath.source, dirpath.length ) && add_to_string( &page[0], "\" /&gt;\n&lt;/head&gt;\n&lt;body&gt;\n&lt;h2&gt;" ) )
      {
        switch ( uri->protocol )
        {
        case 4:
          info[0] = "Local";
          break;
        case 6:
          info[0] = "FSP";
          break;
        case 7:
          info[0] = "FTP";
          break;
        case 8:
          info[0] = "Gopher";
          break;
        case 16:
          info[0] = "Samba";
          break;
        default:
          info[0] = "?";
          break;
        }
        if ( add_to_string( &page[0], &info[0] ) && add_to_string( &page[0], " directory " ) && ( local || add_string_to_string( &page[0], &location ) ) )
        {
          unsigned char *slash;
          unsigned char sep;
          slash[0] = dirpath.source;
          sep = 47;
          do
          {
            if ( strchr( &slash[0], 47 ) == 0 )
            {
              if ( add_to_string( &page[0], "&lt;/h2&gt;\n&lt;pre&gt;" ) )
              {
                done_string( &dirpath );
                done_string( &decoded );
                done_string( &location );
                if ( page->length >= 1 )
                {
                  if ( assert_failed == 0 )
                  {
                    assert_failed = 0;
                    break;
                  }
                  assert_failed = 0;
                  break;
                }
                else
                {
                  if ( assert_failed == 0 )
                  {
                    assert_failed = 0;
                    break;
                  }
                  assert_failed = 0;
                  break;
                }
              }
            }
            else
            {
              done_string( &decoded );
              if ( init_string( &decoded ) == 0 )
                break;
              else
              {
                if ( assert_failed == 0 )
                {
                  if ( slash[0] && add_to_string( &page[0], " directory " ) - slash[0] >= 0 )
                    assert_failed = 0;
                  else
                  {
                    assert_failed = 1;
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                    errline = 255;
                    elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                    if ( assert_failed )
                      goto B60;
                  }
                  if ( add_to_string( &page[0], " directory " ) - slash[0] )
                  {
                    local = 0;
                    if ( 0 < 0 )
                    {
                      *ebp_84 = 0;
                      if ( mem_realloc( (void*)decoded.source, 0 ) == 0 )
                        break;
                      else
                      {
                        decoded.source = (unsigned char*)mem_realloc( (void*)decoded.source, 0 );
                        memset( local + decoded.source, 0, 0 - local );
                      }
                    }
                    if ( decoded.source )
                    {
                      memcpy( decoded.length + decoded.source, &slash[0], decoded.source - slash[0] );
                      decoded.source[ ebp_72 ] = 0;
                      decoded.length = ebp_72;
                    }
                    else
                      break;
                  }
                  decode_uri_string( &decoded );
                }
B60:                assert_failed = 0;
              }
            }
          }
          while ( add_to_string( &page[0], "&lt;a href=\"" ) && add_html_to_string( &page[0], location.source, location.length ) && add_html_to_string( &page[0], dirpath.source, decoded.source[1] - dirpath.source ) && add_to_string( &page[0], "\"&gt;" ) && add_html_to_string( &page[0], decoded.source, decoded.length ) && add_to_string( &page[0], "&lt;/a&gt;" ) && add_html_to_string( &page[0], &sep, 1 ) );
        }
      }
    }
  }
  else
  {
  }
  done_string( &page[0] );
  done_string( &dirpath );
  done_string( &decoded );
  done_string( &location );
}
#if 0
#endif
