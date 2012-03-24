#include "LYForms.c.h"
static char **options_list( OptionType *opt_ptr );
static void LYSetLastTFPos( int pos );
static int form_getstr( int cur, BOOLEAN use_last_tfpos, BOOLEAN redraw_only );
static int LastTFPos = -1;
char **options_list( OptionType *opt_ptr )
{
  char **result = 0;
  size_t len;
  int pass = 0;
  OptionType *tmp_ptr;
  for ( ; pass <= 1; pass++ )
  {
    tmp_ptr = opt_ptr;
    len = 0;
    for ( ; tmp_ptr != 0; tmp_ptr = tmp_ptr->next )
    {
      if ( pass != 0 )
        result[ len ] = tmp_ptr->name;
      len++;
      //tmp_ptr = tmp_ptr->next;
    }
    if ( pass == 0 )
    {
      len++;
      result = calloc( len, sizeof( char* ) );
    }
    else
      result[ len ] = 0;
    //pass++;
  }
  return result;
}
int change_form_link_ex( int cur, DocInfo *newdoc, BOOLEAN *refresh_screen, BOOLEAN use_last_tfpos, BOOLEAN immediate_submit, BOOLEAN redraw_only )
{
  FormInfo *form = links[ cur ].l_form;
  char *link_name = form->name;
  char *link_value = form->value;
  int newdoc_changed = 0;
  int c = 270;
  int OrigNumValue;
  int title_adjust = ( no_title & 255 ) == 0 ? 0 : -1;
  char **my_data = 0;
  if ( form == 0 )
  {
    return c;
  }
  my_data = options_list( form->select_list );
  LYmove( links[ cur ].ly + title_adjust, links[ cur ].lx );
  switch ( form->type )
  {
  case 3:
    if ( form->disabled != 1 )
    {
      LYSetHilite( cur, form->num_value == 0 ? checked_box : unchecked_box );
      form->num_value = form->num_value == 0;
      if ( newdoc_changed != 0 )
        c = 2046;
      else
      {
        LYforce_no_cache = 0;
        reloading = 0;
      }
      if ( my_data != 0 )
      {
        free( my_data );
        my_data = 0;
        return c;
      }
      else
      {
        return c;
      }
    }
    break;
  case 7:
    if ( form->select_list == 0 )
    {
      HTAlert( gettext( "Bad HTML!!  Unable to create popup window!" ) );
      c = 270;
    }
    else
    {
      if ( form->disabled == 1 )
      {
        int dummy = LYhandlePopupList( form->num_value, links[ cur ].ly, links[ cur ].lx, my_data, form->size, form->size_l, form->disabled, 0 );
        if ( ( enable_scrollback & 255 ) == 0 )
          c = 23;
        else
          c = 12;
      }
      else
      {
        OrigNumValue = form->num_value;
        form->num_value = LYhandlePopupList( form->num_value, links[ cur ].ly, links[ cur ].lx, my_data, form->size, form->size_l, form->disabled, 0 );
      {
        OptionType *opt_ptr = form->select_list;
        int i = 0;
        for ( ; i < form->num_value; opt_ptr = opt_ptr->next )
        {
          i++;
          //opt_ptr = opt_ptr->next;
        }
        form->value = opt_ptr->name;
        form->cp_submit_value = opt_ptr->cp_submit_value;
        form->value_cs = opt_ptr->value_cs;
        if ( ( enable_scrollback & 255 ) == 0 )
          c = 23;
        else
          c = 12;
      }
      }
    }
    break;
  case 4:
    if ( form->disabled != 1 )
    {
      if ( form->num_value != 0 )
      {
        if ( user_mode == 0 )
        {
          HTUserMsg( gettext( "One radio button must be checked at all times!" ) );
        }
      }
      else
      {
        int i;
        lynx_start_radio_color( );
        i = 0;
        for ( ; i < nlinks; i++ )
        {
          if ( links[ i ].type == 1 && links[ i ].l_form->type == 4 && links[ i ].l_form->number == form->number && strcmp( links[ i ].l_form->name, form->name ) == 0 && links[ i ].l_form->num_value != 0 )
          {
            LYmove( links[ i ].ly, links[ i ].lx );
            LYwaddnstr( LYwin, unchecked_radio, strlen( unchecked_radio ) );
            LYSetHilite( i, unchecked_radio );
          }
          //i++;
        }
        lynx_stop_radio_color( );
        HText_activateRadioButton( form );
        LYSetHilite( cur, checked_radio );
      }
    }
    break;
  case 1:
  case 2:
  case 9:
  case 11:
    c = form_getstr( cur, use_last_tfpos, redraw_only );
    LYSetHilite( cur, form->type == 2 ? LYstrCells( form->value ) <= 1023 ? &star_string[ 1023 - LYstrCells( form->value ) ] : star_string : form->value );
    break;
  case 6:
    if ( form->disabled != 1 )
    {
      HText_ResetForm( form );
      refresh_screen[0] = 1;
    }
    break;
  case 12:
    if ( redraw_only != 0 )
    {
      c = form_getstr( cur, use_last_tfpos, 1 );
    }
    else
    {
      if ( immediate_submit == 0 )
      {
        c = form_getstr( cur, use_last_tfpos, 0 );
      }
      if ( form->disabled == 1 && ( c == 13 || c == 10 || immediate_submit != 0 ) )
      {
        if ( peek_mouse_link( ) >= 0 )
          c = 2087;
        else
          c = 9;
      }
      else
      {
        if ( immediate_submit != 0 || ( ( c == 13 || c == 10 || c == 2088 ) && peek_mouse_link( ) == -1 ) )
          LYSetHilite( cur, form->value );
        else
          LYSetHilite( cur, form->value );
        if ( form->submit_action == 0 || ( form->submit_action[0] & 255 ) == 0 )
        {
          HTUserMsg( gettext( "** Bad HTML!!  No form action defined. **" ) );
          c = 270;
        }
        else
        {
          if ( form->submit_method == 3 && ( no_mail & 255 ) != 0 )
          {
            HTAlert( gettext( "Mail disallowed!  Cannot submit." ) );
            c = 270;
          }
          else
          {
            if ( immediate_submit == 0 && ( ( ( no_file_url & 255 ) != 0 && ( form->submit_action[0] == 'f' || form->submit_action[0] == 'F' ) && strncasecomp( form->submit_action, "file:", 5 ) == 0 ) || strncasecomp( form->submit_action, "lynx", 4 ) == 0 ) )
              c = 2088;
            else
            {
              if ( ( form->no_cache & 255 ) != 0 && form->submit_method != 3 )
              {
                LYforce_no_cache = 1;
                reloading = 1;
              }
              newdoc_changed = HText_SubmitForm( form, newdoc, link_name, form->value );
              if ( form->submit_method == 3 )
                refresh_screen[0] = 1;
              else
              {
                newdoc->link = 0;
                newdoc->internal_link = 0;
              }
              c = 270;
            }
          }
        }
      }
    }
    break;
  case 5:
  case 13:
    if ( form->disabled != 1 )
    {
      if ( ( form->no_cache & 255 ) != 0 && form->submit_method != 3 )
      {
        LYforce_no_cache = 1;
        reloading = 1;
      }
      newdoc_changed = HText_SubmitForm( form, newdoc, link_name, link_value );
      if ( form->submit_method == 3 )
        refresh_screen[0] = 1;
      else
      {
        newdoc->link = 0;
        newdoc->internal_link = 0;
      }
    }
    break;
  case 0:
  case 8:
  case 10:
    break;
  }
}
int change_form_link( int cur, DocInfo *newdoc, BOOLEAN *refresh_screen, BOOLEAN use_last_tfpos, BOOLEAN immediate_submit )
{
  return change_form_link_ex( cur, newdoc, refresh_screen, use_last_tfpos, immediate_submit, 0 );
}
void LYSetLastTFPos( int pos )
{
  LastTFPos = pos;
  return;
}
int form_getstr( int cur, BOOLEAN use_last_tfpos, BOOLEAN redraw_only )
{
  int eax;
  int ah;
  FormInfo *form = links[ cur ].l_form;
  char *value = form->value;
  int ch;
  int far_col;
  int max_length;
  int startcol, startline;
  BOOLEAN HaveMaxlength = 0;
  int action, repeat;
  int last_xlkc = -1;
  BOOLEAN refresh_mb = 1;
  EditFieldData MyEdit;
  BOOLEAN Edited = 0;
  startline = LYwin == 0 ? -1 : LYwin->_cury;
  startcol = LYwin == 0 ? -1 : LYwin->_curx;
  if ( LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) < form->size + startcol )
    far_col = LYcols - ( ( LYShowScrollbar & 255 ) != 0 );
  else
    far_col = form->size + startcol;
  max_length = form->maxlength == 0 || form->maxlength > 1023 ? 1023 : form->maxlength;
  if ( max_length < strlen( form->value ) )
  {
    value = &value[ strlen( form->value ) - max_length ];
    if ( form->disabled == 0 && ( form->submit_method != 3 || ( no_mail & 255 ) == 0 ) )
    {
      HTUserMsg( gettext( "Form field value exceeds buffer length!  Trim the tail." ) );
      show_formlink_statusline( form, redraw_only == 0 ? 2 : 0 );
      LYmove( startline, startcol );
    }
  }
  LYSetupEdit( &MyEdit, value, max_length, far_col - startcol );
  MyEdit.pad = '_';
  MyEdit.hidden = form->type == 2;
  if ( use_last_tfpos != 0 && LastTFPos >= 0 && LastTFPos < MyEdit.strlen )
  {
    MyEdit.pos = LastTFPos;
    if ( MyEdit.pos == 0 )
      MyEdit.mark = ~MyEdit.strlen;
  }
  if ( peek_mouse_levent( ) != 0 && use_last_tfpos == 0 )
    MyEdit.pos = 0;
  LYRefreshEdit( &MyEdit );
  if ( redraw_only != 0 )
  {
    if ( ( 0 ^ 0 ) != 0 )
    {
      __stack_chk_fail( );
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    do
    {
      repeat = -1;
      get_mouse_link( );
      ch = LYgetch_input( );
      if ( refresh_mb == 0 && EditBinding( ch ) != 1 && EditBinding( ch ) != 24 )
        continue;
      else
      {
        action = 0;
        if ( ch == -1 || ( ch & 2048 ) == 0 || ( ch & 32768 ) != 0 )
        {
          if ( ch == 285 )
          {
            MEVENT event;
            int curx, cury;
            getmouse( &event.id );
            cury = LYwin == 0 ? -1 : LYwin->_cury;
            curx = LYwin == 0 ? -1 : LYwin->_curx;
            if ( event.y == cury )
            {
              repeat = event.x - curx;
              if ( repeat < 0 )
              {
                action = 17;
                repeat *= -1;
              }
              else
                action = 15;
            }
            else
              MyEdit.dirty = 1;
            last_xlkc = -1;
          }
          else
          {
            if ( ( ch & 32768 ) == 0 )
              ch |= MyEdit.current_modifiers;
            MyEdit.current_modifiers = 0;
            if ( last_xlkc != -1 )
            {
              if ( last_xlkc == ch )
                ch |= 4096;
              last_xlkc = -1;
            }
          }
          if ( peek_mouse_link( ) == -1 )
          {
            if ( action == 0 )
            {
              action = EditBinding( ch );
            }
            if ( ( action & 128 ) != 0 && ( action & 4096 ) == 0 )
            {
              last_xlkc = ch;
              action &= -129;
            }
            else
              last_xlkc = -1;
            if ( action == 29 )
            {
              MyEdit.current_modifiers = MyEdit.current_modifiers;
            }
            else
            {
              if ( action == 30 )
              {
                MyEdit.current_modifiers = MyEdit.current_modifiers;
              }
              else
              {
                if ( action != 2 && action != 6 )
                {
                  if ( ( action & 4096 ) != 0 )
                    ch = EditBinding( ch );
                  else
                  {
                    if ( action == 23 )
                    {
                      mustshow = 1;
                      statusline( gettext( "Enter Lynx keystroke command: " ) );
                      ch = LYgetch( );
                    }
                    else
                    {
                      if ( action == 37 )
                      {
                        unsigned char *s = get_clip_grab( ), *e;
                        char *buf = 0;
                        int len;
                        if ( s != 0 )
                        {
                          len = strlen( (char*)s );
                          e = &s[ len ];
                          if ( len >= 1 )
                          {
                            unsigned char *e1 = s;
                            while ( e1 < e )
                            {
                              if ( e1[0] >= 31 )
                              {
                                if ( s < e1 )
                                  LYEditInsert( &MyEdit, s, e1 - s, -1, 1 );
                                s = e1;
                                if ( e1[0] == 9 )
                                {
                                  LYEditInsert( &MyEdit, " ", 1, -1, 1 );
                                  e1++;
                                  s = e1;
                                }
                                else
                                  break;
                              }
                              else
                              {
                                e1++;
                              }
                            }
                            if ( s < e1 )
                              LYEditInsert( &MyEdit, s, e1 - s, -1, 1 );
                            else
                            for ( ; e1 < e && e1[0] == 13; e1++ )
                            {
                              //e1++;
                            }
                            if ( e1[1] < e && e1[0] == 10 )
                              HTSACopy( &buf, &e1[1] );
                            get_clip_release( );
                            if ( max_length <= MyEdit.strlen )
                              HaveMaxlength = 1;
                            else
                            if ( HaveMaxlength != 0 && MyEdit.strlen < max_length )
                            {
                              HaveMaxlength = 0;
                              mustshow = 1;
                              statusline( gettext( "Enter text.  Use arrows or tab to move off of field." ) );
                            }
                            if ( strcmp( value, &MyEdit.buffer[0] ) != 0 )
                              Edited = 1;
                            if ( buf != 0 )
                            {
                              put_clip( buf );
                              if ( buf != 0 )
                              {
                                free( buf );
                                buf = 0;
                              }
                              ch = 10;
                            }
                            else
                            {
                              LYRefreshEdit( &MyEdit );
                            }
                          }
                          else
                          {
                            HTInfoMsg( gettext( "Clipboard empty or Not text data." ) );
                          }
                        }
                      }
                      else
                      {
                        if ( action != 24 || HTCJK != NOCJK || LYlowest_eightbit[ current_char_set ] <= 151 )
                        {
                          if ( action == 3 )
                            ch = 9;
                          else
                          {
                            if ( action == 5 )
                            {
                            }
                            else
                            {
                              if ( action == 4 )
                                textfields_need_activation = 1;
                              else
                              {
                                if ( action != 0 || ( ch == -1 ? keymap[0] == 21 : ( ch & 34816 ) == 0 ? keymap[ ( ch & 2047 ) + 1 ] == 21 : ( ch & 255 ) == 21 ) == 0 )
                                {
                                  if ( action == 17 && MyEdit.pos == 0 && repeat == -1 )
                                  {
                                    int c = 1;
                                    if ( ( textfield_prompt_at_left_edge & 255 ) != 0 )
                                    {
                                      c = HTConfirmDefault( gettext( "Do you want to go back to the previous document?" ), 0 );
                                    }
                                    else
                                    {
                                      if ( strcmp( &MyEdit.buffer[0], value ) != 0 )
                                      {
                                        c = HTConfirmDefault( gettext( "Do you want to go back to the previous document?" ), 0 );
                                      }
                                    }
                                    if ( c == 1 )
                                    {
                                    }
                                    else
                                    {
                                      if ( form->disabled == 1 )
                                      {
                                        mustshow = 1;
                                        statusline( gettext( "Use arrows or tab to move off of field." ) );
                                      }
                                      mustshow = 1;
                                      statusline( gettext( "Enter text.  Use arrows or tab to move off of field." ) );
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( Edited != 0 )
        {
          if ( form->value == value )
          {
            HTSACopy( &form->value, &MyEdit.buffer[0] );
          }
        {
          int old_len = strlen( form->value );
          int new_len = strlen( value );
          HTSACat( &form->value, &MyEdit.buffer[0] );
          HTUserMsg( gettext( "Modified tail combined with head of form field value." ) );
          if ( ( LYtrimInputFields & 255 ) != 0 )
            LYTrimTrailing( form->value );
          if ( form->value != 0 && ( form->value[0] & 255 ) != 0 )
            form->value_cs = current_char_set;
        }
        }
      }
    }
    while ( form->disabled == 1 && ( action - 13 > 21 || ( ( 1 << ( action - 13 ) ) & 3145983 ) == 0 ) );
    if ( repeat < 0 )
    {
      repeat = 1;
    }
    while ( repeat-- )
    {
      int rc = LYEdit1( &MyEdit, ch, ( (unsigned char)( action ) & 127 ), 1 );
      if ( rc < 0 )
      {
        ch = rc * -1;
        if ( action == 18 || action == 16 )
        {
          if ( cur >= 0 && cur < nlinks )
          {
            if ( action != 16 )
            {
              if ( cur >= 1 )
                goto B202;
            }
            else
            if ( cur < nlinks - 1 )
            {
            }
B202:            if ( links[ ( action == 16 ? 1 : -1 ) + cur ].ly == links[ cur ].ly )
              continue;
          }
        }
      }
      if ( rc == 0 )
      {
        if ( HTCJK != NOCJK && ch > 127 && ch <= 254 && refresh_mb != 0 )
        {
          refresh_mb = 0;
        }
        else
        {
          refresh_mb = 1;
        }
      }
      else
      {
        if ( refresh_mb == 0 )
        {
          LYEdit1( &MyEdit, 0, 9, 1 );
        }
      }
    }
    if ( max_length <= MyEdit.strlen )
      HaveMaxlength = 1;
    else
    if ( HaveMaxlength != 0 && MyEdit.strlen < max_length )
    {
      HaveMaxlength = 0;
      mustshow = 1;
      statusline( gettext( "Enter text.  Use arrows or tab to move off of field." ) );
    }
    if ( strcmp( value, &MyEdit.buffer[0] ) != 0 )
      Edited = 1;
    if ( refresh_mb != 0 )
      LYRefreshEdit( &MyEdit );
    LYSetLastTFPos( MyEdit.pos );
  }
}
void show_formlink_statusline( FormInfo *form, int for_what )
{
  switch ( form->type )
  {
  case 2:
    if ( form->disabled == 1 )
    {
      statusline( gettext( "UNMODIFIABLE form password.  Use UP or DOWN arrows or tab to move off." ) );
    }
    if ( for_what == 0 )
    {
      statusline( gettext( "(Password entry field) Inactive.  Press &lt;return&gt; to activate." ) );
    }
    statusline( gettext( "(Password entry field) Enter text.  Use UP or DOWN arrows or tab to move off." ) );
    break;
  case 7:
    if ( form->disabled == 1 )
    {
      statusline( gettext( "UNMODIFIABLE option list.  Use return or arrow keys to review or leave." ) );
    }
    statusline( gettext( "(Option list) Hit return and use arrow keys and return to select option." ) );
    break;
  case 3:
    if ( form->disabled == 1 )
    {
      statusline( gettext( "UNMODIFIABLE form checkbox.  Use UP or DOWN arrows or tab to move off." ) );
    }
    statusline( gettext( "(Checkbox Field)   Use right-arrow or &lt;return&gt; to toggle." ) );
    break;
  case 4:
    if ( form->disabled == 1 )
    {
      statusline( gettext( "UNMODIFIABLE form radio button.  Use UP or DOWN arrows or tab to move off." ) );
    }
    statusline( gettext( "(Radio Button)   Use right-arrow or &lt;return&gt; to toggle." ) );
    break;
  case 12:
    if ( form->disabled == 1 )
    {
      statusline( gettext( "UNMODIFIABLE form field.  Use UP or DOWN arrows or tab to move off." ) );
    }
    if ( form->submit_method == 3 )
    {
      if ( ( no_mail & 255 ) != 0 )
      {
        statusline( gettext( "(mailto form field) Mail is disallowed so you cannot submit." ) );
      }
      if ( for_what == 0 )
      {
        statusline( gettext( "(mailto form field) Inactive.  Press &lt;return&gt; to change." ) );
      }
      statusline( gettext( "(mailto form field) Enter text.  Use &lt;return&gt; to submit, arrows to move off." ) );
    }
    else
    {
      if ( ( form->no_cache & 255 ) != 0 )
      {
        if ( for_what == 0 )
        {
          statusline( gettext( "(Form field) Inactive. Press &lt;return&gt; to edit, press &lt;return&gt; twice to submit." ) );
        }
        statusline( gettext( "(Form field) Enter text.  Use &lt;return&gt; to submit, arrows or tab to move off." ) );
      }
      else
      {
        char *submit_str = 0;
        char *xkey_info = key_for_func_ext( 46, for_what );
        if ( xkey_info != 0 && ( xkey_info[0] & 255 ) != 0 )
        {
          if ( for_what == 0 )
          {
            HTSprintf0( &submit_str, gettext( "(Form field) Inactive.  Use &lt;return&gt; to edit (%s to submit with no cache)." ), xkey_info );
          }
          HTSprintf0( &submit_str, gettext( "(Form field) Enter text.  Use &lt;return&gt; to submit (%s for no cache)." ), xkey_info );
          statusline( submit_str );
          if ( submit_str != 0 )
          {
            free( submit_str );
            submit_str = 0;
            if ( xkey_info != 0 )
            {
              free( xkey_info );
              xkey_info = 0;
              return;
            }
            else
            {
              return;
            }
          }
        }
        else
        {
          if ( for_what == 0 )
          {
            statusline( gettext( "(Form field) Inactive.  Use &lt;return&gt; to edit." ) );
          }
          statusline( gettext( "(Form field) Enter text.  Use &lt;return&gt; to submit." ) );
        }
      }
    }
    break;
  case 5:
  case 13:
    if ( form->disabled == 1 )
    {
      statusline( gettext( "DISABLED form submit button.  Use UP or DOWN arrows or tab to move off." ) );
    }
    if ( form->submit_method == 3 )
    {
      if ( ( no_mail & 255 ) != 0 )
      {
        statusline( gettext( "(mailto form submit button) Mail is disallowed so you cannot submit." ) );
      }
      if ( user_mode == 2 )
      {
        char *submit_str = 0;
        HTSACopy( &submit_str, gettext( "Submit mailto form to " ) );
        HTSACat( &submit_str, form->submit_action );
        statusline( submit_str );
        if ( submit_str != 0 )
        {
          free( submit_str );
          submit_str = 0;
        }
      }
      else
      {
        statusline( gettext( "(mailto form submit button) Use right-arrow or &lt;return&gt; to submit." ) );
      }
    }
    else
    {
      if ( ( form->no_cache & 255 ) != 0 )
      {
        if ( user_mode == 2 )
        {
          char *submit_str = 0;
          HTSACopy( &submit_str, gettext( "Submit to " ) );
          HTSACat( &submit_str, form->submit_action );
          statusline( submit_str );
          if ( submit_str != 0 )
          {
            free( submit_str );
            submit_str = 0;
          }
        }
        else
        {
          statusline( gettext( "(Form submit button) Use right-arrow or &lt;return&gt; to submit." ) );
        }
      }
      else
      {
        if ( user_mode == 2 )
        {
          char *submit_str = 0;
          HTSACopy( &submit_str, gettext( "Submit ('x' for no cache) to " ) );
          HTSACat( &submit_str, form->submit_action );
          statusline( submit_str );
          if ( submit_str != 0 )
          {
            free( submit_str );
            submit_str = 0;
          }
        }
        else
        {
          statusline( gettext( "(Form submit button) Use right-arrow or &lt;return&gt; to submit ('x' for no cache)." ) );
        }
      }
    }
    break;
  case 6:
    if ( form->disabled == 1 )
    {
      statusline( gettext( "DISABLED form reset button.  Use UP or DOWN arrows or tab to move off." ) );
    }
    statusline( gettext( "(Form reset button)   Use right-arrow or &lt;return&gt; to reset form to defaults." ) );
    break;
  case 11:
    if ( form->disabled == 1 )
    {
      statusline( gettext( "UNMODIFIABLE file entry field.  Use UP or DOWN arrows or tab to move off." ) );
    }
    statusline( gettext( "(File entry field) Enter filename.  Use UP or DOWN arrows or tab to move off." ) );
    break;
  case 1:
    if ( form->disabled == 1 )
    {
      statusline( gettext( "UNMODIFIABLE form text field.  Use UP or DOWN arrows or tab to move off." ) );
    }
    if ( for_what == 0 )
    {
      statusline( gettext( "(Text entry field) Inactive.  Press &lt;return&gt; to activate." ) );
    }
    statusline( gettext( "(Text entry field) Enter text.  Use UP or DOWN arrows or tab to move off." ) );
    break;
  case 9:
    if ( form->disabled == 1 )
    {
      statusline( gettext( "UNMODIFIABLE form text field.  Use UP or DOWN arrows or tab to move off." ) );
    }
  {
    char *submit_str = 0;
    char *xkey_info = 0;
    if ( ( no_editor & 255 ) == 0 && editor != 0 && editor != 0 )
    {
      xkey_info = key_for_func_ext( 86, for_what );
      if ( xkey_info == 0 )
      {
        xkey_info = key_for_func_ext( 85, for_what );
      }
    }
    if ( xkey_info != 0 && ( xkey_info[0] & 255 ) != 0 )
    {
      if ( for_what == 0 )
      {
        HTSprintf0( &submit_str, gettext( "(Textarea) Inactive.  Press &lt;return&gt; to activate (%s for editor)." ), xkey_info );
      }
      HTSprintf0( &submit_str, gettext( "(Textarea) Enter text. Use UP/DOWN arrows or TAB to move off (%s for editor)." ), xkey_info );
      statusline( submit_str );
      if ( submit_str != 0 )
      {
        free( submit_str );
        submit_str = 0;
      }
    }
    else
    if ( for_what == 0 )
    {
      statusline( gettext( "(Textarea) Inactive.  Press &lt;return&gt; to activate." ) );
    }
    statusline( gettext( "(Textarea) Enter text. Use UP/DOWN arrows or TAB to move off." ) );
    if ( xkey_info != 0 )
    {
      free( xkey_info );
    }
  }
    break;
  case 0:
  case 8:
  case 10:
    break;
  }
  return;
}
