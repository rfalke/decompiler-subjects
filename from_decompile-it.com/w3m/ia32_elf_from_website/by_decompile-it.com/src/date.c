#include "date.c.h"
static _Bool batch_convert( char *input_filename, char *format );
static _Bool show_date( char *format, struct timespec when );
static char *time_spec_string[6] = { "hours", "minutes", "date", "seconds", "ns", 0,  };
static enum Time_spec  time_spec[5] = { 3, 4, 0, 1, 2,  };
static char rfc_2822_format[25] = { '%', 'a', ',', ' ', '%', 'd', ' ', '%', 'b', ' ', '%', 'Y', ' ', '%', 'H', ':', '%', 'M', ':', '%', 'S', ' ', '%', 'z',  };
char *program_name;
static char short_options[14] = { 'd', ':', 'f', ':', 'I', ':', ':', 'r', ':', 'R', 's', ':', 'u',  };
static struct option long_options[14] = { { "date", 1, 0, 100,  }
, { "file", 1, 0, 102,  }
, { "iso-8601", 2, 0, 73,  }
, { "reference", 1, 0, 114,  }
, { "rfc-822", 0, 0, 82,  }
, { "rfc-2822", 0, 0, 82,  }
, { "rfc-3339", 1, 0, 128,  }
, { "set", 1, 0, 115,  }
, { "uct", 0, 0, 117,  }
, { "utc", 0, 0, 117,  }
, { "universal", 0, 0, 117,  }
, { "help", 0, 0, -130,  }
, { "version", 0, 0, -131,  }
, { 0, 0, 0, 0,  }
,  };
void usage( int status )
{
  if ( status != 0 )
  {
    fprintf( *(int*)(134590756), gettext( "Try `%s --help' for more information.\n" ), program_name );
  }
  else
  {
    printf( gettext( "Usage: %s [OPTION]... [+FORMAT]\n  or:  %s [-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]\n" ), program_name );
    fputs_unlocked( gettext( "Display the current time in the given FORMAT, or set the system date.\n\n  -d, --date=STRING         display time described by STRING, not `now'\n  -f, --file=DATEFILE       like --date once for each line of DATEFILE\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  -r, --reference=FILE      display the last modification time of FILE\n  -R, --rfc-2822            output date and time in RFC 2822 format.\n                            Example: Mon, 07 Aug 2006 12:34:56 -0600\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "      --rfc-3339=TIMESPEC   output date and time in RFC 3339 format.\n                            TIMESPEC=`date', `seconds', or `ns' for\n                            date and time to the indicated precision.\n                            Date and time components are separated by\n                            a single space: 2006-08-07 12:34:56-06:00\n  -s, --set=STRING          set time described by STRING\n  -u, --utc, --universal    print or set Coordinated Universal Time\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "      --help     display this help and exit\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "      --version  output version information and exit\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "\nFORMAT controls the output.  The only valid option for the second form\nspecifies Coordinated Universal Time.  Interpreted sequences are:\n\n  %%   a literal %\n  %a   locale's abbreviated weekday name (e.g., Sun)\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  %A   locale's full weekday name (e.g., Sunday)\n  %b   locale's abbreviated month name (e.g., Jan)\n  %B   locale's full month name (e.g., January)\n  %c   locale's date and time (e.g., Thu Mar  3 23:05:25 2005)\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  %C   century; like %Y, except omit last two digits (e.g., 21)\n  %d   day of month (e.g, 01)\n  %D   date; same as %m/%d/%y\n  %e   day of month, space padded; same as %_d\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  %F   full date; same as %Y-%m-%d\n  %g   last two digits of year of ISO week number (see %G)\n  %G   year of ISO week number (see %V); normally useful only with %V\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  %h   same as %b\n  %H   hour (00..23)\n  %I   hour (01..12)\n  %j   day of year (001..366)\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  %k   hour ( 0..23)\n  %l   hour ( 1..12)\n  %m   month (01..12)\n  %M   minute (00..59)\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  %n   a newline\n  %N   nanoseconds (000000000..999999999)\n  %p   locale's equivalent of either AM or PM; blank if not known\n  %P   like %p, but lower case\n  %r   locale's 12-hour clock time (e.g., 11:11:04 PM)\n  %R   24-hour hour and minute; same as %H:%M\n  %s   seconds since 1970-01-01 00:00:00 UTC\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  %S   second (00..60)\n  %t   a tab\n  %T   time; same as %H:%M:%S\n  %u   day of week (1..7); 1 is Monday\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  %U   week number of year, with Sunday as first day of week (00..53)\n  %V   ISO week number, with Monday as first day of week (01..53)\n  %w   day of week (0..6); 0 is Sunday\n  %W   week number of year, with Monday as first day of week (00..53)\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  %x   locale's date representation (e.g., 12/31/99)\n  %X   locale's time representation (e.g., 23:13:48)\n  %y   last two digits of year (00..99)\n  %Y   year\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "  %z   +hhmm numeric timezone (e.g., -0400)\n  %:z  +hh:mm numeric timezone (e.g., -04:00)\n  %::z  +hh:mm:ss numeric time zone (e.g., -04:00:00)\n  %:::z  numeric time zone with : to necessary precision (e.g., -04, +05:30)\n  %Z   alphabetic time zone abbreviation (e.g., EDT)\n\nBy default, date pads numeric fields with zeroes.\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "The following optional flags may follow `%':\n\n  -  (hyphen) do not pad the field\n  _  (underscore) pad with spaces\n  0  (zero) pad with zeros\n  ^  use upper case if possible\n  #  use opposite case if possible\n" ), *(int*)(134590784) );
    fputs_unlocked( gettext( "\nAfter any flags comes an optional field width, as a decimal number;\nthen an optional modifier, which is either\nE to use the locale's alternate representations if available, or\nO to use the locale's alternate numeric symbols if available.\n" ), *(int*)(134590784) );
  }
  emit_bug_reporting_address( );
  exit( &status );
}
_Bool batch_convert( char *input_filename, char *format )
{
  _Bool ok;
  FILE *in_stream;
  char *line;
  size_t buflen;
  struct timespec when;
  if ( strcmp( input_filename, "-" ) == 0 )
  {
    input_filename = gettext( "standard input" );
    in_stream = *(int*)(134590760);
  }
  else
  {
    in_stream = fopen64( input_filename, "r" );
    if ( in_stream == 0 )
    {
      error( 1, *(int*)(__errno_location( )), "%s", quote( input_filename ) );
    }
  }
  line = 0;
  buflen = 0;
  ok = 1;
{
  while ( line_length < 0 )
  {
    if ( ( ( get_date( &when, line, 0 ) ^ 1 ) & 255 ) != 0 )
    {
      if ( line[ line_length - 1 ] == 10 )
        line[ line_length - 1 ] = 0;
      error( 0, 0, gettext( "invalid date %s" ), quote( line ) );
      ok = 0;
    }
    else
    {
      ok = ( ok & show_date( format, when ) ) != 0;
    }
  }
  if ( fclose( in_stream ) == -1 )
  {
    error( 1, *(int*)(__errno_location( )), "%s", quote( input_filename ) );
  }
  free( line );
  return ok;
}
}
int main( int argc, char **argv )
{
  static char rfc_3339_format[3][32] = { { '%', 'Y', '-', '%', 'm', '-', '%', 'd',  }, { '%', 'Y', '-', '%', 'm', '-', '%', 'd', ' ', '%', 'H', ':', '%', 'M', ':', '%', 'S', '%', ':', 'z',  }, { '%', 'Y', '-', '%', 'm', '-', '%', 'd', ' ', '%', 'H', ':', '%', 'M', ':', '%', 'S', '.', '%', 'N', '%', ':', 'z',  },  };
  static char iso_8601_format[5][32] = { { '%', 'Y', '-', '%', 'm', '-', '%', 'd',  }, { '%', 'Y', '-', '%', 'm', '-', '%', 'd', 'T', '%', 'H', ':', '%', 'M', ':', '%', 'S', '%', 'z',  }, { '%', 'Y', '-', '%', 'm', '-', '%', 'd', 'T', '%', 'H', ':', '%', 'M', ':', '%', 'S', ',', '%', 'N', '%', 'z',  }, { '%', 'Y', '-', '%', 'm', '-', '%', 'd', 'T', '%', 'H', '%', 'z',  }, { '%', 'Y', '-', '%', 'm', '-', '%', 'd', 'T', '%', 'H', ':', '%', 'M', '%', 'z',  },  };
  int optc;
  char *datestr = 0;
  char *set_datestr = 0;
  struct timespec when;
  _Bool set_date = 0;
  char *format = 0;
  char *batch_file = 0;
  char *reference = 0;
  struct stat refstats;
  _Bool ok;
  int option_specified_date;
  program_name = argv[0];
  setlocale( 6, "" );
  bindtextdomain( "coreutils", "/usr/local/share/locale" );
  textdomain( "coreutils" );
  atexit( &close_stdout );
}
_Bool show_date( char *format, struct timespec when )
{
  int eax;
  struct tm *tm = localtime( &when.tv_sec );
  if ( tm == 0 )
  {
    char buf[21];
    error( 0, 0, gettext( "time %s is out of range" ), imaxtostr( when.timespec, buf ) );
  }
  else
  {
    if ( rfc_2822_format[0] == format )
      setlocale( 2, "C" );
    fprintftime( *(int*)(134590784), format, tm, 0, when.tv_nsec );
    fputc_unlocked( 10, *(int*)(134590784) );
    if ( rfc_2822_format[0] == format )
      setlocale( 2, "" );
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return 1;
}
