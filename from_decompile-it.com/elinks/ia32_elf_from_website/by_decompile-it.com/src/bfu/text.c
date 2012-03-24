#include "text.c.h"
struct widget_ops text_ops = { &display_text, 0, &mouse_text, &kbd_text, 0, 0 };
void add_dlg_text( struct dialog *dlg, unsigned char *text, enum format_align  align, int bottom_pad )
{
  dlg->number_of_widgets++;
  dlg->widgets[ dlg->number_of_widgets ].type = WIDGET_TEXT;
  dlg->widgets[ dlg->number_of_widgets ].text = text;
  dlg->widgets[ dlg->number_of_widgets ].info.checkbox.gnum/*.1_1of4*/ = ( dlg->widgets[ dlg->number_of_widgets ].info.checkbox.gnum/*.1_1of4*/ & -2 ) | ( bottom_pad != 0 );
  return;
}
void dlg_format_text_do( struct terminal *term, unsigned char *text, int x, int *y, int width, int *real_width, struct color_pair *color, enum format_align  align, int format_only )
{
  int eax;
  int edx;
  int line_width;
  if ( text[0] && ( text[0] & 255 ) )
  {
    do
    {
      if ( width >= 1 )
      {
        cells = 0;
        if ( text[0] != 10 )
        {
          do
          {
            if ( text[0] & 255 )
            {
              if ( ( (int)term->bits_at_56/*.1_1of4*/ >> 1 ) & 1 )
              {
                utf8_char2cells( &text[0], text + strlen( (char*)text ) );
                if ( text[0] == text[0] + utf8charlen( &text[0] ) || ( text[0] & 255 ) == 0 )
                  text[0] = text[0];
                else
                {
                  do
                  {
                    text[0] = text[1];
                  }
                  while ( text[1] != text[0] + utf8charlen( &text[0] ) && ( text[0] & 255 ) );
                  text[0] = text[0];
                }
                while ( text[0] == 10 || ( text[0] & 255 ) == 0 )
                {
                }
              }
              else
              {
                text[0] = text[1];
                if ( text[1] && text[1] != 10 )
                {
                }
                cells = text[0] - text;
              }
              if ( width < cells )
              {
                if ( text[0] == text )
                {
                  if ( ( (int)term->bits_at_56/*.1_1of4*/ >> 1 ) & 1 )
                  {
                    width = utf8_ptr2cells( text, text + utf8_cells2bytes( text, width, 0 ) );
                  }
                  else
                  {
                    text[0] = text[ width ];
                    text[0] = text[ width ];
                    while ( text[0] = text[ -1 ], text[0] != text )
                    {
                      if ( ( *(char*)(*(int*)(__ctype_b_loc(  )) + ( *(char*)(text[0] - 1) * 2 )) & 4 ) & 255 )
                      {
                      }
                      else
                      {
                        width--;
                        text[0] = text[0];
                      }
                    }
                    text[0] = text[ width ];
                    line_width = width;
                    if ( real_width && real_width[0] < cells )
                      real_width[0] = cells;
                    if ( format_only == 0 )
                    {
                      if ( assert_failed == 0 )
                      {
                        assert_failed = ( ( width < cells ) | ( ( shift < width ) ^ 1 ) ) & 1;
                        if ( ( ( width < width ) | ( ( shift < width ) ^ 1 ) ) & 1 )
                        {
                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/text.c";
                          errline = 256;
                          elinks_internal( "assertion cells &lt;= width && shift &lt; width failed!" );
                        }
                      }
                      draw_text( term, shift + x, y[0], text, line_width, 0, color );
                    }
                    text = &text[0];
                    y[0]++;
                    if ( text[0] )
                    {
                      text++;
                      if ( text[0] )
                      {
                        do
                        {
                        }
                        while ( text[0] );
                        break;
                      }
                      else
                        break;
                    }
                  }
                  if ( text == text + utf8_cells2bytes( text, width, 0 ) )
                    text[0] = text[ width ];
                    line_width = width;
                }
              }
              else
              {
              }
            }
            else
              break;
          }
          while ( text[0] != 10 );
        }
        line_width = *(int*)(__ctype_b_loc(  ));
        if ( text[0] - text >= 1 )
          text[0] = text + line_width;
      }
      text++;
      y[0]++;
    }
    while ( text[0] );
  }
  return;
}
void dlg_format_text( struct terminal *term, struct widget_data *widget_data, int x, int *y, int width, int *real_width, int max_height, int format_only )
{
  int eax;
  int ecx;
  int edx;
  int ebp_52;
  unsigned char *text = widget_data->cdata;
  unsigned char saved;
  unsigned char *saved_pos;
  int height;
  widget_data->box.x = x < 0 ? x : 0;
  widget_data->box.y = y[0] < 0 ? y[0] : 0;
  widget_data->box.width = (unsigned char)( ( ( widget_data->box.width >> 31 ) & 1 ) ^ 1 ) ? 0 : widget_data->box.width;
  widget_data->box.height = max_height - 3 < 0 ? max_height - 3 : 0;
  if ( max_height - 3 < 0 ? max_height - 3 : 0 )
  {
    if ( ( ( *(char*)(widget_data[0].widget + 24) & 2 ) & 255 ) && ( widget_data->info.field.history.next != width || ecx < *(int*)(widget_data + 28) ) )
    {
      unsigned char **lines;
      int visible;
      if ( width != ( (unsigned char)( ( ( widget_data->box.width >> 31 ) & 1 ) ^ 1 ) ? 0 : widget_data->box.width ) )
      {
        if ( widget_data->info.field.history.next != width )
        {
          widget_data->box.width = 0;
          if ( widget_data->cdata[0] == 0 )
            eax = &saved_pos[ -1 ];
          else
          {
            *(int*)(ebp_80) = ebp_80;
            eax = __ctype_b_loc(  );
            while ( ( ecx & 255 ) == 0 )
            {
              width = 1;
              ebp_52 = 1;
              *(int*)(ebp_80) = ebp_80;
              if ( width >= 1 )
              {
                text = 0;
                ebp_52 = 0;
                if ( ecx != 10 )
                {
                  do
                  {
                    if ( ecx & 255 )
                    {
                      if ( ( (int)term->bits_at_56/*.1_1of4*/ >> 1 ) & 1 )
                      {
                        if ( edi == ebx || ( eax & 255 ) == 0 )
                        {
                        }
                        else
                        do
                        {
                        }
                        while ( esi != ebx && ( eax & 255 ) );
                        text += &ecx;
                        if ( edx != 10 && ( edx & 255 ) )
                        {
                        }
                        if ( width < text )
                          goto B43;
                        else
                        {
                        }
                      }
                      else
                      {
                        if ( *(char*)(edi + 1) && eax != 10 )
                        {
                        }
                        text = ebx - ebp_48;
                        if ( width < text )
                          goto B43;
                        else
                        {
                        }
                      }
B43:                      if ( ebp_48 == edi )
                      {
                        if ( ( (int)term->bits_at_56/*.1_1of4*/ >> 1 ) & 1 )
                        {
                        }
                        else
                        {
                          ebp_52 = width;
                          while ( 1 )
                            ebp_52 = (unsigned char)( ebp_52 > 0 ) ? 1 : ebp_52;
                        }
                        ebp_52 = (unsigned char)( ebp_52 > 0 ) ? 1 : ebp_52;
                      }
                    }
                    else
                      break;
                  }
                  while ( *(char*)(0 & ( saved_pos[0] != 0 )) != 10 );
                }
                width = width - ebp_48 < 1 ? width - ebp_48 : 1;
                ebp_52 = (unsigned char)( ebp_52 > 0 ) ? 1 : ebp_52;
              }
              if ( widget_data->box.width < ebp_52 )
                widget_data->box.width = ebp_52;
              if ( ( ( 0 + 7 ) & -8 ) < ( ( 0 + 8 ) & -8 ) )
              {
                *ebp_76 = ebp_76;
                *ebp_80 = ebp_80;
                if ( eax )
                {
                  memset( eax + ( ebx << 2 ), 0, ecx - ( ebx << 2 ) );
                }
                else
                  break;
              }
              if ( widget_data->cdata == 0 )
              {
              }
              else
              {
                *(int*)(( eax + ( esi << 2 ) ) - 4) = &widget_data->cdata[4];
                if ( *(char*)(ebp_48 + width) == 0 )
                  *ebp_28 = ebp_28;
                else
                {
                }
              }
            }
            *ebp_28 = ebp_28;
          }
          widget_data->cdata = &edx;
          widget_data->info.field.cpos = esi;
          widget_data->info.field.history.next = &width;
        }
        if ( eax )
          goto B8;
      }
B8:      visible = widget_data->info.field.vpos;
      lines[0] = widget_data->cdata;
      widget_data->info.field.cpos = widget_data->info.field.cpos;
      if ( widget_data->info.field.vpos < 0 )
        widget_data->info.field.vpos = 0;
        widget_data->info.field.vpos = 0;
        visible = 0;
      else
      {
        visible = widget_data->info.field.cpos - ( max_height - 3 < 0 ? max_height - 3 : 0 ) < ( max_height - 3 < 0 ? max_height - 3 : 0 ) ? widget_data->info.field.cpos - ( max_height - 3 < 0 ? max_height - 3 : 0 ) : max_height - 3 < 0 ? max_height - 3 : 0;
        if ( widget_data->info.field.vpos <= ( widget_data->info.field.cpos - ( max_height - 3 < 0 ? max_height - 3 : 0 ) < ( max_height - 3 < 0 ? max_height - 3 : 0 ) ? widget_data->info.field.cpos - ( max_height - 3 < 0 ? max_height - 3 : 0 ) : max_height - 3 < 0 ? max_height - 3 : 0 ) )
        {
        }
        else
        {
        }
      }
      saved = 0;
      text = lines[ widget_data->info.field.vpos ];
      saved_pos[0] = 0;
      if ( ( max_height - 3 < 0 ? max_height - 3 : 0 ) < widget_data->info.field.cpos - visible )
      {
        int lines_pos;
        lines_pos += max_height - 3 < 0 ? max_height - 3 : 0;
        saved_pos[0] = lines[ ( max_height - 3 < 0 ? max_height - 3 : 0 ) + lines_pos ];
        saved_pos[0] = 0;
      }
      if ( real_width && real_width[0] < widget_data->box.width )
        real_width[0] = widget_data->box.width;
      else
      {
      }
      widget_data->widget = widget_data->widget;
      widget_data->widget = widget_data[0].widget;
    }
    else
    {
      saved = 0;
      saved_pos[0] = 0;
    }
    dlg_format_text_do( term, text, x, y, width, real_width, get_bfu_color( term, "dialog.text" ), widget_data->box.height, format_only );
    if ( ( widget_data->info.field.vpos & 1 ) & 255 )
      y[0]--;
    if ( 0 & 255 )
    {
      saved_pos[0] = saved;
    }
  }
  return;
}
widget_handler_status_T display_text( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  int ecx;
  int edx;
  struct window *win = dlg_data[0].win;
  struct box box;
  int current, step;
  int lines = widget_data->info.field.cpos;
  box.width = 1;
  box.x = ( dlg_data->box.width + dlg_data->box.x ) - 4 < 0 ? ( dlg_data->box.width + dlg_data->box.x ) - 4 : 0;
  box.y = widget_data->box.y < 0 ? widget_data->box.y : 0;
  box.height = (unsigned char)( ( ( widget_data->box.height >> 31 ) & 1 ) ^ 1 ) ? 0 : widget_data->box.height;
  if ( ( ( widget_data->info.field.vpos & 2 ) & 255 ) && widget_data->box.height >= 1 && lines >= 1 && widget_data->box.height < lines && ( (unsigned char)( ( ( widget_data->box.height >> 31 ) & 1 ) ^ 1 ) ? 0 : widget_data->box.height ) )
  {
    draw_box( win->term, &box, 32, 0, get_bfu_color( win->term, "dialog.scrollbar" ) );
    current = widget_data->info.field.vpos;
    step = 0;
    step = ( (/*HI*/int)( ( ( ( ( box.height + 1 ) * 100 ) / lines ) * ( current + 1 ) ) * 0x51eb851f ) >> 5 ) - ( ( ( ( ( box.height + 1 ) * 100 ) / lines ) * ( current + 1 ) ) >> 31 );
    box.height = ( (/*HI*/int)( ( ( ( ( box.height + 1 ) * 100 ) / lines ) * ( box.height + 1 ) ) * 0x51eb851f ) >> 5 ) - ( ( box.height + 1 ) >> 31 );
    if ( ( (/*HI*/int)( ( ( ( ( box.height + 1 ) * 100 ) / lines ) * ( box.height + 1 ) ) * 0x51eb851f ) >> 5 ) - ( ( box.height + 1 ) >> 31 ) < 1 )
      box.height = 1;
    else
    if ( ( (unsigned char)( ( widget_data->box.height - step < 1 ) ^ 1 ) ? 1 : widget_data->box.height - step ) < ( (/*HI*/int)( ( ( ( ( box.height + 1 ) * 100 ) / lines ) * ( box.height + 1 ) ) * 0x51eb851f ) >> 5 ) - ( ( box.height + 1 ) >> 31 ) )
      box.height = (unsigned char)( ( widget_data->box.height - step < 1 ) ^ 1 ) ? 1 : widget_data->box.height - step;
    step = current == lines - widget_data->box.height ? step : widget_data->box.height - box.height;
    box.y += current == lines - widget_data->box.height ? step : widget_data->box.height - box.height;
    widget_data->info.field.history.prev = &box.height;
    widget_data->info.field.cur_hist = &box.y;
    draw_box( win->term, &box, 32, 0, get_bfu_color( win->term, "dialog.scrollbar-selected" ) );
    set_cursor( win->term, widget_data->box.x, widget_data->box.y, 1 );
    win->x = widget_data->box.x;
    win->y = widget_data->box.y;
    win = &win[0];
  }
  return 0;
}
void format_and_display_text( struct widget_data *widget_data, struct dialog_data *dlg_data, int current )
{
  struct terminal *term = &dlg_data->box.width;
  int y = widget_data->box.y;
  int height = ( (/*HI*/int)( ( dlg_data->box.width * 9 ) * 0x66666667 ) >> 2 ) - ( ( term->height * 9 ) >> 31 ) - 4;
  int lines;
  height = 1;
  lines = widget_data->info.field.cpos;
  if ( assert_failed == 0 )
  {
    assert_failed = lines >> 31;
    if ( lines >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/text.c";
      errline = 414;
      elinks_internal( "assertion lines &gt;= 0 failed!" );
      if ( assert_failed == 0 )
      {
        assert_failed = widget_data->box.height >> 31;
        if ( widget_data->box.height >> 31 )
          goto B7;
      }
    }
    else
    {
      assert_failed = widget_data->box.height >> 31;
      if ( widget_data->box.height >> 31 )
        goto B7;
    }
B7:    errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/text.c";
    errline = 415;
    elinks_internal( "assertion widget_data-&gt;box.height &gt;= 0 failed!" );
  }
  current = 0;
  if ( widget_data->info.field.vpos != current )
  {
    draw_box( &term[0], &widget_data->box, 32, 0, get_bfu_color( &term[0], "dialog.generic" ) );
    dlg_format_text( &term[0], &widget_data[0], widget_data->box.x, &y, widget_data->box.width, 0, height, 0 );
    display_text( &dlg_data[0], &widget_data[0] );
    redraw_from_window( dlg_data->win );
  }
  return;
}
widget_handler_status_T kbd_text( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  int eax;
  int ecx;
  int edx;
  int current = widget_data->info.field.vpos;
  switch ( eax )
  {
  case 4:
    current = 0;
    break;
  default:
    return 0;
    break;
  case 16:
    current = current - 1;
    dlg_data = &dlg_data[0];
    break;
  case 0:
    current = current + 1;
    break;
  case 9:
    current = current - widget_data->box.height;
    break;
  case 8:
    current = widget_data->box.height + current;
    break;
  case 1:
    current = widget_data->info.field.cpos;
    dlg_data = &dlg_data[0];
    break;
  }
  format_and_display_text( &widget_data[0], &dlg_data[0] );
  return 0;
}
widget_handler_status_T mouse_text( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  int ecx;
  int current = widget_data->info.field.vpos;
  int scroller_y = widget_data->info.field.cur_hist;
  int scroller_height = widget_data->info.field.history.prev;
  int scroller_middle;
  struct term_event *ev = dlg_data->term_event;
  if ( ( ( dlg_data->box.width + dlg_data->box.x ) - 6 < 0 ? ( dlg_data->box.width + dlg_data->box.x ) - 6 : 0 ) <= ev->info.mouse.x && ( widget_data->box.y < 0 ? widget_data->box.y : 0 ) <= ev->info.mouse.y && ev->info.mouse.x < ( ( dlg_data->box.width + dlg_data->box.x ) - 6 < 0 ? ( dlg_data->box.width + dlg_data->box.x ) - 6 : 0 ) + 5 && ev->info.mouse.y < ( widget_data->box.y < 0 ? widget_data->box.y : 0 ) + ( (unsigned char)( ( ( widget_data->box.height >> 31 ) & 1 ) ^ 1 ) ? 0 : widget_data->box.height ) )
  {
    scroller_middle = scroller_y + ( ( scroller_height / 2 ) - widget_data->info.text.scroller_last_dir );
    if ( ( ev->info.mouse.button & 7 ) != 2 )
    {
      if ( ( *(int*)(ecx + 12) & 7 ) < 2 )
      {
        if ( ( ev->info.mouse.button & 7 ) == 3 )
          current--;
        else
        if ( ( ev->info.mouse.button & 7 ) == 4 )
          current = current + 1;
      }
      else
      if ( ( ev->info.mouse.button & 7 ) == 0 )
        current = scroller_middle < ev->info.mouse.y ? current - 1 : current + 1;
    }
    else
      current = scroller_middle < ev->info.mouse.y ? current - 5 : current + 5;
    widget_data->info.text.scroller_last_dir = ( ( current < current ) * 2 ) - 1;
    format_and_display_text( ( dlg_data->box.width + dlg_data->box.x ) - 6 < 0 ? ( dlg_data->box.width + dlg_data->box.x ) - 6 : 0, &widget_data->info.text.scroller_last_dir, widget_data->box.height );
    return 0;
  }
  return 0;
}
#if 0
#endif
