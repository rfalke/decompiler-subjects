#include "edit.c.h"
widget_handler_status_T my_cancel_dialog( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  widget_data->box.y( dlg_data->dlg, dlg_data, esi );
  widget_data = widget_data;
  dlg_data = dlg_data;
}
void do_edit_dialog( struct terminal *term, int intl, unsigned char *title, unsigned char *src_name, unsigned char *src_url, struct session *ses, struct dialog_data *parent, done_handler_T *when_done, void (*when_cancel)( struct dialog * ), void *done_data, enum edit_dialog_type  dialog_type )
{
  int edx;
  unsigned char *name, *url;
  struct dialog *dlg;
  if ( intl && title[0] && title[0] )
  {
    term = &term[0];
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
      *ebp_64 = src_name[0];
    }
    *ebp_64 = src_name[0];
    title[0] = gettext( &title[0] );
  }
  *ebp_64 = ebp_64;
  if ( mem_calloc( 1, 2324 ) )
  {
    name = mem_calloc( 1, 2324 ) + 276;
    url = dlg[15].widgets->text;
    if ( edx == 0 )
    {
      get_current_title( ses, name, 1024 );
      if ( src_url == 0 )
        term = &term[0];
      else
        safe_strncpy( url, src_url, 1024 );
        dlg->layout.bits_at_0/*.1_1of4*/ |= 1;
        dlg->title = &title[0];
        dlg->layouter = &generic_dialog_layouter;
        dlg->udata = (void*)parent;
        dlg->udata2 = done_data;
        if ( dialog_type != EDIT_DLG_ADD )
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
        }
        else
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
        }
        add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "Name" ), 0, 0 );
        if ( 0 != 85 )
        {
          if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
            current_charset = get_terminal_codepage( &term[0] );
          }
          gettext( "URL" );
        }
        add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "URL" ), 0, 0, 0, 1024, (void*)url, 0, INPFIELD_NONE );
        if ( 0 != 126 )
        {
          if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
            current_charset = get_terminal_codepage( &term[0] );
          }
          gettext( "~OK" );
        }
        add_dlg_button_do( &dlg[0], gettext( "~OK" ), 1, &ok_dialog, 0, when_done, (void*)dlg[0].title );
        if ( 0 != 67 )
        {
          if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
            current_charset = get_terminal_codepage( &term[0] );
          }
          gettext( "C~lear" );
        }
        add_dlg_button_do( &dlg[0], gettext( "C~lear" ), 0, &clear_dialog, 0, 0, 0 );
        if ( when_cancel )
        {
          if ( 0 != 126 )
          {
            if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
            }
            gettext( "~Cancel" );
          }
          add_dlg_button_do( &dlg[0], gettext( "~Cancel" ), 2, &my_cancel_dialog, when_cancel, 0, 0 );
        }
        else
        {
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
        }
        if ( assert_failed == 0 )
        {
          assert_failed = *(int*)(dlg[0].title + 32) != 5;
          if ( dlg->number_of_widgets != 5 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/edit.c";
            errline = 108;
            elinks_internal( "assertion 5 == (dlg)-&gt;number_of_widgets failed!" );
            intl = dlg[0].title;
            term = &term[0];
            title = (unsigned char*)getml( (void*)dlg[0].title );
          }
        }
    }
    else
    {
      safe_strncpy( name, &src_name[0], 1024 );
      if ( src_url )
        safe_strncpy( url, src_url, 1024 );
        dlg->layout.bits_at_0/*.1_1of4*/ |= 1;
        dlg->title = &title[0];
        dlg->layouter = &generic_dialog_layouter;
        dlg->udata = (void*)parent;
        dlg->udata2 = done_data;
    }
    get_current_url( ses, url, 1024 );
    dlg->layout.bits_at_0/*.1_1of4*/ |= 1;
    dlg->title = &title[0];
    dlg->layouter = &generic_dialog_layouter;
    dlg->udata = (void*)parent;
    dlg->udata2 = done_data;
  }
  else
  {
    return;
  }
}
#if 0
#endif
