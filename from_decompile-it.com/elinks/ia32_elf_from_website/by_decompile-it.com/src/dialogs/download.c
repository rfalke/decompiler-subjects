#include "download.c.h"
static struct listbox_ops_messages download_messages = { "Sorry, but download \"%s\" cannot be interrupted.", "Sorry, but download \"%s\" is being used by something else.", 0, 0, "Interrupt marked downloads", "Interrupt marked downloads?", 0, 0, "Interrupt download", "Interrupt this download?", "Interrupt all downloads", "Do you really want to interrupt all downloads?" };
static struct listbox_ops downloads_listbox_ops = { &lock_file_download, &unlock_file_download, &is_file_download_used, &get_file_download_text, &get_file_download_info, &get_file_download_uri, &get_file_download_root, 0, &can_delete_file_download, &delete_file_download, &draw_file_download, &download_messages };
static struct hierbox_browser_button download_buttons[3] = { { "~Info", &push_info_button, 0 }
, { "~Abort", &push_hierbox_delete_button, 0 }
, { "C~lear", &push_hierbox_clear_button, 0 }
 };
static struct hierbox_browser download_browser = { "Download manager", 0, download_buttons, 3, { &download_browser.boxes, &download_browser.boxes }
, { &download_browser.dialogs, &download_browser.dialogs }
, { 0, 0, { &download_browser.root.child, &download_browser.root.child }
, 1, -1, 1, 0 }
, &downloads_listbox_ops, { 0, 0, 0, 0, 0, 0, 0 }
, 0 };
void undisplay_download( struct file_download *file_download )
{
  int edx;
  if ( downloads.next != downloads.next )
  {
    do
    {
      if ( file_download[0].next == downloads.next )
      {
        if ( file_download->dlg_data )
        {
          cancel_dialog( file_download->dlg_data, 0 );
          break;
        }
        else
          break;
      }
      else
    }
    while ( downloads.next != downloads.next );
  }
  return;
}
void do_abort_download( struct file_download *file_download )
{
  int edx;
  if ( downloads.next == downloads.next )
  {
    return;
  }
  do
  {
    if ( file_download[0].next == downloads.next )
    {
      file_download->bits_at_104/*.1_1of4*/ |= 2;
      file_download = &file_download[0];
    }
  }
  while ( downloads.next != downloads.next );
  return;
}
widget_handler_status_T dlg_set_notify( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct file_download *file_download;
  &file_download[0] = &dlg_data->dlg->udata[0];
  dlg_data->dlg->udata[13] = 1;
  undisplay_download( &dlg_data->dlg->udata[0] );
  return 0;
}
widget_handler_status_T dlg_abort_download( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct file_download *file_download;
  &file_download[0] = &dlg_data->dlg->udata[0];
  register_bottom_half_do( &do_abort_download, dlg_data->dlg->udata );
  dlg_data->dlg->udata[2]--;
  return 0;
}
widget_handler_status_T push_delete_button( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct file_download *file_download;
  &file_download[0] = &dlg_data->dlg->udata[0];
  dlg_data->dlg->udata[26] |= 1;
  register_bottom_half_do( &do_abort_download, dlg_data->dlg->udata );
  dlg_data->dlg->udata[2]--;
  return 0;
}
widget_handler_status_T dlg_undisplay_download( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct file_download *file_download;
  &file_download[0] = &dlg_data->dlg->udata[0];
  register_bottom_half_do( &undisplay_download, dlg_data->dlg->udata );
  dlg_data->dlg->udata[2]--;
  return 0;
}
void download_abort_function( struct dialog_data *dlg_data )
{
  dlg_data->dlg->udata[27] = 0;
  return;
}
void download_dialog_layouter( struct dialog_data *dlg_data )
{
  int eax;
  struct file_download *file_download = &dlg_data->dlg->udata[0];
  struct terminal *term = &dlg_data->box.width;
  int w = 1;
  int rw;
  int x, y;
  unsigned char *url;
  struct download *download;
  struct color_pair *dialog_text_color;
  unsigned char *msg;
  int show_meter;
  rw = w = ( (/*HI*/int)( ( dlg_data->box.width * 9 ) * 0x66666667 ) >> 2 ) - ( ( dlg_data->box.width * 9 ) >> 31 ) - 12;
  y = 0;
  url = (unsigned char*)file_download->download.next;
  dialog_text_color = get_bfu_color( &term[0], "dialog.text" );
  msg = get_download_msg( &url[0], &term[0], 1, 1, "\n" );
  show_meter = 0;
  if ( download_is_progressing( &url[0] ) )
    show_meter = ~(file_download->download.progress->size << 32) >> 31;
  redraw_below_window( dlg_data->win );
  file_download->dlg_data = &dlg_data[0];
  if ( msg )
  {
    url = get_uri_string( file_download->uri, URI_PUBLIC );
    if ( url )
    {
      if ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
        decode_uri( url );
      else
        decode_uri_for_display( url );
      x = strlen( (char*)url );
      if ( show_meter == 0 )
      {
        dlg_format_text_do( &term[0], url, 0, &y, w, &rw, dialog_text_color, ALIGN_LEFT, 1 );
        *ebp_76 = rw;
        y++;
      }
      else
      {
        w = w <= 19 ? w : 20;
        dlg_format_text_do( &term[0], url, 0, &y, w <= 19 ? w : 20, &rw, dialog_text_color, ALIGN_LEFT, 1 );
        *ebp_76 = rw;
        y += 3;
      }
      dlg_format_text_do( &term[0], msg, 0, ebp_48, w, strlen( (char*)url ), dialog_text_color, ALIGN_LEFT, 1 );
      dlg_format_buttons( &term[0], &dlg_data->widgets_data, dlg_data->number_of_widgets, 0, ebp_48, w, ebp_76, ALIGN_CENTER, 1 );
      draw_dialog( &dlg_data[0], w, y );
      w = rw;
      y++;
      if ( rw < x )
      {
        url[ w ] = 0;
        if ( w > 4 )
        {
          url[ w - 1 ] = 46;
          url[ w - 2 ] = 46;
          url[ w - 3 ] = 46;
        }
      }
      y = dlg_data->box.y + 3;
      x = dlg_data->box.y;
      dlg_format_text_do( &term[0], url, x, ebp_48, w, 0, dialog_text_color, ALIGN_LEFT, 0 );
      if ( show_meter == 0 )
        y = y;
      else
      {
        y++;
        draw_progress_bar( file_download->download.progress, &term[0], x, y + 1, w, 0, 0 );
        y = y + 1;
      }
      y = y + 1 + 1;
      dlg_format_text_do( &term[0], msg, x, ebp_48, w, 0, dialog_text_color, ALIGN_LEFT, 0 );
      dlg_format_buttons( &term[0], &dlg_data->widgets_data, dlg_data->number_of_widgets, x, ebp_48, w, 0, ALIGN_CENTER, 0 );
      mem_free( (void*)url );
      y++;
    }
    mem_free( (void*)msg );
    return;
  }
  else
  {
    return;
  }
}
void display_download( struct terminal *term, struct file_download *file_download, struct session *ses )
{
  struct dialog *dlg;
  if ( downloads.next != downloads.next )
  {
    do
    {
      if ( file_download[0].next == downloads.next )
      {
        if ( mem_calloc( 1, 228 ) )
        {
          undisplay_download( &file_download[0] );
          file_download->ses = ses;
          if ( 0 != 68 )
          {
            if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
            }
            gettext( "Download" );
          }
          dlg->title = gettext( "Download" );
          dlg->layouter = &download_dialog_layouter;
          dlg->abort = &download_abort_function;
          dlg->udata = (void*)file_download[0].next;
          file_download->object.refcount = file_download->object.refcount;
          if ( 0 != 126 )
          {
            if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
            }
            gettext( "~Background" );
          }
          add_dlg_button_do( &dlg[0], gettext( "~Background" ), 3, &dlg_undisplay_download, 0, 0, 0 );
          if ( 0 != 66 )
          {
            if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
            }
            gettext( "Background with ~notify" );
          }
          add_dlg_button_do( &dlg[0], gettext( "Background with ~notify" ), 3, &dlg_set_notify, 0, 0, 0 );
          if ( 0 != 126 )
          {
            if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
            }
            gettext( "~Abort" );
          }
          add_dlg_button_do( &dlg[0], gettext( "~Abort" ), 0, &dlg_abort_download, 0, 0, 0 );
          if ( file_download->external_handler == 0 )
          {
            if ( 0 != 65 )
            {
              if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
              {
                bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
                current_charset = get_terminal_codepage( &term[0] );
              }
              gettext( "Abort and ~delete file" );
            }
            add_dlg_button_do( &dlg[0], gettext( "Abort and ~delete file" ), 0, &push_delete_button, 0, 0, 0 );
          }
          if ( assert_failed == 0 )
          {
            assert_failed = ~( 0 - ( ( file_download->external_handler < 1 ) & 1 ) ) + 4 != *(int*)(dlg[0].title + 32);
            if ( dlg->number_of_widgets != ~( 0 - ( ( file_download->external_handler < 1 ) & 1 ) ) + 4 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/download.c";
              errline = 270;
              elinks_internal( "assertion 4 - !!file_download-&gt;external_handler == (dlg)-&gt;number_of_widgets failed!" );
            }
          }
          file_download = &dlg[0].title[0];
          term = &term[0];
          ses = (struct session*)getml( (void*)dlg[0].title );
        }
        else
          break;
      }
      else
      {
      }
    }
    while ( downloads.next != downloads.next );
    return;
  }
  else
  {
    return;
  }
}
void lock_file_download( struct listbox_item *item )
{
  item->udata[2]++;
  return;
}
void unlock_file_download( struct listbox_item *item )
{
  item->udata[2]--;
  return;
}
int is_file_download_used( struct listbox_item *item )
{
  return item->udata[2] != 0;
}
unsigned char *get_file_download_text( struct listbox_item *item, struct terminal *term )
{
  unsigned char *uristring;
  if ( get_uri_string( &item->udata[3], URI_PUBLIC ) )
  {
    if ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
    {
      decode_uri( &uristring[0] );
      return &uristring[0];
    }
    decode_uri_for_display( &uristring[0] );
  }
  return &uristring[0];
}
unsigned char *get_file_download_info( struct listbox_item *item, struct terminal *term )
{
  return 0;
}
struct uri *get_file_download_uri( struct listbox_item *item )
{
  item->udata[3]++;
  return &item->udata[3];
}
struct listbox_item *get_file_download_root( struct listbox_item *item )
{
  return 0;
}
int can_delete_file_download( struct listbox_item *item )
{
  return 1;
}
void delete_file_download( struct listbox_item *item, int last )
{
  struct file_download *file_download = &item->udata[0];
  if ( assert_failed == 0 )
  {
    assert_failed = file_download->object.refcount != 0;
    if ( file_download->object.refcount )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/download.c";
      errline = 347;
      elinks_internal( "assertion !is_object_used(file_download) failed!" );
      last = file_download[0].next;
      item = &do_abort_download;
    }
  }
}
enum dlg_refresh_code  refresh_file_download( struct dialog_data *dlg_data, void *data )
{
  return __MOD(( 0 - ( ( are_there_downloads(  ) < 1 ) & 1 ) ),4);
}
void draw_file_download( struct listbox_item *item, struct listbox_context *context, int x, int y, int width )
{
  int eax;
  unsigned char *stylename;
  struct color_pair *color;
  unsigned char *text;
  int trimmedlen;
  if ( width > 3 )
  {
    stylename[0] = "menu.selected";
    color = get_bfu_color( context->term, &stylename[0] );
    if ( get_file_download_text( &item[0], context->term ) )
    {
      trimmedlen = width - 19;
      if ( ( (/*HI*/int)( ( strlen( (char*)get_file_download_text( &item[0], context->term ) ) * 50 ) * 0x51eb851f ) >> 5 ) - ( ( strlen( (char*)get_file_download_text( &item[0], context->term ) ) * 50 ) >> 31 ) < width - 19 )
      {
        if ( trimmedlen <= strlen( (char*)get_file_download_text( &item[0], context->term ) ) )
        {
          draw_text( context->term, x, y, &text[0], trimmedlen, 0, color );
          if ( trimmedlen < ebp_44 )
          {
            trimmedlen += 3;
            draw_text( context->term, x + trimmedlen, y, "...", 3, 0, color );
          }
          mem_free( &text[0] );
          if ( item->udata[20] && item->udata[20] >= 0 && item->udata[21] == 8 && has_progress( &item->udata[20] ) )
          {
            if ( context->dlg_data->dlg->refresh == 0 || context->dlg_data->dlg->refresh->timer == 0 )
              refresh_dialog( context->dlg_data, &refresh_file_download, 0 );
            if ( trimmedlen + 15 + 15 < width )
            {
              draw_progress_bar( &item->udata[20], context->term, ( width - 15 ) + x, y, 15, 0, 0 );
              return;
            }
            else
            {
              return;
            }
          }
          else
          {
            return;
          }
        }
      }
      else
      {
        trimmedlen = width - 3;
        if ( width - 3 <= strlen( (char*)get_file_download_text( &item[0], context->term ) ) )
        {
          draw_text( context->term, x, y, &text[0], trimmedlen, 0, color );
        }
      }
      draw_text( context->term, x, y, &text[0], strlen( (char*)get_file_download_text( &item[0], context->term ) ), 0, color );
      trimmedlen = ebp_44;
    }
    else
    {
      return;
    }
  }
  else
  {
    return;
  }
}
widget_handler_status_T push_info_button( struct dialog_data *dlg_data, struct widget_data *button )
{
  struct listbox_data *box;
  struct terminal *term;
  struct session *ses;
  struct file_download *file_download = 0;
  &box[0] = &dlg_data->widgets_data->widget[0].ops[0].display[0];
  term = &dlg_data->box.width;
  &box[0] = &box->sel->next;
  ses = &dlg_data->dlg->udata[0];
  if ( assert_failed == 0 )
  {
    &box[0] = 0;
    &box[0] = ses[0].next == 0;
    assert_failed = ses[0].next == 0;
    if ( !(_Bool)( ses[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/download.c";
      errline = 472;
      elinks_internal( "assertion ses failed!" );
    }
  }
  if ( file_download[0].next )
  {
    &box[0] = &dlg_data->win->next;
    delete_window( dlg_data->win );
    &box[0] = &term->next;
    display_download( term, &file_download, &ses );
    &box = 0;
    return 0;
  }
  &box = 0;
  return 0;
}
void download_manager( struct session *ses )
{
  hierbox_browser( &download_browser, ses );
  download_browser->bits_at_96/*.1_1of4*/ |= 1;
  return;
}
void init_download_display( struct file_download *file_download )
{
  file_download->box_item = add_listbox_item( &download_browser, 0, BI_LEAF, (void*)file_download, 1 );
  return;
}
void done_download_display( struct file_download *file_download )
{
  if ( file_download->box_item )
  {
    done_listbox_item( &download_browser, file_download->box_item );
    file_download->box_item = 0;
  }
  return;
}
#if 0
#endif
