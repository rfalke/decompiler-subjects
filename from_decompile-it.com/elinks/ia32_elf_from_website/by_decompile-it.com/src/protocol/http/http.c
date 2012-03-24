#include "http.c.h"
static struct auth_entry proxy_auth;
static unsigned char *accept_charset;
static struct option_info http_options[23] = { { { 0, 0, { 0 }
, "http", 0, 9, 0, 0, { 0, 135474965, 135475582, 0, 0, 0 }
, "HTTP-specific options.", "HTTP", 0, 0, 0 }
, "protocol" }
, { { 0, 0, { 0 }
, "bugs", 0, 9, 0, 0, { 0, 135404960, 135474988, 0, 0, 0 }
, "Server-side HTTP bugs workarounds.", "Server bug workarounds", 0, 0, 0 }
, "protocol.http" }
, { { 0, 0, { 0 }
, "accept_charset", 0, 0, 0, 1, { 0, 135404996, 135475040, 0, 0, 0 }
, "The Accept-Charset header is quite long and sending it can trigger bugs in some rarely found servers.", "Do not send Accept-Charset", 0, 0, 0 }
, "protocol.http.bugs" }
, { { 0, 0, { 0 }
, "allow_blacklist", 0, 0, 0, 1, { 0, 135405100, 135475102, 0, 0, 0 }
, "Allow blacklisting of buggy servers.", "Allow blacklisting", 0, 0, 0 }
, "protocol.http.bugs" }
, { { 0, 0, { 0 }
, "broken_302_redirect", 0, 0, 0, 1, { 0, 135405140, 135475141, 0, 0, 0 }
, "Broken 302 redirect (violates RFC but compatible with Netscape). This is a problem for a lot of web discussion boards and the like. If they will do strange things to you, try to play with this.", "Broken 302 redirects", 0, 0, 0 }
, "protocol.http.bugs" }
, { { 0, 0, { 0 }
, "post_no_keepalive", 0, 0, 0, 1, { 0, 135405336, 135405388, 0, 0, 0 }
, "Disable keepalive connection after POST request.", "No keepalive after POST requests", 0, 0, 0 }
, "protocol.http.bugs" }
, { { 0, 0, { 0 }
, "http10", 0, 0, 0, 1, { 0, 135405424, 135475180, 0, 0, 0 }
, "Use HTTP/1.0 protocol instead of HTTP/1.1.", "Use HTTP/1.0", 0, 0, 0 }
, "protocol.http.bugs" }
, { { 0, 0, { 0 }
, "proxy", 0, 9, 0, 0, { 0, 135475193, 135473376, 0, 0, 0 }
, "HTTP proxy configuration.", "Proxy configuration", 0, 0, 0 }
, "protocol.http" }
, { { 0, 0, { 0 }
, "host", 0, 3, 0, 1024, { "", 135405468, 135473409, 0, 0, 0 }
, "Host and port-number (host:port) of the HTTP proxy, or blank. If it's blank, HTTP_PROXY environment variable is checked as well.", "Host and port-number", 0, 0, 0 }
, "protocol.http.proxy" }
, { { 0, 0, { 0 }
, "user", 0, 3, 0, 1024, { "", 135405600, 135475239, 0, 0, 0 }
, "Proxy authentication username.", "Username", 0, 0, 0 }
, "protocol.http.proxy" }
, { { 0, 0, { 0 }
, "passwd", 0, 3, 0, 1024, { "", 135405632, 135471956, 0, 0, 0 }
, "Proxy authentication password.", "Password", 0, 0, 0 }
, "protocol.http.proxy" }
, { { 0, 0, { 0 }
, "referer", 0, 9, 0, 0, { 0, 135405664, 135475248, 0, 0, 0 }
, "HTTP referer sending options. HTTP referer is a special header sent in the HTTP requests, which is supposed to contain the previous page visited by the browser.This way, the server can know what link did you follow when accessing that page. However, this behaviour can unfortunately considerably affect privacy and can lead even to a security problem on some badly designed web pages.", "Referer sending", 0, 0, 0 }
, "protocol.http" }
, { { 0, 0, { 0 }
, "policy", 0, 1, 0, 3, { 0, 135406052, 135475264, 0, 0, 0 }
, "Mode of sending HTTP referer:\n0 is send no referer\n1 is send current URL as referer\n2 is send fixed fake referer\n3 is send previous URL as referer (correct, but insecure)", "Policy", 0, 0, 0 }
, "protocol.http.referer" }
, { { 0, 0, { 0 }
, "fake", 0, 3, 0, 1024, { "", 135406224, 135475293, 0, 0, 0 }
, "Fake referer to be sent when policy is 2.", "Fake referer URL", 0, 0, 0 }
, "protocol.http.referer" }
, { { 0, 0, { 0 }
, "accept_language", 0, 3, 0, 1024, { "", 135475310, 135475339, 0, 0, 0 }
, "Send Accept-Language header.", "Send Accept-Language header", 0, 0, 0 }
, "protocol.http" }
, { { 0, 0, { 0 }
, "accept_ui_language", 0, 0, 0, 1, { 0, 135406268, 135406640, 0, 0, 0 }
, "Request localised versions of documents from web-servers (using the Accept-Language header) using the language you have configured for ELinks' user-interface (this also affects navigator.language ECMAScript value available to scripts). Note that some see this as a potential security risk because it tells web-masters and the FBI sniffers about your language preference.", "Use UI language as Accept-Language", 0, 0, 0 }
, "protocol.http" }
, { { 0, 0, { 0 }
, "compression", 0, 0, 0, 1, { 0, 135406676, 135475386, 0, 0, 0 }
, "If enabled, the capability to receive compressed content (gzip and/or bzip2) is announced to the server, which usually sends the reply compressed, thus saving some bandwidth at slight CPU expense.\n\nIf ELinks displays a incomplete page or garbage, try disabling this option. If that helps, there may be a bug in the decompression part of ELinks. Please report such bugs.\n\nIf ELinks has been compiled without compression support, this option has no effect. To check the supported features, see Help -&gt; About.", "Enable on-the-fly compression", 0, 0, 0 }
, "protocol.http" }
, { { 0, 0, { 0 }
, "trace", 0, 0, 0, 1, { 0, 135407184, 135475416, 0, 0, 0 }
, "If active, all HTTP requests are sent with TRACE as their method rather than GET or POST. This is useful for debugging of both ELinks and various server-side scripts --- the server only returns the client's request back to the client verbatim. Note that this type of request may not be enabled on all servers.", "Activate HTTP TRACE debugging", 0, 0, 0 }
, "protocol.http" }
, { { 0, 0, { 0 }
, "user_agent", 0, 3, 0, 1024, { "ELinks/%v (textmode; %s; %t-%b)", 135407528, 135475446, 0, 0, 0 }
, "Change the User Agent ID. That means identification string, which is sent to HTTP server when a document is requested. The 'textmode' token in the first field is our silent attempt to establish this as a standard for new textmode user agents, so that the webmasters can have just a single uniform test for these if they are e.g. pushing some lite version to them automagically.\n\nUse \" \" if you don't want any User-Agent header to be sent at all.\n\n%v in the string means ELinks version,\n%s in the string means system identification,\n%t in the string means size of the terminal,\n%b in the string means number of bars displayed by ELinks.", "User-agent identification", 0, 0, 0 }
, "protocol.http" }
, { { 0, 0, { 0 }
, "https", 0, 9, 0, 0, { 0, 135475472, 135475496, 0, 0, 0 }
, "HTTPS-specific options.", "HTTPS", 0, 0, 0 }
, "protocol" }
, { { 0, 0, { 0 }
, "proxy", 0, 9, 0, 0, { 0, 135475502, 135473376, 0, 0, 0 }
, "HTTPS proxy configuration.", "Proxy configuration", 0, 0, 0 }
, "protocol.https" }
, { { 0, 0, { 0 }
, "host", 0, 3, 0, 1024, { "", 135408164, 135473409, 0, 0, 0 }
, "Host and port-number (host:port) of the HTTPS CONNECT proxy, or blank. If it's blank, HTTPS_PROXY environment variable is checked as well.", "Host and port-number", 0, 0, 0 }
, "protocol.https.proxy" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct module http_protocol_module = { "HTTP", http_options, 0, 0, 0, 0, &done_http };
struct connection_state connection_state( enum connection_basic_state  basic )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = edx == -1;
    if ( !(_Bool)( edx != -1 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/state.h";
      errline = 132;
      elinks_internal( "assertion basic != S_ERRNO failed!" );
      if ( assert_failed )
      {
      }
    }
    *(int*)(ebp_12 + 4) = 0;
    *ebp_12 = ebp_16;
    return ebp_12;
  }
  assert_failed = 0;
  basic = 0;
  basic = S_INTERNAL;
  return basic;
}
struct string *add_bytes_to_string__( struct string *string, unsigned char *bytes, int length )
{
  int ecx;
  int edx;
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
      if ( ( ( string->length + 255 ) & -256 ) < ( ( string->length + length + 256 ) & -256 ) )
      {
        ebp_32 = bytes[0];
        *ebp_36 = length;
        if ( mem_realloc( (void*)string->source, length ) )
        {
          string = (struct string*)mem_realloc( (void*)string->source, length );
          memset( string[0].source + ( ( string->length + 255 ) & -256 ), 0, ( ( string->length + length + 256 ) & -256 ) - ( ( string->length + 255 ) & -256 ) );
        }
        else
        {
          string[0].source = 0;
          return &string[0];
        }
      }
      if ( string->source )
      {
        memcpy( string->length + string->source, &bytes[0], length );
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
  return &string[0];
}
void done_http( void )
{
{
  void *p = (void*)proxy_auth.realm;
  if ( proxy_auth.realm )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)proxy_auth.nonce;
  if ( proxy_auth.nonce )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)proxy_auth.opaque;
  if ( proxy_auth.opaque )
    mem_free( &((int*)p)[0] );
  free_blacklist(  );
  if ( accept_charset )
  {
    mem_free( (void*)accept_charset );
  }
  return;
}
}
}
}
unsigned char *subst_user_agent( unsigned char *fmt, unsigned char *version, unsigned char *sysname, unsigned char *termsize )
{
  int eax;
  int ecx;
  int edx;
  struct string agent;
  if ( init_string( &agent ) )
  {
    while ( 1 )
    {
      do
      {
        if ( fmt[0] & 255 )
        {
        {
          int p;
          if ( fmt[0] != '%' )
          {
            do
            {
              p++;
              fmt[0] = fmt[0] + p + 1;
            }
            while ( *(char*)(p + fmt[0] + 1) != '%' && ( fmt[0] & 255 ) );
          }
          if ( assert_failed == 0 )
          {
            if ( p >= 0 )
              assert_failed = 0;
            else
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
              errline = 255;
              elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
              if ( assert_failed )
                goto B12;
            }
            if ( p )
            {
              if ( 0 < 0 )
              {
                *ebp_52 = 0;
                if ( mem_realloc( (void*)agent.source, 0 ) )
                {
                  agent.source = (unsigned char*)mem_realloc( (void*)agent.source, 0 );
                  memset( agent.source + 0, 0, 0 - 0 );
                }
                else
                {
                  if ( fmt[0] != '%' )
                    continue;
                  else
                  {
                    fmt[0] = fmt[0] + 1;
                    if ( fmt[1] != 's' )
                    {
                      if ( ccdep1 < ccdep2 )
                      {
                        if ( agent.source != 't' )
                        {
                          if ( fmt[1] != 'v' )
                          {
                            if ( assert_failed )
                              assert_failed = 0;
                            else
                            {
                              assert_failed = 0;
                              agent.length = agent.length + 258;
                              agent.length = agent.length + 255;
                              if ( 0 < 0 )
                              {
                                *ebp_52 = 0;
                                *ebp_48 = 0;
                                if ( mem_realloc( (void*)agent.source, 0 ) )
                                {
                                  agent.source = (unsigned char*)mem_realloc( (void*)agent.source, 0 );
                                  memset( &agent.source[0], 0, 0 - 0 );
                                }
                                else
                                {
                                }
                              }
                              if ( agent.source )
                                agent.length += 2;
                            }
                          }
                          else
                            version[0] = version;
                        }
                        else
                        if ( termsize )
                          termsize[0] = termsize;
                        else
                        {
                          fmt[0] = fmt[1];
                          break;
                          while ( 1 )
                          {
                          }
                        }
                      }
                      else
                      if ( fmt[1] != 'b' )
                      {
                      }
                      else
                      if ( sessions.next != sessions.next )
                      {
                        unsigned char bs[4];
                        int blen = 0;
                        struct session *ses;
                        bs[0] = 0;
                        elinks_ulongcat(  );
                        bs[0] = bs[0];
                      }
                      add_to_string( &agent, version );
                    }
                    else
                    {
                      add_to_string( &agent, sysname );
                    }
                  }
                }
              }
              if ( agent.source )
              {
                memcpy( agent.length + agent.source, &fmt[0], p + 1 );
                agent.source[ p ] = 0;
                agent.length = p;
              }
            }
          }
B12:          assert_failed = 0;
          fmt[0] = fmt[0];
        }
        }
        else
        {
          return agent.source;
        }
      }
      while ( fmt[0] & 255 );
    }
  }
}
void add_url_to_http_string( struct string *header, struct uri *uri, int components )
{
  unsigned char *string = get_uri_string( &uri[0], components );
  unsigned char *data;
  if ( string )
  {
    if ( string )
    {
      data[0] = string;
      do
      {
        if ( assert_failed == 0 )
        {
          if ( header[0] && strcspn( &data[0], " \t\r\n\\" ) >= 0 )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
            errline = 255;
            elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
            if ( assert_failed )
              goto B9;
          }
          if ( strcspn( &data[0], " \t\r\n\\" ) )
          {
            if ( 0 < 0 )
            {
              if ( mem_realloc( (void*)header->source, 0 ) )
              {
                header = (struct string*)mem_realloc( (void*)header->source, 0 );
                memset( header[0].source + 0, 0, 0 - 0 );
              }
              else
              {
                if ( data[ string ] )
                {
                  if ( eax == '\\' )
                    add_char_to_string( &header[0], 47 );
                  else
                    add_to_string( &header[0], "%20" );
                  data[0] = data[ edi + 1 ];
                }
                else
                  break;
              }
            }
            if ( header->source )
            {
              memcpy( header->length + header->source, &data[0], strcspn( &data[0], " \t\r\n\\" ) );
              header[ ebp_36 >> 3 ].source = 0;
              header->length = ebp_36;
              if ( data[ strcspn( &data[0], " \t\r\n\\" ) ] == 0 )
              {
                data[0] = data[0];
                break;
              }
              else
              {
              }
            }
          }
        }
B9:        assert_failed = 0;
        data[0] = data[0];
      }
      while ( data[0] );
    }
    mem_free( (void*)string );
    return;
  }
  else
  {
    return;
  }
}
void http_end_request( struct connection *conn, struct connection_state state, int notrunc )
{
  shutdown_connection_stream( &conn[0] );
  if ( conn->info && conn->info[5] == 0 && conn->socket->ssl == 0 && ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 || conn->uri->post == 0 ) )
  {
    if ( state.basic == -100000 && conn->cached )
    {
      normalize_cache_entry( conn->cached, conn->from );
    }
    set_connection_state( &conn[0], state );
    add_keepalive_connection( &conn[0], 60000, 0 );
    return;
  }
  else
  {
    abort_connection( &conn[0], state );
    return;
  }
}
void http_protocol_handler( struct connection *conn )
{
  if ( has_keepalive_connection( conn ) == 0 )
  {
    make_connection( conn->socket, conn->uri, &http_send_header, conn->cache_mode > 2 );
    return;
  }
  conn = &conn->socket->fd;
}
void proxy_protocol_handler( struct connection *conn )
{
}
struct http_connection_info *init_http_connection_info( struct connection *conn, int major, int minor, int close )
{
  int eax;
  int ecx;
  int edx;
  struct http_connection_info *http;
  if ( mem_calloc( 1, 36 ) == 0 )
  {
    connection_state( ebp_16 );
    http_end_request( &conn[0], (long long)( ebp_16 ) );
    return &conn->info[0];
  }
  http->sent_version.major = major;
  http->sent_version.minor = minor;
  http->close = close;
  if ( conn->proxied_uri->protocol == 4 )
  {
    if ( http->bl_flags & 1 )
    {
      http->sent_version.major = 1;
      http->sent_version.minor = 0;
      if ( conn->info )
        mem_free( conn->info );
      conn->info = &http[0].bl_flags;
      return &conn->info[0];
    }
  }
  else
  {
    http->bl_flags = get_blacklist_flags( conn->proxied_uri );
    if ( ( get_blacklist_flags( conn->proxied_uri ) & 1 ) & 255 )
      continue;
  }
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
    continue;
}
void http_send_header( struct socket *socket )
{
  int eax;
  int ecx;
  int edx;
  struct connection *conn = &socket->conn[0];
  struct http_connection_info *http;
  int trace;
  struct string header;
  unsigned char *post_data;
  struct auth_entry *entry;
  struct uri *uri = conn->proxied_uri;
  unsigned char *optstr;
  int use_connect, talking_to_proxy;
  trace = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  if ( conn->proxied_uri == 0 || uri->host == 0 || uri->host[0] == 0 || uri->bits_at_44/*.3_4of4*/ == 0 )
  {
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    http_end_request( &conn[0] );
    if ( 0 ^ 0 )
    {
      __stack_chk_fail(  );
    }
    return;
  }
  else
  {
    http = init_http_connection_info( &conn[0], 1, 1, 0 );
    if ( http )
    {
      if ( init_string( &header ) == 0 )
      {
        connection_state( ebp_4160 );
        http_end_request( &conn[0], (long long)( ebp_4160 ) );
      }
      else
      {
        if ( conn->cached == 0 )
        {
          conn->cached = find_in_cache( &uri[0] );
        }
        talking_to_proxy = 0;
        if ( conn->uri->protocol == 15 )
        {
          talking_to_proxy = conn->socket->ssl == 0;
          if ( conn->proxied_uri->protocol == 10 )
          {
            use_connect = 1;
            if ( ( conn->socket->ssl == 0 ) & 255 )
            {
              if ( trace )
                add_to_string( &header, "TRACE " );
              else
              if ( use_connect )
                add_to_string( &header, "CONNECT " );
              else
              if ( uri->post )
              {
                add_to_string( &header, "POST " );
                conn->bits_at_120/*.1_1of4*/ |= 2;
              }
              else
                add_to_string( &header, "GET " );
              if ( talking_to_proxy == 0 )
                add_char_to_string( &header, 47 );
              if ( use_connect )
                add_uri_to_string( &header, &uri[0], URI_HTTP_CONNECT );
              else
              if ( conn->uri->protocol == 15 && conn->proxied_uri->protocol == 10 && conn->socket->ssl )
                add_url_to_http_string( &header, &uri[0], 128 );
              else
              if ( talking_to_proxy )
              {
                add_url_to_http_string( &header, &uri[0], -30529 );
                add_to_string( &header, " HTTP/" );
                add_long_to_string( &header, http->sent_version.major );
                add_char_to_string( &header, 46 );
                add_long_to_string( &header, http->sent_version.minor );
                add_crlf_to_string( &header );
                add_to_string( &header, "Host: " );
                add_uri_to_string( &header, &uri[0], URI_HTTP_HOST );
                add_crlf_to_string( &header );
              {
                unsigned char *user;
                unsigned char *passwd;
                talking_to_proxy = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
                passwd = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
                if ( ( proxy_auth.bits_at_112/*.1_1of4*/ & 4 ) & 255 )
                {
                  unsigned char *response;
                  int userlen;
                  int passwordlen;
                  if ( (unsigned char)( ( strlen( &talking_to_proxy ) < 39 ) ^ 1 ) ? strlen( &talking_to_proxy ) : 39 )
                  {
                    __memcpy_chk( &proxy_auth.user[0], &talking_to_proxy, edx, 84 );
                    *ebp_4184 = ebp_4184;
                  }
                  proxy_auth.user[ userlen ] = 0;
                  if ( (unsigned char)( ( strlen(  ) < 39 ) ^ 1 ) ? strlen(  ) : 39 )
                    __memcpy_chk( &proxy_auth.password[0], ebp_4180, edi, 44 );
                  proxy_auth.password[ (unsigned char)( ( strlen(  ) < 39 ) ^ 1 ) ? strlen(  ) : 39 ] = 0;
                  if ( get_http_auth_digest_response( &proxy_auth, &uri[0] ) )
                  {
                    add_to_string( &header, "Proxy-Authorization: Digest " );
                    add_to_string( &header, &response[0] );
                    add_crlf_to_string( &header );
                    mem_free( &response[0] );
                    optstr[0] = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
                    if ( optstr[0] && ( optstr[0] != 32 || optstr[1] ) )
                    {
                      unsigned char *ustr, ts[64];
                      memset( &ts[4], 0, 60 );
                      ts[0] = 0;
                      add_to_string( &header, "User-Agent: " );
                      ts[0] = ts[0];
                      if ( terminals.next != terminals.next )
                      {
                        unsigned int tslen;
                        struct terminal *term = &terminals.prev[0];
                        tslen = 0;
                        elinks_ulongcat(  );
                        ts[ tslen ] = 120;
                        tslen++;
                        elinks_ulongcat(  );
                        *ebp_4188 = ts[0];
                        *ebp_4184 = optstr[0];
                      }
                      if ( eax )
                      {
                        add_to_string( &header, (unsigned char*)eax );
                        mem_free( &ustr[0] );
                      }
                      add_crlf_to_string( &header );
                      uri = &uri[0];
                    }
                    if ( use_connect == 0 )
                    {
                      switch ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
                      {
                      case 2:
                        optstr[0] = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
                        if ( optstr[0] )
                        {
                          add_to_string( &header, "Referer: " );
                          add_to_string( &header, &optstr[0] );
                          add_crlf_to_string( &header );
                        }
                        break;
                      case 3:
                        if ( conn->referrer )
                        {
                          add_to_string( &header, "Referer: " );
                          add_url_to_http_string( &header );
                          add_crlf_to_string( &header );
                        }
                        break;
                      case 1:
                        add_to_string( &header, "Referer: " );
                        add_url_to_http_string( &header );
                        add_crlf_to_string( &header );
                        break;
                      }
                    }
                    add_to_string( &header, "Accept: */*" );
                    add_crlf_to_string( &header );
                    if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
                    {
                      add_to_string( &header, "Accept-Encoding: " );
                      add_to_string( &header, "bzip2" );
                      add_to_string( &header, ", " );
                      add_to_string( &header, "deflate, gzip" );
                      add_crlf_to_string( &header );
                    }
                    if ( accept_charset == 0 && init_string( ebp_4144 ) )
                    {
                      talking_to_proxy = conn[0].next;
                      while ( eax == 0 )
                      {
                        if ( ebp_4140 )
                          add_to_string( ebp_4144, ", " );
                        else
                          add_to_string( ebp_4144, "Accept-Charset: " );
                        add_to_string( ebp_4144, (unsigned char*)init_string( ebp_4144 ) );
                      }
                      conn = &talking_to_proxy;
                      if ( ebp_4140 )
                      {
                        add_crlf_to_string( ebp_4144 );
                        *ebp_4140 = ebp_4140;
                      }
                      accept_charset = memacpy(  );
                      done_string( ebp_4144 );
                    }
                    if ( !( ( http[0].bl_flags & 2 ) & 255 ) && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 && accept_charset )
                      add_to_string( &header, accept_charset );
                    optstr[0] = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
                    if ( optstr[0] )
                    {
                      add_to_string( &header, "Accept-Language: " );
                      add_to_string( &header, &optstr[0] );
                      add_crlf_to_string( &header );
                    }
                    else
                    {
                      if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) && language_to_iso639( current_language ) )
                      {
                        add_to_string( &header, "Accept-Language: " );
                        add_to_string( &header, &code[0] );
                        add_crlf_to_string( &header );
                      }
                    }
                    if ( http->sent_version.major == 1 && *(int*)(( conn->socket->ssl == 0 ) + 16) == 1 )
                    {
                      if ( conn->uri->protocol != 15 )
                        add_to_string( &header, "Connection: " );
                      else
                        add_to_string( &header, "Proxy-Connection: " );
                      if ( uri->post == 0 || *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
                        add_to_string( &header, "Keep-Alive" );
                      else
                        add_to_string( &header, "close" );
                      add_crlf_to_string( &header );
                    }
                    if ( use_connect == 0 && conn->cached && !( ( *(char*)(conn->cached + 92) & 8 ) & 255 ) && conn->cached->head )
                    {
                      if ( conn->cache_mode <= 2 )
                      {
                        if ( conn->cached->last_modified )
                        {
                          add_to_string( &header, "If-Modified-Since: " );
                          add_to_string( &header, conn->cached->last_modified );
                          add_crlf_to_string( &header );
                          &conn->cached = conn->cached;
                        }
                        if ( conn->cached->etag )
                        {
                          add_to_string( &header, "If-None-Match: " );
                          add_to_string( &header, conn->cached->etag );
                          add_crlf_to_string( &header );
                          uri = &uri[0];
                        }
                      }
                      else
                      {
                        add_to_string( &header, "Pragma: no-cache" );
                        add_crlf_to_string( &header );
                        add_to_string( &header, "Cache-Control: no-cache" );
                        add_crlf_to_string( &header );
                        if ( use_connect == 0 )
                        {
                          if ( conn->from || ( (int)(conn->progress->start << 32) >= 0 && ( ccdep2 < ccdep1 || (int)(conn->progress->start & 0xFFFFFFFF) >= 1 ) ) )
                          {
                            add_to_string( &header, "Range: bytes=" );
                            add_long_to_string( &header, (int)( (long)(conn->progress->start & 0xFFFFFFFF) ) );
                            add_char_to_string( &header, 45 );
                            add_crlf_to_string( &header );
                          }
                          if ( http_negotiate_output( &uri[0], &header ) && entry[0] )
                          {
                            if ( ( entry->bits_at_112/*.1_1of4*/ & 4 ) & 255 )
                            {
                              unsigned char *response;
                              if ( get_http_auth_digest_response( &entry[0], &uri[0] ) )
                              {
                                add_to_string( &header, "Authorization: Digest " );
                                add_to_string( &header, &response[0] );
                                add_crlf_to_string( &header );
                                mem_free( &response[0] );
                              }
                            }
                            else
                            {
                              unsigned char *id;
                              if ( straconcat( find_auth( &uri[0] ) + 32 ) )
                              {
                                unsigned char *base64;
                                base64[0] = base64_encode( straconcat( find_auth( &uri[0] ) + 32 ) );
                                mem_free( &id[0] );
                                if ( base64[0] )
                                {
                                  add_to_string( &header, "Authorization: Basic " );
                                  add_to_string( &header, &base64[0] );
                                  add_crlf_to_string( &header );
                                  mem_free( &base64[0] );
                                }
                              }
                            }
                          }
                          post_data[0] = uri->post;
                          if ( uri->post )
                          {
                            if ( strchr( &post_data[0], 10 ) )
                            {
                              post_data[0] = strchr( &post_data[0], 10 ) + 1;
                              add_to_string( &header, "Content-Type: " );
                              add_bytes_to_string__( &header, uri->post, strchr( &post_data[0], 10 ) - uri->post );
                              add_crlf_to_string( &header );
                            }
                            add_to_string( &header, "Content-Length: " );
                            add_long_to_string( &header, strlen( &post_data[0] ) >> 1 );
                            add_crlf_to_string( &header );
                          }
                        {
                          struct string *cookies;
                          if ( send_cookies( &uri[0] ) )
                          {
                            add_to_string( &header, "Cookie: " );
                            add_string_to_string( &header, &cookies[0] );
                            add_crlf_to_string( &header );
                            done_string( &cookies[0] );
                          }
                          add_crlf_to_string( &header );
                          if ( post_data[0] == 0 )
                          {
                            if ( assert_failed == 0 )
                              assert_failed = 0;
                              request_from_socket( ebp_4164, header.source, header.length, (long long)( eax ), SOCKET_END_ONCLOSE, &http_got_header );
                              done_string( &header );
                            else
                              assert_failed = 0;
                              request_from_socket( ebp_4164, header.source, header.length, (long long)( eax ), SOCKET_END_ONCLOSE, &http_got_header );
                              done_string( &header );
                          }
                          else
                          {
                            unsigned char *post;
                            unsigned char buffer[4096];
                            int n;
                            if ( assert_failed == 0 )
                              assert_failed = 0;
                            n = 0;
                            for ( ; post_data[0] == 0 || post_data[1] == 0; post_data[0] = post_data[2] )
                            {
                              if ( post_data[0] - 48 >= 9 )
                              {
                                int h1, h2;
                                h1 -= 48;
                              }
                              else
                              if ( post_data[0] - 97 < 5 )
                              {
                              }
                              else
                              if ( assert_failed == 0 )
                              {
                                assert_failed = h1 > 15;
                                if ( h1 > 15 )
                                {
                                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/http/http.c";
                                  errline = 998;
                                  elinks_internal( post_data[0] );
                                  if ( assert_failed )
                                  {
                                    assert_failed = 0;
                                    if ( post_data[1] - 48 >= 9 )
                                      h2 -= 48;
                                      assert_failed = h2 > 15;
                                      if ( h2 > 15 )
                                      {
                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/http/http.c";
                                        errline = 1002;
                                        elinks_internal( post_data[1] );
                                        if ( assert_failed )
                                          assert_failed = 0;
                                          buffer[ n ] = optstr[0] + 0;
                                          n++;
                                          if ( n + 1 == 4096 )
                                          {
                                            if ( assert_failed )
                                              assert_failed = 0;
                                              //post_data[0] = post_data[2];
                                            else
                                            {
                                              assert_failed = 0;
                                              http = header.length + 4096;
                                              if ( ( ( header.length + 255 ) & -256 ) < ( ( header.length + 4352 ) & -256 ) )
                                              {
                                                if ( mem_realloc( (void*)header.source, ( header.length + 4352 ) & -256 ) )
                                                {
                                                  header.source = (unsigned char*)mem_realloc( (void*)header.source, ( header.length + 4352 ) & -256 );
                                                  memset( header.source + ( ( header.length + 255 ) & -256 ), 0, ( ( header.length + 4352 ) & -256 ) - ( ( header.length + 255 ) & -256 ) );
                                                  if ( header.source )
                                                  {
                                                    use_connect = 4096;
                                                    if ( ( (unsigned char)( header.length + header.source ) & 1 ) & 255 )
                                                    {
                                                      header.source = ebp_4124;
                                                      use_connect = 4095;
                                                      if ( ( header.length + header.source + 1 ) & 2 )
                                                      {
                                                        edi = buffer[0];
                                                        use_connect -= 2;
                                                        memcpy( *(int*)(0), *(int*)(0), ( use_connect >> 2 ) * 4 );
                                                        if ( ( use_connect/*.1_1of4*/ & 2 ) & 255 )
                                                        {
                                                          if ( ( use_connect/*.1_1of4*/ & 1 ) & 255 )
                                                          {
                                                            n = 0;
                                                            *(char*)(header.source + edx + 4096) = 0;
                                                            header.length = http;
                                                          }
                                                          else
                                                          {
                                                            n = 0;
                                                            *(char*)(header.source + edx + 4096) = 0;
                                                            header.length = http;
                                                          }
                                                        }
                                                        else
                                                        {
                                                        }
                                                      }
                                                      else
                                                      {
                                                        memcpy( *(int*)(0), *(int*)(0), ( use_connect >> 2 ) * 4 );
                                                      }
                                                    }
                                                    else
                                                    {
                                                    }
                                                  }
                                                  else
                                                    n = 0;
                                                }
                                                else
                                                  n = 0;
                                              }
                                              else
                                              {
                                              }
                                            }
                                          }
                                        else
                                          edi = -1;
                                      }
                                    else
                                    {
                                      if ( post_data[1] - 97 >= 5 )
                                      {
                                      }
                                      else
                                      {
                                        if ( post_data[1] - 65 >= 5 )
                                        {
                                        }
                                        else
                                          assert_failed = 1;
                                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/http/http.c";
                                          errline = 1002;
                                          elinks_internal( post_data[1] );
                                      }
                                    }
                                  }
                                }
                                if ( post_data[1] - 48 >= 9 )
                                  h2 -= 48;
                                else
                                {
                                }
                              }
                              if ( assert_failed == 0 )
                              {
                                assert_failed = h1 > 15;
                              }
                            }
                          }
                        }
                        }
                        else
                          add_crlf_to_string( &header );
                      }
                    }
                    if ( conn->cache_mode > 2 )
                    {
                      add_to_string( &header, "Pragma: no-cache" );
                      add_crlf_to_string( &header );
                      add_to_string( &header, "Cache-Control: no-cache" );
                      add_crlf_to_string( &header );
                    }
                    else
                    {
                    }
                  }
                }
                else
                {
                  if ( talking_to_proxy/*.1_1of4*/ && straconcat( &talking_to_proxy ) )
                  {
                    unsigned char *proxy_64;
                    if ( base64_encode( straconcat( &talking_to_proxy ) ) )
                    {
                      add_to_string( &header, "Proxy-Authorization: Basic " );
                      add_to_string( &header, &proxy_64[0] );
                      add_crlf_to_string( &header );
                      mem_free( &proxy_64[0] );
                    }
                    mem_free( &proxy_data[0] );
                  }
                }
              }
              }
              else
              {
                add_url_to_http_string( &header );
                add_to_string( &header, " HTTP/" );
                add_long_to_string( &header, http->sent_version.major );
                add_char_to_string( &header, 46 );
                add_long_to_string( &header, http->sent_version.minor );
                add_crlf_to_string( &header );
                add_to_string( &header, "Host: " );
                add_uri_to_string( &header, &uri[0], URI_HTTP_HOST );
                add_crlf_to_string( &header );
              }
              add_to_string( &header, " HTTP/" );
              add_long_to_string( &header, http->sent_version.major );
              add_char_to_string( &header, 46 );
              add_long_to_string( &header, http->sent_version.minor );
              add_crlf_to_string( &header );
              add_to_string( &header, "Host: " );
              add_uri_to_string( &header, &uri[0], URI_HTTP_HOST );
              add_crlf_to_string( &header );
              if ( talking_to_proxy )
              {
                unsigned char *user;
                unsigned char *passwd;
                talking_to_proxy = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
                passwd = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
              }
            }
          }
        }
        use_connect = 0;
      }
    }
  }
}
unsigned char *decompress_data( struct connection *conn, unsigned char *data, int len, int *new_len )
{
  struct http_connection_info *http = &conn->info[0];
  enum  { NORMAL = 0, FINISHING = 1, } state;
  int did_read;
  int *length_of_block;
  unsigned char *output;
  if ( conn->info[6] == -2 )
  {
    state = *(int*)(conn->info + 28) == -2;
    length_of_block = conn->info + 28;
  }
  else
  {
    length_of_block = &http->length;
    state = conn->info[6] == 0;
  }
  if ( conn->content_encoding == ENCODING_NONE )
  {
    new_len[0] = len;
    if ( length_of_block[0] >= 1 )
    {
      length_of_block[0] -= len;
    }
  }
  else
  {
    new_len[0] = 0;
    if ( conn->stream_pipes[0] != -1 || ( c_pipe( &conn->stream_pipes[0] ) >= 0 && set_nonblocking_fd( conn->stream_pipes[0] ) >= 0 && set_nonblocking_fd( conn->stream_pipes[1] ) >= 0 ) )
    {
      output = 0;
      do
      {
        state = state;
        if ( state == NORMAL )
        {
          do
          {
            if ( eax == -1 )
            {
            }
            else
            if ( write( mem_realloc( (void*)output, new_len[163840] ), data[0] + __errno_location(  ), len - __errno_location(  ) ) >= 0 )
            {
              data[0] = ebp_36 + eax;
              if ( length_of_block[0] >= 1 )
                length_of_block[0] = edx - eax;
              if ( http->length )
              {
                if ( ebp_28 )
                {
                  if ( conn->stream == 0 )
                  {
                    conn->stream = open_encoded( conn->stream_pipes[0], conn->content_encoding );
                    if ( conn->stream )
                      goto B13;
                  }
B13:                  if ( mem_realloc( (void*)output, new_len[163840] ) )
                  {
                    if ( did_read < 0 )
                      output = (unsigned char*)mem_realloc( (void*)output, new_len[163840] );
                      shutdown_connection_stream( &conn[0] );
                      return output;
                    else
                    {
                      new_len[0] += did_read;
                      output = (unsigned char*)mem_realloc( (void*)output, new_len[163840] );
                      if ( did_read == 655360 || ( len - __errno_location(  ) ) )
                      {
                        do
                        {
                          state = state;
                        }
                        while ( did_read == 655360 || ( len - __errno_location(  ) ) );
                      }
                      else
                    }
                  }
                  new_len[0] = new_len[0];
                  if ( state != FINISHING )
                    break;
                  shutdown_connection_stream( &conn[0] );
                  return output;
                }
                else
                  break;
              }
            }
          }
          while ( *(int*)(__errno_location(  )) != 4 );
        }
      {
        int written;
        state = FINISHING;
      }
      }
      while ( did_read == 655360 || ( len - __errno_location(  ) ) );
      new_len[0] = new_len[0];
    }
    return 0;
  }
}
void read_more_http_data( struct connection *conn, struct read_buffer *rb, int already_got_anything )
{
  int ecx;
  if ( already_got_anything )
  {
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
  }
  else
    conn->state.syserr = conn->state.syserr;
  read_from_socket( *(int*)(eax + 96), &rb[0], ebx, &ecx );
  return;
}
void read_http_data_done( struct connection *conn )
{
  int eax;
  int ecx;
  if ( !conn->from && conn->info[8] > 399 )
  {
    http_error_document( &conn[0], conn->info[8] );
  }
  if ( assert_failed == 0 )
  {
    assert_failed = 0;
    http_end_request( 0 );
    return;
  }
  assert_failed = 0;
  http_end_request( 0 );
  return;
}
void read_http_data( struct socket *socket, struct read_buffer *rb )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
void http_got_header( struct socket *socket, struct read_buffer *rb )
{
  int eax;
  int ecx;
  int edx;
  struct connection *conn = &socket->conn[0];
  struct http_connection_info *http = &socket->conn[38];
  unsigned char *head;
  unsigned char *cookie, *ch;
  unsigned char *d;
  struct uri *uri;
  int a, h;
  int cf;
  if ( socket->conn[20] != 7 )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = 0;
      cf = 6;
      if ( socket->state == SOCKET_CLOSED )
      {
        if ( conn->tries == 0 && socket->conn[6] )
        {
          if ( ( http[0].bl_flags & 2 ) & 255 )
            del_blacklist_entry( &socket->conn[6], SERVER_BLACKLIST_NO_CHARSET );
          else
          {
            add_blacklist_entry( &socket->conn[6], SERVER_BLACKLIST_NO_CHARSET );
            conn->tries = -1;
          }
        }
        if ( assert_failed == 0 )
          assert_failed = 0;
        else
          assert_failed = 0;
        retry_connection( conn, (long long)-100003 );
        return;
      }
      else
      {
        socket->state = SOCKET_RETRY_ONCLOSE;
        h = 200;
        esi = uri[0].string;
        while ( 1 )
        {
          if ( rb->length > 4 )
          {
            if ( c_strncasecmp( &rb->data[0], "HTTP/", 5 ) )
              a = 0;
              if ( h == 101 )
              {
                if ( assert_failed == 0 )
                  assert_failed = 0;
                  abort_connection( conn, (long long)( eax ) );
                  return;
                else
                  assert_failed = 0;
              }
              else
              {
                if ( a )
                {
                  cf = memacpy( &rb->data[0], a );
                  if ( cf )
                  {
                    if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) && ( http->sent_version.major != 1 || http->sent_version.minor ) && parse_header( &cf, "Server", 0 ) )
                    {
                      do
                      {
                        if ( eax )
                        {
                          rb = &rb[0];
                          add_blacklist_entry( &socket->conn[6], SERVER_BLACKLIST_HTTP10 );
                          mem_free( (void*)parse_header( &cf, "Server", 0 ) );
                          if ( buggy_servers[1][4] )
                          {
                            mem_free( &cf );
                            if ( assert_failed == 0 )
                              assert_failed = 0;
                              retry_connection( conn, (long long)( eax ) );
                              break;
                            else
                              assert_failed = 0;
                              retry_connection( conn, (long long)( eax ) );
                              break;
                          }
                        }
                        else
                      }
                      while ( buggy_servers[1][4] );
                      rb = &rb[0];
                      mem_free( (void*)parse_header( &cf, "Server", 0 ) );
                      if ( socket->conn[6] == 4 )
                      {
                        d = parse_header( &cf, "Status", 0 );
                        if ( d )
                        {
                          int h2 = strtol( (char*)d, 0, 10 );
                          mem_free( (void*)d );
                          if ( h2 - 100 <= 499 )
                          {
                            if ( h2 == 101 )
                            {
                              mem_free( &cf );
                              connection_state(  );
                              abort_connection( conn );
                              break;
                            }
                            else
                              h = h2;
                              uri = &socket->conn[6];
                              ch = &cf;
                              head[0] = cf;
                              for ( ; parse_header( &head[0], "Set-Cookie", &ch ) == 0; head[0] = ch )
                              {
                                set_cookie( &uri[0], &cookie[0] );
                                mem_free( &cookie[0] );
                                //head[0] = ch;
                              }
                          }
                        }
                      }
                    }
                    if ( socket->conn[6] == 4 )
                    {
                      d = parse_header( &cf, "Status", 0 );
                    }
                  }
                }
                else
                {
                  cf = stracpy( "\r\nContent-Type: text/html\r\n" );
                  if ( cf )
                  {
                  }
                }
                if ( assert_failed == 0 )
                  assert_failed = 0;
                else
                  assert_failed = 0;
              }
            else
            {
            }
          }
          if ( rb->length >= 1 )
          {
            do
            {
              a/*.1_1of4*/ = rb->data[ edx ];
              if ( a/*.1_1of4*/ == 0 )
                *(char*)(rb[ edx >> 4 ].done + 11) = 32;
              else
              {
                if ( (unsigned char)( *(char*)(rb[0].done + c_strncasecmp( &rb->data[0], "HTTP/", 5 ) + 13) ) == 10 && a/*.1_1of4*/ == 10 )
                {
                  if ( eax < esi - 1 )
                    a = eax + 2;
                }
                else
                if ( a/*.1_1of4*/ == 13 && eax < esi - 3 && (unsigned char)( edi ) != 13 )
                {
                  if ( ecx != 10 )
                  {
                    if ( assert_failed == 0 )
                      assert_failed = 0;
                    else
                      assert_failed = 0;
                    abort_connection( conn, (long long)-100003 );
                    break;
                  }
                  else
                  if ( rb->__pad[ edx ] == 13 )
                  {
                    if ( *(char*)(rb[0].done + eax + 15) != 10 )
                      continue;
                    else
                      a = eax + 4;
                  }
                }
                if ( a == -1 )
                  continue;
                else
                {
                  if ( a == 0 )
                    break;
                  else
                  {
                    if ( a != -2 )
                    {
                      if ( rb->data[0] == ' ' )
                      {
                        do
                        {
                        }
                        while ( rb->data[1] == ' ' );
                      }
                      if ( eax != 72 || eax != 84 || eax != 84 || eax != 80 || rb->data[1] != '/' )
                        continue;
                      else
                      {
                        *(int*)(esi + 5) = rb->data[0] + 1 + 5;
                        while ( eax != '.' && ( ecx & 255 ) )
                        {
                          eax++;
                        }
                        if ( edi != eax && ( ecx & 255 ) && eax - edi <= 4 )
                        {
                          cf = eax + 1;
                          if ( *(char*)(eax + 1) - 48 >= 9 )
                          {
                            h = 1;
                            while ( *(char*)(esi - 1) - 48 >= 9 )
                            {
                              if ( esi <= edi )
                              {
                                while ( *(char*)(strtol( &max_age.(null), 0, 10 )) != ' ' && ( *(char*)(strtol( &max_age.(null), 0, 10 )) & 255 ) )
                                {
                                  *(int*)(*(char*)(eax + 1)) = *(char*)(eax + 1);
                                }
                                if ( eax != cf && ( ecx & 255 ) && eax - cf <= 4 )
                                {
                                  while ( *(char*)(esi - 1) - 48 >= 9 )
                                  {
                                    if ( esi <= cf )
                                    {
                                      while ( ecx == ' ' )
                                      {
                                        *(int*)(*(char*)(eax + 1)) = *(char*)(eax + 1);
                                      }
                                      if ( ecx - 49 >= 8 && *(char*)(eax + 1) - 48 >= 9 && *(char*)(eax + 2) - 48 >= 9 )
                                        h = ( ( ( ecx * 100 ) + eax ) - 5328 ) + ( edi * 10 );
                                    }
                                    else
                                    {
                                    }
                                  }
                                }
                              }
                              else
                              {
                                h *= 10;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                      a = 0;
                  }
                }
              }
            }
            while ( edx < esi );
          }
          read_from_socket( conn->socket, &rb[0], (long long)( cf ), &http_got_header );
          break;
        }
      }
    }
  }
  else
  if ( assert_failed == 0 )
  {
    assert_failed = 0;
    cf = 7;
    if ( socket->state == SOCKET_CLOSED )
    {
    }
    else
    {
      socket->state = SOCKET_RETRY_ONCLOSE;
      h = 200;
      esi = uri[0].string;
      while ( 1 )
      {
      }
    }
  }
  assert_failed = 0;
  cf = -100003;
}
#if 0
#endif
