#include "protocol.c.h"
static struct protocol_backend protocol_backends[21] = { { "about", 0, &about_protocol_handler, 20 }
, { "bittorrent", 0, 0, 20 }
, { "bittorrent-peer", 0, 0, 19 }
, { "data", 0, &data_protocol_handler, 20 }
, { "file", 0, &file_protocol_handler, 1 }
, { "finger", 79, &finger_protocol_handler, 19 }
, { "fsp", 21, 0, 19 }
, { "ftp", 21, &ftp_protocol_handler, 3 }
, { "gopher", 70, 0, 19 }
, { "http", 80, &http_protocol_handler, 19 }
, { "https", 443, &http_protocol_handler, 27 }
, { "javascript", 0, 0, 20 }
, { "news", 0, 0, 20 }
, { "nntp", 119, 0, 3 }
, { "nntps", 563, 0, 11 }
, { "proxy", 3128, &proxy_protocol_handler, 19 }
, { "smb", 139, 0, 19 }
, { "snews", 0, 0, 20 }
, { 0, 0, 0, 20 }
, { "user", 0, 0, 16 }
, { "custom", 0, 0, 20 }
 };
static struct option_info protocol_options[3] = { { { 0, 0, { 0 }
, "protocol", 64, 9, 0, 0, { 0, 135471151, 135473573, 0, 0, 0 }
, "Protocol specific options.", "Protocols", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "no_proxy", 0, 3, 0, 1024, { "", 135399572, 135471178, 0, 0, 0 }
, "Comma separated list of domains for which the proxy (HTTP/FTP) should be disabled. Optionally, a port can be specified for some domains as well. If it's blank, NO_PROXY environment variable is checked as well.", "No-proxy domains", 0, 0, 0 }
, "protocol" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
static struct module *protocol_submodules[9] = { &auth_module, &file_protocol_module, &cgi_protocol_module, &finger_protocol_module, &ftp_protocol_module, &http_protocol_module, &uri_rewrite_module, &user_protocol_module, 0 };
struct module protocol_module = { "Protocol", protocol_options, 0, protocol_submodules, 0, 0, 0 };
enum protocol  get_protocol( unsigned char *name, int namelen )
{
  int edx;
  int start, end;
  enum protocol  protocol;
  if ( assert_failed == 0 )
    assert_failed = 0;
  protocol = PROTOCOL_HTTP;
  end = 17;
  start = 0;
{
  while ( compare == 0 && namelen == strlen( (char*)protocol_backends[ protocol ].name ) )
  {
    if ( esi <= namelen )
      end = protocol - 1;
    else
      start = protocol + 1 + 1;
    if ( end < start )
    {
      protocol = ( 0 - ( ( get_user_program( 0, name, namelen ) < 1 ) & 1 ) ) + 19;
      break;
    }
    protocol = ( start + end ) / 2;
  }
  return protocol;
}
}
int get_protocol_port( enum protocol  protocol )
{
  int eax;
  if ( assert_failed == 0 )
  {
    assert_failed = protocol > 20;
    if ( protocol > 20 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/protocol.c";
      errline = 154;
      elinks_internal( "assertion VALID_PROTOCOL(protocol) failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    assert_failed = protocol_backends[ protocol << 4 ].port > 65535;
    if ( protocol_backends[ protocol << 4 ].port > 65535 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/protocol.c";
      errline = 157;
      elinks_internal( "assertion uri_port_is_valid(protocol_backends[protocol].port) failed!" );
      if ( assert_failed )
        goto B2;
    }
    return ebp_12;
  }
B2:  assert_failed = 0;
  return 0;
}
int get_protocol_need_slashes( enum protocol  protocol )
{
  if ( assert_failed == 0 )
  {
    assert_failed = protocol > 20;
    if ( protocol > 20 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/protocol.c";
      errline = 166;
      elinks_internal( "assertion VALID_PROTOCOL(protocol) failed!" );
      if ( assert_failed )
      {
      }
    }
    return (int)protocol_backends[ protocol ].bits_at_12/*.1_1of4*/ & 1;
  }
  assert_failed = 0;
  return 0;
}
int get_protocol_need_slash_after_host( enum protocol  protocol )
{
  if ( assert_failed == 0 )
  {
    assert_failed = protocol > 20;
    if ( protocol > 20 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/protocol.c";
      errline = 174;
      elinks_internal( "assertion VALID_PROTOCOL(protocol) failed!" );
      if ( assert_failed )
      {
      }
    }
    return ( (int)protocol_backends[ protocol ].bits_at_12/*.1_1of4*/ >> 1 ) & 1;
  }
  assert_failed = 0;
  return 0;
}
int get_protocol_keep_double_slashes( enum protocol  protocol )
{
  if ( assert_failed == 0 )
  {
    assert_failed = protocol > 20;
    if ( protocol > 20 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/protocol.c";
      errline = 182;
      elinks_internal( "assertion VALID_PROTOCOL(protocol) failed!" );
      if ( assert_failed )
      {
      }
    }
    return ( (int)protocol_backends[ protocol ].bits_at_12/*.1_1of4*/ >> 4 ) & 1;
  }
  assert_failed = 0;
  return 0;
}
int get_protocol_free_syntax( enum protocol  protocol )
{
  if ( assert_failed == 0 )
  {
    assert_failed = protocol > 20;
    if ( protocol > 20 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/protocol.c";
      errline = 190;
      elinks_internal( "assertion VALID_PROTOCOL(protocol) failed!" );
      if ( assert_failed )
      {
      }
    }
    return ( (int)protocol_backends[ protocol ].bits_at_12/*.1_1of4*/ >> 2 ) & 1;
  }
  assert_failed = 0;
  return 0;
}
int get_protocol_need_ssl( enum protocol  protocol )
{
  if ( assert_failed == 0 )
  {
    assert_failed = protocol > 20;
    if ( protocol > 20 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/protocol.c";
      errline = 198;
      elinks_internal( "assertion VALID_PROTOCOL(protocol) failed!" );
      if ( assert_failed )
      {
      }
    }
    return ( (int)protocol_backends[ protocol ].bits_at_12/*.1_1of4*/ >> 3 ) & 1;
  }
  assert_failed = 0;
  return 0;
}
protocol_handler_T *get_protocol_handler( enum protocol  protocol )
{
  int eax;
  if ( assert_failed == 0 )
  {
    assert_failed = protocol > 20;
    if ( protocol > 20 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/protocol.c";
      errline = 206;
      elinks_internal( "assertion VALID_PROTOCOL(protocol) failed!" );
      if ( assert_failed == 0 )
      {
        return protocol_backends[ protocol << 4 ].handler;
      }
    }
    else
    {
    }
  }
  assert_failed = 0;
}
void generic_external_protocol_handler( struct session *ses, struct uri *uri )
{
  if ( uri->protocol == 11 )
  {
    if ( assert_failed == 0 )
      assert_failed = 0;
      print_error_dialog( &ses[0], (long long)( eax ), &uri[0], PRI_CANCEL );
      return;
  }
  else
  if ( uri->protocol == 18 )
  {
    if ( assert_failed == 0 )
      assert_failed = 0;
  }
  else
  {
    msg_box( ses->tab->term, 0, MSGBOX_FREE_TEXT, "Error", ALIGN_CENTER, msg_text( ses->tab->term, "This version of ELinks does not contain %s protocol support" ), 1, "~OK" );
    return;
  }
  assert_failed = 0;
}
protocol_external_handler_T *get_protocol_external_handler( struct terminal *term, struct uri *uri )
{
  unsigned char *prog;
  if ( assert_failed == 0 )
  {
    if ( !uri[0].string || uri->protocol > 20 )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/protocol.c";
      errline = 258;
      elinks_internal( "assertion uri && VALID_PROTOCOL(uri-&gt;protocol) failed!" );
      if ( assert_failed )
        goto B2;
    }
    else
      assert_failed = 0;
    if ( get_user_program( term, uri->string, (int)uri->bits_at_40/*.1_2of4*/ ) == 0 || prog[0] == 0 )
    {
      return protocol_backends[ uri->protocol ].handler == 0 ? 0 : &generic_external_protocol_handler;
    }
    return 0;
  }
B2:  assert_failed = 0;
  return 0;
}
#if 0
#endif
