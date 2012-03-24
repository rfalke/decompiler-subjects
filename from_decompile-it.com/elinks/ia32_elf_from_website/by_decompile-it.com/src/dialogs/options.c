#include "options.c.h"
static struct option_resolver resolvers[8] = { { 0, "type" }
, { 1, "m11_hack" }
, { 2, "restrict_852" }
, { 3, "block_cursor" }
, { 4, "colors" }
, { 6, "transparency" }
, { 5, "utf_8_io" }
, { 7, "underline" }
 };
static unsigned char width_str[4];
static unsigned char height_str[4];
void display_codepage( struct terminal *term, void *name_, void *xxx )
{
  int eax;
  struct option_elinks *opt = get_opt_rec( term->spec, "charset" );
  int index;
  get_cp_index( (unsigned char*)name_ );
  if ( assert_failed == 0 )
  {
    assert_failed = index == -1;
    if ( !(_Bool)( index != -1 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/options.c";
      errline = 36;
      elinks_internal( "assertion index != -1 failed: %s" );
      *ebp_12 = index;
    }
  }
  if ( opt->value.tree != index )
  {
    opt->value.tree = &index;
    option_changed( 0, &opt[0] );
  }
}
void charset_list( struct terminal *term, void *xxx, void *ses_ )
{
  int i;
  int sel;
  unsigned char *sel_mime = get_cp_mime_name( get_terminal_codepage( term ) );
  struct menu_item *mi = &mi[0];
  if ( mi[0].text )
  {
    sel = 0;
    i = 0;
    while ( get_cp_name( i ) == 0 )
    {
      unsigned char *name;
      sel = strcmp( (char*)sel_mime, (char*)get_cp_mime_name( i ) ) == 0 ? sel : i;
      i++;
      add_to_menu( &mi, get_cp_config_name( i ), 0, ACT_MAIN_NONE, &display_codepage, (void*)get_cp_config_name( i ), NO_FLAG );
    }
    do_menu_selected( term, mi, ses_, sel, 0 );
  }
  return;
}
widget_handler_status_T push_ok_button( struct dialog_data *dlg_data, struct widget_data *button )
{
  struct terminal *term = &dlg_data->box.width;
  union option_value *values = &dlg_data->dlg->udata[0];
  update_dialog_data( dlg_data );
  commit_option_values( resolvers, term->spec, &dlg_data->dlg->udata[0], 8 );
  if ( push_ok_button == button->box.x )
  {
    button = &button[0];
    dlg_data = &dlg_data[0];
  }
  *ebp_12 = ebx;
  return 0;
}
widget_handler_status_T push_save_button( struct dialog_data *dlg_data, struct widget_data *button )
{
  push_ok_button( dlg_data, button );
  write_config( &dlg_data->box.width );
  return 0;
}
void terminal_options( struct terminal *term, void *xxx, struct session *ses )
{
  int eax;
  int edx;
  struct dialog *dlg;
  union option_value *values;
  int anonymous = *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options ));
  unsigned char help_text[1024], *text;
  size_t help_textlen;
  if ( term->height <= 30 )
    help_textlen = 0;
  else
  {
    if ( 0 != 84 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "The environmental variable TERM is set to '%s'.\n\nELinks maintains separate sets of values for these options\nand chooses the appropriate set based on the value of TERM.\nThis allows you to configure the settings appropriately for\neach terminal in which you run ELinks." );
    }
    __snprintf_chk( help_text, 1021, 1, 1024, (char*)gettext( "The environmental variable TERM is set to '%s'.\n\nELinks maintains separate sets of values for these options\nand chooses the appropriate set based on the value of TERM.\nThis allows you to configure the settings appropriately for\neach terminal in which you run ELinks." ), term->spec->name );
    help_textlen = help_text[0];
    do
    {
      help_textlen += 4;
    }
    while ( ( ( help_textlen - 0x1010101 ) & ~help_textlen & -2139062144 ) == 0 );
    help_text[ ( ( help_textlen & 32896 ) == 0 ? help_textlen : help_textlen + 2 ) - 3 - ( 0 & 1 ) - help_text[0] ] = 10;
    help_textlen = ( ( ( help_textlen & 32896 ) == 0 ? help_textlen : help_textlen + 2 ) - 3 - ( 0 & 1 ) - help_text[0] ) + 2;
    help_text[ ( ( ( help_textlen & 32896 ) == 0 ? help_textlen : help_textlen + 2 ) - 3 - ( 0 & 1 ) - help_text[0] ) + 1 ] = 10;
    help_textlen = ( ( ( help_textlen & 32896 ) == 0 ? help_textlen : help_textlen + 2 ) - 3 - ( 0 & 1 ) - help_text[0] ) + 1079;
  }
  help_text[ help_textlen ] = 0;
  if ( mem_calloc( 1, ( ( ( help_textlen & 32896 ) == 0 ? 1077 : 1077 + 2 ) - 3 - ( 0 & 1 ) - ebx ) + 1079 ) )
  {
    values = mem_calloc( 1, ( ( ( help_textlen & 32896 ) == 0 ? 1077 : 1077 + 2 ) - 3 - ( 0 & 1 ) - ebx ) + 1079 ) + 1044;
    checkout_option_values( resolvers, term->spec, mem_calloc( 1, ( ( ( help_textlen & 32896 ) == 0 ? 1077 : 1077 + 2 ) - 3 - ( 0 & 1 ) - ebx ) + 1079 ) + 1044, 8 );
    if ( 0 != 84 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Terminal options" );
    }
    dlg->layout.bits_at_0/*.1_1of4*/ |= 2;
    text[0] = values[8].tree;
    dlg->title = gettext( "Terminal options" );
    dlg->layouter = &generic_dialog_layouter;
    dlg->udata = (void*)values[0].tree;
    memcpy( values[8].tree, help_text, 1 );
    add_dlg_text( &dlg[0], (unsigned char*)values[8].tree, ALIGN_LEFT, 1 );
    if ( 0 != 70 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Frame handling:" );
    }
    add_dlg_text( &dlg[0], gettext( "Frame handling:" ), ALIGN_LEFT, 1 );
    if ( 0 != 78 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "No frames" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "No frames" ), 1, 0, (int*)values[0].tree );
    if ( 0 != 86 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "VT 100 frames" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "VT 100 frames" ), 1, 1, (int*)values[0].tree );
    if ( 0 != 76 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Linux or OS/2 frames" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "Linux or OS/2 frames" ), 1, 2, (int*)values[0].tree );
    if ( 0 != 70 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "FreeBSD frames" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "FreeBSD frames" ), 1, 4, (int*)values[0].tree );
    if ( 0 != 75 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "KOI8-R frames" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "KOI8-R frames" ), 1, 3, (int*)values[0].tree );
    if ( 0 != 67 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Color mode:" );
    }
    add_dlg_text( &dlg[0], gettext( "Color mode:" ), ALIGN_LEFT, 1 );
    if ( 0 != 78 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "No colors (mono)" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "No colors (mono)" ), 2, 0, (int*)values[4].tree );
    if ( 0 != 49 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "16 colors" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "16 colors" ), 2, 1, (int*)values[4].tree );
    if ( 0 != 56 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "88 colors" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "88 colors" ), 2, 2, (int*)values[4].tree );
    if ( 0 != 50 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "256 colors" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "256 colors" ), 2, 3, (int*)values[4].tree );
    if ( 0 != 83 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Switch fonts for line drawing" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "Switch fonts for line drawing" ), 0, 0, (int*)values[1].tree );
    if ( 0 != 82 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Restrict frames in cp850/852" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "Restrict frames in cp850/852" ), 0, 0, (int*)values[2].tree );
    if ( 0 != 66 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Block cursor" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "Block cursor" ), 0, 0, (int*)values[3].tree );
    if ( 0 != 84 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Transparency" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "Transparency" ), 0, 0, (int*)values[6].tree );
    if ( 0 != 85 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "Underline" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "Underline" ), 0, 0, (int*)values[7].tree );
    if ( 0 != 85 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "UTF-8 I/O" );
    }
    add_dlg_radio_do( &dlg[0], gettext( "UTF-8 I/O" ), 0, 0, tree/*union*/&values[5].tree/*union*/ );
    if ( 0 != 126 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "~OK" );
    }
    add_dlg_button_do( &dlg[0], gettext( "~OK" ), 1, &push_ok_button, 0, 0, 0 );
    if ( anonymous == 0 )
    {
      if ( 0 != 83 )
      {
        if ( current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Sa~ve" );
      }
      add_dlg_button_do( &dlg[0], gettext( "Sa~ve" ), 1, &push_save_button, 0, 0, 0 );
    }
    if ( 0 != 126 )
    {
      if ( current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      gettext( "~Cancel" );
    }
    add_dlg_button_do( &dlg[0], gettext( "~Cancel" ), 2, &cancel_dialog, 0, 0, 0 );
    if ( assert_failed == 0 )
    {
      assert_failed = dlg->number_of_widgets != 21 - anonymous;
      if ( dlg->number_of_widgets != 21 - anonymous )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/options.c";
        errline = 239;
        elinks_internal( "assertion (19 + 1 + 1 + 0) - anonymous == (dlg)-&gt;number_of_widgets failed!" );
      }
    }
    do_dialog( &term[0], &dlg[0], getml( (void*)dlg[0].title ) );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void menu_set_language( struct terminal *term, void *pcp_, void *xxx )
{
  set_language( pcp_ );
}
void menu_language_list( struct terminal *term, void *xxx, void *ses )
{
  int eax;
  int i;
  struct menu_item *mi;
  if ( new_menu( FREE_LIST ) )
  {
    mi = new_menu( FREE_LIST );
    if ( languages[0].name )
    {
      i = 0;
      do
      {
        i++;
        add_to_menu( &mi, languages[ i ].name, language_to_iso639( i ), ACT_MAIN_NONE, &menu_set_language, &i, NO_FLAG );
      }
      while ( languages[ i ].name == 0 );
      mi->text = (unsigned char*)mi;
    }
    do_menu_selected( term, mi, ses, current_language, 0 );
  }
  return;
}
void push_resize_button( void *data )
{
  unsigned char str[1024];
  __snprintf_chk( str, 1024, 1, 1024, "%s,%s,%d,%d", width_str, height_str, ((int*)data)[11], ((int*)data)[12] );
  do_terminal_function( &data[0], 2, str );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void resize_terminal_dialog( struct terminal *term )
{
  struct dialog *dlg;
  int width = (unsigned char)( ( term->width < 999 ) ^ 1 ) ? term->width : 999;
  int height = (unsigned char)( ( term->height < 999 ) ^ 1 ) ? term->height : 999;
  if ( can_resize_window( term->environment ) )
  {
    elinks_ulongcat( width_str, 0, width, 3, 32, 10, 0 );
    elinks_ulongcat( height_str, 0, height, 3, 32, 10, 0 );
    if ( mem_calloc( 1, 228 ) )
    {
      if ( 0 != 82 )
      {
        if ( current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Resize terminal" );
      }
      dlg->title = gettext( "Resize terminal" );
      dlg->layouter = &group_layouter;
      if ( 0 != 87 )
      {
        if ( current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Width=" );
      }
      add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "Width=" ), 1, 999, &check_number, 4, width_str, 0, INPFIELD_NONE );
      if ( 0 != 72 )
      {
        if ( current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "Height=" );
      }
      add_dlg_field_do( &dlg[0], WIDGET_FIELD, gettext( "Height=" ), 1, 999, &check_number, 4, height_str, 0, INPFIELD_NONE );
      if ( 0 != 126 )
      {
        if ( current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        gettext( "~OK" );
      }
      add_dlg_button_do( &dlg[0], gettext( "~OK" ), 1, &ok_dialog, 0, &push_resize_button, (void*)term[0].next );
      if ( 0 != 126 )
      {
        if ( current_charset != get_terminal_codepage( &term[0] ) )
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
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/options.c";
          errline = 318;
          elinks_internal( "assertion 4 == (dlg)-&gt;number_of_widgets failed!" );
        }
      }
      do_dialog( &term[0], &dlg[0], getml( (void*)dlg[0].title ) );
      return;
    }
  }
  return;
}
#if 0
#endif
