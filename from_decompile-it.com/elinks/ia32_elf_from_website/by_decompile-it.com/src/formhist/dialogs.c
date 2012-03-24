#include "dialogs.c.h"
static struct listbox_ops_messages formhist_messages = { "Sorry, but form \"%s\" cannot be deleted.", "Sorry, but form \"%s\" is being used by something else.", 0, 0, "Delete marked forms", "Delete marked forms?", 0, 0, "Delete form", "Delete this form?", "Clear all forms", "Do you really want to remove all forms?" };
static struct listbox_ops formhist_listbox_ops = { &lock_formhist_data, &unlock_formhist_data, &is_formhist_data_used, &get_formhist_data_text, &get_formhist_data_info, &get_formhist_data_uri, &get_formhist_data_root, 0, &can_delete_formhist_data, &delete_formhist_data, 0, &formhist_messages };
static struct hierbox_browser_button formhist_buttons[6] = { { "~Login", &push_login_button, 1 }
, { "~Info", &push_hierbox_info_button, 1 }
, { "~Delete", &push_hierbox_delete_button, 1 }
, { "~Toggle saving", &push_toggle_dontsave_button, 0 }
, { "Clea~r", &push_hierbox_clear_button, 1 }
, { "Sa~ve", &push_save_button, 0 }
 };
struct hierbox_browser formhist_browser = { "Form history manager", 0, formhist_buttons, 6, { &formhist_browser.boxes, &formhist_browser.boxes }
, { &formhist_browser.dialogs, &formhist_browser.dialogs }
, { 0, 0, { &formhist_browser.root.child, &formhist_browser.root.child }
, 1, -1, 1, 0 }
, &formhist_listbox_ops, { 0, 0, 0, 0, 0, 0, 0 }
, 0 };
void lock_formhist_data( struct listbox_item *item )
{
  item->udata[2]++;
  return;
}
void unlock_formhist_data( struct listbox_item *item )
{
  item->udata[2]--;
  return;
}
int is_formhist_data_used( struct listbox_item *item )
{
  return item->udata[2] != 0;
}
unsigned char *get_formhist_data_text( struct listbox_item *item, struct terminal *term )
{
  item = item->udata + 21;
}
unsigned char *get_formhist_data_info( struct listbox_item *item, struct terminal *term )
{
  int eax;
  int edx;
  struct string info;
  struct submitted_value *sv;
  if ( item->type != BI_FOLDER && init_string( &info ) )
  {
    add_format_to_string( &info, "%s: %s" );
    add_char_to_string( &info, 10 );
    if ( ( *(char*)(item->udata + 20) & 1 ) & 255 )
    {
      add_to_string( &info, _( "Forms are never saved for this URL.", &term[0] ) );
    }
    else
    {
      add_to_string( &info, _( "Forms are saved for this URL.", &term[0] ) );
    }
    add_char_to_string( &info, 10 );
    sv = &item->udata[3];
    if ( item->udata[3] != item->udata[3] )
    {
      do
      {
        add_format_to_string( &info, "\n[%8s] " );
        add_to_string( &info, sv->name );
        add_to_string( &info, " = " );
        if ( sv->value && sv->value[0] )
        {
          if ( sv->type != FC_PASSWORD )
            add_to_string( &info, sv->value );
          else
            add_to_string( &info, "********" );
        }
        sv = &sv;
      }
      while ( sv->next == item->udata[3] );
      return info.source;
    }
    else
    {
      return info.source;
    }
  }
  else
  {
  }
}
struct uri *get_formhist_data_uri( struct listbox_item *item )
{
  return get_uri( item->udata + 21, 0 );
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
struct listbox_item *get_formhist_data_root( struct listbox_item *item )
{
  return 0;
}
int can_delete_formhist_data( struct listbox_item *item )
{
  return 1;
}
void delete_formhist_data( struct listbox_item *item, int last )
{
  struct formhist_data *formhist_data = &item->udata[0];
  if ( assert_failed == 0 )
  {
    assert_failed = formhist_data->object.refcount != 0;
    if ( formhist_data->object.refcount )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/formhist/dialogs.c";
      errline = 113;
      elinks_internal( "assertion !is_object_used(formhist_data) failed!" );
      item = &formhist_data[0].next[0];
    }
    item = &formhist_data[0].next[0];
  }
  else
  {
    item = &formhist_data[0].next[0];
  }
}
widget_handler_status_T push_login_button( struct dialog_data *dlg_data, struct widget_data *button )
{
  int edx;
  struct listbox_data *box;
  struct terminal *term;
  &box[0] = &dlg_data->widgets_data->widget[0].ops[0].display[0];
  term = &dlg_data->box.width;
  &box[0] = &box->sel->next;
  if ( box->sel && box[1] )
  {
    if ( ( box->sel_offset/*.1_1of4*/ & 1 ) & 255 )
    {
      info_box( &term[0], 0, "Form not saved", ALIGN_CENTER, "No saved information for this URL.\nIf you want to save passwords for this URL, enable it by pressing the \"Toggle saving\" button." );
      &box[0] = 0;
      return 0;
    }
    &box[0] = &button->widget->ops->display[0];
    push_hierbox_goto_button( &dlg_data[0], button );
  }
  &box[0] = 0;
  return 0;
}
widget_handler_status_T push_toggle_dontsave_button( struct dialog_data *dlg_data, struct widget_data *button )
{
  struct listbox_data *box = &dlg_data->widgets_data->widget[0].ops[0].display[0];
  box = &box->sel->next;
  if ( box->sel && box[1] )
  {
    box->sel_offset/*.1_1of4*/ = ( box->sel_offset/*.1_1of4*/ & -2 ) | ( ( box->sel_offset/*.1_1of4*/ ^ 1 ) & 1 );
  }
  box = 0;
  return 0;
}
widget_handler_status_T push_save_button( struct dialog_data *dlg_data, struct widget_data *button )
{
  save_formhist_to_file(  );
  return 0;
}
void formhist_manager( struct session *ses )
{
  load_formhist_from_file(  );
  hierbox_browser( &formhist_browser, ses );
  return;
}
#if 0
#endif
