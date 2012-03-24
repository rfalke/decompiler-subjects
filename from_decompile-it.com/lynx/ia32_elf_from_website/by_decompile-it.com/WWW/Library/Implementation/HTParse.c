#include "HTParse.c.h"
static unsigned char isAcceptable[96];
static char *hex;
static unsigned char crfc[96];
char *HTStrip( char *s )
{
  char *p = s;
  p = s;
  for ( ; p[0]; p++ )
  {
    // p++;
  }
  p = &p[ -1 ];
  for ( ; s <= p && ( p[0] == ' ' || p[0] == '\t' || p[0] == '\n' );  )
  {
    p[0] = 0;
    p = &p[ -1 ];
  }
  for ( ; s[0] == ' ' || s[0] == '\t' || s[0] == '\n'; s++ )
  {
    // s++;
  }
  return s;
}
void scan( char *name, struct struct_parts *parts )
{
  char *after_access;
  char *p;
  *(int*)&parts->access[0] = 0;
  *(int*)&parts->host = 0;
  *(int*)&parts->absolute = 0;
  *(int*)&parts->relative = 0;
  *(int*)&parts->search = 0;
  *(int*)&parts->anchor = 0;
  after_access = name;
  p = name;
  for ( ; p[0]; p++ )
  {
    if ( p[0] == ':' )
    {
      p[0] = 0;
      parts->access[0] = name;
      after_access = &p[1];
      break;
    }
    else
    if ( p[0] == '/' || p[0] == '#' || p[0] == ';' || p[0] == '?' )
      break;
    else
    {
      // p++;
    }
  }
  p = after_access;
  for ( ; p[0]; p++ )
  {
    if ( p[0] == '#' )
    {
      parts->anchor = p[1];
      p[0] = 0;
      break;
    }
    else
    {
      // p++;
    }
  }
  p = after_access;
  if ( p[0] == '/' )
  {
    if ( p[1] == '/' )
    {
      parts->host = p[2];
      p[0] = 0;
      p = strchr( &parts->host, '/' );
      if ( p )
      {
        p[0] = 0;
        parts->absolute = p[1];
      }
      else
      {
        p = strchr( &parts->host, '?' );
        if ( p )
        {
          p[0] = 0;
          parts->search = p[1];
        }
      }
    }
    else
      parts->absolute = p[1];
  }
  else
  {
    *(int*)&parts->relative = 0;
  }
  if ( parts->access[0] && parts->anchor && strchr( "lnsdLNSD", parts->access ) && ( ( parts->host == 0 && strcasecomp( &parts->access[0], "lynxcgi" ) ) || !strcasecomp( &parts->access[0], "nntp" ) || !strcasecomp( &parts->access[0], "snews" ) || !strcasecomp( &parts->access[0], "news" ) || !strcasecomp( &parts->access[0], "data" ) ) && ( parts->relative || parts->absolute ) )
  {
    parts->anchor[ -1 ] = '#';
    *(int*)&parts->anchor = 0;
  }
  return;
}
char *strchr_or_end( char *string, int ch )
{
  char *result = strchr( string, ch );
  if ( result == 0 )
  {
    result = string + strlen( string );
  }
  return result;
}
char *HTParsePort( char *host, int *portp )
{
  int brackets = 0;
  char *result = 0;
  portp[0] = 0;
  if ( host )
  {
    while ( host[0] && result == 0 )
    {
      host++;
      if ( host[0] == 91 )
      {
        brackets++;
      }
      else
      if ( host[0] == 93 )
      {
        brackets += -1;
      }
      else
      if ( host[0] == 58 && brackets == 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( host[0] * 2 )) & 2048 ) )
      {
        char *next = 0;
        portp[0] = strtol( host, &next, 10 );
        if ( next == 0 || next == host || next[0] )
          continue;
        else
        {
          result = &host[ -1 ];
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTParsePort %d\n", portp[0] );
          }
        }
      }
    }
  }
  return result;
}
char *HTParse( char *aName, char *relatedName, int wanted )
{
  int eax;
  static char empty_string[1];
  char *result = 0;
  char *tail = 0;
  char *return_value = 0;
  unsigned int len, len1, len2;
  char *name = 0;
  char *rel = 0;
  char *p, *q;
  char *acc_method;
  struct struct_parts given, related;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTParse: aName:`%s'\n", aName );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "   relatedName:`%s'\n", relatedName );
  }
  if ( wanted & 96 )
  {
    if ( ( wanted & 96 ) == 96 )
      wanted |= 4;
    if ( wanted & 4 )
      wanted &= -97;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "   want:%s%s%s%s%s%s%s\n", "", "", "", "", "", "", "" );
  }
  len1 = strlen( aName ) + 1;
  len2 = strlen( relatedName ) + 1;
  len = len2 + len1 + 8;
  result = tail = ( ( ( ebp_232 - ( ( ( len2 + len1 + ( len * 2 ) + 30 ) >> 4 ) << 4 ) ) + 36 + 15 ) >> 4 ) << 4;
  if ( result == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTParse.c", "HTParse" );
  result[0] = 0;
  name = &result[ len ];
  rel = &name[ len1 ];
  memcpy( name, aName, len1 );
  scan( name, &given );
  if ( ( given && given.host && given.absolute ) || relatedName[0] == 0 )
  {
    related.access = 0;
    related.host = 0;
    related.absolute = 0;
    related.relative = 0;
    related.search = 0;
    related.anchor = 0;
  }
  else
  {
    memcpy( rel, relatedName, len2 );
    scan( rel, &related );
  }
  if ( given && given.host && given.relative == 0 && given.absolute == 0 && ( strcmp( given.access, "http" ) == 0 || strcmp( given.access, "https" ) == 0 || strcmp( given.access, "ftp" ) == 0 ) )
    given.absolute = empty_string;
  acc_method = related.access;
  if ( ( wanted & 16 ) && acc_method )
  {
    strcpy( tail, acc_method );
    tail += strlen( tail );
    if ( wanted & 1 )
    {
      tail[0] = ':';
      tail++;
      tail[0] = 0;
    }
  }
  if ( given && related && strcmp( given.access, related.access ) )
  {
    related.host = 0;
    related.absolute = 0;
    related.relative = 0;
    related.search = 0;
    related.anchor = 0;
  }
  if ( ( wanted & 8 ) && ( given.host || related.host ) )
  {
    if ( wanted & 1 )
    {
      tail[0] = '/';
      tail++;
      tail[0] = '/';
      tail++;
    }
    strcpy( tail, related.host );
  {
    char *p2 = strchr( result, '@' ), *h;
    int portnumber;
    if ( p2 )
      tail = &p2[1];
    p2 = HTParsePort( result, &portnumber );
    if ( p2 && acc_method && ( ( strcmp( acc_method, "http" ) == 0 && portnumber == 80 ) || ( strcmp( acc_method, "https" ) == 0 && portnumber == 443 ) || ( strcmp( acc_method, "gopher" ) == 0 && portnumber == 70 ) || ( strcmp( acc_method, "ftp" ) == 0 && portnumber == 21 ) || ( strcmp( acc_method, "wais" ) == 0 && portnumber == 210 ) || ( strcmp( acc_method, "nntp" ) == 0 && portnumber == 119 ) || ( strcmp( acc_method, "news" ) == 0 && portnumber == 119 ) || ( strcmp( acc_method, "newspost" ) == 0 && portnumber == 119 ) || ( strcmp( acc_method, "newsreply" ) == 0 && portnumber == 119 ) || ( strcmp( acc_method, "snews" ) == 0 && portnumber == 563 ) || ( strcmp( acc_method, "snewspost" ) == 0 && portnumber == 563 ) || ( strcmp( acc_method, "snewsreply" ) == 0 && portnumber == 563 ) || ( strcmp( acc_method, "finger" ) == 0 && portnumber == 79 ) || ( strcmp( acc_method, "telnet" ) == 0 && portnumber == 23 ) || ( strcmp( acc_method, "tn3270" ) == 0 && portnumber == 23 ) || ( strcmp( acc_method, "rlogin" ) == 0 && portnumber == 513 ) || ( strcmp( acc_method, "cso" ) == 0 && portnumber == 105 ) ) )
      p2[0] = 0;
    if ( p2 == 0 )
    {
      int len3 = strlen( tail );
      if ( len3 > 0 )
      {
        h = &tail[ len3 + -1 ];
        if ( h[0] == '.' )
          h[0] = 0;
      }
    }
    else
    {
      if ( result != p2 )
      {
        h = p2;
        h = &h[ -1 ];
        if ( h[0] == '.' )
        {
          for ( ; p2[0]; p2++ )
          {
            h[0] = p2[0];
            h++;
            // p2++;
          }
          *ebp_60 = 0;
        }
      }
    }
  }
  }
  tail = LYRemoveBlanks( result );
  if ( given.search && given.search[ -1 ] == 0 )
  {
    given.absolute = &given.search[ -1 ];
    given.absolute[0] = '?';
  }
  else
  if ( related.search && related.absolute == 0 && related.search[ -1 ] == 0 )
  {
    related.absolute = &related.search[ -1 ];
    related.absolute[0] = '?';
  }
  if ( given.host && related.host && strcmp( given.host, related.host ) )
  {
    related.absolute = 0;
    related.relative = 0;
    related.anchor = 0;
  }
  if ( wanted & 100 )
  {
    int want_detail = wanted & 96;
    if ( acc_method && given.absolute == 0 && given.relative )
    {
      switch ( acc_method[0] )
      {
      case 'N':
      case 'n':
        if ( strcasecomp( acc_method, "nntp" ) == 0 || ( strcasecomp( acc_method, "news" ) == 0 && strncasecomp( result, "news://", 7 ) == 0 ) )
        {
          given.absolute = given.relative;
          given.relative = 0;
        }
        break;
      case 'S':
      case 's':
        if ( strcasecomp( acc_method, "snews" ) == 0 )
        {
          given.absolute = given.relative;
          given.relative = 0;
        }
        break;
      }
    }
    if ( given.absolute )
    {
      if ( wanted & 1 )
      {
        tail[0] = '/';
        tail++;
      }
      strcpy( tail, given.absolute );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTParse: (ABS)\n" );
      }
    }
    else
    if ( related.absolute )
    {
      char *base = tail;
      tail[0] = '/';
      tail++;
      strcpy( tail, related.absolute );
      if ( given.relative )
      {
        if ( given.relative[0] == ';' )
        {
          strcpy( strchr_or_end( tail, 59 ), given.relative );
        }
        else
        if ( given.relative[0] == '?' )
        {
          strcpy( strchr_or_end( tail, 63 ), given.relative );
        }
        else
        {
          p = strchr( tail, '?' );
          if ( p == 0 )
          {
            p = tail + strlen( tail ) + -1;
            while ( p[0] != '/' )
            {
              p = &p[ -1 ];
            }
            p[1] = 0;
            strcat( p, given.relative );
          }
        }
        HTSimplify( base );
        if ( base[0] == 0 )
          memcpy( base, "/", 2 );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTParse: (Related-ABS)\n" );
      }
    }
    else
    if ( given.relative )
    {
      strcpy( tail, given.relative );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTParse: (REL)\n" );
      }
    }
    else
    if ( related.relative )
    {
      strcpy( tail, related.relative );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTParse: (Related-REL)\n" );
      }
    }
    else
    {
      if ( ( ( aName[0] != 'l' && aName[0] != 'L' ) || strncasecomp( aName, "lynxcgi:", 8 ) ) && ( ( aName[0] != 'l' && aName[0] != 'L' ) || strncasecomp( aName, "lynxexec:", 9 ) ) && ( ( aName[0] != 'l' && aName[0] != 'L' ) || strncasecomp( aName, "lynxprog:", 9 ) ) )
      {
        tail[0] = '/';
        tail++;
        tail[0] = 0;
      }
      if ( strcmp( result, "news:/" ) == 0 )
        result[5] = '*';
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTParse: (No inheritance)\n" );
      }
    }
    if ( want_detail )
    {
      p = strchr( tail, '?' );
      if ( p )
        p[0] = 0;
      else
      {
        if ( wanted & 64 )
          tail[0] = 0;
      }
    }
  }
  if ( ( wanted & 2 ) && given.anchor && given.anchor[0] )
  {
    tail += strlen( tail );
    if ( wanted & 1 )
    {
      tail[0] = '#';
      tail++;
    }
    strcpy( tail, given.anchor );
  }
  p = strchr( result, ' ' );
  if ( p )
  {
    switch ( is_url( result ) )
    {
    case 1:
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTParse:      ignore:`%s'\n", result );
      }
      break;
    case 25:
    case 26:
    case 27:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTParse:      spaces:`%s'\n", result );
      }
      break;
    default:
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTParse:      encode:`%s'\n", result );
        do
        {
          q = p + strlen( p ) + 2;
          for ( ; p[1] != q;  )
          {
            q[0] = q[ -2 ];
            q = &q[ -1 ];
          }
          p[0] = '%';
          p[1] = '2';
          p[2] = '0';
          p = strchr( result, ' ' );
        }
        while ( p == 0 );
      }
      break;
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTParse:      result:`%s'\n", result );
  }
  HTSACopy( &return_value, result );
  if ( relatedName[0] && ( wanted & 29 ) == 29 )
  {
    LYFillLocalFileURL( &return_value, relatedName );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "pass LYFillLocalFile:`%s'\n", return_value );
    }
  }
  return return_value;
}
char *HTParseAnchor( char *aName )
{
  int eax;
  char *p = aName;
  for ( ; p[0] && p[0] != '#'; p++ )
  {
    // p++;
  }
  if ( p[0] == '#' )
  {
    struct struct_parts given;
    char *name = ( ( ( ebp_72 - ( ( ( ( p - aName ) + strlen( p ) + 31 ) >> 4 ) << 4 ) ) + 8 + 15 ) >> 4 ) << 4;
    if ( name == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTParse.c", "HTParseAnchor" );
    strcpy( name, aName );
    scan( name, &given );
    p++;
    if ( given.anchor == 0 )
    {
      for ( ; p[0]; p++ )
      {
        // p++;
      }
    }
  }
  return p;
}
void HTSimplify( char *filename )
{
  char *p;
  char *q, *q1;
  if ( filename && filename[0] && filename[1] && filename[0] != '?' && filename[1] != '?' && filename[2] != '?' && strchr( filename, '/' ) )
  {
    p = &filename[2];
    for ( ; p[0] && p[0] != '?'; p++ )
    {
      if ( p[0] == '/' )
      {
        if ( p[1] == '.' && p[2] == '.' && ( p[3] == '/' || p[3] == '?' || p[3] == 0 ) )
        {
          q = &p[ -1 ];
          for ( ; filename <= q && q[0] != '/';  )
          {
            q = &q[ -1 ];
          }
          if ( q[0] == '/' && strncmp( q, "/../", 4 ) && strncmp( q, "/..?", 4 ) && ( q[ -1 ] <= filename || q[ -1 ] != '/' ) )
          {
            q1 = &p[3];
            p = q;
            for ( ; q1[0]; q1++ )
            {
              p[0] = q1[0];
              p++;
              // q1++;
            }
            p[0] = 0;
            p = &q[ -1 ];
          }
        }
        else
        if ( p[1] == '.' && p[2] == '/' )
        {
          q = p;
          q1 = &p[2];
          for ( ; q1[0]; q1++ )
          {
            q[0] = q1[0];
            q++;
            // q1++;
          }
          q[0] = 0;
          p = &p[ -1 ];
        }
        else
        if ( p[1] == '.' && p[2] == '?' )
        {
          q = &p[1];
          q1 = &p[2];
          for ( ; q1[0]; q1++ )
          {
            q[0] = q1[0];
            q++;
            // q1++;
          }
          q[0] = 0;
          p = &p[ -1 ];
        }
        else
        if ( p[1] == '.' && p[2] == 0 )
          p[1] = 0;
      }
      // p++;
    }
    if ( filename[2] <= p && p[0] == '?' && p[ -1 ] == '.' )
    {
      if ( p[ -2 ] == '/' )
      {
        q = &p[ -1 ];
        q1 = p;
        for ( ; q1[0]; q1++ )
        {
          q[0] = q1[0];
          q++;
          // q1++;
        }
        q[0] = 0;
      }
      else
      if ( p[ -2 ] == '.' && filename[4] <= p && p[ -3 ] == '/' && ( p[ -4 ] != '/' || ( filename[4] < p && p[ -5 ] != ':' ) ) )
      {
        q = &p[ -4 ];
        for ( ; filename < q && q[0] != '/';  )
        {
          q = &q[ -1 ];
        }
        if ( q[0] == '/' )
        {
          if ( filename < q && q[ -1 ] == '/' && ( q <= filename[1] || q[ -1 ] == ':' ) )
          {
            return;
          }
          q++;
        }
        if ( strncmp( q, "../", 3 ) == 0 || strncmp( q, "./", 2 ) == 0 )
        {
          return;
        }
        q1 = p;
        p = q;
        for ( ; q1[0]; q1++ )
        {
          p[0] = q1[0];
          p++;
          // q1++;
        }
        p[0] = 0;
      }
    }
  }
  return;
}
char *HTRelative( char *aName, char *relatedName )
{
  char *result = 0;
  char *p = aName;
  char *q = relatedName;
  char *after_access = 0;
  char *path = 0;
  char *last_slash = 0;
  int slashes = 0;
  for ( ; p[0] && q[0] == p[0]; q++ )
  {
    if ( p[0] == ':' )
      after_access = &p[1];
    if ( p[0] == '/' )
    {
      last_slash = p;
      slashes++;
      if ( slashes == 3 )
        path = p;
    }
    p++;
    // q++;
  }
  if ( after_access == 0 )
    HTSACopy( &result, aName );
  else
  if ( slashes <= 2 )
    HTSACopy( &result, after_access );
  else
  if ( slashes == 3 )
    HTSACopy( &result, path );
  else
  {
    int levels = 0;
    for ( ; q[0] && q[0] != '#'; q++ )
    {
      if ( q[0] == '/' )
        levels++;
      // q++;
    }
    result = calloc( ( levels * 3 ) + strlen( last_slash ) + 1, sizeof( char ) );
    if ( result == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTParse.c", "HTRelative" );
    result[0] = 0;
    for ( ; levels;  )
    {
      strcat( result, "../" );
      levels += -1;
    }
    strcat( result, &last_slash[1] );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTparse: `%s' expressed relative to\n   `%s' is\n   `%s'.\n", aName, relatedName, result );
  }
  return result;
}
char *HTEscape( char *str, unsigned char mask )
{
  char *p;
  char *q;
  char *result;
  unsigned int unacceptable = 0;
  p = str;
  for ( ; p[0]; p++ )
  {
    if ( 31 <= p[0] || p[0] < 0 || ( ( isAcceptable[ p[0] + -32 ] & mask ) & 255 ) == 0 )
      unacceptable++;
    // p++;
  }
  result = calloc( ( p - str ) + ( unacceptable * 2 ) + 1, sizeof( char ) );
  if ( result == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTParse.c", "HTEscape" );
  return result;
  p = str;
  for ( ; p[0];  )
  {
    unsigned char a = p[0];
    if ( 31 <= a || a < 0 || ( ( isAcceptable[ a + -32 ] & mask ) & 255 ) == 0 )
    {
      q[0] = '%';
      q++;
      q[0] = hex[ a >> 4 ];
      q++;
      q[0] = hex[ a & 15 ];
      q++;
    }
    else
    {
      q[0] = p[0];
      q++;
    }
    p++;
  }
  q[0] = 0;
  q++;
}
char *HTEscapeUnsafe( char *str )
{
  char *p;
  char *q;
  char *result;
  unsigned int unacceptable = 0;
  p = str;
  for ( ; p[0]; p++ )
  {
    if ( ' ' <= p[0] || p[0] < '~' )
      unacceptable++;
    // p++;
  }
  result = calloc( ( p - str ) + ( unacceptable * 2 ) + 1, sizeof( char ) );
  if ( result == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTParse.c", "HTEscapeUnsafe" );
  return result;
  p = str;
  for ( ; p[0];  )
  {
    unsigned char a = p[0];
    if ( ' ' <= a || a < '~' )
    {
      q[0] = '%';
      q++;
      q[0] = hex[ a >> 4 ];
      q++;
      q[0] = hex[ a & 15 ];
      q++;
    }
    else
    {
      q[0] = p[0];
      q++;
    }
    p++;
  }
  q[0] = 0;
  q++;
}
char *HTEscapeSP( char *str, unsigned char mask )
{
  char *p;
  char *q;
  char *result;
  unsigned int unacceptable = 0;
  p = str;
  for ( ; p[0]; p++ )
  {
    if ( p[0] != ' ' && ( 31 <= p[0] || p[0] < 0 || ( ( isAcceptable[ p[0] + -32 ] & mask ) & 255 ) == 0 ) )
      unacceptable++;
    // p++;
  }
  result = calloc( ( p - str ) + ( unacceptable * 2 ) + 1, sizeof( char ) );
  if ( result == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTParse.c", "HTEscape" );
  return result;
  p = str;
  for ( ; p[0];  )
  {
    unsigned char a = p[0];
    if ( a == ' ' )
    {
      q[0] = '+';
      q++;
    }
    else
    if ( 31 <= a || a < 0 || ( ( isAcceptable[ a + -32 ] & mask ) & 255 ) == 0 )
    {
      q[0] = '%';
      q++;
      q[0] = hex[ a >> 4 ];
      q++;
      q[0] = hex[ a & 15 ];
      q++;
    }
    else
    {
      q[0] = p[0];
      q++;
    }
    p++;
  }
  q[0] = 0;
  q++;
}
char from_hex( char c )
{
  return ebp_5;
}
char *HTUnEscape( char *str )
{
  char *p = str;
  char *q = str;
  if ( p == 0 || p[0] == 0 )
  {
    return str;
  }
  while ( p[0] )
  {
    if ( p[0] == '%' && p[1] && p[2] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[1] * 2 )) & 4096 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[2] * 2 )) & 4096 ) )
    {
      p++;
      if ( p[0] )
      {
        q[0] = from_hex( p[0] ) << 4;
        p++;
      }
      if ( p[0] )
      {
        q[0] = q[0] + from_hex( p[0] );
        p++;
      }
      q++;
    }
    else
    {
      q[0] = p[0];
      q++;
      p++;
    }
  }
  q[0] = 0;
  q++;
  return str;
}
char *HTUnEscapeSome( char *str, char *do_trans )
{
  char *p = str;
  char *q = str;
  char testcode;
  if ( p == 0 || p[0] == 0 || do_trans == 0 || do_trans[0] == 0 )
  {
    return str;
  }
  while ( p[0] )
  {
    if ( p[0] == '%' && p[1] && p[2] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[1] * 2 )) & 4096 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[2] * 2 )) & 4096 ) )
    {
      testcode = ( from_hex( p[1] ) << 4 ) + from_hex( p[2] );
      if ( testcode && strchr( do_trans, testcode ) )
      {
        q[0] = testcode;
        q++;
        p += 3;
      }
    }
    q[0] = p[0];
    q++;
    p++;
  }
  q[0] = 0;
  q++;
  return str;
}
void HTMake822Word( char **str, int quoted )
{
  char *p;
  char *q;
  char *result;
  unsigned char a;
  unsigned int added = 0;
  if ( str[0] == 0 || str[0] == 0 )
  {
    HTSACopy( str, "" );
  }
  else
  {
    p = str[0];
    for ( ; p[0]; p++ )
    {
      a = p[0];
      if ( 31 <= a || a < 0 || ( crfc[ a + -32 ] & 1 ) )
      {
        if ( added == 0 )
          added = 2;
        if ( -97 <= a && a != '\t' )
        {
          if ( a == '\r' || a == '\n' )
            added += 2;
          else
          {
            if ( ( a & 127 ) <= 31 || ( crfc[ a + -32 ] & 2 ) )
              added++;
          }
        }
      }
      // p++;
    }
    if ( added )
    {
      result = calloc( added + ( p - str[0] ) + 1, sizeof( char ) );
      if ( result == 0 )
        outofmem( "../../../WWW/Library/Implementation/HTParse.c", "HTMake822Word" );
      return result;
    }
  }
}
#if 0
#endif
