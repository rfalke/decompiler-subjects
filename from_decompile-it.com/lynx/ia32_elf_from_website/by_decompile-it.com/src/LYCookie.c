#include "LYCookie.c.h"
static HTList *domain_list;
static HTList *cookie_list;
static int total_cookies;
static int number_of_file_cookies;
HTProtocol LYLynxCookies;
void MemAllocCopy( char **dest, char *start, char *end )
{
  char *temp;
  if ( start == 0 || end == 0 || end <= start )
  {
    HTSACopy( dest, "" );
  }
  else
  {
    temp = calloc( ( end - start ) + 1, sizeof( char ) );
    if ( temp == 0 )
      outofmem( "./LYCookie.c", "MemAllocCopy" );
    LYstrncpy( temp, start, end - start );
    HTSACopy( dest, temp );
    if ( temp == 0 )
    {
      return;
    }
    free( temp );
    temp = 0;
  }
  return;
}
cookie *newCookie( void )
{
  cookie *p = calloc( 1, sizeof( cookie ) );
  if ( p == 0 )
    outofmem( "./LYCookie.c", "newCookie" );
  HTSprintf0( &p->lynxID, "%p", p );
  *(int*)&p->port = 80;
  return p;
}
void freeCookie( cookie *co )
{
  if ( co )
  {
    if ( co->lynxID[0] )
    {
      free( &co->lynxID[0] );
      *(int*)&co->lynxID[0] = 0;
    }
    if ( co->name )
    {
      free( &co->name );
      *(int*)&co->name = 0;
    }
    if ( co->value )
    {
      free( &co->value );
      *(int*)&co->value = 0;
    }
    if ( co->comment )
    {
      free( &co->comment );
      *(int*)&co->comment = 0;
    }
    if ( co->commentURL )
    {
      free( &co->commentURL );
      *(int*)&co->commentURL = 0;
    }
    if ( co->domain )
    {
      free( &co->domain );
      *(int*)&co->domain = 0;
    }
    if ( co->path )
    {
      free( &co->path );
      *(int*)&co->path = 0;
    }
    if ( co->PortList )
    {
      free( &co->PortList );
      *(int*)&co->PortList = 0;
    }
    if ( co == 0 )
    {
      return;
    }
    free( co );
    co = 0;
  }
  return;
}
BOOLEAN host_matches( char *A, char *B )
{
  if ( B[0] != '.' && strcasecomp( A, B ) == 0 )
  {
  }
  if ( B[0] == '.' && B[1] && B[1] != '.' && A[0] != '.' )
  {
    int diff = strlen( A ) - strlen( B );
    if ( diff > 0 && strcasecomp( &A[ diff ], B ) == 0 )
    {
    }
  }
  return 0;
}
BOOLEAN port_matches( int port, char *list )
{
  char *number = list;
  if ( number == 0 || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( number[0] * 2 )) & 2048 ) == 0 )
  {
  }
  else
  do
  {
    if ( number[0] )
    {
      if ( port == atoi( number ) )
      {
        break;
      }
      else
      {
        for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( number[0] * 2 )) & 2048; number++ )
        {
          // number++;
        }
        for ( ; number[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( number[0] * 2 )) & 2048 ) == 0; number++ )
        }
      }
      else
      {
        break;
      }
    }
    while ( !number[0] || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( number[0] * 2 )) & 2048 ) );
    number++;
    return 1;
}
int ignore_trailing_slash( char *a )
{
  int len = strlen( a );
  for ( ; len > 1 && a[ len + -1 ] == '/';  )
  {
    len += -1;
  }
  return len;
}
BOOLEAN is_prefix( char *a, char *b )
{
  int len_a = ignore_trailing_slash( a );
  int len_b = ignore_trailing_slash( b );
  if ( len_b < len_a )
  {
  }
  if ( strncmp( a, b, len_a ) )
  {
  }
  if ( len_a < len_b && ( len_a > 1 || a[0] != '/' ) && b[ len_a ] && b[ len_a ] != '/' )
  {
  }
  return 1;
}
domain_entry *find_domain_entry( char *name )
{
  HTList *hl;
  domain_entry *de = 0;
  if ( name && name[0] )
  {
    hl = domain_list;
    for ( ; hl;  )
    {
      de = &hl->object[0];
      if ( de && de->domain[0] )
      {
        if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
        {
          fprintf( TraceFP( ), "...test_domain_entry(%s) bv:%u, invcheck_bv:%u\n", &de->domain[0], de->bv, de->invcheck_bv );
        }
        if ( strcasecomp( name, &de->domain[0] ) == 0 )
          break;
      }
      de = 0;
      hl = &hl->next;
    }
  }
  if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
  {
    fprintf( TraceFP( ), "find_domain_entry(%s) bv:%d, invcheck_bv:%d\n", name, -1, -1 );
  }
  return de;
}
void store_cookie( cookie *co, char *hostname, char *path )
{
  HTList *hl, *next;
  cookie *c2;
  time_t now = time( 0 );
  int pos;
  char *ptr;
  domain_entry *de = 0;
  BOOLEAN Replacement = 0;
  int invprompt_reasons = 0;
  if ( co )
  {
    if ( domain_list == 0 )
    {
      domain_list = HTList_new( );
      total_cookies = 0;
    }
    cookie_list = 0;
    de = find_domain_entry( &co->domain );
    if ( de )
      cookie_list = &de->cookie_list;
    if ( ( is_prefix( &co->path, path ) & 255 ) == 0 )
    {
      invcheck_behaviour_t invcheck_bv = INVCHECK_QUERY;
      if ( invcheck_bv == INVCHECK_STRICT )
      {
        if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
        {
          fprintf( TraceFP( ), "store_cookie: Rejecting because '%s' is not a prefix of '%s'.\n", &co->path, path );
        }
        freeCookie( co );
      }
      else
      {
        if ( invcheck_bv >= 1 )
        {
        }
        else
          invprompt_reasons |= 1;
      }
    }
    if ( strcasecomp( &co->domain, hostname ) )
    {
      if ( strchr( hostname, '.' ) == 0 )
      {
        if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
        {
          fprintf( TraceFP( ), "store_cookie: Rejecting because '%s' has no dot.\n", hostname );
        }
        freeCookie( co );
      }
      else
      {
        if ( co->domain[0] != '.' || co->domain[1] == 0 )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
          {
            fprintf( TraceFP( ), "store_cookie: Rejecting domain '%s'.\n", &co->domain );
          }
          freeCookie( co );
        }
        else
        {
          ptr = strchr( &co->domain[1], '.' );
          if ( ptr == 0 || ptr[1] == 0 )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
            {
              fprintf( TraceFP( ), "store_cookie: Rejecting domain '%s'.\n", &co->domain );
            }
            freeCookie( co );
          }
          else
          {
            if ( ( host_matches( hostname, &co->domain ) & 255 ) == 0 )
            {
              if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
              {
                fprintf( TraceFP( ), "store_cookie: Rejecting domain '%s' for host '%s'.\n", &co->domain, hostname );
              }
              freeCookie( co );
            }
            else
            {
              ptr = &hostname[ strlen( hostname ) - strlen( &co->domain ) ];
              if ( strchr( hostname, '.' ) < ptr )
              {
                invcheck_behaviour_t invcheck_bv = INVCHECK_QUERY;
                if ( invcheck_bv == INVCHECK_STRICT )
                {
                  if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                  {
                    fprintf( TraceFP( ), "store_cookie: Rejecting because '%s' is not a prefix of '%s'.\n", &co->path, path );
                  }
                  freeCookie( co );
                }
                else
                {
                  if ( invcheck_bv >= 1 )
                  {
                  }
                  else
                    invprompt_reasons |= 2;
                }
              }
            }
          }
        }
      }
    }
    if ( invprompt_reasons )
    {
      char *msg = 0;
      if ( invprompt_reasons & 2 )
      {
        HTSprintf0( &msg, gettext( "Accept invalid cookie domain=%s for '%s'?" ), co->domain, hostname );
        if ( HTForcedPrompt( cookie_noprompt, msg, 0 ) == 0 )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
          {
            fprintf( TraceFP( ), "store_cookie: Rejecting domain '%s' for host '%s'.\n", &co->domain, hostname );
          }
          freeCookie( co );
          if ( msg == 0 )
          {
            return;
          }
          free( msg );
          msg = 0;
        }
      }
      if ( invprompt_reasons & 1 )
      {
        HTSprintf0( &msg, gettext( "Accept invalid cookie path=%s as a prefix of '%s'?" ), co->path, path );
        if ( HTForcedPrompt( cookie_noprompt, msg, 0 ) == 0 )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
          {
            fprintf( TraceFP( ), "store_cookie: Rejecting because '%s' is not a prefix of '%s'.\n", &co->path, path );
          }
          freeCookie( co );
          if ( msg == 0 )
          {
            return;
          }
          free( msg );
          msg = 0;
        }
      }
      if ( msg )
      {
        free( msg );
      }
    }
    if ( de == 0 )
    {
      de = calloc( 1, sizeof( domain_entry ) );
      if ( de == 0 )
        outofmem( "./LYCookie.c", "store_cookie" );
      *(int*)&de->bv = 2;
      *(int*)&de->invcheck_bv = 0;
      de->cookie_list = HTList_new( );
      cookie_list = &de->cookie_list;
      HTSACopy( &de->domain, &co->domain );
      HTList_appendObject( domain_list, (void*)de );
    }
    hl = cookie_list;
    pos = 0;
    for ( ; hl;  )
    {
      c2 = &hl->object[0];
      next = &hl->next;
      if ( c2 && ( c2->flags & 4 ) && c2->expires <= now )
      {
        HTList_removeObject( cookie_list, (void*)c2 );
        freeCookie( c2 );
        c2 = 0;
        total_cookies += -1;
      }
      else
      if ( c2 && strcasecomp( &co->domain, &c2->domain ) == 0 && strcmp( &co->path, &c2->path ) == 0 && strcmp( &co->name, &c2->name ) == 0 )
      {
        HTList_removeObject( cookie_list, (void*)c2 );
        freeCookie( c2 );
        c2 = 0;
        total_cookies += -1;
        Replacement = 1;
      }
      else
      if ( c2 && co->pathlen <= c2->pathlen )
        pos++;
      hl = next;
    }
    if ( ( co->flags & 4 ) && co->expires <= now )
    {
      freeCookie( co );
      co = 0;
    }
    else
    {
      if ( max_cookies_domain < HTList_count( cookie_list ) )
      {
        if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
        {
          fprintf( TraceFP( ), "store_cookie: Domain's cookie limit exceeded!  Rejecting cookie.\n" );
        }
        freeCookie( co );
        co = 0;
      }
      else
      {
        if ( max_cookies_global < total_cookies )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
          {
            fprintf( TraceFP( ), "store_cookie: Total cookie limit exceeded!  Rejecting cookie.\n" );
          }
          freeCookie( co );
          co = 0;
        }
        else
        {
          if ( co->value == 0 )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
            {
              fprintf( TraceFP( ), "store_cookie: Value is NULL! Not storing cookie.\n" );
            }
            freeCookie( co );
            co = 0;
          }
          else
          {
            if ( Replacement == 1 && de && de->bv != 1 )
            {
              HTList_insertObjectAt( cookie_list, (void*)co, pos );
              total_cookies++;
            }
            else
            {
              if ( ( co->flags & 32 ) || ( HTConfirmCookie( de, hostname, &co->name, &co->value ) & 255 ) )
              {
                HTList_insertObjectAt( cookie_list, (void*)co, pos );
                total_cookies++;
              }
              else
              {
                freeCookie( co );
                co = 0;
              }
            }
          }
        }
      }
    }
  }
  return;
}
char *scan_cookie_sublist( char *hostname, char *path, int port, HTList *sublist, char *header, BOOLEAN secure )
{
  int eax;
  HTList *hl = sublist, *next = 0;
  cookie *co;
  time_t now = time( 0 );
  int len = 0;
  char crlftab[8];
  sprintf( crlftab, "%c%c%c", 13, 10, 9 );
  while ( hl == 0 )
  {
    co = &hl->object[0];
    next = &hl->next;
    if ( co && LYstrstr( hostname, &co->domain ) )
    {
      if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
      {
        fprintf( TraceFP( ), "Checking cookie %p %s=%s\n", hl, "(no name)", "(no value)" );
      }
      if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
      {
        fprintf( TraceFP( ), "\t%s %s %d %s %s %d%s\n", hostname, "(no domain)", host_matches( hostname, &co->domain ), path, &co->path, 0, "" );
      }
    }
    if ( co && ( co->flags & 4 ) && co->expires <= now )
    {
      HTList_removeObject( sublist, (void*)co );
      freeCookie( co );
      co = 0;
      total_cookies += -1;
    }
    if ( co && ( host_matches( hostname, &co->domain ) & 255 ) && ( co->pathlen == 0 || ( is_prefix( &co->path, path ) & 255 ) ) )
    {
      if ( ( co->flags & 1 ) && secure == 0 )
      {
        hl = next;
      }
      else
      {
        if ( co->PortList && ( port_matches( port, &co->PortList ) & 255 ) == 0 )
        {
          hl = next;
        }
        else
        {
          if ( header == 0 )
          {
            if ( co->version > 0 )
            {
              HTSprintf0( &header, "$Version=\"%d\"; ", co->version );
              len += strlen( header );
            }
          }
          else
            HTSACat( &header, "; " );
          HTSACat( &header, &co->name );
          HTSACat( &header, "=" );
          if ( co->quoted )
          {
            HTSACat( &header, "\"" );
            len++;
          }
          HTSACat( &header, &co->value );
          if ( co->quoted )
          {
            HTSACat( &header, "\"" );
            len++;
          }
          len = len + strlen( &co->name ) + strlen( &co->value ) + 1;
          if ( co->version > 0 )
          {
            if ( co->path && ( co->flags & 16 ) )
            {
              HTSACat( &header, "; $Path=\"" );
              HTSACat( &header, &co->path );
              HTSACat( &header, "\"" );
              len = len + strlen( &co->path ) + 10;
            }
            if ( co->PortList && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( co->PortList[0] * 2 )) & 2048 ) )
            {
              HTSACat( &header, "; $Port=\"" );
              HTSACat( &header, &co->PortList );
              HTSACat( &header, "\"" );
              len = len + strlen( &co->PortList ) + 10;
            }
            if ( co->domain && ( co->flags & 8 ) )
            {
              HTSACat( &header, "; $Domain=\"" );
              HTSACat( &header, &co->domain );
              HTSACat( &header, "\"" );
              len = len + strlen( &co->domain ) + 12;
              hl = next;
            }
          }
        }
      }
    }
  }
}
char *alloc_attr_value( char *value_start, char *value_end )
{
  char *value = 0;
  if ( value_start && value_start <= value_end )
  {
    int value_len = value_end - value_start;
    if ( max_cookies_buffer < value_len )
      value_len = max_cookies_buffer;
    value = calloc( value_len + 1, sizeof( char ) );
    if ( value == 0 )
      outofmem( "./LYCookie.c", "LYProcessSetCookies" );
    LYstrncpy( value, value_start, value_len );
  }
  return value;
}
unsigned int parse_attribute( unsigned int flags, cookie *cur_cookie, int *cookie_len, char *attr_start, int attr_len, char *value, char *address, char *hostname, int port )
{
  BOOLEAN known_attr = 0;
  int url_type;
  flags &= -3;
  if ( attr_len == 6 && strncasecomp( attr_start, "secure", 6 ) == 0 )
  {
    if ( value == 0 )
    {
      known_attr = 1;
      if ( cur_cookie )
        cur_cookie->flags |= 1;
    }
    else
      known_attr = 0;
  }
  else
  if ( attr_len == 7 && strncasecomp( attr_start, "discard", 7 ) == 0 )
  {
    if ( value == 0 )
    {
      known_attr = 1;
      if ( cur_cookie )
        cur_cookie->flags |= 2;
    }
    else
      known_attr = 0;
  }
  else
  if ( attr_len == 7 && strncasecomp( attr_start, "comment", 7 ) == 0 )
  {
    known_attr = 1;
    if ( cur_cookie && value && cur_cookie->comment == 0 )
    {
      HTSACopy( &cur_cookie->comment, value );
      cookie_len[0] += strlen( &cur_cookie->comment );
    }
  }
  else
  if ( attr_len == 10 && strncasecomp( attr_start, "commentURL", 10 ) == 0 )
  {
    known_attr = 1;
    if ( cur_cookie && value && cur_cookie->commentURL == 0 )
    {
      cur_cookie->commentURL = HTParse( value, address, 31 );
      url_type = is_url( &cur_cookie->commentURL );
      switch ( url_type )
      {
      case 2:
      case 20:
        cookie_len[0] += strlen( &cur_cookie->commentURL );
        break;
      case 0:
//      case 20:
        if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
        {
          fprintf( TraceFP( ), "LYProcessSetCookies: Rejecting commentURL value '%s'\n", &cur_cookie->commentURL );
        }
        if ( cur_cookie->commentURL )
        {
          free( &cur_cookie->commentURL );
          *(int*)&cur_cookie->commentURL = 0;
        }
        break;
      }
    }
  }
  else
  {
    if ( attr_len == 6 && strncasecomp( attr_start, "domain", 6 ) == 0 )
    {
      known_attr = 1;
      if ( cur_cookie && value && ( cur_cookie->flags & 8 ) == 0 )
      {
        cookie_len[0] -= strlen( &cur_cookie->domain );
        if ( value[0] != '.' && value[0] && value[1] && strcasecomp( value, hostname ) )
        {
          char *ptr = strchr( value, '.' );
          if ( ptr && ptr[1] )
          {
            ptr = value;
            for ( ; ptr[0] == '.' || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ptr[0] * 2 )) & 2048 ); ptr++ )
            {
              // ptr++;
            }
            if ( ptr[0] )
            {
              if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
              {
                fprintf( TraceFP( ), "LYProcessSetCookies: Adding lead dot for domain value '%s'\n", value );
              }
              HTSACopy( &cur_cookie->domain, "." );
              HTSACat( &cur_cookie->domain, value );
            }
            else
              HTSACopy( &cur_cookie->domain, value );
          }
          else
            HTSACopy( &cur_cookie->domain, value );
        }
        else
          HTSACopy( &cur_cookie->domain, value );
        cookie_len[0] += strlen( &cur_cookie->domain );
        cur_cookie->flags |= 8;
      }
    }
    else
    {
      if ( attr_len == 4 && strncasecomp( attr_start, "path", 4 ) == 0 )
      {
        known_attr = 1;
        if ( cur_cookie && value && ( cur_cookie->flags & 16 ) == 0 )
        {
          cookie_len[0] -= strlen( &cur_cookie->path );
          HTSACopy( &cur_cookie->path, value );
          cur_cookie->pathlen = strlen( &cur_cookie->path );
          cookie_len[0] += cur_cookie->pathlen;
          cur_cookie->flags |= 16;
        }
      }
      else
      {
        if ( attr_len == 4 && strncasecomp( attr_start, "port", 4 ) == 0 )
        {
          if ( cur_cookie && value && cur_cookie->PortList == 0 )
          {
            char *cp = value;
            for ( ; cp[0] && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 ) || cp[0] == ',' || cp[0] == ' ' ); cp++ )
            {
              // cp++;
            }
            if ( cp[0] == 0 )
            {
              if ( ( port_matches( port, value ) & 255 ) == 0 )
                flags |= 1;
              else
              {
                HTSACopy( &cur_cookie->PortList, value );
                cookie_len[0] += strlen( &cur_cookie->PortList );
              }
              known_attr = 1;
            }
            else
              known_attr = 0;
          }
          else
          {
            if ( cur_cookie )
            {
              if ( cur_cookie->PortList == 0 )
              {
                HTSprintf0( &cur_cookie->PortList, "%d", port );
                cookie_len[0] += strlen( &cur_cookie->PortList );
              }
              known_attr = 1;
            }
          }
        }
        else
        {
          if ( attr_len == 7 && strncasecomp( attr_start, "version", 7 ) == 0 )
          {
            known_attr = 1;
            if ( cur_cookie && value && cur_cookie->version <= 0 )
            {
              int temp = strtol( value, 0, 10 );
              if ( *(int*)(__errno_location( )) != -34 )
                cur_cookie->version = temp;
            }
          }
          else
          {
            if ( attr_len == 7 && strncasecomp( attr_start, "max-age", 7 ) == 0 )
            {
              known_attr = 1;
              if ( cur_cookie && value && ( flags & 4 ) == 0 )
              {
                int temp = strtol( value, 0, 10 );
                cur_cookie->flags |= 4;
                if ( *(int*)(__errno_location( )) == -34 )
                  *(int*)&cur_cookie->expires = 0;
                else
                {
                  cur_cookie->expires = temp + time( 0 );
                  if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                  {
                    fprintf( TraceFP( ), "LYSetCookie: expires %d, %s", cur_cookie->expires, ctime( &cur_cookie->expires ) );
                  }
                }
                flags |= 4;
              }
            }
            else
            {
              if ( attr_len == 7 && strncasecomp( attr_start, "expires", 7 ) == 0 )
              {
                known_attr = 1;
                if ( cur_cookie && !( flags & 4 ) && !( cur_cookie->flags & 4 ) && value )
                {
                  cur_cookie->flags |= 4;
                  cur_cookie->expires = LYmktime( value, 0 );
                  if ( cur_cookie->expires > 0 && WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                  {
                    fprintf( TraceFP( ), "LYSetCookie: expires %d, %s", cur_cookie->expires, ctime( &cur_cookie->expires ) );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( known_attr )
  {
    flags |= 2;
  }
  return flags;
}
void LYProcessSetCookies( char *SetCookie, char *SetCookie2, char *address, char *hostname, char *path, int port )
{
  char *p, *attr_start, *attr_end, *value_start, *value_end;
  HTList *CombinedCookies = 0, *cl = 0;
  cookie *cur_cookie = 0, *co = 0;
  int cookie_len = 0;
  int NumCookies = 0;
  BOOLEAN Quoted = 0;
  unsigned int parse_flags = 0;
  if ( ( SetCookie && SetCookie[0] ) || ( SetCookie2 && SetCookie2[0] ) )
  {
    CombinedCookies = HTList_new( );
    p = "";
    if ( SetCookie && p[0] && WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
    {
      fprintf( TraceFP( ), "LYProcessSetCookies: Using Set-Cookie2 header.\n" );
      while ( NumCookies <= max_cookies_domain && p[0] )
      {
        attr_start = attr_end = value_start = value_end = 0;
        p = LYSkipCBlanks( p );
        attr_start = p;
        for ( ; p[0] && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8192 ) && p[0] != '=' && p[0] != ';' && p[0] != ','; p++ )
        {
          // p++;
        }
        attr_end = p;
        p = LYSkipCBlanks( p );
        if ( p[0] == '=' || strncasecomp( attr_start, "Expires", 7 ) == 0 )
        {
          if ( p[0] == '=' )
            p++;
          p = LYSkipCBlanks( p );
          if ( attr_end - attr_start == 7 && strncasecomp( attr_start, "Expires", 7 ) == 0 )
          {
            int spaces = 6;
            value_start = p;
            if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 2048 )
            {
              spaces += -1;
              while ( p[0] && p[0] != ';' && p[0] != ',' && spaces )
              {
                p++;
                if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8192 )
                {
                  for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( p[1] * 2 )) & 8192; p++ )
                  {
                    // p++;
                  }
                  spaces += -1;
                }
                else
                {
                  if ( p[0] == '-' )
                  {
                    spaces += -1;
                  }
                }
              }
              value_end = p;
            }
            else
            {
              for ( ; p[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 1024 ); p++ )
              {
                // p++;
              }
              for ( ; p[0] == ',' || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8192 ); p++ )
              {
                // p++;
              }
              spaces += -1;
            }
          }
          else
          {
            if ( attr_end - attr_start == 4 && !strncasecomp( attr_start, "port", 4 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 2048 ) )
            {
              char *cp, *cp1;
              value_start = p;
              while ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 2048 ) == 0 )
              {
                p++;
              }
              value_end = p;
              p = LYSkipCBlanks( p );
              if ( p[0] && p[0] != ';' )
              {
                if ( p[0] == ',' )
                {
                  cp = LYSkipCBlanks( &p[1] );
                  if ( cp[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 ) )
                  {
                    cp1 = cp;
                    for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[0] * 2 )) & 2048; cp1++ )
                    {
                      // cp1++;
                    }
                    cp1 = LYSkipCBlanks( cp1 );
                    if ( cp1[0] == 0 || cp1[0] == ',' || cp1[0] == ';' )
                    {
                      p = cp;
                    }
                    else
                    {
                      while ( p[0] && p[0] != ';' && p[0] != ',' )
                      {
                        p++;
                      }
                      value_end = p;
                      if ( value_start < value_end && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[ -1 ] * 2 )) & 8192 ) )
                      {
                        value_end = &value_end[ -1 ];
                        for ( ; value_start[1] < value_end && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[0] * 2 )) & 8192 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[ -1 ] * 2 )) & 8192 );  )
                        {
                          value_end = &value_end[ -1 ];
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              if ( p[0] == '"' )
              {
                BOOLEAN escaped = 0;
                p++;
                value_start = p;
                for ( ; p[0] && ( p[0] != '"' || escaped ); p++ )
                {
                  escaped = escaped == 0 && p[0] == '\\' ? 1 : 0;
                  // p++;
                }
                if ( value_start != p && p[0] == '"' && escaped == 0 )
                {
                  value_end = p;
                  p++;
                  Quoted = 1;
                }
                else
                {
                  value_start = &value_start[ -1 ];
                  value_end = p;
                  if ( p[0] )
                    p++;
                  Quoted = 0;
                }
              }
              else
              {
                value_start = p;
                for ( ; p[0] && p[0] != ';' && p[0] != ','; p++ )
                {
                  // p++;
                }
                value_end = p;
                if ( value_start < value_end && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[ -1 ] * 2 )) & 8192 ) )
                {
                  value_end = &value_end[ -1 ];
                  for ( ; value_start[1] < value_end && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[0] * 2 )) & 8192 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[ -1 ] * 2 )) & 8192 );  )
                  {
                    value_end = &value_end[ -1 ];
                  }
                }
              }
            }
          }
        }
        if ( p[0] == ';' || p[0] == ',' )
          p++;
        if ( attr_start < attr_end )
        {
          char *value = alloc_attr_value( value_start, value_end );
          parse_flags = parse_attribute( parse_flags, cur_cookie, &cookie_len, attr_start, attr_end - attr_start, value, address, hostname, port );
          if ( !( parse_flags & 2 ) && value && value_start <= value_end )
          {
            if ( cookie_len <= max_cookies_buffer && cur_cookie && ( parse_flags & 1 ) == 0 )
            {
              if ( cur_cookie->version <= 0 )
                *(int*)&cur_cookie->version = 1;
              HTList_appendObject( CombinedCookies, (void*)cur_cookie );
            }
            else
            {
              if ( cur_cookie )
              {
                if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                {
                  fprintf( TraceFP( ), "LYProcessSetCookies: Rejecting Set-Cookie2: %s=%s\n", "[no name]", "[no value]" );
                }
                if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                {
                  fprintf( TraceFP( ), "                     due to invalid port!\n" );
                }
                if ( parse_flags & 1 )
                  NumCookies += -1;
                freeCookie( cur_cookie );
                cur_cookie = 0;
              }
            }
            cur_cookie = newCookie( );
            cookie_len = 0;
            NumCookies++;
            MemAllocCopy( &cur_cookie->name, attr_start, attr_end );
            cookie_len += strlen( &cur_cookie->name );
            MemAllocCopy( &cur_cookie->value, value_start, value_end );
            cookie_len += strlen( &cur_cookie->value );
            HTSACopy( &cur_cookie->domain, hostname );
            cookie_len += strlen( &cur_cookie->domain );
            HTSACopy( &cur_cookie->path, path );
            cur_cookie->pathlen = strlen( &cur_cookie->path );
            cookie_len += cur_cookie->pathlen;
            cur_cookie->port = port;
            parse_flags = 0;
            cur_cookie->quoted = 1;
          }
          if ( value )
          {
            free( value );
          }
        }
      }
      if ( NumCookies <= max_cookies_domain && cookie_len <= max_cookies_buffer && cur_cookie && ( parse_flags & 1 ) == 0 )
      {
        if ( cur_cookie->version <= 0 )
          *(int*)&cur_cookie->version = 1;
        HTList_appendObject( CombinedCookies, (void*)cur_cookie );
      }
      else
      {
        if ( cur_cookie && ( parse_flags & 1 ) == 0 )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
          {
            fprintf( TraceFP( ), "LYProcessSetCookies: Rejecting Set-Cookie2: %s=%s\n", "[no name]", "[no value]" );
          }
          if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
          {
            fprintf( TraceFP( ), "                     due to excessive %s%s%s\n", "", "", "!\n" );
          }
          freeCookie( cur_cookie );
          cur_cookie = 0;
        }
        else
        {
          if ( cur_cookie )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
            {
              fprintf( TraceFP( ), "LYProcessSetCookies: Rejecting Set-Cookie2: %s=%s\n", "[no name]", "[no value]" );
            }
            if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
            {
              fprintf( TraceFP( ), "                     due to invalid port!\n" );
            }
            NumCookies += -1;
            freeCookie( cur_cookie );
            cur_cookie = 0;
          }
        }
      }
      cookie_len = 0;
      NumCookies = 0;
      cur_cookie = 0;
      p = "";
      if ( SetCookie2 && p[0] && WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
      {
        fprintf( TraceFP( ), "LYProcessSetCookies: Using Set-Cookie header.\n" );
        while ( NumCookies <= max_cookies_domain && p[0] )
        {
          attr_start = attr_end = value_start = value_end = 0;
          p = LYSkipCBlanks( p );
          attr_start = p;
          for ( ; p[0] && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8192 ) && p[0] != '=' && p[0] != ';' && p[0] != ','; p++ )
          {
            // p++;
          }
          attr_end = p;
          p = LYSkipCBlanks( p );
          if ( p[0] == '=' || strncasecomp( attr_start, "Expires", 7 ) == 0 )
          {
            if ( p[0] == '=' )
              p++;
            p = LYSkipCBlanks( p );
            if ( attr_end - attr_start == 7 && strncasecomp( attr_start, "Expires", 7 ) == 0 )
            {
              int spaces = 6;
              value_start = p;
              if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 2048 )
              {
                spaces += -1;
                while ( p[0] && p[0] != ';' && p[0] != ',' && spaces )
                {
                  p++;
                  if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8192 )
                  {
                    for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( p[1] * 2 )) & 8192; p++ )
                    {
                      // p++;
                    }
                    spaces += -1;
                  }
                  else
                  {
                    if ( p[0] == '-' )
                    {
                      spaces += -1;
                    }
                  }
                }
                value_end = p;
              }
              else
              {
                for ( ; p[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 1024 ); p++ )
                {
                  // p++;
                }
                for ( ; p[0] == ',' || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8192 ); p++ )
                {
                  // p++;
                }
                spaces += -1;
              }
            }
            else
            {
              if ( attr_end - attr_start == 4 && !strncasecomp( attr_start, "port", 4 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 2048 ) )
              {
                char *cp, *cp1;
                value_start = p;
                while ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 2048 ) == 0 )
                {
                  p++;
                }
                value_end = p;
                p = LYSkipCBlanks( p );
                if ( p[0] && p[0] != ';' )
                {
                  if ( p[0] == ',' )
                  {
                    cp = LYSkipCBlanks( &p[1] );
                    if ( cp[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 ) )
                    {
                      cp1 = cp;
                      for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[0] * 2 )) & 2048; cp1++ )
                      {
                        // cp1++;
                      }
                      cp1 = LYSkipCBlanks( cp1 );
                      if ( cp1[0] == 0 || cp1[0] == ',' || cp1[0] == ';' )
                      {
                        p = cp;
                      }
                      else
                      {
                        while ( p[0] && p[0] != ';' && p[0] != ',' )
                        {
                          p++;
                        }
                        value_end = p;
                        if ( value_start < value_end && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[ -1 ] * 2 )) & 8192 ) )
                        {
                          value_end = &value_end[ -1 ];
                          for ( ; value_start[1] < value_end && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[0] * 2 )) & 8192 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[ -1 ] * 2 )) & 8192 );  )
                          {
                            value_end = &value_end[ -1 ];
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                if ( p[0] == '"' )
                {
                  BOOLEAN escaped = 0;
                  p++;
                  value_start = p;
                  for ( ; p[0] && ( p[0] != '"' || escaped ); p++ )
                  {
                    escaped = escaped == 0 && p[0] == '\\' ? 1 : 0;
                    // p++;
                  }
                  if ( value_start != p && p[0] == '"' && escaped == 0 )
                  {
                    value_end = p;
                    p++;
                    Quoted = 1;
                  }
                  else
                  {
                    value_start = &value_start[ -1 ];
                    value_end = p;
                    if ( p[0] )
                      p++;
                    Quoted = 0;
                  }
                }
                else
                {
                  value_start = p;
                  for ( ; p[0] && p[0] != ';' && p[0] != ','; p++ )
                  {
                    // p++;
                  }
                  value_end = p;
                  if ( value_start < value_end && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[ -1 ] * 2 )) & 8192 ) )
                  {
                    value_end = &value_end[ -1 ];
                    for ( ; value_start[1] < value_end && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[0] * 2 )) & 8192 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value_end[ -1 ] * 2 )) & 8192 );  )
                    {
                      value_end = &value_end[ -1 ];
                    }
                  }
                }
              }
            }
          }
          if ( p[0] == ';' || p[0] == ',' )
            p++;
          if ( attr_start < attr_end )
          {
            char *value = alloc_attr_value( value_start, value_end );
            parse_flags = parse_attribute( parse_flags, cur_cookie, &cookie_len, attr_start, attr_end - attr_start, value, address, hostname, port );
            if ( !( parse_flags & 2 ) && value && value_start <= value_end )
            {
              if ( cookie_len <= max_cookies_buffer && cur_cookie )
              {
                if ( SetCookie2 )
                {
                  if ( cur_cookie->version <= 0 )
                    *(int*)&cur_cookie->version = 1;
                  cur_cookie->quoted = 1;
                }
                HTList_appendObject( CombinedCookies, (void*)cur_cookie );
              }
              else
              {
                if ( cur_cookie )
                {
                  if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                  {
                    fprintf( TraceFP( ), "LYProcessSetCookies: Rejecting Set-Cookie: %s=%s\n", "[no name]", "[no value]" );
                  }
                  if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                  {
                    fprintf( TraceFP( ), "                     due to excessive length!\n" );
                  }
                  freeCookie( cur_cookie );
                  cur_cookie = 0;
                }
              }
              cur_cookie = newCookie( );
              NumCookies++;
              cookie_len = 0;
              MemAllocCopy( &cur_cookie->name, attr_start, attr_end );
              cookie_len += strlen( &cur_cookie->name );
              MemAllocCopy( &cur_cookie->value, value_start, value_end );
              cookie_len += strlen( &cur_cookie->value );
              HTSACopy( &cur_cookie->domain, hostname );
              cookie_len += strlen( &cur_cookie->domain );
              HTSACopy( &cur_cookie->path, path );
              cur_cookie->pathlen = strlen( &cur_cookie->path );
              cookie_len += cur_cookie->pathlen;
              cur_cookie->port = port;
              parse_flags = 0;
              cur_cookie->quoted = Quoted;
              Quoted = 0;
            }
            if ( value )
            {
              free( value );
            }
          }
        }
        if ( NumCookies <= max_cookies_domain && cookie_len <= max_cookies_buffer && cur_cookie )
        {
          if ( SetCookie2 )
          {
            if ( cur_cookie->version <= 0 )
              *(int*)&cur_cookie->version = 1;
            cur_cookie->quoted = 1;
          }
          HTList_appendObject( CombinedCookies, (void*)cur_cookie );
        }
        else
        {
          if ( cur_cookie )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
            {
              fprintf( TraceFP( ), "LYProcessSetCookies: Rejecting Set-Cookie: %s=%s\n", "[no name]", "[no value]" );
            }
            if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
            {
              fprintf( TraceFP( ), "                     due to excessive %s%s%s\n", "", "", "!\n" );
            }
            freeCookie( cur_cookie );
            cur_cookie = 0;
          }
        }
        cl = CombinedCookies;
        while ( 1 )
        {
          if ( cl )
          {
            cl = &cl->next;
            co = 0;
            if ( co )
            {
              if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
              {
                fprintf( TraceFP( ), "LYProcessSetCookie: attr=value pair: '%s=%s'\n", "[no name]", "[no value]" );
              }
              if ( co->expires > 0 && WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
              {
                fprintf( TraceFP( ), "                    expires: %d, %s\n", co->expires, ctime( &co->expires ) );
              }
              if ( strncasecomp( address, "https:", 6 ) == 0 && LYForceSSLCookiesSecure == 1 && ( co->flags & 1 ) == 0 )
              {
                co->flags |= 1;
                if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                {
                  fprintf( TraceFP( ), "                    Forced the 'secure' flag on.\n" );
                }
              }
              store_cookie( co, hostname, path );
            }
            else
            {
              HTList_delete( CombinedCookies );
              CombinedCookies = 0;
              break;
            }
          }
          co = 0;
        }
      }
    }
  }
  return;
}
void LYSetCookie( char *SetCookie, char *SetCookie2, char *address )
{
  BOOLEAN BadHeaders = 0;
  char *hostname = 0, *path = 0, *ptr;
  int port = 80;
  hostname = HTParse( address, "", 8 );
  if ( hostname )
  {
    ptr = strchr( hostname, ':' );
    if ( ptr )
    {
      ptr[0] = 0;
      ptr++;
      port = atoi( ptr );
      path = HTParse( address, "", 5 );
      if ( path )
      {
        ptr = strrchr( path, '/' );
        if ( ptr )
        {
          if ( ptr == path )
            ptr[1] = 0;
          else
            ptr[0] = 0;
        }
      }
      if ( ( SetCookie == 0 || SetCookie[0] == 0 ) && ( SetCookie2 == 0 || SetCookie2[0] == 0 ) )
        BadHeaders = 1;
      if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
      {
        fprintf( TraceFP( ), "LYSetCookie called with host '%s', path '%s',\n", "", "" );
      }
      if ( SetCookie && WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
      {
        fprintf( TraceFP( ), "    and Set-Cookie: '%s'\n", SetCookie );
      }
      if ( SetCookie2 && WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
      {
        fprintf( TraceFP( ), "    and Set-Cookie2: '%s'\n", SetCookie2 );
      }
      if ( ( !LYSetCookies || BadHeaders == 1 ) && WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
      {
        fprintf( TraceFP( ), "    Ignoring this Set-Cookie/Set-Cookie2 request.\n" );
      }
      if ( LYSetCookies == 0 || BadHeaders == 1 )
      {
        if ( hostname )
        {
          free( hostname );
          hostname = 0;
        }
        if ( path == 0 )
        {
          return;
        }
        free( path );
        path = 0;
      }
      else
      {
        LYProcessSetCookies( SetCookie, SetCookie2, address, hostname, path, port );
        if ( hostname )
        {
          free( hostname );
          hostname = 0;
        }
        if ( path == 0 )
        {
          return;
        }
        free( path );
        path = 0;
      }
      return;
    }
  }
  if ( strncasecomp( address, "https:", 6 ) == 0 )
    port = 443;
}
char *LYAddCookieHeader( char *hostname, char *path, int port, BOOLEAN secure )
{
  char *header = 0;
  HTList *hl = domain_list, *next = 0;
  domain_entry *de;
  if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
  {
    fprintf( TraceFP( ), "LYCookie: Searching for '%s:%d', '%s'.\n", "(null)", port, "(null)" );
  }
  while ( hl )
  {
    de = &hl->object[0];
    next = &hl->next;
    if ( de )
    {
      if ( de->cookie_list && de->cookie_list->next )
      {
        header = scan_cookie_sublist( hostname, path, port, &de->cookie_list, header, secure );
      }
      else
      if ( de->bv == 2 && de->invcheck_bv == 0 )
      {
        if ( de->domain[0] )
        {
          free( &de->domain[0] );
          *(int*)&de->domain[0] = 0;
        }
        HTList_delete( &de->cookie_list );
        *(int*)&de->cookie_list = 0;
        HTList_removeObject( domain_list, (void*)de );
        if ( de )
        {
          free( de );
          de = 0;
        }
      }
    }
    hl = next;
  }
  return 0;
}
void LYLoadCookies( char *cookie_file )
{
  static char domain[256], path[256], name[256], value[4100];
  static char what[8], secure[8], expires_a[16];
  static struct {
     char *s;
     size_t n;
  } tok_values[8] = { { &domain, 256 }
, { &what, 8 }
, { &path, 256 }
, { &secure, 8 }
, { &expires_a, 16 }
, { &name, 256 }
, { &value, 4100 }
, { 0, 0 }
 };
  FILE *cookie_handle;
  char *buf = 0;
  time_t expires;
  cookie_handle = fopen64( cookie_file, "r" );
  if ( cookie_handle )
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
    {
      fprintf( TraceFP( ), "LYLoadCookies: reading cookies from %s\n", cookie_file );
    }
    number_of_file_cookies = 0;
    while ( LYSafeGets( &buf, cookie_handle ) == 0 )
    {
      cookie *moo;
      int tok_loop;
      char *tok_out, *tok_ptr;
      LYTrimNewline( buf );
      if ( buf[0] && buf[0] != '#' )
      {
        number_of_file_cookies++;
        memcpy( buf + strlen( buf ) );
        if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
        {
          fprintf( TraceFP( ), "LYLoadCookies: tokenising %s\n", buf );
        }
        tok_ptr = buf;
        tok_out = LYstrsep( &tok_ptr, "\t" );
        tok_loop = 0;
        for ( ; tok_out && tok_values[ tok_loop ]; tok_loop++ )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
          {
            fprintf( TraceFP( ), "\t%d:[%03d]:[%s]\n", tok_loop, tok_out - buf, tok_out );
          }
          LYstrncpy( tok_values[ tok_loop ].s, tok_out, (int)tok_values[ tok_loop ].n );
          tok_out = LYstrsep( &tok_ptr, "\t" );
          // tok_loop++;
        }
        if ( tok_values[ tok_loop ].s )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
          {
            fprintf( TraceFP( ), "*** wrong format: not enough tokens, ignoring line!\n" );
          }
        }
        else
        {
          expires = atol( expires_a );
          if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
          {
            fprintf( TraceFP( ), "expires:\t%s\n", ctime( &expires ) );
          }
          moo = newCookie( );
          HTSACopy( &moo->domain, domain );
          HTSACopy( &moo->path, path );
          HTSACopy( &moo->name, name );
          if ( value[0] == '"' && value[1] && value[ strlen( value ) - 1 ] == '"' && value[ strlen( value ) - 2 ] != '\\' )
          {
            value[ strlen( value ) - 1 ] = 0;
            HTSACopy( &moo->value, &value[1] );
            moo->quoted = 1;
          }
          else
            HTSACopy( &moo->value, value );
          moo->pathlen = strlen( &moo->path );
          moo->flags |= '4';
          if ( domain[0] == '.' )
            moo->flags |= 8;
          if ( secure[0] != 'F' )
            moo->flags |= 1;
          moo->expires = expires;
          store_cookie( moo, domain, path );
        }
      }
    }
    LYCloseInput( cookie_handle );
  }
  return;
}
FILE *NewCookieFile( char *cookie_file )
{
  if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
  {
    fprintf( TraceFP( ), "LYStoreCookies: save cookies to %s on exit\n", cookie_file );
  }
  return LYNewTxtFile( cookie_file );
}
void LYStoreCookies( char *cookie_file )
{
  HTList *dl, *cl;
  domain_entry *de;
  cookie *co;
  FILE *cookie_handle = 0;
  time_t now = time( 0 );
  if ( cookie_file && cookie_file[0] && strcmp( cookie_file, "/dev/null" ) && ( ( domain_list && domain_list->next ) || number_of_file_cookies ) )
  {
    if ( number_of_file_cookies )
    {
      cookie_handle = NewCookieFile( cookie_file );
      if ( cookie_handle == 0 )
      {
        return;
      }
    }
    dl = domain_list;
    for ( ; dl;  )
    {
      de = &dl->object[0];
      if ( de )
      {
        cl = &de->cookie_list;
        for ( ; cl;  )
        {
          co = &cl->object[0];
          if ( co )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
            {
              fprintf( TraceFP( ), "LYStoreCookies: %d cf %d ", now, co->expires );
            }
            if ( co->flags & 2 )
            {
              if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
              {
                fprintf( TraceFP( ), "not stored - DISCARD\n" );
              }
            }
            else
            {
              if ( ( co->flags & 4 ) == 0 )
              {
                if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                {
                  fprintf( TraceFP( ), "not stored - no expiration time\n" );
                }
              }
              else
              {
                if ( co->expires <= now )
                {
                  if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                  {
                    fprintf( TraceFP( ), "not stored - EXPIRED\n" );
                  }
                }
                else
                {
                  if ( cookie_handle == 0 )
                  {
                    cookie_handle = NewCookieFile( cookie_file );
                    if ( cookie_handle == 0 )
                      break;
                  }
                  fprintf( cookie_handle, "%s\t%s\t%s\t%s\t%d\t%s\t%s%s%s\n", &de->domain[0], de->domain == '.' ? "TRUE" : "FALSE", &co->path, "FALSE", co->expires, &co->name, "", "", "" );
                  if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
                  {
                    fprintf( TraceFP( ), "STORED\n" );
                  }
                }
              }
            }
          }
          cl = &cl->next;
        }
      }
      dl = &dl->next;
    }
    if ( cookie_handle )
    {
      LYCloseOutput( cookie_handle );
    }
  }
  return;
}
int LYHandleCookies( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink )
{
  HTFormat format_in = HTAtom_for( "text/html" );
  HTStream *target = 0;
  char *buf = 0;
  char *domain = 0;
  char *lynxID = 0;
  HTList *dl, *cl, *next;
  domain_entry *de;
  cookie *co;
  char *name = 0, *value = 0, *path = 0;
  char *comment = 0, *Address = 0, *Title = 0;
  int ch;
  if ( domain_list == 0 || domain_list->next == 0 )
  {
    HTProgress( gettext( "The Cookie Jar is empty." ) );
    LYSleepMsg( );
    HTNoDataOK = 1;
    return -204;
  }
  domain = HTParse( arg, "", 8 );
  if ( domain )
  {
    if ( domain[0] == 0 )
    {
      if ( domain )
      {
        free( domain );
        domain = 0;
      }
    }
    else
    {
      lynxID = HTParse( arg, "", 4 );
      if ( lynxID && !lynxID[0] && lynxID )
      {
        free( lynxID );
        lynxID = 0;
      }
    }
  }
  if ( domain )
  {
    de = find_domain_entry( domain );
    if ( de )
    {
      if ( domain )
      {
        free( domain );
        domain = 0;
      }
      if ( lynxID )
      {
        cl = &de->cookie_list;
        for ( ; cl;  )
        {
          co = &cl->object[0];
          if ( co && strcmp( lynxID, &co->lynxID[0] ) == 0 )
          {
            if ( ( HTConfirm( gettext( "Delete this cookie?" ) ) & 255 ) == 0 )
            {
              if ( lynxID == 0 )
              {
                HTNoDataOK = 1;
                return -204;
              }
              free( lynxID );
              lynxID = 0;
              HTNoDataOK = 1;
              return -204;
            }
            else
            {
              HTList_removeObject( &de->cookie_list, (void*)co );
              freeCookie( co );
              co = 0;
              total_cookies += -1;
              if ( de->bv == 2 && ( de->cookie_list == 0 || de->cookie_list->next == 0 ) && ( HTConfirm( gettext( "Delete this empty domain?" ) ) & 255 ) )
              {
                if ( de->domain[0] )
                {
                  free( &de->domain[0] );
                  *(int*)&de->domain[0] = 0;
                }
                HTList_delete( &de->cookie_list );
                *(int*)&de->cookie_list = 0;
                HTList_removeObject( domain_list, (void*)de );
                if ( de )
                {
                  free( de );
                  de = 0;
                }
                HTProgress( gettext( "The domain has been eaten!" ) );
              }
              else
              {
                HTProgress( gettext( "The cookie has been eaten!" ) );
              }
              LYSleepMsg( );
              HTNoDataOK = 1;
              break;
            }
          }
          else
          {
            cl = &cl->next;
          }
        }
      }
      else
      {
        if ( de->cookie_list == 0 || de->cookie_list->next == 0 )
        {
          mustshow = 1;
          statusline( gettext( "D)elete domain, set allow A)lways/P)rompt/neV)er, or C)ancel? " ) );
        }
        else
        {
          mustshow = 1;
          statusline( gettext( "D)elete domain's cookies, set allow A)lways/P)rompt/neV)er, or C)ancel? " ) );
        }
        HTNoDataOK = 1;
        do
        {
          ch = LYgetch_single( );
          switch ( ch + -65 )
          {
          case 0:
            *(int*)&de->bv = 0;
            HTUserMsg2( gettext( "'A'lways allowing from domain '%s'." ), &de->domain[0] );
            return -204;
            break;
          case 2:
            break;
            break;
          case 3:
            if ( de->cookie_list == 0 || de->cookie_list->next == 0 )
            {
              if ( de->domain[0] )
              {
                free( &de->domain[0] );
                *(int*)&de->domain[0] = 0;
              }
              HTList_delete( &de->cookie_list );
              *(int*)&de->cookie_list = 0;
              HTList_removeObject( domain_list, (void*)de );
              if ( de )
              {
                free( de );
                de = 0;
              }
              HTProgress( gettext( "The domain has been eaten!" ) );
              LYSleepMsg( );
            }
            break;
          case 15:
            *(int*)&de->bv = 2;
            HTUserMsg2( gettext( "'P'rompting to allow from domain '%s'." ), &de->domain[0] );
            return -204;
            break;
          case 21:
            *(int*)&de->bv = 1;
            HTUserMsg2( gettext( "ne'V'er allowing from domain '%s'." ), &de->domain[0] );
            if ( de->cookie_list == 0 || de->cookie_list->next == 0 || ( HTConfirm( gettext( "Delete all cookies in this domain?" ) ) & 255 ) == 0 )
            {
              return -204;
            }
            break;
          default:
            switch ( ch )
            {
            case -1:
              if ( keymap[0] == 47 )
                break;
              break;
            default:
              if ( ( ch & 34816 ) == 0 )
              {
                if ( keymap[ ( ch & 2047 ) + 1 ] == 47 )
                  break;
              }
              else
              {
              }
              break;
            }
            cl = &de->cookie_list;
            for ( ; cl;  )
            {
              next = &cl->next;
              co = &cl->object[0];
              if ( co )
              {
                HTList_removeObject( &de->cookie_list, (void*)co );
                freeCookie( co );
                co = 0;
                total_cookies += -1;
              }
              cl = next;
            }
            HTProgress( gettext( "All cookies in the domain have been eaten!" ) );
            LYSleepMsg( );
            if ( de->bv != 2 )
            {
              return -204;
            }
            if ( HTConfirm( gettext( "Delete this empty domain?" ) ) & 255 )
            {
              if ( de->domain[0] )
              {
                free( &de->domain[0] );
                *(int*)&de->domain[0] = 0;
              }
              HTList_delete( &de->cookie_list );
              *(int*)&de->cookie_list = 0;
              HTList_removeObject( domain_list, (void*)de );
              if ( de )
              {
                free( de );
                de = 0;
              }
              HTProgress( gettext( "The domain has been eaten!" ) );
              LYSleepMsg( );
            }
            break;
          }
          cl = &de->cookie_list;
        }
        while ( ( ch & 255 ) == 47 );
        HTUserMsg( gettext( "Cancelled!!!" ) );
        return -204;
      }
    }
    if ( domain_list == 0 || domain_list->next == 0 )
    {
      HTProgress( gettext( "All of the cookies in the jar have been eaten!" ) );
      LYSleepMsg( );
    }
    if ( domain )
    {
      free( domain );
      domain = 0;
    }
    if ( lynxID )
    {
      free( lynxID );
      lynxID = 0;
    }
    return -204;
  }
  else
  {
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
      HTSprintf0( &buf, "&lt;html&gt;\n&lt;head&gt;\n&lt;title&gt;%s&lt;/title&gt;\n&lt;/head&gt;\n&lt;body&gt;\n", gettext( "Cookie Jar" ) );
      ebx( target, buf, strlen( buf ) );
      HTSprintf0( &buf, "&lt;h1&gt;%s (%s)%s&lt;a href=\"%s%s\"&gt;%s&lt;/a&gt;&lt;/h1&gt;\n", "Lynx", "2.8.7dev.11", gettext( ", help on " ), helpfilepath, "Lynx_users_guide.html.gz#Cookies", gettext( "Cookie Jar" ) );
      ebx( target, buf, strlen( buf ) );
      HTSprintf0( &buf, "&lt;note&gt;%s\n", gettext( "Activate links to gobble up cookies or entire domains," ) );
      ebx( target, buf, strlen( buf ) );
      HTSprintf0( &buf, "%s&lt;/note&gt;\n", gettext( "or to change a domain's 'allow' setting." ) );
      ebx( target, buf, strlen( buf ) );
      HTSprintf0( &buf, "&lt;dl compact&gt;\n" );
      ebx( target, buf, strlen( buf ) );
      dl = domain_list;
      for ( ; dl;  )
      {
        de = &dl->object[0];
        if ( de )
        {
          HTSprintf0( &buf, "&lt;dt&gt;%s&lt;dd&gt;&lt;a href=\"%s//%s/\"&gt;Domain=%s&lt;/a&gt;\n", de->domain[0], "LYNXCOOKIE:", de->domain[0] );
          ebx( target, buf, strlen( buf ) );
          switch ( de->bv )
          {
          case 0:
            HTSprintf0( &buf, gettext( "(Cookies always allowed.)" ) );
            ebx( target, buf, strlen( buf ) );
            HTSprintf0( &buf, "\n" );
            ebx( target, buf, strlen( buf ) );
            cl = &de->cookie_list;
            for ( ; cl;  )
            {
              co = &cl->object[0];
              if ( co )
              {
                if ( co->name )
                {
                  HTSACopy( &name, &co->name );
                  LYEntify( &name, 1 );
                }
                else
                {
                  HTSACopy( &name, gettext( "(No name.)" ) );
                }
                if ( co->value )
                {
                  HTSACopy( &value, &co->value );
                  LYEntify( &value, 1 );
                }
                else
                {
                  HTSACopy( &value, gettext( "(No value.)" ) );
                }
                HTSprintf0( &buf, "&lt;dd&gt;&lt;a href=\"%s//%s/%s\"&gt;%s=%s&lt;/a&gt;\n", "LYNXCOOKIE:", de->domain[0], co->lynxID[0], name, value );
                if ( name )
                {
                  free( name );
                  name = 0;
                }
                if ( value )
                {
                  free( value );
                  value = 0;
                }
                ebx( target, buf, strlen( buf ) );
                if ( co->flags & 32 )
                {
                  HTSprintf0( &buf, "%s\n", gettext( "(from a previous session)" ) );
                  ebx( target, buf, strlen( buf ) );
                }
                if ( co->path )
                {
                  HTSACopy( &path, &co->path );
                  LYEntify( &path, 1 );
                }
                else
                  HTSACopy( &path, "/" );
                HTSprintf0( &buf, "&lt;dd&gt;Path=%s\n&lt;dd&gt;Port: %d Secure: %s Discard: %s\n", path, co->port, "NO", "NO" );
                if ( path )
                {
                  free( path );
                  path = 0;
                }
                ebx( target, buf, strlen( buf ) );
                if ( co->PortList )
                {
                  HTSprintf0( &buf, "&lt;dD&gt;PortList=\"%s\"\n", co->PortList );
                  ebx( target, buf, strlen( buf ) );
                }
                if ( co->commentURL )
                {
                  HTSACopy( &Address, &co->commentURL );
                  LYEntify( &Address, 0 );
                  HTSACopy( &Title, &co->commentURL );
                  LYEntify( &Title, 1 );
                  HTSprintf0( &buf, "&lt;dd&gt;CommentURL: &lt;a href=\"%s\"&gt;%s&lt;/a&gt;\n", Address, Title );
                  if ( Address )
                  {
                    free( Address );
                    Address = 0;
                  }
                  if ( Title )
                  {
                    free( Title );
                    Title = 0;
                  }
                  ebx( target, buf, strlen( buf ) );
                }
                if ( co->comment )
                {
                  HTSACopy( &comment, &co->comment );
                  LYEntify( &comment, 1 );
                  HTSprintf0( &buf, "&lt;dd&gt;Comment: %s\n", comment );
                  if ( comment )
                  {
                    free( comment );
                    comment = 0;
                  }
                  ebx( target, buf, strlen( buf ) );
                }
                HTSprintf0( &buf, "&lt;dd&gt;&lt;em&gt;%s&lt;/em&gt; %s%s", gettext( "Maximum Gobble Date:" ), gettext( "(End of session.)" ), "\n" );
                ebx( target, buf, strlen( buf ) );
              }
              cl = &cl->next;
            }
            HTSprintf0( &buf, "&lt;/dt&gt;\n" );
            ebx( target, buf, strlen( buf ) );
            break;
          case 1:
            HTSprintf0( &buf, gettext( "(Cookies never allowed.)" ) );
            ebx( target, buf, strlen( buf ) );
            HTSprintf0( &buf, "\n" );
            ebx( target, buf, strlen( buf ) );
            cl = &de->cookie_list;
            break;
          case 2:
            HTSprintf0( &buf, gettext( "(Cookies allowed via prompt.)" ) );
            ebx( target, buf, strlen( buf ) );
            HTSprintf0( &buf, "\n" );
            ebx( target, buf, strlen( buf ) );
            cl = &de->cookie_list;
            break;
          default:
            ebx( target, buf, strlen( buf ) );
            HTSprintf0( &buf, "\n" );
            ebx( target, buf, strlen( buf ) );
            cl = &de->cookie_list;
            break;
          }
        }
        dl = &dl->next;
      }
      HTSprintf0( &buf, "&lt;/dl&gt;\n&lt;/body&gt;\n&lt;/html&gt;\n" );
      ebx( target, buf, strlen( buf ) );
      ;
    }
  }
}
void cookie_domain_flag_set( char *domainstr, int flag )
{
  domain_entry *de = 0;
  char **str = calloc( 1, sizeof( char* ) );
  char *dstr = 0;
  char *strsmall = 0;
  if ( str == 0 )
  {
    HTAlwaysAlert( gettext( "Internal" ), gettext( "cookie_domain_flag_set error, aborting program" ) );
    exit_immediately( 1 );
  }
  if ( domain_list == 0 )
  {
    domain_list = HTList_new( );
    total_cookies = 0;
  }
  HTSACopy( &dstr, domainstr );
  str[0] = dstr;
  while ( strsmall == 0 )
  {
    if ( strsmall[0] )
    {
      de = find_domain_entry( strsmall );
      if ( de == 0 )
      {
        de = calloc( 1, sizeof( domain_entry ) );
        if ( de == 0 )
          outofmem( "./LYCookie.c", "cookie_domain_flag_set" );
        *(int*)&de->bv = 0;
        *(int*)&de->invcheck_bv = 0;
        switch ( flag )
        {
        case 0:
          *(int*)&de->invcheck_bv = 0;
          HTSACopy( &de->domain, strsmall );
          de->cookie_list = HTList_new( );
          HTList_appendObject( domain_list, (void*)de );
          break;
        case 1:
          *(int*)&de->invcheck_bv = 0;
          break;
        case 2:
          *(int*)&de->invcheck_bv = 0;
          break;
        case 4:
          *(int*)&de->bv = 2;
          break;
        case 5:
          *(int*)&de->bv = 2;
          break;
        case 6:
          *(int*)&de->bv = 2;
          break;
        case 3:
          break;
        }
      }
      switch ( flag )
      {
      case 0:
        *(int*)&de->bv = 0;
        if ( WWW_TraceFlag && ( WWW_TraceMask & 32 ) )
        {
          fprintf( TraceFP( ), "cookie_domain_flag_set (%s, bv=%u, invcheck_bv=%u)\n", strsmall, de->bv, de->invcheck_bv );
        }
        break;
      case 1:
        *(int*)&de->bv = 1;
        break;
      case 2:
        *(int*)&de->bv = 2;
        break;
      case 4:
        *(int*)&de->invcheck_bv = 0;
        break;
      case 5:
        *(int*)&de->invcheck_bv = 1;
        break;
      case 6:
        *(int*)&de->invcheck_bv = 2;
        break;
      case 3:
        break;
      }
    }
  }
  if ( strsmall )
  {
    free( strsmall );
    strsmall = 0;
  }
  if ( str )
  {
    free( str );
    str = 0;
  }
  if ( dstr )
  {
    free( dstr );
    dstr = 0;
  }
  return;
}
void LYConfigCookies( void )
{
  static struct {
     char **domain;
     int flag;
     int once;
  } table[10] = { { &LYCookieSAcceptDomains, 0, 1 }
, { &LYCookieSRejectDomains, 1, 1 }
, { &LYCookieSStrictCheckDomains, 5, 1 }
, { &LYCookieSLooseCheckDomains, 6, 1 }
, { &LYCookieSQueryCheckDomains, 4, 1 }
, { &LYCookieAcceptDomains, 0, 0 }
, { &LYCookieRejectDomains, 1, 0 }
, { &LYCookieStrictCheckDomains, 5, 0 }
, { &LYCookieLooseCheckDomains, 6, 0 }
, { &LYCookieQueryCheckDomains, 4, 0 }
 };
  unsigned int n = 0;
  for ( ; n <= 9; n++ )
  {
    if ( table[ n ].domain[0] )
    {
      cookie_domain_flag_set( table[ n ].domain[0], table[ n ].flag );
      if ( table[ n ].once && table[ n ].domain[0] )
      {
        free( table[ n ].domain[0] );
        table[ n ].domain[0] = 0;
      }
    }
    // n++;
  }
  return;
}
#if 0
#endif
