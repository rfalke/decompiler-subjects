#include "LYDownload.c.h"
static char LYValidDownloadFile[256];
void LYDownload( char *line )
{
  char *Line = 0, *method, *file, *sug_file = 0;
  int method_number;
  int count;
  char *the_command = 0;
  char buffer[256];
  char command[256];
  char *cp;
  lynx_list_item_type *download_command = 0;
  int ch;
  RecallType recall;
  int FnameTotal;
  int FnameNum;
  BOOLEAN FirstRecall = 1;
  BOOLEAN SecondS = 0;
  if ( LYValidDownloadFile )
  {
    HTSACopy( &Line, line );
    file = strstr( Line, "/File=" );
    if ( file )
    {
      file = 0;
      file += 6;
      sug_file = strstr( &file, "/SugFile=" );
      if ( sug_file )
      {
        sug_file = 0;
        sug_file += 9;
        HTUnEscape( sug_file );
      }
      if ( strcmp( file, LYValidDownloadFile ) == 0 )
      {
        if ( strncmp( file, "file://localhost", 16 ) == 0 )
          file += 16;
        else
        if ( ( file == 'f' || file == 'F' ) && strncasecomp( file, "file:", 5 ) == 0 )
          file += 5;
        HTUnEscape( file );
        method = strstr( Line, "Method=" );
        if ( method )
        {
          method += 7;
          method_number = atoi( method );
          FnameTotal = 0;
          recall = FnameTotal > 0;
          FnameNum = FnameTotal;
          if ( method_number < 0 )
          {
            mustshow = 1;
            statusline( gettext( "Enter a filename: " ) );
            while ( 1 )
            {
              if ( sug_file )
              {
                LYstrncpy( buffer, sug_file, 127 );
                while ( ch < 0 || buffer == 0 || ch == 256 || ch == 257 )
                {
                  if ( recall && ch == 256 )
                  {
                    if ( FirstRecall )
                    {
                      FirstRecall = 0;
                      FnameNum = 0;
                    }
                    else
                      FnameNum++;
                    if ( FnameTotal <= FnameNum )
                    {
                      FirstRecall = 1;
                      FnameNum = FnameTotal;
                      mustshow = 1;
                      statusline( gettext( "Enter a filename: " ) );
                    }
                    else
                    {
                      cp = (char*)HTList_objectAt( sug_filenames, FnameNum );
                      if ( cp )
                      {
                        LYstrncpy( buffer, cp, 255 );
                        if ( FnameTotal == 1 )
                        {
                          mustshow = 1;
                          statusline( gettext( "Edit the previous filename: " ) );
                        }
                        else
                        {
                          mustshow = 1;
                          statusline( gettext( "Edit a previous filename: " ) );
                        }
                      }
                    }
                  }
                  else
                  {
                    if ( recall && ch == 257 )
                    {
                      if ( FirstRecall )
                      {
                        FirstRecall = 0;
                        FnameNum = FnameTotal + -1;
                      }
                      else
                        FnameNum += -1;
                      if ( FnameNum < 0 )
                      {
                        FirstRecall = 1;
                        FnameNum = FnameTotal;
                        mustshow = 1;
                        statusline( gettext( "Enter a filename: " ) );
                      }
                      else
                      {
                        cp = (char*)HTList_objectAt( sug_filenames, FnameNum );
                        if ( cp )
                        {
                          LYstrncpy( buffer, cp, 255 );
                          if ( FnameTotal == 1 )
                          {
                            mustshow = 1;
                            statusline( gettext( "Edit the previous filename: " ) );
                          }
                          else
                          {
                            mustshow = 1;
                            statusline( gettext( "Edit a previous filename: " ) );
                          }
                        }
                      }
                    }
                  }
                }
                strcpy( command, buffer );
                if ( LYValidateFilename( buffer, command ) & 255 )
                {
                  if ( buffer == '|' )
                  {
                    HTAlert( gettext( "Cannot write to file." ) );
                    mustshow = 1;
                    statusline( gettext( "Enter a new filename: " ) );
                    FirstRecall = 1;
                    FnameNum = FnameTotal;
                  }
                  else
                  {
                    if ( LYValidateOutput( buffer ) == 78 )
                    {
                      mustshow = 1;
                      statusline( gettext( "Enter a new filename: " ) );
                      FirstRecall = 1;
                      FnameNum = FnameTotal;
                    }
                    else
                    {
                      if ( LYValidateOutput( buffer ) == 89 )
                      {
                        if ( WWW_TraceFlag )
                        {
                          fprintf( TraceFP( ), "LYDownload: filename is %s\n", buffer );
                        }
                        if ( ( LYCanWriteFile( buffer ) & 255 ) == 0 )
                        {
                          FirstRecall = 1;
                          FnameNum = FnameTotal;
                        }
                        else
                        {
                          SecondS = 1;
                          HTInfoMsg( gettext( "Saving..." ) );
                          LYCopyFile( file, buffer );
                          LYRelaxFilePermissions( buffer );
                          if ( SecondS == 1 )
                            HTAddSugFilename( buffer );
                          if ( Line == 0 )
                          {
                            return;
                          }
                          free( Line );
                          Line = 0;
                        }
                      }
                      else
                      {
                        if ( Line == 0 )
                        {
                          return;
                        }
                        free( Line );
                        Line = 0;
                      }
                    }
                  }
                }
              }
              else
              {
                buffer = 0;
              }
            }
          }
          else
          {
            buffer = 0;
            count = 0;
            download_command = downloaders;
            for ( ; count < method_number;  )
            {
              count++;
              download_command = &download_command->next;
            }
            if ( download_command->command )
            {
              if ( HTCountCommandArgs( &download_command->command ) > 1 )
              {
                mustshow = 1;
                statusline( gettext( "Enter a filename: " ) );
                while ( 1 )
                {
                  if ( sug_file )
                  {
                    strncpy( buffer, sug_file, 127 );
                    while ( ch < 0 || buffer[0] == 0 || ch == 256 || ch == 257 )
                    {
                      if ( recall && ch == 256 )
                      {
                        if ( FirstRecall )
                        {
                          FirstRecall = 0;
                          FnameNum = 0;
                        }
                        else
                          FnameNum++;
                        if ( FnameTotal <= FnameNum )
                        {
                          FirstRecall = 1;
                          FnameNum = FnameTotal;
                          mustshow = 1;
                          statusline( gettext( "Enter a filename: " ) );
                        }
                        else
                        {
                          cp = (char*)HTList_objectAt( sug_filenames, FnameNum );
                          if ( cp )
                          {
                            LYstrncpy( buffer, cp, 255 );
                            if ( FnameTotal == 1 )
                            {
                              mustshow = 1;
                              statusline( gettext( "Edit the previous filename: " ) );
                            }
                            else
                            {
                              mustshow = 1;
                              statusline( gettext( "Edit a previous filename: " ) );
                            }
                          }
                        }
                      }
                      else
                      {
                        if ( recall && ch == 257 )
                        {
                          if ( FirstRecall )
                          {
                            FirstRecall = 0;
                            FnameNum = FnameTotal + -1;
                          }
                          else
                            FnameNum += -1;
                          if ( FnameNum < 0 )
                          {
                            FirstRecall = 1;
                            FnameNum = FnameTotal;
                            mustshow = 1;
                            statusline( gettext( "Enter a filename: " ) );
                          }
                          else
                          {
                            cp = (char*)HTList_objectAt( sug_filenames, FnameNum );
                            if ( cp )
                            {
                              LYstrncpy( buffer, cp, 255 );
                              if ( FnameTotal == 1 )
                              {
                                mustshow = 1;
                                statusline( gettext( "Edit the previous filename: " ) );
                              }
                              else
                              {
                                mustshow = 1;
                                statusline( gettext( "Edit a previous filename: " ) );
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( ( no_dotfiles || show_dotfiles == 0 ) && *(char*)(LYPathLeaf( buffer )) == '.' )
                    {
                      HTAlert( gettext( "File name may not begin with a dot." ) );
                      mustshow = 1;
                      statusline( gettext( "Enter a new filename: " ) );
                    }
                    else
                    {
                      if ( strcmp( buffer, "/dev/null" ) )
                        SecondS = 1;
                    }
                  }
                  else
                  {
                    buffer[0] = 0;
                  }
                }
              }
              count = 1;
              HTAddParam( &the_command, &download_command->command, count, file );
              if ( HTCountCommandArgs( &download_command->command ) > 1 )
              {
                count++;
                HTAddParam( &the_command, &download_command->command, count, buffer );
              }
              HTEndParam( &the_command, &download_command->command, count );
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "command: %s\n", the_command );
              }
              stop_curses( );
              LYSystem( the_command );
              if ( the_command )
              {
                free( the_command );
                the_command = 0;
              }
              start_curses( );
            }
            else
            {
              HTAlert( gettext( "ERROR! - download command is misconfigured." ) );
            }
          }
          HTInfoMsg( gettext( "Cancelling!" ) );
          if ( Line == 0 )
          {
            return;
          }
          free( Line );
          Line = 0;
        }
      }
    }
  }
  HTAlert( gettext( "Unable to download file." ) );
  if ( Line == 0 )
  {
    return;
  }
  free( Line );
  Line = 0;
}
int SuffixIs( char *filename, char *suffix )
{
  size_t have = strlen( filename );
  size_t need = strlen( suffix );
  return 0;
}
int LYdownload_options( char **newfile, char *data_file )
{
  static char tempfile[256];
  char *downloaded_url = 0;
  char *sug_filename = 0;
  FILE *fp0;
  lynx_list_item_type *cur_download;
  int count;
  HTSACopy( &sug_filename, newfile );
  change_sug_filename( sug_filename );
  fp0 = InternalPageFP( tempfile, 1 );
  if ( fp0 == 0 )
  {
    return -1;
  }
  HTSACopy( &downloaded_url, newfile );
  LYLocalFileToURL( newfile, tempfile );
  LYstrncpy( LYValidDownloadFile, data_file, 255 );
  LYforce_no_cache = 1;
  BeginInternalPage( fp0, gettext( "Download Options" ), "Lynx_users_guide.html.gz#RemoteSource" );
  fwrite( "&lt;pre&gt;\n", 1, 6, fp0 );
  fprintf( fp0, "&lt;em&gt;%s&lt;/em&gt; %s\n", gettext( "Downloaded link:" ), downloaded_url );
  if ( downloaded_url )
  {
    free( downloaded_url );
    downloaded_url = 0;
  }
  fprintf( fp0, "&lt;em&gt;%s&lt;/em&gt; %s\n", gettext( "Suggested file name:" ), sug_filename );
  fprintf( fp0, "\n%s\n", gettext( "Standard download options:" ) );
  if ( no_disk_save == 0 )
  {
    if ( lynx_edit_mode == 0 )
    {
      fprintf( fp0, "   &lt;a href=\"%s//Method=-1/File=%s/SugFile=%s%s\"&gt;%s&lt;/a&gt;\n", "LYNXDOWNLOAD:", data_file, "", sug_filename, gettext( "Save to disk" ) );
      if ( SuffixIs( data_file, ".html" ) || SuffixIs( data_file, ".txt" ) )
      {
        char *target = 0;
        char *source = LYAddPathToSave( data_file );
        LYLocalFileToURL( &target, source );
        fprintf( fp0, "   &lt;a href=\"%s\"&gt;%s&lt;/a&gt;\n", target, gettext( "View temporary file" ) );
        if ( source )
        {
          free( source );
          source = 0;
        }
        if ( target )
        {
          free( target );
          target = 0;
        }
      }
    }
  }
  else
  {
    fprintf( fp0, "   &lt;em&gt;%s&lt;/em&gt;\n", gettext( "Save to disk disabled." ) );
  }
  if ( user_mode == 0 )
  {
    fprintf( fp0, "\n%s\n", gettext( "Local additions:" ) );
  }
  if ( downloaders )
  {
    count = 0;
    cur_download = downloaders;
    for ( ; cur_download; count++ )
    {
      if ( !no_download || cur_download->always_enabled )
      {
        fprintf( fp0, "   &lt;a href=\"%s//Method=%d/File=%s/SugFile=%s\"&gt;", "LYNXDOWNLOAD:", count, data_file, sug_filename );
        fputs( gettext( "Local additions:" ), fp0 );
        fwrite( "&lt;/a&gt;\n", 1, 5, fp0 );
      }
      cur_download = &cur_download->next;
      // count++;
    }
  }
  fwrite( "&lt;/pre&gt;\n", 1, 7, fp0 );
  EndInternalPage( fp0 );
  LYCloseTempFP( fp0 );
  LYRegisterUIPage( newfile, 1 );
  if ( sug_filename )
  {
    free( sug_filename );
    sug_filename = 0;
  }
  return 0;
}
#if 0
#endif
