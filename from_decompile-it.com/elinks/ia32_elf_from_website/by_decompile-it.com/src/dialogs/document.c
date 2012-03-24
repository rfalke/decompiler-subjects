#include "document.c.h"
void nowhere_box( struct terminal *term, unsigned char *title )
{
  if ( assert_failed == 0 )
  {
    assert_failed = term[0].next == 0;
    if ( !(_Bool)( term[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/document.c";
      errline = 39;
      elinks_internal( "assertion term failed!" );
      if ( assert_failed )
      {
        term = &term[0];
      }
    }
    if ( title[0] == 0 || title[0] == 0 )
      title[0] = "Info";
    info_box( &term[0], 0, &title[0], ALIGN_CENTER, "You are nowhere!" );
    return;
  }
  assert_failed = 0;
  return;
}
unsigned char *_( unsigned char *msg, struct terminal *term )
{
  if ( msg && msg )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
  }
  return &ebx;
}
void document_info_dialog( struct session *ses )
{
  int eax;
  int ecx;
  int edx;
  struct terminal *term = ses->tab->term;
  struct location *location = ses->history.current;
  struct document_view *doc_view;
  struct cache_entry *cached;
  struct string msg;
  if ( ses->history.current == 0 )
  {
    nowhere_box( &term[0], 0 );
    return;
  }
  doc_view = current_frame( &ses[0] );
  if ( init_string( &msg ) )
  {
    if ( 0 != 85 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "URL" );
    }
    add_to_string( &msg, gettext( "URL" ) );
    add_to_string( &msg, ": " );
    add_uri_to_string( &msg, location->vs.uri, URI_PUBLIC );
    add_char_to_string( &msg, 10 );
    if ( doc_view && doc_view->document->title )
    {
      if ( 0 != 84 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
          *ebp_68 = doc_view->document->title;
        }
        gettext( "Title" );
        *ebp_68 = ebp_68;
      }
      add_format_to_string( &msg, "%s: %s" );
    }
    add_char_to_string( &msg, 10 );
    cached = doc_view->document->cached;
    if ( doc_view->document->cached )
    {
      unsigned char *a;
      if ( 0 != 83 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Size" );
      }
      add_format_to_string( &msg, (int)( &(unsigned char*)(doc_view->document->cached->length & 0xFFFFFFFF) ) );
      if ( ( cached->bits_at_92/*.1_1of4*/ & 8 ) & 255 )
      {
        if ( 0 != 105 )
        {
          if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
            current_charset = get_terminal_codepage( &term[0] );
          }
          gettext( "incomplete" );
        }
        add_format_to_string( &msg, " (%s)" );
      }
      if ( 0 != 67 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
          *ebp_68 = get_cp_name( doc_view->document->cp );
        }
        gettext( "Codepage" );
        *ebp_68 = ebp_68;
      }
      add_format_to_string( &msg, "\n%s: %s" );
      if ( doc_view->document->cp_status == CP_STATUS_ASSUMED )
      {
      }
      else
      if ( doc_view->document->cp_status == CP_STATUS_IGNORED )
      {
      }
      else
      {
        if ( parse_header( cached->head, "Server", 0 ) )
        {
          if ( 0 != 83 )
          {
            if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
              a[0] = parse_header( cached->head, "Server", 0 );
            }
            a[0] = a[0];
            eax[0] = gettext( "Server" );
          }
          add_format_to_string( &msg, "\n%s: %s" );
          mem_free( &a[0] );
        }
        if ( cached->ssl_info )
        {
          if ( 0 != 83 )
          {
            if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
              *ebp_68 = cached->ssl_info;
            }
            gettext( "SSL Cipher" );
            *ebp_68 = ebp_68;
          }
          add_format_to_string( &msg, "\n%s: %s" );
        }
        if ( cached->encoding_info )
        {
          if ( 0 != 69 )
          {
            if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
              *ebp_68 = cached->encoding_info;
            }
            gettext( "Encoding" );
            *ebp_68 = ebp_68;
          }
          add_format_to_string( &msg, "\n%s: %s" );
        }
        if ( parse_header( cached->head, "Date", 0 ) )
        {
          if ( 0 != 68 )
          {
            if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
              a[0] = parse_header( cached->head, "Date", 0 );
            }
            a[0] = a[0];
            eax[0] = gettext( "Date" );
          }
          add_format_to_string( &msg, "\n%s: %s" );
          mem_free( &a[0] );
        }
        if ( cached->last_modified )
        {
          if ( 0 != 76 )
          {
            if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
              *ebp_68 = cached->last_modified;
            }
            gettext( "Last modified" );
            *ebp_68 = ebp_68;
          }
          add_format_to_string( &msg, "\n%s: %s" );
        }
      }
      add_format_to_string( &msg, " (%s)" );
    }
  {
    unsigned char *last_visit;
    struct global_history_item *historyitem;
    if ( 0 != 76 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Last visit time" );
    }
    add_format_to_string( &msg, "\n%s: " );
    if ( historyitem[0].next == 0 || ctime( historyitem->last_visit + 24 ) == 0 )
    {
      add_to_string( &msg, _( "Unknown", &term[0] ) );
    }
    else
    if ( assert_failed )
      assert_failed = 0;
    else
    {
      assert_failed = 0;
      location = msg.length + 24;
      cached = 0;
      doc_view = 0;
      if ( 0 < 0 )
      {
        if ( mem_realloc( (void*)msg.source, cached ) )
        {
          msg.source = (unsigned char*)mem_realloc( (void*)msg.source, cached );
          memset( doc_view + mem_realloc( (void*)msg.source, cached ), 0, cached - doc_view );
        }
      }
      if ( msg.source )
      {
        msg.source[ msg.length + 24 ] = 0;
        msg.length = location;
      }
    }
    cached = (struct cache_entry*)current_frame( &ses[0] );
    doc_view = &ses->tab->term->next;
    if ( cached )
    {
      add_char_to_string( &msg, 10 );
      if ( get_current_link_info( &ses, (int)( &cached->next ) ) )
      {
        if ( 0 != 76 )
        {
          if ( doc_view && current_charset != get_terminal_codepage( (int)( &doc_view->next ) ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( (int)( &doc_view->next ) ) ) );
            current_charset = get_terminal_codepage( (int)( &doc_view->next ) );
          }
          gettext( "Link" );
        }
        add_format_to_string( &msg, "\n%s: %s" );
        mem_free( (void*)get_current_link_info( &ses, (int)( &cached->next ) ) );
      }
      if ( get_current_link_title( (int)( &cached->next ) ) )
      {
        if ( 0 != 76 )
        {
          if ( doc_view && current_charset != get_terminal_codepage( (int)( &doc_view->next ) ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( (int)( &doc_view->next ) ) ) );
            current_charset = get_terminal_codepage( (int)( &doc_view->next ) );
          }
          gettext( "Link title" );
        }
        add_format_to_string( &msg, "\n%s: %s" );
        mem_free( (void*)get_current_link_title( (int)( &cached->next ) ) );
      }
      if ( get_current_link_in_view( (int)( &cached->next ) ) )
      {
        if ( *(int*)(get_current_link_in_view( (int)( &cached->next ) ) + 16) && init_string( ebp_40 ) )
        {
          add_string_uri_to_string( ebp_40, *(int*)(get_current_link_in_view( (int)( &cached->next ) ) + 16), URI_PUBLIC );
          decode_uri_string_for_display( ebp_40 );
          cached = ebp_40;
          if ( 0 != 76 )
          {
            if ( doc_view && current_charset != get_terminal_codepage( (int)( &doc_view->next ) ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( (int)( &doc_view->next ) ) ) );
              current_charset = get_terminal_codepage( (int)( &doc_view->next ) );
            }
            gettext( "Link image" );
          }
          add_format_to_string( &msg, "\n%s: %s" );
          done_string( ebp_40 );
        }
        if ( get_global_history_item( *(int*)(get_current_link_in_view( (int)( &cached->next ) ) + 8) ) )
        {
          if ( eax )
          {
            if ( 0 != 76 )
            {
              if ( doc_view && current_charset != get_terminal_codepage( (int)( &doc_view->next ) ) )
              {
                bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( (int)( &doc_view->next ) ) ) );
                current_charset = get_terminal_codepage( (int)( &doc_view->next ) );
                *ebp_68 = ebp_68;
              }
              gettext( "Link last visit time" );
              *ebp_68 = ebp_68;
            }
            add_format_to_string( &msg, "\n%s: %.24s" );
          }
          if ( *(char*)(*(int*)(esi + 16)) )
          {
            if ( 0 != 76 )
            {
              if ( doc_view && current_charset != get_terminal_codepage( (int)( &doc_view->next ) ) )
              {
                bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( (int)( &doc_view->next ) ) ) );
                current_charset = get_terminal_codepage( (int)( &doc_view->next ) );
                gettext( "Link title (from history)" );
                add_format_to_string( &msg, "\n%s: %s" );
                info_box( &term, 5, "Info", ALIGN_LEFT, msg->source );
                return;
              }
              else
                gettext( "Link title (from history)" );
                add_format_to_string( &msg, "\n%s: %s" );
            }
            else
              add_format_to_string( &msg, "\n%s: %s" );
          }
        }
      }
    }
  }
  }
  else
  {
    return;
  }
}
void cached_header_dialog( struct session *ses, struct cache_entry *cached )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *headers;
  int i, j;
  if ( cached && cached->head && cached->head[0] )
  {
    headers = (unsigned char*)mem_alloc( strlen( (char*)cached->head ) + 1 );
    if ( headers )
    {
      if ( cached->head[0] )
      {
        j = 0;
        i = 0;
        do
        {
          if ( i/*.1_1of4*/ != cached->head && 10 )
          {
            if ( cached->head[0] != 13 )
            {
              headers[ j ] = 42;
              j++;
            }
            i++;
            if ( i/*.1_1of4*/ )
              continue;
          }
          else
          {
            headers[ j ] = i/*.1_1of4*/;
            i++;
            j++;
          }
        }
        while ( cached->head[ i ] );
        headers[ j ] = 0;
        if ( j && *(char*)(headers + ( j - 1 )) == 10 )
        {
          do
          {
            *(char*)(( j + headers ) - 2) = 0;
            if ( j == 0 )
            {
              if ( headers[0] & 255 )
              {
                info_box( ses->tab->term, 5, "Header info", ALIGN_LEFT, headers );
                break;
              }
            }
            else
            {
              j--;
            }
          }
          while ( edx != 10 );
          headers[0] = headers;
        }
      }
      else
        headers[0] = 0;
      mem_free( (void*)headers );
    }
    else
    {
      return;
    }
  }
  headers = "No header info.";
  info_box( ses->tab->term, 5, "Header info", ALIGN_LEFT, headers );
  return;
}
void protocol_header_dialog( struct session *ses )
{
  if ( ses->history.current == 0 )
  {
    nowhere_box( ses->tab->term, "Header info" );
    return;
  }
  if ( ses->doc_view && ses->doc_view->document )
  {
    cached_header_dialog( &ses[0], ses->doc_view->document->cached );
  }
  return;
}
#if 0
#endif
