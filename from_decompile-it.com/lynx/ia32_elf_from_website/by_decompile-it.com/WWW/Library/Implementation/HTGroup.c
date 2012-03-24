#include "HTGroup.c.h"
void syntax_error( FILE *fp, char *msg, LexItem lex_item )
{
  char buffer[41];
  int cnt = 0;
  int ch;
  while ( ch == -1 || ch == 10 )
  {
    if ( cnt <= 39 )
    {
      buffer[ cnt ] = ch;
      cnt++;
    }
  }
}
AddressDefList *parse_address_part( FILE *fp )
{
  AddressDefList *address_def_list = 0;
  LexItem lex_item;
  BOOLEAN only_one = 0;
  lex_item = lex( fp );
  if ( lex_item == LEX_ALPH_STR || lex_item == LEX_TMPL_STR )
    only_one = 1;
  else
  {
    if ( lex_item == LEX_OPEN_PAREN )
    {
      lex_item = lex( fp );
      if ( lex_item != LEX_ALPH_STR && lex_item != LEX_TMPL_STR )
      {
        syntax_error( fp, "Expecting a single address or '(' beginning list", lex_item );
        return 0;
      }
    }
    syntax_error( fp, "Expecting a single address or '(' beginning list", lex_item );
    return 0;
  }
  address_def_list = (AddressDefList*)HTList_new( );
{
  do
  {
    ref = calloc( 1, sizeof( Ref ) );
    if ( ref == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTGroup.c", "parse_address_part" );
    *(int*)&ref->name[0] = 0;
    *(int*)&ref->translation = 0;
    HTSACopy( &ref->name, HTlex_buffer );
    HTList_addObject( (HTList*)address_def_list, (void*)ref );
    if ( only_one == 0 )
    {
      lex( fp );
      while ( lex_item = lex( fp ), lex_item == LEX_ITEM_SEP )
      {
        lex( fp );
      }
    }
    if ( only_one == 0 && lex_item != LEX_CLOSE_PAREN )
    {
      HTList_delete( (HTList*)address_def_list );
      address_def_list = 0;
      syntax_error( fp, "Expecting ')' closing address list", lex_item );
      return 0;
    }
    return address_def_list;
  }
  while ( lex_item != LEX_TMPL_STR );
  syntax_error( fp, "Expecting an address template", lex_item );
  HTList_delete( (HTList*)address_def_list );
  address_def_list = 0;
  return 0;
}
}
UserDefList *parse_user_part( FILE *fp )
{
  UserDefList *user_def_list = 0;
  LexItem lex_item;
  BOOLEAN only_one = 0;
  lex_item = lex( fp );
  if ( lex_item == LEX_ALPH_STR )
    only_one = 1;
  else
  {
    if ( lex_item == LEX_OPEN_PAREN )
    {
      lex_item = lex( fp );
      if ( lex_item != LEX_ALPH_STR )
      {
        syntax_error( fp, "Expecting a single name or '(' beginning list", lex_item );
        return 0;
      }
    }
    syntax_error( fp, "Expecting a single name or '(' beginning list", lex_item );
    return 0;
  }
  user_def_list = (UserDefList*)HTList_new( );
{
  do
  {
    ref = calloc( 1, sizeof( Ref ) );
    if ( ref == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTGroup.c", "parse_user_part" );
    *(int*)&ref->name[0] = 0;
    *(int*)&ref->translation = 0;
    HTSACopy( &ref->name, HTlex_buffer );
    HTList_addObject( (HTList*)user_def_list, (void*)ref );
    if ( only_one == 0 )
    {
      lex( fp );
      while ( lex_item = lex( fp ), lex_item == LEX_ITEM_SEP )
      {
        lex( fp );
      }
    }
    if ( only_one == 0 && lex_item != LEX_CLOSE_PAREN )
    {
      HTList_delete( (HTList*)user_def_list );
      user_def_list = 0;
      syntax_error( fp, "Expecting ')' closing user/group list", lex_item );
      return 0;
    }
    return user_def_list;
  }
  while ( lex_item != LEX_ALPH_STR );
  syntax_error( fp, "Expecting user or group name", lex_item );
  HTList_delete( (HTList*)user_def_list );
  user_def_list = 0;
  return 0;
}
}
Item *parse_item( FILE *fp )
{
  Item *item = 0;
  UserDefList *user_def_list = 0;
  AddressDefList *address_def_list = 0;
  LexItem lex_item = lex( fp );
  if ( lex_item == LEX_ALPH_STR || lex_item == LEX_OPEN_PAREN )
  {
    unlex( lex_item );
    user_def_list = parse_user_part( fp );
    lex_item = lex( fp );
  }
  if ( lex_item == LEX_AT_SIGN )
  {
    lex_item = lex( fp );
    switch ( lex_item )
    {
    case LEX_OPEN_PAREN:
    case LEX_ALPH_STR:
    case LEX_TMPL_STR:
      unlex( lex_item );
      address_def_list = parse_address_part( fp );
      break;
    default:
      if ( user_def_list )
      {
        HTList_delete( (HTList*)user_def_list );
        user_def_list = 0;
      }
      syntax_error( fp, "Expected address part (single address or list)", lex_item );
      return 0;
      break;
    }
  }
  else
    unlex( lex_item );
  if ( user_def_list == 0 && address_def_list == 0 )
  {
    syntax_error( fp, "Empty item not allowed", lex_item );
    return 0;
  }
  item = calloc( 1, sizeof( Item ) );
  if ( item == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTGroup.c", "parse_item" );
  item->user_def_list->object[0] = user_def_list;
  item->address_def_list = address_def_list;
  return item;
}
ItemList *parse_item_list( FILE *fp )
{
  ItemList *item_list = (ItemList*)HTList_new( );
  Item *item;
  LexItem lex_item;
  while ( item == 0 )
  {
    HTList_addObject( (HTList*)item_list, (void*)item );
    lex_item = lex( fp );
    if ( lex_item != LEX_ITEM_SEP )
    {
      unlex( lex_item );
      return item_list;
    }
    do
    {
      lex_item = lex( fp );
    }
    while ( lex_item != LEX_REC_SEP );
    unlex( lex_item );
  }
  HTList_delete( (HTList*)item_list );
  item_list = 0;
  return 0;
}
GroupDef *HTAA_parseGroupDef( FILE *fp )
{
  ItemList *item_list = 0;
  GroupDef *group_def = 0;
  LexItem lex_item;
  item_list = parse_item_list( fp );
  if ( item_list == 0 )
  {
    return 0;
  }
  group_def = calloc( 1, sizeof( GroupDef ) );
  if ( group_def == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTGroup.c", "HTAA_parseGroupDef" );
  *(int*)&group_def->group_name[0] = 0;
  group_def->item_list = item_list;
  lex_item = lex( fp );
  if ( lex_item != LEX_REC_SEP )
    syntax_error( fp, "Garbage after group definition", lex_item );
  return group_def;
}
void print_item( Item *item )
{
  if ( item == 0 )
  {
    fwrite( "\tNULL-ITEM\n", 1, 11, TraceFP( ) );
  }
  else
  {
    UserDefList *cur1 = &item->user_def_list->object[0];
    AddressDefList *cur2 = &item->address_def_list;
    Ref *user_ref;
    Ref *addr_ref;
    if ( cur1 )
    {
      cur1 = &cur1->next;
      user_ref = 0;
      if ( cur2 )
      {
        cur2 = &cur2->next;
        addr_ref = 0;
        if ( user_ref )
        {
          fprintf( TraceFP( ), "\t[%s%s", &user_ref->name[0], "" );
          while ( 1 )
          {
            if ( cur1 )
            {
              cur1 = &cur1->next;
              user_ref = 0;
              if ( user_ref )
              {
                fprintf( TraceFP( ), "; %s%s", &user_ref->name[0], "" );
              }
              else
              {
                fwrite( "] ", 1, 2, TraceFP( ) );
              }
            }
            user_ref = 0;
          }
        }
        else
        {
          fwrite( "\tANYBODY ", 1, 9, TraceFP( ) );
        }
        if ( addr_ref )
        {
          fprintf( TraceFP( ), "@ [%s", &addr_ref->name[0] );
          while ( 1 )
          {
            if ( cur2 )
            {
              cur2 = &cur2->next;
              addr_ref = 0;
              if ( addr_ref )
              {
                fprintf( TraceFP( ), "; %s", &addr_ref->name[0] );
              }
              else
              {
                fwrite( "]\n", 1, 2, TraceFP( ) );
                break;
              }
            }
            addr_ref = 0;
          }
        }
        else
        {
          fwrite( "@ ANYADDRESS\n", 1, 13, TraceFP( ) );
        }
      }
      addr_ref = 0;
    }
    user_ref = 0;
  }
  return;
}
void print_item_list( ItemList *item_list )
{
  ItemList *cur = item_list;
  Item *item;
  if ( item_list == 0 )
  {
    fwrite( "EMPTY", 1, 5, TraceFP( ) );
  }
  else
  {
    while ( 1 )
    {
      if ( cur )
      {
        cur = &cur->next;
        item = 0;
        if ( item == 0 )
          break;
        print_item( item );
      }
      item = 0;
    }
  }
  return;
}
void HTAA_printGroupDef( GroupDef *group_def )
{
  if ( group_def == 0 )
  {
    fwrite( "\nNULL RECORD\n", 1, 13, TraceFP( ) );
  }
  else
  {
    fprintf( TraceFP( ), "\nGroup %s:\n", "NULL" );
    print_item_list( &group_def->item_list );
    fputc( 10, TraceFP( ) );
  }
  return;
}
#if 0
#endif
