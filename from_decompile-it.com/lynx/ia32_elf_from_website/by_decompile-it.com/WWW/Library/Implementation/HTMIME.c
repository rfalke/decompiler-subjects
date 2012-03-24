#include "HTMIME.c.h"
static HTStreamClass HTMIME;
static char HTmm64[66];
static char HTmmquote[17];
static int HTmmcont;
void HTMIME_TrimDoubleQuotes( char *value )
{
  int i;
  char *cp = value;
  if ( cp && cp[0] && cp[0] == '"' )
  {
    i = strlen( cp );
    if ( cp[ i + -1 ] == '"' )
    {
      cp[ i + -1 ] = 0;
      i = 0;
      for ( ; value[ i ]; i++ )
      {
        value[ i ] = cp[ i + 1 ];
        // i++;
      }
    }
  }
  return;
}
BOOLEAN content_is_compressed( HTStream *me )
{
  char *encoding = &me->anchor->content_encoding;
  BOOLEAN result = HTEncodingToCompressType( encoding ) != 0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "content is%s compressed\n", " NOT" );
  }
  return result;
}
void dequote( char *url )
{
  int len = strlen( url );
  if ( url[0] == '\'' && len > 1 && url[ len + -1 ] == url[0] )
  {
    url[ len + -1 ] = 0;
    while ( url[0] = url[1], url[0] )
    {
      url++;
    }
  }
  return;
}
char *UncompressedContentType( HTStream *me, CompressFileType method )
{
  char *result = 0;
  char *address = &me->anchor->address;
  char *expected = HTCompressTypeToSuffix( method );
  char *actual = strrchr( address, '.' );
  if ( actual && strcasecomp( actual, expected ) == 0 )
  {
    HTFormat format;
    HTAtom *pencoding = 0;
    char *description = 0;
    format = HTFileFormat( address, &pencoding, &description );
    result = &format->name;
  }
  return result;
}
int pumpData( HTStream *me )
{
  CompressFileType method;
  char *new_encoding;
  char *new_content;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Begin pumpData\n" );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "...address{%s}\n", &me->anchor->address );
  }
  method = HTContentTypeToCompressType( &me->anchor->content_type_params );
  if ( method && ( me->anchor->content_encoding == 0 || me->anchor->content_encoding[0] == 0 ) )
  {
    new_content = UncompressedContentType( me, method );
    if ( new_content )
    {
      new_encoding = HTCompressTypeToEncoding( method );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "reinterpreting as content-type:%s, encoding:%s\n", new_content, new_encoding );
      }
      HTSACopy( &me->anchor->content_encoding, new_encoding );
      if ( me->compression_encoding )
      {
        free( &me->compression_encoding );
        *(int*)&me->compression_encoding = 0;
      }
      HTSACopy( &me->compression_encoding, new_encoding );
      strcpy( &me->value[0], new_content );
      HTSACopy( &me->anchor->content_type_params, &me->value[0] );
      me->format = HTAtom_for( &me->value[0] );
    }
  }
  if ( strchr( &me->format->name, ';' ) )
  {
    char *cp = 0, *cp1, *cp2, *cp3 = 0, *cp4;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: Extended MIME Content-Type is %s\n", &me->format->name );
    }
    HTSACopy( &cp, &me->format->name );
    LYLowerCase( cp );
    cp1 = strchr( cp, ';' );
    if ( cp1 )
    {
      BOOLEAN chartrans_ok = 0;
      cp2 = strstr( cp1, "charset" );
      if ( cp2 )
      {
        int chndl;
        cp2 += 7;
        for ( ; cp2[0] == ' ' || cp2[0] == '=' || cp2[0] == '"'; cp2++ )
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
          me->format = HTAtom_for( cp );
          HTSACopy( &me->anchor->charset, cp4 );
          HTAnchor_setUCInfoStage( &me->anchor, chndl, 0, 5 );
        }
        else
        if ( chndl < 0 )
        {
          chndl = UCLYhndl_for_unrec;
          if ( chndl >= 0 )
            goto B147;
          else
            chndl = UCLYhndl_for_unspec;
B147:;
          if ( UCCanTranslateFromTo( chndl, current_char_set ) & 255 )
          {
            chartrans_ok = 1;
            cp1[0] = 0;
            me->format = HTAtom_for( cp );
            HTAnchor_setUCInfoStage( &me->anchor, chndl, 0, 1 );
          }
        }
        else
        {
          cp1[0] = 0;
          me->format = HTAtom_for( cp );
          HTSACopy( &me->anchor->charset, cp4 );
          HTAnchor_setUCInfoStage( &me->anchor, chndl, 0, 5 );
        }
        if ( chartrans_ok )
        {
          LYUCcharset *p_in = HTAnchor_getUCInfoStage( &me->anchor, 0 );
          LYUCcharset *p_out = HTAnchor_setUCInfoStage( &me->anchor, current_char_set, 3, 1 );
          if ( p_out == 0 )
          {
            p_out = HTAnchor_getUCInfoStage( &me->anchor, 3 );
          }
          if ( strcmp( &p_in->MIMEname, "x-transparent" ) == 0 )
          {
            HTPassEightBitRaw = 1;
            HTAnchor_setUCInfoStage( &me->anchor, HTAnchor_getUCLYhndl( &me->anchor, 3 ), 0, 1 );
          }
          if ( strcmp( &p_out->MIMEname, "x-transparent" ) == 0 )
          {
            HTPassEightBitRaw = 1;
            HTAnchor_setUCInfoStage( &me->anchor, HTAnchor_getUCLYhndl( &me->anchor, 0 ), 3, 1 );
          }
          if ( p_in->enc != 5 && ( p_in->enc != 7 || p_out->enc != 5 ) )
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
            me->format = HTAtom_for( cp );
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
            HTSACopy( &me->anchor->charset, cp4 );
            HTPassEightBitRaw = 1;
          }
          HTAlert( cp4[0] ? cp4 : &me->anchor->charset );
        }
        if ( cp3 )
        {
          free( cp3 );
          cp3 = 0;
        }
      }
      else
      {
        cp1[0] = 0;
        me->format = HTAtom_for( cp );
      }
    }
    if ( cp )
    {
      free( cp );
    }
  }
  if ( !me->anchor->no_cache && me->anchor->expires )
  {
    if ( strcmp( &me->anchor->expires, "0" ) == 0 )
      me->anchor->no_cache = 1;
    else
    if ( me->anchor->date )
    {
      if ( LYmktime( &me->anchor->expires, 1 ) <= LYmktime( &me->anchor->date, 1 ) )
        me->anchor->no_cache = 1;
    }
    else
    {
      if ( LYmktime( &me->anchor->expires, 0 ) == 0 )
        me->anchor->no_cache = 1;
    }
  }
  HTSACopy( &me->anchor->content_type, &me->format->name );
  if ( me->set_cookie || me->set_cookie2 )
  {
    LYSetCookie( &me->set_cookie, &me->set_cookie2, &me->anchor->address );
    if ( me->set_cookie )
    {
      free( &me->set_cookie );
      *(int*)&me->set_cookie = 0;
    }
    if ( me->set_cookie2 )
    {
      free( &me->set_cookie2 );
      *(int*)&me->set_cookie2 = 0;
    }
  }
  if ( me->pickup_redirection )
  {
    if ( me->location && me->location[0] )
    {
      redirecting_url = &me->location;
      *(int*)&me->location = 0;
      if ( me->targetRep != HTAtom_for( "www/debug" ) || me->sink )
        me->head_only = 1;
    }
    else
    {
      permanent_redirection = 0;
      if ( me->location )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTTP: 'Location:' is zero-length!\n" );
        }
        HTAlert( "Got redirection with a bad Location header." );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTTP: Failed to pick up location.\n" );
      }
      if ( me->location )
      {
        if ( me->location == 0 )
          goto B50;
        else
        {
          free( &me->location );
          *(int*)&me->location = 0;
        }
      }
      else
        HTAlert( "Got redirection with no Location header." );
    }
  }
B50:;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "...pumpData finished reading header\n" );
  }
  if ( me->head_only )
    *(int*)&me->state = 79;
  else
  {
    if ( me->no_streamstack )
      me->target = me->sink;
    else
    {
      if ( me->compression_encoding == 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTMIME: MIME Content-Type is '%s', converting to '%s'\n", &me->format->name, &me->targetRep->name );
        }
      }
      else
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTMIME: MIME Content-Type is '%s',\n", &me->format->name );
        }
        me->format = HTAtom_for( "www/compressed" );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "        Treating as '%s'.  Converting to '%s'\n", &me->format->name, &me->targetRep->name );
        }
        if ( me->compression_encoding )
        {
          free( &me->compression_encoding );
          *(int*)&me->compression_encoding = 0;
        }
      }
      me->target = HTStreamStack( &me->format, &me->targetRep, &me->sink, &me->anchor );
      if ( me->target == 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTMIME: Can't translate! ** \n" );
        }
        me->target = me->sink;
      }
    }
    if ( me->target )
    {
      me->targetClass.name = me->target->isa;
      me->targetClass._free = me->target->net_ascii;
      me->targetClass._abort = me->target->state;
      me->targetClass.put_character = me->target->if_ok;
      me->targetClass.put_string = me->target->field;
      me->targetClass.put_block = me->target->fold_state;
      me->state = me->chunked_encoding != 0;
    }
    else
      *(int*)&me->state = 79;
    if ( me->refresh_url && ( content_is_compressed( me ) & 255 ) == 0 )
    {
      char *url = 0;
      char *num = 0;
      char *txt = 0;
      char *base = "";
      LYParseRefreshURL( &me->refresh_url, &num, &url );
      if ( url && me->format == HTAtom_for( "text/html" ) )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Formatting refresh-url as first line of result\n" );
        }
        HTSprintf0( &txt, gettext( "Refresh: " ) );
        HTSprintf( &txt, gettext( "%s seconds " ), num );
        dequote( url );
        HTSprintf( &txt, "&lt;a href=\"%s%s\"&gt;%s&lt;/a&gt;&lt;br&gt;", base, url );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "URL %s%s\n", base, url );
        }
        me->field( me, txt );
        free( txt );
      }
      if ( num )
      {
        free( num );
        num = 0;
      }
      if ( url )
      {
        free( url );
      }
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "...end of pumpData\n" );
  }
  return 0;
}
int dispatchField( HTStream *me )
{
  int i, j;
  char *cp;
  me->value_pointer[0] = 0;
  cp = &me->value_pointer;
  for ( ; me->value[0] < cp;  )
  {
    cp = &cp[ -1 ];
    if ( cp[0] == ' ' )
      continue;
    else
      break;
  }
  switch ( me->field + -11 )
  {
  case 0:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Accept-Ranges: '%s'\n", &me->value[0] );
    break;
  case 1:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Age: '%s'\n", &me->value[0] );
    break;
  case 3:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Allow: '%s'\n", &me->value[0] );
    break;
  case 4:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Alternates: '%s'\n", &me->value[0] );
    break;
  case 6:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Cache-Control: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] == 0 )
    {
      return 0;
    }
    LYLowerCase( &me->value[0] );
    HTSACopy( &me->anchor->cache_control, &me->value[0] );
  {
    char *cp1, *cp0 = &me->value[0];
    for ( ; cp1;  )
    {
      cp1 += 8;
      for ( ; cp1[0] && ' ' <= cp1[0]; cp1++ )
      {
        // cp1++;
      }
      if ( cp1[0] == 0 || cp1[0] == ';' )
      {
        me->anchor->no_cache = 1;
        break;
      }
      else
      {
        cp0 = cp1;
      }
    }
    if ( me->anchor->no_cache == 1 )
    {
      return 0;
    }
    cp0 = &me->value[0];
    for ( ; cp1;  )
    {
      cp1 += 7;
      for ( ; cp1[0] && ' ' <= cp1[0]; cp1++ )
      {
        // cp1++;
      }
      if ( cp1[0] == '=' )
      {
        cp1++;
        for ( ; cp1[0] && ' ' <= cp1[0]; cp1++ )
        {
          // cp1++;
        }
        if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[0] * 2 )) & 2048 )
        {
          cp0 = cp1;
          for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[0] * 2 )) & 2048; cp1++ )
          {
            // cp1++;
          }
          if ( cp0[0] == '0' && cp0[1] == cp1 )
          {
            me->anchor->no_cache = 1;
          }
        }
      }
      cp0 = cp1;
    }
  }
    break;
  case 8:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Cookie: '%s'\n", &me->value[0] );
    break;
  case 10:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Connection: '%s'\n", &me->value[0] );
    break;
  case 12:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Content-Base: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] )
      HTSACopy( &me->anchor->content_base, &me->value[0] );
    break;
  case 13:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Content-Disposition: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] == 0 )
    {
      return 0;
    }
    HTSACopy( &me->anchor->content_disposition, &me->value[0] );
    cp = &me->anchor->content_disposition;
    for ( ; cp[0] && strncasecomp( cp, "filename", 8 ); cp++ )
    {
      // cp++;
    }
    if ( cp[0] == 0 )
    {
      return 0;
    }
    cp += 8;
    for ( ; cp[0] && ( ' ' <= cp[0] || cp[0] == '=' ); cp++ )
    {
      // cp++;
    }
    if ( cp[0] == 0 )
    {
      return 0;
    }
    for ( ; cp[0] && ' ' <= cp[0]; cp++ )
    {
      // cp++;
    }
    if ( cp[0] == 0 )
    {
      return 0;
    }
    HTSACopy( &me->anchor->SugFname, cp );
    if ( me->anchor->SugFname[0] == '"' )
    {
      cp = strchr( &me->anchor->SugFname[1], '"' );
      if ( cp )
      {
        cp[1] = 0;
        HTMIME_TrimDoubleQuotes( &me->anchor->SugFname );
      }
      else
      if ( me->anchor->SugFname == 0 )
      {
        return 0;
      }
      free( &me->anchor->SugFname );
      me->anchor->SugFname = 0;
    }
    cp = &me->anchor->SugFname;
    for ( ; cp[0] && cp[0] < ' '; cp++ )
    {
      // cp++;
    }
    cp[0] = 0;
    if ( me->anchor->SugFname[0] || me->anchor->SugFname == 0 )
    {
      return 0;
    }
    free( &me->anchor->SugFname );
    me->anchor->SugFname = 0;
    break;
  case 14:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Content-Encoding: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] == 0 || strcasecomp( &me->value[0], "identity" ) == 0 )
    {
      return 0;
    }
    LYLowerCase( &me->value[0] );
    HTSACopy( &me->anchor->content_encoding, &me->value[0] );
    if ( me->compression_encoding )
    {
      free( &me->compression_encoding );
      *(int*)&me->compression_encoding = 0;
    }
    if ( content_is_compressed( me ) & 255 )
      HTSACopy( &me->compression_encoding, &me->value[0] );
    else
    {
      if ( WWW_TraceFlag == 0 )
      {
        return 0;
      }
      fprintf( TraceFP( ), "                Ignoring it!\n" );
    }
    break;
  case 15:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Content-Features: '%s'\n", &me->value[0] );
    break;
  case 17:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Content-Language: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] == 0 )
    {
      return 0;
    }
    LYLowerCase( &me->value[0] );
    HTSACopy( &me->anchor->content_language, &me->value[0] );
    break;
  case 18:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Content-Length: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] == 0 )
    {
      return 0;
    }
    me->anchor->content_length = atoi( &me->value[0] );
    if ( me->anchor->content_length < 0 )
      me->anchor->content_length = 0;
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "        Converted to integer: '%d'\n", me->anchor->content_length );
    break;
  case 19:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Content-Location: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] )
      HTSACopy( &me->anchor->content_location, &me->value[0] );
    break;
  case 20:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Content-MD5: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] )
      HTSACopy( &me->anchor->content_md5, &me->value[0] );
    break;
  case 21:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Content-Range: '%s'\n", &me->value[0] );
    break;
  case 23:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Content-Transfer-Encoding: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] == 0 )
    {
      return 0;
    }
    LYLowerCase( &me->value[0] );
    me->c_t_encoding = HTAtom_for( &me->value[0] );
    break;
  case 24:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Content-Type: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] == 0 )
    {
      return 0;
    }
    i = 0;
    j = 0;
    for ( ; me->value[ i ]; i++ )
    {
      if ( me->value[ i ] != ' ' && me->value[ i ] != '"' )
      {
        me->value[ j ] = me->value[ i ];
        j++;
      }
      // i++;
    }
    me->value[ j ] = 0;
    me->format = HTAtom_for( &me->value[0] );
    HTSACopy( &me->anchor->content_type_params, &me->value[0] );
    break;
  case 25:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Date: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] )
      HTSACopy( &me->anchor->date, &me->value[0] );
    break;
  case 27:
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP ETag: %s\n", &me->value[0] );
    }
    if ( me->value[0] )
      HTSACopy( &me->anchor->ETag, &me->value[0] );
    break;
  case 28:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Expires: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] )
      HTSACopy( &me->anchor->expires, &me->value[0] );
    break;
  case 29:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Keep-Alive: '%s'\n", &me->value[0] );
    break;
  case 31:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Last-Modified: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] )
      HTSACopy( &me->anchor->last_modified, &me->value[0] );
    break;
  case 32:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Link: '%s'\n", &me->value[0] );
    break;
  case 33:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Location: '%s'\n", &me->value[0] );
    }
    if ( me->pickup_redirection && me->location == 0 )
      HTSACopy( &me->location, &me->value[0] );
    else
    {
      if ( WWW_TraceFlag == 0 )
      {
        return 0;
      }
      fprintf( TraceFP( ), "HTMIME: *** Ignoring Location!\n" );
    }
    break;
  case 36:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Pragma: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] && strcmp( &me->value[0], "no-cache" ) == 0 )
      me->anchor->no_cache = 1;
    break;
  case 37:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Proxy-Authenticate: '%s'\n", &me->value[0] );
    break;
  case 38:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Public: '%s'\n", &me->value[0] );
    break;
  case 41:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Refresh: '%s'\n", &me->value[0] );
    }
    HTSACopy( &me->refresh_url, &me->value[0] );
    break;
  case 42:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Retry-After: '%s'\n", &me->value[0] );
    break;
  case 44:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Safe: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] == 0 )
    {
      return 0;
    }
    if ( strcasecomp( &me->value[0], "YES" ) == 0 || strcasecomp( &me->value[0], "TRUE" ) == 0 )
      me->anchor->safe = 1;
    else
    {
      if ( strcasecomp( &me->value[0], "NO" ) == 0 || strcasecomp( &me->value[0], "FALSE" ) == 0 )
        me->anchor->safe = 0;
    }
    break;
  case 46:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Server: '%s'\n", &me->value[0] );
    }
    if ( me->value[0] )
      HTSACopy( &me->anchor->server, &me->value[0] );
    break;
  case 48:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Set-Cookie: '%s'\n", &me->value[0] );
    }
    if ( me->set_cookie == 0 )
      HTSACopy( &me->set_cookie, &me->value[0] );
    else
    {
      HTSACat( &me->set_cookie, ", " );
      HTSACat( &me->set_cookie, &me->value[0] );
    }
    break;
  case 49:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Set-Cookie2: '%s'\n", &me->value[0] );
    }
    if ( me->set_cookie2 == 0 )
      HTSACopy( &me->set_cookie2, &me->value[0] );
    else
    {
      HTSACat( &me->set_cookie2, ", " );
      HTSACat( &me->set_cookie2, &me->value[0] );
    }
    break;
  case 51:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Title: '%s'\n", &me->value[0] );
    break;
  case 52:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME: PICKED UP Transfer-Encoding: '%s'\n", &me->value[0] );
    }
    if ( strcmp( &me->value[0], "chunked" ) == 0 )
      me->chunked_encoding = 1;
    break;
  case 54:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Upgrade: '%s'\n", &me->value[0] );
    break;
  case 55:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP URI: '%s'\n", &me->value[0] );
    break;
  case 57:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Vary: '%s'\n", &me->value[0] );
    break;
  case 58:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Via: '%s'\n", &me->value[0] );
    break;
  case 60:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP Warning: '%s'\n", &me->value[0] );
    break;
  case 61:
    HTMIME_TrimDoubleQuotes( &me->value[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return 0;
    }
    fprintf( TraceFP( ), "HTMIME: PICKED UP WWW-Authenticate: '%s'\n", &me->value[0] );
    break;
  default:
    return -1;
    break;
  }
}
void HTMIME_put_character( HTStream *me, char c )
{
#error unstructured control flow
}
void HTMIME_put_string( HTStream *me, char *s )
{
  char *p;
  if ( me->state == 0 )
  {
    me->targetClass.put_string( me->target, s );
  }
  else
  if ( me->state != 79 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME:  %s\n", s );
    }
    p = s;
    for ( ; p[0]; p++ )
    {
      HTMIME_put_character( me, p[0] );
      // p++;
    }
  }
  return;
}
void HTMIME_write( HTStream *me, char *s, int l )
{
  char *p;
  if ( me->state == 0 )
  {
    me->targetClass.put_block( me->target, s, l );
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMIME:  %.*s\n", l, s );
    }
    p = s;
    for ( ; p < s[ l ]; p++ )
    {
      HTMIME_put_character( me, p[0] );
      // p++;
    }
  }
  return;
}
void HTMIME_free( HTStream *me )
{
  if ( me )
  {
    if ( me->location )
    {
      free( &me->location );
      *(int*)&me->location = 0;
    }
    if ( me->compression_encoding )
    {
      free( &me->compression_encoding );
      *(int*)&me->compression_encoding = 0;
    }
    if ( me->target )
      me->targetClass._free( me->target );
    if ( me == 0 )
    {
      return;
    }
    free( me );
    me = 0;
  }
  return;
}
void HTMIME_abort( HTStream *me, HTError e )
{
  if ( me )
  {
    if ( me->location )
    {
      free( &me->location );
      *(int*)&me->location = 0;
    }
    if ( me->compression_encoding )
    {
      free( &me->compression_encoding );
      *(int*)&me->compression_encoding = 0;
    }
    if ( me->target )
      me->targetClass._abort( me->target, e );
    if ( me == 0 )
    {
      return;
    }
    free( me );
    me = 0;
  }
  return;
}
HTStream *HTMIMEConvert( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  HTStream *me = calloc( 1, sizeof( HTStream ) );
  if ( me == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTMIME.c", "HTMIMEConvert" );
  me->isa->name[0] = HTMIME.name;
  me->sink = sink;
  me->anchor = anchor;
  me->anchor->safe = 0;
  me->anchor->no_cache = 0;
  if ( me->anchor->cache_control )
  {
    free( &me->anchor->cache_control );
    me->anchor->cache_control = 0;
  }
  if ( me->anchor->SugFname )
  {
    free( &me->anchor->SugFname );
    me->anchor->SugFname = 0;
  }
  if ( me->anchor->charset )
  {
    free( &me->anchor->charset );
    me->anchor->charset = 0;
  }
  if ( me->anchor->content_type_params )
  {
    free( &me->anchor->content_type_params );
    me->anchor->content_type_params = 0;
  }
  if ( me->anchor->content_language )
  {
    free( &me->anchor->content_language );
    me->anchor->content_language = 0;
  }
  if ( me->anchor->content_encoding )
  {
    free( &me->anchor->content_encoding );
    me->anchor->content_encoding = 0;
  }
  if ( me->anchor->content_base )
  {
    free( &me->anchor->content_base );
    me->anchor->content_base = 0;
  }
  if ( me->anchor->content_disposition )
  {
    free( &me->anchor->content_disposition );
    me->anchor->content_disposition = 0;
  }
  if ( me->anchor->content_location )
  {
    free( &me->anchor->content_location );
    me->anchor->content_location = 0;
  }
  if ( me->anchor->content_md5 )
  {
    free( &me->anchor->content_md5 );
    me->anchor->content_md5 = 0;
  }
  me->anchor->content_length = 0;
  if ( me->anchor->date )
  {
    free( &me->anchor->date );
    me->anchor->date = 0;
  }
  if ( me->anchor->expires )
  {
    free( &me->anchor->expires );
    me->anchor->expires = 0;
  }
  if ( me->anchor->last_modified )
  {
    free( &me->anchor->last_modified );
    me->anchor->last_modified = 0;
  }
  if ( me->anchor->ETag )
  {
    free( &me->anchor->ETag );
    me->anchor->ETag = 0;
  }
  if ( me->anchor->server )
  {
    free( &me->anchor->server );
    me->anchor->server = 0;
  }
  *(int*)&me->target = 0;
  *(int*)&me->state = 9;
  me->format = HTAtom_for( "text/html" );
  me->targetRep = pres->rep_out;
  *(int*)&me->boundary = 0;
  *(int*)&me->set_cookie = 0;
  *(int*)&me->set_cookie2 = 0;
  *(int*)&me->refresh_url = 0;
  *(int*)&me->c_t_encoding = 0;
  *(int*)&me->compression_encoding = 0;
  me->net_ascii = 0;
  HTAnchor_setUCInfoStage( &me->anchor, current_char_set, 2, 1 );
  HTAnchor_setUCInfoStage( &me->anchor, current_char_set, 3, 1 );
  return me;
}
HTStream *HTNetMIME( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  HTStream *me = HTMIMEConvert( pres, anchor, sink );
  if ( me == 0 )
  {
    return 0;
  }
  me->net_ascii = 1;
  return me;
}
HTStream *HTMIMERedirect( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  HTStream *me = HTMIMEConvert( pres, anchor, sink );
  if ( me == 0 )
  {
    return 0;
  }
  me->pickup_redirection = 1;
  if ( me->targetRep == HTAtom_for( "www/debug" ) && sink )
    me->no_streamstack = 1;
  return me;
}
void HTmmdec_base64( char **t, char *s )
{
  int d, count, j, val;
  char *buf = malloc( ( ( strlen( s ) * 3 ) + 1 ) * sizeof( char ) ), *bp, nw[4], *p;
  if ( buf == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTMIME.c", "HTmmdec_base64" );
  bp = buf;
  for ( ; s[0]; s += 4 )
  {
    val = 0;
    if ( s[2] == '=' )
      count = 1;
    else
    if ( s[3] == '=' )
      count = 2;
    else
      count = 3;
    j = 0;
    for ( ; j <= count; j++ )
    {
      p = strchr( HTmm64, s[ j ] );
      if ( p == 0 )
        break;
      d = p - HTmm64[0];
      d <<= (unsigned char)( ( 3 - j ) * 6 );
      val += d;
      // j++;
    }
    j = 2;
    for ( ; j >= 0;  )
    {
      nw[ j ] = val;
      val = val >> 8;
      j += -1;
    }
    count += -1;
    if ( ( count != 0 ) & 255 )
    {
      bp[0] = nw[0];
      bp++;
    }
    count += -1;
    if ( ( count != 0 ) & 255 )
    {
      bp[0] = nw[1];
      bp++;
    }
    if ( count )
    {
      bp[0] = nw[2];
      bp++;
    }
    // s += 4;
  }
  bp[0] = 0;
  HTSACopy( t, buf );
  if ( buf )
  {
    free( buf );
    buf = 0;
  }
  return;
}
void HTmmdec_quote( char **t, char *s )
{
  char *buf = malloc( ( strlen( s ) + 1 ) * sizeof( char ) ), cval, *bp, *p;
  if ( buf == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTMIME.c", "HTmmdec_quote" );
  bp = buf;
  while ( s[0] )
  {
    if ( s[0] == '=' )
    {
      cval = 0;
      if ( s[1] )
      {
        p = strchr( HTmmquote, s[1] );
        if ( p )
        {
          cval = (unsigned char)( p[ cval ] ) - (unsigned char)( HTmmquote[0] );
          if ( s[2] )
          {
            p = strchr( HTmmquote, s[2] );
            if ( p )
            {
              cval = cval << 4;
              bp[0] = cval = (unsigned char)( p[ cval ] ) - (unsigned char)( HTmmquote[0] );
              bp++;
              s += 3;
            }
          }
          bp[0] = s[0];
          bp++;
          s++;
        }
      }
      bp[0] = s[0];
      bp++;
      s++;
    }
    else
    {
      if ( s[0] == '_' )
      {
        bp[0] = ' ';
        bp++;
        s++;
      }
      else
      {
        bp[0] = s[0];
        bp++;
        s++;
      }
    }
  }
  bp[0] = 0;
  HTSACopy( t, buf );
  if ( buf )
  {
    free( buf );
    buf = 0;
  }
  return;
}
void HTmmdecode( char **target, char *source )
{
  char *buf;
  char *mmbuf = 0;
  char *m2buf = 0;
  char *s, *t, *u;
  int base64, quote;
  buf = malloc( ( strlen( source ) + 1 ) * sizeof( char ) );
  if ( buf == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTMIME.c", "HTmmdecode" );
  s = source;
  u = buf;
  while ( s[0] )
  {
    if ( strncasecomp( s, "=?ISO-2022-JP?B?", 16 ) == 0 )
      base64 = 1;
    else
      base64 = 0;
    if ( strncasecomp( s, "=?ISO-2022-JP?Q?", 16 ) == 0 )
      quote = 1;
    else
      quote = 0;
    if ( base64 || quote )
    {
      if ( HTmmcont )
      {
        t = &s[ -1 ];
        for ( ; source <= t && ( t[0] == ' ' || t[0] == '\t' );  )
        {
          u = &u[ -1 ];
          t = &t[ -1 ];
        }
      }
      if ( mmbuf == 0 )
        HTSACopy( &mmbuf, source );
      s += 16;
      t = mmbuf;
      for ( ; s[0] && ( s[0] != '?' || s[1] != '=' );  )
      {
        t[0] = s[0];
        t++;
        s++;
        t[0] = 0;
      }
      if ( s[0] == '?' && s[1] == '=' )
      {
        s += 2;
        t[0] = 0;
        if ( base64 )
          HTmmdec_base64( &m2buf, mmbuf );
        if ( quote )
          HTmmdec_quote( &m2buf, mmbuf );
        t = m2buf;
        for ( ; t[0]; t++ )
        {
          u[0] = t[0];
          u++;
          // t++;
        }
        HTmmcont = 1;
      }
      else
      {
        HTSACopy( target, buf );
        if ( m2buf )
        {
          free( m2buf );
          m2buf = 0;
        }
        if ( mmbuf )
        {
          free( mmbuf );
          mmbuf = 0;
        }
        if ( buf == 0 )
          break;
        free( buf );
        buf = 0;
        break;
      }
    }
    else
    {
      if ( s[0] != ' ' && s[0] != '\t' )
        HTmmcont = 0;
      u[0] = s[0];
      u++;
      s++;
    }
  }
  u[0] = 0;
  HTSACopy( target, buf );
}
int HTrjis( char **t, char *s )
{
  char *p;
  char *buf = 0;
  int kanji = 0;
  if ( strchr( s, 27 ) || strchr( s, '$' ) == 0 )
  {
    if ( t[0] != s )
      HTSACopy( t, s );
    return 1;
  }
  else
  {
    buf = malloc( ( ( strlen( s ) * 2 ) + 1 ) * sizeof( char ) );
    if ( buf == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTMIME.c", "HTrjis" );
    p = buf;
    while ( s[0] )
    {
      if ( kanji == 0 && s[0] == '$' && ( s[1] == '@' || s[1] == 'B' ) )
      {
        if ( HTmaybekanji( s[2], s[3] ) )
        {
          kanji = 1;
          p[0] = 27;
          p++;
          p[0] = s[0];
          p++;
          s++;
          p[0] = s[0];
          p++;
          s++;
          p[0] = s[0];
          p++;
          s++;
          p[0] = s[0];
          p++;
          s++;
        }
        else
        {
          p[0] = s[0];
          p++;
          s++;
        }
      }
      else
      {
        if ( kanji && s[0] == '(' && ( s[1] == 'J' || s[1] == 'B' ) )
        {
          kanji = 0;
          p[0] = 27;
          p++;
          p[0] = s[0];
          p++;
          s++;
          p[0] = s[0];
          p++;
          s++;
        }
        else
        {
          p[0] = s[0];
          p++;
          s++;
        }
      }
    }
    p[0] = s[0];
    HTSACopy( t, buf );
    if ( buf )
    {
      free( buf );
      buf = 0;
    }
    return 0;
  }
}
int HTmaybekanji( int c1, int c2 )
{
  if ( c2 <= 32 || c2 > 126 )
  {
    return 0;
  }
  if ( c1 <= 32 )
  {
    return 0;
  }
  if ( c1 <= 40 )
    goto B8;
  else
  if ( c1 <= 47 )
  {
    return 0;
  }
B8:;
  if ( c1 <= 116 )
  {
    c2 += -32;
    switch ( c1 + -32 )
    {
    case 2:
      if ( c2 > 14 && c2 <= 25 )
      {
        return 0;
      }
      if ( c2 > 33 && c2 <= 41 )
      {
        return 0;
      }
      if ( c2 > 48 && c2 <= 59 )
      {
        return 0;
      }
      if ( c2 > 74 && c2 <= 81 )
      {
        return 0;
      }
      if ( c2 > 89 && c2 <= 93 )
      {
        return 0;
      }
      return 1;
      break;
    case 3:
      if ( c2 <= 15 )
      {
        return 0;
      }
      if ( c2 > 25 && c2 <= 32 )
      {
        return 0;
      }
      if ( c2 > 58 && c2 <= 64 )
      {
        return 0;
      }
      if ( c2 > 90 )
      {
        return 0;
      }
      break;
    case 4:
      if ( c2 > 83 )
      {
        return 0;
      }
      break;
    case 5:
      if ( c2 > 86 )
      {
        return 0;
      }
      break;
    case 6:
      if ( c2 > 24 && c2 <= 32 )
      {
        return 0;
      }
      if ( c2 > 56 )
      {
        return 0;
      }
      break;
    case 7:
      if ( c2 > 33 && c2 <= 48 )
      {
        return 0;
      }
      if ( c2 > 81 )
      {
        return 0;
      }
      break;
    case 8:
      if ( c2 > 32 )
      {
        return 0;
      }
      break;
    case 47:
      if ( c2 > 51 )
      {
        return 0;
      }
      break;
    case 84:
      if ( c2 > 6 )
      {
        return 0;
      }
      break;
    default:
      break;
    }
  }
}
#if 0
#endif
