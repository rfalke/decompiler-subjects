#include "uri.c.h"
static struct uri_cache uri_cache;
int is_in_domain( unsigned char *domain, unsigned char *server, int server_len )
{
  int eax;
  return strlen( (char*)domain ) <= server_len ? strlen( (char*)domain ) == 0 : 0;
}
int is_ip_address( unsigned char *address, int addresslen )
{
  int eax;
  int ecx;
  unsigned char buffer[46];
  if ( addresslen <= 45 )
  {
    safe_strncpy( buffer, &address[0], addresslen + 1 + 1 );
  {
    struct sockaddr_in6 addr6;
    if ( inet_pton( 10, buffer, addr6.sin6_addr.__in6_u.__u6_addr8 ) < 1 )
    {
      struct in_addr addr4;
      inet_pton( 2, buffer, &addr4.s_addr );
    }
  }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return eax;
}
int end_with_known_tld( unsigned char *s, int slen )
{
  static unsigned char *tld[16] = { "com", "edu", "net", "org", "gov", "mil", "int", "biz", "arpa", "aero", "coop", "info", "museum", "name", "pro", 0 };
  int i;
  if ( slen )
  {
    if ( ccdep1 < ccdep2 )
    {
      slen = strlen( (char*)s );
    }
    i = 0;
  {
    do
    {
      pos -= strlen( (char*)tld[ i ] );
      if ( pos >= 0 && c_strncasecmp( s + pos, (char*)tld[ i ], strlen( (char*)tld[ i ] ) ) == 0 )
        break;
      i++;
    }
    while ( tld[ i ] );
  }
  }
  return pos;
}
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
int check_whether_file_exists( unsigned char *name )
{
  static unsigned char chars[4] = { 1, '#', '?' };
  int i;
  int namelen = strlen( &name[0] );
  if ( namelen == 0 )
  {
    i = 0;
  {
    do
    {
      if ( eax )
      {
        return 0;
        *ebp_32 = chars[ i ];
        if ( exists )
        {
          namelen = edx - name[0];
          break;
        }
      }
      i++;
    }
    while ( i + 1 != 3 );
    namelen = -1;
  }
  }
}
enum uri_errno  parse_uri( struct uri *uri, unsigned char *uristring )
{
  int eax;
  int ecx;
  int edx;
  int ebp_28;
  unsigned char *prefix_end, *host_end;
  unsigned char *lbracket, *rbracket;
  if ( assert_failed == 0 )
  {
    assert_failed = uristring[0] == 0;
    if ( !(_Bool)( uristring[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
      errline = 212;
      elinks_internal( "assertion uristring != NULL failed: No uri to parse." );
    }
  }
  memset( uri[0].string, 0, 60 );
  if ( assert_failed )
  {
    assert_failed = 0;
    return URI_ERRNO_OK;
  }
  if ( uristring[0] )
  {
    uri->string = &uristring[0];
    uristring[0] = uristring[0];
    for ( ; ( ( *(char*)(*(int*)(__ctype_b_loc(  )) + ( uristring[0] * 2 )) & 8 ) & 255 ) || uristring[0] == '+' || uristring[0] == '-' || uristring[0] == '.'; uristring[0] = uristring[1] )
    {
      //uristring[0] = uristring[1];
    }
    if ( uristring[0] == uristring[0] || *(char*)(uristring[0] - 1) - 48 < 9 )
    {
      if ( uristring[0] - 48 < 10 )
      {
        uri->bits_at_40/*.1_2of4*/ = 0;
        return URI_ERRNO_INVALID_PROTOCOL;
      }
    }
    else
      uristring[0] = uristring[0];
    uri->bits_at_40/*.1_2of4*/ = uristring[0] - uristring[0];
    if ( ( uristring[0] - uristring[0] ) & 65535 )
    {
      uri->protocol = get_protocol( &uristring[0], ( uristring[0] - uristring[0] ) );
      prefix_end[0] = uristring[ (int)uri->bits_at_40/*.1_2of4*/ ];
      if ( prefix_end[0] - 48 >= 9 )
      {
        prefix_end[0] = prefix_end[1];
        uri->ip_family = prefix_end[0] - 48;
      }
      if ( prefix_end[0] == ':' )
      {
        ebp_28 = prefix_end[1];
        if ( prefix_end[1] == '/' && prefix_end[1] == '/' )
        {
          ebp_28 = prefix_end[3];
          if ( prefix_end[3] == '/' && get_protocol_need_slash_after_host( uri->protocol ) )
          {
            return URI_ERRNO_OK;
          }
        }
        else
        {
          if ( get_protocol_need_slashes( uri->protocol ) )
          {
            return URI_ERRNO_OK;
          }
        }
        uri->protocol = uri->protocol;
        if ( get_protocol_free_syntax( uri->protocol ) )
        {
          uri->data = ebp_28;
          uri->bits_at_48 = ( uri->bits_at_48 & -16776961 ) | ( strlen(  ) << 8 );
          return URI_ERRNO_OK;
        }
        if ( uri->protocol != 4 )
        {
          lbracket = (unsigned char*)strchr( ebp_28, 91 );
          if ( lbracket == 0 )
          {
          }
          else
          {
            if ( strchr( (char*)lbracket, 93 ) == 0 )
              lbracket = 0;
            else
            {
              if ( *ebp_28 && *ebp_28 != '/' )
              {
                do
                {
                  *ebp_28 = ebp_28;
                }
                while ( *(char*)(ebp_28 + 0 + 2) && *(char*)(ebp_28 + 0 + 2) != '/' );
                uri = &uri[0];
              }
              else
              {
              }
              if ( ebp_28 + eax <= edi )
                lbracket = 0;
              else
                uri->bits_at_52/*.3_3of4*/ |= 1;
            }
          }
          if ( *ebp_28 & 255 )
          {
            host_end[0] = ebp_28;
            if ( *ebp_28 != '@' )
            {
              do
              {
              }
              while ( prefix_end[0] && *(char*)(ebp_28 + 0 + 2) != '@' );
              host_end[0] = ebp_28 + 0 + 1;
              if ( *ebp_28 == '/' )
              {
                if ( host_end[0] < ebp_28 + eax && host_end[0] )
                {
                  while ( host_end[1] )
                  {
                    if ( host_end[1] != '@' )
                    {
                      do
                      {
                      }
                      while ( host_end[0] && host_end[0] != '@' );
                      if ( host_end[1] == '/' || host_end[1] == '?' )
                        break;
                    }
                    uristring[0] = uristring[0];
                    do
                    {
                    }
                    while ( host_end[0] && host_end[0] != '/' && host_end[0] != '?' );
                    if ( 0 + 1 <= 0 + 1 )
                      break;
                    else
                    {
                      if ( host_end[1] == '@' )
                      {
                      }
                      else
                      do
                      {
                      }
                      while ( host_end[0] && 0 + 1 != '@' );
                      return 0 + 1 + 1;
                      host_end[0] = host_end[ 0 + 1 + 1 ];
                    }
                  }
                  uri = &uri[0];
                  if ( host_end[0] < strchr( ebp_28, 58 ) || strchr( ebp_28, 58 ) == 0 )
                  {
                    uri->user = ebp_28;
                    uri->bits_at_40/*.3_4of4*/ = (unsigned short)( host_end[0] ) - (unsigned short)( ebp_28 );
                  }
                  else
                  {
                    uri->user = ebp_28;
                    uri->password = strchr( ebp_28, 58 ) + 1;
                    uri->bits_at_40/*.3_4of4*/ = (unsigned short)( strchr( ebp_28, 58 ) ) - ebp_28;
                    uri->bits_at_44/*.1_2of4*/ = (unsigned short)( host_end[ -1 ] ) - (unsigned short)( strchr( ebp_28, 58 ) );
                  }
                  host_end[1] = host_end[1];
                  ebp_28 = host_end[1] + 1;
                }
              }
            }
            prefix_end[0] = ebp_28;
            do
            {
            }
            while ( prefix_end[0] && *ebp_28 != '/' );
          }
          if ( ( uri->bits_at_52/*.3_3of4*/ & 1 ) & 255 )
          {
            if ( assert_failed == 0 )
            {
              addrlen = 0 - 1 - lbracket;
              assert_failed = 0 - 1 - lbracket > 1024;
              if ( 0 - 1 - lbracket > 1024 )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
                errline = 347;
                elinks_internal( "assertion addrlen &gt;= 0 && addrlen &lt; NI_MAXHOST failed: parse_uri(): addrlen value is bad (%d) for URL '%s'. Problems are likely to be encountered. Please report this, it is a security bug!" );
                if ( assert_failed )
                  goto B118;
              }
              uri->bits_at_44/*.3_4of4*/ = ebp_48;
              host_end[0] = 0 + 1 + 0;
              uri->host = &lbracket[1];
            }
B118:            assert_failed = 0;
          }
          else
          {
            if ( *ebp_28 && *ebp_28 != ':' && *ebp_28 != '/' && *ebp_28 != '?' )
            {
              do
              {
              }
              while ( *(char*)(0 + 1 + ebp_28 + 1) && *ebp_28 != ':' && *ebp_28 != '/' && *ebp_28 != '?' );
            }
            else
            {
            }
            host_end[0] = host_end[ ebp_28 ];
            uri->host = ebp_28;
            uri->bits_at_44/*.3_4of4*/ = (unsigned short)( ebp_28 + uristring[0] + 1 ) - (unsigned short)( ebp_28 );
            if ( ( ( (unsigned short)( ebp_28 + uristring[0] + 1 ) - (unsigned short)( ebp_28 ) ) & 65535 ) && *(char*)(( ebp_28 + ( (unsigned short)( ebp_28 + uristring[0] + 1 ) - (unsigned short)( ebp_28 ) ) ) - 1) == '.' )
            {
            }
          }
          if ( host_end[0] == ':' )
          {
            if ( host_end[1] == 0 || prefix_end[0] == '/' )
            {
              uri->port = host_end[1] + 1;
              uri->bits_at_48/*.1_1of4*/ = 0;
            }
            do
            {
              if ( host_end[0] == 0 )
                host_end[0] = host_end[0] + 1;
              else
              {
                host_end[0] = host_end[0];
              }
              uri->bits_at_48/*.1_1of4*/ = ( (unsigned char)( host_end[0] + 0 + 1 + 1 ) - (unsigned char)( host_end[0] + 1 ) );
              uri->port = &host_end[0];
              if ( ( (unsigned char)( host_end[0] + 0 + 1 + 1 ) - (unsigned char)( host_end[0] + 1 ) ) & 255 )
              {
                if ( ( ( (unsigned char)( host_end[0] + 0 + 1 + 1 ) - (unsigned char)( host_end[0] + 1 ) ) & 255 ) == host_end[ 0 + 1 + 1 ] - host_end[0] )
                {
                  if ( host_end[0] < edi )
                  {
                    if ( host_end[0] - 48 >= 9 )
                    {
                      do
                      {
                        host_end[0] = host_end[1];
                        if ( ecx <= host_end[1] )
                          goto B185;
                        else
                      }
                      while ( host_end[0] - 48 < 9 );
                    }
                  }
B185:                  if ( host_end[0] )
                  {
                    int n;
                    *(int*)(__errno_location(  )) = 0;
                    if ( n <= 65535 && *(int*)(__errno_location(  )) == 0 )
                      goto B190;
                  }
B190:                }
                break;
              }
              else
                break;
            }
            while ( prefix_end[0] != '/' );
            host_end[0] = host_end[0] + 1;
            uri->bits_at_48/*.1_1of4*/ = ( (unsigned char)( host_end[0] + 0 + 1 + 1 ) - (unsigned char)( host_end[0] + 1 ) );
            uri->port = &host_end[0];
          }
          if ( host_end[0] == '/' )
            host_end[0] = host_end[1];
          else
          {
            if ( get_protocol_need_slash_after_host( uri->protocol ) )
            {
              return ( ( 0 - ( 0 & 1 ) ) & -2 ) + 8;
            }
          }
          if ( host_end[0] && host_end[0] != '#' && host_end[0] != 1 )
          {
            do
            {
            }
            while ( host_end[0] && rbracket[0] != '#' && rbracket[0] != 1 );
          }
          else
          {
          }
          prefix_end[0] = host_end[ 0 + 1 ];
          uri->data = &host_end[0];
          uri->bits_at_48 = ( uri->bits_at_48 & -16776961 ) | ( ( 0 + 1 ) << 8 );
          if ( prefix_end[0] == '#' )
          {
            uri->fragment = &prefix_end[1];
            if ( prefix_end[1] && prefix_end[1] != 1 )
            {
              do
              {
              }
              while ( prefix_end[0] && prefix_end[0] != 1 );
            }
            else
            {
            }
            prefix_end[0] += prefix_end[1];
            uri->bits_at_52/*.1_2of4*/ = 0;
          }
          if ( prefix_end[0] == 1 )
          {
            uri->post = prefix_end[1] + 1;
          }
        }
        else
        {
          int datalen;
          unsigned char *frag_or_post;
          if ( *ebp_28 == 0 || *ebp_28 == '#' || *ebp_28 == 1 )
            ebp_28 = ebp_28;
          else
          {
            do
            {
            }
            while ( prefix_end[0] && *ebp_28 != '#' && *ebp_28 != 1 );
            if ( datalen >= 0 )
              frag_or_post[0] = ebp_28 + datalen;
            else
            {
              *ebp_28 = ebp_28;
              if ( datalen > 9 && c_strncasecmp( ebp_28, "localhost/", 10 ) == 0 )
                ebp_28 += 9;
              uri->bits_at_48 = ( uri->bits_at_48 & -16776961 ) | ( ( ( 0 + 1 ) - 9 ) << 8 );
              uri->data = ebp_28;
            }
          }
          if ( frag_or_post[0] == '#' )
          {
            return ebp_28 + datalen + 1;
            uri->fragment = ebp_28 + datalen + 1;
            if ( *(char*)(ebp_28 + datalen + 1) && *(char*)(ebp_28 + datalen + 1) != 1 )
            {
              do
              {
              }
              while ( *(char*)(ebp_28 + datalen + 3) && prefix_end[0] != 1 );
            }
            else
            {
            }
            uri->bits_at_52/*.1_2of4*/ = 0;
            *(int*)(*(char*)(uristring[0] + 0)) = uristring[0];
          }
          if ( frag_or_post[0] == 1 )
            uri->post = ebp_28 + datalen + 1;
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
  }
}
struct string *add_bytes_to_string__( struct string *string, unsigned char *bytes, int length )
{
  if ( assert_failed == 0 )
  {
    if ( bytes[0] && string && length >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
      errline = 255;
      elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( length )
    {
      if ( mem_align_alloc__( (void**)&string[0].source, string->length, string->length + length + 1, 1, 255 ) )
      {
        memcpy( string[ string->length >> 3 ].source, &bytes[0], length );
        string[ ( string->length + length ) >> 3 ].source = 0;
        string->length += length;
        return &string[0];
      }
      string[0].source = 0;
      return &string[0];
    }
    else
    {
      return &string[0];
    }
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  length = length;
  return &string[0];
}
int get_uri_port( struct uri *uri )
{
  int eax;
  if ( uri->port && uri->bits_at_48/*.1_1of4*/ )
  {
    unsigned char *end = &end[0];
    int port;
    strtol( &end[0], (char**)&end, 10 );
    if ( uri->port != end )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = port > 65535;
        if ( port > 65535 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
          errline = 434;
          elinks_internal( "assertion uri_port_is_valid(port) failed!" );
          return port;
        }
      }
      else
      {
      }
    }
  }
  get_protocol_port( uri->protocol );
}
int compare_component( unsigned char *a, int alen, unsigned char *b, int blen )
{
  int eax;
  if ( blen == alen && (unsigned char)( b[0] != 0 ) == (unsigned char)( a[0] != 0 ) )
  {
    if ( alen == 0 || a[0] == 0 )
    {
    }
    strcmp( *(int*)(0), &a[0] );
    return 1;
  }
  else
  {
  }
}
int compare_uri( struct uri *a, struct uri *b, enum uri_component  components )
{
  int eax;
  int ecx;
  int edx;
  int bh;
  if ( b != a )
  {
    if ( components )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = ( components & 30784 ) != 0;
        if ( components & 30784 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
          errline = 468;
          elinks_internal( "assertion can_compare_uri_components(components) failed: compare_uri() is a work in progress. Component unsupported" );
        }
      }
      if ( ( ( components & 1 ) & 255 ) == 0 || b->protocol == a->protocol )
      {
        if ( ( ( components & 2 ) & 255 ) == 0 || b->ip_family == a->ip_family )
        {
          if ( ( !( ( components & 4 ) & 255 ) || compare_component( a->user, a->bits_at_40/*.3_4of4*/, b->user, b->bits_at_40/*.3_4of4*/ ) ) && ( !( ( components & 8 ) & 255 ) || compare_component( a->password, (int)a->bits_at_44/*.1_2of4*/, b->password, (int)b->bits_at_44/*.1_2of4*/ ) ) && ( !( ( components & 16 ) & 255 ) || compare_component( a->host, a->bits_at_44/*.3_4of4*/, b->host, b->bits_at_44/*.3_4of4*/ ) ) && compare_component( a->port, (int)a->bits_at_48/*.1_1of4*/, b->port, (int)b->bits_at_48/*.1_1of4*/ ) && ( !(_Bool)( ( components >> 7 ) & 1 ) || compare_component( a->data, a->bits_at_48/*.2_3of4*/, b->data, b->bits_at_48/*.2_3of4*/ ) ) && ( !( ( (unsigned char)( bh ) & 1 ) & 255 ) || compare_component( a->fragment, (int)a->bits_at_52/*.1_2of4*/, b->fragment, (int)b->bits_at_52/*.1_2of4*/ ) ) )
          {
            bh = (unsigned char)( bh ) & 2;
            if ( ( (unsigned char)( bh ) & 2 ) & 255 )
            {
              if ( b->post[36] )
              {
              }
              if ( a->post )
              {
                *ebp_28 = ebp_28;
              }
              return 0;
            }
          }
        }
        else
          a = &a[0];
      }
    }
    return 0;
  }
  a = &a[0];
  return 0;
}
struct string *add_uri_to_string( struct string *string, struct uri *uri, enum uri_component  components )
{
  int eax;
  int ecx;
  int edx;
  if ( uri->protocol == 18 )
  {
    string = add_to_string( string, uri->string );
    return string;
  }
  if ( components & 1 )
  {
    if ( assert_failed == 0 )
    {
      if ( string && uri )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
        errline = 255;
        elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
        if ( assert_failed )
          goto B91;
      }
      if ( (int)uri->bits_at_40/*.1_2of4*/ && mem_align_alloc__( (void**)&string->source, string->length, string->length + host[0] + 1, 1, 255 ) )
      {
        memcpy( string->length + string[0].source, uri->string, host[0] );
        string->length += host[0];
        if ( ( components & 2 ) && uri->ip_family )
          add_long_to_string( string, uri->ip_family );
        add_char_to_string( string, 58 );
        if ( get_protocol_need_slashes( uri->protocol ) )
          add_to_string( string, "//" );
      }
    }
B91:    assert_failed = 0;
  }
  if ( ( components & 4 ) && ( uri->bits_at_40/*.3_4of4*/ & 65535 ) )
  {
    if ( assert_failed == 0 )
    {
      if ( string && add_to_string( string, uri->string ) )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
        errline = 255;
        elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
        if ( assert_failed )
          goto B97;
      }
      if ( mem_align_alloc__( (void**)&string->source, string->length, string->length + uri->bits_at_40/*.3_4of4*/ + 1, 1, 255 ) )
      {
        memcpy( string->length + string[0].source, uri->user, uri->bits_at_40/*.3_4of4*/ );
        string->length += uri->bits_at_40/*.3_4of4*/;
        if ( ( components & 8 ) && uri->bits_at_44/*.1_2of4*/ )
        {
          add_char_to_string( string, 58 );
          add_bytes_to_string__( string, uri->password, (int)uri->bits_at_44/*.1_2of4*/ );
        }
        add_char_to_string( string, 64 );
        if ( ( components & 16 ) == 0 )
        {
          if ( components & 96 )
          {
            components = components;
            if ( uri->bits_at_48/*.1_1of4*/ )
            {
              add_char_to_string( string, 58 );
              if ( assert_failed == 0 )
              {
                if ( string && uri->port )
                  assert_failed = 0;
                else
                {
                  assert_failed = 1;
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                  errline = 255;
                  elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                  if ( assert_failed )
                    goto B184;
                }
                if ( ( (int)uri->bits_at_48/*.1_1of4*/ & 255 ) && mem_align_alloc__( (void**)&string->source, string->length, string->length + ( (int)uri->bits_at_48/*.1_1of4*/ & 255 ) + 1, 1, 255 ) )
                {
                  memcpy( string->length + string[0].source, uri->port, (int)uri->bits_at_48/*.1_1of4*/ & 255 );
                  string->length += (int)uri->bits_at_48/*.1_1of4*/ & 255;
                }
              }
B184:              assert_failed = 0;
            }
            else
            {
              components = components;
              if ( ( components & 64 ) && uri->protocol != 19 )
              {
                int port = get_protocol_port( uri->protocol );
                add_char_to_string( string, 58 );
                add_long_to_string( string, port );
              }
            }
          }
          if ( ( ( components & 640 ) || components == URI_HTTP_REFERRER_HOST ) && ( components & -161 ) && get_protocol_need_slash_after_host( uri->protocol ) )
            add_char_to_string( string, 47 );
          if ( (_Bool)( ( components >> 7 ) & 1 ) && ( uri->bits_at_48 & 0xffff00 ) )
          {
            if ( assert_failed == 0 )
            {
              if ( string && uri->data )
                assert_failed = 0;
              else
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                errline = 255;
                elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                if ( assert_failed )
                  goto B147;
              }
              if ( uri->bits_at_48/*.2_3of4*/ && mem_align_alloc__( (void**)&string->source, string->length, string->length + uri->bits_at_48/*.2_3of4*/ + 1, 1, 255 ) )
              {
                memcpy( string->length + string[0].source, uri->data, uri->bits_at_48/*.2_3of4*/ );
                string->length += uri->bits_at_48/*.2_3of4*/;
              }
            }
B147:            assert_failed = 0;
          }
          if ( components & 12288 )
          {
            unsigned char *filename;
            filename[0] = uri->data;
            if ( assert_failed == 0 )
            {
              assert_failed = ( components >> 13 ) & ( components != URI_FILENAME );
              if ( ( components >> 13 ) & ( components != URI_FILENAME ) )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
                errline = 602;
                elinks_internal( "assertion !wants(URI_FILENAME) || components == URI_FILENAME failed: URI_FILENAME should be used alone %d" );
              }
            }
            if ( ( components & 4096 ) && (_Bool)( filename[0] != '/' ) )
              add_char_to_string( string, 47 );
            if ( uri->bits_at_48 & 0xffff00 )
            {
              if ( filename[0] == 0 || filename[0] == '#' || filename[0] == 1 || filename[0] == '?' )
              {
              }
              else
              {
                *(int*)(edi + 1) = filename[0] + 1;
                do
                {
                  if ( filename[1] == 0 || eax == '#' || eax == 1 )
                  {
                  }
                  else
                  {
                    filename[1] = filename[0] + 1 + 1;
                  }
                }
                while ( eax != '?' );
              }
              if ( assert_failed == 0 )
              {
                if ( filename[0] && string && 0 >= 0 )
                  assert_failed = 0;
                  if ( 0 )
                  {
                    if ( mem_align_alloc__( (void**)&string->source, string->length, string->length + 0 + 1, 1, 255 ) )
                    {
                      memcpy( string->length + string[0].source, &filename[0], 0 );
                      string->length += 0;
                      return string;
                    }
                    string = 0;
                    return string;
                  }
                  else
                  {
                    return string;
                  }
                else
                {
                  assert_failed = 1;
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                  errline = 255;
                  elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                  if ( assert_failed )
                  {
                    assert_failed = 0;
                    string = 0;
                    return string;
                  }
                }
              }
              else
              {
                assert_failed = 0;
                string = 0;
                return string;
              }
            }
            else
            {
              return string;
            }
          }
          else
          {
            if ( ( components & 16384 ) && ( uri->bits_at_48 & 0xffff00 ) )
            {
              unsigned char *query;
              memchr( uri->data, 63, uri->bits_at_48/*.2_3of4*/ );
              if ( assert_failed == 0 )
              {
                assert_failed = components != URI_QUERY;
                if ( components != URI_QUERY )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
                  errline = 625;
                  elinks_internal( "assertion URI_QUERY == components failed: URI_QUERY should be used alone %d" );
                  ebp_52 = memchr( uri->data, 63, uri->bits_at_48/*.2_3of4*/ );
                }
              }
              if ( memchr( uri->data, 63, uri->bits_at_48/*.2_3of4*/ ) == 0 )
              {
                return string;
              }
              query[0] = memchr( uri->data, 63, uri->bits_at_48/*.2_3of4*/ ) + 1;
              if ( *(char*)(memchr( uri->data, 63, uri->bits_at_48/*.2_3of4*/ ) + 1) && *(char*)(memchr( uri->data, 63, uri->bits_at_48/*.2_3of4*/ ) + 1) != '#' && *(char*)(memchr( uri->data, 63, uri->bits_at_48/*.2_3of4*/ ) + 1) != 1 )
              {
                do
                {
                }
                while ( *(char*)(0 + 1 + ebp_52 + 2) && *(char*)(memchr( uri->data, 63, uri->bits_at_48/*.2_3of4*/ ) + 1) != '#' && *(char*)(memchr( uri->data, 63, uri->bits_at_48/*.2_3of4*/ ) + 1) != 1 );
              }
              else
              {
              }
              if ( assert_failed == 0 )
              {
                if ( string && uri >= 0 )
                  assert_failed = 0;
                else
                {
                  assert_failed = 1;
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                  errline = 255;
                  elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                  if ( assert_failed )
                    goto B81;
                }
                if ( uri )
                {
                  if ( mem_align_alloc__( (void**)&string->source, string->length, string->length + uri + 1, 1, 255 ) )
                  {
                    memcpy( string->length + string[0].source, &query[0], 0 + 1 );
                    string->source[1] = 0;
                    string->length = 0 + 1;
                    return string;
                  }
                }
                else
                {
                  return string;
                }
              }
B81:              assert_failed = 0;
            }
            else
            {
              if ( ( components & 256 ) && uri->bits_at_52/*.1_2of4*/ )
              {
                add_char_to_string( string, 35 );
                add_bytes_to_string__( string, uri->fragment, (int)uri->bits_at_52/*.1_2of4*/ );
              }
              if ( ( components & 512 ) && uri->post )
              {
                add_char_to_string( string, 1 );
                add_to_string( string, uri->post );
                return string;
              }
              components &= URI_POST_INFO;
              if ( ( components & 1024 ) && uri->post )
              {
                strcmp( "text/plain", (char*)uri->post );
                if ( 1 )
                {
                  add_to_string( string, " (PLAIN TEXT DATA)" );
                  return string;
                }
                strcmp( "multipart/form-data;", (char*)uri->post );
                if ( 1 )
                {
                  add_to_string( string, " (MULTIPART FORM DATA)" );
                  return string;
                }
                add_to_string( string, " (POST DATA)" );
                return string;
              }
              else
              {
                return string;
              }
            }
          }
        }
      }
    }
B97:    assert_failed = 0;
  }
  else
  {
    if ( ( components & 8 ) && ( (int)uri->bits_at_44/*.1_2of4*/ & 65535 ) )
    {
      if ( assert_failed == 0 )
      {
        if ( string && uri->password )
          assert_failed = 0;
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
          errline = 255;
          elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
          if ( assert_failed )
            goto B103;
        }
        if ( mem_align_alloc__( (void**)&string->source, string->length, string->length + (int)uri->bits_at_44/*.1_2of4*/ + 1, 1, 255 ) )
        {
          memcpy( string->length + string[0].source, uri->password, (int)uri->bits_at_44/*.1_2of4*/ );
          string->length += (int)uri->bits_at_44/*.1_2of4*/;
        }
      }
B103:      assert_failed = 0;
    }
    if ( ( components & 16 ) == 0 )
      continue;
  }
  if ( uri->bits_at_44/*.3_4of4*/ & 65535 )
  {
    if ( ( ( uri->bits_at_52/*.3_3of4*/ & 1 ) & 255 ) && ( components & 32 ) )
    {
      add_char_to_string( string, 91 );
    }
    if ( components & 2048 )
    {
      unsigned char *host;
      if ( memacpy( uri->host, uri->bits_at_44/*.3_4of4*/ ) )
      {
        char *idname;
        int code;
        if ( code == 0 )
        {
          add_to_string( string );
          free(  );
          mem_free( &host[0] );
          if ( ( ( uri->bits_at_52/*.3_3of4*/ & 1 ) & 255 ) && ( components & 32 ) )
            add_char_to_string( string, 93 );
        }
        else
          mem_free( &host[0] );
      }
    }
    add_bytes_to_string__( string, uri->host, uri->bits_at_44/*.3_4of4*/ );
  }
}
unsigned char *get_uri_string( struct uri *uri, enum uri_component  components )
{
  struct string string;
  if ( init_string( &string ) && add_uri_to_string( &string, uri, components ) )
  {
  }
  done_string( &string );
  return string.source;
}
struct string *add_string_uri_to_string( struct string *string, unsigned char *uristring, enum uri_component  components )
{
  struct uri uri;
  if ( parse_uri( &uri, uristring ) == URI_ERRNO_OK )
  {
    add_uri_to_string( string, &uri, components );
  }
  return add_uri_to_string( string, &uri, components );
}
unsigned char *normalize_uri( struct uri *uri, unsigned char *uristring )
{
  int eax;
  int ecx;
  int edx;
  int ebp_92;
#error unstructured control flow
}
unsigned char *join_urls( struct uri *base, unsigned char *rel )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *uristring, *path;
  int add_slash;
  int translate;
  int length;
  if ( rel[0] == '#' )
  {
    if ( base->fragment || base->post )
      length = length - 1 - base->string;
    else
    {
      length = ~strlen( (char*)base->string ) - 1;
    }
  }
  else
  if ( rel[0] == '?' )
  {
    uristring = (unsigned char*)memchr( base->data, 63, base->bits_at_48/*.2_3of4*/ );
    if ( uristring )
    {
      length = uristring - base->string;
      if ( uristring - base->string )
        translate = 0;
        if ( memacpy( base->string, length ) )
        {
          uristring = &uristring[0];
          add_to_strn( &uristring, rel );
          if ( translate )
          {
            unsigned char *translated;
            mem_free( (void*)uristring );
            return translate_url( uristring, 0 );
          }
        }
        else
        {
        }
      else
        edx = add_slash;
        *(int*)(ebp_48) = rel[0];
        for ( ; ( ( *(char*)(*(int*)(__ctype_b_loc(  )) + ( rel[0] * 2 )) & 8 ) & 255 ) || rel[0] == '+' || rel[0] == '-' || rel[0] == '.'; rel[0] = rel[1] )
        {
          //rel[0] = rel[1];
        }
        if ( rel[0] == rel || *(char*)(rel[1] - 1) - 48 < 9 )
        {
          if ( rel[0] - 48 < 10 )
          {
            if ( assert_failed == 0 )
            {
              assert_failed = base->data == 0;
              if ( !(_Bool)( base->data != 0 ) )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
                errline = 948;
                elinks_internal( "assertion base-&gt;data != NULL failed: bad base url" );
                if ( assert_failed )
                {
                  assert_failed = 0;
                }
              }
              path[0] = base->data;
              if ( path[0] )
              {
                path[0] = base->data - 1;
                if ( (_Bool)( path[0] != '/' ) )
                {
                  add_slash = 0;
                  if ( (_Bool)( rel[0] != '/' ) && path[0] )
                  {
                    if ( path[0] != 1 && path[0] != '#' )
                    {
                      if ( path[0] != '?' )
                      {
                        path[1] = path[1];
                        path[0] = path[0];
                        do
                        {
                          path[0] = ( path[1] == '/' ) != 0 ? path[0] : path[1] + 1;
                          if ( path[1] == 0 || path[1] == '#' || path[1] == 1 )
                            goto B41;
                          else
                          {
                            path[1]++;
                          }
                        }
                        while ( path[1] != '?' );
                        path[0] = path[0];
                      }
                    }
B41:                  }
                  if ( mem_alloc( add_slash + strlen( (char*)rel ) + 1 + ( path[0] - base->string - base->string ) ) )
                  {
                    uristring = (unsigned char*)mem_alloc( add_slash + strlen( (char*)rel ) + 1 + ( path[0] - base->string - base->string ) );
                    memcpy( uristring, base->string, path[0] - base->string );
                    if ( add_slash )
                    {
                    }
                    strcpy( uristring + ( path[0] - base->string ) + add_slash, (char*)rel );
                  }
                }
              }
              else
              {
                path[0] = translate_url( rel, 0 ) - 1;
                if ( !(_Bool)( *(char*)(translate_url( rel, 0 ) - 1) != '/' ) )
                  continue;
              }
              path[0] = base->data;
            }
          }
        }
        else
          length = rel[0];
        length -= rel;
        if ( rel != length && get_protocol( rel, length ) != PROTOCOL_PROXY && get_protocol( rel, length ) != PROTOCOL_UNKNOWN )
        {
          uristring = translate_url( rel, 0 );
          if ( uristring )
          {
          }
        }
        if ( assert_failed == 0 )
        {
          assert_failed = base->data == 0;
        }
    }
  }
  else
  {
    if ( rel[0] != '/' || rel[1] != '/' )
    {
      *(int*)(ebp_48) = rel[0];
    }
    else
    {
      if ( get_protocol_need_slashes( base->protocol ) )
      {
        translate = 1;
        length = (int)base->bits_at_40/*.1_2of4*/ + 1;
      }
    }
  }
  if ( length )
    translate = 0;
  else
    edx = add_slash;
    *(int*)(ebp_48) = rel[0];
}
enum protocol  find_uri_protocol( unsigned char *newurl )
{
  unsigned char *ch;
  if ( check_whether_file_exists(  ) < 0 )
  {
    ch[0] = newurl[ strcspn( &newurl[0], ".:/@" ) ];
    if ( ch[0] != '@' && ( ch[0] != ':' || newurl[0] == '[' || !strchr( &newurl[0], 64 ) ) && c_strncasecmp( &newurl[0], "ftp.", 4 ) )
    {
      if ( newurl[0] == '[' )
      {
        if ( ch[0] == ':' )
        {
          if ( strchr( &ch[1], 58 ) && strchr( ch[1] + 1, 93 ) && strchr( &ch[1], 58 ) < strchr( ch[1] + 1, 93 ) )
          {
          }
          return PROTOCOL_UNKNOWN;
        }
      }
      else
      if ( newurl[0] != '.' )
      {
      }
      else
      {
        return PROTOCOL_UNKNOWN;
      }
    {
      unsigned char *host_end, *domain;
      unsigned char *ipscan;
      ch[1] = ch[1];
      if ( 1 )
      {
        while ( *(char*)(ebx + eax) == '.' )
        {
        }
        esi = ch[0];
        do
        {
        }
        while ( ch[1] - 48 >= 9 || ch[1] == '.' );
        if ( ch[1] == ':' || ( ch[1] & 255 ) == 0 || ch[1] == '/' || eax - ebx == 2 )
          continue;
        if ( eax >= 0 )
        {
        }
        else
        {
          return PROTOCOL_UNKNOWN;
        }
      }
      else
      {
        return PROTOCOL_UNKNOWN;
      }
    }
    }
    else
    {
      return PROTOCOL_FTP;
    }
  }
  return PROTOCOL_HTTP;
}
unsigned char *translate_url( unsigned char *url, unsigned char *cwd )
{
  int ecx;
  unsigned char *newurl;
  struct uri uri;
  enum uri_errno  uri_errno, prev_errno;
  int retries;
  if ( url[0] == ' ' )
  {
    do
    {
      url[0] = url[1];
    }
    while ( url[0] == ' ' );
  }
  if ( url[0] & 255 )
  {
    newurl = expand_tilde( &url[0] );
    if ( newurl )
    {
      retries = 0;
      while ( uri_errno == prev_errno )
      {
        retries++;
        if ( retries + 1 != 34 )
        {
          switch ( uri_errno )
          {
          case URI_ERRNO_OK:
            uri.protocol = uri.protocol;
            if ( uri.protocol == 18 )
            {
              enum protocol  protocol;
              if ( find_uri_protocol( newurl ) != PROTOCOL_UNKNOWN )
              {
                struct string str;
                if ( init_string( &str ) )
                {
                  switch ( protocol )
                  {
                  case PROTOCOL_FTP:
                    *ebp_36 = ebp_36;
                    add_to_string( ebp_36, "ftp://" );
                    encode_uri_string( &cwd[0], newurl, -1, 0 );
                    prev_errno = URI_ERRNO_EMPTY;
                    mem_free( (void*)newurl );
                    newurl = str.source;
                    break;
                  case PROTOCOL_HTTP:
                    add_to_string( ebp_36, "http://" );
                    add_to_string( ebp_36, newurl );
                    prev_errno = URI_ERRNO_EMPTY;
                    mem_free( (void*)newurl );
                    newurl = str.source;
                    break;
                  default:
                    add_to_string( &str, "file://" );
                    if ( newurl[0] != '/' )
                    {
                      add_to_string( &str, "./" );
                    }
                    add_to_string( &str, newurl );
                    prev_errno = URI_ERRNO_EMPTY;
                    mem_free( (void*)newurl );
                    newurl = str.source;
                    break;
                  case PROTOCOL_UNKNOWN:
                    prev_errno = URI_ERRNO_EMPTY;
                    mem_free( (void*)newurl );
                    newurl = str.source;
                    break;
                  }
                }
              }
              else
                cwd[0] = cwd[0];
            }
            else
              cwd[0] = cwd[0];
            if ( newurl == 4 )
            {
              if ( cwd[0] && cwd[0] )
              {
                if ( assert_failed == 0 )
                {
                  if ( uri.data )
                    assert_failed = 0;
                  else
                  {
                    assert_failed = 1;
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
                    errline = 814;
                    elinks_internal( "assertion uri-&gt;protocol == PROTOCOL_FILE && uri-&gt;data failed!" );
                  }
                }
                if ( uri.data[0] == 0 || uri.data[0] == '.' )
                {
                  if ( init_string( ebp_36 ) == 0 )
                  {
                    if ( newurl == 15 )
                    {
                      unsigned char *data;
                      int pos;
                      data[0] = translate_url( uri.data, &cwd[0] );
                      if ( translate_url( uri.data, &cwd[0] ) )
                      {
                        uri.data[0] = 0;
                        pos = uri.data - pos;
                        insert_in_string( &uri.string, pos, &data[0], ~strlen( &data[0] ) - 1 );
                        mem_free( &data[0] );
                        normalize_uri( 0, uri.string );
                        break;
                      }
                      mem_free( (void*)newurl );
                      break;
                    }
                    else
                    {
                      normalize_uri( &uri, uri.string );
                      break;
                    }
                  }
                  else
                  {
                    encode_uri_string( ebp_36, &cwd[0], -1, 0 );
                    if ( uri.data[0] == '.' )
                      uri.data[0] = 47;
                    insert_in_string( &uri.string, 7, newurl );
                    done_string( ebp_36 );
                    normalize_uri( 0, uri.string );
                    break;
                  }
                }
                else
                {
                  do
                  {
                    if ( uri.data[1] == '/' )
                      break;
                    else
                    {
                    }
                  }
                  while ( uri.data[1] );
                  memmove( uri.data, &uri.data[1], ~strlen( &uri.data[1] ) );
                  normalize_uri( 0, uri.string );
                  break;
                }
              }
              else
              {
                normalize_uri( &uri, uri.string );
                break;
              }
            }
            else
            {
            }
            break;
          case URI_ERRNO_TOO_MANY_SLASHES:
          {
            unsigned char *from, *to;
            assert_failed = assert_failed;
            if ( assert_failed )
              uri.string = uri.string;
            else
            if ( uri.string[ (int)uri.bits_at_40/*.1_2of4*/ ] != ':' || *(char*)((int)uri.bits_at_40/*.1_2of4*/ + uri.string + 1) != '/' || *(char*)((int)uri.bits_at_40/*.1_2of4*/ + uri.string + 2) != '/' )
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
              errline = 1177;
              elinks_internal( "assertion uri.string[uri.protocollen] == ':' && uri.string[uri.protocollen + 1] == '/' && uri.string[uri.protocollen + 2] == '/' failed!" );
              uri.string = uri.string;
            }
            else
              assert_failed = 0;
            to[0] = uri.string + (int)uri.bits_at_40/*.1_2of4*/ + 3;
            from[0] = uri.string + (int)uri.bits_at_40/*.1_2of4*/ + 3;
            if ( to[0] == '/' )
            {
              retries = retries;
              do
              {
                from[0] = from[1];
              }
              while ( from[0] == '/' );
            }
            if ( assert_failed == 0 )
            {
              assert_failed = ( to[0] < from[0] ) ^ 1;
              if ( ( to[0] < from[0] ) ^ 1 )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
                errline = 1182;
                elinks_internal( "assertion to &lt; from failed!" );
              }
            }
            prev_errno = URI_ERRNO_TOO_MANY_SLASHES;
            memmove( &to[0], &from[0], strlen( &from[0] ) + 1 );
          }
            break;
          case URI_ERRNO_NO_SLASHES:
          {
            int slashes;
            prev_errno = URI_ERRNO_NO_SLASHES;
            slashes = ( uri.string[ (int)uri.bits_at_40/*.1_2of4*/ + 1 ] != '/' ) + 1;
            insert_in_string( &newurl, (int)uri.bits_at_40/*.1_2of4*/ + 1, "//", ( uri.string[ (int)uri.bits_at_40/*.1_2of4*/ + 1 ] != '/' ) + 1 );
          }
            break;
          case URI_ERRNO_TRAILING_DOTS:
          {
            unsigned char *from;
            unsigned char *to;
            from[0] = uri.host[ uri.bits_at_44/*.3_4of4*/ ];
            if ( assert_failed == 0 )
            {
              if ( uri.host < from[0] && *(char*)(from[0] - 1) == '.' && from[0] != '.' )
                assert_failed = 0;
              else
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
                errline = 1204;
                elinks_internal( "assertion uri.host &lt; to && to[-1] == '.' && *from != '.' failed!" );
              }
            }
            to[0] = from[0];
            for ( ; uri.host < to[0] && *(char*)(to[0] - 1) == '.'; to[0] = uri_errno )
            {
              //to[0] = uri_errno;
            }
            if ( assert_failed == 0 )
            {
              assert_failed = ( to[0] < from[0] ) ^ 1;
              if ( ( to[0] < from[0] ) ^ 1 )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
                errline = 1208;
                elinks_internal( "assertion to &lt; from failed!" );
              }
            }
            prev_errno = URI_ERRNO_TRAILING_DOTS;
            memmove( &to[0], &from[0], strlen( &from[0] ) + 1 );
          }
            break;
          case URI_ERRNO_NO_PORT_COLON:
            if ( assert_failed == 0 )
            {
              if ( uri.bits_at_48/*.1_1of4*/ || uri.port <= uri.string || *(char*)(prev_errno - 1) != ':' )
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
                errline = 1215;
                elinks_internal( "assertion uri.portlen == 0 && uri.string &lt; uri.port && uri.port[-1] == ':' failed!" );
              }
              else
                assert_failed = 0;
                prev_errno = URI_ERRNO_NO_PORT_COLON;
                memmove( &uri.port[ -1 ], &offset, strlen( &prev_errno ) + 1 );
            }
            prev_errno = URI_ERRNO_NO_PORT_COLON;
            memmove( &uri.port[ -1 ], &offset, strlen( &prev_errno ) + 1 );
            break;
          case URI_ERRNO_NO_HOST_SLASH:
          {
            int offset;
            if ( assert_failed == 0 )
            {
              assert_failed = uri.host == 0;
              if ( !(_Bool)( uri.host != 0 ) )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
                errline = 1226;
                elinks_internal( "assertion uri.host != NULL failed: uri.host not set after no host slash error" );
              }
            }
            prev_errno = URI_ERRNO_NO_HOST_SLASH;
            insert_in_string( &newurl, offset, "/", 1 );
            retries = retries;
          }
            break;
          case URI_ERRNO_INVALID_PROTOCOL:
          {
            enum protocol  protocol = find_uri_protocol( newurl );
            struct string str;
            if ( init_string( &str ) )
            {
              if ( protocol == PROTOCOL_FTP )
              {
                *ebp_36 = ebp_36;
                add_to_string( ebp_36, "ftp://" );
                encode_uri_string( &cwd[0], newurl, -1, 0 );
              }
              else
              if ( protocol == PROTOCOL_HTTP )
              {
                add_to_string( ebp_36, "http://" );
                add_to_string( ebp_36, newurl );
              }
              else
              {
                add_to_string( &str, "file://" );
                if ( newurl[0] != '/' )
                {
                  add_to_string( &str, "./" );
                }
                encode_uri_string( &str, newurl, check_whether_file_exists( newurl ), 0 );
                if ( check_whether_file_exists( newurl ) >= 1 )
                  add_to_string( &str, newurl + check_whether_file_exists( newurl ) );
              }
              prev_errno = URI_ERRNO_INVALID_PROTOCOL;
              mem_free( (void*)newurl );
              newurl = str.source;
            }
          }
            break;
          case URI_ERRNO_EMPTY:
          case URI_ERRNO_NO_HOST:
            break;
          }
        }
        else
          url[0] = url[0];
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
        errline = 1097;
        elinks_error( "Maximum number of parsing attempts exceeded for %s." );
      }
      url[0] = url[0];
      if ( retries <= 32 )
        continue;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
      errline = 1097;
      elinks_error( "Maximum number of parsing attempts exceeded for %s." );
    }
  }
  return normalize_uri( 0, uri.string );
}
struct uri *get_composed_uri( struct uri *uri, enum uri_component  components )
{
  unsigned char *string;
  if ( assert_failed == 0 )
  {
    assert_failed = uri[0].string == 0;
    if ( !(_Bool)( uri[0].string != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
      errline = 1288;
      elinks_internal( "assertion uri failed!" );
      if ( assert_failed )
        goto B2;
    }
    string[0] = get_uri_string( &uri[0], components );
    uri = 0;
    if ( uri[0].string )
    {
      mem_free( &string[0] );
      return get_uri( &string[0], 0 );
    }
    return 0;
  }
B2:  assert_failed = 0;
  uri = 0;
  return 0;
}
struct uri *get_translated_uri( unsigned char *uristring, unsigned char *cwd )
{
  int eax;
  int edx;
  struct uri *uri;
  uri[0].string = 0;
  uristring[0] = translate_url( uristring, cwd );
  if ( translate_url( uristring, cwd ) )
  {
    uri[0].string = (unsigned char*)get_uri( translate_url( uristring, cwd ), 0 );
    mem_free( &uristring[0] );
  }
  return &uri[0];
}
unsigned char *get_extension_from_uri( struct uri *uri )
{
  int ecx;
  int edx;
  unsigned char *extension;
  int afterslash;
  unsigned char *pos;
  pos[0] = uri->data;
  if ( assert_failed == 0 )
  {
    assert_failed = pos[0] == 0;
    if ( !(_Bool)( pos[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
      errline = 1322;
      elinks_internal( "assertion pos failed!" );
    }
  }
  if ( pos[0] && pos[0] != 1 && pos[0] != '#' && pos[0] != '?' )
  {
    afterslash = 1;
    extension[0] = 0;
    uri = &uri[0];
    do
    {
      pos[0] = pos[1];
    }
    while ( pos[0] && pos[0] != '#' && memacpy( &extension[0], pos[0] - extension[0] - extension[0] ) != 1 && pos[0] != '?' );
    if ( extension[0] < pos[0] && extension[0] )
    {
      return memacpy( &extension[0], pos[0] - extension[0] - extension[0] );
    }
    return 0;
  }
  else
  {
    return 0;
  }
}
void encode_uri_string( struct string *string, unsigned char *name, int namelen, int convert_slashes )
{
  int ecx;
  int edx;
  unsigned char n[4];
  unsigned char *end;
  n[0] = 37;
  n[3] = 0;
  if ( namelen < 0 )
    strlen( &name[0] );
  end = &name[ strlen( &name[0] ) ];
  if ( name[0] < name[ strlen( &name[0] ) ] )
  {
    do
    {
      if ( name[0] - 97 < 25 && name[0] - 65 < 25 && name[0] - 48 < 9 && name[0] != '_' && name[0] != '.' && name[0] != '-' && name[0] != '~' && name[0] != '!' && name[0] != '\'' && name[0] != '*' && name[0] != ')' && name[0] != '(' )
      {
        if ( convert_slashes == 0 && name[0] == '/' )
          string = &string[0];
        else
        {
          n[1] = ( name[0] >> 4 ) < 10 ? 87 + ( name[0] >> 4 ) : 48 + ( name[0] >> 4 );
          n[2] = ( name[0] & 15 ) < 10 ? ( name[0] & 15 ) + 87 : ( name[0] & 15 ) + 48;
          if ( assert_failed == 0 )
          {
            if ( string[0].source )
              assert_failed = 0;
            else
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
              errline = 255;
              elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
              if ( assert_failed )
              {
                assert_failed = 0;
                string = &string[0];
              }
            }
            string->length = string->length + 259;
            string->length = string->length + 255;
            if ( 0 < 0 )
            {
              *ebp_56 = 0;
              *ebp_52 = 0;
              if ( mem_realloc( (void*)string->source, 0 ) )
              {
                string = (struct string*)mem_realloc( (void*)string->source, 0 );
                memset( string->source, 0, 0 - 0 );
              }
              else
              {
                name[0] = name[1];
              }
            }
            if ( string->source )
            {
              string->length/*.1_1of4*/ = n[2];
              string->source[3] = 0;
              string->length += 3;
            }
          }
          else
          {
            assert_failed = 0;
            string = &string[0];
          }
        }
      }
      add_char_to_string( &string[0], name[0] );
    }
    while ( name[1] < end );
    return;
  }
  else
  {
    return;
  }
}
void encode_win32_uri_string( struct string *string, unsigned char *name, int namelen )
{
  int ecx;
  int edx;
  unsigned char n[4];
  unsigned char *end;
  n[0] = 37;
  n[3] = 0;
  if ( namelen < 0 )
    strlen( &name[0] );
  end = &name[ strlen( &name[0] ) ];
  if ( name[0] < name[ strlen( &name[0] ) ] )
  {
    do
    {
      if ( name[0] - 97 >= 25 || name[0] - 65 >= 25 || name[0] - 48 >= 9 || name[0] == '_' || name[0] == '.' || name[0] == '-' || name[0] == '~' || name[0] == '!' || name[0] == '\'' || name[0] == '*' || name[0] == ')' || name[0] == '(' || name[0] == ':' || name[0] == '\\' )
      {
        name[0] = name[1];
        add_char_to_string( &string[0], name[0] );
        if ( name[0] < end )
          continue;
        else
          break;
      }
      else
      {
        n[1] = ( name[0] >> 4 ) < 10 ? 87 + ( name[0] >> 4 ) : 48 + ( name[0] >> 4 );
        n[2] = ( name[0] & 15 ) < 10 ? ( name[0] & 15 ) + 87 : ( name[0] & 15 ) + 48;
        if ( assert_failed == 0 )
        {
          string = &string[0];
          if ( string[0].source )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
            errline = 255;
            elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
            if ( assert_failed )
              goto B21;
          }
          string->length = string->length + 259;
          string->length = string->length + 255;
          if ( 0 < 0 )
          {
            *ebp_56 = 0;
            *ebp_52 = 0;
            if ( mem_realloc( (void*)string->source, 0 ) )
            {
              string = (struct string*)mem_realloc( (void*)string->source, 0 );
              memset( string->source, 0, 0 - 0 );
            }
            else
            {
              name[0] = name[1];
            }
          }
          if ( string->source )
          {
            name[0] = name[1];
            string->length/*.1_1of4*/ = n[2];
            string->source[3] = 0;
            string->length += 3;
            if ( name[1] < end )
              continue;
            else
              break;
          }
        }
B21:        assert_failed = 0;
      }
    }
    while ( name[1] < end );
    return;
  }
  else
  {
    return;
  }
}
void decode_uri( unsigned char *src )
{
  int eax;
  int ecx;
  int edx;
  unsigned char c;
  src[0] = src[1];
  while ( 1 )
  {
    c = src[2];
    if ( (unsigned char)( c ) == '%' )
    {
      int x1;
      if ( src[0] - 48 >= 9 )
        x1 -= 48;
      else
      if ( src[0] - 97 >= 5 )
      {
      }
      else
      if ( src[0] - 65 >= 5 )
      {
      }
      else
        *(char*)(( src[1] + 1 ) - 1) = 37;
      if ( x1 >= 0 )
      {
        int x2;
        if ( src[1] - 48 >= 9 )
          x2 = src[1] - 48;
        else
        if ( src[1] - 97 >= 5 )
        {
        }
        else
        if ( src[1] - 65 < 5 )
        {
        }
        else
        {
        }
        if ( x2 < 0 || x1 == 0 )
          continue;
        else
        {
          src[0] = src[0] + 2;
          *(char*)(( src[1] + 1 ) - 1) = c;
          if ( ( c & 255 ) == 0 )
          {
            break;
          }
          else
          {
            src[0]++;
          }
        }
      }
    }
    else
    {
      *(char*)(( src[1] + 1 ) - 1) = c;
      if ( c & 255 )
        continue;
    }
  }
}
void decode_uri_string( struct string *string )
{
  decode_uri( string[0].source );
  string->length = strlen( (char*)string->source );
  return;
}
void decode_uri_for_display( unsigned char *src )
{
  int edx;
  decode_uri( src );
  if ( src[0] )
  {
    __ctype_b_loc(  );
    *(int*)(ebp_12) = src[0];
    do
    {
      if ( ( *(short*)(eax + ( edx * 2 )) & 16386 ) != 16384 )
        src[0] = 42;
      src[0] = src[1];
    }
    while ( src[0] );
  }
  return;
}
void decode_uri_string_for_display( struct string *string )
{
  decode_uri_for_display( string[0].source );
  string->length = strlen( (char*)string->source );
  return;
}
struct uri *add_to_uri_list( struct uri_list *list, struct uri *uri )
{
  int edx;
  if ( ( list->size & -4 ) < ( list->uris & -4 ) )
  {
    ebp_28 = ( list->uris & -4 ) << 2;
    if ( mem_realloc( (void*)&list->uris, ( list->uris & -4 ) << 2 ) )
    {
      list->uris = (struct uri**)mem_realloc( (void*)&list->uris, ( list->uris & -4 ) << 2 );
      memset( list->uris + ( ( list->size & -4 ) << 2 ), 0, ( ( list->uris & -4 ) << 2 ) - ( ( list->size & -4 ) << 2 ) );
    }
    else
    {
      uri[0].string = 0;
      return &uri[0];
    }
  }
  if ( list->uris )
  {
    uri->object.refcount = uri->object.refcount;
    list->uris[ list->size ] = &uri[0];
    list = list->size + 1;
    return &uri[0];
  }
  uri[0].string = 0;
  return &uri[0];
}
void free_uri_list( struct uri_list *list )
{
  int edx;
  struct uri *uri;
  int index;
  if ( list->uris )
  {
    if ( list->size >= 1 )
    {
      index = 0;
      list = &list[0];
      do
      {
        uri = list->uris[ index ];
        if ( list->uris[ index ] )
        {
          done_uri( &uri[0] );
        }
        index++;
      }
      while ( index + 1 < list->size );
      if ( list->uris )
        goto B3;
      list->uris = 0;
      list = 0;
    }
B3:    mem_free( (void*)&list->uris );
    list->uris = 0;
    list = 0;
  }
  return;
}
struct uri *get_uri( unsigned char *string, enum uri_component  components )
{
  int eax;
  struct uri_cache_entry *entry;
  if ( assert_failed == 0 )
  {
    assert_failed = string[0] == 0;
    if ( !(_Bool)( string[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
      errline = 1574;
      elinks_internal( "assertion string failed!" );
    }
  }
  if ( components )
  {
    struct uri uri;
    if ( parse_uri( &uri, &string[0] ) == URI_ERRNO_OK )
    {
      get_composed_uri( &uri, components );
      return get_composed_uri( &string[0], components );
    }
    return get_composed_uri( &string[0], components );
  }
  else
  {
    if ( uri_cache.object.refcount == 0 )
    {
      uri_cache.map = init_hash8(  );
      if ( uri_cache.map == 0 )
      {
        return get_composed_uri( &string[0], components );
      }
    }
    if ( assert_failed == 0 )
    {
      assert_failed = ( ( strlen( &string[0] ) < 1 ) | ( string[0] == 0 ) ) & 1;
      if ( ( ( strlen( &string[0] ) < 1 ) | ( string[0] == 0 ) ) & 1 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
        errline = 1543;
        elinks_internal( "assertion string && length &gt; 0 failed!" );
        if ( assert_failed )
          goto B13;
      }
      if ( get_hash_item( uri_cache.map, &string[0], strlen( &string[0] ) ) )
      {
        entry = *(int*)(get_hash_item( uri_cache.map, &string[0], strlen( &string[0] ) ) + 16);
        if ( *(int*)(get_hash_item( uri_cache.map, &string[0], strlen( &string[0] ) ) + 16) == 0 )
        {
          uri_cache.object = uri_cache.object;
          if ( uri_cache.object.refcount == 0 )
          {
            free_hash( &uri_cache.map );
            return get_composed_uri( &string[0], components );
          }
          return get_composed_uri( &string[0], components );
        }
      }
      else
      {
        if ( eax )
        {
          memcpy( &eax[3].next, &string[0], edi );
          if ( eax || eax == 0 )
            mem_free( (void*)entry[0].uri.string );
          else
            uri_cache.object.refcount = uri_cache.object.refcount;
        }
      }
      entry->uri.object.refcount = entry->uri.object.refcount;
      return &entry[0].uri;
    }
B13:    assert_failed = 0;
  }
}
void done_uri( struct uri *uri )
{
  int eax;
  unsigned char *string;
  struct hash_item *item;
  struct uri_cache_entry *entry;
  string[0] = uri[0].string;
  strlen( (char*)uri[0].string );
  if ( assert_failed == 0 )
  {
    assert_failed = uri_cache.object.refcount == 0;
    if ( !(_Bool)( uri_cache.object.refcount != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
      errline = 1613;
      elinks_internal( "assertion is_object_used(&uri_cache) failed!" );
    }
  }
  uri->object.refcount--;
  if ( uri->object.refcount - 1 == 0 )
  {
    entry = 0;
    if ( assert_failed == 0 )
    {
      assert_failed = entry[0].uri.string == 0;
      if ( !(_Bool)( entry[0].uri.string != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/uri.c";
        errline = 1621;
        elinks_internal( "assertion entry != NULL failed: Releasing unknown URI [%s]" );
        item = &item[0];
        string[0] = string[0];
      }
    }
    del_hash_item( uri_cache.map, &item[0] );
    mem_free( (void*)entry[0].uri.string );
    uri_cache.object.refcount--;
    if ( uri_cache.object.refcount - 1 == 0 )
    {
      uri = &uri_cache.map[0].width;
    }
  }
  return;
}
#if 0
#endif
