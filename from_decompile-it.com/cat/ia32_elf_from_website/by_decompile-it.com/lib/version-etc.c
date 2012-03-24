#include "version-etc.c.h"
void version_etc_va( FILE *stream, char *command_name, char *package, char *version, va_list authors )
{
  size_t n_authors;
{
  va_list tmp_authors = authors;
  n_authors = 0;
  while ( tmp_authors += 4, tmp_authors[0] )
  {
    n_authors++;
  }
  if ( command_name )
    fprintf( stream, "%s (%s) %s\n", command_name, package, version );
  else
    fprintf( stream, "%s %s\n", package, version );
  fprintf( stream, version_etc_copyright, gettext( "(C)" ), 2008 );
  fputs_unlocked( gettext( "\nLicense GPLv3+: GNU GPL version 3 or later &lt;http://gnu.org/licenses/gpl.html&gt;\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n" ), stream );
  switch ( n_authors )
  {
  case 0:
    abort( );
    break;
  case 1:
    rpl_vfprintf( stream, gettext( "Written by %s.\n" ), authors );
    break;
  case 2:
    rpl_vfprintf( stream, gettext( "Written by %s and %s.\n" ), authors );
    break;
  case 3:
    rpl_vfprintf( stream, gettext( "Written by %s, %s, and %s.\n" ), authors );
    break;
  case 4:
    rpl_vfprintf( stream, gettext( "Written by %s, %s, %s,\nand %s.\n" ), authors );
    break;
  case 5:
    rpl_vfprintf( stream, gettext( "Written by %s, %s, %s,\n%s, and %s.\n" ), authors );
    break;
  case 6:
    rpl_vfprintf( stream, gettext( "Written by %s, %s, %s,\n%s, %s, and %s.\n" ), authors );
    break;
  case 7:
    rpl_vfprintf( stream, gettext( "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n" ), authors );
    break;
  case 8:
    rpl_vfprintf( stream, gettext( "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n" ), authors );
    break;
  case 9:
    rpl_vfprintf( stream, gettext( "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n" ), authors );
    break;
  default:
    rpl_vfprintf( stream, gettext( "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n" ), authors );
    break;
  }
  return;
}
}
void version_etc( FILE *stream, char *command_name, char *package, char *version, ... )
{
  va_list authors;
  __builtin_va_start( authors, version );
  version_etc_va( stream, command_name, package, version, authors );
  return;
}
#if 0
#endif
