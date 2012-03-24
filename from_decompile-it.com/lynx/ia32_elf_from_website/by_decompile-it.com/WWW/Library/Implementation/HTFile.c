#include "HTFile.c.h"
int HTDirAccess;
int HTDirReadme;
static char *HTMountRoot;
static char *HTCacheRoot;
static HTList *HTSuffixes;
static HTSuffix no_suffix;
static HTSuffix unknown_suffix;
static char *program_paths[24];
HTProtocol HTFTP;
HTProtocol HTFile;
char *FormatStr( char **bufp, char *start, char *entry )
{
  int eax;
  char fmt[512];
  if ( start[0] )
  {
    sprintf( fmt, "%%%.*ss", 509, start );
    HTSprintf0( bufp, fmt, entry );
  }
  else
  if ( bufp[0] && ( entry == 0 || entry[0] == 0 ) )
    bufp[0] = 0;
  else
  if ( entry )
    HTSACopy( bufp, entry );
  return bufp[0];
}
char *FormatNum( char **bufp, char *start, int entry )
{
  int eax;
  char fmt[512];
  if ( start[0] )
  {
    sprintf( fmt, "%%%.*sd", 509, start );
    HTSprintf0( bufp, fmt, entry );
  }
  else
  {
    sprintf( fmt, "%d", entry );
    HTSACopy( bufp, fmt );
  }
  return bufp[0];
}
void LYListFmtParse( char *fmtstr, DIRED *data, char *file, HTStructured *target, char *tail )
{
  int edx;
  static char *pbits[9] = { "---", "--x", "-w-", "-wx", "r--", "r-x", "rw-", "rwx", 0 };
  static char *psbits[9] = { "--S", "--s", "-wS", "-ws", "r-S", "r-s", "rwS", "rws", 0 };
  static char *ptbits[9] = { "--T", "--t", "-wT", "-wt", "r-T", "r-t", "rwT", "rwt", 0 };
  char c;
  char *s;
  char *end;
  char *start;
  char *str = 0;
  char *buf = 0;
  char tmp[256];
  char type;
  char *name;
  time_t now;
  char *datestr;
  int len;
  if ( data->file_info.st_mode == 0 )
    fmtstr = "    %a";
  HTSACopy( &str, fmtstr );
  s = str;
  end = str + strlen( str );
  for ( ; s[0]; s++ )
  {
    start = s;
    for ( ; s[0]; s++ )
    {
      if ( s[0] == '%' )
      {
        if ( s[1] == '%' )
          s++;
        else
          break;
      }
      // s++;
    }
    s[0] = 0;
    if ( start < s )
    {
      ;
    }
    if ( s != end )
    {
      s++;
      start = s;
      for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 2048 ) || s[0] == '.' || s[0] == '-' || s[0] == ' ' || s[0] == '#' || s[0] == '+' || s[0] == '\''; s++ )
      {
        // s++;
      }
      c = s[0];
      s[0] = 0;
      switch ( c )
      {
      case 0:
        ;
        break;
      case 65:
      case 97:
        HTDirEntry( target, tail, &data->file_name[0] );
        FormatStr( &buf, start, &data->file_name[0] );
        ;
        break;
      case 84:
      case 116:
        if ( ( data->file_info.st_mode & 61440 ) == 16384 )
        {
          if ( c != 'T' )
          {
            FormatStr( &buf, start, gettext( "Directory" ) );
          }
          else
            FormatStr( &buf, start, "" );
        }
        else
        {
          char *cp2;
          HTFormat format = HTFileFormat( file, 0, &cp2 );
          if ( c != 'T' )
          {
            if ( cp2 == 0 )
            {
              if ( strncmp( &format->name, "application", 11 ) == 0 )
              {
                cp2 = &format->name[12];
                if ( strncmp( cp2, "x-", 2 ) == 0 )
                  cp2 += 2;
              }
              else
                cp2 = &format->name;
            }
            FormatStr( &buf, start, cp2 );
          }
          else
            FormatStr( &buf, start, &format->name );
        }
        break;
      case 100:
        now = time( 0 );
        datestr = ctime( &data->file_info.st_mtim.tv_sec );
        if ( now - data->file_info.st_mtim.tv_sec <= 0xf099bf )
          sprintf( tmp, "%.12s", &datestr[4] );
        else
          sprintf( tmp, "%.7s %.4s ", &datestr[4], &datestr[20] );
        FormatStr( &buf, start, tmp );
        break;
      case 115:
        FormatNum( &buf, start, data->file_info.st_size & 0xFFFFFFFF );
        break;
      case 75:
        if ( ( data->file_info.st_mode & 61440 ) == 16384 )
        {
          FormatStr( &buf, start, "" );
          HTSACat( &buf, " " );
        }
        else
      case 107:
        FormatNum( &buf, start, (int)( "data->file_info.st_size << 32 + ( ( data->file_info.st_size & 0xFFFFFFFF + 1023 < data->file_info.st_size & 0xFFFFFFFF ) & 1 ) + ( ( data->file_info.st_size & 0xFFFFFFFF + 1023 + ( ( ( ( data->file_info.st_size << 32 + ( ( data->file_info.st_size & 0xFFFFFFFF + 1023 < data->file_info.st_size & 0xFFFFFFFF ) & 1 ) ) >> 31 ) >> 31 ) & 1023 ) < ( ( ( ( data->file_info.st_size << 32 + ( ( data->file_info.st_size & 0xFFFFFFFF + 1023 < data->file_info.st_size & 0xFFFFFFFF ) & 1 ) ) >> 31 ) >> 31 ) & 1023 ) ) & 1 ) # data->file_info.st_size & 0xFFFFFFFF + 1023 + ( ( ( ( data->file_info.st_size << 32 + ( ( data->file_info.st_size & 0xFFFFFFFF + 1023 < data->file_info.st_size & 0xFFFFFFFF ) & 1 ) ) >> 31 ) >> 31 ) & 1023 )" >> 10 ) );
        HTSACat( &buf, "K" );
        break;
      case 112:
        switch ( data->file_info.st_mode & 61440 )
        {
        case 4096:
          type = 'p';
          break;
        case 8192:
          type = 'c';
          break;
        case 16384:
          type = 'd';
          break;
        case 32768:
          type = '-';
          break;
        case 24576:
          type = 'b';
          break;
        case 40960:
          type = 'l';
          break;
        case 49152:
          type = 's';
          break;
        default:
          type = '?';
          break;
        }
        sprintf( tmp, "%c%s%s%s", type, pbits[ ( data->file_info.st_mode >> 6 ) & 7 ], pbits[ ( data->file_info.st_mode >> 3 ) & 7 ], pbits[ data->file_info.st_mode & 7 ] );
        FormatStr( &buf, start, tmp );
        if ( buf )
        {
          ;
        }
        // s++;
        break;
      case 111:
        name = HTAA_UidToName( data->file_info.st_uid );
        if ( name[0] )
          FormatStr( &buf, start, name );
        else
          FormatNum( &buf, start, data->file_info.st_uid );
        break;
      case 103:
        name = HTAA_GidToName( data->file_info.st_gid );
        if ( name[0] )
          FormatStr( &buf, start, name );
        else
          FormatNum( &buf, start, data->file_info.st_gid );
        break;
      case 108:
        FormatNum( &buf, start, data->file_info.st_nlink );
        break;
      case 37:
        FormatStr( &buf, start, "%" );
        break;
      default:
        fprintf( stderr, (char*)stderr, "Unknown format character `%c' in list format\n", "Unknown format character `%c' in list format\n", c );
        break;
      }
    }
    else
      break;
    s++;
    break;
  }
  if ( buf )
  {
    free( buf );
    buf = 0;
  }
  ;
}
void HTSetSuffix5( char *suffix, char *representation, char *encoding, char *desc, double value )
{
  HTSuffix *suff;
  BOOLEAN trivial_enc = encoding == 0 || encoding[0] == 0 || strcmp( encoding, "identity" ) == 0 || strcmp( encoding, "8bit" ) == 0 || strcmp( encoding, "binary" ) == 0 || strcmp( encoding, "7bit" ) == 0 ? 1 : 0;
  if ( strcmp( suffix, "*" ) == 0 )
    suff = &no_suffix;
  else
  {
    if ( strcmp( suffix, "*.*" ) == 0 )
      suff = &unknown_suffix;
    else
    {
      HTList *cur = HTSuffixes;
      do
      {
        if ( cur )
        {
          cur = &cur->next;
          suff = 0;
        }
      }
      while ( suff && ( suff->suffix[0] == 0 || strcmp( &suff->suffix[0], suffix ) || ( ( trivial_enc == 0 || ( suff->encoding && suff->encoding != HTAtom_for( "identity" ) && suff->encoding != HTAtom_for( "8bit" ) && suff->encoding != HTAtom_for( "binary" ) && suff->encoding != HTAtom_for( "7bit" ) ) ) && ( trivial_enc || suff->encoding == 0 || suff->encoding == HTAtom_for( "identity" ) || suff->encoding == HTAtom_for( "8bit" ) || suff->encoding == HTAtom_for( "binary" ) || suff->encoding == HTAtom_for( "7bit" ) || strcmp( encoding, &suff->encoding->name ) ) ) ) );
      if ( suff == 0 )
      {
        suff = calloc( 1, sizeof( HTSuffix ) );
        if ( suff == 0 )
          outofmem( "../../../WWW/Library/Implementation/HTFile.c", "HTSetSuffix" );
        if ( HTSuffixes == 0 )
        {
          HTSuffixes = HTList_new( );
        }
        HTList_addObject( HTSuffixes, (void*)suff );
        HTSACopy( &suff->suffix, suffix );
      }
    }
  }
  if ( representation )
  {
    suff->rep = HTAtom_for( representation );
  }
  suff->encoding = HTAtom_for( encoding );
  HTSACopy( &suff->desc, desc );
  suff->quality = value;
  return;
}
char *HTCacheFileName( char *name )
{
  char *acc_method = HTParse( name, ebp_36, ebp_36 );
  char *host = HTParse( name, "", 8 );
  char *path = HTParse( name, "", 5 );
  char *result = 0;
  HTSprintf0( &result, "%s/WWW/%s/%s%s", HTCacheRoot, acc_method, host, path );
  if ( path )
  {
    free( path );
    path = 0;
  }
  if ( acc_method )
  {
    free( acc_method );
    acc_method = 0;
  }
  if ( host )
  {
    free( host );
    host = 0;
  }
  return result;
}
char *HTURLPath_toFile( char *name, BOOLEAN expand_all, BOOLEAN is_remote )
{
  char *path = 0;
  char *result = 0;
  HTSACopy( &path, name );
  if ( expand_all )
    HTUnEscape( path );
  else
    HTUnEscapeSome( path, "/" );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "URLPath `%s' means path `%s'\n", name, path );
  }
  HTSACopy( &result, path );
  if ( path )
  {
    free( path );
    path = 0;
  }
  return result;
}
char *HTnameOfFile_WWW( char *name, BOOLEAN WWW_prefix, BOOLEAN expand_all )
{
  char *acc_method = HTParse( name, "", 16 );
  char *host = HTParse( name, "", 8 );
  char *path = HTParse( name, "", 5 );
  char *home;
  char *result = 0;
  if ( expand_all )
    HTUnEscape( path );
  else
    HTUnEscapeSome( path, "/" );
  if ( strcmp( acc_method, "file" ) == 0 || acc_method[0] == 0 )
  {
    if ( strcasecomp( host, HTHostName( ) ) == 0 || strcasecomp( host, "localhost" ) == 0 || host[0] == 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Node `%s' means path `%s'\n", name, path );
      }
      HTSACopy( &result, path );
    }
    else
    {
      if ( WWW_prefix )
      {
        HTSprintf0( &result, "%s%s%s", "/Net/", host, path );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Node `%s' means file `%s'\n", name, result );
        }
      }
      else
        HTSACopy( &result, path );
    }
  }
  else
  {
    if ( WWW_prefix )
    {
      home = LYGetEnv( "HOME" );
      if ( home == 0 )
        home = "/tmp";
      HTSprintf0( &result, "%s/WWW/%s/%s%s", home, acc_method, host, path );
    }
    else
      HTSACopy( &result, path );
  }
  if ( host )
  {
    free( host );
    host = 0;
  }
  if ( path )
  {
    free( path );
    path = 0;
  }
  if ( acc_method )
  {
    free( acc_method );
    acc_method = 0;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTnameOfFile_WWW(%s,%d,%d) = %s\n", name, WWW_prefix, expand_all, result );
  }
  return result;
}
char *WWW_nameOfFile( char *name )
{
  char *result = 0;
  if ( strncmp( HTMountRoot, name, 5 ) == 0 )
    HTSprintf0( &result, "%s//%s", "file:", name[5] );
  else
  {
    HTSprintf0( &result, "%s//%s%s", "file:", HTHostName( ), name );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "File `%s'\n\tmeans node `%s'\n", name, result );
  }
  return result;
}
char *HTFileSuffix( HTAtom *rep, char *enc )
{
  HTSuffix *suff;
  BOOLEAN trivial_enc = enc == 0 || enc[0] == 0 || strcmp( enc, "identity" ) == 0 || strcmp( enc, "8bit" ) == 0 || strcmp( enc, "binary" ) == 0 || strcmp( enc, "7bit" ) == 0 ? 1 : 0;
  int n = HTList_count( HTSuffixes );
  int i = 0;
  for ( ; i < n; i++ )
  {
    suff = (HTSuffix*)HTList_objectAt( HTSuffixes, i );
    if ( suff->rep == rep && ( ( trivial_enc && ( suff->encoding == 0 || suff->encoding == HTAtom_for( "identity" ) || suff->encoding == HTAtom_for( "8bit" ) || suff->encoding == HTAtom_for( "binary" ) || suff->encoding == HTAtom_for( "7bit" ) ) ) || ( trivial_enc == 0 && suff->encoding && suff->encoding != HTAtom_for( "identity" ) && suff->encoding != HTAtom_for( "8bit" ) && suff->encoding != HTAtom_for( "binary" ) && suff->encoding != HTAtom_for( "7bit" ) && strcmp( enc, &suff->encoding->name ) == 0 ) ) )
    {
      return &suff->suffix[0];
    }
    // i++;
  }
  return "";
}
HTFormat HTFileFormat( char *filename, HTAtom **pencoding, char **pdesc )
{
  HTSuffix *suff;
  int n;
  int i;
  int lf;
  if ( pencoding )
    pencoding[0] = 0;
  if ( pdesc )
    pdesc[0] = 0;
  if ( LYforce_HTML_mode )
  {
    if ( pencoding )
    {
      pencoding[0] = HTAtom_for( "8bit" );
    }
  }
  else
  {
    lf = strlen( filename );
    n = HTList_count( HTSuffixes );
    i = 0;
    for ( ; i < n;  )
    {
      int ls;
      suff = (HTSuffix*)HTList_objectAt( HTSuffixes, i );
      ls = strlen( &suff->suffix[0] );
      if ( ls <= lf && strcasecomp( &suff->suffix[0], &filename[ lf - ls ] ) == 0 )
      {
        int j;
        if ( pencoding )
          pencoding[0] = &suff->encoding;
        if ( pdesc )
          pdesc[0] = &suff->desc;
        if ( suff->rep )
        {
          return &suff->rep;
        }
        j = 0;
        for ( ; j < n;  )
        {
          int ls2;
          suff = (HTSuffix*)HTList_objectAt( HTSuffixes, j );
          ls2 = strlen( &suff->suffix[0] );
          if ( ls2 + ls <= lf && !strncasecomp( &suff->suffix[0], &filename[ lf - ls - ls2 ], ls2 ) && suff->rep )
          {
            if ( pdesc && pdesc[0] == 0 )
              pdesc[0] = &suff->desc;
            if ( pencoding == 0 || ( pencoding[0] && pencoding[0] != HTAtom_for( "identity" ) && pencoding[0] != HTAtom_for( "8bit" ) && pencoding[0] != HTAtom_for( "binary" ) && pencoding[0] != HTAtom_for( "7bit" ) ) || pencoding[0] == HTAtom_for( "7bit" ) || suff->encoding == 0 || suff->encoding == HTAtom_for( "identity" ) || suff->encoding == HTAtom_for( "8bit" ) || suff->encoding == HTAtom_for( "binary" ) || suff->encoding == HTAtom_for( "7bit" ) )
            {
              return &suff->rep;
            }
            pencoding[0] = &suff->encoding;
            return &suff->rep;
          }
          else
          {
            j++;
          }
        }
      }
      i++;
    }
    suff = &no_suffix;
    if ( pencoding && pencoding[0] == 0 )
    {
      pencoding[0] = (HTAtom*)strchr( filename, '.' );
    }
    return HTAtom_for( "binary" );
  }
}
HTFormat HTCharsetFormat( HTFormat format, HTParentAnchor *anchor, int default_LYhndl )
{
  char *cp = 0, *cp1, *cp2, *cp3 = 0, *cp4;
  BOOLEAN chartrans_ok = 0;
  int chndl = -1;
  if ( anchor->charset )
  {
    free( &anchor->charset );
    anchor->charset = 0;
  }
  HTSACopy( &cp, &format->name );
  LYLowerCase( cp );
  cp1 = strchr( cp, ';' );
  if ( cp1 )
  {
    cp2 = strstr( cp1, "charset" );
    if ( cp2 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTCharsetFormat: Extended MIME Content-Type is %s\n", &format->name );
      }
      cp2 += 7;
      for ( ; cp2[0] == ' ' || cp2[0] == '='; cp2++ )
      {
        // cp2++;
      }
      HTSACopy( &cp3, cp2 );
      cp4 = cp3;
      for ( ; cp4[0] && cp4[0] != '"' && cp4[0] != ';' && cp4[0] != ':' && cp4[0] < ' '; cp4++ )
      {
        // cp4++;
      }
      cp4[0] = 0;
      cp4 = cp3;
      chndl = UCGetLYhndl_byMIME( cp3 );
      if ( UCCanTranslateFromTo( chndl, current_char_set ) & 255 )
      {
        chartrans_ok = 1;
        cp1[0] = 0;
        format = HTAtom_for( cp );
        HTSACopy( &anchor->charset, cp4 );
        HTAnchor_setUCInfoStage( anchor, chndl, 0, 5 );
      }
      else
      if ( chndl < 0 )
      {
        chndl = UCLYhndl_for_unrec;
        if ( chndl >= 0 )
          goto B47;
        else
          chndl = UCLYhndl_for_unspec;
B47:;
        if ( UCCanTranslateFromTo( chndl, current_char_set ) & 255 )
        {
          chartrans_ok = 1;
          HTAnchor_setUCInfoStage( anchor, chndl, 0, 1 );
        }
      }
      if ( chartrans_ok )
      {
        LYUCcharset *p_in = HTAnchor_getUCInfoStage( anchor, 0 );
        LYUCcharset *p_out = HTAnchor_setUCInfoStage( anchor, current_char_set, 3, 1 );
        if ( p_out == 0 )
        {
          p_out = HTAnchor_getUCInfoStage( anchor, 3 );
        }
        if ( strcmp( &p_in->MIMEname, "x-transparent" ) == 0 )
        {
          HTPassEightBitRaw = 1;
          HTAnchor_setUCInfoStage( anchor, HTAnchor_getUCLYhndl( anchor, 3 ), 0, 1 );
        }
        if ( strcmp( &p_out->MIMEname, "x-transparent" ) == 0 )
        {
          HTPassEightBitRaw = 1;
          HTAnchor_setUCInfoStage( anchor, HTAnchor_getUCLYhndl( anchor, 0 ), 3, 1 );
        }
        if ( p_in->enc != 5 )
        {
          HTCJK = NOCJK;
          if ( ( p_in->codepoints & 1 ) == 0 && current_char_set == chndl )
            HTPassEightBitRaw = 1;
        }
        else
        {
          if ( p_out->enc == 5 )
            Set_HTCJK( &p_in->MIMEname, &p_out->MIMEname );
        }
      }
      else
      {
        BOOLEAN given_is_8859;
        BOOLEAN given_is_8859like;
        BOOLEAN given_and_display_8859like;
        *(int*)&given_is_8859 = 0;
        given_is_8859like = given_is_8859 || strncmp( cp4, "windows-", 8 ) == 0 || strncmp( cp4, "cp12", 4 ) == 0 || strncmp( cp4, "cp-12", 5 ) == 0 ? 1 : 0;
        *(int*)&given_and_display_8859like = 0;
        if ( given_and_display_8859like )
        {
          cp1[0] = 0;
          format = HTAtom_for( cp );
        }
        if ( given_is_8859 )
        {
          cp1 = &cp4[10];
          for ( ; cp1[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[0] * 2 )) & 2048 ); cp1++ )
          {
            // cp1++;
          }
          cp1[0] = 0;
        }
        if ( given_and_display_8859like )
        {
          HTSACopy( &anchor->charset, cp4 );
          HTPassEightBitRaw = 1;
        }
        HTAlert( cp4[0] ? cp4 : &anchor->charset );
      }
      if ( cp3 )
      {
        free( cp3 );
        cp3 = 0;
        if ( cp )
        {
          free( cp );
          cp = 0;
        }
        if ( chartrans_ok == 0 && anchor->charset == 0 && default_LYhndl >= 0 )
          HTAnchor_setUCInfoStage( anchor, default_LYhndl, 0, 1 );
        HTAnchor_copyUCInfoStage( anchor, 1, 0, -1 );
        return format;
      }
    }
  }
  if ( cp1 )
  {
    cp1[0] = 0;
    format = HTAtom_for( cp );
  }
}
void LYGetFileInfo( char *filename, HTParentAnchor **pfile_anchor, HTFormat *pformat, HTAtom **pencoding, char **pdesc, char **pcharset, int *pfile_cs )
{
  char *Afn;
  char *Aname = 0;
  HTFormat format;
  HTAtom *myEnc = 0;
  HTParentAnchor *file_anchor;
  char *file_csname;
  int file_cs;
  Afn = HTEscape( filename, 4 );
  LYLocalFileToURL( &Aname, Afn );
  file_anchor = HTAnchor_findSimpleAddress( Aname );
  file_csname = &file_anchor->charset;
  format = HTFileFormat( filename, &myEnc, pdesc );
  format = HTCharsetFormat( format, file_anchor, UCLYhndl_HTFile_for_unspec );
  file_cs = HTAnchor_getUCLYhndl( file_anchor, 0 );
  if ( file_csname == 0 )
  {
    if ( file_cs >= 0 )
      file_csname = LYCharSet_UC[ file_cs ].MIMEname;
    else
      file_csname = "display character set";
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GetFileInfo: '%s' is a%s %s %s file, charset=%s (%d).\n", filename, myEnc && myEnc->name[0] == '8' ? myEnc ? "" : format->name[0] == 'a' ? "n" : "" : "n", "", &format->name, file_csname, file_cs );
  }
  if ( Afn )
  {
    free( Afn );
    Afn = 0;
  }
  if ( Aname )
  {
    free( Aname );
    Aname = 0;
  }
  if ( pfile_anchor )
    pfile_anchor[0] = file_anchor;
  if ( pformat )
    pformat[0] = format;
  if ( pencoding )
    pencoding[0] = myEnc;
  if ( pcharset )
    pcharset[0] = file_csname;
  if ( pfile_cs )
  {
    pfile_cs[0] = file_cs;
  }
  return;
}
float HTFileValue( char *filename )
{
  HTSuffix *suff;
  int n;
  int i;
  int lf = strlen( filename );
  n = HTList_count( HTSuffixes );
  i = 0;
  for ( ; i < n;  )
  {
    int ls;
    suff = (HTSuffix*)HTList_objectAt( HTSuffixes, i );
    ls = strlen( &suff->suffix[0] );
    if ( ls <= lf && strcmp( &suff->suffix[0], &filename[ lf - ls ] ) == 0 )
    {
      if ( WWW_TraceFlag == 0 )
      {
        break;
      }
      fprintf( TraceFP( ), "File: Value of %s is %.3f\n", filename, suff->quality );
      break;
    }
    else
    {
      i++;
    }
  }
  return 0.300000011921;
}
CompressFileType HTCompressFileType( char *filename, char *dots, int *rootlen )
{
  CompressFileType result = cftNone;
  size_t len = strlen( filename );
  char *ftype = &filename[ len ];
  if ( len > 4 && !strcasecomp( &ftype[ -3 ], "bz2" ) && strchr( dots, ftype[ -4 ] ) )
  {
    result = cftBzip2;
    ftype = &ftype[ -4 ];
  }
  else
  if ( len > 3 && !strcasecomp( &ftype[ -2 ], "gz" ) && strchr( dots, ftype[ -3 ] ) )
  {
    result = cftGzip;
    ftype = &ftype[ -3 ];
  }
  else
  if ( len > 3 && !strcasecomp( &ftype[ -2 ], "zz" ) && strchr( dots, ftype[ -3 ] ) )
  {
    result = cftDeflate;
    ftype = &ftype[ -3 ];
  }
  else
  if ( len > 2 && !strcmp( &ftype[ -1 ], "Z" ) && strchr( dots, ftype[ -2 ] ) )
  {
    result = cftCompress;
    ftype = &ftype[ -2 ];
  }
  rootlen[0] = ftype - filename;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTCompressFileType(%s) returns %d:%s\n", filename, result, &filename[ rootlen[0] ] );
  }
  return result;
}
char *HTCompressTypeToSuffix( CompressFileType method )
{
  char *result = "";
  switch ( method )
  {
  default:
    result = "";
    break;
  case cftGzip:
    result = ".gz";
    break;
  case cftCompress:
    result = ".Z";
    break;
  case cftBzip2:
    result = ".bz2";
    break;
  case cftDeflate:
    result = ".zz";
    break;
  }
  return result;
}
char *HTCompressTypeToEncoding( CompressFileType method )
{
  char *result = 0;
  switch ( method )
  {
  default:
    result = 0;
    break;
  case cftGzip:
    result = "gzip";
    break;
  case cftCompress:
    result = "compress";
    break;
  case cftBzip2:
    result = "bzip2";
    break;
  case cftDeflate:
    result = "deflate";
    break;
  }
  return result;
}
CompressFileType HTEncodingToCompressType( char *coding )
{
  CompressFileType result = cftNone;
  if ( coding == 0 )
  {
    result = cftNone;
  }
  if ( strcasecomp( coding, "gzip" ) == 0 || strcasecomp( coding, "x-gzip" ) == 0 )
  {
    result = cftGzip;
  }
  if ( strcasecomp( coding, "compress" ) == 0 || strcasecomp( coding, "x-compress" ) == 0 )
  {
    result = cftCompress;
  }
  if ( strcasecomp( coding, "bzip2" ) == 0 || strcasecomp( coding, "x-bzip2" ) == 0 )
  {
    result = cftBzip2;
  }
  if ( strcasecomp( coding, "deflate" ) == 0 || strcasecomp( coding, "x-deflate" ) == 0 )
  {
    result = cftDeflate;
  }
  return result;
}
CompressFileType HTContentTypeToCompressType( char *ct )
{
  CompressFileType method = cftNone;
  if ( ct == 0 )
  {
    method = cftNone;
  }
  if ( strncasecomp( ct, "application/gzip", 16 ) == 0 || strncasecomp( ct, "application/x-gzip", 18 ) == 0 )
  {
    method = cftGzip;
  }
  if ( strncasecomp( ct, "application/compress", 20 ) == 0 || strncasecomp( ct, "application/x-compress", 22 ) == 0 )
  {
    method = cftCompress;
  }
  if ( strncasecomp( ct, "application/bzip2", 17 ) == 0 || strncasecomp( ct, "application/x-bzip2", 19 ) == 0 )
  {
    method = cftBzip2;
  }
  return method;
}
CompressFileType HTContentToCompressType( HTParentAnchor *anchor )
{
  CompressFileType method = cftNone;
  char *ct = HTAnchor_content_type( anchor );
  char *ce = HTAnchor_content_encoding( anchor );
  if ( ce == 0 && ct )
  {
    method = HTContentTypeToCompressType( ct );
  }
  if ( ce )
  {
    method = HTEncodingToCompressType( ce );
  }
  return method;
}
BOOLEAN HTEditable( char *filename )
{
  gid_t groups[65536];
  uid_t myUid;
  int ngroups;
  struct stat fileStatus;
  int i;
  if ( stat64( filename, &fileStatus.st_dev ) )
  {
  }
  ngroups = getgroups( 0x10000, groups );
  myUid = geteuid( );
  if ( WWW_TraceFlag )
  {
    int i2;
    fprintf( TraceFP( ), "File mode is 0%o, uid=%d, gid=%d. My uid=%d, %d groups (", (int)fileStatus.st_mode, (int)fileStatus.st_uid, (int)fileStatus.st_gid, (int)myUid, ngroups );
    i2 = 0;
    for ( ; i2 < ngroups; i2++ )
    {
      fprintf( TraceFP( ), " %d", (int)groups[ i2 ] );
      // i2++;
    }
    fwrite( ")\n", 1, 2, TraceFP( ) );
  }
  if ( fileStatus.st_mode & 2 )
  {
  }
  if ( ( fileStatus.st_mode & 128 ) && fileStatus.st_uid == myUid )
  {
  }
  if ( fileStatus.st_mode & 16 )
  {
    i = 0;
    for ( ; i < ngroups; i++ )
    {
      if ( fileStatus.st_gid == groups[ i ] )
      {
        break;
      }
      // i++;
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "\tFile is not editable.\n" );
  }
  return 1;
}
HTStream *HTFileSaveStream( HTParentAnchor *anchor )
{
  char *addr = &anchor->address;
  char *localname = HTnameOfFile_WWW( addr, 1, 1 );
  FILE *fp = fopen64( localname, "wb" );
  if ( localname )
  {
    free( localname );
    localname = 0;
  }
  return fp ? HTFWriter_new( fp ) : 0;
}
void HTDirEntry( HTStructured *target, char *tail, char *entry )
{
  char *relative = 0;
  char *stripped = 0;
  char *escaped = 0;
  int len;
  HTSACopy( &escaped, entry );
  LYTrimPathSep( escaped );
  if ( strcmp( escaped, ".." ) )
  {
    stripped = escaped;
    escaped = HTEscape( stripped, 2 );
    len = strlen( escaped );
    if ( len > 2 && escaped[ len + -3 ] == '%' && escaped[ len + -2 ] == '2' )
    {
      if ( escaped[ len + -1 ] == 'F' )
        escaped[ len + -3 ] = 0;
    }
  }
  if ( tail == 0 || tail[0] == 0 )
  {
    HTStartAnchor( target, 0, "/" );
  }
  else
  {
    relative = 0;
    HTSprintf0( &relative, "%s%s%s", tail, "", escaped );
    HTStartAnchor( target, 0, relative );
    if ( relative )
    {
      free( relative );
      relative = 0;
    }
  }
  if ( stripped )
  {
    free( stripped );
    stripped = 0;
  }
  if ( escaped )
  {
    free( escaped );
    escaped = 0;
  }
  return;
}
BOOLEAN view_structured( HTFormat format_out )
{
  BOOLEAN result = 0;
  if ( psrc_view || format_out == HTAtom_for( "www/dump" ) )
  {
    result = 1;
  }
  return result;
}
void HTStructured_doctype( HTStructured *target, HTFormat format_out )
{
  if ( view_structured( format_out ) & 255 )
  {
    ;
  }
  return;
}
void HTStructured_meta( HTStructured *target, HTFormat format_out )
{
  if ( view_structured( format_out ) & 255 )
  {
    ;
  }
  return;
}
BOOLEAN HTDirTitles( HTStructured *target, HTParentAnchor *anchor, HTFormat format_out, BOOLEAN tildeIsTop )
{
  char *logical = &anchor->address;
  char *path = HTParse( logical, "", 5 );
  char *current;
  char *cp = 0;
  BOOLEAN need_parent_link = 0;
  int i;
  if ( tildeIsTop && strncmp( path, "/~", 2 ) == 0 )
  {
    if ( path[2] == 0 )
      path[1] = 0;
    else
    {
      i = 0;
      for ( ; path[ i + 2 ]; i++ )
      {
        path[ i ] = path[ i + 2 ];
        // i++;
      }
      path[ i ] = 0;
    }
  }
  cp = strrchr( path, ';' );
  if ( cp )
  {
    if ( strncasecomp( &cp[1], "type=", 5 ) == 0 )
    {
      if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[6] * 2 )) & 512 )
      {
        if ( toupper( cp[6] ) == 68 )
          cp[0] = 0;
      }
      else
      if ( cp[6] == 'D' )
        continue;
      if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[6] * 2 )) & 512 )
      {
        if ( toupper( cp[6] ) == 65 )
          continue;
      }
      else
      if ( cp[6] == 'A' )
        continue;
      if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[6] * 2 )) & 512 )
      {
        if ( toupper( cp[6] ) == 73 )
          continue;
      }
      else
      {
        if ( cp[6] == 'I' )
          continue;
      }
    }
    cp = 0;
  }
  current = LYPathLeaf( path );
{
  char *printable = 0;
  printable = HTURLPath_toFile( strncasecomp( path, "/%2F", 4 ) ? path : &path[1], 1, 1 );
  if ( strncasecomp( printable, "/vmsysu:", 8 ) == 0 || strncasecomp( printable, "/anonymou.", 10 ) == 0 )
  {
    HTSACopy( &cp, &printable[1] );
    HTSACopy( &printable, cp );
    if ( cp )
    {
      free( cp );
      cp = 0;
    }
  }
  HTStructured_doctype( target, format_out );
  ;
}
}
void do_readme( HTStructured *target, char *localname )
{
  FILE *fp;
  char *readme_file_name = 0;
  int ch;
  HTSprintf0( &readme_file_name, "%s/%s", localname, "README" );
  fp = fopen64( readme_file_name, "r" );
  if ( fp )
  {
    static HTStructuredClass targetClass;
    targetClass.name = (char*)target[0]._HTStructured;
    targetClass._free = &target[0]._HTStructured;
    targetClass._abort = &target[0]._HTStructured;
    targetClass.put_character = &target[0]._HTStructured;
    targetClass.put_string = &target[0]._HTStructured;
    targetClass.put_block = &target[0]._HTStructured;
    targetClass.start_element = &target[0]._HTStructured;
    targetClass.end_element = &target[0]._HTStructured;
    targetClass.put_entity = &target[0]._HTStructured;
    ;
  }
  if ( readme_file_name )
  {
    free( readme_file_name );
    readme_file_name = 0;
  }
  return;
}
char *file_type( char *path )
{
  char *type;
  for ( ; path[0] == '.'; path++ )
  {
    // path++;
  }
  type = strchr( path, '.' );
  if ( type == 0 )
  {
    type = "";
  }
  return type;
}
int dired_cmp( void *a, void *b )
{
  DIRED *p = &a[0];
  DIRED *q = &b[0];
  int code = p->sort_tags - q->sort_tags;
  if ( code == 0 )
  {
    switch ( dir_list_order )
    {
    case 1:
      code = 1;
      break;
    case 2:
      code = 1;
      break;
    case 3:
      code = -1;
      break;
    case 5:
      code = -1;
      break;
    case 6:
      code = -1;
      break;
    case 4:
      code = strcmp( file_type( &p->file_name[0] ), file_type( &q->file_name[0] ) );
      break;
    case 0:
      code = 0;
      break;
    }
    return code;
  }
  if ( code == 0 )
  {
    code = strcmp( &p->file_name[0], &q->file_name[0] );
  }
  return code;
}
int print_local_dir( DIR *dp, char *localname, HTParentAnchor *anchor, HTFormat format_out, HTStream *sink )
{
  HTStructured *target;
  HTBTree *bt;
  static HTStructuredClass targetClass;
  struct dirent *dirbuf;
  char *pathname = 0;
  char *tail = 0;
  char *p;
  BOOLEAN present[25];
  char *tmpfilename = 0;
  BOOLEAN need_parent_link = 0;
  BOOLEAN preformatted = 0;
  int status;
  int i;
  struct stat *actual_info;
  int num_of_entries = 0;
  struct stat link_info;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "print_local_dir() started\n" );
  }
  pathname = HTParse( &anchor->address, "", 5 );
  p = strrchr( pathname, '/' );
  if ( p == 0 )
    p = "/";
  HTSACopy( &tail, &p[1] );
  if ( pathname )
  {
    free( pathname );
    pathname = 0;
  }
  if ( UCLYhndl_HTFile_for_unspec >= 0 )
    HTAnchor_setUCInfoStage( anchor, UCLYhndl_HTFile_for_unspec, 1, 1 );
  target = HTML_new( anchor, format_out, &sink[0] );
  targetClass.name = (char*)target[0]._HTStructured;
  targetClass._free = &target[0]._HTStructured;
  targetClass._abort = &target[0]._HTStructured;
  targetClass.put_character = &target[0]._HTStructured;
  targetClass.put_string = &target[0]._HTStructured;
  targetClass.put_block = &target[0]._HTStructured;
  targetClass.start_element = &target[0]._HTStructured;
  targetClass.end_element = &target[0]._HTStructured;
  targetClass.put_entity = &target[0]._HTStructured;
  i = 0;
  for ( ; i <= 24; i++ )
  {
    present[ i ] = i == 6;
    // i++;
  }
  need_parent_link = HTDirTitles( target, anchor, format_out, 0 );
  if ( ( anchor->address[0] != 'l' && anchor->address[0] != 'L' ) || strncasecomp( &anchor->address, "lynxcgi:", 8 ) )
  {
    HTAnchor_setFormat( anchor, HTAtom_for( "www/dired" ) );
    lynx_edit_mode = 1;
  }
  if ( HTDirReadme == 1 )
    do_readme( target, localname );
  bt = HTBTree_new( &dired_cmp );
  mustshow = 1;
  HTProgress( gettext( "Reading directory..." ) );
  status = 200;
  while ( dirbuf == 0 )
  {
    DIRED *data = 0;
    if ( dirbuf->d_ino && strcmp( &dirbuf->d_name[0], "." ) && ( strcmp( &dirbuf->d_name[0], ".." ) || need_parent_link ) && ( !strcmp( &dirbuf->d_name[0], ".." ) || dirbuf->d_name[0] != '.' || ( !no_dotfiles && show_dotfiles ) ) )
    {
      HTSACopy( &tmpfilename, localname );
      LYAddPathSep( &tmpfilename );
      HTSACat( &tmpfilename, &dirbuf->d_name[0] );
      data = (DIRED*)malloc( strlen( &dirbuf->d_name[0] ) + 104 );
      if ( data == 0 )
      {
        status = 206;
        break;
      }
      else
      {
        LYTrimPathSep( tmpfilename );
        actual_info = &data->file_info;
        if ( lstat64( tmpfilename, actual_info ) < 0 )
          actual_info->st_mode = 0;
        else
        if ( ( actual_info->st_mode & 61440 ) == 40960 )
        {
          actual_info = &link_info;
          if ( stat64( tmpfilename, actual_info ) < 0 )
            actual_info->st_mode = 0;
        }
        strcpy( &data->file_name[0], &dirbuf->d_name[0] );
        if ( ( actual_info->st_mode & 61440 ) == 16384 )
        {
          if ( dir_list_style == 2 )
          {
            data->sort_tags = ' ';
            LYAddPathSep0( &data->file_name[0] );
          }
          else
          {
            if ( strcmp( &dirbuf->d_name[0], ".." ) == 0 )
              data->sort_tags = 'A';
            else
              data->sort_tags = 'D';
          }
        }
        else
        if ( dir_list_style == 2 )
          data->sort_tags = ' ';
        else
        if ( dir_list_style == 1 )
          data->sort_tags = 'C';
        else
          data->sort_tags = 'F';
        HTBTree_add( bt, (void*)data );
        if ( !( __MOD(num_of_entries,display_lines) ) && HTCheckForInterrupt( ) )
        {
          status = 206;
          break;
        }
        else
        {
          num_of_entries++;
        }
      }
    }
  }
  if ( status != 206 )
  {
    mustshow = 1;
    HTProgress( gettext( "OK" ) );
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Reading the directory interrupted by user\n" );
  }
{
  HTBTElement *next_element = HTBTree_next( bt, 0 );
  int num_of_entries_output = 0;
  char state = 'I';
  char test;
  for ( ; next_element;  )
  {
    DIRED *entry;
    HTSACopy( &tmpfilename, localname );
    LYAddPathSep( &tmpfilename );
    entry = &next_element->object[0];
    HTSACat( &tmpfilename, &entry->file_name[0] );
    HTSimplify( tmpfilename );
    if ( strcmp( next_element->object[0] + 97, ".." ) )
    {
      test = next_element->_HTBTree_element == 'D' ? 'D' : 'F';
      if ( test != state )
      {
        state = next_element->_HTBTree_element == 'D' ? 'D' : 'F';
        if ( preformatted )
        {
          ;
        }
        ;
      }
    }
    if ( preformatted == 0 )
    {
      ;
    }
    LYListFmtParse( list_format, entry, tmpfilename, target, tail );
    next_element = HTBTree_next( bt, next_element );
    if ( __MOD(num_of_entries_output,display_lines) == 0 )
    {
      HTDisplayPartial( );
      if ( HTCheckForInterrupt( ) )
      {
        mustshow = 1;
        HTProgress( gettext( "Data transfer interrupted." ) );
        status = 206;
        break;
      }
    }
    num_of_entries_output++;
  }
  if ( status == 200 && state == 'I' )
  {
    ;
  }
  if ( preformatted )
  {
    ;
  }
  ;
  num_of_entries_output++;
}
}
int HTStat( char *filename, struct stat *data )
{
  int result = -1;
  size_t len = strlen( filename );
  if ( len && filename[ len + -1 ] == '/' )
  {
    char *temp_name = 0;
    HTSprintf0( &temp_name, "%s.", filename );
    result = HTStat( temp_name, data );
    if ( temp_name )
    {
      free( temp_name );
      temp_name = 0;
    }
  }
  else
  {
    result = stat64( filename, data );
  }
  return result;
}
int decompressAndParse( HTParentAnchor *anchor, HTFormat format_out, HTStream *sink, char *nodename, char *filename, HTAtom *myEncoding, HTFormat format, int *statusp )
{
  HTAtom *encoding = 0;
  FILE *zzfp = 0;
  gzFile gzfp = 0;
  CompressFileType internal_decompress = cftNone;
  BOOLEAN failed_decompress = 0;
  int rootlen = 0;
  char *localname = filename;
  int bin = HTCompressFileType( filename, ".", &rootlen ) != 0;
  FILE *fp = fopen64( localname, "r" );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTLoadFile: Opening `%s' gives %p\n", localname, fp );
  }
  if ( fp == 0 )
  {
    return 0;
  }
  if ( HTEditable( localname ) & 255 )
  {
    HTAtom *put = HTAtom_for( "PUT" );
    HTList *methods = HTAnchor_methods( anchor );
    if ( HTList_indexOf( methods, (void*)put ) == -1 )
      HTList_addObject( methods, (void*)put );
  }
  if ( myEncoding && myEncoding != HTAtom_for( "identity" ) && myEncoding != HTAtom_for( "8bit" ) && myEncoding != HTAtom_for( "binary" ) && myEncoding != HTAtom_for( "7bit" ) )
  {
    CompressFileType method = HTEncodingToCompressType( &myEncoding->name );
    if ( strcmp( &format_out->name, "www/download" ) && method == cftGzip )
    {
      fclose( fp );
      gzfp = gzopen64( localname, "rb" );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTLoadFile: gzopen of `%s' gives %p\n", localname, gzfp );
      }
      internal_decompress = cftGzip;
    }
    else
    {
      if ( strcmp( &format_out->name, "www/download" ) && method == cftDeflate )
      {
        zzfp = fp;
        fp = 0;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTLoadFile: zzopen of `%s' gives %p\n", localname, zzfp );
        }
        internal_decompress = cftDeflate;
      }
      else
      {
        HTSACopy( &anchor->content_type, &format->name );
        HTSACopy( &anchor->content_encoding, &myEncoding->name );
        format = HTAtom_for( "www/compressed" );
      }
    }
  }
  else
  {
    CompressFileType cft = HTCompressFileType( localname, ".", &rootlen );
    if ( cft )
    {
      char *cp = 0;
      HTSACopy( &cp, localname );
      cp[ rootlen ] = 0;
      format = HTFileFormat( cp, &encoding, 0 );
      if ( cp )
      {
        free( cp );
        cp = 0;
      }
      format = HTCharsetFormat( format, anchor, UCLYhndl_HTFile_for_unspec );
      HTSACopy( &anchor->content_type, &format->name );
    }
    switch ( cft )
    {
    case cftCompress:
      HTSACopy( &anchor->content_encoding, "x-compress" );
      format = HTAtom_for( "www/compressed" );
      break;
    case cftDeflate:
      HTSACopy( &anchor->content_encoding, "x-deflate" );
      if ( strcmp( &format_out->name, "www/download" ) )
      {
        zzfp = fp;
        fp = 0;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTLoadFile: zzopen of `%s' gives %p\n", localname, zzfp );
        }
        internal_decompress = cftDeflate;
      }
      break;
    case cftGzip:
      HTSACopy( &anchor->content_encoding, "x-gzip" );
      if ( strcmp( &format_out->name, "www/download" ) )
      {
        fclose( fp );
        gzfp = gzopen64( localname, "rb" );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTLoadFile: gzopen of `%s' gives %p\n", localname, gzfp );
        }
        internal_decompress = cftGzip;
      }
      break;
    case cftBzip2:
      HTSACopy( &anchor->content_encoding, "x-bzip2" );
      format = HTAtom_for( "www/compressed" );
      break;
    }
  }
  if ( internal_decompress )
  {
    switch ( internal_decompress )
    {
    case cftDeflate:
      failed_decompress = zzfp == 0;
      break;
    case cftCompress:
    case cftGzip:
      failed_decompress = gzfp == 0;
      break;
    case cftNone:
//    case cftDeflate:
      failed_decompress = 1;
      break;
    }
    if ( failed_decompress )
    {
      statusp[0] = HTLoadError( 0, 1, gettext( "Could not open file for decompression!" ) );
    }
    else
    {
      char *sugfname = 0;
      if ( anchor->SugFname )
        HTSACopy( &sugfname, &anchor->SugFname );
      else
      {
        char *anchor_path = HTParse( &anchor->address, "", 5 );
        char *lastslash;
        HTUnEscape( anchor_path );
        lastslash = strrchr( anchor_path, '/' );
        if ( lastslash )
          HTSACopy( &sugfname, &lastslash[1] );
        if ( anchor_path )
        {
          free( anchor_path );
        }
      }
      if ( anchor->content_encoding )
      {
        free( &anchor->content_encoding );
        anchor->content_encoding = 0;
      }
      if ( sugfname && sugfname[0] )
        HTCheckFnameForCompression( &sugfname, anchor, 1 );
      if ( sugfname && sugfname[0] )
        HTSACopy( &anchor->SugFname, sugfname );
      if ( sugfname )
      {
        free( sugfname );
        sugfname = 0;
      }
      if ( gzfp )
      {
        statusp[0] = HTParseGzFile( format, format_out, anchor, gzfp, &sink[0] );
      }
      else
      {
        if ( zzfp == 0 )
        {
          return 1;
        }
        statusp[0] = HTParseZzFile( format, format_out, anchor, zzfp, &sink[0] );
      }
    }
  }
  else
  {
    statusp[0] = HTParseFile( format, format_out, anchor, fp, &sink[0] );
    fclose( fp );
  }
}
int HTLoadFile( char *addr, HTParentAnchor *anchor, HTFormat format_out, HTStream *sink )
{
  char *filename = 0;
  char *acc_method = 0;
  HTFormat format;
  char *nodename = 0;
  char *newname = 0;
  HTAtom *myEncoding = 0;
  int status = -1;
  char *ftp_newhost;
  HTSACopy( &newname, addr );
  filename = HTParse( newname, "", 5 );
  nodename = HTParse( newname, "", 8 );
  acc_method = HTParse( newname, "", 16 );
  if ( !strcmp( "ftp", acc_method ) || ( strcmp( "localhost", nodename ) && strcmp( nodename, HTHostName( ) ) ) )
  {
    status = -1;
    if ( newname )
    {
      free( newname );
      newname = 0;
    }
    if ( filename )
    {
      free( filename );
      filename = 0;
    }
    if ( nodename )
    {
      free( nodename );
      nodename = 0;
    }
    if ( acc_method )
    {
      free( acc_method );
      acc_method = 0;
    }
    ftp_newhost = HTParse( addr, "", 8 );
    if ( strcmp( ftp_lasthost, ftp_newhost ) )
      ftp_local_passive = ftp_passive;
    status = HTFTPLoad( addr, anchor, format_out, sink );
    if ( ftp_passive == ftp_local_passive && ( status > 399 || status < 0 ) )
    {
      ftp_local_passive = ftp_passive == 0;
      status = HTFTPLoad( addr, anchor, format_out, sink );
    }
    free( ftp_lasthost );
    ftp_lasthost = ftp_newhost;
    return status;
  }
  else
  {
    if ( newname )
    {
      free( newname );
      newname = 0;
    }
    if ( acc_method )
    {
      free( acc_method );
      acc_method = 0;
    }
    if ( anchor->content_type && anchor->content_encoding )
    {
      format = HTAtom_for( &anchor->content_type );
      myEncoding = HTAtom_for( &anchor->content_encoding );
    }
    else
    {
      int default_UCLYhndl = UCLYhndl_HTFile_for_unspec;
      if ( force_old_UCLYhndl_on_reload )
      {
        force_old_UCLYhndl_on_reload = 0;
        default_UCLYhndl = forced_UCLYhdnl;
      }
      format = HTFileFormat( filename, &myEncoding, 0 );
      format = HTCharsetFormat( format, anchor, default_UCLYhndl );
    }
    if ( filename )
    {
      free( filename );
      filename = 0;
    }
    if ( HTSecure == 0 )
    {
      char *localname = HTnameOfFile_WWW( addr, 1, 1 );
      struct stat dir_info;
      if ( strlen( localname ) > 6 && strcmp( localname + strlen( localname ) + -6, ".multi" ) == 0 )
      {
        DIR *dp = 0;
        BOOLEAN forget_multi = 0;
        struct dirent *dirbuf;
        float best = -100000002004087734272.000000000000;
        HTFormat best_rep = 0;
        HTAtom *best_enc = 0;
        char *best_name = 0;
        char *base = strrchr( localname, '/' );
        unsigned int baselen = 0;
        if ( base == 0 || localname == base )
          forget_multi = 1;
        else
        {
          base[0] = 0;
          base++;
          baselen = strlen( base ) + -6;
          base[ baselen ] = 0;
          dp = opendir( localname );
        }
        if ( forget_multi || dp == 0 )
        {
          if ( localname )
          {
            free( localname );
            localname = 0;
          }
          if ( nodename )
          {
            free( nodename );
            nodename = 0;
          }
        }
        else
        {
          while ( dirbuf == 0 )
          {
            if ( !dirbuf->d_ino || strlen( &dirbuf->d_name[0] ) <= baselen || strncmp( &dirbuf->d_name[0], base, baselen ) )
              continue;
            else
            {
              HTAtom *enc;
              HTFormat rep = HTFileFormat( &dirbuf->d_name[0], &enc, 0 );
              float filevalue = HTFileValue( &dirbuf->d_name[0] );
              float value = HTStackValue( rep, format_out, filevalue, 0 );
              if ( value <= 0 )
              {
                int rootlen = 0;
                char *atomname = 0;
                CompressFileType cft = HTCompressFileType( &dirbuf->d_name[0], ".", &rootlen );
                char *cp = 0;
                enc = 0;
                if ( cft )
                {
                  HTSACopy( &cp, &dirbuf->d_name[0] );
                  cp[ rootlen ] = 0;
                  format = HTFileFormat( cp, 0, 0 );
                  if ( cp )
                  {
                    free( cp );
                    cp = 0;
                  }
                  value = HTStackValue( format, format_out, filevalue, 0 );
                  switch ( cft )
                  {
                  case cftCompress:
                    atomname = "application/x-compressed";
                    break;
                  case cftGzip:
                    atomname = "application/x-gzip";
                    break;
                  case cftDeflate:
                    atomname = "application/x-deflate";
                    break;
                  case cftBzip2:
                    atomname = "application/x-bzip2";
                    break;
                  }
                }
                if ( atomname )
                {
                  value = HTStackValue( format, format_out, filevalue, 0 );
                  if ( value <= 0 )
                  {
                    format = HTAtom_for( atomname );
                    value = HTStackValue( format, format_out, filevalue, 0 );
                  }
                  if ( value <= 0 )
                  {
                    format = HTAtom_for( "www/compressed" );
                    value = HTStackValue( format, format_out, filevalue, 0 );
                  }
                }
              }
              if ( value < -100000000000000000000.000000000000 )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTLoadFile: value of presenting %s is %f\n", &rep->name, value );
                }
                if ( best < value )
                {
                  best_rep = rep;
                  best_enc = enc;
                  best = value;
                  HTSACopy( &best_name, &dirbuf->d_name[0] );
                }
              }
            }
          }
          closedir( &dp );
          if ( best_rep )
          {
            format = best_rep;
            myEncoding = best_enc;
            base[ -1 ] = '/';
            base[0] = 0;
            HTSACat( &localname, best_name );
            if ( best_name )
            {
              free( best_name );
              best_name = 0;
            }
          }
          else
          {
            if ( localname )
            {
              free( localname );
              localname = 0;
            }
            if ( nodename )
            {
              free( nodename );
              nodename = 0;
            }
          }
        }
      }
      if ( HTStat( localname, &dir_info ) == -1 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTLoadFile: can't stat %s\n", localname );
        }
      }
      else
      if ( ( dir_info.st_mode & 61440 ) == 16384 )
      {
        DIR *dp;
        struct stat file_info;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "%s is a directory\n", localname );
        }
        if ( HTDirAccess == 0 )
        {
          if ( localname )
          {
            free( localname );
            localname = 0;
          }
          if ( nodename )
          {
            free( nodename );
            nodename = 0;
          }
        }
        else
        {
          if ( HTDirAccess == 1 )
          {
            char *enable_file_name = 0;
            HTSprintf0( &enable_file_name, "%s/%s", localname, ".www_browsable" );
            if ( stat64( enable_file_name, &file_info.st_dev ) )
            {
              if ( localname )
              {
                free( localname );
                localname = 0;
              }
              if ( nodename )
              {
                free( nodename );
                nodename = 0;
              }
              if ( enable_file_name )
              {
                free( enable_file_name );
                enable_file_name = 0;
              }
            }
          }
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Opening directory %s\n", localname );
          }
          dp = opendir( localname );
          if ( dp == 0 )
          {
            if ( localname )
            {
              free( localname );
              localname = 0;
            }
            if ( nodename )
            {
              free( nodename );
              nodename = 0;
            }
          }
          else
          {
            status = print_local_dir( &dp, localname, anchor, format_out, sink );
            closedir( &dp );
            if ( localname )
            {
              free( localname );
              localname = 0;
            }
            if ( nodename )
            {
              free( nodename );
              nodename = 0;
            }
            return status;
          }
        }
      }
      else
      if ( ( dir_info.st_mode & 61440 ) == 32768 && (int)(dir_info.st_size << 32) <= 0 && ( (int)(dir_info.st_size << 32) < 0 || (unsigned int)(dir_info.st_size & 0xFFFFFFFF) <= 0x7fffffff ) )
        anchor->content_length = (dir_info.st_size & 0xFFFFFFFF);
      if ( decompressAndParse( anchor, format_out, sink, nodename, localname, myEncoding, format, &status ) )
      {
        if ( nodename )
        {
          free( nodename );
          nodename = 0;
        }
        if ( localname )
        {
          free( localname );
          localname = 0;
        }
        return status;
      }
      else
      {
        if ( localname )
        {
          free( localname );
        }
      }
    }
    if ( strcmp( nodename, HTHostName( ) ) )
    {
      status = -1;
      if ( nodename )
      {
        free( nodename );
        nodename = 0;
      }
      if ( strncmp( addr, "file://localhost", 16 ) )
      {
        status = HTFTPLoad( addr, anchor, format_out, sink );
      }
      return status;
    }
    else
    {
      if ( nodename )
      {
        free( nodename );
        nodename = 0;
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Can't open `%s', errno=%d\n", addr, *(int*)(__errno_location( )) );
      }
    }
  }
}
char *HTGetProgramPath( ProgramPaths code )
{
  char *result = 0;
  if ( code && code <= 23 )
  {
    result = program_paths[ code ];
  }
  return result;
}
void HTSetProgramPath( ProgramPaths code, char *path )
{
  if ( code && code <= 23 )
  {
    program_paths[ code ] = 0;
  }
  return;
}
void HTInitProgramPaths( void )
{
  ProgramPaths code;
  int n = 1;
  char *path;
  char *test;
  for ( ; n <= 23; n++ )
  {
    code = n;
    switch ( code )
    {
    case ppBZIP2:
      path = "/bin/bzip2";
      break;
    case ppCOMPRESS:
      path = "/usr/bin/compress";
      break;
    case ppGZIP:
      path = "/bin/gzip";
      break;
    case ppINSTALL:
      path = "/usr/bin/install";
      break;
    case ppMV:
      path = "/bin/mv";
      break;
    case ppRLOGIN:
      path = "/usr/bin/rlogin";
      break;
    case ppRM:
      path = "/bin/rm";
      break;
    case ppTAR:
      path = "/bin/tar";
      break;
    case ppTELNET:
      path = "/usr/bin/telnet";
      break;
    case ppUNCOMPRESS:
      path = "/bin/gunzip";
      break;
    case ppUNZIP:
      path = "/usr/bin/unzip";
      break;
    case ppUUDECODE:
      path = "/usr/bin/uudecode";
      break;
    case ppZCAT:
      path = "/bin/zcat";
      break;
    case ppZIP:
      path = "/usr/bin/zip";
      break;
    default:
      path = 0;
      break;
    }
    test = HTGetProgramPath( code );
    if ( test && test != path )
      free( test );
    HTSetProgramPath( code, path );
    // n++;
  }
  return;
}
#if 0
#endif
