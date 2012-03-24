#include "reg_entries.c.h"
int menu_created;
int is_submenu( char *item )
{
  if ( strchr( item, ebp_20 ) == 0 )
  {
  }
  if ( strrchr( item, ']' ) == 0 )
  {
  }
  if ( strrchr( item, ']' ) < strchr( item, '[' ) )
  {
  }
  return 1;
}
int check_ext_menu( char **tcl_lines )
{
  int eax;
  int idx = find_pos( "\"&Xtns\" all options 1", tcl_lines, ebp_32 );
  if ( idx == -1 )
  {
    idx = find_pos( "\"&Help\" all options", tcl_lines, 0 );
    if ( idx == -1 )
    {
      idx = find_pos( "}]", tcl_lines, 0 );
      if ( idx == -1 )
        print_error( -21, "could not parse 'menu.tcl'.\n" );
      insert_str( " \"&Xtns\" all options 1 {\n", idx, tcl_lines );
      idx++;
      insert_str( " }\n", idx, tcl_lines );
      return idx;
    }
    else
    {
      insert_str( " \"&Xtns\" all options 1 {\n", idx, tcl_lines );
      idx++;
      insert_str( " }\n", idx, tcl_lines );
    }
  }
}
int new_submenu( char *pkg_short_name, char *menu, char **tcl_lines )
{
  int eax;
  char tmp[2048];
  char tmp2[2048];
  char searchstr[2048];
  int idx = find_pos( "\"&Xtns\" all options", tcl_lines, 0 ), idx2;
  int insert_here;
  int last = find_pos( "\" all options", tcl_lines, idx + 1 ) + -1;
  char *first_quote;
  char *second_quote;
  int len;
  int terminator;
  if ( last == -1 )
  {
    last = find_pos( "}]", tcl_lines, 0 );
  }
  if ( is_submenu( menu ) == 0 )
  {
    print_warning( "first line not a submenu specifier in 'entries-gisman'.\n" );
  }
  else
  {
    len = strrchr( menu, ']' ) - strchr( menu, '[' );
    strncpy( tmp, strchr( menu, '[' ) + 1, len );
    tmp[ len + -1 ] = 0;
    sprintf( searchstr, "{cascad \"%s\"", tmp );
    idx2 = find_pos( searchstr, tcl_lines, idx );
    if ( idx2 != -1 && idx2 < last )
    {
      print_warning( "submenu '%s' exists in GIS Manager's Xtns menu.\n", tmp[0] );
    }
    else
    {
      insert_here = idx + 1;
      idx2 = find_pos( "{cascad ", tcl_lines, idx );
      for ( ; idx2 != -1 && idx2 < last;  )
      {
        first_quote = strchr( tcl_lines[ idx2 ], '"' );
        second_quote = strchr( &first_quote[1], '"' );
        len = second_quote - first_quote;
        strncpy( tmp2, &first_quote[1], len );
        tmp2[ len + -1 ] = 0;
        if ( strcmp( tmp, tmp2 ) < 0 )
        {
          insert_here = idx2;
          break;
        }
        else
        {
          idx++;
          idx2 = find_pos( "{cascad ", tcl_lines, idx );
        }
      }
      sprintf( tmp, " \t\t\t%s {} \"\" 1 {\n", searchstr );
      insert_str( tmp, insert_here, tcl_lines );
      insert_str( " \t\t\t}}\n", insert_here + 1, tcl_lines );
      terminator = find_pos( "}]", tcl_lines, 0 );
      sprintf( tmp, "#(DO_NOT_REMOVE_THIS_COMMENT) &lt;%s&gt; %s {} \"\" 1 {\n", pkg_short_name, searchstr );
      insert_str( tmp, terminator + 1, tcl_lines );
    }
  }
  return insert_here + 1;
}
int new_item( char *item, char *menu, char **tcl_lines, int line_no )
{
  int eax;
  char *token;
  int num_tokens;
  char entry[2048];
  char command[2048];
  char tmp[2048];
  chop( item );
  token = strtok( item, ";" );
  if ( token == 0 )
  {
    print_warning( "invalid token in 'entries-gisman'.\n" );
  }
  else
  {
    strcpy( entry, token );
    num_tokens = 0;
    for ( ; token == 0; num_tokens++ )
    {
      token = strtok( 0, ";" );
      if ( token )
        strcpy( command, token );
      // num_tokens++;
    }
  }
  return line_no;
}
void register_entries_gisman( char *pkg_short_name, char *gisbase )
{
  char file[2048];
  char str[2048];
  char menu[2048];
  int len;
  char **line;
  int n_entries, n_lines, i;
  int n_lines_org, n_lines_new;
  int line_no;
  FILE *f_gisman, *f_in, *f_out;
  memcpy( file, "../entries-gisman", 18 );
  f_gisman = (FILE*)fopen( file, "r" );
  if ( f_gisman == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 )
    {
      return;
    }
    else
    {
      fclose( f_gisman );
      print_error( -21, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
  }
  sprintf( file, "%s/etc/dm/menu.tcl", gisbase );
  f_in = (FILE*)fopen( file, "r" );
  if ( f_in == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 )
    {
    }
    else
    {
      fclose( f_in );
      print_error( -21, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
  }
  memcpy( TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32 );
  mkstemp( TMP_GISMAN );
  f_out = (FILE*)fopen( TMP_GISMAN, "w+" );
  if ( f_out == 0 )
  {
    print_error( -21, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", TMP_GISMAN[0], strerror( *(int*)(__errno_location( )) ) );
  }
  atexit( &exit_db );
  if ( VERBOSE )
    sprintf( str, "mkdir --verbose %s/etc/dm/gem-entries ; cp -vf ../entries-gisman %s/etc/dm/gem-entries/%s ; \t\t\t\t\tcp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;", gisbase, gisbase, pkg_short_name, gisbase, gisbase, TMP_GISMAN, gisbase, gisbase );
  else
    sprintf( str, "mkdir %s/etc/dm/gem-entries &&gt; %s ; cp -f ../entries-gisman %s/etc/dm/gem-entries/%s &&gt; %s ; \t\t\t\t\tcp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &&gt; %s ; \t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &&gt; %s ; chmod a+r %s/etc/dm/menu.tcl &&gt; %s ;", gisbase, TMP_NULL, gisbase, pkg_short_name, TMP_NULL, gisbase, gisbase, TMP_NULL, TMP_GISMAN, gisbase, TMP_NULL, gisbase, TMP_NULL );
  strcpy( GISMAN_CMD, str );
  n_entries = 0;
  for ( ; fgets( str, 2048, f_gisman ); n_entries++ )
  {
    // n_entries++;
  }
  if ( n_entries == 0 )
  {
  }
  else
  {
    rewind( f_gisman );
    n_lines = 0;
    for ( ; fgets( str, 2048, f_in ); n_lines++ )
    {
      // n_lines++;
    }
    if ( n_lines == 0 )
    {
      return;
    }
    n_lines_org = n_lines;
    rewind( f_in );
    line = calloc( n_lines + ( n_entries * 2 ) + 6, sizeof( char* ) );
    i = 0;
    for ( ; i < n_lines + ( n_entries * 2 ) + 6; i++ )
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
    check_ext_menu( line );
    i = 1;
    while ( nc_fgets_nb( str, 2048, f_gisman ) == 0 )
    {
      if ( i == 1 )
      {
        len = strrchr( str, ']' ) - strchr( str, '[' );
        strncpy( menu, strchr( str, '[' ) + 1, len );
        menu[ len + -1 ] = 0;
        line_no = new_submenu( pkg_short_name, str, line );
        if ( line_no < 0 )
        {
          print_warning( "no GIS Manager menu entries created.\n" );
          break;
        }
        else
        {
          i++;
        }
      }
      else
      {
        line_no = new_item( str, menu, line, line_no );
        if ( line_no < 0 )
        {
          print_warning( "error creating GIS Manager menu entries.\n" );
          break;
        }
        else
        {
          i++;
        }
      }
    }
    i = 0;
    for ( ; line[ i ]; i++ )
    {
      fprintf( f_out, line[ i ] );
      // i++;
    }
    fflush( f_out );
    rewind( f_out );
    n_lines_new = 0;
    for ( ; fgets( str, 2048, f_out ); n_lines_new++ )
    {
      // n_lines_new++;
    }
    if ( n_lines_new == 0 || n_lines_new < n_lines_org )
    {
      print_warning( "file truncation detected. Retaining orginal file 'menu.tcl'.\n" );
      memcpy( GISMAN_CMD, "", 1 );
    }
    fclose( f_in );
    fclose( f_gisman );
    fclose( f_out );
    i = 0;
    for ( ; i < n_lines + ( n_entries * 2 ) + 6; i++ )
    {
      free( line[ i ] );
      // i++;
    }
    free( line );
  }
}
void register_entries_gisman2( char *pkg_short_name, char *gisbase )
{
  char file[2048];
  FILE *f_gisman2;
  char str[2048];
  memcpy( file, "../entries-gisman2", 19 );
  f_gisman2 = (FILE*)fopen( file, "r" );
  if ( f_gisman2 == 0 )
  {
    if ( *(int*)(__errno_location( )) != 2 )
    {
      fclose( f_gisman2 );
      print_error( -32, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
    else
    {
      if ( 0 ^ 0 )
      {
        return;
      }
      return;
    }
  }
  if ( VERBOSE )
    sprintf( str, "mkdir --verbose -p %s/etc/gm/Xtns ; cp -fv ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ", gisbase, gisbase, pkg_short_name );
  else
    sprintf( str, "mkdir -p %s/etc/gm/Xtns ; cp -f ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ", gisbase, gisbase, pkg_short_name );
  strcpy( GISMAN2_CMD, str );
}
int deregister_entries_gisman( char *pkg_short_name, char *gisbase )
{
  int eax;
  char file[2048];
  char str[2048];
  char tmp[2048];
  char **line;
  int n_lines, i;
  int n_lines_org, n_lines_new;
  FILE *f_in, *f_out;
  int pos;
  int start, end;
  int start_sub, end_sub;
  char *lq, *rq;
  int num_removed;
  sprintf( file, "%s/etc/dm/menu.tcl", gisbase );
  f_in = (FILE*)fopen( file, "r" );
  if ( f_in == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 )
    {
      return num_removed;
    }
    else
    {
      fclose( f_in );
      print_error( -22, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
  }
  memcpy( TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32 );
  mkstemp( TMP_GISMAN );
  f_out = (FILE*)fopen( TMP_GISMAN, "w+" );
  if ( f_out == 0 )
  {
    print_error( -21, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", TMP_GISMAN[0], strerror( *(int*)(__errno_location( )) ) );
  }
  atexit( &exit_db );
  if ( VERBOSE )
    sprintf( str, "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;", gisbase, gisbase, TMP_GISMAN, gisbase, gisbase );
  else
    sprintf( str, "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &&gt; %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &&gt; %s ; chmod a+r %s/etc/dm/menu.tcl &&gt; %s ;", gisbase, gisbase, TMP_NULL, TMP_GISMAN, gisbase, TMP_NULL, gisbase, TMP_NULL );
  strcpy( GISMAN_CMD, str );
  n_lines = 0;
  for ( ; fgets( str, 2048, f_in ); n_lines++ )
  {
    // n_lines++;
  }
  if ( n_lines == 0 )
  {
  }
  else
  {
    rewind( f_in );
    n_lines_org = n_lines;
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
    sprintf( str, "#(DO_NOT_REMOVE_THIS_COMMENT) &lt;%s&gt; {cascad", pkg_short_name );
    pos = find_pos( str, line, 0 );
    if ( pos == -1 )
    {
      print_warning( "could not find uninstall information in 'menu.tcl'.\n" );
    }
    else
    {
      lq = strchr( line[ pos ], '"' );
      lq++;
      rq = strchr( lq, '"' );
      strcpy( tmp, lq );
      tmp[ rq - lq ] = 0;
      start = find_pos( "\"&Xtns\" all options 1", line, 0 );
      end = find_pos( "\" all options", line, start + 1 ) + -1;
      if ( end == -1 )
      {
        end = find_pos( "}]", line, 0 );
      }
      if ( start == -1 )
      {
        print_warning( "menu 'Xtns' does not exist.\n" );
      }
      else
      {
        sprintf( str, "{cascad \"%s\"", tmp );
        start_sub = find_pos( str, line, start );
        if ( start_sub == -1 || end < start_sub )
        {
          print_warning( "could not find submenu entry '%s' in 'menu.tcl'.\n", tmp[0] );
        }
        else
        {
          end_sub = find_pos( " \t\t\t}}", line, start_sub );
          if ( end_sub == -1 || end < end_sub )
          {
            print_warning( "could not find end of submenu entry '%s' in 'menu.tcl'.\n", tmp[0] );
          }
          else
          {
            num_removed = 0;
            i = 0;
            for ( ; i < ( end_sub - start_sub ) + 1; i++ )
            {
              delete_str( start_sub, line );
              num_removed++;
              // i++;
            }
            sprintf( str, "#(DO_NOT_REMOVE_THIS_COMMENT) &lt;%s&gt; {cascad", pkg_short_name );
            pos = find_pos( str, line, 0 );
            delete_str( pos, line );
            num_removed++;
            start = find_pos( "\"&Xtns\" all options 1", line, 0 );
            end = find_pos( "\" all options", line, start + 1 ) + -1;
            if ( end - start <= 2 )
            {
              i = 0;
              for ( ; i < ( end - start ) + 1; i++ )
              {
                delete_str( start, line );
                num_removed++;
                // i++;
              }
            }
            i = 0;
            for ( ; line[ i ]; i++ )
            {
              fprintf( f_out, line[ i ] );
              // i++;
            }
            fflush( f_out );
            rewind( f_out );
            n_lines_new = 0;
            for ( ; fgets( str, 2048, f_out ); n_lines_new++ )
            {
              // n_lines_new++;
            }
            if ( n_lines_new == 0 )
            {
              print_warning( "file truncation detected. Retaining orginal file 'menu.tcl'.\n" );
              memcpy( GISMAN_CMD, "", 1 );
            }
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
        }
      }
    }
  }
}
void deregister_entries_gisman2( char *pkg_short_name, char *gisbase )
{
  char file[2048];
  FILE *f_gisman2;
  char str[2048];
  sprintf( file, "%s/etc/gm/Xtns/%s.gem", gisbase, pkg_short_name );
  f_gisman2 = (FILE*)fopen( file, "r" );
  if ( f_gisman2 == 0 )
  {
    if ( *(int*)(__errno_location( )) != 2 )
    {
      fclose( f_gisman2 );
      print_error( -33, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
    else
    {
      if ( 0 ^ 0 )
      {
        return;
      }
      return;
    }
  }
  if ( VERBOSE )
    sprintf( str, "rm -vf %s/etc/gm/Xtns/%s.gem ; ", gisbase, pkg_short_name );
  else
    sprintf( str, "rm -f %s/etc/gm/Xtns/%s.gem ; ", gisbase, pkg_short_name );
  strcpy( GISMAN_CMD, str );
}
int restore_entries_gisman( char *gisbase )
{
  int eax;
  char str[2048];
  char menu[2048];
  char file[2048];
  char dir[2048];
  char pkg_short_name[2048];
  int len;
  char **line;
  int n_entries, n_lines, i;
  int line_no;
  FILE *f_gisman, *f_in, *f_out;
  DIR *dirp;
  struct dirent *ep;
  int num_restored;
  int n_files;
  sprintf( file, "%s/etc/dm/menu.tcl", gisbase );
  f_in = (FILE*)fopen( file, "r" );
  if ( f_in == 0 )
  {
    if ( *(int*)(__errno_location( )) == 2 )
    {
      return num_restored;
    }
    else
    {
      fclose( f_in );
      print_error( -21, "checking for file '%s': %s\n", file[0], strerror( *(int*)(__errno_location( )) ) );
    }
  }
  memcpy( TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32 );
  mkstemp( TMP_GISMAN );
  f_out = (FILE*)fopen( TMP_GISMAN, "w+" );
  if ( f_out == 0 )
  {
    print_error( -21, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", TMP_GISMAN[0], strerror( *(int*)(__errno_location( )) ) );
  }
  atexit( &exit_db );
  if ( VERBOSE )
    sprintf( str, "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;", gisbase, gisbase, TMP_GISMAN, gisbase, gisbase );
  else
    sprintf( str, "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &&gt; %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &&gt; %s ; chmod a+r %s/etc/dm/menu.tcl &&gt; %s ;", gisbase, gisbase, TMP_NULL, TMP_GISMAN, gisbase, TMP_NULL, gisbase, TMP_NULL );
  strcpy( GISMAN_CMD, str );
  sprintf( dir, "%s/etc/dm/gem-entries", gisbase );
  dirp = opendir( dir );
  if ( dirp == 0 )
  {
  }
  else
  {
    n_entries = 0;
    n_files = 0;
    while ( ep == 0 )
    {
      sprintf( file, "%s/%s", dir, &ep->d_name[0] );
      f_gisman = (FILE*)fopen( file, "r" );
      if ( strcmp( &ep->d_name[0], "." ) == 0 || strcmp( &ep->d_name[0], ".." ) == 0 )
      {
        fclose( f_gisman );
      }
      else
      {
        if ( f_gisman == 0 )
        {
          fclose( f_gisman );
        }
        else
        {
          while ( fgets( str, 2048, f_gisman ) == 0 )
          {
            n_entries++;
          }
          n_files++;
          fclose( f_gisman );
        }
      }
    }
    closedir( &dirp );
    n_lines = 0;
    for ( ; fgets( str, 2048, f_in ); n_lines++ )
    {
      // n_lines++;
    }
    if ( n_lines == 0 )
    {
    }
    else
    {
      rewind( f_in );
      line = calloc( n_lines + ( n_entries * 2 ) + ( n_files * 5 ) + 1, sizeof( char* ) );
      i = 0;
      for ( ; i < n_lines + ( n_entries * 2 ) + ( n_files * 5 ) + 1; i++ )
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
      line[ i ] = 0;
      check_ext_menu( line );
      dirp = opendir( dir );
      num_restored = 0;
      while ( ep == 0 )
      {
        sprintf( file, "%s/%s", dir, &ep->d_name[0] );
        if ( strcmp( &ep->d_name[0], "." ) )
        {
          if ( strcmp( &ep->d_name[0], ".." ) == 0 )
          {
          }
          else
          {
            f_gisman = (FILE*)fopen( file, "r" );
            if ( f_gisman )
            {
              i = 1;
              while ( nc_fgets_nb( str, 2048, f_gisman ) == 0 )
              {
                if ( i == 1 )
                {
                  len = strrchr( str, ']' ) - strchr( str, '[' );
                  strncpy( menu, strchr( str, '[' ) + 1, len );
                  menu[ len + -1 ] = 0;
                  line_no = new_submenu( pkg_short_name, str, line );
                  if ( line_no < 0 )
                  {
                    break;
                  }
                  else
                  {
                    i++;
                    num_restored++;
                  }
                }
                else
                {
                  line_no = new_item( str, menu, line, line_no );
                  if ( line_no < 0 )
                    break;
                  else
                  {
                    i++;
                    num_restored++;
                  }
                }
              }
              fclose( f_gisman );
            }
          }
        }
        else
        {
        }
      }
      closedir( &dirp );
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
      for ( ; i < n_lines + ( n_entries * 2 ) + ( n_files * 5 ) + 1; i++ )
      {
        free( line[ i ] );
        // i++;
      }
      free( line );
    }
  }
}
#if 0
#endif
