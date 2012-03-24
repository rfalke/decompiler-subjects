#include "codes.c.h"
static struct http_code http_code[41] = { { 100, "Continue" }
, { 101, "Switching Protocols" }
, { 200, "OK" }
, { 201, "Created" }
, { 202, "Accepted" }
, { 203, "Non-Authoritative Information" }
, { 204, "No Content" }
, { 205, "Reset Content" }
, { 206, "Partial Content" }
, { 300, "Multiple Choices" }
, { 301, "Moved Permanently" }
, { 302, "Found" }
, { 303, "See Other" }
, { 304, "Not Modified" }
, { 305, "Use Proxy" }
, { 306, "(Unused)" }
, { 307, "Temporary Redirect" }
, { 400, "Bad Request" }
, { 401, "Unauthorized" }
, { 402, "Payment Required" }
, { 403, "Forbidden" }
, { 404, "Not Found" }
, { 405, "Method Not Allowed" }
, { 406, "Not Acceptable" }
, { 407, "Proxy Authentication Required" }
, { 408, "Request Timeout" }
, { 409, "Conflict" }
, { 410, "Gone" }
, { 411, "Length Required" }
, { 412, "Precondition Failed" }
, { 413, "Request Entity Too Large" }
, { 414, "Request-URI Too Long" }
, { 415, "Unsupported Media Type" }
, { 416, "Requested Range Not Satisfiable" }
, { 417, "Expectation Failed" }
, { 500, "Internal Server Error" }
, { 501, "Not Implemented" }
, { 502, "Bad Gateway" }
, { 503, "Service Unavailable" }
, { 504, "Gateway Timeout" }
, { 505, "HTTP Version Not Supported" }
 };
int compare_http_codes( void *key, void *element )
{
  return key - ((int*)element)[0];
}
void show_http_error_document( struct session *ses, void *data )
{
  struct terminal *term = ses->tab->term;
  struct cache_entry *cached;
  struct cache_entry *cache = find_in_cache( &((int*)data)[1] );
  unsigned char *str;
  cached = find_in_cache( &((int*)data)[1] );
  if ( cached || get_cache_entry( &((int*)data)[1] ) )
  {
    if ( 0 != 72 )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        current_charset = get_terminal_codepage( term );
      }
      gettext( "HTTP error %03d" );
    }
    if ( init_string( ebp_32 ) == 0 )
    {
      if ( asprintfa( (char*)gettext( "HTTP error %03d" ) ) )
        mem_free( (void*)asprintfa( (char*)gettext( "HTTP error %03d" ) ) );
    }
    else
    {
      add_format_to_string( (struct string*)asprintfa( (char*)gettext( "HTTP error %03d" ) ), asprintfa( (char*)gettext( "HTTP error %03d" ) ) );
      if ( 0 != 32 )
      {
        if ( term && current_charset != get_terminal_codepage( term ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
          current_charset = get_terminal_codepage( term );
        }
        gettext( "  An error occurred on the server while fetching the document you\n  requested. However, the server did not send back any explanation of what\n  happened, so it is unknown what went wrong. Please contact the web\n  server administrator about this, if you believe that this error should\n  not occur since it is not a nice behaviour from the web server at all\n  and indicates that there is some much deeper problem with the web server\n  software.\n" );
      }
      add_format_to_string( ebp_32, gettext( "  An error occurred on the server while fetching the document you\n  requested. However, the server did not send back any explanation of what\n  happened, so it is unknown what went wrong. Please contact the web\n  server administrator about this, if you believe that this error should\n  not occur since it is not a nice behaviour from the web server at all\n  and indicates that there is some much deeper problem with the web server\n  software.\n" ) );
      add_format_to_string( "  &lt;/p&gt;\n  &lt;p&gt;\n  URI: &lt;a href=\"%s\"&gt;%s&lt;/a&gt;\n", *(int*)(((int*)data)[1]) );
      add_format_to_string( ebp_32, " &lt;/p&gt;\n &lt;hr /&gt;\n &lt;/body&gt;\n&lt;/html&gt;\n" );
      if ( asprintfa( (char*)gettext( "HTTP error %03d" ) ) )
        mem_free( (void*)asprintfa( (char*)gettext( "HTTP error %03d" ) ) );
      str[0] = ebp_32;
      if ( ebp_32 )
      {
        int gettext_codepage = get_terminal_codepage( term );
        if ( cached )
          delete_entry_content( &cache[0] );
        if ( cache->content_type )
          mem_free( (void*)cache->content_type );
        cache->content_type = stracpy( "text/html" );
        if ( cache->head )
          mem_free( (void*)cache->head );
        cache->head = straconcat( "\r\nContent-Type: text/html; charset=" );
        add_fragment( &cache[0], (long long)0, &str[0] );
        mem_free( &str[0] );
        draw_formatted( ses, 1 );
      }
    }
  }
  done_uri( &((int*)data)[1] );
  mem_free( &((int*)data)[0] );
  return;
}
void http_error_document( struct connection *conn, int code )
{
  if ( assert_failed == 0 )
  {
    if ( conn[0] && conn->uri )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/http/codes.c";
      errline = 202;
      elinks_internal( "assertion conn && conn-&gt;uri failed!" );
    }
  }
  if ( mem_calloc( 1, 8 ) )
  {
    *(int*)(mem_calloc( 1, 8 )) = code;
    conn->uri->object.object = conn->uri->object.refcount;
    *(int*)(mem_calloc( 1, 8 ) + 4) = conn->uri->string[0];
    code = mem_calloc( 1, 8 );
    conn = &show_http_error_document;
  }
  return;
}
#if 0
#endif
