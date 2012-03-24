#include "state.c.h"
static struct s_msg_dsc msg_dsc[45] = { { 0, "Waiting in queue" }
, { 1, "Looking up host" }
, { 2, "Making connection" }
, { 3, "SSL negotiation" }
, { 4, "Request sent" }
, { 5, "Logging in" }
, { 6, "Getting headers" }
, { 7, "Server is processing request" }
, { 8, "Transferring" }
, { -100013, "Waiting for redirect confirmation" }
, { -100000, "OK" }
, { -100001, "Interrupted" }
, { -100002, "Socket exception" }
, { -100003, "Internal error" }
, { -100004, "Out of memory" }
, { -100005, "Host not found" }
, { -100006, "Error writing to socket" }
, { -100007, "Error reading from socket" }
, { -100008, "Data modified" }
, { -100009, "Bad URL syntax" }
, { -100010, "Receive timeout" }
, { -100011, "Request must be restarted" }
, { -100012, "Can't get socket state" }
, { -100014, "Only local connections are permitted" }
, { -100019, "No host in the specified IP family was found" }
, { -100017, "Error while decoding file. This might be caused\nby the encoded file being corrupt." }
, { -100015, "This URL contains a protocol not yet known by ELinks.\nYou can configure an external handler for it through\nthe options system." }
, { -100016, "This URL contains a protocol that is not natively known\nby ELinks which means that ELinks relies on external\nprograms for handling it. Downloading URLs using external\nprograms is not supported." }
, { -100100, "Bad HTTP response" }
, { -100101, "No content" }
, { -100200, "Unknown file type" }
, { -100201, "Error opening file" }
, { -100202, "CGI script not in CGI path" }
, { -100203, "Local file access is not allowed in anonymous mode" }
, { -100300, "Bad FTP response" }
, { -100301, "FTP service unavailable" }
, { -100302, "Bad FTP login" }
, { -100303, "FTP PORT command failed" }
, { -100304, "File not found" }
, { -100305, "FTP file error" }
, { -100018, "SSL error" }
, { -100600, "JavaScript support is not enabled" }
, { -100700, "Configuration of the proxy server failed.\nThis might be caused by an incorrect proxy\nsetting specified by an environment variable\nor returned by a scripting proxy hook.\n\nThe correct syntax for proxy settings are\na host name optionally followed by a colon\nand a port number. Example: 'localhost:8080'." }
, { -100900, "FSP server not found" }
, { 0, 0 }
 };
static struct list_head_elinks strerror_buf = { &strerror_buf, &strerror_buf };
unsigned char *get_state_message( struct connection_state state, struct terminal *term )
{
  int edx;
  unsigned char *e;
  struct strerror_val *s;
  unsigned char *unknown_error;
  unknown_error[0] = "Unknown error";
  if ( unknown_error[0] )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
      *ebp_36 = term[0].next;
    }
    unknown_error[0] = gettext( "Unknown error" );
  }
  if ( state.basic != -1 )
  {
    int i;
    unknown_error[0] = "Waiting in queue";
    if ( "Waiting in queue" )
    {
      i = 0;
      if ( state.basic )
      {
        do
        {
          i++;
          unknown_error[0] = msg_dsc[ i + 1 ].msg;
          if ( msg_dsc[ i + 1 ].msg == 0 )
            goto B9;
        }
        while ( msg_dsc[ i ].n != state.basic );
      }
      if ( unknown_error[0] )
      {
        if ( edx && current_charset != get_terminal_codepage( &term[0] ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
          current_charset = get_terminal_codepage( &term[0] );
        }
        state.basic = unknown_error[0];
      }
      else
      {
        return &unknown_error[0];
      }
    }
  }
  else
  {
    e = (unsigned char*)strerror( state.syserr );
    if ( e && e )
    {
      s = &strerror_buf.next[0];
      if ( strerror_buf.next != strerror_buf.next )
      {
        s = &s[0];
        do
        {
          unknown_error[0] = s->msg[0];
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/state.c";
          errline = 176;
          if ( eax == 0 )
            break;
          s = &s;
        }
        while ( s->next == strerror_buf.next );
      }
      if ( eax )
      {
        memcpy( eax + 8, e, ebp_32 + 1 );
        return (unsigned char*)s[0].next;
        return (unsigned char*)s->next;
        s = &ebx;
        unknown_error[4] = ebx;
        unknown_error[0] = edi;
      }
    }
  }
B9:  unknown_error[0] = unknown_error[0];
}
void done_state_message( void )
{
{
  struct xlist_head *head = &strerror_buf.next[0], *next;
  if ( strerror_buf.next != strerror_buf.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != strerror_buf.next );
  }
  head = &strerror_buf.prev[0];
  if ( strerror_buf.prev != head[0].next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &strerror_buf.next[0];
  if ( head[0].next != strerror_buf.next )
  {
    next = &next[0];
    do
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
    }
    while ( next[0].next == head[0].next );
  }
  return;
}
}
#if 0
#endif
