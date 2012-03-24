#include "tools.c.h"
char *basename( char *path )
{
  int eax;
  char *copy = strdup( path );
  char *element;
  char *backup = 0;
  element = strtok( copy, "/" );
  if ( element == 0 )
  {
    if ( copy )
      free( copy );
  }
  else
  {
    backup = strdup( element );
    while ( element )
    {
      element = strtok( 0, "/" );
      if ( backup && element )
        free( backup );
      if ( element && element[0] )
      {
        backup = strdup( element );
      }
    }
    if ( copy )
      free( copy );
    return backup;
  }
}
void mkdir_s( char *pathname, char *mode )
{
  char tmp[5000];
  sprintf( tmp, "mkdir %s --mode=%s -p", pathname, mode );
  system( tmp );
  return;
}
int chop( char *string )
{
  int i;
  int chopped;
  int stop = 0;
  chopped = 0;
  i = strlen( string ) + -1;
  for ( ; i >= 0;  )
  {
    stop = 1;
    if ( string[ i ] == '\n' || string[ i ] == '\t' || string[ i ] == ' ' || string[ i ] == '' || string[ i ] == '\r' )
    {
      chopped++;
      stop = 0;
    }
    if ( stop == 1 )
      break;
    i += -1;
  }
  string[ strlen( string ) - chopped ] = 0;
  return chopped;
}
int insert_str( char *str, int pos, char **strarr )
{
  int eax;
  char save[2048];
  char insert[2048];
  char last[2048];
  int n = 0, j;
  int len;
  for ( ; strarr[ n ]; n++ )
  {
    // n++;
  }
  if ( pos < 0 || n < pos )
    print_error( -21, "insert: invalid line number %i.\n", pos );
  if ( pos == n )
  {
    len = strlen( str ) + 1;
    strarr[ n ] = malloc( ( len ) * sizeof( char ) );
    strcpy( strarr[ n ], str );
    n += 2;
    strarr[ n + -1 ] = 0;
  }
  else
  {
    strcpy( last, strarr[ n + -1 ] );
    strcpy( insert, strarr[ pos ] );
    free( strarr[ pos ] );
    strarr[ pos ] = malloc( ( strlen( str ) + 1 ) * sizeof( char ) );
    strcpy( strarr[ pos ], str );
    j = pos;
    for ( ; j < n + -1; j++ )
    {
      strcpy( save, strarr[ j + 1 ] );
      free( strarr[ j + 1 ] );
      len = strlen( insert ) + 1;
      strarr[ j + 1 ] = malloc( ( len ) * sizeof( char ) );
      strcpy( strarr[ j + 1 ], insert );
      strcpy( insert, save );
      // j++;
    }
    strarr[ n ] = malloc( ( strlen( last ) + 1 ) * sizeof( char ) );
    strcpy( strarr[ n ], last );
    n += 2;
    strarr[ n + -1 ] = 0;
  }
  return n;
}
int delete_str( int pos, char **strarr )
{
  int i = 0;
  for ( ; strarr[ i ]; i++ )
  {
    // i++;
  }
  if ( pos < 0 || i < pos )
    print_error( -21, "delete: invalid line number %i.\n", pos );
  i = pos;
  for ( ; strarr[ i ]; i++ )
  {
    free( strarr[ i ] );
    if ( strarr[ i + 1 ] )
    {
      strarr[ i ] = malloc( ( strlen( strarr[ i + 1 ] ) + 1 ) * sizeof( char ) );
      strcpy( strarr[ i ], strarr[ i + 1 ] );
    }
    // i++;
  }
  i += -1;
  strarr[ i ] = 0;
  return i;
}
int find_pos( char *str, char **strarr, int start )
{
  int eax;
  int i = 0, j;
  for ( ; strarr[ i ]; i++ )
  {
    // i++;
  }
  if ( start < 0 || i < start )
  {
    exit( -21 );
  }
  j = start;
  for ( ; j < i; j++ )
  {
    if ( strstr( strarr[ j ], str ) )
    {
      return j;
    }
    // j++;
  }
}
void dump_str( FILE *f, char **strarr )
{
  int i = 0;
  for ( ; strarr[ i ]; i++ )
  {
    fprintf( f, "%i: %s", i, strarr[ i ] );
    // i++;
  }
  return;
}
void get_package_name( char *path, char *name )
{
  FILE *f;
  char file[2048];
  char tmp[2048];
  sprintf( file, "%s/%s", path, "name" );
  f = (FILE*)fopen( file, "r" );
  if ( f == 0 )
    print_error( -6, "'name' file not readable.\n" );
  else
  {
    if ( nc_fgets_nb( tmp, 2048, f ) == 0 )
    {
      fclose( f );
      print_error( -6, "invalid or missing extension name.\n" );
    }
    else
    {
      chop( tmp );
      strcpy( name, tmp );
    }
  }
  fclose( f );
  return;
}
char *nc_fgets( char *s, int size, FILE *stream )
{
  int eax;
  char *hashmark;
  char *tmp;
  if ( fgets( s, size, stream ) == 0 )
  {
  }
  hashmark = strchr( s, '#' );
  if ( hashmark )
  {
    if ( s == hashmark )
    {
      nc_fgets( s, size, stream );
    }
    tmp = (char*)malloc( 2048 );
    strcpy( tmp, s );
    tmp = strtok( tmp, "#" );
    sprintf( s, "%s\n", tmp );
    free( tmp );
  }
  return s;
}
char *nc_fgets_html( char *s, int size, FILE *stream )
{
  int eax;
  char *hashmark;
  char *tmp;
  char *tag;
  char *tag_2;
  char *tag_insert;
  char *tag_content;
  char *pos;
  char *insert;
  int space;
  if ( fgets( s, size, stream ) == 0 )
  {
  }
  tmp = malloc( ( strlen( s ) + 1 ) * sizeof( char ) );
  tag_content = malloc( ( strlen( s ) + 1 ) * sizeof( char ) );
  insert = tmp;
  pos = s;
  for ( ; pos[0]; pos++ )
  {
    if ( pos[0] == '<' )
    {
      tag = pos;
      tag_insert = tag_content;
      pos = &pos[ -1 ];
      if ( s <= pos )
      {
        if ( pos[0] == ' ' )
        {
          space = 1;
        }
        else
        {
          space = 0;
        }
      }
      while ( tag[0] )
      {
        tag_insert[0] = tag[0];
        tag_insert[0] = tag_insert[0] + 1;
        if ( tag[0] == '>' )
        {
          tag_insert[0] = 0;
          tag_2 = tag;
          tag_2++;
          if ( tag_2[0] != '\n' )
          {
            if ( strstr( tag_content, "&lt;br&gt;" ) && tmp < insert )
            {
              insert[0] = '\n';
              insert[0] = insert[0] + 1;
            }
            if ( strstr( tag_content, "&lt;BR&gt;" ) && tmp < insert )
            {
              insert[0] = '\n';
              insert[0] = insert[0] + 1;
            }
            if ( strstr( tag_content, "&lt;p&gt;" ) )
            {
              if ( tmp < insert )
              {
                insert[0] = '\n';
                insert[0] = insert[0] + 1;
              }
              insert[0] = '\n';
              insert[0] = insert[0] + 1;
            }
            if ( strstr( tag_content, "&lt;P&gt;" ) )
            {
              if ( tmp < insert )
              {
                insert[0] = '\n';
                insert[0] = insert[0] + 1;
              }
              insert[0] = '\n';
              insert[0] = insert[0] + 1;
            }
          }
          pos = tag;
          if ( pos[0] == ' ' )
          {
            if ( space == 1 )
            {
              pos++;
              space = 0;
              break;
            }
            else
              break;
          }
          else
          {
            break;
          }
        }
        else
        {
          tag++;
        }
      }
    }
    if ( pos[0] != '>' )
    {
      insert[0] = pos[0];
      insert++;
    }
    // pos++;
  }
  insert[0] = 0;
  strcpy( s, tmp );
  free( tmp );
  free( tag_content );
  hashmark = strchr( s, '#' );
  if ( hashmark )
  {
    if ( s == hashmark )
    {
      nc_fgets_html( s, size, stream );
    }
    tmp = (char*)malloc( 2048 );
    strcpy( tmp, s );
    tmp = strtok( tmp, "#" );
    sprintf( s, "%s\n", tmp );
    free( tmp );
  }
  return s;
}
int is_text( char *s )
{
  int i;
  int nonws = 0;
  i = strlen( s ) + -1;
  while ( i >= 0 )
  {
    if ( s[ i ] == ' ' || s[ i ] == '\t' || s[ i ] == '\n' || s[ i ] == '' || s[ i ] == '\r' )
    {
      nonws = 0;
      i += -1;
    }
    else
    {
      nonws = 1;
      break;
    }
  }
  return nonws;
}
char *nc_fgets_nb( char *s, int size, FILE *stream )
{
  int eax;
  char *hashmark;
  char *tmp;
  if ( fgets( s, size, stream ) == 0 )
  {
  }
  if ( is_text( s ) == 0 )
  {
    nc_fgets_nb( s, size, stream );
  }
  hashmark = strchr( s, '#' );
  if ( hashmark )
  {
    if ( s == hashmark )
    {
      nc_fgets_nb( s, size, stream );
    }
    tmp = (char*)malloc( 2048 );
    strcpy( tmp, s );
    tmp = strtok( tmp, "#" );
    sprintf( s, "%s\n", tmp );
    free( tmp );
  }
  return s;
}
void dump_ascii( char *file, char *heading )
{
  char tmp[2048];
  FILE *f;
  fprintf( stdout, "%s\n", heading );
  f = (FILE*)fopen( file, "r" );
  if ( f == 0 )
    fwrite( "  No information available.\n", 1, 28, stdout );
  else
  {
    while ( nc_fgets_html( tmp, 2048, f ) == 0 )
    {
      fprintf( stdout, "  %s", tmp );
    }
    fputc( 10, stdout );
    fclose( f );
  }
  return;
}
void dump_plain( char *file, char *tmpfile )
{
  char tmp[2048];
  FILE *f_in;
  FILE *f_out;
  memcpy( tmpfile, "/tmp/grass.extensions.db.XXXXXX", 32 );
  mkstemp( tmpfile );
  f_out = (FILE*)fopen( tmpfile, "w+" );
  if ( f_out == 0 )
  {
    print_error( -23, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n", tmpfile, strerror( *(int*)(__errno_location( )) ) );
  }
  atexit( &exit_db );
  f_in = (FILE*)fopen( file, "r" );
  while ( nc_fgets( tmp, 2048, f_in ) == 0 )
  {
    fprintf( f_out, tmp );
  }
  fclose( f_in );
  fclose( f_out );
  return;
}
void dump_html( char *file, char *tmpfile )
{
  char tmp[2048];
  char line[2048];
  FILE *f_in;
  FILE *f_out;
  int fd;
  memcpy( tmpfile, "/tmp/grass.extensions.db.XXXXXX", 32 );
  mkstemp( tmpfile );
  f_out = (FILE*)fopen( tmpfile, "w+" );
  if ( f_out == 0 )
  {
    print_error( -23, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n", tmpfile, strerror( *(int*)(__errno_location( )) ) );
  }
  atexit( &exit_db );
  f_in = (FILE*)fopen( file, "r" );
  while ( nc_fgets( line, 2048, f_in ) == 0 )
  {
    chop( line );
    if ( is_text( line ) == 0 )
    {
      fwrite( "&lt;p&gt;\n", 1, 4, f_out );
    }
    else
    {
      sprintf( tmp, "%s &lt;br&gt;\n", line );
      fprintf( f_out, tmp );
    }
  }
}
void list_binaries( char *package )
{
  char tmp[2048];
  struct stat buf;
  DIR *dir;
  struct dirent *dir_entry;
  int n_dirs = 0;
  fwrite( "Binary installation files\n", 1, 26, stdout );
  dir = opendir( package );
  if ( dir == 0 )
    fwrite( "  None.\n\n", 1, 9, stdout );
  else
  {
    dir_entry = (struct dirent*)readdir( &dir );
    for ( ; dir_entry == 0;  )
    {
      if ( strcmp( &dir_entry->d_name[0], "." ) && strcmp( &dir_entry->d_name[0], ".." ) && strcmp( &dir_entry->d_name[0], "src" ) )
      {
        sprintf( tmp, "%s/%s", package, &dir_entry->d_name[0] );
        stat( tmp, &buf.st_dev );
        if ( ( buf.st_mode & 61440 ) == 16384 )
        {
          if ( n_dirs == 0 )
            fprintf( stdout, "  %s", &dir_entry->d_name[0] );
          else
            fprintf( stdout, ", %s", &dir_entry->d_name[0] );
          n_dirs++;
        }
      }
      dir_entry = (struct dirent*)readdir( &dir );
    }
  }
  return;
}
int binaries_exist( char *package, char *binaries )
{
  char tmp[2048];
  struct stat buf;
  DIR *dir = opendir( package );
  struct dirent *dir_entry;
  if ( dir == 0 )
  {
  }
  else
  {
    dir_entry = (struct dirent*)readdir( &dir );
    for ( ; dir_entry == 0;  )
    {
      if ( strcmp( &dir_entry->d_name[0], "." ) && strcmp( &dir_entry->d_name[0], ".." ) && strcmp( &dir_entry->d_name[0], "src" ) )
      {
        sprintf( tmp, "%s/%s", package, &dir_entry->d_name[0] );
        stat( tmp, &buf.st_dev );
        if ( ( buf.st_mode & 61440 ) == 16384 && strcmp( &dir_entry->d_name[0], binaries ) == 0 )
        {
        }
      }
      dir_entry = (struct dirent*)readdir( &dir );
    }
  }
  return 1;
}
int check_filetype( char *myfile )
{
  if ( strstr( myfile, ebp_20 ) )
  {
  }
  if ( strstr( myfile, ".tgz" ) )
  {
  }
  if ( strstr( myfile, ".tar.bz2" ) )
  {
  }
  if ( strstr( myfile, ".tbz" ) )
  {
  }
  if ( strstr( myfile, ".zip" ) )
  {
  }
  if ( strstr( myfile, ".tar" ) )
  {
  }
  return 2;
}
void wget_extension( char *url )
{
  char str[2048];
  int error;
  fwrite( "Downloading...", 1, 14, stdout );
  if ( VERBOSE )
    sprintf( str, "wget -N %s", url );
  else
    sprintf( str, "wget -N -q %s", url );
  error = system( str );
  if ( error == -1 )
    print_error( -20, "could not run 'wget' to download extension. Is it installed?\n" );
  if ( error > 0 )
    print_error( -20, "running command '%s'.\n", str[0] );
  print_done( );
  return;
}
void su( char *gisbase, char *cmd )
{
  static unsigned long next;
  char tmpfile[2048];
  int error;
  FILE *f;
  next = ( next * 0x41c64e6d ) + 54321;
  next = ( next >> 16 ) & 32767;
  srand( next );
  sprintf( tmpfile, "%s/gem.test.%i", gisbase, rand( ) );
  f = (FILE*)fopen( tmpfile, "w+" );
  if ( *(int*)(__errno_location( )) == 13 )
    print_error( -5, "You don't have write access to your local GRASS installation.\nPlease consult your system administrator.\n" );
  else
  {
    remove( tmpfile );
    fclose( f );
    error = system( cmd );
    if ( error )
      print_error( -9, "could not run '%s'.\n", cmd );
  }
  return;
}
int vercmp( int major, int minor, int revision, int major2, int minor2, int revision2 )
{
  if ( major2 == major && minor2 == minor && revision2 == revision )
  {
  }
  if ( major < major2 )
  {
  }
  if ( major2 < major )
  {
  }
  if ( minor < minor2 )
  {
  }
  if ( minor2 < minor )
  {
  }
  if ( revision < revision2 )
  {
  }
  if ( revision2 < revision )
  {
  }
  return 0;
}
#if 0
#endif
