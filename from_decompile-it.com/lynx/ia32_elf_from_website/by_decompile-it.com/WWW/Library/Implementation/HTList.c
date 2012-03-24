#include "HTList.c.h"
HTList *HTList_new( void )
{
  HTList *newList = malloc( ( 1 ) * sizeof( HTList ) );
  if ( newList == 0 )
  {
    outofmem( "../../../WWW/Library/Implementation/HTList.c", "HTList_new" );
  }
  newList->object[0] = 0;
  newList->next = 0;
  return newList;
}
void HTList_delete( HTList *me )
{
  HTList *current;
  while ( current = me, current )
  {
    me = &me->next;
    if ( current )
    {
      free( current );
      current = 0;
    }
  }
  return;
}
HTList *HTList_reverse( HTList *start )
{
  HTList *cur, *succ;
  if ( start && start->next )
  {
    cur = &start->next;
    if ( cur == 0 )
    {
      return start;
    }
    start->next = 0;
    for ( ; cur;  )
    {
      succ = &cur->next;
      cur->next = start->next;
      start->next = cur;
      cur = succ;
    }
    return start;
  }
  return start;
}
HTList *HTList_appendList( HTList *start, HTList *tail )
{
  HTList *temp = start;
  if ( start == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTList: Trying to append list %p to a nonexisting list\n", tail );
    }
    return 0;
  }
  else
  {
    if ( tail == 0 || tail->next == 0 )
    {
      return start;
    }
    for ( ; temp->next;  )
    {
      temp = &temp->next;
    }
    temp->next = tail->next;
    tail->next = 0;
    return start;
  }
}
void HTList_linkObject( HTList *me, void *newObject, HTList *newNode )
{
  if ( me )
  {
    if ( newNode->object[0] == 0 && newNode->next == 0 )
    {
      newNode->object[0] = newObject;
      newNode->next = me->next;
      me->next = newNode;
    }
    else
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "*** HTList: Refuse linking already linked obj " );
      }
      if ( WWW_TraceFlag == 0 )
      {
        return;
      }
      fprintf( TraceFP( ), "%p, node %p, list %p\n", newObject, newNode, me );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTList: Trying to link object %p to a nonexisting list\n", newObject );
  }
  return;
}
void HTList_addObject( HTList *me, void *newObject )
{
  HTList *newNode;
  if ( me )
  {
    newNode = malloc( ( 1 ) * sizeof( HTList ) );
    if ( newNode == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTList.c", "HTList_addObject" );
    newNode->object[0] = newObject;
    newNode->next = me->next;
    me->next = newNode;
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTList: Trying to add object %p to a nonexisting list\n", newObject );
  }
  return;
}
void HTList_appendObject( HTList *me, void *newObject )
{
  HTList *temp = me;
  if ( temp && newObject )
  {
    for ( ; temp->next;  )
    {
      temp = &temp->next;
    }
    HTList_addObject( temp, newObject );
  }
  return;
}
void HTList_insertObjectAt( HTList *me, void *newObject, int pos )
{
  HTList *newNode;
  HTList *temp = me;
  HTList *prevNode;
  int Pos = pos;
  if ( temp == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTList: Trying to add object %p to a nonexisting list\n", newObject );
    }
  }
  else
  {
    if ( Pos < 0 )
    {
      Pos = 0;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTList: Treating negative object position %d as %d.\n", pos, Pos );
      }
    }
    prevNode = temp;
    while ( temp = &temp->next, temp )
    {
      if ( Pos == 0 )
      {
        newNode = malloc( ( 1 ) * sizeof( HTList ) );
        if ( newNode == 0 )
          outofmem( "../../../WWW/Library/Implementation/HTList.c", "HTList_addObjectAt" );
        newNode->object[0] = newObject;
        newNode->next = temp;
        if ( prevNode == 0 )
          break;
        prevNode->next = newNode;
        break;
      }
      else
      {
        prevNode = temp;
        Pos += -1;
      }
    }
    if ( Pos >= 0 )
    {
      HTList_addObject( prevNode, newObject );
    }
  }
  return;
}
BOOLEAN HTList_unlinkObject( HTList *me, void *oldObject )
{
  HTList *temp = me;
  HTList *prevNode;
  if ( temp && oldObject )
  {
    do
    {
      if ( temp->next == 0 )
        goto B2;
      else
      {
        prevNode = temp;
        temp = &temp->next;
      }
    }
    while ( temp->object[0] != oldObject );
    prevNode->next = temp->next;
    temp->next = 0;
    temp->object[0] = 0;
    return 0;
  }
B2:;
  return 0;
}
BOOLEAN HTList_removeObject( HTList *me, void *oldObject )
{
  HTList *temp = me;
  HTList *prevNode;
  if ( temp && oldObject )
  {
    do
    {
      if ( temp->next == 0 )
        goto B2;
      else
      {
        prevNode = temp;
        temp = &temp->next;
      }
    }
    while ( temp->object[0] != oldObject );
    prevNode->next = temp->next;
    if ( temp )
    {
      free( temp );
      temp = 0;
    }
    return 0;
  }
B2:;
  return 0;
}
void *HTList_removeObjectAt( HTList *me, int position )
{
  HTList *temp = me;
  HTList *prevNode;
  int pos = position;
  if ( temp == 0 || pos < 0 )
  {
    return 0;
  }
  prevNode = temp;
  while ( temp = &temp->next, temp )
  {
    if ( pos == 0 )
    {
      prevNode->next = temp->next;
      prevNode = temp;
      if ( temp == 0 )
      {
        return &prevNode->object[0];
      }
      free( temp );
      temp = 0;
      return &prevNode->object[0];
    }
    else
    {
      prevNode = temp;
      pos += -1;
    }
  }
  return 0;
}
void *HTList_unlinkLastObject( HTList *me )
{
  HTList *lastNode;
  void *lastObject;
  if ( me && me->next )
  {
    lastNode = &me->next;
    lastObject = &lastNode->object[0];
    me->next = lastNode->next;
    lastNode->next = 0;
    lastNode->object[0] = 0;
    return lastObject;
  }
  return 0;
}
void *HTList_removeLastObject( HTList *me )
{
  HTList *lastNode;
  void *lastObject;
  if ( me == 0 || me->next == 0 )
  {
    return 0;
  }
  lastNode = &me->next;
  lastObject = &lastNode->object[0];
  me->next = lastNode->next;
  if ( lastNode )
  {
    free( lastNode );
    lastNode = 0;
  }
  return lastObject;
}
void *HTList_removeFirstObject( HTList *me )
{
  HTList *temp = me;
  HTList *prevNode;
  void *firstObject;
  if ( temp == 0 )
  {
    return 0;
  }
  prevNode = temp;
  if ( temp->next == 0 )
  {
    return 0;
  }
  for ( ; temp->next;  )
  {
    prevNode = temp;
    temp = &temp->next;
  }
  firstObject = &temp->object[0];
  prevNode->next = 0;
  if ( temp )
  {
    free( temp );
    temp = 0;
  }
  return firstObject;
}
int HTList_count( HTList *me )
{
  HTList *temp = me;
  int count = 0;
  if ( temp )
  {
    while ( temp = &temp->next, temp )
    {
      count++;
    }
  }
  return count;
}
int HTList_indexOf( HTList *me, void *object )
{
  HTList *temp = me;
  int position = 0;
  if ( temp )
  {
    while ( temp = &temp->next, temp )
    {
      if ( temp->object[0] == object )
      {
        return position;
      }
      position++;
    }
  }
  return -1;
}
void *HTList_objectAt( HTList *me, int position )
{
  HTList *temp = me;
  int pos = position;
  if ( temp == 0 || pos < 0 )
  {
    return 0;
  }
  while ( temp = &temp->next, temp )
  {
    if ( pos == 0 )
    {
      return &temp->object[0];
    }
    pos += -1;
  }
  return 0;
}
#if 0
#endif
