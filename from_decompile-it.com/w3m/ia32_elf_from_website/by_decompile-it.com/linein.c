#include "linein.c.h"
static void addPasswd( char *p, Lineprop *pr, int len, int offset, int limit );
static void addStr( char *p, Lineprop *pr, int len, int offset, int limit );
static void ins_char( Str str );
static void _esc( void );
static void insC( void );
static void delC( void );
static void _mvL( void );
static void _mvLw( void );
static void _mvRw( void );
static void _mvR( void );
static void _bs( void );
static void _bsw( void );
static void _enter( void );
static void insertself( char c );
static void _quo( void );
static void _mvB( void );
static void _mvE( void );
static void killn( void );
static void killb( void );
static void _inbrk( void );
static void _compl( void );
static void _rcompl( void );
static void _tcompl( void );
static void next_compl( int next );
static void _dcompl( void );
static void _rdcompl( void );
static void next_dcompl( int next );
static Str doComplete( Str ifn, int *status, int next );
static void _prev( void );
static void _next( void );
static int setStrType( Str str, Lineprop *prop );
static int terminated( unsigned char c );
static void _editor( void );
static Str strBuf;
static Lineprop strProp[1024];
static Str CompleteBuf;
static Str CFileName;
static Str CBeforeBuf;
static Str CAfterBuf;
static Str CDirBuf;
static char **CFileBuf;
static int NCFileBuf;
static int NCFileOffset;
void (*InputKeymap[32])( void ) = { &_compl, &_mvB, &_mvL, &_inbrk, &delC, &_mvE, &_mvR, &_inbrk, &_bs, &insertself, &_enter, &killn, &insertself, &_enter, &_next, &_editor, &_prev, &_quo, &_bsw, &insertself, &_mvLw, &killb, &_quo, &_bsw, &_tcompl, &_mvRw, &insertself, &_esc, &insertself, &insertself, &insertself, &insertself,  };
static int CPos;
static int CLen;
static int offset;
static int i_cont;
static int i_broken;
static int i_quote;
static int cm_mode;
static int cm_next;
static int cm_clear;
static int cm_disp_next;
static int cm_disp_clear;
static int need_redraw;
static int is_passwd;
static int move_word;
static Hist *CurrentHist;
static Str strCurrentBuf;
static int use_hist;
char *inputLineHistSearch( char *prompt, char *def_str, int flag, Hist *hist, int (*incrfunc)( int , Str , Lineprop * ) )
{
  int opos, x, y, lpos, rpos, epos;
  unsigned char c;
  char *p;
  Str tmp;
  is_passwd = 0;
  move_word = 1;
  CurrentHist = hist;
  if ( hist != 0 )
  {
    use_hist = 1;
    strCurrentBuf = 0;
  }
  else
    use_hist = 0;
  if ( ( flag & 256 ) != 0 )
    cm_mode = 12;
  else
  if ( ( flag & 32 ) != 0 )
    cm_mode = 4;
  else
  if ( ( flag & 64 ) != 0 )
  {
    cm_mode = 0;
    is_passwd = 1;
    move_word = 0;
  }
  else
  if ( ( flag & 128 ) != 0 )
    cm_mode = 2;
  else
    cm_mode = 1;
  opos = wtf_strwidth( (wc_uchar*)prompt );
  epos = COLS - 2 - opos;
  if ( epos < 0 )
    epos = 0;
  lpos = epos / 3;
  rpos = ( epos * 2 ) / 3;
  offset = 0;
  if ( def_str != 0 )
  {
    strBuf = Strnew_charp( def_str );
    CLen = CPos = setStrType( strBuf, strProp );
  }
  else
  {
    strBuf = Strnew( );
    CLen = CPos = 0;
  }
  i_cont = 1;
  i_broken = 0;
  i_quote = 0;
  cm_next = 0;
  cm_disp_next = -1;
  need_redraw = 0;
  wc_char_conv_init( wc_guess_8bit_charset( DisplayCharset ), InnerCharset );
  do
  {
    x = calcPosition( strBuf->ptr, strProp, CLen, CPos, 0, 1 );
    if ( offset < x - rpos )
    {
      y = calcPosition( strBuf->ptr, strProp, CLen, CLen, 0, 0 );
      if ( x - rpos < y - epos )
        offset = x - rpos;
      else
      if ( y - epos >= 1 )
        offset = y - epos;
    }
    else
    if ( x - lpos < offset )
    {
      if ( x - lpos >= 1 )
        offset = x - lpos;
      else
        offset = 0;
    }
    move( LINES - 1, 0 );
    addstr( prompt );
    if ( is_passwd != 0 )
      addPasswd( strBuf->ptr, strProp, CLen, offset, COLS - opos );
    else
      addStr( strBuf->ptr, strProp, CLen, offset, COLS - opos );
    clrtoeolx( );
    move( LINES - 1, ( x + opos ) - offset );
    refresh( );
    do
    {
      c = do_getch( );
      cm_clear = 1;
      cm_disp_clear = 1;
      if ( i_quote == 0 && ( ( ( cm_mode & 4 ) != 0 && ( c == 9 || c == ' ' ) ) || ( ( cm_mode & 2 ) != 0 && c == 9 ) ) )
      {
        if ( emacs_like_lineedit != 0 && cm_next != 0 )
        {
          _dcompl( );
          need_redraw = 1;
        }
        else
        {
          _compl( );
          cm_disp_next = -1;
        }
      }
      else
      if ( i_quote == 0 && CPos == CLen && ( ( cm_mode & 4 ) != 0 || ( cm_mode & 2 ) != 0 ) && c == 4 )
      {
        if ( emacs_like_lineedit != 0 )
        {
        }
        else
        {
          _dcompl( );
          need_redraw = 1;
        }
      }
      else
      if ( i_quote == 0 && c == 127 )
      {
        _bs( );
        cm_next = 0;
        cm_disp_next = -1;
      }
      else
      if ( i_quote == 0 && c >= 31 )
      {
        if ( incrfunc != 0 )
        {
          incrfunc( c, strBuf, strProp[0] );
          c = incrfunc;
          if ( c < 31 )
          {
            if ( incrfunc != 0 && c != -1 && c != 10 )
              incrfunc( -1, strBuf, strProp[0] );
            if ( cm_clear != 0 )
              cm_next = 0;
            if ( cm_disp_clear == 0 )
            {
            }
            else
              cm_disp_next = -1;
          }
        }
        InputKeymap[ c ]( );
      }
      else
      {
        tmp = wc_char_conv( c );
        if ( tmp == 0 )
        {
          i_quote = 1;
        }
        else
        {
          i_quote = 0;
          cm_next = 0;
          cm_disp_next = -1;
          if ( tmp->length + CLen > 1024 || tmp->length == 0 )
            continue;
          else
          {
            ins_char( tmp );
            if ( incrfunc != 0 )
            {
              incrfunc( -1, strBuf, strProp[0] );
            }
          }
        }
      }
      if ( CLen != 0 && ( flag & 512 ) != 0 )
      {
      }
      else
      if ( i_cont != 0 )
      {
        do
        {
          x = calcPosition( strBuf->ptr, strProp, CLen, CPos, 0, 1 );
        }
        while ( i_cont != 0 );
      }
      if ( CurrentTab != 0 && need_redraw != 0 )
        displayBuffer( CurrentTab->currentBuffer, 1 );
      if ( i_broken != 0 )
      {
        break;
      }
      else
      {
        move( LINES - 1, 0 );
        refresh( );
        p = strBuf->ptr;
        if ( ( flag & 160 ) != 0 )
        {
          for ( ; ( p[0] & 255 ) != 0 && ( MYCTYPE_MAP[ p[0] ] & 2 ) != 0; p++ )
          {
            //p++;
          }
        }
        if ( use_hist != 0 && ( flag & 256 ) == 0 && ( p[0] & 255 ) != 0 )
        {
          char *q = lastHist( hist );
          if ( q == 0 || strcmp( q, p ) != 0 )
            pushHist( hist, p );
        }
        if ( ( flag & 32 ) != 0 )
        {
          expandPath( p );
          break;
        }
        else
        {
          allocStr( p, -1 );
          break;
        }
      }
    }
    while ( tmp->length != 0 );
  }
  while ( i_cont != 0 );
}
void addPasswd( char *p, Lineprop *pr, int len, int offset, int limit )
{
  int rcol = 0, ncol = calcPosition( p, pr, len, len, 0, 0 );
  if ( offset + limit < ncol )
    ncol = offset + limit;
  if ( offset != 0 )
  {
    addChar( '{', 0 );
    rcol = offset + 1;
  }
  while ( rcol < ncol )
  {
    addChar( '*', 0 );
    rcol++;
  }
  return;
}
void addStr( char *p, Lineprop *pr, int len, int offset, int limit )
{
  int i = 0, rcol = 0, ncol, delta = 1;
  if ( offset != 0 )
  {
    i = 0;
    for ( ; i < len; i++ )
    {
      if ( offset < calcPosition( p, pr, len, i, 0, 0 ) )
      {
      }
      else
      {
        //i++;
      }
      if ( len <= i )
      {
        break;
      }
      else
      {
        while ( ( pr[ i ] & 1024 ) != 0 )
        {
          i++;
        }
        addChar( '{', 0 );
        rcol = offset + 1;
        ncol = calcPosition( p, pr, len, i, 0, 0 );
        for ( ; rcol < ncol; rcol++ )
        {
          addChar( ' ', 0 );
          //rcol++;
        }
        while ( i < len )
        {
          delta = wtf_len( &p[ i ] );
          ncol = calcPosition( p, pr, len, i + delta, 0, 0 );
          if ( limit < ncol - offset )
          {
            break;
          }
          else
          {
            if ( p[ i ] == 9 )
            {
              for ( ; rcol < ncol; rcol++ )
              {
                addChar( ' ', 0 );
                //rcol++;
              }
            }
            else
            {
              addMChar( &p[ i ], pr[ i ], delta );
              rcol = ncol;
            }
            i += delta;
          }
        }
        break;
      }
    }
  }
  return;
}
void ins_char( Str str )
{
  int ah;
  char *p = str->ptr, *ep = &p[ str->length ];
  Lineprop ctype;
  int len;
  if ( str->length + CLen > 1023 )
  {
  }
  else
  do
  {
    if ( p < ep )
    {
      len = WTF_LEN_MAP[ p[0] ];
      ctype = WTF_TYPE_MAP[ p[0] ] << 8;
      if ( is_passwd != 0 )
      {
        if ( ( ctype & 256 ) != 0 )
          ctype = 0;
        if ( ( ctype & 4096 ) != 0 )
          ctype = 512;
      }
      insC( );
      strBuf->ptr[ CPos ] = p[0];
      p++;
      strProp[ CPos ] = ctype;
      CPos++;
      len--;
      if ( len == 0 )
        continue;
      else
      {
        ctype = "( ( ( ah & 249 ) | 4 ) & 249 ) | 4 # ctype";
        while ( len-- )
        }
      }
    }
    while ( ( ( len != 0 ) & 255 ) != 0 );
    insC( );
    strBuf->ptr[ CPos ] = p[0];
    p++;
    strProp[ CPos ] = ctype;
    CPos++;
    while ( len-- )
    {
      insC( );
      strBuf->ptr[ CPos ] = p[0];
      p++;
      strProp[ CPos ] = ctype;
      CPos++;
    }
    return;
}
void _esc( void )
{
  char c = do_getch( );
  switch ( c )
  {
    if ( wc_char_conv( 27 ) == 0 )
    {
      if ( wc_char_conv( c ) == 0 )
      {
        i_quote = 1;
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
    break;
    break;
  default:
    break;
  case 79:
  case 91:
    c = do_getch( );
    switch ( c )
    {
    case 65:
      _prev( );
      break;
    case 66:
      _next( );
      break;
    case 67:
      _mvR( );
      break;
    case 68:
      _mvL( );
      break;
      break;
    default:
      break;
    }
    return;
    break;
  case 9:
  case 32:
    if ( emacs_like_lineedit != 0 )
    {
      _rdcompl( );
      cm_clear = 0;
      need_redraw = 1;
    }
    else
    {
      _rcompl( );
    }
    break;
  case 4:
    if ( emacs_like_lineedit == 0 )
      _rdcompl( );
    need_redraw = 1;
    break;
  case 102:
    if ( emacs_like_lineedit != 0 )
    {
      _mvRw( );
      return;
    }
    else
    {
      return;
    }
    break;
  case 98:
    if ( emacs_like_lineedit != 0 )
    {
      _mvLw( );
    }
    else
    {
    }
    break;
  case 8:
    if ( emacs_like_lineedit != 0 )
    {
      _bsw( );
    }
    else
    {
    }
    break;
  }
  return;
}
void insC( void )
{
  int i;
  Strinsert_char( strBuf, CPos, ' ' );
  CLen = strBuf->length;
  i = CLen;
  for ( ; CPos < i; i-- )
  {
    strProp[ i ] = strProp[ i - 1 ];
    //i--;
  }
  return;
}
void delC( void )
{
  int i = CPos;
  int delta = 1;
  if ( CPos == CLen )
  {
  }
  else
  {
    while ( i + delta < CLen && ( strProp[ i + delta ] & 1024 ) != 0 )
    {
      delta++;
    }
    i = CPos;
    for ( ; i < CLen; i++ )
    {
      strProp[ i ] = strProp[ i + delta ];
      //i++;
    }
    Strdelete( strBuf, CPos, delta );
    CLen -= delta;
  }
  return;
}
void _mvL( void )
{
  if ( CPos >= 1 )
  {
    CPos--;
    while ( CPos >= 1 && ( strProp[ CPos ] & 1024 ) != 0 )
    {
      CPos--;
    }
    return;
  }
  else
  {
  }
}
void _mvLw( void )
{
  int first = 1;
  do
  {
    if ( CPos >= 1 )
    {
      if ( first == 0 && terminated( strBuf->ptr[ CPos - 1 ] ) != 0 )
      {
        break;
      }
      else
      {
        CPos--;
        first = 0;
        if ( CPos >= 1 && ( strProp[ CPos ] & 1024 ) != 0 )
          CPos--;
      }
    }
  }
  while ( move_word != 0 );
  return;
}
void _mvRw( void )
{
  int first = 1;
  do
  {
    if ( CPos < CLen )
    {
      if ( first == 0 && terminated( strBuf->ptr[ CPos - 1 ] ) != 0 )
      {
        break;
      }
      else
      {
        CPos++;
        first = 0;
        if ( CPos < CLen && ( strProp[ CPos ] & 1024 ) != 0 )
          CPos++;
      }
    }
  }
  while ( move_word != 0 );
  return;
}
void _mvR( void )
{
  if ( CPos < CLen )
  {
    CPos++;
    while ( CPos < CLen && ( strProp[ CPos ] & 1024 ) != 0 )
    {
      CPos++;
    }
    return;
  }
  else
  {
  }
}
void _bs( void )
{
  if ( CPos >= 1 )
  {
    _mvL( );
    delC( );
  }
  return;
}
void _bsw( void )
{
  int t = 0;
  while ( CPos >= 1 && t == 0 )
  {
    _mvL( );
    t = move_word == 0 || terminated( strBuf->ptr[ CPos - 1 ] ) == 0 ? 0 : 1;
    delC( );
  }
  return;
}
void _enter( void )
{
  i_cont = 0;
  return;
}
void insertself( char c )
{
  int edx;
  if ( CLen > 1023 )
  {
  }
  else
  {
    insC( );
    strBuf->ptr[ CPos ] = c;
    strProp[ CPos ] = is_passwd == 0 ? 256 : 0;
    CPos++;
  }
  return;
}
void _quo( void )
{
  i_quote = 1;
  return;
}
void _mvB( void )
{
  CPos = 0;
  return;
}
void _mvE( void )
{
  CPos = CLen;
  return;
}
void killn( void )
{
  CLen = CPos;
  Strtruncate( strBuf, CLen );
  return;
}
void killb( void )
{
  while ( CPos >= 1 )
  {
    _bs( );
  }
  return;
}
void _inbrk( void )
{
  i_cont = 0;
  i_broken = 1;
  return;
}
void _compl( void )
{
  next_compl( 1 );
  return;
}
void _rcompl( void )
{
  next_compl( -1 );
  return;
}
void _tcompl( void )
{
  if ( ( cm_mode & 1 ) != 0 )
  {
    cm_mode = 2;
  }
  else
  if ( ( cm_mode & 2 ) != 0 )
  {
    cm_mode = 1;
  }
  return;
}
void next_compl( int next )
{
  int status;
  int b, a;
  Str buf;
  Str s;
  if ( cm_mode != 0 )
  {
    if ( ( cm_mode & 1 ) != 0 )
    {
    }
    else
    {
      cm_clear = 0;
      if ( cm_next == 0 )
      {
        if ( ( cm_mode & 4 ) != 0 )
          b = 0;
        else
        {
          b = CPos - 1;
          for ( ; b >= 0 && ( ( strBuf->ptr[ b ] != ' ' && strBuf->ptr[ b ] != 9 ) || ( b >= 1 && strBuf->ptr[ b - 1 ] == '\\' ) ); b-- )
          {
            //b--;
          }
          b++;
        }
        a = CPos;
        CBeforeBuf = Strsubstr( strBuf, 0, b );
        buf = Strsubstr( strBuf, b, a - b );
        CAfterBuf = Strsubstr( strBuf, a, strBuf->length - a );
        s = doComplete( buf, &status, next );
      }
      else
      {
        s = doComplete( strBuf, &status, next );
      }
      if ( next == 0 )
      {
      }
      else
      {
        if ( status != 0 && status != 3 )
          bell( );
        if ( status == 2 )
        {
        }
        else
        {
          strBuf = Strnew_m_charp( CBeforeBuf->ptr, s->ptr, (long long)( CAfterBuf->ptr ) );
          CLen = setStrType( strBuf, strProp );
          CPos = s->length + CBeforeBuf->length;
          if ( CLen < CPos )
          {
            CPos = CLen;
          }
        }
      }
    }
  }
  else
  {
  }
  return;
}
void _dcompl( void )
{
  next_dcompl( 1 );
  return;
}
void _rdcompl( void )
{
  next_dcompl( -1 );
  return;
}
void next_dcompl( int next )
{
  static int col, row, len;
  static Str d;
  int i, j, n, y;
  Str f;
  char *p;
  struct stat st;
  int comment, nline;
  if ( cm_mode != 0 )
  {
    if ( ( cm_mode & 1 ) != 0 )
    {
      return;
    }
    else
    {
      cm_disp_clear = 0;
      if ( CurrentTab != 0 )
        displayBuffer( CurrentTab->currentBuffer, 1 );
      if ( LINES - 1 > 2 )
      {
        comment = 1;
        nline = LINES - 3;
      }
      else
      if ( LINES != 1 )
      {
        comment = 0;
        nline = LINES - 1;
      }
      else
      {
        return;
      }
      if ( cm_disp_next >= 0 )
      {
        if ( next == 1 )
        {
          cm_disp_next += nline * col;
          if ( NCFileBuf <= cm_disp_next )
            cm_disp_next = 0;
        }
        else
        if ( next == -1 )
        {
          cm_disp_next -= nline * col;
          if ( cm_disp_next < 0 )
            cm_disp_next = 0;
        }
        row = ( ( col + ( NCFileBuf - cm_disp_next ) ) - 1 ) / col;
      }
      else
      {
        cm_next = 0;
        next_compl( 0 );
        if ( NCFileBuf == 0 )
        {
          return;
        }
        else
        {
          cm_disp_next = 0;
          d = wc_Str_conv_strict( Strdup( CDirBuf ), InnerCharset, SystemCharset );
          if ( d->length >= 1 && ( d->length < 1 || d->ptr[ d->length - 1 ] != '/' ) )
          {
            if ( d->area_size <= d->length + 1 )
              Strgrow( d );
            d->ptr[ d->length ] = '/';
            d->length++;
            d->ptr[ d->length ] = 0;
          }
          if ( ( cm_mode & 8 ) != 0 && d->ptr[0] == 'f' )
          {
            p = d->ptr;
            if ( strncmp( p, "file://localhost/", 17 ) == 0 )
              p += 16;
            else
            {
              if ( strncmp( p, "file:///", 8 ) == 0 )
                p += 7;
              else
              {
                if ( strncmp( p, "file:/", 6 ) == 0 && p[6] != '/' )
                  p += 5;
              }
            }
            d = Strnew_charp( p );
          }
          len = 0;
          i = 0;
          for ( ; i < NCFileBuf; i++ )
          {
            n = strlen( CFileBuf[ i ] ) + 3;
            if ( len < n )
              len = n;
            //i++;
          }
          col = COLS / len;
          if ( col == 0 )
            col = 1;
          row = ( ( col + NCFileBuf ) - 1 ) / col;
        }
      }
      if ( comment != 0 )
      {
        if ( nline < row )
        {
          row = nline;
          y = 0;
        }
        else
          y = ( nline - row ) + 1;
      }
      else
      if ( nline <= row )
      {
        row = nline;
        y = 0;
      }
      else
        y = nline - row - 1;
      if ( y != 0 )
      {
        move( y - 1, 0 );
        clrtoeolx( );
      }
      if ( comment != 0 )
      {
        move( y, 0 );
        clrtoeolx( );
        bold( );
        addstr( "----- Completion list -----" );
        boldend( );
        y++;
      }
      i = 0;
      for ( ; i < row; i++ )
      {
        j = 0;
        for ( ; j < col; j++ )
        {
          n = i + cm_disp_next + ( row * j );
          if ( NCFileBuf <= n )
          {
          }
          else
          {
            move( y, len * j );
            clrtoeolx( );
            f = Strdup( d );
            Strcat_charp( f, CFileBuf[ n ] );
            addstr( *(int*)(wc_Str_conv( Strnew_charp( CFileBuf[ n ] ), SystemCharset, InnerCharset )) );
            if ( stat( expandPath( f->ptr ), &st.st_dev ) != -1 && ( st.st_mode & 61440 ) == 16384 )
              addstr( "/" );
            //j++;
          }
          y++;
          i++;
          break;
        }
        y++;
        //i++;
      }
      if ( comment != 0 && y == LINES - 2 )
      {
        move( y, 0 );
        clrtoeolx( );
        bold( );
        if ( emacs_like_lineedit != 0 )
          addstr( "----- Press TAB to continue -----" );
        else
          addstr( "----- Press CTRL-D to continue -----" );
        boldend( );
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
Str escape_spaces( Str s )
{
  int eax;
  Str tmp = 0;
  char *p;
  if ( s == 0 )
  {
    s->ptr = (char*)s;
  }
  else
  {
    p = s->ptr;
    for ( ; ( p[0] & 255 ) != 0; p++ )
    {
      if ( p[0] == ' ' || p[0] == 9 )
      {
        if ( tmp == 0 )
        {
          tmp = Strnew_charp_n( s->ptr, p - s->ptr );
        }
        if ( tmp->area_size <= tmp->length + 1 )
          Strgrow( tmp );
        tmp->ptr[ tmp->length ] = '\\';
        tmp->length++;
        tmp->ptr[ tmp->length ] = 0;
      }
      if ( tmp != 0 )
      {
        if ( tmp->area_size <= tmp->length + 1 )
          Strgrow( tmp );
        tmp->ptr[ tmp->length ] = p[0];
        tmp->length++;
        tmp->ptr[ tmp->length ] = 0;
      }
      //p++;
    }
    if ( tmp != 0 )
    {
      tmp->ptr = (char*)tmp;
    }
    else
    {
      s->ptr = (char*)s;
    }
  }
  return tmp;
}
Str unescape_spaces( Str s )
{
  int eax;
  Str tmp = 0;
  char *p;
  if ( s == 0 )
  {
    s->ptr = (char*)s;
  }
  else
  {
    p = s->ptr;
    for ( ; ( p[0] & 255 ) != 0; p++ )
    {
      if ( p[0] == '\\' && ( p[1] == ' ' || p[1] == 9 ) )
      {
        if ( tmp != 0 )
        {
        }
        else
        {
          tmp = Strnew_charp_n( s->ptr, p - s->ptr );
        }
      }
      else
      if ( tmp != 0 )
      {
        if ( tmp->area_size <= tmp->length + 1 )
          Strgrow( tmp );
        tmp->ptr[ tmp->length ] = p[0];
        tmp->length++;
        tmp->ptr[ tmp->length ] = 0;
      }
      //p++;
    }
    if ( tmp != 0 )
    {
      tmp->ptr = (char*)tmp;
    }
    else
    {
      s->ptr = (char*)s;
    }
  }
  return tmp;
}
Str doComplete( Str ifn, int *status, int next )
{
  int eax;
  int fl, i;
  char *fn, *p;
  DIR *d;
  Directory *dir;
  struct stat st;
  if ( cm_next == 0 )
  {
    NCFileBuf = 0;
    ifn = wc_Str_conv_strict( ifn, InnerCharset, SystemCharset );
    if ( ( cm_mode & 2 ) != 0 )
    {
      ifn = unescape_spaces( ifn );
    }
    CompleteBuf = Strdup( ifn );
    while ( ( CompleteBuf->length < 1 || CompleteBuf->ptr[ CompleteBuf->length - 1 ] != '/' ) && CompleteBuf->length >= 1 )
    {
      Strshrink( CompleteBuf, 1 );
    }
    CDirBuf = Strdup( CompleteBuf );
    if ( ( cm_mode & 8 ) != 0 )
    {
      if ( strncmp( CompleteBuf->ptr, "file://localhost/", 17 ) == 0 )
        Strdelete( CompleteBuf, 0, 16 );
      else
      {
        if ( strncmp( CompleteBuf->ptr, "file:///", 8 ) == 0 )
          Strdelete( CompleteBuf, 0, 7 );
        else
        {
          if ( strncmp( CompleteBuf->ptr, "file:/", 6 ) == 0 && CompleteBuf->ptr[6] != '/' )
            Strdelete( CompleteBuf, 0, 5 );
          else
            Strdup( ifn );
          CompleteBuf = CompleteBuf;
          status[0] = 2;
          wc_Str_conv_strict( CompleteBuf, InnerCharset, SystemCharset );
        }
      }
      return CompleteBuf;
    }
    else
    {
      if ( CompleteBuf->length == 0 )
      {
        if ( CompleteBuf->area_size <= CompleteBuf->length + 1 )
          Strgrow( CompleteBuf );
        CompleteBuf->ptr[ CompleteBuf->length ] = '.';
        CompleteBuf->length++;
        CompleteBuf->ptr[ CompleteBuf->length ] = 0;
      }
      if ( CompleteBuf->length >= 1 && CompleteBuf->ptr[ CompleteBuf->length - 1 ] == '/' && CompleteBuf->length > 1 )
        Strshrink( CompleteBuf, 1 );
      d = opendir( expandPath( CompleteBuf->ptr ) );
      if ( d == 0 )
      {
        CompleteBuf = Strdup( ifn );
        status[0] = 2;
        if ( ( cm_mode & 2 ) != 0 )
        {
          CompleteBuf = escape_spaces( CompleteBuf );
        }
        CompleteBuf->ptr = (char*)CompleteBuf;
        return CompleteBuf;
      }
      else
      {
        fn = lastFileName( ifn->ptr );
        fl = strlen( fn );
        CFileName = Strnew( );
        while ( dir == 0 )
        {
          if ( fl == 0 && ( strcmp( &dir->d_name[0], "." ) == 0 || strcmp( &dir->d_name[0], ".." ) == 0 ) )
          {
          }
          else
          {
            if ( strncmp( &dir->d_name[0], fn, fl ) == 0 )
            {
              NCFileBuf++;
              CFileBuf = GC_realloc( CFileBuf, NCFileBuf << 2 );
              CFileBuf[ NCFileBuf - 1 ] = GC_malloc_atomic( strlen( &dir->d_name[0] ) + 1 );
              strcpy( CFileBuf[ NCFileBuf - 1 ], &dir->d_name[0] );
              if ( NCFileBuf == 1 )
              {
                CFileName = Strnew_charp( &dir->d_name[0] );
              }
              else
              {
                i = 0;
                while ( 1 )
                {
                  if ( dir->d_name[ i ] == CFileName->ptr[ i ] )
                  {
                    i++;
                  }
                  else
                  {
                    Strtruncate( CFileName, i );
                  }
                }
              }
            }
            else
            {
            }
          }
        }
        closedir( &d );
        if ( NCFileBuf != 0 )
        {
          qsort( CFileBuf, NCFileBuf, 4, &strCmp );
          NCFileOffset = 0;
          if ( NCFileBuf > 1 )
          {
            cm_next = 1;
            status[0] = 1;
          }
          else
            status[0] = 0;
        }
        else
        {
          CompleteBuf = Strdup( ifn );
          status[0] = 2;
          if ( ( cm_mode & 2 ) != 0 )
          {
            CompleteBuf = escape_spaces( CompleteBuf );
          }
          CompleteBuf->ptr = (char*)CompleteBuf;
          return CompleteBuf;
        }
      }
    }
  }
  else
  {
    CFileName = Strnew_charp( CFileBuf[ NCFileOffset ] );
    NCFileOffset = ( NCFileBuf + next + NCFileOffset ) % NCFileBuf;
    status[0] = 3;
  }
  CompleteBuf = Strdup( CDirBuf );
  if ( CompleteBuf->length != 0 && ( CompleteBuf->length < 1 || CompleteBuf->ptr[ CompleteBuf->length - 1 ] != '/' ) )
  {
    if ( CompleteBuf->area_size <= CompleteBuf->length + 1 )
      Strgrow( CompleteBuf );
    CompleteBuf->ptr[ CompleteBuf->length ] = '/';
    CompleteBuf->length++;
    CompleteBuf->ptr[ CompleteBuf->length ] = 0;
  }
  Strcat( CompleteBuf, CFileName );
  if ( status[0] != 1 )
  {
    p = CompleteBuf->ptr;
    if ( ( cm_mode & 8 ) != 0 )
    {
      if ( strncmp( p, "file://localhost/", 17 ) == 0 )
        p += 16;
      else
      {
        if ( strncmp( p, "file:///", 8 ) == 0 )
          p += 7;
        else
        {
          if ( strncmp( p, "file:/", 6 ) == 0 && p[6] != '/' )
            p += 5;
        }
      }
    }
    if ( stat( expandPath( p ), &st.st_dev ) != -1 && ( st.st_mode & 61440 ) == 16384 )
    {
      if ( CompleteBuf->area_size <= CompleteBuf->length + 1 )
        Strgrow( CompleteBuf );
      CompleteBuf->ptr[ CompleteBuf->length ] = '/';
      CompleteBuf->length++;
      CompleteBuf->ptr[ CompleteBuf->length ] = 0;
    }
  }
  if ( ( cm_mode & 2 ) != 0 )
  {
    CompleteBuf = escape_spaces( CompleteBuf );
    wc_Str_conv( CompleteBuf, SystemCharset, InnerCharset );
    return CompleteBuf;
  }
  else
  {
    wc_Str_conv( CompleteBuf, SystemCharset, InnerCharset );
    return CompleteBuf;
  }
}
void _prev( void )
{
  Hist *hist = CurrentHist;
  char *p;
  if ( use_hist == 0 )
  {
  }
  else
  {
    if ( strCurrentBuf != 0 )
    {
      p = prevHist( hist );
      if ( p == 0 )
      {
      }
    }
    else
    {
      p = lastHist( hist );
      if ( p == 0 )
      {
      }
      else
        strCurrentBuf = strBuf;
    }
    if ( DecodeURL != 0 && ( cm_mode & 8 ) != 0 )
    {
      p = url_unquote_conv( p, 0 );
    }
    strBuf = Strnew_charp( p );
    CLen = CPos = setStrType( strBuf, strProp );
    offset = 0;
  }
  return;
}
void _next( void )
{
  Hist *hist = CurrentHist;
  char *p;
  if ( use_hist == 0 )
  {
  }
  else
  if ( strCurrentBuf == 0 )
  {
  }
  else
  {
    p = nextHist( hist );
    if ( p != 0 )
    {
      if ( DecodeURL != 0 && ( cm_mode & 8 ) != 0 )
      {
        p = url_unquote_conv( p, 0 );
      }
      strBuf = Strnew_charp( p );
    }
    else
    {
      strBuf = strCurrentBuf;
      strCurrentBuf = 0;
    }
    CLen = CPos = setStrType( strBuf, strProp );
    offset = 0;
  }
  return;
}
int setStrType( Str str, Lineprop *prop )
{
  int ah;
  Lineprop ctype;
  char *p = str->ptr, *ep = &p[ str->length ];
  int i, len = 1;
  i = 0;
  do
  {
    if ( ep <= p )
    {
      break;
    }
    else
    {
      len = WTF_LEN_MAP[ p[0] ];
      if ( len + i > 1024 )
      {
        break;
      }
      else
      {
        ctype = WTF_TYPE_MAP[ p[0] ] << 8;
        if ( is_passwd != 0 )
        {
          if ( ( ctype & 256 ) != 0 )
            ctype = 0;
          if ( ( ctype & 4096 ) != 0 )
            ctype = 512;
        }
        prop[ i ] = ctype;
        i++;
        p = &p[ len ];
        len--;
        if ( len == 0 )
          continue;
        else
        {
          ctype = "( ( ( ah & 249 ) | 4 ) & 249 ) | 4 # ctype";
          while ( len-- )
          }
        }
      }
    }
    while ( ( ( len != 0 ) & 255 ) != 0 );
    prop[ i ] = ctype;
    i++;
    while ( len-- )
    {
      prop[ i ] = ctype;
      i++;
    }
}
int terminated( unsigned char c )
{
  int termchar[5];
  int *tp;
  termchar[0] = 47;
  termchar[1] = 38;
  termchar[2] = 63;
  termchar[3] = 32;
  termchar[4] = -1;
  tp = termchar;
  for ( ; tp[0] >= 1; tp++ )
  {
    if ( tp[0] == c )
    {
      break;
    }
    else
    {
      //tp++;
    }
  }
  return 1;
}
void _editor( void )
{
  FormItemList fi;
  char *p;
  if ( is_passwd != 0 )
  {
    return;
  }
  else
  {
    fi.readonly = 0;
    fi.value = Strdup( strBuf );
    if ( fi.value->area_size <= fi.value->length + 1 )
      Strgrow( fi.value );
    fi.value->ptr[ fi.value->length ] = 10;
    fi.value->length++;
    fi.value->ptr[ fi.value->length ] = 0;
    input_textarea( &fi );
    strBuf = Strnew( );
    p = fi.value->ptr;
    for ( ; ( p[0] & 255 ) != 0; p++ )
    {
      if ( p[0] != 13 )
      {
        if ( p[0] == 10 )
        {
        }
        else
        {
          if ( strBuf->area_size <= strBuf->length + 1 )
            Strgrow( strBuf );
          strBuf->ptr[ strBuf->length ] = p[0];
          strBuf->length++;
          strBuf->ptr[ strBuf->length ] = 0;
        }
      }
      else
      {
      }
      //p++;
    }
    CLen = CPos = setStrType( strBuf, strProp );
    if ( CurrentTab != 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 1 );
    }
    return;
  }
}
