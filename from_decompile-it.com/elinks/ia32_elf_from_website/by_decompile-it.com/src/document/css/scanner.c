#include "scanner.c.h"
static struct scan_table_info css_scan_table_info[14] = { { 0, { { "0", 57 }
, { 0, 0 }
 }
, 14 }
, { 0, { { "A", 70 }
, { 0, 0 }
 }
, 4 }
, { 0, { { "A", 90 }
, { 0, 0 }
 }
, 25 }
, { 0, { { "a", 102 }
, { 0, 0 }
 }
, 4 }
, { 0, { { "a", 122 }
, { 0, 0 }
 }
, 25 }
, { 0, { { "¡", 255 }
, { 0, 1 }
 }
, 88 }
, { 1, { { " \n\r\t", 7 }
, { 0, 1 }
 }
, 1024 }
, { 1, { { "\n\r", 3 }
, { 0, 1 }
 }
, 32 }
, { 1, { { "-", 1 }
, { 0, 1 }
 }
, 8 }
, { 1, { { ".#@!\"'&lt;-/|^$*", 13 }
, { 0, 1 }
 }
, 512 }
, { 1, { { "\\_", 2 }
, { 0, 1 }
 }
, 24 }
, { 1, { { "[({})];:,.&gt;+~", 13 }
, { 0, 1 }
 }
, 256 }
, { 1, { { "&lt;![CDATA]-&gt;", 11 }
, { 0, 2 }
 }
, 128 }
, { 2, { { 0, 0 }
, { 0, 134778664 }
 }
, 0 }
 };
static struct scanner_string_mapping css_string_mappings[23] = { { "Hz", 264, 261 }
, { "cm", 265, 261 }
, { "deg", 260, 261 }
, { "em", 262, 261 }
, { "ex", 263, 261 }
, { "grad", 260, 261 }
, { "in", 265, 261 }
, { "kHz", 264, 261 }
, { "mm", 265, 261 }
, { "ms", 266, 261 }
, { "pc", 265, 261 }
, { "pt", 265, 261 }
, { "px", 265, 261 }
, { "rad", 260, 261 }
, { "s", 266, 261 }
, { "rgb", 270, 269 }
, { "url", 271, 269 }
, { "charset", 273, 272 }
, { "font-face", 274, 272 }
, { "import", 275, 272 }
, { "media", 276, 272 }
, { "page", 277, 272 }
, { 0, 0, 0 }
 };
struct scanner_info css_scanner_info = { css_string_mappings, css_scan_table_info, &scan_css_tokens, { 0 }, 0 };
struct scanner_token *scan_css_tokens( struct scanner *scanner )
{
  int eax;
  int ecx;
  int ch;
  int edx;
  struct scanner_token *table_end;
  struct scanner_token *current;
  if ( ( ( scanner->table[ scanner->tokens ].type - scanner->current ) >> 4 ) < 1 )
  {
  }
  if ( assert_failed == 0 )
  {
    assert_failed = scanner->current == 0;
    if ( !(_Bool)( scanner->current != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/scanner.h";
      errline = 216;
      elinks_internal( "assertion scanner-&gt;current failed!" );
    }
  }
  if ( 0 )
  {
    memmove( ebp_40, &eax, ebx << 4 );
    scanner->table[ esi >> 4 ].type = scanner->table[ esi >> 4 ].type;
  }
  memset( scanner->current, 0, 160 );
  if ( scanner->position == 0 )
  {
    scanner->tokens = ebx == 0 ? ebx : -1;
    scanner->current = &scanner->table;
    if ( assert_failed == 0 )
    {
      if ( ebx > 9 && scanner->table[ ebx ].type <= ecx + 16 )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/scanner.h";
        errline = 231;
        elinks_internal( "assertion check_scanner(scanner) failed!" );
      }
      else
        assert_failed = 0;
    }
  }
  else
  {
    scanner->tokens = ebx;
    if ( scanner->table->type )
    {
      current = &scanner->table[ scanner->tokens ];
      table_end = &scanner->table[10];
      if ( scanner->table[ scanner->tokens ].type < scanner->table[10].type && scanner->position < scanner->end )
      {
        while ( ( ( css_scanner_info.scan_table[ *(char*)(scanner->position) ]/*.2_2of4*/ & 4 ) & 255 ) == 0 )
        {
          scanner->end[0] = scanner->end;
          do
          {
            scanner->position = 160 + 1 + 1;
            if ( 160 + 1 + 1 < scanner->end )
              continue;
          }
          while ( ( css_scanner_info.scan_table[ *(char*)(160) ]/*.2_2of4*/ & 4 ) & 255 );
          if ( assert_failed == 0 )
          {
            assert_failed = ( scanner->tokens/*.1_1of4*/ & 255 ) == 0;
            if ( !(_Bool)( ( scanner->tokens/*.1_1of4*/ & 255 ) != 0 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/scanner.c";
              errline = 132;
              elinks_internal( "assertion first_char failed!" );
              ebp_60 = ebp_60;
            }
          }
          current->string = &ebx;
          if ( ( ch & 1 ) & 255 )
          {
          }
          else
          {
            if ( ( ( css_scanner_info.scan_table[ current[0].type ] & 2 ) & 255 ) || ebp_56 == '.' )
            {
              if ( 284 + 1 < scanner->end )
              {
                if ( ( css_scanner_info.scan_table[ *(char*)(284 + 1) ]/*.1_1of4*/ & 2 ) & 255 )
                {
                  do
                  {
                    if ( esi + 1 < ebx )
                      continue;
                  }
                  while ( ( css_scanner_info.scan_table[ *(char*)(284 + 1) ]/*.1_1of4*/ & 2 ) & 255 );
                  if ( eax == '.' && ( ( css_scanner_info.scan_table[ *(char*)(257 + 1 + 1 + 1) ]/*.1_1of4*/ & 2 ) & 255 ) )
                  {
                    if ( esi < ebp_32 )
                    {
                      do
                      {
                        if ( ebx <= esi + 1 )
                        {
                        }
                        else
                      }
                      while ( ( css_scanner_info.scan_table[ esi ]/*.1_1of4*/ & 2 ) & 255 );
                    }
                  }
                  else
                  {
                  }
                  if ( eax == '%' )
                  {
                  }
                  else
                  {
                    if ( ( (unsigned char)( css_scanner_info.scan_table[ eax ] ) & 16 ) & 255 )
                    {
                    }
                    else
                    {
                    }
                  }
                }
              }
            }
            else
            {
              if ( ( ecx & 16 ) & 255 )
              {
                if ( scanner->end[1] < scanner->end )
                {
                  do
                  {
                    if ( ( ( css_scanner_info.scan_table[ esi ]/*.1_1of4*/ & 8 ) & 255 ) == 0 )
                    {
                      if ( eax == '(' )
                      {
                        if ( ecx <= esi + 1 )
                        {
                        }
                        else
                        if ( *(char*)(esi + 1) == ')' )
                        {
                          if ( eax == 269 )
                          {
                          }
                          else
                          if ( eax == 271 )
                          {
                            scanner->end[0] = scanner->end;
                            for ( ; edx < ecx; edx++ )
                            {
                              *(int*)(ebp_44 - 1) = ebp_44 - 1;
                              for ( ; ebp_52 <= ecx; ecx-- )
                              {
                                if ( ( ( css_scanner_info.scan_table[ ecx ]/*.2_2of4*/ & 4 ) & 255 ) == 0 )
                                {
                                }
                                else
                                {
                                  //ecx--;
                                }
                                if ( ebp_32 != '\'' )
                                {
                                  if ( ebp_32 == '"' )
                                  {
                                  }
                                  else
                                  {
                                    current->string = &esi;
                                    if ( assert_failed )
                                    {
                                      ebx = 284;
                                    }
                                    else
                                    {
                                      assert_failed = ecx >> 31;
                                      if ( ecx >> 31 )
                                      {
                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/scanner.c";
                                        errline = 207;
                                        elinks_internal( "assertion real_length &gt;= 0 failed!" );
                                      }
                                      else
                                      {
                                        assert_failed = 0;
                                        if ( ebx == 271 && *ebp_44 != ')' )
                                        {
                                          assert_failed = 1;
                                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/scanner.c";
                                          errline = 212;
                                          elinks_internal( "assertion type != CSS_TOKEN_URL || *string == ')' failed!" );
                                          if ( assert_failed )
                                          {
                                          }
                                          else
                                            assert_failed = 0;
                                        }
                                        else
                                        {
                                          assert_failed = 0;
                                          if ( ebx == 269 && esi != ')' )
                                          {
                                            assert_failed = 1;
                                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/scanner.c";
                                            errline = 213;
                                            elinks_internal( "assertion type != CSS_TOKEN_FUNCTION || *string == ')' failed!" );
                                          }
                                          else
                                          {
                                            assert_failed = 0;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                current->string = &esi;
                              }
                            }
                            *(int*)(ebp_44 - 1) = ebp_44 - 1;
                          }
                          if ( assert_failed )
                            continue;
                          else
                          {
                            if ( ebx != 270 || esi == '(' )
                            {
                              assert_failed = 0;
                            }
                            else
                            {
                              assert_failed = 1;
                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/scanner.c";
                              errline = 211;
                              elinks_internal( "assertion type != CSS_TOKEN_RGB || *string == '(' failed!" );
                              if ( assert_failed )
                                continue;
                              else
                              {
                                assert_failed = 0;
                              }
                            }
                          }
                        }
                        else
                        if ( eax != 125 && eax != 123 && eax != 59 )
                        {
                          *(int*)(ebp_32) = ebp_32;
                          do
                          {
                            if ( ecx != '\'' && ecx != '"' )
                            {
                              if ( edx + 1 < ebx )
                              {
                                if ( edx == ')' )
                                {
                                  edi = edi;
                                  scanner = &scanner[0];
                                }
                                else
                                {
                                }
                              }
                            }
                            else
                            {
                              if ( ( eax == 0 ? eax + 1 : esi ) < ebx )
                              {
                              }
                            }
                            scanner = &scanner[0];
                          }
                          while ( ecx != 125 && eax != 123 && scanner->end != 59 );
                          scanner = &scanner[0];
                        }
                        if ( *ebp_44 == ')' )
                          continue;
                      }
                      else
                      {
                      }
                    }
                    else
                  }
                  while ( ecx <= esi + 1 );
                }
                if ( esi == '(' )
                {
                }
              }
              else
              {
                if ( ( ch & 2 ) & 255 )
                {
                  if ( edx == '#' )
                  {
                    if ( ( (unsigned char)( css_scanner_info.scan_table[ *(char*)(0 + 1) ] ) & 4 ) & 255 )
                    {
                      if ( 0 + 1 < scanner->end )
                      {
                        do
                        {
                        }
                        while ( 0 + 1 + 1 + 1 < scanner->end && ( ( css_scanner_info.scan_table[ *(char*)(0 + 1) ]/*.1_1of4*/ & 4 ) & 255 ) );
                      }
                      if ( ( 0 + 1 + 1 + ~current->string == 6 || scanner[0].string == 3 ) && ( ( css_scanner_info.scan_table[ *(char*)(0 + 1 + 1) ]/*.1_1of4*/ & 8 ) & 255 ) == 0 )
                      {
                      }
                      else
                      {
                        if ( scanner->end <= 0 + 1 + 1 || ( ( css_scanner_info.scan_table[ *(char*)(0 + 1 + 1) ]/*.1_1of4*/ & 8 ) & 255 ) == 0 )
                        {
                        }
                        else
                        {
                          while ( esi + 1 < eax && ( ( css_scanner_info.scan_table[ *(char*)(0 + 1 + 1 + 1) ]/*.1_1of4*/ & 8 ) & 255 ) )
                          {
                          }
                        }
                      }
                    }
                    else
                    if ( ( eax & 8 ) & 255 )
                    {
                      if ( scanner->end <= esi )
                      {
                      }
                      else
                      while ( scanner->string[1] < scanner->end && ( ( css_scanner_info.scan_table[ *(char*)(esi + 1) ]/*.1_1of4*/ & 8 ) & 255 ) )
                      {
                      }
                    }
                  }
                  else
                  {
                    if ( edx == '@' )
                    {
                      if ( ( (unsigned char)( css_scanner_info.scan_table[ *(char*)(current + 1) ] ) & 16 ) & 255 )
                      {
                      }
                    }
                    else
                    {
                      if ( edx == '*' )
                      {
                        if ( esi != '=' )
                          continue;
                        else
                        {
                        }
                      }
                      else
                      {
                        if ( edx == '^' )
                        {
                          if ( *(char*)(0 + 1) == '=' )
                          {
                          }
                        }
                        else
                        {
                          if ( edx == '$' )
                          {
                            if ( esi == '=' )
                            {
                            }
                          }
                          else
                          {
                            if ( edx == '|' )
                            {
                              if ( esi == '=' )
                              {
                              }
                            }
                            else
                            {
                              if ( edx == '!' )
                              {
                                ebp_56 = ebp_56;
                                if ( eax )
                                {
                                }
                                else
                                {
                                }
                              }
                              else
                              {
                                if ( edx == '\'' || edx == '"' )
                                {
                                  if ( eax )
                                  {
                                    return eax - esi;
                                    current->string = &scanner->end[1];
                                  }
                                }
                                else
                                {
                                  if ( edx == '-' || ebp_32 )
                                  {
                                    if ( esi == '/' )
                                    {
                                    }
                                    else
                                    if ( esi < scanner->end && css_scanner_info.scan_table[ eax ]/*.1_1of4*/ < 0 )
                                    {
                                      do
                                      {
                                      }
                                      while ( edx + 1 < ebx && css_scanner_info.scan_table[ edx ]/*.1_1of4*/ < 0 );
                                      if ( edx - esi > 1 )
                                      {
                                        if ( ebp_32 )
                                        {
                                          if ( eax != '!' )
                                            goto B115;
                                        }
                                        else
                                        if ( !ebp_44 || *(char*)(edx - 1) != '>' )
                                          goto B115;
                                      }
                                    }
                                  }
                                  else
                                  if ( edx == '/' )
                                  {
                                    if ( scanner->end[1] == '*' )
                                    {
                                      scanner->end[0] = scanner->end;
                                      while ( current->string + 2 + 1 < scanner->end )
                                      {
                                        if ( current->string[2] == '*' && current->string[3] == '/' )
                                        {
                                        }
                                        else
                                        {
                                        }
                                      }
                                    }
                                  }
                                  else
                                  {
                                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/scanner.c";
                                    errline = 343;
                                    elinks_internal( "Someone forgot to put code for recognizing tokens which start with '%c'." );
                                  }
                                }
B115:                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              current[0].type = 284;
              if ( -1 >= 1 )
              {
                current->length = -1;
                current->precedence = eax;
                scanner->position = (unsigned char*)scanner;
                if ( current[0].type == 0 )
                {
                  scanner->position = 0;
                  current -= 16;
                  if ( assert_failed == 0 )
                  {
                    assert_failed = table_end < current;
                    if ( table_end < current )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/scanner.h";
                      errline = 249;
                      elinks_internal( "assertion end &lt;= scanner-&gt;table + SCANNER_TOKENS failed!" );
                    }
                    scanner->tokens = ( current - scanner->table->type ) >> 4;
                    scanner->current = &scanner->table;
                    if ( scanner->end <= scanner->position )
                      scanner->position = 0;
                    if ( assert_failed == 0 )
                    {
                      if ( ( ( current - scanner->table->type ) >> 4 ) > 9 && scanner->table[ ( current - scanner->table->type ) >> 4 ].type <= scanner->current[1].type )
                      {
                        assert_failed = 1;
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/scanner.h";
                        errline = 256;
                        elinks_internal( "assertion check_scanner(scanner) failed!" );
                      }
                      else
                        assert_failed = 0;
                    }
                    if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= scanner->current )
                      break;
                    break;
                  }
                }
                else
                {
                  current = ( current[0].type != 285 ? current[ -1 ].type : current ) + 16;
                  if ( ( current[0].type != 285 ? current[ -1 ].type : current ) + 16 < table_end && scanner->position < scanner->end )
                    continue;
                }
              }
              else
                return &edx;
            }
          }
          current[0].type = eax;
          *(int*)(ebp_56) -= current->string;
          current->length = -1;
          current->precedence = eax;
          scanner->position = (unsigned char*)scanner;
        }
      }
      if ( assert_failed == 0 )
      {
        assert_failed = table_end < current;
      }
    }
  }
  if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= scanner->current )
  {
  }
}
#if 0
#endif
