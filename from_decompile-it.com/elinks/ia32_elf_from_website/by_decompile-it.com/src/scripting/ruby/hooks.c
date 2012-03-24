#include "hooks.c.h"
struct event_hook_info ruby_scripting_hooks[6] = { { "goto-url", 0, &script_hook_goto_url, 0 }
, { "follow-url", 0, &script_hook_follow_url, 0 }
, { "pre-format-html", 0, &script_hook_pre_format_html, 0 }
, { "get-proxy", 0, &script_hook_get_proxy, 0 }
, { "quit", 0, &script_hook_quit, 0 }
, { 0, 0, 0, 0 }
 };
VALUE do_erb_protected_method_call( VALUE data )
{
  ID method_id;
  if ( assert_failed == 0 )
  {
    assert_failed = data == 0;
    if ( !(_Bool)( data != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/scripting/ruby/hooks.c";
      errline = 38;
      elinks_internal( "assertion info failed!" );
    }
  }
  erb_module = erb_module;
  return rb_funcall3( erb_module, rb_intern( &data ), data, &data );
}
enum evhook_status  script_hook_goto_url( va_list ap, void *data )
{
  unsigned char **url;
  struct session *ses;
  int error;
  VALUE args[2];
  VALUE result;
  url[0] = &ap[0];
  ses = &ap[4];
  if ( url[0] )
  {
    return result;
  }
  result = 0;
}
enum evhook_status  script_hook_follow_url( va_list ap, void *data )
{
  unsigned char **url;
  struct session *ses;
  int error;
  VALUE args[1];
  VALUE result;
  url[0] = &ap[0];
  ses = &ap[4];
  if ( url[0] )
  {
    return result;
    result = ebp_44;
    rb_protect( &do_erb_protected_method_call, ebp_44, &error );
    if ( error )
    {
      erb_report_error( &ses[0].next[0], error );
      result = 0;
    }
    if ( ( ( result/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    {
      if ( result == 4 )
      {
        result = 0;
      }
      url[0] = url[0];
      if ( result && result != 2 && result != 6 && result/*.1_1of4*/ != 14 )
      {
        if ( ( result & 63 ) == 1 )
        {
          result = 0;
        }
        if ( ( result & 63 ) == 7 )
        {
          unsigned char *new_url;
          if ( result )
          {
            result = url[0];
            if ( url[0] )
              mem_free( &result );
            return result;
          }
          else
          {
            result = 0;
          }
        }
      }
    }
    alert_ruby_error( &ses[0].next[0], "follow_url_hook must return a string or nil" );
    result = 0;
  }
  else
  {
    result = 0;
  }
}
enum evhook_status  script_hook_pre_format_html( va_list ap, void *data )
{
  int edx;
  struct session *ses;
  struct cache_entry *cached = &ap[4];
  struct fragment *fragment;
  unsigned char *url;
  int error;
  VALUE args[2];
  VALUE result;
  ses = &ap[0];
  return result;
  url[0] = cached->uri[0].string;
  result = (unsigned int)(cached->length << 32) | (unsigned int)(cached->length & 0xFFFFFFFF);
  if ( cached->length && fragment->data[0] )
  {
    return result;
    result = (unsigned long)(fragment->length & 0xFFFFFFFF);
    return result;
    result = ebp_48;
    rb_protect( &do_erb_protected_method_call, ebp_48, &error );
    if ( error )
    {
      erb_report_error( &ses[0].next[0], error );
      result = 0;
    }
    else
    {
      if ( ( result/*.1_1of4*/ & 1 ) & 255 )
      {
        alert_ruby_error( &ses[0].next[0], "pre_format_html_hook must return a string or nil" );
        result = 0;
      }
      else
      {
        if ( result == 4 )
        {
          result = 0;
        }
        if ( result && result != 2 && result != 6 && result/*.1_1of4*/ != 14 )
        {
          if ( ( result & 63 ) == 1 )
          {
            result = 0;
          }
          if ( ( result & 63 ) == 7 )
          {
            int len;
            add_fragment( &cached[0], (long long)0, &result, result );
            result = len >> 31;
            normalize_cache_entry( &cached[0], len );
            result = 0;
          }
        }
      }
    }
  }
  else
  {
    result = 0;
  }
}
enum evhook_status  script_hook_get_proxy( va_list ap, void *data )
{
  unsigned char **new_proxy_url;
  unsigned char *url;
  int error;
  VALUE args[1];
  VALUE result;
  url[0] = ap[4];
  new_proxy_url[0] = &ap[0];
  if ( result && new_proxy_url[0] )
  {
    return result;
    result = ebp_28;
    rb_protect( &do_erb_protected_method_call, ebp_28, &error );
    if ( error )
    {
      erb_report_error( 0, error );
      result = 0;
    }
    if ( ( ( result/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    {
      if ( result == 4 )
      {
        result = 0;
      }
      if ( result && result != 2 && result != 6 && result/*.1_1of4*/ != 14 )
      {
        if ( ( result & 63 ) == 1 )
        {
          result = 0;
        }
        if ( ( result & 63 ) == 7 )
        {
          unsigned char *proxy;
          if ( result )
          {
            result = new_proxy_url[0];
            if ( new_proxy_url[0] )
              mem_free( &result );
            return result;
          }
          else
          {
            result = 0;
          }
        }
      }
    }
    alert_ruby_error( 0, "proxy_hook must return a string or nil" );
    result = 0;
  }
  else
  {
    result = 0;
  }
}
enum evhook_status  script_hook_quit( va_list ap, void *data )
{
  VALUE args[1];
  int error;
  rb_protect( &do_erb_protected_method_call, ebp_28, "quit_hook" );
  if ( error )
  {
    erb_report_error( 0, error );
  }
  return EVENT_HOOK_STATUS_NEXT;
}
#if 0
#endif
