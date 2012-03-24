#include "reg_deps.c.h"
char *depstr( char *package, char *gisbase )
{
  int eax;
  char file[2048];
  char line[2048];
  char *str;
  int first;
  int error;
  FILE *f_deps;
  char short_name[2048];
  memcpy( file, "../depends", 11 );
  f_deps = (FILE*)fopen( file, "r" );
  if ( f_deps == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 )
    {
      return str;
    }
    else
    {
      print_error( -17, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
  }
  first = 1;
  str = (char*)malloc( 2048 );
  while ( nc_fgets_nb( line, 2048, f_deps ) == 0 )
  {
    if ( line[0] )
    {
      error = __isoc99_sscanf( line, "%s", short_name );
      if ( error > 0 && strcmp( "GRASS", short_name ) )
      {
        if ( first )
        {
          strcat( str, "\t" );
          strcat( str, short_name );
          first = 0;
        }
        else
        {
          strcat( str, "," );
          strcat( str, short_name );
        }
      }
    }
  }
}
void register_extension( char *gisbase, char *bins, char *pkg_short_name, int pkg_major, int pkg_minor, int pkg_revision )
{
  char file[2048];
  char str[2048];
  int n_lines;
  int error;
  int db_exists = 1;
  int must_register;
  int copy_thru;
  int ext_exists;
  FILE *f_in, *f_out;
  char short_name[2048];
  char inst_bins[2048];
  char deps[2048];
  int major, minor, revision;
  sprintf( file, "%s/etc/extensions.db", gisbase );
  f_in = (FILE*)fopen( file, "r" );
  if ( f_in == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 )
      db_exists = 0;
    else
    {
      fclose( f_in );
      print_error( -15, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
  }
  if ( db_exists )
  {
    memcpy( TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32 );
    mkstemp( TMPDB );
    f_out = (FILE*)fopen( TMPDB, "w+" );
    if ( f_out == 0 )
    {
      print_error( -15, "could not create temp file '%s': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", TMPDB[0], strerror( *(int*)(__errno_location( )) ) );
    }
    atexit( &exit_db );
    n_lines = 0;
    must_register = 1;
    ext_exists = 0;
    while ( nc_fgets_nb( str, 2048, f_in ) == 0 )
    {
      n_lines++;
      copy_thru = 1;
      __isoc99_sscanf( str, "%s\t%i.%i.%i\t%s\t%s", short_name, &major, &minor, &revision, inst_bins, deps );
      if ( strcmp( short_name, pkg_short_name ) == 0 )
      {
        ext_exists = 1;
        error = vercmp( major, minor, revision, pkg_major, pkg_minor, pkg_revision );
        if ( FORCE == 0 )
        {
          if ( error < 0 )
            print_error( -16, "Extension '%s' with lower version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n", pkg_short_name, major, minor, revision );
          else
            print_error( -16, "Extension '%s' with same or higher version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n", pkg_short_name, major, minor, revision );
        }
        if ( FORCE )
        {
          if ( error == 0 )
            must_register = 0;
          else
          {
            must_register = 1;
            copy_thru = 0;
          }
        }
      }
      if ( copy_thru )
      {
        fprintf( f_out, str );
        fflush( f_out );
      }
    }
  }
  if ( n_lines == 0 || db_exists == 0 )
  {
    memcpy( TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32 );
    mkstemp( TMPDB );
    f_out = (FILE*)fopen( TMPDB, "w+" );
    if ( f_out == 0 )
    {
      print_error( -15, "could not create temp db '%s': %s\n \t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
    atexit( &exit_db );
    strcpy( deps, depstr( pkg_short_name, gisbase ) );
    fprintf( f_out, "%s\t%i.%i.%i\t%s\t%s\n", pkg_short_name, pkg_major, pkg_minor, pkg_revision, bins, deps );
    fclose( f_out );
  }
  else
  {
    return;
  }
}
void deregister_extension( char *package, char *pkg_short_name, char *gisbase )
{
  char file[2048];
  char str[2048];
  int error;
  int db_exists = 0;
  int copy_thru;
  FILE *f_in, *f_out;
  int found_ext;
  char short_name[2048];
  char inst_bins[2048];
  char deps[2048];
  int major, minor, revision;
  sprintf( file, "%s/etc/extensions.db", gisbase );
  f_in = (FILE*)fopen( file, "r" );
  if ( f_in == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 && FORCE == 0 )
    {
      fclose( f_in );
      print_error( -19, "could not deregister: no extensions installed\n" );
    }
    else
    if ( FORCE == 0 )
    {
      fclose( f_in );
      print_error( -19, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
  }
  else
    db_exists = 1;
  if ( db_exists )
  {
    db_exists = 0;
    memcpy( TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32 );
    mkstemp( TMPDB );
    f_out = (FILE*)fopen( TMPDB, "w+" );
    if ( f_out == 0 && FORCE == 0 )
    {
      print_error( -19, "could not create temp db '%s': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
    else
    {
      db_exists = 1;
      atexit( &exit_db );
    }
  }
  if ( db_exists )
  {
    found_ext = 0;
    while ( nc_fgets_nb( str, 2048, f_in ) == 0 )
    {
      error = __isoc99_sscanf( str, "%s\t%i.%i.%i\t%s\t%s", short_name, &major, &minor, &revision, inst_bins, deps );
      if ( error > 0 )
      {
        copy_thru = 1;
        if ( strcmp( pkg_short_name, short_name ) == 0 )
        {
          copy_thru = 0;
          found_ext = 1;
        }
        if ( copy_thru )
        {
          if ( strstr( deps, pkg_short_name ) && FORCE == 0 )
            print_error( -19, "cannot uninstall extension '%s' it is needed by '%s'.\n", pkg_short_name, short_name[0] );
          fprintf( f_out, str );
        }
      }
    }
  }
  return;
}
void check_dependencies( char *package, char *gisbase, char *grass_version )
{
  char file[2048];
  char str[2048];
  char dbstr[2048];
  int error;
  int db_exists;
  int satisfied;
  FILE *f_deps, *f_db;
  char short_name[2048];
  int major, minor, revision;
  char dep_short_name[2048];
  int dep_major, dep_minor, dep_revision;
  if ( FORCE == 0 )
  {
    f_deps = (FILE*)fopen( "../depends", "r" );
    if ( f_deps == 0 )
    {
      if ( *(int*)(__errno_location( )) == 2 )
        fprintf( stderr, "\n%s/depends ENOENT\n", package );
      else
      {
        fclose( f_deps );
        print_error( -17, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
      }
    }
    db_exists = 1;
    sprintf( file, "%s/etc/extensions.db", gisbase );
    f_db = (FILE*)fopen( file, "r" );
    if ( f_db == 0 )
    {
      if ( *(int*)(__errno_location( )) == 2 )
        db_exists = 0;
      else
      {
        fclose( f_db );
        print_error( -17, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
      }
    }
    satisfied = 0;
    while ( nc_fgets_nb( str, 2048, f_deps ) == 0 )
    {
      major = 0;
      minor = 0;
      revision = 0;
      dep_major = 0;
      dep_minor = 0;
      dep_revision = 0;
      error = __isoc99_sscanf( str, "%s\t%i.%i.%i", dep_short_name, &dep_major, &dep_minor, &dep_revision );
      if ( error > 0 )
      {
        if ( strcmp( dep_short_name, "GRASS" ) == 0 )
        {
          __isoc99_sscanf( grass_version, "%i.%i.%i", &major, &minor, &revision );
          if ( vercmp( major, minor, revision, dep_major, dep_minor, dep_revision ) < 0 )
            print_error( -18, "installed version (%s) of GRASS is too low. Required version is %i.%i.%i\n", grass_version, dep_major, dep_minor, dep_revision );
          satisfied = 1;
        }
        else
        {
          if ( db_exists )
          {
            satisfied = 0;
            rewind( f_db );
            while ( nc_fgets_nb( dbstr, 2048, f_db ) == 0 )
            {
              major = 0;
              minor = 0;
              revision = 0;
              error = __isoc99_sscanf( dbstr, "%s\t%i.%i.%i", short_name, &major, &minor, &revision );
              if ( error <= 0 || strcmp( short_name, dep_short_name ) )
                continue;
              else
              {
                if ( vercmp( major, minor, revision, dep_major, dep_minor, dep_revision ) < 0 )
                  print_error( -18, "installed version %i.%i.%i of required extension '%s' is too low.\n \t\t\t\t\t\t\t\t\t\t\t\t\tRequired version is %i.%i.%i\n", major, minor, revision, dep_short_name[0], dep_major, dep_minor, dep_revision );
                satisfied = 1;
              }
            }
            if ( satisfied == 0 )
            {
              print_error( -18, "required extension '%s' not found in '%s'.\n", dep_short_name[0], gisbase );
            }
          }
        }
      }
    }
    if ( db_exists )
      fclose( f_db );
    fclose( f_deps );
  }
  if ( 0 ^ 0 )
  {
    return;
  }
  return;
}
#if 0
#endif
