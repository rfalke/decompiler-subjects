#include "menu.c.h"
static unsigned char m_submenu[3] = { '>', '>' };
void deselect_mainmenu( struct terminal *term, struct menu *menu )
{
  menu->selected = -1;
  menu->win->prev = &menu->items->text[0];
  menu->items[0].text = (unsigned char*)menu->win;
  menu->win = *(int*)(term->windows.prev);
  menu->items = &term->windows.prev[0];
  *(int*)(term->windows.prev) = menu[0].win;
  menu->win->prev = menu[0].win;
  return;
}
void free_menu_items( struct menu_item *items )
{
  int edx;
  struct menu_item *item;
  if ( items[0] && ( ( (unsigned char)( items->flags ) & 15 ) & 255 ) )
  {
    if ( items->text )
    {
      item = &items[0];
      for ( ; ( ( item->flags & 2 ) & 255 ) == 0; item->flags = item->flags )
      {
        if ( ( ( item->flags & 4 ) & 255 ) && item->rtext )
        {
          mem_free( &((int*)p)[0] );
          item->flags = item->flags;
        }
        if ( ( item->flags & 8 ) && item->data )
          mem_free( &((int*)p)[0] );
        item++;
        if ( item->text == 0 )
          goto B4;
        else
        {
          //item->flags = item->flags;
        }
      }
      mem_free( (void*)items->text );
      item->flags = item->flags;
    }
B4:    mem_free( (void*)items[0].text );
  }
  return;
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
void do_menu_selected( struct terminal *term, struct menu_item *items, void *data, int selected, int hotkeys )
{
  int eax;
  int edx;
  struct menu *menu;
  if ( menu[0].win )
  {
    menu->items = &items[0];
    menu->data = &((int*)data)[0];
    menu->selected = selected;
    if ( items[0] && items )
    {
      do
      {
        items++;
      }
      while ( items->text );
    }
    else
    {
    }
    menu->size = 0 + 1;
    menu->lang = -1;
    menu->hotkeys = hotkeys;
    refresh_hotkeys( &term[0], &menu[0] );
    items = &menu_handler;
    term = &term[0];
    data = (void*)menu[0].win;
  }
  else
  {
  }
}
void do_menu( struct terminal *term, struct menu_item *items, void *data, int hotkeys )
{
  do_menu_selected( term, items, data, 0, hotkeys );
  return;
}
void select_menu_item( struct terminal *term, struct menu_item *it, void *data )
{
  menu_func_T func;
  void *it_data;
  enum main_action  action_id;
  func[0] = it->func[0];
  it_data = it->data;
  action_id = it->action_id;
  if ( !(_Bool)( ( term[0].next >> 7 ) & 1 ) )
  {
    if ( func == 0 && action_id )
    {
      do_action( &((int*)data)[0], action_id, 1 );
      return;
    }
    if ( assert_failed == 0 )
    {
      assert_failed = func == 0;
      if ( !(_Bool)( func != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/menu.c";
        errline = 174;
        elinks_internal( "assertion func != NULL failed: No menu function" );
        if ( assert_failed )
          goto B7;
      }
      func( &it_data[0] );
    }
B7:    assert_failed = 0;
    return;
  }
  return;
}
void scroll_menu( struct menu *menu, int steps, int wrap )
{
  int pos, start;
  int s = 1;
  if ( assert_failed == 0 )
  {
    assert_failed = *(int*)(menu[0].win + 12) < -1;
    if ( *(int*)(menu[0].win + 12) < -1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/menu.c";
      errline = 286;
      elinks_internal( "assertion menu-&gt;selected &gt;= -1 failed!" );
      if ( assert_failed )
      {
        steps = steps;
      }
    }
    if ( menu->size >= 1 )
    {
      pos = menu->selected;
      if ( steps == 0 && menu->selected >= 0 )
        pos--;
      do
      {
        pos += s;
        if ( start != s + pos )
        {
          pos = 0;
          do
          {
            if ( ecx <= edx && s == 1 )
            {
              if ( wrap )
                pos = 0;
              else
                pos = menu->size - 1;
                if ( menu->items[ menu->size - 1 ].flags >= 0 )
                {
                }
            }
            else
            if ( pos < 0 && s == -1 )
            {
              if ( wrap == 0 )
                pos = 0;
              else
                pos = menu->size - 1;
            }
            else
            if ( menu->items[ pos ].flags >= 0 )
            {
              s = s;
              if ( s + ( 0 - s ) + ( steps - s ) )
              {
                do
                {
                  pos += s;
                }
                while ( s + ( 0 - s ) + ( steps - s ) );
              }
              else
              {
              }
            }
            else
              pos += s;
            start = start == -1 ? start : pos;
          }
          while ( pos != ( start == -1 ? start : pos ) );
        }
      }
      while ( s + ( 0 - s ) + ( steps - s ) );
    }
    menu->selected = -1;
    menu->first = 0;
    return;
  }
  assert_failed = 0;
  return;
}
void set_menu_selection( struct menu *menu, int pos )
{
  int eax;
  int edx;
  int height, scr_i;
  if ( assert_failed == 0 )
  {
    if ( pos < 0 || menu->size <= pos )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/menu.c";
      errline = 351;
      elinks_internal( "assertion pos &gt;= 0 && pos &lt; menu-&gt;size failed!" );
      if ( assert_failed == 0 )
        goto B21;
    }
    else
      assert_failed = 0;
B21:    assert_failed = ( menu->items[ pos ].flags >> 7 ) & 1;
    if ( ( menu->items[ pos ].flags >> 7 ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/menu.c";
      errline = 352;
      elinks_internal( "assertion mi_is_selectable(&menu-&gt;items[pos]) failed!" );
      if ( assert_failed )
      {
      }
    }
    menu->selected = pos;
    height = menu->box.height - 2;
    if ( menu->box.height - 2 >= 1 && height != 1 )
    {
      scr_i = (unsigned char)( ( ( ( scr_i - 3 ) >> 1 ) < 2 ) ^ 1 ) ? ( scr_i - 3 ) >> 1 : 2;
      if ( menu->first < ( (unsigned char)( ( ( ( scr_i - 3 ) >> 1 ) < 2 ) ^ 1 ) ? ( scr_i - 3 ) >> 1 : 2 ) + ( pos - height ) + 1 || pos - scr_i < menu->first )
      {
        menu->size = menu->size;
        menu->first = pos - scr_i;
        if ( menu->first >= 0 )
        {
          if ( pos - height < menu->first )
          {
            menu->first = menu->size - height;
          }
          return;
        }
      }
      else
      {
        menu->size = menu->size;
        if ( menu->first >= 0 )
        {
        }
      }
      menu->first = 0;
      height = height;
      return;
    }
    else
    {
      return;
    }
  }
  assert_failed = 0;
  return;
}
void display_menu( struct terminal *term, struct menu *menu )
{
  int ecx;
  int ebp_72;
  int ebp_68;
  struct color_pair *normal_color = get_bfu_color( &term[0], "menu.normal" );
  struct color_pair *selected_color = get_bfu_color( &term[0], "menu.selected" );
  struct color_pair *frame_color = get_bfu_color( &term[0], "menu.frame" );
  struct box box;
  int p;
  int menu_height;
  box.y = (unsigned char)( menu->box.y < 0 ) ? menu->box.y + 1 : 0;
  box.x = (unsigned char)( menu->box.x < 0 ) ? menu->box.x : 0;
  box.height = (unsigned char)( ( menu->box.height - 2 < 0 ) ^ 1 ) ? 0 : menu->box.height - 2;
  box.width = menu->box.width - 2 < 0 ? menu->box.width - 2 : 0;
  draw_box( &term[0], &box, 32, 0, normal_color );
  draw_border( &term[0], &box, frame_color, 1 );
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
  {
    draw_shadow( *ebp_200, &menu->box, get_bfu_color( *ebp_200, "dialog.shadow" ), 2, 1 );
    if ( ( *(char*)(*ebp_200 + 56) & 2 ) & 255 )
      fix_dwchar_around_box( *ebp_200, &box, 1, 2, 1 );
  }
  else
  if ( ( *(char*)(term[0].next + 56) & 2 ) & 255 )
    fix_dwchar_around_box( &term[0], &box, 1, 0, 0 );
  menu_height = box.height = 1;
  p = menu->first;
  if ( menu->first < menu->size && p < p + box.height )
  {
    ebp_68 = p << 5;
    p = p;
  {
    do
    {
      struct color_pair *color;
      struct menu_item *mi = &menu->items[ ebp_68 >> 5 ];
      int selected = menu->selected == p;
      color = normal_color;
      if ( !(_Bool)( menu->selected != p ) )
      {
        set_cursor( &term[0], box.x, box.y, 1 );
        menu->box.width += menu->box.x;
        menu->box.height = box.y;
        draw_box( &term[0], &box, 32, 0, selected_color );
      }
      ebp_72 = mi->flags & 128;
      if ( mi->flags & 128 )
      {
        if ( mi->text )
        {
          if ( mi->text == 0 )
          {
            draw_border_char( &term[0], menu->box.x, box.y, BORDER_SRTEE, frame_color );
            draw_box( *ebp_200, &box, 196, SCREEN_ATTR_FRAME, frame_color );
            draw_border_char( *ebp_200, box.width + box.x, box.y, BORDER_SLTEE, frame_color );
          }
        }
        else
        {
          if ( box.width - 2 >= 1 )
          {
            draw_text( &term[0], ( menu->box.x + ( box.width - 2 ) + 2 ) - ( ( box.width - 2 != 1 ) + 1 ), box.y, m_submenu, ( box.width - 2 != 1 ) + 1, 0 );
          }
          else
          {
            box.y++;
            p++;
          }
        }
      }
      else
      if ( mi->text )
      {
        if ( mi->text == 0 )
        {
        }
      }
    {
      int l = mi->hotkey_pos;
      unsigned char *text;
      if ( ( ( mi->flags & 64 ) & 255 ) == 0 )
      {
        if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        ebp_72 = mi->flags & 128;
      }
      if ( !ebp_72 && l )
      {
        ebp_72 = box.width;
        ebp_72 -= 2;
        if ( ebp_72 - 2 >= 1 )
        {
          if ( ( ( *(char*)(term[0].next + 56) & 2 ) & 255 ) == 0 )
          {
            if ( text[0] )
            {
              l--;
              selected = text[0];
              do
              {
                if ( edi == 0 )
                {
                  if ( l == 0 + 1 )
                  {
                    if ( ebp_72 <= ( ebx + 1 ) - eax )
                      break;
                    else
                    {
                    }
                  }
                }
                else
                if ( edi == 1 )
                {
                  draw_char( ebp_64, esi, ebp_80, ecx, ebp_84, ebp_108 );
                  if ( ebp_72 <= ( 0 + 1 + 1 ) - 1 )
                  {
                    break;
                  }
                  else
                  {
                  }
                }
                draw_char( ebp_64, ( esi + 1 ) - eax, ebp_80, ecx, 0, color );
              }
              while ( selected/*.1_1of4*/ );
              mi = &mi[0];
              menu = &menu[0];
              mi->flags = mi->flags;
              p = p;
            }
          }
          else
          {
            if ( text[0] )
            {
              do
              {
                if ( edi == 0 )
                {
                  if ( ebp_88 == ebp_28 - ebp_124 )
                  {
                    if ( ebp_72 <= ( 0 + 1 + 1 ) - 1 )
                      break;
                    else
                    {
                    }
                  }
                }
                else
                if ( edi == 1 )
                {
                  if ( eax == 2 )
                  {
                    if ( 0 + 1 < ebp_72 && box.x + 0 + 1 < term->width )
                    {
                      draw_char( ebp_64, eax - 1, ebp_80, edx, ebp_84, ebp_108 );
                      draw_char( ebp_64, ebp_104 + ebx, edi, -3, 0, ebp_108 );
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                  }
                  draw_char( &term[0], box.x + 0 + 1, box.y );
                  if ( ebp_72 <= ( 0 + 1 + 1 ) - 1 )
                  {
                    break;
                  }
                  else
                  {
                  }
                }
                if ( eax == 2 )
                {
                  if ( 0 + 1 < ebp_72 )
                  {
                    if ( ( ( box.x + 0 + 1 ) - 1 ) + 1 < *(int*)(term[0].next + 44) )
                    {
                      draw_char( ebp_64, ebp_156, ebp_80, edx, 0, ebp_76 );
                      draw_char( ebp_64, ebp_116 + ( ebx - esi ), ebp_80, -3, 0, ebp_76 );
                    }
                  }
                  else
                  {
                  }
                }
                else
                {
                }
                draw_char( &term[0] );
              }
              while ( *ebp_28 );
              p = p;
              menu = &menu[0];
              *(int*)(*(int*)(ebp_132 + 20)) = *(int*)(ebp_132 + 20);
            }
          }
        }
      }
      else
      {
        if ( box.width - 2 >= 1 && strlen( (char*)mi->text ) )
        {
          if ( !( ( *(char*)(term[0].next + 56) & 2 ) & 255 ) || strlen( (char*)mi->text ) >= 1 )
            draw_text( ebp_64, ebp_80 + 1, ebp_84, &edx, ebp_60 <= ebp_72 ? ebp_72 : ebp_60, 0, ebp_76 );
        }
      }
      *(int*)(*(int*)(edi + 20)) = mi->flags;
    }
    }
    while ( p + 1 < menu->size && p < menu->first + menu_height );
    redraw_from_window( menu->win );
    return;
  }
  }
  else
  {
    redraw_from_window( menu->win );
    return;
  }
}
enum input_line_code  menu_search_handler( struct input_line *line, int action_id )
{
  int eax;
  int ecx;
  int edx;
  struct menu *menu = &line->data[0];
  struct terminal *term = *(int*)(*(int*)(line->data) + 20);
  unsigned char *buffer = &line->buffer[0];
  struct window *win;
  int pos = line->data[3];
  int direction;
  switch ( action_id )
  {
  case 14:
    win = &term->windows.next[0];
    term->windows.next[0][1] = term->windows.prev;
    *(int*)(term->windows.prev) = term->windows.next[0];
    if ( menu->selected >= 0 && menu->selected < menu->size )
    {
      select_menu_item( term, &menu->items[ menu->selected ], menu->data );
    }
    win->prev = &term->windows.next[0];
    win = &term->windows.next[0];
    term->windows.next = (void*)win[0].next;
    win->prev = &win[0];
    return INPUT_LINE_CANCEL;
    break;
  case 25:
    pos--;
    direction = -1;
    break;
  default:
    direction = 1;
    break;
  case 22:
    pos++;
    break;
  case 26:
    return INPUT_LINE_PROCEED;
    break;
  }
  if ( line->buffer[0] )
  {
    pos = __MOD(menu->selected,menu->size);
    do
    {
      if ( menu->items[ pos ] && menu->items[ pos ] && !(_Bool)( ( *(int*)(menu->items[ pos ].text + 20) >> 7 ) & 1 ) )
      {
        if ( ( ( menu->items[ pos ].flags & 64 ) & 255 ) == 0 )
        {
          if ( term && current_charset != get_terminal_codepage( term ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
            current_charset = get_terminal_codepage( term );
          }
        }
        if ( eax )
        {
          if ( eax )
          {
            memmove( ebp_44, ebp_44 + 1, eax );
          }
          mem_free( &edi );
          if ( ebp_44 )
          {
            set_menu_selection( &menu[0], pos );
            display_menu( term, &menu[0] );
            break;
          }
        }
      }
      pos += direction;
      if ( menu->size == pos + direction )
      {
        pos = 0;
        if ( __MOD(menu->selected,menu->size) )
          continue;
        else
          break;
      }
      else
      {
        struct menu_item *item;
        if ( pos < 0 )
          pos = 1 - 1;
      }
    }
    while ( pos != __MOD(menu->selected,menu->size) );
    return INPUT_LINE_CANCEL;
  }
}
void menu_handler( struct window *win, struct term_event *ev )
{
  int eax;
  int ecx;
  int edx;
  struct menu *menu = &win->data[0];
  *(int*)(win->data) = win;
  switch ( ev->ev )
  {
  case 2:
    if ( ( ev->info.mouse.button & 7 ) == 3 )
    {
    }
    else
    if ( ( ev->info.mouse.button & 7 ) == 4 )
    {
    }
    else
    {
      if ( menu->box.x <= ev->info.mouse.x )
      {
        if ( menu->box.y <= ev->info.mouse.y )
        {
          if ( ev->info.mouse.x < menu->box.x + menu->box.width )
          {
            if ( menu->box.height + menu->box.y <= ev->info.mouse.y )
            {
              delete_window_ev( win, &ev[0] );
              return;
            }
            else
            {
              if ( ( ev->info.mouse.y + menu->first ) - 1 - menu->box.y >= 0 )
              {
                if ( ( ev->info.mouse.y + menu->first ) - 1 - menu->box.y < menu->size )
                {
                  if ( menu->items[ ( ev->info.mouse.y + menu->first ) - 1 - menu->box.y ].flags >= 0 )
                  {
                    set_menu_selection( menu );
                    display_menu( win->term, menu );
                    if ( menu->selected >= 0 )
                    {
                      if ( menu->selected < menu->size )
                      {
                        select_menu_item(  );
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
              else
              {
                return;
              }
            }
          }
        }
      }
    }
    scroll_menu( menu );
    display_menu( win->term, menu );
    return;
    break;
  case 1:
    switch ( kbd_action( KEYMAP_MENU, &ev[0], 0 ) )
    {
    case 13:
      *(int*)(( ebx + 1 ) - ecx) = ( ebx + 1 ) - ecx;
      if ( ( ebx + 1 ) - ecx >= 0 )
      {
      }
      scroll_menu( menu );
      break;
    case 12:
      if ( ( ( (unsigned char)( ( ( ( menu->size - 1 <= menu->selected ? menu->selected : menu->size - 1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : menu->size - 1 <= menu->selected ? menu->selected : menu->size - 1 ) + 1 + 1 ) - ( (unsigned char)( ( ( ( menu->size - 1 <= menu->selected ? menu->selected : menu->size - 1 ) >> 31 ) & 1 ) ^ 1 ) ? 0 : menu->size - 1 <= menu->selected ? menu->selected : menu->size - 1 ) >= 0 )
      {
      }
      break;
    case 17:
      _( "Search menu/", &menu->last );
      if ( !( ( *(int*)(get_tab_by_number( &menu->last, menu->last ) + 16) == 0 ) & 255 ) && menu->size >= 1 )
        input_field_line( *(int*)(get_tab_by_number( &menu->last, menu->last ) + 16), _( "Search menu/", &menu->last ), (void*)menu, 0, &menu_search_handler );
      break;
    case 6:
    case 18:
      if ( menu->selected >= 0 && menu->selected < menu->size )
      {
        select_menu_item( win->term, menu->items + ( menu->selected << 5 ), menu->data );
      }
      return;
      break;
    case 9:
    case 16:
      if ( win->term->windows.next != win[0].next && mainmenu_handler == win->handler )
      {
        delete_window_ev( win, &ev[0] );
        if ( win->data[3] >= 0 && win->data[3] < win->data[2] )
        {
          select_menu_item(  );
        }
        return;
      }
      else
      {
        if ( kbd_action( KEYMAP_MENU, &ev[0], 0 ) == 16 )
          continue;
        else
        {
          &win = win;
          delete_window( win );
          return;
        }
      }
      break;
    case 20:
      scroll_menu( menu, -1, 1 );
      break;
    case 4:
      scroll_menu( menu, 1, 1 );
      break;
    case 8:
      scroll_menu( menu, 0 - menu->selected, 0 );
      break;
    case 5:
      scroll_menu( menu, menu->size - 1 - menu->selected, 0 );
      break;
    case 2:
      if ( win->term->windows.next != win[0].next && mainmenu_handler == win->handler )
      {
        delete_window_ev( win, &ev[0] );
        return;
      }
      else
      {
        delete_window_ev( win, 0 );
        return;
      }
      break;
    default:
      if ( mouse/*union*/ev->info.mouse/*union*/ <= 11 || ev->info.mouse.y == 4 )
      {
        delete_window_ev( win, &ev[0] );
        return;
      }
      else
      {
        if ( ev->info.mouse.x > 32 && ev->info.mouse.y == 0 )
        {
          if ( check_hotkeys( menu, ev->info.mouse.x, win->term ) == 0 )
          {
            if ( check_not_so_hot_keys( menu, ev->info.mouse.x, win->term ) )
            {
              scroll_menu( menu, 0, 1 );
              display_menu( win->term, menu );
              return;
            }
          }
          else
          {
            scroll_menu( menu, 0, 1 );
            display_menu( win->term, menu );
          }
        }
      }
      break;
    }
    display_menu( win->term, menu );
    return;
    break;
  case 0:
  case 4:
    get_parent_ptr( win, &menu->parent_x, &menu->parent_y );
  case 3:
    if ( menu->items[0].text )
    {
      do
      {
        if ( menu->items[2].text[0] )
        {
          if ( ( ( *(char*)(menu->items + 32 + 20) & 64 ) & 255 ) == 0 )
          {
            if ( current_charset != get_terminal_codepage( win->term ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( win->term ) ) );
              current_charset = get_terminal_codepage( win->term );
              *ebp_60 = win->term->width - 2;
            }
            if ( *(char*)(gettext( &ev[2].ev )) == 0 )
            {
            }
          }
        }
        else
        {
        }
      }
      while ( menu->items[2].text );
    }
    menu->box.x = menu->parent_x < 0 ? menu->parent_x : 0;
    menu->box.y = (unsigned char)( ( ( menu->parent_y >> 31 ) & 1 ) ^ 1 ) ? 0 : menu->parent_y;
    menu->box.width = eax;
    menu->box.height = 0 ? 0 : ( win->term->height - 2 <= menu->size ? menu->size : win->term->height - 2 ) + 2;
    if ( ebp_76 - esi < ( menu->parent_x < 0 ? menu->parent_x : 0 ) )
      menu->box.x = ecx;
    if ( win->term->height - 2 - ( win->term->height - 2 <= menu->size ? menu->size : win->term->height - 2 ) < ( (unsigned char)( ( ( menu->parent_y >> 31 ) & 1 ) ^ 1 ) ? 0 : menu->parent_y ) )
      menu->box.y = win->term->height - 2 - ( win->term->height - 2 <= menu->size ? menu->size : win->term->height - 2 );
    scroll_menu( menu, 0, 1 );
    display_menu( win->term, menu );
    return;
    break;
  case 5:
    free_menu_items( menu->items );
    break;
  default:
    return;
    break;
  }
  return;
}
void do_mainmenu( struct terminal *term, struct menu_item *items, void *data, int sel )
{
  int eax;
  int ecx;
  int edx;
  int init = 0;
  struct window *win;
  if ( term->main_menu == 0 )
  {
    term->main_menu = (struct menu*)mem_calloc( 1, 60 );
    if ( term->main_menu )
      init = 1;
    else
    {
      return;
    }
  }
  term->main_menu->selected = sel != -1 ? 0 : sel;
  term->main_menu->items = ebp_32;
  term->main_menu->data = data;
  if ( ( term->main_menu + 4 ) && items )
  {
    do
    {
      items++;
    }
    while ( items->text );
  }
  else
  {
  }
  term->main_menu->size = 0 + 1;
  term->main_menu->hotkeys = 1;
  clear_hotkeys_cache( term->main_menu );
  init_hotkeys( &term[0], term->main_menu );
  if ( init )
  {
    add_window( &term[0], &mainmenu_handler, (void*)term->main_menu );
    esi = term->main_menu->win;
    if ( assert_failed == 0 )
    {
      assert_failed = term->main_menu->win == 0;
      if ( !(_Bool)( term->main_menu->win != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/menu.c";
        errline = 1044;
        elinks_internal( "assertion win failed!" );
        esi = term->main_menu;
      }
      else
        esi = term->main_menu->win;
    }
    term->main_menu->selected = -1;
    term->main_menu->win->prev = &term->main_menu->items->text[0];
    term->main_menu->items->text = (unsigned char*)term->main_menu->win;
    term->main_menu->win = *(int*)(term->windows.prev);
    term->main_menu->items = &term->windows.prev[0];
    *(int*)(term->windows.prev) = term->main_menu;
    term->main_menu->items = &term->main_menu->win->next;
  }
  else
  {
    win = &term->windows.next[0];
    if ( term->windows.next != term->windows.next )
    {
      if ( term->main_menu != win->data )
      {
        *ebp_28 = term->windows.next;
        do
        {
          win = &win;
          if ( win->next == term->windows.next )
            goto B13;
          else
        }
        while ( win->data != term->main_menu );
      }
      win->prev = win->prev;
      &win->prev = &win;
      win = &term->windows.next[0];
      win->prev = &term->windows.next[0];
      term->windows.next = (void*)win[0].next;
      win->prev = &win[0];
      display_mainmenu( &term[0], term->main_menu );
    }
  }
B13:  if ( sel != -1 && term->main_menu->selected >= 0 && term->main_menu->selected < term->main_menu->size )
  {
  }
  return;
}
void display_mainmenu( struct terminal *term, struct menu *menu )
{
  int ecx;
  int ebp_96;
  struct color_pair *normal_color = get_bfu_color( &term[0], "menu.normal" );
  struct color_pair *selected_color = get_bfu_color( &term[0], "menu.selected" );
  int p;
  int i;
  struct box box;
  if ( menu->selected < menu->first )
  {
    int num_items_offscreen;
    num_items_offscreen -= menu->first;
    menu->first += num_items_offscreen - menu->first;
    menu->last += num_items_offscreen - menu->first;
  }
  else
  if ( menu->last < menu->selected )
  {
    int num_items_offscreen;
    menu->first -= menu->last - menu->selected;
    menu->last -= menu->last - menu->selected;
    if ( menu->last - ( menu->last - menu->selected ) < 1 )
    {
      menu->last = menu->size - 1;
      if ( menu->size - 1 < 0 )
      {
        menu->last = 0;
        if ( edx < 0 )
          menu->first = 0;
          box.x = 0;
          box.y = 0;
          box.height = 1;
          box.width = (unsigned char)( ( ( term->width >> 31 ) & 1 ) ^ 1 ) ? 0 : term->width;
          draw_box( &term[0], &box, 32, 0, normal_color );
          i = 0;
          if ( menu->first )
          {
            box.width = 2;
            draw_box( &term[0], &box, 60, 0, normal_color );
            i = menu->first;
          }
          if ( i < menu->size )
          {
            ebp_96 = i << 5;
          {
            while ( mi = ebp_96 + menu->items, text = *(int*)(ebp_96 + *(int*)(menu[0].win + 4)), l = *(int*)(ebp_96 + *(int*)(menu[0].win + 4) + 28), selected = i == *(int*)(menu[0].win + 12), ( ( mi->flags & 64 ) & 255 ) || ebp_64 == 0 || *ebp_64 == 0 )
            {
              textlen = eax - ( l != 0 );
              screencnt = eax - ( l != 0 );
              if ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
              {
              }
              color = normal_color;
              if ( selected )
              {
                box.x = 2;
                if ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
                  box.width = screencnt + 4;
                else
                  box.width = textlen + 4;
                draw_box( &term[0], &box, 32, 0, selected_color );
                set_cursor( &term[0], box.x, 0, 1 );
                menu->box.width = box.x;
                menu->box.height = 1;
                color = selected_color;
              }
              if ( l == 0 )
              {
                if ( textlen >= 1 )
                {
                  if ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
                  {
                    if ( utf8_cells2bytes( ebp_64, textlen, 0 ) >= 1 )
                    {
                      if ( textlen <= utf8_cells2bytes( ebp_64, textlen, 0 ) )
                      {
                      }
                      else
                      {
                        draw_text( &term[0], textlen + 1 + 1, 0, ebp_64, textlen, 0 );
                        p = textlen + 1 + ebp_92;
                        if ( textlen + 1 + ebp_92 < term->width - 2 )
                        {
                          i++;
                          ebp_96 += 32;
                          if ( menu->size <= i )
                            goto B19;
                          else
                          {
                          }
                        }
                        else
                        {
                        }
                      }
                    }
                  }
                  draw_text( &term[0], textlen + 1 + 1, 0, ebp_64, textlen, 0 );
                  p = textlen + 1 + ebp_92;
                }
              }
              else
              {
                if ( textlen >= 1 )
                {
                  if ( ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 ) == 0 )
                  {
                    if ( text[0] )
                    {
                      l = term[0].next;
                      selected = l - 1;
                      do
                      {
                        if ( ebx == 0 )
                        {
                          if ( selected == 0 + 1 )
                          {
                            if ( ebp_60 <= ( edi + 1 ) - edx )
                              break;
                            else
                            {
                            }
                          }
                        }
                        else
                        if ( ebx == 1 )
                        {
                          draw_char( &l, esi, 0, eax, ebp_88, ebp_104 );
                          if ( textlen <= ( 0 + 1 + 1 ) - 1 )
                          {
                            break;
                          }
                          else
                          {
                          }
                        }
                        draw_char( &l, ( esi + 1 ) - edx, 0, eax, 0, color );
                      }
                      while ( text[1] );
                      term = &l;
                    }
                  }
                  else
                  {
                    if ( *ebp_64 )
                    {
                      do
                      {
                        if ( esi == 0 )
                        {
                          if ( ebp_72 == ebp_28 - ebp_64 )
                          {
                            if ( ebp_60 <= ( edi + 1 ) - ebx )
                              break;
                            else
                            {
                            }
                          }
                        }
                        else
                        if ( esi == 1 )
                        {
                          if ( eax == 2 )
                          {
                            if ( edi < ebp_60 && box.x + 0 + 1 < term->width )
                            {
                              draw_char( ebp_108, eax - 1, 0, edx, ebp_88, ebp_104 );
                              draw_char( &esi, ebp_128 + edi, 0, -3, 0, ebp_104 );
                            }
                            else
                            {
                              draw_char( ebp_108, ebp_128 + edi, 0, 32, 0, ebp_104 );
                              if ( ebp_60 <= edi - ebx )
                              {
                                break;
                              }
                              else
                              {
                              }
                            }
                          }
                          else
                            draw_char( ebp_108, ebp_128 + edi, 0, edx, ebp_88, ebp_104 );
                        }
                        if ( eax == 2 )
                        {
                          if ( 0 + 1 < textlen && ( ( box.x + 0 ) - 1 ) + 1 < term->width )
                          {
                            draw_char( &ecx, ebp_140, 0, edx, 0, ebp_84 );
                            draw_char( ebp_108, ebp_116 + ( edi - ebx ), 0, -3, 0, ebp_84 );
                          }
                          else
                          {
                          }
                        }
                        else
                        {
                        }
                        draw_char( ebp_108, eax - ebx, ebp_176, ebp_176, ebp_172, ebp_168 );
                      }
                      while ( *ebp_28 );
                      term = &term[0];
                    }
                  }
                }
              }
              p = textlen + 1 + screencnt;
              if ( textlen + 1 + screencnt < term->width - 2 )
              {
                i++;
                ebp_96 += 32;
              }
            }
            if ( current_charset != get_terminal_codepage( &term[0] ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
              current_charset = get_terminal_codepage( &term[0] );
            }
            textlen = eax - ( l != 0 );
            screencnt = eax - ( l != 0 );
          }
          }
B19:          menu->last = i - 1;
          if ( menu->first <= i - 1 )
          {
          }
          else
            menu->last = menu->first;
          if ( i - 1 < menu->size - 1 )
          {
            if ( ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 ) && schar->data == -3 )
              draw_char_data( &term[0], term->width - 3, 0, 32 );
            box.y = 0;
            box.width = 2;
            box.x = (unsigned char)( ( term->width - 2 < 0 ) ^ 1 ) ? 0 : term->width - 2;
            box.height = 1;
            draw_box( &term[0], &box, 62, 0, normal_color );
            redraw_from_window( menu->win );
            return;
          }
          else
          {
            redraw_from_window( menu->win );
            return;
          }
        else
        {
          if ( ecx < edx )
            menu->first = ecx;
        }
      }
      else
      {
        if ( menu->last + ( num_items_offscreen - menu->first ) <= menu->selected - 1 )
        {
        }
        else
          menu->last = ecx;
        if ( ( menu[0].win + ( num_items_offscreen - menu[0].win ) ) - ( menu->last - menu->selected ) < 0 )
          menu->first = 0;
        else
        {
        }
      }
    }
    else
      *(int*)(*(int*)(ebp_76 + 8)) = menu->size;
  }
  if ( menu->last < 1 )
  {
    menu->last = menu->size - 1;
  }
  else
    *(int*)(*(int*)(ebp_76 + 8)) = menu->size;
}
void mainmenu_handler( struct window *win, struct term_event *ev )
{
  int eax;
  int ecx;
  int edx;
  struct menu *menu = &win->data[0];
  *(int*)(win->data) = win;
  switch ( ev->ev )
  {
  case 2:
    if ( ( ev->info.mouse.button & 7 ) <= 2 )
    {
      if ( ev->info.mouse.y )
      {
        &win->term = win->term;
        menu->selected = -1;
        win->prev = win->prev;
        menu->items[0].text = (unsigned char*)menu->win;
        menu->win = &win->term->windows.prev[0];
        menu->items = &win->term->windows.prev[0];
        win->term->windows.prev[0] = menu->win;
        menu->items = &menu->win->next;
      }
      else
      {
        if ( ev->info.mouse.x > 1 && ev->info.mouse.x < win->term->width - 2 )
        {
          if ( menu->items[0].text )
          {
            do
            {
              if ( esi )
              {
                if ( ( ( *(char*)(menu->items + 32 + 20) & 64 ) & 255 ) == 0 )
                {
                  if ( win->term && current_charset != get_terminal_codepage( win->term ) )
                  {
                    bind_textdomain_codeset( "elinks", eax );
                    current_charset = ebp_40;
                  }
                }
                if ( *(int*)(ebp_28 + 4) < eax + edi + ( 4 - ( *(int*)(ebx + 28) != 0 ) ) )
                {
                  menu = &menu[0];
                  win = &win[0];
                  if ( menu->selected != ( ( menu[0].win - menu->items ) >> 5 ) )
                    win = &win[0];
                  else
                  {
                    if ( menu->selected >= 0 && menu->selected < menu->size )
                      edi = menu->selected;
                    else
                      break;
                  }
                }
              }
            }
            while ( menu->items[2].text );
            win = &win[0];
            menu = &menu[0];
          }
        }
        scroll_menu( &menu[0] );
        display_mainmenu( win->term, &menu[0] );
      }
    }
    else
    {
      return;
    }
    break;
  case 1:
    ebp_16 = 0;
    ev = &ev[0];
    win = 2;
    ebp_4 = mainmenu_handler+a8;
    switch ( kbd_action(  ) )
    {
    case 2:
      &win->term = win->term;
      menu->selected = -1;
      menu->items = &menu->items;
      menu->items[0].text = (unsigned char*)menu->win;
      menu->win = &win->term->windows.prev[0];
      menu->items = &win->term->windows.prev[0];
      win->term->windows.prev[0] = menu->win;
      menu->items = &menu->win->next;
      break;
    case 4:
    case 6:
    case 12:
    case 13:
    case 18:
    case 20:
      if ( menu->selected >= 0 && menu->selected < menu->size )
      {
      }
      else
      {
        return;
      }
      break;
    case 8:
      ebp_4 = mainmenu_handler+2de;
      scroll_menu( &menu[0], 0 - menu->selected, 0 );
      break;
    case 5:
      ebp_4 = mainmenu_handler+2fa;
      scroll_menu( &menu[0], menu->size - 1 - menu->selected, 0 );
      break;
    case 11:
    case 14:
      ebp_4 = mainmenu_handler+72;
      scroll_menu( &menu[0] );
      win = &win[0];
      break;
    case 9:
    case 16:
      ebp_4 = mainmenu_handler+72;
      scroll_menu( &menu[0] );
      win = &win[0];
      break;
    default:
      if ( ev->info.mouse.x <= 32 || ( ev->info.mouse.y != 4 && ev->info.mouse.y ) )
        continue;
      else
      {
        ev += 0;
        win = menu[0].win;
        ebp_16 = win->term;
        ebp_4 = mainmenu_handler+d4;
        if ( check_hotkeys(  ) == 0 )
          continue;
        else
        {
          ebp_4 = mainmenu_handler+e2;
          display_mainmenu( win->term, &menu[0] );
          win = &win[0];
        }
      }
      break;
    case 15:
      break;
    }
    ebp_4 = mainmenu_handler+72;
    scroll_menu( &menu[0] );
    win = &win[0];
    break;
  case 0:
  case 3:
  case 4:
    break;
  default:
    return;
    break;
  }
}
struct menu_item *new_menu( enum menu_item_flags  flags )
{
  int ecx;
  int edx;
  struct menu_item *mi = 0;
  if ( mem_realloc( 0, 512 ) )
  {
    mi = (struct menu_item*)mem_realloc( 0, 512 );
    if ( ( mem_realloc( 0, 512 ) & 1 ) & 255 )
      mi = 0;
    if ( &mi->text[1] & 2 )
      mi->text[1] = 0;
    memset( *(int*)(0), 0, ( edx >> 2 ) * 4 );
    if ( !1 )
      mi = 0;
    if ( edx & 1 )
      mi = 0;
    if ( mi )
      mi->flags = flags;
    else
    {
      return 0;
    }
  }
  return 0;
}
void add_to_menu( struct menu_item **mi, unsigned char *text, unsigned char *rtext, enum main_action  action_id, menu_func_T func, void *data, enum menu_item_flags  flags )
{
  int ecx;
  int edx;
  int n;
  struct menu_item *item = mi[0];
  if ( mi[0] )
  {
    if ( item->text )
    {
      n = 0;
      do
      {
        n++;
      }
      while ( mi[0][2].text );
      if ( ( ( n + 16 ) & -16 ) < ( ( n + 18 ) & -16 ) )
      {
        *ebp_28 = ( ( n + 18 ) & -16 ) << 5;
        if ( mem_realloc( (void*)item[0].text, ( ( n + 18 ) & -16 ) << 5 ) )
        {
          mi[0] = (struct menu_item*)mem_realloc( (void*)item[0].text, ( ( n + 18 ) & -16 ) << 5 );
          memset( mi[0] + ( ( ( n + 16 ) & -16 ) << 5 ), 0, ( ( ( n + 18 ) & -16 ) << 5 ) - ( ( ( n + 16 ) & -16 ) << 5 ) );
          item = mi[0];
        }
      }
    }
    else
      n = 0;
    if ( item[0].text )
    {
      item = item[0].text + ( item[0].text << 5 );
      item[ item[0].text ].menu_item = item[ item[0].text ];
      item[ item[0].text ].menu_item = item[ item[0].text ].rtext;
      item[ item[0].text ].menu_item = item[ item[0].text ].action_id;
      item[ item[0].text ].menu_item = item[ item[0].text ].func;
      item[ item[0].text ].menu_item = item[ item[0].text ].data;
      item[ item[0].text ].menu_item = item[ item[0].text ].flags;
      item[ item[0].text ].menu_item = item[ item[0].text ].hotkey_state;
      item[ item[0].text ].menu_item = item[ item[0].text ].hotkey_pos;
      item[ item[0].text ].text = text;
      item[ item[0].text ].rtext = rtext;
      item[ item[0].text ].action_id = action_id;
      item[ item[0].text ].func = func;
      item[ item[0].text ].data = data;
      item[ item[0].text ].flags |= flags;
      item[ item[0].text ].hotkey_state = HKS_SHOW;
      item[ n ].hotkey_pos = 0;
    }
  }
  return;
}
#if 0
#endif
