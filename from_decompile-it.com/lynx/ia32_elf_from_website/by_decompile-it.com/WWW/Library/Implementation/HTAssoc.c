#include "HTAssoc.c.h"
HTAssocList *HTAssocList_new( void )
{
  return HTList_new( );
}
void HTAssocList_delete( HTAssocList *alist )
{
  if ( alist )
  {
    HTAssocList *cur = alist;
    HTAssoc *assoc;
    while ( 1 )
    {
      if ( cur )
      {
        cur = &cur->next;
        assoc = 0;
        if ( assoc )
        {
          if ( assoc->name[0] )
          {
            free( &assoc->name[0] );
            *(int*)&assoc->name[0] = 0;
          }
          if ( assoc->value )
          {
            free( &assoc->value );
            *(int*)&assoc->value = 0;
          }
          if ( assoc )
          {
            free( assoc );
            assoc = 0;
          }
        }
        else
        {
          HTList_delete( (HTList*)alist );
          alist = 0;
          break;
        }
      }
      assoc = 0;
    }
  }
  return;
}
void HTAssocList_add( HTAssocList *alist, char *name, char *value )
{
  HTAssoc *assoc;
  if ( alist )
  {
    assoc = malloc( ( 1 ) * sizeof( HTAssoc ) );
    if ( assoc == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTAssoc.c", "HTAssoc_add" );
    *(int*)&assoc->name[0] = 0;
    *(int*)&assoc->value = 0;
    if ( name )
      HTSACopy( &assoc->name, name );
    if ( value )
      HTSACopy( &assoc->value, value );
    HTList_addObject( (HTList*)alist, (void*)assoc );
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTAssoc_add: ERROR: assoc list NULL!!\n" );
  }
  return;
}
char *HTAssocList_lookup( HTAssocList *alist, char *name )
{
  HTAssocList *cur = alist;
  HTAssoc *assoc;
  do
  {
    if ( cur )
    {
      cur = &cur->next;
      assoc = 0;
      if ( assoc == 0 )
      {
        return 0;
      }
    }
    assoc = 0;
  }
  while ( strncasecomp( &assoc->name[0], name, strlen( name ) ) );
  return &assoc->value;
}
#if 0
#endif
