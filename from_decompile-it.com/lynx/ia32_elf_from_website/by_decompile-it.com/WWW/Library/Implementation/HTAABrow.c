#include "HTAABrow.c.h"
static BOOLEAN free_HTAAGlobalsSet;
static char *HTAA_composeAuthResult;
static char *compose_auth_stringResult;
static HTList *server_table;
static char *secret_key;
static HTAASetup *current_setup;
static char *current_hostname;
static int current_portnumber;
static char *current_docname;
static char *HTAAForwardAuth;
static HTAASetup *proxy_setup;
static char *proxy_hostname;
static char *proxy_docname;
static int proxy_portnumber;
void HTAAForwardAuth_set( char *scheme_name, char *scheme_specifics )
{
  int len = 20 + 0;
  if ( HTAAForwardAuth )
  {
    free( HTAAForwardAuth );
    HTAAForwardAuth = 0;
  }
  HTAAForwardAuth = calloc( len, sizeof( char ) );
  if ( HTAAForwardAuth == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTAABrow.c", "HTAAForwardAuth_set" );
  memcpy( HTAAForwardAuth, "Authorization: ", 16 );
  if ( scheme_name )
  {
    strcat( HTAAForwardAuth, scheme_name );
    strcat( HTAAForwardAuth, " " );
    if ( scheme_specifics )
    {
      strcat( HTAAForwardAuth, scheme_specifics );
    }
  }
  return;
}
void HTAAForwardAuth_reset( void )
{
  if ( HTAAForwardAuth )
  {
    free( HTAAForwardAuth );
    HTAAForwardAuth = 0;
  }
  return;
}
HTAAServer *HTAAServer_new( char *hostname, int portnumber, BOOLEAN IsProxy )
{
  HTAAServer *server = calloc( 1, sizeof( HTAAServer ) );
  if ( server == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTAABrow.c", "HTAAServer_new" );
  *(int*)&server->hostname[0] = 0;
  *(int*)&server->portnumber = 80;
  server->IsProxy = IsProxy;
  server->setups = HTList_new( );
  server->realms = HTList_new( );
  if ( hostname )
    HTSACopy( &server->hostname, hostname );
  if ( server_table == 0 )
  {
    server_table = HTList_new( );
  }
  HTList_addObject( server_table, (void*)server );
  return server;
}
void HTAAServer_delete( HTAAServer *killme )
{
  int n, i;
  HTAASetup *setup;
  HTAARealm *realm;
  HTList *cur;
  if ( killme )
  {
    if ( killme->setups )
    {
      n = HTList_count( &killme->setups );
      i = n + -1;
      for ( ; i >= 0;  )
      {
        setup = (HTAASetup*)HTList_objectAt( &killme->setups, i );
        if ( setup )
        {
          HTAASetup_delete( setup );
          setup = 0;
        }
        i += -1;
      }
      HTList_delete( &killme->setups );
      *(int*)&killme->setups = 0;
    }
    cur = &killme->realms;
    while ( 1 )
    {
      if ( cur )
      {
        cur = &cur->next;
        realm = 0;
        if ( realm )
        {
          if ( realm->realmname[0] )
          {
            free( &realm->realmname[0] );
            *(int*)&realm->realmname[0] = 0;
          }
          if ( realm->username )
          {
            free( &realm->username );
            *(int*)&realm->username = 0;
          }
          if ( realm->password )
          {
            free( &realm->password );
            *(int*)&realm->password = 0;
          }
          if ( realm )
          {
            free( realm );
            realm = 0;
          }
        }
        else
        {
          HTList_delete( &killme->realms );
          *(int*)&killme->realms = 0;
          if ( killme->hostname[0] )
          {
            free( &killme->hostname[0] );
            *(int*)&killme->hostname[0] = 0;
          }
          HTList_removeObject( server_table, (void*)killme );
          if ( killme == 0 )
            break;
          free( killme );
          killme = 0;
          break;
        }
      }
      realm = 0;
    }
  }
  return;
}
HTAAServer *HTAAServer_lookup( char *hostname, int portnumber, BOOLEAN IsProxy )
{
  if ( hostname )
  {
    HTList *cur = server_table;
    HTAAServer *server;
    if ( portnumber <= 0 )
    {
      portnumber = 80;
      do
      {
        if ( cur )
        {
          cur = &cur->next;
          server = 0;
          if ( server == 0 )
          {
            return 0;
          }
        }
        server = 0;
      }
      while ( server->portnumber != portnumber || strcmp( &server->hostname[0], hostname ) || server->IsProxy != IsProxy );
      return server;
    }
  }
  return 0;
}
HTAASetup *HTAASetup_lookup( char *hostname, int portnumber, char *docname, BOOLEAN IsProxy )
{
  HTAAServer *server;
  HTAASetup *setup;
  if ( portnumber <= 0 )
    portnumber = 80;
  if ( hostname && docname && hostname[0] && docname[0] )
  {
    server = HTAAServer_lookup( hostname, portnumber, IsProxy );
    if ( server )
    {
      HTList *cur = &server->setups;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "%s %s (%s:%d:%s)\n", "HTAASetup_lookup: resolving setup for", "server", hostname, portnumber, docname );
      }
      while ( 1 )
      {
        if ( cur )
        {
          cur = &cur->next;
          setup = 0;
          if ( setup )
          {
            if ( HTAA_templateMatch( &setup->ctemplate, docname ) & 255 )
            {
              if ( WWW_TraceFlag == 0 )
              {
                return setup;
              }
              fprintf( TraceFP( ), "%s `%s' %s `%s'\n", "HTAASetup_lookup:", docname, "matched template", &setup->ctemplate );
              return setup;
            }
            else
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "%s `%s' %s `%s'\n", "HTAASetup_lookup:", docname, "did NOT match template", &setup->ctemplate );
              }
            }
          }
        }
        setup = 0;
      }
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "%s `%s' %s\n", "HTAASetup_lookup: No template matched", "(null)", "(so probably not protected)" );
  }
  return 0;
}
HTAASetup *HTAASetup_new( HTAAServer *server, char *ctemplate, HTList *valid_schemes, HTAssocList **scheme_specifics )
{
  HTAASetup *setup;
  if ( server == 0 || ctemplate == 0 || ctemplate[0] == 0 )
  {
    return 0;
  }
  setup = calloc( 1, sizeof( HTAASetup ) );
  if ( setup == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTAABrow.c", "HTAASetup_new" );
  setup->retry = 0;
  setup->server->hostname[0] = server;
  *(int*)&setup->ctemplate = 0;
  if ( ctemplate )
    HTSACopy( &setup->ctemplate, ctemplate );
  setup->valid_schemes = valid_schemes;
  setup->scheme_specifics = scheme_specifics;
  HTList_addObject( &server->setups, (void*)setup );
  return setup;
}
void HTAASetup_delete( HTAASetup *killme )
{
  int scheme;
  if ( killme )
  {
    if ( killme->ctemplate )
    {
      free( &killme->ctemplate );
      *(int*)&killme->ctemplate = 0;
    }
    if ( killme->valid_schemes )
    {
      HTList_delete( &killme->valid_schemes );
      *(int*)&killme->valid_schemes = 0;
    }
    scheme = 0;
    for ( ; scheme <= 5; scheme++ )
    {
      if ( killme->scheme_specifics[ scheme ] )
        HTAssocList_delete( &killme->scheme_specifics[ scheme ] );
      // scheme++;
    }
    if ( killme->scheme_specifics )
    {
      free( &killme->scheme_specifics );
      *(int*)&killme->scheme_specifics = 0;
    }
    if ( killme == 0 )
    {
      return;
    }
    free( killme );
    killme = 0;
  }
  return;
}
void HTAASetup_updateSpecifics( HTAASetup *setup, HTAssocList **specifics )
{
  int scheme;
  if ( setup )
  {
    if ( setup->scheme_specifics )
    {
      scheme = 0;
      for ( ; scheme <= 5; scheme++ )
      {
        if ( setup->scheme_specifics[ scheme ] )
          HTAssocList_delete( &setup->scheme_specifics[ scheme ] );
        // scheme++;
      }
      if ( setup->scheme_specifics )
      {
        free( &setup->scheme_specifics );
        *(int*)&setup->scheme_specifics = 0;
      }
    }
    setup->scheme_specifics = specifics;
  }
  return;
}
HTAARealm *HTAARealm_lookup( HTList *realm_table, char *realmname )
{
  if ( realm_table && realmname )
  {
    HTList *cur = realm_table;
    HTAARealm *realm;
    do
    {
      if ( cur )
      {
        cur = &cur->next;
        realm = 0;
        if ( realm == 0 )
        {
          return 0;
        }
      }
      realm = 0;
    }
    while ( strcmp( &realm->realmname[0], realmname ) );
    return realm;
  }
  return 0;
}
HTAARealm *HTAARealm_new( HTList *realm_table, char *realmname, char *username, char *password )
{
  HTAARealm *realm = HTAARealm_lookup( realm_table, realmname );
  if ( realm == 0 )
  {
    realm = calloc( 1, sizeof( HTAARealm ) );
    if ( realm == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTAABrow.c", "HTAARealm_new" );
    *(int*)&realm->realmname[0] = 0;
    *(int*)&realm->username = 0;
    *(int*)&realm->password = 0;
    HTSACopy( &realm->realmname, realmname );
    if ( realm_table )
      HTList_addObject( realm_table, (void*)realm );
  }
  if ( username )
    HTSACopy( &realm->username, username );
  if ( password )
  {
    HTSACopy( &realm->password, password );
  }
  return realm;
}
char *compose_auth_string( HTAAScheme scheme, HTAASetup *setup, BOOLEAN IsProxy )
{
  char *cleartext = 0;
  char *ciphertext = 0;
  int len;
  char *msg = 0;
  char *username = 0;
  char *password = 0;
  char *realmname = 0;
  char *theHost = 0;
  char *proxiedHost = 0;
  char *thePort = 0;
  HTAARealm *realm;
  char *i_net_addr = "0.0.0.0";
  char *timestamp = "42";
  if ( compose_auth_stringResult )
  {
    free( compose_auth_stringResult );
    compose_auth_stringResult = 0;
  }
  if ( ( scheme != HTAA_BASIC && scheme != HTAA_PUBKEY ) || setup == 0 || setup->scheme_specifics == 0 || setup->scheme_specifics[ scheme ] == 0 || setup->server->hostname[0] == 0 || setup->retry == 0 )
  {
    return 0;
  }
  realmname = HTAssocList_lookup( &setup->scheme_specifics[ scheme ], "realm" );
  if ( realmname == 0 )
  {
    return 0;
  }
  realm = HTAARealm_lookup( &setup->retry, realmname );
  if ( realm == 0 || realm->username == 0 || !realm->username[0] || realm->password == 0 || setup->retry )
  {
    if ( realm == 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "%s `%s' %s\n", "compose_auth_string: realm:", realmname, "not found -- creating" );
      }
      realm = HTAARealm_new( &setup->retry, realmname, 0, 0 );
    }
    if ( IsProxy == 0 && using_proxy && setup->ctemplate )
    {
      proxiedHost = HTParse( &setup->ctemplate, "", 8 );
      if ( proxiedHost && proxiedHost[0] )
        theHost = proxiedHost;
    }
    if ( theHost == 0 )
      theHost = (char*)setup->server;
    if ( setup->ctemplate > 0 && setup->ctemplate != 80 )
      HTSprintf0( &thePort, ":%d", setup->ctemplate );
    len = strlen( &realm->realmname[0] ) + strlen( "??" ) + 50;
    HTSprintf0( &msg, gettext( "Username for '%s' at %s '%s%s':" ), realm->realmname[0], "server", "??", "" );
    if ( proxiedHost )
    {
      free( proxiedHost );
      proxiedHost = 0;
    }
    if ( thePort )
    {
      free( thePort );
      thePort = 0;
    }
    username = &realm->username;
    password = 0;
    HTPromptUsernameAndPassword( msg, &username, &password, IsProxy );
    if ( msg )
    {
      free( msg );
      msg = 0;
    }
    if ( realm->username )
    {
      free( &realm->username );
      *(int*)&realm->username = 0;
    }
    if ( realm->password )
    {
      free( &realm->password );
      *(int*)&realm->password = 0;
    }
    realm->username = username;
    realm->password = password;
    if ( realm->username == 0 || realm->password == 0 )
    {
      return 0;
    }
    if ( realm->username[0] == 0 )
    {
      HTSACopy( &compose_auth_stringResult, "" );
      return compose_auth_stringResult;
    }
  }
  len = strlen( "" ) + strlen( "" ) + 3;
  if ( scheme == HTAA_PUBKEY )
  {
    len = len + strlen( "" ) + 30;
  }
  else
  if ( secret_key )
  {
    free( secret_key );
    secret_key = 0;
  }
  cleartext = calloc( len, sizeof( char ) );
  if ( cleartext == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTAABrow.c", "compose_auth_string" );
  if ( realm->username )
    strcpy( cleartext, &realm->username );
  else
    cleartext[0] = 0;
  strcat( cleartext, ":" );
  if ( realm->password )
    strcat( cleartext, &realm->password );
  if ( scheme == HTAA_PUBKEY )
  {
    strcat( cleartext, ":" );
    strcat( cleartext, i_net_addr );
    strcat( cleartext, ":" );
    strcat( cleartext, timestamp );
    strcat( cleartext, ":" );
    if ( secret_key )
      strcat( cleartext, secret_key );
    ciphertext = calloc( len * 2, sizeof( char ) );
    if ( ciphertext )
    {
      compose_auth_stringResult = calloc( len * 3, sizeof( char ) );
      if ( compose_auth_stringResult == 0 )
        goto B118;
      else
      {
        if ( cleartext )
        {
          free( cleartext );
          cleartext = 0;
        }
        if ( ciphertext == 0 )
        {
          return compose_auth_stringResult;
        }
        free( ciphertext );
        ciphertext = 0;
      }
    }
B118:;
    outofmem( "../../../WWW/Library/Implementation/HTAABrow.c", "compose_auth_string" );
  }
  else
  {
    compose_auth_stringResult = calloc( ( ( ( len + 2 ) / 3 ) << 2 ) + 1, sizeof( char ) );
    if ( compose_auth_stringResult == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTAABrow.c", "compose_auth_string" );
    HTUU_encode( (unsigned char*)cleartext, strlen( cleartext ), compose_auth_stringResult );
    if ( cleartext == 0 )
    {
      return compose_auth_stringResult;
    }
    free( cleartext );
    cleartext = 0;
  }
}
HTAAScheme HTAA_selectScheme( HTAASetup *setup )
{
  int scheme;
  if ( setup && setup->valid_schemes )
  {
    scheme = 2;
    for ( ; scheme <= 5;  )
    {
      void *object = &scheme;
      if ( HTList_indexOf( &setup->valid_schemes, object ) >= 0 )
      {
        return scheme;
      }
      scheme++;
    }
  }
  return 2;
}
void free_HTAAGlobals( void )
{
  HTAAServer *server;
  int n, i;
  if ( server_table )
  {
    n = HTList_count( server_table );
    i = n + -1;
    for ( ; i >= 0;  )
    {
      server = (HTAAServer*)HTList_objectAt( server_table, i );
      if ( server )
      {
        HTAAServer_delete( server );
        server = 0;
      }
      i += -1;
    }
    HTList_delete( server_table );
    server_table = 0;
  }
  HTAAForwardAuth_reset( );
  if ( HTAA_composeAuthResult )
  {
    free( HTAA_composeAuthResult );
    HTAA_composeAuthResult = 0;
  }
  if ( current_hostname )
  {
    free( current_hostname );
    current_hostname = 0;
  }
  if ( current_docname )
  {
    free( current_docname );
    current_docname = 0;
  }
  if ( proxy_hostname )
  {
    free( proxy_hostname );
    proxy_hostname = 0;
  }
  if ( proxy_docname )
  {
    free( proxy_docname );
    proxy_docname = 0;
  }
  if ( compose_auth_stringResult )
  {
    free( compose_auth_stringResult );
    compose_auth_stringResult = 0;
  }
  if ( secret_key )
  {
    free( secret_key );
    secret_key = 0;
  }
  return;
}
char *HTAA_composeAuth( char *hostname, int portnumber, char *docname, BOOLEAN IsProxy )
{
  char *auth_string;
  BOOLEAN retry;
  HTAAScheme scheme;
  int len;
  if ( free_HTAAGlobalsSet == 0 )
    free_HTAAGlobalsSet = 1;
  if ( HTAAForwardAuth )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTAA_composeAuth: %s\n", "Forwarding received authorization" );
    }
    HTSACopy( &HTAA_composeAuthResult, HTAAForwardAuth );
    HTAAForwardAuth_reset( );
    return HTAA_composeAuthResult;
  }
  else
  {
    if ( HTAA_composeAuthResult )
    {
      free( HTAA_composeAuthResult );
      HTAA_composeAuthResult = 0;
    }
    if ( IsProxy )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Composing Proxy Authorization for %s:%d/%s\n", hostname, portnumber, docname );
      }
      if ( proxy_portnumber != portnumber || proxy_hostname == 0 || proxy_docname == 0 || hostname == 0 || docname == 0 || strcmp( proxy_hostname, hostname ) || strcmp( proxy_docname, docname ) )
      {
        retry = 0;
        proxy_portnumber = portnumber;
        if ( hostname )
          HTSACopy( &proxy_hostname, hostname );
        else
        if ( proxy_hostname )
        {
          free( proxy_hostname );
          proxy_hostname = 0;
        }
        if ( docname )
          HTSACopy( &proxy_docname, docname );
        else
        {
          if ( proxy_docname )
          {
            free( proxy_docname );
            proxy_docname = 0;
          }
        }
      }
      else
        retry = 1;
      if ( proxy_setup == 0 || retry == 0 )
      {
        proxy_setup = HTAASetup_lookup( hostname, portnumber, docname, IsProxy );
      }
      if ( proxy_setup == 0 )
      {
        return 0;
      }
      scheme = HTAA_selectScheme( proxy_setup );
      if ( scheme + -2 <= 1 )
      {
        auth_string = compose_auth_string( scheme, proxy_setup, IsProxy );
      }
      else
      {
        char *msg = 0;
        HTSprintf0( &msg, "%s `%s'", gettext( "This client doesn't know how to compose proxy authorization information for scheme" ), HTAAScheme_name( scheme ) );
        HTAlert( msg );
        if ( msg )
        {
          free( msg );
          msg = 0;
        }
        auth_string = 0;
      }
      proxy_setup->retry = 0;
      if ( auth_string == 0 )
      {
        return 0;
      }
      if ( auth_string[0] == 0 )
      {
        HTSACopy( &HTAA_composeAuthResult, "" );
        return HTAA_composeAuthResult;
      }
      len = strlen( auth_string ) + strlen( HTAAScheme_name( scheme ) ) + 26;
      HTAA_composeAuthResult = calloc( len, sizeof( char ) );
      if ( HTAA_composeAuthResult == 0 )
        outofmem( "../../../WWW/Library/Implementation/HTAABrow.c", "HTAA_composeAuth" );
      memcpy( HTAA_composeAuthResult, "Proxy-Authorization: ", 22 );
    }
    else
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Composing Authorization for %s:%d/%s\n", hostname, portnumber, docname );
      }
      if ( portnumber != current_portnumber || current_hostname == 0 || current_docname == 0 || hostname == 0 || docname == 0 || strcmp( current_hostname, hostname ) || strcmp( current_docname, docname ) )
      {
        retry = 0;
        current_portnumber = portnumber;
        if ( hostname )
          HTSACopy( &current_hostname, hostname );
        else
        if ( current_hostname )
        {
          free( current_hostname );
          current_hostname = 0;
        }
        if ( docname )
          HTSACopy( &current_docname, docname );
        else
        {
          if ( current_docname )
          {
            free( current_docname );
            current_docname = 0;
          }
        }
      }
      else
        retry = 1;
      if ( current_setup == 0 || retry == 0 )
      {
        current_setup = HTAASetup_lookup( hostname, portnumber, docname, IsProxy );
      }
      if ( current_setup == 0 )
      {
        return 0;
      }
      scheme = HTAA_selectScheme( current_setup );
      if ( scheme + -2 <= 1 )
      {
        auth_string = compose_auth_string( scheme, current_setup, IsProxy );
      }
      else
      {
        char *msg = 0;
        HTSprintf0( &msg, "%s `%s'", gettext( "This client doesn't know how to compose authorization information for scheme" ), HTAAScheme_name( scheme ) );
        HTAlert( msg );
        if ( msg )
        {
          free( msg );
          msg = 0;
        }
        auth_string = 0;
      }
      current_setup->retry = 0;
      if ( auth_string == 0 )
      {
        return 0;
      }
      if ( auth_string[0] == 0 )
      {
        HTSACopy( &HTAA_composeAuthResult, "" );
        return HTAA_composeAuthResult;
      }
      len = strlen( auth_string ) + strlen( HTAAScheme_name( scheme ) ) + 20;
      HTAA_composeAuthResult = calloc( len, sizeof( char ) );
      if ( HTAA_composeAuthResult == 0 )
        outofmem( "../../../WWW/Library/Implementation/HTAABrow.c", "HTAA_composeAuth" );
      memcpy( HTAA_composeAuthResult, "Authorization: ", 16 );
    }
    strcat( HTAA_composeAuthResult, HTAAScheme_name( scheme ) );
    strcat( HTAA_composeAuthResult, " " );
    strcat( HTAA_composeAuthResult, auth_string );
    return HTAA_composeAuthResult;
  }
}
BOOLEAN HTAA_shouldRetryWithAuth( char *start_of_headers, int length, int soc, BOOLEAN IsProxy )
{
  HTAAScheme scheme;
  char *line = 0;
  int num_schemes = 0;
  HTList *valid_schemes = HTList_new( );
  HTAssocList **scheme_specifics = 0;
  char *ctemplate = 0;
  char *temp = 0;
  if ( free_HTAAGlobalsSet == 0 )
    free_HTAAGlobalsSet = 1;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Server reply header lines:\n" );
  }
  HTAA_setupReader( start_of_headers, length, soc );
  while ( line == 0 || line[0] == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "%s\n", line );
    }
    if ( strchr( line, ':' ) )
    {
      char *p = line;
      char *fieldname = HTNextField( &p );
      char *arg1 = HTNextField( &p );
      char *args = p;
      if ( ( IsProxy && strcasecomp( fieldname, "Proxy-Authenticate:" ) == 0 ) || ( IsProxy == 0 && strcasecomp( fieldname, "WWW-Authenticate:" ) == 0 ) )
      {
        if ( arg1 == 0 || arg1[0] == 0 || args == 0 || args[0] == 0 )
        {
          HTSprintf0( &temp, gettext( "Invalid header '%s%s%s%s%s'" ), line, "", "", "", "" );
          HTAlert( temp );
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
        }
        else
        {
          scheme = HTAAScheme_enum( arg1 );
          if ( scheme )
          {
            HTList_addObject( valid_schemes, &scheme );
            if ( scheme_specifics == 0 )
            {
              int i;
              scheme_specifics = calloc( 6, sizeof( HTAssocList* ) );
              if ( scheme_specifics == 0 )
                outofmem( "../../../WWW/Library/Implementation/HTAABrow.c", "HTAA_shouldRetryWithAuth" );
              i = 0;
              for ( ; i <= 5; i++ )
              {
                scheme_specifics[ i ] = 0;
                // i++;
              }
            }
            scheme_specifics[ scheme ] = (HTAssocList*)HTAA_parseArgList( args );
            num_schemes++;
          }
          else
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Unknown scheme `%s' %s\n", "(null)", "in WWW-Authenticate: field" );
          }
        }
      }
      else
      {
        if ( IsProxy == 0 && strcasecomp( fieldname, "WWW-Protection-Template:" ) == 0 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Protection template set to `%s'\n", arg1 );
          }
          HTSACopy( &ctemplate, arg1 );
        }
      }
    }
    else
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Invalid header line `%s' ignored\n", line );
    }
    if ( line )
    {
      free( line );
      line = 0;
    }
  }
  if ( line )
  {
    free( line );
    line = 0;
  }
  if ( IsProxy )
  {
    if ( num_schemes == 0 )
    {
      proxy_setup = 0;
    }
    if ( proxy_setup && proxy_setup->server->hostname[0] )
    {
      HTAASetup_updateSpecifics( proxy_setup, scheme_specifics );
      if ( ( HTConfirm( gettext( "Authorization failed.  Retry?" ) ) & 255 ) == 0 )
      {
        proxy_setup = 0;
      }
      proxy_setup->retry = 1;
    }
    else
    {
      HTAAServer *server = HTAAServer_lookup( proxy_hostname, proxy_portnumber, IsProxy );
      if ( server == 0 )
      {
        server = HTAAServer_new( proxy_hostname, proxy_portnumber, IsProxy );
      }
      if ( ctemplate == 0 )
        HTSACopy( &ctemplate, "*" );
      proxy_setup = HTAASetup_new( server, ctemplate, valid_schemes, scheme_specifics );
      if ( ctemplate )
      {
        free( ctemplate );
        ctemplate = 0;
      }
      HTAlert( gettext( "Proxy authorization required -- retrying" ) );
    }
  }
  else
  if ( num_schemes == 0 )
  {
    current_setup = 0;
  }
  if ( current_setup && current_setup->server->hostname[0] )
  {
    HTAASetup_updateSpecifics( current_setup, scheme_specifics );
    if ( ( HTConfirm( gettext( "Authorization failed.  Retry?" ) ) & 255 ) == 0 )
    {
      current_setup = 0;
    }
    current_setup->retry = 1;
  }
  else
  {
    HTAAServer *server = HTAAServer_lookup( current_hostname, current_portnumber, IsProxy );
    if ( server == 0 )
    {
      server = HTAAServer_new( current_hostname, current_portnumber, IsProxy );
    }
    if ( ctemplate == 0 )
    {
      ctemplate = HTAA_makeProtectionTemplate( current_docname );
    }
    current_setup = HTAASetup_new( server, ctemplate, valid_schemes, scheme_specifics );
    if ( ctemplate )
    {
      free( ctemplate );
      ctemplate = 0;
    }
    HTAlert( gettext( "Access without authorization denied -- retrying" ) );
  }
  return 1;
}
void HTClearHTTPAuthInfo( void )
{
  free_HTAAGlobals( );
  free_HTAAGlobalsSet = 0;
  return;
}
#if 0
#endif
