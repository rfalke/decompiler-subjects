#include "ssl.c.h"
gnutls_anon_client_credentials_t anon_cred;
gnutls_certificate_credentials_t xcred;
static int kx_priority[16] = { 1, 2, 3, 5, 4, 6 };
static int cipher_priority[16] = { 4, 2, 3, 5, 6 };
static struct option_info gnutls_options[3] = { { { 0, 0, { 0 }
, "cert_verify", 0, 0, 0, 1, { 0, 135396628, 135470484, 0, 0, 0 }
, "Verify the peer's SSL certificate.  If you enable this, set also \"Trusted CA file\".", "Verify certificates", 0, 0, 0 }
, "connection.ssl" }
, { { 0, 0, { 0 }
, "trusted_ca_file", 0, 3, 0, 1024, { "/etc/ssl/certs/ca-certificates.crt", 135396748, 135470535, 0, 0, 0 }
, "The location of a file containing certificates of trusted certification authorities in PEM format. ELinks then trusts certificates issued by these CAs.\n\nIf you change this option or the file, you must restart ELinks for the changes to take effect. This option affects GnuTLS but not OpenSSL.", "Trusted CA file", 0, 0, 0 }
, "connection.ssl" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
static struct module gnutls_module = { "GnuTLS", gnutls_options, 0, 0, 0, &init_gnutls, &done_gnutls };
static struct option_info ssl_options[2] = { { { 0, 0, { 0 }
, "ssl", 64, 9, 0, 0, { 0, 135470464, 135470460, 0, 0, 0 }
, "SSL options.", "SSL", 0, 0, 0 }
, "connection" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
static struct module *ssl_modules[2] = { &gnutls_module, 0 };
struct module ssl_module = { "SSL", ssl_options, 0, ssl_modules, 0, 0, 0 };
void init_gnutls( struct module *module )
{
  int ret = gnutls_global_init(  );
  unsigned char *ca_file;
  ca_file[0] = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  if ( ret < 0 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/ssl/ssl.c";
    errline = 129;
    elinks_internal( "GNUTLS init failed: %s" );
    if ( gnutls_anon_allocate_client_credentials( &anon_cred ) >= 0 )
    {
      if ( gnutls_certificate_allocate_credentials( &xcred ) < 0 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/ssl/ssl.c";
        errline = 138;
        elinks_internal( "GNUTLS X509 credentials alloc failed: %s" );
      }
      if ( ca_file[0] )
      {
        gnutls_certificate_set_x509_trust_file( &xcred, &ca_file[0], 1 );
        gnutls_certificate_set_verify_flags( &xcred, 2 );
        return;
      }
      else
      {
        return;
      }
    }
  }
  else
  {
    if ( gnutls_anon_allocate_client_credentials( &anon_cred ) >= 0 )
      continue;
  }
  errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/ssl/ssl.c";
  errline = 133;
  elinks_internal( "GNUTLS anon credentials alloc failed: %s" );
}
void done_gnutls( struct module *module )
{
  if ( xcred )
    gnutls_certificate_free_credentials( &xcred );
  if ( anon_cred )
    gnutls_anon_free_client_credentials( &anon_cred );
}
int init_ssl_connection( struct socket *socket )
{
  if ( mem_alloc( 4 ) )
  {
    if ( gnutls_init( (gnutls_session_t*)mem_alloc( 4 ), 2 ) >= 0 )
    {
      if ( gnutls_credentials_set( *(int*)(mem_alloc( 4 )), 2, &anon_cred ) < 0 )
        gnutls_deinit( &ebx );
      else
      {
        if ( gnutls_credentials_set( *(int*)(mem_alloc( 4 )), 1, &xcred ) < 0 || gnutls_priority_set_direct( *(int*)(mem_alloc( 4 )), "NORMAL:-CTYPE-OPENPGP", 0 ) )
        {
          gnutls_deinit( &ebx );
          mem_free( &ebx );
          return -100018;
        }
        gnutls_cipher_set_priority( *(int*)(mem_alloc( 4 )), cipher_priority );
        gnutls_kx_set_priority( *(int*)(mem_alloc( 4 )), kx_priority );
        socket->ssl = mem_alloc( 4 );
      }
    }
    mem_free( &ebx );
    return -100018;
  }
  return -100000;
}
void done_ssl_connection( struct socket *socket )
{
  gnutls_session_t *ssl;
  ssl[0] = &socket->ssl[0];
  if ( socket->ssl )
  {
    gnutls_deinit( ssl[0] );
    mem_free( (void*)ssl[0] );
    socket->ssl = 0;
  }
  return;
}
unsigned char *get_ssl_connection_cipher( struct socket *socket )
{
  int eax;
  struct string str;
  if ( init_string( &str ) )
  {
    add_format_to_string( &esi, ebp_44 );
    return str.source;
  }
}
#if 0
#endif
