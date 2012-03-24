#include "table.c.h"
void add_table_bad_html_end( struct table_elinks *table_elinks, unsigned char *end )
{
  if ( table_elinks->caption && table_elinks->caption.end == 0 )
  {
    table_elinks->caption.end = &end[0];
    return;
  }
  if ( table_elinks->bad_html_size && *(int*)(( ( table_elinks->bad_html_size << 3 ) - 8 ) + *(int*)(&table_elinks->bad_html) + 4) == 0 )
  {
    table_elinks->bad_html[ table_elinks->bad_html_size - 1 ].end = &end[0];
    return;
  }
  return;
}
void get_align( struct html_context *html_context, unsigned char *attr, int *a )
{
  unsigned char *al;
  if ( get_attr_value( &attr[0], "align", html_context->doc_cp, HTML_ATTR_NONE ) )
  {
    if ( c_strcasecmp( (char*)get_attr_value( &attr[0], "align", html_context->doc_cp, HTML_ATTR_NONE ), "left" ) == 0 )
      a[0] = 0;
    else
    {
      if ( c_strcasecmp( &al[0], "right" ) )
      {
        if ( c_strcasecmp( &al[0], "center" ) == 0 )
          a[0] = 1;
        else
        {
          if ( c_strcasecmp( &al[0], "justify" ) == 0 )
            a[0] = 3;
          else
          {
            if ( c_strcasecmp( &al[0], "char" ) == 0 )
              goto B8;
          }
        }
      }
B8:      a[0] = 2;
    }
    mem_free( &al[0] );
  }
  return;
}
void get_valign( struct html_context *html_context, unsigned char *attr, int *a )
{
  unsigned char *al;
  if ( get_attr_value( &attr[0], "valign", html_context->doc_cp, HTML_ATTR_NONE ) )
  {
    if ( c_strcasecmp( (char*)get_attr_value( &attr[0], "valign", html_context->doc_cp, HTML_ATTR_NONE ), "top" ) )
    {
      if ( c_strcasecmp( &al[0], "middle" ) == 0 )
        a[0] = 1;
        mem_free( &al[0] );
      else
      {
        if ( c_strcasecmp( &al[0], "bottom" ) == 0 )
          a[0] = 2;
        else
        {
          if ( c_strcasecmp( &al[0], "baseline" ) )
            continue;
        }
      }
    }
    a[0] = 0;
  }
  return;
}
void get_column_width( unsigned char *attr, int *width, int sh, struct html_context *html_context )
{
  unsigned char *al;
  if ( get_attr_value( attr, "width", html_context->doc_cp, HTML_ATTR_NONE ) )
  {
    if ( strlen( (char*)get_attr_value( attr, "width", html_context->doc_cp, HTML_ATTR_NONE ) ) && *(char*)(( al[0] + strlen( (char*)get_attr_value( attr, "width", html_context->doc_cp, HTML_ATTR_NONE ) ) ) - 1) == '*' )
    {
      unsigned char *en;
      int n;
      *(char*)(( al[0] + strlen( (char*)get_attr_value( attr, "width", html_context->doc_cp, HTML_ATTR_NONE ) ) ) - 1) = 0;
      *(int*)(__errno_location(  )) = 0;
      if ( n >= 0 && *(int*)(__errno_location(  )) == 0 && ( en[0] == '.' || ( en[0] & 255 ) == 0 ) )
        width[0] = -2 - strtoul( &al[0], (char**)&en, 10 );
    }
    else
    {
      int w;
      if ( w >= 0 )
        width[0] = w;
    }
    mem_free( &al[0] );
  }
  return;
}
void free_table( struct table_elinks *table_elinks )
{
  int eax;
  int ecx;
  int col, row;
{
  void *p = (void*)table_elinks->min_cols_widths;
  if ( table_elinks->min_cols_widths )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)table_elinks->max_cols_widths;
  if ( table_elinks->max_cols_widths )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)table_elinks->cols_widths;
  if ( table_elinks->cols_widths )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)table_elinks->rows_heights;
  if ( table_elinks->rows_heights )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)table_elinks->fragment_id;
  if ( table_elinks->fragment_id )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)table_elinks->cols_x;
  if ( table_elinks->cols_x )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)table_elinks->bad_html;
  if ( table_elinks->bad_html )
    mem_free( &((int*)p)[0] );
  if ( table_elinks->cols >= 1 )
  {
    col = 0;
    do
    {
      if ( table_elinks->rows < 1 )
      {
        col++;
        if ( col + 1 < table_elinks->cols )
          continue;
        else
          break;
      }
      else
      {
        table_elinks->real_cols = table_elinks->real_cols;
        row = 0;
      {
        while ( p = (void*)table_elinks->cells[ col + ( ((int*)p)[0] * row ) ].fragment_id, table_elinks->cells[ col + ( ((int*)p)[0] * row ) ].fragment_id == 0 )
        {
          row++;
          if ( table_elinks->rows <= row + 1 )
          {
            col++;
            if ( col + 1 < table_elinks->cols )
              continue;
            else
          }
          else
          {
            table_elinks->real_cols = table_elinks->real_cols;
          }
        }
        mem_free( &((int*)p)[0] );
        row++;
      }
      }
    }
    while ( col + 1 < table_elinks->cols );
  }
  else
    table_elinks->cells->start = (unsigned char*)table_elinks->cells;
  mem_free( (void*)table_elinks->cells );
  mem_free( (void*)table_elinks->columns );
  table_elinks = &table_elinks[0];
}
}
}
}
}
}
}
}
struct table_cell *new_cell( struct table_elinks *table_elinks, int dest_col, int dest_row )
{
  if ( dest_col < table_elinks->cols && dest_row < table_elinks->rows )
  {
    return &table_elinks->cells[ dest_col + ( dest_row * *(int*)(&table_elinks->real_cols) ) ];
  }
{
  int limit;
  while ( table_elinks->real_cols <= dest_col || table_elinks->real_rows <= dest_row )
  {
    if ( table_elinks->real_cols < dest_col + 1 )
    {
      do
      {
        if ( ( ( table_elinks->real_cols > 2047 ? table_elinks->real_cols * 2 : table_elinks->real_cols + 2048 ) > 2047 ? ( table_elinks->real_cols > 2047 ? table_elinks->real_cols * 2 : table_elinks->real_cols + 2048 ) * 2 : ( table_elinks->real_cols > 2047 ? table_elinks->real_cols * 2 : table_elinks->real_cols + 2048 ) + 2048 ) <= ( table_elinks->real_cols > 2047 ? table_elinks->real_cols * 2 : table_elinks->real_cols + 2048 ) )
          break;
      }
      while ( table_elinks->real_cols < dest_col + 1 );
    }
    if ( table_elinks->real_cols > 2047 ? table_elinks->real_cols * 2 : table_elinks->real_cols + 2048 )
    {
      if ( table_elinks->real_rows < dest_row + 1 )
      {
        while ( edi < ( (unsigned char)( ( esi < eax ) ^ 1 ) ? esi * 2 : esi + eax ) )
        {
          if ( dest_row + 1 <= table_elinks->real_rows )
          {
          }
          else
          {
          }
        }
        break;
      }
      if ( esi && eax )
      {
        if ( ( table_elinks->cols << 6 ) && table_elinks->rows >= 1 )
        {
          while ( 1 )
          {
            memcpy( &edi, table_elinks->cells[ esi * eax ].start, ebp_28 );
            if ( table_elinks->rows <= 0 + 1 )
            {
            }
            else
            {
            }
          }
        }
        mem_free( (void*)table_elinks->cells );
        table_elinks->real_cols = edi;
        table_elinks->real_rows = esi;
        table_elinks->cells = ebp_40;
      }
      else
        break;
    }
    else
      break;
  }
  if ( table_elinks->cols <= dest_col )
  {
    if ( table_elinks->cols && table_elinks->rows >= 1 )
    {
      while ( table_elinks->cells[ ( table_elinks->cols - 1 ) + ( ( 0 + 1 ) * table_elinks->real_cols ) ].colspan != -1 || dest_col < table_elinks->cols )
      {
        if ( table_elinks->rows <= 0 + 1 + 1 )
          goto B24;
        else
        {
        }
      }
      while ( table_elinks->cells[ table_elinks->cols + 1 + ( ( 0 + 1 ) * table_elinks->real_cols ) ].bits_at_60/*.1_1of4*/ |= 3, table_elinks->cells[ table_elinks->cols + 1 + ( ( 0 + 1 ) * table_elinks->real_cols ) ].colspan = -1, table_elinks->cells[ table_elinks->cols + 1 + ( ( 0 + 1 ) * table_elinks->real_cols ) ].rowspan = table_elinks->cells[ ( table_elinks->cols - 1 ) + ( ( 0 + 1 ) * table_elinks->real_cols ) ].rowspan, table_elinks->cells[ table_elinks->cols + 1 + ( ( 0 + 1 ) * table_elinks->real_cols ) ].col = table_elinks->cells[ ( table_elinks->cols - 1 ) + ( ( 0 + 1 ) * table_elinks->real_cols ) ].col, table_elinks->cells[ table_elinks->cols + 1 + ( ( 0 + 1 ) * table_elinks->real_cols ) ].row = table_elinks->cells[ ( table_elinks->cols - 1 ) + ( ( 0 + 1 ) * table_elinks->real_cols ) ].row, table_elinks->cols + 1 + 1 <= dest_col )
      {
      }
    }
B24:    table_elinks->cols = dest_col + 1;
  }
  if ( table_elinks->rows <= dest_row )
  {
    if ( table_elinks->rows && table_elinks->cols >= 1 )
    {
      do
      {
        if ( table_elinks->cells[ 0 + 1 + ( ( table_elinks->rows - 1 ) * table_elinks->real_cols ) ].rowspan == -1 && table_elinks->rows <= dest_row )
        {
          while ( table_elinks->cells[ 0 + 1 + ( ( table_elinks->rows + 1 ) * table_elinks->real_cols ) ].bits_at_60/*.1_1of4*/ |= 3, table_elinks->cells[ 0 + 1 + ( ( table_elinks->rows + 1 ) * table_elinks->real_cols ) ].rowspan = -1, table_elinks->cells[ 0 + 1 + ( ( table_elinks->rows + 1 ) * table_elinks->real_cols ) ].colspan = table_elinks->cells[ 0 + 1 + ( ( table_elinks->rows - 1 ) * table_elinks->real_cols ) ].colspan, table_elinks->cells[ 0 + 1 + ( ( table_elinks->rows + 1 ) * table_elinks->real_cols ) ].col = table_elinks->cells[ 0 + 1 + ( ( table_elinks->rows - 1 ) * table_elinks->real_cols ) ].col, table_elinks->cells[ 0 + 1 + ( ( table_elinks->rows + 1 ) * table_elinks->real_cols ) ].row = table_elinks->cells[ 0 + 1 + ( ( table_elinks->rows - 1 ) * table_elinks->real_cols ) ].row, table_elinks->rows + 1 + 1 <= dest_row )
          {
          }
        }
      }
      while ( table_elinks->cols <= 0 + 1 + 1 );
    }
    table_elinks->rows = dest_row + 1;
  }
  return &table_elinks->cells[ dest_col + ( dest_row * table_elinks->real_cols ) ];
}
}
void new_columns( struct table_elinks *table_elinks, int span, int width, int align, int valign, int group )
{
  int ecx;
  int edx;
  if ( table_elinks->real_columns_count < table_elinks->columns_count + span )
  {
    while ( n = n > 16383 ? n * 2 : n + 16384, n < ( n > 16383 ? n * 2 : n + 16384 ) )
    {
      int n;
      if ( table_elinks->columns_count + span <= edi )
      {
        table_elinks = &table_elinks[0];
        if ( n && mem_realloc( (void*)table_elinks->columns, n << 4 ) )
        {
          table_elinks->real_columns_count = n;
          table_elinks->columns = (struct table_column*)mem_realloc( (void*)table_elinks->columns, n << 4 );
        }
        else
          break;
      }
      else
      {
        n = n;
      }
    }
    return;
  }
  if ( span )
  {
    group = group;
  {
    do
    {
      struct table_column *column;
      table_elinks->columns_count++;
      column = &table_elinks->columns[ table_elinks->columns_count ];
      table_elinks->columns[ table_elinks->columns_count ].align = align;
      table_elinks->columns[ table_elinks->columns_count ].group = group;
      group = 0;
      table_elinks->columns[ table_elinks->columns_count ].width = width;
      table_elinks->columns[ table_elinks->columns_count ].valign = valign;
    }
    while ( span - 1 != 1 );
    return;
  }
  }
  else
  {
    return;
  }
}
void set_td_width( struct table_elinks *table_elinks, int col, int width, int force )
{
  int edx;
  if ( col < table_elinks->cols_x_count )
  {
  }
  else
  {
    int n;
    int i;
    int *new_cols_x;
    if ( col + 1 <= n )
    {
    }
    else
    {
      while ( n = esi > 65535 ? esi * 2 : esi + 0x10000, n < ( n > 65535 ? n * 2 : n + 0x10000 ) )
      {
        if ( col + 1 <= n )
          goto B17;
        else
        {
          n = esi;
        }
      }
      if ( table_elinks->cols_x_count == 0 )
        n = col + 1;
        if ( new_cols_x[0] )
        {
          i = table_elinks->cols_x_count;
          if ( table_elinks->cols_x_count < n )
          {
            n = n;
            do
            {
              i++;
              new_cols_x[ i ] = -1;
            }
            while ( i + 1 < n );
          }
          table_elinks->cols_x_count = n;
          table_elinks->cols_x = &new_cols_x[0];
        }
        else
        {
          return;
        }
      else
      {
        return;
      }
    }
B17:    if ( table_elinks->cols_x_count == 0 )
    {
    }
    else
    {
    }
  }
  if ( force )
    col = table_elinks->cols_x[ col ];
  else
  if ( table_elinks->cols_x[ table_elinks->cols_x + ( col << 2 ) ] != -1 )
  {
    if ( width != -1 )
    {
      if ( width < 0 )
      {
        if ( table_elinks->cols_x[ table_elinks->cols_x + ( col << 2 ) ] >= 0 )
          goto B5;
      }
      else
      if ( table_elinks->cols_x[ table_elinks->cols_x + ( col << 2 ) ] < 0 )
      {
        return;
      }
      table_elinks->cols_x[ col ] = ( width + table_elinks->cols_x[ table_elinks->cols_x + ( col << 2 ) ] ) >> 1;
      return;
    }
    else
    {
      return;
    }
  }
B5:  col = width;
  return;
}
struct table_elinks *parse_table( unsigned char *html, unsigned char *eof, unsigned char **end, unsigned char *attr, int sh, struct html_context *html_context )
{
  int eax;
  int ecx;
  int edx;
  int ebp_120;
  int ebp_112;
  int ebp_104;
  int ebp_76;
  int ebp_68;
  struct table_elinks *table_elinks;
  struct table_cell *cell;
  unsigned char *t_attr, *en, *name;
  unsigned char *l_fragment_id;
  color_T last_bgcolor;
  int namelen;
  int in_cell;
  int l_al = 0;
  int l_val = 1;
  int colspan, rowspan;
  int group;
  int i, j, k;
  int c_al = -1, c_val = -1, c_width = -1, c_span;
  int cols;
  int col, row;
  int maxj;
  int closing_tag, is_header;
  unsigned char c;
  end[0] = html;
  if ( mem_calloc( 1, 148 ) )
  {
    *(int*)(mem_calloc( 1, 148 ) + 4) = mem_calloc( 4, 64 );
    if ( mem_calloc( 1, 148 ) + 4 == 0 )
    {
      mem_free( mem_calloc( 1, 148 ) );
      return 0;
    }
    *(int*)(mem_calloc( 1, 148 ) + 68) = 2;
    *(int*)(mem_calloc( 1, 148 ) + 72) = 2;
    *(int*)(mem_calloc( 1, 148 ) + 24) = mem_calloc( 2, 16 );
    if ( mem_calloc( 1, 148 ) + 24 == 0 )
    {
      mem_free( *(int*)(edi + 4) );
      mem_free( &edi );
      return 0;
    }
    *(int*)(mem_calloc( 1, 148 ) + 32) = 2;
    *(int*)(mem_calloc( 1, 148 ) + 8) = get_attr_value( attr, "id", html_context->doc_cp, HTML_ATTR_NONE );
    if ( html_context->options[0] && html_context->options->use_document_colors >= 1 && ( get_attr_value( attr, "bordercolor", html_context->doc_cp, HTML_ATTR_NONE ) || get_attr_value( attr, "bordercolorlight", html_context->doc_cp, HTML_ATTR_NONE ) || get_attr_value( attr, "bordercolordark", html_context->doc_cp, HTML_ATTR_NONE ) ) )
    {
      decode_color( &edx, ~ecx - 1, ebp_92 + 16 );
      mem_free( ebp_140 );
    }
    *(int*)(mem_calloc( 1, 148 ) + 100) = get_width( attr, "width", sh, html_context );
    if ( mem_calloc( 1, 148 ) + 100 == -1 )
    {
      *(int*)(mem_calloc( 1, 148 ) + 100) = 0 ? 0 : html_context->stack.list_head_elinks + ( 0 - html_context->stack.list_head_elinks - html_context->stack.list_head_elinks );
      *(char*)(mem_calloc( 1, 148 ) + 124) |= 1;
    }
    *(int*)(mem_calloc( 1, 148 ) + 76) = get_num( attr, "border", html_context->doc_cp );
    if ( mem_calloc( 1, 148 ) + 76 == -1 )
    {
      if ( !get_attr_value( attr, "border", html_context->doc_cp, HTML_ATTR_TEST ) && ( get_attr_value( attr, "rules", html_context->doc_cp, HTML_ATTR_TEST ) || get_attr_value( attr, "frame", html_context->doc_cp, HTML_ATTR_TEST ) ) )
      {
      }
      return 1;
    }
    if ( mem_calloc( 1, 148 ) + 76 )
    {
      if ( mem_calloc( 1, 148 ) + 76 <= 2 )
        goto B29;
      else
        *(int*)(mem_calloc( 1, 148 ) + 76) = 2;
B29:      *(int*)(mem_calloc( 1, 148 ) + 88) = get_num( attr, "cellspacing", html_context->doc_cp );
      if ( mem_calloc( 1, 148 ) + 88 < 1 )
        *(int*)(edi + 88) = 1;
      else
      if ( mem_calloc( 1, 148 ) + 88 > 2 )
        *(int*)(mem_calloc( 1, 148 ) + 88) = 2;
      if ( *(int*)(mem_calloc( 1, 148 ) + 76) )
      {
        *(int*)(mem_calloc( 1, 148 ) + 92) = 15;
        if ( get_attr_value( attr, "frame", html_context->doc_cp, HTML_ATTR_NONE ) )
        {
          if ( c_strcasecmp( (char*)get_attr_value( attr, "frame", html_context->doc_cp, HTML_ATTR_NONE ), "void" ) == 0 )
            *(int*)(mem_calloc( 1, 148 ) + 92) = 0;
          else
          {
            if ( eax == 0 )
              return 1;
            else
            {
              if ( eax == 0 )
                return 2;
              else
              {
                if ( eax == 0 )
                  return 3;
                else
                {
                  if ( eax == 0 )
                    return 12;
                  else
                  {
                    if ( eax == 0 )
                      return 4;
                    else
                    {
                      if ( eax == 0 )
                        return 8;
                    }
                  }
                }
              }
            }
          }
          mem_free( (void*)get_attr_value( attr, "frame", html_context->doc_cp, HTML_ATTR_NONE ) );
          *(int*)(mem_calloc( 1, 148 ) + 80) = get_num( attr, "cellpadding", html_context->doc_cp );
          if ( mem_calloc( 1, 148 ) + 80 == -1 )
          {
            *(int*)(mem_calloc( 1, 148 ) + 84) = 0;
            *(int*)(mem_calloc( 1, 148 ) + 80) = *(int*)(mem_calloc( 1, 148 ) + 76) != 0;
          }
          else
          {
            *(int*)(mem_calloc( 1, 148 ) + 84) = mem_calloc( 1, 148 ) + 80 > 6;
            *(int*)(mem_calloc( 1, 148 ) + 80) = mem_calloc( 1, 148 ) + 80 > 3;
          }
          *(int*)(mem_calloc( 1, 148 ) + 96) = __MOD(~( 0 - ( ( *(int*)(mem_calloc( 1, 148 ) + 76) < 1 ) & 1 ) ),4);
          if ( get_attr_value( attr, "rules", html_context->doc_cp, HTML_ATTR_NONE ) )
          {
            if ( c_strcasecmp( (char*)get_attr_value( attr, "rules", html_context->doc_cp, HTML_ATTR_NONE ), "none" ) == 0 )
              *(int*)(mem_calloc( 1, 148 ) + 96) = 0;
            else
            {
              if ( c_strcasecmp( (char*)get_attr_value( attr, "rules", html_context->doc_cp, HTML_ATTR_NONE ), "groups" ) == 0 )
                *(int*)(mem_calloc( 1, 148 ) + 96) = 4;
              else
              {
                if ( c_strcasecmp( (char*)get_attr_value( attr, "rules", html_context->doc_cp, HTML_ATTR_NONE ), "rows" ) == 0 )
                  *(int*)(mem_calloc( 1, 148 ) + 96) = 1;
                else
                {
                  if ( eax == 0 )
                    return 2;
                  else
                  {
                    if ( eax == 0 )
                      return 3;
                  }
                }
              }
            }
            mem_free( (void*)get_attr_value( attr, "rules", html_context->doc_cp, HTML_ATTR_NONE ) );
          }
          *(int*)(mem_calloc( 1, 148 ) + 20) = html_context->stack.list_head_elinks;
          get_align( html_context, attr, mem_calloc( 1, 148 ) + 20 );
          *(int*)(mem_calloc( 1, 148 ) + 12) = html_context->stack.list_head_elinks;
          get_bgcolor( html_context, attr, mem_calloc( 1, 148 ) + 12 );
          l_fragment_id = 0;
          in_cell = 0;
          last_bgcolor = *(int*)(mem_calloc( 1, 148 ) + 12);
          ebp_112 = -1;
          ebp_104 = 0;
          c_span = 0;
          group = 0;
          while ( 1 )
          {
            en = &html[0];
            while ( in_cell || ( *(int*)(mem_calloc( 1, 148 ) + 128) && *(int*)(mem_calloc( 1, 148 ) + 132) == 0 ) )
            {
              if ( html[0] < eof[0] )
              {
                do
                {
                  if ( html[0] == '<' )
                  {
                    if ( html[2] <= eof[0] && ( html[1] == '?' || html[1] == '!' ) )
                    {
                      html[0] = skip_comment( &html[0], &eof[0] );
                    }
                    else
                    {
                      if ( parse_element( &html[0], &eof[0], &name, &namelen, &t_attr, &en ) )
                      {
                        html[0] = html[1];
                        break;
                      }
                      else
                      {
                        if ( namelen )
                        {
                          closing_tag = 0;
                          if ( name[0] == '/' )
                          {
                            namelen--;
                            namelen--;
                            if ( namelen - 1 )
                            {
                              name++;
                              name[0] = name;
                            }
                          }
                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/table.c";
                          errline = 611;
                          if ( elinks_strlcasecmp( &name[0], namelen - 1, "TABLE", 5, 1 ) == 0 )
                          {
                            if ( closing_tag == 0 )
                            {
                              j = 1;
                              ebp_68 = en;
                              for ( ; ebp_68 + 1 < eof[0]; ebp_68++ )
                              {
                                do
                                {
                                  if ( *(char*)(ebp_68 + 1) != '<' || parse_element( ebp_68 + 1, &eof[0], ebp_72, ebp_76, 0, ebp_68 ) )
                                  {
                                    ebp_68++;
                                    break;
                                  }
                                  else
                                  if ( ebp_68 < eof[0] )
                                  {
                                    if ( ebp_76 == 0 )
                                      continue;
                                    else
                                    {
                                      if ( *ebp_72 == '/' )
                                      {
                                        ebp_76--;
                                        if ( ebp_76 - 1 )
                                        {
                                        }
                                        else
                                        {
                                        }
                                      }
                                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/table.c";
                                      errline = 530;
                                      if ( elinks_strlcasecmp( ebp_72 + 1 + 1 + 1, ebp_76, "TABLE", 5, 1 ) == 0 )
                                      {
                                        if ( edx == 0 )
                                          j++;
                                        else
                                        {
                                          j--;
                                          if ( j == 1 )
                                            eof[0] = ebp_68;
                                            en = &eof[0];
                                        }
                                      }
                                      *ebp_68 = ebp_68;
                                    }
                                  }
                                  eof[0] = eof;
                                  en = &eof[0];
                                }
                                while ( ebp_68 < eof[0] );
                                esi = eof[0];
                              }
                            }
                            else
                            {
                              if ( c_span )
                                new_columns( ebp_92, c_span, c_width, c_al, c_val, 1 );
                              eof[0] = eof[0];
                              if ( in_cell )
                              {
                              }
                              add_table_bad_html_end( (struct table_elinks*)mem_calloc( 1, 148 ), &html[0] );
                              end[0] = &html[0];
                              if ( l_fragment_id )
                                mem_free( (void*)l_fragment_id );
                              if ( *(int*)(mem_calloc( 1, 148 ) + 60) >= 1 )
                              {
                                col = 0;
                                do
                                {
                                  if ( ecx >= 1 )
                                  {
                                    table_elinks->real_cols = table_elinks->real_cols;
                                    row = 0;
                                    for ( ; ( ( table_elinks->cells[ col + ( row * table_elinks->real_cols ) ].bits_at_60/*.1_1of4*/ & 2 ) & 255 ) == 0; table_elinks->real_cols = table_elinks->real_cols )
                                    {
                                      row++;
                                      if ( row + 1 < table_elinks->rows )
                                        continue;
                                    }
                                  }
                                  col++;
                                }
                                while ( col + 1 < table_elinks->cols );
                              }
                              else
                                return *(int*)(ebp_92 + 64);
                              if ( table_elinks->rows )
                              {
                                *(int*)(mem_calloc( 1, 148 ) + 56) = mem_calloc( ebp_68, 4 );
                                if ( mem_calloc( 1, 148 ) + 56 == 0 )
                                {
                                  end[0] = &end;
                                  end[0] = &eof[0];
                                  free_table( (struct table_elinks*)mem_calloc( 1, 148 ) );
                                  return 0;
                                }
                              }
                              else
                                *(int*)(mem_calloc( 1, 148 ) + 56) = 0;
                              if ( *(int*)(mem_calloc( 1, 148 ) + 28) >= 1 )
                              {
                                col = 0;
                                table_elinks = (struct table_elinks*)mem_calloc( 1, 148 );
                                do
                                {
                                  if ( table_elinks->columns[ col ].width != -1 )
                                    set_td_width( &table_elinks[0], col );
                                  col++;
                                }
                                while ( col + 1 < table_elinks->columns_count );
                                set_td_width( (struct table_elinks*)mem_calloc( 1, 148 ), *(int*)(mem_calloc( 1, 148 ) + 60), mem_calloc( 1, 148 ) | -1, 0 );
                                break;
                              }
                              else
                              {
                                set_td_width( (struct table_elinks*)mem_calloc( 1, 148 ), *(int*)(mem_calloc( 1, 148 ) + 60), mem_calloc( 1, 148 ) | -1, 0 );
                                break;
                              }
                            }
                          }
                          else
                          {
                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/table.c";
                            errline = 626;
                            if ( elinks_strlcasecmp( name, namelen, "CAPTION", 7, 1 ) == 0 )
                            {
                              if ( closing_tag == 0 )
                              {
                                add_table_bad_html_end( (struct table_elinks*)mem_calloc( 1, 148 ), &html[0] );
                                if ( *(int*)(mem_calloc( 1, 148 ) + 128) == 0 )
                                  *(int*)(mem_calloc( 1, 148 ) + 128) = html[0];
                              }
                              else
                              {
                                if ( *(int*)(mem_calloc( 1, 148 ) + 128) && *(int*)(mem_calloc( 1, 148 ) + 132) == 0 )
                                  *(int*)(mem_calloc( 1, 148 ) + 132) = html[0];
                              }
                            }
                            else
                            {
                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/table.c";
                              errline = 640;
                              if ( elinks_strlcasecmp( name, namelen, "COLGROUP", 8, 1 ) == 0 )
                              {
                                if ( c_span )
                                  new_columns( (struct table_elinks*)mem_calloc( 1, 148 ), c_span, c_width, c_al, c_val, 1 );
                                add_table_bad_html_end( (struct table_elinks*)mem_calloc( 1, 148 ), &html[0] );
                                c_al = -1;
                                c_val = -1;
                                c_width = -1;
                                c_span = 0;
                                if ( closing_tag == 0 )
                                {
                                  get_align( html_context, t_attr, &c_al );
                                  get_valign( html_context, t_attr, &c_val );
                                  get_column_width( t_attr, &c_width, sh, html_context );
                                  c_span = get_num( t_attr, "span", html_context->doc_cp );
                                  if ( c_span == -1 )
                                    c_span = 1;
                                  else
                                    c_span = c_span < 32769 ? 32768 : c_span;
                                }
                              }
                              else
                              {
                                if ( closing_tag == 0 )
                                {
                                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/table.c";
                                  errline = 666;
                                  if ( elinks_strlcasecmp( name, namelen, "COL", 3, 1 ) == 0 )
                                  {
                                    int sp = 1, width, al, val;
                                    add_table_bad_html_end( ebp_92, &sp );
                                    width = c_width;
                                    al = c_al;
                                    val = c_val;
                                    get_align( html_context, t_attr, &al );
                                    get_valign( html_context, t_attr, &val );
                                    get_column_width( t_attr, &width, sh, html_context );
                                    new_columns( ebp_92, sp, width, al, val, c_span != 0 );
                                    c_span = 0;
                                  }
                                }
                                if ( c_toupper( name[0] ) == 84 )
                                {
                                  name++;
                                  namelen--;
                                  namelen--;
                                  if ( namelen - 1 )
                                  {
                                    j/*.1_1of4*/ = c_toupper( name[1] );
                                    if ( closing_tag )
                                    {
                                      if ( namelen == 1 && ( j == 'D' || j == 'R' || j == 'H' ) )
                                      {
                                        if ( c_span )
                                          new_columns( (struct table_elinks*)mem_calloc( 1, 148 ), c_span, c_width, c_al, c_val, 1 );
                                        if ( in_cell )
                                        {
                                        }
                                        add_table_bad_html_end( (struct table_elinks*)mem_calloc( 1, 148 ), &html[0] );
                                        in_cell = 0;
                                      }
                                    }
                                    else
                                    {
                                      if ( namelen == 4 )
                                      {
                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/table.c";
                                        errline = 715;
                                        if ( elinks_strlcasecmp( name, 4, "HEAD", 4, 1 ) )
                                        {
                                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/table.c";
                                          errline = 716;
                                          if ( elinks_strlcasecmp( name, namelen, "BODY", 4, 1 ) )
                                          {
                                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/table.c";
                                            errline = 717;
                                            if ( elinks_strlcasecmp( name, namelen, "FOOT", 4, 1 ) )
                                              namelen = namelen;
                                          }
                                        }
                                        if ( c_span )
                                          new_columns( ebp_92, c_span, c_width, c_al, c_val, 1 );
                                        add_table_bad_html_end( ebp_92, &html[0] );
                                        group = 2;
                                      }
                                      if ( namelen == 1 )
                                      {
                                        if ( j/*.1_1of4*/ == 'R' )
                                        {
                                          if ( c_span )
                                            new_columns( ebp_92, c_span, c_width, c_al, c_val, 1 );
                                          if ( in_cell )
                                            return &html[0];
                                          add_table_bad_html_end( ebp_92, &html[0] );
                                          group = ( group - 1 ) + ( ( group < 1 ) & 1 );
                                          l_al = 0;
                                          l_val = 1;
                                          last_bgcolor = *(int*)(ebp_92 + 12);
                                          get_align( html_context, t_attr, &l_al );
                                          get_valign( html_context, t_attr, &l_val );
                                          get_bgcolor( html_context, t_attr, &last_bgcolor );
                                          if ( l_fragment_id )
                                            mem_free( (void*)l_fragment_id );
                                          ebp_112++;
                                          in_cell = 0;
                                          ebp_104 = 0;
                                          l_fragment_id = get_attr_value( t_attr, "id", html_context->doc_cp, HTML_ATTR_NONE );
                                        }
                                        else
                                        {
                                          is_header = j/*.1_1of4*/ == 'H';
                                          if ( !(_Bool)( j/*.1_1of4*/ != 'H' ) || j/*.1_1of4*/ == 'D' )
                                          {
                                            if ( c_span )
                                              new_columns( ebp_92, c_span, c_width, c_al, c_val, 1 );
                                            add_table_bad_html_end( ebp_92, &html[0] );
                                            if ( in_cell )
                                              return &html[0];
                                            if ( ebp_112 == -1 )
                                            {
                                              ebp_112 = 0;
                                              ebp_104 = 0;
                                            }
                                            while ( eax == 0 )
                                            {
                                              if ( ( *(char*)(eax + 60) & 1 ) & 255 )
                                              {
                                                if ( cell->colspan == -1 )
                                                  break;
                                                else
                                                {
                                                  ebp_104++;
                                                }
                                              }
                                              else
                                              {
                                                cell->col = ebp_104;
                                                cell->bits_at_60/*.1_1of4*/ = get_attr_value( t_attr, "id", html_context->doc_cp, HTML_ATTR_NONE ) | 1;
                                                cell->row = ebp_112;
                                                cell = &en[0];
                                                cell->align = l_al;
                                                cell->valign = l_val;
                                                cell->fragment_id = get_attr_value( t_attr, "id", html_context->doc_cp, HTML_ATTR_NONE );
                                                if ( !cell->fragment_id && l_fragment_id )
                                                {
                                                  cell->fragment_id = l_fragment_id;
                                                  l_fragment_id = 0;
                                                }
                                                cell->bits_at_60/*.1_1of4*/ = ( (int)cell->bits_at_60/*.1_1of4*/ & -5 ) | ( ( is_header << 2 ) << 2 );
                                                if ( ( (unsigned char)( ( (int)cell->bits_at_60/*.1_1of4*/ & -5 ) | ( ( is_header << 2 ) << 2 ) ) & 4 ) & 255 )
                                                  cell->align = 1;
                                                if ( group == 1 )
                                                  cell->bits_at_60/*.1_1of4*/ = ( (int)cell->bits_at_60/*.1_1of4*/ & -5 ) | ( ( is_header << 2 ) << 2 ) | 8;
                                                if ( ebp_104 < *(int*)(ebp_92 + 28) )
                                                {
                                                  if ( *(int*)(*(int*)(edi + 24) + ( eax << 4 ) + 4) != -1 )
                                                    cell->align = ecx;
                                                  if ( *(int*)(eax + 8) != -1 )
                                                    cell->valign = eax;
                                                }
                                                colspan = 1;
                                                cell->bgcolor = last_bgcolor;
                                                get_align( html_context, t_attr, &cell->align );
                                                get_valign( html_context, t_attr, &cell->valign );
                                                get_bgcolor( html_context, t_attr, &cell->bgcolor );
                                                in_cell = 1;
                                                if ( rowspan != -1 )
                                                {
                                                  in_cell = -1;
                                                  if ( rowspan == 0 )
                                                    goto B298;
                                                  else
                                                  {
                                                    in_cell = 32768;
                                                    rowspan = rowspan > 32768 ? rowspan : in_cell;
                                                    in_cell = rowspan > 32768 ? rowspan : in_cell;
                                                  }
                                                }
B298:                                                cell->colspan = colspan;
                                                cell->rowspan = in_cell;
                                                if ( colspan == 1 )
                                                {
                                                  int width = -1;
                                                  get_column_width( t_attr, &width, sh, html_context );
                                                  if ( width != -1 )
                                                    set_td_width( ebp_92, ebp_104 );
                                                }
                                                i = 1;
                                                j = *(int*)(ebp_92 + 60);
                                                while ( ( ( colspan == -1 ? i < j : i < colspan ) & 255 ) == 0 )
                                                {
                                                  struct table_cell *span_cell;
                                                  if ( span_cell[0].start )
                                                  {
                                                    if ( ( span_cell->bits_at_60/*.1_1of4*/ & 1 ) & 255 )
                                                    {
                                                      table_elinks = ebp_92;
                                                      k = 0;
                                                      while ( k < i )
                                                      {
                                                        table_elinks->cells[ k + ebp_104 + ( ebp_112 * table_elinks->real_cols ) ].colspan = i;
                                                        k++;
                                                      }
                                                      colspan = i;
                                                      break;
                                                    }
                                                    else
                                                    {
                                                      *(char*)(eax + 60) = (int)span_cell->bits_at_60/*.1_1of4*/ | 3;
                                                      i++;
                                                      *(int*)(eax + 32) = colspan;
                                                      *(int*)(eax + 36) = in_cell;
                                                      *(int*)(eax + 16) = ebp_104;
                                                      *(int*)(eax + 20) = ebp_112;
                                                    }
                                                  }
                                                }
                                                maxj = in_cell == -1 ? in_cell : *(int*)(ebp_92 + 64);
                                                if ( i * ( in_cell == -1 ? in_cell : *(int*)(ebp_92 + 64) ) <= 0x80000 )
                                                {
                                                  j = 1;
                                                  while ( j < maxj )
                                                  {
                                                    ebp_120 = 0;
                                                    while ( ebp_120 < i )
                                                    {
                                                      struct table_cell *span_cell;
                                                      if ( span_cell[0].start )
                                                      {
                                                        if ( ( span_cell->bits_at_60/*.1_1of4*/ & 1 ) & 255 )
                                                        {
                                                          int l, m;
                                                          if ( ebp_104 != span_cell->col || ebp_112 != span_cell->row )
                                                          {
                                                            in_cell = 0;
                                                            while ( in_cell < ebp_120 )
                                                            {
                                                              if ( ( ( ebp_136 * *(int*)(ebp_92 + 68) * 64 ) + ( ebp_104 * 64 ) + ( in_cell * 64 ) + *(int*)(ebp_92 + 4) ) & 1 )
                                                                edi = 0;
                                                              if ( edi & 2 )
                                                                edi = eax;
                                                              memset( *(int*)(0), 0, ( ( 63 - 2 ) >> 2 ) * 4 );
                                                              if ( !1 )
                                                                edi = eax;
                                                              if ( ( ( 63 - 2 ) & 1 ) & 255 )
                                                                edi = eax;
                                                              in_cell++;
                                                            }
                                                            while ( i > 0 )
                                                            {
                                                              in_cell = ebp_104 + 0;
                                                              while ( j > 0 )
                                                              {
                                                                return &j;
                                                              }
                                                              *(int*)(ebp_120 + 1) = ebp_120 + 1;
                                                            }
                                                          }
                                                        }
                                                        else
                                                        {
                                                          *(char*)(eax + 60) = (int)span_cell->bits_at_60/*.1_1of4*/ | 3;
                                                          *(int*)(eax + 32) = colspan;
                                                          *(int*)(eax + 36) = in_cell;
                                                          *(int*)(eax + 16) = ebp_104;
                                                          *(int*)(eax + 20) = ebp_112;
                                                        }
                                                        ebp_120++;
                                                      }
                                                      in_cell = 1;
                                                    }
                                                    j++;
                                                  }
                                                  in_cell = 1;
                                                }
                                              }
                                            }
                                            in_cell = 0;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        html[0] = en;
                        eof[0] = eof[0];
                        break;
                        while ( in_cell || ( *(int*)(mem_calloc( 1, 148 ) + 128) && *(int*)(mem_calloc( 1, 148 ) + 132) == 0 ) )
                        {
                        }
                        if ( *(int*)(mem_calloc( 1, 148 ) + 144) )
                        {
                          if ( *(int*)(( *(int*)(mem_calloc( 1, 148 ) + 140) + ( *(int*)(mem_calloc( 1, 148 ) + 144) << 3 ) ) - 4) )
                          {
                            *(int*)(edi + 256) = *(int*)(mem_calloc( 1, 148 ) + 144) + 256;
                            if ( 0 <= ( ( *(int*)(mem_calloc( 1, 148 ) + 144) + 255 ) & -256 ) )
                            {
                              if ( eax )
                                *(int*)(mem_calloc( 1, 148 ) + 144)++;
                            }
                          }
                        }
                        else
                          return *(int*)(mem_calloc( 1, 148 ) + 140);
                        *ebp_140 = 256 << 3;
                        if ( eax )
                        {
                          *ebp_128 = eax;
                          memset( ebp_128 + ( edi << 3 ), 0, edx - ( edi << 3 ) );
                          return *(int*)(mem_calloc( 1, 148 ) + 140);
                        }
                      }
                    }
                  }
                  else
                  {
                    html[0] = html[1];
                  }
                }
                while ( html[1] < eof[0] );
              }
              if ( in_cell )
              {
              }
            }
          }
        }
      }
    }
    *(int*)(mem_calloc( 1, 148 ) + 92) = 0;
  }
  else
  {
  }
}
#if 0
#endif
