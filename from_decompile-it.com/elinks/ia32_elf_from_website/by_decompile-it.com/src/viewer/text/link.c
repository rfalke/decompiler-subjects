#include "link.c.h"
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
void set_link( struct document_view *doc_view )
{
  if ( assert_failed == 0 )
  {
    assert_failed = doc_view[0].next == 0;
    if ( !(_Bool)( doc_view[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 104;
      elinks_internal( "assertion doc_view failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( current_link_is_visible( &doc_view[0] ) == 0 )
    {
      doc_view = &doc_view[0];
    }
    return;
  }
B2:  assert_failed = 0;
  return;
}
void draw_current_link( struct session *ses, struct document_view *doc_view )
{
  int ecx;
  int edx;
  struct terminal *term = ses->tab->term;
  struct link *link;
  int cursor_offset;
  int xpos, ypos;
  int i;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses->tab->term && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 238;
      elinks_internal( "assertion term && doc_view && doc_view-&gt;vs failed!" );
      if ( assert_failed )
        doc_view = &doc_view[0];
    }
    assert_failed = ses->tab != get_tab_by_number( term, term->current_tab );
    if ( ses->tab != get_tab_by_number( term, term->current_tab ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 241;
      elinks_internal( "assertion ses-&gt;tab == get_current_tab(term) failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( doc_view[0] && doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] )
    {
      i = 1;
      if ( link->type - 5 <= 1 )
      {
        i = 0;
        i/*.1_1of4*/ = ses->insert_mode == INSERT_MODE_OFF;
      }
      template.attr = 64;
      xpos = doc_view->document->options.color_mode;
      if ( ( doc_view->document->options.active_link.bits_at_0 & 2 ) & 255 )
      {
        template.attr = 96;
        *(int*)(*(char*)(eax + 108)) = (int)doc_view->document->options.active_link.bits_at_0/*.1_1of4*/;
      }
      if ( ( (int)doc_view->document->options.active_link.bits_at_0/*.1_1of4*/ & 4 ) & 255 )
      {
        template.attr |= 8;
        *(int*)(*(char*)(eax + 108)) = (int)doc_view->document->options.active_link.bits_at_0/*.1_1of4*/;
      }
      if ( i && ( ( *(char*)(doc_view->document + 108) & 8 ) & 255 ) && link->type - 5 <= 1 )
      {
      }
      set_term_color( &template, ebp_32, doc_view->document->options.color_flags | 1, xpos );
      xpos = doc_view->box.x - doc_view->vs->x;
      ypos = doc_view->box.y - doc_view->vs->y;
      if ( ses->insert_mode == INSERT_MODE_OFF )
      {
        cursor_offset = -1;
        if ( ses->navigate_mode == NAVIGATE_CURSOR_ROUTING )
        {
          if ( link->npoints >= 1 )
          {
            i = 0;
            link = &link[0];
          {
            do
            {
              int x = link->points[ i ].x + xpos;
              int y;
              struct screen_char *co;
              link->points[ i ].y = link->points[ i ].y;
              if ( doc_view->box.x <= link->points[ i ].x + xpos )
              {
                y = ypos + link->points[ i ].y;
                if ( doc_view->box.y <= y && x < doc_view->box.x + doc_view->box.width && y < doc_view->box.y + doc_view->box.height )
                {
                  co = get_char(  );
                  if ( i == cursor_offset )
                  {
                    set_cursor( term, x, y, ( link->type - 5 > 1 ) & ( template.data != co ) );
                    ses->tab->x = x;
                    ses->tab->y = y;
                  }
                  template.data = co[0].data;
                  co->attr = template.attr;
                  co[0].data = template.data;
                  if ( y < term->screen->dirty_from )
                    term->screen->dirty_from = y;
                  if ( term->screen->dirty_to < y )
                  {
                    term->screen->dirty_to = y;
                    link = &link[0];
                  }
                }
              }
              i++;
            }
            while ( i + 1 < link->npoints );
            doc_view = &doc_view[0];
          }
          }
          doc_view->vs->old_current_link = doc_view->vs->current_link;
          return;
        }
      }
      cursor_offset = 1;
      if ( link->type != LINK_CHECKBOX )
      {
        if ( ccdep1 < ccdep2 )
        {
          if ( link->type != LINK_FIELD )
          {
            if ( link->type == LINK_AREA && find_form_state( &doc_view[0], &link->data.name[0] ) )
            {
              cursor_offset = area_cursor( &link->data.name[0], find_form_state( &doc_view[0], &link->data.name[0] ), ( (int)doc_view->session->tab->term->bits_at_56/*.1_1of4*/ >> 1 ) & 1 );
            }
          }
          else
          {
            if ( find_form_state( &doc_view[0], &link->data.name[0] ) && *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 16) )
            {
              if ( ( (int)doc_view->session->tab->term->bits_at_56/*.1_1of4*/ >> 1 ) & 1 )
              {
                *(int*)(*(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 16)) += *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 20);
                if ( *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 12) == 1 )
                {
                  cursor_offset = eax;
                }
                else
                {
                  cursor_offset = eax;
                }
              }
              else
                cursor_offset = *(int*)(utf8_ptr2cells( doc_view->document->options.color_flags | 1, &y ) + 20) - *(int*)(utf8_ptr2cells( doc_view->document->options.color_flags | 1, &y ) + 28);
            }
          }
        }
        else
        {
          cursor_offset = 2;
          if ( link->type == LINK_BUTTON )
            continue;
        }
        cursor_offset = 0;
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
void clear_link( struct terminal *term, struct document_view *doc_view )
{
  int ecx;
  int edx;
  struct link *link;
  struct link *last;
  if ( doc_view )
  {
    if ( doc_view->vs->old_current_link >= 0 && doc_view->vs->old_current_link < doc_view->document->nlinks && link[0].accesskey != doc_view->document->links[ last[0].accesskey ].accesskey && last[0] && last->npoints >= 1 )
    {
      eax = &doc_view->box.x;
      last = &last[0];
      while ( 1 )
      {
        if ( doc_view->box.x <= last->points[ 0 ].x + ( doc_view->box.x - doc_view->vs->x ) && doc_view->box.y <= ( doc_view->box.y - doc_view->vs->y ) + last->points[ 0 + 1 ].y && last->points[ 0 + 1 ].x + ( doc_view->box.x - doc_view->vs->x ) < doc_view->box.x + doc_view->box.width && ebp_28 < ebp_36 + *(int*)(ebp_60 + 40) )
        {
          *(int*)(get_char(  )) = doc_view->document->data[ last->points[ 0 + 1 ].y ].chars[ last->points[ 0 + 1 ].x ].data;
          *(int*)(get_char(  ) + 4) = doc_view->document->data[ last->points[ 0 + 1 ].y ].chars[ last->points[ 0 + 1 ].x ].attr;
          if ( ebp_28 < term->screen->dirty_from )
            term->screen->dirty_from = ecx;
          if ( *(int*)(&eax[3].attr) < ebp_28 )
          {
            term->screen->dirty_to = edx;
            last = &last[0];
          }
        }
        if ( last->npoints <= 0 + 1 + 1 )
          break;
        else
        {
          *(int*)(*(int*)(ebp_60 + 28)) = doc_view->box.x;
        }
      }
      doc_view = &doc_view[0];
    }
    else
    {
      doc_view->vs->old_current_link = doc_view->vs->current_link;
      return;
    }
  }
  doc_view->vs->current_link = doc_view->vs->current_link;
  doc_view->vs->old_current_link = doc_view->vs->current_link;
  return;
}
void highlight_links_with_prefixes_that_start_with_n( struct terminal *term, struct document_view *doc_view, int n )
{
  int eax;
  int ecx;
  int edx;
  int ebp_44;
  struct color_pair *color = get_bfu_color( term, "searched" );
  int xoffset = doc_view->box.x - doc_view->vs->x;
  int yoffset = doc_view->box.y - doc_view->vs->y;
  struct document *document = doc_view->document;
  int m;
  if ( n <= doc_view->document->nlinks )
  {
    m = n + 1;
    linkn = n;
  {
    while ( m <= linkn || doc_view->document->nlinks < linkn )
    {
      n *= 10;
      if ( document->nlinks < n * 10 )
        break;
      m *= 10;
    }
    link = &document->links[ linkn - 1 ];
    ebp_44 = linkn * 52;
    while ( link->npoints < 1 )
    {
      linkn++;
      if ( m <= linkn || document->nlinks < linkn )
      {
        n *= 10;
      }
      else
      {
        ebp_44 += 52;
      }
    }
    i = 0;
  {
    do
    {
      int x = link->points[ i ].x + xoffset;
      int y;
      link->points[ i ].y = link->points[ i ].y;
      if ( doc_view->box.x <= link->points[ i ].x + xoffset )
      {
        y = yoffset + link->points[ i ].y;
        if ( doc_view->box.y <= y && x < doc_view->box.width + doc_view->box.x && y < doc_view->box.height + doc_view->box.y )
        {
          draw_char_color( term, x, y, color );
          i = i;
        }
      }
      i++;
    }
    while ( i + 1 < link->npoints );
    linkn++;
  }
  }
  }
  return;
}
struct link *get_first_link( struct document_view *doc_view )
{
  int eax;
  struct link *link, *undef;
  struct document *document;
  int height;
  int i;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 366;
      elinks_internal( "assertion doc_view && doc_view-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    &document[0] = doc_view->document;
    if ( document->lines1 && ( (unsigned char)( ( ( height >> 31 ) & 1 ) ^ 1 ) ? 0 : height ) < ( *(int*)(doc_view->document + 256) < height + height ? height + height : doc_view->document->height ) )
    {
      undef = &document->links[ undef[0].accesskey ];
      link[0].accesskey = document->links[ undef[0].accesskey ].accesskey;
      do
      {
        i++;
      }
      while ( height <= i + 1 );
      if ( undef[0].accesskey != link[0].accesskey )
      {
        return 0;
      }
    }
    link[0].accesskey = 0;
    return 0;
  }
B2:  assert_failed = 0;
  link[0].accesskey = 0;
  return 0;
}
struct link *get_last_link( struct document_view *doc_view )
{
  int eax;
  int ecx;
  struct link *link;
  struct document *document;
  int height;
  int i;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 395;
      elinks_internal( "assertion doc_view && doc_view-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    document = doc_view->document;
    if ( document->lines2 == 0 || ( document->height < doc_view->vs->y + doc_view->box.height ? doc_view->vs->y + doc_view->box.height : document->height ) <= ( (unsigned char)( ( ( doc_view->vs->y >> 31 ) & 1 ) ^ 1 ) ? 0 : doc_view->vs->y ) )
    {
      link[0].accesskey = 0;
      return 0;
    }
    link[0].accesskey = 0;
    do
    {
      link[0].accesskey = link[0].accesskey < document->lines2[ i ] ? link[0].accesskey : document->lines2[ i ];
      i++;
    }
    while ( i + 1 < height );
    return link[0].accesskey < document->lines2[ i ] ? &link[0] : document->lines2[ i ];
  }
B2:  assert_failed = 0;
  link[0].accesskey = 0;
  return 0;
}
int link_in_view_y( struct document_view *doc_view, struct link *link )
{
  int i, dy, height;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( link[0].accesskey == 0 ) | ( doc_view[0].next == 0 ) ) & 1;
    if ( ( ( link[0].accesskey == 0 ) | ( doc_view[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 439;
      elinks_internal( "assertion doc_view && link failed!" );
      if ( assert_failed )
      {
      }
    }
    dy = height = height;
    if ( link->npoints >= 1 )
    {
      int y = link->points[3].x - dy;
      if ( link->points[3].x - dy < height && link->points[3].x - dy >= 0 )
      {
      }
      else
      {
        i = 0;
        do
        {
          i++;
          if ( link->npoints <= i + 1 )
            break;
          y = link->points[ i ].y - dy;
        }
        while ( link->points[ i ].y - dy < height && y >= 0 );
      }
      return 0;
    }
    return 0;
  }
  assert_failed = 0;
  return 0;
}
int link_in_view( struct document_view *doc_view, struct link *link )
{
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( doc_view[0].next == 0 ) | ( link[0].accesskey == 0 ) ) & 1;
    if ( ( ( doc_view[0].next == 0 ) | ( link[0].accesskey == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 458;
      elinks_internal( "assertion doc_view && link failed!" );
      if ( assert_failed )
        doc_view = &doc_view[0];
    }
    if ( link_in_view_y( &doc_view[0], &link[0] ) )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = ( ( doc_view[0].next == 0 ) | ( link[0].accesskey == 0 ) ) & 1;
        if ( assert_failed )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
          errline = 418;
          elinks_internal( "assertion doc_view && link failed!" );
          if ( assert_failed )
            goto B2;
        }
        if ( link->npoints >= 1 )
        {
          if ( link->points[3].x - doc_view->box.width < doc_view->box.width && link->points[3].x - doc_view->box.width >= 0 )
          {
          }
          do
          {
            if ( 0 + 1 + 1 < link->npoints )
              continue;
          }
          while ( link->points[ link_in_view_y( &doc_view[0], &link[0] ) ].x - doc_view->box.width < doc_view->box.width && link->points[ 0 ].x - doc_view->box.width >= 0 );
          return 1;
        }
      }
    }
    return 0;
  }
B2:  assert_failed = 0;
  return 0;
}
int current_link_is_visible( struct document_view *doc_view )
{
  int eax;
  struct link *link;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 468;
      elinks_internal( "assertion doc_view && doc_view-&gt;vs failed!" );
      if ( assert_failed == 0 )
      {
        if ( doc_view[0].next == 0 )
        {
          return 0;
        }
      }
    }
    if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] )
    {
    }
    return 0;
  }
  assert_failed = 0;
}
int next_link_in_view_( struct document_view *doc_view, int current, int direction, int (*fn)( struct document_view *, struct link * ), void (*cntr)( struct document_view *, struct link * ) )
{
  struct document *document;
  struct view_state *vs;
  int start, end;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && doc_view->document && fn && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 508;
      elinks_internal( "assertion doc_view && doc_view-&gt;document && doc_view-&gt;vs && fn failed!" );
      if ( assert_failed )
        goto B2;
    }
    document = doc_view->document;
    vs = doc_view->vs;
    start = doc_view->document->nlinks - 1;
    end = 0;
    if ( ( (unsigned char)( ( ( *(int*)(*(int*)(doc_view[0].next + 24) + 28) >> 31 ) & 1 ) ^ 1 ) ? 0 : doc_view->vs->y ) < ( *(int*)(doc_view[0].next + 40) + *(int*)(*(int*)(doc_view[0].next + 24) + 28) <= document->height ? document->height : doc_view->vs->y + doc_view->box.height ) )
    {
      do
      {
        if ( document->lines1[ (unsigned char)( ( ( *(int*)(*(int*)(doc_view[0].next + 24) + 28) >> 31 ) & 1 ) ^ 1 ) ? 0 : doc_view->vs->y ] )
          start = start <= ( ( edx - document->links ) >> 2 ) * -991146299 ? ( ( edx - document->links ) >> 2 ) * -991146299 : start;
      }
      while ( ( (unsigned char)( ( ( *(int*)(*(int*)(doc_view[0].next + 24) + 28) >> 31 ) & 1 ) ^ 1 ) ? 0 : doc_view->vs->y ) + 1 + 1 < ( *(int*)(doc_view[0].next + 40) + *(int*)(*(int*)(doc_view[0].next + 24) + 28) <= document->height ? document->height : doc_view->vs->y + doc_view->box.height ) );
    }
    if ( start <= current && current <= end )
    {
      direction = direction;
      do
      {
        if ( fn( &doc_view[0] ) )
        {
          document = &document[0];
          vs->current_link = current + direction;
          if ( cntr )
          {
            cntr( &doc_view[0], &document->links[ current ] );
            return 1;
          }
          break;
        }
        else
      }
      while ( start <= direction + current && ( direction + current + direction ) - direction <= end );
    }
    vs->current_link = -1;
    return 0;
  }
B2:  assert_failed = 0;
  return 0;
}
int next_link_in_view( struct document_view *doc_view, int current, int direction )
{
  int ecx;
  int edx;
  doc_view = &link_in_view;
  current = 0;
}
int next_link_in_view_y( struct document_view *doc_view, int current, int direction )
{
  int ecx;
  int edx;
  doc_view = &link_in_view_y;
  current = set_pos_x;
}
void get_link_x_bounds( struct link *link, int y, int *min_x, int *max_x )
{
  int eax;
  int ecx;
  int point;
  if ( min_x )
    min_x[0] = 0x7fffffff;
  if ( max_x[0] )
    max_x[0] = 0;
  if ( link->npoints >= 1 )
  {
    point = 0;
    do
    {
      if ( y < 0 || y == link->points->y )
      {
        min_x[0] = min_x;
        if ( min_x && link->points[1].x < min_x[0] )
          min_x[0] = link->points[1].x;
        if ( max_x[0] && max_x[0] < link->points[1].x )
        {
          max_x[0] = link->points[1].x;
          point++;
          if ( link->npoints <= point + 1 )
          {
            break;
          }
        }
      }
      point++;
    }
    while ( point + 1 < link->npoints );
  }
  return;
}
int next_link_in_dir( struct document_view *doc_view, int dir_x, int dir_y )
{
  int eax;
  int ecx;
  int edx;
  int ebp_84;
  int ebp_80;
  int ebp_76;
  int ebp_52;
#error unstructured control flow
}
void set_pos_x( struct document_view *doc_view, struct link *link )
{
  int ecx;
  int edx;
#error unstructured control flow
}
void set_pos_y( struct document_view *doc_view, struct link *link )
{
  int ecx;
  int ym;
  int height;
  int i;
  if ( assert_failed == 0 )
  {
    if ( doc_view && doc_view->document && link[0] && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 768;
      elinks_internal( "assertion doc_view && doc_view-&gt;document && doc_view-&gt;vs && link failed!" );
      if ( assert_failed )
        goto B2;
    }
    ym = 0;
    height = doc_view->document->height;
    if ( link->npoints >= 1 )
    {
      i = 0;
      do
      {
        ym = link->points[ i ].y + 1;
        ym = ym < *(int*)(link->points + ( i << 3 ) + 4) + 1 ? ym : link->points[ i ].y + 1;
        height = *(int*)(link->points + ( i << 3 ) + 4) < height ? height : link->points[ i ].y;
        i++;
      }
      while ( link->npoints != i + 1 );
    }
    doc_view->vs->y = ( ( ym + height ) - doc_view->box.height ) / 2;
    height = doc_view->document->height;
    if ( doc_view->vs->y < 0 )
    {
      doc_view->vs->y = 0;
      return;
    }
    if ( height - doc_view->box.height - doc_view->box.height < doc_view->vs->y )
    {
      doc_view->vs->y = height - doc_view->box.height;
      return;
    }
    return;
  }
B2:  assert_failed = 0;
  return;
}
void find_link( struct document_view *doc_view, int direction, int page_mode )
{
  int eax;
  struct link **line;
  struct link *link;
  int y, ymin, ymax;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && doc_view->document && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 792;
      elinks_internal( "assertion doc_view && doc_view-&gt;document && doc_view-&gt;vs failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( direction == -1 )
    {
      if ( doc_view->document->lines2 )
      {
        y = doc_view->vs->y;
        y = doc_view->document->height - 1;
        y = *(int*)(doc_view->document + 256) - 1 < ( doc_view->vs->y + doc_view->box.height ) - 1 ? ( doc_view->vs->y + doc_view->box.height ) - 1 : doc_view->document->height - 1;
        if ( ( *(int*)(doc_view->document + 256) - 1 < ( doc_view->vs->y + doc_view->box.height ) - 1 ? ( doc_view->vs->y + doc_view->box.height ) - 1 : doc_view->document->height - 1 ) >= 0 )
        {
          ymin = (unsigned char)( ( ( y >> 31 ) & 1 ) ^ 1 ) ? 0 : y;
          link = 0;
        {
          do
          {
            struct link *cur = *(int*)(doc_view->document->lines2[ y ] - 4);
            y--;
            if ( doc_view->document->lines2[ y ] && ( link[0].accesskey < cur[0].accesskey || link[0].accesskey == 0 ) )
              link = &cur[0];
            if ( y < ymin )
            {
              if ( link[0].accesskey )
              {
                if ( page_mode )
                {
                  next_link_in_view( &doc_view[0], ( ( link[0].accesskey - doc_view->document->links ) >> 2 ) * -991146299, direction );
                  return;
                }
                doc_view->vs->current_link = ( ( link[0].accesskey - doc_view->document->links ) >> 2 ) * -991146299;
                set_pos_x( &doc_view[0], &link[0] );
                return;
              }
              else
                break;
            }
            else
            {
            }
          }
          while ( ( link[0].accesskey <= doc_view->document->height ? doc_view->document->height : link[0].accesskey ) <= y );
        }
        }
        else
        {
          doc_view->vs->current_link = -1;
          return;
        }
      }
    }
    else
    {
      line[0] = doc_view->document->lines1[0];
      if ( doc_view->document->lines1 )
      {
        y = doc_view->vs->y;
        y = (unsigned char)( ( ( doc_view->vs->y >> 31 ) & 1 ) ^ 1 ) ? 0 : doc_view->vs->y;
        if ( ( (unsigned char)( ( ( doc_view->vs->y >> 31 ) & 1 ) ^ 1 ) ? 0 : doc_view->vs->y ) < doc_view->document->height )
        {
          link = 0;
        {
          do
          {
            struct link *cur = &line[ y ]->type;
            y++;
            if ( line[ y ] && ( cur[0].accesskey < link[0].accesskey || link[0].accesskey == 0 ) )
              link = &cur[0];
          }
          while ( y < y || ( doc_view->box.height + y <= doc_view->document->height ? doc_view->document->height : doc_view->box.height + y ) <= y );
        }
        }
        else
        {
          doc_view->vs->current_link = -1;
          return;
        }
      }
    }
    doc_view->vs->current_link = -1;
    return;
  }
B2:  assert_failed = 0;
  return;
}
void find_link_up( struct document_view *doc_view )
{
  int eax;
}
void find_link_page_up( struct document_view *doc_view )
{
  int eax;
}
void find_link_down( struct document_view *doc_view )
{
  int eax;
}
void find_link_page_down( struct document_view *doc_view )
{
  int eax;
}
struct uri *get_link_uri( struct session *ses, struct document_view *doc_view, struct link *link )
{
  int eax;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && link[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 881;
      elinks_internal( "assertion ses && doc_view && link failed!" );
      if ( assert_failed )
        doc_view = &doc_view[0];
        assert_failed = 0;
        return 0;
    }
    if ( link->type != LINK_BUTTON )
    {
      if ( !0 )
      {
        if ( link->type != LINK_FIELD )
        {
          return 0;
        }
      }
      else
      {
        if ( link->where )
          doc_view = 0;
        else
        {
          doc_view = 0;
          link->where_img[0] = link->where_img;
        }
        ses = &link->where[0];
      }
    }
    doc_view = &doc_view[0];
    ses = &ses[0];
    link = &link->data.name/*union*/;
  }
  else
  {
    assert_failed = 0;
    return 0;
  }
}
struct link *goto_current_link( struct session *ses, struct document_view *doc_view, int do_reload )
{
  int eax;
  int edx;
  struct link *link;
  struct uri *uri;
  if ( assert_failed )
  {
    assert_failed = 0;
    link[0].accesskey = 0;
    return &link[0];
  }
  assert_failed = ( ( doc_view[0].next == 0 ) | ( ses[0].next == 0 ) ) & 1;
  if ( ( ( doc_view[0].next == 0 ) | ( ses[0].next == 0 ) ) & 1 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
    errline = 962;
    elinks_internal( "assertion doc_view && ses failed!" );
    if ( assert_failed )
      continue;
    if ( doc_view[0].next == 0 )
    {
      link[0].accesskey = 0;
      return &link[0];
    }
  }
  else
  if ( doc_view[0].next == 0 )
    continue;
  if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks )
  {
    link[0].accesskey = doc_view->document->links + ( link[0].accesskey * 52 );
    if ( link[0].accesskey )
    {
      if ( link->type > 1 )
      {
        struct form_control *fc = &link->data.name[0];
        if ( fc->type != FC_BUTTON )
        {
          assert_failed = fc->form == 0;
          if ( !(_Bool)( fc->form != 0 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
            errline = 907;
            elinks_internal( "assertion fc-&gt;form failed!" );
            if ( assert_failed )
              ses = &ses[0];
          }
          *ebp_32 = ebp_32;
          if ( get_form_uri( &ses[0], ebp_28, &fc[0] ) )
          {
            goto_uri_frame( &ses[0], &eax[0], fc->form->target, edx );
            done_uri( ebp_28 );
            return &link[0];
          }
        }
        else
        {
          return &link[0];
        }
      }
      else
      {
        if ( get_link_uri( &ses[0], &doc_view[0], &link[0] ) )
        {
          if ( link->type == LINK_MAP )
          {
            if ( link->target )
              stracpy( link->target );
            goto_imgmap( &ses[0], &uri[0], stracpy( link->target ) );
          }
          else
          {
            enum cache_mode  mode;
            goto_uri_frame( &ses[0], &uri[0], link->target, ( ( 0 - ( ( do_reload < 1 ) & 1 ) ) & -2 ) + 3 );
          }
          done_uri( &uri[0] );
          return &link[0];
        }
      }
    }
    else
    {
      return &link[0];
    }
  }
}
name/*union*/name/*union*/name/*union*/name/*union*/name/*union*/name/*union*/enum frame_event_status  enter( struct session *ses, struct document_view *doc_view, int do_reload )
{
  int eax;
  int ecx;
  int edx;
  struct link *link;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 1080;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( doc_view[0] && doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] )
    {
      if ( link->type <= 6 )
      {
        if ( ( ( 1 << link->type ) & 103 ) == 0 )
        {
          if ( ( ( 1 << link->type ) & 16 ) == 0 )
          {
            if ( ( 1 << link->type ) & 8 )
            {
              if ( !name/*union*/link->data.name/*union*/ && find_form_state( &doc_view[0], &link->data.name[0] ) )
              {
                if ( name/*union*/name/*union*/link->data.name/*union*/ == 4 )
                {
                  *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 20) = *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 20) == 0;
                  return FRAME_EVENT_REFRESH;
                }
                *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 20) = 1;
                if ( doc_view->document->forms.next != doc_view->document->forms.next )
                {
                  do
                  {
                    if ( doc_view->document->forms.next == name/*union*/link->data.name/*union*/ && doc_view->document->forms.next != doc_view->document->forms.next[9] )
                    {
                      do
                      {
                        if ( *(int*)(esi + 20) == 5 && !eax && esi != edx && eax )
                          return FRAME_EVENT_IGNORED;
                      }
                      while ( esi != ecx );
                      doc_view->document = doc_view->document;
                    }
                  }
                  while ( doc_view->document != doc_view->document->forms.next[0] );
                }
              }
            }
          }
          else
          {
            if ( link->data.name[24] == 0 )
            {
              doc_view->document->object.object++;
              add_empty_window( ses->tab->term, &release_document, (void*)doc_view->document );
              do_select_submenu( ses->tab->term, name/*union*/(int)( name/*union*/&link->data.name/*union*/ ), (void*)ses[0].next );
            }
          }
        }
        else
        {
          if ( goto_current_link( &ses[0], &doc_view[0], do_reload ) )
            goto B26;
        }
B26:      }
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 1069;
      elinks_internal( "bad link type %d" );
    }
  }
B2:  assert_failed = 0;
}
struct link *get_link_at_coordinates( struct document_view *doc_view, int x, int y )
{
  int eax;
  int edx;
  int ebp_36;
  struct link *l1, *l2, *link;
  int i, height;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 1103;
      elinks_internal( "assertion doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
      {
      }
    }
    if ( doc_view->document->nlinks && x >= 0 && x < doc_view->box.width && y >= 0 && y < doc_view->box.height )
    {
      l2 = doc_view->document->links;
      l1 = doc_view->document->links + ( doc_view->document->nlinks * 52 );
      i = doc_view->vs->y;
      ebp_36 = height = height + doc_view->box.height <= *(int*)(doc_view->document + 256) ? doc_view->document->height : height + doc_view->box.height;
      while ( *ebp_44 = height + doc_view->box.height <= *(int*)(doc_view->document + 256) ? doc_view->document->height : height + doc_view->box.height, ebp_36 < ( height + doc_view->box.height <= *(int*)(doc_view->document + 256) ? doc_view->document->height : height + doc_view->box.height ) )
      {
        if ( doc_view->document->lines1[ height ] )
          l1 = l1 <= doc_view->document->lines1[ height ]->type ? &doc_view->document->lines1[ height ]->type : l1;
        ebp_36++;
      }
      i += y;
      x += doc_view->vs->x;
      link[0].accesskey = l1;
      while ( link[0].accesskey <= l2[0].accesskey )
      {
        if ( link->npoints >= 1 )
        {
          i = 0;
          l1 = &link->npoints;
          do
          {
            if ( x == link->points[ i ].x && y + i == link->points[ i ].y )
            {
              break;
            }
            i++;
          }
          while ( i + 1 < l1 );
        }
        link[0].accesskey = link[1].accesskey;
      }
    }
    link[0].accesskey = 0;
    return 0;
  }
  assert_failed = 0;
  link[0].accesskey = 0;
  return 0;
}
void jump_to_link_number( struct session *ses, struct document_view *doc_view, int n )
{
  int eax;
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && doc_view->vs && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 1152;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    if ( n >= 0 && n < doc_view->document->nlinks )
    {
      doc_view->vs->current_link = n;
      if ( ses->navigate_mode == NAVIGATE_CURSOR_ROUTING )
      {
        struct link *link;
        int offset = 1;
        if ( link->type != LINK_CHECKBOX )
        {
          if ( ccdep1 < ccdep2 )
          {
            if ( link->type != LINK_FIELD )
            {
              if ( link->type == LINK_AREA && find_form_state( &doc_view[0], &link->data.name[0] ) )
                area_cursor( &link->data.name[0], find_form_state( &doc_view[0], &link->data.name[0] ), ( (int)doc_view->session->tab->term->bits_at_56/*.1_1of4*/ >> 1 ) & 1 );
                if ( offset < link->npoints )
                  move_cursor( &ses[0], &doc_view[0], ( link->points[ eax ].x + doc_view->box.x ) - doc_view->vs->x, ( link->points[ eax ].y + doc_view->box.y ) - doc_view->vs->y );
                  ses = &doc_view[0].next[0];
            }
            else
            {
              link->data = link->data;
              *ebp_28 = ebp_28;
              if ( find_form_state( &doc_view[0], &link->data.name[0] ) && *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 16) )
              {
                if ( edx )
                {
                  *(int*)(*(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 16)) += *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 20);
                  if ( *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 12) == 1 )
                    utf8_ptr2chars( *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 16) + *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 28), *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 16) );
                  else
                    utf8_ptr2cells( *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 16) + *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 28), *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 16) );
                }
                else
                  offset = *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 20) - *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 28);
              }
            }
            offset = 0;
            ses = &ses[0];
          }
          else
          {
            if ( link->type != LINK_BUTTON )
              offset = 0;
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
void goto_link_number_do( struct session *ses, struct document_view *doc_view, int n )
{
  int ecx;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 1181;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( n >= 0 && n < doc_view->document->nlinks )
    {
      jump_to_link_number( &ses[0], &doc_view[0], n );
      n *= 52;
      if ( doc_view->document->links[ n ].type - 5 > 1 && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
      {
        enter( &ses[0], &doc_view[0], 0 );
      }
      return;
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void goto_link_number( struct session *ses, unsigned char *num )
{
  int eax;
  int ecx;
  int edx;
  struct document_view *doc_view;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( num[0] == 0 ) | ( ses[0].next == 0 ) ) & 1;
    if ( ( ( num[0] == 0 ) | ( ses[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 1197;
      elinks_internal( "assertion ses && num failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    doc_view = current_frame( &ses[0] );
    if ( assert_failed == 0 )
    {
      assert_failed = doc_view[0].next == 0;
      if ( !(_Bool)( doc_view[0].next != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
        errline = 1200;
        elinks_internal( "assertion doc_view failed!" );
        if ( assert_failed )
        {
          doc_view = &doc_view[0];
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
  else
  {
    assert_failed = 0;
    return;
  }
}
enum frame_event_status  try_document_key( struct session *ses, struct document_view *doc_view, struct term_event *ev )
{
  int eax;
  int edx;
  int i;
  if ( assert_failed == 0 )
  {
    if ( doc_view && ses && doc_view->document && ev[0] )
    {
      if ( doc_view->vs )
      {
        assert_failed = 0;
        if ( ev->info.mouse.y == 4 )
        {
          if ( ev->info.mouse.y >= 0 )
          {
            i = doc_view->vs->current_link + 1;
            if ( doc_view->vs->current_link + 1 < doc_view->document->nlinks )
            {
              if ( doc_view->document->links[ i ].accesskey != ev->info.mouse.x )
              {
                do
                {
                  i++;
                  if ( doc_view->document->nlinks <= i + 1 )
                    goto B16;
                  else
                }
                while ( ebx != eax );
              }
              ses->kbdprefix.repeat_count = 0;
              goto_link_number_do( ses, doc_view );
              return FRAME_EVENT_REFRESH;
            }
B16:            if ( doc_view->vs->current_link < 0 )
            {
              return FRAME_EVENT_IGNORED;
            }
            i = 0;
            if ( doc_view->document->links[0].accesskey != ev->info.mouse.x )
            {
              do
              {
                i++;
                if ( doc_view->vs->current_link < i + 1 )
                {
                  break;
                }
              }
              while ( doc_view->document->links[2].accesskey != ev->info.mouse.x );
            }
            ses->kbdprefix.repeat_count = 0;
            goto_link_number_do( ses, doc_view );
            return FRAME_EVENT_IGNORED;
          }
        }
      }
      else
      {
      }
    }
    assert_failed = 1;
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
    errline = 1213;
    elinks_internal( "assertion ses && doc_view && doc_view-&gt;document && doc_view-&gt;vs && ev failed!" );
    if ( assert_failed == 0 )
    {
      if ( ev->info.mouse.y == 4 )
      {
      }
    }
  }
  assert_failed = 0;
  return FRAME_EVENT_IGNORED;
}
void link_menu( struct terminal *term, void *xxx, void *ses_ )
{
  int eax;
  int edx;
  struct document_view *doc_view;
  struct link *link;
  struct menu_item *mi;
  struct form_control *fc;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( ((int*)ses_)[0] == 0 ) | ( term == 0 ) ) & 1;
    if ( ( ( ((int*)ses_)[0] == 0 ) | ( term == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 1271;
      elinks_internal( "assertion term && ses failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    doc_view = current_frame( &((int*)ses_)[0] );
    if ( new_menu( FREE_LIST ) )
    {
      mi = new_menu( FREE_LIST );
      if ( doc_view[0].next )
      {
        if ( assert_failed == 0 )
        {
          if ( doc_view->vs && doc_view->document )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
            errline = 1279;
            elinks_internal( "assertion doc_view-&gt;vs && doc_view-&gt;document failed!" );
            if ( assert_failed )
              continue;
          }
          if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] )
          {
            if ( link->where )
            {
              if ( link->type <= 1 )
              {
                if ( 1 )
                {
                  mi = mi;
                  add_to_menu( &mi, "Display ~usemap", 0, ACT_MAIN_LINK_FOLLOW, 0, 0, SUBMENU );
                }
                else
                {
                  add_to_menu( &mi, "~Follow link", 0, ACT_MAIN_LINK_FOLLOW, 0, 0, NO_FLAG );
                  add_to_menu( &mi, "Follow link and r~eload", 0, ACT_MAIN_LINK_FOLLOW_RELOAD, 0, 0, NO_FLAG );
                  add_to_menu( &mi, "", 0, ACT_MAIN_NONE, 0, 0, NO_SELECT );
                  add_new_win_to_menu( &mi, "Open in new ~window", term );
                  add_to_menu( &mi, "Open in new ~tab", 0, ACT_MAIN_OPEN_LINK_IN_NEW_TAB, 0, 0, NO_FLAG );
                  add_to_menu( &mi, "Open in new tab in ~background", 0, ACT_MAIN_OPEN_LINK_IN_NEW_TAB_IN_BACKGROUND, 0, 0, NO_FLAG );
                  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
                  {
                    add_to_menu( &mi, "", 0, ACT_MAIN_NONE, 0, 0, NO_SELECT );
                    add_to_menu( &mi, "~Download link", 0, ACT_MAIN_LINK_DOWNLOAD, 0, 0, NO_FLAG );
                    add_to_menu( &mi, "~Add link to bookmarks", 0, ACT_MAIN_ADD_BOOKMARK_LINK, 0, 0, NO_FLAG );
                    add_uri_command_to_menu( &mi, PASS_URI_LINK, "Pass link URI to e~xternal command" );
                  }
                }
              }
              else
              {
                fc = &link->data.name[0];
                if ( link->data.name )
                {
                  if ( fc->type == FC_TEXTAREA )
                  {
                    if ( fc->mode == FORM_MODE_NORMAL )
                    {
                      struct string keystroke;
                      if ( init_string( &keystroke ) )
                      {
                        add_keystroke_action_to_string( &keystroke, 23, KEYMAP_EDIT );
                        *ebp_44 = fc[0].next;
                      }
                      add_to_menu( &mi, "Open in ~external editor", keystroke.source, ACT_MAIN_NONE, &menu_textarea_edit, 0, FREE_RTEXT );
                      *ebp_44 = fc[0].next;
                    }
                  }
                  else
                  {
                    if ( fc->type == FC_RESET )
                    {
                      add_to_menu( &doc_view[0].next[0], "~Reset form", 0, ACT_MAIN_RESET_FORM, 0, 0, NO_FLAG );
                      add_to_menu( &mi, "Form f~ields", 0, ACT_MAIN_LINK_FORM_MENU, 0, 0, SUBMENU );
                      if ( link->where_img )
                      {
                        add_to_menu( &mi, "V~iew image", 0, ACT_MAIN_VIEW_IMAGE, 0, 0, NO_FLAG );
                        if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
                          add_to_menu( &mi, "Download ima~ge", 0, ACT_MAIN_LINK_DOWNLOAD_IMAGE, 0, 0, NO_FLAG );
                      }
                    }
                  }
                  add_to_menu( &doc_view[0].next[0], "~Submit form", 0, ACT_MAIN_SUBMIT_FORM, 0, 0, NO_FLAG );
                  add_to_menu( &doc_view[0].next[0], "Submit form and rel~oad", 0, ACT_MAIN_SUBMIT_FORM_RELOAD, 0, 0, NO_FLAG );
                  *ebp_44 = fc[0].next;
                  if ( assert_failed == 0 )
                  {
                    assert_failed = fc->form == 0;
                    if ( !(_Bool)( fc->form != 0 ) )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
                      errline = 1352;
                      elinks_internal( "assertion fc-&gt;form failed!" );
                      *ebp_44 = fc[0].next;
                    }
                  }
                  if ( fc->form->method == FORM_METHOD_GET )
                  {
                    add_new_win_to_menu( &mi, "Submit form and open in new ~window", term );
                    add_to_menu( &mi, "Submit form and open in new ~tab", 0, ACT_MAIN_OPEN_LINK_IN_NEW_TAB, 0, 0, NO_FLAG );
                    add_to_menu( &mi, "Submit form and open in new tab in ~background", 0, ACT_MAIN_OPEN_LINK_IN_NEW_TAB_IN_BACKGROUND, 0, 0, NO_FLAG );
                  }
                  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
                    add_to_menu( &mi, "Submit form and ~download", 0, ACT_MAIN_LINK_DOWNLOAD, 0, 0, NO_FLAG );
                }
              }
            }
            if ( link->type > 1 )
            {
              fc = &link->data.name[0];
            }
          }
          mi->text = (unsigned char*)mi;
        }
      }
      if ( mi->text == 0 )
      {
        add_to_menu( &mi, "No link selected", 0, ACT_MAIN_NONE, 0, 0, NO_SELECT );
        mi->text = (unsigned char*)mi;
        do_menu( term, mi, &((int*)ses_)[0], 1 );
        return;
      }
      else
      {
        do_menu( term, mi, &((int*)ses_)[0], 1 );
        return;
      }
    }
    else
    {
      return;
    }
  }
}
unsigned char *get_current_link_title( struct document_view *doc_view )
{
  int ecx;
  int edx;
  struct link *link;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && doc_view->document && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 1402;
      elinks_internal( "assertion doc_view && doc_view-&gt;document && doc_view-&gt;vs failed!" );
      if ( assert_failed )
      {
      }
    }
    if ( !doc_view->document->frame_desc && doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] && link->title && link->title[0] )
    {
      if ( eax && !( ( doc_view->document->options.bits_at_92/*.1_1of4*/ & 16 ) & 255 ) && esi )
      {
        __ctype_b_loc(  );
        do
        {
          if ( ( *(short*)(eax + ( ebx * 2 )) & 16386 ) != 16384 )
            edx = 42;
        }
        while ( *(char*)(edx + 1) );
        return 0;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      unsigned char *link_title, *src;
      struct conv_table *convert_table;
      link_title[0] = 0;
      return 0;
    }
  }
  assert_failed = 0;
  return 0;
}
unsigned char *get_current_link_info( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int edx;
  struct link *link;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && ses[0] && doc_view->document && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/link.c";
      errline = 1440;
      elinks_internal( "assertion ses && doc_view && doc_view-&gt;document && doc_view-&gt;vs failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        *ebp_12 = ebx;
        return 0;
      }
    }
    if ( !doc_view->document->frame_desc && doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] )
    {
      if ( link->type <= 1 )
      {
        struct terminal *term = &term->windows.list_head_elinks;
        struct string str;
        unsigned char *uristring = link->where;
        if ( init_string( &str ) )
        {
          if ( link->where == 0 && link->where_img )
          {
            add_to_string( &str, _( "Image", &term[0] ) );
            add_char_to_string( &str, 32 );
            uristring = link->where_img;
          }
          else
          if ( link->type == LINK_MAP )
          {
            add_to_string( &str, _( "Usemap", &term[0] ) );
            add_char_to_string( &str, 32 );
          }
          add_string_uri_to_string( &str, uristring, URI_PUBLIC );
          if ( link && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
          {
            add_to_string( &str, " (" );
          {
            struct term_event_keyboard kbd;
            kbd->modifier = KBD_MOD_ALT;
            kbd.key = link->accesskey;
            add_keystroke_to_string( &str, &kbd, 0 );
            add_char_to_string( &str, 41 );
          }
          }
          if ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
            decode_uri_string( &str );
          else
          {
            decode_uri_string_for_display( &str );
          }
          return str.source;
        }
        else
        {
          *ebp_12 = ebx;
        }
      }
      else
      {
        if ( link->data.name )
        {
          get_form_info( &ses[0], &doc_view[0] );
          *ebp_12 = ebx;
        }
      }
    }
  }
  else
  {
    assert_failed = 0;
    *ebp_12 = ebx;
  }
}
#if 0
#endif
