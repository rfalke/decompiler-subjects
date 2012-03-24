#include "dialogs.c.h"
struct list_head_elinks cookie_queries = { &cookie_queries, &cookie_queries };
static struct listbox_ops_messages cookies_messages = { "Sorry, but cookie \"%s\" cannot be deleted.", "Sorry, but cookie \"%s\" is being used by something else.", "Sorry, but cookie domain \"%s\" cannot be deleted.", "Sorry, but cookie domain \"%s\" is being used by something else.", "Delete marked cookies", "Delete marked cookies?", "Delete domain's cookies", "Delete all cookies from domain \"%s\"?", "Delete cookie", "Delete this cookie?", "Clear all cookies", "Do you really want to remove all cookies?" };
static struct listbox_ops cookies_listbox_ops = { &lock_cookie, &unlock_cookie, &is_cookie_used, &get_cookie_text, &get_cookie_info, 0, &get_cookie_root, 0, &can_delete_cookie, &delete_cookie_item, 0, &cookies_messages };
static struct hierbox_browser_button cookie_buttons[7] = { { "~Info", &push_hierbox_info_button, 1 }
, { "~Add", &push_add_button, 1 }
, { "Add ~server", &push_add_server_button, 1 }
, { "~Edit", &push_edit_button, 1 }
, { "~Delete", &push_hierbox_delete_button, 1 }
, { "C~lear", &push_hierbox_clear_button, 1 }
, { "Sa~ve", &push_save_button, 0 }
 };
struct hierbox_browser cookie_browser = { "Cookie manager", 0, cookie_buttons, 7, { &cookie_browser.boxes, &cookie_browser.boxes }
, { &cookie_browser.dialogs, &cookie_browser.dialogs }
, { 0, 0, { &cookie_browser.root.child, &cookie_browser.root.child }
, 1, -1, 1, 0 }
, &cookies_listbox_ops, { 0, 0, 0, 0, 0, 0, 0 }
, 0 };
void add_cookie_info_to_string( struct string *string, struct cookie *cookie, struct terminal *term )
{
  if ( 0 != 78 )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
    gettext( "Name" );
  }
  add_format_to_string( &string[0], "\n%s: %s" );
  if ( 0 != 86 )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
    gettext( "Value" );
  }
  add_format_to_string( &string[0], "\n%s: %s" );
  if ( 0 != 68 )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
    gettext( "Domain" );
  }
  add_format_to_string( &string[0], "\n%s: %s" );
  if ( 0 != 80 )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
    gettext( "Path" );
  }
  add_format_to_string( &string[0], "\n%s: %s" );
  if ( cookie->expires )
  {
    if ( 0 != 69 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Expires" );
    }
    add_format_to_string( &string[0], "\n%s: " );
    add_date_to_string( &string[0], *(int*)(get_opt_( config_options, (unsigned char*)config_options )), &cookie->expires );
  }
  else
  {
    if ( 0 != 69 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Expires" );
    }
    add_format_to_string( &string[0], "\n%s: " );
    if ( 0 != 97 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "at quit time" );
    }
    add_to_string( &string[0], gettext( "at quit time" ) );
  }
  if ( *(char*)(cookie->secure == 0 ? "yes" : "no") )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
  }
  if ( 0 != 83 )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
    gettext( "Secure" );
  }
  add_format_to_string( "\n%s: %s", gettext( "Secure" ) );
  return;
}
void accept_cookie_in_msg_box( void *cookie_ )
{
}
void reject_cookie_in_msg_box( void *cookie_ )
{
}
void accept_cookie_dialog( struct session *ses, void *data )
{
  int eax;
  int ecx;
  int edx;
  struct string string;
  if ( assert_failed == 0 )
  {
    assert_failed = ses[0].next == 0;
    if ( !(_Bool)( ses[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/cookies/dialogs.c";
      errline = 73;
      elinks_internal( "assertion ses failed!" );
      cookie_queries.next = cookie_queries.next;
      if ( cookie_queries.next != cookie_queries.next && init_string( &string ) )
      {
        cookie_queries.next[1] = cookie_queries.prev;
        cookie_queries.prev[0] = cookie_queries.next;
        &ses->tab->term = ses->tab->term;
        if ( 0 != 68 )
        {
          if ( ses->tab->term && current_charset != get_terminal_codepage( ses->tab->term ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( ses->tab->term ) ) );
            current_charset = get_terminal_codepage( ses->tab->term );
          }
          gettext( "Do you want to accept a cookie from %s?" );
        }
        add_format_to_string( &string, gettext( "Do you want to accept a cookie from %s?" ) );
        add_to_string( &string, "\n\n" );
        add_cookie_info_to_string( &string, &cookie_queries.next[0], ses->tab->term );
        msg_box( ses->tab->term, 0, MSGBOX_FREE_TEXT, "Accept cookie?", ALIGN_LEFT, string.source, cookie_queries.next, 2 );
      }
      return;
    }
  }
  ebx = cookie_queries.next;
}
void lock_cookie( struct listbox_item *item )
{
  item->udata[2]++;
  return;
}
void unlock_cookie( struct listbox_item *item )
{
  item->udata[2]--;
  return;
}
int is_cookie_used( struct listbox_item *item )
{
  if ( item->type == BI_FOLDER )
  {
    &item[0] = &item->child.next[0];
    if ( item != item->child.next )
    {
      do
      {
        if ( item->udata[2] )
          break;
        &item[0] = &item;
      }
      while ( item->next != item + 8 );
    }
    return 0;
  }
  else
  {
    return item->udata[2] != 0;
  }
}
unsigned char *get_cookie_text( struct listbox_item *item, struct terminal *term )
{
  if ( item->type == BI_FOLDER )
  {
    item = item->udata + 16;
  }
  item = &item->udata[3];
}
unsigned char *get_cookie_info( struct listbox_item *item, struct terminal *term )
{
  int eax;
  int ecx;
  int edx;
  struct cookie_server *server;
  struct string string;
  if ( item->type != BI_FOLDER && init_string( &string ) )
  {
    server = &item->udata[7];
    if ( 0 != 83 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Server" );
    }
    add_format_to_string( &string, "%s: %s" );
    add_cookie_info_to_string( &string, &item->udata[0], &term[0] );
    return string.source;
  }
  else
  {
  }
}
struct listbox_item *get_cookie_root( struct listbox_item *item )
{
  int eax;
  return item->type == BI_FOLDER ? 0 : &item->udata[7];
}
int can_delete_cookie( struct listbox_item *item )
{
  return 1;
}
void delete_cookie_item( struct listbox_item *item, int last )
{
  int edx;
  if ( item->type == BI_FOLDER )
  {
    struct listbox_item *next;
    item = &item->child.next[0];
    next = &item->child.next[0];
    if ( item != item->child.next )
    {
      while ( 1 )
      {
        delete_cookie_item( &item[0], 0 );
        next = &item;
        item = &next;
        if ( next->next == item + 8 )
          break;
        next = &next[0];
      }
    }
    return;
  }
  else
  {
    if ( assert_failed == 0 )
    {
      assert_failed = *(int*)(item->udata + 8) != 0;
      if ( item->udata[2] )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/cookies/dialogs.c";
        errline = 200;
        elinks_internal( "assertion !is_object_used(cookie) failed!" );
      }
      delete_cookie( &item->udata[0] );
    }
  }
}
widget_handler_status_T set_cookie_name( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct cookie *cookie = &dlg_data->dlg->udata[0];
  unsigned char *value;
  value[0] = widget_data->cdata;
  if ( dlg_data->dlg->udata && value[0] )
  {
    if ( cookie->name )
      mem_free( (void*)cookie->name );
    cookie->name = stracpy( &value[0] );
    set_cookies_dirty(  );
    return 0;
  }
  else
  {
    return 1;
  }
}
widget_handler_status_T set_cookie_value( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct cookie *cookie = &dlg_data->dlg->udata[0];
  unsigned char *value;
  value[0] = widget_data->cdata;
  if ( dlg_data->dlg->udata && value[0] )
  {
    if ( cookie->value )
      mem_free( (void*)cookie->value );
    cookie->value = stracpy( &value[0] );
    set_cookies_dirty(  );
    return 0;
  }
  else
  {
    return 1;
  }
}
widget_handler_status_T set_cookie_domain( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct cookie *cookie = &dlg_data->dlg->udata[0];
  unsigned char *value;
  value[0] = widget_data->cdata;
  if ( dlg_data->dlg->udata && value[0] )
  {
    if ( cookie->domain )
      mem_free( (void*)cookie->domain );
    cookie->domain = stracpy( &value[0] );
    set_cookies_dirty(  );
    return 0;
  }
  else
  {
    return 1;
  }
}
widget_handler_status_T set_cookie_expires( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct cookie *cookie = &dlg_data->dlg->udata[0];
  unsigned char *value;
  unsigned char *end;
  long number;
  value[0] = widget_data->cdata;
  if ( dlg_data->dlg->udata && value[0] )
  {
    *(int*)(__errno_location(  )) = 0;
    strtol( &value[0], (char**)&end, 10 );
    if ( *(int*)(__errno_location(  )) == 0 && number >= 0 && end[0] == 0 )
    {
      cookie->expires = number;
      set_cookies_dirty(  );
      return 0;
    }
  }
  return 1;
}
widget_handler_status_T set_cookie_secure( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct cookie *cookie = &dlg_data->dlg->udata[0];
  unsigned char *value;
  unsigned char *end;
  long number;
  value[0] = widget_data->cdata;
  if ( dlg_data->dlg->udata && value[0] )
  {
    *(int*)(__errno_location(  )) = 0;
    strtol( &value[0], (char**)&end, 10 );
    if ( *(int*)(__errno_location(  )) == 0 && end[0] == 0 )
    {
      cookie->secure = strtol( &value[0], (char**)&end, 10 ) != 0;
      set_cookies_dirty(  );
      return 0;
    }
  }
  return 0;
}
void build_edit_dialog( struct terminal *term, struct cookie *cookie )
{
  struct dialog *dlg;
  unsigned char *name, *value, *domain, *expires, *secure;
  unsigned char *dlg_server;
  int length = 0;
  if ( mem_calloc( 1, 5540 ) )
  {
    if ( 0 != 69 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Edit" );
    }
    dlg->title = gettext( "Edit" );
    dlg->udata = (void*)cookie[0].next;
    dlg->layouter = &generic_dialog_layouter;
    dlg->udata2 = 0;
    name = dlg[5].title;
    value = (unsigned char*)dlg[17].layouter;
    domain = &dlg[29].number_of_widgets;
    expires = (unsigned char*)dlg[41].widgets->data;
    secure = (unsigned char*)dlg[53].widgets->info.field.history;
    safe_strncpy( name, cookie->name, 1024 );
    safe_strncpy( value, cookie->value, 1024 );
    safe_strncpy( domain, cookie->domain, 1024 );
    elinks_ulongcat(  );
    length = 0;
    elinks_ulongcat(  );
    if ( 0 != 83 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Server" );
    }
    dlg_server[0] = cookie->server + 16;
    if ( straconcat( gettext( "Server" ) ) == 0 )
    {
      mem_free( (void*)dlg[0].title );
      return;
    }
    else
    {
      add_dlg_text( &dlg[0], straconcat( gettext( "Server" ) ), ALIGN_LEFT, 0 );
      if ( 0 != 78 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Name" );
      }
      add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "Name" ), 0, 0, &set_cookie_name, 1024, (void*)name, 0, INPFIELD_FLOAT );
      if ( 0 != 86 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Value" );
      }
      add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "Value" ), 0, 0, &set_cookie_value, 1024, (void*)value, 0, INPFIELD_FLOAT );
      if ( 0 != 68 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Domain" );
      }
      add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "Domain" ), 0, 0, &set_cookie_domain, 1024, (void*)domain, 0, INPFIELD_FLOAT );
      if ( 0 != 69 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Expires" );
      }
      add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "Expires" ), 0, 0, &set_cookie_expires, 1024, (void*)expires, 0, INPFIELD_FLOAT );
      if ( 0 != 83 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Secure" );
      }
      add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "Secure" ), 0, 0, &set_cookie_secure, 1024, (void*)secure, 0, INPFIELD_FLOAT );
      if ( 0 != 126 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "~OK" );
      }
      add_dlg_button_do( &dlg[0], gettext( "~OK" ), 1, &ok_dialog, 0, 0, 0 );
      if ( 0 != 126 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "~Cancel" );
      }
      add_dlg_button_do( &dlg[0], gettext( "~Cancel" ), 2, &cancel_dialog, 0, 0, 0 );
      if ( assert_failed == 0 )
      {
        assert_failed = dlg->number_of_widgets != 8;
        if ( dlg->number_of_widgets != 8 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/cookies/dialogs.c";
          errline = 375;
          elinks_internal( "assertion 8 == (dlg)-&gt;number_of_widgets failed!" );
        }
      }
      do_dialog( &term[0], &dlg[0], getml( (void*)dlg[0].title ) );
      return;
    }
  }
  else
  {
    return;
  }
}
widget_handler_status_T push_edit_button( struct dialog_data *dlg_data, struct widget_data *button )
{
  int eax;
  int ecx;
  struct listbox_data *box;
  struct terminal *term;
  struct cookie *cookie;
  &box[0] = &dlg_data->widgets_data->widget[0].ops[0].display[0];
  term = &dlg_data->box.width;
  &box[0] = &box->sel->next;
  if ( box->sel && box->top != 1 && box[1] )
  {
    &box[0] = &term[0].next[0];
    build_edit_dialog( &term[0] );
  }
  &box[0] = 0;
  return 0;
}
widget_handler_status_T push_add_button( struct dialog_data *dlg_data, struct widget_data *button )
{
  int eax;
  int edx;
  struct listbox_data *box;
  struct terminal *term = &dlg_data->box.width;
  struct cookie *new_cookie;
  struct cookie_server *server;
  if ( box->sel && *(int*)(*(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 12) + 28) )
  {
    if ( *(int*)(*(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 12) + 16) == 1 )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = *(int*)(*(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 12) + 20) != 0;
        if ( *(int*)(*(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 12) + 20) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/cookies/dialogs.c";
          errline = 407;
          elinks_internal( "assertion box-&gt;sel-&gt;depth == 0 failed!" );
          ebp_32 = box->next;
        }
      }
    }
    else
      server++;
    server->object.refcount = server->object.refcount;
    if ( init_cookie( stracpy( "" ), stracpy( "" ), stracpy( "/" ), stracpy( &server->host[0] ), &server[0] ) )
    {
      accept_cookie( init_cookie( stracpy( "" ), stracpy( "" ), stracpy( "/" ), stracpy( &server->host[0] ), &server[0] ) );
      build_edit_dialog( term, &new_cookie[0] );
    }
  }
  return 0;
}
void add_server_do( void *data )
{
  struct cookie *dummy_cookie;
  if ( data && dummy_cookie[0] )
  {
    data = (void*)dummy_cookie[0].next;
  }
  return;
}
widget_handler_status_T push_add_server_button( struct dialog_data *dlg_data, struct widget_data *button )
{
  struct terminal *term = &dlg_data->box.width;
  struct dialog *dlg = (struct dialog*)mem_calloc( 1, 1204 );
  unsigned char *name;
  unsigned char *text;
  if ( mem_calloc( 1, 1204 ) )
  {
    name[0] = dlg[2].refresh;
    if ( 0 != 65 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Add server" );
    }
    dlg = (struct dialog*)gettext( "Add server" );
    text[0] = "Server name";
    dlg->layouter = &generic_dialog_layouter;
    dlg->udata = 0;
    dlg->udata2 = 0;
    if ( text[0] )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Server name" );
    }
    add_dlg_field_do( &dlg[0], WIDGET_FIELD, &text[0], 0, 0, &check_nonempty, 1024, &name[0], 0, INPFIELD_FLOAT );
    if ( 0 != 126 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "~OK" );
    }
    add_dlg_button_do( &dlg[0], gettext( "~OK" ), 1, &ok_dialog, 0, &add_server_do, &name[0] );
    if ( 0 != 126 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "~Cancel" );
    }
    add_dlg_button_do( &dlg[0], gettext( "~Cancel" ), 2, &cancel_dialog, 0, 0, 0 );
    if ( assert_failed == 0 )
    {
      assert_failed = dlg->number_of_widgets != 3;
      if ( dlg->number_of_widgets != 3 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/cookies/dialogs.c";
        errline = 472;
        elinks_internal( "assertion 3 == (dlg)-&gt;number_of_widgets failed!" );
      }
    }
    do_dialog( &term[0], &dlg[0], getml( (void*)dlg[0].title ) );
    return 0;
  }
  else
  {
    return 0;
  }
}
widget_handler_status_T push_save_button( struct dialog_data *dlg_data, struct widget_data *button )
{
  save_cookies( &dlg_data->box.width );
  return 0;
}
void cookie_manager( struct session *ses )
{
  hierbox_browser( &cookie_browser, ses );
  return;
}
#if 0
#endif
