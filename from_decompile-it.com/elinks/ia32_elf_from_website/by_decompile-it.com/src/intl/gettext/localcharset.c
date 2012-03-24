#include "localcharset.c.h"
static unsigned char *charset_aliases;
unsigned char *elinks_locale_charset( void )
{
  int eax;
  int edx;
  unsigned char *codeset;
  unsigned char *aliases;
  aliases[0] = charset_aliases;
  if ( charset_aliases == 0 )
  {
    if ( malloc( ( '/' != 98 ) + 22 ) )
    {
      *(int*)(malloc( ( '/' != 98 ) + 22 )) = 0x7273752f;
      *(int*)(malloc( ( '/' != 98 ) + 22 ) + 4) = 0x62696c2f;
      if ( '/' != 98 )
        *(char*)(malloc( ( '/' != 98 ) + 22 ) + 8) = '/';
      if ( fopen64( (char*)malloc( ( '/' != 98 ) + 22 ), "rb" ) )
      {
        codeset[0] = codeset[0];
        do
        {
          if ( eax != -1 )
          {
            do
            {
              if ( eax == 32 || eax == 10 || eax == 9 )
                continue;
              else
              if ( eax == 35 )
              {
                do
                {
                  if ( eax == 10 )
                    continue;
                  else
                }
                while ( eax != -1 );
                break;
              }
              else
              {
                ungetc( eax, &edi );
                if ( eax > 1 )
                {
                  return strlen( ebp_130 );
                }
              }
            }
            while ( eax != -1 );
          }
          fclose( &edi );
          if ( strlen( ebp_79 ) + strlen( ebp_130 ) + 2 )
            *(char*)(aliases[0] + strlen( ebp_79 ) + strlen( ebp_130 ) + 2) = 0;
            free( malloc( ( '/' != 98 ) + 22 ) );
        }
        while ( eax != 10 );
      }
      aliases[0] = "";
      free( malloc( ( '/' != 98 ) + 22 ) );
    }
    else
      aliases[0] = "";
    charset_aliases = &aliases[0];
  }
  if ( aliases[0] )
  {
    do
    {
      if ( strcmp( nl_langinfo( 14 ) == 0 ? nl_langinfo( 14 ) : "", &aliases[0] ) && ( (unsigned char)( aliases[0] ) != '*' || aliases[1] ) )
      {
        aliases[0] = aliases[ strlen( &aliases[0] ) + 1 ];
        aliases[0] = aliases[ strlen( &aliases[ strlen( &aliases[0] ) + 1 ] ) + 1 ];
      }
      else
      {
        break;
      }
    }
    while ( aliases[0] );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
}
#if 0
#endif
