#include "HTLex.c.h"
char HTlex_buffer[40];
int HTlex_line;
static int lex_cnt;
static BOOLEAN lex_template;
static LexItem lex_pushed_back;
static FILE *cache;
void unlex( LexItem lex_item )
{
  lex_pushed_back = lex_item;
  return;
}
LexItem lex( FILE *fp )
{
  int ch = 0;
  if ( fp != cache )
  {
    cache = fp;
    HTlex_line = 1;
  }
  if ( lex_pushed_back )
  {
    LexItem ret = lex_pushed_back;
    lex_pushed_back = LEX_NONE;
    return ret;
  }
  lex_cnt = 0;
  lex_template = 0;
  while ( 1 )
  {
    ch = _IO_getc( fp );
    switch ( ch + 1 )
    {
    case 0:
    case 10:
    case 11:
    case 14:
    case 33:
    case 41:
    case 42:
    case 45:
    case 59:
    case 65:
      if ( lex_cnt > 0 )
      {
        if ( ch != -1 )
          ungetc( ch, fp );
        if ( lex_template )
        {
          return 9;
        }
        return 8;
      }
      else
      {
      }
      break;
    default:
      if ( lex_cnt <= 38 )
      {
        HTlex_buffer[ lex_cnt ] = ch;
        lex_cnt++;
      }
      HTlex_buffer[ lex_cnt ] = 0;
      if ( ch == 42 )
      {
        lex_template = 1;
      }
      break;
    }
  }
}
char *lex_verbose( LexItem lex_item )
{
  static char msg[70];
  switch ( lex_item )
  {
  case LEX_NONE:
    return "NO-LEX-ITEM";
    break;
  case LEX_EOF:
    return "end-of-file";
    break;
  case LEX_REC_SEP:
    return "record separator (newline)";
    break;
  case LEX_FIELD_SEP:
    return "field separator ':'";
    break;
  case LEX_ITEM_SEP:
    return "item separator ','";
    break;
  case LEX_OPEN_PAREN:
    return "'('";
    break;
  case LEX_CLOSE_PAREN:
    return "')'";
    break;
  case LEX_AT_SIGN:
    return "address qualifier '@'";
    break;
  case LEX_ALPH_STR:
    sprintf( msg, "alphanumeric string '%.*s'", 40, HTlex_buffer );
    return msg;
    break;
  case LEX_TMPL_STR:
    sprintf( msg, "template string '%.*s'", 40, HTlex_buffer );
    return msg;
    break;
  default:
    return "UNKNOWN-LEX-ITEM";
    break;
  }
}
#if 0
#endif
