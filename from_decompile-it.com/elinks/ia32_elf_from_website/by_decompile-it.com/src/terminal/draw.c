#include "draw.c.h"
struct screen_char *get_char( struct terminal *term, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    if ( term[0] && term->screen && term->screen )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
      errline = 39;
      elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
      if ( assert_failed )
        goto B2;
    }
    term->width = term->width;
    return 0;
  }
B2:  assert_failed = 0;
  return 0;
}
void draw_border_cross( struct terminal *term, int x, int y, enum border_cross_direction  dir, struct color_pair *color )
{
  int eax;
  int ecx;
  int edx;
  static unsigned char border_trans[2][4] = { { 179, 195, 180 }, { 196, 194, 193 } };
  struct screen_char *screen_char;
  unsigned int d;
  if ( assert_failed == 0 )
  {
    if ( term[0] && term->screen && term->screen )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
      errline = 39;
      elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
      if ( assert_failed )
        goto B2;
    }
    x = 0;
    term->width = term->width;
    screen_char = term->screen[0].image + ( ( x + ( term->width * ( y <= term->height - 1 ? term->height - 1 : y ) ) ) << 3 );
    if ( screen_char[0] && screen_char->attr < 0 )
    {
      d = dir >> 1;
      if ( screen_char->data == border_trans[ dir >> 1 ][0] )
        screen_char = border_trans[ border_trans[ d ][ ( dir & 1 & 1 ) + 1 ] ][ ( dir & 1 & 1 ) + 1 ];
      else
      if ( screen_char->data == border_trans[0][ ( ( ( dir >> 1 ) << 2 ) - ( dir & 1 & 1 ) ) + 2 ] )
        screen_char = 197;
      term = &screen_char[0].data;
      y = 0;
      x = color;
      dir = *(int*)(get_opt_( term->spec, (unsigned char*)term->spec ));
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  screen_char = &screen_char[0];
  return;
}
void draw_border_char( struct terminal *term, int x, int y, enum border_char  border, struct color_pair *color )
{
  int eax;
  int ecx;
  int edx;
  struct screen_char *screen_char;
  if ( assert_failed == 0 )
  {
    if ( term[0] && term->screen && term->screen )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
      errline = 39;
      elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
      if ( assert_failed )
        goto B2;
    }
    x = 0;
    term->width = term->width;
    screen_char = term->screen[0].image + ( ( x + ( term->width * ( y <= term->height - 1 ? term->height - 1 : y ) ) ) << 3 );
    if ( screen_char[0].data )
    {
      screen_char->attr = 128;
      screen_char = border;
      set_term_color( &screen_char[0], color, 0, *(int*)(get_opt_( term->spec, (unsigned char*)term->spec )) );
      if ( y < term->screen->dirty_from )
        term->screen->dirty_from = y;
      if ( term->screen->dirty_to < y )
      {
        term->screen->dirty_to = y;
        return;
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
void draw_char_color( struct terminal *term, int x, int y, struct color_pair *color )
{
  int eax;
  int ecx;
  int edx;
  struct screen_char *screen_char;
  if ( assert_failed == 0 )
  {
    if ( term[0] && term->screen && term->screen )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
      errline = 39;
      elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
      if ( assert_failed )
        goto B2;
    }
    x = 0;
    term->width = term->width;
    screen_char = term->screen[0].image + ( ( x + ( term->width * ( y <= term->height - 1 ? term->height - 1 : y ) ) ) << 3 );
    if ( screen_char[0].data )
    {
      set_term_color( &screen_char[0], color, 0, *(int*)(get_opt_( term->spec, (unsigned char*)term->spec )) );
      if ( y < term->screen->dirty_from )
        term->screen->dirty_from = y;
      if ( term->screen->dirty_to < y )
      {
        term->screen->dirty_to = y;
        return;
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
void draw_char_data( struct terminal *term, int x, int y, unicode_val_T data )
{
  int eax;
  int ecx;
  int edx;
  struct screen_char *screen_char;
  if ( assert_failed == 0 )
  {
    if ( term[0] && term->screen && term->screen )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
      errline = 39;
      elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
      if ( assert_failed )
        goto B2;
    }
    x = 0;
    term->width = term->width;
    screen_char = term->screen[0].image + ( screen_char[ x >> 3 ].data << 3 );
    if ( screen_char[0].data )
    {
      screen_char = &data;
      if ( data == -3 )
        screen_char->attr = 0;
      if ( y < term->screen->dirty_from )
        term->screen->dirty_from = y;
      if ( term->screen->dirty_to < y )
      {
        term->screen->dirty_to = y;
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
void draw_line( struct terminal *term, int x, int y, int l, struct screen_char *line )
{
  int eax;
  int ecx;
  int edx;
  struct screen_char *screen_char;
  int size;
  if ( assert_failed == 0 )
  {
    if ( term[0] && term->screen && term->screen )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
      errline = 39;
      elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
      assert_failed = line == 0;
      if ( !(_Bool)( line != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
        errline = 151;
        elinks_internal( "assertion line failed!" );
        if ( assert_failed )
        {
          assert_failed = 0;
          return;
        }
      }
      if ( screen_char && ( l <= term->width - x ? term->width - x : l ) )
      {
        if ( ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 ) == 0 )
          memcpy( &screen_char[0].data, line, ( size << 3 ) << 3 );
        else
        {
          if ( x == 0 && line[0].data == -3 )
          {
            screen_char = 32;
            screen_char->attr = line->attr;
            screen_char++;
            line->data = -3;
            line++;
            size--;
          }
          if ( size - 1 < 1 || unicode_to_cell( line[ size - 1 ].data ) != 2 )
            memcpy( &screen_char[0].data, line, size << 3 );
          else
          {
            unicode_val_T data_save = line[ x ].data;
            line[ x ].data = 32;
            size = line;
            memcpy( &screen_char[0].data, line, size << 3 );
            line[ x ].data = line[ x ].data;
          }
        }
        if ( y < term->screen->dirty_from )
          term->screen->dirty_from = y;
        if ( term->screen->dirty_to < y )
        {
          term->screen->dirty_to = y;
        }
      }
      return;
    }
    x = 0;
    term->width = term->width;
    screen_char = term->screen[0].image + ( ( screen_char[0].data + ( term->width * ( y <= term->height - 1 ? term->height - 1 : y ) ) ) << 3 );
    assert_failed = line == 0;
  }
  screen_char = 0;
  assert_failed = line == 0;
}
void draw_border( struct terminal *term, struct box *box, struct color_pair *color, int width )
{
  int edx;
  static enum border_char  p1[6] = { 218, 191, 192, 217, 179, 196 };
  static enum border_char  p2[6] = { 201, 187, 200, 188, 186, 205 };
  enum border_char  *p;
  p[0] = width > 1 ? p1[0] : p2[0];
  if ( ( (unsigned char)( box->width < 0 ) ? box->width + 2 : 0 ) > 2 )
  {
    struct box bbox;
    bbox.y = box->y - 1 < 0 ? box->y - 1 : 0;
    bbox.height = 1;
    bbox.x = box[0].x < 0 ? box[0].x : 0;
    bbox.width = (unsigned char)( ( ( box->width >> 31 ) & 1 ) ^ 1 ) ? 0 : box->width;
    draw_box( &term[0], &bbox, p[5], SCREEN_ATTR_FRAME, color );
    bbox.y = ( ( (unsigned char)( box->height < 0 ) ? box->height + 2 : 0 ) + bbox.y ) - 1;
    draw_box( &term[0], &bbox, p[5], SCREEN_ATTR_FRAME, color );
  }
  if ( ( (unsigned char)( box->height < 0 ) ? box->height + 2 : 0 ) > 2 )
  {
    struct box bbox;
    bbox.width = 1;
    bbox.x = box[0].x - 1 < 0 ? box[0].x - 1 : 0;
    bbox.y = *(int*)(box + 4) < 0 ? box->y : 0;
    bbox.height = (unsigned char)( ( ( box->height >> 31 ) & 1 ) ^ 1 ) ? 0 : box->height;
    draw_box( &term[0], &bbox, p[4], SCREEN_ATTR_FRAME, &bbox.x );
    bbox.x = ( bbox.x + ( (unsigned char)( box->width < 0 ) ? box->width + 2 : 0 ) ) - 1;
    draw_box( &term[0], &bbox, p[4], SCREEN_ATTR_FRAME, color );
  }
  if ( ( (unsigned char)( box->width < 0 ) ? box->width + 2 : 0 ) <= 1 || ( (unsigned char)( box->height < 0 ) ? box->height + 2 : 0 ) <= 1 )
  {
  }
  else
  {
    int right = ( bbox.x + ( (unsigned char)( box->width < 0 ) ? box->width + 2 : 0 ) ) - 1;
    int bottom = ( bbox.y + bottom ) - 1;
    draw_border_char( &term[0], bbox.x, bbox.y, p[0], color );
    draw_border_char( &term[0], right, bbox.y, p[1], color );
    draw_border_char( &term[0], bbox.x, bottom, p[2], color );
    draw_border_char( &term[0], right, bottom, p[3], color );
    *ebp_60 = bbox.y;
  }
  if ( bbox.y < term->screen->dirty_from )
    term->screen->dirty_from = bbox.y;
  if ( term->screen->dirty_to < bbox.y + ( (unsigned char)( box->height < 0 ) ? box->height + 2 : 0 ) )
  {
    term->screen->dirty_to = bbox.y + ( (unsigned char)( box->height < 0 ) ? box->height + 2 : 0 );
  }
  return;
}
void fix_dwchar_around_box( struct terminal *term, struct box *box, int border, int shadow_width, int shadow_height )
{
  int eax;
  int ecx;
  int edx;
  struct screen_char *schar;
  int height, x, y;
  if ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
  {
    x = box[0].x - 1 - border;
    if ( box[0].x - 1 - border >= 1 )
    {
      height = box->height + ( border * 2 );
      if ( assert_failed == 0 )
      {
        if ( term->screen && term->screen )
          assert_failed = 0;
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
          errline = 39;
          elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
          if ( assert_failed )
            x = x;
        }
        term->width = term->width;
        y -= border;
        x--;
        schar = term->screen[0].image + ( ( ( term->width * ( y <= term->height - 1 ? term->height - 1 : y ) ) + ( x - 1 < schar[0].data ? schar[0].data : x - 1 ) ) << 3 );
        if ( height )
        {
          height--;
          while ( 1 )
          {
            if ( unicode_to_cell( schar->data ) != 2 )
            {
              if ( height )
              {
                schar = &schar[ term->width ];
                height--;
              }
            }
            else
            {
              schar = 32;
              if ( height )
              {
                schar = &schar[ term->width ];
                height--;
              }
            }
            x = ( box[0].x - 1 ) + ( shadow_width - border );
            if ( ( box[0].x - 1 ) + ( shadow_width - border ) >= 1 )
            {
              if ( x < term->width )
              {
                if ( assert_failed == 0 )
                {
                  if ( term->screen && term->screen )
                    assert_failed = 0;
                  else
                  {
                    assert_failed = 1;
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
                    errline = 39;
                    elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
                    if ( assert_failed )
                      goto B52;
                  }
                  term->width = term->width;
                  y = border + y + box->height;
                  term->height = term->height;
                  schar = term->screen[0].image + ( ( ( term->width * ( y <= term->height - 1 ? term->height - 1 : y ) ) + ( x <= term->width - 1 ? term->width - 1 : x ) ) << 3 );
                  if ( shadow_height )
                  {
                    height = shadow_height - 1;
                    while ( 1 )
                    {
                      if ( unicode_to_cell( schar->data ) != 2 )
                      {
                        term->width = term->width;
                        if ( height )
                        {
                          schar = &schar[ term->width ];
                          height--;
                        }
                      }
                      else
                      {
                        schar = 32;
                        term->width = term->width;
                        if ( height )
                        {
                          schar = &schar[ term->width ];
                          height--;
                        }
                      }
                      box->x = box[0].x;
                    }
                  }
                  else
                  {
                    term->width = term->width;
                    box->x = box[0].x;
                  }
                }
B52:                assert_failed = 0;
                schar = 0;
              }
              box->x = box;
              x += box->width + border;
              if ( x + box->width + border < term->width )
              {
                if ( assert_failed == 0 )
                {
                  if ( term->screen && term->screen )
                    assert_failed = 0;
                  else
                  {
                    assert_failed = 1;
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
                    errline = 39;
                    elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
                    if ( assert_failed )
                      goto B25;
                  }
                  x = 0;
                  term->width = term->width;
                  y -= border;
                  schar = term->screen[0].image + ( schar[ x >> 3 ].data << 3 );
                  if ( shadow_height )
                  {
                    height = shadow_height - 1;
                    while ( 1 )
                    {
                      if ( schar->data != -3 )
                      {
                        term->width = term->width;
                        if ( height )
                        {
                          schar = &schar[ term->width ];
                          height--;
                        }
                      }
                      else
                      {
                        schar = 32;
                        term->width = term->width;
                        if ( height )
                        {
                          schar = &schar[ term->width ];
                          height--;
                        }
                      }
                      x = shadow_width + border + box->width + box[0].x;
                      if ( term->width <= shadow_width + border + box->width + box[0].x )
                      {
                        height = height;
                        break;
                      }
                      else
                      {
                        height = box->height + ( border * 2 );
                        if ( assert_failed == 0 )
                        {
                          if ( term->screen && term->screen )
                            assert_failed = 0;
                          else
                          {
                            assert_failed = 1;
                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
                            errline = 39;
                            elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
                            if ( assert_failed )
                              goto B38;
                          }
                          x = 0;
                          y = shadow_height + ( y - border );
                          term->height = term->height;
                          schar = term->screen[0].image + ( ( schar[0].data + ( term->width * ( y <= term->height - 1 ? term->height - 1 : y ) ) ) << 3 );
                          if ( height )
                          {
                            height--;
                            for ( ; schar->data != -3; height-- )
                            {
                              term->width = term->width;
                              if ( height == 0 )
                                break;
                              schar = &schar[ term->width ];
                              //height--;
                            }
                            schar = 32;
                            term->width = term->width;
                          }
                        }
B38:                        assert_failed = 0;
                        schar = 0;
                      }
                    }
                  }
                  else
                  {
                    term->width = term->width;
                    x = border + box->width + box[0].x;
                    x += shadow_width;
                    if ( x + shadow_width < term->width )
                    {
                      height = box->height + ( border * 2 );
                    }
                  }
                }
B25:                assert_failed = 0;
                schar = 0;
              }
            }
            else
            {
              x += box->width + border;
              if ( x + box->width + border < term->width )
              {
              }
            }
          }
        }
        else
          box->x = box;
      }
      assert_failed = 0;
      schar = 0;
    }
    x += shadow_width - border;
    if ( x + ( shadow_width - border ) >= 1 )
    {
    }
    else
    {
      x += box->width + border;
    }
  }
  return;
}
void draw_char( struct terminal *term, int x, int y, unicode_val_T data, enum screen_char_attr  attr, struct color_pair *color )
{
  int eax;
  int ecx;
  int edx;
  struct screen_char *screen_char;
  if ( assert_failed == 0 )
  {
    if ( term[0] && term->screen && term->screen )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
      errline = 39;
      elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
      if ( assert_failed )
        goto B2;
    }
    x = 0;
    term->width = term->width;
    screen_char = term->screen[0].image + ( ( x + ( term->width * ( y <= term->height - 1 ? term->height - 1 : y ) ) ) << 3 );
    if ( screen_char[0].data )
    {
      screen_char = &data;
      screen_char->attr = attr;
      set_term_color( &screen_char[0], color, 0, *(int*)(get_opt_( term->spec, (unsigned char*)term->spec )) );
      if ( y < term->screen->dirty_from )
        term->screen->dirty_from = y;
      if ( term->screen->dirty_to < y )
      {
        term->screen->dirty_to = y;
        return;
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
void draw_box( struct terminal *term, struct box *box, unsigned char data, enum screen_char_attr  attr, struct color_pair *color )
{
  int eax;
  int ecx;
  int edx;
  struct screen_char *line, *pos, *end;
  int width, height;
  if ( assert_failed == 0 )
  {
    if ( term[0] && term->screen && term->screen )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
      errline = 39;
      elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
      if ( assert_failed )
        goto B2;
    }
    term->width = term->width;
    if ( ( term->screen[0].image + ( ( ( box[0].x < term->width - 1 ? term->width - 1 : box[0].x ) + ( ( box->y < term->height - 1 ? term->height - 1 : box->y ) * term->width ) ) << 3 ) ) && ( term->width - box[0].x <= box->width ? box->width : term->width - box[0].x ) >= 1 && height >= 1 )
    {
      end = ( term->screen[0].image + ( ( ( box[0].x < term->width - 1 ? term->width - 1 : box[0].x ) + ( height * term->width ) ) << 3 ) + ( width << 3 ) ) - 8;
      if ( color == 0 )
        end->color[0] = 0;
      else
      {
        set_term_color( &end[0], color, 0, *(int*)(get_opt_( term->spec, (unsigned char*)term->spec )) );
        height = height;
      }
      if ( term->screen[0].image + ( ( ( box[0].x < term->width - 1 ? term->width - 1 : box[0].x ) + ( height * get_opt_( term->spec, (unsigned char*)term->spec ) ) ) << 3 ) < end[0].data )
      {
        pos = term->screen[0].image + ( ( ( box[0].x < term->width - 1 ? term->width - 1 : box[0].x ) + ( height * get_opt_( term->spec, (unsigned char*)term->spec ) ) ) << 3 );
        do
        {
          pos = &(struct screen_char*)(end);
          pos->attr = end->attr;
          pos++;
        }
        while ( pos[1].data < end[0].data );
      }
      height = height - 1;
      if ( height != 1 )
      {
        &term = &term;
        line = term->screen[0].image + ( ( ( box[0].x < term->width - 1 ? term->width - 1 : box[0].x ) + ( height * pos[1].data ) ) << 3 );
        pos = term->screen[0].image + ( ( ( box[0].x < term->width - 1 ? term->width - 1 : box[0].x ) + ( height * pos[1].data ) ) << 3 );
        do
        {
          pos = &pos[ term->width ];
          memcpy( &pos[ term->width ].data, &line[0].data, width << 3 );
        }
        while ( height == 1 );
        term = &term[0];
      }
      if ( box->y < term->screen->dirty_from )
        term->screen->dirty_from = box->y;
      if ( term->screen->dirty_to < box->height + box->y )
      {
        term->screen->dirty_to = box->height + box->y;
        return;
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
void draw_shadow( struct terminal *term, struct box *box, struct color_pair *color, int width, int height )
{
  struct box dbox;
  dbox.x = (unsigned char)( width < 0 ) ? box[0].x + width : 0;
  dbox.y = box->height + box->y < 0 ? box->height + box->y : 0;
  dbox.width = box->width - width < 0 ? box->width - width : 0;
  dbox.height = (unsigned char)( ( ( height >> 31 ) & 1 ) ^ 1 ) ? 0 : height;
  draw_box( term, &dbox, 32, 0, color );
  dbox.y = height + *(int*)(box + 4) < 0 ? height + box->y : 0;
  dbox.x = (unsigned char)( *(int*)(box + 8) < 0 ) ? box->width + box->x : 0;
  dbox.width = width < 0 ? width : 0;
  dbox.height = (unsigned char)( ( ( *(int*)(box + 12) >> 31 ) & 1 ) ^ 1 ) ? 0 : box->height;
  draw_box( term, &dbox, 32, 0, &box->height );
  return;
}
void draw_text( struct terminal *term, int x, int y, unsigned char *text, int length, enum screen_char_attr  attr, struct color_pair *color )
{
  int eax;
  int ecx;
  int edx;
  int ebp_52;
  int end_pos;
  struct screen_char *pos, *end;
  if ( assert_failed == 0 )
  {
    assert_failed = ( length >> 31 ) | ( text[0] == 0 );
    if ( ( length >> 31 ) | ( text[0] == 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
      errline = 503;
      elinks_internal( "assertion text && length &gt;= 0 failed!" );
      if ( assert_failed == 0 )
      {
        if ( term->width <= x )
        {
          return;
        }
      }
    }
    else
    if ( term->width <= x )
    {
      return;
    }
    if ( y < term->height )
    {
      if ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
      {
        assert_failed = ebp_48;
        if ( assert_failed )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
          errline = 431;
          elinks_internal( "assertion text && length &gt;= 0 failed!" );
          if ( assert_failed )
            goto B2;
        }
        text[0] = text[0];
        if ( length >= 1 && x < term->width && utf8_to_unicode( ebp_28, &text[ length ] ) != -3 )
        {
          if ( assert_failed == 0 )
          {
            if ( term->screen && term->screen )
              assert_failed = 0;
            else
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
              errline = 39;
              elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
              if ( assert_failed )
                goto B47;
            }
            ebp_52 = 0;
            ebp_52 = term->screen[0].image + ( ( ebp_52 + eax ) << 3 ) + 8;
            if ( color )
            {
              set_term_color( 0, color, 0, *(int*)(get_opt_( term->spec, (unsigned char*)term->spec )) );
            }
            if ( *(int*)(0) == -3 && x - 1 >= 1 )
            {
              draw_char_data( &edx, eax, ecx, 32 );
              *ebp_64 = y;
              *ebp_60 = ebp_60;
            }
            if ( unicode_to_cell( utf8_to_unicode( ebp_28, &text[ length ] ) ) == 2 )
            {
              x++;
              if ( edi + 1 < *(int*)(edx + 44) )
              {
                term->screen->image = &esi;
                *(int*)(edi + 2) = x + 2;
                *ebp_52 = -3;
                *(char*)(ebp_52 + 4) = 0;
                ebp_52 += 8;
              }
              else
                term->screen->image = 32;
            }
            else
              x++;
            if ( x < *(int*)(edx + 44) )
            {
              while ( utf8_to_unicode( ebp_28, &text[ length ] ) == -3 )
              {
                if ( color )
                  *(int*)(ebp_52 + 8) = *(int*)(0);
                if ( eax == 2 )
                {
                  x++;
                  if ( x + 1 < *(int*)(ebp_52 + 44) )
                  {
                    *(int*)(ebp_52 + 8) = utf8_to_unicode( ebp_28, &text[ length ] );
                    x++;
                  }
                  else
                    *(int*)(ebp_52 + 8) = 32;
                }
                else
                {
                  *(int*)(ebp_52 + 8) = x + 1;
                  x++;
                }
                if ( *(int*)(ebp_52 + 44) <= x )
                  break;
                else
                {
                }
              }
              term = ebp_52;
              *ebp_56 = y;
            }
            term->screen->image = term->screen->image;
            if ( ecx < term->screen->dirty_from )
              term->screen->dirty_from = y;
            if ( term->screen->dirty_to < y )
            {
              term->screen->dirty_to = y;
            }
            return;
          }
B47:          assert_failed = 0;
          ebp_52 = 8;
        }
        else
        {
          return;
        }
      }
      else
      {
        if ( length >= 1 )
        {
          if ( term->screen && term->screen )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
            errline = 39;
            elinks_internal( "assertion term && term-&gt;screen && term-&gt;screen-&gt;image failed!" );
            if ( assert_failed )
              goto B2;
          }
          ebp_52 = *(int*)(ebp_60 + 44);
          y = 0;
          if ( term->screen->image + ( ( ( x <= x - 1 ? x - 1 : x ) + ( ebp_52 * ( y <= term->height - 1 ? term->height - 1 : y ) ) ) << 3 ) )
          {
            end = term->screen->image + ( ( ( x <= x - 1 ? x - 1 : x ) + ( ebp_52 * ( y <= term->height - 1 ? term->height - 1 : y ) ) ) << 3 ) + ( ( (unsigned char)( ( ( ebp_52 - end[0].data < length ? length : ebp_52 - end[0].data ) - 1 < 0 ) ^ 1 ) ? 0 : ( ebp_52 - end[0].data < length ? length : ebp_52 - end[0].data ) - 1 ) << 3 );
            if ( color )
            {
              end->attr = attr;
              set_term_color( &end[0], color, 0, *(int*)(get_opt_( term->spec, (unsigned char*)term->spec )) );
              if ( term->screen->image + ( ( ( x <= x - 1 ? x - 1 : x ) + ( ebp_52 * get_opt_( term->spec, (unsigned char*)term->spec ) ) ) << 3 ) < end[0].data )
              {
                if ( text[0] )
                {
                  pos = term->screen->image + ( ( ( x <= x - 1 ? x - 1 : x ) + ( ebp_52 * get_opt_( term->spec, (unsigned char*)term->spec ) ) ) << 3 );
                  do
                  {
                    end = text[0] = text[1];
                    pos = text[0];
                    pos->attr = end->attr;
                    pos++;
                    if ( end[0].data <= pos[1].data )
                      goto B36;
                    else
                  }
                  while ( text[0] );
                }
                end = 0;
              }
B36:              end = 0;
            }
            else
            {
              text[0] = text[0];
              if ( ebx <= end[0].data && text[0] )
              {
                pos = term->screen->image + ( ( ( x <= x - 1 ? x - 1 : x ) + ( ebp_52 * unicode_to_cell( text ) ) ) << 3 );
                do
                {
                  pos = text[0];
                  pos++;
                }
                while ( pos[1].data <= end[0].data && text[0] );
              }
            }
            if ( y < term->screen->dirty_from )
              *(int*)(edx + 24) = y;
            if ( *(int*)(ebp_48 + 28) < y )
            {
              *(int*)(ebx + 28) = y;
            }
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
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void set_cursor( struct terminal *term, int x, int y, int blockable )
{
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    if ( term[0] && term->screen )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/draw.c";
      errline = 564;
      elinks_internal( "assertion term && term-&gt;screen failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( blockable && *(int*)(get_opt_( term->spec, (unsigned char*)term->spec )) )
    {
      x = term->width - 1;
      y = term->height - 1;
      if ( term->screen->cx != term->width - 1 )
      {
        x = 0;
        y = 0;
        y = y <= y ? y : y;
        if ( ( y <= y ? y : y ) < term->screen->dirty_from )
          term->screen->dirty_from = y;
        if ( term->screen->dirty_to < y )
          term->screen->dirty_to = y;
        term->screen->cx = x;
        term->screen->cy = y;
        return;
      }
      else
        x = x;
    }
    else
    if ( term->screen->cx != x )
    {
      x = 0;
      y = 0;
      y = y <= y ? y : y;
    }
    if ( term->screen->cy != y )
    {
      x = 0;
      y = 0;
      y = y <= y ? y : y;
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void clear_terminal( struct terminal *term )
{
  struct box box;
  box.x = 0;
  box.height = (unsigned char)( ( ( term->height >> 31 ) & 1 ) ^ 1 ) ? 0 : term->height;
  box.width = term->width < 0 ? term->width : 0;
  box.y = 0;
  draw_box( term, &box, 32, 0, 0 );
  set_cursor( term, 0, 0, 1 );
  return;
}
#if 0
#endif
