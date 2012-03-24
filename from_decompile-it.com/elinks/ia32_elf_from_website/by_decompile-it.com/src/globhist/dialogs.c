#include "dialogs.c.h"
static struct listbox_ops_messages globhist_messages = { "Sorry, but history entry \"%s\" cannot be deleted.", "Sorry, but history entry \"%s\" is being used by something else.", 0, 0, "Delete marked history entries", "Delete marked history entries?", 0, 0, "Delete history entry", "Delete this history entry?", "Clear all history entries", "Do you really want to remove all history entries?" };
static struct listbox_ops gh_listbox_ops = { &lock_globhist_item, &unlock_globhist_item, &is_globhist_item_used, &get_globhist_item_text, &get_globhist_item_info, &get_globhist_item_uri, &get_globhist_item_root, 0, &can_delete_globhist_item, &delete_globhist_item, 0, &globhist_messages };
static struct hierbox_browser_button globhist_buttons[7] = { { "~Goto", &push_hierbox_goto_button, 1 }
, { "~Info", &push_hierbox_info_button, 1 }
, { "~Bookmark", &push_bookmark_button, 0 }
, { "~Delete", &push_hierbox_delete_button, 0 }
, { "~Search", &push_search_button, 1 }
, { "~Toggle display", &push_toggle_display_button, 1 }
, { "C~lear", &push_hierbox_clear_button, 0 }
 };
struct hierbox_browser globhist_browser = { "Global history manager", 0, globhist_buttons, 7, { &globhist_browser.boxes, &globhist_browser.boxes }
, { &globhist_browser.dialogs, &globhist_browser.dialogs }
, { 0, 0, { &globhist_browser.root.child, &globhist_browser.root.child }
, 1, -1, 1, 0 }
, &gh_listbox_ops, { 0, 0, 0, 0, 0, 0, 0 }
, 0 };
void lock_globhist_item( struct listbox_item *item )
{
  item->udata[2]++;
  return;
}
void unlock_globhist_item( struct listbox_item *item )
{
  item->udata[2]--;
  return;
}
int is_globhist_item_used( struct listbox_item *item )
{
  return item->udata[2] != 0;
}
unsigned char *get_globhist_item_text( struct listbox_item *box_item, struct terminal *term )
{
  struct global_history_item *item = &box_item->udata[0];
  struct string info;
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) && item->title[0] )
  {
    stracpy( item->title );
  }
  if ( init_string( &info ) )
  {
    add_string_uri_to_string( &info, item->url, URI_PUBLIC );
    return info.source;
  }
  return (unsigned char*)eax;
}
unsigned char *get_globhist_item_info( struct listbox_item *box_item, struct terminal *term )
{
  int eax;
  int edx;
  struct string info;
  if ( box_item->type != BI_FOLDER && init_string( &info ) )
  {
    add_format_to_string( &info, "%s: %s" );
    add_format_to_string( &info, "\n%s: %s" );
    add_format_to_string( &info, "\n%s: %s" );
    return info.source;
  }
}
struct listbox_item *get_globhist_item_root( struct listbox_item *box_item )
{
  return 0;
}
struct uri *get_globhist_item_uri( struct listbox_item *item )
{
  return get_uri( &item->udata[5], 0 );
}
int can_delete_globhist_item( struct listbox_item *item )
{
  return 1;
}
void delete_globhist_item( struct listbox_item *item, int last )
{
  struct global_history_item *historyitem = &item->udata[0];
  if ( assert_failed == 0 )
  {
    assert_failed = historyitem->object.refcount != 0;
    if ( historyitem->object.refcount )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/globhist/dialogs.c";
      errline = 98;
      elinks_internal( "assertion !is_object_used(historyitem) failed!" );
      item = &historyitem[0].next[0];
    }
    item = &historyitem[0].next[0];
  }
  else
  {
    item = &historyitem[0].next[0];
  }
}
unsigned char *_( unsigned char *msg, struct terminal *term )
{
  if ( msg[0] && msg )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
    msg[0] = gettext( &msg[0] );
  }
  return &msg[0];
}
void history_search_do( void *data )
{
  struct listbox_item *item = &globhist_browser.root.child.next[0];
  struct listbox_data *box = &((int*)data)[24];
  if ( box[0] && globhist_browser.root.child.next != globhist_browser.root.child.next && globhist_browser.boxes.next != globhist_browser.boxes.next )
  {
    do
    {
      box->top = &item[0];
      box->sel = &item[0];
      box = &box;
    }
    while ( globhist_browser->boxes.next != box->next );
  }
  return;
}
widget_handler_status_T push_search_button( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  do_edit_dialog( &dlg_data->box.width, 1, "Search history", gh_last_searched_title, gh_last_searched_url, &dlg_data->dlg->udata[0], dlg_data, &history_search_do, 0, 0, EDIT_DLG_SEARCH );
  return 0;
}
widget_handler_status_T push_toggle_display_button( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  *(int*)(get_opt_( config_options, (unsigned char*)config_options )) = *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0;
  update_hierbox_browser( &globhist_browser );
  return 0;
}
widget_handler_status_T push_bookmark_button( struct dialog_data *dlg_data, struct widget_data *some_useless_info_button )
{
  int edx;
  struct listbox_data *box;
  struct terminal *term;
  struct global_history_item *historyitem;
  &box[0] = &dlg_data->widgets_data->widget[0].ops[0].display[0];
  term = &dlg_data->box.width;
  &box[0] = &box->sel->next;
  if ( box->sel && box[1] )
  {
    &box[0] = &box->top->next;
    launch_bm_add_dialog( &term, 0, 0, (unsigned char*)box->top, &box->sel_offset );
  }
  &box[0] = 0;
  return 0;
}
void history_manager( struct session *ses )
{
  if ( gh_last_searched_title )
    mem_free( (void*)gh_last_searched_title );
  gh_last_searched_title = 0;
  if ( gh_last_searched_url )
    mem_free( (void*)gh_last_searched_url );
  gh_last_searched_url = 0;
  hierbox_browser( &globhist_browser, ses );
  return;
}
#if 0
#endif
