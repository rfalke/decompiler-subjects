#include "table.c.h"
static double weight( int x );
static double weight2( int a );
static int bsearch_2short( short e1, short *ent1, short e2, short *ent2, int base, short *indexarray, int nent );
static int bsearch_double( double e, double *ent, short *indexarray, int nent );
static int ceil_at_intervals( int x, int step );
static int floor_at_intervals( int x, int step );
static int table_colspan( struct table *t, int row, int col );
static int table_rowspan( struct table *t, int row, int col );
static int minimum_cellspacing( int border_mode );
static int table_border_width( struct table *t );
static void check_row( struct table *t, int row );
static int maximum_visible_length( char *str, int offset );
static int maximum_visible_length_plain( char *str, int offset );
static int get_spec_cell_width( struct table *tbl, int row, int col );
static int table_rule_width( struct table *t );
static void check_cell_width( short *tabwidth, short *cellwidth, short *col, short *colspan, short maxcell, short *indexarray, int space, int dir );
static void set_integered_width( struct table *t, double *dwidth, short *iwidth );
static double correlation_coefficient( double sxx, double syy, double sxy );
static double correlation_coefficient2( double sxx, double syy, double sxy );
static double recalc_width( double old, double swidth, int cwidth, double sxx, double syy, double sxy, int is_inclusive );
static int check_compressible_cell( struct table *t, MAT *minv, double *newwidth, double *swidth, short *cwidth, double totalwidth, double *Sxx, int icol, int icell, double sxx, int corr );
static void make_caption( struct table *t, struct html_feed_environ *h_env );
static void check_minimum0( struct table *t, int min );
static int setwidth0( struct table *t, struct table_mode *mode );
static void setwidth( struct table *t, struct table_mode *mode );
static void addcontentssize( struct table *t, int width );
static void clearcontentssize( struct table *t, struct table_mode *mode );
static void begin_cell( struct table *t, struct table_mode *mode );
static void feed_table_inline_tag( struct table *tbl, char *line, struct table_mode *mode, int width );
static void feed_table_block_tag( struct table *tbl, char *line, struct table_mode *mode, int indent, int cmd );
static void table_close_select( struct table *tbl, struct table_mode *mode, int width );
static void table_close_textarea( struct table *tbl, struct table_mode *mode, int width );
static void table_close_anchor0( struct table *tbl, struct table_mode *mode );
static int feed_table_tag( struct table *tbl, char *line, struct table_mode *mode, int width, struct parsed_tag *tag );
static void correct_table_matrix2( struct table *t, int col, int cspan, double s, double b );
static void correct_table_matrix3( struct table *t, int col, char *flags, double s, double b );
static void correct_table_matrix4( struct table *t, int col, int cspan, char *flags, double s, double b );
static void set_table_matrix0( struct table *t, int maxwidth );
static double Tiny = 0.000000000000;
int symbol_width;
int symbol_width0;
int visible_length_offset;
double weight( int x )
{
  double fp7;
  return;
}
double weight2( int a )
{
  return ( ( (double)( a ) / (double)( COLS ) ) * 4.000000000000 ) + 1.000000000000;
}
int bsearch_2short( short e1, short *ent1, short e2, short *ent2, int base, short *indexarray, int nent )
{
  int n = nent;
  int k = 0;
  int e = ( base * e1 ) + e2;
  while ( n >= 1 )
  {
    int nn = n / 2;
    int idx = indexarray[ nn + k ];
    int ne = ( base * ent1[ idx ] ) + ent2[ idx ];
    if ( ne == e )
    {
      k += nn;
      break;
    }
    else
    {
      if ( ne < e )
      {
        n += ~nn;
        k += nn + 1;
      }
      else
      {
        n = nn;
      }
    }
  }
  return k;
}
int bsearch_double( double e, double *ent, short *indexarray, int nent )
{
  double fp7;
  int n = nent;
  int k = 0;
  while ( n >= 1 )
  {
    int nn = n / 2;
    int idx = indexarray[ nn + k ];
    double ne = ent[ idx ];
    e = e;
    if ( ( ( ( ( ne <> e ) & 69 ) >> 6 ) & 1 ) == 1 )
    {
      k += nn;
      break;
    }
    else
    {
      e = e;
      if ( (bit)( 0 ) )
      {
        n = nn;
      }
      else
      {
        n += ~nn;
        k += nn + 1;
      }
    }
  }
  return k;
}
int ceil_at_intervals( int x, int step )
{
  int mo = x % step;
  if ( mo >= 1 )
  {
    x += step - mo;
  }
  else
  if ( mo < 0 )
  {
    x -= mo;
  }
  return x;
}
int floor_at_intervals( int x, int step )
{
  int mo = x % step;
  if ( mo >= 1 )
  {
    x -= mo;
  }
  else
  if ( mo < 0 )
  {
    x += step - mo;
  }
  return x;
}
int table_colspan( struct table *t, int row, int col )
{
  int i = col + 1;
  for ( ; i <= t->maxcol && ( t->tabattr[ row ][ i ] & 1 ) != 0; i++ )
  {
    //i++;
  }
  return i - col;
}
int table_rowspan( struct table *t, int row, int col )
{
  int eax;
  int i;
  if ( t->tabattr[ row ] == 0 )
  {
  }
  else
  {
    i = row + 1;
    for ( ; i <= t->maxrow && t->tabattr[ i ] != 0 && ( t->tabattr[ i ][ col ] & 2 ) != 0; i++ )
    {
      //i++;
    }
  }
  return i - row;
}
int minimum_cellspacing( int border_mode )
{
  int eax;
  if ( border_mode != 0 )
  {
    if ( border_mode >= 0 && border_mode <= 3 )
    {
      symbol_width/*error:'i'*/ = symbol_width;
    }
    else
    {
    }
  }
  else
  {
  }
  return symbol_width;
}
int table_border_width( struct table *t )
{
  int eax;
  switch ( t->border_mode )
  {
    break;
  default:
    break;
  case 1:
  case 2:
    break;
  case 0:
  case 3:
    break;
  }
  return ( t->cellpadding * 2 ) + ( symbol_width * 2 ) + ( t->cellspacing * t->maxcol );
}
struct table *newTable( void )
{
  struct table *t = GC_malloc( 716 );
  int i, j;
  t->max_rowsize = 50;
  t->tabdata = GC_malloc( 200 );
  t->tabattr = GC_malloc( 200 );
  t->tabheight = GC_malloc_atomic( 100 );
  t->tabidvalue = GC_malloc( 200 );
  t->tridvalue = GC_malloc( 200 );
  i = 0;
  for ( ; i <= 49; i++ )
  {
    t->tabdata[ i ] = 0;
    t->tabattr[ i ] = 0;
    t->tabheight[ i ] = 0;
    t->tabidvalue[ i ] = 0;
    t->tridvalue[ i ] = 0;
    //i++;
  }
  j = 0;
  for ( ; j <= 49; j++ )
  {
    t->tabwidth[ j ] = 0;
    t->minimum_width[ j ] = 0;
    t->fixed_width[ j ] = 0;
    //j++;
  }
  t->cell.maxcell = -1;
  t->cell.icell = -1;
  t->ntable = 0;
  t->tables_size = 0;
  t->tables = 0;
  t->matrix = 0;
  t->vector = 0;
  t->linfo.prevchar = Strnew_size( 8 );
  Strcopy_charp_n( t->linfo.prevchar, "", 0 );
  t->trattr = 0;
  t->caption = Strnew( );
  t->suspended_data = 0;
  t->id = 0;
  return t;
}
void check_row( struct table *t, int row )
{
  int i, r;
  GeneralList ***tabdata;
  table_attr **tabattr;
  short *tabheight;
  Str **tabidvalue;
  Str *tridvalue;
  if ( t->max_rowsize <= row )
  {
    r = (unsigned char)( ( row + 1 < ( t->max_rowsize * 2 ) ) ^ 1 ) ? t->max_rowsize * 2 : row + 1;
    tabdata = GC_malloc( r << 2 );
    tabattr = GC_malloc( r << 2 );
    tabheight = GC_malloc_atomic( r * 2 );
    tabidvalue = GC_malloc( r << 2 );
    tridvalue = GC_malloc( r << 2 );
    i = 0;
    for ( ; i < t->max_rowsize; i++ )
    {
      tabdata[ i ] = t->tabdata[ i ];
      tabattr[ i ] = t->tabattr[ i ];
      tabheight[ i ] = t->tabheight[ i ];
      tabidvalue[ i ] = t->tabidvalue[ i ];
      tridvalue[ i ] = t->tridvalue[ i ];
      //i++;
    }
    for ( ; i < r; i++ )
    {
      tabdata[ i ] = 0;
      tabattr[ i ] = 0;
      tabheight[ i ] = 0;
      tabidvalue[ i ] = 0;
      tridvalue[ i ] = 0;
      //i++;
    }
    t->tabdata = tabdata;
    t->tabattr = tabattr;
    t->tabheight = tabheight;
    t->tabidvalue = tabidvalue;
    t->tridvalue = tridvalue;
    t->max_rowsize = r;
  }
  if ( t->tabdata[ row ] == 0 )
  {
    t->tabdata[ row ] = GC_malloc( 200 );
    t->tabattr[ row ] = GC_malloc_atomic( 100 );
    t->tabidvalue[ row ] = GC_malloc( 200 );
    i = 0;
    for ( ; i <= 49; i++ )
    {
      t->tabdata[ row ][ i ] = 0;
      t->tabattr[ row ][ i ] = 0;
      t->tabidvalue[ row ][ i ] = 0;
      //i++;
    }
  }
  return;
}
void pushdata( struct table *t, int row, int col, char *data )
{
  int eax;
  check_row( t, row );
  if ( t->tabdata[ row ][ col ] == 0 )
  {
    t->tabdata[ row ][ col ] = newGeneralList( );
  }
  pushValue( t->tabdata[ row ][ col ], allocStr( data == 0 ? "" : data, -1 ) );
  return;
}
void suspend_or_pushdata( struct table *tbl, char *line )
{
  int eax;
  if ( ( tbl->flag & 4 ) != 0 )
    pushdata( tbl, tbl->row, tbl->col, line );
  else
  if ( tbl->suspended_data == 0 )
  {
    tbl->suspended_data = newGeneralList( );
  }
  pushValue( &tbl->suspended_data->first->ptr[0]/*error:'c'*/, allocStr( line == 0 ? "" : line, -1 ) );
  return;
}
int visible_length( char *str )
{
  int eax;
  int len = 0, n, max_len = 0;
  int status = 0;
  int prev_status = status;
  Str tagbuf = Strnew( );
  char *t, *r2;
  int amp_len = 0;
  t = str;
  for ( ; ( str[0] & 255 ) == 0; str = &str[ n ] )
  {
    prev_status = status;
    if ( next_status( str[0], &status ) != 0 )
    {
      len += ( WcOption.use_wide & 255 ) == 0 ? ( WTF_WIDTH_MAP[ str[0] ] & 255 ) != 0 : WTF_WIDTH_MAP[ str[0] ];
      n = WTF_LEN_MAP[ str[0] ];
    }
    else
      n = 1;
    if ( status == 1 )
    {
      Strclear( tagbuf );
      Strcat_charp_n( tagbuf, str, n );
    }
    if ( status == 2 || status == 4 || status == 3 || status == 5 || status == 15 )
    {
      Strcat_charp_n( tagbuf, str, n );
    }
    if ( status == 6 )
    {
      if ( prev_status == 0 )
      {
        Strclear( tagbuf );
        len--;
        amp_len = 0;
        //str = &str[ n ];
      }
      else
      {
        Strcat_charp_n( tagbuf, str, n );
        amp_len++;
      }
    }
    else
    {
      if ( status == 0 && prev_status == 6 )
      {
        Strcat_charp_n( tagbuf, str, n );
        r2 = tagbuf->ptr;
        t = getescapecmd( &r2 );
        if ( ( r2[0] & 255 ) == 0 && ( t[0] == 13 || t[0] == 10 ) )
        {
          if ( max_len < len )
            max_len = len;
          len = 0;
        }
        else
        {
          len += wtf_strwidth( (wc_uchar*)t ) + wtf_strwidth( (wc_uchar*)r2 );
        }
      }
      else
      {
        if ( status != 0 || ( prev_status != 2 && prev_status != 1 && prev_status != 5 && prev_status != 15 ) )
        {
          if ( str[0] == 9 )
          {
            len--;
            do
            {
              len++;
            }
            while ( ( visible_length_offset + len ) % Tabstop != 0 );
          }
          else
          {
            if ( str[0] == 13 || str[0] == 10 )
            {
              len--;
              if ( max_len < len )
                max_len = len;
              len = 0;
            }
          }
        }
      }
    }
  }
}
int visible_length_plain( char *str )
{
  int eax;
  int len = 0, max_len = 0;
  while ( ( str[0] & 255 ) != 0 )
  {
    if ( str[0] == 9 )
    {
      do
      {
        len++;
      }
      while ( ( visible_length_offset + len ) % Tabstop != 0 );
      str++;
    }
    else
    {
      if ( str[0] == 13 || str[0] == 10 )
      {
        if ( max_len < len )
          max_len = len;
        len = 0;
        str++;
      }
      else
      {
        len += ( WcOption.use_wide & 255 ) == 0 ? ( WTF_WIDTH_MAP[ str[0] ] & 255 ) != 0 : WTF_WIDTH_MAP[ str[0] ];
        str = &str[ WTF_LEN_MAP[ str[0] ] ];
      }
    }
  }
  return (unsigned char)( ( max_len < len ) ^ 1 ) ? len : max_len;
}
int maximum_visible_length( char *str, int offset )
{
  visible_length_offset = offset;
  return visible_length( str );
}
int maximum_visible_length_plain( char *str, int offset )
{
  visible_length_offset = offset;
  return visible_length_plain( str );
}
void align( TextLine *lbuf, int width, int mode )
{
  int i, l, l1, l2;
  Str buf;
  Str line = lbuf->line;
  if ( line->length == 0 )
  {
    i = 0;
    for ( ; i < width; i++ )
    {
      if ( line->area_size <= line->length + 1 )
        Strgrow( line );
      line->ptr[ line->length ] = ' ';
      line->length++;
      line->ptr[ line->length ] = 0;
      //i++;
    }
    lbuf->pos = width;
  }
  else
  {
    buf = Strnew( );
    l = width - lbuf->pos;
    switch ( mode )
    {
    case 0:
      l1 = l / 2;
      l2 = l - l1;
      i = 0;
      for ( ; i < l1; i++ )
      {
        if ( buf->area_size <= buf->length + 1 )
          Strgrow( buf );
        buf->ptr[ buf->length ] = ' ';
        buf->length++;
        buf->ptr[ buf->length ] = 0;
        //i++;
      }
      Strcat( buf, line );
      i = 0;
      for ( ; i < l2; i++ )
      {
        if ( buf->area_size <= buf->length + 1 )
          Strgrow( buf );
        buf->ptr[ buf->length ] = ' ';
        buf->length++;
        buf->ptr[ buf->length ] = 0;
        //i++;
      }
      break;
    case 1:
      Strcat( buf, line );
      i = 0;
      for ( ; i < l; i++ )
      {
        if ( buf->area_size <= buf->length + 1 )
          Strgrow( buf );
        buf->ptr[ buf->length ] = ' ';
        buf->length++;
        buf->ptr[ buf->length ] = 0;
        //i++;
      }
      break;
    case 2:
      i = 0;
      for ( ; i < l; i++ )
      {
        if ( buf->area_size <= buf->length + 1 )
          Strgrow( buf );
        buf->ptr[ buf->length ] = ' ';
        buf->length++;
        buf->ptr[ buf->length ] = 0;
        //i++;
      }
      Strcat( buf, line );
      break;
    default:
      break;
    }
    lbuf->line = buf;
    if ( lbuf->pos < width )
    {
      lbuf->pos = width;
    }
  }
  return;
}
void print_item( struct table *t, int row, int col, int width, Str buf )
{
  int alignment;
  TextLine *lbuf;
  if ( t->tabdata[ row ] != 0 )
  {
    lbuf = popValue( t->tabdata[ row ][ col ] );
  }
  else
    lbuf = 0;
  if ( lbuf != 0 )
  {
    check_row( t, row );
    alignment = 0;
    if ( ( t->tabattr[ row ][ col ] & 48 ) == 0 )
      alignment = 1;
    else
    if ( ( t->tabattr[ row ][ col ] & 48 ) == 32 )
      alignment = 2;
    else
    if ( ( t->tabattr[ row ][ col ] & 48 ) == 16 )
      alignment = 0;
    align( lbuf, width, alignment );
    Strcat( buf, lbuf->line );
  }
  else
  {
    lbuf = newTextLine( 0, 0 );
    align( lbuf, width, 0 );
    Strcat( buf, lbuf->line );
    return;
  }
}
void print_sep( struct table *t, int row, int type, int maxcol, Str buf )
{
  int eax;
  int edx;
  int forbid;
  int rule_mode;
  int i, k, l, m;
  if ( row >= 0 )
    check_row( t, row );
  check_row( t, row + 1 );
  if ( ( type == 0 || type == 2 ) && t->border_mode == 2 )
    rule_mode = 2;
  else
    rule_mode = 1;
  forbid = 1;
  if ( type == 0 )
    forbid |= 2;
  else
  if ( type == 2 )
    forbid |= 8;
  else
  if ( ( t->tabattr[ row + 1 ][0] & 2 ) != 0 )
    forbid |= 4;
  if ( t->border_mode != 3 )
  {
    push_symbol( buf, t->border_mode == 2 ? forbid + 16 : forbid, symbol_width, 1 );
  }
  i = 0;
  for ( ; i <= maxcol; i++ )
  {
    forbid = 10;
    if ( type != 2 && ( t->tabattr[ row + 1 ][ i ] & 2 ) != 0 )
    {
      if ( ( t->tabattr[ row + 1 ][ i ] & 1 ) != 0 )
      {
        if ( i < maxcol )
        {
          forbid = 0;
          if ( type == 0 )
            forbid |= 2;
          else
          if ( ( t->tabattr[ row ][ i + 1 ] & 1 ) != 0 )
            forbid |= 2;
          if ( type == 2 )
            forbid |= 8;
          else
          {
            if ( ( t->tabattr[ row + 1 ][ i + 1 ] & 1 ) != 0 )
              forbid |= 8;
            if ( ( t->tabattr[ row + 1 ][ i + 1 ] & 2 ) != 0 )
              forbid |= 4;
            if ( ( t->tabattr[ row + 1 ][ i ] & 2 ) != 0 )
              forbid |= 1;
          }
          if ( forbid != 15 )
          {
            push_symbol( buf, rule_mode == 2 ? forbid + 16 : forbid, symbol_width, 1 );
          }
        }
        //i++;
      }
      else
      {
        k = row;
        for ( ; k >= 0 && t->tabattr[ k ] != 0 && ( t->tabattr[ k ][ i ] & 2 ) != 0; k-- )
        {
          //k--;
        }
        m = t->tabwidth[ i ] + ( t->cellpadding * 2 );
        l = i + 1;
        for ( ; l <= t->maxcol && ( t->tabattr[ row ][ l ] & 1 ) != 0; l++ )
        {
          m += t->cellspacing + t->tabwidth[ l ];
          //l++;
        }
        print_item( t, k, i, m, buf );
      }
    }
    else
    {
      int w = t->tabwidth[ i ] + ( t->cellpadding * 2 );
      if ( symbol_width == 2 )
        w = ( w + 1 ) / symbol_width;
      push_symbol( buf, rule_mode == 2 ? forbid + 16 : forbid, symbol_width, w );
    }
  }
  forbid = 4;
  if ( type == 0 )
    forbid |= 2;
  if ( type == 2 )
    forbid |= 8;
  if ( ( t->tabattr[ row + 1 ][ maxcol ] & 2 ) != 0 )
    forbid |= 1;
  if ( t->border_mode != 3 )
  {
    push_symbol( buf, t->border_mode == 2 ? forbid + 16 : forbid, symbol_width, 1 );
    return;
  }
  else
  {
    return;
  }
}
int get_spec_cell_width( struct table *tbl, int row, int col )
{
  int i, w = tbl->tabwidth[ col ];
  i = col + 1;
  for ( ; i <= tbl->maxcol; i++ )
  {
    check_row( tbl, row );
    if ( ( tbl->tabattr[ row ][ i ] & 1 ) == 0 )
    {
      break;
    }
    else
    {
      w += tbl->cellspacing + tbl->tabwidth[ i ];
      //i++;
    }
  }
  return w;
}
void do_refill( struct table *tbl, int row, int col, int maxlimit )
{
  int ah;
  TextList *orgdata;
  TextListItem *l;
  struct readbuffer obuf;
  struct html_feed_environ h_env;
  struct environment envs[20];
  int colspan, icell;
  if ( tbl->tabdata[ row ] != 0 )
  {
    if ( tbl->tabdata[ row ][ col ] == 0 )
    {
    }
    else
    {
      orgdata = &tbl->tabdata[ row ][ col ]->first->ptr[0]/*error:'v'*/;
      tbl->tabdata[ row ][ col ] = newGeneralList( );
      init_henv( &h_env, &obuf, envs, 20, &tbl->tabdata[ row ][ col ]->first->ptr[0]/*error:'v'*/, get_spec_cell_width( tbl, row, col ), 0 );
      obuf.flag |= 131072;
      if ( maxlimit < h_env.limit )
        h_env.limit = maxlimit;
      if ( tbl->border_mode != 0 && tbl->vcellpadding >= 1 )
        do_blankline( &h_env, &obuf, 0, 0, h_env.limit );
      l = orgdata->first;
      for ( ; l == 0; l = l->next )
      {
        if ( strncasecmp( l->ptr, "&lt;table_alt", 10 ) == 0 && ( l->ptr[10] == '>' || ( MYCTYPE_MAP[ l->ptr[10] ] & 2 ) != 0 ) )
        {
          int id = -1;
          char *p = l->ptr;
          struct parsed_tag *tag = parse_tag( &p, 1 );
          if ( tag != 0 )
            parsedtag_get_value( tag, 64, &id );
          if ( id < 0 )
          {
            //l = l->next;
          }
          else
          {
            if ( tbl->ntable <= id )
            {
            }
            else
            {
              int alignment;
              TextLineListItem *ti;
              struct table *t = tbl->tables[ id ].ptr;
              int limit = t->total_width + tbl->tables[ id ].indent;
              tbl->tables[ id ].ptr = 0;
              save_fonteffect( &h_env, h_env.obuf );
              flushline( &h_env, &obuf, 0, 2, h_env.limit );
              if ( t->vspace >= 1 && ( obuf.flag & 8192 ) == 0 )
                do_blankline( &h_env, &obuf, 0, 0, h_env.limit );
              if ( ( h_env.obuf->flag & 112 ) == 32 )
                alignment = 0;
              else
              if ( ( h_env.obuf->flag & 112 ) == 64 )
                alignment = 2;
              else
                alignment = 1;
              if ( alignment != 1 )
              {
                ti = tbl->tables[ id ].buf->first;
                for ( ; ti == 0; ti = ti->next )
                {
                  align( ti->ptr, h_env.limit, alignment );
                  //ti = ti->next;
                }
              }
              appendGeneralList( &h_env.buf->first->ptr->line->ptr[0]/*error:'c'*/, &tbl->tables[ id ].buf->first->ptr->line->ptr[0]/*error:'c'*/ );
              if ( h_env.maxlimit < limit )
                h_env.maxlimit = limit;
              restore_fonteffect( &h_env, h_env.obuf );
              obuf.flag = obuf.flag;
              h_env.blank_lines = 0;
              if ( t->vspace < 1 )
              {
              }
              else
              {
                do_blankline( &h_env, &obuf, 0, 0, h_env.limit );
                obuf.flag = obuf.flag;
              }
            }
          }
        }
        else
        {
          HTMLlineproc0( l->ptr, &h_env, 1 );
        }
      }
    }
  }
  else
  {
  }
  return;
}
int table_rule_width( struct table *t )
{
  int eax;
  return t->border_mode == 0 ? 1 : symbol_width;
}
void check_cell_width( short *tabwidth, short *cellwidth, short *col, short *colspan, short maxcell, short *indexarray, int space, int dir )
{
  int i, j, k = 0, bcol, ecol;
  int swidth, width;
  for ( ; k <= maxcell; k++ )
  {
    j = indexarray[ k ];
    if ( cellwidth[ j ] <= 0 )
    {
    }
    else
    {
      bcol = col[ j ];
      ecol = bcol + colspan[ j ];
      swidth = 0;
      i = bcol;
      for ( ; i < ecol; i++ )
      {
        swidth += tabwidth[ i ];
        //i++;
      }
      width = cellwidth[ j ] + ( space * ( 1 - colspan[ j ] ) );
      if ( swidth < width )
      {
        int w = ( width - swidth ) / colspan[ j ];
        int r = ( width - swidth ) % colspan[ j ];
        i = bcol;
        for ( ; i < ecol; i++ )
        {
          tabwidth[ i ] = w + tabwidth[ i ];
          //i++;
        }
        if ( dir == 1 && r >= 1 )
          r = colspan[ j ];
        i = 1;
        for ( ; i <= r; i++ )
        {
          tabwidth[ ecol - i ] = tabwidth[ ecol - i ] + 1;
          //i++;
        }
      }
    }
    //k++;
  }
  return;
}
void check_minimum_width( struct table *t, short *tabwidth )
{
  int i;
  struct table_cell *cell = &t->cell;
  i = 0;
  for ( ; i <= t->maxcol; i++ )
  {
    if ( tabwidth[ i ] < t->minimum_width[ i ] )
      tabwidth[ i ] = t->minimum_width[ i ];
    //i++;
  }
  check_cell_width( tabwidth, &cell->minimum_width[0], (short*)cell, &cell->colspan[0], cell->maxcell, &cell->index[0], t->cellspacing, 0 );
  return;
}
void check_maximum_width( struct table *t )
{
  struct table_cell *cell = &t->cell;
  int i, j, bcol, ecol;
  int swidth, width;
  cell->necell = 0;
  j = 0;
  for ( ; j <= cell->maxcell; j++ )
  {
    bcol = cell->col[ j ];
    ecol = bcol + cell->colspan[ j ];
    swidth = 0;
    i = bcol;
    for ( ; i < ecol; i++ )
    {
      swidth += t->tabwidth[ i ];
      //i++;
    }
    width = cell->width[ j ] + ( t->cellspacing * ( 1 - cell->colspan[ j ] ) );
    if ( swidth < width )
    {
      cell->eindex[ cell->necell ] = j;
      cell->necell = cell->necell + 1;
    }
    //j++;
  }
  return;
}
void set_integered_width( struct table *t, double *dwidth, short *iwidth )
{
  double fp7;
  int i, j, k, n, bcol, ecol, step;
  short *indexarray;
  char *fixed;
  double *mod;
  double sum = 0.000000000000, x = 0.000000000000;
  struct table_cell *cell = &t->cell;
  int rulewidth = table_rule_width( t );
  indexarray = GC_malloc_atomic( ( t->maxcol * 2 ) + 2 );
  mod = GC_malloc_atomic( ( t->maxcol * 8 ) + 8 );
  i = 0;
  for ( ; i <= t->maxcol; i++ )
  {
    iwidth[ i ] = ceil_at_intervals( (int)( ceil( (int)( &(void*)dwidth[ i ] & 0xFFFFFFFF ) ) ), rulewidth );
    mod[ i ] = (double)( iwidth[ i ] ) - dwidth[ i ];
    //i++;
  }
  sum = 0.000000000000;
  k = 0;
  for ( ; k <= t->maxcol; k++ )
  {
    x = mod[ k ];
    sum += x;
    i = bsearch_double( x, mod, indexarray, k );
    if ( i < k )
    {
      int ii = k;
      for ( ; i < ii; ii-- )
      {
        indexarray[ ii ] = indexarray[ ii - 1 ];
        //ii--;
      }
    }
    indexarray[ i ] = k;
    //k++;
  }
  fixed = GC_malloc_atomic( t->maxcol + 1 );
  bzero( fixed, t->maxcol + 1 );
  step = 0;
  for ( ; step <= 1; step++ )
  {
    i = 0;
    for ( ; i <= t->maxcol; i += n )
    {
      int nn;
      char *idx;
      double nsum;
      sum = sum;
      if ( !(bit)( 0 ) )
      {
        break;
      }
      else
      {
        n = 0;
        for ( ; n + i <= t->maxcol; n++ )
        {
          int ii = indexarray[ n + i ];
          if ( n == 0 )
            x = mod[ ii ];
          else
          if ( ( 0 & 255 ) != 0 )
          {
            k = 0;
            for ( ; k < n; k++ )
            {
              int ii = indexarray[ k + i ];
              if ( fixed[ ii ] <= 1 && iwidth[ ii ] - rulewidth < t->minimum_width[ ii ] )
                fixed[ ii ] = 2;
              if ( fixed[ ii ] <= 0 && iwidth[ ii ] - rulewidth < t->tabwidth[ ii ] && ( 0 & 255 ) != 0 )
                fixed[ ebp_76 ] = 1;
              //k++;
            }
            idx = GC_malloc_atomic( n );
            k = 0;
            for ( ; k < cell->maxcell; k++ )
            {
              int kk, w, width, m;
              j = cell->index[ k ];
              bcol = cell->col[ j ];
              ecol = bcol + cell->colspan[ j ];
              m = 0;
              kk = 0;
              for ( ; kk < n; kk++ )
              {
                int ii = indexarray[ kk + i ];
                if ( bcol <= ii && ii < ecol )
                {
                  idx[ m ] = ii;
                  m++;
                }
                //kk++;
              }
              if ( m == 0 )
              {
              }
              else
              {
                width = t->cellspacing * ( cell->colspan[ j ] - 1 );
                kk = bcol;
                for ( ; kk < ecol; kk++ )
                {
                  width += iwidth[ kk ];
                  //kk++;
                }
                w = 0;
                kk = 0;
                for ( ; kk < m; kk++ )
                {
                  if ( fixed[ idx[ kk ] ] <= 1 )
                    w += rulewidth;
                  //kk++;
                }
                if ( width - w < cell->minimum_width[ j ] )
                {
                  kk = 0;
                  for ( ; kk < m; kk++ )
                  {
                    if ( fixed[ idx[ kk ] ] <= 1 )
                      fixed[ idx[ kk ] ] = 2;
                    //kk++;
                  }
                }
                w = 0;
                kk = 0;
                for ( ; kk < m; kk++ )
                {
                  if ( fixed[ idx[ kk ] ] <= 0 && ( 0 & 255 ) != 0 )
                    w += rulewidth;
                  //kk++;
                }
                if ( width - w < cell->width[ j ] )
                {
                  kk = 0;
                  for ( ; kk < m; kk++ )
                  {
                    if ( fixed[ idx[ kk ] ] <= 0 && ( 0 & 255 ) != 0 )
                      fixed[ idx[ kk ] ] = 1;
                    //kk++;
                  }
                }
              }
              //k++;
            }
            nn = 0;
            k = 0;
            for ( ; k < n; k++ )
            {
              int ii = indexarray[ k + i ];
              if ( fixed[ ii ] <= step )
                nn++;
              //k++;
            }
            nsum = nsum = sum - (double)( rulewidth * nn );
            if ( !(bit)( 0 ) && ( ( ( ( abs( nsum ) <> abs( sum ) ) & 1 ) == 0 ) & 255 ) != 0 )
            {
              break;
            }
            else
            {
              k = 0;
              for ( ; k < n; k++ )
              {
                int ii = indexarray[ k + i ];
                if ( fixed[ ii ] <= step )
                {
                  iwidth[ ii ] -= (unsigned short)( rulewidth );
                  fixed[ ebp_104 ] = 3;
                }
                //k++;
              }
              sum = nsum;
              i += n;
              break;
            }
          }
          //n++;
        }
        k = 0;
      }
    }
    //step++;
  }
  return;
}
double correlation_coefficient( double sxx, double syy, double sxy )
{
  double fp6;
  double fp7;
  double coe, tmp = syy * sxx;
  if ( !(bit)( 0 ) )
    tmp = Tiny;
  if ( ( ( ( ( sqrt( tmp ) <> sqrt( tmp ) ) & 69 ) >> 2 ) & 1 ) != 1 )
  {
    if ( !1 )
    {
    }
    else
    {
      coe = 0.000000000000 / 0.000000000000;
      if ( !(bit)( 0 ) )
      {
      }
      else
      {
        coe = coe;
        if ( !(bit)( 0 ) )
        {
        }
        else
        {
          coe = coe;
        }
      }
      return;
    }
  }
  else
  {
  }
  sqrt( (int)( &(void*)tmp & 0xFFFFFFFF ) );
  coe = 0.000000000000 / 0.000000000000;
}
double correlation_coefficient2( double sxx, double syy, double sxy )
{
  double fp6;
  double fp7;
  double coe, tmp = sxx * ( syy + sxx + ( sxy * -2.000000000000 ) );
  if ( !(bit)( 0 ) )
    tmp = Tiny;
  coe = ( sxx - sxy ) / sqrt( (int)( &(void*)tmp & 0xFFFFFFFF ) );
  if ( !(bit)( 0 ) )
  {
  }
  else
  {
    coe = coe;
    if ( !(bit)( 0 ) )
    {
    }
    else
    {
      coe = coe;
    }
  }
  return;
}
double recalc_width( double old, double swidth, int cwidth, double sxx, double syy, double sxy, int is_inclusive )
{
  double fp6;
  double fp7;
  double delta = swidth - (double)( cwidth );
  double rat = sxy / sxx;
  double coe = correlation_coefficient( sxx, syy, sxy ), w, ww;
  old = old;
  if ( !(bit)( 0 ) )
    old = 0.000000000000;
  if ( !(bit)( 0 ) )
  {
    old = old;
  }
  else
  {
    w = rat * old;
    ww = delta;
    if ( !(bit)( 0 ) )
    {
      double wmin = sqrt( syy * ( 1.000000000000 - ( coe * coe ) ) ) * 0.005000000000;
      swidth = swidth;
      if ( !(bit)( 0 ) && cwidth >= 1 && is_inclusive != 0 )
      {
        double coe1 = correlation_coefficient2( sxx, syy, sxy );
        if ( !(bit)( 0 ) || !(bit)( 0 ) )
        {
        }
      }
      if ( !(bit)( 0 ) )
        wmin = 0.050000000000;
      ww = ww;
      if ( !(bit)( 0 ) )
        ww = 0.000000000000;
      ww += wmin;
    }
    else
    {
      double wmin = sqrt( (int)( &(void*)syy & 0xFFFFFFFF ) ) * 0.005000000000 * abs( coe );
      if ( !(bit)( 0 ) )
      {
        old = old;
      }
      else
      {
        if ( !(bit)( 0 ) )
          wmin = 0.010000000000;
        if ( !(bit)( 0 ) )
          ww = 0.000000000000;
        ww -= wmin;
      }
    }
    ww = ww;
    if ( !(bit)( 0 ) )
    {
    }
    else
    {
      old = old;
    }
  }
  return;
}
int check_compressible_cell( struct table *t, MAT *minv, double *newwidth, double *swidth, short *cwidth, double totalwidth, double *Sxx, int icol, int icell, double sxx, int corr )
{
  int eax;
  double fp7;
  struct table_cell *cell = &t->cell;
  int i, j, k, m, bcol, ecol, span;
  double delta, owidth;
  double dmax, dmin, sxy;
  int rulewidth = table_rule_width( t );
  sxx = sxx;
  if ( !(bit)( 0 ) )
  {
    corr/*error:'i'*/ = corr;
  }
  else
  {
    if ( icol >= 0 )
    {
      owidth = newwidth[ icol ];
      delta = newwidth[ icol ] - (double)( t->tabwidth[ icol ] );
      bcol = icol;
      ecol = bcol + 1;
    }
    else
    if ( icell >= 0 )
    {
      owidth = swidth[ icell ];
      delta = swidth[ icell ] - (double)( cwidth[ icell ] );
      bcol = cell->col[ icell ];
      ecol = bcol + cell->colspan[ icell ];
    }
    else
    {
      owidth = totalwidth;
      delta = totalwidth;
      bcol = 0;
      ecol = t->maxcol + 1;
    }
    dmin = delta;
    dmax = -1.000000000000;
    k = 0;
    for ( ; k <= cell->maxcell; k++ )
    {
      int bcol1, ecol1;
      int is_inclusive = 0;
      dmin = dmin;
      if ( ( ( ( ( 0.000000000000 <> dmin ) & 1 ) == 0 ) & 255 ) != 0 )
      {
        if ( !(bit)( 0 ) && !(bit)( 0 ) )
          dmin = dmax;
        span = ecol - bcol;
        if ( ( t->maxcol == span && ( ( ( ( dmin <> 0.000000000000 ) & 1 ) == 0 ) & 255 ) != 0 ) || ( t->maxcol != span && ( 0 & 255 ) != 0 ) )
        {
          int nwidth = ceil_at_intervals( (int)( floor( ( owidth - dmin ) + 0.500000000000 ) ), rulewidth );
          correct_table_matrix( t, bcol, ecol - bcol, nwidth, 1.000000000000 );
          corr++;
        }
        corr/*error:'i'*/ = corr;
        break;
      }
      else
      {
        j = cell->index[ k ];
        if ( j == icell )
        {
        }
        else
        {
          bcol1 = cell->col[ j ];
          ecol1 = bcol1 + cell->colspan[ j ];
          sxy = 0.000000000000;
          m = bcol1;
          for ( ; m < ecol1; m++ )
          {
            i = bcol;
            for ( ; i < ecol; i++ )
            {
              sxy += minv[0].me[ m + ( minv->dim * i ) ];
              //i++;
            }
            //m++;
          }
          if ( bcol <= bcol1 && ecol1 <= ecol )
            is_inclusive = 1;
          if ( !(bit)( 0 ) )
          {
            dmin = recalc_width( dmin, swidth[ j ], cwidth[ j ], sxx, Sxx[ j ], sxy, is_inclusive );
          }
          else
          {
            dmax = recalc_width( dmax, swidth[ j ], cwidth[ j ], sxx, Sxx[ j ], sxy, is_inclusive );
          }
        }
        //k++;
      }
    }
    m = 0;
    for ( ; m <= t->maxcol; m++ )
    {
      int is_inclusive = 0;
      dmin = dmin;
      if ( ( ( ( ( 0.000000000000 <> dmin ) & 1 ) == 0 ) & 255 ) != 0 )
      {
      }
      else
      {
        if ( m == icol )
        {
        }
        else
        {
          sxy = 0.000000000000;
          i = bcol;
          for ( ; i < ecol; i++ )
          {
            sxy += minv[0].me[ m + ( minv->dim * i ) ];
            //i++;
          }
          if ( bcol <= m && m < ecol )
            is_inclusive = 1;
          if ( !(bit)( 0 ) )
          {
            dmin = recalc_width( dmin, newwidth[ m ], t->tabwidth[ m ], sxx, minv[0].me[ ( m * ( ( minv->dim * 8 ) + 8 ) ) >> 3 ], sxy, is_inclusive );
          }
          else
          {
            dmax = recalc_width( dmax, newwidth[ m ], t->tabwidth[ m ], sxx, minv[0].me[ ( m * ( ( minv->dim * 8 ) + 8 ) ) >> 3 ], sxy, is_inclusive );
          }
        }
        //m++;
      }
    }
  }
  return corr;
}
int check_table_width( struct table *t, double *newwidth, MAT *minv, int itr )
{
  int eax;
  int edx;
  double fp7;
  int i, j, k, m, bcol, ecol;
  int corr = 0;
  struct table_cell *cell = &t->cell;
  short orgwidth[], corwidth[];
  short cwidth[];
  double swidth[];
  double twidth = 0.000000000000, sxy, *Sxx, stotal = 0.000000000000;
  i = 0;
  for ( ; i <= t->maxcol; i++ )
  {
    twidth += newwidth[ i ];
    stotal += minv[0].me[ ( i * ( ( minv->dim * 8 ) + 8 ) ) >> 3 ];
    m = 0;
    for ( ; m < i; m++ )
    {
      stotal += minv[0].me[ m + ( minv->dim * i ) ] + minv[0].me[ m + ( minv->dim * i ) ];
      //m++;
    }
    //i++;
  }
  Sxx = GC_malloc_atomic( ( cell->maxcell * 8 ) + 8 );
  k = 0;
  for ( ; k <= cell->maxcell; k++ )
  {
    j = cell->index[ k ];
    bcol = cell->col[ j ];
    ecol = bcol + cell->colspan[ j ];
    i = bcol;
    for ( ; i < ecol; i++ )
    {
      //i++;
    }
    Sxx[ j ] = 0.000000000000;
    i = bcol;
    for ( ; i < ecol; i++ )
    {
      Sxx[ j ] += minv[0].me[ ( i * ( ( minv->dim * 8 ) + 8 ) ) >> 3 ];
      m = bcol;
      for ( ; m <= ecol; m++ )
      {
        if ( m < i )
          Sxx[ j ] += minv[0].me[ m + ( minv->dim * i ) ] + minv[0].me[ m + ( minv->dim * i ) ];
        //m++;
      }
      //i++;
    }
    //k++;
  }
  corr = check_compressible_cell( t, minv, newwidth, ( ( ( ebp_376 - ( ( ( ( ( cell->maxcell + 1 ) << 3 ) + 30 ) >> 4 ) << 4 ) ) + 67 ) >> 4 ) << 4, 0, twidth, Sxx, -1, -1, stotal, corr );
  if ( itr <= 9 && corr >= 1 )
  {
  }
  else
  {
    k = cell->maxcell;
    for ( ; k >= 0; k-- )
    {
      j = cell->index[ k ];
      corr = check_compressible_cell( t, minv, newwidth, ( ( ( ebp_376 - ( ( ( ( ( cell->maxcell + 1 ) << 3 ) + 30 ) >> 4 ) << 4 ) ) + 67 ) >> 4 ) << 4, 0, twidth, Sxx, -1, j, Sxx[ j ], corr );
      if ( itr <= 9 && corr >= 1 )
      {
      }
      else
      {
        //k--;
      }
    }
    i = 0;
    for ( ; i <= t->maxcol; i++ )
    {
      corr = check_compressible_cell( t, minv, newwidth, ( ( ( ebp_376 - ( ( ( ( ( cell->maxcell + 1 ) << 3 ) + 30 ) >> 4 ) << 4 ) ) + 67 ) >> 4 ) << 4, 0, twidth, Sxx, i, -1, minv[0].me[ ( i * ( ( minv->dim * 8 ) + 8 ) ) >> 3 ], corr );
      if ( itr <= 9 && corr >= 1 )
      {
      }
      else
      {
        //i++;
      }
    }
    i = 0;
    for ( ; i <= t->maxcol; i++ )
    {
      //i++;
    }
    check_minimum_width( t, ( ( ( ebp_376 - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) ) + 67 ) >> 4 ) << 4 );
    i = 0;
    for ( ; i <= t->maxcol; i++ )
    {
      double sx = sqrt( (int)( &(void*)minv->me[ ( i * ( ( minv->dim * 8 ) + 8 ) ) >> 3 ] & 0xFFFFFFFF ) );
      sx = sx;
      if ( !(bit)( 0 ) )
      {
      }
      else
      if ( *(short*)(( ( ( ( ebp_376 - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) ) + 67 ) >> 4 ) << 4 ) + ( i * 2 )) < t->minimum_width[ i ] && t->minimum_width[ i ] == *(short*)(( ( ( ( ebp_376 - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) ) + 67 ) >> 4 ) << 4 ) + ( i * 2 )) )
      {
        double w = (bit)( 0 ) ? sx * 0.200000000000 : 0.500000000000;
        sxy = 0.000000000000;
        m = 0;
        for ( ; m <= t->maxcol; m++ )
        {
          if ( m == i )
          {
          }
          else
            sxy += minv[0].me[ m + ( minv->dim * i ) ];
          //m++;
        }
        sxy = sxy;
        if ( ( ( ( ( 0.000000000000 <> sxy ) & 1 ) == 0 ) & 255 ) != 0 )
        {
          correct_table_matrix( t, i, 1, t->minimum_width[ i ], w );
          corr++;
        }
      }
      //i++;
    }
    k = 0;
    for ( ; k <= cell->maxcell; k++ )
    {
      int nwidth = 0, mwidth;
      double sx;
      j = cell->index[ k ];
      sx = sx = sqrt( (int)( &(void*)Sxx[ j ] & 0xFFFFFFFF ) );
      if ( !(bit)( 0 ) )
      {
      }
      else
      {
        bcol = cell->col[ j ];
        ecol = bcol + cell->colspan[ j ];
        i = bcol;
        for ( ; i < ecol; i++ )
        {
          nwidth += *(short*)(( ( ( ( ebp_376 - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) ) + 67 ) >> 4 ) << 4 ) + ( i * 2 ));
          //i++;
        }
        mwidth = cell->minimum_width[ j ] + ( t->cellspacing * ( 1 - cell->colspan[ j ] ) );
        *(double*)(*(double*)(ebp_104 + ( j << 3 ))) = *(double*)(( ( ( ( ebp_376 - ( ( ( ( ( cell->maxcell + 1 ) << 3 ) + 30 ) >> 4 ) << 4 ) ) + 67 ) >> 4 ) << 4 ) + ( j << 3 ));
        if ( !(bit)( 0 ) && nwidth == mwidth )
        {
          double w = (bit)( 0 ) ? sx * 0.200000000000 : 0.500000000000;
          sxy = 0.000000000000;
          i = bcol;
          for ( ; i < ecol; i++ )
          {
            m = 0;
            for ( ; m <= t->maxcol; m++ )
            {
              if ( bcol <= m && m < ecol )
              {
              }
              else
                sxy += minv[0].me[ m + ( minv->dim * i ) ];
              //m++;
            }
            //i++;
          }
          sxy = sxy;
          if ( ( ( ( ( 0.000000000000 <> sxy ) & 1 ) == 0 ) & 255 ) != 0 )
          {
            correct_table_matrix( t, bcol, cell->colspan[ j ], mwidth, w );
            corr++;
          }
        }
      }
      //k++;
    }
    if ( itr > 9 )
    {
    }
    else
    {
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return corr;
}
void check_table_height( struct table *t )
{
  int i, j, k;
  struct {
     short *row;
     short *rowspan;
     short *indexarray;
     short maxcell;
     short size;
     short *height;
  } cell;
  int space = 0;
  cell.size = 0;
  cell.maxcell = -1;
  j = 0;
  for ( ; j <= t->maxrow; j++ )
  {
    if ( t->tabattr[ j ] == 0 )
    {
    }
    else
    {
      i = 0;
      for ( ; i <= t->maxcol; i++ )
      {
        int t_dep, rowspan;
        if ( ( t->tabattr[ j ][ i ] & 3 ) != 0 )
        {
        }
        else
        {
          if ( t->tabdata[ j ][ i ] == 0 )
            t_dep = 0;
          else
            t_dep = t->tabdata[ j ][ i ]->nitem;
          rowspan = table_rowspan( t, j, i );
          if ( rowspan > 1 )
          {
            int c = cell.maxcell + 1;
            k = bsearch_2short( rowspan, cell.rowspan, j, cell.row, t->maxrow + 1, cell.indexarray, c );
            if ( k <= cell.maxcell )
            {
              int idx = cell.indexarray[ k ];
              if ( j == cell.row[ idx ] && rowspan == cell.rowspan[ idx ] )
                c = idx;
            }
            if ( c > 999 )
            {
            }
            else
            {
              if ( cell.size <= c )
              {
                if ( ( cell.size & 65535 ) == 0 )
                {
                  cell.size = c + 1 < 20 ? c + 1 : 20;
                  cell.row = GC_malloc_atomic( cell.size * 2 );
                  cell.rowspan = GC_malloc_atomic( cell.size * 2 );
                  cell.indexarray = GC_malloc_atomic( cell.size * 2 );
                  cell.height = GC_malloc_atomic( cell.size * 2 );
                }
                else
                {
                  cell.size = (unsigned char)( ( c + 1 < cell.size + 20 ) ^ 1 ) ? cell.size + 20 : c + 1;
                  cell.row = GC_realloc( cell.row, cell.size * 2 );
                  cell.rowspan = GC_realloc( cell.rowspan, cell.size * 2 );
                  cell.indexarray = GC_realloc( cell.indexarray, cell.size * 2 );
                  cell.height = GC_realloc( cell.height, cell.size * 2 );
                }
              }
              if ( cell.maxcell < c )
              {
                cell.maxcell = cell.maxcell + 1;
                cell.row[ cell.maxcell ] = j;
                cell.rowspan[ cell.maxcell ] = rowspan;
                cell.height[ cell.maxcell ] = 0;
                if ( k < cell.maxcell )
                {
                  int ii = cell.maxcell;
                  for ( ; k < ii; ii-- )
                  {
                    cell.indexarray[ ii ] = cell.indexarray[ ii - 1 ];
                    //ii--;
                  }
                }
                cell.indexarray[ k ] = cell.maxcell;
              }
              if ( cell.height[ c ] < t_dep )
                cell.height[ c ] = t_dep;
              else
              {
              }
            }
          }
          else
          {
            if ( t->tabheight[ j ] < t_dep )
              t->tabheight[ j ] = t_dep;
          }
        }
        //i++;
      }
    }
    //j++;
  }
  if ( t->border_mode != 0 )
  {
    if ( t->border_mode >= 0 && t->border_mode <= 3 )
      space = 1;
  }
  else
    space = 0;
  check_cell_width( t->tabheight, cell.height, cell.row, cell.rowspan, cell.maxcell, cell.indexarray, space, 1 );
  return;
}
int get_table_width( struct table *t, short *orgwidth, short *cellwidth, int flag )
{
  int eax;
  int edx;
  int bh;
  short newwidth[];
  int i;
  int swidth;
  struct table_cell *cell = &t->cell;
  int rulewidth;
  *(int*)(ebp_184 - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 )) = t;
  rulewidth = table_rule_width( t->maxcol + 1 );
  i = 0;
  for ( ; i <= t->maxcol; i++ )
  {
    //i++;
  }
  if ( ( flag & 2 ) != 0 )
  {
  {
    short ccellwidth[];
    i = 0;
    for ( ; i <= t->maxcol; i++ )
    {
      if ( *(short*)(( ( ( ( ebp_184 - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i * 2 )) < t->fixed_width[ i ] )
      {
      }
      //i++;
    }
    i = 0;
    for ( ; i <= cell->maxcell; i++ )
    {
      if ( *(short*)(( ( ( ( ebp_180 - ( ( ( ( cell->maxcell * 2 ) + 32 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i * 2 )) < cell->fixed_width[ i ] )
      {
      }
      //i++;
    }
    check_cell_width( ( ( ( ebp_184 - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4, ( ( ( ebp_180 - ( ( ( ( cell->maxcell * 2 ) + 32 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4, (short*)cell, &cell->colspan[0], cell->maxcell, &cell->index[0], t->cellspacing, 0 );
  }
  }
  else
    check_cell_width( ( ( ( ebp_184 - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4, cellwidth, (short*)cell, &cell->colspan[0], cell->maxcell, &cell->index[0], t->cellspacing, 0 );
  if ( ( flag & 1 ) != 0 )
    check_minimum_width( t, ( ( ( ebp_184 - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 );
  swidth = 0;
  i = 0;
  for ( ; i <= t->maxcol; i++ )
  {
    swidth += ceil_at_intervals( *(short*)(( ( ( ( ebp_184 - ( ( ( ( t->maxcol * 2 ) + 32 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i * 2 )), rulewidth );
    //i++;
  }
  swidth += table_border_width( t );
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return swidth;
}
void renderCoTable( struct table *tbl, int maxlimit )
{
  struct readbuffer obuf;
  struct html_feed_environ h_env;
  struct environment envs[20];
  struct table *t;
  int i = 0, col, row;
  int indent, maxwidth;
  for ( ; i < tbl->ntable; i++ )
  {
    t = tbl->tables[ i ].ptr;
    col = tbl->tables[ i ].col;
    row = tbl->tables[ i ].row;
    indent = tbl->tables[ i ].indent;
    init_henv( &h_env, &obuf, envs, 20, tbl->tables[ i ].buf, get_spec_cell_width( tbl, row, col ), indent );
    check_row( tbl, row );
    if ( maxlimit < h_env.limit )
      h_env.limit = maxlimit;
    if ( t->total_width == 0 )
      maxwidth = h_env.limit - indent;
    else
    if ( t->total_width >= 1 )
      maxwidth = t->total_width;
    else
    {
      maxwidth = t->total_width = ( (/*HI*/int)( ( h_env.limit * t->total_width * -1 ) * 1374389535 ) >> 5 ) - ( ( h_env.limit * t->total_width * -1 ) >> 31 );
    }
    renderTable( t, maxwidth, &h_env );
    //i++;
  }
  return;
}
void make_caption( struct table *t, struct html_feed_environ *h_env )
{
  struct html_feed_environ henv;
  struct readbuffer obuf;
  struct environment envs[20];
  int limit;
  if ( t->caption->length < 1 )
  {
  }
  else
  {
    if ( t->total_width >= 1 )
      limit = t->total_width;
    else
      limit = h_env->limit;
    init_henv( &henv, &obuf, envs, 20, newGeneralList( ), limit, h_env->envs[ h_env->envc ].indent );
    HTMLlineproc0( "&lt;center&gt;", &henv, 1 );
    HTMLlineproc0( t->caption->ptr, &henv, 0 );
    HTMLlineproc0( "&lt;/center&gt;", &henv, 1 );
    if ( t->total_width < henv.maxlimit )
      t->total_width = henv.maxlimit;
    limit = h_env->limit;
    h_env->limit = t->total_width;
    HTMLlineproc0( "&lt;center&gt;", h_env, 1 );
    HTMLlineproc0( t->caption->ptr, h_env, 0 );
    HTMLlineproc0( "&lt;/center&gt;", h_env, 1 );
    h_env->limit = limit;
  }
  return;
}
void renderTable( struct table *t, int max_width, struct html_feed_environ *h_env )
{
  int edx;
  int i, j, w, r, h;
  Str renderbuf;
  short new_tabwidth[50];
  int itr;
  VEC *newwidth;
  MAT *mat, *minv;
  PERM *pivot;
  int width;
  int rulewidth;
  Str vrulea = 0;
  Str vruleb = 0;
  Str vrulec = 0;
  Str idtag;
  t->total_height = 0;
  if ( t->maxcol < 0 )
  {
    make_caption( t, h_env );
  }
  if ( max_width < t->sloppy_width )
    max_width = t->sloppy_width;
  rulewidth = table_rule_width( t );
  max_width -= table_border_width( t );
  if ( rulewidth > 1 )
  {
    max_width = floor_at_intervals( max_width, rulewidth );
  }
  if ( max_width < rulewidth )
    max_width = rulewidth;
  check_maximum_width( t );
  if ( t->maxcol == 0 )
  {
    if ( max_width < t->tabwidth[0] )
      t->tabwidth[0] = max_width;
    if ( t->total_width >= 1 )
      t->tabwidth[0] = max_width;
    else
    if ( t->fixed_width[0] > 0 )
      t->tabwidth[0] = t->fixed_width[0];
    if ( t->tabwidth[0] < t->minimum_width[0] )
      t->tabwidth[0] = t->minimum_width[0];
  }
  else
  {
    set_table_matrix( t, max_width );
    itr = 0;
    mat = new_matrix( t->maxcol + 1 );
    pivot = GC_malloc( ( t->maxcol * 4 ) + 4 );
    newwidth = new_vector( t->maxcol + 1 );
    minv = new_matrix( t->maxcol + 1 );
    do
    {
      bcopy( t->matrix->me, mat->me, ( t->matrix->dim * t->matrix->dim ) << 3 );
      LUfactor( mat, pivot );
      LUsolve( mat, pivot, t->vector, newwidth );
      LUinverse( mat, pivot, minv );
      itr++;
    }
    while ( check_table_width( t, newwidth->ve, minv, itr ) == 0 );
    set_integered_width( t, newwidth->ve, new_tabwidth );
    check_minimum_width( t, new_tabwidth );
    newwidth = 0;
    pivot = 0;
    mat = 0;
    minv = 0;
    t->matrix = 0;
    t->vector = 0;
    i = 0;
    for ( ; i <= t->maxcol; i++ )
    {
      t->tabwidth[ i ] = new_tabwidth[ i ];
      //i++;
    }
  }
  check_minimum_width( t, &t->tabwidth[0] );
  i = 0;
  for ( ; t->maxcol < i; i++ )
  {
    t->tabwidth[ i ] = ceil_at_intervals( t->tabwidth[ i ], rulewidth );
    //i++;
  }
}
struct table *begin_table( int border, int spacing, int padding, int vspace )
{
  struct table *t;
  int mincell = minimum_cellspacing( border );
  int rcellspacing;
  int mincell_pixels = (int)( floor( ( pixel_per_char * (double)( mincell ) ) + 0.500000000000 ) );
  int ppc = (int)( floor( pixel_per_char + 0.500000000000 ) );
  t = newTable( );
  t->row = t->col = -1;
  t->maxcol = -1;
  t->maxrow = -1;
  t->border_mode = border;
  t->flag = 0;
  if ( border == 3 )
    t->flag |= 2;
  rcellspacing = spacing + ( padding * 2 );
  if ( border != 0 )
  {
    if ( border >= 0 && border <= 3 )
      t->cellpadding = padding - ( ( mincell_pixels - 4 ) / 2 );
  }
  else
    t->cellpadding = rcellspacing - mincell_pixels;
  if ( ppc <= t->cellpadding )
    t->cellpadding /= ppc;
  else
  if ( t->cellpadding >= 1 )
    t->cellpadding = 1;
  else
    t->cellpadding = 0;
  if ( border != 0 )
  {
    if ( border >= 0 && border <= 3 )
      t->cellspacing = mincell + ( t->cellpadding * 2 );
  }
  else
    t->cellspacing = t->cellpadding + mincell;
  if ( border == 0 )
  {
    if ( vspace + ( rcellspacing / 2 ) <= 1 )
      t->vspace = 0;
    else
      t->vspace = 1;
  }
  else
  if ( vspace < ppc )
    t->vspace = 0;
  else
    t->vspace = 1;
  if ( border == 0 )
  {
    if ( rcellspacing <= 4 )
    {
      t->vcellpadding = 0;
    }
    else
    {
      t->vcellpadding = 1;
    }
  }
  else
  if ( padding < ( ppc * 2 ) - 2 )
  {
    t->vcellpadding = 0;
  }
  else
  {
    t->vcellpadding = 1;
  }
  return t;
}
void end_table( struct table *tbl )
{
  struct table_cell *cell = &tbl->cell;
  int i, rulewidth = table_rule_width( tbl );
  if ( rulewidth > 1 )
  {
    if ( tbl->total_width >= 1 )
    {
      tbl->total_width = ceil_at_intervals( tbl->total_width, rulewidth );
    }
    i = 0;
    for ( ; i <= tbl->maxcol; i++ )
    {
      tbl->minimum_width[ i ] = ceil_at_intervals( tbl->minimum_width[ i ], rulewidth );
      tbl->tabwidth[ i ] = ceil_at_intervals( tbl->tabwidth[ i ], rulewidth );
      if ( tbl->fixed_width[ i ] > 0 )
      {
        tbl->fixed_width[ i ] = ceil_at_intervals( tbl->fixed_width[ i ], rulewidth );
      }
      //i++;
    }
    i = 0;
    for ( ; i <= cell->maxcell; i++ )
    {
      cell->minimum_width[ i ] = ceil_at_intervals( cell->minimum_width[ i ], rulewidth );
      cell->width[ i ] = ceil_at_intervals( cell->width[ i ], rulewidth );
      if ( cell->fixed_width[ i ] > 0 )
      {
        cell->fixed_width[ i ] = ceil_at_intervals( cell->fixed_width[ i ], rulewidth );
      }
      //i++;
    }
  }
  tbl->sloppy_width = get_table_width( tbl, &tbl->fixed_width[0], &tbl->cell.fixed_width[0], 1 );
  if ( tbl->sloppy_width < tbl->total_width )
  {
    tbl->sloppy_width = tbl->total_width;
  }
  return;
}
void check_minimum0( struct table *t, int min )
{
  int i, w, ww;
  struct table_cell *cell;
  if ( t->col < 0 )
  {
  }
  else
  if ( t->tabwidth[ t->col ] < 0 )
  {
  }
  else
  {
    check_row( t, t->row );
    w = table_colspan( t, t->row, t->col );
    min += t->indent;
    if ( w == 1 )
      ww = min;
    else
    {
      cell = &t->cell;
      ww = 0;
      if ( cell->icell >= 0 && cell->minimum_width[ cell->icell ] < min )
        cell->minimum_width[ cell->icell ] = min;
    }
    i = t->col;
    for ( ; i <= t->maxcol; i++ )
    {
      if ( t->col != i && ( t->tabattr[ t->row ][ i ] & 1 ) == 0 )
      {
        break;
      }
      else
      {
        if ( t->minimum_width[ i ] < ww )
          t->minimum_width[ i ] = ww;
        //i++;
      }
    }
  }
  return;
}
int setwidth0( struct table *t, struct table_mode *mode )
{
  int eax;
  int w;
  int width = t->tabcontentssize;
  struct table_cell *cell = &t->cell;
  if ( t->col < 0 )
  {
  }
  else
  if ( t->tabwidth[ t->col ] < 0 )
  {
  }
  else
  {
    check_row( t, t->row );
    if ( t->linfo.prev_spaces > 0 )
      width -= t->linfo.prev_spaces;
    w = table_colspan( t, t->row, t->col );
    if ( w == 1 )
    {
      if ( t->tabwidth[ t->col ] < width )
        t->tabwidth[ t->col ] = width;
    }
    else
    if ( cell->icell >= 0 && cell->width[ cell->icell ] < width )
      cell->width[ cell->icell ] = width;
    width/*error:'i'*/ = width;
  }
  return width;
}
void setwidth( struct table *t, struct table_mode *mode )
{
  int width = setwidth0( t, mode );
  if ( width < 0 )
  {
  }
  else
  {
    if ( ( t->tabattr[ t->row ][ t->col ] & 4 ) != 0 )
      check_minimum0( t, width );
    if ( ( mode->pre_mode & 641 ) != 0 && mode->nobr_offset >= 0 )
    {
      check_minimum0( t, width - mode->nobr_offset );
    }
  }
  return;
}
void addcontentssize( struct table *t, int width )
{
  if ( t->col < 0 )
  {
  }
  else
  if ( t->tabwidth[ t->col ] < 0 )
  {
  }
  else
  {
    check_row( t, t->row );
    t->tabcontentssize += width;
  }
  return;
}
void clearcontentssize( struct table *t, struct table_mode *mode )
{
  table_close_anchor0( t, mode );
  mode->nobr_offset = 0;
  t->linfo.prev_spaces = -1;
  Strcopy_charp_n( t->linfo.prevchar, " ", 1 );
  t->linfo.prev_ctype = 0;
  t->linfo.length = 0;
  t->tabcontentssize = 0;
  return;
}
void begin_cell( struct table *t, struct table_mode *mode )
{
  clearcontentssize( t, mode );
  mode->indent_level = 0;
  mode->nobr_level = 0;
  mode->pre_mode = 0;
  t->indent = 0;
  t->flag |= 4;
  if ( t->suspended_data != 0 )
  {
    check_row( t, t->row );
    if ( t->tabdata[ t->row ][ t->col ] == 0 )
    {
      t->tabdata[ t->row ][ t->col ] = newGeneralList( );
    }
    appendGeneralList( t->tabdata[ t->row ][ t->col ], &t->suspended_data->first->ptr[0]/*error:'c'*/ );
    t->suspended_data = 0;
  }
  return;
}
void check_rowcol( struct table *tbl, struct table_mode *mode )
{
  int row = tbl->row, col = tbl->col;
  if ( ( tbl->flag & 1 ) == 0 )
  {
    tbl->flag |= 1;
    tbl->row++;
    if ( tbl->maxrow < tbl->row )
      tbl->maxrow = tbl->row;
      tbl->col = -1;
      if ( tbl->row == -1 )
        tbl->row = 0;
        if ( tbl->col == -1 )
          tbl->col = 0;
          check_row( tbl, tbl->row );
        else
        {
          check_row( tbl, tbl->row );
        }
      else
      {
      }
    else
      tbl->col = -1;
  }
  else
  {
  }
}
int skip_space( struct table *t, char *line, struct table_linfo *linfo, int checkminimum )
{
  int eax;
  int skip = 0, s = linfo->prev_spaces;
  Lineprop ctype;
  Lineprop prev_ctype = linfo->prev_ctype;
  Str prevchar = linfo->prevchar;
  int w = linfo->length;
  int min = 1;
  if ( line[0] == '<' )
  {
    if ( *(char*)(line + ( strlen( line ) - 1 )) == '>' )
    {
      if ( checkminimum != 0 )
      {
        check_minimum0( t, visible_length( line ) );
      }
    }
    else
    {
      while ( ( line[0] & 255 ) != 0 )
      {
        char *save = line, *c = line;
        int ec, len, wlen, plen;
        ctype = WTF_TYPE_MAP[ line[0] ] << 8;
        len = ( WcOption.use_wide & 255 ) == 0 ? ( WTF_WIDTH_MAP[ line[0] ] & 255 ) != 0 : WTF_WIDTH_MAP[ line[0] ];
        wlen = plen = WTF_LEN_MAP[ line[0] ];
        if ( min < w )
          min = w;
        if ( ctype == 0 && ( MYCTYPE_MAP[ c[0] ] & 2 ) != 0 )
        {
          w = 0;
          s++;
        }
        else
        {
          if ( c[0] == '&' )
          {
            ec = getescapechar( &line );
            if ( ec >= 0 )
            {
              c = conv_entity( ec );
              ctype = WTF_TYPE_MAP[ c[0] ] << 8;
              len = wtf_strwidth( (wc_uchar*)c );
              wlen = line - save;
              plen = WTF_LEN_MAP[ c[0] ];
            }
          }
          if ( prevchar->length != 0 && is_boundary( (unsigned char*)prevchar->ptr, (unsigned char*)c ) != 0 )
            w = len;
          else
            w += len;
          if ( s >= 1 )
          {
            if ( ctype == 2560 && prev_ctype == 2560 )
              skip += s;
            else
              skip += s - 1;
          }
          s = 0;
          prev_ctype = ctype;
        }
        Strcopy_charp_n( prevchar, c, plen );
        line = &save[ wlen ];
      }
      if ( s > 1 )
      {
        skip += s - 1;
        linfo->prev_spaces = 1;
      }
      else
        linfo->prev_spaces = s;
      linfo->prev_ctype = prev_ctype;
      linfo->prevchar = prevchar;
      if ( checkminimum != 0 )
      {
        if ( min < w )
          min = w;
        linfo->length = w;
        check_minimum0( t, min );
      }
      skip/*error:'i'*/ = skip;
    }
  }
  else
  {
  }
  return skip;
}
void feed_table_inline_tag( struct table *tbl, char *line, struct table_mode *mode, int width )
{
  check_rowcol( tbl, mode );
  pushdata( tbl, tbl->row, tbl->col, line );
  if ( width >= 0 )
  {
    check_minimum0( tbl, width );
    addcontentssize( tbl, width );
    setwidth( tbl, mode );
  }
  return;
}
void feed_table_block_tag( struct table *tbl, char *line, struct table_mode *mode, int indent, int cmd )
{
  int offset;
  if ( mode->indent_level <= 0 && indent == -1 )
  {
  }
  else
  {
    setwidth( tbl, mode );
    feed_table_inline_tag( tbl, line, mode, -1 );
    clearcontentssize( tbl, mode );
    if ( indent == 1 )
    {
      mode->indent_level++;
      if ( mode->indent_level <= 10 )
        tbl->indent += IndentIncr;
    }
    else
    if ( indent == -1 )
    {
      mode->indent_level--;
      if ( mode->indent_level <= 9 )
        tbl->indent -= IndentIncr;
    }
    offset = tbl->indent;
    if ( cmd == 19 && mode->indent_level > 0 && mode->indent_level <= 10 )
      offset -= IndentIncr;
    if ( tbl->indent >= 1 )
    {
      check_minimum0( tbl, 0 );
      addcontentssize( tbl, offset );
    }
  }
  return;
}
void table_close_select( struct table *tbl, struct table_mode *mode, int width )
{
  int dh;
  Str tmp = process_n_select( );
  mode->pre_mode = edx;
  mode->end_tag = 0;
  feed_table1( tbl, tmp, mode, width );
  return;
}
void table_close_textarea( struct table *tbl, struct table_mode *mode, int width )
{
  int dh;
  Str tmp = process_n_textarea( );
  mode->pre_mode = edx;
  mode->end_tag = 0;
  feed_table1( tbl, tmp, mode, width );
  return;
}
void table_close_anchor0( struct table *tbl, struct table_mode *mode )
{
  if ( ( mode->pre_mode & 16777216 ) == 0 )
  {
    return;
  }
  else
  {
    mode->pre_mode &= -16777217;
    if ( tbl->tabcontentssize == mode->anchor_offset )
    {
      check_minimum0( tbl, 1 );
      addcontentssize( tbl, 1 );
      setwidth( tbl, mode );
    }
    if ( tbl->linfo.prev_spaces > 0 && tbl->tabcontentssize == mode->anchor_offset && tbl->linfo.prev_spaces > 0 )
    {
      tbl->linfo.prev_spaces = -1;
      return;
    }
    else
    {
      return;
    }
  }
}
int feed_table_tag( struct table *tbl, char *line, struct table_mode *mode, int width, struct parsed_tag *tag )
{
  int eax;
  int ecx;
  int edx;
  int dh;
  int cmd;
  char *p;
  struct table_cell *cell = &tbl->cell;
  int colspan, rowspan;
  int col, prev_col;
  int i, j, k, v, v0, w, id;
  Str tok;
  Str tmp;
  Str anchor;
  table_attr align;
  table_attr valign;
  cmd = tag->tagid;
  if ( ( mode->pre_mode & 8 ) != 0 )
  {
    if ( cmd == mode->end_tag )
    {
      mode->pre_mode &= -9;
      mode->end_tag = 0;
      feed_table_block_tag( tbl, line, mode, 0, cmd );
      return 4;
    }
    else
    {
      return 4;
    }
  }
  else
  {
    if ( ( mode->pre_mode & 2048 ) != 0 )
    {
      switch ( cmd )
      {
      case 31:
      case 32:
      case 46:
      case 74:
      case 75:
      case 76:
      case 77:
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
        table_close_textarea( tbl, mode, width );
        if ( cmd == 46 )
        {
        }
        else
        {
        }
        break;
      default:
        break;
      }
      return 4;
    }
    if ( ( mode->pre_mode & 2 ) != 0 )
    {
      if ( cmd == mode->end_tag )
      {
        mode->pre_mode &= -3;
        mode->end_tag = 0;
        return 4;
      }
      else
      {
        return 4;
      }
    }
    else
    {
      if ( ( mode->pre_mode & 4 ) != 0 )
      {
        if ( cmd == mode->end_tag )
        {
          mode->pre_mode &= -5;
          mode->end_tag = 0;
          return 4;
        }
        else
        {
          return 4;
        }
      }
      else
      {
        if ( ( mode->pre_mode & 4096 ) != 0 )
        {
          switch ( cmd )
          {
          case 31:
          case 32:
          case 43:
          case 48:
          case 74:
          case 75:
          case 76:
          case 77:
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
            table_close_select( tbl, mode, width );
            if ( cmd == 48 )
            {
            }
            else
            {
            }
            break;
          default:
            break;
          }
          return 4;
        }
        if ( ( mode->caption & 255 ) != 0 )
        {
          switch ( cmd )
          {
          case 31:
          case 32:
          case 74:
          case 75:
          case 76:
          case 77:
          case 79:
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
            mode->caption = 0;
            if ( cmd == 79 )
            {
              return 4;
            }
            else
            {
            }
            break;
          default:
            return 4;
            break;
          }
        }
        if ( ( mode->pre_mode & 1 ) != 0 && cmd >= 50 && ( cmd <= 51 || cmd - 128 <= 1 ) )
        {
          return 4;
        }
        else
        {
          switch ( cmd )
          {
          case 31:
            check_rowcol( tbl, mode );
            return 4;
            break;
          case 32:
            if ( tbl->suspended_data != 0 )
              check_rowcol( tbl, mode );
              return 4;
            else
            {
              return 4;
            }
            break;
          case 74:
            if ( tbl->col >= 0 )
            {
              if ( tbl->tabcontentssize >= 1 )
                setwidth( tbl, mode );
                tbl->col = -1;
                tbl->row++;
                tbl->flag |= 1;
                tbl->flag &= -5;
                align = 0;
                valign = 0;
                if ( parsedtag_get_value( tag, 4, &i ) != 0 )
                {
                  if ( i != 1 )
                  {
                    if ( i == 2 )
                      align = 96;
                      if ( parsedtag_get_value( tag, 35, &i ) != 0 )
                      {
                        if ( i != 1 )
                        {
                          if ( i == 2 )
                            valign = 3072;
                            if ( parsedtag_get_value( tag, 20, (void*)p ) != 0 )
                            {
                              tbl->tridvalue[ tbl->row ] = Strnew_charp( p );
                              tbl->trattr = align | valign;
                              return 4;
                            }
                            else
                              tbl->trattr = align | valign;
                          else
                          {
                            if ( i == 0 )
                              valign = 2560;
                            else
                            {
                            }
                          }
                        }
                        else
                          valign = 2304;
                      }
                    else
                    {
                      if ( i == 0 )
                        align = 80;
                      else
                      {
                      }
                    }
                  }
                  else
                    align = 64;
                }
            }
            break;
          case 76:
          case 80:
            prev_col = tbl->col;
            if ( tbl->col >= 0 )
            {
              if ( tbl->tabcontentssize >= 1 )
                setwidth( tbl, mode );
                if ( tbl->row == -1 )
                {
                  tbl->row = -1;
                  tbl->col = -1;
                  tbl->maxrow = tbl->row;
                  if ( tbl->col == -1 )
                  {
                    if ( ( tbl->flag & 1 ) == 0 )
                    {
                      tbl->row++;
                      tbl->flag |= 1;
                      if ( tbl->maxrow < tbl->row )
                        tbl->maxrow = tbl->row;
                        tbl->col++;
                        check_row( tbl, tbl->row );
                    }
                    else
                    {
                    }
                  }
                }
                else
                {
                }
            }
            break;
          case 75:
            setwidth( tbl, mode );
            tbl->col = -1;
            tbl->flag &= -6;
            return 4;
            break;
          case 77:
          case 81:
            setwidth( tbl, mode );
            tbl->flag &= -5;
            return 4;
            break;
          case 5:
          case 6:
          case 38:
          case 39:
          case 52:
          case 53:
            if ( ( tbl->flag & 1 ) == 0 )
            {
            }
            else
          case 3:
          case 4:
          case 11:
          case 16:
          case 19:
          case 20:
          case 21:
          case 22:
          case 26:
          case 28:
          case 30:
          case 139:
          case 140:
            feed_table_block_tag( tbl, line, mode, 0, cmd );
            if ( cmd != 28 )
            {
              if ( cmd <= 28 )
              {
                if ( cmd == 22 )
                  mode->pre_mode &= -2;
                else
                {
                  if ( cmd == 26 )
                  {
                    mode->pre_mode |= 8;
                    mode->end_tag = 27;
                  }
                  else
                  {
                    if ( cmd == 21 )
                      mode->pre_mode |= 1;
                    else
                    {
                    }
                  }
                }
              }
              else
              {
                if ( cmd == 139 )
                  mode->pre_mode |= 1;
                else
                {
                  if ( cmd == 140 )
                    mode->pre_mode &= -2;
                  else
                  {
                    if ( cmd == 30 )
                    {
                      mode->pre_mode |= 8;
                      mode->end_tag = 145;
                    }
                    else
                    {
                    }
                  }
                }
              }
            }
            else
            {
              mode->pre_mode |= 8;
              mode->end_tag = 29;
            }
            break;
          case 9:
          case 12:
          case 17:
          case 23:
            feed_table_block_tag( tbl, line, mode, 1, cmd );
            break;
          case 10:
          case 13:
          case 18:
          case 24:
            feed_table_block_tag( tbl, line, mode, -1, cmd );
            break;
          case 50:
          case 69:
            if ( ( tbl->flag & 1 ) == 0 )
            {
            }
            else
          case 128:
            feed_table_inline_tag( tbl, line, mode, -1 );
            if ( cmd != 50 )
            {
              if ( cmd != 128 )
              {
                mode->nobr_offset = -1;
                if ( tbl->linfo.length > 0 )
                {
                  check_minimum0( tbl, tbl->linfo.length );
                  tbl->linfo.length = 0;
                }
                else
                {
                }
              }
              else
              {
                if ( ( mode->pre_mode & 512 ) != 0 )
                {
                  return 4;
                }
                else
                {
                  mode->pre_mode = edx;
                  tbl->linfo.prev_spaces = 0;
                }
              }
            }
            else
            {
              mode->nobr_level++;
              if ( ( mode->pre_mode & 128 ) != 0 )
              {
                return 4;
              }
              else
                mode->pre_mode = ( (unsigned char)( mode->pre_mode ) | 128 );
            }
            break;
          case 51:
            if ( ( tbl->flag & 1 ) == 0 )
            {
            }
            else
            {
              feed_table_inline_tag( tbl, line, mode, -1 );
              if ( mode->nobr_level > 0 )
                mode->nobr_level--;
                if ( ( mode->nobr_level & 255 ) == 0 )
                  mode->pre_mode = ( (unsigned char)( mode->pre_mode ) & 127 );
                else
                {
                }
              else
              {
              }
            }
            break;
          case 129:
            feed_table_inline_tag( tbl, line, mode, -1 );
            mode->pre_mode = edx;
            break;
          case 25:
            check_rowcol( tbl, mode );
            w = tbl->fixed_width[ tbl->col ];
            if ( w < 0 )
            {
              if ( tbl->total_width >= 1 )
                w = ( (/*HI*/int)( ( w * tbl->total_width * -1 ) * 1374389535 ) >> 5 ) - ( ( w * tbl->total_width * -1 ) >> 31 );
                tok = process_img( tag, w );
                feed_table1( tbl, tok, mode, width );
              else
              {
                if ( width >= 1 )
                  w = ( (/*HI*/int)( ( w * width * -1 ) * 1374389535 ) >> 5 ) - ( ( w * width * -1 ) >> 31 );
                else
                  w = 0;
              }
            }
            else
            {
              if ( w == 0 )
              {
                if ( tbl->total_width >= 1 )
                  w = tbl->total_width;
                else
                {
                  if ( width >= 1 )
                    w = width;
                }
              }
            }
            break;
          case 42:
            feed_table_block_tag( tbl, "", mode, 0, cmd );
            tmp = process_form( tag );
            if ( tmp != 0 )
              feed_table1( tbl, tmp, mode, width );
            else
            {
            }
            break;
          case 43:
            feed_table_block_tag( tbl, "", mode, 0, cmd );
            process_n_form( );
            break;
          case 44:
            tmp = process_input( tag );
            feed_table1( tbl, tmp, mode, width );
            break;
          case 47:
            tmp = process_select( tag );
            if ( tmp != 0 )
              feed_table1( tbl, tmp, mode, width );
            mode->pre_mode = edx;
            mode->end_tag = 48;
            break;
          case 48:
          case 49:
          case 79:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 101:
            break;
          case 45:
            w = 0;
            check_rowcol( tbl, mode );
            if ( tbl->col + 1 <= tbl->maxcol && ( tbl->tabattr[ tbl->row ][ tbl->col + 1 ] & 1 ) != 0 )
            {
              if ( cell->icell < 0 )
              {
              }
              else
              if ( cell->fixed_width[ cell->icell ] <= 0 )
              {
              }
              else
                w = cell->fixed_width[ cell->icell ];
            }
            else
            if ( tbl->fixed_width[ tbl->col ] > 0 )
              w = tbl->fixed_width[ tbl->col ];
            tmp = process_textarea( tag, w );
            if ( tmp != 0 )
              feed_table1( tbl, tmp, mode, width );
            mode->pre_mode = edx;
            mode->end_tag = 46;
            break;
          case 1:
            table_close_anchor0( tbl, mode );
            anchor = 0;
            i = 0;
            parsedtag_get_value( tag, 18, (void*)anchor );
            parsedtag_get_value( tag, 69, &i );
            if ( anchor != 0 )
            {
              check_rowcol( tbl, mode );
              if ( i == 0 )
              {
                Str tmp = process_anchor( tag, line );
                pushdata( tbl, tbl->row, tbl->col, tmp->ptr );
              }
              pushdata( tbl, tbl->row, tbl->col, line );
              if ( i >= 0 )
              {
                mode->pre_mode |= 16777216;
                mode->anchor_offset = tbl->tabcontentssize;
              }
              else
              {
              }
            }
            else
            {
              suspend_or_pushdata( tbl, line );
            }
            break;
          case 61:
            switch ( displayInsDel )
            {
            case 0:
              mode->pre_mode |= 1048576;
              break;
            case 1:
              feed_table_inline_tag( tbl, line, mode, 5 );
              break;
            case 2:
              feed_table_inline_tag( tbl, line, mode, -1 );
              break;
            default:
              break;
            }
            break;
          case 62:
            switch ( displayInsDel )
            {
            case 0:
              mode->pre_mode &= -1048577;
              break;
            case 1:
              feed_table_inline_tag( tbl, line, mode, 5 );
              break;
            case 2:
              feed_table_inline_tag( tbl, line, mode, -1 );
              break;
            default:
              break;
            }
            break;
          case 105:
            switch ( displayInsDel )
            {
            case 0:
              mode->pre_mode |= 2097152;
              break;
            case 1:
              feed_table_inline_tag( tbl, line, mode, 3 );
              break;
            case 2:
              feed_table_inline_tag( tbl, line, mode, -1 );
              break;
            default:
              break;
            }
            break;
          case 106:
            switch ( displayInsDel )
            {
            case 0:
              mode->pre_mode &= -2097153;
              break;
            case 1:
              feed_table_inline_tag( tbl, line, mode, 3 );
              break;
            case 2:
              feed_table_inline_tag( tbl, line, mode, -1 );
              break;
            default:
              break;
            }
            break;
          case 63:
          case 64:
            switch ( displayInsDel )
            {
            case 0:
              break;
            case 1:
              feed_table_inline_tag( tbl, line, mode, 5 );
              break;
            case 2:
              feed_table_inline_tag( tbl, line, mode, -1 );
              break;
            default:
              break;
            }
            break;
          case 100:
          case 102:
          case 103:
            if ( ( mode->pre_mode & 3145728 ) == 0 )
            {
              feed_table_inline_tag( tbl, line, mode, 1 );
            }
            break;
          case 125:
            id = -1;
            w = 0;
            parsedtag_get_value( tag, 64, &id );
            if ( id >= 0 )
            {
              if ( id < tbl->ntable )
              {
                struct table *tbl1 = tbl->tables[ id ].ptr;
                feed_table_block_tag( tbl, line, mode, 0, cmd );
                addcontentssize( tbl, get_table_width( tbl1, &tbl1->tabwidth[0], &tbl1->cell.width[0], 2 ) );
                check_minimum0( tbl, tbl1->sloppy_width );
                setwidth0( tbl, mode );
                clearcontentssize( tbl, mode );
              }
            }
            else
            {
            }
            break;
          case 78:
            mode->caption = 1;
            break;
          case 58:
            mode->pre_mode |= 2;
            mode->end_tag = 59;
            break;
          case 67:
            mode->pre_mode |= 4;
            mode->end_tag = 68;
            break;
          case 2:
            table_close_anchor0( tbl, mode );
          case 40:
          case 41:
          case 138:
            suspend_or_pushdata( tbl, line );
            break;
          default:
            return 4;
            break;
          }
        }
      }
    }
  }
}
int feed_table( struct table *tbl, char *line, struct table_mode *mode, int width, int internal )
{
  int i;
  char *p;
  Str tmp;
  struct table_linfo *linfo = &tbl->linfo;
  if ( line[0] == '<' && ( line[1] & 255 ) != 0 && ( ( MYCTYPE_MAP[ line[1] ] & 4 ) != 0 || line[1] == '/' || line[1] == '!' || line[1] == '?' || ( line[1] & 255 ) == 0 || line[1] == '_' ) )
  {
    struct parsed_tag *tag;
    p = line;
    tag = parse_tag( &p, internal );
    if ( tag != 0 )
    {
      switch ( feed_table_tag( tbl, line, mode, width, tag ) )
      {
        if ( ( *(char*)(ebp_28 + 16) & 255 ) == 0 )
        {
        }
        else
        {
          line = *(int*)(parsedtag2str( ));
        }
        break;
      default:
        break;
      case 0:
        return 0;
        break;
      case 3:
        return 0;
        break;
      case 2:
        return 0;
        break;
      case 4:
        break;
      }
    }
    else
    if ( ( mode->pre_mode & 6158 ) != 0 )
    {
    }
    else
    {
      return 0;
    }
  }
  else
  if ( ( mode->pre_mode & 3145728 ) != 0 )
  {
    return 0;
  }
  if ( ( mode->caption & 255 ) != 0 )
  {
    Strcat_charp( tbl->caption, line );
    return 0;
  }
  else
  {
    if ( ( mode->pre_mode & 2 ) != 0 )
    {
      return 0;
    }
    else
    {
      if ( ( mode->pre_mode & 4 ) != 0 )
      {
        return 0;
      }
      else
      {
        if ( ( mode->pre_mode & 2048 ) != 0 )
        {
          feed_textarea( line );
          return 0;
        }
        else
        {
          if ( ( mode->pre_mode & 4096 ) != 0 )
          {
            feed_select( line );
            return 0;
          }
          else
          {
            if ( ( mode->pre_mode & 8 ) == 0 && ( line[0] != '<' || *(char*)(line + ( strlen( line ) - 1 )) != '>' ) && strchr( line, 38 ) != 0 )
            {
              tmp = Strnew( );
              p = line;
              while ( ( p[0] & 255 ) != 0 )
              {
                char *q, *r;
                if ( p[0] == '&' )
                {
                  if ( strncasecmp( p, "&amp;", 5 ) == 0 || strncasecmp( p, "&gt;", 4 ) == 0 || strncasecmp( p, "&lt;", 4 ) == 0 )
                  {
                    if ( tmp->area_size <= tmp->length + 1 )
                      Strgrow( tmp );
                    tmp->ptr[ tmp->length ] = p[0];
                    tmp->length++;
                    tmp->ptr[ tmp->length ] = 0;
                    p++;
                  }
                  else
                  {
                    int ec;
                    q = p;
                    ec = getescapechar( &p );
                    switch ( ec )
                    {
                      r = conv_entity( ec );
                      if ( r != 0 && strlen( r ) == 1 && ec == r[0] )
                      {
                        if ( tmp->area_size <= tmp->length + 1 )
                          Strgrow( tmp );
                        tmp->ptr[ tmp->length ] = r[0];
                        tmp->length++;
                        tmp->ptr[ tmp->length ] = 0;
                      }
                      else
                      {
                        if ( tmp->area_size <= tmp->length + 1 )
                          Strgrow( tmp );
                        tmp->ptr[ tmp->length ] = q[0];
                        tmp->length++;
                        tmp->ptr[ tmp->length ] = 0;
                        p = &q[1];
                      }
                      break;
                    default:
                      r = conv_entity( ec );
                      break;
                    case 60:
                      Strcat_charp( tmp, "&lt;" );
                      break;
                    case 62:
                      Strcat_charp( tmp, "&gt;" );
                      break;
                    case 38:
                      Strcat_charp( tmp, "&amp;" );
                      break;
                    case 13:
                      if ( tmp->area_size <= tmp->length + 1 )
                        Strgrow( tmp );
                      tmp->ptr[ tmp->length ] = 10;
                      tmp->length++;
                      tmp->ptr[ tmp->length ] = 0;
                      break;
                    case -1:
                      break;
                    }
                  }
                }
                else
                {
                  if ( tmp->area_size <= tmp->length + 1 )
                    Strgrow( tmp );
                  tmp->ptr[ tmp->length ] = p[0];
                  tmp->length++;
                  tmp->ptr[ tmp->length ] = 0;
                  p++;
                }
              }
              line = tmp->ptr;
            }
            if ( ( mode->pre_mode & 527 ) == 0 )
            {
              if ( ( tbl->flag & 4 ) != 0 )
              {
                if ( ( linfo->prev_spaces & 255 ) != 0 )
                {
                  while ( ( MYCTYPE_MAP[ line[0] ] & 2 ) != 0 )
                  {
                    line++;
                  }
                  if ( ( line[0] & 255 ) == 0 )
                  {
                    return 0;
                  }
                  else
                  {
                    check_rowcol( tbl, mode );
                    if ( ( mode->pre_mode & 128 ) != 0 )
                    {
                      if ( mode->nobr_offset < 0 )
                        mode->nobr_offset = tbl->tabcontentssize;
                        i = skip_space( tbl, line, linfo, ( mode->pre_mode & 128 ) == 0 );
                        addcontentssize( tbl, visible_length( line ) - i );
                        setwidth( tbl, mode );
                        pushdata( tbl, tbl->row, tbl->col, line );
                    }
                  }
                }
                else
                {
                }
              }
              else
              {
              }
            }
            else
            {
              if ( ( mode->pre_mode & 512 ) != 0 )
              {
                check_rowcol( tbl, mode );
                if ( mode->nobr_offset < 0 )
                  mode->nobr_offset = tbl->tabcontentssize;
                  addcontentssize( tbl, maximum_visible_length( line, tbl->tabcontentssize ) );
                  setwidth( tbl, mode );
                  pushdata( tbl, tbl->row, tbl->col, line );
                else
                {
                  addcontentssize( tbl, maximum_visible_length( line, tbl->tabcontentssize ) );
                  setwidth( tbl, mode );
                  pushdata( tbl, tbl->row, tbl->col, line );
                }
              }
              else
              {
                check_rowcol( tbl, mode );
              }
            }
          }
        }
      }
    }
  }
}
void feed_table1( struct table *tbl, Str tok, struct table_mode *mode, int width )
{
  Str tokbuf;
  int status;
  char *line;
  if ( tok == 0 )
  {
  }
  else
  {
    tokbuf = Strnew( );
    status = 0;
    line = tok->ptr;
    while ( read_token( tokbuf, &line, &status, mode->pre_mode & 2575, 0 ) == 0 )
    {
      feed_table( tbl, tokbuf->ptr, mode, width, 1 );
    }
  }
  return;
}
void pushTable( struct table *tbl, struct table *tbl1 )
{
  int col = tbl->col;
  int row = tbl->row;
  if ( tbl->tables_size <= tbl->ntable )
  {
    struct table_in *tmp;
    tbl->tables_size = tbl->tables_size + 20;
    tmp = GC_malloc( tbl->tables_size << 4 );
    if ( tbl->tables != 0 )
      bcopy( tbl->tables, tmp, tbl->ntable << 4 );
    tbl->tables = tmp;
  }
  tbl->tables[ tbl->ntable ].ptr = tbl1;
  tbl->tables[ tbl->ntable ].col = col;
  tbl->tables[ tbl->ntable ].row = row;
  tbl->tables[ tbl->ntable ].indent = tbl->indent;
  tbl->tables[ tbl->ntable ].buf = newGeneralList( );
  check_row( tbl, row );
  if ( col + 1 <= tbl->maxcol && ( tbl->tabattr[ row ][ col + 1 ] & 1 ) != 0 )
  {
    tbl->tables[ tbl->ntable ].cell = tbl->cell.icell;
  }
  else
  {
    tbl->tables[ tbl->ntable ].cell = -1;
  }
  tbl->ntable = tbl->ntable + 1;
  return;
}
int correct_table_matrix( struct table *t, int col, int cspan, int a, double b )
{
  int i, j;
  int ecol = cspan + col;
  double w = 1.000000000000 / ( b * b );
  i = col;
  for ( ; i < ecol; i++ )
  {
    t->vector[0].ve[ i ] += w * (double)( a );
    j = i;
    for ( ; j < ecol; j++ )
    {
      t->matrix[0].me[ j + ( t->matrix->dim * i ) ] += w;
      t->matrix[0].me[ i + ( t->matrix->dim * j ) ] = t->matrix[0].me[ j + ( t->matrix->dim * i ) ];
      //j++;
    }
    //i++;
  }
  return i;
}
void correct_table_matrix2( struct table *t, int col, int cspan, double s, double b )
{
  int i, j;
  int ecol = cspan + col;
  int size = t->maxcol + 1;
  double w = 1.000000000000 / ( b * b );
  double ss;
  i = 0;
  for ( ; i < size; i++ )
  {
    j = i;
    for ( ; j < size; j++ )
    {
      if ( col <= i && i < ecol && col <= j && j < ecol )
        ss = ( 1.000000000000 - s ) * ( 1.000000000000 - s );
      else
      if ( ( col <= i && i < ecol ) || ( col <= j && j < ecol ) )
        ss = s * -( 1.000000000000 - s );
      else
        ss = s * s;
      t->matrix[0].me[ j + ( t->matrix->dim * i ) ] += w * ss;
      //j++;
    }
    //i++;
  }
  return;
}
void correct_table_matrix3( struct table *t, int col, char *flags, double s, double b )
{
  int i, j;
  double ss;
  int size = t->maxcol + 1;
  double w = 1.000000000000 / ( b * b );
  int flg = ( flags[ col ] & 255 ) == 0;
  i = 0;
  for ( ; i < size; i++ )
  {
    if ( flg == 0 || ( flags[ i ] & 255 ) != 0 )
    {
      if ( flg == 0 )
      {
        if ( ( flags[ i ] & 255 ) == 0 )
        {
          //i++;
        }
      }
      else
      {
      }
    }
    j = i;
    for ( ; j < size; j++ )
    {
      if ( flg == 0 || ( flags[ j ] & 255 ) != 0 )
      {
        if ( flg == 0 )
        {
          if ( ( flags[ j ] & 255 ) == 0 )
          {
            //j++;
          }
        }
        else
        {
        }
      }
      if ( i == col && j == col )
        ss = ( 1.000000000000 - s ) * ( 1.000000000000 - s );
      else
      if ( i == col || j == col )
        ss = s * -( 1.000000000000 - s );
      else
        ss = s * s;
      t->matrix[0].me[ j + ( t->matrix->dim * i ) ] += w * ss;
    }
  }
  return;
}
void correct_table_matrix4( struct table *t, int col, int cspan, char *flags, double s, double b )
{
  int i, j;
  double ss;
  int ecol = cspan + col;
  int size = t->maxcol + 1;
  double w = 1.000000000000 / ( b * b );
  i = 0;
  for ( ; i < size; i++ )
  {
    if ( ( flags[ i ] & 255 ) != 0 )
    {
      if ( col <= i )
      {
        if ( ecol <= i )
        {
          //i++;
        }
      }
      else
      {
      }
    }
    j = i;
    for ( ; j < size; j++ )
    {
      if ( ( flags[ j ] & 255 ) != 0 )
      {
        if ( col <= j )
        {
          if ( ecol <= j )
          {
            //j++;
          }
        }
        else
        {
        }
      }
      if ( col <= i && i < ecol && col <= j && j < ecol )
        ss = ( 1.000000000000 - s ) * ( 1.000000000000 - s );
      else
      if ( ( col <= i && i < ecol ) || ( col <= j && j < ecol ) )
        ss = s * -( 1.000000000000 - s );
      else
        ss = s * s;
      t->matrix[0].me[ j + ( t->matrix->dim * i ) ] += w * ss;
    }
  }
  return;
}
void set_table_matrix0( struct table *t, int maxwidth )
{
  int edx;
  double fp5;
  double fp6;
  double fp7;
  int size = t->maxcol + 1;
  int i, j, k, bcol, ecol;
  int width;
  double w0, w1, w, s, b;
  double we[];
  char expand[];
  struct table_cell *cell = &t->cell;
  w0 = 0.000000000000;
  i = 0;
  for ( ; i < size; i++ )
  {
    w0 += *(double*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i << 3 ));
    //i++;
  }
  w0 = w0;
  if ( ( ( ( ( 0.000000000000 <> w0 ) & 1 ) == 0 ) & 255 ) != 0 )
    w0 = 1.000000000000;
  if ( ( cell->necell & 65535 ) == 0 )
  {
    i = 0;
    for ( ; i < size; i++ )
    {
      s = *(double*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i << 3 )) / w0;
      b = weight2( (int)( s * (double)( maxwidth ) ) ) * 32.000000000000;
      correct_table_matrix2( t, i, 1, s, b );
      //i++;
    }
  }
  else
  {
    bzero( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) - ( ( ( size + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4, size );
    k = 0;
    for ( ; k < cell->necell; k++ )
    {
      j = cell->eindex[ k ];
      bcol = cell->col[ j ];
      ecol = bcol + cell->colspan[ j ];
      width = cell->width[ j ] + ( t->cellspacing * ( 1 - cell->colspan[ j ] ) );
      w1 = 0.000000000000;
      i = bcol;
      for ( ; i < ecol; i++ )
      {
        w1 += (double)( t->tabwidth[ i ] ) + 0.100000000000;
        i/*.1_1of4*/ = *(char*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) - ( ( ( size + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + i) + 1;
        //i++;
      }
      i = bcol;
      for ( ; i < ecol; i++ )
      {
        w = weight( (int)( ( (double)( width ) * ( (double)( t->tabwidth[ i ] ) + 0.100000000000 ) ) / w1 ) );
        if ( !(bit)( 0 ) )
        {
        }
        //i++;
      }
      //k++;
    }
    w0 = 0.000000000000;
    w1 = 0.000000000000;
    i = 0;
    for ( ; i < size; i++ )
    {
      w0 += *(double*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i << 3 ));
      if ( ( *(char*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) - ( ( ( size + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + i) & 255 ) == 0 )
        w1 += *(double*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i << 3 ));
      //i++;
    }
    w0 = w0;
    if ( ( ( ( ( 0.000000000000 <> w0 ) & 1 ) == 0 ) & 255 ) != 0 )
      w0 = 1.000000000000;
    k = 0;
    for ( ; k < cell->necell; k++ )
    {
      j = cell->eindex[ k ];
      bcol = cell->col[ j ];
      width = cell->width[ j ] + ( t->cellspacing * ( 1 - cell->colspan[ j ] ) );
      w = weight( width );
      s = w / ( w1 + w );
      b = weight2( (int)( s * (double)( maxwidth ) ) ) * 32.000000000000;
      correct_table_matrix4( t, bcol, cell->colspan[ j ], ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) - ( ( ( size + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4, s, b );
      //k++;
    }
    i = 0;
    for ( ; i < size; i++ )
    {
      if ( ( *(char*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) - ( ( ( size + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + i) & 255 ) == 0 )
      {
        *(double*)(*(double*)(ebp_68 + ( i << 3 ))) = *(double*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i << 3 ));
        s = *(double*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i << 3 )) / ( (bit)( 0 ) ? 1.000000000000 : w1 );
        b = weight2( (int)( s * (double)( maxwidth ) ) ) * 0.000000000000;
      }
      else
      {
        *(double*)(*(double*)(ebp_68 + ( i << 3 ))) = *(double*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i << 3 ));
        s = *(double*)(( ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4 ) + ( i << 3 )) / 0.000000000000;
        b = weight2( maxwidth ) * 32.000000000000;
      }
      correct_table_matrix3( t, i, ( ( ( ebp_232 - ( ( ( ( size << 3 ) + 30 ) >> 4 ) << 4 ) - ( ( ( size + 30 ) >> 4 ) << 4 ) ) + 47 ) >> 4 ) << 4, s, b );
      //i++;
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void check_relative_width( struct table *t, int maxwidth )
{
  double fp7;
  int i;
  double rel_total = 0.000000000000;
  int size = t->maxcol + 1;
  double *rcolwidth = GC_malloc( size << 3 );
  struct table_cell *cell = &t->cell;
  int n_leftcol = 0;
  i = 0;
  for ( ; i < size; i++ )
  {
    rcolwidth[ i ] = 0.000000000000;
    //i++;
  }
  i = 0;
  for ( ; i < size; i++ )
  {
    if ( t->fixed_width[ i ] < 0 )
      rcolwidth[ i ] = (double)( t->fixed_width[ i ] ) / -100.000000000000;
    else
    if ( t->fixed_width[ i ] > 0 )
      rcolwidth[ i ] = (double)( t->fixed_width[ i ] ) / (double)( maxwidth );
    else
      n_leftcol++;
    //i++;
  }
  i = 0;
  for ( ; i <= cell->maxcell; i++ )
  {
    if ( cell->fixed_width[ i ] < 0 )
    {
      double w = (double)( cell->fixed_width[ i ] ) / -100.000000000000;
      double r;
      int j, k;
      int n_leftcell = 0;
      k = cell->col[ i ];
      r = 0.000000000000;
      j = 0;
      for ( ; j < cell->colspan[ i ]; j++ )
      {
        if ( !(bit)( 0 ) )
          r += rcolwidth[ k + j ];
        else
          n_leftcell++;
        //j++;
      }
      if ( n_leftcell == 0 )
      {
        r = r;
        if ( ( ( ( ( w <> r ) & 69 ) >> 2 ) & 1 ) == 1 )
          cell->fixed_width[ i ] = ebp_94;
      }
      else
      {
        w = w;
        if ( ( ( ( ( r <> w ) & 1 ) == 0 ) & 255 ) != 0 )
        {
          w = ( r * (double)( cell->colspan[ i ] ) ) / (double)( cell->colspan[ i ] - n_leftcell );
          cell->fixed_width[ i ] = ebp_94;
        }
        j = 0;
        for ( ; j < cell->colspan[ i ]; j++ )
        {
          if ( ( ( ( ( rcolwidth[ k + j ] <> 0.000000000000 ) & 69 ) >> 6 ) & 1 ) == 1 )
            rcolwidth[ k + j ] = ( w - r ) / (double)( n_leftcell );
          //j++;
        }
      }
    }
    //i++;
  }
  i = 0;
  for ( ; i < size; i++ )
  {
    rel_total += rcolwidth[ i ];
    //i++;
  }
  if ( ( n_leftcol == 0 && !(bit)( 0 ) ) || !(bit)( 0 ) )
  {
    i = 0;
    for ( ; i < size; i++ )
    {
      rcolwidth[ i ] /= rel_total;
      //i++;
    }
    i = 0;
    for ( ; i < size; i++ )
    {
      if ( t->fixed_width[ i ] < 0 )
        t->fixed_width[ i ] = ebp_94;
      //i++;
    }
    i = 0;
    for ( ; i <= cell->maxcell; i++ )
    {
      if ( cell->fixed_width[ i ] < 0 )
      {
        double r;
        int j, k = cell->col[ i ];
        r = 0.000000000000;
        j = 0;
        for ( ; j < cell->colspan[ i ]; j++ )
        {
          r += rcolwidth[ k + j ];
          //j++;
        }
        cell->fixed_width[ i ] = ebp_94;
      }
      //i++;
    }
  }
  return;
}
void set_table_matrix( struct table *t, int width )
{
  int size = t->maxcol + 1;
  int i, j;
  double b, s;
  int a;
  struct table_cell *cell = &t->cell;
  if ( size < 1 )
  {
    return;
  }
  t->matrix = new_matrix( size );
  t->vector = new_vector( size );
  i = 0;
  for ( ; i < size; i++ )
  {
    j = i;
    for ( ; j < size; j++ )
    {
      t->matrix[0].me[ j + ( t->matrix->dim * i ) ] = 0.000000000000;
      //j++;
    }
    t->vector[0].ve[ i ] = 0.000000000000;
    //i++;
  }
  check_relative_width( t, width );
  i = 0;
  for ( ; i < size; i++ )
  {
    if ( t->fixed_width[ i ] > 0 )
    {
      a = 0 ? t->fixed_width[ i ] : t->minimum_width[ i ];
      b = weight2( a ) * 0.500000000000;
      correct_table_matrix( t, i, 1, a, b );
    }
    if ( t->fixed_width[ i ] < 0 )
    {
      s = (double)( t->fixed_width[ i ] ) / -100.000000000000;
      b = weight2( (int)( s * (double)( width ) ) ) * 0.500000000000;
      correct_table_matrix2( t, i, 1, s, b );
    }
    //i++;
  }
  j = 0;
  for ( ; cell->maxcell < j; j++ )
  {
    if ( cell->fixed_width[ j ] > 0 )
    {
      a = 0 ? cell->fixed_width[ j ] : cell->minimum_width[ j ];
      b = weight2( a ) * 0.500000000000;
      correct_table_matrix( t, cell->col[ j ], cell->colspan[ j ], a, b );
    }
    if ( cell->fixed_width[ j ] < 0 )
    {
      s = (double)( cell->fixed_width[ j ] ) / -100.000000000000;
      b = weight2( (int)( s * (double)( width ) ) ) * 0.500000000000;
      correct_table_matrix2( t, cell->col[ j ], cell->colspan[ j ], s, b );
      //j++;
    }
    else
    {
      //j++;
    }
  }
}
