#include "dialogs.c.h"
static struct menu_item mi_no_ext[2] = { { "No extensions", 0, 0, 0, 0, 128, 0, 0 }
, { 0, 0, 0, 0, 0, 0, 0, 0 }
 };
struct option_elinks *get_real_opt( unsigned char *base, unsigned char *id )
{
  struct option_elinks *opt;
  struct string translated;
  &opt[0] = get_opt_rec_real( config_options, &ebx );
  if ( assert_failed == 0 )
  {
    assert_failed = opt[0].next == 0;
    if ( !(_Bool)( opt[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/mime/dialogs.c";
      errline = 29;
      elinks_internal( "assertion opt failed!" );
    }
  }
  if ( init_string( &translated ) && add_string_replace( &translated, &id[0], strlen( &id[0] ), 46, 42 ) )
  {
    &opt[0] = get_opt_rec_real( &opt[0], translated.source );
  }
  done_string( &translated );
  return &opt[0];
}
void really_del_ext( void *fcp )
{
  int edx;
  struct option_elinks *opt;
  if ( opt[0].next )
  {
    fcp = (void*)opt[0].next;
  }
  return;
}
tree/*union*/void menu_del_ext( struct terminal *term, void *fcp, void *xxx2 )
{
  int edx;
  struct option_elinks *opt;
  if ( fcp )
  {
    if ( opt[0].next == 0 )
    {
      term = &((int*)fcp)[0];
    }
    msg_box( &term[0], getml( &((int*)fcp)[0] ), MSGBOX_FREE_TEXT, "Delete extension", ALIGN_CENTER, msg_text( &term[0], "Delete extension %s -&gt; %s?" ), &((int*)fcp)[0], 2 );
  }
  return;
}
void add_mime_extension( void *data )
{
  struct string name;
  if ( data && init_string( &name ) )
  {
    add_to_string( &name, "mime.extension." );
    add_string_replace( &name, &((int*)data)[256], strlen( &((int*)data)[256] ), 46, 42 );
    really_del_ext( &((int*)data)[0] );
    safe_strncpy( *(int*)(get_opt_( config_options, (unsigned char*)config_options )), &((int*)data)[512], 1024 );
    option_changed( 0, get_opt_rec( config_options, name.source ) );
    done_string( &name );
  }
  return;
}
void menu_add_ext( struct terminal *term, void *fcp, void *xxx2 )
{
  int edx;
  struct extension *new;
  struct dialog *dlg;
  if ( mem_calloc( 1, 3300 ) == 0 )
  {
    if ( ((int*)fcp)[0] )
    {
      term = &((int*)fcp)[0];
    }
    return;
  }
  else
  {
    new = mem_calloc( 1, 3300 ) + 228;
    if ( ((int*)fcp)[0] )
    {
      struct option_elinks *opt;
      if ( get_real_opt( "mime.extension", &((int*)fcp)[0] ) )
      {
        safe_strncpy( (unsigned char*)dlg[14].widgets->info.button.done_data, &((int*)fcp)[0], 1024 );
        safe_strncpy( (unsigned char*)dlg[27].udata2, (unsigned char*)opt->value.tree/*union*/, 1024 );
        safe_strncpy( (unsigned char*)new, &((int*)fcp)[0], 1024 );
      }
      mem_free( &((int*)fcp)[0] );
    }
    if ( 0 != 69 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Extension" );
    }
    dlg->title = gettext( "Extension" );
    dlg->layouter = &generic_dialog_layouter;
    if ( 0 != 69 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Extension(s)" );
    }
    add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "Extension(s)" ), 0, 0, &check_nonempty, 1024, &new->ext[0], 0, INPFIELD_NONE );
    if ( 0 != 67 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Content-Type" );
    }
    add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "Content-Type" ), 0, 0, &check_nonempty, 1024, &new->ct[0], 0, INPFIELD_NONE );
    if ( 0 != 126 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "~OK" );
    }
    add_dlg_button_do( &dlg[0], gettext( "~OK" ), 1, &ok_dialog, 0, &add_mime_extension, (void*)new );
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
      assert_failed = *(int*)(dlg[0].title + 32) != 4;
      if ( dlg->number_of_widgets != 4 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/mime/dialogs.c";
        errline = 135;
        elinks_internal( "assertion 4 == (dlg)-&gt;number_of_widgets failed!" );
      }
      fcp = (void*)dlg[0].title;
      term = &term[0];
      xxx2 = (void*)getml( (void*)dlg[0].title );
    }
  }
}
void menu_list_ext( struct terminal *term, void *fn_, void *xxx )
{
  int edx;
  struct list_head_elinks *opt_tree;
  struct option_elinks *opt;
  struct menu_item *mi = 0;
  opt_tree = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  opt = *(int*)(*(int*)(get_opt_( config_options, (unsigned char*)config_options )) + 4);
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) != *(int*)(*(int*)(get_opt_( config_options, (unsigned char*)config_options )) + 4) )
  {
    do
    {
      struct string translated;
      unsigned char *translated2;
      unsigned char *optptr2;
      strcmp( "_template_", (char*)opt->name );
      if ( !1 )
      {
        if ( init_string( &translated ) == 0 || add_string_replace( &translated, opt->name, strlen( (char*)opt->name ), 42, 46 ) == 0 )
          done_string( ebp_36 );
        else
        {
          if ( mi == 0 )
          {
            mi = new_menu( 79 );
            if ( mi == 0 )
            {
              done_string( ebp_36 );
              break;
            }
          }
          translated2[0] = memacpy( translated.source, translated.length );
          if ( optptr2[0] )
          {
            if ( ( translated2[0] != 0 ) & 255 )
              add_to_menu( &mi, ebp_36, stracpy( (unsigned char*)opt->value.tree ), ACT_MAIN_NONE, fn_, &translated2[0], NO_FLAG );
            else
            {
              mem_free( (void*)stracpy( (unsigned char*)opt->value.tree ) );
            }
          }
          else
          if ( ( translated2[0] != 0 ) & 255 )
            mem_free( &translated2[0] );
          done_string( &translated );
          opt = opt->prev;
          if ( opt->prev == opt_tree )
          {
            break;
          }
        }
      }
      opt = opt->prev;
    }
    while ( opt->prev == opt_tree );
    if ( mi == 0 )
      mi = mi_no_ext;
    do_menu( term, mi, 0, 0 );
    return;
  }
  else
    mi = mi_no_ext;
    do_menu( term, mi, 0, 0 );
    return;
}
#if 0
#endif
