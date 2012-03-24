#include "tables.c.h"
void get_table_frames( struct table_elinks *table_elinks, struct table_frames *result )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( result[0].bits_at_0 == 0 ) | ( table_elinks[0].part == 0 ) ) & 1;
    if ( ( ( result[0].bits_at_0 == 0 ) | ( table_elinks[0].part == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
      errline = 39;
      elinks_internal( "assertion table && result failed!" );
      *ebp_12 = table_elinks[0].part;
    }
  }
  if ( table_elinks->border )
  {
    result = ( (int)result->bits_at_0/*.1_1of4*/ & -2 ) | ( table_elinks->frame & 1 );
    result = ( ( ( (int)result->bits_at_0/*.1_1of4*/ & -2 ) | ( table_elinks->frame & 1 ) ) & -3 ) | ( ( ( table_elinks->frame >> 1 ) & 1 ) * 2 );
    result = ( ( ( ( ( (int)result->bits_at_0/*.1_1of4*/ & -2 ) | ( table_elinks->frame & 1 ) ) & -3 ) | ( ( ( table_elinks->frame >> 1 ) & 1 ) * 2 ) ) & -5 ) | ( ( ( table_elinks->frame >> 2 ) & 1 ) << 2 );
    result = ( ( ( ( ( ( ( (int)result->bits_at_0/*.1_1of4*/ & -2 ) | ( *(int*)(&table_elinks->frame) & 1 ) ) & -3 ) | ( ( ( *(int*)(&table_elinks->frame) >> 1 ) & 1 ) * 2 ) ) & -5 ) | ( ( ( *(int*)(&table_elinks->frame) >> 2 ) & 1 ) << 2 ) ) & -9 ) | ( ( ( *(int*)(&table_elinks->frame) >> 3 ) & 1 ) << 3 );
    return;
  }
  result = 0;
  return;
}
int get_hline_width( struct table_elinks *table_elinks, int row )
{
  int ecx;
  if ( row )
  {
    if ( table_elinks->rules != 3 && table_elinks->rules != 1 )
    {
      if ( table_elinks->rules == 4 && table_elinks->cols >= 1 )
      {
        if ( ( ( table_elinks->cells[ table_elinks->real_cols * table_elinks->real_cols * row ].bits_at_60/*.1_1of4*/ & 8 ) & 255 ) == 0 )
        {
          do
          {
            if ( table_elinks->cols <= 0 + 1 + 1 )
              goto B10;
            else
          }
          while ( table_elinks->cells[ table_elinks->real_cols * row ].table_cell & 8 );
        }
      }
B10:      if ( table_elinks->vcellpadding == 0 )
        goto B1;
      return 0;
    }
  {
    int col;
    table_elinks->cellspacing = table_elinks->cellspacing;
    if ( table_elinks->cellspacing == 0 )
    {
    }
    else
    {
      return 0;
    }
B10:  }
  }
B1:  return 0;
}
void draw_table_frames( struct table_elinks *table_elinks, int indent, int y, struct html_context *html_context )
{
  int ecx;
  int ebp_156;
  int ebp_88;
  int ebp_84;
  int ebp_68;
  int ebp_60;
  int ebp_56;
  int ebp_52;
  struct table_frames table_frames;
  int col, row;
  int cx, cy = y;
  int fh_size = ( table_elinks->cols + 2 ) * ( table_elinks->rows + 1 );
  if ( mem_alloc( ( ( table_elinks->cols + 1 ) * ( table_elinks->rows + 2 ) ) + ( ( table_elinks->cols + 2 ) * ( table_elinks->rows + 1 ) ) ) )
  {
    memset( mem_alloc( ( ( table_elinks->cols + 1 ) * ( table_elinks->rows + 2 ) ) + ( ( table_elinks->cols + 2 ) * ( table_elinks->rows + 1 ) ) ), -1, ( ( table_elinks->cols + 1 ) * ( table_elinks->rows + 2 ) ) + ( ( table_elinks->cols + 2 ) * ( table_elinks->rows + 1 ) ) );
    fh_size += mem_alloc( ( ( table_elinks->cols + 1 ) * ( table_elinks->rows + 2 ) ) + ( ( table_elinks->cols + 2 ) * ( table_elinks->rows + 1 ) ) );
    ebp_56 = table_elinks->rules;
    if ( table_elinks->rules )
    {
      ebp_68 = table_elinks->rows;
      if ( table_elinks->rows >= 1 )
      {
        ebp_60 = 1;
        ebp_52 = 0;
        esi = fh_size;
        do
        {
          ebp_84 = ebp_60;
          if ( table_elinks->cols >= 1 )
          {
            for ( ; (unsigned char)( __MOD((int)table_elinks->cells[ 0 + 1 + ( ebp_52 * table_elinks->real_cols ) ].bits_at_60/*.1_1of4*/,4) ) == 1; ebp_68 = table_elinks->rows )
            {
              if ( table_elinks->cols <= 1 + 1 )
                ebp_68 = table_elinks->rows;
              else
              {
                //ebp_68 = table_elinks->rows;
              }
            }
          }
          ebp_52++;
          ebp_60++;
        }
        while ( ebp_84 < table_elinks->rows );
      }
      if ( ebp_56 == 4 )
      {
        if ( table_elinks->cols > 1 )
        {
          do
          {
            if ( table_elinks->cols_x[ 1 + 1 ] == 0 )
            {
              if ( assert_failed == 0 )
                assert_failed = 0;
              else
                assert_failed = 0;
              memset( edx + edi, 0, eax );
            }
          }
          while ( table_elinks->cols <= 1 + 1 + 1 );
        }
        if ( table_elinks->rows > 1 )
        {
          esi = fh_size;
          do
          {
            if ( table_elinks->cols >= 1 )
            {
              if ( ( ( table_elinks->cells[ table_elinks->real_cols * 1 ].bits_at_60/*.1_1of4*/ & 8 ) & 255 ) == 0 )
              {
                do
                {
                  if ( 0 + 1 + 1 < table_elinks->cols )
                    continue;
                }
                while ( *(char*)(edx + 60) & 8 );
              }
            }
            if ( assert_failed == 0 )
              assert_failed = 0;
            else
              assert_failed = 0;
            memset( ebp_72 + eax, 0, esi );
          }
          while ( table_elinks->rows <= 1 + 1 + 1 );
        }
      }
    }
    get_table_frames( &table_elinks[0], &table_frames );
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    memset( mem_alloc( ( ( table_elinks->cols + 1 ) * ( table_elinks->rows + 2 ) ) + ( ( table_elinks->cols + 2 ) * ( table_elinks->rows + 1 ) ) ) + 0, ( table_frames.bits_at_0 & 1 ), table_elinks->cols );
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    memset( ebp_72 + ecx, eax, edx );
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    memset( ebp_80 + ecx, eax, edx );
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    memset( ebp_80 + ecx, eax, edx );
    if ( table_elinks->rows >= 0 )
    {
      ebp_88 = -1;
      ebp_84 = 0;
      ebp_68 = 1;
      ebp_52 = 0;
      col = col;
      do
      {
        if ( ebp_52 >= 1 )
        {
          if ( ebp_52 < ebp_60 )
          {
            if ( get_hline_width( &table_elinks[0] ) < 0 )
            {
            }
            else
              row = table_elinks->rows;
              if ( table_elinks->cols >= 1 )
              {
                col = 0;
                cx = ebp_56 = indent;
                ebp_156 = 0;
                while ( 1 )
                {
                  if ( ~( 0 - ( ( table_elinks->cellpadding < 1 ) & 1 ) ) >= 0 )
                  {
                    if ( assert_failed == 0 )
                    {
                      if ( col - 1 >= -1 )
                      {
                      }
                      else
                      if ( table_elinks->cols + 2 <= col - 1 && ebp_52 < 0 && ebp_60 < ebp_52 )
                      {
                        assert_failed = 1;
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                        errline = 971;
                        elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                        if ( assert_failed == 0 )
                        {
                          if ( col >= -1 )
                          {
                          }
                          else
                          if ( table_elinks->cols + 2 <= col && ebp_52 < 0 && table_elinks->rows < ebp_52 )
                          {
                            assert_failed = 1;
                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                            errline = 971;
                            elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                            if ( assert_failed )
                            {
                              assert_failed = 0;
                              ebp_56 = 0;
                              if ( ebp_88 >= -1 )
                              {
                              }
                              else
                              if ( col < 0 && table_elinks->rows + 2 <= ebp_88 && table_elinks->cols < col )
                              {
                                assert_failed = 1;
                                errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                errline = 971;
                                elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                                if ( assert_failed )
                                  assert_failed = 0;
                                  ebp_56 = *(char*)(ebp_80 + ecx);
                                  if ( ebp_52 >= -1 )
                                  {
                                  }
                                  else
                                  if ( col < 0 && table_elinks->rows + 2 <= ebp_52 && table_elinks->cols < col )
                                  {
                                    assert_failed = 1;
                                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                    errline = 971;
                                    elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                                    if ( assert_failed )
                                      assert_failed = 0;
                                      if ( ebp_121 < 0 && ebp_48 < 0 && (_Bool)( ( eax >> 7 ) & 1 ) && ebp_56 < 0 )
                                        col = col;
                                      else
                                      {
                                        ebp_60 = ebp_48;
                                        ebp_56 = ebp_56;
                                        ebp_60 = ebp_60 < 0 ? ebp_60 : 0;
                                        ebp_56 = ebp_56 < 0 ? ebp_56 : 0;
                                        draw_frame_hchars( table_elinks->part, cx, cy, border_chars[ ( ( ebp_48 < 0 ? ebp_48 : 0 ) << 3 ) + ebp_56 + ( ( ebp_121 < 0 ? ebp_121 : 0 ) * 3 ) + ( ( (unsigned char)( ( ( eax >> 31 ) & 1 ) ^ 1 ) ? 0 : eax ) * 27 ) ], html_context->stack.list_head_elinks, ebp_121 < 0 ? ebp_121 : 0, ebp_48 < 0 ? ebp_48 : 0, ebp_56 );
                                      }
                                      ebp_60 = table_elinks->rows;
                                      if ( ebp_52 < table_elinks->rows )
                                      {
                                        if ( assert_failed == 0 )
                                        {
                                          if ( ebp_52 >= -1 )
                                          {
                                          }
                                          else
                                          {
                                            *(int*)(ebp_60 + 2) = ebp_60 + 2;
                                            if ( col < 0 && ebp_60 + 2 <= ebp_52 && table_elinks->cols < col )
                                            {
                                              assert_failed = 1;
                                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                              errline = 971;
                                              elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                                              if ( assert_failed )
                                                col = col;
                                              else
                                                *ebp_100 = ebp_68 + ( ebp_100 * col );
                                                assert_failed = *(char*)(ebp_80 + ecx) > 2;
                                                if ( *(char*)(ebp_80 + ecx) > 2 )
                                                {
                                                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                                  errline = 1062;
                                                  elinks_internal( "assertion pos &lt; 3 failed: Vertical table position out of bound [%d]" );
                                                  if ( assert_failed )
                                                  {
                                                    assert_failed = 0;
                                                    ebp_60 = table_elinks->rows;
                                                  }
                                                }
                                                if ( ecx >= 0 )
                                                {
                                                  if ( table_elinks->rows_heights[ ebp_84 >> 2 ] >= 1 )
                                                    draw_frame_vchars( table_elinks->part, cx, cy + 1, table_elinks->rows_heights[ ebp_84 >> 2 ], vltable[ ebp_100 ], html_context->stack.list_head_elinks, table_elinks->bordercolor, html_context );
                                                  ebp_60 = table_elinks->rows;
                                                }
                                                else
                                                  ebp_60 = table_elinks->rows;
                                            }
                                          }
                                          assert_failed = 0;
                                          *ebp_100 = ebp_68 + ( ebp_100 * col );
                                          assert_failed = *(char*)(ebp_80 + ecx) > 2;
                                        }
                                        assert_failed = 0;
                                        assert_failed = *(char*)(ebp_80 + ecx) > 2;
                                      }
                                      else
                                      {
                                      }
                                      cx++;
                                      if ( 0 )
                                        assert_failed = 0;
                                        assert_failed = *(char*)(ebp_72 + eax) > 2;
                                        if ( *(char*)(ebp_72 + eax) > 2 )
                                        {
                                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                          errline = 1046;
                                          elinks_internal( "assertion pos &lt; 3 failed: Horizontal table position out of bound [%d]" );
                                          if ( assert_failed )
                                            assert_failed = 0;
                                            cx += table_elinks->cols_widths[ ebp_156 >> 2 ];
                                            col++;
                                            if ( table_elinks->cols <= col + 1 )
                                            {
                                              int w;
                                              row = table_elinks->rows;
                                            }
                                            else
                                            {
                                            }
                                        }
                                        if ( esi >= 0 )
                                        {
                                          if ( table_elinks->cols_widths[ ebp_156 >> 2 ] >= 1 )
                                            draw_frame_hchars( table_elinks->part, cx, cy, eax, hltable[ esi ], html_context->stack.list_head_elinks, table_elinks->bordercolor, html_context );
                                        }
                                    else
                                    {
                                    }
                                  }
                                  assert_failed = 0;
                                else
                                {
                                  ebp_56 = *(char*)(ebp_80 + ecx);
                                }
                              }
                              assert_failed = 0;
                              ebp_56 = *(char*)(ebp_80 + ecx);
                            }
                            else
                              ebp_56 = col + 1 + ( ebp_52 * ebp_108 );
                          }
                          assert_failed = 0;
                          ebp_56 = col + 1 + ( ebp_52 * ebp_108 );
                        }
                      }
                      assert_failed = 0;
                    }
                    assert_failed = 0;
                  }
                  else
                  if ( assert_failed )
                    continue;
                  if ( col >= -1 )
                  {
                  }
                  else
                  if ( table_elinks->cols + 2 <= col && ebp_52 < 0 && ebp_60 < ebp_52 )
                  {
                    assert_failed = 1;
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                    errline = 971;
                    elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                    if ( assert_failed )
                      continue;
                    else
                    {
                      assert_failed = *(char*)(ebp_72 + eax) > 2;
                    }
                  }
                  assert_failed = 0;
                  assert_failed = *(char*)(ebp_72 + eax) > 2;
                }
              }
              else
              {
                ebp_56 = indent;
                col = 0;
              }
              if ( ( table_frames.bits_at_0 & 8 ) & 255 )
              {
                if ( assert_failed == 0 )
                {
                  if ( col - 1 >= -1 )
                  {
                  }
                  else
                  if ( table_elinks->cols + 2 <= col - 1 && ebp_52 < 0 && row < ebp_52 )
                  {
                    assert_failed = 1;
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                    errline = 971;
                    elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                    if ( assert_failed )
                      col = col;
                    else
                    {
                      if ( col >= -1 )
                      {
                      }
                      else
                      if ( table_elinks->cols + 2 <= col && ebp_52 < 0 && table_elinks->rows < ebp_52 )
                      {
                        assert_failed = 1;
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                        errline = 971;
                        elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                        if ( assert_failed )
                          assert_failed = 0;
                          if ( ebp_88 >= -1 )
                          {
                          }
                          else
                          if ( col < 0 && table_elinks->rows + 2 <= ebp_88 && table_elinks->cols < col )
                          {
                            assert_failed = 1;
                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                            errline = 971;
                            elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                            if ( assert_failed )
                              assert_failed = 0;
                              if ( ebp_52 >= -1 )
                              {
                              }
                              else
                              if ( col < 0 && table_elinks->rows + 2 <= ebp_52 && table_elinks->cols < col )
                              {
                                assert_failed = 1;
                                errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                errline = 971;
                                elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                                if ( assert_failed )
                                  assert_failed = 0;
                                  if ( !(_Bool)( ( edx >> 7 ) & 1 ) || ebp_64 >= 0 || !(_Bool)( ( eax >> 7 ) & 1 ) || !(_Bool)( ( ecx >> 7 ) & 1 ) )
                                    draw_frame_hchars( table_elinks->part, ebp_56, cy, 1, *(char*)(border_chars[0] + ( ( edx < 0 ? edx : 0 ) * 12 ) + ( ( (unsigned char)( ( eax < 0 ) ^ 1 ) ? 0 : eax ) * 108 ) + ( ( ebp_64 < 0 ? ebp_64 : 0 ) * 36 ) + ( ( ecx < 0 ? ecx : 0 ) * 4 )), html_context->stack.list_head_elinks, table_elinks->bordercolor, html_context );
                                  if ( ebp_52 < table_elinks->rows )
                                  {
                                    if ( assert_failed == 0 )
                                    {
                                      col = col;
                                      if ( ebp_52 >= -1 )
                                      {
                                      }
                                      else
                                      if ( col < 0 && table_elinks->rows + 2 <= ebp_52 && table_elinks->cols < col )
                                      {
                                        assert_failed = 1;
                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                        errline = 971;
                                        elinks_internal( "assertion a &gt;= -1 || a &lt; a_size + 2 || b &gt;= 0 || b &lt;= b_size failed!" );
                                        if ( assert_failed == 0 )
                                        {
                                          assert_failed = *(char*)(ebp_80 + eax) > 2;
                                          if ( *(char*)(ebp_80 + eax) > 2 )
                                          {
                                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                            errline = 1062;
                                            elinks_internal( "assertion pos &lt; 3 failed: Vertical table position out of bound [%d]" );
                                            if ( assert_failed )
                                              assert_failed = 0;
                                          }
                                          if ( esi >= 0 && table_elinks->rows_heights[ ebp_84 >> 2 ] >= 1 )
                                            draw_frame_vchars( table_elinks->part, ebp_56, ebp_92, edx, vltable[ esi ], html_context->stack.list_head_elinks, table_elinks->bordercolor, html_context );
                                        }
                                      }
                                      assert_failed = 0;
                                      assert_failed = *(char*)(ebp_80 + eax) > 2;
                                    }
                                    assert_failed = 0;
                                    assert_failed = *(char*)(ebp_80 + eax) > 2;
                                  }
                                else
                                {
                                }
                              }
                              assert_failed = 0;
                            else
                            {
                            }
                          }
                          assert_failed = 0;
                        else
                        {
                        }
                      }
                      assert_failed = 0;
                    }
                  }
                  assert_failed = 0;
                }
                assert_failed = 0;
              }
              cy++;
              if ( ebp_52 < table_elinks->rows )
                cy += table_elinks->rows_heights[ ebp_84 >> 2 ];
              ebp_52++;
              ebp_68++;
              ebp_84 += 4;
              ebp_88++;
          }
        }
        else
        if ( ( table_frames.bits_at_0 & 1 ) & 255 )
          continue;
        if ( ebp_52 != table_elinks->rows )
        {
          col = col;
          if ( ccdep2 < ccdep1 )
          {
            if ( table_elinks->cols >= 0 )
            {
              col = 0;
              cx = indent;
              do
              {
                if ( col )
                {
                  if ( col < table_elinks->cols )
                  {
                    if ( table_elinks->rules - 2 > 1 )
                    {
                      if ( table_elinks->rules == 4 && col < table_elinks->columns_count && table_elinks->columns[ col ] )
                      {
                        if ( assert_failed == 0 )
                          assert_failed = 0;
                        else
                          assert_failed = 0;
                        assert_failed = *(char*)(fh_size + mem_alloc( ( ( table_elinks->cols + 1 ) * ( table_elinks->rows + 2 ) ) + ( ( table_elinks->cols + 2 ) * ( table_elinks->rows + 1 ) ) ) + 0) > 2;
                        if ( *(char*)(fh_size + mem_alloc( ( ( table_elinks->cols + 1 ) * ( table_elinks->rows + 2 ) ) + ( ( table_elinks->cols + 2 ) * ( table_elinks->rows + 1 ) ) ) + 0) > 2 )
                        {
                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                          errline = 1062;
                          elinks_internal( "assertion pos &lt; 3 failed: Vertical table position out of bound [%d]" );
                          if ( assert_failed )
                            assert_failed = 0;
                            cx++;
                            ebp_60 = table_elinks->rows;
                            col++;
                        }
                        if ( eax >= 0 && table_elinks->rows_heights[ ebp_84 >> 2 ] >= 1 )
                          draw_frame_vchars( table_elinks->part, cx, cy, table_elinks->rows_heights[ ebp_84 >> 2 ], vltable[ ebp_108 ], html_context->stack.list_head_elinks, table_elinks->bordercolor, html_context );
                      }
                    }
                    else
                    if ( table_elinks->cellspacing )
                    {
                      if ( ccdep2 <= ccdep1 )
                        continue;
                      else
                        col = col;
                    }
                    if ( table_elinks->cellpadding == 0 )
                      col = col;
                  }
                }
                else
                if ( ( table_frames.bits_at_0 & 4 ) & 255 )
                  continue;
                if ( table_elinks->cols == col && ( ( table_frames.bits_at_0 & 8 ) & 255 ) )
                  continue;
                else
                {
                  col++;
                }
              }
              while ( col + 1 <= table_elinks->cols );
            }
            else
              cy += table_elinks->rows_heights[ ebp_84 >> 2 ];
          }
        }
        else
        if ( table_frames.bits_at_0 & 2 )
          row = ebp_60;
      }
      while ( ebp_68 <= ebp_60 );
    }
    mem_free( mem_alloc( ( ( table_elinks->cols + 1 ) * ( table_elinks->rows + 2 ) ) + ( ( table_elinks->cols + 2 ) * ( table_elinks->rows + 1 ) ) ) );
  }
  return;
}
void format_table( unsigned char *attr, unsigned char *html, unsigned char *eof, unsigned char **end, struct html_context *html_context )
{
  int eax;
  int ecx;
  int edx;
  int ebp_92;
  int ebp_84;
  int ebp_76;
  int ebp_72;
  int ebp_68;
  int ebp_64;
  int ebp_56;
  int ebp_52;
  int ebp_48;
  int ebp_44;
  struct part *part = html_context->part;
  struct table_elinks *table_elinks;
  struct node *node;
  int indent, margins;
  html_context->table_level++;
  if ( parse_table( html, eof, end, attr, part[0].document ? *(int*)(part + 16) != 0 : 1, html_context ) )
  {
    *(int*)(parse_table( html, eof, end, attr, part[0].document ? *(int*)(part + 16) != 0 : 1, html_context )) = part->document->next;
    ebp_48 = *(int*)(parse_table( html, eof, end, attr, part->document ? *(int*)(part + 16) != 0 : 1, html_context ) + 144);
    table_elinks = &table_elinks[0];
    while ( ebp_48 > 0 )
    {
      if ( table_elinks->bad_html[ 0 ].start < table_elinks->bad_html[ 0 ].end && table_elinks->bad_html[ 0 ].start < table_elinks->bad_html[ 0 ].end && table_elinks->bad_html[ 0 ].start < table_elinks->bad_html[ 0 ].end )
      {
        parse_html( table_elinks->bad_html[ 0 ].start, table_elinks->bad_html[ 0 ].end, table_elinks->part, 0, html_context );
        ebp_48 = table_elinks->bad_html_size;
      }
    }
    margins = *(int*)(*(int*)(html_context + 36) + 124) + html_context->stack.next[30];
    table_elinks->part = table_elinks->part;
    while ( 1 )
    {
      if ( ( ( html_context->options->bits_at_68/*.1_1of4*/ & 8 ) & 255 ) == 0 )
      {
        ebp_48 = 0;
        if ( table_elinks->rows >= 1 )
        {
          table_elinks = &table_elinks[0];
          do
          {
            if ( table_elinks->cols >= 1 )
            {
              do
              {
                if ( table_elinks->cells[ 0 + ( ebp_48 * table_elinks->real_cols ) ].start )
                {
                  table_elinks->cells[ 0 + 1 + ( ebp_48 * table_elinks->real_cols ) ].link_num = ebp_44;
                  ebp_52 = table_elinks->cells[ 0 + 1 + ( ebp_48 * table_elinks->real_cols ) ].start;
                  table_elinks->cells[ 0 + 1 + ( ebp_48 * table_elinks->real_cols ) ].min_width = -1;
                  table_elinks->cells[ 0 + 1 + ( ebp_48 * table_elinks->real_cols ) ].max_width = -1;
                  if ( eax )
                  {
                    ebp_52 = *(int*)(eax + 24);
                    table_elinks->cells[ 0 + 1 + ( ebp_48 * table_elinks->real_cols ) ].min_width = *(int*)(eax + 24);
                    table_elinks->cells[ 0 + 1 + ( ebp_48 * table_elinks->real_cols ) ].max_width = *(int*)(eax + 32);
                    ebp_44 = *(int*)(eax + 48);
                    if ( assert_failed == 0 )
                    {
                      assert_failed = edx < ebp_52;
                      if ( edx < ebp_52 )
                      {
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                        errline = 119;
                        elinks_internal( "assertion *min &lt;= *max failed: get_cell_width: %d &gt; %d" );
                        *ebp_136 = ebp_136;
                      }
                    }
                    mem_free( eax );
                  }
                }
              }
              while ( table_elinks->cols <= 0 + 1 + 1 );
            }
            ebp_48++;
          }
          while ( table_elinks->rows <= ebp_48 );
        }
        else
        {
          table_elinks->link_num = ebp_44;
          if ( table_elinks->cols )
          {
            if ( table_elinks->min_cols_widths == 0 )
            {
              table_elinks->min_cols_widths = (int*)mem_calloc( table_elinks->cols, 4 );
              if ( table_elinks->min_cols_widths )
              {
              }
              else
              {
              }
            }
            if ( table_elinks->max_cols_widths == 0 )
            {
              table_elinks->max_cols_widths = (int*)mem_calloc( table_elinks->cols, 4 );
              if ( table_elinks->max_cols_widths )
              {
              }
              else
              {
                if ( table_elinks->min_cols_widths )
                  mem_free( (void*)table_elinks->min_cols_widths );
                table_elinks->min_cols_widths = 0;
              }
            }
            if ( table_elinks->cols_widths == 0 )
            {
              table_elinks->cols_widths = (int*)mem_calloc( table_elinks->cols, 4 );
              if ( table_elinks->cols_widths )
              {
              }
              else
              {
                if ( table_elinks->min_cols_widths )
                  mem_free( (void*)table_elinks->min_cols_widths );
                table_elinks->min_cols_widths = 0;
                if ( table_elinks->max_cols_widths )
                  mem_free( (void*)table_elinks->max_cols_widths );
                table_elinks->max_cols_widths = 0;
              }
            }
            ebp_44 = 1;
            while ( table_elinks->cols < 1 )
            {
              ebp_84 = 0;
              ebp_92 = 1;
              ebp_72 = 2147483647;
              while ( ebp_76 = ebp_92 - 1, ebp_68 = ebp_72, table_elinks->rows < 1 )
              {
                *(int*)(*(int*)(esi + 68)) = table_elinks->real_cols;
                ebp_64 = 0;
                while ( 1 )
                {
                  ebp_48 = *(int*)(table_elinks[0].part + 4) + ( ( ebp_76 + ( ebp_64 * table_elinks->real_cols ) ) << 6 );
                  if ( (unsigned char)( __MOD(*(char*)(*(int*)(table_elinks[0].part + 4) + ( ( ebp_76 + ( ebp_64 * table_elinks->real_cols ) ) << 6 )),4) ) == 1 )
                  {
                    if ( assert_failed == 0 )
                    {
                      assert_failed = *(int*)(table_elinks[0].part + 60) < ebp_76 + *(int*)(*(int*)(table_elinks[0].part + 4) + ( ( ebp_76 + ( ebp_64 * part->cy ) ) << 6 ) + 32);
                      if ( *(int*)(table_elinks[0].part + 60) < ebp_76 + *(int*)(*(int*)(table_elinks[0].part + 4) + ( ( ebp_76 + ( ebp_64 * part->cy ) ) << 6 ) + 32) )
                      {
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                        errline = 292;
                        elinks_internal( "assertion cell-&gt;colspan + col &lt;= table-&gt;cols failed: colspan out of table" );
                        if ( assert_failed )
                          goto B57;
                      }
                      ebp_68 = *(int*)(ebp_48 + 32);
                      if ( ebp_44 == *(int*)(ebp_48 + 32) )
                      {
                        if ( ebp_44 > 1 )
                        {
                          *ebp_92 = ebp_92;
                          ebp_52 = ebp_92 << 4;
                          do
                          {
                            if ( ebp_92 + 1 )
                            {
                              if ( table_elinks->rules - 2 <= 1 )
                              {
                                if ( table_elinks->cellspacing )
                                {
                                }
                              }
                              else
                              if ( table_elinks->rules != 4 || *(int*)(table_elinks[0].part + 28) <= ebp_92 + 1 || *(int*)(ebp_52 + *(int*)(table_elinks[0].part + 24)) == 0 )
                                goto B79;
B79:                            }
                            *ebp_92++;
                            ebp_52 += 16;
                          }
                          while ( 1 + 1 + 1 < ebp_44 );
                        }
                        node = &table_elinks->max_cols_widths[0];
                        if ( ebp_68 >= 1 )
                        {
                          do
                          {
                          }
                          while ( ebp_44 != 0 + 1 + 1 );
                        }
                        if ( *(int*)(ebp_48 + 40) - 0 > 0 )
                        {
                          ebp_56 = __MOD(( *(int*)(ebp_48 + 40) - 0 - 0 ),ebp_68);
                          ebp_52 = ( *(int*)(ebp_48 + 40) - 0 - 0 ) / ebp_68;
                          if ( ebp_84 + table_elinks->max_cols_widths )
                          {
                            if ( ebp_68 >= 1 )
                            {
                              do
                              {
                                *(int*)(ebp_84 + table_elinks->min_cols_widths + ( ( 0 + 1 ) << 2 )) = ebp_52 + *(int*)(ebp_84 + table_elinks->min_cols_widths + ( ( 0 + 1 ) << 2 )) + ( 0 + 1 < ebp_56 );
                                if ( ( ebp_52 + *(int*)(ebp_84 + table_elinks->min_cols_widths + ( 0 << 2 )) + ( ebp_56 > 0 ) ) - *(int*)(ebp_84 + table_elinks->max_cols_widths + ( 0 << 2 )) >= 1 )
                                  *(int*)(ebp_84 + table_elinks->min_cols_widths + ( 0 << 2 )) = *(int*)(ebp_84 + table_elinks->max_cols_widths + ( ( 0 + 1 ) << 2 ));
                              }
                              while ( ebp_44 != 0 + 1 + 1 );
                              if ( 0 )
                              {
                              }
                              else
                              {
                                *ebp_44 = ebp_44;
                                do
                                {
                                }
                                while ( ebp_44 != 0 + 1 + 1 );
                                if ( *(int*)(ebp_48 + 44) - 0 > 0 )
                                {
                                  if ( ebp_68 >= 1 )
                                  {
                                    do
                                    {
                                      *(int*)(ebp_84 + node + ( 0 << 2 )) = esi + *(int*)(ebx + ( eax << 2 )) + ( eax < edi );
                                    }
                                    while ( ebp_44 != 0 + 1 + 1 );
                                    edi = table_elinks->max_cols_widths;
                                    *ebp_84 = ebp_84;
                                    table_elinks = &table_elinks[0];
                                    for ( ; *(int*)(table_elinks->min_cols_widths + ebp_84) <= *(int*)(table_elinks->max_cols_widths + ebp_84); table_elinks->max_cols_widths[0] = table_elinks->max_cols_widths )
                                    {
                                      if ( ebp_68 <= 0 + 1 + 1 )
                                        goto B53;
                                      else
                                      {
                                        //table_elinks->max_cols_widths[0] = table_elinks->max_cols_widths;
                                      }
                                    }
                                    table_elinks->max_cols_widths[0] = *(int*)(ebp_84 + table_elinks->min_cols_widths + 4);
                                  }
                                }
                                else
                                {
                                  if ( ebp_68 >= 1 )
                                  {
                                    edi = table_elinks->max_cols_widths;
                                    *ebp_84 = ebp_84;
                                    table_elinks = &table_elinks[0];
                                  }
                                }
                              }
                            }
                            else
                            {
                              if ( *(int*)(ebp_48 + 44) - 0 >= 1 )
                              {
                              }
                              else
                              {
                              }
                            }
                          }
                          else
                          if ( ebp_68 < 1 )
                          {
                          }
                          do
                          {
                            *(int*)(ebp_84 + table_elinks->min_cols_widths + ( 0 << 2 )) = ( 0 / ebp_44 ) + *(int*)(ebp_84 + table_elinks->min_cols_widths + ( 0 << 2 )) + ( __MOD(0,ebp_44) > 0 );
                          }
                          while ( ebp_44 != 0 + 1 + 1 );
                          node = &table_elinks->max_cols_widths[0];
                        }
                        if ( ebp_68 >= 1 )
                        {
                          *ebp_44 = ebp_44;
                          do
                          {
                          }
                          while ( ebp_44 != 0 + 1 + 1 );
                        }
                        else
                        {
                        }
                      }
                      else
                      {
                        if ( *(int*)(ebp_48 + 32) <= ebp_44 && ebp_68 < ebp_72 )
                        {
                          ebp_64++;
                          if ( table_elinks->rows <= ebp_64 )
                            *(int*)(*(int*)(esi + 60)) = table_elinks->cols;
                            ebp_84 += 4;
                            ebp_92++;
                            if ( ebp_92 < table_elinks->cols )
                            {
                              ebp_72 = ebp_68;
                              break;
                              while ( ebp_76 = ebp_92 - 1, ebp_68 = ebp_72, table_elinks->rows < 1 )
                              {
                                *(int*)(*(int*)(esi + 68)) = table_elinks->real_cols;
                                ebp_64 = 0;
                                while ( 1 )
                                {
                                  ebp_48 = *(int*)(table_elinks[0].part + 4) + ( ( ebp_76 + ( ebp_64 * table_elinks->real_cols ) ) << 6 );
                                }
                              }
                            }
                            else
                            {
                              if ( ebp_68 != 2147483647 )
                              {
                                ebp_44 = ebp_68;
                                break;
                                while ( table_elinks->cols < 1 )
                                {
                                  ebp_84 = 0;
                                  ebp_92 = 1;
                                  ebp_72 = 2147483647;
                                  while ( ebp_76 = ebp_92 - 1, ebp_68 = ebp_72, table_elinks->rows < 1 )
                                  {
                                    *(int*)(*(int*)(esi + 68)) = table_elinks->real_cols;
                                    ebp_64 = 0;
                                    while ( 1 )
                                    {
                                      ebp_48 = *(int*)(table_elinks[0].part + 4) + ( ( ebp_76 + ( ebp_64 * table_elinks->real_cols ) ) << 6 );
                                    }
                                  }
                                }
                              }
                              else
                              {
                                table_elinks = &table_elinks[0];
                                if ( eax >= 1 )
                                {
                                  ebp_56 = table_elinks->max_cols_widths;
                                  ebp_52 = table_elinks->cols_x;
                                  ebp_64 = 0;
                                  while ( ebp_64 += table_elinks->min_cols_widths[ 0 ] + ( ~1 >> 31 ), ebp_68 == 0 + 1 + 1 )
                                  {
                                    if ( 0 + 1 )
                                    {
                                      if ( table_elinks->rules - 2 <= 1 )
                                      {
                                        if ( table_elinks->cellspacing == 0 )
                                        {
                                        }
                                      }
                                      else
                                      if ( table_elinks->rules == 4 && 0 + 1 < table_elinks->columns_count && table_elinks->columns[ 0 + 1 ] )
                                        continue;
                                      if ( table_elinks->cellpadding )
                                        continue;
                                    }
                                    else
                                    {
                                    }
                                  }
                                }
                                else
                                {
                                  get_table_frames( &table_elinks[0], ebp_28 );
                                  table_elinks->min_width = ebp_64 + ( ( ebp_28 >> 3 ) & 1 ) + ( ( ebp_28 >> 2 ) & 1 );
                                  table_elinks->max_width = ( *(int*)(ebp_56 + ( 0 << 2 )) < *(int*)(ebp_52 + ( 0 << 2 )) ? 0 + *(int*)(ebp_56 + ( 0 << 2 )) + ( ~table_elinks->rules >> 31 ) : *(int*)(ebp_56 + ( 0 << 2 )) + 0 + ( ~table_elinks->rules >> 31 ) + *(int*)(ebp_52 + ( 0 << 2 )) ) + ( ( ebp_28 >> 3 ) & 1 ) + ( ( ebp_28 >> 2 ) & 1 );
                                  if ( assert_failed == 0 )
                                  {
                                    assert_failed = ( *(int*)(ebp_56 + ( 0 << 2 )) < *(int*)(ebp_52 + ( 0 << 2 )) ? 0 + *(int*)(ebp_56 + ( 0 << 2 )) + ( ~table_elinks->rules >> 31 ) : *(int*)(ebp_56 + ( 0 << 2 )) + 0 + ( ~table_elinks->rules >> 31 ) + *(int*)(ebp_52 + ( 0 << 2 )) ) < ebp_64;
                                    if ( ( *(int*)(ebp_56 + ( 0 << 2 )) < *(int*)(ebp_52 + ( 0 << 2 )) ? 0 + *(int*)(ebp_56 + ( 0 << 2 )) + ( ~table_elinks->rules >> 31 ) : *(int*)(ebp_56 + ( 0 << 2 )) + 0 + ( ~table_elinks->rules >> 31 ) + *(int*)(ebp_52 + ( 0 << 2 )) ) < ebp_64 )
                                    {
                                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                      errline = 351;
                                      elinks_internal( "assertion min &lt;= max failed: min(%d) &gt; max(%d)" );
                                    }
                                  }
                                  if ( table_elinks->part == 0 && table_elinks->bordercolor == 0 )
                                  {
                                    if ( ( table_elinks->bits_at_124/*.1_1of4*/ & 1 ) & 255 )
                                      table_elinks->max_width = table_elinks->max_width;
                                    else
                                    if ( table_elinks->max_width <= table_elinks->width )
                                      edx = table_elinks->max_width;
                                    else
                                      table_elinks->max_width = table_elinks->width;
                                    if ( table_elinks->max_width < table_elinks->min_width )
                                      table_elinks->max_width = table_elinks->min_width;
                                    else
                                      eax = &table_elinks->max_width;
                                    if ( table_elinks->real_columns_count < margins + table_elinks->max_width )
                                      table_elinks->real_columns_count = table_elinks->max_width;
                                    if ( table_elinks->columns < table_elinks->min_width + margins )
                                      table_elinks->columns = table_elinks->min_width + margins;
                                  }
                                  else
                                  {
                                    if ( 0 == 0 )
                                    {
                                      if ( table_elinks->min_width <= table_elinks->width )
                                        esi = table_elinks->min_width;
                                      else
                                      if ( table_elinks->cellpadding == 0 )
                                      {
                                        if ( table_elinks->cols )
                                        {
                                          ebp_44 = table_elinks->min_width - table_elinks->min_width;
                                          if ( assert_failed == 0 )
                                          {
                                            assert_failed = ( table_elinks->min_width - table_elinks->min_width ) >> 31;
                                            if ( ( table_elinks->min_width - table_elinks->min_width ) >> 31 )
                                            {
                                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                              errline = 493;
                                              elinks_internal( "assertion spare_width &gt;= 0 failed: too small width %d, required %d" );
                                            }
                                          }
                                          while ( 0 + 1 < table_elinks->cols )
                                          {
                                          }
                                          ebp_64 = table_elinks->cols << 2;
                                          memcpy( table_elinks->cols_widths, table_elinks->min_cols_widths );
                                          table_elinks->real_width = table_elinks->min_width;
                                          if ( mem_alloc(  ) )
                                          {
                                            if ( mem_alloc(  ) )
                                            {
                                              ebp_56 = 0;
                                              while ( ebp_44 )
                                              {
                                                memset( ebp_48, 0 );
                                                memset( mem_alloc(  ), 0 );
                                                table_elinks->cols = table_elinks->cols;
                                                ebp_52 = 0;
                                                ebp_68 = 0;
                                                while ( ebp_68 < table_elinks->cols )
                                                {
                                                  switch ( ebp_56 )
                                                  {
                                                  default:
                                                    ebp_52 = -1;
                                                    if ( assert_failed == 0 )
                                                    {
                                                      assert_failed = ebp_52 == -1;
                                                      if ( !(_Bool)( ebp_52 != -1 ) )
                                                      {
                                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                                        errline = 515;
                                                        elinks_internal( "assertion total_width != -1 failed: Could not expand table" );
                                                        if ( assert_failed )
                                                          goto B204;
                                                      }
                                                      if ( ebp_52 )
                                                      {
                                                        do
                                                        {
                                                          ebp_72 = table_elinks->cols;
                                                          if ( table_elinks->cols >= 1 )
                                                          {
                                                            ebp_68 = -1;
                                                            while ( 1 )
                                                            {
                                                              if ( *(int*)(ebp_48 + ( 0 << 2 )) == 0 || edx <= edi )
                                                              {
                                                                edi = edi;
                                                                if ( ebp_72 != 0 + 1 + 1 )
                                                                  continue;
                                                              }
                                                              else
                                                              if ( ebp_72 != 0 + 1 + 1 )
                                                                continue;
                                                              edx = edx;
                                                              if ( ebp_68 != -1 )
                                                              {
                                                                eax = esi < eax ? eax : &esi;
                                                                if ( assert_failed == 0 )
                                                                {
                                                                  assert_failed = eax >> 31;
                                                                  if ( eax >> 31 )
                                                                  {
                                                                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                                                    errline = 468;
                                                                    elinks_internal( "assertion stretch_width &gt;= 0 failed: shrinking cell" );
                                                                    *ebp_136 = ebp_136;
                                                                  }
                                                                }
                                                                table_elinks->cols_widths[ ebp_68 ] = eax + *(int*)(table_elinks->cols_widths + edi);
                                                                if ( esi == eax )
                                                                {
                                                                  break;
                                                                }
                                                                else
                                                                {
                                                                  do
                                                                  {
                                                                    ebp_72 = table_elinks->cols;
                                                                  }
                                                                  while ( esi != eax );
                                                                }
                                                              }
                                                            }
                                                          }
                                                          *(int*)(ebp_44 - esi) = ebp_44 - esi;
                                                          if ( ebp_44 != esi )
                                                          {
                                                            break;
                                                          }
                                                        }
                                                        while ( esi != eax );
                                                      }
                                                      ebp_56++;
                                                    }
B204:                                                    assert_failed = 0;
                                                    mem_free(  );
                                                    break;
                                                  case 0:
                                                    if ( table_elinks->cols_widths[1] < table_elinks->cols_x[1] )
                                                    {
                                                      *(int*)(ebp_48 + 4) = 1;
                                                      *(int*)(ebp_76 + 0 + 4) = ( *(int*)(table_elinks->cols_x + 0 + 4) <= *(int*)(table_elinks->max_cols_widths + 0 + 4) ? *(int*)(table_elinks->max_cols_widths + 0 + 4) : table_elinks->cols_x[1] ) - table_elinks->cols_widths[1];
                                                      if ( ( *(int*)(table_elinks->cols_x + 0 + 4) <= *(int*)(table_elinks->max_cols_widths + 0 + 4) ? table_elinks->max_cols_widths[1] : table_elinks->cols_x[1] ) - table_elinks->cols_widths[1] < 1 )
                                                        *(int*)(ebp_48 + 4) = 0;
                                                        ebp_52 += *(int*)(ebp_48 + 4);
                                                        ebp_68++;
                                                      else
                                                        ecx = *(int*)(ebp_48 + 4);
                                                    }
                                                    break;
                                                  case 1:
                                                    if ( table_elinks->cols_x[1] < -1 )
                                                    {
                                                      *(int*)(ebp_48 + 4) = -2 - table_elinks->cols_x[1];
                                                      table_elinks->max_cols_widths[0] = table_elinks->max_cols_widths;
                                                      *(int*)(ebp_76 + 0 + 4) = *(int*)(0 + 4 + table_elinks->max_cols_widths) - table_elinks->cols_widths[1];
                                                      if ( *(int*)(0 + 4 + table_elinks->max_cols_widths) - *(int*)(table_elinks->cols_widths + 0 + 4) < 1 )
                                                        *(int*)(ebp_48 + 4) = 0;
                                                    }
                                                    break;
                                                  case 2:
                                                    if ( table_elinks->cols_x[1] == -1 )
                                                  case 3:
                                                    if ( table_elinks->cols_widths[1] < table_elinks->max_cols_widths[1] )
                                                    {
                                                      *(int*)(ebp_76 + 0 + 4) = table_elinks->max_cols_widths[1] - table_elinks->cols_widths[1];
                                                      if ( ebp_60 )
                                                        *(int*)(ebp_48 + 4) = ( ( *(int*)(table_elinks->max_cols_widths + esi) * 10 ) / ebp_60 ) + 5;
                                                      else
                                                        *(int*)(ebp_48 + 4) = 1;
                                                    }
                                                    break;
                                                  case 4:
                                                    if ( table_elinks->cols_x[0] >= 0 )
                                                    {
                                                      *ebp_48 = 1;
                                                      table_elinks->cols_x[0] = table_elinks->cols_x;
                                                      *(int*)(ebp_76 + 0 + 4) = *(int*)(0 + 4 + table_elinks->max_cols_widths) - table_elinks->cols_widths[1];
                                                    }
                                                    break;
                                                  case 5:
                                                    if ( table_elinks->cols_x[1] >= 0 )
                                                      ecx = *(int*)(ebp_48 + 4);
                                                    else
                                                    {
                                                      if ( table_elinks->cols_x[0] != -1 )
                                                        *(int*)(ebp_48 + 4) = -2 - table_elinks->cols_x[1];
                                                      else
                                                        *(int*)(ebp_48 + 4) = 1;
                                                      *(int*)(ebp_76 + 0 + 4) = 2147483647;
                                                      ecx = *(int*)(ebp_48 + 4);
                                                    }
                                                    break;
                                                  case 6:
                                                    *(int*)(ebp_48 + 4) = 1;
                                                    *(int*)(ebp_76 + 0 + 4) = 2147483647;
                                                    break;
                                                  }
                                                }
                                              }
                                              mem_free(  );
                                            }
                                            mem_free(  );
                                          }
                                        }
                                        if ( part[0] || part->box.x != 1 )
                                        {
                                          if ( mem_calloc( table_elinks->cols, 4 ) )
                                          {
                                            ebp_64 = 0;
                                            ebp_48 = table_elinks->cols;
                                            while ( ebp_64 < table_elinks->rows )
                                            {
                                              ebp_44 = 0;
                                              while ( ebp_44 < table_elinks->cols )
                                              {
                                                ebp_68 = table_elinks->cells[ ebp_44 + ( ebp_64 * table_elinks->real_cols ) ].start;
                                                if ( table_elinks->cells[ ebp_44 + ( ebp_64 * table_elinks->real_cols ) ].start )
                                                {
                                                  ebp_56 = table_elinks->cells[ ebp_44 + ( ebp_64 * table_elinks->real_cols ) ].colspan;
                                                  if ( table_elinks->cells[ ebp_44 + ( ebp_64 * table_elinks->real_cols ) ].colspan >= 1 )
                                                  {
                                                    ebp_48 = table_elinks->cellpadding;
                                                    table_elinks->cols_widths[ ebp_44 ] = table_elinks->cols_widths[ ebp_44 ];
                                                    do
                                                    {
                                                      if ( ( 0 + 1 ) && ( ebp_44 + 0 + 1 ) )
                                                      {
                                                        ebp_52 = table_elinks->rules;
                                                        if ( table_elinks->rules - 2 > 1 )
                                                        {
                                                          if ( ebp_52 == 4 && ebp_44 + table_elinks->cols < table_elinks->columns_count && table_elinks->columns[ ebp_44 + table_elinks->cols ] )
                                                          {
                                                            table_elinks->cols_widths[ ebp_44 ] = table_elinks->cols_widths[ ebp_44 ] + 4 + 4;
                                                            ebp_52 = ebp_48;
                                                            if ( ebp_56 == 0 + 1 + 1 )
                                                              break;
                                                          }
                                                        }
                                                        else
                                                        if ( table_elinks->cellspacing )
                                                        {
                                                          if ( ccdep2 <= ccdep1 )
                                                            continue;
                                                          else
                                                          {
                                                          }
                                                        }
                                                        if ( ebp_48 == 0 )
                                                          continue;
                                                      }
                                                      table_elinks->cols_widths[ ebp_44 ] += 4;
                                                      ebp_52 = ebp_48;
                                                    }
                                                    while ( ebp_56 != 0 + 1 + 1 );
                                                    table_elinks = &table_elinks[0];
                                                  }
                                                  else
                                                    ebp_52 = table_elinks->cellpadding;
                                                  *(int*)(ebp_76 + 48) = -1;
                                                  if ( eax )
                                                  {
                                                    *(int*)(ebp_76 + 48) = *(int*)(eax + 24);
                                                    mem_free( eax );
                                                  }
                                                  if ( esi < *(int*)(edi + 48) )
                                                    *(int*)(ebp_76 + 48) = esi;
                                                  table_elinks->cols = table_elinks->cols;
                                                }
                                                ebp_44++;
                                              }
                                              ebp_64++;
                                            }
                                            while ( 1 )
                                            {
                                              ebp_68 = 0;
                                              ebp_72 = 1;
                                              ebp_44 = 2147483647;
                                              while ( ebp_72 - 1 < ebp_48 )
                                              {
                                                table_elinks->rows = table_elinks->rows;
                                                ebp_76 = 0;
                                                node = ebp_72 << 4;
                                                for ( ; ebp_76 < table_elinks->rows; ebp_76++ )
                                                {
                                                  if ( table_elinks->cells[ ( ebp_72 - 1 ) + ( ebp_76 * table_elinks->real_cols ) ].start )
                                                  {
                                                    if ( assert_failed == 0 )
                                                    {
                                                      assert_failed = table_elinks->cols < ( ebp_72 - 1 ) + *(int*)(table_elinks->cells[ ( ebp_72 - 1 ) + ( ebp_76 * table_elinks->real_cols ) ].start + 32);
                                                      if ( table_elinks->cols < ( ebp_72 - 1 ) + *(int*)(table_elinks->cells[ ( ebp_72 - 1 ) + ( ebp_76 * table_elinks->real_cols ) ].start + 32) )
                                                      {
                                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                                        errline = 621;
                                                        elinks_internal( "assertion cell-&gt;colspan + col &lt;= table-&gt;cols failed: colspan out of table" );
                                                        if ( assert_failed )
                                                          goto B273;
                                                      }
                                                      if ( 1 == *(int*)(( total_width <= total_width ? total_width : total_width ) + 32) )
                                                      {
                                                        ebp_56 = 0;
                                                        if ( 1 > 1 )
                                                        {
                                                          ebp_64 = 1;
                                                          ebp_52 = node;
                                                          ebp_48 = ebp_72;
                                                          do
                                                          {
                                                            if ( ebp_48 )
                                                            {
                                                              if ( table_elinks->rules - 2 <= 1 )
                                                              {
                                                                if ( table_elinks->cellspacing )
                                                                  table_elinks->cellspacing = ~table_elinks->cellspacing >> 31;
                                                              }
                                                              else
                                                              if ( table_elinks->rules != 4 || table_elinks->columns_count <= ebp_48 || table_elinks->columns[ ebp_52 >> 4 ].group == 0 )
                                                                goto B314;
B314:                                                            }
                                                            ebp_64++;
                                                            ebp_56++;
                                                            ebp_48++;
                                                            ebp_52 += 16;
                                                          }
                                                          while ( ebp_64 < ebp_44 );
                                                          *ebp_92 = ebp_92;
                                                          *ebp_100 = table_elinks->cells[ ( ebp_72 - 1 ) + ( ebp_76 * table_elinks->real_cols ) ].start;
                                                        }
                                                        ebp_52 = table_elinks->max_cols_widths;
                                                        ebp_48 = *(int*)(eax + 48) - ebp_56;
                                                        if ( ebp_92 >= 1 )
                                                        {
                                                          do
                                                          {
                                                          }
                                                          while ( ebp_44 != 0 + 1 + 1 );
                                                        }
                                                        if ( ebp_48 > 0 )
                                                        {
                                                          ebp_48 -= 0;
                                                          ebp_64 = __MOD(ebp_48,ebp_92);
                                                          ebp_48 = __MOD(ebp_48,ebp_92);
                                                          ebp_56 = ebp_48 / ebp_92;
                                                          ebp_52 += ebp_68;
                                                          if ( ebp_68 + ebp_52 )
                                                          {
                                                            if ( ebp_92 >= 1 )
                                                            {
                                                              ebp_48 = 0;
                                                              do
                                                              {
                                                                if ( ( ebp_56 + *(int*)(esi + ( eax << 2 )) + ( eax < ebp_64 ) ) - *(int*)(ebp_52 + ( eax << 2 )) >= 1 )
                                                                  ebp_48 += edx;
                                                              }
                                                              while ( 1 != 0 + 1 + 1 );
                                                              table_elinks = ebp_84;
                                                              if ( ebp_48 )
                                                                ebp_48 = __MOD(ebp_48,1);
                                                            }
                                                          }
                                                          else
                                                          if ( ebp_92 >= 1 )
                                                            goto B325;
B325:                                                          do
                                                          {
                                                            ebp_52 = eax + *(int*)(esi + ( edx << 2 ));
                                                          }
                                                          while ( 1 != 0 + 1 + 1 );
                                                        }
                                                      }
                                                      else
                                                      {
                                                        if ( *(int*)(eax + 32) <= edi && ecx < ebp_44 )
                                                        {
                                                        }
                                                      }
                                                      *ebp_44 = ebp_44;
                                                    }
B273:                                                    assert_failed = 0;
                                                    mem_free( ebp_60 );
                                                  }
                                                  //ebp_76++;
                                                }
                                                ebp_72++;
                                                ebp_68 += 4;
                                                ebp_48 = table_elinks->cols;
                                              }
                                              if ( ebp_44 == 2147483647 )
                                              {
                                                while ( ebp_48 > 0 )
                                                {
                                                }
                                                if ( 0 >= 0 )
                                                {
                                                  ebp_44 = 0;
                                                  while ( ebp_48 > 0 )
                                                  {
                                                  }
                                                  if ( esi != -1 )
                                                  {
                                                    if ( *(int*)(ebp_60 + ( ebp_44 << 2 )) + ( ecx - edx ) <= table_elinks->max_cols_widths[ ebp_44 ] )
                                                    {
                                                      mem_free( (void*)table_elinks->cols_widths );
                                                      table_elinks->cols_widths = &esi;
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                              {
                                              }
                                            }
                                          }
                                          if ( table_elinks->caption.end && table_elinks->caption && table_elinks->caption.start < table_elinks->caption.end && table_elinks->caption.start < table_elinks->caption.end && format_html_part( html_context, table_elinks->caption.start, table_elinks->caption.end, table_elinks->align, 0, table_elinks->real_width, 0, 0, 0, 0, table_elinks->link_num ) )
                                            mem_free( (void*)format_html_part( html_context, table_elinks->caption.start, table_elinks->caption.end, table_elinks->align, 0, table_elinks->real_width, 0, 0, 0, 0, table_elinks->link_num ) );
                                          else
                                          {
                                          }
                                          table_elinks->caption_height = esi;
                                          ebp_48 = 0;
                                          while ( ebp_48 < table_elinks->rows )
                                          {
                                            table_elinks->cols = table_elinks->cols;
                                            ebp_44 = 1;
                                            for ( ; 0 + 1 < table_elinks->cols; ebp_44++ )
                                            {
                                              if ( (unsigned char)( __MOD((int)table_elinks->cells[ 0 + 1 + ( ebp_48 * table_elinks->real_cols ) ].bits_at_60/*.1_1of4*/,4) ) == 1 )
                                              {
                                                ebp_68 = table_elinks->cells[ 0 + 1 + ( ebp_48 * table_elinks->real_cols ) ].colspan;
                                                if ( table_elinks->cells[ 0 + 1 + ( ebp_48 * table_elinks->real_cols ) ].colspan >= 1 )
                                                {
                                                  ebp_76 = ebp_68 - 1;
                                                  table_elinks->cols_widths[ edi ] = table_elinks->cols_widths[ 0 + 1 ];
                                                  ebp_64 = ebp_44 << 4;
                                                  ebp_52 = 0;
                                                  ebp_56 = 0;
                                                  do
                                                  {
                                                    table_elinks->cols_widths[ 0 + 1 ] += 4;
                                                    ebp_56++;
                                                    ebp_52 += ebp_80 + ebp_72;
                                                    ebp_64 += 16;
                                                  }
                                                  while ( ebp_68 != ebp_56 );
                                                }
                                                else
                                                {
                                                  table_elinks->cellpadding = table_elinks->cellpadding;
                                                  ebp_52 = 0;
                                                }
                                                if ( format_html_part( html_context, *ebp_84, *(int*)(ebp_84 + 4), *(int*)(ebp_84 + 24), table_elinks->cellpadding, ebp_52, 0, 2, 2, 0, *(int*)(ebp_84 + 56) ) )
                                                {
                                                  *(int*)(ebp_84 + 52) = *(int*)(format_html_part( html_context, *ebp_84, *(int*)(ebp_84 + 4), *(int*)(ebp_84 + 24), table_elinks->cellpadding, ebp_52, 0, 2, 2, 0, *(int*)(ebp_84 + 56) ) + 28);
                                                  mem_free( (void*)format_html_part( html_context, *ebp_84, *(int*)(ebp_84 + 4), *(int*)(ebp_84 + 24), table_elinks->cellpadding, ebp_52, 0, 2, 2, 0, *(int*)(ebp_84 + 56) ) );
                                                }
                                                else
                                                {
                                                  if ( part[0].document == 0 )
                                                  {
                                                    if ( part->box.width < table_elinks->real_width + margins )
                                                      goto B263;
                                                    part->cy += table_elinks->real_height;
                                                  }
                                                  else
                                                  {
                                                    node = &part[3].spaces_len;
                                                    node->box.height = ( part->cy + part->box.y ) - node->box.y;
                                                    ebp_48 = table_elinks->real_width;
                                                    ebp_44 = table_elinks->align;
                                                    indent = html_context->stack.list_head_elinks - table_elinks->real_width;
                                                    if ( table_elinks->align == 1 )
                                                    {
                                                    }
                                                    else
                                                    if ( table_elinks->align == 2 )
                                                      indent = indent - html_context->stack.list_head_elinks;
                                                    else
                                                      indent = html_context->stack.list_head_elinks;
                                                    ebp_52 = 0;
                                                    ebp_52 = ( html_context->stack.list_head_elinks <= indent ? indent : html_context->stack.list_head_elinks ) < 0 ? html_context->stack.list_head_elinks <= indent ? indent : html_context->stack.list_head_elinks : ebp_52;
                                                    ebp_68 = part->box.y;
                                                    ebp_64 = part->box.x;
                                                    if ( table_elinks->caption.end && table_elinks->caption )
                                                    {
                                                      if ( table_elinks->caption.start < table_elinks->caption.end )
                                                      {
                                                      }
                                                      while ( edi < edx )
                                                      {
                                                        *ebp_56 = ebp_56 = ebp_136 - 1;
                                                      }
                                                    }
                                                    get_table_frames( &table_elinks[0], ebp_28 );
                                                    if ( table_elinks->fragment_id )
                                                      add_fragment_identifier( html_context, table_elinks->part, table_elinks->fragment_id );
                                                    expand_lines( html_context, table_elinks->part, ebp_52 - 1, part->cy, table_elinks->real_height, (int)( html_context->stack.list_head_elinks ) );
                                                    table_elinks->cols = table_elinks->cols;
                                                    ebp_72 = 1;
                                                    ebp_56 = 0;
                                                    while ( ebp_56 < table_elinks->cols )
                                                    {
                                                      ebp_84 = 0;
                                                      ebp_68 = 1;
                                                      ebp_64 = part->cy + ( ebp_28 & 1 );
                                                      ebp_92 = ebp_56 + 1;
                                                      while ( ebp_68 - 1 < table_elinks->rows )
                                                      {
                                                        if ( ebp_68 - 1 < table_elinks->rows - 1 )
                                                        {
                                                          margins = 1;
                                                          if ( get_hline_width( &table_elinks[0] ) >= 0 )
                                                          {
                                                            if ( table_elinks->cells[ ebp_56 + ( table_elinks->real_cols * ( ebp_68 - 1 ) ) ].start )
                                                            {
                                                              ebp_76 = 0;
                                                              ebp_44 = table_elinks->cells[ ebp_56 + ( table_elinks->real_cols * ( ebp_68 - 1 ) ) ].colspan;
                                                              if ( table_elinks->cells[ ebp_56 + ( table_elinks->real_cols * ( ebp_68 - 1 ) ) ].colspan >= 1 )
                                                              {
                                                                ebp_48 = table_elinks->cells[ ebp_56 + ( table_elinks->real_cols * ( ebp_68 - 1 ) ) ].colspan - 1;
                                                                table_elinks->cols_widths[ ebp_120 >> 2 ] = table_elinks->cols_widths[ ebp_56 ];
                                                                do
                                                                {
                                                                  if ( 0 + 1 < ebp_48 && ( ebp_92 + 0 + 1 ) )
                                                                  {
                                                                    if ( table_elinks->rules - 2 <= 1 )
                                                                    {
                                                                      if ( table_elinks->cellspacing )
                                                                        table_elinks->cellspacing = ~table_elinks->cellspacing >> 31;
                                                                    }
                                                                    else
                                                                    if ( table_elinks->rules != 4 || table_elinks->columns_count <= ebp_76 || *(int*)(ebp_76 + *(int*)(table_elinks[0].part + 24)) == 0 )
                                                                      goto B499;
B499:                                                                  }
                                                                  else
                                                                  {
                                                                  }
                                                                  table_elinks->cols_widths[ ebp_56 ] += 4;
                                                                }
                                                                while ( ebp_44 != 0 + 1 + 1 );
                                                                table_elinks = &table_elinks[0];
                                                              }
                                                              ebp_44 = 0;
                                                              if ( *(int*)(esi + 36) >= 1 )
                                                              {
                                                                ebp_48 = ebp_68;
                                                                do
                                                                {
                                                                  if ( edi < eax - 1 )
                                                                  {
                                                                    if ( get_hline_width( &table_elinks[0] ) >= 0 )
                                                                      *(int*)(*(int*)(ebp_100 + 36)) = *(int*)(ebp_100 + 36);
                                                                    else
                                                                    {
                                                                    }
                                                                  }
                                                                }
                                                                while ( table_elinks->min_cols_widths <= 0 + 1 + 1 );
                                                              }
                                                              if ( ( *(char*)(esi + 60) & 4 ) & 255 )
                                                                html_context->stack.next[3] |= 1;
                                                              &html_context->stack.list_head_elinks = *(int*)(esi + 12);
                                                              &html_context->stack.list_head_elinks = *(int*)(esi + 12);
                                                              if ( *(int*)(esi + 28) == 1 )
                                                              {
                                                              }
                                                              else
                                                              if ( edx == 2 )
                                                              {
                                                              }
                                                              *ebp_80 = ebp_80;
                                                              if ( eax )
                                                              {
                                                                if ( assert_failed == 0 )
                                                                {
                                                                  assert_failed = ebp_44 < *(int*)(esi + 52);
                                                                  if ( ebp_44 < *(int*)(esi + 52) )
                                                                  {
                                                                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                                                    errline = 888;
                                                                    elinks_internal( "assertion height &gt;= cell-&gt;height failed!" );
                                                                  }
                                                                }
                                                                expand_lines( html_context, table_elinks->part, ebp_116 + ebp_76, ebp_64, ebp_44, *(int*)(esi + 12) );
                                                                if ( *(int*)(esi + 8) )
                                                                  add_fragment_identifier( html_context, &edi, (unsigned char*)eax );
                                                                done_html_parser_state( html_context );
                                                                mem_free( &edi );
                                                              }
                                                              else
                                                                done_html_parser_state( html_context );
                                                            }
                                                            ebp_68++;
                                                            ebp_64 += table_elinks->rows_heights[ ebp_84 >> 2 ] + margins;
                                                            ebp_84 += 4;
                                                          }
                                                        }
                                                        margins = 0;
                                                      }
                                                      if ( ebp_56 < table_elinks->cols - 1 )
                                                      {
                                                        ebp_56 = ebp_92;
                                                        ebp_72++;
                                                      }
                                                      ebp_56 = ebp_92;
                                                      ebp_72++;
                                                    }
                                                    expand_lines( html_context, table_elinks->part, ( ebp_52 + table_elinks->real_width ) - 1, part->cy, table_elinks->real_height, table_elinks->bgcolor );
                                                    check_html_form_hierarchy( table_elinks->part );
                                                    ebp_56 = table_elinks->real_height;
                                                    ebp_48 = table_elinks->cols_widths[0];
                                                    table_elinks->rows = table_elinks->rows;
                                                    while ( 0 + 1 < table_elinks->rows )
                                                    {
                                                      ebp_44 = table_elinks->rows_heights[ 0 + 1 ];
                                                      if ( table_elinks->rows - 1 > 0 )
                                                      {
                                                        if ( get_hline_width( &table_elinks[0], 1 + 1 ) >= 0 )
                                                        {
                                                        }
                                                        else
                                                        {
                                                        }
                                                      }
                                                    }
                                                    if ( assert_failed == 0 )
                                                    {
                                                      assert_failed = edi != ebp_56 + ebp_48;
                                                      if ( ebp_56 != edi )
                                                      {
                                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                                                        errline = 704;
                                                        elinks_internal( "assertion old_height == our_height failed: size not matching! %d vs %d" );
                                                      }
                                                    }
                                                    draw_table_frames( &table_elinks[0], ebp_52, part->cy, html_context );
                                                    part->cy += table_elinks->real_height;
                                                    part->cx = -1;
                                                    if ( mem_alloc( 24 ) )
                                                    {
                                                      *(int*)(mem_alloc( 24 ) + 20) = 0;
                                                      *(int*)(mem_alloc( 24 ) + 8) = node->box.x < 0 ? node->box : 0;
                                                      *(int*)(mem_alloc( 24 ) + 12) = part->cy + part->box.y < 0 ? part->cy + part->box.y : 0;
                                                      *(int*)(mem_alloc( 24 ) + 16) = (unsigned char)( ( ( node->box.width >> 31 ) & 1 ) ^ 1 ) ? 0 : node->box.width;
                                                      *(int*)(mem_alloc( 24 )) = part[3].spaces_len;
                                                      *(int*)(mem_alloc( 24 ) + 4) = part[3].spaces_len;
                                                      part[3].spaces_len = mem_alloc( 24 );
                                                      *(int*)(*(int*)(mem_alloc( 24 )) + 4) = mem_alloc( 24 );
                                                    }
                                                  }
                                                }
                                              }
                                              //ebp_44++;
                                            }
                                            ebp_48++;
                                          }
                                          while ( 1 )
                                          {
                                            ebp_44 = 2147483647;
                                            while ( table_elinks->rows > 0 )
                                            {
                                              if ( table_elinks->cols >= 1 )
                                              {
                                                edi = 0;
                                                ebp_48 = 0;
                                                while ( 1 )
                                                {
                                                  if ( (unsigned char)( __MOD((int)table_elinks->cells[ ebp_48 + ( table_elinks->real_cols * 0 ) ].bits_at_60/*.1_1of4*/,4) ) == 1 )
                                                  {
                                                    if ( table_elinks->cells[ ebp_48 + ( table_elinks->real_cols * ebp_68 ) ].rowspan == 1 )
                                                    {
                                                      ebp_56 = 0;
                                                      if ( 1 > 1 )
                                                      {
                                                        ebp_52 = 1;
                                                        do
                                                        {
                                                          *ebp_136 = ebp_68;
                                                          ebp_52++;
                                                          ebp_56 += ~get_hline_width( &table_elinks[0], ebp_52 + ebp_68 ) >> 31;
                                                        }
                                                        while ( ebp_52 < ebp_44 );
                                                      }
                                                      ebp_52 = table_elinks->rows_heights[ 0 ];
                                                      if ( 1 >= 1 )
                                                      {
                                                        do
                                                        {
                                                        }
                                                        while ( 1 != 0 + 1 + 1 );
                                                        *ebp_56 = ebp_56;
                                                      }
                                                      if ( ebp_56 > 0 && 1 >= 1 )
                                                      {
                                                        do
                                                        {
                                                          ebp_64 = edi + *(int*)(ebp_52 + ( eax << 2 ));
                                                        }
                                                        while ( 1 != 0 + 1 + 1 );
                                                      }
                                                    }
                                                    else
                                                    {
                                                      if ( *(int*)(edi + 36) <= esi )
                                                      {
                                                        if ( table_elinks->cells[ ebp_48 + ( table_elinks->real_cols * ebp_68 ) ].rowspan < ebp_44 )
                                                        {
                                                          ebp_48++;
                                                          if ( table_elinks->cols <= ebp_48 )
                                                          {
                                                          }
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
                                                  ebp_48++;
                                                }
                                              }
                                            }
                                            if ( ebp_44 == 2147483647 )
                                            {
                                              get_table_frames( &table_elinks[0], ebp_28 );
                                              table_elinks->rows = table_elinks->rows;
                                              while ( table_elinks->rows > 0 )
                                              {
                                                if ( 0 )
                                                {
                                                }
                                              }
                                              table_elinks->real_height = esi;
                                            }
                                            else
                                            {
                                            }
                                          }
                                        }
                                        else
                                        {
                                          int total_width = table_elinks->real_width;
                                          total_width = table_elinks->real_width + margins;
                                          total_width = html_context->stack.list_head_elinks;
                                          if ( total_width <= part->box.width )
                                            continue;
                                        }
B263:                                        part->box.width = table_elinks->real_width + margins;
                                      }
                                      else
                                      {
                                        table_elinks->cellpadding = 0;
                                        table_elinks->part = table_elinks->part;
                                      }
                                    }
                                    else
                                    if ( 0 != 1 )
                                    {
                                      table_elinks->width = table_elinks->width;
                                      table_elinks->min_width = table_elinks->min_width;
                                    }
                                    else
                                    if ( table_elinks->min_width <= 0 )
                                      table_elinks->width = table_elinks->width;
                                    else
                                    {
                                      table_elinks->cellpadding = table_elinks->cellpadding;
                                      table_elinks->part = table_elinks->part;
                                      break;
                                    }
                                    if ( table_elinks->min_width < table_elinks->width && ( table_elinks->width <= table_elinks->max_width || ( ( table_elinks->bits_at_124/*.1_1of4*/ & 1 ) & 255 ) == 0 ) )
                                    {
                                    }
                                  }
                                }
                              }
                            }
                          else
                          {
                            *(int*)(*(int*)(ebp_60 + 68)) = table_elinks->real_cols;
                            ebp_72 = ebp_68;
                          }
                        }
                      }
                    }
B57:                    table_elinks = &table_elinks[0];
                    assert_failed = 0;
                  }
B53:                  ebp_68 = ebp_72;
                  ebp_64++;
                  if ( table_elinks->rows <= ebp_64 )
                    *(int*)(*(int*)(esi + 60)) = table_elinks->cols;
                    ebp_84 += 4;
                    ebp_92++;
                  else
                  {
                    *(int*)(*(int*)(ebp_60 + 68)) = table_elinks->real_cols;
                    ebp_72 = ebp_68;
                  }
                }
              }
            }
          }
          part->link_num = table_elinks->link_num;
          if ( part->box.height < part->cy )
            part->box.height = part->cy;
          html_context->part = part;
          done_html_parser_state( html_context, init_html_parser_state( html_context, ELEMENT_DONT_KILL, 0, 0, 0 ) );
          free_table( &table_elinks[0] );
        }
      }
      else
      {
        ebp_48 = 0;
        if ( table_elinks->cols >= 1 )
        {
          table_elinks = &table_elinks[0];
          do
          {
            if ( table_elinks->rows >= 1 )
            {
              table_elinks->real_cols = table_elinks->real_cols;
              for ( ; table_elinks->cells[ ebp_48 + ( 0 * table_elinks->real_cols ) ].start == 0; table_elinks->real_cols = table_elinks->real_cols )
              {
                if ( 0 + 1 + 1 < table_elinks->rows )
                  continue;
              }
              table_elinks->cells[ ebp_48 + ( ( 0 + 1 ) * table_elinks->real_cols ) ].link_num = ebp_44;
              ebp_52 = table_elinks->cells[ ebp_48 + ( ( 0 + 1 ) * table_elinks->real_cols ) ].start;
              table_elinks->cells[ ebp_48 + ( ( 0 + 1 ) * table_elinks->real_cols ) ].min_width = -1;
              table_elinks->cells[ ebp_48 + ( ( 0 + 1 ) * table_elinks->real_cols ) ].max_width = -1;
              if ( eax )
              {
                ebp_52 = *(int*)(eax + 24);
                *(int*)(esi + 40) = *(int*)(eax + 24);
                *(int*)(esi + 44) = *(int*)(eax + 32);
                ebp_44 = *(int*)(eax + 48);
                if ( assert_failed == 0 )
                {
                  assert_failed = edx < ebp_52;
                  if ( edx < ebp_52 )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/tables.c";
                    errline = 119;
                    elinks_internal( "assertion *min &lt;= *max failed: get_cell_width: %d &gt; %d" );
                    *ebp_136 = ebp_136;
                  }
                }
                mem_free( (void*)table_elinks[0].part );
              }
            }
            ebp_48++;
          }
          while ( table_elinks->cols <= ebp_48 );
        }
      }
    }
  }
  html_context->table_level--;
  if ( html_context->table_level - 1 == 0 )
  {
    free_table_cache(  );
  }
  return;
}
#if 0
#endif
