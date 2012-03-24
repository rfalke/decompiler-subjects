#include "ls.c.h"
static struct dev_ino dev_ino_pop( void );
static void dired_dump_obstack( char *prefix, struct obstack *os );
static size_t dev_ino_hash( void *x, size_t table_size );
static _Bool dev_ino_compare( void *x, void *y );
static void dev_ino_free( void *x );
static _Bool visit_dir( dev_t dev, ino_t ino );
static void free_pending_ent( struct pending *p );
static _Bool is_colored( enum indicator_no  type );
static void restore_default_color( void );
static void sighandler( int sig );
static void stophandler( int sig );
static void process_signals( void );
static int decode_switches( int argc, char **argv );
static _Bool get_funky_string( char **dest, char **src, _Bool equals_end, size_t *output_count );
static void parse_ls_color( void );
static void set_exit_status( _Bool serious );
static void file_failure( _Bool serious, char *message, char *file );
static void queue_directory( char *name, char *realname, _Bool command_line_arg );
static void print_dir( char *name, char *realname, _Bool command_line_arg );
static void add_ignore_pattern( char *pattern );
static _Bool patterns_match( struct ignore_pattern *patterns, char *file );
static _Bool file_ignored( char *name );
static uintmax_t unsigned_file_size( off_t size );
static void clear_files( void );
static uintmax_t gobble_file( char *name, enum filetype  type, ino_t inode, _Bool command_line_arg, char *dirname );
static _Bool is_directory( struct fileinfo *f );
static void get_link_name( char *filename, struct fileinfo *f, _Bool command_line_arg );
static char *make_link_name( char *name, char *linkname );
static _Bool basename_is_dot_or_dotdot( char *name );
static void extract_dirs_from_files( char *dirname, _Bool command_line_arg );
static int xstrcoll( char *a, char *b );
static int xstrcoll_ctime( V a, V b );
static int cmp_ctime( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) );
static int strcmp_ctime( V a, V b );
static int rev_xstrcoll_ctime( V a, V b );
static int rev_strcmp_ctime( V a, V b );
static int xstrcoll_df_ctime( V a, V b );
static int strcmp_df_ctime( V a, V b );
static int rev_xstrcoll_df_ctime( V a, V b );
static int rev_strcmp_df_ctime( V a, V b );
static int xstrcoll_mtime( V a, V b );
static int cmp_mtime( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) );
static int strcmp_mtime( V a, V b );
static int rev_xstrcoll_mtime( V a, V b );
static int rev_strcmp_mtime( V a, V b );
static int xstrcoll_df_mtime( V a, V b );
static int strcmp_df_mtime( V a, V b );
static int rev_xstrcoll_df_mtime( V a, V b );
static int rev_strcmp_df_mtime( V a, V b );
static int xstrcoll_atime( V a, V b );
static int cmp_atime( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) );
static int strcmp_atime( V a, V b );
static int rev_xstrcoll_atime( V a, V b );
static int rev_strcmp_atime( V a, V b );
static int xstrcoll_df_atime( V a, V b );
static int strcmp_df_atime( V a, V b );
static int rev_xstrcoll_df_atime( V a, V b );
static int rev_strcmp_df_atime( V a, V b );
static int xstrcoll_size( V a, V b );
static int cmp_size( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) );
static int strcmp_size( V a, V b );
static int rev_xstrcoll_size( V a, V b );
static int rev_strcmp_size( V a, V b );
static int xstrcoll_df_size( V a, V b );
static int strcmp_df_size( V a, V b );
static int rev_xstrcoll_df_size( V a, V b );
static int rev_strcmp_df_size( V a, V b );
static int xstrcoll_name( V a, V b );
static int cmp_name( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) );
static int strcmp_name( V a, V b );
static int rev_xstrcoll_name( V a, V b );
static int rev_strcmp_name( V a, V b );
static int xstrcoll_df_name( V a, V b );
static int strcmp_df_name( V a, V b );
static int rev_xstrcoll_df_name( V a, V b );
static int rev_strcmp_df_name( V a, V b );
static int xstrcoll_extension( V a, V b );
static int cmp_extension( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) );
static int strcmp_extension( V a, V b );
static int rev_xstrcoll_extension( V a, V b );
static int rev_strcmp_extension( V a, V b );
static int xstrcoll_df_extension( V a, V b );
static int strcmp_df_extension( V a, V b );
static int rev_xstrcoll_df_extension( V a, V b );
static int rev_strcmp_df_extension( V a, V b );
static int xstrcoll_version( V a, V b );
static int cmp_version( struct fileinfo *a, struct fileinfo *b );
static int rev_xstrcoll_version( V a, V b );
static int xstrcoll_df_version( V a, V b );
static int rev_xstrcoll_df_version( V a, V b );
static void initialize_ordering_vector( void );
static void sort_files( void );
static void print_current_files( void );
static int long_time_expected_width( void );
static void get_current_time( void );
static void format_user_or_group( char *name, unsigned long id, int width );
static void format_user( uid_t u, int width, _Bool stat_ok );
static void format_group( gid_t g, int width, _Bool stat_ok );
static int format_user_or_group_width( char *name, unsigned long id );
static int format_user_width( uid_t u );
static int format_group_width( gid_t g );
static void print_long_format( struct fileinfo *f );
static size_t quote_name( FILE *out, char *name, struct quoting_options *options, size_t *width );
static void print_name_with_quoting( char *p, mode_t mode, int linkok, _Bool stat_ok, enum filetype  type, struct obstack *stack );
static void prep_non_filename_text( void );
static void print_file_name_and_frills( struct fileinfo *f );
static char get_type_indicator( _Bool stat_ok, mode_t mode, enum filetype  type );
static void print_type_indicator( _Bool stat_ok, mode_t mode, enum filetype  type );
static void print_color_indicator( char *name, mode_t mode, int linkok, _Bool stat_ok, enum filetype  filetype );
static void put_indicator( struct bin_str *ind );
static size_t length_of_file_name_and_frills( struct fileinfo *f );
static void print_many_per_line( void );
static void print_horizontal( void );
static void print_with_commas( void );
static void indent( size_t from, size_t to );
static void attach( char *dest, char *dirname, char *name );
static void init_column_info( void );
static size_t calculate_columns( _Bool by_columns );
static char filetype_letter[11] = { '?', 'p', 'c', 'd', 'b', '-', 'l', 's', 'w', 'd',  };
char *program_name;
static Hash_table *active_dir_set;
static struct fileinfo *cwd_file;
static size_t cwd_n_alloc;
static size_t cwd_n_used;
static void **sorted_file;
static size_t sorted_file_alloc;
static _Bool color_symlink_as_referent;
static struct pending *pending_dirs;
static time_t current_time = -2147483648;
static int current_time_ns = -1;
static _Bool print_scontext;
static char UNKNOWN_SECURITY_CONTEXT[2] = { '?',  };
static _Bool any_has_acl;
static int inode_number_width;
static int block_size_width;
static int nlink_width;
static int scontext_width;
static int owner_width;
static int group_width;
static int author_width;
static int major_device_number_width;
static int minor_device_number_width;
static int file_size_width;
static enum format  format;
static char *time_style_args[5] = { "full-iso", "long-iso", "iso", "locale", 0,  };
static enum time_style  time_style_types[4] = { 0, 1, 2, 3,  };
static enum time_type  time_type;
static enum sort_type  sort_type;
static _Bool sort_reverse;
static _Bool print_owner = 1;
static _Bool print_author;
static _Bool print_group = 1;
static _Bool numeric_ids;
static _Bool print_block_size;
static int human_output_opts;
static uintmax_t output_block_size;
static uintmax_t file_output_block_size = 1;
static _Bool dired;
static enum indicator_style  indicator_style;
static char *indicator_style_args[5] = { "none", "slash", "file-type", "classify", 0,  };
static enum indicator_style  indicator_style_types[4] = { 0, 1, 2, 3,  };
static _Bool print_with_color;
static char *indicator_name[21] = { "lc", "rc", "ec", "no", "fi", "di", "ln", "pi", "so", "bd", "cd", "mi", "or", "ex", "do", "su", "sg", "st", "ow", "tw", 0,  };
static struct bin_str color_indicator[20] = { { 2, "\033[",  }
, { 1, "m",  }
, { 0, 0,  }
, { 1, "0",  }
, { 1, "0",  }
, { 5, "01;34",  }
, { 5, "01;36",  }
, { 2, "33",  }
, { 5, "01;35",  }
, { 5, "01;33",  }
, { 5, "01;33",  }
, { 0, 0,  }
, { 0, 0,  }
, { 5, "01;32",  }
, { 5, "01;35",  }
, { 5, "37;41",  }
, { 5, "30;43",  }
, { 5, "37;44",  }
, { 5, "34;42",  }
, { 5, "30;42",  }
,  };
static struct color_ext_type *color_ext_list;
static char *color_buf;
static _Bool check_symlink_color;
static _Bool print_inode;
static enum Dereference_symlink  dereference;
static _Bool recursive;
static _Bool immediate_dirs;
static _Bool directories_first;
static enum  { IGNORE_DEFAULT = 0, IGNORE_DOT_AND_DOTDOT = 1, IGNORE_MINIMAL = 2, } ignore_mode;
static struct ignore_pattern *ignore_patterns;
static struct ignore_pattern *hide_patterns;
static _Bool qmark_funny_chars;
static struct quoting_options *filename_quoting_options;
static struct quoting_options *dirname_quoting_options;
static size_t tabsize;
static _Bool print_dir_name;
static size_t line_length;
static _Bool format_needs_stat;
static _Bool format_needs_type;
static char *long_time_format[2] = { "%b %e  %Y", "%b %e %H:%M",  };
static sigset_t caught_signals;
static sig_atomic_t interrupt_signal;
static sig_atomic_t stop_signal_count;
static int exit_status;
static struct option long_options[42] = { { "all", 0, 0, 97,  }
, { "escape", 0, 0, 98,  }
, { "directory", 0, 0, 100,  }
, { "dired", 0, 0, 68,  }
, { "full-time", 0, 0, 134,  }
, { "group-directories-first", 0, 0, 135,  }
, { "human-readable", 0, 0, 104,  }
, { "inode", 0, 0, 105,  }
, { "numeric-uid-gid", 0, 0, 110,  }
, { "no-group", 0, 0, 71,  }
, { "hide-control-chars", 0, 0, 113,  }
, { "reverse", 0, 0, 114,  }
, { "size", 0, 0, 115,  }
, { "width", 1, 0, 119,  }
, { "almost-all", 0, 0, 65,  }
, { "ignore-backups", 0, 0, 66,  }
, { "classify", 0, 0, 70,  }
, { "file-type", 0, 0, 132,  }
, { "si", 0, 0, 140,  }
, { "dereference-command-line", 0, 0, 72,  }
, { "dereference-command-line-symlink-to-dir", 0, 0, 131,  }
, { "hide", 1, 0, 136,  }
, { "ignore", 1, 0, 73,  }
, { "indicator-style", 1, 0, 137,  }
, { "dereference", 0, 0, 76,  }
, { "literal", 0, 0, 78,  }
, { "quote-name", 0, 0, 81,  }
, { "quoting-style", 1, 0, 138,  }
, { "recursive", 0, 0, 82,  }
, { "format", 1, 0, 133,  }
, { "show-control-chars", 0, 0, 139,  }
, { "sort", 1, 0, 141,  }
, { "tabsize", 1, 0, 84,  }
, { "time", 1, 0, 142,  }
, { "time-style", 1, 0, 143,  }
, { "color", 2, 0, 130,  }
, { "block-size", 1, 0, 129,  }
, { "context", 0, 0, 90,  }
, { "author", 0, 0, 128,  }
, { "help", 0, 0, -130,  }
, { "version", 0, 0, -131,  }
, { 0, 0, 0, 0,  }
,  };
static char *format_args[8] = { "verbose", "long", "commas", "horizontal", "across", "vertical", "single-column", 0,  };
static enum format  format_types[7] = { 0, 0, 4, 3, 3, 2, 1,  };
static char *sort_args[6] = { "none", "time", "size", "extension", "version", 0,  };
static enum sort_type  sort_types[5] = { -1, 4, 2, 1, 3,  };
static char *time_args[6] = { "atime", "access", "use", "ctime", "status", 0,  };
static enum time_type  time_types[5] = { 2, 2, 2, 1, 1,  };
static char *color_args[10] = { "always", "yes", "force", "never", "no", "none", "auto", "tty", "if-tty", 0,  };
static enum color_type  color_types[9] = { 1, 1, 1, 0, 0, 0, 2, 2, 2,  };
static struct column_info *column_info;
static size_t max_idx;
static size_t dired_pos;
static struct obstack dired_obstack;
static struct obstack subdired_obstack;
static struct obstack dev_ino_obstack;
static jmp_buf failed_strcoll;
static qsortFunc sort_functions[7][2][2][2] = { { { { &xstrcoll_name, &xstrcoll_df_name,  }, { &rev_xstrcoll_name, &rev_xstrcoll_df_name,  },  }, { { &strcmp_name, &strcmp_df_name,  }, { &rev_strcmp_name, &rev_strcmp_df_name,  },  },  }, { { { &xstrcoll_extension, &xstrcoll_df_extension,  }, { &rev_xstrcoll_extension, &rev_xstrcoll_df_extension,  },  }, { { &strcmp_extension, &strcmp_df_extension,  }, { &rev_strcmp_extension, &rev_strcmp_df_extension,  },  },  }, { { { &xstrcoll_size, &xstrcoll_df_size,  }, { &rev_xstrcoll_size, &rev_xstrcoll_df_size,  },  }, { { &strcmp_size, &strcmp_df_size,  }, { &rev_strcmp_size, &rev_strcmp_df_size,  },  },  }, { { { &xstrcoll_version, &xstrcoll_df_version,  }, { &rev_xstrcoll_version, &rev_xstrcoll_df_version,  },  }, { { 0, 0,  }, { 0, 0,  },  },  }, { { { &xstrcoll_mtime, &xstrcoll_df_mtime,  }, { &rev_xstrcoll_mtime, &rev_xstrcoll_df_mtime,  },  }, { { &strcmp_mtime, &strcmp_df_mtime,  }, { &rev_strcmp_mtime, &rev_strcmp_df_mtime,  },  },  }, { { { &xstrcoll_ctime, &xstrcoll_df_ctime,  }, { &rev_xstrcoll_ctime, &rev_xstrcoll_df_ctime,  },  }, { { &strcmp_ctime, &strcmp_df_ctime,  }, { &rev_strcmp_ctime, &rev_strcmp_df_ctime,  },  },  }, { { { &xstrcoll_atime, &xstrcoll_df_atime,  }, { &rev_xstrcoll_atime, &rev_xstrcoll_df_atime,  },  }, { { &strcmp_atime, &strcmp_df_atime,  }, { &rev_strcmp_atime, &rev_strcmp_df_atime,  },  },  },  };
struct dev_ino dev_ino_pop( void )
{
  // static char __PRETTY_FUNCTION__[12] = { 'd', 'e', 'v', '_', 'i', 'n', 'o', '_', 'p', 'o', 'p',  };
{
  struct obstack *__o = &dev_ino_obstack;
  if ( *(int*)(ebp_12 + 12) - *(int*)(ebp_12 + 8) <= 15 )
  {
    __assert_fail( "sizeof (struct dev_ino) &lt;= __extension__ ({ struct obstack const *__o = (&dev_ino_obstack); (unsigned) (__o-&gt;next_free - __o-&gt;object_base); })", "ls.c", 918, __PRETTY_FUNCTION__ );
  }
{
  struct obstack *__o = &dev_ino_obstack;
  int __len = -16;
  if ( __o->chunk_limit - __o->next_free < __len )
    _obstack_newchunk( __o, &__len );
  *(int*)(ebp_8 + 12) = __o->next_free[ __len ];
  memmove( (int)( &(void*)(result.st_ino & 0xFFFFFFFF) ), dev_ino_obstack.next_free, 16 );
  return;
}
}
}
void dired_dump_obstack( char *prefix, struct obstack *os )
{
  size_t n_pos;
{
  struct obstack *__o = os;
  n_pos = ( *(int*)(ebp_24 + 12) - *(int*)(ebp_24 + 8) ) >> 2;
  if ( n_pos != 0 )
  {
    struct obstack *__o1 = os;
    void *__value = (void*)__o1->object_base;
    if ( __o1->next_free == __value )
      __o1->bits_at_40/*.1_1of4*/ |= 2;
    __o1->next_free = __o1->next_free[ __o1->alignment_mask ] & ~__o1->alignment_mask;
    if ( __o1->chunk_limit - __o1->chunk < __o1->next_free - __o1->chunk )
      __o1->next_free = __o1->chunk_limit;
    __o1->object_base = __o1->next_free;
    pos = ebp_8;
    fputs_unlocked( prefix, *(int*)(134628384) );
    i = 0;
    for ( ; i < n_pos; i++ )
    {
      printf( " %lu", pos[ i ] );
      //i++;
    }
    putchar_unlocked( 10 );
  }
  return;
}
}
size_t dev_ino_hash( void *x, size_t table_size )
{
  struct dev_ino *p = &x[0]/*error:'v'*/;
  return __umoddi3( p->st_ino, (long long)( table_size ) );
}
_Bool dev_ino_compare( void *x, void *y )
{
  struct dev_ino *a = &x[0]/*error:'v'*/;
  struct dev_ino *b = &y[0]/*error:'v'*/;
  return ( b->st_ino == a->st_ino && b->st_dev == a->st_dev ? 1 : 0 );
}
void dev_ino_free( void *x )
{
  free( x );
  return;
}
_Bool visit_dir( dev_t dev, ino_t ino )
{
  struct dev_ino *ent = xmalloc( 16 );
  struct dev_ino *ent_from_table;
  _Bool found_match;
  ent->st_ino = ino;
  ent->st_dev = dev;
  ent_from_table = hash_insert( &active_dir_set, (void*)ent );
  if ( ent_from_table == 0 )
    xalloc_die( );
  found_match = ent_from_table != ent;
  if ( found_match != 0 )
  {
    free( ent );
  }
  return found_match;
}
void free_pending_ent( struct pending *p )
{
  free( p->name );
  free( p->realname );
  free( p );
  return;
}
_Bool is_colored( enum indicator_no  type )
{
  size_t len = color_indicator[ type ].len;
  char *s = color_indicator[ type ].string;
  return ( len == 0 || ( len == 1 && s[0] == 825229360 ) || ( len == 2 && strncmp( s, "00", 2 ) == 0 ) ? 0 : 1 );
}
void restore_default_color( void )
{
  put_indicator( color_indicator );
  put_indicator( &color_indicator[1] );
  return;
}
void sighandler( int sig )
{
  if ( interrupt_signal == 0 )
  {
    interrupt_signal = sig;
  }
  return;
}
void stophandler( int sig )
{
  if ( interrupt_signal == 0 )
  {
    stop_signal_count++;
  }
  return;
}
void process_signals( void )
{
  while ( ( stop_signal_count | interrupt_signal ) != 0 )
  {
    int sig;
    int stops;
    sigset_t oldset;
    restore_default_color( );
    fflush_unlocked( *(int*)(134628384) );
    sigprocmask( 0, caught_signals.__val, oldset.__val );
    sig = interrupt_signal;
    stops = stop_signal_count;
    if ( stops != 0 )
    {
      stop_signal_count = stops - 1;
      sig = 19;
    }
    else
      signal( sig, 0 );
    raise( sig );
    sigprocmask( 2, oldset.__val, 0 );
  }
  return;
}
int main( int argc, char **argv )
{
  int ecx;
  static int sig[12] = { 20, 14, 1, 2, 13, 3, 15, 29, 27, 26, 24, 25,  };
  // static char __PRETTY_FUNCTION__[5] = { 'm', 'a', 'i', 'n',  };
  int i;
  struct pending *thispend;
  int n_files;
  program_name = argv[0];
  setlocale( 6, "" );
  bindtextdomain( "coreutils", "/usr/local/share/locale" );
  textdomain( "coreutils" );
  initialize_exit_failure( 2 );
  atexit( &close_stdout );
  exit_status = 0;
  print_dir_name = 1;
  pending_dirs = 0;
  i = decode_switches( argc, argv );
  if ( ( print_with_color & 255 ) != 0 )
    parse_ls_color( );
  if ( ( print_with_color & 255 ) != 0 )
  {
    if ( ( is_colored( C_ORPHAN ) & 255 ) != 0 || ( ( ( is_colored( C_EXEC ) ^ 1 ) & 255 ) == 0 && ( color_symlink_as_referent & 255 ) != 0 ) || ( ( ( is_colored( C_MISSING ) ^ 1 ) & 255 ) == 0 && format == long_format ) )
      check_symlink_color = 1;
    if ( tcgetpgrp( 1 ) >= 0 )
    {
      int j;
      struct sigaction act;
      sigemptyset( caught_signals.__val );
      j = 0;
      for ( ; j <= 11; j++ )
      {
        sigaction( sig[ j ], 0, act.__sigaction_handler.sa_handler );
        if ( act.__sigaction_handler.sa_handler/*union*/ != 1 )
          sigaddset( caught_signals.__val, sig[ j ] );
        //j++;
      }
      memcpy( act.sa_mask.__val, caught_signals.__val, 32 * 4 );
      act.sa_flags = 0x10000000;
      j = 0;
      for ( ; j <= 11; j++ )
      {
        if ( sigismember( caught_signals.__val, sig[ j ] ) != 0 )
        {
          act.__sigaction_handler.sa_handler/*union*/ = sig[ j ] == 20 ? &stophandler : &sighandler;
          sigaction( sig[ j ], act.__sigaction_handler.sa_handler, 0 );
        }
        //j++;
      }
    }
    prep_non_filename_text( );
  }
  if ( dereference == DEREF_UNDEFINED )
  {
    dereference = ( immediate_dirs & 255 ) != 0 || indicator_style == classify || format == long_format ? DEREF_NEVER : DEREF_COMMAND_LINE_SYMLINK_TO_DIR;
  }
  if ( ( recursive & 255 ) != 0 )
  {
    active_dir_set = hash_initialize( 30, 0, &dev_ino_hash, &dev_ino_compare, &dev_ino_free );
    if ( active_dir_set == 0 )
      xalloc_die( );
    _obstack_begin( &dev_ino_obstack.chunk_size, 0, 0, &malloc, &free );
  }
  format_needs_stat = sort_type == sort_time || sort_type == sort_size || format == long_format || ( print_scontext & 255 ) != 0 || ( print_block_size & 255 ) != 0 ? 1 : 0;
  format_needs_type = ( ( ( format_needs_stat ^ 1 ) ^ 1 ) & 255 ) != 0 || ( ( recursive & 255 ) == 0 && ( print_with_color & 255 ) == 0 && indicator_style == none && ( directories_first & 255 ) == 0 ) ? 0 : 1;
  if ( ( dired & 255 ) != 0 )
  {
    _obstack_begin( &dired_obstack.chunk_size, 0, 0, &malloc, &free );
    _obstack_begin( &subdired_obstack.chunk_size, 0, 0, &malloc, &free );
  }
  cwd_n_alloc = 100;
  cwd_file = xnmalloc( cwd_n_alloc, 120 );
  cwd_n_used = 0;
  clear_files( );
  n_files = argc - i;
  if ( n_files < 1 )
  {
    if ( ( immediate_dirs & 255 ) != 0 )
    {
      gobble_file( ".", directory, (long long)0, 1, "" );
    }
    queue_directory( ".", 0, 1 );
  }
  else
  {
    do
    {
      gobble_file( argv[ i ], unknown, (long long)0, 1, "" );
      i++;
    }
    while ( i < argc );
    if ( cwd_n_used != 0 )
    {
      sort_files( );
      if ( ( ( immediate_dirs ^ 1 ) & 255 ) != 0 )
        extract_dirs_from_files( 0, 1 );
    }
    if ( cwd_n_used != 0 )
    {
      print_current_files( );
      if ( pending_dirs != 0 )
      {
        putchar_unlocked( 10 );
        dired_pos++;
      }
    }
    else
    if ( n_files <= 1 && pending_dirs != 0 && pending_dirs->next == 0 )
    {
      print_dir_name = 0;
    }
    while ( pending_dirs == 0 )
    {
      thispend = pending_dirs;
      pending_dirs = pending_dirs->next;
      if ( active_dir_set != 0 && thispend->name == 0 )
      {
        struct dev_ino di = dev_ino_pop( );
        struct dev_ino *found = hash_delete( &active_dir_set, &di.st_ino );
        if ( found == 0 )
        {
          __assert_fail( "found", "ls.c", 1310, __PRETTY_FUNCTION__ );
        }
        dev_ino_free( (void*)found );
        free_pending_ent( thispend );
      }
      else
      {
        print_dir( thispend->name, thispend->realname, thispend->command_line_arg );
        free_pending_ent( thispend );
        print_dir_name = 1;
      }
    }
  }
}
int decode_switches( int argc, char **argv )
{
  static char posix_prefix[7] = { 'p', 'o', 's', 'i', 'x', '-',  };
  char *time_style_option = 0;
  _Bool sort_type_specified = 0;
  qmark_funny_chars = 0;
  switch ( ls_mode )
  {
  default:
    abort( );
    break;
  case 2:
    format = many_per_line;
    set_quoting_style( 0, escape_quoting_style );
    break;
  case 3:
    format = long_format;
    set_quoting_style( 0, escape_quoting_style );
    break;
  case 1:
    if ( isatty( 1 ) != 0 )
    {
      format = many_per_line;
      qmark_funny_chars = 1;
    }
    else
    {
      format = one_per_line;
      qmark_funny_chars = 0;
    }
    time_type = time_mtime;
    sort_type = sort_name;
    sort_reverse = 0;
    numeric_ids = 0;
    print_block_size = 0;
    indicator_style = none;
    print_inode = 0;
    dereference = DEREF_UNDEFINED;
    recursive = 0;
    immediate_dirs = 0;
    ignore_mode = IGNORE_DEFAULT;
    ignore_patterns = 0;
    hide_patterns = 0;
    print_scontext = 0;
  {
    char *q_style = getenv( "QUOTING_STYLE" );
    if ( q_style != 0 )
    {
      int i = argmatch( q_style, quoting_style_args, quoting_style_vals, 4 );
      if ( i >= 0 )
        set_quoting_style( 0, quoting_style_vals[ i ] );
      else
        quotearg( q_style );
      error( 0, 0, gettext( "ignoring invalid value of environment variable QUOTING_STYLE: %s" ), quoting_style_vals[ i ] );
    }
  {
    char *ls_block_size = getenv( "LS_BLOCK_SIZE" );
    human_options( ls_block_size, &human_output_opts, &output_block_size );
    if ( ls_block_size != 0 || getenv( "BLOCK_SIZE" ) != 0 )
      file_output_block_size = output_block_size;
    line_length = 80;
  {
    char *p = getenv( "COLUMNS" );
    if ( p != 0 && ( p[0] & 255 ) != 0 )
    {
      unsigned long tmp_ulong;
      if ( xstrtoul( p, 0, 0, &tmp_ulong, 0 ) == 0 && tmp_ulong != 0 )
        line_length = tmp_ulong;
      else
      {
        error( 0, 0, gettext( "ignoring invalid width in environment variable COLUMNS: %s" ), quotearg( p ) );
      }
    }
  {
    struct winsize ws;
    if ( ioctl( 1, 21523, ws.ws_row ) != -1 && ( ws.ws_col & 65535 ) != 0 )
      line_length = ws.ws_col;
  {
    char *p = getenv( "TABSIZE" );
    tabsize = 8;
    if ( p != 0 )
    {
      unsigned long tmp_ulong;
      if ( xstrtoul( p, 0, 0, &tmp_ulong, 0 ) == 0 )
      {
        tabsize = tmp_ulong;
      }
      else
      {
        error( 0, 0, gettext( "ignoring invalid tab size in environment variable TABSIZE: %s" ), quotearg( p ) );
      }
    }
  {
    while ( 1 )
    {
      int oi = -1;
      int c;
      c = getopt_long( argc, argv, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", long_options[0].name, &oi );
      if ( c != -1 )
      {
        switch ( c + 131 )
        {
        case 228:
          ignore_mode = IGNORE_MINIMAL;
          break;
        case 229:
          set_quoting_style( 0, escape_quoting_style );
          break;
        case 230:
          time_type = time_ctime;
          break;
        case 231:
          immediate_dirs = 1;
          break;
        case 233:
          ignore_mode = IGNORE_MINIMAL;
          sort_type = sort_none;
          sort_type_specified = 1;
          if ( format == long_format )
          {
            if ( isatty( 1 ) != 0 )
            {
              format = many_per_line;
              print_block_size = 0;
              print_with_color = 0;
            }
            else
            {
              format = many_per_line;
              print_block_size = 0;
              print_with_color = 0;
            }
          }
          else
          {
            print_block_size = 0;
            print_with_color = 0;
          }
          break;
        case 263:
          indicator_style = file_type;
          break;
        case 234:
          format = long_format;
          print_owner = 0;
          break;
        case 235:
          human_output_opts = 176;
          file_output_block_size = output_block_size = 1;
          break;
        case 236:
          print_inode = 1;
          break;
        case 238:
          human_output_opts = 0;
          file_output_block_size = output_block_size = 1024;
          break;
        case 239:
          format = long_format;
          break;
        case 240:
          format = with_commas;
          break;
        case 241:
          numeric_ids = 1;
          format = long_format;
          break;
        case 242:
          format = long_format;
          print_group = 0;
          break;
        case 243:
          indicator_style = slash;
          break;
        case 244:
          qmark_funny_chars = 1;
          break;
        case 245:
          sort_reverse = 1;
          break;
        case 246:
          print_block_size = 1;
          break;
        case 247:
          sort_type = sort_time;
          sort_type_specified = 1;
          break;
        case 248:
          time_type = time_atime;
          break;
        case 249:
          sort_type = sort_version;
          sort_type_specified = 1;
          break;
        case 250:
        {
          unsigned long tmp_ulong;
          if ( xstrtoul( *(int*)(134628388), 0, 0, &tmp_ulong, 0 ) != 0 || tmp_ulong == 0 )
          {
            error( 2, 0, gettext( "invalid line width: %s" ), quotearg( *(int*)(134628388) ) );
          }
          line_length = tmp_ulong;
        }
          break;
        case 251:
          format = horizontal;
          break;
        case 196:
          if ( ignore_mode == IGNORE_DEFAULT )
          {
            ignore_mode = IGNORE_DOT_AND_DOTDOT;
          }
          break;
        case 197:
          add_ignore_pattern( "*~" );
          add_ignore_pattern( ".*~" );
          break;
        case 198:
          format = many_per_line;
          break;
        case 199:
          dired = 1;
          break;
        case 201:
          indicator_style = classify;
          break;
        case 202:
          print_group = 0;
          break;
        case 203:
          dereference = DEREF_COMMAND_LINE_ARGUMENTS;
          break;
        case 262:
          dereference = DEREF_COMMAND_LINE_SYMLINK_TO_DIR;
          break;
        case 204:
          add_ignore_pattern( *(int*)(134628388) );
          break;
        case 207:
          dereference = DEREF_ALWAYS;
          break;
        case 209:
          set_quoting_style( 0, literal_quoting_style );
          break;
        case 212:
          set_quoting_style( 0, c_quoting_style );
          break;
        case 213:
          recursive = 1;
          break;
        case 214:
          sort_type = sort_size;
          sort_type_specified = 1;
          break;
        case 215:
        {
          unsigned long tmp_ulong;
          if ( xstrtoul( *(int*)(134628388), 0, 0, &tmp_ulong, 0 ) != 0 )
          {
            error( 2, 0, gettext( "invalid tab size: %s" ), quotearg( *(int*)(134628388) ) );
          }
          tabsize = tmp_ulong;
        }
          break;
        case 216:
          sort_type = sort_none;
          sort_type_specified = 1;
          break;
        case 219:
          sort_type = sort_extension;
          sort_type_specified = 1;
          break;
        case 180:
          if ( format != long_format )
          {
            format = one_per_line;
          }
          break;
        case 259:
          print_author = 1;
          break;
        case 267:
        {
          struct ignore_pattern *hide = xmalloc( 8 );
          hide->pattern = *(int*)(134628388);
          hide->next = hide_patterns;
          hide_patterns = hide;
        }
          break;
        case 272:
          sort_type = sort_types[ __xargmatch_internal( "--sort", *(int*)(134628388), sort_args, sort_types, 4, argmatch_die ) ];
          sort_type_specified = 1;
          break;
        case 266:
          directories_first = 1;
          break;
        case 273:
          time_type = time_types[ __xargmatch_internal( "--time", *(int*)(134628388), time_args, time_types, 4, argmatch_die ) ];
          break;
        case 264:
          format = format_types[ __xargmatch_internal( "--format", *(int*)(134628388), format_args, format_types, 4, argmatch_die ) ];
          break;
        case 265:
          format = long_format;
          time_style_option = "full-iso";
          break;
        case 261:
        {
          int i;
          if ( *(int*)(134628388) != 0 )
          {
            i = color_types[ __xargmatch_internal( "--color", *(int*)(134628388), color_args, color_types, 4, argmatch_die ) ];
          }
          else
            i = 1;
          print_with_color = i == 1 || ( i == 2 && isatty( 1 ) != 0 ) ? 1 : 0;
          if ( ( print_with_color & 255 ) != 0 )
          {
            tabsize = 0;
          }
        }
          break;
        case 268:
          indicator_style = indicator_style_types[ __xargmatch_internal( "--indicator-style", *(int*)(134628388), indicator_style_args, indicator_style_types, 4, argmatch_die ) ];
          break;
        case 269:
          set_quoting_style( 0, quoting_style_vals[ __xargmatch_internal( "--quoting-style", *(int*)(134628388), quoting_style_args, quoting_style_vals, 4, argmatch_die ) ] );
          break;
        case 274:
          time_style_option = *(int*)(134628388);
          break;
        case 270:
          qmark_funny_chars = 0;
          break;
        case 260:
        {
          enum strtol_error  e = human_options( *(int*)(134628388), &human_output_opts, &output_block_size );
          if ( e != LONGINT_OK )
            xstrtol_fatal( e, oi, 0, long_options, *(int*)(134628388) );
          file_output_block_size = output_block_size;
        }
          break;
        case 271:
          human_output_opts = 144;
          file_output_block_size = output_block_size = 1;
          break;
        case 221:
          print_scontext = 1;
          break;
        case 1:
          usage( 0 );
          break;
        case 0:
          version_etc( *(int*)(134628384), ls_mode == 1 ? "ls" : ls_mode == 2 ? "dir" : "vdir", "GNU coreutils", "6.10", "Richard Stallman", (long long)( "David MacKenzie" ) );
          exit( 0 );
          break;
        default:
          usage( 2 );
          break;
        }
        version_etc( *(int*)(134628384), ls_mode == 1 ? "ls" : ls_mode == 2 ? "dir" : "vdir", "GNU coreutils", "6.10", "Richard Stallman", (long long)( "David MacKenzie" ) );
        exit( 0 );
      }
      else
      {
        max_idx = line_length <= 2 ? 1 : (/*HI*/int)( (int)line_length * -1431655765 ) >> 1;
        filename_quoting_options = clone_quoting_options( 0 );
        if ( get_quoting_style( &filename_quoting_options ) == escape_quoting_style )
          set_char_quoting( &filename_quoting_options, ' ', 1 );
        if ( indicator_style > 1 )
        {
          char *p = "*=&gt;@|";
          for ( ; ( p[0] & 255 ) != 0; p++ )
          {
            set_char_quoting( &filename_quoting_options, p[0], 1 );
            //p++;
          }
        }
        dirname_quoting_options = clone_quoting_options( 0 );
        set_char_quoting( &dirname_quoting_options, ':', 1 );
        if ( ( dired & 255 ) != 0 && format != long_format )
          dired = 0;
        if ( ( time_type == time_ctime || time_type == time_atime ) && ( ( sort_type_specified ^ 1 ) & 255 ) != 0 && format != long_format )
          sort_type = sort_time;
        if ( format == long_format )
        {
          char *style = time_style_option;
          if ( style == 0 )
          {
            style = getenv( "TIME_STYLE" );
            if ( style == 0 )
            {
              style = "locale";
              while ( strncmp( style, posix_prefix, 6 ) == 0 )
              {
                if ( ( ( hard_locale( 2 ) ^ 1 ) & 255 ) != 0 )
                {
                  return *(int*)(134628352);
                }
                style += 6;
              }
              if ( style[0] == '+' )
              {
                char *p0 = &style[1];
                char *p1 = strchr( p0, 10 );
                if ( p1 == 0 )
                  p1 = p0;
                else
                {
                  if ( strchr( &p1[1], 10 ) != 0 )
                  {
                    error( 2, 0, gettext( "invalid time style format %s" ), quote( p0 ) );
                  }
                  p1[0] = 0;
                  p1++;
                }
                long_time_format[0] = p0;
                long_time_format[1] = p1;
              }
              else
              {
                switch ( time_style_types[ __xargmatch_internal( "time style", style, time_style_args, time_style_types, 4, argmatch_die ) ] )
                {
                default:
                  break;
                case full_iso_time_style:
                  long_time_format[0] = long_time_format[1] = "%Y-%m-%d %H:%M:%S.%N %z";
                  break;
                case long_iso_time_style:
                  long_time_format[0] = long_time_format[1] = "%Y-%m-%d %H:%M";
                  break;
                case iso_time_style:
                  long_time_format[0] = "%Y-%m-%d ";
                  long_time_format[1] = "%m-%d %H:%M";
                  break;
                case locale_time_style:
                  if ( ( hard_locale( 2 ) & 255 ) != 0 )
                  {
                    int i = 0;
                    for ( ; i <= 1; i++ )
                    {
                      char *locale_format = dcgettext( 0, long_time_format[ i ], 2 );
                      if ( long_time_format[ i ] == locale_format )
                        continue;
                      else
                      {
                        long_time_format[ i ] = locale_format;
                        //i++;
                      }
                    }
                  }
                  break;
                }
              }
            }
          }
        }
        return *(int*)(134628352);
      }
    }
  }
  }
  }
  }
  }
  }
    break;
  }
}
_Bool get_funky_string( char **dest, char **src, _Bool equals_end, size_t *output_count )
{
  char num;
  size_t count;
  enum  { ST_GND = 0, ST_BACKSLASH = 1, ST_OCTAL = 2, ST_HEX = 3, ST_CARET = 4, ST_END = 5, ST_ERROR = 6, } state;
  char *p = src[0];
  char *q = dest[0];
  count = 0;
  num = 0;
  state = ST_GND;
  while ( state <= 4 )
  {
    switch ( state )
    {
    case ST_GND:
      switch ( p[0] )
      {
        if ( p[0] != 0 && p[0] != 58 )
        {
        }
        else
        {
          state = ST_END;
        }
        break;
      default:
        break;
      case 92:
        state = ST_BACKSLASH;
        p++;
        break;
      case 94:
        state = ST_CARET;
        p++;
        break;
      case 61:
        if ( equals_end != 0 )
        {
          state = ST_END;
        }
        break;
      }
      q[0] = p[0];
      q++;
      p++;
      count++;
      break;
    case ST_BACKSLASH:
      switch ( p[0] )
      {
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
        state = ST_OCTAL;
        num = p[0] - 48;
        break;
      case 88:
      case 120:
        state = ST_HEX;
        num = 0;
        break;
      case 97:
        num = 7;
        break;
      case 98:
        num = 8;
        break;
      case 101:
        num = 27;
        break;
      case 102:
        num = 12;
        break;
      case 110:
        num = 10;
        break;
      case 114:
        num = 13;
        break;
      case 116:
        num = 9;
        break;
      case 118:
        num = 11;
        break;
      case 63:
        num = 127;
        break;
      case 95:
        num = ' ';
        break;
      case 0:
        state = ST_ERROR;
        break;
      default:
        num = p[0];
        break;
      }
      if ( state == ST_BACKSLASH )
      {
        q[0] = num;
        q++;
        count++;
        state = ST_GND;
      }
      p++;
      break;
    case ST_OCTAL:
      if ( p[0] <= 47 || p[0] > 55 )
      {
        q[0] = num;
        q++;
        count++;
        state = ST_GND;
      }
      else
      {
        num = ( ( num << 3 ) + p[0] ) - 48;
        p++;
      }
      break;
    case ST_HEX:
      switch ( p[0] )
      {
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
        num = ( ( num << 4 ) + p[0] ) - 48;
        p++;
        break;
      case 97:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
        num = ( ( num << 4 ) + p[0] ) - 87;
        p++;
        break;
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
        num = ( ( num << 4 ) + p[0] ) - 55;
        p++;
        break;
      default:
        q[0] = num;
        q++;
        count++;
        state = ST_GND;
        break;
      }
      break;
    case ST_CARET:
      state = ST_GND;
      if ( p[0] > 63 && p[0] != 127 )
      {
        q[0] = p[0] & 31;
        q++;
        p++;
        count++;
      }
      else
      {
        if ( p[0] == '?' )
        {
          q[0] = 127;
          q++;
          count++;
        }
        else
        {
          state = ST_ERROR;
        }
      }
      break;
    default:
      abort( );
      break;
    }
  }
  dest[0] = q;
  src[0] = p;
  output_count[0] = count;
  return state != ST_ERROR;
}
void parse_ls_color( void )
{
  char *p = getenv( "LS_COLORS" );
  char *buf;
  int state;
  int ind_no;
  char label[3];
  struct color_ext_type *ext;
  if ( p != 0 && ( p[0] & 255 ) != 0 )
  {
    ext = 0;
    memcpy( label, "??", 3 );
    buf = color_buf = xstrdup( p );
    state = 1;
    while ( state < 1 )
    {
      switch ( state )
      {
        break;
      default:
        break;
      case 1:
        switch ( p[0] )
        {
        default:
          label[0] = p[0];
          p++;
          state = 2;
          break;
        case 58:
          p++;
          break;
        case 42:
          ext = xmalloc( 20 );
          ext->next = color_ext_list;
          color_ext_list = ext;
          p++;
          ext->ext.string = buf;
          state = ( get_funky_string( &buf, &p, 1, (size_t*)ext ) & 255 ) == 0 ? -1 : 4;
          break;
        case 0:
          state = 0;
          break;
        }
        break;
      case 2:
        if ( ( p[0] & 255 ) != 0 )
        {
          label[1] = p[0];
          p++;
          state = 3;
        }
        else
        {
          state = -1;
        }
        break;
      case 3:
        state = -1;
        p++;
        if ( ( ( p[0] == '=' ) & 255 ) == 0 )
          continue;
        else
        {
          ind_no = 0;
          for ( ; indicator_name[ ind_no ] != 0; ind_no++ )
          {
            if ( strcmp( label, indicator_name[ ind_no ] ) == 0 )
            {
              color_indicator[ ind_no ].string = buf;
              state = ( get_funky_string( &buf, &p, 0, &color_indicator[ ind_no ].len ) & 255 ) == 0 ? -1 : 1;
              break;
            }
            else
            {
              //ind_no++;
            }
          }
          if ( state != -1 )
            continue;
          else
          {
            error( 0, 0, gettext( "unrecognized prefix: %s" ), quotearg( label ) );
          }
        }
        break;
      case 4:
        p++;
        if ( ( ( p[0] == '=' ) & 255 ) != 0 )
        {
          ext->seq.string = buf;
          state = ( get_funky_string( &buf, &p, 0, &ext->seq.len ) & 255 ) == 0 ? -1 : 1;
        }
        else
        {
          state = -1;
        }
        break;
      }
    }
  }
  return;
}
void set_exit_status( _Bool serious )
{
  if ( serious != 0 )
  {
    exit_status = 2;
  }
  else
  if ( exit_status == 0 )
  {
    exit_status = 1;
  }
  return;
}
void file_failure( _Bool serious, char *message, char *file )
{
  error( 0, *(int*)(__errno_location( )), message, quotearg_colon( file ) );
  set_exit_status( serious );
  return;
}
void queue_directory( char *name, char *realname, _Bool command_line_arg )
{
  struct pending *new = xmalloc( 16 );
  new->realname = realname == 0 ? 0 : xstrdup( realname );
  new->name = name == 0 ? 0 : xstrdup( name );
  new->command_line_arg = command_line_arg;
  new->next = pending_dirs;
  pending_dirs = new;
  return;
}
void print_dir( char *name, char *realname, _Bool command_line_arg )
{
  static _Bool first = 1;
  DIR *dirp;
  struct dirent *next;
  uintmax_t total_blocks = 0;
  *(int*)(__errno_location( ebx )) = 0;
  dirp = opendir( name );
  if ( dirp == 0 )
  {
    file_failure( command_line_arg, gettext( "cannot open directory %s" ), name );
    print_current_files( );
    return;
  }
  else
  {
    if ( active_dir_set != 0 )
    {
      struct stat dir_stat;
      int fd = dirfd( &dirp );
      if ( (unsigned char)( ( fd >= 0 ? fstat64( fd, &dir_stat.st_dev ) : stat64( name, &dir_stat.st_dev ) ) >> 31 ) != 0 )
      {
        file_failure( command_line_arg, gettext( "cannot determine device and inode of %s" ), name );
        closedir( &dirp );
      }
      else
      {
        if ( ( visit_dir( dir_stat.st_dev, dir_stat.st_ino ) & 255 ) != 0 )
        {
          error( 0, 0, gettext( "%s: not listing already-listed directory" ), quotearg_colon( name ) );
          closedir( &dirp );
        }
        else
        {
          struct obstack *__o = &dev_ino_obstack;
          int __len = 16;
          if ( __o->chunk_limit - __o->next_free < __len )
            _obstack_newchunk( __o, &__len );
          (di->st_ino & 0xFFFFFFFF) = (dir_stat.st_ino & 0xFFFFFFFF);
          *(int*)(ebp_40 + 12) = __o->next_free[ __len ];
          di = &dev_ino_obstack.next_free[ -16 ]/*error:'c'*/;
          di->st_dev = dir_stat.st_dev;
          *(int*)(ebp_44 + 4) = (int)(dir_stat.st_ino << 32);
        }
      }
    }
    clear_files( );
    while ( 1 )
    {
      *(int*)(__errno_location( )) = 0;
      next = readdir64( &dirp );
      if ( next != 0 )
      {
        if ( ( ( file_ignored( &next->d_name[0] ) ^ 1 ) & 255 ) == 0 )
          continue;
        else
        {
          enum filetype  type = unknown;
          switch ( next->d_type )
          {
          case 6:
            type = blockdev;
            total_blocks += gobble_file( &next->d_name[0], type, next->d_ino, 0, name );
            break;
          case 2:
            type = chardev;
            break;
          case 4:
            type = directory;
            break;
          case 1:
            type = fifo;
            break;
          case 10:
            type = symbolic_link;
            break;
          case 8:
            type = normal;
            break;
          case 12:
            type = sock;
            break;
          case 14:
            type = whiteout;
            break;
          default:
            break;
          }
        }
      }
      else
      {
        if ( *(int*)(__errno_location( )) != 0 )
        {
          file_failure( command_line_arg, gettext( "reading directory %s" ), name );
          if ( *(int*)(__errno_location( )) == 75 )
            continue;
        }
        if ( closedir( &dirp ) != 0 )
        {
          file_failure( command_line_arg, gettext( "closing directory %s" ), name );
        }
        sort_files( );
        if ( ( recursive & 255 ) != 0 )
          extract_dirs_from_files( name, command_line_arg );
        if ( ( print_dir_name | recursive ) != 0 )
        {
          if ( ( ( first ^ 1 ) & 255 ) != 0 )
          {
            putchar_unlocked( 10 );
            dired_pos++;
          }
          first = 0;
          if ( ( dired & 255 ) != 0 )
          {
            fwrite_unlocked( "  ", 1, 2, *(int*)(134628384) );
            dired_pos += 2;
          }
          if ( ( dired & 255 ) != 0 )
          {
            struct obstack *__o = &subdired_obstack;
            int __len = 4;
            if ( __o->chunk_limit < __o->next_free[ __len ] )
              _obstack_newchunk( __o, &__len );
            memcpy( __o->next_free, &dired_pos, __len );
            *(int*)(ebp_28 + 12) = __o->next_free[ __len ];
          }
          dired_pos += quote_name( *(int*)(134628384), realname == 0 ? name : realname, &dirname_quoting_options, 0 );
          if ( ( dired & 255 ) != 0 )
          {
            struct obstack *__o = &subdired_obstack;
            int __len = 4;
            if ( __o->chunk_limit < __o->next_free[ __len ] )
              _obstack_newchunk( __o, &__len );
            memcpy( __o->next_free, &dired_pos, __len );
            *(int*)(ebp_20 + 12) = __o->next_free[ __len ];
          }
          fwrite_unlocked( ":\n", 1, 2, *(int*)(134628384) );
          dired_pos += 2;
        }
        if ( format == long_format || ( print_block_size & 255 ) != 0 )
        {
          char *p;
          char buf[652];
          if ( ( dired & 255 ) != 0 )
          {
            fwrite_unlocked( "  ", 1, 2, *(int*)(134628384) );
            dired_pos += 2;
          }
          p = gettext( "total" );
          fputs_unlocked( p, *(int*)(134628384) );
          dired_pos += strlen( p );
          putchar_unlocked( 32 );
          dired_pos++;
          p = human_readable( total_blocks, buf, human_output_opts, (long long)512, output_block_size );
          fputs_unlocked( p, *(int*)(134628384) );
          dired_pos += strlen( p );
          putchar_unlocked( 10 );
          dired_pos++;
        }
        if ( cwd_n_used != 0 )
          continue;
      }
    }
  }
}
void add_ignore_pattern( char *pattern )
{
  struct ignore_pattern *ignore = xmalloc( 8 );
  ignore->pattern = pattern;
  ignore->next = ignore_patterns;
  ignore_patterns = ignore;
  return;
}
_Bool patterns_match( struct ignore_pattern *patterns, char *file )
{
  struct ignore_pattern *p = patterns;
  for ( ; p != 0; p = p->next )
  {
    if ( fnmatch( p->pattern, file, 4 ) == 0 )
    {
      break;
    }
    else
    {
      //p = p->next;
    }
  }
  return 1;
}
_Bool file_ignored( char *name )
{
  return ( ( ignore_mode != IGNORE_DEFAULT || ( patterns_match( hide_patterns, name ) & 255 ) == 0 ) && ( patterns_match( ignore_patterns, name ) & 255 ) == 0 ? 0 : 1 );
}
uintmax_t unsigned_file_size( off_t size )
{
  return size;
}
void clear_files( void )
{
  size_t i = 0;
  for ( ; i < cwd_n_used; i++ )
  {
    struct fileinfo *f = &sorted_file[ i ][0]/*error:'v'*/;
    free( f->name );
    free( f->linkname );
    if ( f->scontext != UNKNOWN_SECURITY_CONTEXT[0] )
      freecon( f->scontext );
    //i++;
  }
  cwd_n_used = 0;
  any_has_acl = 0;
  inode_number_width = 0;
  block_size_width = 0;
  nlink_width = 0;
  owner_width = 0;
  group_width = 0;
  author_width = 0;
  scontext_width = 0;
  major_device_number_width = 0;
  minor_device_number_width = 0;
  file_size_width = 0;
  return;
}
uintmax_t gobble_file( char *name, enum filetype  type, ino_t inode, _Bool command_line_arg, char *dirname )
{
  // static char __PRETTY_FUNCTION__[12] = { 'g', 'o', 'b', 'b', 'l', 'e', '_', 'f', 'i', 'l', 'e',  };
  uintmax_t blocks = 0;
  struct fileinfo *f;
  if ( command_line_arg != 0 && inode != 0 )
  {
    __assert_fail( "! command_line_arg || inode == NOT_AN_INODE_NUMBER", "ls.c", 2551, __PRETTY_FUNCTION__ );
  }
  if ( cwd_n_used == cwd_n_alloc )
  {
    cwd_file = xnrealloc( (void*)cwd_file, cwd_n_alloc, 240 );
    cwd_n_alloc <<= 1;
  }
  f = &cwd_file[ cwd_n_used ];
  memset( f, 0, 120 );
  f->stat.st_ino = inode;
  f->filetype = type;
  if ( command_line_arg != 0 || ( format_needs_stat & 255 ) != 0 || ( type == directory && ( print_with_color & 255 ) != 0 ) || ( ( ( print_inode & 255 ) != 0 || ( format_needs_type & 255 ) != 0 ) && ( type == symbolic_link || type == unknown ) && ( dereference == DEREF_ALWAYS || ( ( ( command_line_arg ^ 1 ) & 255 ) == 0 && dereference != DEREF_NEVER ) || ( color_symlink_as_referent & 255 ) != 0 || ( check_symlink_color & 255 ) != 0 ) ) || ( ( ( print_inode ^ 1 ) & 255 ) == 0 && inode == 0 ) || ( ( ( format_needs_type ^ 1 ) & 255 ) == 0 && ( type == unknown || command_line_arg != 0 || ( type == normal && ( indicator_style == classify || ( ( ( print_with_color ^ 1 ) & 255 ) == 0 && ( is_colored( C_EXEC ) & 255 ) != 0 ) ) ) ) ) )
  {
    char *absolute_name;
    _Bool do_deref;
    int err;
    if ( name[0] == '/' || ( dirname[0] & 255 ) == 0 )
      absolute_name = name;
    else
    {
      *(int*)(ebp_904 - ( ( ( strlen( name ) + strlen( dirname ) + 32 ) >> 4 ) << 4 )) = absolute_name = ( ( ( ebp_904 - ( ( ( strlen( name ) + strlen( dirname ) + 32 ) >> 4 ) << 4 ) ) + 32 + 15 ) >> 4 ) << 4;
      attach( absolute_name );
    }
    switch ( dereference )
    {
    case DEREF_ALWAYS:
      err = stat64( absolute_name, &f->stat.st_dev );
      do_deref = 1;
      if ( err != 0 )
      {
        file_failure( command_line_arg, gettext( "cannot access %s" ), absolute_name );
        if ( command_line_arg != 0 )
        {
          return (long long)0;
        }
        f->name = xstrdup( name );
        cwd_n_used++;
        return (long long)0;
      }
      else
      {
        f->stat_ok = 1;
        if ( format == long_format || ( print_scontext & 255 ) != 0 )
        {
          _Bool have_acl = 0;
          int attr_len = do_deref != 0 ? getfilecon( absolute_name, &f->scontext ) : lgetfilecon( absolute_name, &f->scontext );
          err = attr_len >> 31;
          if ( err == 0 )
          {
            have_acl = strcmp( "unlabeled", f->scontext ) != 0;
          }
          else
          {
            f->scontext = UNKNOWN_SECURITY_CONTEXT;
            if ( *(int*)(__errno_location( )) == 95 || *(int*)(__errno_location( )) == 61 )
              err = 0;
          }
          if ( err == 0 && ( ( have_acl ^ 1 ) & 255 ) != 0 && format == long_format )
          {
            int n = file_has_acl( absolute_name, &f->stat );
            err = n >> 31;
            have_acl = ( n < 1 ) ^ 1;
          }
          f->have_acl = have_acl;
          any_has_acl = ( have_acl | any_has_acl ) != 0;
          if ( err != 0 )
          {
            error( 0, *(int*)(__errno_location( )), "%s", quotearg_colon( absolute_name ) );
          }
        }
        if ( ( f->stat.st_mode & 61440 ) == 40960 && ( format == long_format || ( check_symlink_color & 255 ) != 0 ) )
        {
          char *linkname;
          struct stat linkstats;
          get_link_name( absolute_name, f, command_line_arg );
          linkname = make_link_name( absolute_name, f->linkname );
          if ( linkname != 0 && ( indicator_style > 1 || ( check_symlink_color & 255 ) != 0 ) && stat64( linkname, &linkstats.st_dev ) == 0 )
          {
            f->linkok = 1;
            if ( ( ( command_line_arg ^ 1 ) & 255 ) != 0 || format == long_format || ( linkstats.st_mode & 61440 ) != 16384 )
              f->linkmode = linkstats.st_mode;
          }
          free( linkname );
        }
        if ( ( f->stat.st_mode & 61440 ) == 40960 && ( ( check_symlink_color ^ 1 ) & 255 ) != 0 )
          f->linkok = 1;
        if ( ( f->stat.st_mode & 61440 ) == 40960 )
          f->filetype = symbolic_link;
        else
        if ( ( f->stat.st_mode & 61440 ) == 16384 )
        {
          if ( ( ( immediate_dirs ^ 1 ) & command_line_arg ) != 0 )
            f->filetype = arg_directory;
          else
            f->filetype = directory;
        }
        else
          f->filetype = normal;
        blocks = f->stat.st_blocks;
        if ( format == long_format || ( print_block_size & 255 ) != 0 )
        {
          char buf[652];
          int len = gnu_mbswidth( human_readable( blocks, buf, human_output_opts, (long long)512, output_block_size ), 0 );
          if ( block_size_width < len )
            block_size_width = len;
        }
        if ( format == long_format )
        {
          if ( ( print_owner & 255 ) != 0 )
          {
            int len = format_user_width( f->stat.st_uid );
            if ( owner_width < len )
              owner_width = len;
          }
          if ( ( print_group & 255 ) != 0 )
          {
            int len = format_group_width( f->stat.st_gid );
            if ( group_width < len )
              group_width = len;
          }
          if ( ( print_author & 255 ) != 0 )
          {
            int len = format_user_width( f->stat.st_uid );
            if ( author_width < len )
              author_width = len;
          }
        }
        if ( ( print_scontext & 255 ) != 0 )
        {
          int len = strlen( f->scontext );
          if ( scontext_width < len )
            scontext_width = len;
        }
        if ( format == long_format )
        {
          char b[21];
          int b_len = strlen( umaxtostr( (long long)( f->stat.st_nlink ), b ) );
          if ( nlink_width < b_len )
            nlink_width = b_len;
          if ( ( f->stat.st_mode & 61440 ) == 8192 || ( f->stat.st_mode & 61440 ) == 24576 )
          {
            char buf[21];
            int len = strlen( umaxtostr( (long long)( gnu_dev_major( (int)( &(void*)(f->stat.st_rdev & 0xFFFFFFFF) ) ) ), buf ) );
            if ( major_device_number_width < len )
              major_device_number_width = len;
            len = strlen( umaxtostr( (long long)( gnu_dev_minor( (int)( &(void*)(f->stat.st_rdev & 0xFFFFFFFF) ) ) ), buf ) );
            if ( minor_device_number_width < len )
              minor_device_number_width = len;
            len = minor_device_number_width + major_device_number_width + 2;
            if ( file_size_width < len )
              file_size_width = len;
          }
          else
          {
            char buf[652];
            uintmax_t size = unsigned_file_size( f->stat.st_size );
            int len = gnu_mbswidth( human_readable( size, buf, human_output_opts, (long long)1, file_output_block_size ), 0 );
            if ( file_size_width < len )
              file_size_width = len;
          }
        }
      }
      break;
    default:
      if ( command_line_arg != 0 )
      {
        _Bool need_lstat;
        err = stat64( absolute_name, &f->stat.st_dev );
        do_deref = 1;
        if ( dereference != DEREF_COMMAND_LINE_ARGUMENTS )
        {
          need_lstat = err < 0 ? *(int*)(__errno_location( )) == 2 : ( f->stat.st_mode & 61440 ) != 16384;
          if ( ( ( need_lstat ^ 1 ) & 255 ) == 0 )
          {
            err = lstat64( absolute_name, &f->stat.st_dev );
            do_deref = 0;
          }
        }
      }
      break;
    }
  }
  if ( ( print_inode & 255 ) != 0 )
  {
    char buf[21];
    int len = strlen( umaxtostr( f->stat.st_ino, buf ) );
    if ( inode_number_width < len )
      inode_number_width = len;
  }
  f->name = xstrdup( name );
  cwd_n_used++;
  return blocks;
}
_Bool is_directory( struct fileinfo *f )
{
  return ( f->filetype == directory || f->filetype == arg_directory ? 1 : 0 );
}
void get_link_name( char *filename, struct fileinfo *f, _Bool command_line_arg )
{
  int edx;
  f->linkname = areadlink_with_size( filename, (int)( (size_t)(f->stat.st_size & 0xFFFFFFFF) ) );
  if ( f->linkname == 0 )
  {
    file_failure( command_line_arg, gettext( "cannot read symbolic link %s" ), filename );
  }
  return;
}
char *make_link_name( char *name, char *linkname )
{
  char *linkbuf;
  size_t bufsiz;
  if ( linkname == 0 )
  {
    return 0;
  }
  if ( linkname[0] == '/' )
  {
    return xstrdup( linkname );
  }
  linkbuf = strrchr( name, 47 );
  if ( linkbuf == 0 )
  {
    return xstrdup( linkname );
  }
  bufsiz = ( linkbuf - name ) + 1;
  linkbuf = xmalloc( strlen( linkname ) + bufsiz + 1 );
  strncpy( linkbuf, name, bufsiz );
  strcpy( &linkbuf[ bufsiz ], linkname );
  return linkbuf;
}
_Bool basename_is_dot_or_dotdot( char *name )
{
  char *base = last_component( name );
  return dot_or_dotdot( base );
}
void extract_dirs_from_files( char *dirname, _Bool command_line_arg )
{
  size_t i;
  size_t j;
  _Bool ignore_dot_and_dot_dot = dirname != 0;
  if ( dirname != 0 && active_dir_set != 0 )
    queue_directory( 0, dirname, 0 );
  i = cwd_n_used;
  while ( i-- )
  {
    struct fileinfo *f = &sorted_file[ i ][0]/*error:'v'*/;
    if ( ( is_directory( f ) & 255 ) == 0 || ( ( ( ignore_dot_and_dot_dot ^ 1 ) & 255 ) == 0 && ( ( basename_is_dot_or_dotdot( f->name ) ^ 1 ) & 255 ) == 0 ) )
      continue;
    else
    {
      if ( dirname == 0 || f->name[0] == '/' )
      {
        queue_directory( f->name, f->linkname, command_line_arg );
      }
    {
      char *name = file_name_concat( dirname, f->name, 0 );
      queue_directory( name, f->linkname, command_line_arg );
      free( name );
      if ( f->filetype == arg_directory )
      {
        free( f->name );
      }
    }
    }
  }
}
int xstrcoll( char *a, char *b )
{
  int diff;
  *(int*)(__errno_location( ebx )) = 0;
  diff = strcoll( a, b );
  if ( *(int*)(__errno_location( )) != 0 )
  {
    error( 0, *(int*)(__errno_location( )), gettext( "cannot compare file names %s and %s" ), quote_n( 0, a ), quote_n( 1, b ) );
    set_exit_status( 0 );
    longjmp( failed_strcoll[0].__jmpbuf, 1 );
  }
  return diff;
}
int cmp_ctime( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) )
{
  int diff;
  get_stat_ctime( ebp_20 );
  diff = timespec_cmp( get_stat_ctime( ebp_12 ), get_stat_ctime( ebp_20 ) );
  return diff == 0 ? cmp( a->name, b->name ) : diff;
}
int cmp_mtime( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) )
{
  int diff;
  get_stat_mtime( ebp_20 );
  diff = timespec_cmp( get_stat_mtime( ebp_12 ), get_stat_mtime( ebp_20 ) );
  return diff == 0 ? cmp( a->name, b->name ) : diff;
}
int cmp_atime( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) )
{
  int diff;
  get_stat_atime( ebp_20 );
  diff = timespec_cmp( get_stat_atime( ebp_12 ), get_stat_atime( ebp_20 ) );
  return diff == 0 ? cmp( a->name, b->name ) : diff;
}
int cmp_size( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) )
{
  int diff;
  if ( (int)(a->stat.st_size << 32) <= (int)(b->stat.st_size << 32) && ( (int)(a->stat.st_size << 32) < (int)(b->stat.st_size << 32) || (unsigned int)(a->stat.st_size & 0xFFFFFFFF) <= (unsigned int)(b->stat.st_size & 0xFFFFFFFF) ) )
  {
    if ( (int)(b->stat.st_size << 32) <= (int)(a->stat.st_size << 32) && ( (int)(b->stat.st_size << 32) < (int)(a->stat.st_size << 32) || (unsigned int)(b->stat.st_size & 0xFFFFFFFF) <= (unsigned int)(a->stat.st_size & 0xFFFFFFFF) ) )
    {
    }
  }
  else
  {
  }
  diff = 1;
  return diff == 0 ? cmp( a->name, b->name ) : diff;
}
int cmp_name( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) )
{
  return cmp( a->name, b->name );
}
int cmp_extension( struct fileinfo *a, struct fileinfo *b, int (*cmp)( char *, char * ) )
{
  char *base1 = strrchr( a->name, 46 );
  char *base2 = strrchr( b->name, 46 );
  int diff = cmp( base1 == 0 ? "" : base1, base2 == 0 ? "" : base2 );
  return diff == 0 ? cmp( a->name, b->name ) : diff;
}
int xstrcoll_ctime( V a, V b )
{
  return cmp_ctime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
int strcmp_ctime( V a, V b )
{
  return cmp_ctime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
int rev_xstrcoll_ctime( V a, V b )
{
  return cmp_ctime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
int rev_strcmp_ctime( V a, V b )
{
  return cmp_ctime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
int xstrcoll_df_ctime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_ctime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
}
int strcmp_df_ctime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_ctime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
}
int rev_xstrcoll_df_ctime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_ctime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
}
int rev_strcmp_df_ctime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_ctime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
}
int xstrcoll_mtime( V a, V b )
{
  return cmp_mtime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
int strcmp_mtime( V a, V b )
{
  return cmp_mtime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
int rev_xstrcoll_mtime( V a, V b )
{
  return cmp_mtime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
int rev_strcmp_mtime( V a, V b )
{
  return cmp_mtime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
int xstrcoll_df_mtime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_mtime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
}
int strcmp_df_mtime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_mtime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
}
int rev_xstrcoll_df_mtime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_mtime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
}
int rev_strcmp_df_mtime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_mtime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
}
int xstrcoll_atime( V a, V b )
{
  return cmp_atime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
int strcmp_atime( V a, V b )
{
  return cmp_atime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
int rev_xstrcoll_atime( V a, V b )
{
  return cmp_atime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
int rev_strcmp_atime( V a, V b )
{
  return cmp_atime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
int xstrcoll_df_atime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_atime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
}
int strcmp_df_atime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_atime( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
}
int rev_xstrcoll_df_atime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_atime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
}
int rev_strcmp_df_atime( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_atime( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
}
int xstrcoll_size( V a, V b )
{
  return cmp_size( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
int strcmp_size( V a, V b )
{
  return cmp_size( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
int rev_xstrcoll_size( V a, V b )
{
  return cmp_size( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
int rev_strcmp_size( V a, V b )
{
  return cmp_size( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
int xstrcoll_df_size( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_size( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
}
int strcmp_df_size( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_size( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
}
int rev_xstrcoll_df_size( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_size( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
}
int rev_strcmp_df_size( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_size( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
}
int xstrcoll_name( V a, V b )
{
  return cmp_name( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
int strcmp_name( V a, V b )
{
  return cmp_name( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
int rev_xstrcoll_name( V a, V b )
{
  return cmp_name( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
int rev_strcmp_name( V a, V b )
{
  return cmp_name( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
int xstrcoll_df_name( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_name( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
}
int strcmp_df_name( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_name( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
}
int rev_xstrcoll_df_name( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_name( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
}
int rev_strcmp_df_name( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_name( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
}
int xstrcoll_extension( V a, V b )
{
  return cmp_extension( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
int strcmp_extension( V a, V b )
{
  return cmp_extension( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
int rev_xstrcoll_extension( V a, V b )
{
  return cmp_extension( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
int rev_strcmp_extension( V a, V b )
{
  return cmp_extension( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
int xstrcoll_df_extension( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_extension( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &xstrcoll );
}
}
int strcmp_df_extension( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_extension( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/, &strcmp );
}
}
int rev_xstrcoll_df_extension( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_extension( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &xstrcoll );
}
}
int rev_strcmp_df_extension( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_extension( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/, &strcmp );
}
}
int cmp_version( struct fileinfo *a, struct fileinfo *b )
{
  return strverscmp( a->name, b->name );
}
int xstrcoll_version( V a, V b )
{
  return cmp_version( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/ );
}
int rev_xstrcoll_version( V a, V b )
{
  return cmp_version( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/ );
}
int xstrcoll_df_version( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_version( &a[0]/*error:'v'*/, &b[0]/*error:'v'*/ );
}
}
int rev_xstrcoll_df_version( V a, V b )
{
{
  _Bool a_is_dir = is_directory( &a[0]/*error:'v'*/ ), b_is_dir = is_directory( &b[0]/*error:'v'*/ );
  if ( a_is_dir != 0 && ( ( b_is_dir ^ 1 ) & 255 ) != 0 )
  {
    return -1;
  }
  if ( ( ( a_is_dir ^ 1 ) & 255 ) != 0 && b_is_dir != 0 )
  {
    return 1;
  }
  return cmp_version( &b[0]/*error:'v'*/, &a[0]/*error:'v'*/ );
}
}
void initialize_ordering_vector( void )
{
  size_t i = 0;
  for ( ; i < cwd_n_used; i++ )
  {
    sorted_file[ i ] = (void*)cwd_file[ i ].name;
    //i++;
  }
  return;
}
void sort_files( void )
{
  // static char __PRETTY_FUNCTION__[11] = { 's', 'o', 'r', 't', '_', 'f', 'i', 'l', 'e', 's',  };
  _Bool use_strcmp;
  if ( sorted_file_alloc < cwd_n_used + ( cwd_n_used >> 1 ) )
  {
    free( sorted_file );
    sorted_file = xnmalloc( cwd_n_used, 12 );
    sorted_file_alloc = cwd_n_used * 3;
  }
  initialize_ordering_vector( );
  if ( sort_type != sort_none )
  {
    if ( _setjmp( failed_strcoll[0].__jmpbuf ) == 0 )
      use_strcmp = 0;
    else
    {
      use_strcmp = 1;
      if ( sort_type == sort_version )
      {
        __assert_fail( "sort_type != sort_version", "ls.c", 3212, __PRETTY_FUNCTION__ );
      }
      initialize_ordering_vector( );
    }
    mpsort( sorted_file, cwd_n_used, sort_functions[ ( sort_type == sort_time ? time_type : 0 ) + sort_type ][ use_strcmp ][ sort_reverse ][ directories_first ] );
  }
  return;
}
void print_current_files( void )
{
  size_t i;
  switch ( format )
  {
  case one_per_line:
    i = 0;
    break;
  case many_per_line:
    print_many_per_line( );
    break;
  case horizontal:
    print_horizontal( );
    break;
  case with_commas:
    print_with_commas( );
    break;
  case long_format:
    i = 0;
    for ( ; i < cwd_n_used; i++ )
    {
      print_long_format( &sorted_file[ i ][0]/*error:'v'*/ );
      putchar_unlocked( 10 );
      dired_pos++;
      //i++;
    }
  default:
    return;
    break;
  }
  while ( i < cwd_n_used )
  {
    break;
  }
}
int long_time_expected_width( void )
{
  static int width = -1;
  if ( width < 0 )
  {
    time_t epoch = 0;
    struct tm *tm = localtime( &epoch );
    char buf[1001];
    if ( tm != 0 )
    {
      size_t len = nstrftime( buf, 1001, long_time_format[0], tm, 0, 0 );
      if ( len != 0 )
      {
        width = mbsnwidth( buf, len, 0 );
      }
    }
    if ( width < 0 )
    {
      width = 0;
    }
  }
  return width;
}
void get_current_time( void )
{
{
  struct timespec timespec;
  if ( clock_gettime( 0, &timespec.tv_sec ) == 0 )
  {
    current_time = timespec.tv_sec;
    current_time_ns = timespec.tv_nsec;
  }
  else
  {
    struct timeval timeval;
    gettimeofday( &timeval.tv_sec, 0 );
    current_time = timeval.tv_sec;
    current_time_ns = ( timeval.tv_usec * 1000 ) + 999;
  }
  return;
}
}
void format_user_or_group( char *name, unsigned long id, int width )
{
  size_t len;
  if ( name != 0 )
  {
    int width_gap = width - gnu_mbswidth( name, 0 );
    int pad = width_gap & ~( width_gap >> 31 );
    fputs_unlocked( name, *(int*)(134628384) );
    len = pad + strlen( name );
    do
    {
      putchar_unlocked( 32 );
    }
    while ( ( ( pad != 0 ) & 255 ) == 0 );
  }
  else
  {
    printf( "%*lu ", width, id );
    len = width;
  }
  dired_pos = len + dired_pos + 1;
  return;
}
void format_user( uid_t u, int width, _Bool stat_ok )
{
  format_user_or_group( stat_ok == 0 ? "?" : ( numeric_ids & 255 ) == 0 ? getuser( u ) : 0, u, width );
  return;
}
void format_group( gid_t g, int width, _Bool stat_ok )
{
  format_user_or_group( stat_ok == 0 ? "?" : ( numeric_ids & 255 ) == 0 ? getgroup( g ) : 0, g, width );
  return;
}
int format_user_or_group_width( char *name, unsigned long id )
{
  if ( name != 0 )
  {
    int len = gnu_mbswidth( name, 0 );
    return len & ~( len >> 31 );
  }
{
  char buf[11];
  sprintf( buf, "%lu", id );
  return strlen( buf );
}
}
int format_user_width( uid_t u )
{
  return format_user_or_group_width( ( numeric_ids & 255 ) == 0 ? getuser( u ) : 0, u );
}
int format_group_width( gid_t g )
{
  return format_user_or_group_width( ( numeric_ids & 255 ) == 0 ? getgroup( g ) : 0, g );
}
void print_long_format( struct fileinfo *f )
{
  char modebuf[12];
  char buf[3643];
  size_t s;
  char *p;
  time_t when;
  int when_ns;
  struct timespec when_timespec;
  struct tm *when_local;
  if ( ( f->stat_ok & 255 ) != 0 )
    filemodestring( &f->stat, modebuf );
  else
  {
    modebuf[0] = filetype_letter[ f->filetype ];
    memset( &modebuf[1], 63, 10 );
  }
  modebuf[11] = 0;
  if ( ( ( any_has_acl ^ 1 ) & 255 ) != 0 )
    modebuf[10] = 0;
  else
  if ( ( f->have_acl & 255 ) != 0 )
    modebuf[10] = '+';
  switch ( time_type )
  {
  default:
    abort( );
    break;
  case time_ctime:
    when_timespec.tv_sec = get_stat_ctime( ebp_4504 );
    when_timespec.tv_nsec = get_stat_ctime( ebp_4504 );
    break;
  case time_mtime:
    when_timespec.tv_sec = get_stat_mtime( ebp_4504 );
    when_timespec.tv_nsec = get_stat_mtime( ebp_4504 );
    break;
  case time_atime:
    when_timespec.tv_sec = get_stat_atime( ebp_4504 );
    when_timespec.tv_nsec = get_stat_atime( ebp_4504 );
    break;
  }
  when = when_timespec.tv_sec;
  when_ns = when_timespec.tv_nsec;
  p = buf;
  if ( ( print_inode & 255 ) != 0 )
  {
    char hbuf[21];
    sprintf( p, "%*s ", inode_number_width, ( (unsigned int)(f->stat.st_ino << 32) | (unsigned int)(f->stat.st_ino & 0xFFFFFFFF) ) == 0 ? "?" : umaxtostr( f->stat.st_ino, hbuf ) );
    p += strlen( p );
  }
  if ( ( print_block_size & 255 ) != 0 )
  {
    char hbuf[652];
    char *blocks = ( f->stat_ok & 255 ) == 0 ? "?" : human_readable( f->stat.st_blocks, hbuf, human_output_opts, (long long)512, output_block_size );
    int pad = block_size_width - gnu_mbswidth( blocks, 0 );
    for ( ; pad >= 1; pad-- )
    {
      p[0] = ' ';
      p++;
      //pad--;
    }
    do
    {
      p[0] = blocks[0];
      p++;
      blocks++;
    }
    while ( ( ( ( p[0] & 255 ) != 0 ) & 255 ) != 0 );
    p[ -1 ] = ' ';
  }
{
  char hbuf[21];
  sprintf( p, "%s %*s ", modebuf, nlink_width, ( f->stat_ok & 255 ) == 0 ? "?" : umaxtostr( (long long)( f->stat.st_nlink ), hbuf ) );
  p += strlen( p );
  if ( ( dired & 255 ) != 0 )
  {
    fwrite_unlocked( "  ", 1, 2, *(int*)(134628384) );
    dired_pos += 2;
  }
  if ( ( print_scontext | print_owner | print_group | print_author ) != 0 )
  {
    fputs_unlocked( buf, *(int*)(134628384) );
    dired_pos += p - buf[0];
    if ( ( print_owner & 255 ) != 0 )
      format_user( f->stat.st_uid, owner_width, f->stat_ok );
    if ( ( print_group & 255 ) != 0 )
      format_group( f->stat.st_gid, group_width, f->stat_ok );
    if ( ( print_author & 255 ) != 0 )
      format_user( f->stat.st_uid, author_width, f->stat_ok );
    if ( ( print_scontext & 255 ) != 0 )
      format_user_or_group( f->scontext, 0, scontext_width );
    p = buf;
  }
  if ( ( ( f->stat_ok ^ 1 ) & 255 ) == 0 && ( ( f->stat.st_mode & 61440 ) == 8192 || ( f->stat.st_mode & 61440 ) == 24576 ) )
  {
    char majorbuf[21];
    char minorbuf[21];
    int blanks_width = file_size_width + ( ( major_device_number_width * -1 ) - 2 - minor_device_number_width );
    sprintf( p, "%*s, %*s ", major_device_number_width + ( blanks_width & ~( blanks_width >> 31 ) ), umaxtostr( (long long)( gnu_dev_major( (int)( &(void*)(f->stat.st_rdev & 0xFFFFFFFF) ) ) ), majorbuf ), minor_device_number_width, umaxtostr( (long long)( gnu_dev_minor( (int)( &(void*)(f->stat.st_rdev & 0xFFFFFFFF) ) ) ), minorbuf ) );
    p = &p[ file_size_width + 1 ];
  }
  else
  {
    char hbuf[652];
    char *size = ( f->stat_ok & 255 ) == 0 ? "?" : human_readable( unsigned_file_size( f->stat.st_size ), unsigned_file_size( f->stat.st_size ), hbuf[0], human_output_opts, (long long)1 );
    int pad = file_size_width - gnu_mbswidth( size, 0 );
    for ( ; pad >= 1; pad-- )
    {
      p[0] = ' ';
      p++;
      //pad--;
    }
    do
    {
      p[0] = size[0];
      p++;
      size++;
    }
    while ( ( ( ( p[0] & 255 ) != 0 ) & 255 ) != 0 );
    p[ -1 ] = ' ';
  }
  when_local = localtime( &when_timespec.tv_sec );
  s = 0;
  p[0] = 1;
  if ( ( f->stat_ok & 255 ) != 0 && when_local != 0 )
  {
    time_t six_months_ago;
    _Bool recent;
    char *fmt;
    if ( current_time < when || ( when == current_time && current_time_ns < when_ns ) )
      get_current_time( );
    six_months_ago = current_time - 0xf0c2ac;
    recent = six_months_ago <= when && ( when < current_time || ( when == current_time && when_ns <= current_time_ns ) ) ? 1 : 0;
    fmt = long_time_format[ recent ];
    s = nstrftime( p, 1001, fmt, when_local, 0, when_ns );
  }
  if ( s != 0 || ( p[0] & 255 ) == 0 )
  {
    p = &p[ s ];
    p[0] = ' ';
    p++;
    p[0] = 0;
  }
  else
  {
    char hbuf[21];
    sprintf( p, "%*s ", long_time_expected_width( ), ( f->stat_ok & 255 ) == 0 ? "?" : long_time_expected_width( ) );
    p += strlen( p );
  }
  fputs_unlocked( buf, *(int*)(134628384) );
  dired_pos += p - buf[0];
  print_name_with_quoting( f->name, ( f->linkok & color_symlink_as_referent ) == 0 ? f->stat.st_mode : f->linkmode, f->linkok, f->stat_ok, f->filetype, &dired_obstack );
  if ( f->filetype == symbolic_link )
  {
    if ( f->linkname != 0 )
    {
      fwrite_unlocked( " -&gt; ", 1, 4, *(int*)(134628384) );
      dired_pos += 4;
      print_name_with_quoting( f->linkname, f->linkmode, f->linkok - 1, f->stat_ok, f->filetype, 0 );
      if ( indicator_style != none )
      {
        print_type_indicator( 1, f->linkmode, unknown );
      }
    }
  }
  else
  if ( indicator_style != none )
  {
    print_type_indicator( f->stat_ok, f->stat.st_mode, f->filetype );
  }
  return;
}
}
size_t quote_name( FILE *out, char *name, struct quoting_options *options, size_t *width )
{
  char smallbuf[8192];
  size_t len = quotearg_buffer( smallbuf, 8192, name, -1, &options );
  char *buf;
  size_t displayed_width;
  if ( len <= 8191 )
    buf = smallbuf;
  else
  {
    *(int*)(ebp_8296 - ( ( ( len + 31 ) >> 4 ) << 4 )) = buf = ( ( ( ebp_8296 - ( ( ( len + 31 ) >> 4 ) << 4 ) ) + 20 + 15 ) >> 4 ) << 4;
    quotearg_buffer( buf );
  }
  if ( ( qmark_funny_chars & 255 ) != 0 )
  {
    if ( __ctype_get_mb_cur_max( ) > 1 )
    {
      char *p = buf;
      char *plimit = &buf[ len ];
      char *q = buf;
      displayed_width = 0;
      do
      {
        if ( p < plimit )
        {
          switch ( p[0] )
          {
            if ( p[0] - 37 <= 26 )
            {
            }
            else
            {
              mbstate_t mbstate;
              mbstate.__count = 0;
              mbstate.__value.__wch/*union*/ = 0;
              break;
            }
            break;
            if ( p[0] - 97 <= 29 )
            {
              q[0] = p[0];
              q++;
              p++;
              displayed_width++;
            }
            break;
          default:
            break;
          }
        }
        else
          len = q - buf;
      }
      while ( mbsinit( &mbstate.__count ) != 0 );
    {
      wchar_t wc;
      size_t bytes = mbrtowc( &wc, p, plimit - p, &mbstate.__count );
      int w;
      if ( bytes == -1 )
      {
        p++;
        q[0] = '?';
        q++;
        displayed_width++;
      }
      else
      {
        if ( bytes == -2 )
        {
          p = plimit;
          q[0] = '?';
          q++;
          displayed_width++;
        }
        else
        {
          if ( bytes == 0 )
            bytes = 1;
          w = wcwidth( &wc );
          if ( w >= 0 )
          {
            for ( ; bytes != 0; bytes-- )
            {
              q[0] = p[0];
              q++;
              p++;
              //bytes--;
            }
            displayed_width += w;
          }
          else
          {
            p = &p[ bytes ];
            q[0] = '?';
            q++;
            displayed_width++;
          }
          if ( mbsinit( &mbstate.__count ) != 0 )
            continue;
          else
          {
            wchar_t wc;
            size_t bytes = mbrtowc( &wc, p, plimit - p, &mbstate.__count );
            int w;
          }
        }
      }
    }
    }
    else
    {
      char *p = buf;
      char *plimit = &buf[ len ];
      for ( ; p < plimit; p++ )
      {
        if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( to_uchar( p[0] ) * 2 )) & 16384 ) == 0 )
          p[0] = '?';
        //p++;
      }
      displayed_width = len;
    }
  }
  else
  if ( width != 0 )
  {
    if ( __ctype_get_mb_cur_max( ) > 1 )
    {
      displayed_width = mbsnwidth( buf, len, 0 );
    }
    else
    {
      char *p = buf;
      char *plimit = &buf[ len ];
      displayed_width = 0;
      for ( ; p < plimit; p++ )
      {
        if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( to_uchar( p[0] ) * 2 )) & 16384 ) != 0 )
          displayed_width++;
        //p++;
      }
    }
  }
  if ( out != 0 )
    fwrite_unlocked( buf, 1, len, out );
  if ( width != 0 )
  {
    width[0] = displayed_width;
  }
  return len;
}
void print_name_with_quoting( char *p, mode_t mode, int linkok, _Bool stat_ok, enum filetype  type, struct obstack *stack )
{
  if ( ( print_with_color & 255 ) != 0 )
    print_color_indicator( p, mode, linkok, stat_ok, type );
  if ( stack != 0 && ( dired & 255 ) != 0 )
  {
    struct obstack *__o = stack;
    int __len = 4;
    if ( __o->chunk_limit < __o->next_free[ __len ] )
      _obstack_newchunk( __o, &__len );
    memcpy( __o->next_free, &dired_pos, __len );
    *(int*)(ebp_16 + 12) = __o->next_free[ __len ];
  }
  dired_pos += quote_name( *(int*)(134628384), p, &filename_quoting_options, 0 );
  if ( stack != 0 && ( dired & 255 ) != 0 )
  {
    struct obstack *__o = stack;
    int __len = 4;
    if ( __o->chunk_limit < __o->next_free[ __len ] )
      _obstack_newchunk( __o, &__len );
    memcpy( __o->next_free, &dired_pos, __len );
    *(int*)(ebp_8 + 12) = __o->next_free[ __len ];
  }
  if ( ( print_with_color & 255 ) != 0 )
  {
    process_signals( );
    prep_non_filename_text( );
  }
  return;
}
void prep_non_filename_text( void )
{
  if ( color_indicator[2].string != 0 )
    put_indicator( &color_indicator[2] );
  else
    put_indicator( color_indicator );
  put_indicator( &color_indicator[3] );
  put_indicator( &color_indicator[1] );
  return;
}
void print_file_name_and_frills( struct fileinfo *f )
{
  char buf[652];
  if ( ( print_inode & 255 ) != 0 )
  {
    printf( "%*s ", format == with_commas ? 0 : inode_number_width, umaxtostr( f->stat.st_ino, buf ) );
  }
  if ( ( print_block_size & 255 ) != 0 )
  {
    printf( "%*s ", format == with_commas ? 0 : block_size_width, human_readable( f->stat.st_blocks, buf, human_output_opts, (long long)512, output_block_size ) );
  }
  if ( ( print_scontext & 255 ) != 0 )
  {
    printf( "%*s ", format == with_commas ? 0 : scontext_width, f->scontext );
  }
  print_name_with_quoting( f->name, ( f->linkok & color_symlink_as_referent ) == 0 ? f->stat.st_mode : f->linkmode, f->linkok, f->stat_ok, f->filetype, 0 );
  if ( indicator_style != none )
  {
    print_type_indicator( f->stat_ok, f->stat.st_mode, f->filetype );
  }
  return;
}
char get_type_indicator( _Bool stat_ok, mode_t mode, enum filetype  type )
{
  char c;
  if ( ( stat_ok == 0 ? type == normal : ( mode & 61440 ) == 32768 ) != 0 )
  {
    if ( ( ( stat_ok ^ 1 ) & 255 ) == 0 && indicator_style == classify && ( mode & 73 ) != 0 )
    {
      c = '*';
    }
    else
    {
      c = 0;
    }
  }
  else
  {
    if ( stat_ok != 0 )
    {
    }
    else
    {
    }
    if ( ( ( mode & 61440 ) == 16384 ) != 0 )
    {
      c = '/';
    }
    else
    {
      if ( indicator_style == slash )
      {
        c = 0;
      }
      else
      {
        if ( ( stat_ok == 0 ? type == symbolic_link : ( mode & 61440 ) == 40960 ) != 0 )
        {
          c = '@';
        }
        else
        {
          if ( ( stat_ok == 0 ? type == fifo : ( mode & 61440 ) == 4096 ) != 0 )
          {
            c = '|';
          }
          else
          {
            if ( ( stat_ok == 0 ? type == sock : ( mode & 61440 ) == 49152 ) != 0 )
            {
              c = '=';
            }
            else
            {
              c = 0;
            }
          }
        }
      }
    }
  }
  return c;
}
void print_type_indicator( _Bool stat_ok, mode_t mode, enum filetype  type )
{
  char c = get_type_indicator( stat_ok, mode, type );
  if ( c != 0 )
  {
    putchar_unlocked( c );
    dired_pos++;
  }
  return;
}
void print_color_indicator( char *name, mode_t mode, int linkok, _Bool stat_ok, enum filetype  filetype )
{
  static enum indicator_no  filetype_indicator[10] = { 12, 7, 10, 5, 9, 4, 6, 8, 4, 5,  };
  int type;
  struct color_ext_type *ext;
  size_t len;
  if ( linkok == -1 && color_indicator[11].string != 0 )
    type = 11;
  else
  if ( ( ( stat_ok ^ 1 ) & 255 ) != 0 )
    type = filetype_indicator[ filetype ];
  else
  if ( ( mode & 61440 ) == 32768 )
  {
    type = 4;
    if ( ( mode & 2048 ) != 0 )
      type = 15;
    else
    if ( ( mode & 1024 ) != 0 )
      type = 16;
    else
    if ( ( mode & 73 ) != 0 )
      type = 13;
  }
  else
  if ( ( mode & 61440 ) == 16384 )
  {
    if ( ( mode & 512 ) != 0 && ( mode & 2 ) != 0 )
      type = 19;
    else
    if ( ( mode & 2 ) != 0 )
      type = 18;
    else
    if ( ( mode & 512 ) != 0 )
      type = 17;
    else
      type = 5;
  }
  else
  if ( ( mode & 61440 ) == 40960 )
  {
    type = linkok != 0 || color_indicator[12].string == 0 ? 6 : 12;
  }
  else
  if ( ( mode & 61440 ) == 4096 )
    type = 7;
  else
  if ( ( mode & 61440 ) == 49152 )
    type = 8;
  else
  if ( ( mode & 61440 ) == 24576 )
    type = 9;
  else
  if ( ( mode & 61440 ) == 8192 )
    type = 10;
  else
    type = 12;
  ext = 0;
  if ( type == 4 )
  {
    len = strlen( name );
    name = &name[ len ];
    ext = color_ext_list;
    for ( ; ext != 0 && ( len < ext->ext.len || strncmp( &name[ ext->ext.len * -1 ], ext->ext.string, ext->ext.len ) != 0 ); ext = ext->next )
    {
      //ext = ext->next;
    }
  }
  put_indicator( color_indicator );
  put_indicator( ext == 0 ? &color_indicator[ type ] : &ext->seq );
  put_indicator( &color_indicator[1] );
  return;
}
void put_indicator( struct bin_str *ind )
{
  size_t i;
  char *p = ind->string;
  i = ind->len;
  for ( ; i != 0; i-- )
  {
    putchar_unlocked( p[0] );
    i--;
    //p++;
  }
  return;
}
size_t length_of_file_name_and_frills( struct fileinfo *f )
{
  size_t len = 0;
  size_t name_width;
  char buf[652];
  if ( ( print_inode & 255 ) != 0 )
  {
    len += format == with_commas ? strlen( umaxtostr( f->stat.st_ino, buf ) ) + 1 : inode_number_width + 1;
  }
  if ( ( print_block_size & 255 ) != 0 )
  {
    len += format == with_commas ? strlen( human_readable( f->stat.st_blocks, buf, human_output_opts, (long long)512, output_block_size ) ) + 1 : block_size_width + 1;
  }
  if ( ( print_scontext & 255 ) != 0 )
  {
    len += format == with_commas ? strlen( f->scontext ) + 1 : scontext_width + 1;
  }
  quote_name( 0, f->name, &filename_quoting_options, &name_width );
  len += name_width;
  if ( indicator_style != none )
  {
    char c = get_type_indicator( f->stat_ok, f->stat.st_mode, f->filetype );
    len += c != 0;
  }
  return len;
}
void print_many_per_line( void )
{
  size_t row;
  size_t cols = calculate_columns( 1 );
  struct column_info *line_fmt = &column_info[ cols ].valid_len/*error:'b'*/;
  size_t rows = ( (long long)( cwd_n_used ) / cols ) + ( ( (long long)( cwd_n_used ) % cols ) != 0 );
  row = 0;
  for ( ; row < rows; row++ )
  {
    size_t col = 0;
    size_t filesno = row;
    size_t pos = 0;
  {
    while ( 1 )
    {
      struct fileinfo *f = &sorted_file[ filesno ][0]/*error:'v'*/;
      size_t name_length;
      size_t max_name_length;
      name_length = length_of_file_name_and_frills( f );
      max_name_length = line_fmt->col_arr[ col ];
      col++;
      print_file_name_and_frills( f );
      filesno += rows;
      if ( filesno < cwd_n_used )
      {
        indent( pos + name_length, pos + max_name_length );
        pos += max_name_length;
      }
      else
      {
        putchar_unlocked( 10 );
        row++;
        break;
      }
    }
  }
  }
  return;
}
void print_horizontal( void )
{
  int eax;
  size_t filesno;
  size_t pos = 0;
  size_t cols = calculate_columns( 0 );
  struct column_info *line_fmt = &column_info[ cols ].valid_len/*error:'b'*/;
  struct fileinfo *f = &sorted_file[0][0]/*error:'v'*/;
  size_t name_length = length_of_file_name_and_frills( f );
  size_t max_name_length = line_fmt->col_arr[0];
  print_file_name_and_frills( f );
  filesno = 1;
  for ( ; filesno < cwd_n_used; filesno++ )
  {
    size_t col = (long long)( filesno ) % cols;
    if ( col == 0 )
    {
      putchar_unlocked( 10 );
      pos = 0;
    }
    else
    {
      indent( pos + name_length, pos + max_name_length );
      pos += max_name_length;
    }
    f = &sorted_file[ filesno ][0]/*error:'v'*/;
    print_file_name_and_frills( f );
    name_length = length_of_file_name_and_frills( f );
    max_name_length = line_fmt->col_arr[ col ];
    //filesno++;
  }
  putchar_unlocked( 10 );
  return;
}
void print_with_commas( void )
{
  size_t filesno;
  size_t pos = 0;
  filesno = 0;
  for ( ; filesno < cwd_n_used; filesno++ )
  {
    struct fileinfo *f = &sorted_file[ filesno ][0]/*error:'v'*/;
    size_t len = length_of_file_name_and_frills( f );
    if ( filesno != 0 )
    {
      char separator;
      if ( pos + len + 2 < line_length )
      {
        pos += 2;
        separator = ' ';
      }
      else
      {
        pos = 0;
        separator = 10;
      }
      putchar_unlocked( 44 );
      putchar_unlocked( separator );
    }
    print_file_name_and_frills( f );
    pos += len;
    //filesno++;
  }
  putchar_unlocked( 10 );
  return;
}
void indent( size_t from, size_t to )
{
  int edx;
  while ( from < to )
  {
    if ( tabsize != 0 && (long long)( from + 1 ) / tabsize < (long long)( to ) / tabsize )
    {
      putchar_unlocked( 9 );
      from += tabsize - ( (long long)( from ) % tabsize );
    }
    else
    {
      putchar_unlocked( 32 );
      from++;
    }
  }
  return;
}
void attach( char *dest, char *dirname, char *name )
{
  char *dirnamep = dirname;
  if ( dirname[0] == '.' )
  {
    if ( ( dirname[1] & 255 ) != 0 )
    {
      while ( ( dirnamep[0] & 255 ) != 0 )
      {
        dest[0] = dirnamep[0];
        dest++;
        dirnamep++;
      }
      if ( dirname < dirnamep && dirnamep[ -1 ] != '/' )
      {
        dest[0] = '/';
        dest++;
      }
    }
  }
  while ( ( name[0] & 255 ) != 0 )
  {
    dest[0] = name[0];
    dest++;
    name++;
  }
  dest[0] = 0;
  return;
}
void init_column_info( void )
{
  int edx;
  static size_t column_info_alloc;
  size_t i;
  size_t max_cols = cwd_n_used <= max_idx ? cwd_n_used : max_idx;
  if ( column_info_alloc < max_cols )
  {
    size_t new_column_info_alloc;
    size_t *p;
    if ( max_cols < ( max_idx >> 1 ) )
    {
      column_info = xnrealloc( (void*)column_info, max_cols, 24 );
      new_column_info_alloc = max_cols * 2;
    }
    else
    {
      column_info = xnrealloc( (void*)column_info, max_idx, 12 );
      new_column_info_alloc = max_idx;
    }
  {
    size_t column_info_growth = new_column_info_alloc - column_info_alloc;
    size_t s = new_column_info_alloc + column_info_alloc + 1;
    size_t t = s * column_info_growth;
    if ( s < new_column_info_alloc || s != (long long)( t ) / column_info_growth )
      xalloc_die( );
    p = xnmalloc( t >> 1, 4 );
    i = column_info_alloc;
    for ( ; i < new_column_info_alloc; i++ )
    {
      column_info[ i ].col_arr = p;
      p = &p[ i + 1 ];
      //i++;
    }
    column_info_alloc = new_column_info_alloc;
  }
  }
  i = 0;
  for ( ; i < max_cols; i++ )
  {
    size_t j;
    column_info[ i ].valid_len = 1;
    column_info[ i ].line_len = i + 1 + 2 + ( i * 2 );
    j = 0;
    for ( ; j <= i; j++ )
    {
      column_info[ i ].col_arr[ j ] = 3;
      //j++;
    }
    //i++;
  }
  return;
}
size_t calculate_columns( _Bool by_columns )
{
  int eax;
  int edx;
  size_t filesno;
  size_t cols;
  size_t max_cols = cwd_n_used <= max_idx ? cwd_n_used : max_idx;
  init_column_info( );
  filesno = 0;
  for ( ; filesno < cwd_n_used; filesno++ )
  {
    struct fileinfo *f = &sorted_file[ filesno ][0]/*error:'v'*/;
    size_t name_length = length_of_file_name_and_frills( f );
    size_t i = 0;
    for ( ; i < max_cols; i++ )
    {
      if ( ( column_info[ i ].valid_len & 255 ) != 0 )
      {
        size_t idx = by_columns == 0 ? (long long)( filesno ) % ( i + 1 ) : (long long)( filesno ) / ( (long long)( i + cwd_n_used ) / ( i + 1 ) );
        size_t real_length = ( idx == i ? 0 : 2 ) + name_length;
        if ( column_info[ i ].col_arr[ idx ] < real_length )
        {
          column_info[ i ].line_len += real_length - column_info[ i ].col_arr[ idx ];
          column_info[ i ].col_arr[ idx ] = real_length;
          column_info[ i ].valid_len = column_info[ i ].line_len < line_length;
        }
      }
      //i++;
    }
    //filesno++;
  }
  cols = max_cols;
  for ( ; cols > 1 && ( column_info[ cols ].valid_len & -12 ) == 255; cols-- )
  {
    //cols--;
  }
  return cols;
}
void usage( int status )
{
  if ( status != 0 )
  {
    fprintf( *(int*)(134628356), gettext( "Try `%s --help' for more information.\n" ), program_name );
  }
  else
  {
    printf( gettext( "Usage: %s [OPTION]... [FILE]...\n" ), program_name );
    fputs_unlocked( gettext( "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort.\n\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "Mandatory arguments to long options are mandatory for short options too.\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print octal escapes for nongraphic characters\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "      --block-size=SIZE      use SIZE-byte blocks\n  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information)\n                               with -l: show ctime and sort by name\n                               otherwise: sort by ctime\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -C                         list entries by columns\n      --color[=WHEN]         control whether color is used to distinguish file\n                               types.  WHEN may be `never', `always', or `auto'\n  -d, --directory            list directory entries instead of contents,\n                               and do not dereference symbolic links\n  -D, --dired                generate output designed for Emacs' dired mode\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=&gt;@|) to entries\n      --file-type            likewise, except do not append `*'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -g                         like -l, but do not list owner\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "      --group-directories-first\n                             group directories before files\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -G, --no-group             in a long listing, don't print group names\n  -h, --human-readable       with -l, print sizes in human readable format\n                               (e.g., 1K 234M 2G)\n      --si                   likewise, but use powers of 1000 not 1024\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n  -k                         like --block-size=1K\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print raw entry names (don't treat e.g. control\n                               characters specially)\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -q, --hide-control-chars   print ? instead of non graphic characters\n      --show-control-chars   show non graphic characters as-is (default\n                             unless program is `ls' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always, c, escape\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the size of each file, in blocks\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -S                         sort by file size\n      --sort=WORD            sort by WORD instead of name: none -U,\n                             extension -X, size -S, time -t, version -v\n      --time=WORD            with -l, show time as WORD instead of modification\n                             time: atime -u, access -u, use -u, ctime -c,\n                             or status -c; use specified time as sort key\n                             if --sort=time\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "      --time-style=STYLE     with -l, show times using style STYLE:\n                             full-iso, long-iso, iso, locale, +FORMAT.\n                             FORMAT is interpreted like `date'; if FORMAT is\n                             FORMAT1&lt;newline&gt;FORMAT2, FORMAT1 applies to\n                             non-recent files and FORMAT2 to recent files;\n                             if STYLE is prefixed with `posix-', STYLE\n                             takes effect only outside the POSIX locale\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -t                         sort by modification time\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -u                         with -lt: sort by, and show, access time\n                               with -l: show access time and sort by name\n                               otherwise: sort by access time\n  -U                         do not sort; list entries in directory order\n  -v                         sort by version\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "  -w, --width=COLS           assume screen width instead of current value\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any SELinux security context of each file\n  -1                         list one file per line\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "      --help     display this help and exit\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "      --version  output version information and exit\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "\nSIZE may be (or may be an integer optionally followed by) one of following:\nkB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "\nBy default, color is not used to distinguish types of files.  That is\nequivalent to using --color=none.  Using the --color option without the\noptional WHEN argument is equivalent to using --color=always.  With\n--color=auto, color codes are output only if standard output is connected\nto a terminal (tty).  The environment variable LS_COLORS can influence the\ncolors, and can be set easily by the dircolors command.\n" ), *(int*)(134628384) );
    fputs_unlocked( gettext( "\nExit status is 0 if OK, 1 if minor problems, 2 if serious trouble.\n" ), *(int*)(134628384) );
  }
  emit_bug_reporting_address( );
  exit( &status );
}
