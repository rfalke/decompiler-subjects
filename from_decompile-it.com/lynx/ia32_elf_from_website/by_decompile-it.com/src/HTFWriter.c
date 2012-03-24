#include "HTFWriter.c.h"
char *WWW_Download_File;
BOOLEAN LYCancelDownload;
static HTStreamClass HTFWriter;
void HTFWriter_error( HTStream *me, char *id )
{
  char buf[200];
  sprintf( buf, "%.60s: %.60s: %.60s", id, (char*)me->isa, strerror( *(int*)(__errno_location( )) ) );
  HTAlert( buf );
  return;
}
void HTFWriter_put_character( HTStream *me, char c )
{
  if ( me->fp )
  {
    _IO_putc( c, &me->fp );
  }
  return;
}
void HTFWriter_put_string( HTStream *me, char *s )
{
  if ( me->fp )
  {
    fputs( s, &me->fp );
  }
  return;
}
void HTFWriter_write( HTStream *me, char *s, int l )
{
  size_t result;
  if ( me->fp )
  {
    result = fwrite( s, 1, l, &me->fp );
    if ( result != l )
    {
      HTFWriter_error( me, "HTFWriter_write" );
    }
  }
  return;
}
void HTFWriter_free( HTStream *me )
{
  int len;
  char *path = 0;
  char *addr = 0;
  int status;
  BOOLEAN use_zread = 0;
  BOOLEAN found = 0;
  if ( me->fp )
    fflush( &me->fp );
  if ( me->end_command )
  {
    LYCloseTempFP( &me->fp );
    if ( me->input_format == HTAtom_for( "www/compressed" ) )
    {
      if ( me->anchor->FileCache )
      {
        BOOLEAN skip_loadfile = me->viewer_command != 0;
        HTSACopy( &path, &me->anchor->FileCache );
        len = strlen( path );
        if ( len > 3 && ( strcasecomp( &path[ len + -2 ], "gz" ) == 0 || strcasecomp( &path[ len + -2 ], "zz" ) == 0 ) )
        {
          if ( skip_loadfile == 0 )
            use_zread = 1;
          else
          {
            path[ len + -3 ] = 0;
            remove( path );
          }
        }
        else
        if ( len > 4 && strcasecomp( &path[ len + -3 ], "bz2" ) == 0 )
        {
          path[ len + -4 ] = 0;
          remove( path );
        }
        else
        if ( len > 2 && strcasecomp( &path[ len + -1 ], "Z" ) == 0 )
        {
          path[ len + -2 ] = 0;
          remove( path );
        }
        if ( use_zread == 0 )
        {
          if ( dump_output_immediately == 0 )
          {
            mustshow = 1;
            HTProgress( &me->end_command );
          }
          if ( me->end_command && me->end_command[0] )
            LYSystem( &me->end_command );
          found = LYCanReadFile( &me->anchor->FileCache );
        }
        if ( found )
        {
          if ( dump_output_immediately == 0 )
          {
            lynx_force_repaint( );
            LYrefresh( );
          }
          HTAlert( gettext( "Error uncompressing temporary file!" ) );
          LYRemoveTemp( &me->anchor->FileCache );
          if ( me->anchor->FileCache )
          {
            free( &me->anchor->FileCache );
            me->anchor->FileCache = 0;
          }
        }
        else
        {
          LYLocalFileToURL( &addr, path );
          if ( use_zread == 0 )
          {
            LYRenamedTemp( &me->anchor->FileCache, path );
            HTSACopy( &me->anchor->FileCache, path );
            HTSACopy( &me->anchor->content_encoding, "binary" );
          }
          if ( path )
          {
            free( path );
            path = 0;
          }
          if ( skip_loadfile == 0 )
          {
            if ( HTAnchor_getUCLYhndl( &me->anchor, 1 ) < 0 )
              HTAnchor_copyUCInfoStage( &me->anchor, 1, 0, 2 );
            HTAnchor_copyUCInfoStage( &me->anchor, 1, 0, -1 );
          }
          if ( dump_output_immediately == 0 )
          {
            LYstore_message2( gettext( "Using %s" ), addr );
          }
          if ( skip_loadfile )
          {
            if ( me->end_command )
            {
              free( &me->end_command );
              *(int*)&me->end_command = 0;
            }
            HTAddParam( &me->end_command, &me->viewer_command, 1, &me->anchor->FileCache );
            HTEndParam( &me->end_command, &me->viewer_command, 1 );
            if ( dump_output_immediately == 0 )
            {
              HTProgress( &me->end_command );
              stop_curses( );
            }
            LYSystem( &me->end_command );
            if ( me->remove_command && me->remove_command )
            {
              free( &me->remove_command );
              *(int*)&me->remove_command = 0;
            }
            if ( dump_output_immediately == 0 )
              start_curses( );
          }
          else
          {
            status = HTLoadFile( addr, &me->anchor, &me->output_format, &me->sink );
          }
          if ( dump_output_immediately && me->output_format == HTAtom_for( "www/present" ) )
          {
            if ( addr )
            {
              free( addr );
              addr = 0;
            }
            remove( &me->anchor->FileCache );
            if ( me->anchor->FileCache )
            {
              free( &me->anchor->FileCache );
              me->anchor->FileCache = 0;
            }
            if ( me->remove_command )
            {
              free( &me->remove_command );
              *(int*)&me->remove_command = 0;
            }
            if ( me->end_command )
            {
              free( &me->end_command );
              *(int*)&me->end_command = 0;
            }
            if ( me->viewer_command )
            {
              free( &me->viewer_command );
              *(int*)&me->viewer_command = 0;
            }
            if ( me == 0 )
            {
              return;
            }
            free( me );
            me = 0;
            return;
          }
        }
        if ( addr )
        {
          free( addr );
          addr = 0;
        }
      }
      if ( me->remove_command && me->remove_command )
      {
        free( &me->remove_command );
        *(int*)&me->remove_command = 0;
      }
    }
    else
    {
      if ( strcmp( &me->end_command, "SaveToFile" ) )
      {
        if ( dump_output_immediately == 0 )
        {
          mustshow = 1;
          HTProgress( &me->end_command );
          stop_curses( );
        }
        LYSystem( &me->end_command );
        if ( me->remove_command && me->remove_command )
        {
          free( &me->remove_command );
          *(int*)&me->remove_command = 0;
        }
        if ( dump_output_immediately == 0 )
          start_curses( );
      }
      else
      {
        if ( me->remove_command && me->remove_command )
        {
          free( &me->remove_command );
          *(int*)&me->remove_command = 0;
        }
        if ( dump_output_immediately == 0 )
          start_curses( );
      }
    }
    if ( me->end_command )
    {
      free( &me->end_command );
      *(int*)&me->end_command = 0;
    }
  }
  if ( me->viewer_command )
  {
    free( &me->viewer_command );
    *(int*)&me->viewer_command = 0;
  }
  if ( dump_output_immediately )
  {
    if ( me->anchor->FileCache )
      remove( &me->anchor->FileCache );
    if ( me )
    {
      free( me );
      me = 0;
    }
    if ( persistent_cookies )
      LYStoreCookies( LYCookieSaveFile );
    exit_immediately( 0 );
  }
  if ( me == 0 )
  {
    return;
  }
  free( me );
  me = 0;
  return;
}
void HTFWriter_abort( HTStream *me, HTError e )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFWriter_abort called\n" );
  }
  LYCloseTempFP( &me->fp );
  if ( me->viewer_command )
  {
    free( &me->viewer_command );
    *(int*)&me->viewer_command = 0;
  }
  if ( me->end_command )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFWriter: Aborting: file not executed or saved.\n" );
    }
    if ( me->end_command )
    {
      free( &me->end_command );
      *(int*)&me->end_command = 0;
    }
    if ( me->remove_command )
    {
      chmod( &me->remove_command, 384 );
      if ( unlink( &me->remove_command ) )
      {
        char buf[560];
        sprintf( buf, "%.60s '%.400s': %.60s", gettext( "Error deleting file" ), &me->remove_command, strerror( *(int*)(__errno_location( )) ) );
        HTAlert( buf );
      }
      if ( me->remove_command )
      {
        free( &me->remove_command );
        *(int*)&me->remove_command = 0;
      }
    }
  }
  if ( WWW_Download_File )
  {
    free( WWW_Download_File );
    WWW_Download_File = 0;
  }
  if ( me )
  {
    free( me );
    me = 0;
  }
  return;
}
HTStream *HTFWriter_new( FILE *fp )
{
  HTStream *me;
  if ( fp == 0 )
  {
    return 0;
  }
  me = calloc( 1, sizeof( HTStream ) );
  if ( me == 0 )
    outofmem( "./HTFWriter.c", "HTFWriter_new" );
  me->isa->name[0] = HTFWriter.name;
  me->fp = fp;
  *(int*)&me->end_command = 0;
  *(int*)&me->remove_command = 0;
  *(int*)&me->anchor = 0;
  *(int*)&me->sink = 0;
  return me;
}
char *mailcap_substitute( HTParentAnchor *anchor, HTPresentation *pres, char *fnam )
{
  char *result = LYMakeMailcapCommand( &pres->command, &anchor->content_type_params, fnam );
  if ( ( LYMailcapUsesPctS( &pres->command ) & 255 ) == 0 )
  {
    char *prepend = 0;
    char *format = "( %s ) &lt; %s";
    HTSprintf( &prepend, "( %s", result );
    HTAddParam( &prepend, format, 2, fnam );
    if ( result )
    {
      free( result );
      result = 0;
    }
    result = prepend;
  }
  return result;
}
HTStream *HTSaveAndExecute( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  int eax;
  char fnam[256];
  char *suffix;
  HTStream *me;
  if ( traversal )
  {
    LYCancelledFetch = 1;
    return 0;
  }
  else
  {
    if ( 999.000000000000 <= pres->quality )
    {
      if ( dump_output_immediately )
      {
        LYCancelledFetch = 1;
        return 0;
      }
      else
      if ( no_exec )
      {
        HTAlert( gettext( "Execution is disabled." ) );
      }
      else
      if ( !local_exec && ( !local_exec_on_local_files || ( !LYJumpFileURL && strncmp( &anchor->address, "file://localhost", 16 ) ) ) )
      {
        char *buf = 0;
        HTSprintf0( &buf, gettext( "Execution is not enabled for this file.  See the Options menu (use %s)." ), key_for_func( 49 ) );
        HTAlert( buf );
        if ( buf )
        {
          free( buf );
          buf = 0;
        }
      }
    }
    if ( dump_output_immediately )
    {
    }
    else
    {
      me = calloc( 1, sizeof( HTStream ) );
      if ( me == 0 )
        outofmem( "./HTFWriter.c", "HTSaveAndExecute" );
      me->isa->name[0] = HTFWriter.name;
      me->input_format = pres->rep->next;
      me->output_format = pres->rep_out;
      me->anchor = anchor;
      me->sink = sink;
      if ( LYCachedTemp( fnam, &anchor->FileCache ) & 255 )
      {
        me->fp = LYOpenTempRewrite( fnam, ".bin", "wb" );
      }
      else
      {
        if ( strcasecomp( (char*)pres->rep_out, "text/html" ) == 0 )
          suffix = ".html";
        else
        {
          if ( strncasecomp( (char*)pres->rep_out, "text/", 5 ) == 0 )
            suffix = ".txt";
          else
          {
            suffix = HTFileSuffix( &pres->rep->next, &anchor->content_encoding );
            if ( suffix == 0 || suffix[0] != '.' )
            {
              if ( strncasecomp( (char*)pres->rep_out, "application/", 12 ) == 0 )
                suffix = ".bin";
              else
                suffix = ".html";
            }
          }
        }
        me->fp = LYOpenTemp( fnam, suffix, "wb" );
      }
      if ( me->fp == 0 )
      {
        HTAlert( gettext( "Can't open temporary file!" ) );
        if ( me )
        {
          free( me );
          me = 0;
        }
        return 0;
      }
      else
      {
        HTSACopy( &me->viewer_command, &pres->command );
        me->end_command = mailcap_substitute( anchor, pres, fnam );
        *(int*)&me->remove_command = 0;
        HTAddParam( &me->remove_command, "%s", 1, fnam );
        HTEndParam( &me->remove_command, "%s", 1 );
        HTSACopy( &anchor->FileCache, fnam );
        return me;
      }
    }
  }
}
HTStream *HTSaveToFile( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  int eax;
  HTStream *ret_obj;
  char fnam[256];
  char *suffix;
  char *cp;
  int c = 0;
  BOOLEAN IsBinary = 1;
  ret_obj = calloc( 1, sizeof( HTStream ) );
  if ( ret_obj == 0 )
    outofmem( "./HTFWriter.c", "HTSaveToFile" );
  ret_obj->isa->name[0] = HTFWriter.name;
  *(int*)&ret_obj->remove_command = 0;
  *(int*)&ret_obj->end_command = 0;
  ret_obj->input_format = pres->rep->next;
  ret_obj->output_format = pres->rep_out;
  ret_obj->anchor = anchor;
  ret_obj->sink = sink;
  if ( dump_output_immediately )
  {
    ret_obj->fp = stdout;
    if ( HTOutputFormat != HTAtom_for( "www/download" ) )
      return ret_obj;
  }
  else
  {
    LYCancelDownload = 0;
    if ( HTOutputFormat != HTAtom_for( "www/download" ) )
    {
      if ( traversal || ( no_download && !override_no_download && no_disk_save ) )
      {
        if ( traversal == 0 )
        {
          HTAlert( gettext( "This file cannot be displayed on this terminal." ) );
        }
        LYCancelDownload = 1;
        if ( traversal )
          LYCancelledFetch = 1;
        if ( ret_obj )
        {
          free( ret_obj );
          ret_obj = 0;
        }
        return 0;
      }
      else
      {
        cp = strchr( (char*)pres->rep_out, ';' );
        if ( cp && strstr( &cp[1], "charset" ) )
        {
          mustshow = 1;
          user_message( gettext( "%s  D)ownload, or C)ancel" ), (char*)pres->rep_out );
          while ( 1 )
          {
            switch ( c )
            {
            case -1:
              if ( keymap[0] != 47 )
              {
                c = LYgetch_single( );
              }
              break;
            default:
              if ( c & 34816 )
              {
                if ( ( c & 255 ) != 47 )
                  continue;
              }
              else
              if ( keymap[ ( c & 2047 ) + 1 ] != 47 )
                continue;
              break;
            }
            switch ( c )
            {
            case -1:
              if ( keymap[0] == 47 )
              {
                mustshow = 1;
                statusline( gettext( "Cancelling file." ) );
                LYCancelDownload = 1;
                if ( ret_obj )
                {
                  free( ret_obj );
                  ret_obj = 0;
                }
                return 0;
              }
              break;
            default:
              if ( c & 34816 )
              {
                if ( ( c & 255 ) == 47 )
                  continue;
              }
              else
              if ( keymap[ ( c & 2047 ) + 1 ] == 47 )
                continue;
              break;
            }
          }
        }
        else
        if ( pres->rep_out->next )
        {
          mustshow = 1;
          user_message( gettext( "%s  D)ownload, or C)ancel" ), (char*)pres->rep_out );
        }
        else
        {
          mustshow = 1;
          statusline( gettext( "This file cannot be displayed on this terminal:  D)ownload, or C)ancel" ) );
        }
      }
    }
    if ( LYCachedTemp( fnam, &anchor->FileCache ) & 255 )
    {
      ret_obj->fp = LYOpenTempRewrite( fnam, ".bin", "wb" );
    }
    else
    {
      if ( strcasecomp( (char*)pres->rep_out, "text/html" ) == 0 )
        suffix = ".html";
      else
      {
        if ( strncasecomp( (char*)pres->rep_out, "text/", 5 ) == 0 )
          suffix = ".txt";
        else
        {
          if ( strncasecomp( (char*)pres->rep_out, "application/", 12 ) == 0 )
            suffix = ".bin";
          else
          {
            suffix = HTFileSuffix( &pres->rep->next, &anchor->content_encoding );
            if ( suffix == 0 || suffix[0] != '.' )
              suffix = ".html";
          }
        }
      }
      ret_obj->fp = LYOpenTemp( fnam, suffix, "wb" );
    }
    if ( ret_obj->fp == 0 )
    {
      HTAlert( gettext( "Can't open output file!  Cancelling!" ) );
      if ( ret_obj )
      {
        free( ret_obj );
        ret_obj = 0;
      }
      return 0;
    }
    else
    {
      if ( strncasecomp( (char*)pres->rep_out, "text/", 5 ) == 0 || strcasecomp( (char*)pres->rep_out, "application/postscript" ) == 0 || strcasecomp( (char*)pres->rep_out, "application/x-RUNOFF-MANUAL" ) == 0 )
        IsBinary = 0;
      HTInfoMsg2( gettext( "Content-type: %s" ), (char*)pres->rep_out );
      HTSACopy( &WWW_Download_File, fnam );
      *(int*)&ret_obj->remove_command = 0;
      HTAddParam( &ret_obj->remove_command, "%s", 1, fnam );
      HTEndParam( &ret_obj->remove_command, "%s", 1 );
      HTSACopy( &ret_obj->end_command, "SaveToFile" );
      mustshow = 1;
      statusline( gettext( "Retrieving file.  - PLEASE WAIT -" ) );
      HTSACopy( &anchor->FileCache, fnam );
    }
  }
  if ( LYPrependBaseToSource && strncasecomp( (char*)pres->rep_out, "text/html", 9 ) == 0 && anchor->content_encoding == 0 )
  {
    char *temp = 0;
    if ( anchor->content_base && anchor->content_base[0] )
      HTSACopy( &temp, &anchor->content_base );
    else
    if ( anchor->content_location && anchor->content_location[0] )
      HTSACopy( &temp, &anchor->content_location );
    if ( temp )
    {
      LYRemoveBlanks( temp );
      if ( !is_url( temp ) && temp )
      {
        free( temp );
        temp = 0;
      }
    }
    fprintf( &ret_obj->fp, "&lt;!-- X-URL: %s --&gt;\n", &anchor->address );
    if ( anchor->date && anchor->date[0] )
    {
      fprintf( &ret_obj->fp, "&lt;!-- Date: %s --&gt;\n", &anchor->date );
      if ( anchor->last_modified && anchor->last_modified[0] && strcmp( &anchor->last_modified, &anchor->date ) && strcmp( &anchor->last_modified, "Thu, 01 Jan 1970 00:00:01 GMT" ) )
        fprintf( &ret_obj->fp, "&lt;!-- Last-Modified: %s --&gt;\n", &anchor->last_modified );
    }
    fprintf( &ret_obj->fp, "&lt;BASE HREF=\"%s\"&gt;\n\n", temp ? temp : &anchor->address );
    if ( temp )
    {
      free( temp );
    }
  }
  if ( LYPrependCharsetToSource && strncasecomp( (char*)pres->rep_out, "text/html", 9 ) == 0 && anchor->content_encoding == 0 )
  {
    char *temp = 0;
    if ( anchor->charset && anchor->charset[0] )
    {
      HTSACopy( &temp, &anchor->charset );
      LYRemoveBlanks( temp );
      fprintf( &ret_obj->fp, "&lt;META HTTP-EQUIV=\"Content-Type\" CONTENT=\"text/html; charset=%s\"&gt;\n\n", temp );
    }
    if ( temp )
    {
      free( temp );
    }
  }
  return ret_obj;
}
HTStream *HTCompressed( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  int eax;
  HTStream *me;
  HTFormat format;
  char *type = 0;
  HTPresentation *Pres = 0;
  HTPresentation *Pnow = 0;
  int n, i;
  BOOLEAN can_present = 0;
  char fnam[256];
  char temp[256];
  char *suffix;
  char *uncompress_mask = 0;
  char *compress_suffix = "";
  char *middle;
  if ( anchor == 0 || anchor->content_encoding == 0 || anchor->content_type == 0 )
  {
    format = HTAtom_for( "application/octet-stream" );
    me = HTStreamStack( format, &pres->rep_out, &sink->isa->name[0], anchor );
    return me;
  }
  else
  {
    n = HTList_count( HTPresentations );
    i = 0;
    for ( ; i < n; i++ )
    {
      Pnow = (HTPresentation*)HTList_objectAt( HTPresentations, i );
      if ( strcasecomp( (char*)Pnow->rep_out, &anchor->content_type ) == 0 && Pnow->rep_out == HTAtom_for( "www/present" ) )
      {
        char *program = "";
        if ( Pres == 0 )
          Pres = Pnow;
        else
        if ( Pres->quality <= Pnow->quality )
          Pres = Pnow;
        can_present = 1;
        switch ( HTEncodingToCompressType( &anchor->content_encoding ) )
        {
        case 2:
          program = HTGetProgramPath( 6 );
          if ( program )
          {
            HTSACopy( &uncompress_mask, program );
            HTSACat( &uncompress_mask, " -d --no-name %s" );
            compress_suffix = "gz";
          }
          break;
        case 4:
          program = HTGetProgramPath( 7 );
          if ( program )
          {
            HTSACopy( &uncompress_mask, program );
            HTSACat( &uncompress_mask, " %s" );
            compress_suffix = "zz";
          }
          break;
        case 3:
          program = HTGetProgramPath( 1 );
          if ( program )
          {
            HTSACopy( &uncompress_mask, program );
            HTSACat( &uncompress_mask, " -d %s" );
            compress_suffix = "bz2";
          }
          break;
        case 1:
          program = HTGetProgramPath( 19 );
          if ( program )
          {
            HTSACopy( &uncompress_mask, program );
            HTSACat( &uncompress_mask, " %s" );
            compress_suffix = "Z";
          }
          break;
        }
      }
      // i++;
    }
    if ( can_present == 0 || uncompress_mask == 0 || strchr( &anchor->content_type, ';' ) || HTOutputFormat == HTAtom_for( "www/download" ) || !strcasecomp( &pres->rep_out->name, "www/download" ) || ( traversal && strcasecomp( &anchor->content_type, "text/html" ) && strcasecomp( &anchor->content_type, "text/plain" ) ) )
    {
      if ( strchr( &anchor->content_encoding, '/' ) == 0 )
      {
        if ( strncasecomp( &anchor->content_encoding, "x-", 2 ) == 0 )
          HTSACopy( &type, "application/" );
        else
          HTSACopy( &type, "application/x-" );
        HTSACat( &type, &anchor->content_encoding );
      }
      else
        HTSACopy( &type, &anchor->content_encoding );
      format = HTAtom_for( type );
      if ( type )
      {
        free( type );
        type = 0;
      }
      if ( uncompress_mask )
      {
        free( uncompress_mask );
        uncompress_mask = 0;
      }
      me = HTStreamStack( format, &pres->rep_out, &sink->isa->name[0], anchor );
      return me;
    }
    else
    {
      me = calloc( 1, sizeof( HTStream ) );
      if ( me == 0 )
        outofmem( "./HTFWriter.c", "HTCompressed" );
      me->isa->name[0] = HTFWriter.name;
      me->input_format = pres->rep->next;
      me->output_format = pres->rep_out;
      me->anchor = anchor;
      me->sink = sink;
      if ( anchor->FileCache )
      {
        LYRemoveTemp( &anchor->FileCache );
        if ( anchor->FileCache )
        {
          free( &anchor->FileCache );
          anchor->FileCache = 0;
        }
      }
      middle = 0;
      if ( strcasecomp( &anchor->content_type, "text/html" ) == 0 )
      {
        middle = ".html";
        middle++;
      }
      else
      {
        if ( strncasecomp( &anchor->content_type, "text/", 5 ) == 0 )
          middle = "txt";
        else
        {
          if ( strncasecomp( &anchor->content_type, "application/", 12 ) == 0 )
            middle = "bin";
          else
          {
            suffix = HTFileSuffix( HTAtom_for( &anchor->content_type ), 0 );
            if ( suffix && suffix[0] == '.' )
              middle = &suffix[1];
          }
        }
      }
      temp[0] = 0;
      if ( middle )
      {
        memcpy( temp[0] + strlen( temp ) );
        strcat( temp, middle );
        strcat( temp, "." );
      }
      strcat( temp, compress_suffix );
      me->fp = LYOpenTemp( fnam, temp, "wb" );
      if ( me->fp == 0 )
      {
        HTAlert( gettext( "Can't open temporary file!" ) );
        if ( uncompress_mask )
        {
          free( uncompress_mask );
          uncompress_mask = 0;
        }
        if ( me )
        {
          free( me );
          me = 0;
        }
        return 0;
      }
      else
      {
        if ( dump_output_immediately == 0 && traversal == 0 && ( Pres->quality < 999.000000000000 || ( no_exec == 0 && ( local_exec || ( local_exec_on_local_files && ( LYJumpFileURL || strncmp( &anchor->address, "file://localhost", 16 ) == 0 ) ) ) ) ) )
          HTSACopy( &me->viewer_command, &Pres->command );
        if ( compress_suffix[0] == 'g' && me->viewer_command == 0 )
          HTSACopy( &me->end_command, "" );
        else
        {
          *(int*)&me->end_command = 0;
          HTAddParam( &me->end_command, uncompress_mask, 1, fnam );
          HTEndParam( &me->end_command, uncompress_mask, 1 );
        }
        if ( uncompress_mask )
        {
          free( uncompress_mask );
          uncompress_mask = 0;
        }
        *(int*)&me->remove_command = 0;
        HTAddParam( &me->remove_command, "%s", 1, fnam );
        HTEndParam( &me->remove_command, "%s", 1 );
        HTSACopy( &anchor->FileCache, fnam );
        return me;
      }
    }
  }
}
HTStream *HTDumpToStdout( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  HTStream *ret_obj = calloc( 1, sizeof( HTStream ) );
  if ( ret_obj == 0 )
  {
    outofmem( "./HTFWriter.c", "HTDumpToStdout" );
  }
  ret_obj->isa->name[0] = HTFWriter.name;
  *(int*)&ret_obj->remove_command = 0;
  *(int*)&ret_obj->end_command = 0;
  ret_obj->anchor = anchor;
  ret_obj->fp = stdout;
  return ret_obj;
}
#if 0
#endif
