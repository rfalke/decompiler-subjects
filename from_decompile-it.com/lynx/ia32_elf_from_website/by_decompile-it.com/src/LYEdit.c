#include "LYEdit.c.h"
BOOLEAN editor_can_position( void )
{
  int eax;
  static char *table[11] = { "emacs", "jed", "jmacs", "joe", "jove", "jpico", "jstar", "nano", "pico", "rjoe", "vi" };
  char *value;
  HTList *p = positionable_editor;
  unsigned int n = 0;
  for ( ; n <= 10; n++ )
  {
    if ( strstr( editor, table[ n ] ) )
    {
      break;
    }
    else
    {
      // n++;
    }
  }
  if ( positionable_editor )
  {
    do
    {
      if ( p )
      {
        p = &p->next;
        value = 0;
        if ( value )
        {
        }
      }
      value = 0;
    }
    while ( strcmp( editor, value ) );
    return 0;
  }
  return 0;
}
int edit_current_file( char *newfile, int cur, int lineno )
{
  int eax;
  int result = 0;
  char *filename = 0;
  char *colon;
  char *number_sign;
  char position[80];
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "edit_current_file(newfile=%s, cur=%d, lineno=%d)\n", newfile, cur, lineno );
  }
  if ( ( LYisLocalFile( newfile ) & 255 ) == 0 )
  {
    HTUserMsg( gettext( "Lynx cannot currently (e)dit remote WWW files." ) );
    return 0;
  }
  else
  {
    number_sign = trimPoundSelector( newfile );
    if ( strncmp( newfile, "file://localhost/", 16 ) == 0 )
      colon = &newfile[16];
    else
    {
      colon = strchr( newfile, ':' );
    }
    HTSACopy( &filename, &colon[1] );
    HTUnEscape( filename );
    if ( ( LYCanReadFile( filename ) & 255 ) == 0 )
    {
      if ( filename )
      {
        free( filename );
        filename = 0;
      }
      filename = HTParse( newfile, "", 5 );
      HTUnEscape( filename );
      if ( ( LYCanReadFile( filename ) & 255 ) == 0 )
      {
        HTAlert( gettext( "Could not access file." ) );
        if ( number_sign )
          number_sign[0] = '#';
        if ( filename )
        {
          free( filename );
          filename = 0;
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "edit_current_file returns %d\n", result );
        }
        return result;
      }
    }
    if ( cur < 0 )
      cur = 0;
    position[0] = 0;
    lineno += 0;
    if ( lineno > 0 )
      sprintf( position, "%d", lineno );
    edit_temporary_file( filename, position, 0 );
    result = 1;
  }
}
void edit_temporary_file( char *filename, char *position, char *message )
{
  struct stat stat_info;
  char *format = "%s %s";
  char *command = 0;
  char *editor_arg = "";
  int params = 1;
  int rv;
  if ( strstr( editor, "pico" ) )
    editor_arg = " -t";
  if ( ( editor_can_position( ) & 255 ) && position[0] )
  {
    format = "%s +%s%s %s";
    HTAddXpand( &command, format, params, editor );
    HTAddParam( &command, format, params, position );
    HTAddParam( &command, format, params, editor_arg );
    params++;
    params++;
    HTAddParam( &command, format, params, filename );
    params++;
    params++;
    HTEndParam( &command, format, params );
  }
  else
  {
    HTAddXpand( &command, format, params, editor );
    HTAddParam( &command, format, params, filename );
    HTEndParam( &command, format, params );
    params++;
    params++;
  }
  if ( message )
  {
    mustshow = 1;
    statusline( message );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYEdit: %s\n", command );
  }
  if ( WWW_TraceFlag && LYTraceLogFP == 0 )
    sleep( MessageSecs );
  stop_curses( );
  *(int*)(__errno_location( )) = 0;
  rv = LYSystem( command );
  if ( rv )
  {
    start_curses( );
  {
    int save_err = *(int*)(__errno_location( ));
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "ExtEditForm: system() returned %d (0x%x), %s\n", rv, rv, "reason unknown" );
    }
    LYFixCursesOn( "show error warning:" );
    if ( rv == -1 )
    {
      HTUserMsg2( gettext( "Error starting editor, %s" ), strerror( save_err ) );
    }
    else
    {
      union {
         int __in;
         int __i;
      } __u;
      __u.__in = rv;
      if ( ( ( ( ebp_116 & 127 ) + 1 ) >> 1 ) > 0 )
      {
        HTAlwaysAlert( 0, gettext( "Editor killed by signal" ) );
      }
      else
      {
        union {
           int __in;
           int __i;
        } __u;
        __u.__in = rv;
        if ( ( ebp_120 & 127 ) == 0 )
        {
          union {
             int __in;
             int __i;
          } __u;
          __u.__in = rv;
          if ( ( ( ebp_124 & 65280 ) >> 8 ) != 127 )
          {
            union {
               int __in;
               int __i;
            } __u;
            __u.__in = rv;
            sprintf( exitcode, "%d", ( ebp_128 & 65280 ) >> 8 );
            HTUserMsg2( gettext( "Editor returned with error status %s" ), exitcode );
          }
        }
        HTAlwaysAlert( 0, gettext( "Error spawning editor, check your editor definition in the options menu" ) );
      }
    }
  }
  }
  else
    start_curses( );
  HTSprintf0( &command, "%s~", filename );
  if ( stat64( command, &stat_info.st_dev ) == 0 )
    remove( command );
  if ( command )
  {
    free( command );
    command = 0;
  }
  return;
}
#if 0
#endif
