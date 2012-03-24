#include "bookmarks.c.h"
struct list_head_elinks bookmarks = { &bookmarks, &bookmarks };
static int bookmarks_dirty;
static struct hash *bookmark_cache;
static struct bookmark *bm_snapshot_last_folder;
static struct option_info bookmark_options_info[5] = { { { 0, 0, { 0 }
, "bookmarks", 0, 9, 0, 0, { 0, 135428430, 135445056, 0, 0, 0 }
, "Bookmark options.", "Bookmarks", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "file_format", 0, 1, 0, 1, { 0, 135333844, 135428448, 0, 0, 0 }
, "File format for bookmarks (affects both reading and saving):\n0 is the default native ELinks format\n1 is XBEL universal XML bookmarks format", "File format", 0, 0, 0 }
, "bookmarks" }
, { { 0, 0, { 0 }
, "folder_state", 0, 0, 0, 1, { 0, 135333984, 135428460, 0, 0, 0 }
, "When saving bookmarks also store whether folders are expanded or not, so the look of the bookmark dialog is kept across ELinks sessions. If disabled all folders will appear unexpanded next time ELinks is run.", "Save folder state", 0, 0, 0 }
, "bookmarks" }
, { { 0, 0, { 0 }
, "snapshot", 0, 0, 0, 1, { 0, 135334196, 135428478, 0, 0, 0 }
, "Automatically save a snapshot of all tabs periodically. This will periodically bookmark the tabs of each terminal in a separate folder for recovery after a crash.\n\nThis feature requires bookmark support.", "Periodic snapshotting", 0, 0, 0 }
, "ui.sessions" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct event_hook_info bookmark_hooks[5] = { { "bookmark-delete", 0, &bookmark_change_hook, 0 }
, { "bookmark-move", 0, &bookmark_change_hook, 0 }
, { "bookmark-update", 0, &bookmark_change_hook, 0 }
, { "periodic-saving", 0, &bookmark_write_hook, 0 }
, { 0, 0, 0, 0 }
 };
struct module bookmarks_module = { "Bookmarks", bookmark_options_info, bookmark_hooks, 0, 0, &init_bookmarks, &done_bookmarks };
enum evhook_status  bookmark_change_hook( va_list ap, void *data )
{
  if ( ap[0] != bm_snapshot_last_folder )
  {
    return EVENT_HOOK_STATUS_NEXT;
  }
  bm_snapshot_last_folder = 0;
  return EVENT_HOOK_STATUS_NEXT;
}
enum evhook_status  bookmark_write_hook( va_list ap, void *data )
{
  int eax;
  int edx;
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && init_string( ebp_36 ) )
  {
    add_to_string( ebp_36, "Session snapshot" );
    add_to_string( ebp_36, " - " );
    add_date_to_string( ebp_36, *(int*)(get_opt_( config_options, (unsigned char*)config_options )), 0 );
    done_string( ebp_36 );
    if ( add_bookmark_cp( 0, 1, get_cp_index( "System" ), ebp_36, 0 ) )
    {
      if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
      {
        if ( terminals.prev == terminals.next )
          bookmark_terminal( &terminals.next[0], add_bookmark_cp( 0, 1, get_cp_index( "System" ), ebp_36, 0 ) );
        else
        if ( terminals.next != terminals.next )
        {
          while ( elinks_ulongcat( ebp_28, 0, 0 + 1, 4, 0, 10, 0 ) <= 3 )
          {
            if ( eax )
            {
              bookmark_terminal( &ebx, eax );
              if ( terminals.next == terminals.next )
                goto B19;
              else
              {
              }
            }
          }
        }
      }
B19:      if ( bm_snapshot_last_folder )
        delete_bookmark( bm_snapshot_last_folder );
      bm_snapshot_last_folder = add_bookmark_cp( 0, 1, get_cp_index( "System" ), ebp_36, 0 );
    }
  }
  write_bookmarks(  );
  return EVENT_HOOK_STATUS_NEXT;
}
int change_hook_folder_state( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  if ( changed->value.tree == 0 )
  {
    bookmarks_dirty = 1;
  }
  return 0;
}
void init_bookmarks( struct module *module )
{
  static struct change_hook_info bookmarks_change_hooks[2] = { { "bookmarks.folder_state", &change_hook_folder_state }
, { 0, 0 }
 };
  register_change_hooks( bookmarks_change_hooks );
}
void free_bookmarks( struct list_head_elinks *bookmarks_list, struct list_head_elinks *box_items )
{
  struct bookmark *bm = &bookmarks_list->next[0];
  if ( bookmarks_list->next != bookmarks_list[0].next )
  {
    bookmarks_list = &bookmarks_list[0];
    do
    {
      if ( bm->child.next != bm->child.next )
        free_bookmarks(  );
      mem_free( (void*)bm->title );
      mem_free( (void*)bm->url );
      bm = &bm;
    }
    while ( bookmarks_list->next != bm->next );
  }
{
  struct xlist_head *head = &box_items->next[0], *next;
  head = &box_items->prev[0];
  if ( box_items->prev != head[0].next )
  {
    bookmarks_list = &bookmarks_list[0];
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &box_items->next[0];
  if ( head[0].next != box_items->next )
  {
    do
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
    }
    while ( next[0].next == head[0].next );
    bookmarks_list = &bookmarks_list[0];
  }
{
  struct xlist_head *head = &bookmarks_list->next[0], *next;
  head = &bookmarks_list->prev[0];
  if ( bookmarks_list->prev != head[0].next )
  {
    bookmarks_list = &bookmarks_list[0];
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &bookmarks_list->next[0];
  if ( head[0].next != bookmarks_list->next )
  {
    while ( 1 )
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
      next = &(struct xlist_head*)(next);
      head = &next;
      if ( next->next == head[0].next )
        goto B27;
      else
      {
        next = &next[0];
      }
    }
  }
B27:  if ( bookmark_cache )
  {
    free_hash( &bookmark_cache );
  }
  return;
}
}
}
void done_bookmarks( struct module *module )
{
  if ( bm_snapshot_last_folder )
    delete_bookmark( bm_snapshot_last_folder );
  bm_snapshot_last_folder = 0;
  write_bookmarks(  );
  free_bookmarks( &bookmarks, &bookmark_browser.root.child );
}
void read_bookmarks( void )
{
}
void write_bookmarks( void )
{
  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
  {
    bookmarks_write( &bookmarks );
    return;
  }
  bookmarks_dirty = 0;
  return;
}
void bookmarks_set_dirty( void )
{
  bookmarks_dirty = 1;
  return;
}
void bookmarks_unset_dirty( void )
{
  bookmarks_dirty = 0;
  return;
}
int bookmarks_are_dirty( void )
{
  return bookmarks_dirty == 1;
}
void delete_bookmark( struct bookmark *bm )
{
  static int delete_bookmark_event_id = -1;
  if ( bm->child.next != bm->child.next )
  {
    do
    {
      delete_bookmark( &bm->child.next[0] );
    }
    while ( bm->child.next == bm->child.next );
  }
  if ( bookmark_cache && bm->url && bm->url[0] && item[0] )
  {
    del_hash_item( bookmark_cache, &item[0] );
    if ( delete_bookmark_event_id != -1 )
    {
      trigger_event( delete_bookmark_event_id );
      bm->prev = bm->prev;
      &bm->prev = &bm;
      bookmarks_dirty = 1;
      done_listbox_item( &bookmark_browser, bm->box_item );
      mem_free( (void*)bm->title );
      mem_free( (void*)bm->url );
      bm = &bm[0];
    }
  }
  else
  if ( delete_bookmark_event_id != -1 )
    continue;
  delete_bookmark_event_id = get_event_id( "bookmark-delete" );
}
struct bookmark *add_bookmark( struct bookmark *root, int place, unsigned char *title, unsigned char *url )
{
  int ecx;
  int edx;
  enum listbox_item_type  type;
  struct bookmark *bm;
  if ( mem_calloc( 1, 36 ) )
  {
    bm->title = stracpy( title );
    if ( bm->title )
    {
      sanitize_title( bm->title );
      url[0] = url != 0 ? "" : url;
      bm->url = stracpy( url != 0 ? "" : url );
      if ( bm->url == 0 )
        mem_free( (void*)bm->title );
      else
      {
        sanitize_url( bm->url );
        bm->root = &root[0];
        bm->child.prev = bm->child.next;
        bm->child.next = bm->child.next;
        if ( ( !url[0] || url[0] == 0 ) && ( title == 0 || title[0] != '-' || title[1] ) )
          type = BI_FOLDER;
        bm->box_item = add_listbox_item( &bookmark_browser, root->box_item, type, (void*)bm[0].next, ( ( 0 - ( ( place < 1 ) & 1 ) ) & 2 ) - 1 );
        if ( bm->box_item )
        {
          if ( place )
          {
            if ( root[0].next )
            {
              bm = *(int*)(root->child.prev);
              bm->prev = &root->child.prev[0];
              *(int*)(root->child.prev) = bm[0].next;
              bm->prev = &bm[0];
            }
            else
            {
              bm = *(int*)(bookmarks.prev);
              bm->prev = &bookmarks.prev[0];
              *(int*)(bookmarks.prev) = bm[0].next;
              bm->prev = &bm[0];
            }
          }
          else
          if ( root[0].next )
          {
            bm->prev = &root->child.next[0];
            &bm = &root->child.next[0];
            root->child.next = (void*)bm[0].next;
            bm->prev = &bm[0];
          }
          else
          {
            bm->prev = &bookmarks.next[0];
            bm = &bookmarks.next[0];
            bookmarks.next = (void*)bm[0].next;
            bm->prev = &bm[0];
          }
          bookmarks_dirty = 1;
          if ( bookmark_cache == 0 )
          {
            bookmark_cache = init_hash8(  );
            if ( bookmark_cache == 0 )
            {
              return &bm[0];
            }
          }
          if ( root->child.next[7] && bm->url[0] )
          {
            add_hash_item( bookmark_cache, bm->url, strlen( (char*)bm->url ), (void*)bm[0].next );
            return &bm[0];
          }
          return &bm[0];
        }
        else
        {
          mem_free( (void*)bm->url );
          mem_free( (void*)bm->title );
          &bm[0] = 0;
          mem_free( (void*)bm[0].next );
          return &bm[0];
        }
      }
    }
    &bm[0] = 0;
    mem_free( (void*)bm[0].next );
    return &bm[0];
  }
  else
  {
    return &bm[0];
  }
}
struct bookmark *add_bookmark_cp( struct bookmark *root, int place, int codepage, unsigned char *title, unsigned char *url )
{
  int eax;
  int ecx;
  int edx;
  int utf8_cp = get_cp_index( "UTF-8" );
  struct conv_table *table;
  unsigned char *utf8_title;
  unsigned char *utf8_url;
  struct bookmark *bookmark;
  url[0] = url[0] == 0 ? url[0] : "";
  table = get_translation_table( codepage, get_cp_index( "UTF-8" ) );
  &bookmark[0] = 0;
  if ( bookmark[0].next )
  {
    if ( convert_string_elinks( &table[0], &url[0], strlen( &url[0] ), utf8_cp, CSM_NONE, 0, 0, 0 ) )
    {
      if ( ( 0 != 0 ) & 255 )
      {
        add_bookmark( root, place, &utf8_title[0], &utf8_url[0] );
        *ebp_28 = 0;
        mem_free( &utf8_title[0] );
        &bookmark[0] = &bookmark[0];
        esi = esi;
        if ( esi & 255 )
        {
          mem_free( &utf8_url[0] );
          &bookmark[0] = &bookmark[0];
        }
      }
    }
    else
    {
      &bookmark[0] = 0;
      if ( ecx & 255 )
      {
        mem_free( &utf8_title[0] );
        &bookmark[0] = &bookmark[0];
        esi = esi;
      }
    }
    &bookmark[0] = 0;
    esi = esi;
  }
  return &bookmark[0];
}
int update_bookmark( struct bookmark *bm, int codepage, unsigned char *title, unsigned char *url )
{
  static int update_bookmark_event_id = -1;
  int utf8_cp = get_cp_index( "UTF-8" );
  struct conv_table *table;
  unsigned char *title2;
  unsigned char *url2;
  if ( get_translation_table( codepage, utf8_cp ) )
  {
    url2[0] = 0;
    if ( url[0] )
    {
      url2[0] = convert_string_elinks( &table[0], &url[0], strlen( &url[0] ), utf8_cp, CSM_NONE, 0, 0, 0 );
      if ( convert_string_elinks( &table[0], &url[0], strlen( &url[0] ), utf8_cp, CSM_NONE, 0, 0, 0 ) )
        sanitize_url( convert_string_elinks( &table[0], &url[0], strlen( &url[0] ), utf8_cp, CSM_NONE, 0, 0, 0 ) );
    }
    title2[0] = 0;
    if ( title )
    {
      title2[0] = convert_string_elinks( &table[0], title, strlen( (char*)title ), utf8_cp, CSM_NONE, 0, 0, 0 );
      if ( convert_string_elinks( &table[0], title, strlen( (char*)title ), utf8_cp, CSM_NONE, 0, 0, 0 ) == 0 )
      {
        if ( url2[0] )
        {
          mem_free( &url2[0] );
          return 0;
        }
      }
      else
        sanitize_title( convert_string_elinks( &table[0], title, strlen( (char*)title ), utf8_cp, CSM_NONE, 0, 0, 0 ) );
    }
    if ( update_bookmark_event_id == -1 )
    {
      update_bookmark_event_id = get_event_id( "bookmark-update" );
    }
    trigger_event( update_bookmark_event_id );
    if ( title2[0] )
    {
      if ( bm->title )
        mem_free( (void*)bm->title );
      bm->title = &title2[0];
    }
    if ( url2[0] == 0 )
    {
      bookmarks_dirty = 1;
      return 1;
    }
    if ( bookmark_cache )
    {
      if ( bm->url && bm->url[0] )
      {
        struct hash_item *item;
        if ( item[0].next )
          del_hash_item( bookmark_cache, &item[0] );
        if ( bookmark_cache == 0 )
        {
          if ( bm->url )
            mem_free( (void*)bm->url );
          bm->url = &url2[0];
          bookmarks_dirty = 1;
          return 1;
        }
      }
      if ( url2[0] )
      {
        add_hash_item( bookmark_cache, &url2[0], strlen( &url2[0] ), (void*)bm );
      }
    }
    if ( bm->url )
      mem_free( (void*)bm->url );
  }
  return 0;
}
struct bookmark *get_bookmark_by_name( struct bookmark *folder, unsigned char *title )
{
  struct bookmark *bookmark;
  struct list_head_elinks *lh = folder != 0 ? &bookmarks : &folder->child;
  &bookmark[0] = *(int*)(folder != 0 ? bookmarks : folder->child);
  if ( lh->next != ( folder != 0 ? bookmarks.next : folder->child.next ) )
  {
    do
    {
      if ( strcmp( (char*)bookmark->title, &title[0] ) == 0 )
        break;
      &bookmark[0] = &bookmark;
    }
    while ( lh->next != bookmark->next );
  }
  return 0;
}
struct bookmark *get_bookmark( unsigned char *url )
{
  int eax;
  struct hash_item *item;
  return url == 0 || bookmark_cache == 0 || url[0] == 0 || item[0].next == 0 ? 0 : &item->value[0];
}
void bookmark_terminal( struct terminal *term, struct bookmark *folder )
{
  unsigned char title[1024], url[1024];
  struct window *tab;
  int term_cp = get_terminal_codepage( &term[0] );
  tab = &term->windows.prev[0];
  if ( term->windows.prev != term->windows.next )
  {
    do
    {
      if ( tab->type == WINDOW_TAB && get_current_url( &tab->data[0], url, 1024 ) && get_current_title( &ses[0], title, 1024 ) )
      {
        add_bookmark_cp( &folder[0], 1, term_cp, title, url );
        tab = tab->prev;
        if ( tab->prev != term->windows.next )
          continue;
      }
      else
      {
        tab = tab->prev;
      }
    }
    while ( tab->prev != term->windows.next );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void bookmark_terminal_tabs( struct terminal *term, unsigned char *foldername )
{
  int eax;
  int edx;
  struct bookmark *folder;
  if ( folder[0].next )
  {
  }
  return;
}
unsigned char *get_auto_save_bookmark_foldername_utf8( void )
{
  unsigned char *foldername;
  int from_cp, to_cp;
  struct conv_table *convert_table;
  foldername[0] = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  return eax;
}
void bookmark_auto_save_tabs( struct terminal *term )
{
  int eax;
  unsigned char *foldername;
  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
  {
    foldername = get_auto_save_bookmark_foldername_utf8(  );
    if ( foldername )
    {
      if ( bookmarks.next != bookmarks.next )
      {
        while ( 1 )
        {
          if ( ( bookmarks.next[6] && *(char*)(bookmarks.next[6]) ) || strcmp( &bookmarks.next[5], (char*)foldername ) )
          {
            ebx = *(int*)(get_auto_save_bookmark_foldername_utf8(  ));
            if ( bookmarks.next == bookmarks.next )
              goto B10;
          }
          else
          {
            delete_bookmark( &bookmarks.next[0] );
            ebx = ebx;
            if ( edi == ebx )
            {
            }
          }
        }
      }
B10:      bookmark_terminal_tabs( term, foldername );
      term = &foldername[0];
    }
  }
  return;
}
void open_bookmark_folder( struct session *ses, unsigned char *foldername )
{
  int eax;
  struct bookmark *bookmark;
  struct bookmark *current;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( foldername[0] == 0 ) | ( ses[0].next == 0 ) ) & 1;
    if ( ( ( foldername[0] == 0 ) | ( ses[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bookmarks/bookmarks.c";
      errline = 734;
      elinks_internal( "assertion foldername && ses failed!" );
      if ( assert_failed )
        goto B2;
    }
    bookmark = &bookmarks.next[0];
    if ( bookmarks.next != bookmarks.next )
    {
      do
      {
        if ( bookmark->box_item->type == BI_FOLDER && strcmp( (char*)bookmark->title, &foldername[0] ) == 0 )
        {
          bookmark = &bookmark->child.next[0];
          if ( bookmark->child.next != bookmark->child.next )
          {
            current = 0;
          {
            do
            {
              struct uri *uri;
              if ( bookmark->box_item->type - 1 <= 1 || bookmark->url[0] == 0 || uri[0].string == 0 )
              {
                bookmark = &bookmark;
                if ( bookmark->next != bookmark->child.next )
                  continue;
              }
              else
              {
                if ( current == 0 )
                {
                  goto_uri( &ses[0], get_translated_uri( bookmark->url, 0 ) );
                  *ebp_32 = get_translated_uri( bookmark->url, 0 );
                  current = &bookmark[0];
                }
                else
                {
                  open_uri_in_new_tab( &ses[0], &uri[0], 1, 0 );
                  *ebp_32 = uri[0].string;
                }
                done_uri( get_translated_uri( bookmark->url, 0 ) );
              }
            }
            while ( bookmark->next != bookmark->child.next );
            bookmark = &bookmark[0];
            break;
          }
          }
        }
        else
        {
          bookmark = &bookmark;
        }
      }
      while ( bookmark->next != bookmarks.next );
    }
    return;
  }
B2:  assert_failed = 0;
  return;
}
#if 0
#endif
