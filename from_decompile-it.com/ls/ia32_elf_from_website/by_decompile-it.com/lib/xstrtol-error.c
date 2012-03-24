#include "xstrtol-error.c.h"
static void xstrtol_error( enum strtol_error  err, int opt_idx, char c, struct option *long_options, char *arg, int exit_status );
void xstrtol_error( enum strtol_error  err, int opt_idx, char c, struct option *long_options, char *arg, int exit_status )
{
  char *hyphens = "--";
  char *msgid;
  char *option;
  char option_buffer[2];
  switch ( err )
  {
    abort( );
    break;
  default:
    abort( );
    break;
  case LONGINT_INVALID:
    msgid = "invalid %s%s argument `%s'";
    break;
  case LONGINT_INVALID_SUFFIX_CHAR:
  case LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW:
    msgid = "invalid suffix in %s%s argument `%s'";
    break;
  case LONGINT_OVERFLOW:
    msgid = "%s%s argument `%s' too large";
    break;
  }
  if ( opt_idx < 0 )
  {
    hyphens = &hyphens[ opt_idx * -1 ];
    option_buffer[0] = c;
    option_buffer[1] = 0;
    option = option_buffer;
  }
  else
    option = long_options[ opt_idx ].name;
  error( exit_failure, 0, gettext( msgid ), hyphens, option, arg );
  return;
}
void xstrtol_fatal( enum strtol_error  err, int opt_idx, char c, struct option *long_options, char *arg )
{
  xstrtol_error( err, opt_idx, c, long_options, arg, exit_failure );
  abort( );
}
