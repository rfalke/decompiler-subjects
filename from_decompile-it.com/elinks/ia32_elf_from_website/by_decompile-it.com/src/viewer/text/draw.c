#include "draw.c.h"
void draw_frame_lines( struct terminal *term, struct frameset_desc *frameset_desc, int xp, int yp, struct color_pair *colors )
{
  int ecx;
  int ebp_64;
  int ebp_44;
  int j;
  if ( assert_failed == 0 )
  {
    if ( frameset_desc[0] && term[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/draw.c";
      errline = 97;
      elinks_internal( "assertion term && frameset_desc && frameset_desc-&gt;frame_desc failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( frameset_desc->box.height >= 1 )
    {
      j = 0;
    {
      while ( 1 )
      {
        int x, i;
        int height = frameset_desc->frame_desc->height;
        if ( frameset_desc->box.width >= 1 )
        {
          i = 0;
        {
          int width;
          struct box box;
          x = xp - 1 - 1;
          ebp_44 = frameset_desc[0].n;
          while ( 1 )
          {
            if ( i )
            {
              draw_box( &term[0], ebp_40, 179, SCREEN_ATTR_FRAME, ( yp - 1 ) + 1 < 0 ? ( yp - 1 ) + 1 : 0 );
              if ( j == frameset_desc->box.height - 1 )
                draw_border_cross( &term[0], x, height + ( yp - 1 ) + 1, BORDER_X_UP, colors );
              if ( j == 0 )
              {
                draw_border_cross( &term[0], x, yp - 1, BORDER_X_DOWN, colors );
                x = x + frameset_desc[0].n + 1;
                i++;
                ebp_44 += 20;
                if ( frameset_desc->box.width <= i + 1 )
                {
                  j++;
                  if ( j < frameset_desc->box.height )
                  {
                    break;
                  {
                    while ( 1 )
                    {
                      int x, i;
                      int height = frameset_desc->frame_desc->height;
                    }
                  }
                  }
                }
                else
                {
                  x = xp;
                }
              }
            }
            else
            {
              x = x + *(int*)(ebp_44 + 32) + 1;
              if ( j == 0 )
                continue;
              else
              if ( x >= 0 )
                draw_border_cross( &term[0], x, ebp_76, BORDER_X_RIGHT, colors );
            }
          {
            struct box box;
            box.x = (unsigned char)( x < 0 ) ? x + 1 : 0;
            box.height = 1;
            box.y = ebp_76 < 0 ? ebp_76 : 0;
            box.width = (unsigned char)( ( ( *(int*)(ebp_44 + 32) >> 31 ) & 1 ) ^ 1 ) ? 0 : *(int*)(ebp_44 + 32);
            draw_box( &term[0], &box, 196, SCREEN_ATTR_FRAME, colors );
            x = x + *(int*)(ebp_44 + 32) + 1;
            if ( i == frameset_desc->box.width - 1 && x + *(int*)(ebp_44 + 32) + 1 < term->width )
            {
              draw_border_cross( ebp_60, eax, ebp_56, BORDER_X_LEFT, colors );
            }
            if ( i == 0 || j == 0 )
              continue;
            else
            {
              draw_border_char( &term[0], x, yp - 1, BORDER_SCROSS, colors );
              i++;
              ebp_44 += 20;
              if ( frameset_desc->box.width <= i )
              {
                j++;
              }
              else
              {
                x = xp;
              }
            }
          }
          }
        }
        }
        else
        {
          j++;
          if ( frameset_desc->box.height <= j )
            goto B29;
          else
          {
          }
        }
B29:        frameset_desc = &frameset_desc[0];
        if ( frameset_desc->box.height >= 1 )
        {
          ebp_64 = 0;
          j = frameset_desc[0].n;
        {
          while ( height = j, frameset_desc->box.width < 1 )
          {
            ebp_64++;
            if ( j <= ebp_64 )
              break;
          }
          x = xp - 1 - 1;
          i = 0;
        {
          int width;
          while ( width = j, j == ebp_64 * j )
          {
            i++;
            if ( j <= i )
            {
              ebp_64++;
            }
            else
            {
              x = x + width + 1;
            }
          }
          draw_frame_lines( &term[0] );
          i++;
        }
        }
        }
        else
          break;
      }
    }
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void draw_view_status( struct session *ses, struct document_view *doc_view, int active )
{
  struct terminal *term = ses->tab->term;
  draw_forms( ses->tab->term, &doc_view[0] );
  if ( active )
  {
    draw_searched( &term[0], &doc_view[0] );
    draw_current_link( &ses[0], &doc_view[0] );
  }
  return;
}
void draw_doc( struct session *ses, struct document_view *doc_view, int active )
{
  struct color_pair color;
  struct view_state *vs;
  struct terminal *term;
  struct box *box;
  int vx, vy;
  int y;
  if ( assert_failed == 0 )
  {
    if ( ses[0] && ses->tab->type && doc_view[0] && ses->tab->term )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/draw.c";
      errline = 208;
      elinks_internal( "assertion ses && ses-&gt;tab && ses-&gt;tab-&gt;term && doc_view failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    *ebp_48 = ses[0].next;
    term = ses->tab->term;
    if ( doc_view->box.width > 1 && doc_view->box.height > 1 )
    {
      if ( active )
      {
        if ( ses->navigate_mode == NAVIGATE_CURSOR_ROUTING )
          set_cursor( term, ses->tab->x, ses->tab->y, 0 );
        else
        {
          set_cursor( term, ( doc_view->box.x + doc_view->box.width ) - 1, ( doc_view->box.y + doc_view->box.height ) - 1, 1 );
          ses->tab->x = doc_view->box.x;
          ses->tab->y = doc_view->box.y;
        }
      }
      color.foreground = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
      vs = doc_view->vs;
      box = &doc_view->box;
      color.background = doc_view->document->height ? doc_view->document->bgcolor : doc_view->document->next;
      if ( doc_view->vs == 0 )
      {
        draw_box( term, &box[0], 32, 0, &color );
        return;
      }
      else
      {
        if ( doc_view->document && doc_view->document->frame_desc )
        {
          draw_box( term, &box[0], 32, 0, &color );
          draw_frame_lines( term, doc_view->document->frame_desc, doc_view->box.x, doc_view->box.y, &color );
          if ( vs->current_link == -1 )
          {
            vs->current_link = 0;
            return;
          }
          else
          {
            return;
          }
        }
        else
        {
          if ( ses->navigate_mode )
          {
            if ( get_link_at_coordinates( &doc_view[0], ses->tab->x - doc_view->box.x, ses->tab->y - doc_view->box.y ) )
            {
              if ( doc_view->vs->current_link >= 0 )
              {
                if ( doc_view->document->nlinks <= doc_view->vs->current_link )
                {
                }
                else
                if ( doc_view->document->links != get_link_at_coordinates( &doc_view[0], ses->tab->x - doc_view->box.x, ses->tab->y - doc_view->box.y ) )
                  goto B100;
              }
              else
              {
              }
B100:              doc_view->vs->current_link = ( ( get_link_at_coordinates( &doc_view[0], ses->tab->x - doc_view->box.x, ses->tab->y - doc_view->box.y ) - doc_view->document->links ) >> 2 ) * -991146299;
            }
          }
          else
            check_vs( &doc_view[0] );
          if ( ( ( vs->bits_at_44/*.1_1of4*/ & 2 ) & 255 ) == 0 )
          {
            if ( assert_failed == 0 )
            {
              assert_failed = *(short*)(doc_view->vs->uri + 52) == 0;
              if ( !(_Bool)( *(short*)(doc_view->vs->uri + 52) != 0 ) )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/draw.c";
                errline = 53;
                elinks_internal( "assertion uri-&gt;fragmentlen failed!" );
              }
            }
            if ( init_string( ebp_40 ) )
            {
              if ( add_uri_to_string( ebp_40, doc_view->vs->uri, URI_FRAGMENT ) == 0 )
                done_string( ebp_40 );
              else
              {
                decode_uri_string( ebp_40 );
                if ( assert_failed == 0 )
                {
                  assert_failed = ebp_36 == 0;
                  if ( !(_Bool)( ebp_36 != 0 ) )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/draw.c";
                    errline = 61;
                    elinks_internal( "assertion fragment.length failed!" );
                    if ( assert_failed )
                      goto B59;
                  }
                  assert_failed = *ebp_40 == 0;
                  if ( !(_Bool)( *ebp_40 != 0 ) )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/draw.c";
                    errline = 62;
                    elinks_internal( "assertion *fragment.source failed!" );
                  }
                  else
                  {
                    if ( find_tag( doc_view->document, ebp_40 + 1, ebp_36 - 1 ) == -1 )
                    {
                      if ( assert_failed == 0 )
                      {
                        assert_failed = doc_view->document->cached == 0;
                        if ( !(_Bool)( doc_view->document->cached != 0 ) )
                        {
                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/draw.c";
                          errline = 69;
                          elinks_internal( "assertion cached failed!" );
                        }
                      }
                      if ( ( ( *(char*)(doc_view->document->cached + 92) & 8 ) & 255 ) || doc_view->document->cache_id != vy )
                        done_string( ebp_40 );
                      else
                      {
                        if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
                        {
                          info_box( ses->tab->term, MSGBOX_FREE_TEXT, "Missing fragment", ALIGN_CENTER, msg_text( ses->tab->term, "The requested fragment \"%s\" doesn't exist." ) );
                        }
                      }
                    }
                    else
                    {
                      if ( vy >= 0 )
                      {
                        vy = doc_view->document->height - 1 < vy ? vy : doc_view->document->height - 1;
                        done_string( ebp_40 );
                        if ( ( doc_view->document->height - 1 < vy ? vy : doc_view->document->height - 1 ) != -2 )
                        {
                          vs->bits_at_44/*.1_1of4*/ |= 2;
                          if ( vy >= 0 )
                          {
                            doc_view->vs->y = vy;
                            set_link( &doc_view[0] );
                          }
                        }
                      }
                      else
                        vy = 0;
                    }
                    done_string( ebp_40 );
                    vs->bits_at_44/*.1_1of4*/ |= 2;
                  }
                }
B59:              }
            }
          }
          vx = vs->x;
          vy = vs->y;
          if ( doc_view->last_x != -1 && vs->x == doc_view->last_x && doc_view->last_y == vy && ( doc_view->search_word == 0 || doc_view->search_word[0] == 0 || doc_view->search_word[0] == 0 ) )
          {
            clear_link( term, &doc_view[0] );
            draw_view_status( &ses[0], &doc_view[0], active );
            return;
          }
          else
          {
            doc_view->last_y = vy;
            doc_view->last_x = vx;
            draw_box( term, &box[0], 32, 0, &color );
            if ( doc_view->document->height )
            {
              if ( doc_view->document->height <= vs->y )
              {
                do
                {
                  vs->y = vs->y - doc_view->box.height - doc_view->box.height;
                }
                while ( doc_view->document->height <= vs->y - doc_view->box.height - doc_view->box.height );
              }
              if ( vs->y - doc_view->box.height >= 0 )
                y = (unsigned char)( ( ( *(int*)(vs[0].doc_view + 28) >> 31 ) & 1 ) ^ 1 ) ? 0 : vs->y;
              else
              {
                y = 0;
                y = 0;
              }
              if ( vs->y != vy && ses->navigate_mode == NAVIGATE_LINKWISE )
                check_vs( &doc_view[0] );
              if ( y < ( doc_view->document->height < ebp_52 + doc_view->box.height ? ebp_52 + doc_view->box.height : doc_view->document->height ) )
              {
              {
                int en;
                y = y;
                do
                {
                  if ( ( doc_view->box.width + vx <= *(int*)(( y << 3 ) + *(int*)(doc_view->document + 208) + 4) ? doc_view->document->data[ y ].chars : doc_view->box.width + vx ) - ( (unsigned char)( ( ( vx >> 31 ) & 1 ) ^ 1 ) ? 0 : vx ) >= 1 )
                  {
                    draw_line( term, ebp_76 + doc_view->box.x, doc_view->box.y + ( y - ebp_52 ), eax, ebp_72 + ecx );
                  }
                  y++;
                }
                while ( ( ebp_52 + doc_view->box.height <= *(int*)(edx + 256) ? *(int*)(edx + 256) : ebp_52 + doc_view->box.height ) <= y + 1 );
              }
              }
              draw_view_status( &ses[0], &doc_view[0], active );
              if ( doc_view->search_word && doc_view->search_word[0] && doc_view->search_word[0] )
              {
                doc_view->last_y = -1;
                doc_view->last_x = -1;
              }
              return;
            }
            else
            {
              return;
            }
          }
        }
      }
    }
    else
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
void draw_formatted( struct session *ses, int rerender )
{
  int eax;
  if ( assert_failed == 0 )
  {
    if ( ses[0] && ses->tab )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/draw.c";
      errline = 343;
      elinks_internal( "assertion ses && ses-&gt;tab failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( rerender )
    {
      rerender--;
      if ( ( ( rerender - 1 ) & 2 ) == 0 )
      {
        rerender = session_is_loading( &ses[0] ) != 0 ? rerender : rerender | 2;
      }
      render_document_frames( &ses[0], rerender );
      start_document_refreshes( &ses[0] );
    }
    if ( ses->tab == get_tab_by_number( ses->tab->term, ses->tab->term->current_tab ) )
    {
      if ( ses->doc_view == 0 || ses->doc_view->document == 0 )
      {
        struct box box;
        box.x = 0;
        box.y = 1;
        box.height = (unsigned char)( ( *(int*)(*(int*)(*(int*)(ses + 8) + 20) + 48) - 2 < 0 ) ^ 1 ) ? 0 : ses->tab->term->height - 2;
        box.width = *(int*)(*(int*)(*(int*)(ses + 8) + 20) + 44) < 0 ? ses->tab->term->width : 0;
        draw_box( ses->tab->term, &box, 32, 0, 0 );
        return;
      }
      else
      {
        if ( ses->doc_view->vs == 0 && ses->history.current )
        {
          ses->doc_view->vs = ses->history.current + 64;
          &ses->doc_view = ses->doc_view;
        }
        ses->doc_view->last_y = -1;
        ses->doc_view->last_x = -1;
        refresh_view( &ses[0], ses->doc_view, 1 );
        return;
      }
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void refresh_view( struct session *ses, struct document_view *doc_view, int frames )
{
  int eax;
  int ecx;
  int edx;
  if ( ses->tab == get_tab_by_number( ses->tab->term, ses->tab->term->current_tab ) )
  {
    draw_doc( &ses[0], &doc_view[0], 1 );
    if ( frames )
    {
      if ( assert_failed == 0 )
      {
        if ( ses->doc_view && ses->doc_view->document )
          assert_failed = 0;
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/draw.c";
          errline = 309;
          elinks_internal( "assertion ses && ses-&gt;doc_view && ses-&gt;doc_view-&gt;document failed!" );
          if ( assert_failed )
            goto B7;
        }
        if ( ses->doc_view->document && ses->doc_view->document->frame_desc )
        {
          if ( ses->scrn_frames.next != ses->scrn_frames.next )
          {
            *ebp_28 = ses->scrn_frames.next;
            do
            {
              &ses->scrn_frames.list_head_elinks = -1;
              &ses->scrn_frames.list_head_elinks = -1;
            }
            while ( ses->scrn_frames.next[0] != ses->scrn_frames.next );
          }
          ses->history.current->vs.current_link = __MOD(( (unsigned char)( ( ( ses->history.current->vs.current_link >> 31 ) & 1 ) ^ 1 ) ? 0 : ses->history.current->vs.current_link ),( (unsigned char)( 0 + 1 > 0 ) ? 1 : 0 + 1 ));
          while ( ebp_28 != *(int*)(ebp_32 + 96) )
          {
            do
            {
              if ( ses->scrn_frames.next[13] == 0 )
              {
                draw_doc( &ses[0], &ses->scrn_frames.next[0], current_frame( &ses[0] ) == ses->scrn_frames.next );
                if ( ebp_28 == ebx )
                {
                  break;
                }
              }
              else
            }
            while ( ebp_28 != ebx );
            if ( ( (unsigned char)( ccdep2 < ccdep1 ) ? esi : 1 ) == 0 )
              break;
            else
            {
            }
          }
          ses = &ses[0];
        }
      }
B7:      assert_failed = 0;
    }
  }
  ses = &ses[0];
}
#if 0
#endif
