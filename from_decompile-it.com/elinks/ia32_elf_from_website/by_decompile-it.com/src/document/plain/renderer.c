#include "renderer.c.h"
struct screen_char *realloc_line( struct document *document, int x, int y )
{
  struct line *line;
  if ( realloc_lines( &document[0], esi ) )
  {
    if ( x != *(int*)(realloc_lines( &document[0], esi ) + 4) )
    {
      if ( ( ( edi + 15 ) & -16 ) < ( ( x + 15 ) & -16 ) )
      {
        if ( mem_realloc( (void*)line->chars, ( ( x + 15 ) & -16 ) << 3 ) )
        {
          line = (struct line*)mem_realloc( (void*)line->chars, ( ( x + 15 ) & -16 ) << 3 );
          memset( line[0].chars + ( ( ( *(int*)(realloc_lines( &document[0], line[0].chars ) + 4) + 15 ) & -16 ) << 3 ), 0, ( ( ( x + 15 ) & -16 ) << 3 ) - ( ( ( *(int*)(realloc_lines( &document[0], line[0].chars ) + 4) + 15 ) & -16 ) << 3 ) );
        }
      }
      if ( line->chars )
        line->length = x;
    }
    return line->chars;
  }
  return line->chars;
}
void render_plain_document( struct cache_entry *cached, struct document *document, struct string *buffer )
{
  int eax;
  int ecx;
  int edx;
  int ebp_176;
  int ebp_172;
  int ebp_160;
  struct conv_table *convert_table;
  unsigned char *head;
  struct plain_renderer renderer;
  head[0] = cached->head == 0 ? cached->head : "";
  renderer.source = buffer->source;
  renderer.document = document;
  renderer.convert_table = get_convert_table( cached->head == 0 ? cached->head : "", document->options.cp, document->options.assume_cp, &document->cp, &document->cp_status, document->options.hard_assume );
  renderer.lineno = 0;
  renderer.length = buffer->length;
  renderer.bits_at_32/*.1_1of4*/ = ( (int)renderer.bits_at_32/*.1_1of4*/ & -2 ) | ( ( *(char*)(document + 81) >> 3 ) & 1 );
  renderer.max_width = renderer.plain_renderer < 0 ? 0x7fffffff : document->options.box.width;
  document->width = 0;
  document->bgcolor = document->options.default_style.bg;
  renderer.plain_renderer = ( (int)document->options.bits_at_92/*.1_1of4*/ & -17 ) | ( ( is_cp_utf8( document->options.cp ) & 1 ) << 4 );
  get_screen_char_template( &renderer.template, &renderer.convert_table[0].t, renderer.plain_renderer );
  if ( renderer.length >= 1 )
  {
    do
    {
      ebp_172 = 0;
      ebp_176 = 0;
      ebp_160 = 1;
      do
      {
        if ( 0 + 1 < renderer.max_width )
        {
          if ( *(char*)(renderer.source + 0 + 1 + ( *(char*)(renderer.source + 0 + 1) == 13 )) == 10 )
          {
          }
          else
          if ( *(char*)(renderer.source + 0 + 1) == 13 )
          {
          }
          else
          {
            if ( ebp_160 == 0 )
            {
              ebp_172++;
              if ( is_cp_utf8( renderer.document->cp ) )
              {
                if ( eax != -3 )
                {
                }
                else
                  break;
              }
            }
            else
            {
              ebp_176++;
              ebp_160 = 1;
              if ( is_cp_utf8( renderer.document->cp ) )
              {
              }
            }
            if ( 0 + 1 + 1 < renderer.length - ebp_176 - ( ebp_192 + 0 + 1 ) )
              continue;
          }
          if ( ebp_160 )
          {
            if ( 1 || ( 0 && ( ( renderer.bits_at_32/*.1_1of4*/ & 1 ) & 255 ) ) )
            {
              renderer.lineno--;
              if ( assert_failed == 0 )
              {
                assert_failed = ( renderer.lineno - 1 ) >> 31;
                if ( ( renderer.lineno - 1 ) >> 31 )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/plain/renderer.c";
                  errline = 567;
                  elinks_internal( "assertion renderer-&gt;lineno &gt;= 0 failed!" );
                  renderer.lineno = renderer.lineno;
                }
              }
              renderer.lineno++;
              if ( ebp_180 >= 1 )
                continue;
              else
            }
            else
            {
              if ( assert_failed == 0 )
              {
                assert_failed = ( ( 0 + 1 ) - ebp_176 ) >> 31;
                if ( ( ( 0 + 1 ) - ebp_176 ) >> 31 )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/plain/renderer.c";
                  errline = 593;
                  elinks_internal( "assertion width &gt;= 0 failed!" );
                }
              }
              if ( eax )
              {
                ebp_172 = ( renderer.plain_renderer >> 4 ) & 1;
                if ( eax )
                {
                  ebp_176 = 0;
                  while ( edi < esi )
                  {
                    do
                    {
                      ebp_160 = 1;
                      if ( ebp_172 )
                      {
                        if ( eax == -3 )
                        {
                          break;
                          while ( edi < esi )
                          {
                            do
                            {
                              ebp_160 = 1;
                            }
                            while ( esi <= edi );
                            break;
                          }
                          edx = edx;
                          if ( assert_failed == 0 )
                          {
                            assert_failed = ebp_176 >> 31;
                            if ( ebp_176 >> 31 )
                            {
                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/plain/renderer.c";
                              errline = 302;
                              elinks_internal( "assertion expanded &gt;= 0 failed!" );
                              *ebp_32 = ebp_32;
                            }
                          }
                          if ( eax )
                          {
                            ebp_160 = 0;
                            if ( ebp_32 > 0 )
                            {
                              do
                              {
                                if ( ebp_172 == 0 )
                                  ebp_176 = 1;
                                else
                                {
                                  *ebp_268 = ebp_268;
                                  if ( eax == -3 )
                                  {
                                  }
                                  else
                                  {
                                  }
                                }
                                if ( ( esi <= ebp_176 + edi || *(char*)(ebp_156 + edx) != 8 ) && ebx == 9 )
                                {
                                  *ebp_168 = ebp_168;
                                  renderer.template.data = 32;
                                  do
                                  {
                                    eax = &renderer.template.data;
                                    *(int*)(eax + 4) = &renderer.template.attr;
                                  }
                                  while ( ecx - 1 != -1 );
                                  renderer.template.color[1] = renderer.template.color[1];
                                  renderer.template.color[0] = renderer.template.color[0];
                                  renderer.template.attr = renderer.template.attr;
                                  renderer.template.data = renderer.template.data;
                                }
                                else
                                if ( ebx == 8 )
                                {
                                  if ( 0 + 0 + ebp_160 )
                                  {
                                    if ( ebp_188 == '_' && ebp_220 != '_' )
                                    {
                                      if ( edi - 1 >= 0 )
                                        *(char*)(( ebp_156 + edi ) - 1) = 95;
                                      if ( edx < esi )
                                      {
                                        if ( edi - 2 >= 0 )
                                          ebp_160--;
                                      }
                                      else
                                      if ( edi - 2 >= 0 )
                                        ebp_160--;
                                    }
                                    else
                                    {
                                      if ( ecx & 255 )
                                      {
                                        if ( eax & 255 )
                                        {
                                          if ( edi >= 0 && ebp_228 <= ebp_168 - 8 && *(char*)(eax + 4) )
                                            renderer.template.attr |= eax;
                                            if ( renderer.template.attr & 255 )
                                              renderer.template.attr = eax | *(char*)(ebp_168 + 4);
                                          else
                                            renderer.template.attr = renderer.template.attr | 8;
                                        }
                                      }
                                      else
                                      if ( eax & 255 )
                                        renderer.template.attr = renderer.template.attr | 32;
                                      if ( ebp_188 != ebx )
                                      {
                                      }
                                      else
                                        renderer.template.attr = renderer.template.attr | 8;
                                    }
                                  }
                                }
                                else
                                {
                                  if ( ( ( *(char*)(renderer.document + 81) & 4 ) & 255 ) && ( ( *(char*)(eax + ( ebx * 2 ) + 1) & 4 ) & 255 ) )
                                  {
                                    if ( ( *(char*)(ebp_220 + ( ebp_188 * 2 ) + 1) & 4 ) & 255 )
                                    {
                                      if ( esi - edi >= 1 && ecx != '<' && eax < ' ' && eax != '>' && eax != '(' && eax != ')' && eax != '"' && eax != '\'' )
                                      {
                                        do
                                        {
                                          if ( esi <= ebx + 1 )
                                          {
                                          }
                                          else
                                          if ( *(char*)(( ebp_288 + ecx ) - 1) == '.' || eax == ',' )
                                          {
                                            do
                                            {
                                              if ( ebx == 1 )
                                                goto B143;
                                              else
                                            }
                                            while ( *(char*)(eax - 2) != ',' && ecx != '.' );
                                          }
                                          if ( assert_failed == 0 )
                                          {
                                            assert_failed = renderer.document == 0;
                                            if ( !(_Bool)( renderer.document != 0 ) )
                                            {
                                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/plain/renderer.c";
                                              errline = 121;
                                              elinks_internal( "assertion document failed!" );
                                              if ( assert_failed )
                                                goto B187;
                                            }
                                            esi = 0;
                                            if ( ecx < ebx && ebx && ebx - ecx < ebp_288 - 1 )
                                            {
                                            }
                                            else
                                            {
                                              *ebp_272 = ebp_272;
                                              *ebp_268 = ebp_268;
                                              if ( !eax && ebp_136 != 18 && ( ( ebp_92 & 0xffff00 ) || ebp_94 ) )
                                              {
                                              }
                                              else
                                                esi = ebp_252;
                                            }
                                            esi = ebp_252;
                                            if ( ebp_248 )
                                            {
                                              normalize_uri( 0, ebp_248 );
                                              if ( ( ( renderer.plain_renderer + 127 ) & -128 ) < ( ( renderer.plain_renderer + 128 ) & -128 ) )
                                              {
                                                *ebp_272 = ebp_272;
                                                *ebp_268 = ebp_268;
                                                if ( mem_realloc( &renderer.plain_renderer, ( ( renderer.plain_renderer + 128 ) & -128 ) * 52 ) )
                                                {
                                                  renderer.plain_renderer = mem_realloc( &renderer.plain_renderer, ( ( renderer.plain_renderer + 128 ) & -128 ) * 52 );
                                                  memset( renderer.document + 212 + ( ( ( renderer.plain_renderer + 127 ) & -128 ) * 52 ), 0, ( ( ( renderer.plain_renderer + 128 ) & -128 ) * 52 ) - ( ( ( renderer.plain_renderer + 127 ) & -128 ) * 52 ) );
                                                }
                                                else
                                                {
                                                  mem_free( ebp_248 );
                                                }
                                              }
                                              if ( renderer.plain_renderer )
                                              {
                                                if ( *(int*)(esi + ( *(int*)(eax + 260) * 52 ) + 28) < ebp_288 )
                                                {
                                                  *ebp_272 = ebp_272;
                                                  *ebp_268 = ebp_268;
                                                  if ( eax )
                                                  {
                                                    *(int*)(ebp_220 + 24) = eax;
                                                    memset( ebp_256 + ebp_220 + 24, 0, esi - ebp_256 );
                                                  }
                                                }
                                                if ( renderer.plain_renderer )
                                                {
                                                  *(int*)(esi + 4) = 0;
                                                  *(int*)(esi + 28) = ebp_288;
                                                  *(int*)(esi + 8) = ebp_248;
                                                  *(int*)(esi + 36) = renderer.plain_renderer;
                                                  *(int*)(esi + 40) = renderer.plain_renderer;
                                                  *(int*)(esi + 32) = renderer.plain_renderer;
                                                  if ( ebp_288 >= 1 )
                                                  {
                                                    do
                                                    {
                                                      eax = &esi;
                                                      *(int*)(eax + 4) = &renderer.lineno;
                                                      eax += 8;
                                                      edx--;
                                                    }
                                                    while ( edx != 1 );
                                                  }
                                                  renderer.plain_renderer++;
                                                  renderer.plain_renderer &= 254;
                                                  if ( eax )
                                                    renderer.plain_renderer = renderer.plain_renderer;
                                                  else
                                                  {
                                                    if ( eax )
                                                      *(int*)(ebp_220 + 40) = renderer.plain_renderer;
                                                    else
                                                      *(int*)(ebp_220 + 40) = renderer.plain_renderer;
                                                  }
                                                  esi = ebx;
                                                  renderer.plain_renderer = renderer.plain_renderer;
                                                  set_term_color( ebp_44, renderer.plain_renderer + ( renderer.plain_renderer * 52 ) + 36, renderer.plain_renderer, renderer.convert_table->t );
                                                  *ebp_268 = ebp_268;
                                                  *ebp_168 = ebp_168;
                                                  do
                                                  {
                                                    ecx++;
                                                    *(int*)(eax + ( edx << 3 ) + 4) = &renderer.template.attr;
                                                  }
                                                  while ( edx != ebx );
                                                  ebp_160 += ( 0 + 1 ) - 1;
                                                  renderer.template.color[1] = renderer.template.color[1];
                                                  renderer.template.color[0] = renderer.template.color[0];
                                                  renderer.template.attr = renderer.template.attr;
                                                  renderer.template.data = renderer.template.data;
                                                }
                                              }
                                            }
                                          }
B187:                                          assert_failed = 0;
                                        }
                                        while ( *(char*)(ecx + ebx) != '<' && eax < ' ' && eax != '>' && eax != '(' && eax != ')' && eax != '\'' && eax != '"' );
                                        if ( 0 + 1 < 1 )
                                        {
                                          if ( !1 )
                                          {
                                          }
                                        }
                                      }
B143:                                    }
                                    else
                                    {
                                    }
                                  }
                                  if ( ebp_172 )
                                  {
                                    if ( -3 == -3 )
                                    {
                                    }
                                    else
                                    {
                                      renderer.template.data = ebp_204;
                                      *(int*)(ebp_168 + 4) = renderer.template.attr;
                                      *ebp_168 = renderer.template.data;
                                      if ( ebp_200 == 2 )
                                      {
                                        *(int*)(ebp_168 + 8) = renderer.template.data = -3;
                                        *(int*)(ebp_168 + 12) = renderer.template.attr;
                                      }
                                    }
                                  }
                                  else
                                  {
                                    *ebp_168 = renderer.template.data = eax;
                                    *(int*)(ebp_168 + 4) = renderer.template.attr;
                                    if ( assert_failed == 0 )
                                    {
                                      assert_failed = ebp_28 == 0;
                                      if ( !(_Bool)( ebp_28 != 0 ) )
                                      {
                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/plain/renderer.c";
                                        errline = 462;
                                        elinks_internal( "assertion line_char failed!" );
                                      }
                                    }
                                  }
                                }
                                ebp_160 += ebp_200;
                              }
                              while ( esi <= edi );
                            }
                            mem_free( ebp_156 );
                            realloc_line( ebp_208, ( ebp_168 - ebp_228 ) >> 3, ebp_236 );
                            mem_free( ebp_224 );
                            if ( esi && mem_alloc( 24 ) )
                            {
                              *(int*)(mem_alloc( 24 ) + 8) = 0;
                              *(int*)(mem_alloc( 24 ) + 20) = 1;
                              *(int*)(mem_alloc( 24 ) + 12) = renderer.lineno < 0 ? renderer.lineno : 0;
                              *(int*)(mem_alloc( 24 ) + 16) = (unsigned char)( ( ( esi >> 31 ) & 1 ) ^ 1 ) ? 0 : esi;
                              if ( esi <= renderer.document->width )
                              {
                                if ( renderer.plain_renderer >= 1 )
                                {
                                  *(int*)(mem_alloc( 24 ) + 4) = renderer.plain_renderer;
                                  *(int*)(mem_alloc( 24 )) = renderer.plain_renderer;
                                  renderer.plain_renderer = mem_alloc( 24 );
                                  *(int*)(*(int*)(mem_alloc( 24 )) + 4) = mem_alloc( 24 );
                                }
                              }
                              else
                              {
                                renderer.plain_renderer = esi;
                                if ( renderer.plain_renderer >= 1 )
                                  continue;
                              }
                              renderer.plain_renderer = 1;
                            }
                          }
                          else
                            mem_free( ebp_156 );
                        }
                        else
                        {
                          unicode_to_cell( eax );
                          *(int*)(ebp_28) = ebp_28;
                        }
                      }
                      if ( edx != 9 )
                      {
                      }
                      else
                      if ( ebp_160 == esi || *(char*)(ebp_156 + edi) != 8 )
                        ebp_176 += ~( ebp_176 + ebp_168 ) & 7;
                    }
                    while ( esi <= edi );
                    break;
                  }
                  edx = edx;
                }
                mem_free( ebp_224 );
              }
              renderer.lineno++;
              if ( renderer.length - ebp_176 >= 1 )
                continue;
            }
          }
          else
          {
            if ( ebp_172 == 0 )
            {
            }
            else
            {
              if ( 0 + 1 < renderer.length && ( ( ebp_192 + ebp_172 == 0 ) & 255 ) )
              {
              }
              else
              {
              }
            }
          }
        }
      }
      while ( ebp_180 <= ebx + eax );
    }
    while ( ebp_180 < 1 );
  }
  if ( assert_failed == 0 )
  {
    assert_failed = ebp_180 != 0;
    if ( ebp_180 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/plain/renderer.c";
      errline = 613;
      elinks_internal( "assertion !length failed!" );
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
#if 0
#endif
