#include "HTInit.c.h"
static int reverse_mailcap;
void HTFormatInit( void )
{
  AcceptMedia media = mediaEXT;
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "HTFormatInit\n" );
  }
  if ( LYgetXDisplay( ) )
  {
    HTSetPresentation( "application/postscript", "ghostview %s&", 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, media );
    if ( XLoadImageCommand && XLoadImageCommand[0] )
    {
      HTSetPresentation( "image/gif", XLoadImageCommand, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, media );
      HTSetPresentation( "image/x-xbm", XLoadImageCommand, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, media );
      HTSetPresentation( "image/x-xbitmap", XLoadImageCommand, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, media );
      HTSetPresentation( "image/x-png", XLoadImageCommand, 0, 2.000000000000, 3.000000000000, 0.000000000000, 0, media );
      HTSetPresentation( "image/png", XLoadImageCommand, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, media );
      HTSetPresentation( "image/x-rgb", XLoadImageCommand, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, media );
      HTSetPresentation( "image/x-tiff", XLoadImageCommand, 0, 2.000000000000, 3.000000000000, 0.000000000000, 0, media );
      HTSetPresentation( "image/tiff", XLoadImageCommand, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, media );
      HTSetPresentation( "image/jpeg", XLoadImageCommand, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, media );
    }
    HTSetPresentation( "video/mpeg", "mpeg_play %s &", 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, media );
  }
  HTSetPresentation( "application/x-csh", "csh %s", 0, 999.000000000000, 3.000000000000, 0.000000000000, 0, media );
  HTSetPresentation( "application/x-sh", "sh %s", 0, 999.000000000000, 3.000000000000, 0.000000000000, 0, media );
  HTSetPresentation( "application/x-ksh", "ksh %s", 0, 999.000000000000, 3.000000000000, 0.000000000000, 0, media );
  media = mediaINT;
  HTSetConversion( "message/x-http-redirection", "*", &HTMIMERedirect, 2.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "message/x-http-redirection", "www/present", &HTMIMERedirect, 2.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "message/x-http-redirection", "www/debug", &HTMIMERedirect, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "www/mime", "www/present", &HTMIMEConvert, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "www/mime", "www/download", &HTMIMEConvert, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "www/mime", "www/source", &HTMIMEConvert, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "www/mime", "www/dump", &HTMIMEConvert, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "www/compressed", "www/download", &HTCompressed, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "www/compressed", "www/present", &HTCompressed, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "www/compressed", "www/source", &HTCompressed, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "www/compressed", "www/dump", &HTCompressed, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "application/html", "text/x-c", &HTMLToC, 0.500000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "application/html", "text/plain", &HTMLToPlain, 0.500000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/css", "text/plain", &HTMLToPlain, 0.500000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "application/html", "www/present", &HTMLPresent, 2.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "application/xhtml+xml", "www/present", &HTMLPresent, 2.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "application/xml", "www/present", &HTMLPresent, 2.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "application/html", "www/source", &HTPlainPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "application/x-wais-source", "www/source", &HTPlainPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "application/x-wais-source", "www/present", &HTWSRCConvert, 2.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "application/x-wais-source", "www/download", &HTWSRCConvert, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "application/x-wais-source", "www/dump", &HTWSRCConvert, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "www/source", "www/present", &HTSaveToFile, 1.000000000000, 3.000000000000, 0.0, 0, 2 );
  HTSetConversion( "www/source", "www/source", &HTSaveToFile, 1.000000000000, 3.000000000000, 0.0, 0, 2 );
  HTSetConversion( "www/source", "www/download", &HTSaveToFile, 1.000000000000, 3.000000000000, 0.0, 0, 2 );
  HTSetConversion( "www/source", "*", &HTSaveToFile, 1.000000000000, 3.000000000000, 0.0, 0, 2 );
  HTSetConversion( "www/source", "www/dump", &HTDumpToStdout, 1.000000000000, 3.000000000000, 0.0, 0, 2 );
  HTSetConversion( "text/x-sgml", "www/source", &HTPlainPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/x-sgml", "www/present", &HTMLPresent, 2.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/sgml", "www/source", &HTPlainPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/sgml", "www/present", &HTMLPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/css", "www/present", &HTPlainPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/plain", "www/present", &HTPlainPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/plain", "www/source", &HTPlainPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/html", "www/source", &HTPlainPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/html", "text/x-c", &HTMLToC, 0.500000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/html", "text/plain", &HTMLToPlain, 0.500000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/html", "www/present", &HTMLPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  HTSetConversion( "text/xml", "www/present", &HTMLPresent, 2.000000000000, 0.0, 0.0, 0, 1 );
  if ( LYisAbsPath( global_type_map ) & 255 )
    HTLoadTypesConfigFile( global_type_map, 16 );
  if ( ( IsOurFile( LYAbsOrHomePath( &personal_type_map ) ) & 255 ) && ( LYCanReadFile( personal_type_map ) & 255 ) )
    HTLoadTypesConfigFile( personal_type_map, 8 );
  HTReorderPresentation( HTAtom_for( "text/plain" ), HTAtom_for( "www/present" ) );
  HTReorderPresentation( HTAtom_for( "text/html" ), HTAtom_for( "www/present" ) );
  HTFilterPresentations( );
  return;
}
void HTPreparsedFormatInit( void )
{
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "HTPreparsedFormatInit\n" );
  }
  if ( LYPreparsedSource )
  {
    HTSetConversion( "text/html", "www/source", &HTMLParsedPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
    HTSetConversion( "text/html", "www/dump", &HTMLParsedPresent, 1.000000000000, 0.0, 0.0, 0, 1 );
  }
  return;
}
char *GetCommand( char *s, char **t )
{
  char *s2;
  int quoted = 0;
  s = LYSkipBlanks( s );
  s2 = malloc( ( ( strlen( s ) * 2 ) + 1 ) * sizeof( char ) );
  if ( s2 == 0 )
  {
    ExitWithError( gettext( "Memory exhausted!  Program aborted!" ) );
  }
  t[0] = s2;
  while ( s && s[0] )
  {
    if ( quoted )
    {
      if ( s[0] == '%' )
      {
        s2[0] = '%';
        s2++;
      }
      s2[0] = s[0];
      s2++;
      s++;
      quoted = 0;
    }
    else
    if ( s[0] == ';' )
    {
      s2[0] = 0;
      s++;
      return s;
    }
    if ( s[0] == '\\' )
    {
      quoted = 1;
      s++;
    }
    else
    {
      s2[0] = s[0];
      s2++;
      s++;
    }
  }
  s2[0] = 0;
  return 0;
}
char *Cleanse( char *s )
{
  LYTrimLeading( s );
  LYTrimTrailing( s );
  LYLowerCase( s );
  return s;
}
void TrimCommand( char *command )
{
  LYTrimTrailing( command );
{
  char *s = command;
  char *d = command;
  int ch;
  int c0 = 32;
  BOOLEAN escape = 0;
  BOOLEAN dquote = 0;
  BOOLEAN squote = 0;
  while ( ch = s[0], s++, ( ch != 0 ) & 255 )
  {
    if ( escape )
      escape = 0;
    else
    if ( squote )
    {
      if ( ch == 39 )
        squote = 0;
    }
    else
    if ( dquote )
    {
      if ( ch == 34 )
        dquote = 0;
    }
    else
    {
      switch ( ch )
      {
      case '"':
        dquote = 1;
        break;
      case '\'':
        squote = 1;
        break;
      case '\\':
        if ( dquote )
          escape = 1;
        break;
      }
    }
    if ( escape == 0 && dquote == 0 && squote == 0 )
    {
      if ( ch == 9 )
        ch = 32;
      if ( ch != 32 || c0 != 32 )
        goto B22;
    }
B22:;
    d[0] = ch;
    d++;
    c0 = ch;
  }
  *ebp_12 = 0;
  return;
}
}
int ProcessMailcapEntry( FILE *fp, struct MailcapEntry *mc, AcceptMedia media )
{
  size_t rawentryalloc = 2000;
  size_t len;
  size_t need;
  char *rawentry, *s, *t;
  char *LineBuf = 0;
  rawentry = malloc( ( rawentryalloc ) * sizeof( char ) );
  if ( rawentry == 0 )
  {
    ExitWithError( gettext( "Memory exhausted!  Program aborted!" ) );
  }
  rawentry[0] = 0;
  while ( LYSafeGets( &LineBuf, fp ) == 0 )
  {
    LYTrimNewline( LineBuf );
    if ( LineBuf[0] != '#' && LineBuf[0] )
    {
      len = strlen( LineBuf );
      need = len + strlen( rawentry ) + 1;
      if ( rawentryalloc < need )
      {
        rawentryalloc = rawentryalloc + need + 2000;
        rawentry = realloc( rawentry, ( rawentryalloc ) * sizeof( char ) );
        if ( rawentry == 0 )
        {
          ExitWithError( gettext( "Memory exhausted!  Program aborted!" ) );
        }
      }
      if ( len && LineBuf[ len + -1 ] == '\\' )
      {
        LineBuf[ len + -1 ] = 0;
        strcat( rawentry, LineBuf );
      }
      else
      {
        strcat( rawentry, LineBuf );
        break;
      }
    }
  }
  if ( LineBuf )
  {
    free( LineBuf );
    LineBuf = 0;
  }
  t = s = LYSkipBlanks( rawentry );
  if ( s[0] == 0 )
  {
    if ( rawentry )
    {
      free( rawentry );
      rawentry = 0;
    }
    return 0;
  }
  else
  {
    s = strchr( rawentry, ';' );
    if ( s == 0 )
    {
      if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
      {
        fprintf( TraceFP( ), "ProcessMailcapEntry: Ignoring invalid mailcap entry: %s\n", rawentry );
      }
      if ( rawentry )
      {
        free( rawentry );
        rawentry = 0;
      }
      return 0;
    }
    else
    {
      s[0] = 0;
      s++;
      if ( strncasecomp( t, "text/html", 9 ) == 0 || strncasecomp( t, "text/plain", 10 ) == 0 )
      {
        s = &s[ -1 ];
        s[0] = ';';
        if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
        {
          fprintf( TraceFP( ), "ProcessMailcapEntry: Ignoring mailcap entry: %s\n", rawentry );
        }
        if ( rawentry )
        {
          free( rawentry );
          rawentry = 0;
        }
        return 0;
      }
      else
      {
        LYRemoveBlanks( rawentry );
        LYLowerCase( rawentry );
        *(int*)&mc->needsterminal = 0;
        *(int*)&mc->copiousoutput = 0;
        *(int*)&mc->needtofree = 1;
        *(int*)&mc->testcommand = 0;
        *(int*)&mc->label = 0;
        *(int*)&mc->printcommand = 0;
        *(int*)&mc->contenttype[0] = 0;
        HTSACopy( &mc->contenttype, rawentry );
        *(int*)&mc->quality = 0x3f800000;
        *(int*)&mc->maxbytes = 0;
        t = GetCommand( s, &mc->command );
        if ( t )
        {
          s = LYSkipBlanks( t );
          for ( ; s;  )
          {
            char *arg, *eq, *mallocd_string;
            t = GetCommand( s, &mallocd_string );
            arg = mallocd_string;
            eq = strchr( arg, '=' );
            if ( eq )
            {
              eq[0] = 0;
              eq++;
              eq = LYSkipBlanks( eq );
            }
            if ( arg && arg[0] )
            {
              arg = Cleanse( arg );
              if ( strcmp( arg, "needsterminal" ) == 0 )
                *(int*)&mc->needsterminal = 1;
              else
              {
                if ( strcmp( arg, "copiousoutput" ) == 0 )
                  *(int*)&mc->copiousoutput = 1;
                else
                if ( eq && strcmp( arg, "test" ) == 0 )
                {
                  *(int*)&mc->testcommand = 0;
                  HTSACopy( &mc->testcommand, eq );
                  TrimCommand( &mc->testcommand );
                  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
                  {
                    fprintf( TraceFP( ), "ProcessMailcapEntry: Found testcommand:%s\n", &mc->testcommand );
                  }
                }
                else
                if ( eq && strcmp( arg, "description" ) == 0 )
                  mc->label = eq;
                else
                if ( eq && strcmp( arg, "label" ) == 0 )
                  mc->label = eq;
                else
                if ( eq && strcmp( arg, "print" ) == 0 )
                  mc->printcommand = eq;
                else
                if ( eq == 0 || strcmp( arg, "textualnewlines" ) )
                {
                  if ( eq && strcmp( arg, "q" ) == 0 )
                  {
                    mc->quality = atof( eq );
                    if ( mc->quality > 0 && mc->quality < 0.001000000000 )
                      *(int*)&mc->quality = 0x3a83126f;
                  }
                  else
                  if ( eq && strcmp( arg, "mxb" ) == 0 )
                  {
                    mc->maxbytes = atol( eq );
                    if ( mc->maxbytes < 0 )
                      *(int*)&mc->maxbytes = 0;
                  }
                  else
                  {
                    if ( strcmp( arg, "notes" ) && arg[0] && WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
                    {
                      fprintf( TraceFP( ), "ProcessMailcapEntry: Ignoring mailcap flag '%s'.\n", arg );
                    }
                  }
                }
              }
            }
            if ( mallocd_string )
            {
              free( mallocd_string );
              mallocd_string = 0;
            }
            s = t;
          }
        }
        if ( rawentry )
        {
          free( rawentry );
          rawentry = 0;
        }
        if ( PassesTest( mc ) )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
          {
            fprintf( TraceFP( ), "ProcessMailcapEntry Setting up conversion %s : %s\n", &mc->contenttype[0], &mc->command );
          }
          HTSetPresentation( &mc->contenttype[0], &mc->command, &mc->testcommand, mc->quality, 3.000000000000, 0.000000000000, mc->maxbytes, media );
        }
        if ( mc->command )
        {
          free( &mc->command );
          *(int*)&mc->command = 0;
        }
        if ( mc->testcommand )
        {
          free( &mc->testcommand );
          *(int*)&mc->testcommand = 0;
        }
        if ( mc->contenttype[0] )
        {
          free( &mc->contenttype[0] );
          *(int*)&mc->contenttype[0] = 0;
        }
        return 1;
      }
    }
  }
}
char *LYSkipQuoted( char *s )
{
  int escaped = 0;
  s++;
  for ( ; s[0]; s++ )
  {
    if ( escaped )
      escaped = 0;
    else
    if ( s[0] == '\\' )
      escaped = 1;
    else
    if ( s[0] == '"' )
    {
      s++;
      break;
    }
    // s++;
  }
  return s;
}
char *LYSkipToken( char *s )
{
  static char tspecials[17] = { '"', '(', ')', '<', '>', '@', ',', ';', ':', '\\', '/', '[', ']', '?', '.', '=' };
  for ( ; s[0] && s[0] < ' ' && strchr( tspecials, s[0] ) == 0; s++ )
  {
    // s++;
  }
  return s;
}
char *LYSkipValue( char *s )
{
  if ( s[0] == '"' )
  {
    s = LYSkipQuoted( s );
  }
  s = LYSkipToken( s );
  return s;
}
char *LYCopyValue( char *s )
{
  char *t;
  char *result = 0;
  int j, k;
  if ( s[0] == '"' )
  {
    t = LYSkipQuoted( s );
    HTSACopy( &result, &s[1] );
    result[ ( t - s ) + -2 ] = 0;
    j = k = 0;
    while ( result[ j ] != '\\' )
    {
      if ( result[ k ] == 0 )
        break;
      j++;
      k++;
    }
    j++;
  }
  else
  {
    t = LYSkipToken( s );
    HTSACopy( &result, s );
    result[ t - s ] = 0;
  }
  return result;
}
char *LYGetContentType( char *name, char *params )
{
  char *result = 0;
  if ( params )
  {
    if ( name == 0 )
    {
      HTSACopy( &result, params );
      *(char*)(LYSkipNonBlanks( result )) = 0;
    }
  {
    size_t length = strlen( name );
    char *test = strchr( params, ';' );
    char *next;
    do
    {
      if ( test == 0 )
        break;
    {
      BOOLEAN found = 0;
      test++;
      test = LYSkipCBlanks( test );
      next = LYSkipToken( test );
      if ( length == next - test && strncmp( test, name, length ) == 0 )
        found = 1;
      test = LYSkipCBlanks( next );
      if ( test[0] == '=' )
      {
        test++;
        test = LYSkipCBlanks( test );
        if ( found )
        {
          result = LYCopyValue( test );
          break;
        }
        test = LYSkipValue( test );
        test = LYSkipCBlanks( test );
      }
    }
    }
    while ( test[0] != ';' );
  }
  }
  return result;
}
BOOLEAN LYMailcapUsesPctS( char *controlstring )
{
  int result = 0;
  char *from;
  char *next;
  int prefixed = 0;
  int escaped = 0;
  from = controlstring;
  for ( ; from[0]; from++ )
  {
    if ( escaped )
      escaped = 0;
    else
    if ( from[0] == '\\' )
      escaped = 1;
    else
    if ( prefixed )
    {
      prefixed = 0;
      switch ( from[0] )
      {
      default:
        break;
      case 's':
        result = 1;
        break;
      case '{':
        next = strchr( from, '}' );
        if ( next )
          from = next;
        break;
      }
    }
    else
    if ( from[0] == '%' )
      prefixed = 1;
    // from++;
  }
  return result;
}
int BuildCommand( HTChunk *cmd, char *controlstring, char *TmpFileName, char *params )
{
  int result = 0;
  size_t TmpFileLen = strlen( TmpFileName );
  char *from;
  char *next;
  char *name, *value;
  int prefixed = 0;
  int escaped = 0;
  from = controlstring;
  for ( ; from[0]; from++ )
  {
    if ( escaped )
    {
      escaped = 0;
      HTChunkPutc( cmd, from[0] );
    }
    else
    if ( from[0] == '\\' )
      escaped = 1;
    else
    if ( prefixed )
    {
      prefixed = 0;
      switch ( from[0] )
      {
      case '%':
        HTChunkPutc( cmd, from[0] );
        break;
      case 'F':
      case 'n':
        if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
        {
          fprintf( TraceFP( ), "BuildCommand: Bad mailcap \"test\" clause: %s\n", controlstring );
        }
        break;
      case 't':
        value = LYGetContentType( 0, params );
        if ( value )
        {
          HTChunkPuts( cmd, value );
          if ( value )
          {
            free( value );
            value = 0;
          }
        }
        break;
      case 's':
        if ( TmpFileLen && TmpFileName )
          HTChunkPuts( cmd, TmpFileName );
        break;
      case '{':
        next = strchr( from, '}' );
        if ( next )
        {
          if ( params )
          {
            from++;
            name = 0;
            HTSprintf0( &name, "%.*s", next - from, from );
            value = LYGetContentType( name, params );
            if ( value )
            {
              HTChunkPuts( cmd, value );
              if ( value )
              {
                free( value );
                value = 0;
              }
            }
            else
            {
              if ( strcmp( name, "charset" ) == 0 )
                HTChunkPuts( cmd, "ISO-8859-1" );
              else
              if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
              {
                fprintf( TraceFP( ), "BuildCommand no value for %s\n", name );
              }
            }
            if ( name )
            {
              free( name );
              name = 0;
            }
          }
          else
            result = -1;
          from = next;
        }
        else
      default:
        if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
        {
          fprintf( TraceFP( ), "BuildCommand: Ignoring unrecognized format code in mailcap file '%%%c'.\n", from[0] );
        }
        break;
      }
    }
    else
    if ( from[0] == '%' )
      prefixed = 1;
    else
      HTChunkPutc( cmd, from[0] );
    // from++;
  }
  HTChunkTerminate( cmd );
  return result;
}
int LYTestMailcapCommand( char *testcommand, char *params )
{
  int eax;
  int result;
  char TmpFileName[256];
  HTChunk *expanded = 0;
  if ( LYMailcapUsesPctS( testcommand ) & 255 )
  {
    if ( LYOpenTemp( TmpFileName, ".html", "w" ) == 0 )
    {
      ExitWithError( gettext( "Can't open temporary file!" ) );
    }
    LYCloseTemp( TmpFileName );
  }
  else
    TmpFileName[0] = 0;
  expanded = HTChunkCreate( 1024 );
  result = BuildCommand( expanded, testcommand, TmpFileName, params );
  if ( result )
  {
    result = 1;
    if ( WWW_TraceFlag == 0 || ( WWW_TraceMask & 8 ) == 0 )
    {
      HTChunkFree( expanded );
      LYRemoveTemp( TmpFileName );
      return result;
    }
    fprintf( TraceFP( ), "PassesTest: Deferring test command: %s\n", &expanded->data );
  }
  else
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
    {
      fprintf( TraceFP( ), "PassesTest: Executing test command: %s\n", &expanded->data );
    }
    result = LYSystem( &expanded->data );
    if ( result )
    {
      result = -1;
      if ( WWW_TraceFlag == 0 || ( WWW_TraceMask & 8 ) == 0 )
      {
        HTChunkFree( expanded );
        LYRemoveTemp( TmpFileName );
        return result;
      }
      fprintf( TraceFP( ), "PassesTest: Test failed!\n" );
    }
    else
    {
      if ( WWW_TraceFlag == 0 || ( WWW_TraceMask & 8 ) == 0 )
      {
        HTChunkFree( expanded );
        LYRemoveTemp( TmpFileName );
        return result;
      }
      fprintf( TraceFP( ), "PassesTest: Test passed!\n" );
    }
  }
}
char *LYMakeMailcapCommand( char *command, char *params, char *filename )
{
  HTChunk *expanded = 0;
  char *result = 0;
  expanded = HTChunkCreate( 1024 );
  BuildCommand( expanded, command, filename, params );
  HTSACopy( &result, &expanded->data );
  HTChunkFree( expanded );
  return result;
}
int RememberTestResult( int mode, char *cmd, int result )
{
  static struct cmdlist_s *cmdlist;
  struct cmdlist_s *cur;
  switch ( mode )
  {
  case 0:
    if ( cmdlist == 0 )
    {
      return 0;
    }
    cur = &cmdlist->next;
    if ( cmdlist->cmd[0] )
    {
      free( &cmdlist->cmd[0] );
      *(int*)&cmdlist->cmd[0] = 0;
    }
    if ( cmdlist )
    {
      free( cmdlist );
      cmdlist = 0;
    }
    cmdlist = cur;
    break;
  case 1:
    cur = cmdlist;
    for ( ; cur;  )
    {
      if ( strcmp( cmd, &cur->cmd[0] ) == 0 )
      {
        return cur->result;
      }
      cur = &cur->next;
    }
    return -1;
    break;
  case 2:
    cur = calloc( 1, sizeof( struct cmdlist_s ) );
    if ( cur == 0 )
      outofmem( "./HTInit.c", "RememberTestResult" );
    cur->next = cmdlist;
    HTSACopy( &cur->cmd, cmd );
    return result;
    cmdlist = cur;
    break;
  default:
    break;
  }
}
int PassesTest( struct MailcapEntry *mc )
{
  int result;
  if ( mc->testcommand == 0 )
  {
    return 1;
  }
  if ( strcmp( &mc->testcommand, "test \"$DISPLAY\"" ) == 0 || strcmp( &mc->testcommand, "test \"$DISPLAY\" != \"\"" ) == 0 || strcmp( &mc->testcommand, "test -n \"$DISPLAY\"" ) == 0 )
  {
    if ( mc->testcommand )
    {
      free( &mc->testcommand );
      *(int*)&mc->testcommand = 0;
    }
    if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
    {
      fprintf( TraceFP( ), "PassesTest: Testing for XWINDOWS environment.\n" );
    }
    if ( LYgetXDisplay( ) )
    {
      if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
      {
        fprintf( TraceFP( ), "PassesTest: Test passed!\n" );
      }
      return 1;
    }
    else
    {
      if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
      {
        fprintf( TraceFP( ), "PassesTest: Test failed!\n" );
      }
      return 0;
    }
  }
  else
  {
    if ( strcmp( &mc->testcommand, "test -z \"$DISPLAY\"" ) == 0 )
    {
      if ( mc->testcommand )
      {
        free( &mc->testcommand );
        *(int*)&mc->testcommand = 0;
      }
      if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
      {
        fprintf( TraceFP( ), "PassesTest: Testing for NON_XWINDOWS environment.\n" );
      }
      if ( LYgetXDisplay( ) == 0 )
      {
        if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
        {
          fprintf( TraceFP( ), "PassesTest: Test passed!\n" );
        }
        return 1;
      }
      else
      {
        if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
        {
          fprintf( TraceFP( ), "PassesTest: Test failed!\n" );
        }
        return 0;
      }
    }
    else
    {
      if ( strcmp( &mc->testcommand, "test -n \"$LYNX_VERSION\"" ) == 0 )
      {
        if ( mc->testcommand )
        {
          free( &mc->testcommand );
          *(int*)&mc->testcommand = 0;
        }
        if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
        {
          fprintf( TraceFP( ), "PassesTest: Testing for LYNX environment.\n" );
        }
        if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
        {
          fprintf( TraceFP( ), "PassesTest: Test passed!\n" );
        }
        return 1;
      }
      else
      {
        if ( strcmp( &mc->testcommand, "test -z \"$LYNX_VERSION\"" ) == 0 )
        {
          if ( mc->testcommand )
          {
            free( &mc->testcommand );
            *(int*)&mc->testcommand = 0;
          }
          if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
          {
            fprintf( TraceFP( ), "PassesTest: Testing for non-LYNX environment.\n" );
          }
          if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
          {
            fprintf( TraceFP( ), "PassesTest: Test failed!\n" );
          }
          return 0;
        }
        else
        {
          result = RememberTestResult( 1, &mc->testcommand, 0 );
          if ( result == -1 )
          {
            result = LYTestMailcapCommand( &mc->testcommand, 0 );
            RememberTestResult( 2, &mc->testcommand, result != 0 );
          }
          if ( result != 1 && mc->testcommand )
          {
            free( &mc->testcommand );
            *(int*)&mc->testcommand = 0;
          }
          if ( result < 0 )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
            {
              fprintf( TraceFP( ), "PassesTest: Test failed!\n" );
            }
          }
          else
          if ( result == 0 && WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
          {
            fprintf( TraceFP( ), "PassesTest: Test passed!\n" );
          }
          return ~result >> 31;
        }
      }
    }
  }
}
int ProcessMailcapFile( char *file, AcceptMedia media )
{
  struct MailcapEntry mc;
  FILE *fp;
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "ProcessMailcapFile: Loading file '%s'.\n", file );
  }
  fp = fopen64( file, "r" );
  if ( fp == 0 )
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
    {
      fprintf( TraceFP( ), "ProcessMailcapFile: Could not open '%s'.\n", file );
    }
    return 0;
  }
  else
  {
    while ( fp && feof( fp ) == 0 )
    {
      ProcessMailcapEntry( fp, &mc, media );
    }
    LYCloseInput( fp );
    RememberTestResult( 0, 0, 0 );
    return 1;
  }
}
int ExitWithError( char *txt )
{
  if ( txt )
  {
    fprintf( TraceFP( ), "Lynx: %s\n", txt );
  }
  exit_immediately( 1 );
  return -1;
}
int HTLoadTypesConfigFile( char *fn, AcceptMedia media )
{
  int result = 0;
  HTList *saved = HTPresentations;
  if ( reverse_mailcap )
    HTPresentations = 0;
  result = ProcessMailcapFile( fn, media );
  if ( reverse_mailcap )
  {
    if ( result == 0 || HTPresentations == 0 )
    {
      HTPresentations = saved;
    }
    HTList_reverse( HTPresentations );
    HTList_appendList( HTPresentations, saved );
    if ( saved )
    {
      free( saved );
      saved = 0;
    }
  }
  return result;
}
void HTFileInit( void )
{
  if ( LYUseBuiltinSuffixes )
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
    {
      fprintf( TraceFP( ), "HTFileInit: Loading default (HTInit) extension maps.\n" );
    }
    HTSetSuffix5( "*", "text/plain", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( "*.*", "text/plain", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".csh", "application/x-csh", "8bit", 0, 0.800000000000 );
    HTSetSuffix5( ".sh", "application/x-sh", "8bit", 0, 0.800000000000 );
    HTSetSuffix5( ".ksh", "application/x-ksh", "8bit", 0, 0.800000000000 );
    HTSetSuffix5( ".saveme", "application/x-Binary", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".dump", "application/x-Binary", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".bin", "application/x-Binary", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".arc", "application/x-Compressed", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".alpha-exe", "application/x-Executable", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".alpha_exe", "application/x-Executable", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".AXP-exe", "application/x-Executable", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".AXP_exe", "application/x-Executable", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".VAX-exe", "application/x-Executable", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".VAX_exe", "application/x-Executable", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".exe", "application/octet-stream", "binary", "Executable", 1.000000000000 );
    HTSetSuffix5( ".Z", "application/x-compress", "binary", "UNIX Compressed", 1.000000000000 );
    HTSetSuffix5( ".Z", 0, "compress", "UNIX Compressed", 1.000000000000 );
    HTSetSuffix5( ".exe.Z", "application/octet-stream", "compress", "Executable", 1.000000000000 );
    HTSetSuffix5( ".tar_Z", "application/x-tar", "compress", "UNIX Compr. Tar", 1.000000000000 );
    HTSetSuffix5( ".tar.Z", "application/x-tar", "compress", "UNIX Compr. Tar", 1.000000000000 );
    HTSetSuffix5( "-gz", "application/x-gzip", "binary", "GNU Compressed", 1.000000000000 );
    HTSetSuffix5( "_gz", "application/x-gzip", "binary", "GNU Compressed", 1.000000000000 );
    HTSetSuffix5( ".gz", "application/x-gzip", "binary", "GNU Compressed", 1.000000000000 );
    HTSetSuffix5( "-gz", 0, "gzip", "GNU Compressed", 1.000000000000 );
    HTSetSuffix5( "_gz", 0, "gzip", "GNU Compressed", 1.000000000000 );
    HTSetSuffix5( ".gz", 0, "gzip", "GNU Compressed", 1.000000000000 );
    HTSetSuffix5( ".tar.gz", "application/x-tar", "gzip", "GNU Compr. Tar", 1.000000000000 );
    HTSetSuffix5( ".tgz", "application/x-tar", "gzip", "GNU Compr. Tar", 1.000000000000 );
    HTSetSuffix5( ".wsrc", "application/x-wais-source", "8bit", "WAIS-source", 1.000000000000 );
    HTSetSuffix5( ".zip", "application/zip", "binary", "Zip File", 1.000000000000 );
    HTSetSuffix5( ".zz", "application/x-deflate", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".zz", "application/deflate", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".bz2", "application/x-bzip2", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".bz2", "application/bzip2", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".uu", "application/x-uuencoded", "7bit", "UUencoded", 1.000000000000 );
    HTSetSuffix5( ".hqx", "application/mac-binhex40", "8bit", "Mac BinHex", 1.000000000000 );
    HTSetSuffix5( ".o", "application/octet-stream", "binary", "Prog. Object", 0.500000000000 );
    HTSetSuffix5( ".a", "application/octet-stream", "binary", "Prog. Library", 0.500000000000 );
    HTSetSuffix5( ".so", "application/octet-stream", "binary", "Shared Lib", 0.500000000000 );
    HTSetSuffix5( ".oda", "application/oda", "binary", "ODA", 1.000000000000 );
    HTSetSuffix5( ".pdf", "application/pdf", "binary", "PDF", 1.000000000000 );
    HTSetSuffix5( ".eps", "application/postscript", "8bit", "Postscript", 1.000000000000 );
    HTSetSuffix5( ".ai", "application/postscript", "8bit", "Postscript", 1.000000000000 );
    HTSetSuffix5( ".ps", "application/postscript", "8bit", "Postscript", 1.000000000000 );
    HTSetSuffix5( ".rtf", "application/rtf", "8bit", "RTF", 1.000000000000 );
    HTSetSuffix5( ".dvi", "application/x-dvi", "8bit", "DVI", 1.000000000000 );
    HTSetSuffix5( ".hdf", "application/x-hdf", "8bit", "HDF", 1.000000000000 );
    HTSetSuffix5( ".cdf", "application/x-netcdf", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".nc", "application/x-netcdf", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".latex", "application/x-latex", "8bit", "LaTeX", 1.000000000000 );
    HTSetSuffix5( ".tex", "text/x-tex", "8bit", "TeX", 1.000000000000 );
    HTSetSuffix5( ".texinfo", "application/x-texinfo", "8bit", "Texinfo", 1.000000000000 );
    HTSetSuffix5( ".texi", "application/x-texinfo", "8bit", "Texinfo", 1.000000000000 );
    HTSetSuffix5( ".t", "application/x-troff", "8bit", "Troff", 1.000000000000 );
    HTSetSuffix5( ".tr", "application/x-troff", "8bit", "Troff", 1.000000000000 );
    HTSetSuffix5( ".roff", "application/x-troff", "8bit", "Troff", 1.000000000000 );
    HTSetSuffix5( ".man", "application/x-troff-man", "8bit", "Man Page", 1.000000000000 );
    HTSetSuffix5( ".me", "application/x-troff-me", "8bit", "Troff me", 1.000000000000 );
    HTSetSuffix5( ".ms", "application/x-troff-ms", "8bit", "Troff ms", 1.000000000000 );
    HTSetSuffix5( ".zoo", "application/x-Zoo File", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".bak", 0, "binary", "Backup", 0.500000000000 );
    HTSetSuffix5( ".bkp", "application/octet-stream", "binary", "VMS BAK File", 1.000000000000 );
    HTSetSuffix5( ".bck", "application/octet-stream", "binary", "VMS BAK File", 1.000000000000 );
    HTSetSuffix5( ".hlb", "application/octet-stream", "binary", "VMS Help Libr.", 1.000000000000 );
    HTSetSuffix5( ".olb", "application/octet-stream", "binary", "VMS Obj. Libr.", 1.000000000000 );
    HTSetSuffix5( ".tlb", "application/octet-stream", "binary", "VMS Text Libr.", 1.000000000000 );
    HTSetSuffix5( ".obj", "application/octet-stream", "binary", "Prog. Object", 1.000000000000 );
    HTSetSuffix5( ".decw$book", "application/octet-stream", "binary", "DEC BookReader", 1.000000000000 );
    HTSetSuffix5( ".mem", "text/x-runoff-manual", "8bit", "RUNOFF-MANUAL", 1.000000000000 );
    HTSetSuffix5( ".vsd", "application/visio", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".lha", "application/x-lha", "binary", "lha File", 1.000000000000 );
    HTSetSuffix5( ".lzh", "application/x-lzh", "binary", "lzh File", 1.000000000000 );
    HTSetSuffix5( ".sea", "application/x-sea", "binary", "sea File", 1.000000000000 );
    HTSetSuffix5( ".sit", "application/x-stuffit", "binary", "StuffIt", 1.000000000000 );
    HTSetSuffix5( ".dms", "application/x-dms", "binary", "dms File", 1.000000000000 );
    HTSetSuffix5( ".iff", "application/x-iff", "binary", "iff File", 1.000000000000 );
    HTSetSuffix5( ".bcpio", "application/x-bcpio", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".cpio", "application/x-cpio", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".shar", "application/x-shar", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".share", "application/x-share", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".sv4cpio", "application/x-sv4cpio", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".sv4crc", "application/x-sv4crc", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".tar", "application/x-tar", "binary", "Tar File", 1.000000000000 );
    HTSetSuffix5( ".ustar", "application/x-ustar", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".snd", "audio/basic", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".au", "audio/basic", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".aifc", "audio/x-aiff", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".aif", "audio/x-aiff", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".aiff", "audio/x-aiff", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".wav", "audio/x-wav", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".midi", "audio/midi", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".mod", "audio/mod", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".gif", "image/gif", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".ief", "image/ief", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".jfif", "image/jpeg", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".jfif-tbnl", "image/jpeg", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".jpe", "image/jpeg", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".jpg", "image/jpeg", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".jpeg", "image/jpeg", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".tif", "image/tiff", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".tiff", "image/tiff", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".ham", "image/ham", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".ras", "image/x-cmu-rast", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".pnm", "image/x-portable-anymap", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".pbm", "image/x-portable-bitmap", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".pgm", "image/x-portable-graymap", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".ppm", "image/x-portable-pixmap", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".png", "image/png", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".rgb", "image/x-rgb", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".xbm", "image/x-xbitmap", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".xpm", "image/x-xpixmap", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".xwd", "image/x-xwindowdump", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".rtx", "text/richtext", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".tsv", "text/tab-separated-values", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".etx", "text/x-setext", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".mpg", "video/mpeg", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".mpe", "video/mpeg", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".mpeg", "video/mpeg", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".mov", "video/quicktime", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".qt", "video/quicktime", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".avi", "video/x-msvideo", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".movie", "video/x-sgi-movie", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".mv", "video/x-sgi-movie", "binary", 0, 1.000000000000 );
    HTSetSuffix5( ".mime", "message/rfc822", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".c", "text/plain", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".cc", "text/plain", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".c++", "text/plain", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".css", "text/plain", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".h", "text/plain", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".pl", "text/plain", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".text", "text/plain", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".txt", "text/plain", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".php", "text/html", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".php3", "text/html", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".html3", "text/html", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".ht3", "text/html", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".phtml", "text/html", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".shtml", "text/html", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".sht", "text/html", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".htmlx", "text/html", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".htm", "text/html", "8bit", 0, 1.000000000000 );
    HTSetSuffix5( ".html", "text/html", "8bit", 0, 1.000000000000 );
  }
  else
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "HTFileInit: Skipping all default (HTInit) extension maps!\n" );
  }
  if ( LYisAbsPath( global_extension_map ) & 255 )
    HTLoadExtensionsConfigFile( global_extension_map );
  if ( ( IsOurFile( LYAbsOrHomePath( &personal_extension_map ) ) & 255 ) && ( LYCanReadFile( personal_extension_map ) & 255 ) )
  {
    HTLoadExtensionsConfigFile( personal_extension_map );
  }
  return;
}
int HTGetLine( char *s, int n, FILE *f )
{
  int i = 0, r;
  if ( f == 0 )
  {
    return 1;
  }
  while ( 1 )
  {
    r = fgetc( f );
    s[ i ] = r/*.1_1of4*/;
    if ( s[ i ] == '\r' )
    {
      r = fgetc( f );
      if ( r == 10 )
        s[ i ] = r/*.1_1of4*/;
      else
      if ( r != -1 )
        ungetc( r, f );
    }
    if ( r == -1 || s[ i ] == '\n' || s[ i ] == '\r' || i == n + -1 )
      break;
    i++;
  }
  s[ i ] = 0;
  return feof( f ) != 0;
}
void HTGetWord( char *word, char *line, char stop, char stop2 )
{
  int x = 0, y;
  x = 0;
  for ( ; line[ x ] && line[ x ] != stop && line[ x ] != stop2; x++ )
  {
    word[ x ] = line[ x ];
    // x++;
  }
  word[ x ] = 0;
  if ( line[ x ] )
    x++;
  y = 0;
  do
  {
    line[ y ] = line[ x ];
    y++;
    x++;
  }
  while ( ( line[ y ] != 0 ) & 255 );
  return;
}
int HTLoadExtensionsConfigFile( char *fn )
{
  int eax;
  char line[256];
  char word[256];
  char *ct;
  FILE *f;
  int count = 0;
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "HTLoadExtensionsConfigFile: Loading file '%s'.\n", fn );
  }
  f = fopen64( fn, "r" );
  if ( f == 0 )
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
    {
      fprintf( TraceFP( ), "HTLoadExtensionsConfigFile: Could not open '%s'.\n", fn );
    }
    return count;
  }
  else
  {
    while ( HTGetLine( line, 256, f ) == 0 )
    {
      HTGetWord( word, line, ' ', '\t' );
      if ( line[0] && word[0] != '#' )
      {
        ct = 0;
        HTSACopy( &ct, word );
        LYLowerCase( ct );
        while ( line[0] )
        {
          HTGetWord( word, line, ' ', '\t' );
          if ( word[0] && word[0] != ' ' )
          {
            char *ext = 0;
            HTSprintf0( &ext, ".%s", word[0] );
            LYLowerCase( ext );
            if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
            {
              fprintf( TraceFP( ), "setting suffix '%s' to '%s'.\n", ext, ct );
            }
            if ( strstr( ct, "tex" ) || strstr( ct, "postscript" ) || strstr( ct, "sh" ) || strstr( ct, "troff" ) || strstr( ct, "rtf" ) )
              HTSetSuffix5( ext, ct, "8bit", 0, 1.000000000000 );
            else
              HTSetSuffix5( ext, ct, "binary", 0, 1.000000000000 );
            count++;
            if ( ext )
            {
              free( ext );
            }
          }
        }
        if ( ct )
        {
          free( ct );
          ct = 0;
        }
      }
    }
    LYCloseInput( f );
    return count;
  }
}
#if 0
#endif
