#include "opttypes.c.h"
int commandline;
struct option_type_info option_types[10] = { { "Boolean", &bool_cmd, &num_rd, &num_wr, 0, &num_set, &num_eq, "[0|1]" }
, { "Integer", &gen_cmd, &num_rd, &num_wr, 0, &num_set, &num_eq, "&lt;num&gt;" }
, { "Longint", &gen_cmd, &num_rd, &long_wr, 0, &long_set, &long_eq, "&lt;num&gt;" }
, { "String", &gen_cmd, &str_rd, &str_wr, &str_dup, &str_set, &str_eq, "&lt;str&gt;" }
, { "Codepage", &gen_cmd, &str_rd, &cp_wr, 0, &cp_set, &cp_eq, "&lt;codepage&gt;" }
, { "Language", &gen_cmd, &str_rd, &lang_wr, 0, &lang_set, &lang_eq, "&lt;language&gt;" }
, { "Color", &gen_cmd, &str_rd, &color_wr, 0, &color_set, &color_eq, "&lt;color|#rrggbb&gt;" }
, { "Special", &exec_cmd, 0, 0, 0, 0, 0, "" }
, { "Alias", &redir_cmd, &redir_rd, &redir_wr, 0, &redir_set, &redir_eq, "" }
, { "Folder", 0, 0, 0, &tree_dup, 0, 0, "" }
 };
unsigned char *gen_cmd( struct option_elinks *o, unsigned char ***argv, int *argc )
{
  int edx;
  unsigned char *str;
  int dummy_line = 0;
  if ( argc[0] == 0 )
  {
    gettext( "Parameter expected" );
    return 0;
  }
  commandline = 1;
  txt[ 152 + ( o->type << 3 ) ]( o[0].next, argv[0], dummy_line, ebp_12 );
  commandline = 0;
  if ( o->type << 5 )
  {
    argv[0] = argv[1];
    argc[0] = argc[ 0 ];
    txt[ 152 + ( o->type << 3 ) ]( o[0].next, str[0], str[0] );
    *ebp_44 = str[0];
    if ( o->type << 5 )
    {
      mem_free( &str[0] );
      return 0;
    }
    mem_free( &str[0] );
  }
  gettext( "Read error" );
  return 0;
}
unsigned char *bool_cmd( struct option_elinks *o, unsigned char ***argv, int *argc )
{
  int ecx;
  o->value.tree = 1;
  if ( argc[0] && argv[0][0] && argv[0][0][1] == 0 )
  {
    if ( argv[0][0] != '0' )
    {
      if ( argv[0][0] != '1' )
      {
      }
      else
        o->value.tree = 1;
    }
    else
      o->value.tree = 0;
    argv[0]++;
    argc[0] = argc[ 0 ];
  }
  return 0;
}
unsigned char *exec_cmd( struct option_elinks *o, unsigned char ***argv, int *argc )
{
  ;
}
unsigned char *redir_cmd( struct option_elinks *opt, unsigned char ***argv, int *argc )
{
  struct option_elinks *real = get_opt_rec( config_options, (unsigned char*)opt->value.tree );
  unsigned char *ret;
  if ( assert_failed == 0 )
  {
    assert_failed = real[0].next == 0;
    if ( !(_Bool)( real[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/opttypes.c";
      errline = 99;
      elinks_internal( "assertion real != NULL failed: %s aliased to unknown option %s!" );
      if ( assert_failed )
        goto B3;
    }
    ret[0] = 0;
    if ( txt[ 152 + ( real->type << 3 ) ] )
    {
      edx( real[0].next, argv, argc );
      if ( ( ( opt->flags & 1 ) & 255 ) && real->type == OPT_BOOL )
      {
        real->value.tree = real->value.tree == 0;
        return &argv;
      }
      return 0;
    }
    else
    {
      return 0;
    }
  }
B3:  assert_failed = 0;
  ret[0] = 0;
  return 0;
}
unsigned char *redir_rd( struct option_elinks *opt, unsigned char **file, int *line )
{
  struct option_elinks *real = get_opt_rec( config_options, (unsigned char*)opt->value.tree );
  unsigned char *ret;
  if ( assert_failed == 0 )
  {
    assert_failed = real[0].next == 0;
    if ( !(_Bool)( real[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/opttypes.c";
      errline = 118;
      elinks_internal( "assertion real != NULL failed: %s aliased to unknown option %s!" );
      if ( assert_failed )
        goto B3;
    }
    ret[0] = 0;
    if ( txt[ 152 + ( real->type << 3 ) ] )
    {
      edx( real[0].next, file, line );
      if ( ret[0] && ( ( opt->flags & 1 ) & 255 ) && real->type == OPT_BOOL )
      {
        ret[0] = ret[0] == 0;
        return &ret[0];
      }
      return 0;
    }
    else
    {
      return 0;
    }
  }
B3:  assert_failed = 0;
  ret[0] = 0;
  return 0;
}
void redir_wr( struct option_elinks *opt, struct string *string )
{
  int eax;
  struct option_elinks *real;
  get_opt_rec( config_options, (unsigned char*)opt->value.tree );
  if ( assert_failed == 0 )
  {
    assert_failed = real[0].next == 0;
    if ( !(_Bool)( real[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/opttypes.c";
      errline = 136;
      elinks_internal( "assertion real != NULL failed: %s aliased to unknown option %s!" );
      if ( assert_failed )
        goto B3;
    }
    if ( txt[ 152 + ( real->type << 3 ) ] )
    {
      string = &string[0];
      opt = &real[0];
      ;
    }
    return;
  }
B3:  assert_failed = 0;
  return;
}
int redir_set( struct option_elinks *opt, unsigned char *str )
{
  int edx;
  struct option_elinks *real = get_opt_rec( config_options, (unsigned char*)opt->value.tree );
  int ret;
  if ( assert_failed == 0 )
  {
    assert_failed = real[0].next == 0;
    if ( !(_Bool)( real[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/opttypes.c";
      errline = 149;
      elinks_internal( "assertion real != NULL failed: %s aliased to unknown option %s!" );
      if ( assert_failed )
        goto B3;
    }
    ret = 0;
    if ( txt[ 152 + ( real->type << 3 ) ] )
    {
      long negated;
      if ( ( ( opt->flags & 1 ) & 255 ) && real->type == OPT_BOOL )
      {
        str[0] = ebp_28;
        txt[ 152 + ( real->type << 3 ) ] = txt[ 152 + ( real->type << 3 ) ];
      }
      edx( real[0].next, str[0] );
      return 0;
    }
    else
    {
      return 0;
    }
  }
B3:  assert_failed = 0;
  ret = 0;
  return 0;
}
int redir_eq( struct option_elinks *opt, unsigned char *str )
{
  int edx;
  struct option_elinks *real = get_opt_rec( config_options, (unsigned char*)opt->value.tree );
  int ret;
  if ( assert_failed == 0 )
  {
    assert_failed = real[0].next == 0;
    if ( !(_Bool)( real[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/opttypes.c";
      errline = 171;
      elinks_internal( "assertion real != NULL failed: %s aliased to unknown option %s!" );
      if ( assert_failed )
        goto B3;
    }
    ret = 0;
    if ( txt[ 152 + ( real->type << 3 ) ] )
    {
      long negated;
      if ( ( ( opt->flags & 1 ) & 255 ) && real->type == OPT_BOOL )
      {
        str[0] = ebp_28;
        txt[ 152 + ( real->type << 3 ) ] = txt[ 152 + ( real->type << 3 ) ];
      }
      edx( real[0].next, str[0] );
      return 0;
    }
    else
    {
      return 0;
    }
  }
B3:  assert_failed = 0;
  ret = 0;
  return 0;
}
void add_optstring_to_string( struct string *s, unsigned char *q, int qlen )
{
  int ecx;
  int edx;
  if ( commandline == 0 )
  {
    add_char_to_string( &s[0], 34 );
    *ebp_16 = qlen;
    *ebp_12 = q[0];
  }
  add_quoted_to_string( &s[0], &q[0], qlen );
  if ( commandline == 0 )
  {
    add_char_to_string( &s[0], 34 );
  }
  return;
}
unsigned char *num_rd( struct option_elinks *opt, unsigned char **file, int *line )
{
  int eax;
  unsigned char *end = file[0];
  long *value;
  value[0] = mem_alloc( 4 );
  if ( mem_alloc( 4 ) )
  {
    value[0] = strtolx( file[0], &end );
    if ( commandline )
      end[0] = end;
    else
      file[0] = end;
    if ( end[0] )
    {
      if ( commandline == 0 )
      {
        if ( end[0] != '#' )
          file[0] = file[0];
          mem_free( &value[0] );
      }
    }
    if ( value[0] < opt->min || opt->max < value[0] )
      continue;
  }
  return &value[0];
}
int num_set( struct option_elinks *opt, unsigned char *str )
{
  opt->value.tree = &str[0];
  return 1;
}
int num_eq( struct option_elinks *opt, unsigned char *str )
{
  int eax;
  return str ? opt->value.tree == str[0] : 0;
}
void num_wr( struct option_elinks *option_elinks, struct string *string )
{
  option_elinks = &string->source[0];
  string = &option_elinks->value.tree[0].next[0];
}
int long_set( struct option_elinks *opt, unsigned char *str )
{
  opt->value.tree = &str[0];
  return 1;
}
int long_eq( struct option_elinks *opt, unsigned char *str )
{
  int eax;
  return str ? opt->value.tree == str[0] : 0;
}
void long_wr( struct option_elinks *option_elinks, struct string *string )
{
  option_elinks = &string->source[0];
  string = &option_elinks->value.tree[0].next[0];
}
unsigned char *str_rd( struct option_elinks *opt, unsigned char **file, int *line )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *str;
  struct string str2;
  str[0] = file[0];
  if ( init_string( &str2 ) )
  {
    if ( commandline == 0 )
    {
      if ( str[0] == '\'' || str[0] == '"' )
        str[0] = str[1];
      else
      {
        done_string( &str2 );
      }
    }
    if ( str[0] )
    {
      for ( ; commandline || ( str[0] != '\'' && str[0] != '"' ); commandline = commandline )
      {
        str[0]++;
        if ( str[0] == '\\' )
        {
          str[0]++;
          if ( str[1] == 10 )
          {
            str[1] = 32;
            str[0] = str[0] + 2;
            line[0]++;
          }
          else
          if ( str[1] == '\'' || str[1] == '"' )
            str[0] = str[0] + 1;
            add_char_to_string( &str2, str[0] );
            if ( str[0] == 0 )
              commandline = commandline;
            else
            {
              //commandline = commandline;
            }
          else
          {
            str[0] = str[0] = str[0];
            if ( str[1] == '\\' )
              str[0] = str[2];
          }
        }
        if ( str[0] == 10 )
          line[0]++;
      }
      if ( ( str[0] & 255 ) == 0 )
      {
        done_string( &str2 );
        file[0] = &str[0];
      }
      file[0] = str[1] + 1;
      &opt = opt;
      if ( opt && opt->max && opt->max <= str2.length )
      {
        done_string( &str2 );
      }
      return str2.source;
    }
    if ( commandline == 0 )
    {
      done_string( &str2 );
      file[0] = &str[0];
    }
    &opt = opt;
  }
}
int str_set( struct option_elinks *opt, unsigned char *str )
{
  if ( assert_failed == 0 )
  {
    assert_failed = opt->value.tree == 0;
    if ( !(_Bool)( opt->value.tree != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/opttypes.c";
      errline = 321;
      elinks_internal( "assertion opt-&gt;value.string failed!" );
    }
  }
  safe_strncpy( (unsigned char*)opt->value.tree, str, 1024 );
  return 1;
}
int str_eq( struct option_elinks *opt, unsigned char *str )
{
  int eax;
  if ( str )
  {
  }
  return strcmp( (char*)opt->value.tree, &str[0] ) == 0;
}
void str_wr( struct option_elinks *o, struct string *s )
{
  int eax;
  int ecx;
  int edx;
  int len;
}
void str_dup( struct option_elinks *opt, struct option_elinks *template )
{
  unsigned char *new;
  if ( mem_alloc( 1024 ) )
  {
    safe_strncpy( &new[0], (unsigned char*)template->value.tree, 1024 );
  }
  opt->value.tree = &new[0];
  return;
}
int cp_set( struct option_elinks *opt, unsigned char *str )
{
  int ret = get_cp_index( str );
  if ( get_cp_index( str ) >= 0 )
  {
    opt->value.tree = &ret;
  }
  return 1;
}
int cp_eq( struct option_elinks *opt, unsigned char *str )
{
  int eax;
  if ( str )
  {
  }
  return opt->value.tree == get_cp_index( &str[0] );
}
void cp_wr( struct option_elinks *o, struct string *s )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *mime_name;
}
int lang_set( struct option_elinks *opt, unsigned char *str )
{
  opt->value.tree = name_to_language( str );
  set_language( opt->value.tree );
  return 1;
}
int lang_eq( struct option_elinks *opt, unsigned char *str )
{
  int eax;
  if ( str )
  {
  }
  return opt->value.tree == name_to_language( &str[0] );
}
void lang_wr( struct option_elinks *o, struct string *s )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *lang;
}
int color_set( struct option_elinks *opt, unsigned char *str )
{
  return decode_color( str, strlen( (char*)str ), (color_T*)opt->value.tree ) == 0;
}
int color_eq( struct option_elinks *opt, unsigned char *str )
{
  color_T color;
  if ( str && decode_color( &str[0], strlen( &str[0] ), &color ) == 0 )
  {
    return opt->value.tree == color;
  }
  return 0;
}
void color_wr( struct option_elinks *opt, struct string *str )
{
  int eax;
  int ecx;
  int edx;
  unsigned char hexcolor[8];
  unsigned char *strcolor;
  add_optstring_to_string( str, &strcolor[0], strlen( (char*)get_color_string( opt->value.tree, (unsigned char*)str ) ) );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  *ebp_8 = ebx;
  return;
}
void tree_dup( struct option_elinks *opt, struct option_elinks *template )
{
  int edx;
  struct list_head_elinks *new = init_options_tree(  );
  struct list_head_elinks *tree = template->value.tree;
  struct option_elinks *option_elinks;
  if ( init_options_tree(  ) )
  {
    opt->value = new[0].next[0];
    option_elinks = &tree->prev[0];
    if ( tree->prev != tree )
    {
      do
      {
        *ebp_40 = new[0].next;
        if ( copy_option( option_elinks ) )
        {
          *(int*)(copy_option( option_elinks )) = *(int*)(new->prev);
          *(int*)(copy_option( option_elinks ) + 4) = new->prev[0];
          *(int*)(new->prev) = copy_option( option_elinks );
          *(int*)(*(int*)(copy_option( option_elinks )) + 4) = copy_option( option_elinks );
          *(int*)(copy_option( option_elinks ) + 44) = opt;
          if ( *(int*)(*(int*)(new->prev) + 56) )
          {
            if ( *(int*)(*(int*)(new->prev) + 16) )
            {
              strcmp( "_template_", *(int*)(0) );
              if ( 1 )
              {
              }
            }
          {
            struct option_elinks *new_opt;
            if ( opt->box_item )
            {
              &new_opt->box_item = &opt->box_item->child.next[0];
              new_opt->box_item->prev = &opt->box_item->child.next[0];
              opt->box_item->child.next = (void*)new_opt->box_item;
            }
          }
          }
        }
        option_elinks = option_elinks->prev;
      }
      while ( option_elinks->prev != tree );
    }
  }
  return;
}
unsigned char *get_option_type_name( enum option_type  type )
{
  if ( assert_failed == 0 )
  {
    assert_failed = type > 9;
    if ( type > 9 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/opttypes.c";
      errline = 500;
      elinks_internal( "assertion type &gt;= 0 && type &lt; sizeof(option_types)/sizeof(struct option_type_info) failed!" );
      if ( assert_failed )
      {
      }
    }
    return option_types[ type ].name;
  }
  assert_failed = 0;
  return "";
}
#if 0
#endif
