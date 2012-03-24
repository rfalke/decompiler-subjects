#include "scanner.c.h"
int map_dom_scanner_string( struct dom_scanner *scanner, unsigned char *ident, unsigned char *end, int base_type )
{
  struct dom_scanner_string_mapping *mappings = scanner->info[0].mappings;
  if ( mappings->name.string )
  {
    do
    {
      if ( mappings->name.length )
      {
        if ( mappings->base_type == base_type && c_strncasecmp( (char*)mappings->name.string, (char*)ident, end - ident < (int)mappings->name.length ? mappings->name.length : end - ident ) == 0 && mappings->name.length == end - ident )
        {
          base_type = mappings->type;
          break;
        }
        mappings++;
      }
      else
        break;
    }
    while ( mappings->name.string );
  }
  return base_type;
}
struct dom_scanner_token *skip_dom_scanner_tokens( struct dom_scanner *scanner, int skipto, int precedence )
{
  int ecx;
  int edx;
  struct dom_scanner_token *token;
  if ( scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type && scanner->current )
  {
    if ( scanner->current[0].type != skipto )
    {
      if ( scanner->current->precedence <= precedence )
      {
        for ( ; scanner->current < scanner->table[ scanner->tokens ].type; scanner->current->type = scanner->current )
        {
          token[0].type = scanner->current + 20;
          scanner->current++;
          if ( scanner->current + 40 < edi )
          {
            if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= token[0].type )
              break;
          }
          else
            scanner->info->scan( &scanner[0] );
          if ( token[0].type )
          {
            if ( token[0].type != skipto )
            {
              if ( token->precedence <= precedence )
              {
                if ( scanner->tokens < 1 )
                  break;
                //scanner->current->type = scanner->current;
              }
              else
              if ( skipto == token->type )
                goto B15;
            }
B15:            scanner->tokens = scanner->tokens;
          }
          else
            break;
        }
      }
    }
    precedence = precedence;
    if ( scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type )
    {
      scanner->current++;
      if ( scanner->current + 40 < scanner->table[ scanner->tokens ].type )
      {
        return scanner->current + 20;
      }
      else
      {
        scanner = &scanner[0];
        ;
      }
    }
  }
  return 0;
}
void init_dom_scanner( struct dom_scanner *scanner, struct dom_scanner_info *scanner_info, struct dom_string *string, int state, int count_lines, int complete, int check_complete, int detect_errors )
{
  int eax;
  int ebp_28;
  if ( ( ( scanner_info->bits_at_1036/*.1_1of4*/ & 1 ) & 255 ) == 0 )
  {
    if ( scanner_info->scan_table_info && scanner_info->scan_table_info->type != 2 )
    {
      ebp_28 = scanner_info->scan_table_info + 16;
      do
      {
        if ( scanner_info->scan_table_info->type == 0 )
        {
          if ( assert_failed == 0 )
          {
            assert_failed = scanner_info->scan_table_info->data.string[0] < 1;
            if ( scanner_info->scan_table_info->data.string[0] < 1 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/scanner.c";
              errline = 136;
              elinks_internal( "assertion index &gt; 0 failed!" );
              if ( assert_failed == 0 )
                goto B10;
            }
B10:            assert_failed = *(int*)(ebp_28 + 4) > 255;
            if ( *(int*)(ebp_28 + 4) > 255 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/scanner.c";
              errline = 137;
              elinks_internal( "assertion data-&gt;length &lt; DOM_SCAN_TABLE_SIZE failed!" );
              if ( assert_failed == 0 )
                goto B12;
            }
B12:            assert_failed = *(int*)(ebp_28 + 4) < scanner_info->scan_table_info->data.string[0];
            if ( *(int*)(ebp_28 + 4) < scanner_info->scan_table_info->data.string[0] )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/scanner.c";
              errline = 138;
              elinks_internal( "assertion index &lt;= data-&gt;length failed!" );
            }
          }
          if ( scanner_info->scan_table_info->data.string[0] <= scanner_info->scan_table_info->data.length )
          {
            do
            {
              scanner_info->scan_table[0] = scanner_info->scan_table[ scanner_info->scan_table_info->data.string[0] ] | *(int*)(ebp_28 + 12);
            }
            while ( scanner_info->scan_table_info->data.string[0] + 1 + 1 <= scanner_info->scan_table_info->data.length );
          }
        }
        else
        {
          if ( assert_failed == 0 )
          {
            assert_failed = ( *ebp_28 != 1 ) | ( ( *(int*)(ebp_28 + 4) - 1 ) >> 31 );
            if ( ( *ebp_28 != 1 ) | ( ( *(int*)(ebp_28 + 4) - 1 ) >> 31 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/scanner.c";
              errline = 147;
              elinks_internal( "assertion info[i].type == DOM_SCAN_STRING && pos &gt;= 0 failed!" );
            }
            else
            {
              *ebp_64 += *(int*)(ebp_28 + 8);
              do
              {
                *ebp_64--;
                *(int*)(scanner_info->mappings + *(char*)(eax - 1)) = scanner_info->scan_table[ *(char*)(eax - 1) ] | *(int*)(esi + 12);
              }
              while ( edi - 1 >= 0 );
              ebp_28 += 16;
            }
          }
          if ( *(int*)(ebp_28 + 4) - 1 >= 0 )
          {
            *ebp_64 += *(int*)(ebp_28 + 8);
            do
            {
              *ebp_64--;
              *(int*)(scanner_info->mappings + *(char*)(eax - 1)) = scanner_info->scan_table[ *(char*)(eax - 1) ] | *(int*)(esi + 12);
            }
            while ( edi - 1 >= 0 );
          }
        }
        ebp_28 += 16;
        if ( *ebp_28 == 2 )
          break;
      }
      while ( *ebp_28 != 2 );
    }
    scanner_info->bits_at_1036/*.1_1of4*/ = (int)scanner_info->bits_at_1036/*.1_1of4*/ | 1;
  }
  scanner = scanner;
  memset( scanner, 0, 244 );
  scanner->string = string->string;
  scanner->position = string->string;
  scanner->info = &scanner_info[0];
  scanner->end = *(int*)(string) + string->string;
  scanner->current = scanner + 44;
  scanner->state = state;
  scanner->bits_at_32/*.1_1of4*/ = ( *(char*)(scanner + 32) & -2 ) | ( count_lines != 0 );
  scanner->bits_at_24/*.1_1of4*/ = ( ( ( *(char*)(scanner + 24) & -4 ) | ( ( complete == 0 ) * 2 ) | ( check_complete != 0 ) ) & -5 ) | ( ( detect_errors != 0 ) << 2 );
  scanner->lineno = count_lines != 0;
  scanner = scanner;
  ;
}
#if 0
#endif
