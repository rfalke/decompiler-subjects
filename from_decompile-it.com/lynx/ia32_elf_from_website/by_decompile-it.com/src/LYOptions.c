#include "LYOptions.c.h"
BOOLEAN term_options;
static BOOLEAN can_do_colors;
static int LYChosenShowColor;
static char selected_string[9];
static char disabled_string[9];
static char on_string[3];
static char off_string[4];
static char never_string[6];
static char always_string[7];
static OptValues bool_values[3];
static char *secure_string;
static char *secure_value;
static char *save_options_string;
static char *cookies_string;
static char *cookies_ignore_all_string;
static char *cookies_up_to_user_string;
static char *cookies_accept_all_string;
static char *x_display_string;
static char *editor_string;
static char *emacs_keys_string;
static char *keypad_mode_string;
static OptValues keypad_mode_values[5];
static char *lineedit_mode_string;
static char *mail_address_string;
static char *search_type_string;
static char *anonftp_password_string;
static OptValues search_type_values[3];
static char *show_color_string;
static OptValues show_color_values[5];
static char *show_cursor_string;
static char *underline_links_string;
static char *show_scrollbar_string;
static char prompt_dft_string[16];
static char prompt_yes_string[19];
static char prompt_no_string[18];
static OptValues prompt_values[4];
static char *cookie_prompt_string;
static char *user_mode_string;
static OptValues user_mode_values[4];
static char *vi_keys_string;
static char *visited_links_string;
static OptValues visited_links_values[6];
static char *DTD_recovery_string;
static OptValues DTD_type_values[3];
static char *select_popups_string;
static char *images_string;
static char *images_ignore_all_string;
static char *images_use_label_string;
static char *images_use_links_string;
static char *verbose_images_string;
static OptValues verbose_images_type_values[3];
static char *mbm_string;
static OptValues mbm_values[4];
static char *single_bookmark_string;
static char *assume_char_set_string;
static char *display_char_set_string;
static char *raw_mode_string;
static char *locale_charset_string;
static char *show_dotfiles_string;
static char *dired_list_string;
static OptValues dired_list_values[4];
static char *dired_sort_string;
static OptValues dired_sort_values[8];
static char *passive_ftp_string;
static char *ftp_sort_string;
static OptValues ftp_sort_values[5];
static char *show_rate_string;
static OptValues rate_values[6];
static char *preferred_media_string;
static OptValues media_values[6];
static char *preferred_encoding_string;
static OptValues encoding_values[7];
static char *preferred_doc_char_string;
static char *preferred_doc_lang_string;
static char *user_agent_string;
BOOLEAN LYCheckUserAgent( void )
{
  return 1;
}
void validate_x_display( void )
{
  char *cp = LYgetXDisplay( );
  if ( cp )
  {
    HTSACopy( &x_display, cp );
  }
  else
  if ( x_display )
  {
    free( x_display );
    x_display = 0;
  }
  return;
}
void summarize_x_display( char *display_option )
{
  if ( ( x_display == 0 && display_option[0] == 0 ) || ( x_display && strcmp( x_display, display_option ) == 0 ) )
  {
    if ( x_display == 0 && LYisConfiguredForX == 1 )
    {
      mustshow = 1;
      statusline( gettext( "Value accepted! -- WARNING: Lynx is configured for XWINDOWS!" ) );
    }
    else
    if ( x_display && LYisConfiguredForX == 0 )
    {
      mustshow = 1;
      statusline( gettext( "Value accepted! -- WARNING: Lynx is NOT configured for XWINDOWS!" ) );
    }
    else
    {
      mustshow = 1;
      statusline( gettext( "Value accepted!" ) );
    }
  }
  else
  if ( display_option[0] )
  {
    mustshow = 1;
    statusline( gettext( "Failed to set DISPLAY variable!" ) );
  }
  else
  {
    mustshow = 1;
    statusline( gettext( "Failed to clear DISPLAY variable!" ) );
  }
  return;
}
void SetupChosenShowColor( void )
{
  can_do_colors = 1;
  if ( LYCursesON )
  {
    can_do_colors = has_colors( );
  }
  if ( no_option_save == 0 && LYChosenShowColor == -1 )
  {
    if ( LYrcShowColor == 0 )
    {
      LYChosenShowColor = 0;
    }
    else
    if ( LYrcShowColor == 3 )
    {
      if ( can_do_colors == 0 )
      {
        LYChosenShowColor = 3;
      }
      else
      {
        LYChosenShowColor = 1;
      }
    }
    else
    {
      LYChosenShowColor = 1;
    }
  }
  return;
}
int add_it( char *text, int len )
{
  if ( len )
  {
    text[ len ] = 0;
    LYwaddnstr( LYwin, text, strlen( text ) );
  }
  return 0;
}
void addlbl( char *text )
{
  char actual[80];
  int s, d;
  BOOLEAN b = 0;
  d = 0;
  s = d;
  for ( ; text[ s ] == 0; s++ )
  {
    actual[ d ] = text[ s ];
    d++;
    if ( text[ s ] == '(' )
    {
      d = add_it( actual, d + -1 );
      lynx_start_bold( );
      b = 1;
      actual[ d ] = text[ s ];
      d++;
      // s++;
    }
    else
    {
      if ( text[ s ] == ')' )
      {
        d = add_it( actual, d );
        lynx_stop_bold( );
        b = 0;
      }
    }
  }
}
void LYoptions( void )
{
  int eax;
  static char *bool_choices[3] = { "OFF", "ON", 0 };
  static char *caseless_choices[3] = { "CASE INSENSITIVE", "CASE SENSITIVE", 0 };
  static char *dirList_choices[4] = { "Directories first", "Files first", "Mixed style", 0 };
  static char *fileSort_choices[5] = { "By Filename", "By Type", "By Size", "By Date", 0 };
  static char *keypad_choices[4] = { "Numbers act as arrows", "Links are numbered", "Links and form fields are numbered", 0 };
  static char *mbm_choices[4] = { "OFF     ", "STANDARD", "ADVANCED", 0 };
  static char *userMode_choices[4] = { "Novice", "Intermediate", "Advanced", 0 };
  int response, ch;
  char display_option[1024];
  char *choices[10];
  int CurrentCharSet = current_char_set;
  int CurrentAssumeCharSet = UCLYhndl_for_unspec;
  int CurrentShowColor = LYShowColor;
  BOOLEAN CurrentRawMode = LYRawMode;
  BOOLEAN AddValueAccepted = 0;
  char *cp = 0;
  BOOLEAN use_assume_charset;
  BOOLEAN old_use_assume_charset;
  if ( LYlines <= 22 )
  {
    HTAlert( gettext( "Screen height must be at least 23 lines for the Options menu!" ) );
  }
  else
  {
    term_options = 0;
    LYStatusLine = LYlines + -1;
    signal( 2, &terminate_options );
    if ( no_option_save )
    {
      if ( LYShowColor == 0 )
        LYShowColor = 1;
      else
      if ( LYShowColor == 3 )
        LYShowColor = 2;
    }
    else
      SetupChosenShowColor( );
    old_use_assume_charset = use_assume_charset = user_mode == 2;
    while ( 1 )
    {
      old_use_assume_charset = use_assume_charset;
      if ( enable_scrollback )
        LYclear( );
      else
        LYerase( );
      LYmove( 0, 5 );
      lynx_start_h1_color( );
      LYwaddnstr( LYwin, "         Options Menu (", 23 );
      LYwaddnstr( LYwin, "Lynx", 4 );
      LYwaddnstr( LYwin, " Version ", 9 );
      LYwaddnstr( LYwin, "2.8.7dev.11", 11 );
      waddch( LYwin, 41 );
      lynx_stop_h1_color( );
      LYmove( 2, 5 );
      addlbl( "(E)ditor                     : " );
      LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
      LYmove( 3, 5 );
      addlbl( "(D)ISPLAY variable           : " );
      LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
      LYmove( 4, 5 );
      addlbl( "mu(L)ti-bookmarks: " );
      LYwaddnstr( LYwin, mbm_choices[ LYMultiBookmarks ], strlen( mbm_choices[ LYMultiBookmarks ] ) );
      LYmove( 4, 34 );
      if ( LYMultiBookmarks )
        addlbl( "review/edit (B)ookmarks files" );
      else
      {
        addlbl( "(B)ookmark file: " );
        LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
      }
      LYmove( 5, 5 );
      addlbl( "(F)TP sort criteria          : " );
      LYwaddnstr( LYwin, "By Filename", 11 );
      LYmove( 6, 5 );
      addlbl( "(P)ersonal mail address      : " );
      LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
      LYmove( 7, 5 );
      addlbl( "(S)earching type             : " );
      LYwaddnstr( LYwin, "CASE INSENSITIVE", 16 );
      LYmove( 10, 5 );
      addlbl( "display (C)haracter set      : " );
      LYwaddnstr( LYwin, LYchar_set_names[ current_char_set ], strlen( LYchar_set_names[ current_char_set ] ) );
      LYmove( 8, 5 );
      addlbl( "preferred document lan(G)uage: " );
      LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
      LYmove( 9, 5 );
      addlbl( "preferred document c(H)arset : " );
      LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
      if ( use_assume_charset )
      {
        LYmove( 10, 5 );
        addlbl( "(^A)ssume charset if unknown : " );
        if ( UCAssume_MIMEcharset )
        {
          LYwaddnstr( LYwin, UCAssume_MIMEcharset, strlen( UCAssume_MIMEcharset ) );
        }
        else
        {
          LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
        }
      }
      LYmove( 11, 5 );
      addlbl( "Raw 8-bit or CJK m(O)de      : " );
      LYwaddnstr( LYwin, "OFF", 3 );
      LYmove( 11, 44 );
      addlbl( "show color (&)  : " );
      if ( no_option_save )
      {
        LYwaddnstr( LYwin, LYShowColor == 1 ? "ON " : "OFF", 3 );
      }
      else
      {
        switch ( LYChosenShowColor )
        {
        case 0:
          LYwaddnstr( LYwin, "NEVER     ", 10 );
          break;
        case 1:
          LYwaddnstr( LYwin, "OFF", 3 );
          break;
        case 2:
          LYwaddnstr( LYwin, "ON ", 3 );
          break;
        case 3:
          if ( ( has_colors( ) ^ 1 ) & 255 )
            LYwaddnstr( LYwin, "Always try", 10 );
          else
            LYwaddnstr( LYwin, "ALWAYS    ", 10 );
          break;
        }
      }
      LYmove( 12, 5 );
      addlbl( "(V)I keys: " );
      LYwaddnstr( LYwin, "OFF", 3 );
      LYmove( 12, 22 );
      addlbl( "e(M)acs keys: " );
      LYwaddnstr( LYwin, "OFF", 3 );
      LYmove( 12, 44 );
      addlbl( "sho(W) dot files: " );
      LYwaddnstr( LYwin, "OFF", 3 );
      LYmove( 13, 5 );
      addlbl( "popups for selec(T) fields   : " );
      LYwaddnstr( LYwin, "OFF", 3 );
      LYmove( 13, 44 );
      addlbl( "show cursor (@) : " );
      LYwaddnstr( LYwin, "OFF", 3 );
      LYmove( 14, 5 );
      addlbl( "(K)eypad mode                : " );
      if ( keypad_mode == 3 )
        goto B236;
      else
      if ( keypad_mode == 2 )
        goto B236;
      else
      {
        LYwaddnstr( LYwin, "Links and form fields are numbered", 34 );
        LYmove( 15, 5 );
        addlbl( "li(N)e edit style            : " );
        LYwaddnstr( LYwin, LYLineeditNames[ current_lineedit ], strlen( LYLineeditNames[ current_lineedit ] ) );
        LYmove( 17, 5 );
        addlbl( "l(I)st directory style       : " );
        LYwaddnstr( LYwin, "Files first      ", 17 );
        LYmove( 18, 5 );
        addlbl( "(U)ser mode                  : " );
        LYwaddnstr( LYwin, "Novice      ", 12 );
        addlbl( "  verbose images (!) : " );
        LYwaddnstr( LYwin, "OFF", 3 );
        LYmove( 19, 5 );
        addlbl( "user (A)gent                 : " );
        LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
        LYmove( LYlines + -3, 2 );
        LYwaddnstr( LYwin, gettext( "Select " ), strlen( gettext( "Select " ) ) );
        lynx_start_bold( );
        LYwaddnstr( LYwin, gettext( "capital letter" ), strlen( gettext( "capital letter" ) ) );
        lynx_stop_bold( );
        LYwaddnstr( LYwin, gettext( " of option line," ), strlen( gettext( " of option line," ) ) );
        if ( no_option_save == 0 )
        {
          LYwaddnstr( LYwin, " '", 2 );
          lynx_start_bold( );
          LYwaddnstr( LYwin, "&gt;", 1 );
          lynx_stop_bold( );
          LYwaddnstr( LYwin, "'", 1 );
          LYwaddnstr( LYwin, gettext( " to save," ), strlen( gettext( " to save," ) ) );
        }
        LYwaddnstr( LYwin, gettext( " or " ), strlen( gettext( " or " ) ) );
        LYwaddnstr( LYwin, "'", 1 );
        lynx_start_bold( );
        LYwaddnstr( LYwin, "r", 1 );
        lynx_stop_bold( );
        LYwaddnstr( LYwin, "'", 1 );
        LYwaddnstr( LYwin, gettext( " to return to Lynx." ), strlen( gettext( " to return to Lynx." ) ) );
        response = 0;
        while ( response != 82 && !( LYisNonAlnumKeyname( response, 37 ) & 255 ) && response != 62 && term_options == 0 )
        {
          switch ( response )
          {
          case -1:
            if ( keymap[0] == 47 )
            {
              if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( response * 2 )) & 16384 )
              {
                if ( AddValueAccepted == 1 )
                {
                  mustshow = 1;
                  statusline( gettext( "Value accepted!" ) );
                  AddValueAccepted = 0;
                }
                LYmove( LYlines + -2, 0 );
                lynx_start_prompt_color( );
                LYwaddnstr( LYwin, gettext( "Command: " ), strlen( gettext( "Command: " ) ) );
                lynx_stop_prompt_color( );
                LYrefresh( );
                response = LYgetch_single( );
                if ( term_options == 0 )
                {
                  switch ( response )
                  {
                  case -1:
                    if ( keymap[0] == 47 )
                    {
                      if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( response * 2 )) & 16384 ) == 0 )
                        goto B372;
                      else
                      {
                        if ( LYisNonAlnumKeyname( response, 21 ) & 255 )
                        {
                          lynx_force_repaint( );
                          break;
                        }
                        else
                        {
                          switch ( response )
                          {
                          case 82:
                            break;
                          case 69:
                            if ( no_editor )
                            {
                              mustshow = 1;
                              statusline( gettext( "The 'e'dit command is currently disabled." ) );
                            }
                            else
                            if ( system_editor )
                            {
                              mustshow = 1;
                              statusline( gettext( "You are not allowed to change which editor to use!" ) );
                            }
                            else
                            {
                              if ( editor && editor[0] )
                                LYstrncpy( display_option, editor, 1023 );
                              else
                              {
                                LYmove( 2, 36 );
                                LYwaddnstr( LYwin, "    ", 4 );
                                display_option[0] = 0;
                              }
                              mustshow = 1;
                              statusline( gettext( "Hit RETURN to accept entered data." ) );
                              LYmove( 2, 36 );
                              lynx_start_bold( );
                              ch = LYgetstr( display_option, 0, 1024, 0 );
                              lynx_stop_bold( );
                              LYmove( 2, 36 );
                              if ( term_options || ch == -1 )
                              {
                                LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                              }
                              else
                              if ( display_option[0] == 0 )
                              {
                                if ( editor )
                                {
                                  free( editor );
                                  editor = 0;
                                }
                                LYwaddnstr( LYwin, "NONE", 4 );
                              }
                              else
                              {
                                HTSACopy( &editor, display_option );
                                LYwaddnstr( LYwin, display_option, strlen( display_option ) );
                              }
                              LYclrtoeol( );
                              if ( ch == -1 )
                              {
                                HTInfoMsg( gettext( "Cancelled!!!" ) );
                                HTInfoMsg( "" );
                              }
                              else
                              {
                                mustshow = 1;
                                statusline( gettext( "Value accepted!" ) );
                              }
                            }
                            response = 32;
                            break;
                          case 68:
                            if ( x_display && x_display[0] )
                              LYstrncpy( display_option, x_display, 1023 );
                            else
                            {
                              LYmove( 3, 36 );
                              LYwaddnstr( LYwin, "    ", 4 );
                              display_option[0] = 0;
                            }
                            mustshow = 1;
                            statusline( gettext( "Hit RETURN to accept entered data." ) );
                            LYmove( 3, 36 );
                            lynx_start_bold( );
                            ch = LYgetstr( display_option, 0, 1024, 0 );
                            lynx_stop_bold( );
                            LYmove( 3, 36 );
                            if ( term_options || ch == -1 || ( x_display && strcmp( x_display, display_option ) == 0 ) )
                            {
                              LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                              LYclrtoeol( );
                              if ( ch == -1 )
                              {
                                HTInfoMsg( gettext( "Cancelled!!!" ) );
                                HTInfoMsg( "" );
                              }
                              else
                              {
                                mustshow = 1;
                                statusline( gettext( "Value accepted!" ) );
                              }
                              response = 32;
                            }
                            else
                            {
                              if ( display_option[0] == 0 && ( x_display == 0 || ( x_display && x_display[0] == 0 ) ) )
                              {
                                LYwaddnstr( LYwin, "NONE", 4 );
                                LYclrtoeol( );
                                mustshow = 1;
                                statusline( gettext( "Value accepted!" ) );
                                response = 32;
                              }
                              else
                              {
                                LYsetXDisplay( display_option );
                                validate_x_display( );
                                cp = 0;
                                LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                                LYclrtoeol( );
                                summarize_x_display( display_option );
                                response = 32;
                              }
                            }
                            break;
                          case 76:
                            if ( LYMBMBlocked )
                            {
                              mustshow = 1;
                              statusline( gettext( "Multiple bookmark support is not available." ) );
                              response = 32;
                            }
                            else
                            {
                              if ( LYSelectPopups == 0 )
                              {
                                LYMultiBookmarks = boolean_choice( LYMultiBookmarks, 4, 24, mbm_choices );
                              }
                              else
                              {
                                LYMultiBookmarks = popup_choice( LYMultiBookmarks, 4, 23, mbm_choices, 3, 0, 0 );
                              }
                              if ( LYSelectPopups == 0 )
                              {
                                LYmove( 4, 34 );
                                LYclrtoeol( );
                                if ( LYMultiBookmarks )
                                {
                                  LYwaddnstr( LYwin, gettext( "review/edit B)ookmarks files" ), strlen( gettext( "review/edit B)ookmarks files" ) ) );
                                }
                                else
                                {
                                  LYwaddnstr( LYwin, gettext( "B)ookmark file: " ), strlen( gettext( "B)ookmark file: " ) ) );
                                  LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                                }
                              }
                              response = 32;
                              if ( LYSelectPopups )
                              {
                                if ( term_options )
                                {
                                  term_options = 0;
                                }
                                else
                                {
                                  AddValueAccepted = 1;
                                }
                              }
                            }
                            break;
                          case 66:
                            if ( no_bookmark == 0 )
                            {
                              if ( LYMultiBookmarks )
                              {
                                edit_bookmarks( );
                                signal( 2, &terminate_options );
                              }
                              else
                              {
                                if ( bookmark_page && bookmark_page[0] )
                                  LYstrncpy( display_option, bookmark_page, 1023 );
                                else
                                {
                                  LYmove( 4, 50 );
                                  LYclrtoeol( );
                                  display_option[0] = 0;
                                }
                                mustshow = 1;
                                statusline( gettext( "Hit RETURN to accept entered data." ) );
                                LYmove( 4, 50 );
                                lynx_start_bold( );
                                ch = LYgetstr( display_option, 0, 1024, 0 );
                                lynx_stop_bold( );
                                LYmove( 4, 50 );
                                if ( term_options || ch == -1 || display_option[0] == 0 )
                                {
                                  LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                                }
                                else
                                {
                                  if ( ( LYPathOffHomeOK( display_option, 1024 ) & 255 ) == 0 )
                                  {
                                    LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                                    LYclrtoeol( );
                                    mustshow = 1;
                                    statusline( gettext( "Use a filepath off your home directory!" ) );
                                    response = 32;
                                  }
                                  else
                                  {
                                    HTSACopy( &bookmark_page, display_option );
                                    HTSACopy( MBM_A_subbookmark, bookmark_page );
                                    LYwaddnstr( LYwin, bookmark_page, strlen( bookmark_page ) );
                                  }
                                }
                                LYclrtoeol( );
                                if ( ch == -1 )
                                {
                                  HTInfoMsg( gettext( "Cancelled!!!" ) );
                                  HTInfoMsg( "" );
                                }
                                else
                                {
                                  mustshow = 1;
                                  statusline( gettext( "Value accepted!" ) );
                                }
                              }
                            }
                            else
                            {
                              mustshow = 1;
                              statusline( gettext( "You are not allowed to change the bookmark file!" ) );
                            }
                            response = 32;
                            break;
                          case 70:
                            if ( LYSelectPopups == 0 )
                            {
                              HTfileSortMethod = boolean_choice( HTfileSortMethod, 5, -1, fileSort_choices );
                            }
                            else
                            {
                              HTfileSortMethod = popup_choice( HTfileSortMethod, 5, -1, fileSort_choices, 4, 0, 0 );
                            }
                            response = 32;
                            if ( LYSelectPopups )
                            {
                              if ( term_options )
                              {
                                term_options = 0;
                              }
                              else
                              {
                                AddValueAccepted = 1;
                              }
                            }
                            break;
                          case 80:
                            if ( personal_mail_address && personal_mail_address[0] )
                              LYstrncpy( display_option, personal_mail_address, 1023 );
                            else
                            {
                              LYmove( 6, 36 );
                              LYwaddnstr( LYwin, "    ", 4 );
                              display_option[0] = 0;
                            }
                            mustshow = 1;
                            statusline( gettext( "Hit RETURN to accept entered data." ) );
                            LYmove( 6, 36 );
                            lynx_start_bold( );
                            ch = LYgetstr( display_option, 0, 1024, 0 );
                            lynx_stop_bold( );
                            LYmove( 6, 36 );
                            if ( term_options || ch == -1 )
                            {
                              LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                            }
                            else
                            if ( display_option[0] == 0 )
                            {
                              if ( personal_mail_address )
                              {
                                free( personal_mail_address );
                                personal_mail_address = 0;
                              }
                              LYwaddnstr( LYwin, "NONE", 4 );
                            }
                            else
                            {
                              HTSACopy( &personal_mail_address, display_option );
                              LYwaddnstr( LYwin, display_option, strlen( display_option ) );
                            }
                            LYclrtoeol( );
                            if ( ch == -1 )
                            {
                              HTInfoMsg( gettext( "Cancelled!!!" ) );
                              HTInfoMsg( "" );
                            }
                            else
                            {
                              mustshow = 1;
                              statusline( gettext( "Value accepted!" ) );
                            }
                            response = 32;
                            break;
                          case 83:
                            case_sensitive = boolean_choice( case_sensitive, 7, -1, caseless_choices );
                            response = 32;
                            break;
                          case 1:
                            if ( use_assume_charset )
                            {
                              int i, curval;
                              char **assume_list = calloc( LYNumCharsets + 1, sizeof( char* ) );
                              if ( assume_list == 0 )
                                outofmem( "./LYOptions.c", "options" );
                              i = 0;
                              for ( ; i < LYNumCharsets; i++ )
                              {
                                assume_list[ i ] = LYCharSet_UC[ i ].MIMEname;
                                // i++;
                              }
                              curval = UCLYhndl_for_unspec;
                              if ( curval == current_char_set && UCAssume_MIMEcharset )
                              {
                                curval = UCGetLYhndl_byMIME( UCAssume_MIMEcharset );
                              }
                              if ( curval < 0 )
                              {
                                curval = 0;
                              }
                              if ( LYSelectPopups == 0 )
                              {
                                UCLYhndl_for_unspec = boolean_choice( curval, 10, -1, assume_list );
                              }
                              else
                              {
                                UCLYhndl_for_unspec = popup_choice( curval, 10, -1, assume_list, 0, 0, 0 );
                              }
                              if ( UCLYhndl_for_unspec != CurrentAssumeCharSet || curval != UCLYhndl_for_unspec )
                              {
                                if ( UCLYhndl_for_unspec != CurrentAssumeCharSet )
                                  HTSACopy( &UCAssume_MIMEcharset, LYCharSet_UC[ UCLYhndl_for_unspec ].MIMEname );
                                if ( HTCJK != JAPANESE )
                                  LYRawMode = current_char_set == UCLYhndl_for_unspec;
                                HTMLSetUseDefaultRawMode( current_char_set, LYRawMode );
                                HTMLSetCharacterHandling( current_char_set );
                                CurrentAssumeCharSet = UCLYhndl_for_unspec;
                                CurrentRawMode = LYRawMode;
                                if ( LYSelectPopups == 0 )
                                {
                                  LYmove( 11, 36 );
                                  LYclrtoeol( );
                                  LYwaddnstr( LYwin, "OFF", 3 );
                                }
                              }
                              if ( assume_list )
                              {
                                free( assume_list );
                                assume_list = 0;
                              }
                              response = 32;
                              if ( LYSelectPopups )
                              {
                                if ( term_options )
                                {
                                  term_options = 0;
                                }
                                else
                                {
                                  AddValueAccepted = 1;
                                }
                              }
                            }
                            else
                            {
                              mustshow = 1;
                              statusline( gettext( "That key requires Advanced User mode." ) );
                              AddValueAccepted = 0;
                            }
                            break;
                          case 67:
                            if ( LYSelectPopups == 0 )
                            {
                              current_char_set = boolean_choice( current_char_set, 10, -1, LYchar_set_names );
                            }
                            else
                            {
                              current_char_set = popup_choice( current_char_set, 10, -1, LYchar_set_names, 0, 0, 0 );
                            }
                            if ( current_char_set != CurrentCharSet )
                            {
                              LYUseDefaultRawMode = 1;
                              HTMLUseCharacterSet( current_char_set );
                              CurrentCharSet = current_char_set;
                              CurrentRawMode = LYRawMode;
                              if ( LYSelectPopups == 0 )
                              {
                                LYmove( 11, 36 );
                                LYclrtoeol( );
                                LYwaddnstr( LYwin, "OFF", 3 );
                              }
                            }
                            response = 32;
                            if ( LYSelectPopups )
                            {
                              if ( term_options )
                              {
                                term_options = 0;
                              }
                              else
                              {
                                AddValueAccepted = 1;
                              }
                            }
                            break;
                          case 79:
                            LYRawMode = boolean_choice( LYRawMode, 11, -1, bool_choices );
                            if ( LYRawMode != CurrentRawMode )
                            {
                              HTMLSetUseDefaultRawMode( current_char_set, LYRawMode );
                              HTMLSetCharacterHandling( current_char_set );
                              CurrentRawMode = LYRawMode;
                            }
                            response = 32;
                            break;
                          case 71:
                            if ( language && language[0] )
                              LYstrncpy( display_option, language, 1023 );
                            else
                            {
                              LYmove( 8, 36 );
                              LYwaddnstr( LYwin, "    ", 4 );
                              display_option[0] = 0;
                            }
                            mustshow = 1;
                            statusline( gettext( "Hit RETURN to accept entered data." ) );
                            LYmove( 8, 36 );
                            lynx_start_bold( );
                            ch = LYgetstr( display_option, 0, 1024, 0 );
                            lynx_stop_bold( );
                            LYmove( 8, 36 );
                            if ( term_options || ch == -1 )
                            {
                              LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                            }
                            else
                            if ( display_option[0] == 0 )
                            {
                              if ( language )
                              {
                                free( language );
                                language = 0;
                              }
                              LYwaddnstr( LYwin, "NONE", 4 );
                            }
                            else
                            {
                              HTSACopy( &language, display_option );
                              LYwaddnstr( LYwin, display_option, strlen( display_option ) );
                            }
                            LYclrtoeol( );
                            if ( ch == -1 )
                            {
                              HTInfoMsg( gettext( "Cancelled!!!" ) );
                              HTInfoMsg( "" );
                            }
                            else
                            {
                              mustshow = 1;
                              statusline( gettext( "Value accepted!" ) );
                            }
                            response = 32;
                            break;
                          case 72:
                            if ( pref_charset && pref_charset[0] )
                              LYstrncpy( display_option, pref_charset, 1023 );
                            else
                            {
                              LYmove( 9, 36 );
                              LYwaddnstr( LYwin, "    ", 4 );
                              display_option[0] = 0;
                            }
                            mustshow = 1;
                            statusline( gettext( "Hit RETURN to accept entered data." ) );
                            LYmove( 9, 36 );
                            lynx_start_bold( );
                            ch = LYgetstr( display_option, 0, 1024, 0 );
                            lynx_stop_bold( );
                            LYmove( 9, 36 );
                            if ( term_options || ch == -1 )
                            {
                              LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                            }
                            else
                            if ( display_option[0] == 0 )
                            {
                              if ( pref_charset )
                              {
                                free( pref_charset );
                                pref_charset = 0;
                              }
                              LYwaddnstr( LYwin, "NONE", 4 );
                            }
                            else
                            {
                              HTSACopy( &pref_charset, display_option );
                              LYwaddnstr( LYwin, display_option, strlen( display_option ) );
                            }
                            LYclrtoeol( );
                            if ( ch == -1 )
                            {
                              HTInfoMsg( gettext( "Cancelled!!!" ) );
                              HTInfoMsg( "" );
                            }
                            else
                            {
                              mustshow = 1;
                              statusline( gettext( "Value accepted!" ) );
                            }
                            response = 32;
                            break;
                          case 86:
                            vi_keys = boolean_choice( vi_keys, 12, 15, bool_choices );
                            if ( vi_keys )
                              set_vi_keys( );
                            else
                              reset_vi_keys( );
                            response = 32;
                            break;
                          case 77:
                            emacs_keys = boolean_choice( emacs_keys, 12, 36, bool_choices );
                            if ( emacs_keys )
                              set_emacs_keys( );
                            else
                              reset_emacs_keys( );
                            response = 32;
                            break;
                          case 87:
                            if ( no_dotfiles )
                            {
                              mustshow = 1;
                              statusline( gettext( "Access to dot files is disabled!" ) );
                            }
                            else
                            {
                              show_dotfiles = boolean_choice( show_dotfiles, 12, 62, bool_choices );
                            }
                            response = 32;
                            break;
                          case 84:
                            LYSelectPopups = boolean_choice( LYSelectPopups, 13, 36, bool_choices );
                            response = 32;
                            break;
                          case 38:
                            if ( no_option_save )
                            {
                              if ( ( has_colors( ) ^ 1 ) & 255 )
                              {
                                char *terminal = LYGetEnv( "TERM" );
                                if ( terminal )
                                {
                                  HTUserMsg2( gettext( "Your '%s' terminal does not support color." ), terminal );
                                }
                                else
                                {
                                  HTUserMsg( gettext( "Terminal does not support color" ) );
                                }
                              }
                              else
                              {
                                LYShowColor = boolean_choice( LYShowColor + -1, 11, 62, bool_choices );
                                if ( LYShowColor == 0 )
                                  LYShowColor = 1;
                                else
                                  LYShowColor = 2;
                              }
                            }
                            else
                            {
                              BOOLEAN again = 0;
                              int chosen;
                              choices[0] = 0;
                              HTSACopy( choices, "NEVER     " );
                              choices[1] = 0;
                              HTSACopy( &choices[1], "OFF       " );
                              choices[2] = 0;
                              HTSACopy( &choices[2], "ON        " );
                              choices[3] = 0;
                              if ( ( has_colors( ) ^ 1 ) & 255 )
                                HTSACopy( &choices[3], "Always try" );
                              else
                                HTSACopy( &choices[3], "ALWAYS    " );
                              choices[4] = 0;
                              do
                              {
                                if ( LYSelectPopups == 0 )
                                {
                                  chosen = boolean_choice( LYChosenShowColor, 11, 62, choices );
                                }
                                else
                                {
                                  chosen = popup_choice( LYChosenShowColor, 11, 62, choices, 4, 0, 0 );
                                }
                                again = chosen == 2 && ( ( ( has_colors( ) ^ 1 ) ^ 1 ) & 255 ) == 0 ? 1 : 0;
                                if ( again )
                                {
                                  char *terminal = LYGetEnv( "TERM" );
                                  if ( terminal )
                                  {
                                    HTUserMsg2( gettext( "Your '%s' terminal does not support color." ), terminal );
                                  }
                                  else
                                  {
                                    HTUserMsg( gettext( "Terminal does not support color" ) );
                                  }
                                }
                              }
                              while ( again );
                              LYChosenShowColor = chosen;
                              if ( has_colors( ) & 255 )
                                LYShowColor = chosen;
                              if ( choices[0] )
                              {
                                free( choices[0] );
                                choices[0] = 0;
                              }
                              if ( choices[1] )
                              {
                                free( choices[1] );
                                choices[1] = 0;
                              }
                              if ( choices[2] )
                              {
                                free( choices[2] );
                                choices[2] = 0;
                              }
                              if ( choices[3] )
                              {
                                free( choices[3] );
                                choices[3] = 0;
                              }
                            }
                            if ( LYShowColor != CurrentShowColor )
                              lynx_force_repaint( );
                            CurrentShowColor = LYShowColor;
                            response = 32;
                            if ( !LYSelectPopups || no_option_save )
                              continue;
                            else
                            {
                              if ( term_options )
                              {
                                term_options = 0;
                              }
                              else
                              {
                                AddValueAccepted = 1;
                              }
                            }
                            break;
                          case 64:
                            LYShowCursor = boolean_choice( LYShowCursor, 13, 62, bool_choices );
                            response = 32;
                            break;
                          case 75:
                            if ( LYSelectPopups == 0 )
                            {
                              keypad_mode = boolean_choice( keypad_mode, 14, -1, keypad_choices );
                            }
                            else
                            {
                              keypad_mode = popup_choice( keypad_mode, 14, -1, keypad_choices, 3, 0, 0 );
                            }
                            if ( keypad_mode == 0 )
                              set_numbers_as_arrows( );
                            else
                              reset_numbers_as_arrows( );
                            response = 32;
                            if ( LYSelectPopups )
                            {
                              if ( term_options )
                              {
                                term_options = 0;
                              }
                              else
                              {
                                AddValueAccepted = 1;
                              }
                            }
                            break;
                          case 78:
                            if ( LYSelectPopups == 0 )
                            {
                              current_lineedit = boolean_choice( current_lineedit, 15, -1, LYLineeditNames );
                            }
                            else
                            {
                              current_lineedit = popup_choice( current_lineedit, 15, -1, LYLineeditNames, 0, 0, 0 );
                            }
                            response = 32;
                            if ( LYSelectPopups )
                            {
                              if ( term_options )
                              {
                                term_options = 0;
                              }
                              else
                              {
                                AddValueAccepted = 1;
                              }
                            }
                            break;
                          case 73:
                            if ( LYSelectPopups == 0 )
                            {
                              dir_list_style = boolean_choice( dir_list_style, 17, -1, dirList_choices );
                            }
                            else
                            {
                              dir_list_style = popup_choice( dir_list_style, 17, -1, dirList_choices, 3, 0, 0 );
                            }
                            response = 32;
                            if ( LYSelectPopups )
                            {
                              if ( term_options )
                              {
                                term_options = 0;
                              }
                              else
                              {
                                AddValueAccepted = 1;
                              }
                            }
                            break;
                          case 85:
                            if ( LYSelectPopups == 0 )
                            {
                              user_mode = boolean_choice( user_mode, 18, -1, userMode_choices );
                              use_assume_charset = user_mode > 1;
                            }
                            else
                            {
                              user_mode = popup_choice( user_mode, 18, -1, userMode_choices, 3, 0, 0 );
                              use_assume_charset = user_mode > 1;
                            }
                            LYSetDisplayLines( );
                            response = 32;
                            if ( LYSelectPopups )
                            {
                              if ( term_options )
                              {
                                term_options = 0;
                              }
                              else
                              {
                                AddValueAccepted = 1;
                              }
                            }
                            break;
                          case 33:
                            if ( LYSelectPopups == 0 )
                            {
                              verbose_img = boolean_choice( verbose_img, 18, 71, bool_choices );
                            }
                            else
                            {
                              verbose_img = popup_choice( verbose_img, 18, 71, bool_choices, 2, 0, 0 );
                            }
                            response = 32;
                            if ( LYSelectPopups )
                            {
                              if ( term_options )
                              {
                                term_options = 0;
                              }
                              else
                              {
                                AddValueAccepted = 1;
                              }
                            }
                            break;
                          case 65:
                            if ( no_useragent == 0 )
                            {
                              if ( LYUserAgent && LYUserAgent[0] )
                                LYstrncpy( display_option, LYUserAgent, 1023 );
                              else
                              {
                                LYmove( 4, 36 );
                                LYwaddnstr( LYwin, "    ", 4 );
                                display_option[0] = 0;
                              }
                              mustshow = 1;
                              statusline( gettext( "Hit RETURN to accept entered data.  Delete data to invoke the default." ) );
                              LYmove( 19, 36 );
                              lynx_start_bold( );
                              ch = LYgetstr( display_option, 0, 1024, 0 );
                              lynx_stop_bold( );
                              LYmove( 19, 36 );
                              if ( term_options || ch == -1 )
                              {
                                LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                              }
                              else
                              if ( display_option[0] == 0 )
                              {
                                HTSACopy( &LYUserAgent, LYUserAgentDefault );
                                LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
                              }
                              else
                              {
                                HTSACopy( &LYUserAgent, display_option );
                                LYwaddnstr( LYwin, display_option, strlen( display_option ) );
                              }
                              LYclrtoeol( );
                              if ( ch == -1 )
                              {
                                HTInfoMsg( gettext( "Cancelled!!!" ) );
                                HTInfoMsg( "" );
                              }
                              else
                              {
                                if ( ( LYCheckUserAgent( ) & 255 ) == 0 )
                                {
                                  mustshow = 1;
                                  statusline( gettext( "Use \"L_y_n_x\" or \"Lynx\" in User-Agent, or it looks like intentional deception!" ) );
                                }
                                else
                                {
                                  mustshow = 1;
                                  statusline( gettext( "Value accepted!" ) );
                                }
                              }
                            }
                            else
                            {
                              mustshow = 1;
                              statusline( gettext( "Changing of the User-Agent string is disabled!" ) );
                            }
                            response = 32;
                            break;
                          case 62:
                            if ( no_option_save == 0 )
                            {
                              HTInfoMsg( gettext( "Saving Options..." ) );
                              LYrcShowColor = LYChosenShowColor;
                              if ( save_rc( 0 ) )
                              {
                                HTInfoMsg( gettext( "Options saved!" ) );
                              }
                              else
                              {
                                HTAlert( gettext( "Unable to save Options!" ) );
                              }
                            }
                            else
                            {
                              HTInfoMsg( gettext( " 'r' to return to Lynx " ) );
                              response = 32;
                            }
                            break;
                          default:
                            if ( no_option_save == 0 )
                            {
                              HTInfoMsg( gettext( " '&gt;' to save, or 'r' to return to Lynx " ) );
                            }
                            else
                            {
                              HTInfoMsg( gettext( " 'r' to return to Lynx " ) );
                            }
                            break;
                          }
                        }
                      }
                    }
                    break;
                  default:
                    if ( response & 34816 )
                    {
                      if ( ( response & 255 ) == 47 )
                        continue;
                    }
                    else
                    if ( keymap[ ( response & 2047 ) + 1 ] == 47 )
                      continue;
                    break;
                  }
                }
B372:;
                response = 82;
              }
            }
            break;
          default:
            if ( response & 34816 )
            {
              if ( ( response & 255 ) == 47 )
                continue;
            }
            else
            if ( keymap[ ( response & 2047 ) + 1 ] == 47 )
              continue;
            break;
          }
        }
        term_options = 0;
        LYStatusLine = -1;
        signal( 2, &cleanup_sig );
      }
B236:;
      LYwaddnstr( LYwin, "Links and form fields are numbered", 34 );
      LYmove( 15, 5 );
      addlbl( "li(N)e edit style            : " );
      LYwaddnstr( LYwin, LYLineeditNames[ current_lineedit ], strlen( LYLineeditNames[ current_lineedit ] ) );
      LYmove( 17, 5 );
      addlbl( "l(I)st directory style       : " );
      LYwaddnstr( LYwin, "Files first      ", 17 );
      LYmove( 18, 5 );
      addlbl( "(U)ser mode                  : " );
      LYwaddnstr( LYwin, "Novice      ", 12 );
      addlbl( "  verbose images (!) : " );
      LYwaddnstr( LYwin, "OFF", 3 );
      LYmove( 19, 5 );
      addlbl( "user (A)gent                 : " );
      LYwaddnstr( LYwin, "NONE", strlen( "NONE" ) );
      LYmove( LYlines + -3, 2 );
      LYwaddnstr( LYwin, gettext( "Select " ), strlen( gettext( "Select " ) ) );
      lynx_start_bold( );
      LYwaddnstr( LYwin, gettext( "capital letter" ), strlen( gettext( "capital letter" ) ) );
      lynx_stop_bold( );
      LYwaddnstr( LYwin, gettext( " of option line," ), strlen( gettext( " of option line," ) ) );
    }
  }
  return;
}
int widest_choice( char **choices )
{
  int n, width = 0;
  n = 0;
  for ( ; choices[ n ];  )
  {
    int len = strlen( choices[ n ] );
    if ( width < len )
      width = len;
    n++;
  }
  return width;
}
void show_choice( char *choice, int width )
{
  int len = strlen( choice );
  LYwaddnstr( LYwin, choice, strlen( choice ) );
  while ( len++, ( len < width ) & 255 )
  {
    waddch( LYwin, 32 );
  }
  return;
}
int boolean_choice( int cur_choice, int line, int column, char **choices )
{
  int response = 0;
  int cmd = 0;
  int number = 0;
  int col = 36;
  int orig_choice = cur_choice;
  int width = widest_choice( choices );
  number = 0;
  for ( ; choices[ number ]; number++ )
  {
    // number++;
  }
  number += -1;
  mustshow = 1;
  statusline( gettext( "Hit any key to change value; RETURN to accept." ) );
  LYmove( line, col );
  lynx_start_reverse( );
  show_choice( choices[ cur_choice ], width );
  if ( LYShowCursor )
    LYmove( line, col + -1 );
  LYrefresh( );
  term_options = 0;
  while ( 1 )
  {
    LYmove( line, col );
    if ( term_options == 0 )
    {
      response = LYgetch_single( );
    }
    if ( term_options == 0 )
    {
      switch ( response )
      {
      case -1:
        if ( keymap[0] == 47 )
        {
          if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( response * 2 )) & 16384 ) == 0 )
            goto B22;
          else
          {
            if ( response == 10 )
              goto B34;
            else
            if ( response == 13 )
              goto B34;
            else
            {
              cmd = response == -1 ? keymap[0] : keymap[ ( response & 2047 ) + 1 ];
              if ( cmd != 39 )
              {
                switch ( cmd )
                {
                case 22:
                  cur_choice = 0;
                  break;
                case 23:
                  cur_choice = number;
                  break;
                case 21:
                  lynx_force_repaint( );
                  LYrefresh( );
                  break;
                case 13:
                case 14:
                case 37:
                  cur_choice = orig_choice;
                  term_options = 1;
                  break;
                case 16:
                case 17:
                case 19:
                case 26:
                case 28:
                case 30:
                case 32:
                case 35:
                  if ( cur_choice == 0 )
                    cur_choice = number;
                  else
                    cur_choice += -1;
                  break;
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                  if ( cmd + -1 <= number )
                    cur_choice = cmd + -1;
                  else
                default:
                  if ( number == cur_choice )
                    cur_choice = 0;
                  else
                    cur_choice++;
                  break;
                }
                show_choice( choices[ cur_choice ], width );
                if ( LYShowCursor )
                  LYmove( line, col + -1 );
                LYrefresh( );
              }
            }
B34:;
            LYmove( line, col );
            lynx_stop_reverse( );
            show_choice( choices[ cur_choice ], width );
            if ( term_options )
            {
              term_options = 0;
              HTInfoMsg( gettext( "Cancelled!!!" ) );
              HTInfoMsg( "" );
              break;
            }
            mustshow = 1;
            statusline( gettext( "Value accepted!" ) );
            break;
          }
        }
        break;
      default:
        if ( response & 34816 )
        {
          if ( ( response & 255 ) == 47 )
            continue;
        }
        else
        if ( keymap[ ( response & 2047 ) + 1 ] == 47 )
          continue;
        break;
      }
    }
B22:;
    response = 10;
    term_options = 1;
    cur_choice = orig_choice;
  }
}
void terminate_options( int sig )
{
  term_options = 1;
  signal( 2, &terminate_options );
  return;
}
void edit_bookmarks( void )
{
  int eax;
  int response = 0, def_response = 0, ch;
  int MBM_current = 1;
  int a;
  char MBM_tmp_line[256];
  term_options = 0;
  signal( 2, &terminate_options );
  while ( 1 )
  {
    if ( enable_scrollback )
      LYclear( );
    else
      LYerase( );
    LYmove( 0, 5 );
    lynx_start_h1_color( );
    if ( LYlines <= 32 )
    {
      char *ehead_buffer = 0;
      HTSprintf0( &ehead_buffer, gettext( "Editing Bookmark DESCRIPTION and FILEPATH (%d of 2)" ), MBM_current );
      LYwaddnstr( LYwin, ehead_buffer, strlen( ehead_buffer ) );
      if ( ehead_buffer )
      {
        free( ehead_buffer );
        ehead_buffer = 0;
      }
    }
    else
    {
      LYwaddnstr( LYwin, gettext( "         Editing Bookmark DESCRIPTION and FILEPATH" ), strlen( gettext( "         Editing Bookmark DESCRIPTION and FILEPATH" ) ) );
    }
    lynx_stop_h1_color( );
    if ( LYlines <= 32 )
    {
      a = ( MBM_current + -1 ) * 13;
      for ( ; a <= ( MBM_current * 25 ) / 2; a++ )
      {
        LYmove( a + 3 + ( ( MBM_current + -1 ) * -13 ), 5 );
        waddch( LYwin, LYindex2MBM( a ) );
        LYwaddnstr( LYwin, " : ", 3 );
        if ( MBM_A_subdescript[ a ] )
        {
          LYwaddnstr( LYwin, MBM_A_subdescript[ a ], strlen( MBM_A_subdescript[ a ] ) );
        }
        LYmove( a + 3 + ( ( MBM_current + -1 ) * -13 ), 35 );
        LYwaddnstr( LYwin, "| ", 2 );
        if ( MBM_A_subbookmark[ a ] )
        {
          LYwaddnstr( LYwin, MBM_A_subbookmark[ a ], strlen( MBM_A_subbookmark[ a ] ) );
        }
        // a++;
      }
    }
    else
    {
      a = 0;
      for ( ; a <= 25; a++ )
      {
        LYmove( a + 3, 5 );
        waddch( LYwin, LYindex2MBM( a ) );
        LYwaddnstr( LYwin, " : ", 3 );
        if ( MBM_A_subdescript[ a ] )
        {
          LYwaddnstr( LYwin, MBM_A_subdescript[ a ], strlen( MBM_A_subdescript[ a ] ) );
        }
        LYmove( a + 3, 35 );
        LYwaddnstr( LYwin, "| ", 2 );
        if ( MBM_A_subbookmark[ a ] )
        {
          LYwaddnstr( LYwin, MBM_A_subbookmark[ a ], strlen( MBM_A_subbookmark[ a ] ) );
        }
        // a++;
      }
    }
    if ( LYlines <= 32 )
    {
      LYmove( LYlines + -4, 0 );
      LYwaddnstr( LYwin, "'", 1 );
      lynx_start_bold( );
      LYwaddnstr( LYwin, "[", 1 );
      lynx_stop_bold( );
      LYwaddnstr( LYwin, "' ", 2 );
      LYwaddnstr( LYwin, gettext( "previous" ), strlen( gettext( "previous" ) ) );
      LYwaddnstr( LYwin, ", '", 3 );
      lynx_start_bold( );
      LYwaddnstr( LYwin, "]", 1 );
      lynx_stop_bold( );
      LYwaddnstr( LYwin, "' ", 2 );
      LYwaddnstr( LYwin, gettext( "next screen" ), strlen( gettext( "next screen" ) ) );
    }
    LYmove( LYlines + -3, 0 );
    if ( no_option_save == 0 )
    {
      LYwaddnstr( LYwin, "'", 1 );
      lynx_start_bold( );
      LYwaddnstr( LYwin, "&gt;", 1 );
      lynx_stop_bold( );
      LYwaddnstr( LYwin, "'", 1 );
      LYwaddnstr( LYwin, gettext( " to save," ), strlen( gettext( " to save," ) ) );
    }
    LYwaddnstr( LYwin, gettext( " or " ), strlen( gettext( " or " ) ) );
    LYwaddnstr( LYwin, "'", 1 );
    lynx_start_bold( );
    LYwaddnstr( LYwin, "^G", 2 );
    lynx_stop_bold( );
    LYwaddnstr( LYwin, "'", 1 );
    LYwaddnstr( LYwin, gettext( " to return to Lynx." ), strlen( gettext( " to return to Lynx." ) ) );
    while ( term_options == 0 && ( LYisNonAlnumKeyname( response, 37 ) & 255 ) == 0 )
    {
      switch ( response )
      {
      case -1:
        if ( keymap[0] != 47 )
        {
          if ( response == 62 )
            break;
          LYmove( LYlines + -2, 0 );
          lynx_start_prompt_color( );
          LYwaddnstr( LYwin, gettext( "Letter: " ), strlen( gettext( "Letter: " ) ) );
          lynx_stop_prompt_color( );
          LYrefresh( );
          response = def_response ? def_response : LYgetch_single( );
          def_response = 0;
          if ( term_options )
            continue;
          else
          {
            switch ( response )
            {
            case -1:
              if ( keymap[0] != 47 )
              {
                if ( LYisNonAlnumKeyname( response, 37 ) & 255 )
                  continue;
                else
                if ( response == 62 )
                {
                  if ( no_option_save == 0 )
                  {
                    HTInfoMsg( gettext( "Saving Options..." ) );
                    if ( save_rc( 0 ) )
                    {
                      HTInfoMsg( gettext( "Options saved!" ) );
                    }
                    else
                    {
                      HTAlert( gettext( "Unable to save Options!" ) );
                    }
                  }
                  else
                  {
                    HTInfoMsg( gettext( " 'r' to return to Lynx " ) );
                    response = 32;
                  }
                }
                else
                {
                  if ( ( LYisNonAlnumKeyname( response, 21 ) & 255 ) == 0 )
                  {
                    if ( ( response == 93 || ( LYisNonAlnumKeyname( response, 15 ) & 255 ) ) && LYlines <= 32 )
                    {
                      MBM_current++;
                      if ( MBM_current > 2 )
                      {
                        MBM_current = 1;
                      }
                    }
                    else
                    if ( ( response == 91 || ( LYisNonAlnumKeyname( response, 16 ) & 255 ) ) && LYlines <= 32 )
                    {
                      MBM_current += -1;
                      if ( MBM_current > 0 )
                        continue;
                      else
                      {
                        MBM_current = 2;
                      }
                    }
                    else
                    {
                      a = 0;
                      for ( ; a <= 25; a++ )
                      {
                        if ( a == LYMBM2index( response ) )
                        {
                          if ( LYlines <= 32 )
                          {
                            if ( MBM_current == 1 && a > 12 )
                            {
                              MBM_current = 2;
                              def_response = response;
                            }
                            else
                            if ( MBM_current == 2 && a <= 11 )
                            {
                              MBM_current = 1;
                              def_response = response;
                              break;
                            }
                          }
                          mustshow = 1;
                          statusline( gettext( "Hit RETURN to accept entered data." ) );
                          if ( a > 0 )
                          {
                            lynx_start_bold( );
                            if ( LYlines <= 32 )
                              LYmove( a + 3 + ( ( MBM_current + -1 ) * -13 ), 9 );
                            else
                              LYmove( a + 3, 9 );
                            LYstrncpy( MBM_tmp_line, "", 255 );
                            ch = LYgetstr( MBM_tmp_line, 0, 256, 0 );
                            lynx_stop_bold( );
                            if ( MBM_tmp_line[0] == 0 )
                            {
                              if ( MBM_A_subdescript[ a ] )
                              {
                                free( MBM_A_subdescript[ a ] );
                                MBM_A_subdescript[ a ] = 0;
                              }
                            }
                            else
                              HTSACopy( &MBM_A_subdescript[ a ], MBM_tmp_line );
                            if ( LYlines <= 32 )
                              LYmove( a + 3 + ( ( MBM_current + -1 ) * -13 ), 5 );
                            else
                              LYmove( a + 3, 5 );
                            waddch( LYwin, LYindex2MBM( a ) );
                            LYwaddnstr( LYwin, " : ", 3 );
                            if ( MBM_A_subdescript[ a ] )
                            {
                              LYwaddnstr( LYwin, MBM_A_subdescript[ a ], strlen( MBM_A_subdescript[ a ] ) );
                            }
                            LYclrtoeol( );
                            LYrefresh( );
                          }
                          if ( LYlines <= 32 )
                            LYmove( a + 3 + ( ( MBM_current + -1 ) * -13 ), 35 );
                          else
                            LYmove( a + 3, 35 );
                          LYwaddnstr( LYwin, "| ", 2 );
                          lynx_start_bold( );
                          LYstrncpy( MBM_tmp_line, "", 255 );
                          ch = LYgetstr( MBM_tmp_line, 0, 256, 0 );
                          lynx_stop_bold( );
                          if ( MBM_tmp_line[0] == 0 )
                          {
                            if ( a == 0 )
                              HTSACopy( &MBM_A_subbookmark[ a ], bookmark_page );
                            else
                            if ( MBM_A_subbookmark[ a ] )
                            {
                              free( MBM_A_subbookmark[ a ] );
                              MBM_A_subbookmark[ a ] = 0;
                            }
                          }
                          else
                          {
                            if ( ( LYPathOffHomeOK( MBM_tmp_line, 256 ) & 255 ) == 0 )
                            {
                              LYMBM_statusline( gettext( "Use a filepath off your home directory!" ) );
                              LYSleepAlert( );
                            }
                            else
                            {
                              HTSACopy( &MBM_A_subbookmark[ a ], MBM_tmp_line );
                              if ( a == 0 )
                                HTSACopy( &bookmark_page, MBM_A_subbookmark[ a ] );
                            }
                          }
                          if ( LYlines <= 32 )
                            LYmove( a + 3 + ( ( MBM_current + -1 ) * -13 ), 35 );
                          else
                            LYmove( a + 3, 35 );
                          LYwaddnstr( LYwin, "| ", 2 );
                          if ( MBM_A_subbookmark[ a ] )
                          {
                            LYwaddnstr( LYwin, MBM_A_subbookmark[ a ], strlen( MBM_A_subbookmark[ a ] ) );
                          }
                          LYclrtoeol( );
                          LYmove( LYlines + -1, 0 );
                          LYclrtoeol( );
                        }
                        else
                        {
                          // a++;
                        }
                      }
                    }
                  }
                  else
                  {
                    lynx_force_repaint( );
                  }
                }
              }
              break;
            default:
              if ( response & 34816 )
              {
                if ( ( response & 255 ) != 47 )
                  continue;
              }
              else
              if ( keymap[ ( response & 2047 ) + 1 ] != 47 )
                continue;
              break;
            }
            if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( response * 2 )) & 16384 )
              continue;
          }
        }
        break;
      default:
        if ( response & 34816 )
        {
          if ( ( response & 255 ) != 47 )
            continue;
        }
        else
        if ( keymap[ ( response & 2047 ) + 1 ] != 47 )
          continue;
        break;
      }
      if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( response * 2 )) & 16384 ) == 0 )
        break;
    }
    term_options = 0;
    signal( 2, &cleanup_sig );
    return;
  }
}
int popup_choice( int cur_choice, int line, int column, char **choices, int i_length, int disabled, BOOLEAN for_mouse )
{
  if ( column < 0 )
    column = 35;
  term_options = 0;
  cur_choice = LYhandlePopupList( cur_choice, line, column, choices, -1, i_length, disabled, for_mouse );
  if ( cur_choice + -13 <= 24 && ( ( 1 << ( cur_choice + -13 ) ) & 0x1000003 ) )
  {
    term_options = 1;
    if ( for_mouse == 0 )
    {
      HTUserMsg( gettext( "Cancelled!!!" ) );
    }
  }
  if ( disabled || term_options )
  {
    mustshow = 1;
    statusline( "" );
  }
  if ( for_mouse == 0 )
  {
    mustshow = 1;
    statusline( gettext( "Value accepted!" ) );
  }
  return cur_choice;
}
void PutOptValues( FILE *fp, int value, OptValues *table )
{
  for ( ; table->LongName; table++ )
  {
    if ( table->HtmlName )
    {
      fprintf( fp, "&lt;option value=\"%s\" %s&gt;%s\n", &table->HtmlName, table->value == value ? selected_string : "", gettext( &table->LongName ) );
    }
    // table++;
  }
  return;
}
BOOLEAN GetOptValues( OptValues *table, char *value, int *result )
{
  for ( ; table->LongName; table++ )
  {
    if ( table->HtmlName && strcmp( value, &table->HtmlName ) == 0 )
    {
      result[0] = table->value;
      break;
    }
    else
    {
      // table++;
    }
  }
  return 0;
}
PostPair *break_data( bstring *data )
{
  char *p;
  PostPair *q = 0;
  int count = 0;
  if ( data == 0 || data == 0 || data->len == 0 )
  {
    return 0;
  }
  p = 0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "break_data %s\n", p );
  }
  q = calloc( 1, sizeof( PostPair ) );
  if ( q == 0 )
  {
    outofmem( "./LYOptions.c", "break_data(calloc)" );
  }
  do
  {
    q[ count + 0 ].value = LYstrsep( &p, "&" );
    q[ count ].tag = LYstrsep( &q[ count ].value, "=" );
    HTUnEscape( q[ count ].tag );
  {
    size_t i;
    size_t len = strlen( q[ count ].value );
    i = 0;
    for ( ; i < len; i++ )
    {
      if ( q[ count ].value[ i ] == '+' )
      {
        if ( i && q[ count ].value[ i + 1 ] == '+' && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( q[ count ].value[ i + 2 ] * 2 )) & 8 ) )
        {
          q[ count ].value[ i ] = ' ';
          i++;
          i++;
        }
        else
          q[ count ].value[ i ] = ' ';
      }
      // i++;
    }
    HTUnEscape( q[ count ].value );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "...item[%d] tag=%s, value=%s\n", count, q[ count ].tag, q[ count ].value );
    }
    count++;
    q = realloc( q, ( count + 1 ) * sizeof( PostPair ) );
    if ( q == 0 )
      outofmem( "./LYOptions.c", "break_data(realloc)" );
    q[ count ].tag = 0;
  }
  }
  while ( p == 0 || p[0] == 0 );
  return q;
}
BOOLEAN isLynxOptionsPage( char *address, char *portion )
{
  BOOLEAN result = 0;
  if ( strncasecomp( address, "LYNXOPTIONS:", 12 ) == 0 )
  {
    unsigned int len = strlen( portion );
    address += 12;
    if ( strncasecomp( address, portion, (int)len ) == 0 && ( address[ len ] == 0 || address[ len ] == '/' ) )
    {
      result = 1;
    }
  }
  return result;
}
int postoptions( DocInfo *newdoc )
{
  PostPair *data = 0;
  DocAddress WWWDoc;
  int i;
  int code = 0;
  BOOLEAN save_all = 0;
  int display_char_set_old = current_char_set;
  int old_media_value = LYAcceptMedia;
  BOOLEAN raw_mode_old = LYRawMode;
  BOOLEAN assume_char_set_changed = 0;
  BOOLEAN need_reload = 0;
  BOOLEAN need_end_reload = 0;
  int CurrentShowColor = LYShowColor;
  if ( isLynxOptionsPage( &newdoc->address, "//MBM_MENU" ) & 255 )
  {
    if ( newdoc->post_data )
    {
      free( &newdoc->post_data );
      *(int*)&newdoc->post_data = 0;
    }
    if ( no_bookmark )
    {
      HTAlert( gettext( "You are not allowed to change the bookmark file!" ) );
      return 3;
    }
    if ( dump_output_immediately )
    {
      return 0;
    }
    edit_bookmarks( );
    return 3;
  }
  else
  {
    if ( ( isLynxOptionsPage( &newdoc->address, "/" ) & 255 ) == 0 )
    {
      HTAlert( gettext( "Random URL is disallowed!  Use a shortcut." ) );
      return 3;
    }
    data = break_data( &newdoc->post_data );
    if ( data == 0 )
    {
      int status = gen_options( &newdoc->address );
      if ( status != 1 )
      {
        HTAlwaysAlert( "Unexpected way of accessing", &newdoc->address );
        if ( newdoc->address )
        {
          free( &newdoc->address );
          *(int*)&newdoc->address = 0;
        }
        return status;
      }
      else
      {
        WWWDoc.address = &newdoc->address;
        WWWDoc.post_data = &newdoc->post_data;
        WWWDoc.post_content_type = &newdoc->post_content_type;
        WWWDoc.bookmark = &newdoc->bookmark;
        WWWDoc.isHEAD = newdoc->isHEAD;
        WWWDoc.safe = newdoc->safe;
        if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
        {
          return 0;
        }
        LYRegisterUIPage( &newdoc->address, 7 );
        lynx_edit_mode = 0;
        return 1;
      }
    }
    else
    {
      if ( ( LYIsUIPage3( HTLoadedDocumentURL( ), 7, 0 ) & 255 ) == 0 && ( LYIsUIPage3( HTLoadedDocumentURL( ), 5, 0 ) & 255 ) == 0 )
      {
        char *buf = 0;
        HTSprintf0( &buf, gettext( "Use %s to invoke the Options menu!" ), key_for_func_ext( 49, 0 ) );
        HTAlert( buf );
        if ( buf )
        {
          free( buf );
          buf = 0;
        }
        if ( data )
        {
          free( data );
          data = 0;
        }
        return 0;
      }
      else
      {
        i = 0;
        for ( ; data[ i ].tag; i++ )
        {
          if ( strcmp( data[ i ].tag, secure_string ) == 0 )
          {
            if ( secure_value == 0 || strcmp( data[ i ].value, secure_value ) )
            {
              char *buf = 0;
              HTSprintf0( &buf, gettext( "Use %s to invoke the Options menu!" ), key_for_func_ext( 49, 0 ) );
              HTAlert( buf );
              if ( data == 0 )
              {
                return 3;
              }
              free( data );
              data = 0;
              return 3;
            }
            else
            if ( secure_value )
            {
              free( secure_value );
              secure_value = 0;
            }
          }
          if ( strcmp( data[ i ].tag, save_options_string ) == 0 && no_option_save == 0 )
            save_all = 1;
          if ( strcmp( data[ i ].tag, cookies_string ) == 0 )
          {
            if ( strcmp( data[ i ].value, cookies_ignore_all_string ) == 0 )
              LYSetCookies = 0;
            else
            {
              if ( strcmp( data[ i ].value, cookies_up_to_user_string ) == 0 )
              {
                LYSetCookies = 1;
                LYAcceptAllCookies = 0;
              }
              else
              {
                if ( strcmp( data[ i ].value, cookies_accept_all_string ) == 0 )
                {
                  LYSetCookies = 1;
                  LYAcceptAllCookies = 1;
                }
              }
            }
          }
          if ( strcmp( data[ i ].tag, x_display_string ) == 0 )
          {
            LYsetXDisplay( data[ i ].value );
            validate_x_display( );
            summarize_x_display( data[ i ].value );
          }
          if ( strcmp( data[ i ].tag, editor_string ) == 0 )
          {
            if ( editor )
            {
              free( editor );
              editor = 0;
            }
            HTSACopy( &editor, data[ i ].value );
          }
          if ( !strcmp( data[ i ].tag, emacs_keys_string ) && ( GetOptValues( bool_values, data[ i ].value, &code ) & 255 ) )
          {
            emacs_keys = code;
            if ( emacs_keys )
              set_emacs_keys( );
            else
              reset_emacs_keys( );
          }
          if ( strcmp( data[ i ].tag, keypad_mode_string ) == 0 )
          {
            int newval = 0;
            if ( ( GetOptValues( keypad_mode_values, data[ i ].value, &newval ) & 255 ) && newval != keypad_mode )
            {
              keypad_mode = newval;
              need_reload = 1;
              if ( keypad_mode == 0 )
                set_numbers_as_arrows( );
              else
                reset_numbers_as_arrows( );
            }
          }
          if ( strcmp( data[ i ].tag, lineedit_mode_string ) == 0 )
          {
            int newval = atoi( data[ i ].value );
            int j = 0;
            for ( ; LYLineeditNames[ j ]; j++ )
            {
              if ( newval == j )
                current_lineedit = newval;
              // j++;
            }
          }
          if ( strcmp( data[ i ].tag, mail_address_string ) == 0 )
          {
            if ( personal_mail_address )
            {
              free( personal_mail_address );
              personal_mail_address = 0;
            }
            HTSACopy( &personal_mail_address, data[ i ].value );
          }
          if ( strcmp( data[ i ].tag, anonftp_password_string ) == 0 )
          {
            if ( anonftp_password )
            {
              free( anonftp_password );
              anonftp_password = 0;
            }
            HTSACopy( &anonftp_password, data[ i ].value );
          }
          if ( !strcmp( data[ i ].tag, search_type_string ) && ( GetOptValues( search_type_values, data[ i ].value, &code ) & 255 ) )
            case_sensitive = code;
          if ( !strcmp( data[ i ].tag, DTD_recovery_string ) && ( GetOptValues( DTD_type_values, data[ i ].value, &code ) & 255 ) && code != Old_DTD )
          {
            Old_DTD = code;
            HTSwitchDTD( Old_DTD == 0 );
            need_reload = 1;
          }
          if ( !strcmp( data[ i ].tag, select_popups_string ) && ( GetOptValues( bool_values, data[ i ].value, &code ) & 255 ) )
            LYSelectPopups = code;
          if ( !strcmp( data[ i ].tag, show_color_string ) && ( GetOptValues( show_color_values, data[ i ].value, &LYChosenShowColor ) & 255 ) )
          {
            if ( can_do_colors )
              LYShowColor = LYChosenShowColor;
            if ( LYShowColor != CurrentShowColor )
              lynx_force_repaint( );
            CurrentShowColor = LYShowColor;
          }
          if ( !strcmp( data[ i ].tag, show_cursor_string ) && ( GetOptValues( bool_values, data[ i ].value, &code ) & 255 ) )
            LYShowCursor = code;
          if ( !strcmp( data[ i ].tag, underline_links_string ) && ( GetOptValues( bool_values, data[ i ].value, &code ) & 255 ) )
            LYUnderlineLinks = code;
          if ( !strcmp( data[ i ].tag, show_scrollbar_string ) && ( GetOptValues( bool_values, data[ i ].value, &code ) & 255 ) )
          {
            LYShowScrollbar = code;
            need_reload = 1;
          }
          if ( strcmp( data[ i ].tag, cookie_prompt_string ) == 0 )
            GetOptValues( prompt_values, data[ i ].value, &cookie_noprompt );
          if ( !strcmp( data[ i ].tag, user_mode_string ) && ( GetOptValues( user_mode_values, data[ i ].value, &user_mode ) & 255 ) )
            LYSetDisplayLines( );
          if ( strcmp( data[ i ].tag, visited_links_string ) == 0 )
            GetOptValues( visited_links_values, data[ i ].value, &Visited_Links_As );
          if ( strcmp( data[ i ].tag, images_string ) == 0 )
          {
            if ( !strcmp( data[ i ].value, images_ignore_all_string ) && ( pseudo_inline_alts || clickable_images ) )
            {
              pseudo_inline_alts = 0;
              clickable_images = 0;
              need_reload = 1;
            }
            else
            {
              if ( !strcmp( data[ i ].value, images_use_label_string ) && ( pseudo_inline_alts != 1 || clickable_images ) )
              {
                pseudo_inline_alts = 1;
                clickable_images = 0;
                need_reload = 1;
              }
              else
              {
                if ( !strcmp( data[ i ].value, images_use_links_string ) && clickable_images != 1 )
                {
                  clickable_images = 1;
                  need_reload = 1;
                }
              }
            }
          }
          if ( !strcmp( data[ i ].tag, verbose_images_string ) && ( GetOptValues( verbose_images_type_values, data[ i ].value, &code ) & 255 ) && verbose_img != code )
          {
            verbose_img = code;
            need_reload = 1;
          }
          if ( !strcmp( data[ i ].tag, vi_keys_string ) && ( GetOptValues( bool_values, data[ i ].value, &code ) & 255 ) )
          {
            vi_keys = code;
            if ( vi_keys )
              set_vi_keys( );
            else
              reset_vi_keys( );
          }
          if ( strcmp( data[ i ].tag, mbm_string ) == 0 && LYMBMBlocked == 0 )
            GetOptValues( mbm_values, data[ i ].value, &LYMultiBookmarks );
          if ( !strcmp( data[ i ].tag, single_bookmark_string ) && !no_bookmark && data[ i ].value[0] )
          {
            if ( bookmark_page )
            {
              free( bookmark_page );
              bookmark_page = 0;
            }
            HTSACopy( &bookmark_page, data[ i ].value );
          }
          if ( strcmp( data[ i ].tag, assume_char_set_string ) == 0 )
          {
            int newval = UCGetLYhndl_byMIME( data[ i ].value );
            if ( newval >= 0 && ( ( raw_mode_old && newval != safeUCGetLYhndl_byMIME( UCAssume_MIMEcharset ) ) || ( raw_mode_old == 0 && newval != UCLYhndl_for_unspec ) ) )
            {
              UCLYhndl_for_unspec = newval;
              HTSACopy( &UCAssume_MIMEcharset, data[ i ].value );
              assume_char_set_changed = 1;
            }
          }
          if ( !strcmp( data[ i ].tag, locale_charset_string ) && ( GetOptValues( bool_values, data[ i ].value, &code ) & 255 ) )
            LYLocaleCharset = code;
          if ( strcmp( data[ i ].tag, display_char_set_string ) == 0 )
          {
            int newval = atoi( data[ i ].value );
            int j = 0;
            for ( ; LYchar_set_names[ j ]; j++ )
            {
              if ( newval == j )
                current_char_set = newval;
              // j++;
            }
          }
          if ( !strcmp( data[ i ].tag, raw_mode_string ) && ( GetOptValues( bool_values, data[ i ].value, &code ) & 255 ) )
            LYRawMode = code;
          if ( strcmp( data[ i ].tag, passive_ftp_string ) == 0 )
            ftp_passive = code;
          if ( strcmp( data[ i ].tag, ftp_sort_string ) == 0 )
            GetOptValues( ftp_sort_values, data[ i ].value, &HTfileSortMethod );
          if ( strcmp( data[ i ].tag, dired_list_string ) == 0 )
            GetOptValues( dired_list_values, data[ i ].value, &dir_list_style );
          if ( strcmp( data[ i ].tag, dired_sort_string ) == 0 )
            GetOptValues( dired_sort_values, data[ i ].value, &dir_list_order );
          if ( !strcmp( data[ i ].tag, show_dotfiles_string ) && !no_dotfiles && ( GetOptValues( bool_values, data[ i ].value, &code ) & 255 ) )
            show_dotfiles = code;
          if ( !strcmp( data[ i ].tag, show_rate_string ) && ( GetOptValues( rate_values, data[ i ].value, &code ) & 255 ) )
            LYTransferRate = code;
          if ( strcmp( data[ i ].tag, preferred_media_string ) == 0 )
            GetOptValues( media_values, data[ i ].value, &LYAcceptMedia );
          if ( strcmp( data[ i ].tag, preferred_encoding_string ) == 0 )
            GetOptValues( encoding_values, data[ i ].value, &LYAcceptEncoding );
          if ( !strcmp( data[ i ].tag, preferred_doc_char_string ) && strcmp( pref_charset, data[ i ].value ) )
          {
            if ( pref_charset )
            {
              free( pref_charset );
              pref_charset = 0;
            }
            HTSACopy( &pref_charset, data[ i ].value );
            need_end_reload = 1;
          }
          if ( !strcmp( data[ i ].tag, preferred_doc_lang_string ) && strcmp( language, data[ i ].value ) )
          {
            if ( language )
            {
              free( language );
              language = 0;
            }
            HTSACopy( &language, data[ i ].value );
            need_end_reload = 1;
          }
          if ( !strcmp( data[ i ].tag, user_agent_string ) && !no_useragent && strcmp( LYUserAgent, data[ i ].value ) )
          {
            need_end_reload = 1;
            if ( LYUserAgent )
            {
              free( LYUserAgent );
              LYUserAgent = 0;
            }
            HTSACopy( &LYUserAgent, LYUserAgentDefault );
            if ( ( LYCheckUserAgent( ) & 255 ) == 0 )
            {
              HTAlert( gettext( "Use \"L_y_n_x\" or \"Lynx\" in User-Agent, or it looks like intentional deception!" ) );
            }
          }
          // i++;
        }
        LYFindLocaleCharset( );
        if ( old_media_value != LYAcceptMedia )
          HTFilterPresentations( );
        if ( display_char_set_old != current_char_set || raw_mode_old != LYRawMode || assume_char_set_changed )
        {
          if ( display_char_set_old != current_char_set )
          {
            LYUseDefaultRawMode = 1;
            HTMLUseCharacterSet( current_char_set );
          }
          if ( assume_char_set_changed && HTCJK != JAPANESE )
            LYRawMode = current_char_set == UCLYhndl_for_unspec;
          if ( raw_mode_old != LYRawMode || assume_char_set_changed )
          {
            HTMLSetUseDefaultRawMode( current_char_set, LYRawMode );
            HTMLSetCharacterHandling( current_char_set );
          }
          need_reload = 1;
        }
        HTSABFree( &newdoc->post_data );
        if ( data )
        {
          free( data );
          data = 0;
        }
        if ( save_all )
        {
          HTInfoMsg( gettext( "Saving Options..." ) );
          LYrcShowColor = LYChosenShowColor;
          if ( save_rc( 0 ) )
          {
            HTInfoMsg( gettext( "Options saved!" ) );
          }
          else
          {
            HTAlert( gettext( "Unable to save Options!" ) );
          }
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "\nLYOptions.c/postoptions(): exiting...\n" );
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "                            need_reload = %s\n", "FALSE" );
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "                            need_end_reload = %s\n", "FALSE" );
        }
        LYpop( newdoc );
        WWWDoc.address = &newdoc->address;
        WWWDoc.post_data = &newdoc->post_data;
        WWWDoc.post_content_type = &newdoc->post_content_type;
        WWWDoc.bookmark = &newdoc->bookmark;
        WWWDoc.isHEAD = newdoc->isHEAD;
        WWWDoc.safe = newdoc->safe;
        LYforce_no_cache = 0;
        LYoverride_no_cache = 1;
        if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
        {
          return 0;
        }
        HTuncache_current_document( );
        LYpop( newdoc );
        WWWDoc.address = &newdoc->address;
        WWWDoc.post_data = &newdoc->post_data;
        WWWDoc.post_content_type = &newdoc->post_content_type;
        WWWDoc.bookmark = &newdoc->bookmark;
        WWWDoc.isHEAD = newdoc->isHEAD;
        WWWDoc.safe = newdoc->safe;
        LYforce_no_cache = 0;
        LYoverride_no_cache = 1;
        if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
        {
          return 0;
        }
        reloading = 0;
        if ( need_end_reload == 1 && ( strncmp( &newdoc->address, "http", 4 ) == 0 || ( ( newdoc->address[0] == 'l' || newdoc->address[0] == 'L' ) && strncasecomp( &newdoc->address, "lynxcgi:", 8 ) == 0 ? 1 : 0 ) == 0 ) )
        {
          reloading = 1;
          need_reload = 1;
        }
        if ( need_reload == 0 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "LYOptions.c/postoptions(): now really exit.\n\n" );
          }
          return 1;
        }
        else
        {
          if ( HTisDocumentSource( ) )
            srcmode_for_next_retrieval( 1 );
          if ( !reloading && ( HTcan_reparse_document( ) & 255 ) )
          {
            if ( ( HTreparse_document( ) & 255 ) == 0 )
              srcmode_for_next_retrieval( 0 );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "LYOptions.c/postoptions(): now really exit.\n\n" );
            }
            return 1;
          }
          else
          {
            if ( newdoc->post_data && newdoc->safe == 0 && ( confirm_post_resub( &newdoc->address, &newdoc->title[0], 2, 1 ) & 255 ) == 0 )
            {
              HTInfoMsg( gettext( "Document will not be reloaded!" ) );
              if ( HTisDocumentSource( ) )
                srcmode_for_next_retrieval( 0 );
              return 1;
            }
            else
            {
              HEAD_request = HTLoadedDocumentIsHEAD( );
              HTuncache_current_document( );
              LYpush( newdoc, 0 );
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "LYOptions.c/postoptions(): now really exit.\n\n" );
              }
              return 3;
            }
          }
        }
      }
    }
  }
}
char *NewSecureValue( void )
{
  static char oops[2] = { '?' };
  if ( secure_value )
  {
    free( secure_value );
    secure_value = 0;
  }
  secure_value = (char*)malloc( 80 );
  if ( secure_value )
  {
    long key = random( );
    sprintf( secure_value, "%ld", key );
    return secure_value;
  }
  return oops;
}
void PutLabel( FILE *fp, char *name, char *value )
{
  int have = strlen( name );
  int want = 33;
  int need = LYstrExtent( name, have, want );
  fprintf( fp, "%s%s", "&nbsp;&nbsp;", name );
  if ( ( will_save_rc( value ) & 255 ) && no_option_save == 0 )
  {
    while ( need++, ( need < want ) & 255 )
    {
      fwrite( "&nbsp;", 1, 6, fp );
    }
  }
  else
  {
    want += -3;
    if ( need < want )
    {
      fwrite( "&nbsp;", 1, 6, fp );
      need++;
    }
    fwrite( "(!)", 1, 3, fp );
    while ( need++, ( need < want ) & 255 )
    {
      fwrite( "&nbsp;", 1, 6, fp );
    }
  }
  fwrite( ": ", 1, 2, fp );
  return;
}
char *check_if_write_lynxrc( char **table )
{
  int n;
  char *result = 0;
  n = 0;
  for ( ; table[ n ]; n++ )
  {
    result = table[ n ];
    if ( ( will_save_rc( result ) & 255 ) == 0 )
      break;
    // n++;
  }
  return result;
}
char *will_save_cookies( void )
{
  static char *table[3] = { "set_cookies", "accept_all_cookies", 0 };
  return check_if_write_lynxrc( table );
}
char *will_save_images( void )
{
  static char *table[3] = { "make_pseudo_alts_for_inlines", "make_links_for_all_images", 0 };
  return check_if_write_lynxrc( table );
}
void LYMenuVisitedLinks( FILE *fp0, int disable_all )
{
  fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", visited_links_string, "" );
  PutOptValues( fp0, Visited_Links_As, visited_links_values );
  fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
  return;
}
int gen_options( char **newfile )
{
  int eax;
  static char tempfile[256];
  int i;
  BOOLEAN disable_all = 0;
  FILE *fp0;
  size_t cset_len = 0;
  size_t text_len = 7;
  fp0 = InternalPageFP( tempfile, 1 );
  if ( fp0 == 0 )
    return 0;
  else
  {
    LYLocalFileToURL( newfile, tempfile );
    LYforce_no_cache = 1;
    if ( LYUseFormsOptions == 0 )
      disable_all = 1;
    BeginInternalPage( fp0, gettext( "Options Menu" ), 0 );
    fprintf( fp0, "&lt;form action=\"%s\" method=\"post\"&gt;\n", "LYNXOPTIONS:" );
    fprintf( fp0, "&lt;input name=\"%s\" type=\"hidden\" value=\"%s\"&gt;\n", secure_string, NewSecureValue( ) );
    fwrite( "&lt;p align=center&gt;\n", 1, 17, fp0 );
    if ( disable_all == 0 )
    {
      fprintf( fp0, "&lt;input type=\"submit\" value=\"%s\"&gt; - \n", gettext( "Accept Changes" ) );
      fprintf( fp0, "&lt;input type=\"reset\" value=\"%s\"&gt; - \n", gettext( "Reset Changes" ) );
      fprintf( fp0, "%s - \n", gettext( "Left Arrow cancels changes" ) );
    }
    fprintf( fp0, "&lt;a href=\"%s%s\"&gt;%s&lt;/a&gt;\n", helpfilepath, "keystrokes/option_help.html.gz", gettext( "HELP!" ) );
    if ( no_option_save == 0 )
    {
      if ( disable_all == 0 )
      {
        fprintf( fp0, "&lt;p align=center&gt;%s: ", gettext( "Save options to disk" ) );
        fprintf( fp0, "&lt;input type=\"checkbox\" name=\"%s\"&gt;\n", save_options_string );
      }
      fprintf( fp0, "&lt;br&gt;%s\n", gettext( "(options marked with (!) will not be saved)" ) );
    }
    fwrite( "&lt;pre&gt;\n", 1, 6, fp0 );
    fprintf( fp0, "\n%s&lt;em&gt;%s&lt;/em&gt;\n", "&nbsp;&nbsp;", gettext( "General Preferences" ) );
    PutLabel( fp0, gettext( "User mode" ), user_mode_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", user_mode_string, "" );
    PutOptValues( fp0, user_mode, user_mode_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Editor" ), editor_string );
    fprintf( fp0, "&lt;input size=%d type=\"text\" name=\"%s\" value=\"%s\" %s&gt;\n", (int)text_len, editor_string, "", disable_all == 0 ? "" : disabled_string );
    PutLabel( fp0, gettext( "Type of Search" ), search_type_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", search_type_string, "" );
    PutOptValues( fp0, case_sensitive, search_type_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    fprintf( fp0, "\n%s&lt;em&gt;%s&lt;/em&gt;\n", "&nbsp;&nbsp;", gettext( "Security and Privacy" ) );
    PutLabel( fp0, gettext( "Cookies" ), will_save_cookies( ) );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", cookies_string, "" );
    fprintf( fp0, "&lt;option value=\"%s\" %s&gt;%s\n", cookies_ignore_all_string, LYSetCookies ? "" : selected_string, gettext( cookies_ignore_all_string ) );
    fprintf( fp0, "&lt;option value=\"%s\" %s&gt;%s\n", cookies_up_to_user_string, "", gettext( cookies_up_to_user_string ) );
    fprintf( fp0, "&lt;option value=\"%s\" %s&gt;%s\n", cookies_accept_all_string, "", gettext( cookies_accept_all_string ) );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Invalid-Cookie Prompting" ), cookie_prompt_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", cookie_prompt_string, "" );
    PutOptValues( fp0, cookie_noprompt, prompt_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    fprintf( fp0, "\n%s&lt;em&gt;%s&lt;/em&gt;\n", "&nbsp;&nbsp;", gettext( "Keyboard Input" ) );
    PutLabel( fp0, gettext( "Keypad mode" ), keypad_mode_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", keypad_mode_string, "" );
    PutOptValues( fp0, keypad_mode, keypad_mode_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Emacs keys" ), emacs_keys_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", emacs_keys_string, "" );
    PutOptValues( fp0, emacs_keys, bool_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "VI keys" ), vi_keys_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", vi_keys_string, "" );
    PutOptValues( fp0, vi_keys, bool_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    if ( LYLineeditNames[1] )
    {
      PutLabel( fp0, gettext( "Line edit style" ), lineedit_mode_string );
      fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", lineedit_mode_string, "" );
      i = 0;
      for ( ; LYLineeditNames[ i ] == 0;  )
      {
        char temp[16];
        sprintf( temp, "%d", i );
        fprintf( fp0, "&lt;option value=\"%s\" %s&gt;%s\n", temp, i == current_lineedit ? selected_string : "", gettext( LYLineeditNames[ i ] ) );
        i++;
      }
    }
    fprintf( fp0, "\n%s&lt;em&gt;%s&lt;/em&gt;\n", "&nbsp;&nbsp;", gettext( "Display and Character Set" ) );
    PutLabel( fp0, gettext( "Use locale-based character set" ), locale_charset_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", locale_charset_string, "" );
    PutOptValues( fp0, LYLocaleCharset, bool_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Display character set" ), display_char_set_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", display_char_set_string, disable_all == 0 ? "" : disabled_string );
    i = 0;
    for ( ; LYchar_set_names[ i ];  )
    {
      char temp[10];
      size_t len = strlen( LYchar_set_names[ i ] );
      if ( cset_len < len )
        cset_len = len;
      sprintf( temp, "%d", i );
      fprintf( fp0, "&lt;option value=\"%s\" %s&gt;%s\n", temp, i == current_char_set ? selected_string : "", gettext( LYchar_set_names[ i ] ) );
      i++;
    }
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
  {
    int curval = UCLYhndl_for_unspec;
    if ( curval == current_char_set )
    {
      curval = safeUCGetLYhndl_byMIME( UCAssume_MIMEcharset );
    }
    PutLabel( fp0, gettext( "Assumed document character set" ), assume_char_set_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", assume_char_set_string, "" );
    i = 0;
    for ( ; i < LYNumCharsets; i++ )
    {
      fprintf( fp0, "&lt;option value=\"%s\" %s&gt;%s\n", LYCharSet_UC[ i ].MIMEname, i == curval ? selected_string : "", gettext( LYCharSet_UC[ i ].MIMEname ) );
      // i++;
    }
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    if ( LYHaveCJKCharacterSet )
    {
      PutLabel( fp0, gettext( "CJK mode" ), raw_mode_string );
    }
    else
    {
      PutLabel( fp0, gettext( "Raw 8-bit" ), raw_mode_string );
    }
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", raw_mode_string, "" );
    PutOptValues( fp0, LYRawMode, bool_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "X Display" ), x_display_string );
    fprintf( fp0, "&lt;input size=%d type=\"text\" name=\"%s\" value=\"%s\" %s&gt;\n", (int)text_len, x_display_string, "", "" );
    fprintf( fp0, "\n%s&lt;em&gt;%s&lt;/em&gt;\n", "&nbsp;&nbsp;", gettext( "Document Appearance" ) );
    SetupChosenShowColor( );
    PutLabel( fp0, gettext( "Show color" ), show_color_string );
    if ( no_option_save )
    {
      fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", show_color_string, disable_all == 0 ? can_do_colors ? "" : disabled_string : disabled_string );
      if ( LYShowColor == 0 )
        LYShowColor = 1;
      else
      if ( LYShowColor == 3 )
        LYShowColor = 2;
      PutOptValues( fp0, LYShowColor + -1, bool_values );
    }
    else
    {
      fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", show_color_string, "" );
      if ( can_do_colors )
      {
        show_color_values[2].HtmlName = on_string;
        show_color_values[3].LongName = always_string;
      }
      else
      {
        show_color_values[2].HtmlName = 0;
        show_color_values[3].LongName = "Always try";
      }
      PutOptValues( fp0, LYChosenShowColor, show_color_values );
    }
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Show cursor" ), show_cursor_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", show_cursor_string, "" );
    PutOptValues( fp0, LYShowCursor, bool_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Underline links" ), underline_links_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", underline_links_string, "" );
    PutOptValues( fp0, LYUnderlineLinks, bool_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Show scrollbar" ), show_scrollbar_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", show_scrollbar_string, "" );
    PutOptValues( fp0, LYShowScrollbar, bool_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Popups for select fields" ), select_popups_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", select_popups_string, "" );
    PutOptValues( fp0, LYSelectPopups, bool_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "HTML error recovery" ), DTD_recovery_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", DTD_recovery_string, "" );
    PutOptValues( fp0, Old_DTD, DTD_type_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Show images" ), will_save_images( ) );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", images_string, "" );
    fprintf( fp0, "&lt;option value=\"%s\" %s&gt;%s\n", images_ignore_all_string, pseudo_inline_alts == 0 && clickable_images == 0 ? selected_string : "", gettext( images_ignore_all_string ) );
    fprintf( fp0, "&lt;option value=\"%s\" %s&gt;%s\n", images_use_label_string, "", gettext( images_use_label_string ) );
    fprintf( fp0, "&lt;option value=\"%s\" %s&gt;%s\n", images_use_links_string, "", gettext( images_use_links_string ) );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Verbose images" ), verbose_images_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", verbose_images_string, "" );
    PutOptValues( fp0, verbose_img, verbose_images_type_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    fprintf( fp0, "\n%s&lt;em&gt;%s&lt;/em&gt;\n", "&nbsp;&nbsp;", gettext( "Headers Transferred to Remote Servers" ) );
    PutLabel( fp0, gettext( "Personal mail address" ), mail_address_string );
    fprintf( fp0, "&lt;input size=%d type=\"text\" name=\"%s\" value=\"%s\" %s&gt;\n", (int)text_len, mail_address_string, "", "" );
    PutLabel( fp0, gettext( "Password for anonymous ftp" ), mail_address_string );
    fprintf( fp0, "&lt;input size=%d type=\"text\" name=\"%s\" value=\"%s\" %s&gt;\n", (int)text_len, anonftp_password_string, "", "" );
    PutLabel( fp0, gettext( "Preferred media type" ), preferred_media_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", preferred_media_string, "" );
    PutOptValues( fp0, LYAcceptMedia, media_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Preferred encoding" ), preferred_encoding_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", preferred_encoding_string, "" );
    PutOptValues( fp0, LYAcceptEncoding, encoding_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Preferred document character set" ), preferred_doc_char_string );
    fprintf( fp0, "&lt;input size=%d type=\"text\" name=\"%s\" value=\"%s\" %s&gt;\n", cset_len + 2, preferred_doc_char_string, "", "" );
    PutLabel( fp0, gettext( "Preferred document language" ), preferred_doc_lang_string );
    fprintf( fp0, "&lt;input size=%d type=\"text\" name=\"%s\" value=\"%s\" %s&gt;\n", cset_len + 2, preferred_doc_lang_string, "", "" );
    if ( no_useragent == 0 )
    {
      PutLabel( fp0, gettext( "User-Agent header" ), user_agent_string );
      fprintf( fp0, "&lt;input size=%d type=\"text\" name=\"%s\" value=\"%s\" %s&gt;\n", (int)text_len, user_agent_string, "", "" );
    }
    fprintf( fp0, "\n%s&lt;em&gt;%s&lt;/em&gt;\n", "&nbsp;&nbsp;", gettext( "Listing and Accessing Files" ) );
    PutLabel( fp0, gettext( "Use Passive FTP" ), passive_ftp_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", passive_ftp_string, "" );
    PutOptValues( fp0, ftp_passive, bool_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "FTP sort criteria" ), ftp_sort_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", ftp_sort_string, "" );
    PutOptValues( fp0, HTfileSortMethod, ftp_sort_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Local directory sort criteria" ), dired_list_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", dired_list_string, "" );
    PutOptValues( fp0, dir_list_style, dired_list_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    PutLabel( fp0, gettext( "Local directory sort order" ), dired_sort_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", dired_sort_string, "" );
    PutOptValues( fp0, dir_list_order, dired_sort_values );
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    if ( no_dotfiles == 0 )
    {
      PutLabel( fp0, gettext( "Show dot files" ), show_dotfiles_string );
      fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", show_dotfiles_string, "" );
      PutOptValues( fp0, show_dotfiles, bool_values );
      fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    }
    PutLabel( fp0, gettext( "Show transfer rate" ), show_rate_string );
    fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", show_rate_string, "" );
    i = 0;
    for ( ; rate_values[ i ].LongName;  )
    {
      char *message = 0;
      HTSprintf0( &message, rate_values[ i ].LongName, HTProgressUnits( rate_values[ i ].value ) );
      fprintf( fp0, "&lt;option value=\"%s\" %s&gt;%s\n", rate_values[ i ].HtmlName, rate_values[ i ].value == LYTransferRate ? selected_string : "", gettext( message ) );
      if ( message )
      {
        free( message );
      }
      i++;
    }
    fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    fprintf( fp0, "\n%s&lt;em&gt;%s&lt;/em&gt;\n", "&nbsp;&nbsp;", gettext( "Special Files and Screens" ) );
    if ( LYMBMBlocked == 0 )
    {
      PutLabel( fp0, gettext( "Multi-bookmarks" ), mbm_string );
      fprintf( fp0, "&lt;select name=\"%s\" %s&gt;\n", mbm_string, "" );
      PutOptValues( fp0, LYMultiBookmarks, mbm_values );
      fwrite( "&lt;/select&gt;\n", 1, 10, fp0 );
    }
    if ( LYMultiBookmarks )
    {
      PutLabel( fp0, gettext( "Review/edit Bookmarks files" ), mbm_string );
      fprintf( fp0, "&lt;a href=\"%s\"&gt;%s&lt;/a&gt;\n", "LYNXOPTIONS://MBM_MENU", gettext( "Goto multi-bookmark menu" ) );
    }
    else
    {
      PutLabel( fp0, gettext( "Bookmarks file" ), single_bookmark_string );
      fprintf( fp0, "&lt;input size=%d type=\"text\" name=\"%s\" value=\"%s\" %s&gt;\n", (int)text_len, single_bookmark_string, "", "" );
    }
    PutLabel( fp0, gettext( "Visited Pages" ), visited_links_string );
    LYMenuVisitedLinks( fp0, disable_all );
    if ( no_lynxcfg_info == 0 )
    {
      fprintf( fp0, "\n  %s&lt;a href=\"%s\"&gt;lynx.cfg&lt;/a&gt;.\n", gettext( "View the file " ), "LYNXCFG:" );
    }
    fwrite( "\n&lt;/pre&gt;\n", 1, 8, fp0 );
    if ( disable_all == 0 )
    {
      fwrite( "&lt;p align=center&gt;\n", 1, 17, fp0 );
      fprintf( fp0, "&lt;input type=\"submit\" value=\"%s\"&gt; - \n", gettext( "Accept Changes" ) );
      fprintf( fp0, "&lt;input type=\"reset\" value=\"%s\"&gt; - \n", gettext( "Reset Changes" ) );
      fprintf( fp0, "%s\n", gettext( "Left Arrow cancels changes" ) );
    }
    fwrite( "&lt;/form&gt;\n", 1, 8, fp0 );
    EndInternalPage( fp0 );
    LYCloseTempFP( fp0 );
    return 1;
  }
  }
}
#if 0
#endif
