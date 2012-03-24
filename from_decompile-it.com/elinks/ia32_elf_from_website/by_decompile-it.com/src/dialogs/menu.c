#include "menu.c.h"
static struct menu_item no_hist_menu[2] = { { "No history", 0, 0, 0, 0, 128, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
static struct menu_item file_menu11[7] = { { "Open new ~tab", 0, 71, 0, 0, 0, 0, 0 }
, { "Open new tab in backgroun~d", 0, 72, 0, 0, 0, 0, 0 }
, { "~Go to URL", 0, 26, 0, 0, 0, 0, 0 }
, { "Go ~back", 0, 32, 0, 0, 0, 0, 0 }
, { "Go ~forward", 0, 33, 0, 0, 0, 0, 0 }
, { "~History", 0, 0, &history_menu, 0, 32, 0, 0 }
, { "~Unhistory", 0, 0, &unhistory_menu, 0, 32, 0, 0 }
 };
static struct menu_item file_menu21[5] = { { "", 0, 0, 0, 0, 128, 0, 0 }
, { "~Save as", 0, 83, 0, 0, 0, 0, 0 }
, { "Save UR~L as", 0, 86, 0, 0, 0, 0, 0 }
, { "Sa~ve formatted document", 0, 84, 0, 0, 0, 0, 0 }
, { "Bookm~ark document", 0, 3, 0, 0, 0, 0, 0 }
 };
static struct menu_item file_menu22[5] = { { "", 0, 0, 0, 0, 128, 0, 0 }
, { "~Kill background connections", 0, 36, 0, 0, 0, 0, 0 }
, { "Flush all ~caches", 0, 10, 0, 0, 0, 0, 0 }
, { "Resource ~info", 0, 82, 0, 0, 0, 0, 0 }
, { "", 0, 0, 0, 0, 128, 0, 0 }
 };
static struct menu_item file_menu3[3] = { { "", 0, 0, 0, 0, 128, 0, 0 }
, { "E~xit", 0, 76, 0, 0, 0, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
static struct menu_item view_menu[22] = { { "~Search", 0, 91, 0, 0, 0, 0, 0 }
, { "Search ~backward", 0, 92, 0, 0, 0, 0, 0 }
, { "Find ~next", 0, 18, 0, 0, 0, 0, 0 }
, { "Find ~previous", 0, 19, 0, 0, 0, 0, 0 }
, { "T~ypeahead search", 0, 93, 0, 0, 0, 0, 0 }
, { "", 0, 0, 0, 0, 128, 0, 0 }
, { "Toggle ~HTML/plain", 0, 113, 0, 0, 0, 0, 0 }
, { "Toggle i~mages", 0, 110, 0, 0, 0, 0, 0 }
, { "Toggle ~link numbering", 0, 115, 0, 0, 0, 0, 0 }
, { "Toggle ~document colors", 0, 112, 0, 0, 0, 0, 0 }
, { "~Wrap text on/off", 0, 117, 0, 0, 0, 0, 0 }
, { "", 0, 0, 0, 0, 128, 0, 0 }
, { "Document ~info", 0, 14, 0, 0, 0, 0, 0 }
, { "H~eader info", 0, 30, 0, 0, 0, 0, 0 }
, { "Rel~oad document", 0, 79, 0, 0, 0, 0, 0 }
, { "~Rerender document", 0, 80, 0, 0, 0, 0, 0 }
, { "Frame at ~full-screen", 0, 23, 0, 0, 0, 0, 0 }
, { "", 0, 0, 0, 0, 128, 0, 0 }
, { "Nex~t tab", 0, 106, 0, 0, 0, 0, 0 }
, { "Pre~v tab", 0, 107, 0, 0, 0, 0, 0 }
, { "~Close tab", 0, 100, 0, 0, 0, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
static struct menu_item help_menu[11] = { { "~ELinks homepage", 0, 0, &menu_url_shortcut, "http://elinks.cz/", 0, 0, 0 }
, { "~Documentation", 0, 0, &menu_url_shortcut, "http://elinks.cz/documentation/", 0, 0, 0 }
, { "~Keys", 0, 0, &menu_keys, 0, 0, 0, 0 }
, { "LED ~indicators", 0, 0, &menu_leds_info, 0, 0, 0, 0 }
, { "", 0, 0, 0, 0, 128, 0, 0 }
, { "~Bugs information", 0, 0, &menu_url_shortcut, "http://bugs.debian.org/src:elinks", 0, 0, 0 }
, { "", 0, 0, 0, 0, 128, 0, 0 }
, { "~Copying", 0, 0, &menu_copying, 0, 0, 0, 0 }
, { "Autho~rs", 0, 0, &menu_url_shortcut, "http://elinks.cz/authors.html", 0, 0, 0 }
, { "~About", 0, 0, &menu_about, 0, 0, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
static struct menu_item ext_menu[4] = { { "~Add", 0, 0, &menu_add_ext, 0, 0, 0, 0 }
, { "~Modify", 0, 0, &menu_list_ext, &menu_add_ext, 32, 0, 0 }
, { "~Delete", 0, 0, &menu_list_ext, &menu_del_ext, 32, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
static struct menu_item setup_menu[9] = { { "~Language", 0, 0, &menu_language_list, 0, 32, 0, 0 }
, { "C~haracter set", 0, 0, &charset_list, 0, 32, 0, 0 }
, { "~Terminal options", 0, 97, 0, 0, 0, 0, 0 }
, { "File ~extensions", 0, 0, &do_submenu, ext_menu, 32, 0, 0 }
, { "", 0, 0, 0, 0, 128, 0, 0 }
, { "~Options manager", 0, 75, 0, 0, 0, 0, 0 }
, { "~Keybinding manager", 0, 35, 0, 0, 0, 0, 0 }
, { "~Save options", 0, 85, 0, 0, 0, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
static struct menu_item setup_menu_anon[4] = { { "~Language", 0, 0, &menu_language_list, 0, 32, 0, 0 }
, { "C~haracter set", 0, 0, &charset_list, 0, 32, 0, 0 }
, { "~Terminal options", 0, 97, 0, 0, 0, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
static struct menu_item tools_menu[8] = { { "Global ~history", 0, 31, 0, 0, 0, 0, 0 }
, { "~Bookmarks", 0, 8, 0, 0, 0, 0, 0 }
, { "~Cache", 0, 9, 0, 0, 0, 0, 0 }
, { "~Downloads", 0, 15, 0, 0, 0, 0, 0 }
, { "Coo~kies", 0, 11, 0, 0, 0, 0, 0 }
, { "~Form history", 0, 21, 0, 0, 0, 0, 0 }
, { "~Authentication", 0, 6, 0, 0, 0, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
static struct menu_item main_menu[7] = { { "~File", 0, 0, &do_file_menu, 0, 33, 0, 0 }
, { "~View", 0, 0, &do_submenu, view_menu, 33, 0, 0 }
, { "~Link", 0, 0, &link_menu, 0, 33, 0, 0 }
, { "~Tools", 0, 0, &do_submenu, tools_menu, 33, 0, 0 }
, { "~Setup", 0, 0, &do_setup_menu, 0, 33, 0, 0 }
, { "~Help", 0, 0, &do_submenu, help_menu, 33, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
static struct input_history file_history = { { &file_history, &file_history }
, 0, 0 };
static struct menu_item empty_directory_menu[2] = { { "Empty directory", 0, 0, 0, 0, 128, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
void menu_url_shortcut( struct terminal *term, void *url_, void *ses_ )
{
  struct uri *uri;
  if ( get_uri( (unsigned char*)url_, 0 ) )
  {
    goto_uri( &((int*)ses_)[0], get_uri( (unsigned char*)url_, 0 ) );
    term = &uri[0].string[0];
  }
  return;
}
void save_url( struct session *ses, unsigned char *url )
{
  int eax;
  struct document_view *doc_view;
  struct uri *uri;
  if ( assert_failed == 0 )
  {
    if ( ses[0] && ses->tab && url[0] && ses->tab->term )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/menu.c";
      errline = 70;
      elinks_internal( "assertion ses && ses-&gt;tab && ses-&gt;tab-&gt;term && url failed!" );
      if ( assert_failed == 0 )
        goto B9;
    }
B9:    if ( url[0] )
    {
      if ( get_translated_uri( &url[0], &ses->tab->term->cwd[0] ) )
      {
        if ( ses->download_uri )
          done_uri( ses->download_uri );
        ses->download_uri = &uri[0];
        current_frame( &ses[0] );
        if ( assert_failed == 0 )
        {
          if ( doc_view[0] && doc_view->document && doc_view->document->uri )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/menu.c";
            errline = 86;
            elinks_internal( "assertion doc_view && doc_view-&gt;document && doc_view-&gt;document-&gt;uri failed!" );
            if ( assert_failed )
              goto B2;
          }
          set_session_referrer( &ses[0], *(int*)(*(int*)(current_frame( &ses[0] ) + 20) + 184) );
          query_file( &ses[0], ses->download_uri, (void*)ses[0].next, &start_download, 0, 1 );
          return;
        }
      }
      else
      {
        if ( assert_failed == 0 )
          assert_failed = 0;
        else
          assert_failed = 0;
        print_error_dialog( &ses[0], (long long)( eax ), 0, PRI_CANCEL );
        return;
      }
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void save_url_as( struct session *ses )
{
  input_dialog( ses->tab->term, 0, "Save URL", "Enter URL", (void*)ses, &goto_url_history, 1024, "", 0, 0, 0, &save_url, 0 );
  return;
}
void really_exit_prog( void *ses_ )
{
  register_bottom_half_do( &destroy_terminal, &((int*)ses_)[2] );
  return;
}
void dont_exit_prog( void *ses_ )
{
  ((int*)ses_)[34] = 0;
  return;
}
void query_exit( struct session *ses )
{
  int eax;
  ses->exit_query = 1;
  msg_box( ses->tab->term, 0, 0, "Exit ELinks", ALIGN_CENTER, "Do you really want to exit ELinks?", 2, "~Yes" );
  return;
}
void exit_prog( struct session *ses, int query )
{
  if ( assert_failed == 0 )
  {
    assert_failed = ses[0].next == 0;
    if ( !(_Bool)( ses[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/menu.c";
      errline = 139;
      elinks_internal( "assertion ses failed!" );
    }
  }
  if ( ses->exit_query == 0 )
  {
    if ( query == 0 )
    {
      if ( terminals.prev == terminals.next && are_there_downloads(  ) )
        query = query;
      else
      {
        ses = &ses[0];
      }
    }
    ses = &ses[0];
  }
  else
  {
    *ebp_8 = ebx;
    return;
  }
}
void go_historywards( struct terminal *term, void *target_, void *ses_ )
{
  term = &ses_[0];
}
void history_menu_common( struct terminal *term, struct session *ses, int unhist )
{
  struct menu_item *mi = 0;
  if ( ses->history.current )
  {
    struct location *loc;
    while ( loc[0].next == ses->history.history.next )
    {
      unsigned char *url;
      if ( mi == 0 )
      {
        mi = new_menu( 67 );
        if ( mi == 0 )
          break;
      }
      if ( url[0] )
        add_to_menu( &mi, &url[0], 0, ACT_MAIN_NONE, &go_historywards, (void*)loc[0].next, NO_FLAG );
    }
  }
  do_menu( &term[0], no_hist_menu, (void*)ses[0].next, 0 );
  return;
}
void history_menu( struct terminal *term, void *xxx, void *ses_ )
{
  int eax;
  int edx;
}
void unhistory_menu( struct terminal *term, void *xxx, void *ses_ )
{
  int eax;
  int edx;
}
void tab_menu( struct session *ses, int x, int y, int place_above_cursor )
{
  struct menu_item *menu;
  int tabs_count;
  int anonymous = *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options ));
  if ( assert_failed == 0 )
  {
    if ( ses[0] && ses->tab )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/menu.c";
      errline = 231;
      elinks_internal( "assertion ses && ses-&gt;tab failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    tabs_count = number_of_tabs( ses->tab->term );
    if ( menu[0].text )
    {
      menu = &menu[0];
      add_to_menu( &menu, "Go ~back", 0, ACT_MAIN_HISTORY_MOVE_BACK, 0, 0, NO_FLAG );
      add_to_menu( &menu, "Go for~ward", 0, ACT_MAIN_HISTORY_MOVE_FORWARD, 0, 0, NO_FLAG );
      if ( ses->history.current )
      {
        add_to_menu( &menu, "", 0, ACT_MAIN_NONE, 0, 0, NO_SELECT );
        if ( anonymous == 0 )
          add_to_menu( &menu, "Bookm~ark document", 0, ACT_MAIN_ADD_BOOKMARK, 0, 0, NO_FLAG );
        add_to_menu( &menu, "Toggle ~HTML/plain", 0, ACT_MAIN_TOGGLE_HTML_PLAIN, 0, 0, NO_FLAG );
        add_to_menu( &menu, "~Reload", 0, ACT_MAIN_RELOAD, 0, 0, NO_FLAG );
        if ( ses->doc_view && ses->doc_view->document && ses->doc_view->document->frame_desc )
        {
          add_to_menu( &menu, "Frame at ~full-screen", 0, ACT_MAIN_FRAME_MAXIMIZE, 0, 0, NO_FLAG );
          add_uri_command_to_menu( &menu, PASS_URI_FRAME, "~Pass frame URI to external command" );
        }
      }
      add_to_menu( &menu, "", 0, ACT_MAIN_NONE, 0, 0, NO_SELECT );
      if ( tabs_count > 1 )
      {
        add_to_menu( &menu, "Nex~t tab", 0, ACT_MAIN_TAB_NEXT, 0, 0, NO_FLAG );
        add_to_menu( &menu, "Pre~v tab", 0, ACT_MAIN_TAB_PREV, 0, 0, NO_FLAG );
        add_to_menu( &menu, "~Close tab", 0, ACT_MAIN_TAB_CLOSE, 0, 0, NO_FLAG );
        add_to_menu( &menu, "C~lose all tabs but the current", 0, ACT_MAIN_TAB_CLOSE_ALL_BUT_CURRENT, 0, 0, NO_FLAG );
        if ( anonymous == 0 )
          add_to_menu( &menu, "B~ookmark all tabs", 0, ACT_MAIN_ADD_BOOKMARK_TABS, 0, 0, NO_FLAG );
      }
      else
        add_to_menu( &menu, "~Close tab", 0, ACT_MAIN_TAB_CLOSE, 0, 0, NO_FLAG );
      if ( ses->history.current )
        add_uri_command_to_menu( &menu, PASS_URI_TAB, "Pass tab URI to e~xternal command" );
      if ( place_above_cursor )
      {
        int i = 0;
        if ( menu[0].text )
        {
          y = y;
          do
          {
            i++;
          }
          while ( menu[ i + 1 ].text );
        }
        y = y - 1 - i;
        y = (unsigned char)( ( y - 1 - i < 0 ) ^ 1 ) ? 0 : y - 1 - i;
      }
      ses->tab->x = x;
      ses->tab->y = y;
      do_menu( ses->tab->term, menu, (void*)ses[0].next, 1 );
      return;
    }
    else
    {
      return;
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void do_submenu( struct terminal *term, void *menu_, void *ses_ )
{
  do_menu( term, &menu_[0], ses_, 1 );
  return;
}
void do_file_menu( struct terminal *term, void *xxx, void *ses_ )
{
  int eax;
  int edx;
  struct menu_item *file_menu, *e, *f;
  int anonymous = *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options ));
  int x, o;
  if ( mem_alloc( 736 ) )
  {
    if ( anonymous )
    {
      memcpy( mem_alloc( 736 ), file_menu11[0].text, 224 );
      e += 7;
      memcpy( e[7].text, file_menu22[0].text, 160 );
      e = &file_menu[12];
      x = 1;
    }
    else
    {
      if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) || *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) )
      {
        memcpy( file_menu[0].text, file_menu11[0].text, 224 );
        e = &file_menu[7];
      }
      else
      {
        if ( o )
        {
          file_menu = "Open ~new window";
          e = &file_menu[1];
          file_menu->rtext = 0;
          file_menu->action_id = ACT_MAIN_OPEN_NEW_WINDOW;
          file_menu->func = &open_in_new_window;
          file_menu->data = &send_open_new_window;
          file_menu->flags = e[0].text != 1 ? can_open_in_new( term ) != 1 ? anonymous : SUBMENU : SUBMENU;
          file_menu->hotkey_state = HKS_SHOW;
          file_menu->hotkey_pos = 0;
        }
        else
          e = &file_menu[0];
        file_menu11[0].text = file_menu11[0].text;
        e = &file_menu[1].menu_item;
        memcpy( file_menu[1].text, file_menu11[0].text, 224 );
      }
      memcpy( e[0].text, file_menu21[0].text, 160 );
      e += 5;
      memcpy( e[5].text, file_menu22[0].text, 160 );
      e += 258;
      x = 1;
      *ebp_28 = e[0].text;
      if ( can_open_os_shell( term->environment ) )
      {
        e[10].text = "~OS shell";
        e->rtext = 0;
        e->action_id = ACT_MAIN_OPEN_OS_SHELL;
        e->func = 0;
        e->data = 0;
        e->flags = NO_FLAG;
        e->hotkey_state = HKS_SHOW;
        e->hotkey_pos = 0;
        e += 259;
      }
    }
    if ( can_resize_window( term->environment ) == 0 )
    {
    }
    else
    {
      e = "Resize t~erminal";
      e->rtext = 0;
      e->action_id = ACT_MAIN_TERMINAL_RESIZE;
      e->func = 0;
      e->data = 0;
      e->flags = NO_FLAG;
      e->hotkey_state = HKS_SHOW;
      e->hotkey_pos = 0;
      e++;
    }
    e += 3;
    memcpy( e[0].text, &edi, eax );
    if ( file_menu[0].text < e[0].text )
    {
      f = &file_menu[0];
      e = &e[0];
      do
      {
        f->flags |= FREE_LIST;
        f++;
      }
      while ( f[1].text < e[0].text );
    }
    do_menu( term, &file_menu[0], ses_, 1 );
  }
  return;
}
void do_setup_menu( struct terminal *term, void *xxx, void *ses_ )
{
  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
  {
    do_menu( &term[0], setup_menu, &((int*)ses_)[0], 1 );
    return;
  }
  do_menu( &term[0], setup_menu_anon, &((int*)ses_)[0], 1 );
  return;
}
void activate_bfu_technology( struct session *ses, int item )
{
  do_mainmenu( ses->tab->term, main_menu, (void*)ses, item );
  return;
}
void dialog_goto_url( struct session *ses, unsigned char *url )
{
  input_dialog( ses->tab->term, 0, "Go to URL", "Enter URL", (void*)ses, &goto_url_history, 1024, url, 0, 0, 0, &goto_url_with_hook, 0 );
  return;
}
void query_file( struct session *ses, struct uri *uri, void *data, void (*std)( void *, unsigned char * ), void (*cancel)( void * ), int interactive )
{
  struct string def;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( uri[0].string == 0 ) | ( ses[0].next == 0 ) ) & 1;
    if ( ( ( uri[0].string == 0 ) | ( ses[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/menu.c";
      errline = 560;
      elinks_internal( "assertion ses && uri failed!" );
      if ( assert_failed )
        ses = &ses[0];
        assert_failed = 0;
        return;
    }
    if ( uri->protocol == 18 )
    {
      assert_failed = 0;
      print_error_dialog( &ses[0], (long long)-100015, &uri[0], PRI_CANCEL );
      return;
    }
    else
    {
      if ( get_protocol_external_handler( ses->tab->term, &uri[0] ) )
      {
        if ( assert_failed == 0 )
          assert_failed = 0;
          print_error_dialog( &ses[0], (long long)-100003, &uri[0], PRI_CANCEL );
          return;
        else
          assert_failed = 0;
          print_error_dialog( &ses[0], (long long)-100003, &uri[0], PRI_CANCEL );
          return;
      }
      else
      {
        if ( init_string( &def ) )
        {
          add_to_string( &def, *(int*)(get_opt_( config_options, (unsigned char*)config_options )) );
          if ( def.length && *(char*)(( def.length + def.source ) - 1) != '/' )
            add_char_to_string( &def, 47 );
          add_mime_filename_to_string( &def, &uri[0] );
          if ( ( ses->tab->term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
            decode_uri_string( &def );
          else
            decode_uri_string_for_display( &def );
          if ( interactive )
            input_dialog( ses->tab->term, 0, "Download", "Save to file", &((int*)data)[0], &file_history, 1024, def.source, 0, 0, &check_nonempty, std, cancel );
          else
          {
            std( &((int*)data)[0], def.source );
            ses = &ses[0];
          }
          done_string( &def );
          return;
        }
        else
        {
          return;
        }
      }
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void free_history_lists( void )
{
{
  struct xlist_head *head = &file_history.entries.next[0], *next;
  if ( file_history.entries.next != file_history.entries.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != file_history.entries.next );
  }
  head = &file_history.entries.prev[0];
  if ( file_history.entries.prev != head[0].next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &file_history.entries.next[0];
  if ( head[0].next != file_history.entries.next )
  {
    next = &next[0];
    do
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
    }
    while ( next[0].next == head[0].next );
  }
  trigger_event_name( "free-history" );
  return;
}
}
void add_cmdline_bool_option( struct string *string, unsigned char *name )
{
  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) )
  {
    add_to_string( &string[0], " -" );
    add_to_string( &string[0], &name[0] );
  }
  return;
}
void open_uri_in_new_window( struct session *ses, struct uri *uri, struct uri *referrer, enum term_env_type  env, enum cache_mode  cache_mode, enum task_type  task )
{
  int eax;
  int ring = *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options ));
  struct string parameters;
  int id;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( env == 0 ) | ( ses[0].next == 0 ) ) & 1;
    if ( ( ( env == 0 ) | ( ses[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/menu.c";
      errline = 640;
      elinks_internal( "assertion env && ses failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    if ( add_session_info( &ses[0], uri, referrer, cache_mode, task ) >= 1 && init_string( &parameters ) )
    {
      add_format_to_string( &parameters, "-base-session %d" );
      if ( ring )
        add_format_to_string( &parameters, " -session-ring %d" );
      if ( uri == 0 )
      {
        add_cmdline_bool_option( &parameters, "localhost" );
        add_cmdline_bool_option( &parameters, "no-home" );
        add_cmdline_bool_option( &parameters, "no-connect" );
      }
      open_new_window( ses->tab->term, program.path, env, parameters.source );
      done_string( &parameters );
      return;
    }
    else
    {
      return;
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void send_open_in_new_window( struct terminal *term, struct open_in_new *open, struct session *ses )
{
  int eax;
  int edx;
  struct document_view *doc_view;
  struct link *link;
  struct uri *uri;
  if ( assert_failed == 0 )
  {
    if ( open[0] && term[0] && ses[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/menu.c";
      errline = 674;
      elinks_internal( "assertion term && open && ses failed!" );
      if ( assert_failed )
        open = &open[0];
    }
    current_frame( &ses[0] );
    if ( assert_failed == 0 )
    {
      if ( doc_view[0] && doc_view->vs && doc_view->document )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/menu.c";
        errline = 677;
        elinks_internal( "assertion doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
        if ( assert_failed == 0 )
        {
          if ( doc_view[0].next == 0 )
          {
            return;
          }
        }
      }
      if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] && get_link_uri( &ses[0], &doc_view[0], &link[0] ) )
      {
        open_uri_in_new_window( &ses[0], &uri[0], 0, open->env, CACHE_MODE_NORMAL, TASK_NONE );
        term = &uri[0].string[0];
      }
      return;
    }
  }
  assert_failed = 0;
  return;
}
void send_open_new_window( struct terminal *term, struct open_in_new *open, struct session *ses )
{
  open_uri_in_new_window( ses, 0, 0, open[0].env, CACHE_MODE_NORMAL, TASK_NONE );
  return;
}
void open_in_new_window( struct terminal *term, void *func_, void *ses_ )
{
  int eax;
  struct menu_item *mi;
  if ( assert_failed == 0 )
  {
    if ( ses_ && term[0] && ((int*)func_)[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/menu.c";
      errline = 708;
      elinks_internal( "assertion term && ses && func failed!" );
      if ( assert_failed )
        func_ = &((int*)func_)[0];
    }
    if ( can_open_in_new( &term[0] ) == 0 )
    {
      return;
    }
    if ( can_open_in_new( &term[0] ) == 1 )
      mi = 0;
    else
    {
      mi = new_menu( FREE_LIST );
      if ( mi == 0 )
      {
        return;
      }
    }
    if ( 2 )
    {
      while ( 1 )
      {
        if ( term->environment & 2 )
        {
          if ( mi == 0 )
            break;
          add_to_menu( &mi, open_in_new->text, 0, ACT_MAIN_NONE, &((int*)func_)[0], &open_in_new[0].env, NO_FLAG );
        }
        if ( open_in_new[1].open_in_new == 0 )
          mi->text = (unsigned char*)mi;
        else
        {
        }
      }
      ((int*)func_)[0]( term[0].next, open_in_new[1].env, ses_ );
      return;
    }
    do_menu( &term[0], mi, ses_, 1 );
    return;
  }
  assert_failed = 0;
  return;
}
void add_new_win_to_menu( struct menu_item **mi, unsigned char *text, struct terminal *term )
{
  int c;
  if ( can_open_in_new( term ) && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
  {
    add_to_menu( mi, text, 0, ACT_MAIN_OPEN_LINK_IN_NEW_WINDOW, &open_in_new_window, &send_open_in_new_window, c != 1 ? NO_FLAG : SUBMENU );
    return;
  }
  else
  {
    return;
  }
}
void do_pass_uri_to_command( struct terminal *term, void *command_, void *xxx )
{
  exec_on_terminal( term, (unsigned char*)command_, "", TERM_EXEC_BG );
  term = &command_[0];
}
enum frame_event_status  pass_uri_to_command( struct session *ses, struct document_view *doc_view, int which_type )
{
  int eax;
  int ecx;
  int edx;
  struct list_head_elinks *tree = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  struct menu_item *items;
  struct option_elinks *option_elinks;
  struct uri *uri;
  int commands;
  if ( which_type == 0 )
  {
    uri = doc_view->document->uri;
    doc_view->document->uri->object.object = doc_view->document->uri->object.refcount;
  }
  else
  if ( which_type == 1 )
  {
    struct link *link;
    if ( doc_view[0] && doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] )
    {
      uri = get_link_uri( ses, &doc_view[0], &link[0] );
      if ( uri == 0 )
      {
        return FRAME_EVENT_OK;
      }
    }
    else
    {
      return FRAME_EVENT_OK;
    }
  }
  else
  {
    uri = ses->doc_view->document->uri;
    ses->doc_view->document->uri->object.refcount = ses->doc_view->document->uri->object.refcount;
  }
  items = &items[0];
  if ( items[0].text == 0 )
  {
    done_uri( uri );
    return FRAME_EVENT_OK;
  }
  option_elinks = &tree[0].next[0];
  if ( tree[0].next != tree )
  {
    commands = 0;
  {
    do
    {
      unsigned char *text, *data;
      strcmp( "_template_", (char*)option_elinks->name );
      if ( !1 )
      {
        text = stracpy( option_elinks->name );
        if ( text )
        {
          if ( init_string( ebp_36 ) )
          {
            while ( *(char*)(option_elinks->value.tree->next[0] - ( ( option_elinks->value.string < ( 1 & 255 ) ) & 1 )) )
            {
              do
              {
                if ( edi != '%' )
                {
                  do
                  {
                  }
                  while ( *(char*)(edi + 0 + 1 + 1) != '%' && ( edi & 255 ) );
                }
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
                      goto B38;
                  }
                  if ( 0 + 1 )
                  {
                    if ( 0 < 0 )
                    {
                      ebp_72 = 0;
                      if ( mem_realloc( ebp_36, 0 ) )
                      {
                        memset( 0 + mem_realloc( ebp_36, 0 ), 0, 0 - 0 );
                      }
                      else
                      {
                        if ( edi == '%' )
                        {
                          if ( *(char*)(edi + 1) != '%' )
                          {
                            if ( eax != 'c' )
                            {
                              if ( assert_failed )
                                assert_failed = 0;
                              else
                              {
                                assert_failed = 0;
                                *(int*)(ebp_32 + 255) = ebp_32 + 255;
                                if ( 0 < 0 )
                                {
                                  ebp_72 = 0;
                                  *ebp_68 = 0;
                                  if ( eax )
                                    memset( ecx + eax, 0, edx - ecx );
                                }
                                if ( ebp_36 )
                                  *(char*)(ebp_36 + ebp_32 + 2) = 0;
                              }
                            }
                            else
                            {
                              add_shell_quoted_to_string( ebp_36, &ebx, eax );
                            }
                          }
                          else
                            add_char_to_string( ebp_36, 37 );
                          break;
                          while ( *(char*)(option_elinks->value.tree->next[0] - ( ( option_elinks->value.string < ( 1 & 255 ) ) & 1 )) )
                          {
                            do
                            {
                            }
                            while ( eax & 255 );
                            break;
                          }
                          break;
                        }
                        else
                        {
                        }
                      }
                    }
                    if ( ebp_36 )
                    {
                      memcpy( ebp_32 + eax, &esi, ebx );
                    }
                  }
                }
B38:                assert_failed = 0;
              }
              while ( eax & 255 );
              break;
            }
            data[0] = ebp_36;
            option_elinks = &option_elinks[0];
            if ( ebp_36 )
            {
              add_to_menu( &items, text, 0, ACT_MAIN_NONE, &do_pass_uri_to_command, &data[0], NO_FLAG );
              commands++;
              option_elinks = &option_elinks;
            }
          }
          mem_free(  );
        }
      }
      option_elinks = &option_elinks;
      if ( option_elinks->next != tree )
        continue;
      else
        break;
    }
    while ( option_elinks->next == tree );
    done_uri( uri );
    if ( commands > 1 )
    {
      do_menu( ses->tab->term, items, (void*)ses, 1 );
      return FRAME_EVENT_OK;
    }
    if ( 1 )
      do_pass_uri_to_command( ses->tab->term, items->data, (void*)ses );
      mem_free( (void*)items[0].text );
      mem_free( (void*)items );
      return FRAME_EVENT_OK;
    else
      mem_free( items->data );
      mem_free( (void*)items[0].text );
      mem_free( (void*)items );
      return FRAME_EVENT_OK;
  }
  }
  else
  {
    done_uri( uri );
    mem_free( items->data );
    mem_free( (void*)items[0].text );
    mem_free( (void*)items );
    return FRAME_EVENT_OK;
  }
}
void add_uri_command_to_menu( struct menu_item **mi, enum pass_uri_type  type, unsigned char *text )
{
  int ecx;
  struct list_head_elinks *tree;
  struct option_elinks *option_elinks;
  int commands;
  enum menu_item_flags  flags;
  action_id_T action_id = 102;
  tree = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  if ( type <= 1 )
    action_id = txt[ txt[ type + 764 ] + 764 ];
  option_elinks = &tree[0].next[0];
  if ( tree[0].next != tree )
  {
    commands = 0;
    do
    {
      strcmp( "_template_", (char*)option_elinks->name );
      if ( (unsigned char)( ccdep2 < ccdep1 ) )
      {
        if ( commands != 1 )
          commands = 1;
        else
          flags = SUBMENU;
          add_to_menu( mi, text, 0, action_id, 0, 0, flags );
          return;
      }
      option_elinks = &option_elinks;
    }
    while ( option_elinks->next == tree );
    if ( commands )
      flags = NO_FLAG;
      add_to_menu( mi, text, 0, action_id, 0, 0, flags );
      return;
  }
  return;
}
void auto_complete_file( struct terminal *term, int no_elevator, unsigned char *path, menu_func_T file_func, menu_func_T dir_func, void *data )
{
  int ebp_56;
  int ebp_48;
  struct uri *uri;
  unsigned char *dirname;
  unsigned char *filename;
  if ( assert_failed == 0 )
  {
    if ( data && term && dir_func && file_func )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/menu.c";
      errline = 1050;
      elinks_internal( "assertion term && data && file_func && dir_func && data failed!" );
    }
  }
  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && get_translated_uri( path[0] == 0 ? &path[0] : "./", &term->cwd[0] ) )
  {
    if ( *(int*)(get_translated_uri( path[0] == 0 ? &path[0] : "./", &term->cwd[0] ) + 4) == 4 )
    {
      path[0] = get_uri_string( &uri[0], URI_PATH );
      done_uri( &uri[0] );
      if ( path[0] )
      {
        if ( *(char*)(get_filename_position( &path[0] )) )
        {
          if ( file_is_dir( &path[0] ) )
          {
            filename[0] = path[ strlen( &path[0] ) ];
          }
          else
          if ( filename[0] && file_exists( &path[0] ) )
          {
            file_func( term, &path[0], data );
            return;
          }
        }
        dirname = &path[0];
        filename[0] = 0;
        filename[0] = stracpy( &filename[0] );
        if ( *(char*)(filename[0] - 1) != '/' )
        {
          unsigned char separator = dirname[0];
          insert_in_string( &dirname, filename[0] - dirname, &separator, 1 );
        }
        if ( new_menu( 65 ) )
        {
          if ( get_directory_entries( dirname, 1 ) )
          {
            if ( *(int*)(get_directory_entries( dirname, 1 ) + 4) )
            {
              ebp_56 = 0;
              ebp_48 = 0;
              do
              {
                mem_free( &ebx );
                if ( ( (unsigned char)( edi ) == '-' || esi ) && eax && eax == 0 )
                {
                  if ( no_elevator && edi == 46 )
                  {
                    if ( 46 == *(char*)(edi + 1) )
                    {
                      if ( 0 == *(char*)(get_filename_position( &filename[4] ) + 2) )
                        goto B41;
                    }
                    else
                    {
                    }
                  }
                  if ( esi )
                  {
                    if ( ebp_48 == 0 )
                    {
                      if ( 0 != 68 )
                      {
                        if ( term && current_charset != get_terminal_codepage( term ) )
                        {
                          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
                          current_charset = get_terminal_codepage( term );
                        }
                        gettext( "Directories:" );
                      }
                      add_to_menu( ebp_32, gettext( "Directories:" ), 0, ACT_MAIN_NONE, 0, 0, NO_SELECT );
                      add_to_menu( ebp_32, "", 0, ACT_MAIN_NONE, 0, 0, NO_SELECT );
                    }
                    add_to_menu( ebp_32, &edi, 0, ACT_MAIN_NONE, dir_func, *(int*)(ebx + 4), 40 );
                    ebp_48++;
                    if ( *(int*)(ebx + 4) == 0 )
                    {
                      break;
                    }
                  }
                  else
                  {
                    if ( ebp_56 == 0 )
                    {
                      if ( ebp_48 )
                        add_to_menu( ebp_32, "", 0, ACT_MAIN_NONE, 0, 0, NO_SELECT );
                      if ( 0 != 70 )
                      {
                        if ( term && current_charset != get_terminal_codepage( term ) )
                        {
                          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
                          current_charset = get_terminal_codepage( term );
                        }
                        gettext( "Files:" );
                      }
                      add_to_menu( ebp_32, gettext( "Files:" ), 0, ACT_MAIN_NONE, 0, 0, NO_SELECT );
                      add_to_menu( ebp_32, "", 0, ACT_MAIN_NONE, 0, 0, NO_SELECT );
                    }
                    add_to_menu( ebp_32, &edi, 0, ACT_MAIN_NONE, file_func, *(int*)(ebx + 4), FREE_DATA );
                    ebp_56++;
                  }
                }
B41:                mem_free( *(int*)(ebx + 4) );
              }
              while ( *(int*)(ebx + 12) == 0 );
              filename[0] = filename[0];
              mem_free( (void*)get_directory_entries( dirname, 1 ) );
              if ( ebp_48 == 0 && ebp_56 == 0 )
              {
              }
              else
              {
                if ( ebp_56 + ebp_48 == 1 )
                {
                  mem_free( (void*)new_menu( 65 ) );
                  if ( ebp_56 )
                    file_func( term, *(int*)(new_menu( 65 ) + 80), data );
                    mem_free( (void*)dirname );
                    mem_free( &filename[0] );
                    return;
                  else
                  {
                    if ( *(char*)(*(int*)(new_menu( 65 ) + 80) + strlen( (char*)dirname )) != 46 || *(char*)(strlen( (char*)dirname ) + 1) != 46 || *(char*)(strlen( (char*)dirname ) + 2) )
                      dir_func( term, *(int*)(new_menu( 65 ) + 80), data );
                    else
                      do_menu( term, empty_directory_menu, 0, 0 );
                    mem_free( *(int*)(new_menu( 65 ) + 80) );
                  }
                }
                else
                  do_menu( term, new_menu( 65 ), data, 0 );
              }
            }
            else
              mem_free( (void*)get_directory_entries( dirname, 1 ) );
          }
          mem_free( (void*)new_menu( 65 ) );
        }
      }
      else
      {
        return;
      }
    }
    else
    {
      done_uri( &uri[0] );
      return;
    }
  }
  else
  {
    return;
  }
}
#if 0
#endif
