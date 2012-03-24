#include "dialogs.c.h"
static struct listbox_ops options_listbox_ops = { &lock_option, &unlock_option, &is_option_used, &get_option_text, &get_option_info, 0, &get_option_root, &match_option, &can_delete_option, &delete_option_item, 0, 0 };
static struct hierbox_browser_button option_buttons[6] = { { "~Info", &push_hierbox_info_button, 1 }
, { "~Edit", &push_edit_button, 0 }
, { "~Add", &push_add_button, 0 }
, { "~Delete", &push_hierbox_delete_button, 0 }
, { "~Search", &push_hierbox_search_button, 1 }
, { "Sa~ve", &push_save_button, 0 }
 };
struct hierbox_browser option_browser = { "Option manager", 0, option_buttons, 6, { &option_browser.boxes, &option_browser.boxes }
, { &option_browser.dialogs, &option_browser.dialogs }
, { 0, 0, { &option_browser.root.child, &option_browser.root.child }
, 1, -1, 1, 0 }
, &options_listbox_ops, { 0, 0, 0, 0, 0, 0, 0 }
, 0 };
static int keybinding_text_toggle;
static struct listbox_item *action_box_items[3][128];
struct listbox_item *keymap_box_item[3];
static struct listbox_ops keybinding_listbox_ops = { &lock_keybinding, &unlock_keybinding, &is_keybinding_used, &get_keybinding_text, &get_keybinding_info, 0, &get_keybinding_root, &match_keybinding, &can_delete_keybinding, &delete_keybinding_item, 0, 0 };
static struct hierbox_browser_button keybinding_buttons[5] = { { "~Add", &push_kbdbind_add_button, 0 }
, { "~Delete", &push_hierbox_delete_button, 0 }
, { "~Toggle display", &push_kbdbind_toggle_display_button, 1 }
, { "~Search", &push_hierbox_search_button, 1 }
, { "Sa~ve", &push_kbdbind_save_button, 0 }
 };
struct hierbox_browser keybinding_browser = { "Keybinding manager", 0, keybinding_buttons, 5, { &keybinding_browser.boxes, &keybinding_browser.boxes }
, { &keybinding_browser.dialogs, &keybinding_browser.dialogs }
, { 0, 0, { &keybinding_browser.root.child, &keybinding_browser.root.child }
, 1, -1, 1, 0 }
, &keybinding_listbox_ops, { 0, 0, 0, 0, 0, 0, 0 }
, 0 };
void disable_success_msgbox( void *dummy )
{
  *(int*)(get_opt_( config_options, (unsigned char*)config_options )) = 0;
  option_changed( 0, get_opt_rec( config_options, "ui.success_msgbox" ) );
  return;
}
void write_config_dialog( struct terminal *term, unsigned char *config_file, int secsave_error, int stdio_error )
{
  int eax;
  unsigned char *errmsg;
  unsigned char *strerr;
  if ( stdio_error == 0 && secsave_error == 0 )
  {
    if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
    {
      msg_box( &term[0], 0, MSGBOX_FREE_TEXT, "Write config success", ALIGN_CENTER, msg_text( &term[0], "Options were saved successfully to config file %s." ), 0, 2 );
    }
  }
  else
  {
    strerr = secsave_strerror( secsave_error, &term[0] );
    if ( stdio_error >= 1 && straconcat( strerr ) )
    {
      info_box( &term[0], MSGBOX_FREE_TEXT, "Write config error", ALIGN_CENTER );
      term = &errmsg[0];
    }
    info_box( &term[0], MSGBOX_FREE_TEXT, "Write config error", ALIGN_CENTER );
  }
  return;
}
void lock_option( struct listbox_item *item )
{
  item->udata[2]++;
  return;
}
void unlock_option( struct listbox_item *item )
{
  item->udata[2]--;
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
int is_option_used( struct listbox_item *item )
{
  return item->udata[2] != 0;
}
unsigned char *get_range_string( struct option_elinks *option_elinks )
{
  struct string info;
  if ( init_string( &info ) )
  {
    if ( option_elinks->type == OPT_BOOL )
      add_to_string( &info, "[0|1]" );
      return info.source;
    else
    {
      if ( option_elinks->type - 1 <= 1 )
        add_format_to_string( &info, &option_elinks->min );
    }
  }
  else
  {
    return info.source;
  }
}
unsigned char *get_option_text( struct listbox_item *item, struct terminal *term )
{
  struct option_elinks *option_elinks;
  unsigned char *desc;
  &option_elinks[0] = &item->udata[0];
  desc[0] = item->udata[10];
  if ( option_elinks->capt == 0 )
    desc[0] = option_elinks->name;
  if ( ( option_elinks->flags & 8 ) & 255 )
  {
    if ( 0 != 109 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
    }
    if ( desc[0] && desc[0] )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      desc[0] = option_elinks[0].next;
    }
    return straconcat( " (" );
  }
  else
  {
    if ( desc[0] && desc[0] )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      desc[0] = option_elinks[0].next;
    }
    item = &desc[0];
  }
}
unsigned char *get_option_info( struct listbox_item *item, struct terminal *term )
{
  int eax;
  int edx;
  unsigned char *desc, *type;
  struct string info;
  if ( init_string( &info ) )
  {
    type = &item->udata[3];
    if ( 0 != 78 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Name" );
    }
    add_format_to_string( &info, "%s: %s" );
    type = option_types[ *(int*)(item->udata + 20) ].name;
    if ( option_types[ *(int*)(item->udata + 20) ] && option_types[ item->udata[5] ] )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      type = gettext( type );
      item->udata[5] = item->udata[5];
    }
    if ( item->udata[5] == 9 )
    {
      if ( 0 != 40 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "(expand by pressing space)" );
      }
      type = straconcat( type );
    }
    if ( 0 != 84 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Type" );
    }
    add_format_to_string( &info, "\n%s: %s" );
    if ( item->udata[5] == 9 )
    {
      mem_free( (void*)type );
      *(int*)(ebx + 20) = item->udata[5];
    }
    if ( txt[ 152 + ( item->udata[5] << 3 ) ] )
    {
      unsigned char *range;
      struct string value;
      if ( init_string( &value ) == 0 )
      {
        done_string( &info );
        return 0;
      }
      txt[ 152 + ( *(int*)(item->udata + 20) << 3 ) ]( item->udata, value.source );
      if ( get_range_string( &item->udata[0] ) )
      {
        if ( *(char*)(get_range_string( &item->udata[0] )) )
        {
          add_to_string( &info, " " );
          add_to_string( &info, get_range_string( &item->udata[0] ) );
          ebp_48 = get_range_string( &item->udata[0] );
        }
        mem_free( "Type" );
      }
      type = value.source;
      if ( 0 != 86 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Value" );
      }
      type[0] = type;
      add_format_to_string( &info, "\n%s: %s" );
      done_string( &value );
      if ( ( *(char*)(item->udata + 16) & 8 ) & 255 )
      {
        if ( 0 != 10 )
        {
          if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
            current_charset = get_terminal_codepage( &term[0] );
          }
          gettext( "\n\nThis value has been changed since you last saved your configuration." );
        }
        add_to_string( &info, gettext( "\n\nThis value has been changed since you last saved your configuration." ) );
      }
    }
    desc[0] = desc[36] == 0 ? desc[36] : "N/A";
    if ( desc[0] )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      desc[0] = gettext( &desc[0] );
      if ( *(char*)(gettext( &desc[0] )) )
      {
        if ( 0 != 68 )
        {
          if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
            current_charset = get_terminal_codepage( &term[0] );
          }
          gettext( "Description" );
        }
        add_format_to_string( &info, "\n\n%s:\n%s" );
      }
    }
    return info.source;
  }
  else
  {
  }
}
struct listbox_item *get_option_root( struct listbox_item *item )
{
  if ( item->udata[11] != config_options && item->udata[11] )
  {
    return &item->udata[11];
  }
  return 0;
}
enum listbox_match  match_option( struct listbox_item *item, struct terminal *term, unsigned char *text )
{
  int eax;
  struct option_elinks *option_elinks = &item->udata[0];
  if ( option_elinks->type != OPT_TREE && !strcasestr( (char*)option_elinks->name, &text[0] ) && option_elinks->capt[40] )
  {
    if ( option_elinks->capt[0] )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
    }
    return eax == 0;
  }
}
int can_delete_option( struct listbox_item *item )
{
  int eax;
  return item->udata[11] ? item->udata[11] & 2 : 0;
}
void delete_option_item( struct listbox_item *item, int last )
{
  struct option_elinks *option_elinks = &item->udata[0];
  if ( assert_failed == 0 )
  {
    assert_failed = option_elinks->object.refcount != 0;
    if ( option_elinks->object.refcount )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/dialogs.c";
      errline = 238;
      elinks_internal( "assertion !is_object_used(option) failed!" );
      item = &option_elinks[0].next[0];
    }
  }
}
widget_handler_status_T check_valid_option( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct terminal *term = &dlg_data->box.width;
  struct option_elinks *option_elinks = &dlg_data->dlg->udata[0];
  unsigned char *value;
  unsigned char *chinon;
  int dummy_line = 0;
  commandline = 1;
  value = widget_data->cdata;
  txt[ 152 + ( option_elinks->type << 3 ) ]( dlg_data->dlg->udata, value, dummy_line, dlg_data->dlg->udata2 );
  if ( option_elinks->type << 5 )
  {
    if ( txt[ 152 + ( option_elinks->type << 3 ) ] )
    {
      eax( option_elinks[0].next, chinon[0] );
      if ( txt[ 152 + ( option_elinks->type << 3 ) ] )
      {
        option_changed( &dlg_data->dlg->udata2[0], &option_elinks[0] );
        commandline = 0;
        mem_free( &chinon[0] );
        return 0;
      }
    }
    mem_free( &chinon[0] );
  }
  commandline = 0;
  info_box( &term[0], 0, "Error", ALIGN_LEFT, "Bad option value." );
  return 1;
}
widget_handler_status_T push_edit_button( struct dialog_data *dlg_data, struct widget_data *some_useless_info_button )
{
  int eax;
  int edx;
  struct terminal *term = &dlg_data->box.width;
  struct listbox_data *box;
  &box[0] = &dlg_data->widgets_data->widget[0].ops[0].display[0];
  &box[0] = &box->sel->next;
  if ( box->sel && box[1] )
  {
    &box[0] = box[1].sel_offset << 5;
    if ( 0 == box[0].next || 0 || -32 == box[0].next )
    {
      info_box( &term[0], 0, "Edit", ALIGN_LEFT, "This option cannot be edited. This means that this is some special option like a folder - try to press a space in order to see its contents." );
      &box[0] = 0;
      return 0;
    }
    &box[0] = ebp_32;
    if ( box[0].next )
    {
      commandline = 1;
      &box[0] = box[1].sel_offset << 5;
      txt[611]( box[0].next, box[1].next, ebp_32 );
      commandline = 0;
      if ( box[0].next )
      {
        &box[0] = "Edit";
        if ( 0 != 69 )
        {
          if ( term[0] && box[0].next != current_charset )
          {
            bind_textdomain_codeset( "elinks", (unsigned char*)box[0].next );
            current_charset = box[0].next;
          }
          gettext( "Edit" );
        }
        &box = &box;
        box->top = &generic_dialog_layouter;
        box->prev = &box[1];
        box->ops = &dlg_data->dlg->udata[0];
        &box[0] = ebp_32;
        safe_strncpy( box[0].next + 276, ebp_32, 1024 );
        done_string( ebp_32 );
        &box[0] = &option_types[ *(int*)(&box->prev) ]->name[0];
        if ( option_types[ *(int*)(&box->prev) ] && box )
        {
          if ( term && box->next != current_charset )
          {
            bind_textdomain_codeset( "elinks", (unsigned char*)box[0].next );
            current_charset = box[0].next;
          }
          &box[0] = &option_types[ *(int*)(&box->prev) ]->name[0];
        }
        if ( 0 != 84 )
        {
          if ( term[0] && box[0].next != current_charset )
          {
            bind_textdomain_codeset( "elinks", (unsigned char*)box[0].next );
            current_charset = box[0].next;
          }
        }
        &box[0] = "Name";
        if ( box->next )
        {
          if ( term[0] && box[0].next != current_charset )
          {
            bind_textdomain_codeset( "elinks", (unsigned char*)box[0].next );
            current_charset = box[0].next;
            *ebp_60 = box[0].next;
          }
          gettext( "Name" );
          *ebp_60 = ebp_60;
        }
        &box[0] = "N/A";
        if ( *(char*)(*(int*)(&box->prev[1]) == 0 ? *(int*)(&box->prev[1]) : "N/A") )
        {
          if ( term[0] && box[0].next != current_charset )
          {
            bind_textdomain_codeset( "elinks", (unsigned char*)box[0].next );
            current_charset = box[0].next;
            *ebp_60 = ebp_60;
          }
        }
        &box[0] = "Description";
        if ( 0 != 68 )
        {
          if ( term[0] && box[0].next != current_charset )
          {
            bind_textdomain_codeset( "elinks", (unsigned char*)box[0].next );
            current_charset = box[0].next;
            *ebp_60 = box[0].next;
          }
          gettext( "Description" );
          *ebp_60 = ebp_60;
        }
        &box[0] = box->prev;
        if ( box[0].next )
        {
          if ( box && box )
          {
            &box[0] = &box[0];
            mem_free( (void*)box[0].next );
          }
          else
          {
          }
          mem_free( (void*)box[0].next );
        }
        if ( box[0].next == 0 )
        {
          if ( box[0].next == 0 )
            goto B83;
          mem_free( (void*)box[0].next );
        }
        else
        {
          &box[0] = &box[0];
          if ( box[0].next == 0 )
          {
            &box[0] = &box[0];
            mem_free( (void*)box[0].next );
          }
          else
          {
            add_dlg_text( &box[0].next[0], (unsigned char*)box[0].next, ALIGN_LEFT, 0 );
            &box[0] = "Value";
            if ( box->next )
            {
              if ( term[0] && box[0].next != current_charset )
              {
                bind_textdomain_codeset( "elinks", (unsigned char*)box[0].next );
                current_charset = box[0].next;
              }
              gettext( "Value" );
            }
            add_dlg_field_do( &box[0].next[0], WIDGET_FIELD, (unsigned char*)box[0].next, 0, 0, &check_valid_option, 1024, (void*)box[9].items, 0, INPFIELD_FLOAT );
            add_dlg_text( &box[0].next[0], (unsigned char*)box[0].next, ALIGN_LEFT, 0 );
            &box[0] = "~OK";
            if ( box->next )
            {
              if ( term[0] && box[0].next != current_charset )
              {
                bind_textdomain_codeset( "elinks", (unsigned char*)box[0].next );
                current_charset = box[0].next;
              }
              gettext( "~OK" );
            }
            add_dlg_button_do( &box[0].next[0], (unsigned char*)box[0].next, 1, &ok_dialog, 0, 0, 0 );
            &box[0] = "~Cancel";
            if ( box->next )
            {
              if ( term[0] && box[0].next != current_charset )
              {
                bind_textdomain_codeset( "elinks", (unsigned char*)box[0].next );
                current_charset = box[0].next;
              }
              gettext( "~Cancel" );
            }
            add_dlg_button_do( &box[0].next[0], (unsigned char*)box[0].next, 2, &cancel_dialog, 0, 0, 0 );
            if ( assert_failed == 0 )
            {
              &box[0] = 0;
              &box[0] = *(int*)(box[0].next + 32) != 5;
              assert_failed = *(int*)(box[0].next + 32) != 5;
              if ( box[1].prev != 5 )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/dialogs.c";
                errline = 368;
                elinks_internal( "assertion 5 == (dlg)-&gt;number_of_widgets failed!" );
              }
              &box[0] = &box[0];
              do_dialog( &term[0], &box[0].next[0], &box[0].next[0] );
              &box[0] = 0;
              return 0;
            }
          }
        }
B83:        mem_free( (void*)box[0].next );
      }
      else
      {
        done_string( ebp_32 );
      }
    }
  }
  &box[0] = 0;
  return 0;
}
void add_option_to_tree( void *data, unsigned char *name )
{
  struct option_elinks *old;
  struct option_elinks *new;
  if ( old[0] && old->flags < 0 )
    delete_option( &old[0] );
  if ( new[0].next )
  {
    name = *(int*)(get_opt_rec( &((int*)data)[0], &name[0] ) + 52);
    data = &((int*)data)[1];
  }
  return;
}
widget_handler_status_T check_option_name( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  unsigned char *p;
  p[0] = widget_data->cdata;
  if ( p[0] )
  {
    do
    {
      if ( p[0] - 97 < 25 && p[0] - 65 < 25 && p[0] - 48 < 9 && p[0] != '_' && p[0] != '-' )
      {
        info_box( &dlg_data->box.width, 0, "Bad string", ALIGN_CENTER, "Option names may only contain alpha-numeric characters\nin addition to '_' and '-'." );
        return 1;
      }
      p[0] = p[1];
    }
    while ( p[0] );
  }
  return 0;
}
widget_handler_status_T push_add_button( struct dialog_data *dlg_data, struct widget_data *some_useless_info_button )
{
  struct terminal *term = &dlg_data->box.width;
  struct listbox_data *box;
  struct listbox_item *item = box->sel;
  struct option_elinks *option_elinks;
  if ( box->sel && item->udata )
  {
    if ( item->type == BI_FOLDER && ( ( item->bits_at_24/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    {
      ;
    }
    if ( ( ( option_elinks->flags & 2 ) & 255 ) || ( option_elinks->root && ( ( option_elinks->flags & 2 ) & 255 ) ) )
    {
      if ( mem_alloc( 8 ) )
      {
        *(int*)(mem_alloc( 8 )) = option_elinks[0];
        *(int*)(mem_alloc( 8 ) + 4) = dlg_data->widgets_data;
        input_dialog( term, getml( mem_alloc( 8 ) ), "Add option", "Name", mem_alloc( 8 ), 0, 1024, "", 0, 0, &check_option_name, &add_option_to_tree, 0 );
        return 0;
      }
      return 0;
    }
  }
  info_box( term, 0, "Add option", ALIGN_CENTER, "Cannot add an option here." );
  return 0;
}
widget_handler_status_T push_save_button( struct dialog_data *dlg_data, struct widget_data *some_useless_info_button )
{
  write_config( &dlg_data->box.width );
  update_hierbox_browser( &option_browser );
  return 0;
}
void options_manager( struct session *ses )
{
  hierbox_browser( &option_browser, ses );
  return;
}
struct listbox_item *get_keybinding_action_box_item( enum keymap_id  keymap_id, action_id_T action_id )
{
  int eax;
  if ( assert_failed == 0 )
  {
    assert_failed = action_id > 127;
    if ( action_id > 127 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/dialogs.c";
      errline = 543;
      elinks_internal( "assertion action_id &lt; ACTION_BOX_SIZE failed!" );
      if ( assert_failed == 0 )
      {
        return action_box_items[ ( action_id + ( keymap_id << 7 ) + ( keymap_id << 7 ) ) >> 7 ][0];
      }
    }
    else
    {
    }
  }
  assert_failed = 0;
}
void init_keybinding_listboxes( struct keymap *keymap_table, struct action_list *actions )
{
  int ebp_36;
  int ebp_28;
  struct action *act;
  enum keymap_id  keymap_id;
  ebp_28 = 0;
  keymap_id = KEYMAP_MAIN;
  ebp_36 = keymap_table;
{
  do
  {
    keymap_box = add_listbox_item( 0, &keybinding_browser.root, BI_FOLDER, ebp_36, -1 );
    if ( add_listbox_item( 0, &keybinding_browser.root, BI_FOLDER, ebp_36, -1 ) )
    {
      act = actions[ ebp_28 >> 3 ].actions;
      if ( act->str )
      {
        struct listbox_item *item;
        do
        {
          if ( assert_failed == 0 )
          {
            assert_failed = act->num > 127;
            if ( act->num > 127 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/dialogs.c";
              errline = 569;
              elinks_internal( "assertion act-&gt;num &lt; ACTION_BOX_SIZE failed!" );
              if ( assert_failed )
                goto B9;
            }
            if ( act->num > 1 )
            {
              assert_failed = act->desc == 0;
              if ( !(_Bool)( act->desc != 0 ) )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/dialogs.c";
                errline = 577;
                elinks_internal( "assertion act-&gt;desc failed!" );
              }
              if ( item[0].next )
              {
                item->bits_at_24/*.1_1of4*/ |= 1;
                action_box_items[ ( act->num + ( keymap_id << 7 ) ) >> 7 ][0] = &item[0];
              }
            }
            act++;
            if ( act->str )
              continue;
            else
              break;
          }
B9:          act++;
          assert_failed = 0;
        }
        while ( act->str );
      }
      keymap_box_item[ keymap_id ] = &keymap_box[0];
    }
    ebp_28 += 8;
    keymap_id++;
    ebp_36 += 12;
  }
  while ( ebp_28 != 24 );
  return;
}
}
void done_keybinding_listboxes( void )
{
  int ecx;
  int edx;
  struct listbox_item *action = &keybinding_browser.root.child.next[0];
  if ( keybinding_browser.root.child.next != keybinding_browser.root.child.next )
  {
    do
    {
      struct listbox_item *keymap = &action->child.next[0];
      if ( action->child.next != action->child.next )
      {
      {
        do
        {
          struct xlist_head *head = &keymap->child.next[0], *next;
          head = &keymap->child.next[0];
          if ( keymap->child.next != keymap->child.next )
          {
            do
            {
              head = &(struct xlist_head*)(head);
            }
            while ( head->next != head[0].next );
          }
          head = &keymap->child.prev[0];
          if ( keymap->child.prev != head[0].next )
          {
            do
            {
              head = head->prev;
            }
            while ( head->prev != head[0].next );
          }
          next = &keymap->child.next[0];
          if ( head[0].next != keymap->child.next )
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
          keymap = &keymap[0];
        }
        while ( action->child.next != keymap[0].next );
        action->child.next = action->child.next;
      }
      }
    {
      struct xlist_head *head = &action->child.next[0], *next;
      head = &action->child.next[0];
      if ( action->child.next != action->child.next )
      {
        *ebp_32 = action->child.next;
        do
        {
          head = &(struct xlist_head*)(head);
        }
        while ( head->next != action->child.next );
      }
      head = &action->child.prev[0];
      if ( action->child.prev != head[0].next )
      {
        do
        {
          head = head->prev;
        }
        while ( head->prev != head[0].next );
      }
      next = &action->child.next[0];
      if ( head[0].next != action->child.next )
      {
        next = &next[0];
        do
        {
          next->prev = next->prev;
          &(struct xlist_head*)(next->prev) = &(struct xlist_head*)(next);
          mem_free( action->child.next );
        }
        while ( next[0].next == head[0].next );
      }
      action = &action[0];
    }
    }
    while ( keybinding_browser.root.child.next != action[0].next );
    keybinding_browser.root.child.next = keybinding_browser.root.child.next;
  }
{
  struct xlist_head *head = &keybinding_browser.root.child.next[0], *next;
  head = &keybinding_browser.root.child.next[0];
  if ( keybinding_browser.root.child.next != keybinding_browser.root.child.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( keybinding_browser->root.child.next != head->next );
  }
  head = &keybinding_browser.root.child.prev[0];
  if ( keybinding_browser.root.child.prev != head[0].next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &keybinding_browser.root.child.next[0];
  if ( head[0].next != keybinding_browser.root.child.next )
  {
    &(struct xlist_head*)(next) = &next;
    while ( 1 )
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
      next = &(struct xlist_head*)(next);
      head = &next;
      if ( next->next == head[0].next )
        break;
      next = &next[0];
    }
  }
  return;
}
}
void lock_keybinding( struct listbox_item *item )
{
  if ( item->depth == 2 )
  {
    item->udata[7]++;
    return;
  }
  return;
}
void unlock_keybinding( struct listbox_item *item )
{
  if ( item->depth == 2 )
  {
    item->udata[7]--;
    return;
  }
  return;
}
int is_keybinding_used( struct listbox_item *item )
{
  if ( item->depth == 2 )
  {
    return *(int*)(*(int*)(item + 28) + 8) != 0;
  }
  return 0;
}
unsigned char *get_keybinding_text( struct listbox_item *item, struct terminal *term )
{
  int eax;
  int edx;
  struct string info;
  if ( item->depth == 0 )
  {
    if ( keybinding_text_toggle == 0 )
    {
      if ( item->udata[2] == 0 )
      {
        stracpy( (unsigned char*)eax );
        return info.source;
      }
    }
    else
    {
    }
  }
  else
  if ( item->depth <= 1 )
  {
    if ( keybinding_text_toggle )
    {
    }
    else
    if ( item->udata[3] == 0 )
      continue;
  }
  else
  {
    if ( init_string( &info ) )
    {
      add_keystroke_to_string( &info, item->udata + 20, 0 );
      return info.source;
    }
  }
  if ( *(char*)(item->udata[2]) )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
  }
}
unsigned char *get_keybinding_info( struct listbox_item *item, struct terminal *term )
{
  int eax;
  int edx;
  unsigned char *action, *keymap;
  struct string info;
  if ( item->depth > 1 && item->type != BI_FOLDER && init_string( &info ) )
  {
    action[0] = get_action_name( item->udata[3], item->udata[4] );
    keymap = get_keymap_name( item->udata[3] );
    add_format_to_string( &info, "%s: " );
    add_keystroke_to_string( &info, item->udata + 20, 0 );
    add_format_to_string( &info, _( "Action", &term[0] ) );
    add_format_to_string( &info, _( "Keymap", &term[0] ) );
    return info.source;
  }
}
struct listbox_item *get_keybinding_root( struct listbox_item *item )
{
  if ( item->depth )
  {
    if ( item->depth == 1 )
    {
      return keymap_box_item[ item->udata[2] ];
    }
  {
    struct keybinding *kb;
    get_keybinding_action_box_item( item->udata[3], item->udata[4] );
  }
  }
  return get_keybinding_action_box_item( item->udata[3], item->udata[4] );
}
enum listbox_match  match_keybinding( struct listbox_item *item, struct terminal *term, unsigned char *text )
{
  int ecx;
  unsigned char *desc;
  if ( item->depth == 1 )
  {
    if ( keybinding_text_toggle )
      desc[0] = *(int*)(item->udata);
    else
    {
      desc[0] = item->udata[3];
      if ( item->udata[3] )
      {
        if ( desc[0] )
        {
          if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
            current_charset = get_terminal_codepage( &term[0] );
          }
          desc[0] = gettext( &desc[0] );
        }
      }
      else
      {
      }
    }
    if ( desc[0] )
    {
      return strcasestr( &desc[0], (char*)text ) == 0;
    }
  }
  *ebp_8 = ebx;
  return LISTBOX_MATCH_NO;
}
int can_delete_keybinding( struct listbox_item *item )
{
  return item->depth == 2;
}
void delete_keybinding_item( struct listbox_item *item, int last )
{
  struct keybinding *keybinding = &item->udata[0];
  if ( assert_failed == 0 )
  {
    if ( item->depth != 2 || keybinding->object )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/dialogs.c";
      errline = 730;
      elinks_internal( "assertion item-&gt;depth == 2 && !is_object_used(keybinding) failed!" );
      item = &keybinding[0].next[0];
    }
    else
      assert_failed = 0;
  }
}
void really_really_add_keybinding( void *data )
{
  struct keybinding *keybinding;
  if ( assert_failed == 0 )
  {
    assert_failed = ((int*)data)[0] == 0;
    if ( !(_Bool)( ((int*)data)[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/dialogs.c";
      errline = 776;
      elinks_internal( "assertion hop failed!" );
    }
  }
  if ( keybinding[0] && keybinding->box_item[1].prev )
  {
    listbox_sel( &((int*)data)[5], keybinding->box_item );
  }
  return;
}
void really_add_keybinding( void *data, unsigned char *keystroke )
{
  action_id_T action_id;
  if ( keybinding_exists( ((int*)data)[2], &((int*)data)[3], &action_id ) && action_id )
  {
    struct kbdbind_add_hop *new_hop;
    struct string canonical;
    if ( ((int*)data)[1] != action_id && mem_alloc( 24 ) )
    {
      new_hop->term = &((int*)data)[0];
      new_hop->action_id = ((int*)data)[1];
      new_hop->keymap_id = ((int*)data)[2];
      new_hop->kbd.key = ((int*)data)[3];
      new_hop->kbd.modifier = ((int*)data)[4];
      new_hop->widget_data = &((int*)data)[5];
      if ( init_string( &canonical ) )
        add_keystroke_to_string( &canonical, &((int*)data)[3], 0 );
      msg_box( new_hop->term, getml( (void*)new_hop[0].term ), MSGBOX_FREE_TEXT, "Keystroke already used", ALIGN_CENTER, msg_text( new_hop->term, canonical.length != 0 ? keystroke : canonical.source ), (void*)new_hop[0].term, 2 );
      done_string( &canonical );
      return;
    }
    else
    {
      return;
    }
  }
  else
  {
    really_really_add_keybinding( &((int*)data)[0] );
    return;
  }
}
widget_handler_status_T check_keystroke( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct kbdbind_add_hop *hop = &dlg_data->dlg->udata2[0];
  if ( parse_keystroke( widget_data->cdata, &hop->kbd ) < 0 )
  {
    info_box( hop->term, 0, "Add keybinding", ALIGN_CENTER, "Invalid keystroke." );
    return 1;
  }
  return 0;
}
widget_handler_status_T push_kbdbind_add_button( struct dialog_data *dlg_data, struct widget_data *some_useless_info_button )
{
  struct terminal *term = &dlg_data->box.width;
  struct listbox_data *box;
  struct listbox_item *item = box->sel;
  struct kbdbind_add_hop *hop;
  unsigned char *text;
  if ( box->sel == 0 || item->depth == 0 )
  {
    info_box( &term[0], 0, "Add keybinding", ALIGN_CENTER, "Need to select an action." );
    *ebp_12 = ebx;
    return 0;
  }
  if ( mem_calloc( 1, 24 ) )
  {
    *(int*)(mem_calloc( 1, 24 )) = term[0];
    hop->widget_data = &dlg_data->widgets_data;
    if ( item->depth == 2 )
    {
      struct keybinding *keybinding;
      hop->action_id = item->udata[4];
      hop->keymap_id = item->udata[3];
    }
    else
    {
      struct action *action;
      hop->action_id = item->udata[1];
      hop->keymap_id = item->udata[2];
    }
    text[0] = msg_text( &term[0], "Action: %s\nKeymap: %s\n\nKeystroke should be written in the format: [Shift-][Ctrl-][Alt-]Key\nKey: a,b,c,...,1,2,3,...,Space,Up,PageDown,Tab,Enter,Insert,F5,...\n\nKeystroke" );
    input_dialog( &term[0], getml( (void*)hop[0].term ), "Add keybinding", &text[0], (void*)hop[0].term, 0, 1024, "", 0, 0, &check_keystroke, &really_add_keybinding, 0 );
    *ebp_12 = ebx;
    return 0;
  }
  else
  {
    *ebp_12 = ebx;
    return 0;
  }
}
widget_handler_status_T push_kbdbind_toggle_display_button( struct dialog_data *dlg_data, struct widget_data *some_useless_info_button )
{
  keybinding_text_toggle = keybinding_text_toggle == 0;
  redraw_dialog( dlg_data, 0 );
  return 0;
}
widget_handler_status_T push_kbdbind_save_button( struct dialog_data *dlg_data, struct widget_data *some_useless_info_button )
{
  write_config( &dlg_data->box.width );
  return 0;
}
void keybinding_manager( struct session *ses )
{
  hierbox_browser( &keybinding_browser, ses );
  return;
}
#if 0
#endif
