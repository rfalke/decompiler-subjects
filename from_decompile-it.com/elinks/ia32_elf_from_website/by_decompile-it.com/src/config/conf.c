#include "conf.c.h"
static struct parse_handler parse_handlers[5] = { { "set", &parse_set }
, { "unset", &parse_unset }
, { "bind", &parse_bind }
, { "include", &parse_include }
, { 0, 0 }
 };
static int indentation = 2;
static int comments = 3;
enum parse_error  show_parse_error( struct conf_parsing_state *state, enum parse_error  err )
{
  static unsigned char error_msg[6][40] = { { 'n', 'o', ' ', 'e', 'r', 'r', 'o', 'r' }, { 'u', 'n', 'k', 'n', 'o', 'w', 'n', ' ', 'c', 'o', 'm', 'm', 'a', 'n', 'd' }, { 'p', 'a', 'r', 's', 'e', ' ', 'e', 'r', 'r', 'o', 'r' }, { 'u', 'n', 'k', 'n', 'o', 'w', 'n', ' ', 'o', 'p', 't', 'i', 'o', 'n' }, { 'b', 'a', 'd', ' ', 'v', 'a', 'l', 'u', 'e' }, { 'n', 'o', ' ', 'm', 'e', 'm', 'o', 'r', 'y', ' ', 'l', 'e', 'f', 't' } };
  if ( state->filename )
  {
    __fprintf_chk( stderr, 1, "%s:%d: %s\n", (char*)state->filename, state->pos.line, error_msg[ err ] );
  }
  err = err;
  return err;
}
void skip_white( struct conf_parsing_pos *pos )
{
  int ecx;
  int edx;
  unsigned char *start;
  start[0] = pos->look;
  if ( start[0] )
  {
    *(int*)(ebp_28) = start[0];
    eax[0] = *(int*)(__ctype_b_loc(  ));
    do
    {
      if ( start[0] != '#' )
        break;
      do
      {
      }
      while ( start[0] && __ctype_b_loc(  ) != 10 );
      start[0] = start[ 0 + 1 ];
    }
    while ( start[0] );
  }
  pos = &start[0];
  return;
}
void skip_quoted( struct conf_parsing_pos *pos )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( pos->look != '"' ) & ( pos->look != '\'' );
    if ( ( pos->look != '"' ) & ( pos->look != '\'' ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/conf.c";
      errline = 136;
      elinks_internal( "assertion isquote(*pos-&gt;look) failed!" );
      if ( assert_failed )
      {
      }
    }
    pos = pos->look + 1;
    if ( pos->look[1] )
    {
      if ( pos->look[1] != '"' && pos->look[1] != '\'' )
      {
        do
        {
          if ( *(char*)(pos->look[1] + 1) != '\\' || pos->look[1] == 0 )
          {
            if ( pos->look != 10 )
            {
              pos += 0;
              if ( pos->look[1] == 0 )
                break;
            }
          }
          else
          {
            pos = &edx;
            if ( pos->look != 10 )
              continue;
          }
          pos->line++;
          pos->look = pos->look;
        }
        while ( pos->look[1] != '\'' && pos->look[1] != '"' );
      }
      pos = pos->look[1] + 1;
    }
    return;
  }
  assert_failed = 0;
  return;
}
void skip_option_value( struct conf_parsing_pos *pos )
{
  int ecx;
  if ( pos->look != '\'' && pos->look != '"' )
  {
    for ( ; pos->look[2] - 97 >= 25 || pos->look[2] - 65 >= 25 || pos->look[2] - 48 >= 9 || pos->look[2] == '.' || pos->look[2] == '+' || pos->look[2] == '-'; *(int*)(*(char*)(edx + 1)) = pos->look[2] )
    {
      pos = pos->look + 1 + 1;
      //*(int*)(*(char*)(edx + 1)) = pos->look[2];
    }
    return;
  }
  else
  {
  }
}
enum parse_error  parse_set( struct option_elinks *opt_tree, struct conf_parsing_state *state, struct string *mirror, int is_system_conf )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *optname_copy;
  skip_white( (int)( &(struct conf_parsing_pos*)(state->pos) ) );
  if ( state->pos.look )
  {
    for ( ; eax - 97 >= 25 || eax - 65 >= 25 || eax - 48 >= 9 || eax == '_' || eax == '-' || eax == '*' || eax == '.' || eax == '+'; state = state->pos.look + 1 + 1 )
    {
      //state = state->pos.look + 1 + 1;
    }
    skip_white( &state[0].pos );
    if ( state->pos.look == '=' )
    {
      state = state->pos.look + 1;
      skip_white( &state[0].pos );
      if ( state->pos.look )
      {
        if ( eax == 0 )
        {
        {
          struct option_elinks *opt;
          unsigned char *val;
        }
        }
        else
        {
          mem_free( &optname_copy[0] );
          if ( !( state->pos.look + 1 ) || ( ( *(char*)(get_opt_rec_real( opt_tree, &optname_copy[0] ) + 16) & 1 ) & 255 ) )
          {
            show_parse_error( &state[0], ERROR_OPTION );
            skip_option_value( &state[0].pos );
          }
          if ( txt[ 152 + ( *(int*)(state->pos.look + 1 + 20) << 3 ) ] )
          {
            if ( eax == 0 )
            {
              state->pos.line = state->pos.line;
              state = &state;
            }
            else
            {
              if ( mirror == 0 )
              {
                if ( txt[ 152 + ( *(int*)(state->pos.look + 1 + 20) << 3 ) ] )
                {
                  eax( edi, ebp_28, ebp_28 );
                  if ( eax == 0 )
                    goto B42;
                }
B42:                mem_free( ebp_28 );
              }
              else
              {
                if ( is_system_conf )
                {
                  struct option_elinks *flagsite = &eax[0].source[0];
                  if ( !(_Bool)( ( flagsite[0].next >> 7 ) & 1 ) && txt[ 152 + ( *(int*)(state->pos.look + 1 + 20) << 3 ) ] )
                  {
                    edx( edi, ebp_28 );
                    if ( eax == 0 )
                      flagsite->flags = flagsite->flags;
                    else
                      flagsite->flags &= -5;
                  }
                  flagsite->flags |= OPT_MUST_SAVE;
                }
                else
                {
                  struct option_elinks *flagsite = &eax[0].source[0];
                  if ( (_Bool)( ( flagsite->flags >> 7 ) & 1 ) )
                  {
                    add_to_string( mirror, "unset " );
                    add_bytes_to_string__( ebp_32, &esi, ebp_44 );
                    state->mirrored = state->pos.look;
                    *(int*)(ebp_36 + 16) = is_system_conf;
                  }
                  else
                  if ( txt[ 152 + ( *(int*)(get_opt_rec( opt_tree, &optname_copy[0] ) + 20) << 3 ) ] )
                  {
                    add_bytes_to_string__( mirror, state->mirrored, state->pos.look - state->mirrored );
                    txt[ 152 + ( *(int*)(get_opt_rec( opt_tree, &optname_copy[0] ) + 20) << 3 ) ]( get_opt_rec( opt_tree, &optname_copy[0] ), mirror );
                    state->mirrored = state->pos.look;
                    flagsite->flags = flagsite->flags;
                  }
                  flagsite->flags &= -5;
                }
              }
              mem_free( ebp_28 );
            }
          }
          show_parse_error( &state[0], ERROR_VALUE );
          skip_option_value( &state[0].pos );
          return ERROR_NONE;
        }
      }
    }
  }
}
struct string *add_bytes_to_string__( struct string *string, unsigned char *bytes, int length )
{
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    if ( bytes[0] && string && length >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
      errline = 255;
      elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( length )
    {
      if ( ( ( string->length + 255 ) & -256 ) < ( ( string->length + length + 256 ) & -256 ) )
      {
        ebp_32 = bytes[0];
        *ebp_36 = length;
        if ( mem_realloc( (void*)string->source, length ) )
        {
          string = (struct string*)mem_realloc( (void*)string->source, length );
          memset( string[0].source + ( ( string->length + 255 ) & -256 ), 0, ( ( string->length + length + 256 ) & -256 ) - ( ( string->length + 255 ) & -256 ) );
        }
        else
        {
          string[0].source = 0;
          return &string[0];
        }
      }
      if ( string->source )
      {
        memcpy( string->length + string->source, &bytes[0], length );
        string->length += length;
        return &string[0];
      }
      string[0].source = 0;
      return &string[0];
    }
    else
    {
      return &string[0];
    }
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
enum parse_error  parse_unset( struct option_elinks *opt_tree, struct conf_parsing_state *state, struct string *mirror, int is_system_conf )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *optname_copy;
  skip_white( (int)( &(struct conf_parsing_pos*)(state->pos) ) );
  if ( state->pos.look == 0 )
  {
  }
  else
  for ( ; edx - 97 >= 25 || edx - 65 >= 25 || edx - 48 >= 9 || edx == '_' || edx == '-' || edx == '*' || edx == '.' || edx == '+'; return state->pos.look[2] )
  {
    state = state->pos.look + 1 + 1;
    //return state->pos.look[2];
  }
  if ( eax == 0 )
  {
  }
  else
  {
    struct option_elinks *opt = &eax;
    mem_free( ebp_40 );
    if ( opt[0] && ( opt->flags & 1 ) == 0 )
    {
      if ( mirror == 0 )
      {
        mark_option_as_deleted( &opt[0] );
      }
      if ( is_system_conf )
      {
        struct option_elinks *flagsite;
        opt_tree = &opt[0];
        ebp_4 = parse_unset+175;
        if ( (_Bool)( ( flagsite->flags >> 7 ) & 1 ) )
        {
          flagsite->flags = *(int*)(indirect_option(  ) + 16) & -5;
        }
        *(int*)(indirect_option(  ) + 16) |= 4;
      }
      else
      {
        struct option_elinks *flagsite = indirect_option( &opt[0] );
        if ( !(_Bool)( ( flagsite->flags >> 7 ) & 1 ) && txt[ 152 + ( opt->type << 3 ) ] )
        {
          add_to_string( mirror, "set " );
          add_bytes_to_string__( ebp_28, &esi, ebp_32 );
          add_to_string( mirror, " = " );
          txt[ 152 + ( opt->type << 3 ) ]( opt[0].next, mirror );
          state->mirrored = state->pos.look;
          flagsite->flags = flagsite->flags;
        }
        is_system_conf = flagsite->flags & -5;
      }
    }
  }
}
enum parse_error  parse_bind( struct option_elinks *opt_tree, struct conf_parsing_state *state, struct string *mirror, int is_system_conf )
{
  int eax;
  unsigned char *keymap, *keystroke, *action;
  enum parse_error  err;
  skip_white( (int)( &(struct conf_parsing_pos*)(state->pos) ) );
  if ( state->pos.look )
  {
    ;
  }
  *ebp_8 = esi;
}
enum parse_error  parse_include( struct option_elinks *opt_tree, struct conf_parsing_state *state, struct string *mirror, int is_system_conf )
{
  int eax;
  unsigned char *fname;
  struct string dumbstring;
  if ( init_string( &dumbstring ) == 0 )
  {
    show_parse_error( &state[0], ERROR_NOMEM );
  }
  skip_white( &state[0].pos );
  if ( state->pos.look == 0 )
  {
    done_string( &dumbstring );
    return state[0].pos.look[0];
    show_parse_error( &state[0], ERROR_PARSE );
  }
  ;
}
void parse_config_file( struct option_elinks *options, unsigned char *name, unsigned char *file, struct string *mirror, int is_system_conf )
{
  int eax;
  int ecx;
  int edx;
  struct conf_parsing_state state;
  int error_occurred;
  state.filename = 0;
  state.pos.line = 1;
  state.pos.look = file;
  state.mirrored = file;
  if ( mirror == 0 )
  {
    &cmdline_options = cmdline_options;
    if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) >= 1 )
      state.filename = name;
    file[0] = state.pos.look;
  }
{
  enum parse_error  err;
  error_occurred = 0;
  do
  {
    if ( file[0] )
    {
      do
      {
        if ( file[0] )
        {
          skip_white( &state.pos );
          if ( mirror )
          {
            file[0] = state.pos.look;
            if ( assert_failed == 0 )
            {
              if ( state.mirrored && file[0] - state.mirrored >= 0 )
                assert_failed = 0;
              else
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                errline = 255;
                elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                if ( assert_failed )
                  file[0] = state.pos.look;
              }
              if ( file[0] - state.mirrored )
              {
                if ( 0 < ( ( mirror->length + ( state.pos.look[1] - state.mirrored ) + 256 ) & -256 ) )
                {
                  *ebp_52 = ebp_52;
                  if ( eax )
                  {
                    mirror[0].source = ebp_44;
                    memset( ebp_60 + ebp_44, 0, edi - ebp_60 );
                  }
                }
                if ( mirror[0].source )
                {
                  memcpy( mirror->length + mirror[0].source, state.mirrored, file[0] - state.mirrored );
                  mirror->length = ebp_52;
                }
              }
              file[0] = state.pos.look;
              state.mirrored = &file[0];
            }
            assert_failed = 0;
            file[0] = file[0];
            state.mirrored = &file[0];
          }
          else
            file[0] = state.pos.look;
          if ( file[0] )
          {
            if ( assert_failed == 0 )
            {
              if ( mirror && state.mirrored != file[0] )
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/conf.c";
                errline = 574;
                elinks_internal( "assertion mirror == NULL || state-&gt;mirrored == state-&gt;pos.look failed!" );
                if ( assert_failed )
                  goto B18;
              }
              else
                assert_failed = 0;
              if ( "set" )
              {
                do
                {
                  if ( eax == 0 )
                  {
                    state.pos.look = strlen( (char*)state.mirrored );
                    ;
                  }
                }
                while ( (parse_handlers[1].parse_handler) );
              }
              file[0] = state.pos.look;
              if ( show_parse_error( &state, ERROR_COMMAND ) == ERROR_NONE )
              {
                do
                {
                }
                while ( show_parse_error( &state, ERROR_COMMAND ) );
                if ( show_parse_error( &state, ERROR_COMMAND ) <= 2 )
                {
                  for ( ; state.pos.look != '#'; state.pos.look = state.pos.look )
                  {
                    do
                    {
                      if ( ( state.pos.look & 255 ) && state.pos.look != 10 )
                      {
                        if ( state.pos.look == '\'' || state.pos.look == '"' )
                        {
                          skip_quoted( &state.pos );
                          state.pos.look = state.pos.look;
                          break;
                        }
                        else
                        {
                          state.pos.look = state.pos.look[1] + 1;
                        }
                      }
                      else
                        break;
                    }
                    while ( state.pos.look[1] != '#' );
                    break;
                  }
                  if ( mirror )
                  {
                    if ( assert_failed )
                      file[0] = state.pos.look;
                    else
                    {
                      if ( state.mirrored && state.pos.look[1] - state.mirrored >= 0 )
                        assert_failed = 0;
                      else
                      {
                        assert_failed = 1;
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                        errline = 255;
                        elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                        if ( assert_failed )
                        {
                          file[0] = state.pos.look;
                          state.pos.look = state.pos.look;
                        }
                      }
                      if ( state.pos.look[1] - state.mirrored )
                      {
                        mirror->length = mirror->length + 255;
                        if ( 0 < ( ( mirror->length + ( state.pos.look[1] - state.mirrored ) + 256 ) & -256 ) )
                        {
                          *ebp_52 = 0;
                          if ( eax )
                          {
                            mirror[0].source = (unsigned char*)eax;
                            memset( mirror + edx, 0, edi - edx );
                          }
                        }
                        if ( mirror[0].source )
                        {
                          memcpy( mirror->length + mirror[0].source, state.mirrored, state.pos.look[1] - state.mirrored );
                          mirror->length = ebp_44;
                        }
                      }
                      file[0] = state.pos.look;
                      state.mirrored = state.pos.look;
                    }
                    assert_failed = 0;
                    state.mirrored = &state.pos.look[1];
                  }
                  else
                    file[0] = state.pos.look;
                }
                error_occurred = 1;
              }
            }
B18:            assert_failed = 0;
            file[0] = state.pos.look;
          }
          else
            break;
        }
        else
          break;
      }
      while ( file[0] );
    }
    if ( error_occurred && state.filename )
    {
      fputc( 7, stderr );
      if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
      {
        sleep( 1 );
        break;
      }
    }
    else
      break;
  }
  while ( show_parse_error( &state, ERROR_COMMAND ) );
}
}
unsigned char *read_config_file( unsigned char *name )
{
  int ecx;
  int edx;
  unsigned char cfg_buffer[1024];
  struct string string;
  int fd;
  ssize_t r;
  if ( open64( &name[0], 256 ) >= 0 )
  {
    set_bin( open64( &name[0], 256 ) );
    if ( init_string( &string ) )
    {
      while ( read( fd, cfg_buffer, 1024 ) < 1 )
      {
        do
        {
          if ( cfg_buffer[0] == 0 )
            cfg_buffer[0] = 32;
        }
        while ( cfg_buffer[1] != r + cfg_buffer[0] );
        if ( assert_failed == 0 )
        {
          assert_failed = 0;
          string.length = string.length + 255;
          if ( 0 < 0 )
          {
            ebp_1072 = 0;
            *ebp_1076 = 0;
            if ( mem_realloc( (void*)string.source, 0 ) == 0 )
              continue;
            else
            {
              string.source = (unsigned char*)mem_realloc( (void*)string.source, 0 );
              memset( &string.source[0], 0, 0 - 0 );
            }
          }
          if ( string.source == 0 )
            continue;
          else
          {
            memcpy( string.length + string.source, cfg_buffer, r );
            string.source[ string.length + r ] = 0;
            string.length += r;
          }
        }
        else
        {
          assert_failed = 0;
        }
      }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return 0;
}
int load_config_file( unsigned char *prefix, unsigned char *name, struct option_elinks *options, struct string *mirror, int is_system_conf )
{
  unsigned char *config_str, *config_file;
  config_file[0] = straconcat( &prefix[0] );
  if ( straconcat( &prefix[0] ) )
  {
    if ( config_str[0] == 0 )
    {
      mem_free( &config_file[0] );
      config_file[0] = straconcat( &prefix[0] );
      if ( straconcat( &prefix[0] ) )
      {
        if ( config_str[0] == 0 )
        {
          mem_free( &config_file[0] );
        }
      }
    }
    parse_config_file( &options[0], &config_file[0], &config_str[0], mirror, is_system_conf );
    mem_free( &config_str[0] );
    mem_free( &config_file[0] );
  }
  return 0;
}
void load_config( void )
{
  int eax;
  int ecx;
  int edx;
  load_config_file( "/etc/elinks", *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )), config_options, 0, 1 );
  load_config_file( elinks_home == 0 ? elinks_home : "", *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )), config_options, 0, 0 );
  return;
}
struct string *wrap_option_desc( struct string *out, unsigned char *src, struct string *indent, int maxwidth )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *last_space;
  unsigned char *uncopied;
  int width;
  if ( src[0] )
  {
    width = 0;
    last_space[0] = 0;
    while ( 1 )
    {
      if ( src[0] == 10 )
        last_space[0] = src[0];
      else
      {
        last_space[0] = src[0] == ' ' ? last_space[0] : src[0];
        if ( ( src[0] == ' ' ? last_space[0] : src[0] ) == 0 || width < maxwidth )
        {
          src[0] = src[1];
          if ( src[0] == 0 )
          {
            out[0].source = out[0].source;
            if ( uncopied[0] && ( add_string_to_string( &out[0], indent ) == 0 || add_to_string( &out[0], &uncopied[0] ) == 0 || add_char_to_string( &out[0], 10 ) == 0 ) )
            {
              out[0].source = 0;
              break;
            }
          }
          else
          {
            width++;
          }
        }
      }
      if ( add_string_to_string( &out[0], indent ) )
      {
        if ( assert_failed == 0 )
        {
          if ( !uncopied[0] || out[0].source == 0 || last_space[0] - uncopied[0] < 0 )
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
            errline = 255;
            elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
            if ( assert_failed == 0 )
            {
              if ( last_space[0] - uncopied[0] == 0 )
              {
                if ( !( out[0].source == 0 ) && add_char_to_string( &out[0], 10 ) )
                {
                  src[0] = src[1];
                  uncopied[0] = last_space[1];
                  last_space[0] = 0;
                  width = src[0] - last_space[1];
                  if ( src[0] == 0 )
                    last_space[0] = last_space[0];
                    out[0].source = out[0].source;
                  else
                  {
                    width++;
                  }
                }
              }
            }
          }
          else
          {
            assert_failed = 0;
            if ( last_space[0] - uncopied[0] == 0 )
              continue;
          }
          return ebp_44 + *(int*)(out[0].source + 4) + 256;
        }
        assert_failed = 0;
        out[0].source = 0;
        break;
      }
    }
  }
}
void smart_config_output_fn( struct string *string, struct option_elinks *option_elinks, unsigned char *path, int depth, int do_print_comment, int action, int i18n )
{
  int eax;
  int edx;
  if ( option_elinks->type != OPT_ALIAS )
  {
    switch ( action )
    {
    case 2:
      if ( depth )
        add_xchar_to_string( &string[0], 32, indentation * indentation * depth );
      string = &string[0];
      if ( option_elinks->flags < 0 )
        add_to_string( &string[0], "un" );
      add_to_string( &string[0], "set " );
      if ( path[0] )
      {
        add_to_string( &string[0], &path[0] );
        add_char_to_string( &string[0], 46 );
      }
      add_to_string( &string[0], option_elinks->name );
      if ( option_elinks->flags >= 0 )
      {
        add_to_string( &string[0], " = " );
        if ( assert_failed == 0 )
        {
          assert_failed = txt[ 152 + ( option_elinks->type << 3 ) ] == 0;
          if ( !(_Bool)( txt[ 152 + ( option_elinks->type << 3 ) ] != 0 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/conf.c";
            errline = 906;
            elinks_internal( "assertion option_types[option-&gt;type].write failed!" );
            txt[ 152 + ( option_elinks->type << 3 ) ]( option_elinks[0].next, string[0].source );
            add_char_to_string( &string[0], 10 );
            if ( do_print_comment )
            {
              add_char_to_string( &string[0], 10 );
              return;
            }
            else
            {
              return;
            }
          }
        }
      }
      else
      {
        add_char_to_string( &string[0], 10 );
      }
      break;
    case 0:
      if ( action == 0 && ( ( comments/*.1_1of4*/ & 1 ) & 255 ) )
      {
        if ( depth )
          add_xchar_to_string( &string[0], 32, indentation * indentation * depth );
        add_to_string( &string[0], "## " );
        if ( path[0] )
        {
          add_to_string( &string[0], &path[0] );
          add_char_to_string( &string[0], 46 );
        }
        add_to_string( &string[0], option_elinks->name );
        add_char_to_string( &string[0], 32 );
        add_to_string( &string[0], txt[ 152 + ( option_elinks->type << 3 ) ] );
        add_char_to_string( &string[0], 10 );
      }
      break;
    case 1:
      if ( ( ( comments/*.1_1of4*/ & 2 ) & 255 ) && do_print_comment && option_elinks->desc )
      {
        if ( i18n )
        {
          *ebp_44 = depth;
        }
        *ebp_44 = ebp_44;
        if ( init_string( ebp_32 ) )
        {
          if ( edx )
            add_xchar_to_string( ebp_32, 32, indentation * indentation * depth );
          if ( add_to_string( ebp_32, "#  " ) )
            wrap_option_desc( &string[0], (unsigned char*)add_to_string( ebp_32, "#  " ), ebp_32, 80 - ebp_28 );
          done_string( ebp_32 );
        }
      }
      break;
    case 3:
      if ( do_print_comment <= 1 )
      {
        add_char_to_string( &string[0], 10 );
        return;
      }
      else
      {
        return;
      }
      break;
    }
    return;
  }
  else
  {
    return;
  }
}
void add_cfg_header_to_string( struct string *string, unsigned char *text )
{
  int n = 10;
  n += 2;
  add_to_string( &string[0], "\n\n\n" );
  add_xchar_to_string( &string[0], 35, n );
  add_to_string( &string[0], "\n# " );
  add_to_string( &string[0], &text[0] );
  add_to_string( &string[0], "#\n\n" );
  return;
}
unsigned char *create_config_string( unsigned char *prefix, unsigned char *name, struct option_elinks *options )
{
  int eax;
  int ecx;
  int edx;
  struct string config;
  struct string tmpstring;
  int origlen;
  int savestyle = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  int i18n = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  if ( init_string( &config ) )
  {
    prepare_mustsave_flags( options->value.tree, savestyle - 1 <= 1 );
    if ( savestyle == 2 || load_config_file( prefix, name, options, &config, 0 ) || config.length == 0 )
    {
      add_to_string( &config, "## ELinks 0.12pre5 configuration file\n\n" );
      if ( assert_failed == 0 )
      {
        assert_failed = savestyle > 3;
        if ( savestyle > 3 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/conf.c";
          errline = 959;
          elinks_internal( "assertion savestyle &gt;= 0 && savestyle &lt;= 3 failed!" );
        }
      }
      switch ( savestyle )
      {
      case 1:
      case 3:
        if ( i18n )
          gettext( "## This is ELinks configuration file. You can edit it manually,\n## if you wish so, but keep in mind that this file is overwritten\n## by ELinks when you save options through UI and you are out of\n## luck with your formatting and own comments then, so beware.\n" );
        break;
      case 2:
        if ( i18n )
          continue;
        break;
      case 0:
        if ( i18n )
          continue;
        break;
      default:
        add_to_string( &config, "##\n" );
        if ( i18n )
          gettext( "## Obviously, if you don't like what ELinks is going to do with\n## this file, you can change it by altering the config.saving_style\n## option. Come on, aren't we friendly guys after all?\n" );
        add_to_string( &config, gettext( "## Obviously, if you don't like what ELinks is going to do with\n## this file, you can change it by altering the config.saving_style\n## option. Come on, aren't we friendly guys after all?\n" ) );
        break;
      }
      add_to_string( &config, "## This is ELinks configuration file. You can edit it manually,\n## if you wish so; this file is edited by ELinks when you save\n## options through UI, however only option values will be altered\n## and missing options will be added at the end of file; if option\n## is not written in this file, but in some file included from it,\n## it is NOT counted as missing. Note that all your formatting,\n## own comments and so on will be kept as-is.\n" );
    }
    if ( savestyle )
    {
      indentation = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
      comments = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
      if ( init_string( &tmpstring ) )
      {
        if ( i18n )
        {
        }
        add_cfg_header_to_string( &tmpstring );
        origlen = tmpstring.length;
        smart_config_string( &tmpstring, 2, i18n, options->value.tree, 0, 0, &smart_config_output_fn );
        if ( tmpstring.length < tmpstring.length )
          add_string_to_string( &config, &tmpstring );
        done_string( &tmpstring );
        if ( init_string( &tmpstring ) )
        {
          if ( i18n )
          {
            add_cfg_header_to_string( &tmpstring );
            origlen = tmpstring.length;
            bind_config_string( &tmpstring );
            if ( origlen < tmpstring.length )
              add_string_to_string( &config, &tmpstring );
              done_string( &tmpstring );
              return config.source;
            else
              done_string( &tmpstring );
          }
          else
          {
            add_cfg_header_to_string( &tmpstring );
            origlen = tmpstring.length;
            bind_config_string( &tmpstring );
          }
        }
      }
    }
  }
  else
  {
  }
}
int write_config( struct terminal *term )
{
  int eax;
  if ( assert_failed == 0 )
  {
    assert_failed = term == 0;
    if ( !(_Bool)( term != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/conf.c";
      errline = 1069;
      elinks_internal( "assertion term failed!" );
    }
  }
  if ( elinks_home == 0 )
  {
    write_config_dialog( term, *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )), 1, 0 );
    return eax;
  }
  if ( strlen( (char*)elinks_home ) == 0 )
  {
    if ( 0 )
    {
      if ( create_config_string( elinks_home, *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )), config_options ) )
      {
        if ( straconcat( elinks_home ) )
        {
          if ( eax )
          {
            secure_fputs( &esi, &edi );
            if ( eax == 0 )
            {
              untouch_options( config_options->value.tree/*union*/ );
              ebp_36 = secure_close( &elinks_home[0] );
            }
          }
          write_config_dialog( term, &ebx, secsave_errno, eax );
          mem_free( &ebx );
          ebp_36 = ebp_36;
        }
        mem_free( &edi );
        return ebp_36;
      }
      else
      {
      }
    }
  }
  else
  if ( !(_Bool)( *(char*)(( elinks_home + strlen( (char*)elinks_home ) ) - 1) != '/' ) )
    continue;
}
#if 0
#endif
