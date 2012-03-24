#include "view.c.h"
void detach_formatted( struct document_view *doc_view )
{
  if ( assert_failed == 0 )
  {
    assert_failed = doc_view[0].next == 0;
    if ( !(_Bool)( doc_view[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 66;
      elinks_internal( "assertion doc_view failed!" );
      if ( assert_failed )
      {
      }
    }
    if ( doc_view->document )
    {
      release_document( doc_view->document );
      doc_view->document = 0;
    }
    if ( doc_view->vs )
    {
      doc_view->vs->doc_view = 0;
      doc_view->vs = 0;
    }
    if ( doc_view->name )
    {
      mem_free( (void*)doc_view->name );
    }
    doc_view->name = 0;
    return;
  }
  assert_failed = 0;
  return;
}
void move_down( struct session *ses, struct document_view *doc_view, int type )
{
  int eax;
  int newpos;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && doc_view->vs->x )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 92;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs failed!" );
      if ( assert_failed )
        type = type;
    }
    assert_failed = *(int*)(ebp_12 + 148) != 0;
    if ( ses->navigate_mode )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 95;
      elinks_internal( "assertion ses-&gt;navigate_mode == NAVIGATE_LINKWISE failed!" );
    }
    newpos = doc_view->vs->y + doc_view->box.height;
    if ( doc_view->vs->y + doc_view->box.height < doc_view->document->height )
      doc_view->vs->y = newpos;
    if ( current_link_is_visible( &doc_view[0] ) == 0 )
    {
      if ( type )
      {
        find_link_down( &doc_view[0] );
        return;
      }
      find_link_page_down( &doc_view[0] );
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
enum frame_event_status  move_page_down( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int edx;
  int oldy = doc_view->vs->y;
  int count;
  ses->navigate_mode = NAVIGATE_LINKWISE;
  count = eat_kbd_repeat_count( ses );
  doc_view = &doc_view[0];
  do
  {
    count--;
    move_down( &ses[0], &doc_view[0], 0 );
  }
  while ( count < 1 );
  return ( doc_view->vs->y == oldy ) + 1;
}
void move_up( struct session *ses, struct document_view *doc_view, int type )
{
  int eax;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && doc_view->vs->x )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 130;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs failed!" );
      if ( assert_failed )
        type = type;
    }
    assert_failed = *(int*)(ebp_12 + 148) != 0;
    if ( ses->navigate_mode )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 133;
      elinks_internal( "assertion ses-&gt;navigate_mode == NAVIGATE_LINKWISE failed!" );
    }
    if ( doc_view->vs->y )
    {
      doc_view->vs->y -= doc_view->box.height;
      if ( doc_view->vs->y < 0 )
        doc_view->vs->y = 0;
      if ( current_link_is_visible( &doc_view[0] ) == 0 )
      {
        if ( type )
        {
          find_link_up( &doc_view[0] );
          return;
        }
        find_link_page_up( &doc_view[0] );
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
  assert_failed = 0;
  return;
}
enum frame_event_status  move_page_up( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int edx;
  int oldy = doc_view->vs->y;
  int count;
  ses->navigate_mode = NAVIGATE_LINKWISE;
  count = eat_kbd_repeat_count( ses );
  doc_view = &doc_view[0];
  do
  {
    count--;
    move_up( &ses[0], &doc_view[0], 0 );
  }
  while ( count < 1 );
  return ( doc_view->vs->y == oldy ) + 1;
}
enum frame_event_status  move_link( struct session *ses, struct document_view *doc_view, int direction, int wraparound_bound, int wraparound_link )
{
  int eax;
  int edx;
  int wraparound;
  int count;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 172;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return FRAME_EVENT_OK;
      }
    }
    ses->navigate_mode = NAVIGATE_LINKWISE;
    if ( doc_view->document->nlinks <= 1 )
    {
      wraparound = 0;
      wraparound_bound = -1;
      ses = ses;
    }
    else
    {
      wraparound = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
      ses = ses;
    }
  {
    int current_link;
    count = eat_kbd_repeat_count( ses );
    do
    {
      if ( doc_view->vs->current_link == wraparound_bound )
      {
        if ( wraparound )
        {
          jump_to_link_number( ses, &doc_view[0], wraparound_link );
          count--;
          if ( count >= 1 )
            continue;
          else
          {
            doc_view = &doc_view[0];
            break;
          }
        }
        else
        {
          *(int*)(eat_kbd_repeat_count( ses ) + 32) = doc_view->next;
          if ( direction >= 1 )
            move_down( ses, &doc_view, 1 );
            if ( wraparound_bound != eat_kbd_repeat_count( ses ) + 32 && doc_view->vs->current_link != eat_kbd_repeat_count( ses ) + 32 )
              set_textarea( &doc_view[0], 0 - direction );
            count--;
        }
      }
      else
      {
        if ( next_link_in_view_y( &doc_view[0], doc_view->vs->current_link + direction, direction ) == 0 )
        {
          doc_view->vs->current_link = doc_view->vs->current_link;
          if ( direction >= 1 )
            move_down( ses, &doc_view[0], 1 );
        }
      }
      move_up( ses, &doc_view[0], 1 );
    }
    while ( count - 1 >= 1 );
    return FRAME_EVENT_REFRESH;
  }
  }
  else
  {
    assert_failed = 0;
    return FRAME_EVENT_OK;
  }
}
enum frame_event_status  move_link_dir( struct session *ses, struct document_view *doc_view, int dir_x, int dir_y )
{
  int eax;
  int edx;
  int count;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 238;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return FRAME_EVENT_OK;
      }
    }
    ses->navigate_mode = NAVIGATE_LINKWISE;
  {
    int current_link;
    count = eat_kbd_repeat_count( ses );
    do
    {
      if ( next_link_in_dir( &doc_view[0], dir_x, dir_y ) == 0 )
      {
        if ( dir_y < 1 )
        {
          count = count;
          if ( !1 )
            move_up( ses, &doc_view[0], 1 );
        }
        else
          move_down( ses, &doc_view[0], 1 );
        if ( doc_view->vs->current_link != ebp_28 )
        {
          set_textarea( &doc_view[0], 0 - dir_y );
          count = count;
        }
      }
      count--;
    }
    while ( count - 1 >= 1 );
    return FRAME_EVENT_REFRESH;
  }
  }
  else
  {
    assert_failed = 0;
    return FRAME_EVENT_OK;
  }
}
enum frame_event_status  vertical_scroll( struct session *ses, struct document_view *doc_view, int steps )
{
  int eax;
  int y;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 271;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
        steps = steps;
    }
    y = doc_view->vs->y + steps;
    if ( steps >= 1 )
    {
      int max_height = doc_view->document->height - doc_view->box.height;
      if ( doc_view->vs->y < doc_view->document->height - doc_view->box.height )
        y = max_height < y ? y : max_height;
      else
      {
        return FRAME_EVENT_OK;
      }
    }
    y = (unsigned char)( ( ( ( max_height < y ? y : max_height ) >> 31 ) & 1 ) ^ 1 ) ? 0 : max_height < y ? y : max_height;
    if ( doc_view->vs->y != ( (unsigned char)( ( ( ( max_height < y ? y : max_height ) >> 31 ) & 1 ) ^ 1 ) ? 0 : max_height < y ? y : max_height ) )
    {
      doc_view->vs->y = y;
      if ( current_link_is_visible( &doc_view[0] ) == 0 )
      {
        if ( steps >= 1 )
        {
          find_link_page_down( &doc_view[0] );
          return FRAME_EVENT_OK;
        }
        find_link_page_up( &doc_view[0] );
        return FRAME_EVENT_OK;
      }
      else
      {
        return FRAME_EVENT_OK;
      }
    }
    else
    {
      return FRAME_EVENT_OK;
    }
  }
  assert_failed = 0;
  return FRAME_EVENT_OK;
}
enum frame_event_status  horizontal_scroll( struct session *ses, struct document_view *doc_view, int steps )
{
  int eax;
  int ecx;
  int x, max;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 306;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
      {
      }
    }
    x = doc_view->vs->x + steps;
    x = 0;
    if ( x != max )
    {
      *(int*)(edi + 24) = x;
      if ( current_link_is_visible( &doc_view[0] ) == 0 )
      {
        find_link_page_down( &doc_view[0] );
        return FRAME_EVENT_OK;
      }
      return FRAME_EVENT_OK;
    }
    else
    {
      return FRAME_EVENT_OK;
    }
  }
  assert_failed = 0;
  return FRAME_EVENT_OK;
}
enum frame_event_status  scroll_up( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int ecx;
  int edx;
  int steps;
  if ( steps == 0 )
  {
    steps = steps;
  }
}
enum frame_event_status  scroll_down( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int ecx;
  int edx;
  int steps;
  if ( steps == 0 )
  {
    steps = steps;
  }
}
enum frame_event_status  scroll_left( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int ecx;
  int edx;
  int steps;
  if ( steps == 0 )
  {
    steps = steps;
  }
}
enum frame_event_status  scroll_right( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int ecx;
  int edx;
  int steps;
  if ( steps == 0 )
  {
    steps = steps;
  }
}
enum frame_event_status  scroll_mouse_up( struct session *ses, struct document_view *doc_view )
{
  int ecx;
}
enum frame_event_status  scroll_mouse_down( struct session *ses, struct document_view *doc_view )
{
  int ecx;
}
enum frame_event_status  move_document_start( struct session *ses, struct document_view *doc_view )
{
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 412;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs failed!" );
      if ( assert_failed )
      {
        ses = &ses[0];
      }
    }
    doc_view->vs->x = 0;
    doc_view->vs->y = 0;
    if ( ses->navigate_mode == NAVIGATE_CURSOR_ROUTING )
    {
      move_cursor( &ses[0], &doc_view[0], doc_view->box.x, doc_view->box.y );
      return FRAME_EVENT_REFRESH;
    }
    find_link_page_down( &doc_view[0] );
    return FRAME_EVENT_REFRESH;
  }
  assert_failed = 0;
  return FRAME_EVENT_OK;
}
enum frame_event_status  move_document_end( struct session *ses, struct document_view *doc_view )
{
  int max_height;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 432;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    doc_view->vs->x = 0;
    max_height = (unsigned char)( ( ( ( doc_view->document->height - doc_view->box.height ) >> 31 ) & 1 ) ^ 1 ) ? 0 : doc_view->document->height - doc_view->box.height;
    if ( doc_view->vs->y < ( (unsigned char)( ( ( ( doc_view->document->height - doc_view->box.height ) >> 31 ) & 1 ) ^ 1 ) ? 0 : doc_view->document->height - doc_view->box.height ) )
      doc_view->vs->y = max_height;
    if ( ses->navigate_mode == NAVIGATE_CURSOR_ROUTING )
    {
      move_cursor( &ses[0], &doc_view[0], ses->tab->x, doc_view->document->height - doc_view->vs->y );
      return FRAME_EVENT_REFRESH;
    }
    find_link_page_up( &doc_view[0] );
    return FRAME_EVENT_REFRESH;
  }
B2:  assert_failed = 0;
  return FRAME_EVENT_OK;
}
enum frame_event_status  set_frame( struct session *ses, struct document_view *doc_view, int xxxx )
{
  if ( assert_failed == 0 )
  {
    if ( ses[0] && doc_view[0] && ses->doc_view && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 456;
      elinks_internal( "assertion ses && ses-&gt;doc_view && doc_view && doc_view-&gt;vs failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( ses->doc_view != doc_view[0].next )
    {
      goto_uri( &ses[0], doc_view->vs->uri );
      ses->navigate_mode = NAVIGATE_LINKWISE;
      return FRAME_EVENT_OK;
    }
    else
    {
      return FRAME_EVENT_OK;
    }
  }
B2:  assert_failed = 0;
  return FRAME_EVENT_OK;
}
void toggle_plain_html( struct session *ses, struct document_view *doc_view, int xxxx )
{
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && ses->tab && ses->tab->term )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 470;
      elinks_internal( "assertion ses && doc_view && ses-&gt;tab && ses-&gt;tab-&gt;term failed!" );
      if ( assert_failed )
      {
        ses = &ses[0];
      }
    }
    if ( doc_view->vs == 0 )
    {
      doc_view = 0;
      ses = &ses->tab->term->next;
    }
    doc_view->vs->plain = *(int*)(doc_view->vs + 40) == 0;
    ses = &ses[0];
    doc_view = 1;
  }
  assert_failed = 0;
  return;
}
void toggle_wrap_text( struct session *ses, struct document_view *doc_view, int xxxx )
{
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && ses->tab && ses->tab->term )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 485;
      elinks_internal( "assertion ses && doc_view && ses-&gt;tab && ses-&gt;tab-&gt;term failed!" );
      if ( assert_failed )
      {
        ses = &ses[0];
        assert_failed = 0;
        return;
      }
    }
    if ( doc_view->vs == 0 )
    {
      doc_view = 0;
      ses = &ses->tab->term->next;
    }
    doc_view->vs->bits_at_44/*.1_1of4*/ = ( *(char*)(doc_view->vs + 44) & -2 ) | ( ( *(char*)(doc_view->vs + 44) ^ 1 ) & 1 );
    ses = &ses[0];
    doc_view = 1;
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
enum frame_event_status  move_cursor( struct session *ses, struct document_view *doc_view, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  enum frame_event_status  status;
  struct terminal *term = ses->tab->term;
  struct link *link;
  if ( doc_view->box.x <= x )
  {
    y = doc_view->box.y;
    if ( doc_view->box.y <= y )
    {
      if ( x < doc_view->box.width + doc_view->box.x )
      {
        if ( y < doc_view->box.height + y )
          y = y;
          ses->navigate_mode = NAVIGATE_CURSOR_ROUTING;
          if ( link[0].accesskey )
            doc_view->vs->current_link = ( ( get_link_at_coordinates( &doc_view[0], x - doc_view->box.x, y - doc_view->box.y ) - doc_view->document->links ) >> 2 ) * -991146299;
            set_cursor( term, x, y, 0 );
            ses->tab->x = x;
            ses->tab->y = y;
            status = FRAME_EVENT_REFRESH;
            return FRAME_EVENT_REFRESH;
          else
            doc_view->vs->current_link = -1;
            set_cursor( term, x, y, 0 );
            ses->tab->x = x;
            ses->tab->y = y;
            status = FRAME_EVENT_REFRESH;
            return FRAME_EVENT_REFRESH;
      }
      else
      {
      }
      if ( y < doc_view->box.height + y )
      {
        if ( x < doc_view->box.x )
        {
          doc_view->box.x = ses[0].next;
          horizontal_scroll( &ses[0], &doc_view[0], x - doc_view->box.x );
          if ( status == FRAME_EVENT_REFRESH )
          {
            x = doc_view->box.x;
            if ( x < doc_view->box.x )
              y = doc_view->box.y;
              if ( y <= y && y <= ( doc_view->box.height + y ) - 1 )
              {
                y = y;
                x = x < x ? x : x;
                ses = &ses[0];
              }
              else
              {
              }
            else
            {
              y = doc_view->box.y;
              x = ( x + doc_view->box.width ) - 1;
              x = x < x ? x : x;
            }
          }
          else
          {
            return vertical_scroll( &ses[0], &doc_view[0], y - y );
          }
        }
        else
        {
          doc_view->box.x += doc_view->box.width;
          if ( x <= doc_view->document->width - doc_view->vs->x && doc_view->box.x <= x )
          {
            &ses[0] = &ses[0];
            horizontal_scroll( &ses[0], &doc_view[0], ( x - doc_view->box.x ) + 1 );
          }
          else
            x--;
            x = x < x ? x : x;
        }
      }
    }
    else
    {
      int max_height;
      int max_width;
      vertical_scroll( &ses[0], &doc_view[0], y - y );
    }
  }
  else
  {
    y = doc_view->box.y;
    if ( doc_view->box.y <= y )
    {
      if ( y < doc_view->box.height + y )
        continue;
    }
    else
    {
      int max_height;
      int max_width;
      vertical_scroll( &ses[0], &doc_view[0], y - y );
    }
  }
  if ( y <= doc_view->document->height - doc_view->vs->y )
  {
    &ses[0] = &ses[0];
    vertical_scroll( &ses[0], &doc_view[0], ( y + 1 ) - ( doc_view->box.height + y ) );
  }
}
enum frame_event_status  move_cursor_rel( struct session *ses, struct document_view *view, int rx, int ry )
{
  int count = count < 1 ? count : 1;
  return move_cursor( &ses[0], &view[0], ses->tab->x + ( rx * ( count < 1 ? count : 1 ) ), ses->tab->y + ( ry * ( count < 1 ? count : 1 ) ) );
}
enum frame_event_status  move_cursor_left( struct session *ses, struct document_view *view )
{
  int edx;
  ses = 0;
}
enum frame_event_status  move_cursor_right( struct session *ses, struct document_view *view )
{
  int edx;
  ses = 0;
}
enum frame_event_status  move_cursor_up( struct session *ses, struct document_view *view )
{
  int edx;
  ses = -1;
}
enum frame_event_status  move_cursor_down( struct session *ses, struct document_view *view )
{
  int edx;
  ses = 1;
}
enum frame_event_status  move_link_up_line( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int ecx;
  int edx;
  int ebp_60;
  int ebp_48;
  struct document *document;
  struct view_state *vs;
  int min_y, y;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 611;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
        doc_view = &doc_view[0];
    }
    vs = doc_view->vs;
    document = doc_view->document;
    if ( document->lines1 == 0 )
    {
      if ( doc_view->vs->y )
      {
        min_y = doc_view->vs->y - doc_view->box.height;
        vs->y = doc_view->vs->y - doc_view->box.height;
        if ( doc_view->vs->y - doc_view->box.height < 0 )
        {
          vs->y = 0;
          return FRAME_EVENT_OK;
        }
        return FRAME_EVENT_OK;
      }
    }
    else
    {
      y = ( ses->tab->y + vs->y ) - doc_view->box.y;
      y = ( ( ses->tab->y + vs->y ) - doc_view->box.y <= document->height - 1 ? document->height - 1 : ( ses->tab->y + vs->y ) - doc_view->box.y ) - 1;
      if ( ( (unsigned char)( ( vs->y - doc_view->box.height < 0 ) ^ 1 ) ? 0 : vs->y - doc_view->box.height ) <= ( ( ses->tab->y + vs->y ) - doc_view->box.y <= document->height - 1 ? document->height - 1 : ( ses->tab->y + vs->y ) - doc_view->box.y ) - 1 )
      {
        ebp_48 = y << 2;
        ebp_60 = document->lines1[ y ];
      {
        do
        {
          struct link *link = *ebp_60;
          if ( *ebp_60 && link[0].accesskey <= document->lines2[ ebp_48 >> 2 ] )
          {
            enum frame_event_status  status;
            y = link->points->y;
            if ( link->points->y != ( ( ses->tab->y + vs->y ) - doc_view->box.y <= document->height - 1 ? document->height - 1 : ( ses->tab->y + vs->y ) - doc_view->box.y ) - 1 )
            {
              y = y;
              do
              {
                link++;
                if ( document->lines2[ ebp_48 >> 2 ] < link[1].accesskey )
                {
                }
                else
                {
                  y = link->points->y;
                }
              }
              while ( link->points->y != y - 1 );
            }
            else
              y = y;
            if ( y < vs->y )
            {
            {
              int mini;
              vs->y -= doc_view->box.height <= vs->y ? vs->y : doc_view->box.height;
              y = y + ( doc_view->box.height <= vs->y ? vs->y : doc_view->box.height );
            }
            }
            *ebp_44 = ses->tab;
            move_cursor( ses, &doc_view[0], ses->tab->x, ( ses->tab->y + y + ( doc_view->box.height <= vs->y ? vs->y : doc_view->box.height ) ) - y );
            if ( link[0].accesskey == edx )
            {
              ses->navigate_mode = NAVIGATE_LINKWISE;
              break;
            }
          }
          y--;
          ebp_60 -= 4;
          ebp_48 -= 4;
        }
        while ( ( (unsigned char)( ( vs->y - doc_view->box.height < 0 ) ^ 1 ) ? 0 : vs->y - doc_view->box.height ) <= y - 1 );
      }
      }
      if ( vs->y )
      {
        vs->y = (unsigned char)( ( ( ( vs->y - doc_view->box.height ) >> 31 ) & 1 ) ^ 1 ) ? 0 : vs->y - doc_view->box.height;
        ses->navigate_mode = NAVIGATE_CURSOR_ROUTING;
        return FRAME_EVENT_OK;
      }
    }
    return FRAME_EVENT_OK;
  }
  assert_failed = 0;
}
enum frame_event_status  move_link_down_line( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int edx;
  int ebp_60;
  int ebp_44;
  struct document *document;
  struct view_state *vs;
  int max_y, y;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 676;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    vs = doc_view->vs;
    document = doc_view->document;
    if ( document->lines1 == 0 )
    {
      if ( doc_view->box.height + vs->y < document->height )
      {
        vs->y += doc_view->box.height;
        return FRAME_EVENT_OK;
      }
    }
    else
    {
      y = ( ( ses->tab->y + vs->y ) - doc_view->box.y ) + 1;
      if ( ( ( ses->tab->y + vs->y ) - doc_view->box.y ) + 1 <= ( document->height - 1 < ( vs->y + ( doc_view->box.height * 2 ) ) - 1 ? ( vs->y + ( doc_view->box.height * 2 ) ) - 1 : document->height - 1 ) )
      {
        ebp_44 = y << 2;
        ebp_60 = document->lines1[ y ];
      {
        do
        {
          struct link *link = *ebp_60;
          if ( *ebp_60 && link[0].accesskey <= document->lines2[ ebp_44 >> 2 ] )
          {
            enum frame_event_status  status;
            y = link->points->y;
            if ( link->points->y != ( ( ses->tab->y + vs->y ) - doc_view->box.y ) + 1 )
            {
              doc_view = &doc_view[0];
              do
              {
                link++;
                if ( document->lines2[ ebp_44 >> 2 ] < link[1].accesskey )
                {
                }
                else
                {
                  y = link->points->y;
                }
              }
              while ( link->points->y != y + 1 );
            }
            else
              doc_view = &doc_view[0];
            if ( doc_view->box.height + vs->y <= y )
            {
              int mini;
              vs->y += doc_view->box.height < document->height - 1 - vs->y ? document->height - 1 - vs->y : doc_view->box.height;
            }
            move_cursor( ses, &doc_view[0], ses->tab->x, ( ses->tab->y + ( y - ( doc_view->box.height < document->height - 1 - vs->y ? document->height - 1 - vs->y : doc_view->box.height ) ) ) - ( ( ses->tab->y + vs->y ) - doc_view->box.y ) );
            if ( link[0].accesskey == edx )
            {
              ses->navigate_mode = NAVIGATE_LINKWISE;
              break;
            }
          }
          y++;
          ebp_60 += 4;
          ebp_44 += 4;
        }
        while ( ( document->height - 1 < ( vs->y + ( doc_view->box.height * 2 ) ) - 1 ? ( vs->y + ( doc_view->box.height * 2 ) ) - 1 : document->height - 1 ) < y + 1 );
      }
      }
      if ( doc_view->box.height + vs->y < document->height )
      {
        vs->y += doc_view->box.height;
        ses->navigate_mode = NAVIGATE_CURSOR_ROUTING;
        return FRAME_EVENT_OK;
      }
    }
    return FRAME_EVENT_OK;
  }
B2:  assert_failed = 0;
  return FRAME_EVENT_OK;
}
enum frame_event_status  move_link_prev_line( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int edx;
  int ebp_44;
  struct view_state *vs;
  struct document *document;
  struct link *link, *last;
  int y1, y, min_y, min_x, max_x, x1;
  if ( assert_failed == 0 )
  {
    if ( doc_view && ses && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 739;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    vs = doc_view->vs;
    document = doc_view->document;
    if ( doc_view->document->lines1 == 0 )
    {
      if ( doc_view->vs->y )
      {
        vs->y = doc_view->vs->y - doc_view->box.height;
        if ( doc_view->vs->y - doc_view->box.height < 0 )
        {
          vs->y = 0;
          return FRAME_EVENT_OK;
        }
        return FRAME_EVENT_OK;
      }
    }
    else
    {
      y1 = ( ses->tab->y + vs->y ) - doc_view->box.y;
      x1 = ( ses->tab->x + vs->x ) - doc_view->box.x;
      if ( vs->current_link >= 0 && vs->current_link < document->nlinks && link[0] )
        get_link_x_bounds( &link[0], y1, &min_x, &max_x );
      else
      {
        max_x = x1 = x1;
        min_x = x1;
      }
      y = y1 <= document->height - 1 ? document->height - 1 : y1;
      min_y = vs->y - doc_view->box.height < 0 ? vs->y - doc_view->box.height : 0;
      if ( ( vs->y - doc_view->box.height < 0 ? vs->y - doc_view->box.height : 0 ) <= ( y1 <= document->height - 1 ? document->height - 1 : y1 ) )
      {
        ebp_44 = y << 2;
        do
        {
          link[0].accesskey = document->lines1[ ebp_44 >> 2 ];
          if ( document->lines1[ ebp_44 >> 2 ] && link[0].accesskey <= *(int*)(ebp_44 + *(int*)(document + 220)) )
          {
            last = 0;
            do
            {
              if ( last[0].accesskey )
              {
                enum frame_event_status  status;
                last->points = last->points;
                y = last->points->y;
                if ( last->points->y < vs->y )
                {
                  int mini;
                  y += vs->y < doc_view->box.height ? doc_view->box.height : vs->y;
                  vs->y -= vs->y < doc_view->box.height ? doc_view->box.height : vs->y;
                  last->points = last->points;
                }
                move_cursor( ses, doc_view, ( ses->tab->x + last->points->x ) - x1, ses->tab->y + ( y - y1 ) );
                if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && last[0].accesskey == doc_view->document->links[ doc_view->vs->current_link ].accesskey )
                {
                  ses->navigate_mode = NAVIGATE_LINKWISE;
                  break;
                }
              }
            }
            while ( *(int*)(ebp_44 + *(int*)(document + 220)) < link[1].accesskey );
          }
          y--;
          ebp_44 -= 4;
          min_x = 0x7fffffff;
        }
        while ( y - 1 < ( vs->y - doc_view->box.height < 0 ? vs->y - doc_view->box.height : 0 ) );
        min_y = vs->y;
      }
      if ( min_y )
      {
        vs->y = (unsigned char)( ( min_y - doc_view->box.height < 0 ) ^ 1 ) ? 0 : min_y - doc_view->box.height;
        ses->navigate_mode = NAVIGATE_CURSOR_ROUTING;
        return FRAME_EVENT_REFRESH;
      }
    }
    return FRAME_EVENT_OK;
  }
B2:  assert_failed = 0;
  return FRAME_EVENT_OK;
}
enum frame_event_status  move_link_next_line( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int edx;
  int ebp_44;
  struct view_state *vs;
  struct document *document;
  struct link *link, *last;
  int y1, y, max_y, min_x, max_x, x1;
  if ( assert_failed == 0 )
  {
    if ( doc_view && ses && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 819;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    vs = doc_view->vs;
    document = doc_view->document;
    if ( doc_view->document->lines1 == 0 )
    {
      if ( doc_view->vs->y + doc_view->box.height < doc_view->document->height )
      {
        doc_view->vs->y += doc_view->box.height;
        return FRAME_EVENT_REFRESH;
      }
    }
    else
    {
      y1 = ( ses->tab->y + vs->y ) - doc_view->box.y;
      x1 = ( ses->tab->x + vs->x ) - doc_view->box.x;
      if ( vs->current_link >= 0 && vs->current_link < document->nlinks && link[0] )
        get_link_x_bounds( &link[0], y1, &min_x, &max_x );
      else
      {
        max_x = x1;
        min_x = x1;
      }
      max_y = ( vs->y + ( doc_view->box.height * 2 ) ) - 1;
      y = document->height - 1 < y1 ? y1 : document->height - 1;
      y = ( vs->y + ( doc_view->box.height * 2 ) ) - 1 <= document->height - 1 ? document->height - 1 : ( vs->y + ( doc_view->box.height * 2 ) ) - 1;
      if ( ( document->height - 1 < y1 ? y1 : document->height - 1 ) <= ( ( vs->y + ( doc_view->box.height * 2 ) ) - 1 <= document->height - 1 ? document->height - 1 : ( vs->y + ( doc_view->box.height * 2 ) ) - 1 ) )
      {
        ebp_44 = y << 2;
        do
        {
          link[0].accesskey = document->lines1[ ebp_44 >> 2 ];
          if ( document->lines1[ ebp_44 >> 2 ] && link[0].accesskey <= *(int*)(ebp_44 + *(int*)(document + 220)) )
          {
            last = 0;
            do
            {
              if ( link->points->y == y && min_x < link->points->x && ( last[0].accesskey == 0 || link->points->x < last->points[0].x ) )
              {
                last = &link[0];
                link[0].accesskey = link[1].accesskey;
                if ( ecx < last[1].accesskey )
                {
                }
              }
              else
              {
                link[0].accesskey = link[1].accesskey;
              }
              if ( last[0].accesskey )
              {
                enum frame_event_status  status;
                y = last->points->y;
                if ( doc_view->box.height + vs->y <= last->points->y )
                {
                  int mini;
                  y -= doc_view->box.height < document->height + ~vs->y ? document->height + ~vs->y : doc_view->box.height;
                  vs->y += doc_view->box.height < document->height + ~vs->y ? document->height + ~vs->y : doc_view->box.height;
                  last->points = last->points;
                }
                move_cursor( ses, doc_view, ( ses->tab->x + last->points->x ) - x1, ses->tab->y + ( y - y1 ) );
                if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && last[0].accesskey == doc_view->document->links[ doc_view->vs->current_link ].accesskey )
                {
                  ses->navigate_mode = NAVIGATE_LINKWISE;
                  break;
                }
              }
            }
            while ( *(int*)(ebp_44 + *(int*)(document + 220)) < link[1].accesskey );
          }
          y++;
          ebp_44 += 4;
          min_x = -1;
        }
        while ( y + 1 <= ( ( vs->y + ( doc_view->box.height * 2 ) ) - 1 <= document->height - 1 ? document->height - 1 : ( vs->y + ( doc_view->box.height * 2 ) ) - 1 ) );
      }
      if ( doc_view->box.height + vs->y < document->height )
      {
        vs->y = vs->y;
        ses->navigate_mode = NAVIGATE_CURSOR_ROUTING;
        return FRAME_EVENT_REFRESH;
      }
    }
    return FRAME_EVENT_OK;
  }
B2:  assert_failed = 0;
  return FRAME_EVENT_OK;
}
enum frame_event_status  move_cursor_line_start( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 895;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs failed!" );
      if ( assert_failed )
      {
      }
    }
    ses = 0;
  }
  assert_failed = 0;
  return FRAME_EVENT_OK;
}
enum frame_event_status  copy_current_link_to_clipboard( struct session *ses, struct document_view *doc_view, int xxx )
{
  int edx;
  struct link *link;
  struct uri *uri;
  unsigned char *uristring;
  if ( doc_view && doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] && get_link_uri( ses, &doc_view[0], &link[0] ) )
  {
    uristring[0] = get_uri_string( get_link_uri( ses, &doc_view[0], &link[0] ), URI_ORIGINAL );
    done_uri( &uri[0] );
    if ( uristring[0] )
    {
      set_clipboard_text( &uristring[0] );
      mem_free( &uristring[0] );
    }
  }
  return FRAME_EVENT_OK;
}
int try_jump_to_link_number( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int link_number;
  link_number--;
  if ( link_number - 1 >= 0 )
  {
    if ( doc_view[0] && link_number < doc_view->document->nlinks )
    {
      jump_to_link_number( &ses[0], &doc_view[0], link_number );
      refresh_view( &ses[0], &doc_view[0], 0 );
      return 1;
    }
  }
  return 0;
}
enum frame_event_status  try_mark_key( struct session *ses, struct document_view *doc_view, struct term_event *ev )
{
  int edx;
  term_event_key_T key = ev->info.mouse.x;
  unsigned char mark = ev->info.mouse.x < 128 ? 0 : ev->info.mouse.x;
  if ( ses->kbdprefix.mark != KP_MARK_SET )
  {
    if ( !0 )
    {
      if ( ses->kbdprefix.mark == KP_MARK_GOTO )
      {
        mark = mark;
        goto_mark( mark, doc_view->vs );
      }
    }
    else
    {
      return FRAME_EVENT_REFRESH;
    }
  }
  else
  {
    mark = mark;
    set_mark( mark, doc_view->vs );
  }
  ses->kbdprefix.repeat_count = 0;
  ses->kbdprefix.mark = KP_MARK_NOTHING;
  return FRAME_EVENT_REFRESH;
}
struct document_view *current_frame( struct session *ses )
{
  int eax;
  struct document_view *doc_view;
  int current_frame_number;
  if ( assert_failed == 0 )
  {
    assert_failed = ses[0].next == 0;
    if ( (_Bool)( ses[0].next != 0 ) )
    {
      if ( ses->history.current == 0 )
      {
        &doc_view[0] = 0;
        return &doc_view;
      }
    }
    else
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 1253;
      elinks_internal( "assertion ses failed!" );
      if ( assert_failed == 0 )
      {
        if ( ses->history.current == 0 )
          continue;
      }
    }
    current_frame_number = *(int*)(ses->history.current + 96) == -1 ? ses->history.current->vs.current_link : 0;
    &doc_view[0] = &ses->scrn_frames.next[0];
    if ( ses->scrn_frames.next != ses->scrn_frames.next )
    {
      do
      {
        if ( doc_view->document == 0 || doc_view->document->frame_desc == 0 )
        {
          if ( current_frame_number )
          {
            &doc_view[0] = &doc_view;
            current_frame_number--;
            if ( doc_view->next != ses->scrn_frames.next )
              continue;
            else
              break;
          }
          else
            break;
        }
        else
        {
          &doc_view = &doc_view;
        }
      }
      while ( doc_view->next != ses->scrn_frames.next );
    }
    &doc_view[0] = ses->doc_view;
    if ( ses->doc_view && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 1268;
      elinks_internal( "assertion doc_view && doc_view-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( doc_view->document && doc_view->document->frame_desc )
      continue;
    return &doc_view;
  }
B2:  assert_failed = 0;
  &doc_view = 0;
  return &doc_view;
}
enum frame_event_status  send_to_frame( struct session *ses, struct document_view *doc_view, struct term_event *ev )
{
  int ecx;
  enum frame_event_status  status;
  if ( assert_failed == 0 )
  {
    if ( ses && ses->tab && ev[0] && ses->tab->term )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 1281;
      elinks_internal( "assertion ses && ses-&gt;tab && ses-&gt;tab-&gt;term && ev failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return FRAME_EVENT_IGNORED;
      }
    }
    if ( doc_view[0].next == 0 || doc_view->document == 0 )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 1226;
      elinks_internal( "assertion doc_view && doc_view-&gt;document failed: document not formatted" );
      if ( assert_failed )
        assert_failed = 0;
        status = FRAME_EVENT_IGNORED;
        print_screen_status( &ses[0] );
        return FRAME_EVENT_IGNORED;
    }
    assert_failed = ( ( ev[0].ev == 0 ) | ( ses[0].next == 0 ) ) & 1;
    if ( ( ( ev[0].ev == 0 ) | ( ses[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 1229;
      elinks_internal( "assertion ses && ev failed!" );
      if ( assert_failed )
        assert_failed = 0;
    }
    if ( doc_view->vs == 0 )
      continue;
    else
    {
      if ( ev->ev == 1 )
      {
        doc_view = &doc_view[0];
        if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && doc_view->document->links[ doc_view->vs->current_link ] )
        {
          if ( doc_view->document->links[ doc_view->vs->current_link ].type - 5 <= 1 )
          {
            kbd_action( KEYMAP_EDIT, &ev[0], 0 );
            if ( ses->insert_mode == INSERT_MODE_OFF && kbd_action( KEYMAP_EDIT, &ev[0], 0 ) == 14 )
              ses->insert_mode = INSERT_MODE_ON;
              refresh_view( &ses[0], &doc_view[0], 0 );
              return FRAME_EVENT_IGNORED;
            else
            if ( assert_failed )
            {
              if ( doc_view->document->links[ doc_view->vs->current_link ].type - 5 <= 1 && status )
              {
                if ( ses->insert_mode == INSERT_MODE_ON && assert_failed == 0 )
                {
                  assert_failed = edx != edi;
                  if ( edx != edi )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
                    errline = 1090;
                    elinks_internal( "assertion link == get_current_link(doc_view) failed!" );
                  }
                }
              }
            }
          }
          assert_failed = 0;
        }
        if ( try_mark_key( &ses[0], &doc_view[0], &ev[0] ) == FRAME_EVENT_IGNORED )
        {
          if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) <= 1 || try_document_key( &ses[0], &doc_view[0], &ev[0] ) == FRAME_EVENT_IGNORED )
          {
            if ( ev->info.mouse.x - 48 <= 9 )
            {
              if ( ev->info.mouse.y == 0 )
              {
                if ( ses->kbdprefix.repeat_count == 0 )
                {
                  if ( doc_view->document->options.num_links_key && ( doc_view->document->options.num_links_key != 1 || ( ( *(char*)(doc_view->document + 81) & 16 ) & 255 ) ) )
                  {
                    if ( ev->info.mouse.x - 48 )
                    {
                      ses->kbdprefix.repeat_count = 0;
                      if ( doc_view->document->nlinks )
                      {
                        do
                        {
                          doc_view->document->nlinks = ( (/*HI*/int)( doc_view->document->nlinks * 0x66666667 ) >> 2 ) - ( doc_view->document->nlinks >> 31 );
                        }
                        while ( ( (/*HI*/int)( ( ( (/*HI*/int)( doc_view->document->nlinks * status ) >> 2 ) - ( doc_view->document->nlinks >> 31 ) ) * 0x66666667 ) >> 2 ) != ( ( ( (/*HI*/int)( doc_view->document->nlinks * status ) >> 2 ) - ( doc_view->document->nlinks >> 31 ) ) >> 31 ) );
                        input_dialog( ses->tab->term, 0, "Go to link", "Enter link number", (void*)ses[0].next, 0, 1 + 1, ebp_26, 1, doc_view->document->nlinks, &check_number, &goto_link_number, 0 );
                        status = FRAME_EVENT_OK;
                        doc_view = &doc_view[0];
                      }
                    }
                  }
                }
                else
                {
                  draw_formatted( &ses[0], 0 );
                  ses->kbdprefix.repeat_count = ( ev->info.mouse.x - 48 ) + ( ses->kbdprefix.repeat_count * 10 );
                  if ( ( ev->info.mouse.x - 48 ) + ( ses->kbdprefix.repeat_count * 10 ) > 0x1869f )
                    ses->kbdprefix.repeat_count = 0;
                  else
                  {
                    if ( ses->kbdprefix.repeat_count )
                      highlight_links_with_prefixes_that_start_with_n( ses->tab->term, &doc_view[0], ses->kbdprefix.repeat_count );
                  }
                }
              }
              else
              {
                ses->kbdprefix.repeat_count = ses->kbdprefix.repeat_count;
                if ( ses->kbdprefix.repeat_count )
                {
                  draw_formatted( &ses[0], 0 );
                  ses->kbdprefix.repeat_count = ( ev->info.mouse.x - 48 ) + ( ses->kbdprefix.repeat_count * 10 );
                }
              }
              ses->kbdprefix.repeat_count = ev->info.mouse.x - 48;
            }
            if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 1 )
              try_document_key( &ses[0], &doc_view[0], &ev[0] );
          }
        }
        status = status;
      }
      else
      {
        if ( ev->ev == 2 )
        {
          if ( ( ev->info.mouse.button & 7 ) > 2 )
          {
            if ( ( ev->info.mouse.button & 32 ) == 0 )
            {
              if ( ( ev->info.mouse.button & 7 ) != 3 )
              {
                doc_view = &doc_view[0];
                if ( ( ev->info.mouse.button & 7 ) == 4 )
                  scroll_mouse_down( &ses[0], &doc_view[0] );
              }
            }
          }
          else
          {
            if ( get_link_at_coordinates( &doc_view[0], ev->info.mouse.x, ev->info.mouse.y ) )
            {
              doc_view->vs->current_link = ( ( get_link_at_coordinates( &doc_view[0], ev->info.mouse.x, ev->info.mouse.y ) - doc_view->document->links ) >> 2 ) * -991146299;
              ses->navigate_mode = NAVIGATE_LINKWISE;
              status = FRAME_EVENT_REFRESH;
              if ( status - 5 > 1 )
              {
                refresh_view( &ses[0], &doc_view[0], 0 );
                if ( ( ev->info.mouse.button & 7 ) <= 1 )
                {
                  ses->tab->term->prev_mouse_event.x = 0;
                  ses->tab->term->prev_mouse_event.y = 0;
                  ses->tab->term->prev_mouse_event.button = 0;
                  status = FRAME_EVENT_OK;
                }
                else
                {
                  link_menu( ses->tab->term, 0, (void*)ses[0].next );
                  status = FRAME_EVENT_OK;
                }
              }
            }
            else
            {
              status = FRAME_EVENT_IGNORED;
              if ( ( ( ev->info.mouse.button/*.1_1of4*/ & 7 ) & 255 ) == 0 )
              {
                if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) <= ev->info.mouse.y )
                {
                  if ( doc_view->box.height - *(int*)(get_opt_( config_options, (unsigned char*)config_options )) <= ev->info.mouse.y )
                    scroll_mouse_down( &ses[0], &doc_view[0] );
                  else
                  if ( ev->info.mouse.x < ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) * 2 ) )
                  {
                    horizontal_scroll( &ses[0], &doc_view[0], 0 - *(int*)(get_opt_( config_options, (unsigned char*)config_options )) );
                  }
                  else
                  if ( doc_view->box.width + ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) * -2 ) <= ev->info.mouse.x )
                  {
                    horizontal_scroll( &ses[0], &doc_view[0], *(int*)(get_opt_( config_options, (unsigned char*)config_options )) );
                  }
                }
              }
            }
          }
          scroll_mouse_up( &ses[0], &doc_view[0] );
        }
      }
      if ( status == FRAME_EVENT_REFRESH )
        continue;
    }
  }
  else
  {
    assert_failed = 0;
    return FRAME_EVENT_IGNORED;
  }
}
void send_event( struct session *ses, struct term_event *ev )
{
  int eax;
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( ev[0].ev == 0 ) | ( ses[0].next == 0 ) ) & 1;
    if ( ( ( ev[0].ev == 0 ) | ( ses[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 1528;
      elinks_internal( "assertion ses && ev failed!" );
      if ( assert_failed )
        ev = &ev[0];
        assert_failed = 0;
        return;
    }
    if ( ev->ev == 1 )
    {
      struct document_view *doc_view;
      if ( current_frame( &ses[0] ) == 0 || send_to_frame( &ses[0], current_frame( &ses[0] ), &ev[0] ) == FRAME_EVENT_IGNORED )
      {
        if ( kbd_action( KEYMAP_MAIN, &ev[0], ebp_28 ) != 76 )
        {
          while ( do_action( &ses[0], kbd_action( KEYMAP_MAIN, &ev[0], ebp_28 ), 0 ) < 1 )
          {
            if ( kbd_action( KEYMAP_MAIN, &ev[0], ebp_28 ) == 1 )
            {
              trigger_event(  );
              break;
            }
            else
            {
              if ( ev->info.mouse.x != -512 )
              {
                doc_view = ebp_60;
                if ( ev->info.mouse.y == 4 )
                {
                  ev->info.mouse.y = 0;
                  activate_bfu_technology( &ses[0], -1 );
                  ;
                }
                if ( !( ( ev->info.mouse.y & 2 ) & 255 ) && doc_view[0] )
                {
                  *ebp_76 = ebp_76;
                  switch ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
                  {
                  case 2:
                    break;
                  case 1:
                    break;
                  default:
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
                    errline = 1439;
                    elinks_internal( "invalid value for document.browse.search.typeahead" );
                    *ebp_76 = ebp_76;
                    break;
                  }
                  search_typeahead( &ses[0], &doc_view[0], edx );
                  term_send_event( ses->tab->term, &ev[0] );
                  break;
                }
                else
                  break;
              }
              else
              {
              }
            }
          }
          if ( do_action( &ses[0], ev->ev, 0 ) <= 2 )
          {
            if ( ses[0].next )
            {
              ses->kbdprefix.repeat_count = 0;
              return;
            }
            else
            {
              return;
            }
          }
          else
          if ( do_action( &ses[0], ev->ev, 0 ) == FRAME_EVENT_SESSION_DESTROYED )
          {
            return;
          }
        }
        else
        {
        }
      }
      else
      {
        return;
      }
    }
    else
    {
      if ( ev->ev == 2 )
      {
        struct document_view *doc_view;
        if ( ev->info.mouse.y == 0 )
        {
        }
        if ( !( ( ses->status.bits_at_0 & 1 ) & 255 ) || ev->info.mouse.y != ses->tab->term->height - 1 - ( ( ses->status.bits_at_0 >> 1 ) & 1 ) )
        {
          if ( assert_failed == 0 )
          {
            doc_view = current_frame( &ses[0] );
            assert_failed = 0;
            if ( current_frame( &ses[0] ) )
            {
              do
              {
                if ( doc_view[0] && doc_view->document )
                  assert_failed = 0;
                else
                {
                  assert_failed = 1;
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
                  errline = 1308;
                  elinks_internal( "assertion doc_view && doc_view-&gt;document failed!" );
                  if ( assert_failed )
                    goto B28;
                }
                if ( doc_view->document->options.box.x != doc_view->box.x || doc_view->document->options.box.y != doc_view->box.y )
                {
                  assert_failed = 1;
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
                  errline = 1313;
                  elinks_internal( "assertion doc_view-&gt;document-&gt;options.box.x == doc_view-&gt;box.x && doc_view-&gt;document-&gt;options.box.y == doc_view-&gt;box.y failed: Jonas' 1.565 -&gt; 1.566 patch sucks" );
                  if ( assert_failed )
                    goto B28;
                }
                else
                  assert_failed = 0;
                if ( doc_view->box.x <= ev->info.mouse.x && doc_view->box.y <= ev->info.mouse.y && ev->info.mouse.x < doc_view->box.width + doc_view->box.x && ev->info.mouse.y < doc_view->box.y + doc_view->box.height )
                {
                  if ( doc_view[0].next != current_frame( &ses[0] ) )
                  {
                    ev->info.mouse.x = ev->info.mouse.x;
                    draw_formatted( &ses[0], 0 );
                    doc_view->box.x = doc_view->box.x;
                  }
                  if ( send_to_frame( &ses[0], &doc_view[0], ebp_44 ) == FRAME_EVENT_IGNORED )
                  {
                    if ( ( ev->info.mouse.button & 7 ) == 2 )
                    {
                      tab_menu( &ses[0], ev->info.mouse.x, ev->info.mouse.y, 0 );
                      break;
                    }
                  }
                  if ( ( ( ses->status.bits_at_8/*.1_1of4*/ & 1 ) & 255 ) && ses->tab->term->height == ev->info.mouse.y && ses->tab->term->width - 9 <= ev->info.mouse.x )
                  {
                    menu_leds_info( ses->tab->term, 0, 0 );
                    break;
                  }
                }
                else
                {
                  next_frame( &ses[0], 1 );
                  doc_view = current_frame( &ses[0] );
                  if ( current_frame( &ses[0] ) == current_frame( &ses[0] ) )
                    continue;
                  else
                  {
                  }
                }
              }
              while ( assert_failed );
            }
          }
B28:          assert_failed = 0;
        }
        else
        {
          get_tab_by_number( ses->tab->term, ses->tab->term->current_tab );
          if ( ev->info.mouse.button & 32 )
          {
            if ( ( ev->info.mouse.button & 7 ) == 1 && ses->tab->term->current_tab == get_tab_number_by_xpos( ses->tab->term, ev->info.mouse.x ) && ev->info.mouse.y == ses->tab->term->prev_mouse_event.y )
            {
              ses = ses[0].next == *(int*)(get_tab_by_number( ses->tab->term, ses->tab->term->current_tab ) + 16) ? &ses[0] : 0;
              close_tab( ses->tab->term, *(int*)(get_tab_by_number( ses->tab->term, ses->tab->term->current_tab ) + 16) );
            }
          }
          else
          {
            if ( ( ev->info.mouse.button & 7 ) == 3 )
              switch_current_tab( &ses[0], -1 );
            else
            {
              if ( ( ev->info.mouse.button & 7 ) == 4 )
                switch_current_tab( &ses[0], 1 );
              else
              {
                if ( do_action( &ses[0], ev->ev, 0 ) != -1 )
                {
                  switch_to_tab( ses->tab->term, do_action( &ses[0], ev->ev, 0 ), -1 );
                  if ( ( ev->info.mouse.button & 7 ) == 1 )
                    memset( *ebp_120 + 332, ev->info.mouse.button & 32, 12 );
                  else
                  {
                    if ( ( ev->info.mouse.button & 7 ) == 2 )
                      tab_menu( *(int*)(eax + 16), ev->info.mouse.x, ev->info.mouse.y, 1 );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
enum frame_event_status  download_link( struct session *ses, struct document_view *doc_view, action_id_T action_id )
{
  int eax;
  struct link *link;
  void (*download)( void *, unsigned char * );
  if ( doc_view && doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks )
  {
    link = doc_view->document->links + ( doc_view->vs->current_link * 52 );
    if ( doc_view->document->links[ doc_view->vs->current_link ].accesskey )
    {
      if ( ses->download_uri )
      {
        done_uri( ses->download_uri );
        ses->download_uri = 0;
      }
      switch ( action_id )
      {
      case '\'':
        download[0] = resume_download;
        ses->download_uri = get_link_uri( &ses[0], &doc_view[0], link );
        break;
      case '%':
        download[0] = start_download;
        ses->download_uri = get_link_uri( &ses[0], &doc_view[0], link );
        break;
      case '&':
        if ( link->where_img )
        {
          download[0] = start_download;
          ses->download_uri = get_uri( link->where_img, 0 );
        }
        else
        {
          ses->download_uri->string = (unsigned char*)ses->download_uri;
          download[0] = start_download;
        }
        break;
      default:
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
        errline = 1575;
        elinks_internal( "I think you forgot to take your medication, mental boy!" );
        doc_view = &doc_view[0];
        return FRAME_EVENT_OK;
        break;
      }
      if ( get_link_uri( &ses[0], &doc_view[0], link ) )
      {
        set_session_referrer( &ses[0], doc_view->document->uri );
        query_file( &ses[0], ses->download_uri, (void*)ses[0].next, &download[0], 0, 1 );
        return FRAME_EVENT_OK;
      }
      else
      {
        return FRAME_EVENT_OK;
      }
    }
    else
    {
      return FRAME_EVENT_OK;
    }
  }
  else
  {
    return FRAME_EVENT_OK;
  }
}
enum frame_event_status  view_image( struct session *ses, struct document_view *doc_view, int xxxx )
{
  int edx;
  struct link *link;
  if ( doc_view && doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->options.assume_cp && link[0] && link->where_img )
  {
    goto_url( ses, link->where_img );
  }
  return FRAME_EVENT_OK;
}
enum frame_event_status  save_as( struct session *ses, struct document_view *doc_view, int magic )
{
  int eax;
  if ( assert_failed == 0 )
  {
    assert_failed = ses[0].next == 0;
    if ( !(_Bool)( ses[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 1601;
      elinks_internal( "assertion ses failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    if ( ses->history.current )
    {
      if ( ses->download_uri )
      {
        done_uri( ses->download_uri );
        ses->history.current = ses->history.current;
      }
      ses->download_uri = ses->history.current->vs.uri;
      ses->history.current->vs.uri->object.object++;
      if ( assert_failed == 0 )
      {
        if ( doc_view[0] && doc_view->document && doc_view->document->uri )
          assert_failed = 0;
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
          errline = 1609;
          elinks_internal( "assertion doc_view && doc_view-&gt;document && doc_view-&gt;document-&gt;uri failed!" );
          if ( assert_failed )
            goto B2;
        }
        set_session_referrer( &ses[0], doc_view->document->uri );
        query_file( &ses[0], ses->download_uri, (void*)ses[0].next, &start_download, 0, 1 );
        return FRAME_EVENT_OK;
      }
    }
    else
    {
      return FRAME_EVENT_OK;
    }
  }
B2:  assert_failed = 0;
  return FRAME_EVENT_OK;
}
void save_formatted_finish( struct terminal *term, int h, void *data, int resume )
{
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( ((int*)data)[0] == 0 ) | ( term[0].next == 0 ) ) & 1;
    if ( ( ( ((int*)data)[0] == 0 ) | ( term[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 1623;
      elinks_internal( "assertion term && document failed!" );
      if ( assert_failed )
        term = &term[0];
        assert_failed = 0;
        return;
    }
    if ( h != -1 )
    {
      if ( dump_to_file( &((int*)data)[0], h ) )
        info_box( &term[0], 0, "Save error", ALIGN_CENTER, "Error writing to file" );
      term = &h;
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
void save_formatted( void *data, unsigned char *file )
{
  int eax;
  struct document_view *doc_view;
  if ( assert_failed == 0 )
  {
    if ( ((int*)data)[0] && ((int*)data)[2] && file[0] && ((int*)data)[2] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
      errline = 1640;
      elinks_internal( "assertion ses && ses-&gt;tab && ses-&gt;tab-&gt;term && file failed!" );
      if ( assert_failed )
      {
        file[0] = file[0];
      }
    }
    current_frame( &((int*)data)[0] );
    if ( assert_failed == 0 )
    {
      if ( doc_view[0] && doc_view->document )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/view.c";
        errline = 1643;
        elinks_internal( "assertion doc_view && doc_view-&gt;document failed!" );
        if ( assert_failed )
          goto B2;
      }
      create_download_file( &((int*)data)[2], &file[0], 0, 0, 0, &save_formatted_finish, *(int*)(current_frame( &((int*)data)[0] ) + 20) );
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
enum frame_event_status  save_formatted_dlg( struct session *ses, struct document_view *doc_view, int xxxx )
{
  query_file( ses, doc_view->vs->uri, (void*)ses, &save_formatted, 0, 1 );
  return FRAME_EVENT_OK;
}
#if 0
#endif
