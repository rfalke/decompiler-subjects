#include "dialogs.c.h"
static struct listbox_ops_messages http_auth_messages = { "Sorry, but auth entry \"%s\" cannot be deleted.", "Sorry, but auth entry \"%s\" is being used by something else.", 0, 0, "Delete marked auth entries", "Delete marked auth entries?", 0, 0, "Delete auth entry", "Delete this auth entry?", "Clear all auth entries", "Do you really want to remove all auth entries?" };
static struct listbox_ops auth_listbox_ops = { &lock_auth_entry, &unlock_auth_entry, &is_auth_entry_used, &get_auth_entry_text, &get_auth_entry_info, &get_auth_entry_uri, &get_auth_entry_root, 0, &can_delete_auth_entry, &delete_auth_entry, 0, &http_auth_messages };
static struct hierbox_browser_button auth_buttons[4] = { { "~Goto", &push_hierbox_goto_button, 1 }
, { "~Info", &push_hierbox_info_button, 1 }
, { "~Delete", &push_hierbox_delete_button, 1 }
, { "C~lear", &push_hierbox_clear_button, 1 }
 };
struct hierbox_browser auth_browser = { "Authentication manager", 0, auth_buttons, 4, { &auth_browser.boxes, &auth_browser.boxes }
, { &auth_browser.dialogs, &auth_browser.dialogs }
, { 0, 0, { &auth_browser.root.child, &auth_browser.root.child }
, 1, -1, 1, 0 }
, &auth_listbox_ops, { 0, 0, 0, 0, 0, 0, 0 }
, 0 };
void auth_ok( void *data )
{
  int edx;
  struct auth_entry *entry = &((int*)data)[2];
  struct session *ses = &((int*)data)[1];
  ((int*)data)[2] = ((int*)data)[2] & -2;
  entry->bits_at_112/*.1_1of4*/ = ( (int)entry->bits_at_112/*.1_1of4*/ & -2 & -3 ) | ( ( entry->user[0] == 0 ? 1 : entry->password[0] != 0 ) * 2 );
  if ( ( ( (unsigned char)( ( (int)entry->bits_at_112/*.1_1of4*/ & -2 & -3 ) | ( ( entry->password[0] != 0 ) * 2 ) ) & 2 ) & 255 ) && ses->history.current )
  {
    struct uri *uri = ses->history.current->vs.uri;
    if ( uri->bits_at_40/*.3_4of4*/ )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/auth/dialogs.c";
      errline = 45;
      if ( elinks_strlcmp( &entry->user[0], -1, uri->user, uri->bits_at_40/*.3_4of4*/ ) )
      {
        uri = get_composed_uri( &uri[0], -32077 );
        if ( get_composed_uri( &uri[0], -32077 ) )
        {
          goto_uri_frame( &ses[0], get_composed_uri( &uri[0], -32077 ), 0, CACHE_MODE_INCREMENT );
          data = (void*)uri[0].string;
        }
      }
    }
    if ( uri->password )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/auth/dialogs.c";
      errline = 46;
      if ( elinks_strlcmp( entry->password[0] + 72, -1, uri->password, (int)uri->bits_at_44/*.1_2of4*/ ) )
      {
        uri = get_composed_uri( &uri[0], -32077 );
      }
    }
  }
  reload( &ses[0], CACHE_MODE_INCREMENT );
  return;
}
void auth_cancel( void *data )
{
  ((int*)data)[28] &= -2;
  data = data;
}
void do_auth_dialog( struct session *ses, void *data )
{
  int edx;
  struct dialog *dlg;
  struct dialog_data *dlg_data;
  struct terminal *term = ses->tab->term;
  struct auth_entry *a;
  unsigned char sticker[1024], *text;
  int sticker_len;
  if ( get_invalid_auth_entry(  ) && !( ( *(char*)(get_invalid_auth_entry(  ) + 112) & 1 ) & 255 ) && get_uri_string( &a->uri->user[0], URI_HTTP_AUTH ) )
  {
    dlg = &a->realm[0];
    if ( 0 != 65 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        *ebp_1076 = text[0];
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Authentication required for %s at %s" );
      text[0] = text[0];
    }
    sticker_len = __snprintf_chk( sticker, 1024, 1, 1024, (char*)gettext( "Authentication required for %s at %s" ), dlg, text[0] );
    mem_free( &text[0] );
    if ( sticker_len <= 1024 )
    {
      dlg = (struct dialog*)mem_calloc( 1, sticker_len + 277 );
      if ( dlg )
      {
        a->bits_at_112/*.1_1of4*/ |= 1;
        dlg->layouter = &generic_dialog_layouter;
        dlg[0].title = _( "Authentication required", &term[0] );
        text[0] = dlg[3].abort;
        memcpy( dlg[3].abort, sticker, sticker_len );
        dlg->udata = (void*)ses[0].next;
        dlg->udata2 = (void*)a[0].next;
        add_dlg_text( dlg, (unsigned char*)dlg[3].abort, ALIGN_LEFT, 0 );
        add_dlg_field_do( dlg, WIDGET_FIELD, _( "Login", &term[0] ), 0, 0, 0, 40, &a->user[0], 0, INPFIELD_FLOAT );
        add_dlg_field_do( dlg, WIDGET_FIELD_PASS, _( "Password", &term[0] ), 0, 0, 0, 40, &a->password[0], 0, INPFIELD_FLOAT );
        add_dlg_button_do( dlg, _( "~OK", &term[0] ), 1, &ok_dialog, 0, &auth_ok, (void*)dlg );
        add_dlg_button_do( dlg, _( "~Cancel", &term[0] ), 2, &ok_dialog, 0, &auth_cancel, (void*)a[0].next );
        if ( assert_failed == 0 )
        {
          assert_failed = dlg->number_of_widgets != 5;
          if ( dlg->number_of_widgets != 5 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/auth/dialogs.c";
            errline = 118;
            elinks_internal( "assertion 5 == (dlg)-&gt;number_of_widgets failed!" );
          }
        }
        if ( dlg_data[0] && a->user[0] && a->password[0] == 0 )
          select_widget_by_id( &dlg_data[0], 1 );
      }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
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
void lock_auth_entry( struct listbox_item *item )
{
  item->udata[2]++;
  return;
}
void unlock_auth_entry( struct listbox_item *item )
{
  item->udata[2]--;
  return;
}
int is_auth_entry_used( struct listbox_item *item )
{
  return item->udata[2] != 0;
}
unsigned char *get_auth_entry_text( struct listbox_item *item, struct terminal *term )
{
  term = -32717;
  item = &item->udata[3];
}
unsigned char *get_auth_entry_info( struct listbox_item *item, struct terminal *term )
{
  int eax;
  int ecx;
  int edx;
  struct string info;
  if ( item->type != BI_FOLDER && init_string( &info ) )
  {
    add_format_to_string( &info, "%s: " );
    add_uri_to_string( &info, &item->udata[3], URI_HTTP_AUTH );
    add_format_to_string( &info, "\n%s: " );
    if ( item->udata[4] )
    {
      if ( strlen( &item->udata[4] ) <= 511 )
        add_bytes_to_string__( &info, &item->udata[4], strlen( &item->udata[4] ) );
      else
      {
        add_bytes_to_string__( &info, &item->udata[4], 512 );
        add_to_string( &info, "..." );
      }
    }
    else
    {
      add_to_string( &info, _( "none", term ) );
    }
    add_format_to_string( &info, "\n%s: %s\n" );
    return info.source;
  }
  else
  {
  }
}
struct uri *get_auth_entry_uri( struct listbox_item *item )
{
  return get_composed_uri( &item->udata[3], URI_HTTP_AUTH );
}
struct listbox_item *get_auth_entry_root( struct listbox_item *box_item )
{
  return 0;
}
int can_delete_auth_entry( struct listbox_item *item )
{
  return 1;
}
void delete_auth_entry( struct listbox_item *item, int last )
{
  struct auth_entry *auth_entry = &item->udata[0];
  if ( assert_failed == 0 )
  {
    assert_failed = auth_entry->object.refcount != 0;
    if ( auth_entry->object.refcount )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/auth/dialogs.c";
      errline = 212;
      elinks_internal( "assertion !is_object_used(auth_entry) failed!" );
      item = &auth_entry[0].next[0];
    }
    item = &auth_entry[0].next[0];
  }
  else
  {
    item = &auth_entry[0].next[0];
  }
}
struct string *add_bytes_to_string__( struct string *string, unsigned char *bytes, int length )
{
  int ecx;
  int edx;
  int newlength;
  if ( assert_failed == 0 )
  {
    if ( bytes[0] && string && length >= 0 )
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
    if ( length )
    {
      newlength = string->length + length;
      if ( ( ( string->length + 255 ) & -256 ) < ( ( newlength + 256 ) & -256 ) )
      {
        ebp_32 = bytes[0];
        *ebp_36 = length;
        if ( mem_realloc( (void*)string->source, length ) )
        {
          string = (struct string*)mem_realloc( (void*)string->source, length );
          memset( string[0].source + ( ( string->length + 255 ) & -256 ), 0, ( ( newlength + 256 ) & -256 ) - ( ( string->length + 255 ) & -256 ) );
        }
        else
        {
          string[0].source = 0;
          return &string[0];
        }
      }
      if ( string->source )
      {
        memcpy( string->length + string->source, &bytes[0], length );
        string->length = newlength;
        return &string[0];
      }
      string[0].source = 0;
      return &string[0];
    }
    else
    {
      return &string[0];
    }
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
void auth_manager( struct session *ses )
{
  hierbox_browser( &auth_browser, ses );
  return;
}
#if 0
#endif
