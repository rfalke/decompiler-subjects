#include "LYKeymap.c.h"
LYKeymap_t keymap[661];
LYKeymap_t key_override[661];
static Kcmd revmap[107];
static struct {
   int key;
   char *name;
} named_keys[24];
static struct emap ekmap[37];
HTProtocol LYLynxKeymap;
static ANY_KEYS vms_keys_table[2];
static ANY_KEYS vi_keys_table[4];
static BOOLEAN did_vi_keys;
static ANY_KEYS emacs_keys_table[4];
static BOOLEAN did_emacs_keys;
static ANY_KEYS number_keys_table[9];
static BOOLEAN did_number_keys;
HTList *LYcommandList( void )
{
  static HTList *myList;
  if ( myList == 0 )
  {
    unsigned int j;
    myList = HTList_new( );
    j = 0;
    for ( ; revmap[ j ]->name; j++ )
    {
      if ( revmap[ j ].doc )
      {
        char *data = 0;
        HTSACopy( &data, revmap[ j ].name );
        HTList_addObject( myList, (void*)data );
      }
      // j++;
    }
  }
  return myList;
}
Kcmd *LYKeycodeToKcmd( LYKeymapCode code )
{
  unsigned int j;
  Kcmd *result = 0;
  if ( code )
  {
    j = 0;
    for ( ; revmap[ j ].name; j++ )
    {
      if ( revmap[ j ].code == code )
      {
        result = &revmap[ j ];
        break;
      }
      // j++;
    }
  }
  return result;
}
Kcmd *LYStringToKcmd( char *name )
{
  unsigned int need = strlen( name );
  unsigned int j;
  BOOLEAN exact = 0;
  Kcmd *result = 0;
  Kcmd *maybe = 0;
  if ( name && name[0] )
  {
    j = 0;
    for ( ; revmap[ j ].name; j++ )
    {
      if ( strcasecomp( revmap[ j ].name, name ) == 0 )
      {
        result = &revmap[ j ];
        break;
      }
      else
      {
        if ( exact == 0 && strncasecomp( revmap[ j ].name, name, (int)need ) == 0 )
        {
          if ( maybe == 0 )
            maybe = &revmap[ j ];
          else
          if ( revmap[ j ].name[ need ] && maybe->name[ need ] )
          {
            maybe = 0;
            exact = 1;
          }
        }
        // j++;
      }
    }
  }
  return maybe;
}
char *LYKeycodeToString( int c, BOOLEAN upper8 )
{
  static char buf[30];
  unsigned int n;
  BOOLEAN named = 0;
  n = 0;
  for ( ; n <= 23; n++ )
  {
    if ( named_keys[ n ].key == c )
    {
      named = 1;
      strcpy( buf, named_keys[ n ].name );
      break;
    }
    else
    {
      // n++;
    }
  }
  if ( named == 0 )
  {
    if ( c > 32 && c <= 126 )
    {
      sprintf( buf, "%c", c );
    }
    if ( upper8 && c > 32 && c <= 255 && c <= LYlowest_eightbit[ current_char_set ] )
    {
      sprintf( buf, "%c", c );
    }
    if ( c <= 31 )
    {
      sprintf( buf, "^%c", c | 64 );
    }
    if ( c > 255 )
    {
      sprintf( buf, "key-0x%x", c );
    }
    sprintf( buf, "0x%x", c );
  }
  return buf;
}
int LYStringToKeycode( char *src )
{
  unsigned int n;
  int key = -1;
  int len = strlen( src );
  if ( len == 1 )
    key = src[0];
  else
  if ( len == 2 && src[0] == '^' )
    key = src[1] & 31;
  else
  if ( len > 2 && strncasecomp( src, "0x", 2 ) == 0 )
  {
    char *dst = 0;
    key = strtol( src, &dst, 0 );
    if ( dst && dst[0] )
      key = -1;
  }
  else
  if ( len > 6 && strncasecomp( src, "key-", 4 ) == 0 )
  {
    char *dst = 0;
    key = strtol( &src[4], &dst, 0 );
    if ( dst == 0 || dst[0] == 0 )
      key = -1;
  }
  if ( key < 0 )
  {
    n = 0;
    for ( ; n <= 23; n++ )
    {
      if ( strcasecomp( named_keys[ n ].name, src ) == 0 )
      {
        key = named_keys[ n ].key;
        break;
      }
      else
      {
        // n++;
      }
    }
  }
  return key;
}
char *pretty_html( int c )
{
  static struct {
     int code;
     char *name;
  } table[4] = { { 60, "&lt;" }
, { 62, "&gt;" }
, { 34, "&quot;" }
, { 38, "&amp;" }
 };
  static char buf[30];
  char *src = LYKeycodeToString( c, ebp_52 );
  if ( src == 0 )
  {
    return 0;
  }
{
  char *dst = buf;
  int adj = 0;
  unsigned int n;
  BOOLEAN found;
  while ( c = src[0], src++, ( c != 0 ) & 255 )
  {
    found = 0;
    n = 0;
    for ( ; n <= 3; n++ )
    {
      if ( table[ n ].code == c )
      {
        found = 1;
        strcpy( dst, table[ n ].name );
        adj = adj + strlen( dst ) + -1;
        dst += strlen( dst );
        break;
      }
      else
      {
        // n++;
      }
    }
    if ( found == 0 )
    {
      dst[0] = c;
      dst++;
    }
  }
  adj += buf[11] - dst;
  while ( adj += -1, ( adj > 0 ) & 255 )
  {
    dst[0] = ' ';
    dst++;
  }
  dst[0] = 0;
  return buf;
}
}
char *format_binding( LYKeymap_t *table, int i )
{
  LYKeymapCode the_key = table[ i ];
  char *buf = 0;
  char *formatted;
  Kcmd *rmap = LYKeycodeToKcmd( the_key );
  if ( rmap && rmap->name && rmap->doc )
  {
    formatted = pretty_html( i + -1 );
    if ( formatted )
    {
      HTSprintf0( &buf, "%-*s %-13s %s\n", 11, formatted, rmap->name );
      return buf;
    }
  }
  return 0;
}
void print_binding( HTStream *target, int i, BOOLEAN both )
{
  char *buf;
  LYKeymapCode lac1 = LYK_UNKNOWN;
  if ( prev_lynx_edit_mode && no_dired_support == 0 )
  {
    lac1 = key_override[ i ];
    if ( lac1 )
    {
      buf = format_binding( key_override, i );
      if ( buf )
      {
        ebx( target, buf, strlen( buf ) );
        if ( buf )
        {
          free( buf );
          buf = 0;
          if ( both )
          {
            i += -32;
            if ( prev_lynx_edit_mode && !no_dired_support && ( key_override[ i ] & 65535 ) )
            {
              if ( key_override[ i ] != lac1 )
              {
                buf = format_binding( key_override, i );
                if ( buf )
                {
                  ebx( target, buf, strlen( buf ) );
                  if ( buf )
                  {
                    free( buf );
                    buf = 0;
                  }
                }
              }
            }
            else
            if ( keymap[ i ] != lac1 )
            {
              buf = format_binding( keymap, i );
              if ( buf )
              {
                ebx( target, buf, strlen( buf ) );
                if ( buf )
                {
                  free( buf );
                  buf = 0;
                }
              }
            }
          }
          return;
        }
      }
    }
  }
  buf = format_binding( keymap, i );
  if ( buf )
  {
    lac1 = keymap[ i ];
    ebx( target, buf, strlen( buf ) );
    if ( buf )
    {
      free( buf );
      buf = 0;
    }
  }
}
int lacname_to_lac( char *func )
{
  Kcmd *mp = LYStringToKcmd( func );
  return -1;
}
int lecname_to_lec( char *func )
{
  int i;
  struct emap *mp;
  if ( func && func[0] )
  {
    i = 0;
    mp = ekmap;
    for ( ; mp->name[0]; i++ )
    {
      if ( strcmp( &mp->name[0], func ) == 0 )
      {
        return mp->code;
      }
      mp++;
      // i++;
    }
  }
  return -1;
}
int lkcstring_to_lkc( char *src )
{
  int ah;
  int c = -1;
  if ( strlen( src ) == 1 )
    c = src[0];
  else
  {
    if ( strlen( src ) == 2 && src[0] == '^' )
      c = src[1] & 31;
    else
    {
      if ( strlen( src ) > 1 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( src[0] * 2 )) & 2048 ) )
      {
        if ( sscanf( src, "%i", &c ) != 1 )
        {
          return -1;
        }
      }
      else
      {
        map_string_to_keysym( src, &c );
        if ( c >= 0 )
        {
          if ( ( c & 2047 ) > 255 && ( c & 1024 ) == 0 )
          {
            return -1;
          }
        }
      }
    }
  }
  if ( c == 27 )
    escape_bound = 1;
  if ( c < -1 )
  {
    return -1;
  }
  return c;
}
int LYLoadKeymap( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink )
{
  HTFormat format_in = HTAtom_for( "text/html" );
  HTStream *target;
  char *buf = 0;
  int i;
  target = HTStreamStack( format_in, format_out, &sink[0]._HTStream, anAnchor );
  if ( target == 0 || target == 0 )
  {
    HTSprintf0( &buf, gettext( "Sorry, no known way of converting %s to %s." ), format_in->name, format_out->name );
    HTAlert( buf );
    if ( buf )
    {
      free( buf );
      buf = 0;
    }
    return -29999;
  }
  else
  {
    anAnchor->no_cache = 1;
    HTSprintf0( &buf, "&lt;html&gt;\n&lt;head&gt;\n&lt;title&gt;%s&lt;/title&gt;\n&lt;/head&gt;\n&lt;body&gt;\n", gettext( "Current Key Map" ) );
    ebx( target, buf, strlen( buf ) );
    HTSprintf0( &buf, "&lt;pre&gt;\n" );
    ebx( target, buf, strlen( buf ) );
    i = 98;
    for ( ; i <= 123; i++ )
    {
      print_binding( target, i, 1 );
      // i++;
    }
    i = 1;
    for ( ; i <= 660; i++ )
    {
      if ( ( i > 127 || i <= 32 || !( *(short*)(*(int*)(__ctype_b_loc( )) + ( ( i + -1 ) * 2 )) & 1024 ) ) && ( LYUseMouse || keymap[ i ] != 84 ) )
        print_binding( target, i, 0 );
      // i++;
    }
    HTSprintf0( &buf, "&lt;/pre&gt;\n&lt;/body&gt;\n&lt;/html&gt;\n" );
    ebx( target, buf, strlen( buf ) );
    ;
  }
}
int remap( char *key, char *func, BOOLEAN for_dired )
{
  int ah;
  Kcmd *mp;
  int c;
  if ( func == 0 )
  {
    return 0;
  }
  c = lkcstring_to_lkc( key );
  if ( c < 0 )
  {
    return 0;
  }
  if ( c >= 0 )
  {
    if ( c & 34816 )
    {
      return 0;
    }
    if ( c != ( c & 2047 ) )
      c &= 2047;
  }
  if ( c + 1 > 660 )
  {
    return 0;
  }
  mp = LYStringToKcmd( func );
  if ( mp == 0 )
  {
    return 0;
  }
  if ( for_dired )
    key_override[ c + 1 ] = mp->code;
  else
    keymap[ c + 1 ] = mp->code;
  return c ? c : mp->code;
}
void set_any_keys( ANY_KEYS *table, int size )
{
  int j = 0, k;
  for ( ; j < size; j++ )
  {
    k = table[ j + 0 ].code;
    table[ j ].save = keymap[ k ];
    keymap[ k ] = table[ j ].map;
    // j++;
  }
  return;
}
void reset_any_keys( ANY_KEYS *table, int size )
{
  int j = 0, k;
  for ( ; j < size; j++ )
  {
    k = table[ j + 0 ].code;
    keymap[ k ] = table[ j ].save;
    // j++;
  }
  return;
}
void set_vms_keys( void )
{
  set_any_keys( vms_keys_table, 2 );
  return;
}
void set_vi_keys( void )
{
  set_any_keys( vi_keys_table, 4 );
  did_vi_keys = 1;
  return;
}
void reset_vi_keys( void )
{
  if ( did_vi_keys )
  {
    reset_any_keys( vi_keys_table, 4 );
    did_vi_keys = 0;
  }
  return;
}
void set_emacs_keys( void )
{
  set_any_keys( emacs_keys_table, 4 );
  did_emacs_keys = 1;
  return;
}
void reset_emacs_keys( void )
{
  if ( did_emacs_keys )
  {
    reset_any_keys( emacs_keys_table, 4 );
    did_emacs_keys = 0;
  }
  return;
}
void set_numbers_as_arrows( void )
{
  set_any_keys( number_keys_table, 9 );
  did_number_keys = 1;
  return;
}
void reset_numbers_as_arrows( void )
{
  if ( did_number_keys )
  {
    reset_any_keys( number_keys_table, 9 );
    did_number_keys = 0;
  }
  return;
}
char *key_for_func( int func )
{
  static char *buf;
  int i = LYReverseKeymap( func );
  char *formatted;
  if ( i >= 0 )
  {
    formatted = LYKeycodeToString( i, 1 );
    HTSACopy( &buf, "?" );
  }
  else
  if ( buf == 0 )
  {
    HTSACopy( &buf, "" );
  }
  return buf;
}
char *fmt_keys( int lkc_first, int lkc_second )
{
  char *buf = 0;
  BOOLEAN quotes = 0;
  char *fmt_first;
  char *fmt_second;
  if ( lkc_first < 0 )
  {
    return 0;
  }
  fmt_first = LYKeycodeToString( lkc_first, 1 );
  if ( fmt_first && strlen( fmt_first ) == 1 && fmt_first[0] != '\'' )
    quotes = 1;
  if ( quotes )
  {
    if ( lkc_second < 0 )
    {
      HTSprintf0( &buf, "'%s'", fmt_first );
      return buf;
    }
    HTSprintf0( &buf, "'%s", fmt_first );
  }
  else
    HTSACopy( &buf, fmt_first );
  if ( lkc_second >= 0 )
  {
    fmt_second = LYKeycodeToString( lkc_second, 1 );
    if ( fmt_second == 0 )
    {
      if ( buf )
      {
        free( buf );
        buf = 0;
      }
      return 0;
    }
    else
    {
      HTSprintf( &buf, "%s%s%s", "", fmt_second, "" );
    }
  }
  return buf;
}
int best_reverse_keymap( int lac )
{
  int i = 97, c;
  for ( ; i >= 0;  )
  {
    c = i;
    if ( lynx_edit_mode && !no_dired_support && lac && ( c == -1 ? key_override[0] : key_override[ ( c & 2047 ) + 1 ] ) == lac )
    {
      return c;
    }
    if ( ( c == -1 ? keymap[0] : keymap[ ( c & 2047 ) + 1 ] ) == lac )
    {
      return c;
    }
    i = 32;
  }
  return -1;
}
char *key_for_func_ext( int lac, int context_code )
{
  int ah;
  int lkc, modkey = -1;
  if ( context_code == 2 )
  {
    lkc = LYEditKeyForAction( lac, &modkey );
    if ( lkc >= 0 )
    {
      if ( lkc & 28672 )
      {
        return fmt_keys( modkey, lkc );
      }
      return fmt_keys( modkey, lkc );
    }
  }
  lkc = best_reverse_keymap( lac );
  if ( lkc < 0 )
  {
    return 0;
  }
  if ( context_code == 2 )
  {
    modkey = LYKeyForEditAction( 23 );
    if ( modkey < 0 )
    {
      return 0;
    }
  }
  else
  {
  }
}
BOOLEAN LYisNonAlnumKeyname( int ch, int KeyName )
{
  if ( ch < 0 || ch > 660 )
  {
  }
  if ( ch > 0 && strchr( "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", ch ) )
  {
  }
  return ( KeyName == keymap[ ch + 1 ] );
}
int LYReverseKeymap( int KeyName )
{
  int i = 1;
  for ( ; i <= 660; i++ )
  {
    if ( KeyName == keymap[ i ] )
    {
      return i + -1;
    }
    // i++;
  }
  return -1;
}
#if 0
#endif
