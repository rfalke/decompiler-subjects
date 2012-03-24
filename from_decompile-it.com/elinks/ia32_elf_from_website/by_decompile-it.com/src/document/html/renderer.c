#include "renderer.c.h"
static int table_cache_entries;
static struct hash *table_cache;
static struct renderer_context renderer_context;
void *mem_align_alloc__( void **ptr, size_t old, size_t new, size_t objsize, size_t mask )
{
  int ecx;
  if ( ( ( old + mask ) & ~mask ) < ( ( new + mask ) & ~mask ) )
  {
    *ebp_28 = objsize * ( ( new + mask ) & ~mask );
    if ( mem_realloc( ptr[0], objsize * ( ( new + mask ) & ~mask ) ) )
    {
      ptr[0] = mem_realloc( ptr[0], objsize * ( ( new + mask ) & ~mask ) );
      memset( ptr[0] + ( objsize * ( ( old + mask ) & ~mask ) ), 0, ( objsize * ( ( new + mask ) & ~mask ) ) - ( objsize * ( ( old + mask ) & ~mask ) ) );
    }
    else
    {
      return 0;
    }
  }
  return 0;
}
int realloc_line( struct html_context *html_context, struct document *document, int y, int length )
{
  struct screen_char *pos, *end;
  struct line *line;
  int orig_length;
  if ( realloc_lines( &document[0], html_context[0].css_styles.import ) )
  {
    line = &document->data[ line[0].chars ];
    orig_length = document->data[ line[0].chars ].length;
    if ( line->length <= length )
    {
      if ( mem_align_alloc__( &line[0].chars[0].data, orig_length, length + 1, 8, 15 ) )
      {
        end = line[ length ].chars;
        line[ length ].chars = 32;
        line[ length ].length/*.1_1of4*/ = 0;
        set_term_color( line[ length ].chars, 8, line[ length ].chars->data, html_context->stack.next[37] );
        pos = line[ line->length ].chars;
        if ( line[ line->length ].chars < line[ length ].chars )
        {
          do
          {
            pos = &(struct screen_char*)(end);
            pos->attr = end->attr;
            pos++;
          }
          while ( pos[1].data < end[0].data );
        }
        line->length = length + 1;
        return orig_length;
      }
    }
    else
    {
      return orig_length;
    }
  }
  orig_length = -1;
  return orig_length;
}
void expand_lines( struct html_context *html_context, struct part *part, int x, int y, int lines, color_T bgcolor )
{
  int eax;
  int ecx;
  int edx;
  int line;
  if ( assert_failed == 0 )
  {
    if ( part[0] && part )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 185;
      elinks_internal( "assertion part && part-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( part->char_width[0] && part->xa == 2 )
    {
      &html_context->stack.list_head_elinks = &bgcolor;
      if ( lines >= 1 )
      {
        line = 0;
        do
        {
          realloc_line( html_context, part->document, line + part->box.y + y, part->box.x + x );
          line++;
        }
        while ( lines <= line );
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
B2:  assert_failed = 0;
  return;
}
void draw_frame_hchars( struct part *part, int x, int y, int width, unsigned char data, color_T bgcolor, color_T fgcolor, struct html_context *html_context )
{
  int eax;
  int ecx;
  int edx;
  int ebp_44;
  struct screen_char *template;
  if ( assert_failed == 0 )
  {
    assert_failed = width < 1;
    if ( width < 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 296;
      elinks_internal( "assertion width &gt; 0 failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    assert_failed = ebp_52 == 0;
    if ( !(_Bool)( ebp_52 != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 267;
      elinks_internal( "assertion html_context failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( part[0] && ( x + width ) - 1 >= 0 && part && y >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 270;
      elinks_internal( "assertion part && part-&gt;document && x &gt;= 0 && y &gt;= 0 failed!" );
      if ( assert_failed == 0 )
        goto B18;
    }
B18:    if ( realloc_line( part->box.x + ( ( x + width ) - 1 ) ) >= 0 )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = part[4].document->next == 0;
        if ( !(_Bool)( part[4].document->next != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
          errline = 276;
          elinks_internal( "assertion part-&gt;document-&gt;data failed!" );
          if ( assert_failed )
            goto B2;
        }
        template = &part[4].document->next->next->next;
        part->document->next->next->prev = 128;
        &part[4].document->next = data;
        set_term_color( (int)( &part->document->next->next->next ), part->box.y + y, template[ part->box.x >> 3 ].data, ebp_32 );
        ebp_44 = width - 1;
        if ( width != 1 )
        {
          x = x;
          do
          {
            &part[4].document->next = &template->data;
            part[4].document->next->next->prev = &template->attr;
            x++;
            ebp_44--;
          }
          while ( ebp_44 != 1 );
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
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void draw_frame_vchars( struct part *part, int x, int y, int height, unsigned char data, color_T bgcolor, color_T fgcolor, struct html_context *html_context )
{
  int eax;
  int ecx;
  int edx;
  int ebp_44;
  struct screen_char *template;
  if ( assert_failed == 0 )
  {
    assert_failed = html_context == 0;
    if ( !(_Bool)( html_context != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 267;
      elinks_internal( "assertion html_context failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    if ( part[0] && x >= 0 && part && y >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 270;
      elinks_internal( "assertion part && part-&gt;document && x &gt;= 0 && y &gt;= 0 failed!" );
      if ( assert_failed == 0 )
        goto B14;
    }
B14:    if ( realloc_line( html_context, part->document, part->box.y + y, part->box.x + x ) >= 0 )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = part[4].document->next == 0;
        if ( !(_Bool)( part[4].document->next != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
          errline = 276;
          elinks_internal( "assertion part-&gt;document-&gt;data failed!" );
          if ( assert_failed )
            goto B2;
        }
        template = &part[4].document->next->next->next;
        part->document->next->next->prev = 128;
        &part[4].document->next = data;
        set_term_color( (int)( &part->document->next->next->next ), part->box.y + y, part->box.x + x, ebp_32 );
        ebp_44 = height - 1;
        if ( height != 1 )
        {
          do
          {
            if ( realloc_line( html_context, part->document, part->box.y + y + 1, part->box.x + x ) < 0 )
              break;
            &part[4].document->next = &template->data;
            part[4].document->next->next->prev = &template->attr;
            ebp_44--;
          }
          while ( ebp_44 != 1 );
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
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void move_links( struct html_context *html_context, int xf, int yf, int xt, int yt )
{
  int eax;
  int ebp_60;
  struct part *part;
  struct tag *tag;
  int nlink = renderer_context.last_link_to_move;
  int matched;
  if ( assert_failed == 0 )
  {
    assert_failed = html_context[0].css_styles.import == 0;
    if ( !(_Bool)( html_context[0].css_styles.import != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 624;
      elinks_internal( "assertion html_context failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    part = &html_context->part[1].max_width;
    if ( html_context->part[1].max_width && html_context->part )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 629;
      elinks_internal( "assertion part && part-&gt;document failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( realloc_lines( part->document, part->box.y + yt ) )
    {
      if ( nlink < part[5].document )
      {
        ebp_60 = nlink * 52;
      {
        do
        {
          struct link *link = ebp_60 + part[4].spaces;
          int i;
          if ( *(int*)(ebp_60 + *(int*)(part[0].document + 212) + 28) >= 1 )
          {
            i = 0;
            do
            {
              if ( 0 )
              {
              }
              else
              if ( yf + part->box.y < link->points[ i ].y )
              {
                i++;
                if ( i + 1 < *(int*)(ebp_44 + 28) )
                  continue;
                else
                  break;
              }
              if ( part[0].document != nlink )
              {
              }
              else
              if ( *(int*)(tag) < part->box.x + xf )
              {
              }
              else
              if ( yt >= 0 )
              {
                link->points[ i ].y = yt + part->box.y;
                *(int*)(*(int*)(ebp_44 + 24) + ( i << 3 )) = *(int*)(( i << 3 ) + *(int*)(ebp_44 + 24)) + ( xt - xf );
              }
              else
              {
                int to_move = *(int*)(ebp_44 + 28) + ~i;
                if ( assert_failed == 0 )
                {
                  assert_failed = to_move >> 31;
                  if ( to_move >> 31 )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
                    errline = 687;
                    elinks_internal( "assertion to_move &gt;= 0 failed!" );
                  }
                }
                if ( to_move >= 1 )
                  memmove( ( i << 3 ) + *(int*)(ebp_44 + 24), *(int*)(ebp_44 + 24) + ( i << 3 ) + 8, ( to_move << 3 ) << 3 );
                *(int*)(ebp_44 + 28)--;
              }
              i++;
            }
            while ( i + 1 < ebp_28 );
          }
          if ( 0 == 0 )
            renderer_context.last_link_to_move = nlink;
          nlink++;
          ebp_60 += 52;
        }
        while ( nlink < part[5].document );
      }
      }
      if ( yt >= 0 )
      {
        tag = renderer_context.last_tag_to_move;
        matched = 0;
        while ( tag = &tag, link->points[ i ].y != tag->next )
        {
          do
          {
            if ( tag->y == yf + part->box.y )
            {
              if ( part->box.x + xf <= tag->x )
              {
                tag->y = yt + part->box.y;
                tag->x += xt - xf;
              }
            }
            else
            if ( matched == 0 && tag->y <= yf + part->box.y )
            {
              renderer_context->last_tag_to_move = &tag[0];
              tag = &tag;
            }
            matched = 1;
            break;
            while ( tag = &tag, link->points[ i ].y != tag->next )
            {
              do
              {
              }
              while ( part[3].document != tag->next );
              break;
            }
            break;
          }
          while ( part[3].document != tag->next );
          break;
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
B2:  assert_failed = 0;
  return;
}
void del_chars( struct html_context *html_context, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = html_context[0].css_styles.import == 0;
    if ( !(_Bool)( html_context[0].css_styles.import != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 804;
      elinks_internal( "assertion html_context failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    if ( html_context->part && html_context->part && html_context->part->part )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 809;
      elinks_internal( "assertion part && part-&gt;document && part-&gt;document-&gt;data failed!" );
      if ( assert_failed )
      {
      }
    }
    &html_context->part->part = x + html_context->part->box.x;
    move_links( -1, -1 );
    return;
  }
  assert_failed = 0;
  return;
}
int split_line_at( struct html_context *html_context, int width )
{
  int ecx;
  struct part *part;
  int tmp;
  int new_width;
  if ( assert_failed == 0 )
  {
    assert_failed = 0;
    part = html_context->part;
    assert_failed = html_context->part == 0;
    if ( !(_Bool)( html_context->part != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 836;
      elinks_internal( "assertion part failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    new_width += width;
    if ( part->box.width < width + new_width )
      part->box.width = new_width;
    if ( part->document )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = *(int*)(0 + 208) == 0;
        if ( !(_Bool)( *(int*)(0 + 208) != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
          errline = 844;
          elinks_internal( "assertion part-&gt;document-&gt;data failed!" );
          if ( assert_failed )
            goto B2;
        }
        if ( ( ( html_context->options->bits_at_92/*.1_1of4*/ & 16 ) & 255 ) && width < part->spaces_len && part->char_width[ width ] == 2 )
        {
          assert_failed = 0;
          if ( html_context->part && html_context->part && html_context->part->part )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
            errline = 760;
            elinks_internal( "assertion part && part-&gt;document && part-&gt;document-&gt;data failed!" );
            if ( assert_failed )
              assert_failed = 0;
              del_chars( &html_context[0], width, part->cy );
            else
            {
            }
          }
          if ( ( *(int*)(html_context->part->part + ( ( part->cy + *(int*)(html_context->part + 20) ) << 3 ) + 4) - *(int*)(html_context->part + 16) < 0 ? html_context->part->part - ( part->cy + *(int*)(html_context->part + 20) ) : html_context->part->box.x ) - 0 >= 1 )
          {
            assert_failed = 0;
            if ( html_context->part && html_context->part && html_context->part->part )
              assert_failed = 0;
            else
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
              errline = 741;
              elinks_internal( "assertion width &gt; 0 && part && part-&gt;document && part-&gt;document-&gt;data failed!" );
              if ( assert_failed )
                assert_failed = 0;
                &html_context->part->part = width + html_context->part->box.x;
                move_links( &html_context[0], width, part->cy, html_context->stack.list_head_elinks, part->cy + 1 );
              else
              {
              }
            }
            if ( eax >= 0 )
              memcpy( ( ( ebp_44 + *(int*)(ebp_40 + 16) ) << 3 ) + *(int*)(*(int*)(*ebp_40 + 208) + ( ( ebp_52 + *(int*)(ebp_40 + 20) ) << 3 )), ebp_56 + ( ( ebp_48 + width ) << 3 ), ebp_32 << 3 );
          }
        }
        else
        {
          assert_failed = part[4].document->next->next->next != part->cy + part->box.y;
          if ( part[4].document->next->next->next != part->cy + part->box.y )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
            errline = 855;
            elinks_internal( "assertion POS(width, part-&gt;cy).data == ' ' failed: bad split: %c" );
            if ( assert_failed )
              assert_failed = 0;
              assert_failed = 0;
              if ( html_context->part && html_context->part && html_context->part->part )
                assert_failed = 0;
              else
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
                errline = 809;
                elinks_internal( "assertion part && part-&gt;document && part-&gt;document-&gt;data failed!" );
                if ( assert_failed )
                {
                  assert_failed = 0;
                  if ( ( html_context->options->bits_at_92/*.1_1of4*/ & 16 ) & 255 )
                  {
                    tmp -= width;
                    if ( tmp - width >= 1 )
                    {
                      memmove( part->spaces, part->spaces + width, tmp );
                      memmove( part->char_width, part->char_width + width, tmp );
                      tmp = tmp;
                    }
                    if ( assert_failed == 0 )
                    {
                      assert_failed = tmp >> 31;
                      if ( ( tmp >> 31 ) == 0 )
                      {
                        memset( part->spaces + ecx, 0, width );
                        memset( &part->char_width[ 0 ], 0, width );
                        if ( html_context->stack.list_head_elinks >= 1 )
                        {
                          tmp = part->spaces_len - html_context->stack.list_head_elinks;
                          if ( assert_failed == 0 )
                          {
                            assert_failed = tmp < 1;
                            if ( tmp < 1 )
                            {
                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
                              errline = 887;
                              elinks_internal( "assertion tmp &gt; 0 failed: part-&gt;spaces_len - par_format.leftmargin == %d" );
                            }
                            else
                            {
                            }
                          }
                          memmove( html_context->stack.list_head_elinks + part->spaces, part->spaces, tmp );
                          html_context->stack.next = html_context->stack.next;
                          memmove( &part->char_width[ html_context->stack.list_head_elinks ], part->char_width, tmp );
                        }
                        part->cy++;
                        if ( part->cx == width )
                        {
                          part->cx = -1;
                          if ( part->box.height < part->cy + 1 )
                          {
                            part->box.height = part->cy + 1;
                          }
                          return 0;
                        }
                        else
                        {
                          part->cx = ( html_context->stack.list_head_elinks + part->cx ) - width;
                          if ( part->box.height < part->cy + 2 )
                          {
                            part->box.height = part->cy + 2;
                          }
                          return 0;
                        }
                        return 1;
                      }
                      else
                      {
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
                        errline = 878;
                        elinks_internal( "assertion tmp &gt;= 0 failed!" );
                        if ( assert_failed == 0 )
                          return tmp;
                      }
                    }
                    assert_failed = 0;
                  }
                  else
                  {
                    width++;
                    tmp -= width;
                  }
                }
                else
                {
                }
              }
              &html_context->part->part = width + html_context->part->box.x;
              move_links( &html_context[0], width, part->cy, -1, -1 );
              if ( ( html_context->options->bits_at_92/*.1_1of4*/ & 16 ) & 255 )
                continue;
            else
            {
            }
          }
          else
          {
          }
          assert_failed = 0;
          if ( html_context->part && html_context->part && html_context->part->part )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
            errline = 760;
            elinks_internal( "assertion part && part-&gt;document && part-&gt;document-&gt;data failed!" );
            if ( assert_failed )
              assert_failed = 0;
              assert_failed = 0;
            else
            {
            }
          }
          if ( ( *(int*)(html_context->part->part + ( ( part->cy + *(int*)(html_context->part + 20) ) << 3 ) + 4) - *(int*)(html_context->part + 16) < 0 ? html_context->part->part - ( part->cy + *(int*)(html_context->part + 20) ) : html_context->part->box.x ) - 0 >= 1 )
          {
            assert_failed = 0;
            if ( html_context->part && html_context->part && html_context->part->part )
              assert_failed = 0;
            else
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
              errline = 741;
              elinks_internal( "assertion width &gt; 0 && part && part-&gt;document && part-&gt;document-&gt;data failed!" );
              if ( assert_failed )
                assert_failed = 0;
                &html_context->part->part = width + 1 + html_context->part->box.x;
                move_links( &html_context[0], width + 1, part->cy, html_context->stack.list_head_elinks, part->cy + 1 );
                if ( assert_failed == 0 )
                {
                  assert_failed = 0;
                }
                else
                {
                  assert_failed = 0;
                }
              else
              {
              }
            }
            if ( eax >= 0 )
              memcpy( ( ( ebp_52 + *(int*)(ebp_40 + 16) ) << 3 ) + *(int*)(*(int*)(*ebp_40 + 208) + ( ( ebp_56 + *(int*)(ebp_40 + 20) ) << 3 )), ebp_60 + ( ( ebp_48 + ebp_44 ) << 3 ), ebp_28 << 3 );
          }
          else
          {
            assert_failed = 0;
          }
        }
      }
    }
    tmp -= width;
  }
B2:  assert_failed = 0;
}
void align_line( struct html_context *html_context, int y, int last )
{
  int ebp_52;
  int ebp_44;
  struct part *part;
  int shift;
  int len;
  if ( assert_failed )
  {
    assert_failed = 0;
    return;
  }
  else
  {
    assert_failed = html_context[0].css_styles.import == 0;
    if ( !(_Bool)( html_context[0].css_styles.import != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 1160;
      elinks_internal( "assertion html_context failed!" );
      if ( assert_failed )
        continue;
    }
    part = html_context->part;
    if ( html_context->part && part && part->part )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 1165;
      elinks_internal( "assertion part && part-&gt;document && part-&gt;document-&gt;data failed!" );
      if ( assert_failed )
        continue;
    }
    len = part[4].document->next->prev - ( part->box.y + y );
    if ( part[4].document->next->prev - ( part->box.y + y ) >= 1 && html_context->stack.list_head_elinks )
    {
      if ( html_context->stack.list_head_elinks == 3 )
      {
        if ( last == 0 )
        {
          assert_failed = 0;
          if ( html_context->part && html_context->part && html_context->part->part )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
            errline = 1026;
            elinks_internal( "assertion part && part-&gt;document && part-&gt;document-&gt;data failed!" );
            if ( assert_failed )
              continue;
            else
            {
            }
          }
          assert_failed = ( "Huge expression, analysis aborted...", 0 );
          if ( !( "Huge expression, analysis aborted...", 0 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
            errline = 1030;
            elinks_internal( "assertion len &gt; 0 failed!" );
            if ( assert_failed )
              continue;
          }
          ebp_44 = part[0].document << 3;
          if ( eax )
          {
            if ( eax )
            {
              ebp_52 = html_context->part->part;
              // memcpy( ebp_68, ( *(int*)(edi + 16) << 3 ) + *(int*)(*(int*)(edi + 208) + ( ( y + *(int*)(edi + 20) ) << 3 )), ebp_44 );
              ebp_44 = -1;
              if ( *ebp_68 == 32 )
              {
                do
                while ( *(int*)(ecx + ( ( eax + 1 ) << 3 )) == 32 );
                ebp_44 = ( 0 + 1 ) - 1;
              }
              *ebp_56 = ebp_44;
              if ( ebp_48 < edx )
              {
                do
                {
                  if ( ecx == 32 )
                  {
                  }
                }
                while ( edx <= eax + 1 );
                html_context = ebp_52;
                html_context->part->document = html_context->part->document;
                if ( ( (unsigned char)( ( html_context->stack.list_head_elinks - html_context->stack.list_head_elinks < 0 ) ^ 1 ) ? 0 : html_context->stack.list_head_elinks - html_context->stack.list_head_elinks ) - ( html_context->part + ( ( 1 + 1 ) << 2 ) ) >= 1 && 1 + 1 > 1 && realloc_line( &html_context[0], html_context->part[0].document, y + *(int*)(ebp_44 + 20), ( (unsigned char)( ( html_context->stack.list_head_elinks - html_context->stack.list_head_elinks < 0 ) ^ 1 ) ? 0 : html_context->stack.list_head_elinks - html_context->stack.list_head_elinks ) + *(int*)(ebp_44 + 16) ) )
                {
                  ebp_44 = 0;
                  while ( 1 )
                  {
                    if ( assert_failed == 0 )
                    {
                      assert_failed = ( html_context->part->spaces - ebp_44 ) >> ( html_context->part->document + ebp_44 );
                      if ( ( html_context->part->spaces - ebp_44 ) >> ( html_context->part->document + ebp_44 ) )
                      {
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
                        errline = 1098;
                        elinks_internal( "assertion word_len &gt;= 0 failed!" );
                        if ( assert_failed )
                          goto B98;
                      }
                      ebp_52 = ebx + ( ebp_64 / ebp_84 );
                      assert_failed = ( "Huge expression, analysis aborted...", 0 );
                      if ( !( "Huge expression, analysis aborted...", 0 ) )
                      {
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
                        errline = 1107;
                        elinks_internal( "assertion LEN(y) &gt;= new_start + word_len failed!" );
                        if ( assert_failed )
                          assert_failed = 0;
                          ebp_44++;
                          if ( 1 + 1 <= ebp_44 )
                            goto B88;
                          else
                          {
                          }
                      }
                      memcpy( ( ( ebp_52 + *(int*)(edi + 16) ) << 3 ) + *(int*)(*(int*)(edi + 208) + ( ( ebp_48 + *(int*)(edi + 20) ) << 3 )), ebp_68 + ( ebx << 3 ), esi << 3 );
                      if ( ebp_44 == 0 )
                        continue;
                      else
                      {
                        if ( ebp_52 > 0 )
                        {
                          do
                          {
                          }
                          while ( edx + 1 < ebp_52 );
                        }
                        if ( ebp_52 + ~0 == 0 )
                          continue;
                        else
                        {
                          move_links( &html_context[0], 0 + 1, y, ebp_52, y );
                          while ( *(int*)(*ebp_44 + 260) )
                          {
                            ebp_52 = ( *(int*)(( ( ( *(int*)(*ebp_44 + 260) - 1 ) * 52 ) - 52 ) + *(int*)(*ebp_44 + 212) + 28) << 3 ) - 8;
                            while ( ebx > 1 )
                            {
                              if ( ebp_88 == *(int*)(ebp_52 + *(int*)(esi + 24)) && ebp_100 == *(int*)(edx + 4) )
                              {
                                if ( eax )
                                {
                                  *(int*)(ebp_52 + 28) += ebp_92;
                                  do
                                  {
                                    *(int*)(eax + ( edx << 3 ) + 4) = y + *(int*)(ebp_44 + 20);
                                  }
                                  while ( ebp_92 + ( edx - 1 ) );
                                }
                              }
                              else
                              {
                                ebp_52 -= 8;
                              }
                            }
                          }
                        }
                      }
                    }
B98:                    assert_failed = 0;
                  }
                }
              }
              else
              {
                *ebp_56 = html_context->part;
                html_context->part->spaces = (unsigned char*)html_context->part;
              }
B88:              mem_free( (void*)html_context->part );
              mem_free( (void*)html_context->part );
              return;
            }
            else
            {
              mem_free( (void*)html_context->part );
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
        shift = ( (unsigned char)( ( *(int*)(html_context->stack.next + 128) - *(int*)(html_context->stack.next + 124) < 0 ) ^ 1 ) ? 0 : html_context->stack.list_head_elinks - html_context->stack.list_head_elinks ) - len;
        if ( ebp_44 == 1 )
          shift /= 2;
        if ( shift >= 1 )
        {
          assert_failed = 0;
          if ( html_context->part && html_context->part && html_context->part->part )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
            errline = 782;
            elinks_internal( "assertion part && part-&gt;document && part-&gt;document-&gt;data failed!" );
            if ( assert_failed )
              continue;
            else
            {
            }
          }
          ebp_44 = 0;
          ebp_44 = *(int*)(html_context->part->part + ( ( y + *(int*)(html_context->part + 20) ) << 3 ) + 4) - *(int*)(html_context->part + 16) < 0 ? html_context->part->part - ( y + *(int*)(html_context->part + 20) ) : html_context->part->box.x;
          if ( eax )
          {
            // memcpy( ebp_52, ( *(int*)(edx + 16) << 3 ) + *(int*)(*(int*)(edx + 208) + ( ( y + *(int*)(edx + 20) ) << 3 )), ebp_56 );
            if ( assert_failed == 0 )
            {
              assert_failed = 0;
              if ( html_context->part && html_context->part )
                assert_failed = 0;
              else
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
                errline = 236;
                elinks_internal( "assertion part && part-&gt;document && width &gt; 0 failed!" );
                if ( assert_failed )
                  y = y;
                else
                {
                }
              }
              if ( realloc_line( &html_context ) >= 0 )
              {
                if ( assert_failed == 0 )
                {
                  assert_failed = *(int*)(*(int*)(html_context->part) + 208) == 0;
                  if ( !(_Bool)( *(int*)(*(int*)(html_context->part) + 208) != 0 ) )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
                    errline = 242;
                    elinks_internal( "assertion part-&gt;document-&gt;data failed!" );
                    if ( assert_failed == 0 )
                      goto B84;
                  }
B84:                  set_term_color( ebp_32, 8, (int)( html_context->part->document->next ), html_context->stack.list_head_elinks );
                  if ( html_context->part->part + y + *(int*)(html_context->part + 20) < ( html_context->part->box.x << 3 ) )
                  {
                    while ( eax = *(int*)(( html_context->part->part + y + *(int*)(html_context->part + 20) + ( html_context->part->box.x << 3 ) ) - ( shift << 3 )), *(int*)(eax + 4) = *(int*)(( html_context->part->part + y + *(int*)(html_context->part + 20) + ( html_context->part->box.x << 3 ) ) - ( shift << 3 )), eax + 8 < edx )
                    {
                    }
                    shift = shift;
                  }
                }
              }
              if ( assert_failed )
                assert_failed = 0;
                mem_free(  );
                move_links( &html_context[0], 0, y, shift, y );
                return;
            }
            assert_failed = 0;
            if ( ebp_44 >= 1 && html_context->part && html_context->part && html_context->part->part )
              assert_failed = 0;
            else
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
              errline = 741;
              elinks_internal( "assertion width &gt; 0 && part && part-&gt;document && part-&gt;document-&gt;data failed!" );
              if ( assert_failed )
                assert_failed = 0;
              else
              {
              }
            }
            ebp_44 = ( html_context->part->box.x + ebp_44 ) - 1;
            if ( realloc_line( &html_context[0], html_context->part->document, y + html_context->part->box.y, shift + ( ( html_context->part->box.x + ebp_44 ) - 1 ) ) >= 0 )
            {
              ebp_44 = shift + html_context->part->box.x;
              memcpy( ( ( shift + *(int*)(ebp_48 + 16) ) << 3 ) + *(int*)(*(int*)(*ebp_48 + 208) + ( ( y + *(int*)(ebp_48 + 20) ) << 3 )), ebp_52, ebp_56 );
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
    else
    {
      return;
    }
  }
}
void put_chars_conv( struct html_context *html_context, unsigned char *chars, int charslen )
{
  if ( assert_failed == 0 )
  {
    assert_failed = html_context[0].css_styles.import == 0;
    if ( !(_Bool)( html_context[0].css_styles.import != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 1346;
      elinks_internal( "assertion html_context failed!" );
      if ( assert_failed == 0 )
      {
        if ( chars[0] )
        {
        }
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
          errline = 1351;
          elinks_internal( "assertion part && chars && charslen failed!" );
          if ( assert_failed )
            chars[0] = chars[0];
            assert_failed = 0;
            return;
          else
          {
            if ( ( html_context->stack.list_head_elinks & 16 ) & 255 )
            {
              charslen = charslen;
              chars = &chars[0];
              html_context = &html_context[0];
            }
            convert_string_elinks( renderer_context.convert_table, &chars[0], charslen, html_context->options->cp, CSM_DEFAULT, 0, &put_chars, html_context[0].css_styles.import );
            return;
          }
        }
      }
    }
    else
    if ( chars[0] == 0 )
      continue;
    if ( html_context->part && charslen )
      assert_failed = 0;
  }
}
void put_chars( struct html_context *html_context, unsigned char *chars, int charslen )
{
  int eax;
  int ecx;
  int edx;
  int ebp_148;
  int ebp_96;
#error unstructured control flow
}
void line_break( struct html_context *html_context )
{
  int eax;
  int ecx;
  int edx;
  struct part *part;
  struct tag *tag;
  if ( assert_failed == 0 )
  {
    assert_failed = html_context[0].css_styles.import == 0;
    if ( !(_Bool)( html_context[0].css_styles.import != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 1699;
      elinks_internal( "assertion html_context failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    part = html_context->part;
    assert_failed = html_context->part == 0;
    if ( !(_Bool)( html_context->part != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 1704;
      elinks_internal( "assertion part failed!" );
      if ( assert_failed )
        html_context = &html_context[0];
    }
    if ( part->box.width < html_context->stack.list_head_elinks + part->cx )
      part->box.width = html_context->stack.list_head_elinks + part->cx;
    if ( ( renderer_context.bits_at_48/*.1_1of4*/ & 2 ) & 255 )
    {
      renderer_context.bits_at_48/*.1_1of4*/ = (int)renderer_context.bits_at_48/*.1_1of4*/ & -3;
      part->cx = -1;
      part->xa = 0;
      return;
    }
    if ( part && part->part )
    {
      if ( realloc_lines( part->document, part->cy + part->box.height + 1 ) )
      {
        if ( html_context->stack.list_head_elinks < part->cx && part->cx - 1 < ( (unsigned char)( ( part[4].document->next->prev - ( part->cy + part->box.y ) < part->box.x ) ^ 0 ) ? 1 : 0 ) && ( part[4].document->next->prev - ( part->cy + part->box.y ) ) )
        {
          del_chars( &html_context[0], (int)renderer_context.bits_at_48/*.1_1of4*/ - 1, part->cy );
          part->cx--;
        }
        if ( part->cx >= 1 )
          align_line( &html_context[0], part->cy, 1 );
        tag = renderer_context.last_tag_for_newline;
        if ( renderer_context.last_tag_for_newline )
        {
          do
          {
            if ( part[3].document == tag[0].next )
              break;
            tag->x = part->box.x;
            tag->y = part->cy + part->box.y + 1;
            tag = tag->prev;
          }
          while ( tag->prev );
        }
      }
      else
      {
        return;
      }
    }
    part->cx = -1;
    part->xa = 0;
    memset( part->spaces, 0, part->spaces_len );
    memset( part->char_width, 0, part->spaces_len );
    part->cy++;
    return;
  }
  assert_failed = 0;
  return;
}
void check_html_form_hierarchy( struct part *part )
{
  int eax;
  int ecx;
  int edx;
  struct document *document;
  struct list_head_elinks form_controls;
  struct form *form;
  struct form_control *fc, *next;
  form_controls.prev = form_controls.next = form_controls.next;
  document = part[0].document;
  if ( part[2].cy != part[2].cy )
  {
    if ( assert_failed )
      assert_failed = 0;
    if ( part[2].cy != form[0].next )
    {
      do
      {
        if ( assert_failed == 0 )
        {
          assert_failed = form->form_end < form->form_num;
          if ( form->form_end < form->form_num )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
            errline = 1912;
            elinks_internal( "assertion form-&gt;form_num &lt;= form-&gt;form_end failed: %p [%d : %d]" );
          }
        }
        fc = &form->items.next[0];
        next = &form->items.next[0];
        if ( form->items.next != form->items.next )
        {
          for ( ; ( form->form_num <= fc->position && fc->position <= form->form_end ) || fc[0].next == form_controls.next; next = &next[0] )
          {
            fc->prev = fc->prev;
            &fc->prev = &fc;
            fc = fc->prev = &form_controls.next[0];
            fc->prev = &fc[0];
            fc->prev = &fc[0];
            fc = &next[0];
            next = &next;
            if ( form->items.next != next[0].next )
              continue;
          }
        }
        form = &form;
      }
      while ( part->cy != form->next );
      fc = &form_controls.next[0];
      next = &form_controls.next[0];
      if ( form_controls.next != fc->prev )
      {
        while ( 1 )
        {
          &document = document;
          form = &document->forms.next[0];
          if ( ebp_60 != document->forms.next )
          {
            do
            {
              if ( form->form_num <= fc->position && form->items.next <= form->form_end )
              {
                fc->form = &form[0];
                if ( form->items.next != fc[0].next )
                {
                  fc->prev = fc->prev;
                  &fc->prev = &fc;
                  fc->prev = &form->items.next[0];
                  fc = &form->items.next[0];
                  fc->form->items.next = (void*)fc[0].next;
                  fc->prev = &fc[0];
                }
              }
              else
              {
                form = &form;
              }
            }
            while ( form->next != ebx );
            fc = &next[0];
            next = &next;
            if ( fc->prev == next[0].next )
              goto B5;
            else
            {
              next = &fc;
            }
          }
          next = &next;
          fc = &next;
          if ( fc->prev == next[0].next )
            goto B5;
          else
          {
            next = &fc;
          }
        }
      }
    }
B5:    if ( assert_failed == 0 )
    {
      assert_failed = form_controls->next != fc->prev;
      if ( form_controls.next != fc->prev )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
        errline = 1938;
        elinks_internal( "assertion list_empty(form_controls) failed!" );
        return;
      }
    }
  }
  return;
}
void *html_special( struct html_context *html_context, enum html_special_type  c )
{
  int eax;
  int ecx;
  int edx;
  int ebp_56;
  struct part *part;
  struct document *document;
  void *ret_val;
  if ( assert_failed == 0 )
  {
    assert_failed = html_context[0].css_styles.import == 0;
    if ( !(_Bool)( html_context[0].css_styles.import != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 1976;
      elinks_internal( "assertion html_context failed!" );
      if ( assert_failed )
        goto B2;
    }
    part = html_context->part;
    assert_failed = html_context->part == 0;
    if ( !(_Bool)( html_context->part != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 1981;
      elinks_internal( "assertion part failed!" );
      if ( assert_failed )
        goto B2;
    }
    document = part->document;
    switch ( c )
    {
    case SP_FORM:
    {
      struct form *form = *ebp_16;
      if ( assert_failed == 0 )
      {
        assert_failed = form[0].next == 0;
        if ( !(_Bool)( form[0].next != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
          errline = 1751;
          elinks_internal( "assertion part && form failed!" );
          if ( assert_failed == 0 )
            goto B24;
        }
B24:        assert_failed = form->form_num < 1;
        if ( form->form_num < 1 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
          errline = 1752;
          elinks_internal( "assertion form-&gt;form_num &gt; 0 failed!" );
          if ( assert_failed == 0 )
            goto B26;
        }
B26:        assert_failed = form->form_end != 2147483647;
        if ( form->form_end != 2147483647 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
          errline = 1753;
          elinks_internal( "assertion form-&gt;form_end == INT_MAX failed!" );
          if ( assert_failed == 0 )
            goto B28;
        }
B28:        if ( part->document )
        {
          if ( *(int*)(part->document + 148) == part->document + 148 )
          {
            if ( init_form(  ) )
            {
              *(int*)(init_form(  ) + 8) = 0;
              *(int*)(init_form(  )) = part[2].cy;
              *(int*)(init_form(  ) + 4) = part[2].cy;
              part[2].cy = init_form(  );
              *(int*)(*(int*)(init_form(  )) + 4) = init_form(  );
              part[2].cy = part[2].cy;
            }
          }
          if ( part->part != part->document + 148 )
          {
            form->form_num = form->form_num;
            do
            {
              if ( part->part <= form->form_num && form->form_num <= part->part )
              {
                part = &part[0];
                if ( edx != ecx )
                {
                  form->form_end = part->part;
                  part->part = form->form_num - 1;
                  if ( assert_failed == 0 )
                  {
                    assert_failed = edx < *(int*)(&eax->ip_family);
                    if ( edx < *(int*)(&eax->ip_family) )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
                      errline = 1807;
                      elinks_internal( "assertion nform-&gt;form_num &lt;= nform-&gt;form_end failed: [%d:%d] [%d:%d]" );
                    }
                  }
                  form = &part[2].cy;
                  form->prev = &part[2].cy;
                  part[2].cy = form[0].next;
                  form->prev = &form[0];
                  ((int*)ret_val)[0] = 0;
                  break;
                }
              }
              else
              {
              }
            }
            while ( html_context[1].line_breax != part[2].cy );
          }
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
          errline = 1812;
          elinks_error( "hole between forms" );
        }
        done_form( &form[0] );
        ((int*)ret_val)[0] = 0;
        return 0;
      }
    }
      break;
    case SP_CONTROL:
      if ( assert_failed == 0 )
      {
        assert_failed = *ebp_16 == 0;
        if ( !(_Bool)( *ebp_16 != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
          errline = 1822;
          elinks_internal( "assertion part && fc failed!" );
          if ( assert_failed )
            goto B2;
        }
        if ( part->document == 0 )
        {
          done_form_control( *ebp_16 );
          mem_free( *ebp_16 );
          ((int*)ret_val)[0] = 0;
          return 0;
        }
        *(int*)(*ebp_16 + 12) = renderer_context.g_ctrl_num;
        renderer_context.g_ctrl_num++;
        if ( part[2].cy == part[2].cy )
        {
          *(int*)(init_form(  ) + 8) = 0;
          *(int*)(init_form(  )) = part[2].cy;
          *(int*)(init_form(  ) + 4) = part[2].cy;
          part[2].cy = init_form(  );
          *(int*)(*(int*)(init_form(  )) + 4) = init_form(  );
          part[2].cy = part[2].cy;
        }
        *(int*)(*ebp_16 + 8) = part[2].cy;
        *(int*)(*ebp_16 + 4) = part[2].cy + 36;
        part[2].cy = *ebp_16 = part[2].cy;
        ((int*)ret_val)[0] = 0;
        return 0;
      }
      break;
    case SP_TAG:
      if ( document[0].next )
      {
        unsigned char *t;
        t[0] = *ebp_16;
        if ( assert_failed == 0 )
        {
          assert_failed = 0;
          ebp_64 = strlen( &t[0] );
          *ebp_68 = part->cx;
          if ( mem_alloc( strlen( &t[0] ) + 20 ) )
          {
            *(int*)(mem_alloc( strlen( &t[0] ) + 20 ) + 8) = part->box.x + part->cx;
            *(int*)(mem_alloc( strlen( &t[0] ) + 20 ) + 12) = part->box.y + part->cy;
            memcpy( mem_alloc( strlen( &t[0] ) + 20 ) + 16, &t[0], strlen( &t[0] ) + 1 );
            *(int*)(mem_alloc( strlen( &t[0] ) + 20 ) + 4) = document->tags;
            *(int*)(mem_alloc( strlen( &t[0] ) + 20 )) = document->tags;
            document->tags.next = mem_alloc( strlen( &t[0] ) + 20 );
            *(int*)(*(int*)(mem_alloc( strlen( &t[0] ) + 20 )) + 4) = mem_alloc( strlen( &t[0] ) + 20 );
            if ( document->tags.next == renderer_context.last_tag_for_newline )
            {
              renderer_context.last_tag_for_newline = document->tags.next + 4;
              ((int*)ret_val)[0] = 0;
              return 0;
            }
            ((int*)ret_val)[0] = 0;
          }
        }
      }
      break;
    case SP_TABLE:
      ((int*)ret_val)[0] = renderer_context.convert_table;
      return 0;
      break;
    case SP_USED:
      ((int*)ret_val)[0] = 0;
      ((int*)ret_val)[0] = document[0].next != 0;
      return 0;
      break;
    case SP_CACHE_CONTROL:
    {
      struct cache_entry *cached;
      renderer_context.cached->cache_mode = CACHE_MODE_NEVER;
      renderer_context.cached->bits_at_92/*.1_1of4*/ &= 254;
      ((int*)ret_val)[0] = 0;
      return 0;
    }
      break;
    case SP_CACHE_EXPIRES:
    {
      time_t expires = expires;
      struct cache_entry *cached = renderer_context.cached;
      if ( expires && cached->cache_mode != CACHE_MODE_NEVER )
      {
        timeval_from_seconds( &cached->max_age, expires );
        ((int*)ret_val)[0] = 0;
        cached->bits_at_92/*.1_1of4*/ |= 1;
        return 0;
      }
    }
      break;
    case SP_FRAMESET:
    {
      struct frameset_param *fsp = *ebp_16;
      struct frameset_desc *frameset_desc;
      if ( fsp || document->frame_desc == 0 )
      {
        create_frameset( &fsp[0] );
        if ( fsp->parent == 0 && document->frame_desc == 0 )
        {
          document->frame_desc = create_frameset( &fsp[0] );
        }
        return 0;
      }
      else
      {
        ((int*)ret_val)[0] = 0;
      }
    }
      break;
    case SP_FRAME:
      add_frameset_entry( *ebp_16, 0, *(int*)(ebp_16 + 4), *(int*)(ebp_16 + 8) );
      ((int*)ret_val)[0] = 0;
      return 0;
      break;
    case SP_NOWRAP:
      renderer_context.bits_at_48/*.1_1of4*/ = ( (int)renderer_context.bits_at_48/*.1_1of4*/ & -9 ) | ( ( *ebp_16 != 0 ) << 3 );
      ((int*)ret_val)[0] = 0;
      return 0;
      break;
    case SP_REFRESH:
    {
      unsigned long seconds = *ebp_16;
      unsigned char *t;
      t[0] = *(int*)(ebp_16 + 4);
      if ( document[0].next )
      {
        if ( document->refresh )
          done_document_refresh( document->refresh );
        document->refresh = init_document_refresh( &t[0], seconds );
        ((int*)ret_val)[0] = 0;
        return 0;
      }
    }
      break;
    case SP_COLOR_LINK_LINES:
      if ( document[0] && document->options && document->options.use_document_colors == 2 && html_context->part[4].link_num >= 1 )
      {
        document = &document[0];
        do
        {
          if ( html_context->part[4].document->prev >= 1 )
          {
            do
            {
              set_term_color( eax + ( esi << 3 ), ebp_32, ebp_52, ebp_48 );
              if ( ebx == 58 && 0 == 0 )
              {
              }
            }
            while ( 0 + 1 + 1 < html_context->part[4].document->next );
          }
          ebp_56++;
        }
        while ( *(int*)(edi + 256) <= ebp_56 );
        ((int*)ret_val)[0] = 0;
      }
      break;
    case SP_STYLESHEET:
      if ( document[0].next )
      {
        add_to_uri_list( &document->css_imports.uri_list, *ebp_16 );
        ((int*)ret_val)[0] = 0;
        return 0;
      }
      break;
    default:
      break;
    }
    return 0;
  }
{
B2:  struct form_control *fc;
  assert_failed = 0;
  ((int*)ret_val)[0] = 0;
  return 0;
}
}
void free_table_cache( void )
{
  int eax;
  if ( table_cache )
  {
    struct hash_item *item;
    int i;
    if ( ( 1 << table_cache->width ) >= 1 )
    {
      i = 0;
      do
      {
        item = &table_cache->hash[ i ].next[0];
        if ( *(int*)(table_cache + ( i << 3 ) + 8) != table_cache + ( i << 3 ) + 8 )
        {
          do
          {
            void *p = item->value;
            if ( item->value )
            {
              mem_free( &((int*)p)[0] );
              table_cache->width = table_cache;
            }
            item = &item;
          }
          while ( item->next != table_cache + ( i << 3 ) + 8 );
        }
        i++;
      }
      while ( i + 1 < ( 1 << table_cache->width ) );
    }
    free_hash( &table_cache );
    table_cache_entries = 0;
  }
  return;
}
struct part *format_html_part( struct html_context *html_context, unsigned char *start, unsigned char *end, int align, int margin, int width, struct document *document, int x, int y, unsigned char *head, int link_num )
{
  int edx;
  struct part *part;
  void *html_state;
  struct tag *saved_last_tag_to_move = renderer_context.last_tag_to_move;
  int saved_margin;
  int saved_last_link_to_move = renderer_context.last_link_to_move;
  saved_margin = html_context->margin;
  if ( table_cache == 0 )
  {
    table_cache = init_hash8(  );
  }
  else
  if ( document[0].next == 0 )
  {
    *ebp_52 = ebp_52;
    do
    {
      *(int*)(ebp_52 + 0) = 0;
    }
    while ( 0 + 4 + 4 < 28 );
  {
    struct table_cache_entry_key key;
    struct hash_item *item;
    key.start = start;
    key.end = end;
    key.align = align;
    key.margin = margin;
    key.width = width;
    key.x = x;
    key.link_num = link_num;
    item = get_hash_item( table_cache, ebp_52, 28 );
    if ( item && mem_alloc( 52 ) )
    {
      part->document = &item->value[9];
      part->spaces = &item->value[10];
      part->spaces_len = item->value[11];
      part->char_width = &item->value[12];
      part->box.x = item->value[13];
      part->box.y = item->value[14];
      part->box.width = item->value[15];
      part->box.height = item->value[16];
      part->max_width = item->value[17];
      part->xa = item->value[18];
      part->cx = item->value[19];
      part->cy = item->value[20];
      part->link_num = item->value[21];
      return &part[0];
    }
  }
  }
  if ( assert_failed == 0 )
  {
    assert_failed = y >> 31;
    if ( y >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 2167;
      elinks_internal( "assertion y &gt;= 0 failed: format_html_part: y == %d" );
      if ( assert_failed )
        document = &document[0];
    }
    if ( document[0].next )
    {
      struct node *node;
      if ( node[0].next )
      {
        node->box.x = x < 0 ? x : 0;
        node->box.width = (unsigned char)( ( ( width >> 31 ) & 1 ) ^ 1 ) ? 0 : width;
        node->box.height = 1;
        node->box.y = (unsigned char)( ( ( y >> 31 ) & 1 ) ^ 1 ) ? 0 : y;
        node->prev = &document->nodes.next[0];
        node = &document->nodes.next[0];
        document->nodes.next = (void*)node[0].next;
        node->prev = &node[0];
      }
      renderer_context.last_link_to_move = document->nlinks;
      renderer_context.last_tag_to_move = &document->tags.next[0];
      renderer_context.last_tag_for_newline = &document->tags.next[0];
    }
    else
    {
      renderer_context.last_link_to_move = 0;
      renderer_context.last_tag_to_move = 0;
      renderer_context.last_tag_for_newline = 0;
    }
    html_context->margin = margin;
    renderer_context.bits_at_48/*.1_1of4*/ = (unsigned char)( (int)renderer_context.bits_at_48/*.1_1of4*/ & -2 ) | ( document[0].next == 0 );
    if ( renderer_context.link_state_info.link )
      mem_free( (void*)renderer_context.link_state_info.link );
    if ( renderer_context.link_state_info.target )
      mem_free( (void*)renderer_context.link_state_info.target );
    if ( renderer_context.link_state_info.image )
      mem_free( (void*)renderer_context.link_state_info.image );
    renderer_context.bits_at_48/*.1_1of4*/ |= 2;
    renderer_context.link_state_info.link = 0;
    renderer_context.link_state_info.target = 0;
    renderer_context.link_state_info.image = 0;
    renderer_context.link_state_info.form = 0;
    part[0].document = (struct document*)mem_calloc( 1, 52 );
    if ( mem_calloc( 1, 52 ) )
    {
      *(int*)(mem_calloc( 1, 52 )) = document[0];
      part->box.x = x;
      part->cx = -1;
      part->cy = 0;
      part->box.y = y;
      part->link_num = link_num;
      parse_html( start, end, &part[0], head, &html_context[0] );
      done_html_parser_state( &html_context[0], init_html_parser_state( &html_context[0], ELEMENT_IMMORTAL, align, margin, width ) );
      if ( part->max_width < part->box.width )
        part->max_width = part->box.width;
      renderer_context.bits_at_48/*.1_1of4*/ &= 253;
      if ( renderer_context.link_state_info.link )
        mem_free( (void*)renderer_context.link_state_info.link );
      if ( renderer_context.link_state_info.target )
        mem_free( (void*)renderer_context.link_state_info.target );
      if ( renderer_context.link_state_info.image )
        mem_free( (void*)renderer_context.link_state_info.image );
      renderer_context.link_state_info.link = 0;
      renderer_context.link_state_info.target = 0;
      renderer_context.link_state_info.image = 0;
      renderer_context.link_state_info.form = 0;
    {
      void *p = (void*)part->spaces;
      if ( part->spaces )
        mem_free( &((int*)p)[0] );
    {
      void *p = (void*)part->char_width;
      if ( part->char_width )
        mem_free( &((int*)p)[0] );
      if ( document[0].next )
      {
        struct node *node = &document->nodes.next[0];
        &document->nodes.list_head_elinks = ( part->box.height + y ) - document->nodes.list_head_elinks;
      }
    }
    }
    }
    renderer_context.last_link_to_move = saved_last_link_to_move;
    renderer_context.last_tag_to_move = saved_last_tag_to_move;
    renderer_context.bits_at_48/*.1_1of4*/ = (unsigned char)( (int)renderer_context.bits_at_48/*.1_1of4*/ & 1 ) | (unsigned char)( (int)renderer_context.bits_at_48/*.1_1of4*/ & -2 );
    html_context->margin = saved_margin;
    if ( document[0].next == 0 && html_context->table_level > 1 && table_cache && table_cache_entries <= 16383 && mem_calloc( 1, 88 ) )
    {
      *(int*)(mem_calloc( 1, 88 ) + 8) = start[0];
      *(int*)(mem_calloc( 1, 88 ) + 12) = end[0];
      *(int*)(mem_calloc( 1, 88 ) + 16) = align;
      *(int*)(mem_calloc( 1, 88 ) + 20) = margin;
      *(int*)(mem_calloc( 1, 88 ) + 24) = width;
      *(int*)(mem_calloc( 1, 88 ) + 28) = x;
      *(int*)(mem_calloc( 1, 88 ) + 32) = link_num;
      *(int*)(mem_calloc( 1, 88 ) + 36) = part->document->next;
      *(int*)(mem_calloc( 1, 88 ) + 40) = part->spaces[0];
      *(int*)(mem_calloc( 1, 88 ) + 44) = part->spaces_len;
      *(int*)(mem_calloc( 1, 88 ) + 48) = part->char_width[0];
      *(int*)(mem_calloc( 1, 88 ) + 52) = part->box;
      *(int*)(mem_calloc( 1, 88 ) + 56) = part->box.y;
      *(int*)(mem_calloc( 1, 88 ) + 60) = part->box.width;
      *(int*)(mem_calloc( 1, 88 ) + 64) = part->box.height;
      *(int*)(mem_calloc( 1, 88 ) + 68) = part->max_width;
      *(int*)(mem_calloc( 1, 88 ) + 72) = part->xa;
      *(int*)(mem_calloc( 1, 88 ) + 76) = part->cx;
      *(int*)(mem_calloc( 1, 88 ) + 80) = part->cy;
      *(int*)(mem_calloc( 1, 88 ) + 84) = part->link_num;
      if ( add_hash_item( table_cache, mem_calloc( 1, 88 ) + 8, 28, mem_calloc( 1, 88 ) ) == 0 )
      {
        mem_free( &esi );
        return &part[0];
      }
      table_cache_entries++;
      return &part[0];
    }
    else
    {
      return &part[0];
    }
  }
  assert_failed = 0;
  part[0].document = 0;
  return &part[0];
}
void render_html_document( struct cache_entry *cached, struct document *document, struct string *buffer )
{
  int ecx;
  int edx;
  struct html_context *html_context;
  struct part *part;
  unsigned char *start;
  unsigned char *end;
  struct string title;
  struct string head;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( document[0].next == 0 ) | ( cached[0].next == 0 ) ) & 1;
    if ( ( ( document[0].next == 0 ) | ( cached[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/renderer.c";
      errline = 2276;
      elinks_internal( "assertion cached && document failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    if ( init_string( &head ) )
    {
      if ( cached->head )
        add_to_string( &head, cached->head );
      start[0] = buffer[0].source;
      part = buffer->length + buffer[0].source;
      html_context = init_html_parser( cached->uri, &document->options, buffer[0].source, (unsigned char*)part, &head, &title, &put_chars_conv, &line_break, &html_special );
      if ( html_context )
      {
        renderer_context.cached = &cached[0];
        renderer_context.g_ctrl_num = 0;
        renderer_context.convert_table = get_convert_table( head.source, document->options.cp, document->options.assume_cp, &document->cp, &document->cp_status, document->options.hard_assume );
        html_context->options->bits_at_92/*.1_1of4*/ = ( *(char*)(html_context->options + 92) & -17 ) | ( ( is_cp_utf8( document->options.cp ) & 1 ) << 4 );
        html_context->doc_cp = document->cp;
        if ( title.length )
        {
          document->title = convert_string_elinks( renderer_context.convert_table, title.source, document->forms.next, document->options.cp, CSM_DEFAULT, 0, 0, 0 );
        }
        done_string( &title );
        part = format_html_part( html_context, &start[0], (unsigned char*)part, html_context->stack.list_head_elinks, html_context->stack.list_head_elinks, document->options.box.width, &document[0], 0, 0, head.source, 1 );
      {
        while ( 1 )
        {
          void *p;
          esi = ((int*)p)[0];
          do
          {
            if ( document->height == 0 || *(int*)(document->data + ( ( document->height << 3 ) - 8 ) + 4) )
            {
              int i;
              document->width = 0;
              if ( document->height >= 1 )
              {
                i = 0;
                for ( ; document->width < document->data[ i ].length; document->width = document->width )
                {
                  i++;
                  if ( document->height <= i + 1 )
                    goto B27;
                  else
                  {
                    //document->width = document->width;
                  }
                }
              }
B27:              document->options.bits_at_92/*.1_1of4*/ |= 2;
              document->bgcolor = html_context->stack.list_head_elinks;
              done_html_parser( html_context );
              if ( document->forms.next != document + 148 )
              {
                if ( document->forms.list_head_elinks )
                {
                  do
                  {
                    struct form *form = &form;
                    if ( form->next == document )
                      goto B34;
                    else
                  }
                  while ( form->form_num );
                }
                if ( form->items.next == form->items.next )
                {
                  done_form( &form[0] );
                }
              }
B34:              done_string( &head );
              if ( part )
              {
                mem_free( (void*)part );
                break;
              }
            }
            else
            {
              document->height = eax - 1;
            }
          }
          while ( *(int*)(document->data + ( ( document->height << 3 ) - 8 - 8 )) );
          mem_free( *(int*)(document->data + ( ( document->height << 3 ) - 8 )) );
        }
      }
      }
    }
    return;
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
#if 0
#endif
