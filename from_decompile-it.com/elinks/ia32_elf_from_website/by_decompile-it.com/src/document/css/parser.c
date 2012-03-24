#include "parser.c.h"
void css_parse_properties( struct list_head_elinks *props, struct scanner *scanner )
{
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( scanner[0].string == 0 ) | ( props == 0 ) ) & 1;
    if ( ( ( scanner[0].string == 0 ) | ( props == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
      errline = 30;
      elinks_internal( "assertion props && scanner failed!" );
    {
      while ( 1 )
      {
        struct css_property_info *property_info;
        struct scanner_token *token;
        scanner->tokens = scanner->tokens;
        while ( scanner->tokens >= 1 )
        {
          do
          {
            if ( scanner->current < scanner->table[ scanner->tokens ].type && scanner->current && scanner->current->type != 125 )
            {
              if ( scanner->current->type == 256 )
              {
                if ( scanner->current + 16 < scanner->table[ scanner->tokens ].type && scanner->current[1].type == 58 )
                {
                  if ( css_property_info[0].name )
                  {
                    do
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
                      errline = 57;
                      if ( elinks_strlcasecmp( scanner->current->string, scanner->current->length, css_property_info[1].name, -1, 1 ) == 0 )
                      {
                        if ( skip_scanner_tokens( &scanner[0], 58, 0 ) == 0 )
                        {
                          if ( assert_failed == 0 )
                          {
                            if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= scanner->current )
                            {
                              assert_failed = 0;
                              break;
                            }
                            else
                            {
                              assert_failed = 1;
                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
                              errline = 65;
                              props = "assertion !scanner_has_tokens(scanner) failed!";
                            }
                          }
                          else
                            break;
                        }
                        else
                        {
                          if ( css_property_info[1] && mem_calloc( 1, 24 ) )
                          {
                            *(int*)(mem_calloc( 1, 24 ) + 8) = css_property_info[1].type;
                            *(int*)(mem_calloc( 1, 24 ) + 12) = css_property_info[1].value_type;
                            if ( css_parse_value( &css_property_info[1], mem_calloc( 1, 24 ) + 16, &scanner[0] ) == 0 )
                            {
                              mem_free( mem_calloc( 1, 24 ) );
                              scanner = &scanner[0];
                            }
                            else
                            {
                              *(int*)(mem_calloc( 1, 24 ) + 4) = props->list_head_elinks;
                              *(int*)(mem_calloc( 1, 24 )) = props->list_head_elinks;
                              props->next = mem_calloc( 1, 24 );
                              *(int*)(*(int*)(mem_calloc( 1, 24 )) + 4) = mem_calloc( 1, 24 );
                            }
                          }
                          skip_scanner_tokens( &scanner[0], 59, 256 );
                          break;
                        }
                      }
                      else
                    }
                    while ( css_property_info[1].css_property_info == 0 );
                  }
                }
              }
              else
              {
                if ( scanner->current->type == 123 )
                {
                  scanner->current++;
                  if ( scanner->current + 32 < scanner->table[ scanner->tokens ].type )
                    continue;
                  else
                  {
                    scanner->info->scan( &scanner[0] );
                    scanner->tokens = scanner->tokens;
                    break;
                  }
                }
              }
              skip_scanner_tokens( &scanner[0], 59, 256 );
            }
            else
              break;
          }
          while ( scanner->tokens >= 1 );
          break;
        }
        break;
      }
    }
    }
  }
}
void skip_css_block( struct scanner *scanner )
{
  int edx;
  if ( skip_scanner_tokens( &scanner[0], 123, 512 ) && scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type && token[0] && token->precedence <= 1024 )
  {
    depth = 1;
    while ( scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type )
    {
      token = scanner->current + 16;
      scanner->current++;
      if ( ecx + 32 < scanner->tokens )
      {
        if ( scanner->table[ scanner->tokens ].type <= token[0].type )
          break;
      }
      else
        scanner->info->scan( &scanner->info->mappings->name[0] );
      if ( !token[0].type || depth < 1 || token->precedence > 1024 )
        break;
    }
    return;
  }
  else
  {
    return;
  }
}
struct css_selector *reparent_selector( struct list_head_elinks *sels, struct css_selector *selector, struct css_selector **watch )
{
  struct css_selector *twin = find_css_selector( sels, selector->type, selector->relation, selector->name, -1 );
  if ( twin )
  {
    merge_css_selectors( twin, &selector[0] );
    if ( selector->leaves.next != selector->leaves.next )
    {
      watch[0] = watch[0];
      do
      {
        reparent_selector( &twin->leaves );
      }
      while ( selector->leaves.next == selector->leaves.next );
    }
    if ( watch[0] == selector[0].next )
      watch[0] = twin;
    done_css_selector( &selector[0] );
    return twin;
  }
  else
  {
    if ( selector->next )
    {
      selector->prev = selector->prev;
      &selector->prev = &selector;
    }
    selector->prev = &sels[0].next[0];
    selector = &sels->next[0];
    sels = &selector[0].next[0];
    selector->prev = &selector[0];
    twin = &selector[0];
    return twin;
  }
}
void css_parse_stylesheet( struct css_stylesheet *css, struct uri *base_uri, unsigned char *string, unsigned char *end )
{
  int eax;
  int ecx;
  int edx;
  struct scanner scanner;
{
  struct scanner_token *token;
  init_scanner( &scanner, ebp_340, string, end );
  scanner.tokens = scanner.tokens;
  while ( scanner.tokens >= 1 && scanner.current < scanner.table[ scanner.tokens ].type )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = ( (unsigned char)( ( scanner.current < scanner.table[ scanner.tokens ].type ) ^ 1 ) ? scanner.current : 0 ) == 0;
      if ( !(_Bool)( ( (unsigned char)( ( scanner.current < scanner.table[ scanner.tokens ].type ) ^ 1 ) ? scanner.current : 0 ) != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
        errline = 553;
        elinks_internal( "assertion token failed!" );
      }
    }
    if ( *(int*)((unsigned char)( ( scanner.current < scanner.table[ scanner.tokens ].type ) ^ 1 ) ? scanner.current : 0) - 272 <= 5 )
    {
      switch ( *(int*)(0) )
      {
      case 273:
        skip_scanner_tokens( &scanner, 59, 256 );
        scanner.tokens = scanner.tokens;
        break;
      case 272:
        if ( scanner.tokens >= 1 )
        {
          do
          {
            if ( scanner.current < scanner.table[ scanner.tokens ].type )
            {
              scanner.current++;
              if ( scanner.current + 32 < scanner.table[ scanner.tokens ].type )
              {
                if ( scanner.table[ scanner.tokens ].type <= scanner.current + 16 )
                  continue;
              }
              else
                scanner.info->scan( &scanner );
              if ( scanner.current + 16 )
              {
                if ( scanner.current[1].type == 59 )
                {
                  if ( scanner.tokens >= 1 )
                  {
                    if ( scanner.current < scanner.table[ scanner.tokens ].type )
                    {
                      scanner.current++;
                      if ( scanner.table[ scanner.tokens ].type <= scanner.current + 32 )
                      {
                        scanner.info->scan( &scanner );
                        scanner.tokens = scanner.tokens;
                      }
                    }
                  }
                  else
                    break;
                }
                else
                {
                  if ( scanner.current[1].type == 123 )
                  {
                    skip_css_block( &scanner );
                    scanner.tokens = scanner.tokens;
                  }
                  else
                  {
                  }
                }
              }
            }
          }
          while ( scanner.tokens >= 1 );
          break;
        }
        else
          break;
        break;
      case 275:
        if ( scanner.tokens >= 1 && scanner.current < scanner.table[ scanner.tokens ].type )
        {
          scanner.current++;
          if ( scanner.current + 32 < scanner.table[ scanner.tokens ].type )
          {
            if ( scanner.table[ scanner.tokens ].type <= scanner.current + 16 )
              continue;
          }
          else
          {
          }
          if ( scanner.current + 16 )
          {
            if ( scanner.current->type == 271 || scanner.current == 259 )
            {
              if ( assert_failed == 0 )
              {
                assert_failed = css[0].import == 0;
                if ( !(_Bool)( css[0].import != 0 ) )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
                  errline = 146;
                  elinks_internal( "assertion css-&gt;import failed!" );
                }
              }
              ;
            }
            else
            {
              skip_scanner_tokens( &scanner, 59, 256 );
              scanner.tokens = scanner.tokens;
            }
          }
        }
        break;
      case 274:
      case 276:
      case 277:
        skip_css_block( &scanner );
        scanner.tokens = scanner.tokens;
        break;
      default:
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
        errline = 180;
        elinks_internal( "@-rule parser called without atrule." );
        scanner.tokens = scanner.tokens;
        break;
      }
    }
    else
    {
      while ( scanner.tokens >= 1 && scanner.current < scanner.table[ scanner.tokens ].type )
      {
        if ( assert_failed == 0 )
        {
          assert_failed = scanner.current == 0;
          if ( !(_Bool)( scanner.current != 0 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
            errline = 278;
            elinks_internal( "assertion token failed!" );
            *ebp_264 = scanner.current;
            if ( assert_failed == 0 )
              goto B23;
          }
B23:          assert_failed = 0;
          if ( assert_failed )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
            errline = 279;
            elinks_internal( "assertion !last_fragment failed!" );
            *ebp_264 = *ebp_240;
          }
        }
        if ( scanner.current->type != 125 && *ebp_264 != 123 && *ebp_264 != 59 )
        {
          if ( *ebp_264 != 256 )
          {
            if ( scanner.tokens == 62 )
            {
            }
            else
            {
              if ( edx < 62 )
              {
                if ( edx - 267 <= 1 )
                {
                }
              }
              else
              {
                if ( scanner.tokens != 46 )
                {
                  if ( *(int*)(*(int*)(0) - 272) == 58 )
                  {
                    if ( 1 )
                    {
                      if ( scanner.tokens >= 1 && scanner.current < scanner.table[ scanner.tokens ].type )
                      {
                        scanner.current++;
                        if ( scanner.current + 32 < scanner.table[ scanner.tokens ].type )
                        {
                          if ( scanner.table[ scanner.tokens ].type <= scanner.current + 16 )
                            break;
                        }
                        else
                        {
                          scanner.info->scan( &scanner );
                        }
                        if ( scanner.current + 16 )
                        {
                          if ( scanner.current[1].type != 256 )
                          {
                          }
                          else
                            *(int*)(*(int*)(eax + 12)) = &scanner.current[1].length;
                        }
                        else
                          break;
                      }
                      else
                        break;
                    }
                  }
                }
                else
                if ( scanner.current->type/*.1_1of4*/ != 58 )
                {
                }
              }
              if ( skip_scanner_tokens( &scanner, 44, 0 ) == 0 )
              {
                if ( scanner.tokens >= 1 && scanner.current < scanner.table[ scanner.tokens ].type )
                {
                  scanner.current++;
                  if ( scanner.table[ scanner.tokens ].type <= scanner.current + 32 )
                  {
                    scanner.info->scan( &scanner );
                  }
                }
              }
            }
            if ( edx > 1 )
              continue;
            else
            {
              scanner.current->string++;
              scanner.current->length--;
            }
          }
          else
          if ( 0 )
            *(int*)(*(int*)(eax + 12)) = &scanner.current->length;
          else
            *(int*)(*(int*)(eax + 12)) = &scanner.current->length;
          if ( edx + ebx < scanner.end )
          {
            if ( eax == 46 || eax == 35 )
            {
            }
            else
            {
            }
          }
          if ( scanner.tokens >= 1 && scanner.current < scanner.table[ scanner.tokens ].type )
          {
            scanner.current++;
            if ( scanner.current + 32 < scanner.table[ scanner.tokens ].type )
            {
              if ( scanner.table[ scanner.tokens ].type <= scanner.current + 16 )
                break;
            }
            else
            {
            }
            if ( scanner.current + 16 )
            {
              if ( 0 == 0 )
              {
                if ( css == 0 || edi == 0 )
                {
                }
                *ebp_264 = ebp_264;
                if ( eax == 0 || mem_calloc( 1, 12 ) == 0 )
                  continue;
                else
                {
                  *(int*)(mem_calloc( 1, 12 )) = ebp_32;
                  *(int*)(mem_calloc( 1, 12 ) + 4) = ebp_32;
                  *(int*)(*(int*)(mem_calloc( 1, 12 )) + 4) = mem_calloc( 1, 12 );
                  *(int*)(mem_calloc( 1, 12 ) + 8) = ebx;
                  if ( ecx != 1 )
                    goto B159;
                  if ( edi )
                  {
                  }
                  if ( *ebp_240 == 44 )
                  {
                    if ( scanner.tokens >= 1 && scanner.current < scanner.table[ scanner.tokens ].type )
                    {
                      scanner.current++;
                      if ( scanner.table[ scanner.tokens ].type <= scanner.current + 32 )
                      {
                        scanner.info->scan( &scanner );
                      }
                    }
                  }
                  else
                  if ( eax != 123 )
                  {
                  }
                  else
                    break;
                }
              }
              else
              {
                if ( 2 == 1 )
                {
                  if ( assert_failed == 0 )
                  {
                    assert_failed = ecx == 0;
                    if ( !(_Bool)( ecx != 0 ) )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
                      errline = 383;
                      elinks_internal( "assertion base_sel failed!" );
                      *ebp_264 = ebp_264;
                      *ebp_268 = ebp_268;
                    }
                  }
                  if ( eax == 0 )
                    continue;
                  else
                  {
                    if ( 0 )
                      *(int*)(ebx + 12) = 0;
                    if ( ecx == *(int*)(ebp_236 + 8) )
                      *(int*)(edx + 8) = ebx;
                    if ( edi )
                    {
                      if ( assert_failed == 0 )
                      {
                        assert_failed = 0 == 0;
                        if ( !(_Bool)( 0 != 0 ) )
                        {
                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
                          errline = 411;
                          elinks_internal( "assertion prev_element_selector failed!" );
                        }
                      }
                    }
                  }
                }
                else
                {
                  if ( css == 0 || ( ( ( *(int*)(scanner.current + 16) == 123 ) | ( *(int*)(scanner.current + 16) == 44 ) ) & 1 ) == 0 )
                  {
                  }
                  if ( eax == 0 )
                    continue;
                  else
                  {
                    if ( assert_failed == 0 )
                    {
                      assert_failed = esi == 0;
                      if ( !(_Bool)( 0 != 0 ) )
                      {
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/parser.c";
                        errline = 429;
                        elinks_internal( "assertion prev_element_selector failed!" );
                        *ebp_264 = ebp_264;
                      }
                    }
                    *(int*)(ebx + 12) = 0;
                  }
                }
              }
B159:            }
            else
              break;
          }
          else
            break;
        }
        else
          break;
      }
      if ( 0 )
      {
        if ( esi )
          done_css_selector( 0 );
        mem_free( 0 );
      }
      if ( ebp_284 != ebp_32 )
      {
        if ( skip_scanner_tokens( &scanner, 123, 512 ) == 0 )
        {
          if ( ebp_32 != edi )
          {
            edx = edx;
            do
            {
            }
            while ( ebp_284 != ecx );
            if ( ebp_284 != ebp_28 )
            {
              do
              {
              }
              while ( ebp_284 != *(int*)(ecx + 4) );
            }
            if ( ebp_284 != edx )
            {
              ebx = ebx;
              while ( 1 )
              {
                *(int*)(edx + 4) = *(int*)(eax + 4);
                *(int*)(*(int*)(eax + 4)) = eax;
                mem_free( (void*)eax );
                ebx = ebx;
                if ( ebp_284 == ebx )
                  goto B56;
                else
                {
                  ebx = ebx;
                }
              }
            }
          }
        }
        else
        {
          css_parse_properties( ebp_40, &scanner );
          skip_scanner_tokens( &scanner, 125, 1024 );
          if ( ebp_284 != ebp_32 )
          {
            do
            {
              add_selector_properties( *(int*)(ebp_32 + 8), ebp_40 );
            }
            while ( ebp_284 == ebx );
            *ebp_32 = ebp_32;
          }
          if ( ebp_284 != edx )
          {
            do
            {
            }
            while ( ebp_284 != ebx );
          }
          if ( ebp_28 != ebx )
          {
            do
            {
            }
            while ( ebx != *(int*)(ecx + 4) );
          }
          if ( edx != ebx )
          {
            esi = *ebp_32;
            while ( 1 )
            {
              *(int*)(edx + 4) = *(int*)(eax + 4);
              *(int*)(*(int*)(eax + 4)) = eax;
              mem_free( (void*)eax );
              esi = esi;
              if ( esi == ebx )
                goto B101;
              else
              {
                esi = esi;
              }
            }
          }
B101:          if ( ebp_40 != *ebp_40 )
          {
            do
            {
            }
            while ( *ebp_40 != *(int*)(*(int*)(ebp_40 + 4) + 4) );
          }
          if ( *ebp_40 != ebp_40 )
          {
            while ( 1 )
            {
              *(int*)(esi + 4) = *(int*)(eax + 4);
              *(int*)(*(int*)(eax + 4)) = eax;
              mem_free( (void*)eax );
              if ( edi != ebx )
              {
                edi = *ebp_40;
              }
            }
          }
        }
      }
B56:      skip_scanner_tokens( &scanner, 125, 1024 );
      scanner.tokens = scanner.tokens;
    }
    scanner.tokens = scanner.tokens;
  }
  return;
}
}
#if 0
#endif
