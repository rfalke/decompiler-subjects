#include "event.c.h"
void term_send_event( struct terminal *term, struct term_event *ev )
{
  int eax;
  int edx;
  struct window *win;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( ev[0].ev == 0 ) | ( term[0].next == 0 ) ) & 1;
    if ( ( ( ev[0].ev == 0 ) | ( term[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/event.c";
      errline = 68;
      elinks_internal( "assertion ev && term failed!" );
      if ( assert_failed == 0 )
      {
        if ( ev->ev > 5 )
        {
          return;
        }
      }
      else
      {
        assert_failed = 0;
        return;
      }
    }
    else
    if ( ev->ev > 5 )
    {
      return;
    }
    if ( ( ( (unsigned char)( 1 << ev->ev ) & 38 ) & 255 ) == 0 )
    {
      if ( ( ( ( 1 << ev->ev ) & 17 ) & 255 ) == 0 )
      {
        if ( ( ( ( 1 << ev->ev ) & 8 ) & 255 ) == 0 )
        {
          return;
        }
      }
      else
      {
        int width;
        int height = ev->info.mouse.y;
        width = ev->info.mouse.x;
        if ( ev->info.mouse.y < 0 || width < 0 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/event.c";
          errline = 79;
          elinks_error( gettext( "Bad terminal size: %d, %d" ) );
          return;
        }
        else
        {
          resize_screen( &term[0], width, height );
          erase_screen( &term[0] );
        }
      }
      if ( term->screen[0].image )
      {
        clear_terminal( &term[0] );
        term->redrawing = TREDRAW_DELAYED;
        if ( ev->ev == 4 )
        {
          win = &term->windows.prev[0];
          if ( term->windows.prev != term->windows.next )
          {
            term = &term[0];
            do
            {
              ev[0] = win->handler(  );
            }
            while ( term->windows.next == win->prev );
          }
        }
        else
        {
          win = &term->windows.prev[0];
          if ( term->windows.prev != term->windows.next )
          {
            do
            {
              if ( win->type == WINDOW_NORMAL || win[0].next == get_tab_by_number( win->term, win->term->current_tab ) )
              {
                ev[0] = win->handler(  );
                win = win->prev;
                if ( term->windows.next != win->prev )
                  continue;
                else
                  break;
              }
              else
              {
                win = win->prev;
              }
            }
            while ( term->windows.next != win->prev );
          }
        }
        term->redrawing = TREDRAW_READY;
        return;
      }
      else
      {
        return;
      }
    }
    else
    {
      assert_failed = term->windows.next == term->windows.next;
      if ( !(_Bool)( term->windows.next != term->windows.next ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/event.c";
        errline = 121;
        elinks_internal( "assertion !list_empty(term-&gt;windows) failed!" );
        if ( assert_failed )
        {
          assert_failed = 0;
          return;
        }
      }
      win = &term->windows.next[0];
      if ( win->type == WINDOW_TAB )
      {
        get_tab_by_number( &term[0], term->current_tab );
        if ( assert_failed == 0 )
        {
          assert_failed = win[0].next == 0;
          if ( !(_Bool)( win[0].next != 0 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/event.c";
            errline = 129;
            elinks_internal( "assertion win != NULL failed: No tab to send the event to!" );
            if ( assert_failed )
            {
              assert_failed = 0;
              return;
            }
          }
        }
        else
        {
          assert_failed = 0;
          return;
        }
      }
      ev = &ev[0];
      term = &win[0].next[0];
      ;
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void term_send_ucs( struct terminal *term, unicode_val_T u, term_event_modifier_T modifier )
{
  ev.info.mouse.x = u;
  struct term_event ev;
  ev.info.mouse.button = 0;
  ev.ev = EVENT_KBD;
  ev.info.mouse.y = modifier;
  term_send_event( &term[0], &ev );
  return;
}
void in_term( struct terminal *term )
{
  int eax;
  int ecx;
  int edx;
  struct terminal_interlink *interlink = term->interlink;
  ssize_t r;
  unsigned char *iq;
  if ( term->interlink )
  {
    if ( interlink->qfreespace == 0 )
      interlink->qlen = interlink->qlen;
    else
    if ( interlink->qfreespace - interlink->qlen <= 256 )
    {
      iq = &interlink->input_queue[0];
      do
      {
        if ( r == -1 )
        {
        }
        else
        if ( r >= 1 )
        {
          interlink->qfreespace -= r;
          interlink = interlink->qlen + r;
          if ( interlink->qlen + r > 15 )
          {
            do
            {
              switch ( iq[0] )
              {
              case 3:
              case 4:
                term_send_event( term, ebp_88 );
                if ( 0 )
                {
                  *(int*)(*(int*)(esi + 308) + 320) = *(int*)(0 + 308) + 320;
                  if ( *(int*)(0 + 308) + 320 == 0 )
                  {
                    break;
                  }
                  else
                  {
                    interlink->qfreespace += iq[0] + 320;
                    interlink = interlink->qlen - ( iq[0] + 320 );
                    if ( interlink->qlen - 16 )
                    {
                      memmove( iq, interlink->utf8.min + 24, interlink->qlen - ( iq[0] + 320 ) );
                    }
                    else
                      break;
                  }
                }
                break;
              case 0:
                if ( term->interlink->qlen > 319 && iq[308] + 320 <= term->interlink->qlen )
                {
                  iq[47] = 0;
                  if ( iq[16] )
                  {
                    do
                    {
                      if ( iq[17] - 97 < 25 && iq[17] - 65 < 25 && iq[17] - 48 < 9 && iq[17] != '_' && iq[17] != '-' )
                      {
                        if ( 0 != 87 )
                        {
                          if ( current_charset != get_terminal_codepage( term ) )
                          {
                            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
                            current_charset = get_terminal_codepage( term );
                          }
                          gettext( "Warning: terminal name contains illicit chars." );
                        }
                        usrerror( gettext( "Warning: terminal name contains illicit chars." ) );
                        if ( ( term + 72 ) & 1 )
                          term->cwd[0] = iq[48];
                        if ( ebp_128 & 2 )
                        {
                          edx -= 2;
                          term->cwd[0] = iq[48];
                        }
                        memcpy( *(int*)(0), *(int*)(0), ( edx >> 2 ) * 4 );
                        if ( !1 )
                          term->cwd[0] = iq[48];
                        if ( edx & 1 )
                          term->cwd[2] = iq[48];
                        term->cwd[255] = 0;
                        term->environment = iq[304];
                        term_send_event( term, ebp_88 );
                        if ( decode_session_info( term, &iq[0] ) == 0 )
                        {
                          destroy_terminal( term );
                          if ( program.terminate )
                          {
                            if ( 0 != 70 )
                            {
                              if ( current_charset != get_terminal_codepage( term ) )
                              {
                                bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
                                current_charset = get_terminal_codepage( term );
                              }
                              gettext( "Failed to create session." );
                            }
                            usrerror( gettext( "Failed to create session." ) );
                            program.retval = RET_FATAL;
                            if ( 0 ^ 0 )
                            {
                              __stack_chk_fail(  );
                            }
                            break;
                          }
                        }
                        else
                          iq[0] = 3;
                          term_send_event( term, ebp_88 );
                      }
                      else
                    }
                    while ( iq[1] );
                  }
                  __snprintf_chk( ebp_70, 42, 1, 42, "terminal.%s", &iq[16] );
                  term->spec->object.object--;
                  term->spec = get_opt_rec( config_options, ebp_70 );
                  term->bits_at_56/*.1_1of4*/ = ( *(char*)(term + 56) & -3 ) | ( ( is_cp_utf8( get_terminal_codepage( term ) ) & 1 ) * 2 );
                  *(int*)(get_opt_rec( config_options, ebp_70 ) + 8)++;
                  if ( ( ( (unsigned char)( ( *(char*)(term + 56) & -3 ) | ( ( is_cp_utf8( get_terminal_codepage( term ) ) & 1 ) * 2 ) ) & 2 ) & 255 ) == 0 )
                  {
                    term->bits_at_56/*.1_1of4*/ = ( (int)term->bits_at_56/*.1_1of4*/ & -5 ) | ( 1 << 2 );
                  }
                  term->bits_at_56/*.1_1of4*/ = ( (int)term->bits_at_56/*.1_1of4*/ & -5 ) | ( 1 << 2 );
                }
                break;
              case 2:
                reset_timer(  );
                term->prev_mouse_event.x = iq[4];
                term->prev_mouse_event.y = iq[8];
                term->prev_mouse_event.button = iq[12];
                term_send_event( term, ebp_88 );
                break;
              case 1:
                reset_timer(  );
                if ( iq[8] == 2 && ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) == 76 || ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) == 108 ) )
                  redraw_terminal_cls( term );
                else
                {
                  if ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) == -512 )
                  {
                    destroy_terminal( term );
                  }
                  else
                  {
                    if ( term->interlink->utf8.len )
                    {
                      if ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) - 128 <= 63 && (unsigned char)( ( *(char*)(term + 56) >> 2 ) & 1 ) )
                      {
                        term->interlink->utf8.ucs = ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) & 63 ) | ( term->interlink->utf8.ucs << 6 );
                        term->interlink->utf8.len--;
                        if ( term->interlink->utf8.len - 1 == 0 )
                        {
                          if ( ( ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) & 63 ) | ( term->interlink->utf8.ucs << 6 ) ) < term->interlink->utf8.min || ( ( ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) & 63 ) | ( term->interlink->utf8.ucs << 6 ) ) & -2048 ) == 55296 )
                          {
                          }
                          term_send_ucs( term );
                        }
                      }
                      else
                      {
                        term->interlink->utf8.len = 0;
                        term_send_ucs( term, 65533, term->interlink->utf8.modifier );
                      }
                    }
                    if ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) <= 127 || ( ( ( ( (unsigned char)( ( *(char*)(term + 56) >> 2 ) & 1 ) & 63 ) & 255 ) == 0 ) & 255 ) )
                    {
                      if ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) < 0 || ( ( ( ( (unsigned char)( ( *(char*)(term + 56) >> 2 ) & 1 ) & 63 ) & 255 ) == 0 ) & 255 ) == 0 )
                        term_send_event( term, ebp_88 );
                      else
                      {
                        term_send_ucs( term, cp2u( get_terminal_codepage( term ), ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) & 255 ), iq[8] );
                      }
                    }
                    else
                    {
                      if ( ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) & 192 ) == 192 && ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) & 254 ) != 254 )
                      {
                        if ( (_Bool)( ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) >> 7 ) & 1 ) )
                        {
                          do
                          {
                          }
                          while ( ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) & ( ( 128 >> 1 ) >> 1 ) );
                        }
                        if ( assert_failed == 0 )
                        {
                          assert_failed = ( 0 + 1 ) - 2 > 4;
                          if ( ( 0 + 1 ) - 2 > 4 )
                          {
                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/event.c";
                            errline = 423;
                            elinks_internal( "assertion len &gt;= 2 && len &lt;= 6 failed!" );
                            if ( assert_failed )
                              goto B131;
                          }
                          term->interlink->utf8.len = ebp_140 - 1;
                          term->interlink->utf8.ucs = ( (unsigned char)( ( iq[4] < 256 ) ^ 1 ) ? iq[4] : 0 - iq[4] ) & ( ebp_136 - 1 );
                          term->interlink->utf8.min = min[ ( 0 + 1 ) - 2 ];
                          term->interlink->utf8.modifier = iq[8];
                        }
B131:                        assert_failed = 0;
                      }
                      term_send_ucs( term, 65533, iq[8] );
                    }
                  }
                }
                break;
              case 5:
              {
                int event_size;
                destroy_terminal( term );
              }
                break;
              default:
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/event.c";
                errline = 443;
                elinks_error( gettext( "Bad event %d" ) );
                break;
              }
              interlink->qfreespace += iq[0] + 320;
              interlink = interlink->qlen - ( iq[0] + 320 );
            }
            while ( interlink->qlen <= 15 );
          }
        }
        destroy_terminal( term );
      }
      while ( *(int*)(__errno_location(  )) != 4 );
      if ( *(int*)(__errno_location(  )) != 104 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/event.c";
        errline = 483;
        elinks_error( gettext( "Could not read event: %d (%s)" ) );
      }
    }
    interlink->qlen = ( ( interlink->qlen + 256 ) & -256 ) + 28;
  }
  interlink = (struct terminal_interlink*)mem_realloc( &interlink[0].qlen, ( ( 284 + 256 ) & -256 ) + 28 );
  if ( mem_realloc( &interlink[0].qlen, ( ( 284 + 256 ) & -256 ) + 28 ) == 0 )
  {
    int event_size;
    destroy_terminal( term );
  }
  else
  {
    if ( term->interlink == 0 )
    {
      do
      {
        interlink->qlen = 0;
      }
      while ( 0 + 4 + 4 < 28 );
    }
    term->interlink = &interlink[0];
    interlink->qfreespace = esi - interlink->qlen;
    iq = &interlink->input_queue[0];
    do
    {
    }
    while ( *(int*)(__errno_location(  )) != 4 );
  }
}
#if 0
#endif
