#include "scanner.c.h"
int map_scanner_string( struct scanner *scanner, unsigned char *ident, unsigned char *end, int base_type )
{
  struct scanner_string_mapping *mappings;
  int length = end - ident;
  mappings = scanner->info[0].mappings;
  if ( mappings->name )
  {
    do
    {
      if ( mappings->base_type == base_type )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/scanner.c";
        errline = 28;
        if ( elinks_strlcasecmp( mappings->name, -1, ident, length, 1 ) == 0 )
        {
          base_type = mappings->type;
          break;
        }
      }
      mappings++;
    }
    while ( mappings->name );
  }
  return base_type;
}
struct scanner_token *skip_scanner_tokens( struct scanner *scanner, int skipto, int precedence )
{
  int eax;
  int ecx;
  int edx;
  struct scanner_token *token;
  if ( scanner->tokens >= 1 && scanner->current < scanner->table[ ( scanner->tokens + 1 ) - 1 ].type && scanner->current )
  {
    if ( scanner->current[0].type != skipto )
    {
      if ( scanner->current->precedence <= precedence )
      {
        for ( ; scanner->current < scanner->table[ ( scanner->tokens + 1 ) - 1 ].type; scanner->current->type = scanner->current )
        {
          token[0].type = scanner->current + 16;
          scanner->current++;
          if ( scanner->current + 32 < scanner->table[ scanner->tokens ].type )
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
                precedence = precedence;
            }
            scanner->tokens = scanner->tokens;
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
      if ( scanner->current + 32 < scanner->table[ scanner->tokens ].type )
      {
        return scanner->current + 16;
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
void init_scanner( struct scanner *scanner, struct scanner_info *scanner_info, unsigned char *string, unsigned char *end )
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
            assert_failed = scanner_info->scan_table_info->data.string.source[0] < 1;
            if ( scanner_info->scan_table_info->data.string.source[0] < 1 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/scanner.c";
              errline = 139;
              elinks_internal( "assertion index &gt; 0 failed!" );
              if ( assert_failed == 0 )
                goto B10;
            }
B10:            assert_failed = *(int*)(ebp_28 + 8) > 255;
            if ( *(int*)(ebp_28 + 8) > 255 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/scanner.c";
              errline = 140;
              elinks_internal( "assertion data-&gt;range.end &lt; SCAN_TABLE_SIZE failed!" );
              if ( assert_failed == 0 )
                goto B12;
            }
B12:            assert_failed = *(int*)(ebp_28 + 8) < scanner_info->scan_table_info->data.string.source[0];
            if ( *(int*)(ebp_28 + 8) < scanner_info->scan_table_info->data.string.source[0] )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/scanner.c";
              errline = 141;
              elinks_internal( "assertion index &lt;= data-&gt;range.end failed!" );
            }
          }
          if ( scanner_info->scan_table_info->data.string.source[0] <= scanner_info->scan_table_info->data.string.length )
          {
            do
            {
              scanner_info->scan_table[ scanner_info->scan_table_info->data.string.source[0] ] |= *(int*)(ebp_28 + 12);
            }
            while ( scanner_info->scan_table_info->data.string.source[0] + 1 + 1 <= scanner_info->scan_table_info->data.string.length );
          }
        }
        else
        {
          if ( assert_failed == 0 )
          {
            assert_failed = ( *ebp_28 != 1 ) | ( ( *(int*)(ebp_28 + 8) - 1 ) >> 31 );
            if ( ( *ebp_28 != 1 ) | ( ( *(int*)(ebp_28 + 8) - 1 ) >> 31 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/scanner.c";
              errline = 150;
              elinks_internal( "assertion info[i].type == SCAN_STRING && pos &gt;= 0 failed!" );
            }
            else
            {
              *ebp_48 += *(int*)(ebp_28 + 4);
              do
              {
                *(int*)(scanner_info->mappings + *(char*)(eax - 1)) = scanner_info->scan_table[ *(char*)(eax - 1) ] | *(int*)(esi + 12);
              }
              while ( edi != eax - 1 );
              ebp_28 += 16;
            }
          }
          if ( *(int*)(ebp_28 + 8) - 1 >= 0 )
          {
            *ebp_48 += *(int*)(ebp_28 + 4);
            do
            {
              *(int*)(scanner_info->mappings + *(char*)(eax - 1)) = scanner_info->scan_table[ *(char*)(eax - 1) ] | *(int*)(esi + 12);
            }
            while ( edi != eax - 1 );
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
  memset( scanner, 0, 188 );
  scanner->string = string;
  scanner->position = string;
  if ( end == 0 )
  {
  }
  scanner->info = &scanner_info[0];
  scanner->end = string + (int)scanner_info->bits_at_1036/*.1_1of4*/;
  scanner->current = scanner + 28;
  scanner = scanner;
  ;
}
#if 0
#endif
