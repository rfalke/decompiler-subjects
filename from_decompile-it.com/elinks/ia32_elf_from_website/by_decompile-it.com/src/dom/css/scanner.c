#include "scanner.c.h"
static struct dom_scan_table_info css_scan_table_info[14] = { { 0, { 57, "0" }
, 14 }
, { 0, { 70, "A" }
, 4 }
, { 0, { 90, "A" }
, 25 }
, { 0, { 102, "a" }
, 4 }
, { 0, { 122, "a" }
, 25 }
, { 0, { 255, "¡" }
, 88 }
, { 1, { 7, " \n\r\t" }
, 1024 }
, { 1, { 3, "\n\r" }
, 32 }
, { 1, { 1, "-" }
, 8 }
, { 1, { 13, ".#@!\"'&lt;-/|^$*" }
, 512 }
, { 1, { 2, "\\_" }
, 24 }
, { 1, { 13, "[({})];:,.&gt;+~" }
, 256 }
, { 1, { 11, "&lt;![CDATA]-&gt;" }
, 128 }
, { 2, { 0, 0 }
, 0 }
 };
static struct dom_scanner_string_mapping css_string_mappings[23] = { { { 2, "Hz" }
, 264, 261 }
, { { 2, "cm" }
, 265, 261 }
, { { 3, "deg" }
, 260, 261 }
, { { 2, "em" }
, 262, 261 }
, { { 2, "ex" }
, 263, 261 }
, { { 4, "grad" }
, 260, 261 }
, { { 2, "in" }
, 265, 261 }
, { { 3, "kHz" }
, 264, 261 }
, { { 2, "mm" }
, 265, 261 }
, { { 2, "ms" }
, 266, 261 }
, { { 2, "pc" }
, 265, 261 }
, { { 2, "pt" }
, 265, 261 }
, { { 2, "px" }
, 265, 261 }
, { { 3, "rad" }
, 260, 261 }
, { { 1, "s" }
, 266, 261 }
, { { 3, "rgb" }
, 270, 269 }
, { { 3, "url" }
, 271, 269 }
, { { 7, "charset" }
, 273, 272 }
, { { 9, "font-face" }
, 274, 272 }
, { { 6, "import" }
, 275, 272 }
, { { 5, "media" }
, 276, 272 }
, { { 4, "page" }
, 277, 272 }
, { { 0, 0 }
, 0, 0 }
 };
struct dom_scanner_info dom_css_scanner_info = { css_string_mappings, css_scan_table_info, &scan_css_tokens, { 0 }, 0 };
struct dom_scanner_token *scan_css_tokens( struct dom_scanner *scanner )
{
  int eax;
  int ecx;
  int ch;
  int edx;
  struct dom_scanner_token *table_end;
  struct dom_scanner_token *current;
  if ( ( ( scanner->table[ scanner->tokens ].type - scanner->current ) >> 2 ) * -858993459 < 1 )
  {
  }
  if ( assert_failed == 0 )
  {
    assert_failed = scanner->current == 0;
    if ( !(_Bool)( scanner->current != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/scanner.h";
      errline = 251;
      elinks_internal( "assertion scanner-&gt;current failed!" );
    }
  }
  if ( 0 )
  {
    memmove( ebp_40, &edx, ebx * 20 );
  }
  memset( scanner->current, 0, 200 );
  if ( scanner->position == 0 )
  {
    scanner->tokens = ebx == 0 ? ebx : -1;
    scanner->current = &scanner->table;
    if ( assert_failed == 0 )
    {
      if ( ebx > 9 && scanner->table[ ebx ].type <= ecx + 20 )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/scanner.h";
        errline = 266;
        elinks_internal( "assertion check_dom_scanner(scanner) failed!" );
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
        while ( ( ( dom_css_scanner_info.scan_table[ *(char*)(scanner->position) ]/*.2_2of4*/ & 4 ) & 255 ) == 0 )
        {
          scanner->end[0] = scanner->end;
          do
          {
            scanner->position = scanner->current + 1 + 1;
            if ( scanner->current + 1 + 1 < scanner->end )
              continue;
          }
          while ( ( dom_css_scanner_info.scan_table[ *(char*)(scanner->current) ]/*.2_2of4*/ & 4 ) & 255 );
          if ( assert_failed == 0 )
          {
            assert_failed = ( scanner->tokens/*.1_1of4*/ & 255 ) == 0;
            if ( !(_Bool)( ( scanner->tokens/*.1_1of4*/ & 255 ) != 0 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/css/scanner.c";
              errline = 135;
              elinks_internal( "assertion first_char failed!" );
              ebp_60 = ebp_60;
            }
          }
          current->string.string = &ebx;
          if ( ( ch & 1 ) & 255 )
          {
          }
          else
          {
            if ( ( ( dom_css_scanner_info.scan_table[ current[0].type ] & 2 ) & 255 ) || ebp_56 == '.' )
            {
              if ( 284 + 1 < scanner->end )
              {
                if ( ( dom_css_scanner_info.scan_table[ *(char*)(284 + 1) ]/*.1_1of4*/ & 2 ) & 255 )
                {
                  do
                  {
                    if ( esi + 1 < ebx )
                      continue;
                  }
                  while ( ( dom_css_scanner_info.scan_table[ *(char*)(284 + 1) ]/*.1_1of4*/ & 2 ) & 255 );
                  if ( eax == '.' && ( ( dom_css_scanner_info.scan_table[ *(char*)(257 + 1 + 1 + 1) ]/*.1_1of4*/ & 2 ) & 255 ) )
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
                      while ( ( dom_css_scanner_info.scan_table[ esi ]/*.1_1of4*/ & 2 ) & 255 );
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
                    if ( ( (unsigned char)( dom_css_scanner_info.scan_table[ eax ] ) & 16 ) & 255 )
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
                    if ( ( ( dom_css_scanner_info.scan_table[ esi ]/*.1_1of4*/ & 8 ) & 255 ) == 0 )
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
                                if ( ( ( dom_css_scanner_info.scan_table[ ecx ]/*.2_2of4*/ & 4 ) & 255 ) == 0 )
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
                                    current->string.string = &esi;
                                    if ( assert_failed )
                                    {
                                      ebx = 284;
                                    }
                                    else
                                    {
                                      assert_failed = ecx >> 31;
                                      if ( ecx >> 31 )
                                      {
                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/css/scanner.c";
                                        errline = 210;
                                        elinks_internal( "assertion real_length &gt;= 0 failed!" );
                                      }
                                      else
                                      {
                                        assert_failed = 0;
                                        if ( ebx == 271 && *ebp_44 != ')' )
                                        {
                                          assert_failed = 1;
                                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/css/scanner.c";
                                          errline = 215;
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
                                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/css/scanner.c";
                                            errline = 216;
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
                                current->string.string = &esi;
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
                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/css/scanner.c";
                              errline = 214;
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
                                  scanner->current = scanner->current;
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
                    if ( ( (unsigned char)( dom_css_scanner_info.scan_table[ *(char*)(0 + 1) ] ) & 4 ) & 255 )
                    {
                      if ( 0 + 1 < scanner->end )
                      {
                        do
                        {
                        }
                        while ( 0 + 1 + 1 + 1 < scanner->end && ( ( dom_css_scanner_info.scan_table[ *(char*)(0 + 1) ]/*.1_1of4*/ & 4 ) & 255 ) );
                      }
                      if ( ( 0 + 1 + 1 + ~current->string.string == 6 || scanner->table->type == 3 ) && ( ( dom_css_scanner_info.scan_table[ *(char*)(0 + 1 + 1) ]/*.1_1of4*/ & 8 ) & 255 ) == 0 )
                      {
                      }
                      else
                      {
                        if ( scanner->end <= 0 + 1 + 1 || ( ( dom_css_scanner_info.scan_table[ *(char*)(0 + 1 + 1) ]/*.1_1of4*/ & 8 ) & 255 ) == 0 )
                        {
                        }
                        else
                        {
                          while ( esi + 1 < eax && ( ( dom_css_scanner_info.scan_table[ *(char*)(0 + 1 + 1 + 1) ]/*.1_1of4*/ & 8 ) & 255 ) )
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
                      while ( scanner->string[1] < scanner->end && ( ( dom_css_scanner_info.scan_table[ *(char*)(esi + 1) ]/*.1_1of4*/ & 8 ) & 255 ) )
                      {
                      }
                    }
                  }
                  else
                  {
                    if ( edx == '@' )
                    {
                      if ( ( (unsigned char)( dom_css_scanner_info.scan_table[ *(char*)(current + 1) ] ) & 16 ) & 255 )
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
                                    current->string.string = &scanner->end[1];
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
                                    if ( esi < scanner->end && dom_css_scanner_info.scan_table[ eax ]/*.1_1of4*/ < 0 )
                                    {
                                      do
                                      {
                                      }
                                      while ( edx + 1 < ebx && dom_css_scanner_info.scan_table[ edx ]/*.1_1of4*/ < 0 );
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
                                      while ( current->string.string + 2 + 1 < scanner->end )
                                      {
                                        if ( current->string.string[2] == '*' && current->string.string[3] == '/' )
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
                                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/css/scanner.c";
                                    errline = 346;
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
                current->string.length = -1;
                current->precedence = eax;
                scanner->position = (unsigned char*)scanner;
                if ( current[0].type == 0 )
                {
                  scanner->position = 0;
                  current -= 20;
                  if ( assert_failed == 0 )
                  {
                    assert_failed = table_end < current;
                    if ( table_end < current )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/scanner.h";
                      errline = 282;
                      elinks_internal( "assertion end &lt;= scanner-&gt;table + DOM_SCANNER_TOKENS failed!" );
                    }
                    scanner->tokens = ( ( current - scanner->table->type ) >> 2 ) * -858993459;
                    scanner->current = &scanner->table;
                    if ( scanner->end <= scanner->position )
                      scanner->position = 0;
                    if ( assert_failed == 0 )
                    {
                      if ( ( ( current - scanner->table->type ) >> 2 ) * -858993459 > 9 && scanner->table[ ( ( current - scanner->table->type ) >> 2 ) * -858993459 ].type <= scanner->current[1].type )
                      {
                        assert_failed = 1;
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/scanner.h";
                        errline = 289;
                        elinks_internal( "assertion check_dom_scanner(scanner) failed!" );
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
                  current = ( current[0].type != 285 ? current - 20 : current ) + 20;
                  if ( ( current[0].type != 285 ? current - 20 : current ) + 20 < table_end && scanner->position < scanner->end )
                    continue;
                }
              }
              else
                return &edx;
            }
          }
          current[0].type = eax;
          *(int*)(ebp_56) -= current->string.string;
          current->string.length = -1;
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
