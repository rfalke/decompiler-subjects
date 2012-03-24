#include "charset.c.h"
static int wc_ces_list_cmp( void *a, void *b );
wc_locale WcLocale;
static struct {
   char *lang;
   wc_ces ces;
} lang_ces_table[14] = { { "cs", 1049090,  }
, { "el", 1049095,  }
, { "iw", 1049096,  }
, { "ja", 3149846,  }
, { "ko", 3149849,  }
, { "hu", 1049090,  }
, { "pl", 1049090,  }
, { "ro", 1049090,  }
, { "ru", 1049093,  }
, { "sk", 1049090,  }
, { "sl", 1049090,  }
, { "tr", 1049097,  }
, { "zh", 3149847,  }
, { 0, 0,  }
,  };
static wc_ces_list *list;
wc_ces wc_guess_charset( char *charset, wc_ces orig )
{
  int eax;
  wc_ces guess;
  if ( charset == 0 || ( charset[0] & 255 ) == 0 )
  {
    orig/*error:'I'*/ = orig;
  }
  else
  {
    guess = wc_charset_to_ces( charset );
    if ( guess != 0 )
    {
      guess/*error:'I'*/ = guess;
    }
    else
    {
      orig/*error:'I'*/ = orig;
    }
  }
  return guess;
}
wc_ces wc_guess_charset_short( char *charset, wc_ces orig )
{
  int eax;
  wc_ces guess;
  if ( charset == 0 || ( charset[0] & 255 ) == 0 )
  {
    orig/*error:'I'*/ = orig;
  }
  else
  {
    guess = wc_charset_short_to_ces( charset );
    if ( guess != 0 )
    {
      guess/*error:'I'*/ = guess;
    }
    else
    {
      orig/*error:'I'*/ = orig;
    }
  }
  return guess;
}
wc_ces wc_guess_locale_charset( char *locale, wc_ces orig )
{
  int eax;
  wc_ces guess;
  if ( locale == 0 || ( locale[0] & 255 ) == 0 )
  {
    orig/*error:'I'*/ = orig;
  }
  else
  {
    guess = wc_locale_to_ces( locale );
    if ( guess != 0 )
    {
      guess/*error:'I'*/ = guess;
    }
    else
    {
      orig/*error:'I'*/ = orig;
    }
  }
  return guess;
}
wc_ces wc_charset_to_ces( char *charset )
{
  int eax;
  char *p = charset;
  char buf[16];
  int n;
  if ( tolower( p[0] ) == 120 && p[1] == '-' )
    p += 2;
  n = 0;
  for ( ; ( p[0] & 255 ) != 0 && n <= 14; p++ )
  {
    if ( p[0] < 32 && p[0] != '_' && p[0] != '-' )
    {
      buf[ n ] = tolower( p[0] );
      n++;
    }
    //p++;
  }
  buf[ n ] = 0;
  p = buf;
  switch ( p[0] )
  {
  case 101:
    if ( strncmp( p, "euc", 3 ) == 0 )
    {
      p += 3;
      switch ( p[0] )
      {
        switch ( WcLocale )
        {
        case 1:
          if ( ( 0 ^ 0 ) != 0 )
          {
            __stack_chk_fail( );
          }
          return 1049665;
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
          break;
        case 0:
          break;
        }
        break;
      default:
        switch ( WcLocale )
        {
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
          break;
        case 0:
          break;
        }
        break;
      case 106:
        break;
      case 99:
        break;
      case 116:
        break;
      case 107:
        break;
      }
    }
    else
    {
    }
    break;
  case 105:
    if ( strncmp( p, "iso2022", 7 ) == 0 )
    {
      p += 7;
      switch ( p[0] )
      {
      default:
        break;
      case 106:
        if ( strncmp( p, "jp2", 3 ) == 0 )
        {
        }
        else
        {
          if ( strncmp( p, "jp3", 3 ) == 0 )
          {
          }
          else
          {
          }
        }
        break;
      case 99:
        break;
      case 107:
        break;
      }
    }
    else
    {
      if ( strncmp( p, "iso8859", 7 ) == 0 )
      {
        n = atoi( &p[7] );
        if ( n >= 1 && n <= 16 && n != 12 )
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
    break;
  case 106:
    if ( strncmp( p, "johab", 5 ) == 0 )
    {
    }
    else
    {
      if ( strncmp( p, "jis", 3 ) == 0 )
      {
      }
      else
      {
      }
    }
    break;
  case 115:
    if ( strncmp( p, "shiftjisx0213", 13 ) == 0 || strncmp( p, "sjisx0213", 9 ) == 0 )
    {
    }
    else
    {
      if ( strncmp( p, "shiftjis", 8 ) == 0 || strncmp( p, "sjis", 4 ) == 0 )
      {
      }
      else
      {
      }
    }
    break;
  case 103:
    if ( strncmp( p, "gb18030", 7 ) == 0 || strncmp( p, "gbk2k", 5 ) == 0 )
    {
    }
    else
    {
      if ( strncmp( p, "gbk", 3 ) == 0 )
      {
      }
      else
      {
        if ( strncmp( p, "gb2312", 6 ) == 0 )
        {
        }
        else
        {
        }
      }
    }
    break;
  case 98:
    if ( strncmp( p, "big5hkscs", 9 ) == 0 )
    {
    }
    else
    {
      if ( strncmp( p, "big5", 4 ) == 0 )
      {
      }
      else
      {
      }
    }
    break;
  case 104:
    if ( strncmp( p, "hz", 2 ) == 0 )
    {
    }
    else
    {
      if ( strncmp( p, "hkscs", 5 ) == 0 )
      {
      }
      else
      {
      }
    }
    break;
  case 107:
    if ( strncmp( p, "koi8r", 5 ) == 0 )
    {
    }
    else
    {
      if ( strncmp( p, "koi8u", 5 ) == 0 )
      {
      }
      else
      {
        if ( strncmp( p, "ksx1001", 7 ) == 0 )
        {
        }
        else
        {
          if ( strncmp( p, "ksc5601", 7 ) == 0 )
          {
          }
          else
          {
          }
        }
      }
    }
    break;
  case 116:
    if ( strncmp( p, "tis620", 6 ) == 0 )
    {
    }
    else
    {
      if ( strncmp( p, "tcvn", 4 ) == 0 )
      {
      }
      else
      {
      }
    }
    break;
  case 110:
    if ( strncmp( p, "next", 4 ) == 0 )
    {
    }
    else
    {
    }
    break;
  case 118:
    if ( strncmp( p, "viet", 4 ) == 0 )
    {
      p += 4;
      if ( strncmp( p, "tcvn", 4 ) == 0 )
      {
      }
    }
    if ( strncmp( p, "viscii", 6 ) == 0 )
    {
    }
    else
    {
      if ( strncmp( p, "vps", 3 ) == 0 )
      {
      }
      else
      {
      }
    }
    break;
  case 117:
    if ( strncmp( p, "utf8", 4 ) == 0 )
    {
    }
    else
    {
      if ( strncmp( p, "utf7", 4 ) == 0 )
      {
      }
      else
      {
        if ( strncmp( p, "uhc", 3 ) == 0 )
        {
        }
        else
        {
          if ( strncmp( p, "ujis", 4 ) == 0 )
          {
          }
          else
          {
            if ( strncmp( p, "usascii", 7 ) == 0 )
            {
            }
            else
            {
            }
          }
        }
      }
    }
    break;
  case 97:
    if ( strncmp( p, "ascii", 5 ) == 0 )
    {
    }
    else
    {
    }
    break;
  case 99:
    if ( strncmp( p, "cngb", 4 ) == 0 )
    {
    }
    else
    {
      if ( p[1] != 'p' )
      {
      }
      else
      {
        n = atoi( &p[2] );
        switch ( n )
        {
        case 1252:
          break;
        case 437:
          break;
        case 737:
          break;
        case 775:
          break;
        case 850:
          break;
        case 852:
          break;
        case 855:
          break;
        case 856:
          break;
        case 857:
          break;
        case 860:
          break;
        case 861:
          break;
        case 862:
          break;
        case 863:
          break;
        case 864:
          break;
        case 865:
          break;
        case 866:
          break;
        case 869:
          break;
        case 874:
          break;
        case 932:
          break;
        case 936:
          break;
        case 949:
          break;
        case 950:
          break;
        case 1006:
          break;
        case 1250:
          break;
        case 1251:
          break;
        case 1253:
          break;
        case 1254:
          break;
        case 1255:
          break;
        case 1256:
          break;
        case 1257:
          break;
        case 1258:
          break;
          break;
          break;
          break;
          break;
          break;
          break;
        default:
          break;
        }
      }
    }
    break;
  case 119:
    if ( strncmp( p, "windows", 7 ) != 0 )
    {
    }
    else
    {
      if ( strncmp( p, "31j", 3 ) == 0 )
      {
      }
      else
      {
        n = atoi( &p[7] );
        switch ( n )
        {
        case 1250:
          break;
        case 1251:
          break;
        case 1252:
          break;
        case 1253:
          break;
        case 1254:
          break;
        case 1255:
          break;
        case 1256:
          break;
        case 1257:
          break;
        case 1258:
          break;
        default:
          break;
        }
      }
    }
    break;
  default:
    break;
  }
}
wc_ces wc_charset_short_to_ces( char *charset )
{
  int eax;
  char *p = charset;
  char buf[16];
  wc_ces ces = wc_charset_to_ces( charset );
  int n;
  if ( ces != 0 )
  {
  }
  else
  {
    n = 0;
    for ( ; ( p[0] & 255 ) != 0 && n <= 14; p++ )
    {
      if ( p[0] < 32 && p[0] != '_' && p[0] != '-' )
      {
        buf[ n ] = tolower( p[0] );
        n++;
      }
      //p++;
    }
    buf[ n ] = 0;
    p = buf;
    switch ( p[0] )
    {
    case 101:
      switch ( p[1] )
      {
        break;
      default:
        break;
      case 106:
        break;
      case 99:
        break;
      case 116:
        break;
      case 107:
        break;
      }
      break;
    case 106:
      p++;
      if ( p[0] == 'o' )
      {
      }
      else
      {
        if ( p[0] == 'p' )
          p++;
        if ( p[0] == '2' )
        {
        }
        else
        {
          if ( p[0] == '3' )
          {
          }
          else
          {
          }
        }
      }
      break;
    case 115:
      break;
    case 103:
      break;
    case 98:
      break;
    case 104:
      if ( p[1] == 'k' )
      {
      }
      else
      {
      }
      break;
    case 107:
      if ( p[1] == 'o' )
      {
      }
      else
      {
      }
      break;
    case 108:
      n = atoi( &p[1] );
      if ( n >= 1 && n <= 16 && n != 12 )
      {
      }
      else
      {
      }
      break;
    case 116:
      if ( p[1] == 'c' )
      {
      }
      else
      {
      }
      break;
    case 110:
      break;
    case 118:
      if ( p[1] == 'p' )
      {
      }
      else
      {
      }
      break;
    case 117:
      if ( p[1] == '7' )
      {
      }
      else
      {
      }
      break;
    case 97:
      break;
    case 99:
      break;
    case 119:
      n = atoi( &p[1] );
      switch ( n )
      {
      case 1250:
        break;
      case 1251:
        break;
      case 1252:
        break;
      case 1253:
        break;
      case 1254:
        break;
      case 1255:
        break;
      case 1256:
        break;
      case 1257:
        break;
      case 1258:
        break;
      default:
        break;
      }
      break;
    case 114:
      break;
    default:
      break;
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return ces;
}
wc_ces wc_locale_to_ces( char *locale )
{
  int eax;
  char *p = locale;
  char buf[6];
  int n;
  if ( p[0] == 'C' && ( p[1] & 255 ) == 0 )
  {
    return lang_ces_table[ n ].ces;
  }
  else
  {
    char *cs = nl_langinfo( 14 );
    if ( cs != 0 && strcmp( cs, "US-ASCII" ) != 0 )
      wc_charset_to_ces( cs );
      return lang_ces_table[ n ].ces;
    else
    {
      n = 0;
      for ( ; ( p[0] & 255 ) != 0 && p[0] != '.' && n <= 4; p++ )
      {
        if ( p[0] < 32 )
        {
          buf[ n ] = tolower( p[0] );
          n++;
        }
        //p++;
      }
      buf[ n ] = 0;
      if ( p[0] == '.' )
      {
        p++;
        if ( strcasecmp( p, "euc" ) == 0 )
        {
          switch ( buf[0] )
          {
          case 106:
            WcLocale = 1;
            break;
          case 107:
            WcLocale = 5;
            break;
          case 122:
            if ( strcmp( buf, "zh_tw" ) == 0 )
              WcLocale = 3;
            else
            {
              if ( strcmp( buf, "zh_hk" ) == 0 )
                WcLocale = 4;
              else
                WcLocale = 2;
            }
            break;
          default:
            WcLocale = 0;
            break;
          }
        }
        wc_charset_to_ces( p );
      }
      else
      {
        if ( strcmp( buf, "japanese" ) == 0 )
        {
          return lang_ces_table[ n ].ces;
        }
        else
        {
          if ( strcmp( buf, "zh_tw" ) == 0 || strcmp( buf, "zh_hk" ) == 0 )
          {
            return lang_ces_table[ n ].ces;
          }
          else
          {
            n = 0;
            for ( ; lang_ces_table[ n ].lang != 0; n++ )
            {
              if ( strncmp( buf, lang_ces_table[ n ].lang, 2 ) == 0 )
              {
                lang_ces_table[ n ].ces/*error:'I'*/ = lang_ces_table[ n ].ces;
                break;
              }
              else
              {
                //n++;
              }
            }
          }
        }
      }
    }
  }
}
char *wc_ces_to_charset( wc_ces ces )
{
  int eax;
  return ces == 3211264 ? "WTF" : WcCesInfo[ ces & 255 ].name;
}
char *wc_ces_to_charset_desc( wc_ces ces )
{
  int eax;
  return ces == 3211264 ? "W3M Transfer Format" : WcCesInfo[ ces & 255 ].desc;
}
wc_ces wc_guess_8bit_charset( wc_ces orig )
{
  int eax;
  switch ( orig )
  {
    orig/*error:'I'*/ = orig;
    break;
  default:
    if ( orig >= 2099221 && orig != 2105404 )
    {
      orig/*error:'I'*/ = orig;
    }
    else
    {
    }
    break;
  case 2099217:
  case 2099218:
  case 2099219:
    break;
  case 2099221:
    break;
  case 256:
    break;
  }
  return 3149847;
}
wc_bool wc_check_ces( wc_ces ces )
{
  size_t i = ces & 255;
  return i <= 70 && WcCesInfo[ i ].id == ces ? 1 : 0;
}
int wc_ces_list_cmp( void *a, void *b )
{
  return strcasecmp( &((int*)a)[2], &((int*)b)[2] );
}
wc_ces_list *wc_get_ces_list( void )
{
  int eax;
  wc_ces_info *info;
  size_t n;
  if ( list != 0 )
  {
    list->id = list;
  }
  else
  {
    info = WcCesInfo;
    n = 0;
    for ( ; info->id != 0; info++ )
    {
      if ( info->name != 0 )
        n++;
      //info++;
    }
    list = GC_malloc( ( n * 4 ) + 4 + 8 + ( n * 8 ) );
    info = WcCesInfo;
    n = 0;
    for ( ; info->id != 0; info++ )
    {
      if ( info->name != 0 )
      {
        list[ n ].id = info->id;
        list[ n ].name = info->name;
        list[ n ].desc = info->desc;
        n++;
      }
      //info++;
    }
    list[ n ].id = 0;
    list[ n ].name = 0;
    list[ n ].desc = 0;
    qsort( list, n, 12, &wc_ces_list_cmp );
    list->id = list;
  }
  return list;
}
