#include "main.c.h"
char GINSTALL_DST[2048];
char GINSTALL_INC[2048];
char GINSTALL_LIB[2048];
char UNINSTALL_BASE[2048];
char GEM_EXT_NAME[2048];
char GEM_EXT_VERSION[2048];
char GEM_EXT_DESCR[2048];
char GEM_EXT_INFO[2048];
char GEM_EXT_DEPS[2048];
char GEM_EXT_BUGS[2048];
char GEM_EXT_AUTHORS[2048];
char GEM_GRASS_DIR[2048];
char GEM_ACTION[2048];
char INSTALL_BASE[2048];
char INSTALL_TYPE[2048];
char GEM_FORCE[2048];
char GEM_VERBOSE[2048];
char GEM_GUI[2048];
char GEM_C_OPTS[2048];
char EXT_BASE[2048];
int VERBOSE;
char TMPDIR[2048];
char TMPDB[2048];
char TMP_GISMAN[2048];
char TMP_DESCR[2048];
char TMP_INFO[2048];
char TMP_DEPS[2048];
char TMP_BUGS[2048];
char TMP_AUTHORS[2048];
char TMP_NULL[2048];
char TMP_HTML[2048];
int TMPCLEAN;
int TMPDBCLEAN;
int FORCE;
int UPGRADE;
int SKIP_CFG;
char GISMAN_CMD[2048];
char GISMAN2_CMD[2048];
char HTML_CMD[2048];
char QGIS_CMD[2048];
char UNINSTALL_CMD[2048];
char CONFIG_OPTS[2048];
char CONFIG_CMD[2048];
char MAKE_CMD[2048];
char CWD[2048];
int ERROR;
int WARNINGS;
void show_help( void )
{
  fwrite( "Usage: gem64 [OPTION] [ACTION] [FILE|DIR]\n", 1, 42, stdout );
  fwrite( "Install a GRASS extension from FILE or DIR.\n", 1, 44, stdout );
  fwrite( "Manage (installed) GRASS extension(s).\n", 1, 39, stdout );
  fwrite( "\nPossible ACTIONs are:\n", 1, 23, stdout );
  fwrite( "  -i, --install=EXT\tinstall a GRASS extension\n", 1, 46, stdout );
  fwrite( "  -u, --uninstall=EXT\tremove an extension from GRASS\n", 1, 53, stdout );
  fwrite( "  -q, --query=EXT\tdisplay information about extension/list installed\n", 1, 69, stdout );
  fwrite( "  -d, --details=EXT\tdisplay additional details about an extension\n", 1, 66, stdout );
  fwrite( "  -c, --clean=EXT\tclean extension's source code directories\n", 1, 60, stdout );
  fwrite( "  -t, --test=EXT\tconfigure and compile extension, but don't install\n", 1, 68, stdout );
  fwrite( "  -l, --license=EXT\tshow copyright information for an extension\n", 1, 64, stdout );
  fwrite( "  -r, --restore\t\trecreate HTML links and GIS Manager entries\n", 1, 61, stdout );
  fwrite( "  -h, --help\t\tdisplay this help and exit\n", 1, 41, stdout );
  fwrite( "  -V, --version\t\toutput version information and exit\n\n", 1, 54, stdout );
  fwrite( "\nPossible OPTIONs are:\n", 1, 23, stdout );
  fwrite( "  -g, --grass=PATH\tpath to GRASS installation dir\n", 1, 50, stdout );
  fwrite( "  -b, --binary=NAME\tno compilation: use binary files for system NAME\n", 1, 69, stdout );
  fwrite( "  -f, --force\t\tforce action, regardless of dependencies\n", 1, 56, stdout );
  fwrite( "  -v, --verbose\t\tdisplay detailed status information\n", 1, 53, stdout );
  fwrite( "  -s, --skip-config\tskip configure script\n", 1, 42, stdout );
  fwrite( "  -x, --config-opts=OPTS\tpass OPTS to configure script\n", 1, 55, stdout );
  fwrite( "  -o, --options=OPTS\toptions to pass to the C compiler/linker\n", 1, 62, stdout );
  fwrite( "  -C, --config-cmd=CMD\tDefine custom 'configure' command (default=configure)\n", 1, 77, stdout );
  fwrite( "  -m, --make-cmd=CMD\tDefine custom 'make' command (default=make)\n", 1, 65, stdout );
  fwrite( "\nWhen run from within a GRASS session, locations of libs, header files\n", 1, 71, stdout );
  fwrite( "and installation target dir will be assumed to match those of the active\n", 1, 73, stdout );
  fwrite( "GRASS version. ", 1, 15, stdout );
  fwrite( "Option -g can be used to override these or install extensions\nfrom outside", 1, 74, stdout );
  fwrite( "of a GRASS session.\n", 1, 20, stdout );
  fwrite( "Per default, extensions will be compiled from source and then installed.\n", 1, 73, stdout );
  fwrite( "If the exension package contains binaries for the user's platform, they can\n", 1, 76, stdout );
  fwrite( "be installed instead using the -b option. ", 1, 42, stdout );
  fwrite( "For installation from source code, a C compiler and make tools are needed.\n", 1, 75, stdout );
  fwrite( "\nExample:\n", 1, 10, stdout );
  fwrite( "\tgem64 -b macosx --grass=/usr/local/grass-6.4.0 -i myExtension\n", 1, 63, stdout );
  fwrite( "Installs the MacOS X binaries for 'myExtension' in /usr/local/grass-6.4.0.\n", 1, 75, stdout );
  exit( 0 );
}
void show_details( char *package )
{
  int error;
  char tmp[2048];
  strcpy( tmp, basename( package ) );
  error = chdir( tmp );
  if ( error < 0 )
  {
    print_error( -2, "extension '%s' not accessible: (%s)\n", package, strerror( *(int*)(__errno_location( )) ) );
  }
  dump_ascii( "info", "Detailed information" );
  system( "sh post" );
  exit( 0 );
}
void show_license( char *package )
{
  int error;
  char tmp[2048];
  strcpy( tmp, basename( package ) );
  error = chdir( tmp );
  if ( error < 0 )
  {
    print_error( -2, "extension '%s' not accessible: (%s)\n", package, strerror( *(int*)(__errno_location( )) ) );
  }
  dump_ascii( "license", "Detailed information" );
  system( "sh post" );
  exit( 0 );
}
void show_version( void )
{
  fprintf( stdout, "gem64 (GRASS extensions manager) %.2f\n", 1.030000000000 );
  fwrite( "Written by Benjamin Ducke\n", 1, 26, stdout );
  fwrite( "\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, stdout );
  fwrite( "This is free software; see the source for copying conditions.  There is NO\n", 1, 75, stdout );
  fwrite( "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, stdout );
  exit( 0 );
}
void get_configure_options( char *gisbase )
{
  FILE *fp;
  char str[2048];
  if ( CONFIG_OPTS[0] == 0 )
  {
    sprintf( str, "%s/etc/config.system", gisbase );
    fp = (FILE*)fopen( str, "r" );
    if ( fp == 0 )
      print_warning( "could not open %s for read access. Using default configure options.\n", str[0] );
    else
    {
      if ( nc_fgets_nb( str, 2048, fp ) )
        strcpy( CONFIG_OPTS, str );
    }
  }
  if ( 0 ^ 0 )
  {
    return;
  }
  return;
}
int main( int argc, char **argv )
{
  static struct option long_options[20] = { { "install", 1, 0, 105 }
, { "uninstall", 1, 0, 117 }
, { "query", 2, 0, 113 }
, { "details", 1, 0, 100 }
, { "clean", 1, 0, 99 }
, { "test", 1, 0, 116 }
, { "license", 1, 0, 108 }
, { "restore", 0, 0, 114 }
, { "help", 0, 0, 104 }
, { "version", 0, 0, 86 }
, { "grass", 1, 0, 103 }
, { "options", 1, 0, 111 }
, { "binary", 1, 0, 98 }
, { "force", 0, 0, 102 }
, { "verbose", 0, 0, 118 }
, { "skip-config", 0, 0, 115 }
, { "config-opts", 1, 0, 120 }
, { "config-cmd", 1, 0, 67 }
, { "make-cmd", 1, 0, 109 }
, { 0, 0, 0, 0 }
 };
  char *gisbase;
  char *grass_version;
  char *grass_major;
  char *grass_minor;
  char *grass_revision;
  char *tmp;
  char *url;
  char *filepart;
  char version_file[2048];
  char package[2048];
  char orgname[2048];
  char pkg_name[2048];
  char *bins;
  int pkg_major, pkg_minor, pkg_revision;
  FILE *f;
  int fd;
  char pkg_short_name[2048];
  char invocation[2048];
  char coptions[2048];
  int major, minor, revision;
  int option;
  int action;
  int valid;
  struct stat buf;
  struct stat buf2;
  int error;
  int is_directory;
  DIR *dir;
  struct dirent *dir_entry;
  int dir_found;
  int option_index;
  long_options[0].name = &ebx;
  is_directory = 0;
  option_index = 0;
  VERBOSE = 0;
  TMPCLEAN = 0;
  TMPDBCLEAN = 0;
  FORCE = 0;
  UPGRADE = 0;
  ERROR = 0;
  WARNINGS = 0;
  SKIP_CFG = 0;
  memcpy( GISMAN_CMD, "", 1 );
  memcpy( GISMAN2_CMD, "", 1 );
  memcpy( QGIS_CMD, "", 1 );
  memcpy( UNINSTALL_CMD, "", 1 );
  memcpy( HTML_CMD, "", 1 );
  memcpy( TMPDIR, "", 1 );
  memcpy( TMPDB, "", 1 );
  memcpy( TMP_GISMAN, "", 1 );
  memcpy( TMP_DESCR, "", 1 );
  memcpy( TMP_INFO, "", 1 );
  memcpy( TMP_DEPS, "", 1 );
  memcpy( TMP_BUGS, "", 1 );
  memcpy( TMP_AUTHORS, "", 1 );
  memcpy( TMP_HTML, "", 1 );
  memcpy( TMP_NULL, "", 1 );
  memcpy( CONFIG_OPTS, "", 1 );
  memcpy( CONFIG_CMD, "configure", 10 );
  memcpy( MAKE_CMD, "make", 5 );
  getcwd( CWD, 2048 );
  fwrite( "\033[0m", 1, 4, stdout );
  tmp = (char*)malloc( 2048 );
  strcpy( invocation, argv[0] );
  setvbuf( stdout, 0, 2, 0 );
  if ( argc == 1 )
  {
    show_help( );
    exit( 0 );
  }
  atexit( &exit_msg );
  valid = 0;
  bins = 0;
  gisbase = 0;
  opterr = 0;
  option = getopt_long( argc, argv, ":i:u:q:d:c:C:t:l:m:o:x:rhVg:b:fvs", long_options[0].name, &option_index );
  for ( ; option != -1;  )
  {
    if ( option == 63 )
      print_error( -1, "unknown option or action specified.\n" );
    if ( option == 58 )
    {
      switch ( optopt )
      {
      case 'c':
      case 'd':
      case 'i':
      case 'l':
      case 'r':
      case 't':
      case 'u':
        print_error( -1, "missing file or directory name.\n" );
        if ( optopt == 103 )
          print_error( -1, "missing path to GRASS 6.\n" );
        if ( optopt == 98 )
          print_error( -1, "missing name of binary architecture.\n" );
        if ( optopt == 98 )
          print_error( -1, "missing configure options.\n" );
        if ( optopt == 113 )
        {
          action = 12;
          valid++;
          break;
        }
        break;
      default:
        break;
      }
    }
    valid++;
    switch ( option + -86 )
    {
    case 19:
      if ( action != 4 )
        action = 3;
      if ( optarg )
      {
        strcpy( package, optarg );
        strcpy( orgname, optarg );
      }
      break;
    case 31:
      action = 10;
      break;
    case 27:
      action = 5;
      break;
    case 14:
      action = 9;
      break;
    case 13:
      action = 6;
      break;
    case 30:
      action = 8;
      break;
    case 22:
      action = 7;
      break;
    case 28:
      action = 11;
      break;
    case 18:
      action = 1;
      break;
    case 0:
      action = 2;
      break;
    default:
      break;
    }
    if ( option == 103 )
    {
      gisbase = malloc( ( strlen( optarg ) + 1 ) * sizeof( char ) );
      strcpy( gisbase, optarg );
    }
    if ( option == 98 )
    {
      bins = malloc( ( strlen( optarg ) + 1 ) * sizeof( char ) );
      strcpy( bins, optarg );
      action = 4;
    }
    if ( option == 120 )
      strcpy( CONFIG_OPTS, optarg );
    if ( option == 102 )
      FORCE = 1;
    if ( option == 118 )
      VERBOSE = 1;
    if ( option == 115 )
      SKIP_CFG = 1;
    if ( option == 111 )
      strcat( coptions, optarg );
    if ( option == 67 )
      strcpy( CONFIG_CMD, optarg );
    if ( option == 109 )
      strcpy( MAKE_CMD, optarg );
    option = getopt_long( argc, argv, ":i:u:q:d:c:t:l:o:x:rhVg:b:fvs", long_options[0].name, &option_index );
  }
  if ( valid <= 0 )
    print_error( -1, "please specify a valid action.\n" );
  if ( valid > 1 )
    print_error( -1, "please specify only one action.\n" );
  sprintf( GEM_C_OPTS, "GEM_C_OPTS=%s", coptions );
  putenv( GEM_C_OPTS );
  if ( action == 1 )
  {
    show_help( );
    exit( 0 );
  }
  if ( action == 2 )
  {
    show_version( );
    exit( 0 );
  }
  if ( VERBOSE == 0 )
  {
    memcpy( TMP_NULL, "/tmp/grass.extension.log.XXXXXX", 32 );
    mkstemp( TMP_NULL );
    fd = open( TMP_NULL, 64, 511 );
    if ( fd == -1 )
    {
      print_error( -30, "could not create temp file: %s", strerror( *(int*)(__errno_location( )) ) );
      exit( -30 );
    }
  }
  if ( action == 11 )
  {
    if ( gisbase == 0 )
    {
      gisbase = getenv( "GISBASE" );
      if ( gisbase == 0 )
        print_error( -1, "GISBASE environment variable not set and path to GRASS not given.\n" );
    }
    if ( VERBOSE )
      fprintf( stdout, "Path to GRASS is %s.\n", gisbase );
    restore( gisbase, grass_version );
    exit( 0 );
  }
  else
  {
    if ( action == 12 )
    {
      if ( gisbase == 0 )
      {
        gisbase = getenv( "GISBASE" );
        if ( gisbase == 0 )
          print_error( -1, "GISBASE environment variable not set and path to GRASS not given.\n" );
      }
      if ( VERBOSE )
        fprintf( stdout, "Path to GRASS is %s.\n", gisbase );
      list_extensions( gisbase );
      exit( 0 );
    }
    else
    {
      if ( strstr( package, "http://" ) || strstr( package, "ftp://" ) )
      {
        wget_extension( package );
        url = (char*)malloc( 2048 );
        strcpy( url, package );
        filepart = strrchr( url, '/' );
        strcpy( package, filepart );
        free( url );
        filepart++;
      }
      if ( VERBOSE )
        fprintf( stdout, "Extension location is '%s'.\n", package );
      if ( action != 10 )
      {
        error = stat( package, &buf.st_dev );
        if ( error < 0 )
        {
          print_error( -2, "extension FILE or DIR '%s' invalid: %s\n", package[0], strerror( *(int*)(__errno_location( )) ) );
        }
        if ( ( buf.st_mode & 61440 ) == 16384 )
        {
          is_directory = 1;
          if ( VERBOSE )
            fwrite( "Extension files stored in a directory.\n", 1, 39, stdout );
        }
        else
        {
          if ( VERBOSE )
            fwrite( "Extension files stored in a package file.\n", 1, 42, stdout );
          unpack_extension( package );
          dir = opendir( TMPDIR );
          dir_entry = (struct dirent*)readdir( &dir );
          dir_found = 0;
          for ( ; dir_entry;  )
          {
            if ( strcmp( &dir_entry->d_name[0], "." ) && strcmp( &dir_entry->d_name[0], ".." ) )
            {
              sprintf( tmp, "%s/%s", TMPDIR, &dir_entry->d_name[0] );
              stat( tmp, &buf2.st_dev );
              if ( ( buf2.st_mode & 61440 ) == 16384 )
              {
                dir_found = 1;
                break;
              }
            }
            dir_entry = (struct dirent*)readdir( &dir );
          }
          strcpy( package, tmp );
          if ( dir_found == 0 )
            print_error( -7, "no top-level directory found in extension package.\n" );
          dir_entry = (struct dirent*)readdir( &dir );
        }
      }
      if ( action == 10 )
        strcpy( pkg_short_name, package );
      else
        get_package_name( package, pkg_short_name );
      if ( valid > 0 )
      {
        if ( gisbase == 0 )
        {
          gisbase = getenv( "GISBASE" );
        }
        run_post( package, action, bins, gisbase );
      }
      if ( VERBOSE )
        fprintf( stdout, "Extension will be installed from '%s'\n", package );
      if ( action != 10 )
        check_extension( package, pkg_name, &pkg_major, &pkg_minor, &pkg_revision );
      if ( action == 5 )
      {
        query_extension( package, pkg_name, pkg_major, pkg_minor, pkg_revision, pkg_short_name, invocation, orgname );
        exit( 0 );
      }
      if ( action == 9 )
      {
        show_details( package );
        exit( 0 );
      }
      if ( action == 7 )
      {
        show_license( package );
        exit( 0 );
      }
      if ( action == 6 )
      {
        source_clean( package );
        exit( 0 );
      }
      if ( gisbase == 0 )
      {
        gisbase = getenv( "GISBASE" );
        if ( gisbase == 0 )
          print_error( -1, "GISBASE environment variable not set and path to GRASS not given.\n" );
      }
      if ( VERBOSE )
        fprintf( stdout, "Path to GRASS is %s.\n", gisbase );
      grass_version = getenv( "GRASS_VERSION" );
      if ( grass_version == 0 )
      {
        sprintf( version_file, "%s/etc/VERSIONNUMBER", gisbase );
        f = (FILE*)fopen( version_file, "r" );
        if ( f == 0 )
          print_error( -11, "Could not read GRASS version. Did you specify the right path?\n" );
        else
        {
          grass_version = (char*)malloc( 16 );
          error = __isoc99_fscanf( f, "%s", grass_version );
          fclose( f );
          if ( error <= 0 )
            print_error( -11, "Could not read GRASS version. Did you specify the right path?\n" );
        }
      }
      if ( grass_version )
      {
        tmp = strdup( grass_version );
        grass_major = strtok( tmp, "." );
        grass_minor = strtok( 0, "." );
        grass_revision = strtok( 0, "." );
        major = strtol( grass_major, 0, 10 );
        minor = strtol( grass_minor, 0, 10 );
        revision = strtol( grass_revision, 0, 10 );
        grass_version = (char*)malloc( 2048 );
        sprintf( grass_version, "%i.%i.%i", major, minor, revision );
        if ( VERBOSE )
          fprintf( stdout, "GRASS version is %s.\n", grass_version );
        if ( major <= 5 )
          print_error( -11, "extensions only work with GRASS version 6 and above.\n" );
      }
      sprintf( coptions, "-L%s/lib -I/usr/local/grasslib/include/ ", gisbase );
      if ( action == 3 )
      {
        source_install( package, gisbase, pkg_short_name, pkg_major, pkg_minor, pkg_revision, grass_version );
        exit( 0 );
      }
      if ( action == 10 )
      {
        uninstall( package, pkg_short_name, gisbase, grass_version );
        exit( 0 );
      }
      if ( action == 8 )
      {
        test_install( package, gisbase, pkg_short_name, pkg_major, pkg_minor, pkg_revision, grass_version );
        exit( 0 );
      }
      if ( action == 4 )
      {
        if ( binaries_exist( package, bins ) )
        {
          bin_install( package, gisbase, bins, pkg_short_name, pkg_major, pkg_minor, pkg_revision, grass_version );
          exit( 0 );
        }
        print_error( -12, "no binaries for system '%s'\n", bins );
      }
      exit( 0 );
    }
  }
}
#if 0
#endif
