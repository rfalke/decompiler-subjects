#include "LYUpload.c.h"
int LYUpload( char *line )
{
  int eax;
  char *method, *directory;
  int method_number;
  int count;
  char *the_upload = 0;
  char tmpbuf[256];
  char *filename = 0;
  lynx_list_item_type *upload_command = 0;
  char *the_command = 0;
  directory = strstr( line, "TO=" );
  if ( directory )
  {
    directory[ -1 ] = 0;
    directory += 3;
    method = strstr( line, "UPLOAD=" );
    if ( method )
    {
      method += 7;
      method_number = atoi( method );
      count = 0;
      upload_command = uploaders;
      for ( ; count < method_number;  )
      {
        count++;
        upload_command = &upload_command->next;
      }
      if ( upload_command->command == 0 )
      {
        HTAlert( gettext( "ERROR! - upload command is misconfigured" ) );
      }
      else
      {
        if ( HTCountCommandArgs( &upload_command->command ) )
        {
          mustshow = 1;
          statusline( gettext( "Enter a filename: " ) );
          do
          {
            tmpbuf[0] = 0;
            if ( LYgetstr( tmpbuf, 0, 256, 0 ) >= 0 && tmpbuf[0] )
            {
              if ( strstr( tmpbuf, "../" ) )
              {
                HTAlert( gettext( "Illegal redirection \"../\" found! Request ignored." ) );
              }
              else
              {
                if ( strchr( tmpbuf, '/' ) )
                {
                  HTAlert( gettext( "Illegal character \"/\" found! Request ignored." ) );
                }
                else
                if ( tmpbuf[0] == '~' )
                {
                  HTAlert( gettext( "Illegal redirection using \"~\" found! Request ignored." ) );
                }
                else
                {
                  HTSprintf0( &filename, "%s/%s", directory, tmpbuf[0] );
                  if ( filename[0] == '|' )
                  {
                    HTAlert( gettext( "Cannot write to file." ) );
                    mustshow = 1;
                    statusline( gettext( "Enter a new filename: " ) );
                  }
                  else
                  {
                    if ( LYValidateOutput( filename ) == 78 )
                      continue;
                    else
                    if ( LYValidateOutput( filename ) == 89 )
                    {
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "LYUpload: filename is %s", filename );
                      }
                    }
                  }
                }
              }
            }
            HTInfoMsg( gettext( "Cancelling!" ) );
            return 0;
          }
          while ( ( LYCanWriteFile( filename ) & 255 ) == 0 );
          HTAddParam( &the_upload, &upload_command->command, 1, filename );
          HTEndParam( &the_upload, &upload_command->command, 1 );
        }
        else
          HTSACopy( &the_upload, &upload_command->command );
        HTAddParam( &the_command, "cd %s ; ", 1, directory );
        HTEndParam( &the_command, "cd %s ; ", 1 );
        HTSACat( &the_command, the_upload );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "command: %s\n", the_command );
        }
        stop_curses( );
        LYSystem( the_command );
        start_curses( );
        if ( the_command )
        {
          free( the_command );
          the_command = 0;
        }
        if ( the_upload )
        {
          free( the_upload );
          the_upload = 0;
        }
        if ( filename )
          chmod( filename, 384 );
        if ( filename )
        {
          free( filename );
          filename = 0;
        }
        return 1;
      }
    }
  }
  HTAlert( gettext( "Unable to upload file." ) );
  return 0;
}
int LYUpload_options( char **newfile, char *directory )
{
  static char tempfile[256];
  static char curloc[256];
  FILE *fp0 = InternalPageFP( tempfile, 1 );
  lynx_list_item_type *cur_upload;
  int count;
  char *cp;
  if ( fp0 == 0 )
  {
    return -1;
  }
  cp = HTnameOfFile_WWW( directory, 0, 1 );
  strcpy( curloc, cp );
  LYTrimPathSep( curloc );
  if ( cp )
  {
    free( cp );
    cp = 0;
  }
  LYLocalFileToURL( newfile, tempfile );
  LYRegisterUIPage( newfile, 10 );
  BeginInternalPage( fp0, gettext( "Upload Options" ), "Lynx_users_guide.html.gz#DirEd" );
  fwrite( "&lt;pre&gt;\n", 1, 6, fp0 );
  fprintf( fp0, "   &lt;em&gt;%s&lt;/em&gt; %s\n", gettext( "Upload To:" ), curloc );
  fprintf( fp0, "\n%s\n", gettext( "Upload options:" ) );
  if ( uploaders )
  {
    count = 0;
    cur_upload = uploaders;
    for ( ; cur_upload; count++ )
    {
      fprintf( fp0, "   &lt;a href=\"LYNXDIRED://UPLOAD=%d/TO=%s\"&gt;", count, curloc );
      fputs( gettext( "Upload options:" ), fp0 );
      fwrite( "&lt;/a&gt;\n", 1, 5, fp0 );
      cur_upload = &cur_upload->next;
      // count++;
    }
  }
  else
    fwrite( "   &lt;NONE&gt;\n", 1, 16, fp0 );
  fwrite( "&lt;/pre&gt;\n", 1, 7, fp0 );
  EndInternalPage( fp0 );
  LYCloseTempFP( fp0 );
  LYforce_no_cache = 1;
  return 0;
}
#if 0
#endif
