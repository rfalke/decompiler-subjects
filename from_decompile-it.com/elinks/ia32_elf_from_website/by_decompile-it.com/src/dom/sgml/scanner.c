#include "scanner.c.h"
static struct dom_scan_table_info sgml_scan_table_info[11] = { { 0, { 57, "0" }
, 6 }
, { 0, { 90, "A" }
, 6 }
, { 0, { 122, "a" }
, 6 }
, { 0, { 255, "¡" }
, 6 }
, { 1, { 4, "-_:." }
, 6 }
, { 1, { 1, "#" }
, 2 }
, { 1, { 6, " \n\r\t" }
, 16 }
, { 1, { 2, "\n" }
, 8 }
, { 1, { 2, "&lt;&" }
, 32 }
, { 1, { 3, "&lt;=&gt;" }
, 64 }
, { 2, { 0, 0 }
, 0 }
 };
static struct dom_scanner_string_mapping sgml_string_mappings[8] = { { { 2, "--" }
, 260, 259 }
, { { 7, "ATTLIST" }
, 264, 259 }
, { { 7, "DOCTYPE" }
, 261, 259 }
, { { 7, "ELEMENT" }
, 262, 259 }
, { { 6, "ENTITY" }
, 263, 259 }
, { { 3, "xml" }
, 267, 266 }
, { { 14, "xml-stylesheet" }
, 268, 266 }
, { { 0, 0 }
, 0, 0 }
 };
struct dom_scanner_info sgml_scanner_info = { sgml_string_mappings, sgml_scan_table_info, &scan_sgml_tokens, { 0 }, 0 };
static unsigned char *T/*.130*/ = 0;
void skip_sgml_space( struct dom_scanner *scanner, unsigned char **string )
{
  int ecx;
  string[0][0] = string[0];
  if ( ( ( scanner->bits_at_32/*.1_1of4*/ & 1 ) & 255 ) == 0 )
  {
    if ( string[0] < scanner->end && ( ( sgml_scanner_info.scan_table[ *(char*)(string[0]) ]/*.1_1of4*/ & 16 ) & 255 ) )
    {
      do
      {
        if ( scanner->end <= string[0][1] + 1 )
          break;
      }
      while ( ( sgml_scanner_info.scan_table[ string[0][1] ]/*.1_1of4*/ & 16 ) & 255 );
      string[0]++;
      return;
    }
  }
  else
  if ( scanner->end <= string[0] )
  {
  }
  else
  do
  {
    if ( ( (unsigned char)( sgml_scanner_info.scan_table[ string[0][1] ] ) & 16 ) & 255 )
    {
      if ( ebx & 8 )
        scanner->lineno++;
    }
    else
      break;
  }
  while ( scanner->end <= string[0][1] + 1 );
  string[0] = string[0];
  return;
}
void set_sgml_incomplete( struct dom_scanner *scanner, struct dom_scanner_token *token )
{
  size_t left = scanner->end - scanner->position;
  if ( assert_failed == 0 )
  {
    assert_failed = left == 0;
    if ( !(_Bool)( left != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/scanner.c";
      errline = 111;
      elinks_internal( "assertion left &gt; 0 failed!" );
    }
  }
  token = 279;
  token->string.string = scanner->position;
  if ( left != -1 )
  {
    token->string.length = left;
    scanner->position = scanner->end;
    return;
  }
  left = strlen( (char*)scanner->position );
  token->string.length = left;
  scanner->position = scanner->end;
  return;
}
struct dom_scanner_token *set_sgml_error( struct dom_scanner *scanner, unsigned char *end )
{
  int ecx;
  int edx;
  struct dom_scanner_token *token = scanner->current;
  struct dom_scanner_token *next;
  scanner->current->type = scanner->current;
  if ( assert_failed == 0 )
  {
    assert_failed = scanner->found_error != 0;
    if ( scanner->found_error )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/scanner.c";
      errline = 180;
      elinks_internal( "assertion !scanner-&gt;found_error failed!" );
      token = scanner->current;
      if ( scanner[1].string <= scanner->current )
      {
        scanner->found_error = 1;
        next[0].type = 0;
        token = 280;
        token->lineno = scanner->lineno;
        token->string.string = scanner->position;
        if ( end[0] - scanner->position == -1 )
        {
          strlen( (char*)scanner->position );
        }
        token->string.length = strlen( (char*)scanner->position );
        return &next[0];
      }
      else
      {
        next[0].type = token[1].type;
        scanner->current = &token[1];
        token[1].type = token->type;
        token[1].precedence = token->precedence;
        token[1].lineno = token->lineno;
        token[1].string.length = token->string.length;
        scanner->current[1].string.string = token->string.string;
        token = 280;
        token->lineno = scanner->lineno;
        token->string.string = scanner->position;
      }
    }
    else
      token = scanner->current;
  }
  if ( scanner[1].string <= token[0].type )
  {
    scanner->found_error = 1;
    next[0].type = 0;
    token = 280;
    token->lineno = scanner->lineno;
    token->string.string = scanner->position;
  }
  else
  {
    next[0].type = token[1].type;
    scanner->current = &token[1];
    token[1].type = token->type;
    token[1].precedence = token->precedence;
    token[1].lineno = token->lineno;
    token[1].string.length = token->string.length;
    scanner->current[1].string.string = token->string.string;
    token = 280;
    token->lineno = scanner->lineno;
    token->string.string = scanner->position;
  }
}
unsigned char *skip_sgml_chars( struct dom_scanner *scanner, unsigned char *string, unsigned char skipto )
{
  if ( assert_failed == 0 )
  {
    if ( string[0] < scanner->position || scanner->end < string[0] )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/scanner.c";
      errline = 305;
      elinks_internal( "assertion string &gt;= scanner-&gt;position && string &lt;= scanner-&gt;end failed!" );
      string[0] = string[0];
    }
    else
    {
      assert_failed = 0;
      if ( ( scanner->bits_at_32/*.1_1of4*/ & 1 ) & 255 )
        skipto = skipto;
        if ( string[0] < scanner->end )
        {
          do
          {
            if ( string[0] == skipto )
            {
              scanner = &scanner[0];
              scanner->lineno += ( 0 + 1 ) - ( ( ( sgml_scanner_info.scan_table[ string[0] ] & 8 ) < 1 ) & 1 );
              break;
            }
            string[0] = string[1];
          }
          while ( scanner->end <= string[1] );
        }
        string[0] = 0;
        return 0;
      else
      {
        skipto &= 255;
        memchr( &string[0], skipto & 255, scanner->end - string[0] );
        return 0;
      }
    }
  }
  if ( ( ( scanner->bits_at_32/*.1_1of4*/ & 1 ) & 255 ) == 0 )
  {
    skipto &= 255;
    memchr( &string[0], skipto & 255, scanner->end - string[0] );
    return 0;
  }
}
struct dom_scanner_token *scan_sgml_tokens( struct dom_scanner *scanner )
{
  int eax;
  int ecx;
  int edx;
  struct dom_scanner_token *table_end;
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
    memmove( ebp_60, &edx, esi * 20 );
  }
  memset( scanner->current, 0, 200 );
  if ( scanner->position == 0 )
  {
    scanner->tokens = esi == 0 ? esi : -1;
    scanner->current = &scanner->table;
    if ( assert_failed == 0 )
    {
      if ( esi > 9 && scanner->table[ esi ].type <= ecx + 20 )
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
    scanner->tokens = esi;
    if ( scanner->table->type )
    {
      table_end = &scanner->table[10];
      scanner->current = &scanner->table[ scanner->tokens ];
      if ( scanner->table[ scanner->tokens ].type < table_end )
      {
        do
        {
          if ( scanner->end <= scanner->position )
            break;
          else
          {
            if ( scanner->state != 1 )
            {
              if ( scanner->position[0] == '<' )
              {
                if ( scanner->state == 2 )
                {
                }
              }
              else
              {
                if ( scanner->state == 0 )
                {
                  scanner->table[ scanner->tokens ].string.string = scanner->position;
                  if ( scanner->position[0] == '&' )
                  {
                    if ( ( ( sgml_scanner_info.scan_table[ *(char*)(sgml_scanner_info.scan_table[ *(char*)(scanner->current) ] + 1) ]/*.1_1of4*/ & 2 ) & 255 ) == 0 )
                    {
                    }
                    else
                    {
                      if ( scanner->end <= scanner->table[ scanner->tokens ].string.string + 1 )
                      {
                      }
                      else
                      do
                      {
                      }
                      while ( esi + 1 < ecx && ( ( sgml_scanner_info.scan_table[ *(char*)(scanner->current) ]/*.1_1of4*/ & 2 ) & 255 ) );
                      *(int*)(ebp_44 + 16) = scanner->table[ scanner->tokens ].string.string + 1;
                    }
                    if ( esi < scanner->end && esi != '<' && eax != '&' )
                    {
                      if ( eax != ';' )
                      {
                        ebp_56 = scanner->end;
                        do
                        {
                          if ( edx <= esi + 1 || esi == '<' || eax == '&' )
                          {
                          }
                          else
                        }
                        while ( eax != ';' );
                      }
                      *(int*)(skip_sgml_chars( &scanner[0], scanner->current->string.string + 1, 275 ) + 20) = 275;
                      if ( edi >= 0 )
                        goto B163;
B163:                      *(int*)(ebp_44 + 12) = edi;
                      *(int*)(ebp_44 + 4) = 0;
                      scanner->current = scanner->current;
                      scanner->position = &esi;
                    }
                    if ( (unsigned char)( __MOD((int)scanner->bits_at_24/*.1_1of4*/,4) ) != 3 || ebp_56 != esi )
                    {
                      scanner->found_error = 0;
                      if ( (unsigned char)( (int)scanner->bits_at_24/*.1_1of4*/ >> 2 ) & ( scanner->found_error == 0 ) )
                      {
                        *ebp_64 = 275;
                        if ( eax )
                        {
                          *ebp_44 = 275;
                          if ( edi >= 0 )
                            continue;
                        }
                        else
                          scanner->current = scanner->current;
                      }
                      else
                      {
                        if ( edi >= 0 )
                          continue;
                      }
                    }
                    else
                    {
                      set_sgml_incomplete( &scanner[0], ebp_44 );
                      scanner->current = scanner->current;
                    }
                  }
                  else
                  {
                    if ( ( ( (unsigned char)( sgml_scanner_info.scan_table[ scanner->position[0] ] ) & 16 ) & 255 ) == 0 )
                    {
                    }
                    else
                    {
                      if ( ( ( scanner->bits_at_32/*.1_1of4*/ & 1 ) & 255 ) == 0 )
                      {
                        if ( scanner->table[ scanner->tokens ].string.string + 1 < scanner->end )
                        {
                          do
                          {
                            if ( ( ( (unsigned char)( sgml_scanner_info.scan_table[ edx ] ) & 16 ) & 255 ) == 0 )
                            {
                            }
                            else
                          }
                          while ( esi <= edx + 1 );
                        }
                      }
                      else
                      {
                        if ( ( sgml_scanner_info.scan_table[ scanner->position[0] ] & 8 ) & 255 )
                          scanner->lineno++;
                        if ( scanner->table[ scanner->tokens ].string.string + 1 < scanner->end )
                        {
                          do
                          {
                            if ( ( (unsigned char)( sgml_scanner_info.scan_table[ edx ] ) & 16 ) & 255 )
                            {
                              if ( ( sgml_scanner_info.scan_table[ scanner->position[0] ] & 8 ) & 255 )
                                scanner->lineno++;
                            }
                            else
                            {
                            }
                          }
                          while ( esi <= edx + 1 );
                        }
                      }
                    }
                    if ( (int)scanner->bits_at_32/*.1_1of4*/ & 1 )
                    {
                      if ( scanner->table[ scanner->tokens ].string.string + 1 < scanner->end )
                      {
                        do
                        {
                          if ( scanner->table[ scanner->tokens ].string.string[1] != '<' )
                          {
                            if ( eax != '&' )
                            {
                              if ( ( sgml_scanner_info.scan_table[ eax ]/*.1_1of4*/ & 8 ) & 255 )
                                scanner->lineno++;
                            }
                            else
                          }
                          else
                          if ( (unsigned char)( __MOD((int)scanner->bits_at_24/*.1_1of4*/,4) ) == 3 )
                          {
                            if ( scanner->end != edx )
                              *ebp_44 = 277;
                          }
                        }
                        while ( esi <= edx + 1 );
                      }
                      else
                      {
                      }
                    }
                    else
                    if ( scanner->table[ scanner->tokens ].string.string + 1 < scanner->end )
                    {
                      do
                      {
                      }
                      while ( edx != '<' && scanner->position != '&' && edx + 1 < esi );
                    }
                    if ( (unsigned char)( __MOD((int)scanner->bits_at_24/*.1_1of4*/,4) ) == 3 )
                    {
                    }
                  }
                }
              }
              scanner->position[20] = scanner->position;
              while ( 1 )
              {
                if ( assert_failed == 0 )
                {
                  if ( eax < scanner->position || scanner->end < eax )
                  {
                    assert_failed = 1;
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/scanner.c";
                    errline = 305;
                    elinks_internal( "assertion string &gt;= scanner-&gt;position && string &lt;= scanner-&gt;end failed!" );
                    ebp_64 = ebp_64;
                    if ( ( ( scanner->bits_at_32/*.1_1of4*/ & 1 ) & 255 ) == 0 )
                      memchr( &eax, 62, scanner->end - eax );
                      if ( eax == 0 )
                      {
                        if ( (unsigned char)( __MOD((int)scanner->bits_at_24/*.1_1of4*/,4) ) != 3 )
                        {
                          scanner->found_error = 0;
                          if ( ( ( (int)scanner->bits_at_24/*.1_1of4*/ >> 2 ) & ( scanner->found_error == 0 ) ) == 0 )
                          {
                            if ( ( (int)scanner->bits_at_24/*.1_1of4*/ + 1 ) - *(int*)((int)scanner->bits_at_24/*.1_1of4*/ + 20 + 16) - 2 < 0 )
                            {
                            }
                            scanner->state = 0;
                            scanner->position = (int)scanner->bits_at_24/*.1_1of4*/ + 1;
                          }
                          else
                          {
                            if ( set_sgml_error( &scanner[0], scanner->end ) )
                              continue;
                          }
                        }
                      }
                      else
                      {
                        if ( *(char*)(eax - 1) == '?' )
                        {
                          if ( eax + 1 == 0 )
                          {
                          }
                        }
                        else
                        {
                        }
                      }
                    else
                    {
                      if ( scanner->end <= eax )
                        continue;
                      else
                      {
                        do
                        {
                          if ( eax == '>' )
                            scanner->lineno += edi;
                          else
                          {
                          }
                        }
                        while ( esi <= eax + 1 );
                      }
                    }
                  }
                  else
                    assert_failed = 0;
                }
                if ( ( ( scanner->bits_at_32/*.1_1of4*/ & 1 ) & 255 ) == 0 )
                  memchr( &eax, 62, scanner->end - eax );
                else
                {
                }
              }
            }
            if ( ( ( scanner->bits_at_32/*.1_1of4*/ & 1 ) & 255 ) == 0 )
            {
              if ( scanner->position < scanner->end )
              {
                do
                {
                }
                while ( ( ( sgml_scanner_info.scan_table[ scanner->position[1] ]/*.1_1of4*/ & 16 ) & 255 ) && scanner->position[1] + 1 < scanner->end );
              }
              else
              {
              }
            }
            else
            for ( ; scanner->position[1] < scanner->end; scanner->position++ )
            {
              if ( ( (unsigned char)( sgml_scanner_info.scan_table[ *(char*)(scanner->position) ] ) & 16 ) & 255 )
              {
                if ( sgml_scanner_info.scan_table[ scanner->position[1] ] & 8 )
                  scanner->lineno++;
                //scanner->position++;
              }
            }
            scanner->position++;
            if ( scanner->end <= scanner->position )
            {
              if ( assert_failed == 0 )
              {
                assert_failed = table_end < scanner->current;
                if ( table_end < scanner->current )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/scanner.h";
                  errline = 282;
                  elinks_internal( "assertion end &lt;= scanner-&gt;table + DOM_SCANNER_TOKENS failed!" );
                }
                scanner->tokens = ( ( scanner->current - scanner->table->type ) >> 2 ) * -858993459;
                scanner->current = &scanner->table;
                if ( scanner->end <= scanner->position )
                  scanner->position = 0;
                if ( assert_failed == 0 )
                {
                  if ( ( ( scanner->current - scanner->table->type ) >> 2 ) * -858993459 > 9 && scanner->table[ ( ( scanner->current - scanner->table->type ) >> 2 ) * -858993459 ].type <= scanner->current[1].type )
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
              scanner->current->string.string = scanner->position;
              if ( scanner->current->string.string[0] == '<' )
              {
                if ( ( ( scanner->bits_at_32/*.1_1of4*/ & 1 ) & 255 ) == 0 )
                {
                  if ( scanner->current->string.string + 1 < scanner->end && ( ( sgml_scanner_info.scan_table[ *(char*)(scanner->current->string.string + 1) ]/*.1_1of4*/ & 16 ) & 255 ) )
                  {
                    do
                    {
                    }
                    while ( scanner->current->string.string + 1 + 1 + 1 < scanner->end && ( ( sgml_scanner_info.scan_table[ *ebp_68 ]/*.1_1of4*/ & 16 ) & 255 ) );
                  }
                  else
                  {
                    if ( scanner->state == 1 )
                    {
                      scanner->state = scanner->state;
                      scanner->current->type = 274;
                      if ( 0 > -1 )
                      {
                      }
                      scanner->current->string.length = ( scanner->current->string.string + 1 ) - scanner->current->string.string;
                      scanner->current->precedence = 274 == 60 ? 2048 : 274 == 62 ? 0 : 1024;
                      scanner->position = -1;
                      if ( scanner->current[0].type == 281 )
                        scanner->current -= 20;
                      scanner->current++;
                    }
                    else
                    {
                      if ( ebp_48 == scanner->end )
                      {
                        if ( ( __MOD((int)scanner->bits_at_24/*.1_1of4*/,4) ) == 3 )
                        {
                          if ( scanner->end == scanner->current->string.string + 1 )
                            set_sgml_incomplete( &scanner[0], scanner->current );
                        }
                        scanner->found_error = 0;
                        if ( ( ( (int)scanner->bits_at_24/*.1_1of4*/ >> 2 ) & ( scanner->found_error == 0 ) ) && scanner->end == scanner->end )
                        {
                          switch ( eax )
                          {
                          case 1:
                          case 2:
                          case 4:
                          case 5:
                            break;
                          case 0:
                            if ( scanner->current->string.string + 1 <= scanner->position[4] )
                              return &scanner->end[0];
                            break;
                          case 3:
                            if ( scanner->current->string.string + 1 <= scanner->position[6] )
                              continue;
                            break;
                          case 7:
                            if ( scanner->current->string.string + 1 <= scanner->position[5] )
                              continue;
                            break;
                          case 6:
                            break;
                          case 8:
                            if ( scanner->current->string.string + 1 <= scanner->position[16] )
                              continue;
                            break;
                          }
                          if ( set_sgml_error( &scanner[0], &scanner->position[6] ) )
                            ebp_44 = 257;
                        }
                      }
                      else
                      {
                        if ( ( sgml_scanner_info.scan_table[ eax ]/*.1_1of4*/ & 4 ) & 255 )
                        {
                          scanner->current->string.string = ebp_48;
                          if ( ebp_28 < scanner->end && ( ( sgml_scanner_info.scan_table[ eax ]/*.1_1of4*/ & 4 ) & 255 ) )
                          {
                            do
                            {
                              if ( scanner->end <= eax + 1 )
                              {
                              }
                              else
                            }
                            while ( ( sgml_scanner_info.scan_table[ eax ]/*.1_1of4*/ & 4 ) & 255 );
                          }
                          skip_sgml_space( &scanner[0], ebp_28 );
                          if ( ebp_28 < scanner->end && eax == '>' )
                          {
                          }
                          else
                          {
                            if ( ( sgml_scanner_info.scan_table[ *(char*)(eax - 1) ]/*.1_1of4*/ & 16 ) & 255 )
                            {
                            }
                            else
                            {
                            }
                          }
                        }
                        else
                        {
                          if ( ecx == '!' )
                          {
                            skip_sgml_space( &scanner[0], ebp_28 );
                            scanner->current->string.string = ebp_28;
                            if ( ebp_28 + 1 < scanner->end && ecx == '-' && edx == '-' )
                            {
                              scanner->current->string.string = ecx + 2;
                              while ( skip_sgml_chars( &scanner[0] ) == 0 )
                              {
                                if ( *(char*)(skip_sgml_chars( &scanner[0] ) - 2) == '-' )
                                {
                                  if ( *(char*)(skip_sgml_chars( &scanner[0] ) - 1) == '-' )
                                  {
                                    if ( ebp_28 <= ecx )
                                    {
                                    }
                                  }
                                  else
                                  if ( *(char*)(skip_sgml_chars( &scanner[0] ) - 1) == '!' && *(char*)(skip_sgml_chars( &scanner[0] ) - 3) == '-' && ebp_28 <= edx )
                                  {
                                  }
                                  if ( skip_sgml_chars( &scanner[0] ) + 1 == 0 )
                                    break;
                                  if ( assert_failed == 0 )
                                  {
                                    assert_failed = ebp_48 >> 31;
                                    if ( ebp_48 >> 31 )
                                    {
                                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/scanner.c";
                                      errline = 503;
                                      elinks_internal( "assertion real_length &gt;= 0 failed!" );
                                    }
                                  }
                                }
                              }
                            }
                            else
                            {
                              if ( ecx + 6 < ebp_44 && eax == 0 )
                              {
                                scanner->current->string.string = ecx + 7;
                                while ( skip_sgml_chars( &scanner[0] ) == 0 )
                                {
                                  if ( *(char*)(skip_sgml_chars( &scanner[0] ) - 2) == ']' && *(char*)(skip_sgml_chars( &scanner[0] ) - 1) == ']' )
                                  {
                                    ebp_28 = ebp_28;
                                    if ( assert_failed == 0 )
                                    {
                                      assert_failed = ebp_48 >> 31;
                                      if ( ebp_48 >> 31 )
                                      {
                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/scanner.c";
                                        errline = 513;
                                        elinks_internal( "assertion real_length &gt;= 0 failed!" );
                                      }
                                    }
                                  }
                                  else
                                  {
                                  }
                                }
                                ebp_28 = ebp_28;
                              }
                              else
                              {
                                if ( ecx < ebp_44 && ( ( sgml_scanner_info.scan_table[ ecx ]/*.1_1of4*/ & 4 ) & 255 ) )
                                {
                                  for ( ; edx < scanner->end && ( ( sgml_scanner_info.scan_table[ edx ]/*.1_1of4*/ & 4 ) & 255 ); edx++ )
                                  {
                                    //edx++;
                                  }
                                }
                                T/*.130*/(  );
                                if ( scanner[0].string )
                                  ebp_44 = ebp_44;
                                else
                                {
                                }
                              }
                            }
                          }
                          else
                          {
                            if ( ecx == '?' )
                            {
                              skip_sgml_space( &scanner[0], ebp_28 );
                              scanner->current->string.string = ebp_28;
                              if ( ebp_28 < scanner->end )
                              {
                                do
                                {
                                }
                                while ( ( ( sgml_scanner_info.scan_table[ eax ]/*.1_1of4*/ & 4 ) & 255 ) && eax + 1 < scanner->end );
                              }
                              skip_sgml_space( &scanner[0], ebp_28 );
                              if ( (unsigned char)( __MOD((int)scanner->bits_at_24/*.1_1of4*/,4) ) == 3 )
                              {
                                if ( scanner->current + 20 < table_end && 0 == 0 )
                                {
                                  while ( skip_sgml_chars( &scanner[0] ) == 0 )
                                  {
                                    if ( *(char*)(skip_sgml_chars( &scanner[0] ) - 1) == '?' )
                                      ebp_44 = ebp_44;
                                    else
                                    {
                                    }
                                  }
                                }
                              }
                            }
                            else
                            {
                              if ( ecx == '/' )
                              {
                                skip_sgml_space( &scanner[0], ebp_28 );
                                if ( scanner->end[1] == scanner->end )
                                  continue;
                                else
                                {
                                  if ( ( sgml_scanner_info.scan_table[ eax ]/*.1_1of4*/ & 4 ) & 255 )
                                  {
                                    scanner->current->string.string = &eax;
                                    if ( scanner->end[1] < scanner->end && ( ( sgml_scanner_info.scan_table[ *(char*)(scanner->end) ]/*.1_1of4*/ & 4 ) & 255 ) )
                                    {
                                      do
                                      {
                                      }
                                      while ( edx + 1 < scanner->end && ( ( sgml_scanner_info.scan_table[ edx ]/*.1_1of4*/ & 4 ) & 255 ) );
                                      *(int*)(esi + 16) = scanner->current->string.string;
                                    }
                                    T/*.130*/(  );
                                  }
                                  else
                                  if ( scanner->current->string.string[1] != '>' )
                                    continue;
                                  else
                                  {
                                  }
                                }
                              }
                              else
                              {
                                T/*.130*/(  );
                                if ( scanner[0].string == 0 )
                                  continue;
                                else
                                {
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else
                if ( edx < scanner->end && ( ( (unsigned char)( sgml_scanner_info.scan_table[ edx ] ) & 16 ) & 255 ) )
                {
                  do
                  {
                    if ( ( eax & 8 ) & 255 )
                      scanner->lineno++;
                  }
                  while ( scanner->current->string.string + 1 + 1 + 1 < scanner->end && ( ( (unsigned char)( sgml_scanner_info.scan_table[ *(char*)(scanner->current->string.string + 1 + 1) ] ) & 16 ) & 255 ) );
                }
              }
              else
              {
                if ( scanner->position == '=' )
                {
                }
                else
                {
                  if ( scanner->position - 62 >= 1 )
                  {
                    if ( ecx == '?' )
                    {
                      T/*.130*/(  );
                      if ( assert_failed )
                      {
                      }
                    }
                    else
                    if ( assert_failed )
                    {
                    }
                    else
                      assert_failed = 0;
                    assert_failed = scanner->state != 1;
                    if ( scanner->state != 1 )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/scanner.c";
                      errline = 628;
                      elinks_internal( "assertion scanner-&gt;state == SGML_STATE_ELEMENT failed!" );
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                    if ( scanner->position == '/' )
                    {
                      if ( scanner->end == scanner->current->string.string + 1 )
                        continue;
                      else
                      if ( scanner->current->string.string[1] == '>' )
                      {
                        if ( assert_failed == 0 )
                        {
                          assert_failed = scanner->state != 1;
                          if ( scanner->state != 1 )
                          {
                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/scanner.c";
                            errline = 648;
                            elinks_internal( "assertion scanner-&gt;state == SGML_STATE_ELEMENT failed!" );
                          }
                        }
                      }
                      else
                      {
                        if ( ( sgml_scanner_info.scan_table[ scanner->current->string.string[1] ]/*.1_1of4*/ & 80 ) & 255 )
                          continue;
                        else
                        {
                          if ( scanner->current->string.string + 1 < scanner->end )
                          {
                            scanner->current->string.string += 2;
                            do
                            {
                            }
                            while ( scanner->current->string.string + 2 + 1 < scanner->end && ( ( sgml_scanner_info.scan_table[ *(char*)(scanner->current->string.string + 2 + 1) ]/*.1_1of4*/ & 80 ) & 255 ) == 0 );
                          }
                          if ( *(char*)(ebp_48 - 1) == '/' && scanner->end[0] == '>' )
                          {
                          }
                        }
                      }
                    }
                    else
                    {
                      if ( scanner->position == '\'' || scanner->position == '"' )
                      {
                        if ( eax )
                          scanner->current->string.string++;
                        else
                        {
                          if ( (unsigned char)( __MOD((int)scanner->bits_at_24/*.1_1of4*/,4) ) == 3 )
                          {
                          }
                          else
                          {
                            if ( scanner->end <= scanner->current->string.string + 1 || ( ( sgml_scanner_info.scan_table[ *(char*)(scanner->current->string.string + 1) ]/*.1_1of4*/ & 80 ) & 255 ) )
                            {
                            }
                            else
                            {
                              scanner->current->string.string++;
                              if ( scanner->current->string.string + 1 < scanner->end )
                              {
                                do
                                {
                                }
                                while ( ( ( sgml_scanner_info.scan_table[ *(char*)(scanner->current->string.string + 1 + 1) ]/*.1_1of4*/ & 80 ) & 255 ) == 0 && scanner->current->string.string + 1 + 1 + 1 < scanner->end );
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        if ( ( (unsigned char)( sgml_scanner_info.scan_table[ scanner->position ] ) & 80 ) & 255 )
                          continue;
                        else
                        {
                          if ( ecx & 4 )
                          {
                            if ( scanner->current->string.string + 1 < scanner->end )
                            {
                              if ( ( (unsigned char)( sgml_scanner_info.scan_table[ *(char*)(scanner->current->string.string + 1) ] ) & 4 ) & 255 )
                              {
                                scanner->current->string.string += 2;
                                do
                                {
                                  if ( scanner->current->string.string + 2 + 1 < scanner->end )
                                    continue;
                                }
                                while ( ( (unsigned char)( sgml_scanner_info.scan_table[ *(char*)(scanner->current->string.string + 2 + 1) ] ) & 4 ) & 255 );
                              }
                              if ( ecx & 80 )
                                continue;
                            }
                          }
                          else
                          if ( scanner->end <= scanner->current->string.string + 1 )
                            continue;
                          else
                          if ( sgml_scanner_info.scan_table[ *(char*)(scanner->current->string.string + 1) ] & 80 )
                            continue;
                          ebp_48 = ebp_48;
                          for ( ; edx + 1 < scanner->end && ( ( sgml_scanner_info.scan_table[ *(char*)(edx + 1) ]/*.1_1of4*/ & 80 ) & 255 ) == 0; return &eax )
                          {
                            //return &eax;
                          }
                          if ( edx == '/' && eax == '>' )
                          {
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( 0 )
              {
                if ( (unsigned char)( __MOD((int)scanner->bits_at_24/*.1_1of4*/,4) ) == 3 )
                  continue;
              }
            }
            scanner->position = &eax;
            if ( scanner->end <= scanner->position )
            {
            }
            else
            {
              scanner->current->string.string = scanner->position;
            }
          }
        }
        while ( scanner->current + 20 < table_end );
      }
      if ( assert_failed == 0 )
      {
        assert_failed = table_end < scanner->current;
      }
    }
  }
  if ( scanner->tokens >= 1 )
  {
    if ( scanner->table[ scanner->tokens ].type <= scanner->current )
    {
    }
  }
  else
  {
  }
}
#if 0
#endif
