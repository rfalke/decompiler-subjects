#include "dialogs.c.h"
static struct listbox_ops_messages bookmarks_messages = { "Sorry, but the bookmark \"%s\" cannot be deleted.", "Sorry, but the bookmark \"%s\" is being used by something else.", "Sorry, but the folder \"%s\" cannot be deleted.", "Sorry, but the folder \"%s\" is being used by something else.", "Delete marked bookmarks", "Delete marked bookmarks?", "Delete folder", "Delete the folder \"%s\" and all bookmarks in it?", "Delete bookmark", "Delete this bookmark?", "Clear all bookmarks", "Do you really want to remove all bookmarks?" };
static struct listbox_ops bookmarks_listbox_ops = { &lock_bookmark, &unlock_bookmark, &is_bookmark_used, &get_bookmark_text, &get_bookmark_info, &get_bookmark_uri, &get_bookmark_root, 0, &can_delete_bookmark, &delete_bookmark_item, 0, &bookmarks_messages };
static struct bookmark *move_cache_root_avoid;
static struct hierbox_browser_button bookmark_buttons[8] = { { "~Goto", &push_hierbox_goto_button, 1 }
, { "~Edit", &push_edit_button, 0 }
, { "~Delete", &push_hierbox_delete_button, 0 }
, { "~Add", &push_add_button, 0 }
, { "Add se~parator", &push_add_separator_button, 0 }
, { "Add ~folder", &push_add_folder_button, 0 }
, { "~Move", &push_move_button, 0 }
, { "~Search", &push_search_button, 1 }
 };
struct hierbox_browser bookmark_browser = { "Bookmark manager", 0, bookmark_buttons, 8, { &bookmark_browser.boxes, &bookmark_browser.boxes }
, { &bookmark_browser.dialogs, &bookmark_browser.dialogs }
, { 0, 0, { &bookmark_browser.root.child, &bookmark_browser.root.child }
, 1, -1, 1, 0 }
, &bookmarks_listbox_ops, { 0, 0, 0, 0, 0, 0, 0 }
, 0 };
static unsigned char *bm_last_searched_title;
static unsigned char *bm_last_searched_url;
void lock_bookmark( struct listbox_item *item )
{
  item->udata[2]++;
  return;
}
void unlock_bookmark( struct listbox_item *item )
{
  item->udata[2]--;
  return;
}
int is_bookmark_used( struct listbox_item *item )
{
  return item->udata[2] != 0;
}
unsigned char *get_bookmark_text( struct listbox_item *item, struct terminal *term )
{
  int utf8_cp = get_cp_index( "UTF-8" );
  int term_cp = get_terminal_codepage( term );
  struct conv_table *convert_table = get_translation_table( utf8_cp, get_terminal_codepage( term ) );
  if ( get_translation_table( utf8_cp, get_terminal_codepage( term ) ) )
  {
    convert_string_elinks( &convert_table[0], &item->udata[5], strlen( &item->udata[5] ), term_cp, CSM_NONE, 0, 0, 0 );
  }
  return convert_string_elinks( &convert_table[0], &item->udata[5], 0, term_cp, CSM_NONE, 0, 0, 0 );
}
void add_converted_bytes_to_string( void *data, unsigned char *buf, int buflen )
{
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    if ( buf && ((int*)data)[0] && buflen >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
      errline = 255;
      elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( buflen == 0 )
    {
      return;
    }
    ((int*)data)[1] = ((int*)data)[1];
    if ( 0 < ( ( ((int*)data)[1] + buflen + 256 ) & -256 ) )
    {
      *ebp_28 = ((int*)data)[1] + buflen;
      *ebp_32 = 0;
      if ( mem_realloc( &((int*)data)[0], 0 ) == 0 )
      {
        return;
      }
      data = mem_realloc( &((int*)data)[0], 0 );
      memset( ((int*)data)[0] + 0, 0, ( ( ((int*)data)[1] + buflen + 256 ) & -256 ) - 0 );
    }
    if ( ((int*)data)[0] )
    {
      memcpy( ((int*)data)[1] + ((int*)data)[0], buf, buflen );
      ((int*)data)[ ((int*)data)[1] + buflen ] = 0;
      ((int*)data)[1] += buflen;
      return;
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
unsigned char *get_bookmark_info( struct listbox_item *item, struct terminal *term )
{
  int eax;
  int edx;
  int utf8_cp = get_cp_index( "UTF-8" );
  int term_cp = get_terminal_codepage( term );
  struct conv_table *convert_table;
  struct string info;
  if ( item->type != BI_FOLDER && get_translation_table( utf8_cp, get_terminal_codepage( term ) ) && init_string( &info ) )
  {
    add_format_to_string( &info, "%s: " );
    convert_string_elinks( &convert_table[0], &item->udata[5], strlen( &item->udata[5] ), term_cp, CSM_NONE, 0, &add_converted_bytes_to_string, (void*)info.source );
    add_format_to_string( &info, "\n%s: " );
    convert_string_elinks( &convert_table[0], &item->udata[6], strlen( &item->udata[6] ), term_cp, CSM_NONE, 0, &add_converted_bytes_to_string, (void*)info.source );
    return info.source;
  }
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
struct uri *get_bookmark_uri( struct listbox_item *item )
{
  if ( item->udata[6] == 0 || *(char*)(item->udata[6]) == 0 )
  {
    return 0;
  }
  return get_translated_uri( &item->udata[6], 0 );
}
struct listbox_item *get_bookmark_root( struct listbox_item *item )
{
  int eax;
  return item->udata[3] ? &item->udata[3] : 0;
}
int can_delete_bookmark( struct listbox_item *item )
{
  return 1;
}
void delete_bookmark_item( struct listbox_item *item, int last )
{
  struct bookmark *bookmark = &item->udata[0];
  if ( assert_failed == 0 )
  {
    assert_failed = bookmark->object.refcount != 0;
    if ( bookmark->object.refcount )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bookmarks/dialogs.c";
      errline = 138;
      elinks_internal( "assertion !is_object_used(bookmark) failed!" );
    }
  }
  delete_bookmark( &bookmark[0] );
  if ( last )
  {
    *ebp_8 = ebx;
  }
  return;
}
widget_handler_status_T push_add_button( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  launch_bm_add_doc_dialog( &dlg_data->box.width, dlg_data, &dlg_data->dlg->udata[0] );
  return 0;
}
widget_handler_status_T push_search_button( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  int edx;
  if ( bm_last_searched_title && bm_last_searched_url && get_translation_table( get_cp_index( "UTF-8" ), get_terminal_codepage( &dlg_data->box.width ) ) )
  {
    *ebp_36 = ebp_36;
    if ( eax )
    {
      if ( edx == 0 )
        mem_free( (void*)eax );
      else
      {
        do_edit_dialog( &esi, 1, "Search bookmarks", &edx, eax, ebp_32, &dlg_data[0], &bookmark_search_do, 0, 0, EDIT_DLG_SEARCH );
        mem_free( ebp_36 );
        mem_free( &edi );
        return 0;
      }
    }
    else
    if ( edx )
      mem_free( &edx );
  }
  do_edit_dialog( &dlg_data->box.width, 1, "Search bookmarks", 0, 0, &dlg_data->dlg->udata[0], &dlg_data[0], &bookmark_search_do, 0, 0, EDIT_DLG_SEARCH );
  return 0;
}
void do_add_bookmark( struct terminal *term, struct dialog_data *dlg_data, unsigned char *title, unsigned char *url )
{
  int term_cp = box[0].next;
  struct bookmark *bm;
  struct bookmark *selected;
  struct listbox_data *box;
  if ( dlg_data[0] && box->sel )
  {
    selected = &box[1].next[0].next[0];
    if ( box->top != 1 || ( ( box->items & 1 ) & 255 ) == 0 )
      bm = selected->root;
  }
  else
  {
    selected = 0;
    bm = 0;
  }
  box = &url[0];
  if ( box[0].next )
  {
    if ( selected[0] && box->sel != selected[0].next && selected->box_item && bm->box_item )
    {
      box->prev = box->prev;
      &bm->box_item->prev = &bm->box_item[0];
      bm->prev = bm->prev;
      &bm->prev = &bm;
      bm->prev = &selected[0];
      bm = &selected;
      selected = &bm;
      bm->prev = &bm[0];
      &bm->box_item = &selected->box_item[0];
      bm->box_item->prev = selected->box_item;
      &selected->box_item = bm->box_item;
      box = &bm->box_item->next;
      bm->box_item->prev = bm->box_item;
    }
    write_bookmarks(  );
    if ( dlg_data[0].win )
    {
      box = &bm->box_item->next;
      listbox_sel( &dlg_data->widgets_data->info.field.cur_hist[0].next[0], bm->box_item );
    }
  }
  return;
}
void do_add_folder( struct dialog_data *dlg_data, unsigned char *foldername )
{
  int eax;
  int ecx;
  dlg_data = 0;
}
widget_handler_status_T push_add_folder_button( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  input_dialog( &dlg_data->box.width, 0, "Add folder", "Folder name", (void*)dlg_data, 0, 1024, 0, 0, 0, 0, &do_add_folder, 0 );
  return 0;
}
widget_handler_status_T push_add_separator_button( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  int eax;
  int edx;
  do_add_bookmark( &dlg_data->box.width, dlg_data, "-", "" );
  redraw_dialog( dlg_data, 1 );
  return 0;
}
void bookmark_edit_done( void *data )
{
  struct bookmark *bm = &((int*)data)[2];
  int term_cp;
  update_bookmark( &bm[0], get_terminal_codepage( &((int*)data)[1] ), &((int*)data)[12], &((int*)data)[24] );
  bm->object.refcount--;
}
void bookmark_edit_cancel( struct dialog *dlg )
{
  struct bookmark *bm = &dlg->udata2[0];
  dlg->udata2[2]--;
  return;
}
widget_handler_status_T push_edit_button( struct dialog_data *dlg_data, struct widget_data *edit_btn )
{
  int eax;
  int ecx;
  struct listbox_data *box;
  &box[0] = &dlg_data->widgets_data->widget[0].ops[0].display[0];
  &box[0] = &box->sel->next;
  if ( box->sel && box[0] )
  {
    unsigned char *title;
    unsigned char *url;
    &box[0] = &box[1];
    title[0] = box[0].next;
    &box[0] = &box[1];
    url[0] = box[0].next;
    &box[0] = box[0].next != 0;
    if ( box[0].next )
    {
      if ( box[0].next & 255 )
      {
        box[1].ops += 0;
        &box[0] = &dlg_data->box.width;
        do_edit_dialog( &dlg_data->box.width, 1, "Edit bookmark", (unsigned char*)box[0].next, &url[0], &dlg_data->dlg->udata[0], &dlg_data[0], &bookmark_edit_done, &bookmark_edit_cancel, (void*)box[1].next, EDIT_DLG_ADD );
        *ebp_32 = box[0].next;
      }
      else
      {
        if ( ( box[0].next != 0 ) & 255 )
        {
          mem_free( &url[0] );
        }
      }
    }
    else
    if ( box[0].next & 255 )
      goto B14;
B14:    mem_free( &title[0] );
  }
  &box[0] = 0;
  return 0;
}
void update_depths( struct listbox_item *parent )
{
  struct listbox_item *item = &parent->child.next[0];
  if ( parent->child.next != parent->child.next )
  {
    do
    {
      item->depth = parent->depth + 1;
      if ( item->type == BI_FOLDER )
      {
        update_depths( &item[0] );
        item = &item;
        if ( item->next == parent->child.next )
        {
          parent = &parent[0];
          break;
        }
      }
      else
      {
        item = &item;
      }
    }
    while ( item->next != parent->child.next );
  }
  return;
}
enum move_bookmark_flags  do_move_bookmark( struct bookmark *dest, int insert_as_child, struct list_head_elinks *src, struct listbox_data *box )
{
#error unstructured control flow
}
widget_handler_status_T push_move_button( struct dialog_data *dlg_data, struct widget_data *blah )
{
  int eax;
  int edx;
  struct listbox_data *box;
  struct bookmark *dest;
  int insert_as_child;
  enum move_bookmark_flags  result = dlg_data->widgets_data;
  if ( result )
  {
    insert_as_child = 0;
    if ( result == 1 )
      insert_as_child = result & 1;
    move_cache_root_avoid = 0;
  {
    struct bookmark *bm = dest->root;
    if ( dest->root )
    {
      bm = 0;
      do
      {
        bm = bm->root;
      }
      while ( bm->root );
      move_cache_root_avoid = &bm[0];
    }
    if ( ( result & 1 ) & 255 )
    {
      bookmarks_set_dirty(  );
      write_bookmarks(  );
      update_hierbox_browser( &bookmark_browser );
      result = MOVE_BOOKMARK_NONE;
      return 0;
    }
    result = dlg_data->box.width;
    info_box( &dlg_data->box.width, 0 );
  }
  }
  result = MOVE_BOOKMARK_NONE;
  return 0;
}
void bookmark_manager( struct session *ses )
{
  free_last_searched_bookmark(  );
  bookmark_browser.expansion_callback = &bookmarks_set_dirty;
  hierbox_browser( &bookmark_browser, ses );
  return;
}
int test_search( struct listbox_item *item, void *data_, int *offset )
{
  if ( ((int*)data_)[3] == 0 )
  {
    ((int*)data_)[2] = 0;
    ((int*)data_)[3]++;
    return 0;
  }
{
  struct bookmark *bm = &item->udata[0];
  if ( assert_failed == 0 )
  {
    if ( ((int*)data_)[1] && ((int*)data_)[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bookmarks/dialogs.c";
      errline = 664;
      elinks_internal( "assertion ctx-&gt;title && ctx-&gt;url failed!" );
    }
  }
  if ( *(char*)(((int*)data_)[0]) && c_strcasestr( (char*)bm->url, &((int*)data_)[0] ) )
    ((int*)data_)[2] = 1;
  else
  {
    ((int*)data_)[2] = 0;
    if ( ((int*)data_)[1] )
    {
      struct conv_table *convert_table;
      unsigned char *title;
      if ( get_translation_table( ((int*)data_)[4], ((int*)data_)[5] ) && get_translation_table( ((int*)data_)[4], ((int*)data_)[5] ) )
      {
        ((int*)data_)[2] = strcasestr( &title[0], &((int*)data_)[1] ) != 0;
        mem_free( &title[0] );
      }
      if ( ((int*)data_)[2] )
        goto B20;
      ((int*)data_)[3]++;
      return 0;
    }
    else
    {
      ((int*)data_)[3]++;
      return 0;
    }
  }
B20:  offset[0] = 0;
  ((int*)data_)[3]++;
  return 0;
}
}
void free_last_searched_bookmark( void )
{
  if ( bm_last_searched_title )
    mem_free( (void*)bm_last_searched_title );
  bm_last_searched_title = 0;
  if ( bm_last_searched_url )
  {
    mem_free( (void*)bm_last_searched_url );
  }
  bm_last_searched_url = 0;
  return;
}
void bookmark_search_do( void *data )
{
  struct bookmark_search_ctx ctx;
  struct listbox_data *box;
  struct dialog_data *dlg_data;
  struct conv_table *convert_table;
  int term_cp;
  unsigned char *title_utf8;
  if ( assert_failed == 0 )
  {
    ctx.url = 0;
    ctx.title = 0;
    ctx.found = 0;
    ctx.offset = 0;
    ctx.utf8_cp = -1;
    ctx.system_cp = -1;
    assert_failed = ((int*)data)[1] == 0;
    if ( !(_Bool)( ((int*)data)[1] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bookmarks/dialogs.c";
      errline = 750;
      elinks_internal( "assertion dlg-&gt;udata != NULL failed: Bookmark search with NULL udata in dialog" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    dlg_data = &((int*)data)[1];
    term_cp = get_terminal_codepage( &((int*)data)[1] );
    ctx.system_cp = get_cp_index( "System" );
    ctx.utf8_cp = get_cp_index( "UTF-8" );
    if ( get_translation_table( term_cp, ctx.system_cp ) )
    {
      title_utf8[0] = 0;
      ctx.title = convert_string_elinks( &convert_table[0], &((int*)data)[12], strlen( &((int*)data)[12] ), ctx.system_cp, CSM_NONE, 0, 0, 0 );
      if ( ctx.title )
      {
        if ( get_translation_table( term_cp, ctx.utf8_cp ) )
        {
          ctx.url = (unsigned char*)eax;
          if ( ctx.url )
          {
            if ( convert_string_elinks( &convert_table[0], &((int*)data)[12], strlen( &((int*)data)[12] ), ctx.utf8_cp, CSM_NONE, 0, 0, 0 ) )
            {
              if ( bm_last_searched_title )
                mem_free( (void*)bm_last_searched_title );
              bm_last_searched_title = stracpy( &title_utf8[0] );
              if ( bm_last_searched_title )
              {
                if ( bm_last_searched_url )
                  mem_free( (void*)bm_last_searched_url );
                bm_last_searched_url = stracpy( ctx.url );
                if ( bm_last_searched_url == 0 )
                {
                  if ( bm_last_searched_title )
                    mem_free( (void*)bm_last_searched_title );
                  bm_last_searched_title = 0;
                {
                  void *p = (void*)ctx.title;
                  if ( ctx.title )
                    mem_free( &((int*)p)[0] );
                {
                  void *p = (void*)ctx.url;
                  if ( ctx.url )
                    mem_free( &((int*)p)[0] );
                  if ( title_utf8[0] )
                  {
                    mem_free( &title_utf8[0] );
                  }
                  return;
                }
                }
                }
                else
                {
                  &box->sel = box->sel;
                  traverse_listbox_items_list( *(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 12), get_listbox_widget_data( &dlg_data->widgets_data ), 0, 0, &test_search, (void*)ctx->url );
                  if ( ctx.found )
                    listbox_sel_move( &dlg_data->widgets_data, ctx->offset - 1 );
                }
              }
            }
          }
        }
      }
    }
    title_utf8[0] = 0;
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void bookmark_add_add( void *data )
{
  int eax;
  int ecx;
  int edx;
  data = &((int*)data)[24];
}
void launch_bm_add_dialog( struct terminal *term, struct dialog_data *parent, struct session *ses, unsigned char *title, unsigned char *url )
{
  do_edit_dialog( term, 1, "Add bookmark", title, url, ses, parent, &bookmark_add_add, 0, (void*)term, EDIT_DLG_ADD );
  return;
}
void launch_bm_add_doc_dialog( struct terminal *term, struct dialog_data *parent, struct session *ses )
{
  launch_bm_add_dialog( term, parent, ses, 0, 0 );
  return;
}
void launch_bm_add_link_dialog( struct terminal *term, struct dialog_data *parent, struct session *ses )
{
  unsigned char title[1024], url[1024];
  launch_bm_add_dialog( term, parent, ses, get_current_link_name( ses, title, 1024 ), get_current_link_url( ses, url, 1024 ) );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  *ebp_12 = ebx;
  return;
}
void bookmark_terminal_tabs_ok( void *term_void, unsigned char *foldername )
{
  int from_cp = get_terminal_codepage( &term_void[0] );
  int to_cp;
  struct conv_table *convert_table;
  unsigned char *converted;
  if ( get_translation_table( from_cp, get_cp_index( "UTF-8" ) ) && convert_string_elinks( &convert_table[0], foldername, strlen( (char*)foldername ), to_cp, CSM_NONE, 0, 0, 0 ) )
  {
    bookmark_terminal_tabs( &((int*)term_void)[0], convert_string_elinks( &convert_table[0], foldername, strlen( (char*)foldername ), to_cp, CSM_NONE, 0, 0, 0 ) );
    term_void = &converted[0];
  }
  return;
}
void bookmark_terminal_tabs_dialog( struct terminal *term )
{
  struct string string;
  if ( init_string( &string ) )
  {
    if ( 0 != 83 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Saved session" );
    }
    add_to_string( &string, gettext( "Saved session" ) );
    add_to_string( &string, " - " );
    add_date_to_string( &string, *(int*)(get_opt_( config_options, (unsigned char*)config_options )), 0 );
    input_dialog( &term[0], 0, "Bookmark tabs", "Enter folder name", (void*)term[0].next, 0, 1024, string.source, 0, 0, 0, &bookmark_terminal_tabs_ok, 0 );
    done_string( &string );
  }
  return;
}
#if 0
#endif
