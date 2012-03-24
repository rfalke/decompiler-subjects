#include "http_negotiate.c.h"
static struct list_head_elinks negotiate_list = { &negotiate_list, &negotiate_list };
struct negotiate *http_negotiate_get( struct uri *uri, int *isnew, int alloc )
{
  struct negotiate *neg;
  &neg[0] = &negotiate_list.next[0];
  if ( negotiate_list.next != negotiate_list.next )
  {
    do
    {
      if ( compare_uri( neg->uri, &uri[0], URI_HTTP_REFERRER_HOST ) )
        break;
      &neg[0] = &neg;
    }
    while ( neg->next != negotiate_list.next );
  }
  &neg[0] = 0;
  if ( alloc == 0 || mem_calloc( 1, 48 ) == 0 )
  {
    return &neg[0];
  }
  uri->object.refcount = uri->object.refcount;
  *(int*)(mem_calloc( 1, 48 ) + 12) = uri[0];
  if ( isnew[0] )
  {
    isnew[0] = 1;
  }
  return &neg[0];
}
void http_negotiate_cleanup( struct negotiate *neg, int full )
{
  OM_uint32 minor_status;
  if ( neg->context )
    gss_delete_sec_context( &minor_status, &neg->context, 0 );
  if ( neg->output_token.length )
    gss_release_buffer( &minor_status, &neg->output_token.length );
  if ( full )
  {
    if ( neg->server_name )
      gss_release_name( &minor_status, &neg->server_name );
    if ( neg->input_token.length )
    {
      mem_free( neg->input_token.value );
      neg->input_token.length = 0;
    }
    memset( neg[0].next, 0, 48 );
    return;
  }
  else
  {
    return;
  }
}
int http_negotiate_get_name( struct connection *conn, struct negotiate *neg )
{
  int eax;
  OM_uint32 major_status;
  OM_uint32 minor_status;
  gss_buffer_desc token;
  char name[2048];
  char *service;
  struct uri *uri;
  token.length = 0;
  token.value = 0;
  uri = conn->proxied_uri;
  service[0] = neg->type == 1 ? "HTTP" : "KHTTP";
  if ( ( neg->type == 1 ) + uri->bits_at_44/*.3_4of4*/ + 7 <= 2048 )
  {
    token.length = ( neg->type == 1 ) + uri->bits_at_44/*.3_4of4*/ + 6;
    __snprintf_chk( name, token.length, 1, 2048, "%s@%*s", &service[0], uri->bits_at_44/*.3_4of4*/, (char*)uri->host );
    token.value = name;
    major_status = gss_import_name( &minor_status, &token.length, GSS_C_NT_HOSTBASED_SERVICE, &neg->server_name ) & -65536;
    return 0;
  }
  return 0;
}
int http_negotiate_create_context( struct negotiate *neg )
{
  OM_uint32 major_status;
  OM_uint32 minor_status;
  neg->status = major_status;
  return !( major_status & -65536 ) && neg->output_token ? 0 : -1;
}
int http_negotiate_input( struct connection *conn, struct uri *uri, int type, unsigned char *data )
{
  int eax;
  int ecx;
  int edx;
  struct negotiate *neg;
  int ret, isnew = 0;
  neg = http_negotiate_get( uri, &isnew, 1 );
  if ( type == 1 || *(int*)(http_negotiate_get( uri, &isnew, 1 ) + 24) == 0 )
  {
    neg->type = type;
    if ( neg->context && neg->status == 0 )
    {
      http_negotiate_cleanup( &neg[0], 1 );
      ret = -1;
      return -1;
    }
    if ( neg->server_name || http_negotiate_get_name( conn, &neg[0] ) >= 0 )
    {
      if ( data[0] && data[0] && *(char*)(type != 1 ? data + 14 : data + 10) && *(char*)(type != 1 ? data + 14 : data + 10) != 13 && ( *(char*)(type != 1 ? data + 14 : data + 10) & 255 ) )
      {
        if ( *(char*)(type != 1 ? data + 14 : data + 10) == 10 )
          neg = &neg[0];
        else
        while ( ( ( *(char*)(ecx + ( ebx * 2 )) & 8 ) & 255 ) || ebx == '=' )
        {
        }
        if ( ( ebx == 10 || ebx == 13 ) && edx != edi )
        {
          neg->input_token.value = (void*)eax;
          if ( neg->input_token.value == 0 )
            goto B12;
        }
      }
      if ( ret == 0 && isnew )
      {
        neg->prev = &negotiate_list.next[0];
        neg = &negotiate_list.next[0];
        negotiate_list.next = (void*)neg[0].next;
        neg->prev = &neg[0];
        neg = &neg[0];
      }
      return -1;
    }
  }
B12:  ret = -1;
  return -1;
}
int http_negotiate_output( struct uri *uri, struct string *header )
{
  int eax;
  struct negotiate *neg;
  int len = 0;
  if ( http_negotiate_get( uri, 0, 0 ) )
  {
    if ( *(int*)(http_negotiate_get( uri, 0, 0 ) + 32) == 0 )
    {
      if ( http_negotiate_create_context( &neg[0] ) >= 0 )
        *(int*)(ebx + 32) = neg->output_token.length;
      else
      {
        http_negotiate_cleanup( &neg[0], 1 );
        return 0;
      }
    }
    if ( base64_encode_bin( (unsigned char*)neg->output_token.value, (int)neg->output_token.length, &len ) && len )
    {
      add_to_string( &header[0], "Authorization: " );
      add_to_string( &header[0], neg->type != 1 ? "GSS-Negotiate" : "Negotiate" );
      add_char_to_string( &header[0], 32 );
      add_to_string( &header[0], &esi );
      add_crlf_to_string( &header[0] );
      http_negotiate_cleanup( &neg[0], 0 );
      mem_free( &esi );
      return 0;
    }
  }
  return 0;
}
#if 0
#endif
