#include "msgbox.c.h"
struct dialog_data *msg_box( struct terminal *term, struct memory_list *ml, enum msgbox_flags  flags, unsigned char *title, enum format_align  align, unsigned char *text, void *udata, int buttons )
{
  int eax;
  int ecx;
  int edx;
  struct dialog *dlg;
  va_list ap;
  if ( buttons >= 0 && text[0] )
  {
    if ( ( flags & 1 ) & 255 )
    {
      add_one_to_ml( &ml, &text[0] );
      if ( flags & 2 )
      {
        if ( mem_calloc( 1, ( buttons * 48 ) + 84 ) == 0 )
        {
          freeml( ml );
          text[0] = text[0];
        }
        add_one_to_ml( &ml, mem_calloc( 1, ( buttons * 48 ) + 84 ) );
        dlg->layout.bits_at_0/*.1_1of4*/ |= 2;
        flags &= MSGBOX_SCROLLABLE;
        dlg->layouter = &generic_dialog_layouter;
        dlg->title = title;
        dlg->udata2 = udata;
        if ( flags & 4 )
          dlg->widgets->info.checkbox.gnum/*.1_1of4*/ |= 2;
        __builtin_va_start( ap, buttons );
        add_dlg_text( &dlg[0], &text[0], align, 0 );
        *(int*)(edi + 32) = dlg->number_of_widgets;
        while ( dlg->number_of_widgets < buttons + 1 )
        {
          do
          {
            unsigned char *label;
            done_handler_T *done;
            int bflags;
            label[0] = ap[0];
            done[0] = ap[4];
            bflags = ap[8];
            if ( ap[0] == 0 )
            {
              buttons--;
              break;
              while ( dlg->number_of_widgets < buttons + 1 )
              {
                do
                {
                  unsigned char *label;
                  done_handler_T *done;
                  int bflags;
                  label[0] = ap[0];
                  done[0] = ap[4];
                  bflags = ap[8];
                }
                while ( dlg->number_of_widgets < buttons + 1 );
                break;
              }
              break;
            }
            else
            {
              if ( !( flags & 2 ) && label[0] )
              {
                if ( term && current_charset != get_terminal_codepage( term ) )
                {
                  bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
                  current_charset = get_terminal_codepage( term );
                  *ebp_40 = bflags;
                  ebp_44 = done[0];
                }
                *ebp_40 = ebp_40;
                ebp_44 = ebp_44;
              }
              add_dlg_button_do( &dlg[0], &label[0], bflags, &ok_dialog, 0, &done[0], udata );
            }
          }
          while ( dlg->number_of_widgets < buttons + 1 );
          break;
        }
        if ( assert_failed == 0 )
        {
          assert_failed = buttons + 1 != dlg->number_of_widgets;
          if ( dlg->number_of_widgets != buttons + 1 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/msgbox.c";
            errline = 91;
            elinks_internal( "assertion buttons + 1 == (dlg)-&gt;number_of_widgets failed!" );
          }
        }
        return do_dialog( term, &dlg[0], ml );
      }
    }
    else
    if ( flags & 2 )
      continue;
    if ( title && title[0] )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        current_charset = get_terminal_codepage( term );
      }
      title = gettext( title );
    }
    if ( ( ( flags & 9 ) & 255 ) || text[0] == 0 )
      continue;
    else
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        current_charset = get_terminal_codepage( term );
      }
      text[0] = gettext( &text[0] );
    }
  }
  return 0;
}
unsigned char *msg_text( struct terminal *term, unsigned char *format )
{
  int eax;
  int edx;
  unsigned char *info;
  if ( format && format[0] )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
  }
  *ebp_28 = ebp_28;
  if ( eax )
  {
    if ( edi != eax )
    {
      info[0] = 0;
      mem_free( &info[0] );
      return &info[0];
    }
    return &info[0];
  }
  else
  {
    return &info[0];
  }
}
void abort_refreshed_msg_box_handler( struct dialog_data *dlg_data )
{
  void *data = (void*)dlg_data->dlg->widgets->text;
  if ( dlg_data->dlg->widgets->text != dlg_data->dlg->udata )
  {
    dlg_data = &((int*)data)[0];
  }
  return;
}
enum dlg_refresh_code  refresh_msg_box( struct dialog_data *dlg_data, void *data )
{
  unsigned char *info;
  data( dlg_data->box.width, dlg_data->dlg->udata2, ebx, esi );
  info[0] = dlg_data->box.width;
  if ( dlg_data->box.width )
  {
    abort_refreshed_msg_box_handler( &dlg_data[0] );
    dlg_data->dlg->widgets->text = &info[0];
  }
  return REFRESH_DIALOG;
}
void refreshed_msg_box( struct terminal *term, enum msgbox_flags  flags, unsigned char *title, enum format_align  align, unsigned char *(*get_info)( struct terminal *, void * ), void *data )
{
  struct dialog_data *dlg_data;
  unsigned char *info;
  if ( get_info( term, data ) && dlg_data[0] )
  {
    dlg_data->dlg->udata = &info[0];
    dlg_data->dlg->abort = &abort_refreshed_msg_box_handler;
    flags = refresh_msg_box;
    term = &dlg_data[0].win[0].next[0];
    title = get_info;
  }
  return;
}
struct dialog_data *info_box( struct terminal *term, enum msgbox_flags  flags, unsigned char *title, enum format_align  align, unsigned char *text )
{
  return msg_box( term, 0, flags, title, align, text, 0, 1 );
}
#if 0
#endif
