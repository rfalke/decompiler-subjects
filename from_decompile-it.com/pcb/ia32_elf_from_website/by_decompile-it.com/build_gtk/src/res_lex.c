#include "res_lex.c.h"
static size_t yy_buffer_stack_top;
static size_t yy_buffer_stack_max;
static YY_BUFFER_STATE *yy_buffer_stack;
static char yy_hold_char;
static int yy_n_chars;
int resleng;
static char *yy_c_buf_p;
static int yy_init;
static int yy_start;
static int yy_did_buffer_switch_on_eof;
FILE *resin;
FILE *resout;
int reslineno = 1;
static flex_int16_t yy_accept[28] = { 0, 0, 0, 9, 6, 4, 4, 7, 6, 7, 7, 7, 6, 6, 0, 0, 1, 6, 0, 3, 0, 0, 2, 0, 5, 0, 3, 0 };
static flex_int32_t yy_ec[256] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 4, 5, 1, 1, 1, 6, 7, 8, 1, 1, 1, 1, 1, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 1, 1, 10, 1, 1, 11, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 1, 1, 1, 9, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 1, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static flex_int32_t yy_meta[12] = { 0, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1 };
static flex_int16_t yy_base[33] = { 0, 0, 0, 44, 34, 57, 57, 36, 11, 33, 30, 57, 16, 28, 25, 27, 57, 0, 25, 57, 34, 23, 57, 20, 0, 40, 19, 57, 23, 48, 50, 52, 54 };
static flex_int16_t yy_def[33] = { 0, 27, 1, 27, 28, 27, 27, 29, 27, 30, 31, 27, 28, 28, 31, 29, 27, 8, 8, 27, 32, 30, 27, 31, 12, 32, 31, 0, 27, 27, 27, 27, 27 };
static flex_int16_t yy_nxt[69] = { 0, 4, 5, 6, 7, 8, 9, 10, 11, 4, 11, 12, 17, 18, 19, 18, 17, 18, 20, 18, 17, 18, 17, 14, 13, 24, 18, 13, 13, 22, 18, 16, 18, 13, 18, 14, 18, 26, 13, 22, 16, 14, 17, 26, 27, 27, 27, 27, 17, 15, 15, 21, 21, 23, 23, 25, 25, 3, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27 };
static flex_int16_t yy_chk[69] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 12, 28, 12, 18, 26, 23, 21, 18, 15, 18, 14, 18, 13, 18, 20, 10, 9, 7, 4, 20, 25, 3, 0, 0, 0, 25, 29, 29, 30, 30, 31, 31, 32, 32, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27 };
static flex_int32_t yy_rule_can_match_eol[9] = { 0, 1, 1, 1, 1, 0, 1, 0, 0 };
static yy_state_type yy_last_accepting_state;
static char *yy_last_accepting_cpos;
int res_flex_debug;
char *restext;
int reslex( void )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
void resrestart( FILE *input_file )
{
  int eax;
  int edx;
  if ( yy_buffer_stack == 0 || yy_buffer_stack[0] == 0 )
  {
    resensure_buffer_stack( );
    yy_buffer_stack[ yy_buffer_stack_top ] = res_create_buffer( resin, 16384 );
    if ( yy_buffer_stack )
    {
    }
  }
  res_init_buffer( eax, input_file );
  yy_n_chars = yy_buffer_stack[ yy_buffer_stack_top ]->yy_n_chars;
  yy_c_buf_p = &yy_buffer_stack[ yy_buffer_stack_top ]->yy_buf_pos;
  restext = &yy_buffer_stack[ yy_buffer_stack_top ]->yy_buf_pos;
  resin = &yy_buffer_stack[ yy_buffer_stack_top ]->yy_input_file->_flags;
  yy_hold_char = yy_buffer_stack[ yy_buffer_stack_top ]->yy_buf_pos[0];
  return;
}
void res_switch_to_buffer( YY_BUFFER_STATE new_buffer )
{
  int eax;
  int edx;
  resensure_buffer_stack( );
  if ( yy_buffer_stack[0] != new_buffer )
  {
    if ( yy_buffer_stack )
    {
      if ( yy_buffer_stack[0] )
      {
        yy_c_buf_p[0] = yy_hold_char;
        yy_buffer_stack[0]->yy_buf_pos = yy_c_buf_p;
        yy_buffer_stack[0]->yy_n_chars = yy_n_chars;
      }
    }
    else
    {
    }
    yy_buffer_stack[0] = new_buffer;
    yy_n_chars = new_buffer->yy_n_chars;
    resin = &new_buffer->yy_input_file->_flags;
    yy_c_buf_p = &new_buffer->yy_buf_pos;
    restext = &new_buffer->yy_buf_pos;
    yy_did_buffer_switch_on_eof = 1;
    yy_hold_char = new_buffer->yy_buf_pos[0];
  }
  return;
}
YY_BUFFER_STATE res_create_buffer( FILE *file, int size )
{
  int edx;
  /* phantom */ YY_BUFFER_STATE b;
  if ( malloc( 48 ) == 0 )
    yy_fatal_error( "out of dynamic memory in res_create_buffer()" );
  *(int*)malloc( 48 )/*.12*/ = size;
  *(int*)malloc( 48 )/*.4*/ = malloc( malloc( 48 ) + 12 + 2 );
  if ( malloc( 48 ) + 4 == 0 )
    yy_fatal_error( "out of dynamic memory in res_create_buffer()" );
  *(int*)malloc( 48 )/*.20*/ = 1;
  res_init_buffer( malloc( 48 ), file );
  return malloc( 48 );
}
void res_delete_buffer( YY_BUFFER_STATE b )
{
  if ( b == 0 )
  {
    return;
  }
  if ( yy_buffer_stack && b == yy_buffer_stack[0] )
    yy_buffer_stack[0] = 0;
  if ( b->yy_is_our_buffer )
  {
    free( &b->yy_ch_buf );
  }
}
void res_init_buffer( YY_BUFFER_STATE b, FILE *file )
{
  int eax;
  int ebx;
  int esi;
  int oerrno = *(int*)(__errno_location( ));
  res_flush_buffer( b );
  b = &file[0]._flags;
  b->yy_fill_buffer = 1;
  if ( b != ( yy_buffer_stack ? yy_buffer_stack[0] : 0 ) )
  {
    b->yy_bs_lineno = 1;
    b->yy_bs_column = 0;
  }
  if ( file == 0 || isatty( fileno( file ) ) <= 0 )
  {
  }
  b->yy_is_interactive = 1;
  edi = oerrno;
  return;
}
void res_flush_buffer( YY_BUFFER_STATE b )
{
  if ( b )
  {
    b->yy_n_chars = 0;
    b->yy_ch_buf[0] = 0;
    b->yy_ch_buf[1] = 0;
    b->yy_at_bol = 1;
    b->yy_buffer_status = 0;
    b->yy_buf_pos = b->yy_ch_buf;
    if ( yy_buffer_stack && b == yy_buffer_stack[0] )
    {
      yy_c_buf_p = &b->yy_ch_buf;
      restext = &b->yy_ch_buf;
      yy_n_chars = b->yy_n_chars;
      resin = &b->yy_input_file->_flags;
      yy_hold_char = b->yy_ch_buf[0];
      return;
    }
  }
  return;
}
void respush_buffer_state( YY_BUFFER_STATE new_buffer )
{
  int eax;
  if ( new_buffer )
  {
    resensure_buffer_stack( );
    if ( yy_buffer_stack )
    {
      if ( yy_buffer_stack[0] )
      {
        yy_c_buf_p[0] = yy_hold_char;
        yy_buffer_stack[0]->yy_buf_pos = yy_c_buf_p;
        yy_buffer_stack[0]->yy_n_chars = yy_n_chars;
        if ( yy_buffer_stack[0] )
          yy_buffer_stack_top++;
      }
    }
    else
    {
    }
    yy_buffer_stack[0] = new_buffer;
    yy_n_chars = new_buffer->yy_n_chars;
    resin = &new_buffer->yy_input_file->_flags;
    yy_c_buf_p = &new_buffer->yy_buf_pos;
    restext = &new_buffer->yy_buf_pos;
    yy_did_buffer_switch_on_eof = 1;
    yy_hold_char = new_buffer->yy_buf_pos[0];
  }
  return;
}
void respop_buffer_state( void )
{
  if ( yy_buffer_stack && yy_buffer_stack[0] )
  {
    res_delete_buffer( yy_buffer_stack[0] );
    yy_buffer_stack[ yy_buffer_stack_top ] = 0;
    if ( yy_buffer_stack_top )
      yy_buffer_stack_top += -1;
    if ( yy_buffer_stack && yy_buffer_stack[0] )
    {
      yy_n_chars = yy_buffer_stack[0]->yy_n_chars;
      yy_c_buf_p = yy_buffer_stack[0]->yy_buf_pos;
      restext = yy_buffer_stack[0]->yy_buf_pos;
      resin = yy_buffer_stack[0]->yy_input_file;
      yy_did_buffer_switch_on_eof = 1;
      yy_hold_char = yy_buffer_stack[0]->yy_buf_pos[0];
    }
  }
  return;
}
void resensure_buffer_stack( void )
{
  int eax;
  /* phantom */ int num_to_alloc;
  if ( yy_buffer_stack )
  {
    if ( yy_buffer_stack_max + -1 <= yy_buffer_stack_top )
    {
      /* phantom */ int grow_size;
      yy_buffer_stack = realloc( yy_buffer_stack, ( yy_buffer_stack_max + 8 ) * sizeof( YY_BUFFER_STATE ) );
      if ( yy_buffer_stack == 0 )
      {
        yy_fatal_error( "out of dynamic memory in resensure_buffer_stack()" );
      }
      mymemset( (void*)&yy_buffer_stack, 0, 32 );
      yy_buffer_stack_max += 8;
      return;
    }
  }
  else
  {
    yy_buffer_stack = malloc( ( 1 ) * sizeof( YY_BUFFER_STATE ) );
    if ( yy_buffer_stack == 0 )
    {
      yy_fatal_error( "out of dynamic memory in resensure_buffer_stack()" );
    }
    mymemset( (void*)&yy_buffer_stack, 0, 4 );
    yy_buffer_stack_max = 1;
    yy_buffer_stack_top = 0;
  }
  return;
}
YY_BUFFER_STATE res_scan_buffer( char *base, yy_size_t size )
{
  int edx;
  int edi;
  YY_BUFFER_STATE b;
  if ( size <= 1 || *(char*)(base + -2) || *(char*)(base + -1) )
  {
    b = 0;
  }
  b = malloc( ( 1 ) * sizeof( struct yy_buffer_state ) );
  if ( malloc( 48 ) == 0 )
  {
    yy_fatal_error( "out of dynamic memory in res_scan_buffer()" );
  }
  *(int*)(ebp_28 + 12) = size + -2 + -2;
  *(int*)(ebp_28 + 4) = base;
  *(int*)(ebp_28 + 8) = base;
  *(int*)(ebp_28 + 20) = 0;
  *ebp_28 = 0;
  *(int*)(ebp_28 + 16) = size + -2 + -2;
  *(int*)(ebp_28 + 24) = 0;
  *(int*)(ebp_28 + 28) = 1;
  *(int*)(ebp_28 + 40) = 0;
  *(int*)(ebp_28 + 44) = 0;
  res_switch_to_buffer( malloc( 48 ) );
  return b;
}
YY_BUFFER_STATE res_scan_string( char *yystr )
{
  return res_scan_bytes( yystr, strlen( yystr ) );
}
YY_BUFFER_STATE res_scan_bytes( char *yybytes, int _yybytes_len )
{
  int edx;
  YY_BUFFER_STATE b;
  /* phantom */ char *buf;
  yy_size_t n = _yybytes_len + 2;
  int i;
  if ( malloc( _yybytes_len + 2 ) == 0 )
  {
    yy_fatal_error( "out of dynamic memory in res_scan_bytes()" );
  }
  if ( _yybytes_len > 0 )
  {
    i = 0;
    do
    {
      i++;
    }
    while ( i != _yybytes_len );
  }
  return 0;
  return 0;
}
void yy_fatal_error( char *msg )
{
  __fprintf_chk( stderr, 1, "%s\n", msg );
  exit( 2 );
}
int resget_lineno( void )
{
  return reslineno;
}
FILE *resget_in( void )
{
  return resin;
}
FILE *resget_out( void )
{
  return resout;
}
int resget_leng( void )
{
  return resleng;
}
char *resget_text( void )
{
  return restext;
}
void resset_lineno( int line_number )
{
  reslineno = line_number;
  return;
}
void resset_in( FILE *in_str )
{
  resin = in_str;
  return;
}
void resset_out( FILE *out_str )
{
  resout = out_str;
  return;
}
int resget_debug( void )
{
  return res_flex_debug;
}
void resset_debug( int bdebug )
{
  res_flex_debug = bdebug;
  return;
}
int reslex_destroy( void )
{
  if ( yy_buffer_stack )
  {
    do
    {
      if ( yy_buffer_stack[0] == 0 )
        break;
      res_delete_buffer( yy_buffer_stack[0] );
      yy_buffer_stack[ yy_buffer_stack_top ] = 0;
      respop_buffer_state( );
    }
    while ( yy_buffer_stack );
  }
  free( yy_buffer_stack );
  reslineno = 1;
  yy_buffer_stack = 0;
  yy_buffer_stack_top = 0;
  yy_buffer_stack_max = 0;
  yy_c_buf_p = 0;
  yy_init = 0;
  yy_start = 0;
  resin = 0;
  resout = 0;
  return 0;
}
void *resalloc( yy_size_t size )
{
}
void *resrealloc( void *ptr, yy_size_t size )
{
}
void resfree( void *ptr )
{
}
#if 0
#endif
