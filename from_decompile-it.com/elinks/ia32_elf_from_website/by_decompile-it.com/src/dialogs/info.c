#include "info.c.h"
void menu_about( struct terminal *term, void *xxx, void *xxxx )
{
  info_box( term, MSGBOX_FREE_TEXT, "About", ALIGN_CENTER );
  return;
}
void push_toggle_keys_display_button( void *data )
{
  menu_keys( &((int*)data)[0], ((int*)data)[1] == 0, 0 );
  return;
}
void menu_keys( struct terminal *term, void *d_, void *xxx )
{
  int edx;
  action_id_T action_ids[119] = { };
  struct string keys;
  struct keys_toggle_info *info;
  action_ids[0] = 48;
  action_ids[1] = 76;
  action_ids[2] = 60;
  action_ids[3] = 61;
  action_ids[4] = 87;
  action_ids[5] = 90;
  action_ids[6] = 88;
  action_ids[7] = 89;
  action_ids[8] = 32;
  action_ids[9] = 26;
  action_ids[10] = 27;
  action_ids[11] = 14;
  action_ids[12] = 30;
  action_ids[13] = 91;
  action_ids[14] = 92;
  action_ids[15] = 18;
  action_ids[16] = 19;
  action_ids[17] = 41;
  action_ids[18] = 37;
  action_ids[19] = 113;
  info = (struct keys_toggle_info*)mem_calloc( 1, 8 );
  if ( info )
  {
    if ( init_string( &keys ) == 0 )
    {
      mem_free( (void*)info );
      return;
    }
    info[0].term = term;
    info->toggle = ((int*)d_)[0];
    if ( ((int*)d_)[0] )
    {
      d_ = &((int*)d_)[0];
    {
      do
      {
        action_id_T action_id;
        enum keymap_id  keymap_id;
        action_id++;
        *(int*)(( action_ids[0] + ( ( action_id + 1 ) << 2 ) ) - 4) = action_id + 1;
      }
      while ( action_id + 1 != 118 );
      keymap_id = KEYMAP_MAIN;
      while ( 1 )
      {
        add_actions_to_string( &keys, action_ids, keymap_id, term );
        keymap_id = keymap_id + 1;
        if ( keymap_id + 1 != 3 )
        {
          add_to_string( &keys, "\n\n" );
        }
        if ( assert_failed == 0 )
          assert_failed = 0;
        if ( keymap_id == 0 )
          action_ids[30] = 0;
        else
        if ( keymap_id == KEYMAP_EDIT )
        {
          action_ids[21] = 0;
          if ( 0 + 1 + 1 == 3 )
            goto B22;
          else
          {
            keymap_id = ebp_528;
          }
        }
        if ( 0 + 1 + 1 == 3 )
          goto B22;
        else
        {
          keymap_id = ebp_528;
        }
      }
    }
    }
    else
      add_actions_to_string( &keys, action_ids, KEYMAP_MAIN, term );
B22:    msg_box( term, getml( (void*)info ), 5, "Keys", ALIGN_LEFT, keys.source, (void*)info, 2 );
  }
  return;
}
void menu_copying( struct terminal *term, void *xxx, void *xxxx )
{
  info_box( term, MSGBOX_FREE_TEXT, "Copying", ALIGN_CENTER );
  return;
}
unsigned char *get_resource_info( struct terminal *term, void *data )
{
  int eax;
  int edx;
  struct string info;
  long val;
  unsigned long long bigval;
  if ( init_string( &info ) )
  {
    if ( 0 != 82 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Resources" );
    }
    add_to_string( &info, gettext( "Resources" ) );
    add_to_string( &info, ": " );
    val = get_file_handles_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld handle", "%ld handles", val );
    }
    add_format_to_string( &info, ngettext( "%ld handle", "%ld handles", val ) );
    add_to_string( &info, ", " );
    val = get_timers_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld timer", "%ld timers", val );
    }
    add_format_to_string( &info, ngettext( "%ld timer", "%ld timers", val ) );
    add_to_string( &info, ".\n" );
    if ( 0 != 67 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Connections" );
    }
    add_to_string( &info, gettext( "Connections" ) );
    add_to_string( &info, ": " );
    val = get_connections_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld connection", "%ld connections", val );
    }
    add_format_to_string( &info, ngettext( "%ld connection", "%ld connections", val ) );
    add_to_string( &info, ", " );
    val = get_connections_connecting_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld connecting", "%ld connecting", val );
    }
    add_format_to_string( &info, ngettext( "%ld connecting", "%ld connecting", val ) );
    add_to_string( &info, ", " );
    val = get_connections_transfering_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld transferring", "%ld transferring", val );
    }
    add_format_to_string( &info, ngettext( "%ld transferring", "%ld transferring", val ) );
    add_to_string( &info, ", " );
    val = get_keepalive_connections_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld keepalive", "%ld keepalive", val );
    }
    add_format_to_string( &info, ngettext( "%ld keepalive", "%ld keepalive", val ) );
    add_to_string( &info, ".\n" );
    if ( 0 != 77 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Memory cache" );
    }
    add_to_string( &info, gettext( "Memory cache" ) );
    add_to_string( &info, ": " );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        *ebp_44 = get_cache_size(  );
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld byte", "%ld bytes", get_cache_size(  ) );
      *ebp_44 = ebp_44;
    }
    add_format_to_string( &bigval/*.9_12of8*/, ngettext( "%ld byte", "%ld bytes", get_cache_size(  ) ) );
    add_to_string( &info, ", " );
    val = get_cache_entry_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld file", "%ld files", val );
    }
    add_format_to_string( &info, ngettext( "%ld file", "%ld files", val ) );
    add_to_string( &info, ", " );
    val = get_cache_entry_used_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        *ebp_44 = val;
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld in use", "%ld in use", val );
      val = val;
    }
    add_format_to_string( &info, ngettext( "%ld in use", "%ld in use", val ) );
    add_to_string( &info, ", " );
    val = get_cache_entry_loading_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        *ebp_44 = val;
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld loading", "%ld loading", val );
      val = val;
    }
    add_format_to_string( &info, ngettext( "%ld loading", "%ld loading", val ) );
    add_to_string( &info, ".\n" );
    if ( 0 != 68 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Document cache" );
    }
    add_to_string( &info, gettext( "Document cache" ) );
    add_to_string( &info, ": " );
    val = get_format_cache_size(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        *ebp_44 = val;
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld formatted", "%ld formatted", val );
      val = val;
    }
    add_format_to_string( &info, ngettext( "%ld formatted", "%ld formatted", val ) );
    add_to_string( &info, ", " );
    val = get_format_cache_used_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        *ebp_44 = get_format_cache_used_count(  );
        current_charset = get_terminal_codepage( &term[0] );
      }
      val = val;
    }
    add_format_to_string( &info, ngettext( "%ld in use", "%ld in use", val ) );
    add_to_string( &info, ", " );
    val = get_format_cache_refresh_count(  );
    if ( 0 != 37 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld refreshing", "%ld refreshing", val );
    }
    add_format_to_string( &info, ngettext( "%ld refreshing", "%ld refreshing", val ) );
    add_to_string( &info, ".\n" );
    if ( 0 != 73 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Interlinking" );
    }
    add_to_string( &info, gettext( "Interlinking" ) );
    add_to_string( &info, ": " );
    if ( ( term->bits_at_56/*.1_1of4*/ & 1 ) & 255 )
    {
      if ( 0 != 109 )
      {
        if ( current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "master terminal" );
      }
    }
    else
    if ( eax != 0 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "slave terminal" );
    }
    val = 0;
    add_to_string( &info, gettext( "master terminal" ) );
    add_to_string( &info, ", " );
    if ( terminals.next != terminals.next )
    {
      term = &term[0];
      do
      {
        val++;
      }
      while ( terminals.next != terminals.next );
    }
    if ( 0 != 37 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        *ebp_44 = val;
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld terminal", "%ld terminals", val );
    }
    val = 0;
    add_format_to_string( &ebx, (unsigned char*)eax );
    add_to_string( &info, ", " );
    if ( sessions.next != sessions.next )
    {
      term = &term[0];
      do
      {
        val++;
      }
      while ( sessions.next != sessions.next );
    }
    if ( 0 != 37 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        *ebp_44 = val;
        current_charset = get_terminal_codepage( &term[0] );
      }
      ngettext( "%ld session", "%ld sessions", val );
    }
    add_format_to_string( &ebx, (unsigned char*)eax );
    add_char_to_string( &info, 46 );
    return info.source;
  }
  else
  {
  }
}
void resource_info( struct terminal *term )
{
  refreshed_msg_box( term, 0, "Resources", ALIGN_LEFT, &get_resource_info, 0 );
  return;
}
#if 0
#endif
