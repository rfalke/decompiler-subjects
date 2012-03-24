#include "dialogs.c.h"
static struct listbox_ops_messages cache_messages = { "Sorry, but cache entry \"%s\" cannot be deleted.", "Sorry, but cache entry \"%s\" is being used by something else.", 0, 0, "Delete marked cache entries", "Delete marked cache entries?", 0, 0, "Delete cache entry", "Delete this cache entry?", 0, 0 };
static struct listbox_ops cache_entry_listbox_ops = { &lock_cache_entry, &unlock_cache_entry, &is_cache_entry_used, &get_cache_entry_text, &get_cache_entry_info, &get_cache_entry_uri, &get_cache_entry_root, &match_cache_entry, &can_delete_cache_entry, &delete_cache_entry_item, 0, &cache_messages };
static struct hierbox_browser_button cache_buttons[4] = { { "~Info", &push_hierbox_info_button, 1 }
, { "~Goto", &push_hierbox_goto_button, 1 }
, { "~Delete", &push_hierbox_delete_button, 1 }
, { "~Search", &push_hierbox_search_button, 1 }
 };
struct hierbox_browser cache_browser = { "Cache manager", 0, cache_buttons, 4, { &cache_browser.boxes, &cache_browser.boxes }
, { &cache_browser.dialogs, &cache_browser.dialogs }
, { 0, 0, { &cache_browser.root.child, &cache_browser.root.child }
, 1, -1, 1, 0 }
, &cache_entry_listbox_ops, { 0, 0, 0, 0, 0, 0, 0 }
, 0 };
void lock_cache_entry( struct listbox_item *item )
{
  item->udata[2]++;
  return;
}
void unlock_cache_entry( struct listbox_item *item )
{
  item->udata[2]--;
  return;
}
int is_cache_entry_used( struct listbox_item *item )
{
  return item->udata[2] != 0;
}
unsigned char *get_cache_entry_text( struct listbox_item *item, struct terminal *term )
{
  term = -31305;
  item = &item->udata[5];
}
unsigned char *get_cache_entry_info( struct listbox_item *item, struct terminal *term )
{
  int eax;
  int edx;
  struct string msg;
  if ( item->type != BI_FOLDER && init_string( &msg ) )
  {
    add_to_string( &msg, _( "URL", &term[0] ) );
    add_to_string( &msg, ": " );
    add_uri_to_string( &msg, &item->udata[5], URI_PUBLIC );
    if ( item->udata[6] != item->udata[5] )
    {
      add_format_to_string( &msg, "\n%s: " );
      add_uri_to_string( &msg, &item->udata[6], URI_PUBLIC );
    }
    if ( item->udata[7] )
    {
      add_format_to_string( &msg, "\n%s: " );
      add_uri_to_string( &msg, &item->udata[7], URI_PUBLIC );
      if ( ( *(char*)(item->udata + 92) & 4 ) & 255 )
        add_to_string( &msg, " (GET)" );
    }
    add_format_to_string( (struct string*)_( "Size", &term[0] ), &item->udata[16] );
    add_format_to_string( (struct string*)_( "Loaded size", &term[0] ), &item->udata[18] );
    if ( item->udata[9] )
    {
      add_format_to_string( &msg, _( "Content type", &term[0] ) );
    }
    if ( item->udata[10] )
    {
      add_format_to_string( &msg, _( "Last modified", &term[0] ) );
    }
    if ( item->udata[11] )
      add_format_to_string( &msg, "\n%s: %s" );
    if ( item->udata[12] )
    {
      add_format_to_string( &msg, _( "SSL Cipher", &term[0] ) );
    }
    if ( item->udata[13] )
    {
      add_format_to_string( &msg, _( "Encoding", &term[0] ) );
    }
    if ( (unsigned char)( *(char*)(item->udata + 92) & 24 ) != 16 )
    {
      add_char_to_string( &msg, 10 );
      add_to_string( &msg, _( "Flags", &term[0] ) );
      add_to_string( &msg, ": " );
      if ( ( *(char*)(item->udata + 92) & 8 ) & 255 )
      {
        add_to_string( &msg, _( "incomplete", &term[0] ) );
        add_char_to_string( &msg, 32 );
      }
      if ( ( ( item->udata[23] & 16 ) & 255 ) == 0 )
      {
        add_to_string( &msg, _( "invalid", &term[0] ) );
      }
    }
    if ( ( item->udata[23] & 1 ) & 255 )
    {
      time_t expires = timeval_to_seconds( item->udata + 84 );
      add_format_to_string( &msg, "\n%s: " );
      add_date_to_string( &msg, *(int*)(get_opt_( config_options, (unsigned char*)config_options )), &expires );
      return msg.source;
    }
    else
    {
      return msg.source;
    }
  }
  else
  {
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
struct uri *get_cache_entry_uri( struct listbox_item *item )
{
  item->udata[5]++;
  return &item->udata[5];
}
struct listbox_item *get_cache_entry_root( struct listbox_item *item )
{
  return 0;
}
int can_delete_cache_entry( struct listbox_item *item )
{
  return 1;
}
void delete_cache_entry_item( struct listbox_item *item, int last )
{
  struct cache_entry *cached = &item->udata[0];
  if ( assert_failed == 0 )
  {
    assert_failed = cached->object.refcount != 0;
    if ( cached->object.refcount )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/dialogs.c";
      errline = 167;
      elinks_internal( "assertion !is_object_used(cached) failed!" );
      item = &cached[0].next[0];
    }
    item = &cached[0].next[0];
  }
  else
  {
    item = &cached[0].next[0];
  }
}
enum listbox_match  match_cache_entry( struct listbox_item *item, struct terminal *term, unsigned char *text )
{
  struct cache_entry *cached = &item->udata[0];
  if ( !c_strcasestr( (char*)cached->uri[0].string, (char*)text ) && cached->head )
  {
    return c_strcasestr( (char*)cached->head, &text[0] ) == 0;
  }
  return eax[0];
}
void cache_manager( struct session *ses )
{
  hierbox_browser( &cache_browser, ses );
  return;
}
#if 0
#endif
