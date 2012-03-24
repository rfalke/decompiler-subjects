#include "actions.c.h"
void check_extension( char *package, char *name, int *major, int *minor, int *revision )
{
  int error;
  char tmp[2048];
  FILE *f;
  *(int*)&tmp[0] = 0;
  memset( &tmp[4], 0, 2044 );
  fwrite( "Checking extension ...", 1, 22, stdout );
  strcpy( tmp, package );
  error = chdir( tmp );
  if ( error < 0 )
  {
    print_error( -2, "extension '%s' not accessible: %s\n", package, strerror( *(int*)(__errno_location( )) ) );
  }
  f = (FILE*)fopen( "id", "r" );
  if ( f == 0 )
    print_error( -6, "'id' file not readable.\n" );
  else
  {
    __isoc99_fscanf( f, "%[&lt;GRASS extension package&gt;] ", &tmp );
    if ( strcmp( "&lt;GRASS extension package&gt;", tmp ) )
    {
      fclose( f );
      print_error( -6, "unknown file identifier.\n" );
    }
  }
  fclose( f );
  get_package_name( ".", name );
  f = (FILE*)fopen( "version", "r" );
  if ( f == 0 )
    print_error( -6, "'version' file not readable.\n" );
  else
  {
    nc_fgets_nb( tmp, 2048, f );
    minor[0] = 0;
    revision[0] = 0;
    error = __isoc99_sscanf( tmp, "%i.%i.%i", major, minor, revision );
    if ( error <= 0 )
    {
      fclose( f );
      print_error( -6, "invalid or missing version information.\n" );
    }
  }
  print_done( );
  chdir( ".." );
  fclose( f );
  return;
}
void unpack_extension( char *package )
{
  int error;
  int fd;
  char tmp[2048];
  int ftype;
  fwrite( "Uncompressing files...", 1, 22, stdout );
  memcpy( TMPDIR, "/tmp/grass.extension.XXXXXX", 28 );
  mkstemp( TMPDIR );
  fd = open( TMPDIR, 64, 511 );
  if ( fd == -1 )
  {
    print_error( -7, "could not create temp directory name: %s", strerror( *(int*)(__errno_location( )) ) );
    exit( -7 );
  }
  if ( VERBOSE )
    fprintf( stdout, "\nUncompressing to: %s.\n", TMPDIR );
  close( fd );
  remove( TMPDIR );
  mkdir_s( TMPDIR, "0700" );
  atexit( &exit_tmp );
  sprintf( tmp, "cp %s %s", package, TMPDIR );
  error = system( tmp );
  if ( error < 0 )
  {
    print_error( -7, "could not copy extension files to temp dir.\n" );
    exit( -7 );
  }
  ftype = check_filetype( package );
  if ( ftype == 0 )
  {
    print_warning( "file name not '.tar.gz', '.tgz', '.tar.bz2', '.tbz' or '.zip'. Assuming '.tgz'.\n" );
    ftype = 1;
  }
  if ( ftype == 1 )
  {
    if ( VERBOSE )
    {
      sprintf( tmp, "tar -xzvf %s/%s -C %s", TMPDIR, basename( package ), TMPDIR );
    }
    else
    {
      sprintf( tmp, "tar -xzf %s/%s -C %s", TMPDIR, basename( package ), TMPDIR );
    }
  }
  if ( ftype == 2 )
  {
    if ( VERBOSE )
    {
      sprintf( tmp, "tar -xjvf %s/%s -C %s", TMPDIR, basename( package ), TMPDIR );
    }
    else
    {
      sprintf( tmp, "tar -xjvf %s/%s -C %s", TMPDIR, basename( package ), TMPDIR );
    }
  }
  if ( ftype == 3 )
  {
    if ( VERBOSE )
    {
      sprintf( tmp, "unzip %s/%s -d %s", TMPDIR, basename( package ), TMPDIR );
    }
    else
    {
      sprintf( tmp, "unzip -qq %s/%s -d %s", TMPDIR, basename( package ), TMPDIR );
    }
  }
  if ( ftype == 4 )
  {
    if ( VERBOSE )
    {
      sprintf( tmp, "tar -xvf %s/%s -C %s", TMPDIR, basename( package ), TMPDIR );
    }
    else
    {
      sprintf( tmp, "tar -xf %s/%s -C %s", TMPDIR, basename( package ), TMPDIR );
    }
  }
  error = system( tmp );
  if ( error < 0 )
  {
    if ( ftype == 1 )
      print_error( -7, "could not extract files using 'tar' and 'gzip'. \n \t\t\t\t\tExtract manually using 'tar -xzvf %s'.\n", package );
    if ( ftype == 2 )
      print_error( -7, "could not extract files using 'tar' and 'bunzip2'.\n \t\t\t\tExtract manually using 'tar -xjvf %s'.\n", package );
    if ( ftype == 3 )
      print_error( -7, "could not extract files using 'unzip'.\n \t\t\t\tExtract manually using 'unzip %s'.\n", package );
    exit( -7 );
  }
  else
  {
    print_done( );
    return;
  }
}
void query_extension( char *package, char *name, int major, int minor, int revision, char *short_name, char *invocation, char *org_name )
{
  int error;
  char tmp[2048];
  strcpy( tmp, basename( package ) );
  error = chdir( tmp );
  if ( error < 0 )
  {
    print_error( -2, "extension '%s' not accessible: %s\n", package, strerror( *(int*)(__errno_location( )) ) );
  }
  fprintf( stdout, "\nExtension '%s', version %i.%i.%i\n\n", name, major, minor, revision );
  dump_ascii( "description", "Description" );
  dump_ascii( "commands", "Commands provided" );
  dump_ascii( "libs", "Libraries provided" );
  dump_ascii( "headers", "Header files provided" );
  dump_ascii( "depends", "Dependencies" );
  dump_ascii( "bugs", "Bugs" );
  sprintf( tmp, "../%s", package );
  list_binaries( tmp );
  dump_ascii( "authors", "Author(s)" );
  fprintf( stdout, "Type '%s -d %s' to see more detailed information.\n", invocation, org_name );
  fprintf( stdout, "Type '%s -l %s' to see copyright information.\n", invocation, org_name );
  system( "sh post" );
  exit( 0 );
}
void print_cfg( void )
{
  int eax;
  FILE *fp = (FILE*)fopen( "config.msg", "r" );
  char line[2048];
  if ( fp )
  {
    fwrite( "\nResult of configuration: \n", 1, 27, stdout );
    while ( fgets( line, 2048, fp ) == 0 )
    {
      fputs( line, stdout );
    }
    fputc( 10, stdout );
  }
  remove( "config.msg" );
  return;
}
void source_install( char *package, char *gisbase, char *pkg_short_name, int pkg_major, int pkg_minor, int pkg_revision, char *grass_version )
{
  char tmp[2048];
  char dir[2048];
  char install_cmd[2048];
  char post_cmd[2048];
  char sysstr[2048];
  int error = stat( gisbase, &buf.st_dev );
  struct stat buf;
  FILE *f;
  char *verstr;
  char *grass_major;
  char *grass_minor;
  char *grass_revision;
  int major, minor, revision;
  if ( error < 0 )
  {
    print_error( -5, "installation directory invalid: %s\n", strerror( *(int*)(__errno_location( )) ) );
  }
  sprintf( GINSTALL_DST, "GINSTALL_DST=%s", gisbase );
  putenv( GINSTALL_DST );
  sprintf( tmp, "%s/include", gisbase );
  sprintf( GINSTALL_INC, "GINSTALL_INC=%s", tmp );
  putenv( GINSTALL_INC );
  sprintf( tmp, "%s/lib", gisbase );
  sprintf( GINSTALL_LIB, "GINSTALL_LIB=%s", tmp );
  putenv( GINSTALL_LIB );
  sprintf( GEM_GRASS_DIR, "GEM_GRASS_DIR=%s", gisbase );
  putenv( GEM_GRASS_DIR );
  verstr = strdup( grass_version );
  grass_major = strtok( verstr, "." );
  grass_minor = strtok( 0, "." );
  grass_revision = strtok( 0, "." );
  major = strtol( grass_major, 0, 10 );
  minor = strtol( grass_minor, 0, 10 );
  revision = strtol( grass_revision, 0, 10 );
  free( verstr );
  atexit( &exit_tmp );
  sprintf( dir, "%s/src", basename( package ) );
  error = chdir( dir );
  if ( error < 0 )
  {
    print_error( -2, "extension files in '%s' not accessible: %s\n", package, strerror( *(int*)(__errno_location( )) ) );
  }
  if ( SKIP_CFG == 0 )
  {
    if ( VERBOSE )
    {
      fwrite( "Running configure script:\n", 1, 26, stdout );
      sprintf( sysstr, "sh %s %s", CONFIG_CMD, CONFIG_OPTS );
      error = system( sysstr );
    }
    else
    {
      fwrite( "Configuring...", 1, 14, stdout );
      sprintf( sysstr, "sh %s %s --quiet &&gt; %s", CONFIG_CMD, CONFIG_OPTS, TMP_NULL );
      error = system( sysstr );
    }
    if ( error == -1 )
      print_error( -27, "could not run configure script.\n" );
    if ( error > 0 )
      print_error( -3, "system configuration failed.\n" );
    print_done( );
    print_cfg( );
  }
  sprintf( GEM_EXT_NAME, "GEM_EXT_NAME=%s", pkg_short_name );
  putenv( GEM_EXT_NAME );
  sprintf( tmp, "%i.%i.%i", pkg_major, pkg_minor, pkg_revision );
  sprintf( GEM_EXT_VERSION, "GEM_EXT_VERSION=%s", tmp );
  putenv( GEM_EXT_VERSION );
  dump_html( "../description", TMP_DESCR );
  dump_html( "../info", TMP_INFO );
  dump_html( "../depends", TMP_DEPS );
  dump_html( "../bugs", TMP_BUGS );
  dump_html( "../authors", TMP_AUTHORS );
  sprintf( GEM_EXT_DESCR, "GEM_EXT_DESCR=%s", TMP_DESCR );
  putenv( GEM_EXT_DESCR );
  sprintf( GEM_EXT_INFO, "GEM_EXT_INFO=%s", TMP_INFO );
  putenv( GEM_EXT_INFO );
  sprintf( GEM_EXT_DEPS, "GEM_EXT_DEPS=%s", TMP_DEPS );
  putenv( GEM_EXT_DEPS );
  sprintf( GEM_EXT_BUGS, "GEM_EXT_BUGS=%s", TMP_BUGS );
  putenv( GEM_EXT_BUGS );
  sprintf( GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s", TMP_AUTHORS );
  putenv( GEM_EXT_AUTHORS );
  atexit( &exit_tmp );
  check_dependencies( package, gisbase, grass_version );
  if ( VERBOSE )
  {
    fprintf( stdout, "Running '%s':\n", MAKE_CMD );
    sprintf( sysstr, "%s -f Makefile", MAKE_CMD );
    error = system( sysstr );
  }
  else
  {
    fwrite( "Compiling...", 1, 12, stdout );
    sprintf( sysstr, "%s -f Makefile &&gt; %s", MAKE_CMD, TMP_NULL );
    error = system( sysstr );
  }
  if ( error == -1 && VERBOSE == 0 )
    print_error( -9, "could not run '%s' do you have make tools installed?\n", MAKE_CMD[0] );
  if ( error > 0 )
    print_error( -4, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n" );
  print_done( );
  fwrite( "Installing...", 1, 13, stdout );
  f = (FILE*)fopen( "../uninstall", "r" );
  if ( f == 0 )
  {
    print_warning( "error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", strerror( *(int*)(__errno_location( )) ) );
  }
  else
  {
    if ( VERBOSE )
    {
      sprintf( tmp, "cp -vf ../uninstall %s/etc/uninstall.%s ;", gisbase, pkg_short_name );
      strcpy( UNINSTALL_CMD, tmp );
    }
    else
    {
      sprintf( tmp, "cp -f ../uninstall %s/etc/uninstall.%s &&gt; %s ;", gisbase, pkg_short_name, TMP_NULL );
      strcpy( UNINSTALL_CMD, tmp );
    }
    fclose( f );
  }
  register_extension( gisbase, "src", pkg_short_name, pkg_major, pkg_minor, pkg_revision );
  check_dependencies( package, gisbase, grass_version );
  if ( major == 6 && minor <= 0 )
    register_entries_gisman( pkg_short_name, gisbase );
  register_entries_gisman2( pkg_short_name, gisbase );
  register_html( pkg_short_name, gisbase, pkg_major, pkg_minor, pkg_revision );
  if ( VERBOSE )
  {
    fprintf( stdout, "Running '%s install':\n", MAKE_CMD );
    sprintf( install_cmd, "%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;", MAKE_CMD, TMPDB, gisbase, gisbase );
  }
  else
    sprintf( install_cmd, "%s -f Makefile -s install &&gt; %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &&gt; %s ; chmod a+r %s/etc/extensions.db &&gt; %s ;", MAKE_CMD, TMP_NULL, TMPDB, gisbase, TMP_NULL, gisbase, TMP_NULL );
  if ( VERBOSE )
    memcpy( post_cmd, "sh ../post", 11 );
  else
    sprintf( post_cmd, "sh ../post &&gt; %s", TMP_NULL );
  sprintf( tmp, "%s %s %s %s %s %s", install_cmd, UNINSTALL_CMD, GISMAN_CMD, GISMAN2_CMD, HTML_CMD, post_cmd );
  su( gisbase, tmp );
  print_done( );
  return;
}
void bin_install( char *package, char *gisbase, char *bins, char *pkg_short_name, int pkg_major, int pkg_minor, int pkg_revision, char *grass_version )
{
  char tmp[2048];
  char dir[2048];
  char install_cmd[2048];
  char post_cmd[2048];
  int error = stat( gisbase, &buf.st_dev );
  struct stat buf;
  FILE *f;
  char *verstr;
  char *grass_major;
  char *grass_minor;
  char *grass_revision;
  int major, minor, revision;
  if ( error < 0 )
  {
    print_error( -5, "installation directory invalid: %s\n", strerror( *(int*)(__errno_location( )) ) );
  }
  sprintf( GINSTALL_DST, "GINSTALL_DST=%s", gisbase );
  putenv( GINSTALL_DST );
  sprintf( tmp, "%s/include", gisbase );
  sprintf( GINSTALL_INC, "GINSTALL_INC=%s", tmp );
  putenv( GINSTALL_INC );
  sprintf( tmp, "%s/lib", gisbase );
  sprintf( GINSTALL_LIB, "GINSTALL_LIB=%s", tmp );
  putenv( GINSTALL_LIB );
  sprintf( GEM_GRASS_DIR, "GEM_GRASS_DIR=%s", gisbase );
  putenv( GEM_GRASS_DIR );
  verstr = strdup( grass_version );
  grass_major = strtok( verstr, "." );
  grass_minor = strtok( 0, "." );
  grass_revision = strtok( 0, "." );
  major = strtol( grass_major, 0, 10 );
  minor = strtol( grass_minor, 0, 10 );
  revision = strtol( grass_revision, 0, 10 );
  free( verstr );
  atexit( &exit_tmp );
  sprintf( dir, "%s/%s", basename( package ), bins );
  error = chdir( dir );
  if ( error < 0 )
  {
    print_error( -2, "extension file binaries in '%s' not accessible: %s\n", package, strerror( *(int*)(__errno_location( )) ) );
  }
  sprintf( GEM_EXT_NAME, "GEM_EXT_NAME=%s", pkg_short_name );
  putenv( GEM_EXT_NAME );
  sprintf( tmp, "%i.%i.%i", pkg_major, pkg_minor, pkg_revision );
  sprintf( GEM_EXT_VERSION, "GEM_EXT_VERSION=%s", tmp );
  putenv( GEM_EXT_VERSION );
  dump_html( "../description", TMP_DESCR );
  dump_html( "../info", TMP_INFO );
  dump_html( "../depends", TMP_DEPS );
  dump_html( "../bugs", TMP_BUGS );
  dump_html( "../authors", TMP_AUTHORS );
  sprintf( GEM_EXT_DESCR, "GEM_EXT_DESCR=%s", TMP_DESCR );
  putenv( GEM_EXT_DESCR );
  sprintf( GEM_EXT_INFO, "GEM_EXT_INFO=%s", TMP_INFO );
  putenv( GEM_EXT_INFO );
  sprintf( GEM_EXT_DEPS, "GEM_EXT_DEPS=%s", TMP_DEPS );
  putenv( GEM_EXT_DEPS );
  sprintf( GEM_EXT_BUGS, "GEM_EXT_BUGS=%s", TMP_BUGS );
  putenv( GEM_EXT_BUGS );
  sprintf( GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s", TMP_AUTHORS );
  putenv( GEM_EXT_AUTHORS );
  atexit( &exit_tmp );
  check_dependencies( package, gisbase, grass_version );
  fwrite( "Installing...", 1, 13, stdout );
  f = (FILE*)fopen( "../uninstall", "r" );
  if ( f == 0 )
  {
    print_warning( "error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", strerror( *(int*)(__errno_location( )) ) );
  }
  else
  {
    if ( VERBOSE )
    {
      sprintf( tmp, "cp -vf ../uninstall %s/etc/uninstall.%s ;", gisbase, pkg_short_name );
      strcpy( UNINSTALL_CMD, tmp );
    }
    else
    {
      sprintf( tmp, "cp -f ../uninstall %s/etc/uninstall.%s &&gt; %s ;", gisbase, pkg_short_name, TMP_NULL );
      strcpy( UNINSTALL_CMD, tmp );
    }
    fclose( f );
  }
  register_extension( gisbase, bins, pkg_short_name, pkg_major, pkg_minor, pkg_revision );
  check_dependencies( package, gisbase, grass_version );
  if ( major == 6 && minor <= 0 )
    register_entries_gisman( pkg_short_name, gisbase );
  register_entries_gisman2( pkg_short_name, gisbase );
  register_html( pkg_short_name, gisbase, pkg_major, pkg_minor, pkg_revision );
  if ( VERBOSE )
  {
    fprintf( stdout, "Running '%s install':\n", MAKE_CMD );
    sprintf( install_cmd, "bin/%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;", MAKE_CMD, TMPDB, gisbase, gisbase );
  }
  else
    sprintf( install_cmd, "bin/%s -f Makefile -s install &&gt; %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &&gt; %s ; chmod a+r %s/etc/extensions.db &&gt; %s ;", MAKE_CMD, TMP_NULL, TMPDB, gisbase, TMP_NULL, gisbase, TMP_NULL );
  if ( VERBOSE )
    memcpy( post_cmd, "sh ../post", 11 );
  else
    sprintf( post_cmd, "sh ../post &&gt; %s", TMP_NULL );
  sprintf( tmp, "%s %s %s %s %s %s", install_cmd, UNINSTALL_CMD, GISMAN_CMD, GISMAN2_CMD, HTML_CMD, post_cmd );
  su( gisbase, tmp );
  print_done( );
  return;
}
void test_install( char *package, char *gisbase, char *pkg_short_name, int pkg_major, int pkg_minor, int pkg_revision, char *grass_version )
{
  char tmp[2048];
  char dir[2048];
  char sysstr[2048];
  int error = stat( gisbase, &buf.st_dev );
  struct stat buf;
  FILE *f;
  char *verstr;
  char *grass_major;
  char *grass_minor;
  char *grass_revision;
  int major, minor, revision;
  if ( error < 0 )
  {
    print_error( -5, "installation directory invalid: %s\n", strerror( *(int*)(__errno_location( )) ) );
  }
  sprintf( GINSTALL_DST, "GINSTALL_DST=%s", gisbase );
  putenv( GINSTALL_DST );
  sprintf( tmp, "%s/include", gisbase );
  sprintf( GINSTALL_INC, "GINSTALL_INC=%s", tmp );
  putenv( GINSTALL_INC );
  sprintf( tmp, "%s/lib", gisbase );
  sprintf( GINSTALL_LIB, "GINSTALL_LIB=%s", tmp );
  putenv( GINSTALL_LIB );
  sprintf( GEM_GRASS_DIR, "GEM_GRASS_DIR=%s", gisbase );
  putenv( GEM_GRASS_DIR );
  verstr = strdup( grass_version );
  grass_major = strtok( verstr, "." );
  grass_minor = strtok( 0, "." );
  grass_revision = strtok( 0, "." );
  major = strtol( grass_major, 0, 10 );
  minor = strtol( grass_minor, 0, 10 );
  revision = strtol( grass_revision, 0, 10 );
  free( verstr );
  atexit( &exit_tmp );
  sprintf( dir, "%s/src", basename( package ) );
  error = chdir( dir );
  if ( error < 0 )
  {
    print_error( -2, "extension files in '%s' not accessible: %s\n", package, strerror( *(int*)(__errno_location( )) ) );
  }
  if ( SKIP_CFG == 0 )
  {
    if ( VERBOSE )
    {
      fwrite( "Running configure script:\n", 1, 26, stdout );
      sprintf( sysstr, "sh %s %s", CONFIG_CMD, CONFIG_OPTS );
      error = system( sysstr );
    }
    else
    {
      fwrite( "Configuring...", 1, 14, stdout );
      sprintf( sysstr, "sh %s %s --quiet &&gt; %s", CONFIG_CMD, CONFIG_OPTS, TMP_NULL );
      error = system( sysstr );
    }
    if ( error == -1 )
      print_error( -27, "could not run configure script.\n" );
    if ( error > 0 )
      print_error( -3, "system configuration failed.\n" );
    print_done( );
    print_cfg( );
  }
  sprintf( GEM_EXT_NAME, "GEM_EXT_NAME=%s", pkg_short_name );
  putenv( GEM_EXT_NAME );
  sprintf( tmp, "%i.%i.%i", pkg_major, pkg_minor, pkg_revision );
  sprintf( GEM_EXT_VERSION, "GEM_EXT_VERSION=%s", tmp );
  putenv( GEM_EXT_VERSION );
  dump_plain( "../description", TMP_DESCR );
  dump_plain( "../info", TMP_INFO );
  dump_plain( "../depends", TMP_DEPS );
  dump_plain( "../bugs", TMP_BUGS );
  dump_plain( "../authors", TMP_AUTHORS );
  sprintf( GEM_EXT_DESCR, "GEM_EXT_DESCR=%s", TMP_DESCR );
  putenv( GEM_EXT_DESCR );
  sprintf( GEM_EXT_INFO, "GEM_EXT_INFO=%s", TMP_INFO );
  putenv( GEM_EXT_INFO );
  sprintf( GEM_EXT_DEPS, "GEM_EXT_DEPS=%s", TMP_DEPS );
  putenv( GEM_EXT_DEPS );
  sprintf( GEM_EXT_BUGS, "GEM_EXT_BUGS=%s", TMP_BUGS );
  putenv( GEM_EXT_BUGS );
  sprintf( GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s", TMP_AUTHORS );
  putenv( GEM_EXT_AUTHORS );
  atexit( &exit_tmp );
  check_dependencies( package, gisbase, grass_version );
  if ( VERBOSE )
  {
    fprintf( stdout, "Running '%s':\n", MAKE_CMD );
    sprintf( sysstr, "%s -f Makefile", MAKE_CMD );
    error = system( sysstr );
  }
  else
  {
    fwrite( "Compiling...", 1, 12, stdout );
    sprintf( sysstr, "%s -f Makefile &&gt; %s", MAKE_CMD, TMP_NULL );
    error = system( sysstr );
  }
  if ( error == -1 && VERBOSE == 0 )
    print_error( -9, "could not run '%s' do you have make tools installed?\n", MAKE_CMD[0] );
  if ( error > 0 )
    print_error( -4, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n" );
  print_done( );
  fwrite( "Installing...", 1, 13, stdout );
  f = (FILE*)fopen( "../uninstall", "r" );
  if ( f == 0 )
  {
    print_warning( "error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", strerror( *(int*)(__errno_location( )) ) );
  }
  else
    fclose( f );
  register_extension( gisbase, "src", pkg_short_name, pkg_major, pkg_minor, pkg_revision );
  check_dependencies( package, gisbase, grass_version );
  if ( major == 6 && minor <= 0 )
    register_entries_gisman( pkg_short_name, gisbase );
  register_entries_gisman2( pkg_short_name, gisbase );
  register_html( pkg_short_name, gisbase, pkg_major, pkg_minor, pkg_revision );
  fprintf( stdout, "(skipping '%s install')...", MAKE_CMD );
  print_done( );
  return;
}
void uninstall( char *package, char *pkg_short_name, char *gisbase, char *grass_version )
{
  char tmp[2048];
  char script[2048];
  int error;
  struct stat buf;
  int no_script;
  char *verstr;
  char *grass_major;
  char *grass_minor;
  char *grass_revision;
  int major, minor, revision;
  fwrite( "Un-installing...", 1, 16, stdout );
  sprintf( UNINSTALL_BASE, "UNINSTALL_BASE=%s", gisbase );
  putenv( UNINSTALL_BASE );
  verstr = strdup( grass_version );
  grass_major = strtok( verstr, "." );
  grass_minor = strtok( 0, "." );
  grass_revision = strtok( 0, "." );
  major = strtol( grass_major, 0, 10 );
  minor = strtol( grass_minor, 0, 10 );
  revision = strtol( grass_revision, 0, 10 );
  free( verstr );
  atexit( &exit_tmp );
  deregister_extension( package, pkg_short_name, gisbase );
  if ( major == 6 && minor <= 0 )
  {
    error = deregister_entries_gisman( pkg_short_name, gisbase );
    if ( error == -1 )
    {
      print_warning( "GIS Manager menu entries could not be removed.\n" );
      memcpy( GISMAN_CMD, "", 1 );
    }
    if ( error == 0 )
    {
      print_warning( "no entries found to remove from GIS Manager.\n" );
      memcpy( GISMAN_CMD, "", 1 );
    }
  }
  deregister_entries_gisman2( pkg_short_name, gisbase );
  deregister_html( pkg_short_name, gisbase );
  sprintf( script, "%s/etc/uninstall.%s", gisbase, pkg_short_name );
  no_script = 0;
  error = stat( script, &buf.st_dev );
  if ( error < 0 )
  {
    print_warning( "no uninstall script available for this extension.\n \t\t\tUnneeded files may have been left on your system.\n" );
    no_script = 1;
  }
  if ( no_script )
  {
    print_warning( "error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", strerror( *(int*)(__errno_location( )) ) );
  }
  else
  if ( VERBOSE )
  {
    sprintf( tmp, "sh %s ; rm -vf %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s ; rm -vf %s/etc/dm/gem-entries/%s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;", script, script, gisbase, pkg_short_name, gisbase, pkg_short_name, TMPDB, gisbase, gisbase );
    strcpy( UNINSTALL_CMD, tmp );
  }
  else
  {
    sprintf( tmp, "sh %s &&gt; %s ; rm -vf %s &&gt; %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s &&gt; %s ; rm -vf %s/etc/dm/gem-entries/%s &&gt; %s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db &&gt; %s ; chmod -v a+r %s/etc/extensions.db &&gt; %s ;", script, TMP_NULL, script, TMP_NULL, gisbase, pkg_short_name, TMP_NULL, gisbase, pkg_short_name, TMP_NULL, TMPDB, gisbase, TMP_NULL, gisbase, TMP_NULL );
    strcpy( UNINSTALL_CMD, tmp );
  }
  sprintf( tmp, "%s %s %s", UNINSTALL_CMD, GISMAN_CMD, HTML_CMD );
  su( gisbase, tmp );
  print_done( );
  return;
}
int source_clean( char *package )
{
  char dir[2048];
  char sysstr[2048];
  int error;
  sprintf( dir, "%s/src", basename( package ) );
  error = chdir( dir );
  if ( error < 0 )
    print_error( -2, "extension '%s' not accessible: ", package );
  if ( VERBOSE )
  {
    fprintf( stdout, "Running '%s clean':\n", MAKE_CMD );
    sprintf( sysstr, "%s -f Makefile clean", MAKE_CMD );
    error = system( sysstr );
  }
  else
  {
    fwrite( "Cleaning up...", 1, 14, stdout );
    sprintf( sysstr, "%s -f Makefile -s clean &&gt; %s", MAKE_CMD, TMP_NULL );
    error = system( sysstr );
  }
  if ( error == -1 )
    print_error( -9, "could not run '%s clean' do you have make tools installed?\n", MAKE_CMD[0] );
  else
    print_done( );
  system( "sh ../post" );
  return 0;
}
void restore( char *gisbase, char *grass_version )
{
  int num_restored;
  char tmp[2048];
  char *verstr = strdup( grass_version );
  char *grass_major = strtok( verstr, "." );
  char *grass_minor = strtok( 0, "." );
  char *grass_revision = strtok( 0, "." );
  int major = strtol( grass_major, 0, 10 ), minor = strtol( grass_minor, 0, 10 ), revision = strtol( grass_revision, 0, 10 );
  free( verstr );
  fwrite( "Restoring...", 1, 12, stdout );
  if ( major == 6 && minor <= 0 )
  {
    num_restored = restore_entries_gisman( gisbase );
    if ( VERBOSE )
      fprintf( stdout, "\nRestored entries for GIS Manager: %i\n", num_restored );
  }
  num_restored = restore_html( gisbase );
  if ( VERBOSE )
    fprintf( stdout, "\nRestored links in index.hml: %i\n", num_restored );
  if ( num_restored > 0 )
  {
    if ( VERBOSE )
      sprintf( tmp, "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html", TMP_GISMAN, gisbase, gisbase, TMP_HTML, gisbase, gisbase );
    else
      sprintf( tmp, "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl &&gt; %s ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html", TMP_GISMAN, gisbase, gisbase, TMP_NULL, TMP_HTML, gisbase, gisbase );
    su( gisbase, tmp );
  }
  if ( num_restored == 0 )
    print_error( -26, "could not find anything to restore.\n" );
  else
    print_done( );
  return;
}
void list_extensions( char *gisbase )
{
  char file[2048];
  FILE *f_in;
  fprintf( stdout, "\nExtensions in '%s' (name, version, type, depends):\n", gisbase );
  sprintf( file, "%s/etc/extensions.db", gisbase );
  f_in = (FILE*)fopen( file, "r" );
  if ( f_in == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 )
    {
      fwrite( "NONE.\n", 1, 6, stderr );
      fclose( f_in );
      exit( 0 );
    }
    fclose( f_in );
    print_error( -29, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
  }
  fclose( f_in );
  dump_ascii( file, "" );
  return;
}
void run_post( char *package, int action, char *bins, char *gisbase )
{
  char tmp[2048];
  char tmp2[2048];
  switch ( action + -3 )
  {
  case 0:
    memcpy( GEM_ACTION, "GEM_ACTION=INSTALL", 19 );
    putenv( GEM_ACTION );
    if ( gisbase )
      sprintf( INSTALL_BASE, "INSTALL_BASE=%s", gisbase );
    else
      memcpy( INSTALL_BASE, "INSTALL_BASE=UNDEFINED", 23 );
    putenv( INSTALL_BASE );
    getcwd( tmp, 2048 );
    sprintf( tmp2, "%s/%s/src", tmp, basename( package ) );
    sprintf( EXT_BASE, "EXT_BASE=%s", tmp2 );
    putenv( EXT_BASE );
    if ( bins == 0 )
      memcpy( INSTALL_TYPE, "INSTALL_TYPE=src", 17 );
    else
      sprintf( INSTALL_TYPE, "INSTALL_TYPE=%s", bins );
    putenv( INSTALL_TYPE );
    sprintf( tmp, "%i", FORCE );
    sprintf( GEM_FORCE, "GEM_FORCE=%s", tmp );
    putenv( GEM_FORCE );
    sprintf( tmp, "%i", VERBOSE );
    sprintf( GEM_VERBOSE, "GEM_VERBOSE=%s", tmp );
    putenv( GEM_VERBOSE );
    memcpy( GEM_GUI, "GEM_GUI=0", 10 );
    putenv( GEM_GUI );
    atexit( &exit_tmp );
    break;
  case 1:
    memcpy( GEM_ACTION, "GEM_ACTION=INSTALL", 19 );
    break;
  case 2:
    memcpy( GEM_ACTION, "GEM_ACTION=QUERY", 17 );
    break;
  case 3:
    memcpy( GEM_ACTION, "GEM_ACTION=CLEAN", 17 );
    break;
  case 4:
    memcpy( GEM_ACTION, "GEM_ACTION=LICENSE", 19 );
    break;
  case 6:
    memcpy( GEM_ACTION, "GEM_ACTION=DETAILS", 19 );
    break;
  case 5:
    break;
  }
  return;
}
#if 0
#endif
