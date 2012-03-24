#include "proxy.c.h"
struct uri *proxy_uri( struct uri *uri, unsigned char *proxy, struct connection_state *error_state )
{
  struct string string;
  if ( init_string( &string ) && string_concat( &string ) && add_uri_to_string( &string, &uri[0], URI_BASE ) )
  {
    uri[0].string = (unsigned char*)get_uri( string.source, 0 );
    if ( get_uri( string.source, 0 ) == 0 )
    {
      if ( assert_failed == 0 )
        assert_failed = 0;
      else
        assert_failed = 0;
      error_state->basic = S_INTERNAL;
      error_state->syserr = 0;
    }
  }
  else
  {
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    uri[0].string = 0;
    error_state->basic = S_INTERNAL;
    error_state->syserr = 0;
  }
  done_string( &string );
  return &uri[0];
}
unsigned char *strip_proxy_protocol( unsigned char *proxy, unsigned char *strip1, unsigned char *strip2 )
{
  if ( assert_failed == 0 )
  {
    if ( proxy[0] && proxy[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/proxy.c";
      errline = 87;
      elinks_internal( "assertion proxy && *proxy failed!" );
    }
  }
  if ( c_strncasecmp( &proxy[0], &strip1[0], strlen( &strip1[0] ) ) == 0 )
  {
    proxy[0] = proxy[ strlen( &strip1[0] ) ];
  }
  if ( strip2[0] && c_strncasecmp( &proxy[0], &strip2[0], strlen( &strip2[0] ) ) == 0 )
  {
    proxy[0] = proxy[ strlen( &strip2[0] ) ];
  }
  return &proxy[0];
}
unsigned char *get_protocol_proxy( unsigned char *opt, unsigned char *env1, unsigned char *env2, unsigned char *strip1, unsigned char *strip2 )
{
  unsigned char *proxy;
  proxy[0] = proxy[0];
  if ( proxy[0] == 0 )
    getenv( &env1[0] );
  if ( ( proxy[0] && proxy[0] ) || ( proxy[0] && proxy[0] ) )
  {
  }
  return (unsigned char*)getenv( &env2[0] );
}
struct uri *get_proxy_uri( struct uri *uri, struct connection_state *error_state )
{
  int eax;
  int ecx;
  int edx;
  if ( uri->protocol == 15 )
  {
    get_composed_uri( &uri[0], URI_BASE );
    return get_composed_uri( &uri[0], URI_BASE );
  }
  else
  {
    static int get_proxy_event_id = -1;
    unsigned char *tmp = 0;
    if ( get_proxy_event_id == -1 )
    {
      get_proxy_event_id = get_event_id( "get-proxy" );
    }
    trigger_event( tmp );
    if ( tmp )
    {
      if ( tmp[0] )
      {
        proxy_uri( &uri[0], strip_proxy_protocol(  ), error_state );
      {
        void *p = (void*)tmp;
        if ( tmp )
        {
          mem_free( &((int*)p)[0] );
          *ebp_64 = get_composed_uri( &uri[0], URI_BASE );
          return get_composed_uri( &uri[0], URI_BASE );
        }
        else
        {
          return get_composed_uri( &uri[0], URI_BASE );
        }
      }
      }
    }
    else
    {
      switch ( uri->protocol )
      {
      case 9:
        break;
      case 10:
        break;
      case 7:
        break;
      }
      if ( ebp_56 && *ebp_56 )
      {
        if ( strchr( ebp_56, 47 ) )
          *(char*)(strchr( ebp_56, 47 )) = 0;
        if ( *(char*)(*(int*)(get_opt_( config_options, (unsigned char*)config_options ))) == 0 )
        {
        }
        if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 || *(char*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
        {
        }
        if ( strchr( (char*)uri->host, 47 ) )
          *(char*)(strchr( (char*)uri->host, 47 )) = 0;
        if ( get_opt_( config_options, (unsigned char*)config_options ) && *(char*)(get_opt_( config_options, (unsigned char*)config_options )) )
        {
          do
          {
            if ( edi )
              edi = 0;
            if ( eax )
            {
              uri = &uri[0];
              if ( edi )
                edi = 44;
              if ( strchr( (char*)uri->host, 47 ) )
                *(char*)(strchr( (char*)uri->host, 47 )) = '/';
            }
            else
            {
              if ( edi == 0 )
                break;
              else
              {
                edi = 44;
              }
            }
          }
          while ( ( edi + 1 ) && *(char*)(edi + 1) );
          uri = &uri[0];
        }
        if ( strchr( (char*)uri->host, 47 ) )
          *(char*)(strchr( (char*)uri->host, 47 )) = '/';
        proxy_uri( &uri[0], ebp_56, error_state );
      }
    }
    get_composed_uri( &uri[0], URI_BASE );
  }
}
struct uri *get_proxied_uri( struct uri *uri )
{
  if ( uri->protocol == 15 )
  {
    return get_uri( &uri->data[28], URI_BASE );
  }
  return get_composed_uri( &uri[0], URI_BASE );
}
#if 0
#endif
