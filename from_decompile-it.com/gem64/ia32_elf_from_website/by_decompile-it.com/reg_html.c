#include "reg_html.c.h"
void new_ext_html( char *ext, char *gisbase, char **html, int major, int minor, int revision )
{
  int pos1 = find_pos( "&lt;b&gt;Drivers sections:&lt;/b&gt;", html, 0 ), pos2, pos3;
  int start, end;
  int insert_here;
  char *first_char;
  char *last_char;
  char item[2048];
  int len;
  if ( pos1 < 0 )
  {
    pos1 = find_pos( "&lt;!-- GEM Extensions StartHTML. Do not delete or change this comment! --&gt;", html, 0 );
    if ( pos1 < 0 )
      print_warning( "Unknown format of index.html. Unable to register HTML man pages.\n" );
      return;
  }
  pos2 = find_pos( "&lt;hr&gt;", html, pos1 );
  if ( find_pos( "&lt;h3&gt;Installed extensions:&lt;/h3&gt;", html, pos1 ) == -1 )
  {
    insert_str( "&lt;h3&gt;Installed extensions:&lt;/h3&gt;\n", pos2, html );
    insert_str( "&lt;ul&gt;\n", pos2 + 1, html );
    insert_str( "&lt;/ul&gt;\n", pos2 + 2, html );
    insert_str( "&lt;p&gt;\n", pos2 + 3, html );
  }
  start = find_pos( "&lt;h3&gt;Installed extensions:&lt;/h3&gt;", html, pos1 );
  end = find_pos( "&lt;/ul&gt;", html, start );
  insert_here = start + 2;
  sprintf( item, "\"&gt;%s", ext );
  pos3 = find_pos( item, html, insert_here );
  if ( pos3 != -1 )
  {
    print_warning( "list item '%s' exists in index.html.\n", ext );
    if ( FORCE )
    {
      if ( UPGRADE == 0 )
      {
        return;
      }
      sprintf( item, "&lt;li&gt;&lt;a href=\"../extensions/%s/index.html\"&gt;%s (%i.%i.%i)&lt;/a&gt;\n", ext, ext, major, minor, revision );
      strcpy( html[ pos3 ], item );
    }
    else
    {
    }
  }
  else
  {
    pos3 = find_pos( "&lt;li&gt;&lt;a href=", html, start );
    for ( ; pos3 != -1 && pos3 < end;  )
    {
      first_char = strrchr( html[ pos3 ], '"' );
      last_char = strrchr( html[ pos3 ], '<' );
      len = last_char - first_char;
      strncpy( item, &first_char[2], len );
      item[ len + -1 ] = 0;
      if ( strcmp( ext, item ) < 0 )
      {
        insert_here = pos3;
        break;
      }
      else
      {
        start++;
        pos3 = find_pos( "&lt;li&gt;&lt;a href=", html, start );
      }
    }
    sprintf( item, "&lt;li&gt;&lt;a href=\"../extensions/%s/index.html\"&gt;%s (%i.%i.%i)&lt;/a&gt;\n", ext, ext, major, minor, revision );
    insert_str( item, insert_here, html );
  }
}
void delete_ext_html( char *ext, char *gisbase, char **html )
{
  int pos1 = find_pos( "&lt;b&gt;Drivers sections:&lt;/b&gt;", html, 0 ), pos2, pos3;
  int start, end;
  char item[2048];
  int found;
  int i;
  if ( pos1 < 0 )
  {
    pos1 = find_pos( "&lt;!-- GEM Extensions StartHTML. Do not delete or change this comment! --&gt;", html, 0 );
    if ( pos1 < 0 )
      print_warning( "Unknown format of index.html. Unable to de-register HTML man pages.\n" );
      return;
  }
  pos2 = find_pos( "&lt;hr&gt;", html, pos1 );
  if ( find_pos( "&lt;h3&gt;Installed extensions:&lt;/h3&gt;", html, pos1 ) == -1 )
    print_warning( "no extensions section found in index.html.\n" );
  else
  {
    start = find_pos( "&lt;h3&gt;Installed extensions:&lt;/h3&gt;", html, pos1 );
    end = find_pos( "&lt;/ul&gt;", html, start );
    found = 0;
    sprintf( item, "\"&gt;%s", ext );
    pos3 = find_pos( item, html, start );
    if ( pos3 == -1 )
      print_warning( "extension '%s' not listed in index.html.\n", ext );
    else
    {
      if ( pos3 < end )
        delete_str( pos3, html );
      end += -1;
      pos3 = find_pos( "&lt;ul&gt;", html, start );
      if ( pos3 != -1 && pos3 < end && end - pos3 <= 1 )
      {
        i = 0;
        for ( ; i <= 3; i++ )
        {
          delete_str( pos3 + -1, html );
          // i++;
        }
      }
    }
  }
}
void register_html( char *pkg_short_name, char *gisbase, int major, int minor, int revision )
{
  char file[2048];
  char str[2048];
  char **line;
  int n_lines, i;
  FILE *f_in, *f_out;
  sprintf( file, "%s/docs/html/index.html", gisbase );
  f_in = (FILE*)fopen( file, "r" );
  if ( f_in == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 )
    {
      return;
    }
    else
    {
      fclose( f_in );
      print_error( -24, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
  }
  memcpy( TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32 );
  mkstemp( TMP_HTML );
  f_out = (FILE*)fopen( TMP_HTML, "w+" );
  if ( f_out == 0 )
  {
    print_error( -24, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n", TMP_HTML[0], strerror( *(int*)(__errno_location( )) ) );
  }
  atexit( &exit_db );
  if ( VERBOSE )
    sprintf( str, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;", TMP_HTML, gisbase, gisbase );
  else
    sprintf( str, "cp -f %s %s/docs/html/index.html &&gt;%s ; chmod a+r %s/docs/html/index.html &&gt;%s ;", TMP_HTML, gisbase, TMP_NULL, gisbase, TMP_NULL );
  strcpy( HTML_CMD, str );
  n_lines = 0;
  for ( ; fgets( str, 2048, f_in ); n_lines++ )
  {
    // n_lines++;
  }
  if ( n_lines == 0 )
  {
    return;
  }
  rewind( f_in );
  line = calloc( n_lines + 10, sizeof( char* ) );
  i = 0;
  for ( ; i < n_lines + 10; i++ )
  {
    line[ i ] = 0;
    // i++;
  }
  i = 0;
  for ( ; fgets( str, 2048, f_in ); i++ )
  {
    line[ i ] = malloc( ( strlen( str ) + 1 ) * sizeof( char ) );
    strcpy( line[ i ], str );
    // i++;
  }
  new_ext_html( pkg_short_name, gisbase, line, major, minor, revision );
  i = 0;
  for ( ; line[ i ]; i++ )
  {
    fprintf( f_out, line[ i ] );
    // i++;
  }
  fflush( f_out );
  fclose( f_in );
  fclose( f_out );
  i = 0;
  for ( ; i < n_lines + 10; i++ )
  {
    free( line[ i ] );
    // i++;
  }
  free( line );
}
void deregister_html( char *pkg_short_name, char *gisbase )
{
  char file[2048];
  char str[2048];
  char **line;
  int n_lines, i;
  FILE *f_in, *f_out;
  sprintf( file, "%s/docs/html/index.html", gisbase );
  f_in = (FILE*)fopen( file, "r" );
  if ( f_in == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 )
    {
      return;
    }
    else
    {
      fclose( f_in );
      print_error( -24, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
  }
  memcpy( TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32 );
  mkstemp( TMP_HTML );
  f_out = (FILE*)fopen( TMP_HTML, "w+" );
  if ( f_out == 0 )
  {
    print_error( -24, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n", TMP_HTML[0], strerror( *(int*)(__errno_location( )) ) );
  }
  atexit( &exit_db );
  if ( VERBOSE )
    sprintf( str, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;", TMP_HTML, gisbase, gisbase );
  else
    sprintf( str, "cp -f %s %s/docs/html/index.html &&gt;%s ; chmod a+r %s/docs/html/index.html &&gt;%s ;", TMP_HTML, gisbase, TMP_NULL, gisbase, TMP_NULL );
  strcpy( HTML_CMD, str );
  n_lines = 0;
  for ( ; fgets( str, 2048, f_in ); n_lines++ )
  {
    // n_lines++;
  }
  if ( n_lines == 0 )
  {
    return;
  }
  rewind( f_in );
  line = calloc( n_lines + 1, sizeof( char* ) );
  i = 0;
  for ( ; i < n_lines + 1; i++ )
  {
    line[ i ] = 0;
    // i++;
  }
  i = 0;
  for ( ; fgets( str, 2048, f_in ); i++ )
  {
    line[ i ] = malloc( ( strlen( str ) + 1 ) * sizeof( char ) );
    strcpy( line[ i ], str );
    // i++;
  }
  delete_ext_html( pkg_short_name, gisbase, line );
  i = 0;
  for ( ; line[ i ]; i++ )
  {
    fprintf( f_out, line[ i ] );
    // i++;
  }
  fflush( f_out );
  fclose( f_in );
  fclose( f_out );
  i = 0;
  for ( ; i < n_lines + 1; i++ )
  {
    free( line[ i ] );
    // i++;
  }
  free( line );
}
int restore_html( char *gisbase )
{
  int eax;
  char str[2048];
  char idx[2048];
  char ext_idx[2048];
  char dir[2048];
  char subdir[2048];
  char **line;
  int n_entries, n_lines, i;
  FILE *f_in, *f_out, *f_ext;
  DIR *dirp;
  DIR *subdirp;
  struct dirent *ep;
  int num_restored;
  int n_subdirs;
  int major, minor, revision;
  sprintf( idx, "%s/docs/html/index.html", gisbase );
  f_in = (FILE*)fopen( idx, "r" );
  if ( f_in == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 )
    {
      return num_restored;
    }
    else
    {
      fclose( f_in );
      print_error( -24, "checking for file '%s': %s\n", idx[0], strerror( *(int*)(__errno_location( )) ) );
    }
  }
  memcpy( TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32 );
  mkstemp( TMP_HTML );
  f_out = (FILE*)fopen( TMP_HTML, "w+" );
  if ( f_out == 0 )
  {
    print_error( -24, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n", TMP_HTML[0], strerror( *(int*)(__errno_location( )) ) );
  }
  if ( VERBOSE )
    sprintf( str, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;", TMP_HTML, gisbase, gisbase );
  else
    sprintf( str, "cp -f %s %s/docs/html/index.html &&gt;%s ; chmod a+r %s/docs/html/index.html &&gt;%s ;", TMP_HTML, gisbase, TMP_NULL, gisbase, TMP_NULL );
  strcpy( HTML_CMD, str );
  atexit( &exit_db );
  sprintf( dir, "%s/docs/extensions", gisbase );
  dirp = opendir( dir );
  if ( dirp == 0 )
  {
  }
  else
  {
    n_entries = 0;
    n_subdirs = 0;
    while ( ep == 0 )
    {
      sprintf( subdir, "%s/%s", dir, &ep->d_name[0] );
      if ( strcmp( &ep->d_name[0], "." ) )
      {
        if ( strcmp( &ep->d_name[0], ".." ) == 0 )
        {
        }
        else
        {
          subdirp = opendir( subdir );
          if ( subdirp )
          {
            n_subdirs++;
            closedir( &subdirp );
          }
        }
      }
      else
      {
      }
    }
  }
}
#if 0
#endif
