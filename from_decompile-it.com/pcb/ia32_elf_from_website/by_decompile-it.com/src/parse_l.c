#include "parse_l.c.h"
char *yyfilename;
PCBTypePtr yyPCB;
DataTypePtr yyData;
ElementTypePtr yyElement;
FontTypePtr yyFont;
static YY_BUFFER_STATE yy_current_buffer;
static char yy_hold_char;
static int yy_n_chars;
int yyleng;
static char *yy_c_buf_p;
static int yy_init = 1;
static int yy_start;
static int yy_did_buffer_switch_on_eof;
FILE *yyin;
FILE *yyout;
int yylineno = 1;
static short yy_acclist[118] = { 0, 38, 38, 46, 44, 45, 41, 44, 45, 42, 45, 43, 44, 45, 44, 45, 40, 44, 45, 44, 45, 38, 44, 45, 38, 44, 45, 38, 44, 45, 36, 38, 44, 45, 36, 38, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 44, 45, 41, 39, 40, 38, 38, 36, 38, 38, 36, 38, 34, 32, 33, 31, 37, 26, 7, 35, 28, 2, 11, 10, 14, 12, 3, 13, 22, 16, 8, 9, 4, 23, 24, 21, 29, 19, 27, 25, 5, 6, 30, 15, 18, 20, 17, 1 };
static short yy_accept[181] = { 0, 1, 2, 3, 4, 6, 9, 11, 14, 16, 19, 21, 24, 27, 30, 34, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 73, 73, 74, 74, 75, 75, 76, 77, 77, 77, 77, 79, 80, 80, 82, 82, 82, 82, 82, 82, 82, 82, 82, 82, 83, 83, 83, 83, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 85, 85, 86, 87, 88, 88, 88, 88, 89, 89, 89, 89, 89, 89, 89, 89, 90, 90, 91, 92, 93, 94, 94, 95, 95, 95, 95, 95, 95, 96, 96, 96, 96, 96, 96, 96, 97, 97, 97, 98, 99, 99, 99, 99, 99, 99, 100, 100, 100, 100, 100, 100, 100, 101, 101, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 103, 103, 103, 104, 104, 104, 104, 104, 105, 106, 106, 106, 107, 108, 108, 109, 109, 110, 110, 110, 111, 111, 111, 111, 111, 112, 112, 112, 113, 113, 113, 113, 114, 114, 115, 115, 115, 116, 117, 118, 118 };
static int yy_ec[256] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 5, 6, 1, 1, 1, 7, 1, 1, 1, 8, 1, 9, 10, 1, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 1, 1, 1, 1, 1, 1, 1, 13, 14, 15, 16, 17, 18, 19, 1, 20, 1, 1, 21, 22, 23, 1, 24, 1, 25, 26, 27, 28, 29, 1, 1, 1, 1, 1, 30, 1, 1, 1, 1, 31, 32, 33, 34, 35, 36, 37, 38, 39, 1, 40, 41, 42, 43, 44, 45, 1, 46, 47, 48, 49, 1, 1, 50, 51, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static int yy_meta[52] = { 0, 1, 1, 2, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static short yy_base[184] = { 0, 0, 0, 231, 232, 228, 232, 232, 47, 0, 0, 68, 217, 43, 178, 45, 12, 15, 202, 185, 22, 179, 39, 34, 50, 189, 54, 36, 35, 49, 52, 184, 77, 220, 61, 232, 217, 0, 213, 0, 0, 52, 81, 80, 0, 0, 0, 0, 186, 170, 174, 170, 200, 179, 172, 181, 61, 232, 160, 167, 83, 232, 163, 160, 193, 172, 162, 163, 155, 169, 150, 158, 149, 163, 232, 166, 232, 0, 232, 150, 152, 147, 232, 151, 157, 154, 156, 140, 153, 152, 232, 146, 164, 232, 232, 232, 133, 232, 135, 141, 149, 132, 133, 232, 139, 142, 132, 140, 145, 126, 232, 127, 125, 232, 232, 131, 93, 138, 133, 123, 232, 124, 133, 131, 117, 119, 126, 232, 113, 232, 112, 112, 113, 113, 108, 113, 122, 103, 103, 232, 102, 103, 232, 100, 112, 103, 108, 232, 123, 102, 92, 232, 55, 89, 232, 102, 232, 91, 90, 232, 93, 81, 87, 86, 232, 86, 75, 232, 82, 71, 69, 232, 77, 232, 76, 66, 232, 232, 232, 232, 130, 134, 138, 104 };
static short yy_def[184] = { 0, 179, 1, 179, 179, 179, 179, 179, 180, 181, 182, 179, 11, 11, 11, 11, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 180, 179, 180, 181, 179, 13, 11, 179, 179, 179, 15, 13, 183, 15, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 183, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 0, 179, 179, 179, 179 };
static short yy_nxt[284] = { 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 4, 4, 4, 4, 4, 4, 4, 4, 4, 22, 4, 4, 32, 4, 4, 4, 4, 4, 4, 30, 4, 4, 35, 179, 45, 45, 47, 47, 48, 50, 49, 54, 57, 55, 51, 58, 35, 68, 161, 64, 60, 69, 61, 59, 74, 57, 162, 36, 39, 40, 40, 62, 57, 70, 72, 65, 71, 73, 41, 60, 42, 36, 61, 66, 74, 57, 43, 60, 67, 61, 86, 60, 74, 61, 90, 87, 131, 41, 77, 178, 42, 177, 176, 175, 174, 173, 60, 43, 172, 61, 60, 171, 74, 61, 90, 170, 169, 168, 167, 166, 132, 34, 165, 164, 34, 37, 163, 37, 37, 38, 160, 38, 38, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149, 148, 147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 89, 88, 85, 84, 83, 82, 81, 80, 79, 78, 76, 34, 33, 75, 63, 56, 53, 52, 46, 44, 33, 179, 3, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179 };
static short yy_chk[284] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 13, 13, 13, 15, 15, 16, 17, 16, 20, 22, 20, 17, 23, 34, 27, 152, 26, 24, 27, 24, 23, 30, 41, 152, 8, 11, 11, 11, 24, 22, 28, 29, 26, 28, 29, 11, 24, 11, 34, 24, 26, 30, 41, 11, 32, 26, 32, 56, 42, 43, 42, 60, 56, 116, 11, 183, 175, 11, 174, 172, 170, 169, 168, 32, 11, 166, 32, 42, 165, 43, 42, 60, 163, 162, 161, 160, 158, 116, 180, 157, 155, 180, 181, 153, 181, 181, 182, 150, 182, 182, 149, 148, 146, 145, 144, 143, 141, 140, 138, 137, 136, 135, 134, 133, 132, 131, 130, 128, 126, 125, 124, 123, 122, 121, 119, 118, 117, 115, 112, 111, 109, 108, 107, 106, 105, 104, 102, 101, 100, 99, 98, 96, 92, 91, 89, 88, 87, 86, 85, 84, 83, 81, 80, 79, 75, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 59, 58, 55, 54, 53, 52, 51, 50, 49, 48, 38, 36, 33, 31, 25, 21, 19, 18, 14, 12, 5, 3, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179 };
static yy_state_type yy_state_buf[16386];
static yy_state_type *yy_state_ptr;
static char *yy_full_match;
static int yy_lp;
char *yytext;
int Parse( char *Executable, char *Path, char *Filename, char *Parameter )
{
  int eax;
  static char *command;
  static Boolean firsttime = 1;
  int returncode;
  int used_popen;
  /* phantom */ char *tmps;
  size_t l;
  if ( Executable == 0 || Executable[0] == 0 )
  {
    l = 2;
    if ( Path )
    {
      l = Executable + 2;
    }
    if ( calloc( 1, l + strlen( Filename ) + strlen( Filename ) ) == 0 )
    {
      __fprintf_chk( stderr, 1, "Parse():  malloc failed\n" );
      exit( 1 );
    }
    if ( Path && Path[0] )
      __sprintf_chk( fclose( yyin ), 1, -1, "%s%s%s", Path, "/", Filename );
    else
      __sprintf_chk( (char*)calloc( 1, l + strlen( Filename ) + strlen( Filename ) ), 1, -1, "%s", Filename );
    yyin = (FILE*)fopen( (char*)calloc( 1, l + strlen( Filename ) + strlen( Filename ) ), "r" );
    if ( yyin == 0 )
    {
      returncode = 1;
      Message( "Can't open %s for reading\n", command );
      return returncode;
    }
    used_popen = 0;
    free( calloc( 1, l + strlen( Filename ) + strlen( Filename ) ) );
    if ( firsttime == 0 )
      goto B17;
    firsttime = 0;
    yylineno = 1;
    yyfilename = Filename;
    if ( PCB )
      SaveTMPData( );
    returncode = yyparse( );
    RemoveTMPData( );
    yy_delete_buffer( yy_current_buffer );
    if ( used_popen )
    {
      if ( pclose( yyin ) == 0 )
      {
        return returncode;
      }
    }
    else
    {
      if ( fclose( yyin ) == 0 )
      {
        return returncode;
      }
    }
    return 1;
  }
  else
  {
    if ( command )
    {
      SaveFree( (void*)command );
      command = 0;
    }
    command = EvaluateFilename( Executable, Path, Filename, Parameter );
    if ( command[0] )
    {
      used_popen = 1;
      yyin = (FILE*)popen( command, "r" );
      if ( yyin == 0 )
        Filename[0] = Filename;
      else
      {
        if ( firsttime == 0 )
          goto B17;
      }
    }
    returncode = 1;
    PopenErrorMessage( command );
    return returncode;
  }
B17:;
  yyrestart( yyin );
}
int ParseElementFile( DataTypePtr Ptr, char *Filename )
{
  int ecx;
  yyPCB = 0;
  yyElement = 0;
  yyData = Ptr;
  yyFont = &PCB->Font;
  Ptr = 0;
}
int ParseLibraryEntry( DataTypePtr Ptr, char *Template )
{
  int ecx;
  int edx;
  yyPCB = 0;
  yyElement = 0;
  yyData = Ptr;
  yyFont = &PCB->Font;
  Ptr = &Template[0];
}
int ParsePCB( PCBTypePtr Ptr, char *Filename )
{
  int ecx;
  int edx;
  yyData = 0;
  yyFont = 0;
  yyElement = 0;
  yyPCB = Ptr;
  Ptr = 0;
}
int ParseFont( FontTypePtr Ptr, char *Filename )
{
  int eax;
  int ecx;
  int edx;
  int r;
  char *path, *p;
  yyPCB = 0;
  yyElement = 0;
  yyFont = Ptr;
  path[0] = __strdup( Settings.FontPath );
  if ( strtok( __strdup( Settings.FontPath ), ":" ) == 0 || *(char*)(strtok( __strdup( Settings.FontPath ), ":" )) == 0 )
    r = 0;
  else
  {
    do
    {
      Message( "Looking for %s in %s\n", Filename, p[0] );
      r = Parse( Settings.FontCommand, p, Filename, 0 );
      if ( r )
      {
        p[0] = strtok( 0, ":" );
      }
      else
      {
        Message( "Found %s in %s\n", Filename, p );
        break;
      }
    }
    while ( strtok( 0, ":" ) == 0 || *(char*)(strtok( 0, ":" )) == 0 );
  }
  free( path );
  return r;
}
int parse_number( double scale )
{
  int eax;
  double fp7;
  double val;
  __isoc99_sscanf( yytext, "%lf", &val );
  return 258;
}
parse_l.c:1321:0x80AD4E1: Endless loop
int yylex( void )
{
  int eax;
  int ecx;
  int edx;
  int ebp_36;
  int ebp_32;
#error unstructured control flow
}
void yyrestart( FILE *input_file )
{
  if ( yy_current_buffer == 0 )
  {
    yy_current_buffer = yy_create_buffer( yyin, 16384 );
  }
  yy_init_buffer( yy_current_buffer, input_file );
  yy_n_chars = yy_current_buffer->yy_n_chars;
  yy_c_buf_p = &yy_current_buffer->yy_buf_pos;
  yytext = &yy_current_buffer->yy_buf_pos;
  yyin = &yy_current_buffer->yy_input_file->_flags;
  yy_hold_char = yy_current_buffer->yy_buf_pos[0];
  return;
}
void yy_switch_to_buffer( YY_BUFFER_STATE new_buffer )
{
  if ( yy_current_buffer != new_buffer )
  {
    if ( yy_current_buffer )
    {
      yy_c_buf_p[0] = yy_hold_char;
      yy_current_buffer->yy_buf_pos = yy_c_buf_p;
      yy_current_buffer->yy_n_chars = yy_n_chars;
    }
    yy_current_buffer = new_buffer;
    yy_n_chars = new_buffer->yy_n_chars;
    yy_c_buf_p = &new_buffer->yy_buf_pos;
    yytext = &new_buffer->yy_buf_pos;
    yyin = &new_buffer->yy_input_file->_flags;
    yy_did_buffer_switch_on_eof = 1;
    yy_hold_char = new_buffer->yy_buf_pos[0];
  }
  return;
}
void yy_load_buffer_state( void )
{
  yy_n_chars = yy_current_buffer->yy_n_chars;
  yy_c_buf_p = &yy_current_buffer->yy_buf_pos;
  yytext = &yy_current_buffer->yy_buf_pos;
  yyin = &yy_current_buffer->yy_input_file->_flags;
  yy_hold_char = yy_current_buffer->yy_buf_pos[0];
  return;
}
YY_BUFFER_STATE yy_create_buffer( FILE *file, int size )
{
  /* phantom */ YY_BUFFER_STATE b;
  if ( calloc( 1, 40 ) == 0 )
    yy_fatal_error( "out of dynamic memory in yy_create_buffer()" );
  *(int*)calloc( 1, 40 )/*.12*/ = size;
  *(int*)calloc( 1, 40 )/*.4*/ = calloc( 1, calloc( 1, 40 ) + 12 + 2 );
  if ( calloc( 1, 40 ) + 4 == 0 )
    yy_fatal_error( "out of dynamic memory in yy_create_buffer()" );
  *(int*)calloc( 1, 40 )/*.20*/ = 1;
  yy_init_buffer( calloc( 1, 40 ), file );
  return calloc( 1, 40 );
}
void yy_delete_buffer( YY_BUFFER_STATE b )
{
  if ( b == 0 )
  {
    return;
  }
  if ( yy_current_buffer == b )
    yy_current_buffer = 0;
  if ( b->yy_is_our_buffer )
  {
    free( &b->yy_ch_buf );
  }
}
void yy_init_buffer( YY_BUFFER_STATE b, FILE *file )
{
  int esi;
  yy_flush_buffer( b );
  b->yy_input_file->_flags = file;
  b->yy_fill_buffer = 1;
  if ( b == 0 || isatty( fileno( file ) ) <= 0 )
  {
  }
  b->yy_is_interactive = 1;
  return;
}
void yy_flush_buffer( YY_BUFFER_STATE b )
{
  if ( b )
  {
    b->yy_n_chars = 0;
    b->yy_ch_buf[0] = 0;
    b->yy_ch_buf[1] = 0;
    b->yy_at_bol = 1;
    b->yy_buffer_status = 0;
    b->yy_buf_pos = b->yy_ch_buf;
    if ( yy_current_buffer == b )
    {
      yy_c_buf_p = &b->yy_ch_buf;
      yytext = &b->yy_ch_buf;
      yy_n_chars = b->yy_n_chars;
      yyin = &b->yy_input_file->_flags;
      yy_hold_char = b->yy_ch_buf[0];
      return;
    }
  }
  return;
}
YY_BUFFER_STATE yy_scan_buffer( char *base, yy_size_t size )
{
  int edx;
  int edi;
  YY_BUFFER_STATE b;
  if ( size <= 1 || *(char*)(base + -2) || *(char*)(base + -1) )
  {
    b = 0;
  }
  b = calloc( 1, sizeof( struct yy_buffer_state ) );
  if ( calloc( 1, 40 ) == 0 )
  {
    yy_fatal_error( "out of dynamic memory in yy_scan_buffer()" );
  }
  *(int*)(ebp_28 + 12) = size + -2 + -2;
  *(int*)(ebp_28 + 4) = base;
  *(int*)(ebp_28 + 8) = base;
  *(int*)(ebp_28 + 20) = 0;
  *ebp_28 = 0;
  *(int*)(ebp_28 + 16) = size + -2 + -2;
  *(int*)(ebp_28 + 24) = 0;
  *(int*)(ebp_28 + 28) = 1;
  *(int*)(ebp_28 + 32) = 0;
  *(int*)(ebp_28 + 36) = 0;
  yy_switch_to_buffer( calloc( 1, 40 ) );
  return b;
}
YY_BUFFER_STATE yy_scan_string( char *yy_str )
{
  yy_size_t len = 0;
  for ( ; yy_str[0]; len++ )
  {
    len++;
  }
  return yy_scan_bytes( yy_str, len );
}
YY_BUFFER_STATE yy_scan_bytes( char *bytes, yy_size_t len )
{
  int edx;
  YY_BUFFER_STATE b;
  /* phantom */ char *buf;
  yy_size_t n = len + 2;
  yy_size_t i;
  if ( calloc( 1, len + 2 ) == 0 )
  {
    yy_fatal_error( "out of dynamic memory in yy_scan_bytes()" );
  }
  if ( len )
  {
    i = 0;
    do
    {
      i++;
    }
    while ( i + 1 < len );
  }
  if ( eax == 0 )
  {
    yy_fatal_error( "bad buffer in yy_scan_bytes()" );
  }
  b->yy_is_our_buffer = 1;
  return b;
}
void yy_fatal_error( char *msg )
{
  __fprintf_chk( stderr, 1, "%s\n", msg );
  exit( 2 );
}
#if 0
#endif
