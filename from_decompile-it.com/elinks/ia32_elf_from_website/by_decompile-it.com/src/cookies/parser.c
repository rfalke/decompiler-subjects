#include "parser.c.h"
struct cookie_str *parse_cookie_str( struct cookie_str *cstr, unsigned char *str )
{
  int edx;
  cstr->nam_end = 0;
  cstr->val_start = 0;
  cstr->val_end = 0;
  cstr[0].str = str;
  if ( str[0] != '=' && str[0] != ';' && str[0] != str )
  {
    cstr->nam_end = str;
    if ( str[0] != ';' )
    {
      if ( str[0] != '=' )
      {
        if ( ( str[0] & 255 ) == 0 )
          goto B10;
      }
      else
      {
        do
        {
          str[0] = str[1];
        }
        while ( str[0] == '=' );
        cstr->val_start = &str[0];
        cstr->val_end = &str[0];
        if ( str[0] != ';' && ( str[0] & 255 ) )
        {
          do
          {
            if ( str[1] == 0 )
              break;
            cstr[0].str = cstr[0].str;
          }
          while ( str[0] != ';' );
          return &cstr[0];
        }
        else
        {
          return &cstr[0];
        }
      }
    }
B10:    cstr->val_start = &str[0];
    cstr->val_end = &str[0];
    return &cstr[0];
  }
  cstr[0].str = 0;
  return &cstr[0];
}
#if 0
#endif
