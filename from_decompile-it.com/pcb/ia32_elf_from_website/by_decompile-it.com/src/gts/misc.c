#include "misc.c.h"
guint gts_major_version;
guint gts_minor_version = 7;
guint gts_micro_version = 6;
guint gts_interface_age = 1;
guint gts_binary_age = 1;
GtsFile *file_new( void )
{
  /* phantom */ GtsFile *f;
  *(int*)(g_malloc( 64 )) = 0;
  *(int*)g_malloc( 64 )/*.8*/ = 0;
  *(int*)g_malloc( 64 )/*.4*/ = 0;
  *(int*)g_malloc( 64 )/*.32*/ = 1;
  *(int*)g_malloc( 64 )/*.36*/ = 1;
  *(int*)g_malloc( 64 )/*.24*/ = 0;
  *(int*)g_malloc( 64 )/*.28*/ = 0;
  *(int*)g_malloc( 64 )/*.48*/ = 0;
  *(int*)g_malloc( 64 )/*.44*/ = 0;
  *(int*)g_malloc( 64 )/*.40*/ = 0;
  *(int*)g_malloc( 64 )/*.20*/ = g_string_new( "" );
  *(int*)g_malloc( 64 )/*.52*/ = g_strdup( " \t" );
  *(int*)g_malloc( 64 )/*.56*/ = g_strdup( "#!" );
  *(int*)g_malloc( 64 )/*.60*/ = g_strdup( "\n{}()=" );
  return g_malloc( 64 );
}
GtsFile *gts_file_new( FILE *fp )
{
  int ebx;
  GtsFile *f;
{
  /* phantom */ int _g_boolean_var_;
  if ( fp == 0 )
  {
    f = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fp != NULL" );
    return f;
  }
  f = &fp[0]._flags;
  gts_file_next_token( file_new( ) );
  return *ebp_24;
}
}
GtsFile *gts_file_new_from_string( gchar *s )
{
  int ebx;
  int esi;
  GtsFile *f;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    f = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return f;
  }
  f = file_new( );
  f->s = g_strdup( s );
  f->s1 = g_strdup( s );
  gts_file_next_token( f );
  return f;
}
}
void gts_file_destroy( GtsFile *f )
{
  __PRETTY_FUNCTION__[0] = f;
{
  /* phantom */ int _g_boolean_var_;
  if ( __PRETTY_FUNCTION__[0] == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return;
  }
  g_free( f->delimiters );
  g_free( f->comments );
  g_free( f->tokens );
  if ( f->error )
    g_free( f->error );
  if ( f->s1 )
    g_free( f->s1 );
  g_string_free( f->token, 1 );
}
}
void gts_file_verror( GtsFile *f, gchar *format, va_list args )
{
  int eax;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
    goto B3;
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( format == 0 )
    args = "format != NULL";
    format = __PRETTY_FUNCTION__;
    f = 0;
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( f->type == GTS_ERROR )
  {
    g_assertion_message_expr( 0, "../../src/gts/misc.c", 140, __PRETTY_FUNCTION__, "f-&gt;type != GTS_ERROR" );
  }
  else
  {
    f->type = GTS_ERROR;
    f->error = g_strdup_vprintf( format, args );
    return;
  }
}
}
B3:;
  args = "f != NULL";
  format = __PRETTY_FUNCTION__;
  f = 0;
}
}
void gts_file_error( GtsFile *f, gchar *format, ... )
{
  int eax;
  int edx;
  /* phantom */ va_list args;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( format )
  {
    gts_file_verror( f, format, ebp_16 );
    return;
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "format != NULL" );
  return;
}
}
}
gint gts_file_getc( GtsFile *f )
{
  int eax;
  gint c;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    c |= -1;
  }
  c = -1;
  if ( f->type != GTS_ERROR )
  {
    if ( f )
      fgetc( f );
    else
    {
      c = -1;
      if ( f->s[0] )
      {
        c = f->s[0];
        f->s++;
      }
    }
    f->curpos++;
    while ( 1 )
    {
      while ( f->comments[1] )
      {
        if ( f->comments[1] == (unsigned char)( c ) )
        {
          while ( c != 10 )
          {
            do
            {
              if ( c == -1 )
                break;
              else
              if ( f )
              {
              }
              else
              if ( f->s[0] == 0 )
              {
                c = -1;
              }
              else
              {
                c = c/*.1_1of4*/;
                f->s++;
                break;
                while ( c != 10 )
                {
                  do
                  {
                  }
                  while ( c != 10 );
                  break;
                }
                break;
              }
            }
            while ( c != 10 );
            break;
          }
          if ( c == 10 )
          {
            f->curpos = 1;
            f->curline++;
            if ( f )
            {
              fgetc( f );
              break;
            }
            else
            {
              c = -1;
              if ( f->s[0] )
              {
                c = f->s[0];
                f->s++;
              }
            }
          }
        }
        else
        {
        }
      }
      switch ( c )
      {
      case 10:
        break;
        break;
      case 123:
        break;
        break;
      case 125:
        if ( f->scope == 0 )
        {
          f->line = f->curline;
          f->pos = f->curpos + -1;
          gts_file_error( f, "no matching opening brace" );
          c |= -1;
          break;
        }
        f->scope += -1;
        break;
        break;
      }
    }
  }
  return eax;
}
}
guint gts_file_read( GtsFile *f, gpointer ptr, guint size, guint nmemb )
{
  guint i;
  guint n;
  /* phantom */ gchar *p;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( ptr == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "ptr != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f-&gt;fp != NULL" );
    return 0;
  }
  n = 0;
  if ( f->type != GTS_ERROR && ( n * size * fread( ptr, size, nmemb, f ) ) )
  {
    i = 0;
    do
    {
      f->curpos++;
      if ( ptr[0] == '\n' )
      {
        i++;
        f->curline++;
        f->curpos = 1;
        if ( edi <= i + 1 )
          break;
      }
      else
      {
        i++;
      }
    }
    while ( i + 1 < edi );
  }
  return eax;
}
}
}
}
gint gts_file_getc_scope( GtsFile *f )
{
  gint c;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return -1;
  }
  c = -1;
  if ( f->type != GTS_ERROR )
  {
    if ( f->scope <= f->scope_max )
    {
    }
    do
    {
    }
    while ( c != -1 && f->scope_max < f->scope );
  }
  return gts_file_getc( f );
}
}
void gts_file_next_token( GtsFile *f )
{
  int ecx;
  int edx;
  gint c;
  gboolean in_string;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return;
  }
  if ( f->type != GTS_ERROR )
  {
    f->token->str = 0;
    *(int*)&f->token->len = 0;
    c = f->next_token;
    if ( f->next_token )
    {
      for ( ; f->tokens[1];  )
      {
        if ( c == f->tokens[1] )
        {
          f->line = f->curline;
          f->pos = f->curpos + -1;
          if ( f->token->allocated_len <= f->token->len + 1 )
            g_string_insert_c( f->token, -1, f->next_token );
          else
            f->token->len++;
          f->type = f->next_token = 0;
          break;
        }
        else
        {
          f->tokens[0] = f->tokens[1];
        }
      }
      f->next_token = 0;
    }
    else
    {
      c = gts_file_getc_scope( f );
    }
    in_string = 0;
    f->type = GTS_NONE;
    if ( c != -1 )
    {
      do
      {
        if ( in_string )
        {
          for ( ; f->delimiters[1];  )
          {
            if ( c == f->delimiters[1] )
              goto B26;
            else
            {
              f->delimiters[0] = f->delimiters[1];
            }
          }
          for ( ; f->tokens[1];  )
          {
            if ( c == f->tokens[1] )
              f->next_token = c;
              if ( f->type == GTS_NONE )
                goto B19;
            else
            {
              f->tokens[0] = f->tokens[1];
            }
          }
          f->token->len = f->token->len + 1;
          if ( f->token->allocated_len <= f->token->len + 1 )
          {
            g_string_insert_c( gts_file_getc_scope( f ), -1, c );
          }
          else
          {
            f->token->len++;
            f->token->len/*.1_1of4*/ = 0;
            if ( gts_file_getc_scope( f ) != -1 )
              continue;
          }
        }
        else
        {
          for ( ; f->delimiters[1];  )
          {
            if ( c == f->delimiters[1] )
            {
              c = gts_file_getc_scope( f );
              if ( gts_file_getc_scope( f ) != -1 )
                continue;
            }
            else
            {
              f->delimiters[0] = f->delimiters[1];
            }
          }
          f->line = f->curline;
          f->pos = f->curpos + -1;
          f->token->len = f->token->len + 1;
          if ( f->token->allocated_len <= f->token->len + 1 )
          {
            g_string_insert_c( gts_file_getc_scope( f ), -1, c );
          }
          else
          {
            f->token->len++;
            f->token->len/*.1_1of4*/ = 0;
          }
          for ( ; f->tokens[1];  )
          {
            if ( f->token->len + f->token->str[0] == f->tokens[1] )
              f->type = c;
            else
            {
              f->tokens[0] = f->tokens[1];
            }
          }
          in_string = 1;
          c = gts_file_getc_scope( f );
          if ( gts_file_getc_scope( f ) != -1 )
            continue;
        }
      }
      while ( gts_file_getc_scope( f ) != -1 );
B26:;
    }
B19:;
    if ( f->token->len == 0 )
    {
      return;
    }
  {
    gchar *a;
    a[0] = f->token->str[0];
    if ( f->token->str )
    {
      do
      {
        for ( ; '-'; '+'++ )
        {
          if ( f->token->str == '-' )
          {
            a[0] = a + 1;
            if ( a[0] == 0 )
              break;
            do
            {
            }
            while ( a[0] == 0 );
            break;
          }
          else
          {
            // '+'++;
          }
        }
        a[0] = f->token->str[0];
        do
        {
          for ( ; '-'; '+'++ )
          {
            if ( c == '-' )
            {
              a[0] = a + 1;
              if ( a[0] )
              {
                do
                {
                }
                while ( a[0] == 0 );
                f->type = GTS_INT;
                break;
              }
              else
              {
                f->type = GTS_INT;
                break;
              }
            }
            else
            {
              // '+'++;
            }
          }
          a[0] = f->token->str[0];
          do
          {
            for ( ; '-'; '+'++ )
            {
              if ( c == '-' )
              {
                a[0] = a + 1;
                if ( a[0] == 0 )
                  break;
                do
                {
                }
                while ( a[0] == 0 );
                break;
              }
              else
              {
                // '+'++;
              }
            }
            a[0] = f->token->str[0];
            do
            {
              for ( ; '-'; '+'++ )
              {
                if ( c == '-' )
                {
                  a[0] = a + 1;
                  if ( a[0] )
                  {
                    do
                    {
                    }
                    while ( a[0] == 0 );
                  }
                  else
                  {
                    f->type = GTS_FLOAT;
                    break;
                  }
                }
                else
                {
                  // '+'++;
                }
                f->type = GTS_FLOAT;
                break;
              }
              strcmp( "0x", &f->token->str[0] );
              if ( 1 || strncmp( &f->token->str[0], "-0x", 3 ) == 0 || strncmp( *ebp_56, "+0x", 3 ) == 0 )
              {
                a[0] = f->token->str[0];
                do
                {
                  for ( ; '-'; '+'++ )
                  {
                    if ( edx == eax )
                    {
                      a[0] = a + 1;
                      if ( a[0] )
                      {
                        do
                        {
                        }
                        while ( a[0] == 0 );
                        f->type = GTS_INT;
                        break;
                      }
                      else
                      {
                        f->type = GTS_INT;
                        break;
                      }
                    }
                    else
                    {
                      // '+'++;
                    }
                  }
                  a[0] = f->token->str[0];
                  do
                  {
                    for ( ; '-'; '+'++ )
                    {
                      if ( a == '-' )
                      {
                        a[0] = a + 1;
                        if ( a[0] )
                        {
                          do
                          {
                          }
                          while ( a[0] == 0 );
                        }
                        else
                        {
                          f->type = GTS_FLOAT;
                          break;
                        }
                      }
                      else
                      {
                        // '+'++;
                      }
                    }
                    break;
                  }
                  while ( a[0] == 0 );
                }
                while ( a[0] == 0 );
                f->type = GTS_INT;
                break;
              }
            }
            while ( a[0] == 0 );
            f->type = GTS_FLOAT;
            break;
          }
          while ( a[0] == 0 );
          break;
        }
        while ( a[0] == 0 );
        f->type = GTS_INT;
        break;
      }
      while ( a[0] == 0 );
    }
    f->type = GTS_STRING;
    return;
  }
  }
  return;
}
}
void gts_file_first_token_after( GtsFile *f, GtsTokenType type )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return;
  }
  if ( f->type != GTS_ERROR && f->type != GTS_NONE )
  {
    do
    {
      if ( type == f->type )
      {
        do
        {
          gts_file_next_token( f );
        }
        while ( f->type == type );
        break;
      }
      else
      {
        gts_file_next_token( f );
      }
    }
    while ( f->type != GTS_NONE && f->type != GTS_ERROR );
  }
  if ( type == f->type )
  {
    gts_file_next_token( f );
    if ( f->type == type )
      continue;
    else
    {
      return;
    }
  }
  else
  {
    return;
  }
}
}
void gts_file_assign_start( GtsFile *f, GtsFileVariable *vars )
{
  int eax;
  int edx;
  GtsFileVariable *var;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( vars == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "vars != NULL" );
    return;
  }
  for ( ; var != 256;  )
  {
    var->set = 0;
    var++;
  }
  if ( f->type != 123 )
  {
    vars = "expecting an opening brace";
  }
  f->scope_max++;
}
}
}
GtsFileVariable *gts_file_assign_next( GtsFile *f, GtsFileVariable *vars )
{
  GtsFileVariable *var;
  gboolean found;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    var = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return var;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( vars == 0 )
  {
    var = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "vars != NULL" );
    return var;
  }
  while ( f->type == 10 )
  {
    gts_file_next_token( f );
  }
  if ( f->type == 125 )
  {
    f->scope_max += -1;
    var = 0;
    gts_file_next_token( f );
    return var;
  }
  if ( f->type == GTS_ERROR )
  {
    var = 0;
    return var;
  }
  found = 0;
  while ( 1 )
  {
    if ( f->type != GTS_ERROR )
    {
      do
      {
        if ( found == 0 )
        {
          if ( var == 256 )
          {
            var = 0;
            gts_file_error( f, "unknown identifier `%s'", f->token->str[0] );
            return var;
          }
        {
          /* phantom */ size_t __s1_len;
          /* phantom */ size_t __s2_len;
          if ( strcmp( &var->name[0], &f->token->str[0] ) == 0 )
          {
            if ( var->unique == 0 || var->set == 0 )
            {
              var->line = f->line;
              var->pos = f->pos;
              gts_file_next_token( f );
              if ( f->type != 61 )
              {
                gts_file_error( f, "expecting `='" );
                found = 1;
              }
              else
              {
                var->set = 1;
                if ( var != 2048 )
                {
                  if ( ccdep1 < ccdep2 )
                  {
                    switch ( var )
                    {
                    case 4096:
                      gts_file_next_token( f );
                      if ( f->type == GTS_FLOAT || f->type == GTS_INT )
                      {
                        if ( var->data )
                        {
                          found = 1;
                          *(double*)(var->data) = strtod( &f->token->str[0], 0 );
                        }
                        else
                        {
                          found = 1;
                        }
                      }
                      break;
                    case 8192:
                      gts_file_next_token( f );
                      if ( f->type != GTS_FLOAT && f->type != GTS_INT && f->type != GTS_STRING )
                      {
                        gts_file_error( f, ebp_68, ebp_68 );
                        var->set = 0;
                        found = 1;
                      }
                      else
                      {
                        if ( var->data )
                        {
                          *(int*)(var->data) = g_strdup( &f->token->str[0] );
                          found = 1;
                          break;
                        }
                      }
                      break;
                    default:
                      break;
                    case 16384:
                    {
                      /* phantom */ int _g_boolean_var_;
                      if ( var->set == 0 )
                      {
                        g_assertion_message_expr( 0, "../../src/gts/misc.c", 546, __PRETTY_FUNCTION__, "var-&gt;set" );
                      }
                      else
                      {
                        gts_file_next_token( f );
                        break;
                      }
                    }
                      break;
                    }
                    g_assertion_message( 0, "../../src/gts/misc.c", 535, __PRETTY_FUNCTION__, 0 );
                  }
                  else
                  if ( var == 512 || var == 1024 )
                  {
                    gts_file_next_token( f );
                    if ( f->type != GTS_INT )
                    {
                    }
                    else
                    if ( var->data )
                    {
                      *(int*)(var->data) = strtol( &f->token->str[0], 0, 10 );
                      found = 1;
                    }
                  }
                }
                else
                {
                  gts_file_next_token( f );
                  if ( f->type == GTS_FLOAT || f->type == GTS_INT )
                  {
                    if ( var->data )
                    {
                      found = 1;
                      *(float*)(var->data) = strtod( &f->token->str[0], 0 );
                    }
                  }
                }
              }
            }
            gts_file_error( f, "variable `%s' was already set at line %d:%d", &var->name[0], var->line );
            found = 1;
          }
          else
          {
            var++;
          }
        }
        }
        else
          break;
      }
      while ( f->type != GTS_ERROR );
    }
    if ( found == 0 )
    {
      var = 0;
      gts_file_error( f, "unknown identifier `%s'", f->token->str[0] );
      return var;
    }
    if ( f->type == GTS_ERROR )
    {
      var = 0;
      break;
    }
  }
  var = 0;
  return var;
}
}
}
void gts_file_assign_variables( GtsFile *f, GtsFileVariable *vars )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( vars == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "vars != NULL" );
    return;
  }
  gts_file_assign_start( f, vars );
  do
  {
  }
  while ( gts_file_assign_next( f, vars ) );
  return;
}
}
}
void gts_file_variable_error( GtsFile *f, GtsFileVariable *vars, gchar *name, gchar *format, ... )
{
  /* phantom */ va_list args;
  GtsFileVariable *var;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( vars == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "vars != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( name == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "name != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( format == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "format != NULL" );
    return;
  }
  for ( ; var != 256;  )
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    if ( strcmp( &var->name[0], name ) == 0 )
    {
      if ( var->set == 0 )
      {
        gts_file_verror( f, format, ebp_24 );
        return;
      }
      f->line = var->line;
      f->pos = var->pos;
      gts_file_verror( f, format, ebp_24 );
      return;
    }
    else
    {
      var++;
    }
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "var-&gt;type != GTS_NONE" );
  return;
}
}
}
}
}
#if 0
#endif
