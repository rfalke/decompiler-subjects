#include "dump.c.h"
static int dump_pos;
static struct download dump_download;
static int dump_redir_count;
int dump_nocolor( struct document *document, struct dump_output *out )
{
  int ebp_40;
  int ebp_28;
  return -1;
}
int dump_256color( struct document *document, struct dump_output *out )
{
  int ecx;
  int ebp_52;
  if ( is_cp_utf8( document->options.cp ) )
  {
    if ( document->height >= 1 )
    {
      ebp_52 = 0;
      do
      {
        write_color_256( "38", 0, &out[0] );
        write_color_256( "48", 0, &out[0] );
        if ( document->data[ ebp_52 ].length >= 1 )
        {
          while ( 1 )
          {
            if ( document->data[ ebp_52 ].chars[ 0 ].data == -3 )
            {
            }
            else
            if ( ( document->data[ ebp_52 ].chars[ 0 ].screen_char == 0 || get_opt_( config_options, (unsigned char*)config_options ) == 0 ) && ( 0 == (unsigned char)( document->data[ ebp_52 ].chars[ 0 ].screen_char ) || get_opt_( config_options, (unsigned char*)config_options ) == 0 ) )
            {
              if ( document->data[ ebp_52 ].chars[ 0 ].screen_char < 0 && document->data[ ebp_52 ].chars[ 0 + 1 ].data > 175 && document->data[ ebp_52 ].chars[ 0 + 1 ].data <= 223 )
              {
              }
              while ( ebx )
              {
                if ( eax )
                {
                  break;
                }
              }
            }
            if ( document->data[ ebp_52 ].chars <= 0 + 1 + 1 )
              goto B64;
            else
            {
            }
          }
        }
        else
        {
        }
B64:        if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) > 0 )
        {
          out = &out[0];
          do
          {
            if ( write_char( 32, &out[0] ) )
              continue;
          }
          while ( 0 + 1 < *(int*)(get_opt_( config_options, (unsigned char*)config_options )) );
        }
        if ( write_char( 10, &out[0] ) )
          continue;
        ebp_52++;
      }
      while ( ebp_52 < document->height );
    }
  }
  else
  {
    if ( document->height >= 1 )
    {
      ebp_52 = 0;
      do
      {
        write_color_256( "38", 0, &out[0] );
        write_color_256( "48", 0, &out[0] );
        if ( document->data[ ebp_52 ].length >= 1 )
        {
          while ( ( document->data[ ebp_52 ].chars[ 0 ].screen_char == 0 || write_color_256( "38", -1, &out[0] ) == 0 ) && ( 0 == (unsigned char)( document->data[ ebp_52 ].chars[ 0 ].screen_char ) || write_char( 32, &out[0] ) == 0 ) )
          {
            if ( eax != 127 && eax < 31 )
            {
              if ( eax )
              {
              }
            }
            else
            {
              if ( write_char( 32, &out[0] ) )
                continue;
            }
            if ( document->data[ ebp_52 ].chars <= 0 + 1 + 1 )
              goto B44;
            else
            {
            }
          }
        }
        else
        {
        }
B44:        if ( ebx < ebp_56 )
        {
          out = &out[0];
          do
          {
            if ( write_char( 32, &out[0] ) )
              continue;
          }
          while ( ebx + 1 < edi );
        }
        if ( write_char( 10, &out[0] ) )
          continue;
        ebp_52++;
      }
      while ( ebp_52 < document->height );
    }
  }
  return -1;
}
struct dump_output *dump_output_alloc( int fd, struct string *string )
{
  struct dump_output *out;
  if ( assert_failed == 0 )
  {
    assert_failed = ( string[0].source == 0 ) ^ ( fd != -1 );
    if ( ( string[0].source == 0 ) ^ ( fd != -1 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/dump/dump.c";
      errline = 94;
      elinks_internal( "assertion (fd == -1) ^ (string == NULL) failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( out[0].bufpos )
    {
      *(int*)(mem_alloc( 65548 ) + 8) = fd;
      out->string = &string[0];
      out = 0;
      return &out[0];
    }
    return 0;
  }
B2:  assert_failed = 0;
  out[0].bufpos = 0;
  return 0;
}
int dump_output_flush( struct dump_output *out )
{
  int ecx;
  int edx;
  if ( out->string )
  {
    if ( assert_failed == 0 )
    {
      if ( (int)out->bufpos >= 0 )
      {
        assert_failed = 0;
        if ( 1 )
        {
          out = 0;
          return -1;
        }
      }
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
        errline = 255;
        elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
        if ( assert_failed )
          goto B4;
      }
      *(int*)(edi + *(int*)(esi + 4) + 256) = out->string->length + out->bufpos + 256;
      if ( ( ( out->string->length + 255 ) & -256 ) < 0 )
      {
        *ebp_36 = 0;
        *ebp_32 = out->bufpos + out->string->length;
        if ( mem_realloc( (void*)out->string->source, 0 ) )
        {
          out->string->source = (unsigned char*)mem_realloc( (void*)out->string->source, 0 );
          memset( ( ( out->string->length + 255 ) & -256 ) + out->string, 0, 0 - ( ( out->string->length + 255 ) & -256 ) );
        }
      }
      if ( out->string->source )
      {
        memcpy( out->string->source + out->string->length, &out->buf[0], out->bufpos );
        out->string->length += (int)out->bufpos;
      }
    }
B4:    assert_failed = 0;
    return -1;
  }
  else
  {
    if ( out->bufpos == hard_write( out->fd, &out->buf[0], out ) )
      continue;
  }
  return -1;
}
int write_char( unsigned char c, struct dump_output *out )
{
  int edx;
  if ( out->bufpos > 65535 )
  {
    if ( dump_output_flush( &out[0] ) == 0 )
    {
    }
    else
    {
      return -1;
    }
  }
  *(char*)(out[0].bufpos + *ebp_12 + 12) = c;
  out = *ebp_12 + 1;
  return -1;
}
int write_color_16( unsigned char color, struct dump_output *out )
{
  unsigned char bufor[11];
  unsigned char *data;
  int background;
  bufor[4] = 876294195;
  bufor[5] += (unsigned char)( color & 7 );
  background = ( color >> 4 ) & 7;
  bufor[0] = 993024795;
  bufor[8] = 27952;
  bufor[10] = 0;
  if ( out[0].bufpos & 7 )
    bufor[8] += background/*.1_1of4*/;
  else
  {
    bufor[6] = 109;
    bufor[7] = 0;
  }
  data[0] = bufor[0];
  while ( 1 )
  {
    return 0;
  }
}
int write_color_256( unsigned char *str, unsigned char color, struct dump_output *out )
{
  int edx;
  unsigned char bufor[16];
  unsigned char *data;
  color = color;
  __snprintf_chk( bufor, 16, 1, 16, "\033[%s;5;%dm", &str[0], color );
  while ( 1 )
  {
    if ( 0 ^ 0 )
    {
      __stack_chk_fail(  );
    }
    break;
  }
}
int dump_references( struct document *document, int fd, unsigned char *buf )
{
  if ( document->nlinks && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
  {
    if ( hard_write( fd, "\nReferences\n\n   Visible links\n", 30 ) != 30 )
    {
      return -1;
    }
    if ( document->nlinks >= 1 )
    {
      do
      {
        if ( document->links[1].where )
        {
          if ( ( document->options.bits_at_68/*.2_2of4*/ & 16 ) & 255 )
          {
            if ( document->links[1].title && document->links[1] )
              __snprintf_chk( ebp_28, 0x10000, 1, -1, "%4d. %s\n\t%s\n", esi, &edx, &eax );
              if ( strlen( &buf[0] ) != hard_write( fd, &buf[0], strlen( &buf[0] ) ) )
              {
                break;
              }
            else
            {
            }
          }
          else
          if ( document->links[1].title && document->links[1] )
          {
          }
          else
            __snprintf_chk( &buf[0], 0x10000, 1, -1, "   . %s\n", (char*)document->links[1].where );
          __snprintf_chk( &buf[0], 0x10000, 1, -1 );
        }
      {
        struct link *link;
        unsigned char *where;
      }
      }
      while ( 1 + 1 < document->nlinks );
    }
  }
{
  int x;
  return 0;
}
}
int dump_to_file( struct document *document, int fd )
{
  int eax;
  int ecx;
  int edx;
  struct dump_output *out = dump_output_alloc( fd, 0 );
  int error = -1;
  if ( error )
  {
    if ( error == 0 )
      dump_references( &document[0], fd, &out->buf[0] );
    mem_free( &out[0].bufpos );
    error = error;
    return error;
  }
  else
  {
    return error;
  }
}
void dump_print( unsigned char *option_elinks, struct string *url )
{
  int ecx;
  unsigned char *str;
  str[0] = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) && init_string( ebp_32 ) )
  {
    while ( 1 )
    {
      while ( str[0] & 255 )
      {
        if ( assert_failed == 0 )
        {
          if ( 0 + 1 >= 0 )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
            errline = 255;
            elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
            if ( assert_failed )
              goto B16;
          }
          if ( 0 + 1 )
          {
            if ( 0 < 0 )
            {
              if ( mem_realloc( ebp_32, 0 ) )
              {
                memset( 0 + mem_realloc( ebp_32, 0 ), 0, 0 - 0 );
              }
              else
              {
                if ( str[0] == '\\' )
                {
                  str[0] = str[0] + 1;
                  if ( str[1] == 'n' )
                  {
                  }
                  else
                  if ( str[1] != 't' )
                  {
                    if ( str[1] == 'f' )
                    {
                    }
                    else
                    if ( str[1] & 255 )
                    {
                    }
                    else
                      break;
                  }
                  else
                  {
                  }
                  str[0] = str[1];
                  add_char_to_string( ebp_32, 12 );
                }
                else
                {
                  if ( str[0] == '%' )
                  {
                    str[0] = str[0] + 1;
                    if ( str[1] == 'u' )
                    {
                      if ( url[0].source )
                      {
                        add_string_to_string( ebp_32, &url[0] );
                      }
                      else
                      {
                        str[0] = str[1];
                        break;
                        while ( 1 )
                        {
                          while ( str[0] & 255 )
                          {
                          }
                          realstr[0] = str[0];
                          if ( ebp_32 )
                          {
                            __printf_chk( 1, "%s", &realstr[0] );
                            fflush( stdout );
                            mem_free( &realstr[0] );
                            break;
                          }
                        }
                      }
                    }
                    if ( str[0] & 255 )
                    {
                      str[0] = str[1];
                      break;
                      while ( 1 )
                      {
                        while ( str[0] & 255 )
                        {
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( ebp_32 )
            {
              memcpy( ebp_28 + eax, &ebx, edi );
            }
          }
        }
B16:        assert_failed = 0;
        str[0] = str[0];
      }
    }
  }
  return;
}
void dump_loading_callback( struct download *download, void *p )
{
  int eax;
  int ecx;
  int edx;
  int ebp_300;
  int ebp_288;
  struct cache_entry *cached = download->cached;
  int fd = get_output_handle(  );
  if ( fd != -1 )
  {
    if ( cached[0] && cached->redirect )
    {
      dump_redir_count++;
      if ( dump_redir_count <= 9 )
      {
        struct uri *uri = cached->redirect;
        cancel_download( download, 0 );
        load_uri( &uri[0], cached->uri, download, PRI_MAIN, CACHE_MODE_ALWAYS, (long long)-1 );
        return;
      }
    }
    if ( download->state.basic > 7 )
    {
      if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
      {
        if ( cached[0].next )
        {
          ebp_288 = cached->frag.next;
          while ( ebp_288 != cached->frag.next )
          {
            dump_pos = dump_pos;
            do
            {
              *(int*)(edx - *(int*)(eax + 8)) = dump_pos - cached->frag.next[0][2];
              if ( dump_pos - cached->frag.next[2] >= 0 )
              {
                if ( *(int*)(eax + 20) <= ( ecx >> 31 ) )
                {
                  if ( ccdep2 <= ccdep1 )
                  {
                    if ( edi <= ecx )
                    {
                    }
                  }
                }
                if ( edi != eax )
                {
                  detach_connection( download, dump_pos );
                  if ( ebp_308 < 0 )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/dump/dump.c";
                    errline = 401;
                    elinks_error( gettext( "Can't write to stdout: %s" ) );
                    program.retval = RET_ERROR;
                    program.terminate = 1;
                    dump_next( 0 );
                    return;
                  }
                  else
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/dump/dump.c";
                    errline = 404;
                    elinks_error( gettext( "Can't write to stdout." ) );
                  }
                }
                else
                {
                  dump_pos += edi;
                  detach_connection( download, edi + dump_pos );
                  break;
                  while ( ebp_288 != cached->frag.next )
                  {
                    dump_pos = dump_pos;
                    do
                    {
                      *(int*)(edx - *(int*)(eax + 8)) = dump_pos - cached->frag.next[0][2];
                    }
                    while ( cached->frag.next[0] != ebp_288 );
                    break;
                  }
                  break;
                }
              }
            }
            while ( cached->frag.next[0] != ebp_288 );
            break;
          }
        }
        if ( download->state.basic >= 0 )
        {
          return;
        }
      }
      else
      {
        if ( download->state.basic <= 7 )
        {
          if ( cached[0].next )
          {
            memset( ebp_132, 0, 60 );
            init_document_options( ebp_268 );
            init_vs( ebp_72, cached->uri, -1, ebp_199 & 191 );
            render_document( ebp_72, ebp_132, ebp_268 );
            if ( dump_output_alloc( fd, 0 ) )
            {
              if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) != 2 )
              {
                if ( ebp_268 < 2 )
                {
                  if ( *(int*)(dump_output_alloc( fd, 0 )) != 3 )
                    goto B55;
                }
                else
                if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) + 1 <= 1 )
                {
                  dump_nocolor( ebp_112, dump_output_alloc( fd, 0 ) );
                  if ( dump_nocolor( ebp_112, dump_output_alloc( fd, 0 ) ) == 0 )
                    dump_references( ebp_112, fd, dump_output_alloc( fd, 0 ) + 12 );
                    mem_free( (void*)dump_output_alloc( fd, 0 ) );
                }
B55:                if ( is_cp_utf8( *(int*)(ebp_112 + 16) ) )
                {
                  if ( *(int*)(ebp_112 + 256) >= 1 )
                  {
                    ebp_300 = 0;
                    do
                    {
                      write_color_16( 0, dump_output_alloc( fd, 0 ) );
                      if ( *(int*)(*(int*)(ebp_112 + 208) + ( ebp_300 << 3 )) >= 1 )
                      {
                        ebp_288 = 0;
                        while ( 1 )
                        {
                          if ( *(int*)(*(int*)(( ebp_300 << 3 ) + *(int*)(ebp_112 + 208)) + ( ebp_288 << 3 )) == -3 )
                          {
                          }
                          else
                          if ( 0 == (unsigned char)( *(char*)(*(int*)(ebp_296 + *(int*)(ebp_112 + 208)) + ( ebp_288 << 3 ) + 5) ) || 0 == 0 )
                          {
                            while ( ebx )
                            {
                              if ( eax )
                              {
                              }
                              else
                              {
                              }
                            }
                          }
                          ebp_288++;
                          if ( *(int*)(( ebp_300 << 3 ) + *(int*)(ebp_112 + 208) + 4) <= ebp_288 )
                            goto B91;
                          else
                          {
                          }
                        }
                      }
                      else
                        ebp_288 = 0;
B91:                      if ( ebp_288 < ebp_304 )
                      {
                        do
                        {
                          if ( write_char( 32, dump_output_alloc( fd, 0 ) ) )
                            continue;
                          else
                        }
                        while ( ebx + 1 < ebp_304 );
                      }
                      if ( write_char( 10, dump_output_alloc( fd, 0 ) ) )
                        continue;
                      else
                      {
                        ebp_300++;
                      }
                    }
                    while ( ebp_300 < *(int*)(ebp_112 + 256) );
                  }
                }
                else
                {
                  if ( *(int*)(ebp_112 + 256) >= 1 )
                  {
                    ebp_300 = 0;
                    do
                    {
                      write_color_16( 0 );
                      if ( *(int*)(*(int*)(ebp_112 + 208) + ( ebp_300 << 3 )) >= 1 )
                      {
                        edi = 0;
                        for ( ; 0 == *(char*)(*(int*)(( ebp_300 << 3 ) + *(int*)(ebp_112 + 208)) + ( ( 0 + 1 ) << 3 ) + 5) || 0 == 0; edi = 0 )
                        {
                          if ( write_char(  ) )
                            break;
                          else
                          if ( *(int*)(( ebp_300 << 3 ) + *(int*)(ebp_112 + 208) + 4) <= 0 + 1 + 1 )
                            goto B117;
                          else
                          {
                            //edi = 0;
                          }
                        }
                      }
                      else
                      {
                      }
B117:                      if ( ebx < ebp_304 )
                      {
                        do
                        {
                          if ( write_char( 32 ) )
                          {
                          }
                          else
                        }
                        while ( ebx + 1 < esi );
                      }
                      if ( write_char( 10 ) )
                        continue;
                      else
                      {
                        ebp_300++;
                      }
                    }
                    while ( ebp_300 < *(int*)(ebp_112 + 256) );
                  }
                }
                if ( dump_output_flush(  ) == 0 )
                  dump_references( ebp_112, fd, dump_output_alloc( fd, 0 ) + 12 );
              }
              *ebp_112 = ebp_112;
              dump_256color( ebp_112, dump_output_alloc( fd, 0 ) );
            }
            detach_formatted( ebp_132 );
            destroy_vs( ebp_72, 1 );
            (download->state) = download->state;
          }
        }
        else
        {
          return;
        }
      }
      if ( eax != -100000 )
      {
        usrerror( get_state_message( download->state, &download->state.syserr ) );
      }
      else
      {
        program.terminate = 1;
        dump_next( 0 );
        return;
      }
    }
    else
    {
      return;
    }
  }
  else
  {
    return;
  }
}
void dump_next( struct list_head_elinks *url_list )
{
  int edx;
  static struct list_head_elinks todo_list = { &todo_list, &todo_list };
  static struct list_head_elinks done_list = { &done_list, &done_list };
  if ( url_list )
  {
    for ( ; url_list->next != url_list[0].next; url_list->next[1] = url_list->next )
    {
      url_list->next[1] = url_list->prev;
      url_list->prev[0] = url_list->next;
      url_list->next = *(int*)(todo_list.prev);
      url_list->prev = todo_list.prev;
      *(int*)(todo_list.prev) = url_list->next;
      //url_list->next[1] = url_list->next;
    }
  }
  if ( todo_list.next != todo_list.next )
  {
    static int first = 1;
    program.terminate = 0;
    todo_list.next[1] = todo_list.prev;
    todo_list.prev[0] = todo_list.next;
    todo_list.prev = done_list.next;
    done_list.next = todo_list.next = done_list.next;
    todo_list.next[1] = todo_list.next;
    if ( first == 0 )
      dump_print( "document.dump.separator", 0 );
    else
      first = 0;
    dump_print( "document.dump.header", done_list.next + 4 + 8 );
    if ( get_cwd(  ) )
      mem_free( (void*)get_cwd(  ) );
    if ( !ebx || eax )
    {
      usrerror( gettext( "URL protocol not supported (%s)." ) );
      dump_next( 0 );
      program.terminate = 1;
      program.retval = RET_SYNTAX;
      if ( ebx == 0 )
      {
      }
    }
    else
    {
      dump_download.callback = &dump_loading_callback;
      dump_pos = 0;
      if ( eax )
      {
        dump_next( 0 );
        program.terminate = 1;
        program.retval = RET_SYNTAX;
      }
    }
    done_uri( &ebx );
  }
  else
  {
    free_string_list( &done_list );
    program.terminate = 1;
    return;
  }
}
struct string *add_document_to_string( struct string *string, struct document *document )
{
  int eax;
  int edx;
  struct dump_output *out;
  int error;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( document[0].next == 0 ) | ( string[0].source == 0 ) ) & 1;
    if ( ( ( document[0].next == 0 ) | ( string[0].source == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/dump/dump.c";
      errline = 610;
      elinks_internal( "assertion string && document failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( dump_output_alloc( -1, &string[0] ) )
    {
      error = dump_nocolor( &document[0], dump_output_alloc( -1, &string[0] ) );
      mem_free( &out[0].bufpos );
      if ( error == 0 )
      {
        return &string[0];
      }
    }
    string[0].source = 0;
    return &string[0];
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
#if 0
#endif
