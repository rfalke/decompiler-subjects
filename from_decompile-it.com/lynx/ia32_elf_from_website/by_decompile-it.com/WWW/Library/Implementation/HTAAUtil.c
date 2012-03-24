#include "HTAAUtil.c.h"
static size_t buffer_length;
static char *buffer;
static char *start_pointer;
static char *end_pointer;
static int in_soc;
HTAAScheme HTAAScheme_enum( char *name )
{
  char *upcased = 0;
  if ( name == 0 )
  {
    return 0;
  }
  HTSACopy( &upcased, name );
  LYUpperCase( upcased );
  if ( strncmp( upcased, "NONE", 4 ) == 0 )
  {
    if ( upcased )
    {
      free( upcased );
      upcased = 0;
    }
    return 1;
  }
  else
  {
    if ( strncmp( upcased, "BASIC", 5 ) == 0 )
    {
      if ( upcased )
      {
        free( upcased );
        upcased = 0;
      }
      return 2;
    }
    else
    {
      if ( strncmp( upcased, "PUBKEY", 6 ) == 0 )
      {
        if ( upcased )
        {
          free( upcased );
          upcased = 0;
        }
        return 3;
      }
      else
      {
        if ( strncmp( upcased, "KERBEROSV4", 10 ) == 0 )
        {
          if ( upcased )
          {
            free( upcased );
            upcased = 0;
          }
          return 4;
        }
        else
        {
          if ( strncmp( upcased, "KERBEROSV5", 10 ) == 0 )
          {
            if ( upcased )
            {
              free( upcased );
              upcased = 0;
            }
            return 5;
          }
          else
          {
            if ( upcased )
            {
              free( upcased );
              upcased = 0;
            }
            return 0;
          }
        }
      }
    }
  }
}
char *HTAAScheme_name( HTAAScheme scheme )
{
  switch ( scheme )
  {
  case HTAA_NONE:
    return "None";
    break;
  case HTAA_BASIC:
    return "Basic";
    break;
  case HTAA_PUBKEY:
    return "Pubkey";
    break;
  case HTAA_KERBEROS_V4:
    return "KerberosV4";
    break;
  case HTAA_KERBEROS_V5:
    return "KerberosV5";
    break;
  case HTAA_UNKNOWN:
    return "UNKNOWN";
    break;
  default:
    return "THIS-IS-A-BUG";
    break;
  }
}
HTAAMethod HTAAMethod_enum( char *name )
{
  if ( name == 0 )
  {
    return 0;
  }
  if ( strcasecomp( name, "GET" ) == 0 )
  {
    return 1;
  }
  if ( strcasecomp( name, "PUT" ) == 0 )
  {
    return 2;
  }
  return 0;
}
char *HTAAMethod_name( HTAAMethod method )
{
  switch ( method )
  {
  case METHOD_GET:
    return "GET";
    break;
  case METHOD_PUT:
    return "PUT";
    break;
  case METHOD_UNKNOWN:
    return "UNKNOWN";
    break;
  default:
    return "THIS-IS-A-BUG";
    break;
  }
}
BOOLEAN HTAAMethod_inList( HTAAMethod method, HTList *list )
{
  HTList *cur = list;
  char *item;
  do
  {
    if ( cur )
    {
      cur = &cur->next;
      item = 0;
      if ( item == 0 )
      {
        break;
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), " %s", item );
      }
    }
    item = 0;
  }
  while ( method != HTAAMethod_enum( item ) );
  return 0;
}
BOOLEAN HTAA_templateMatch( char *ctemplate, char *filename )
{
  char *p = ctemplate;
  char *q = filename;
  int m;
  for ( ; p[0] && q[0] && q[0] == p[0]; q++ )
  {
    p++;
    // q++;
  }
  if ( p[0] == 0 && q[0] == 0 )
  {
  }
  else
  if ( p[0] == '*' )
  {
    p++;
    m = strlen( q ) - strlen( p );
    if ( m < 0 )
    {
    }
    else
    {
      if ( strcmp( p, &q[ m ] ) )
      {
      }
      else
      {
      }
    }
  }
  else
  {
  }
  return 1;
}
BOOLEAN HTAA_templateCaseMatch( char *ctemplate, char *filename )
{
  char *p = ctemplate;
  char *q = filename;
  int m;
  for ( ; p[0] && q[0]; q++ )
  {
    if ( p[0] == q[0] )
    {
      p++;
      // q++;
    }
  }
  if ( p[0] == 0 && q[0] == 0 )
  {
  }
  else
  if ( p[0] == '*' )
  {
    p++;
    m = strlen( q ) - strlen( p );
    if ( m < 0 )
    {
    }
    else
    {
      if ( strcasecomp( p, &q[ m ] ) )
      {
      }
      else
      {
      }
    }
  }
  else
  {
  }
  return 1;
}
char *HTAA_makeProtectionTemplate( char *docname )
{
  char *ctemplate = 0;
  char *slash = 0;
  if ( docname )
  {
    HTSACopy( &ctemplate, docname );
    slash = strrchr( ctemplate, '/' );
    if ( slash )
      slash++;
    else
      slash = ctemplate;
    slash[0] = 0;
    HTSACat( &ctemplate, "*" );
  }
  else
    HTSACopy( &ctemplate, "*" );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "make_template: made template `%s' for file `%s'\n", ctemplate, docname );
  }
  return ctemplate;
}
HTList *HTAA_parseArgList( char *str )
{
  HTAssocList *assoc_list = HTAssocList_new( );
  char *cur = 0;
  char *name = 0;
  int n = 0;
  if ( str == 0 )
  {
    return (HTList*)assoc_list;
  }
  for ( ; str[0];  )
  {
    for ( ; str[0] == ' ' || str[0] == '\t'; str++ )
    {
      // str++;
    }
    cur = str;
    n++;
    for ( ; cur[0] && cur[0] != '=' && cur[0] != ','; cur++ )
    {
      // cur++;
    }
  {
    char *c = &cur[ -1 ];
    for ( ; c[0] == ' ' || c[0] == '\t';  )
    {
      c[0] = 0;
      c = &c[ -1 ];
    }
    if ( cur[0] == '=' )
    {
      cur[0] = 0;
      cur++;
      HTSACopy( &name, str );
      for ( ; cur[0] == ' ' || cur[0] == '\t'; cur++ )
      {
        // cur++;
      }
      str = cur;
      if ( str[0] == '"' )
      {
        str++;
        cur = str;
        for ( ; cur[0] && cur[0] != '"'; cur++ )
        {
          // cur++;
        }
        if ( cur[0] == '"' )
        {
          cur[0] = 0;
          cur++;
          while ( cur[0] == ' ' || cur[0] == '\t' )
          {
            cur++;
          }
          if ( cur[0] == ',' )
            cur++;
        }
      }
      else
      for ( ; cur[0] && cur[0] != ','; cur++ )
      {
        // cur++;
      }
    {
      char *c = &cur[ -1 ];
      for ( ; c[0] == ' ' || c[0] == '\t';  )
      {
        c[0] = 0;
        c = &c[ -1 ];
      }
      if ( cur[0] == ',' )
      {
        cur[0] = 0;
        cur++;
      }
    }
    }
    else
    {
      if ( cur[0] == ',' )
      {
        cur[0] = 0;
        cur++;
      }
      HTSprintf0( &name, "%d", n );
    }
    HTAssocList_add( assoc_list, name, str );
    str = cur;
  }
  }
  if ( name )
  {
    free( name );
    name = 0;
  }
  return (HTList*)assoc_list;
}
void HTAA_setupReader( char *start_of_headers, int length, int soc )
{
  if ( start_of_headers == 0 )
    length = 0;
  if ( buffer == 0 )
  {
    buffer_length = length;
    if ( buffer_length <= 1023 )
      buffer_length = 1024;
    buffer = malloc( ( buffer_length + 1 ) * sizeof( char ) );
  }
  else
  {
    if ( (int)buffer_length < length )
    {
      buffer_length = length;
      buffer = realloc( buffer, ( buffer_length + 1 ) * sizeof( char ) );
    }
  }
  if ( buffer == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTAAUtil.c", "HTAA_setupReader" );
  start_pointer = buffer;
  if ( start_of_headers )
  {
    strncpy( buffer, start_of_headers, length );
    buffer[ length ] = 0;
    end_pointer = &buffer[ length ];
  }
  else
  {
    start_pointer[0] = 0;
    end_pointer = start_pointer;
  }
  in_soc = soc;
  return;
}
char *HTAA_getUnfoldedLine( void )
{
  char *line = 0;
  char *cur;
  int count;
  BOOLEAN peek_for_folding = 0;
  if ( in_soc < 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "%s %s\n", "HTAA_getUnfoldedLine: buffer not initialized", "with function HTAA_setupReader()" );
    }
    return 0;
  }
  else
  {
    while ( start_pointer < end_pointer )
    {
      cur = start_pointer;
      if ( peek_for_folding )
      {
        if ( cur[0] != ' ' && cur[0] != '\t' )
        {
          return line;
        }
        peek_for_folding = 0;
      }
      while ( cur < end_pointer && cur[0] != '\n' )
      {
        cur++;
      }
      if ( cur < end_pointer )
      {
        cur[0] = 0;
        if ( cur[ -1 ] == '\r' )
          cur[ -1 ] = 0;
        peek_for_folding = 1;
      }
      if ( line )
        HTSACat( &line, start_pointer );
      else
        HTSACopy( &line, start_pointer );
      start_pointer = &cur[1];
    }
    count = HTDoRead( in_soc, (void*)buffer, 1024 );
    if ( count <= 0 )
    {
      in_soc = -1;
      return line;
    }
    start_pointer = buffer;
    end_pointer = &buffer[ count ];
    end_pointer[0] = 0;
    cur = start_pointer;
  }
}
#if 0
#endif
