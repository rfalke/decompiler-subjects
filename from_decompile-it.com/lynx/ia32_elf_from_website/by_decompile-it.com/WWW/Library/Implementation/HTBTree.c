#include "HTBTree.c.h"
HTBTree *HTBTree_new( HTComparer comp )
{
  HTBTree *tree = malloc( ( 1 ) * sizeof( HTBTree ) );
  if ( tree == 0 )
  {
    outofmem( "../../../WWW/Library/Implementation/HTBTree.c", "HTBTree_new" );
  }
  tree->compare = comp;
  tree->top->object = 0;
  return tree;
}
void HTBTElement_free( HTBTElement *element )
{
  if ( element )
  {
    if ( element->left )
      HTBTElement_free( &element->left );
    if ( element->right )
      HTBTElement_free( &element->right );
    if ( element == 0 )
    {
      return;
    }
    free( element );
    element = 0;
  }
  return;
}
void HTBTree_free( HTBTree *tree )
{
  HTBTElement_free( (HTBTElement*)&tree->top );
  if ( tree )
  {
    free( tree );
    tree = 0;
  }
  return;
}
void HTBTElementAndObject_free( HTBTElement *element )
{
  if ( element )
  {
    if ( element->left )
      HTBTElementAndObject_free( &element->left );
    if ( element->right )
      HTBTElementAndObject_free( &element->right );
    if ( element->object[0] )
    {
      free( &element->object[0] );
      element->object[0] = 0;
    }
    if ( element == 0 )
    {
      return;
    }
    free( element );
    element = 0;
  }
  return;
}
void HTBTreeAndObject_free( HTBTree *tree )
{
  HTBTElementAndObject_free( (HTBTElement*)&tree->top );
  if ( tree )
  {
    free( tree );
    tree = 0;
  }
  return;
}
void *HTBTree_search( HTBTree *tree, void *object )
{
  HTBTElement *cur = (HTBTElement*)&tree->top;
  int res;
  if ( cur )
  {
    ;
  }
  return 0;
}
void HTBTree_add( HTBTree *tree, void *object )
{
  HTBTElement *father_of_element;
  HTBTElement *added_element;
  HTBTElement *forefather_of_element;
  HTBTElement *father_of_forefather;
  BOOLEAN father_found;
  BOOLEAN top_found;
  static int depth, depth2, corrections;
  if ( tree->top == 0 )
  {
    tree->top->object = ((int)( void *, void * )*)malloc( 24 );
    if ( tree->top == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTBTree.c", "HTBTree_add" );
    tree->top->up = 0;
    tree->top->object[0] = ((int)( void *, void * )*)object;
    tree->top->left = 0;
    tree->top->left_depth = 0;
    tree->top->right = 0;
    tree->top->right_depth = 0;
  }
  else
  {
    father_found = 1;
    father_of_element = (HTBTElement*)&tree->top;
    added_element = 0;
    father_of_forefather = 0;
    forefather_of_element = 0;
    if ( father_found )
    {
      int res;
      ;
    }
    father_of_forefather = father_of_element;
    forefather_of_element = added_element;
    do
    {
      if ( father_of_forefather->left == forefather_of_element )
      {
        depth = father_of_forefather->left_depth;
        depth2 = father_of_forefather->left_depth = ( min( forefather_of_element->left_depth, forefather_of_element->right_depth ) ) + 1;
      }
      else
      {
        depth = father_of_forefather->right_depth;
        depth2 = father_of_forefather->right_depth = ( min( forefather_of_element->left_depth, forefather_of_element->right_depth ) ) + 1;
      }
      forefather_of_element = father_of_forefather;
      father_of_forefather = &father_of_forefather->up;
    }
    while ( depth2 != depth && father_of_forefather );
    top_found = 1;
    corrections = 0;
    while ( top_found && corrections <= 6 )
    {
      if ( father_of_element->left_depth - father_of_element->right_depth >= -1 && father_of_element->left_depth - father_of_element->right_depth <= 1 )
      {
        if ( father_of_element->up )
        {
          father_of_element = &father_of_element->up;
        }
        else
        {
          top_found = 0;
        }
      }
      else
      {
        corrections++;
        if ( father_of_element->left == 0 && father_of_element->right == 0 && father_of_element->right == 0 && father_of_element->right == 0 )
          corrections = 7;
        if ( father_of_element->right == 0 && father_of_element->left == 0 && father_of_element->left == 0 && father_of_element->left == 0 )
          corrections = 7;
        if ( father_of_element->right_depth < father_of_element->left_depth )
        {
          added_element = &father_of_element->left;
          father_of_element->left_depth = added_element->right_depth;
          added_element->right_depth = ( min( father_of_element->left_depth, father_of_element->right_depth ) ) + 1;
          if ( father_of_element->up )
          {
            BOOLEAN first_time;
            father_of_forefather = &father_of_element->up;
            forefather_of_element = added_element;
            first_time = 1;
            do
            {
              if ( father_of_forefather->left == forefather_of_element->up )
              {
                depth = father_of_forefather->left_depth;
                if ( first_time )
                {
                  father_of_forefather->left_depth = forefather_of_element->left_depth + 1;
                  first_time = 0;
                }
                else
                {
                  father_of_forefather->left_depth = forefather_of_element->up + 1;
                }
                depth2 = father_of_forefather->left_depth;
              }
              else
              {
                depth = father_of_forefather->right_depth;
                if ( first_time )
                {
                  father_of_forefather->right_depth = forefather_of_element->left_depth + 1;
                  first_time = 0;
                }
                else
                {
                  father_of_forefather->right_depth = forefather_of_element->up + 1;
                }
                depth2 = father_of_forefather->right_depth;
              }
              forefather_of_element = &forefather_of_element->up;
              father_of_forefather = &father_of_forefather->up;
            }
            while ( depth2 != depth && father_of_forefather );
            father_of_forefather = &father_of_element->up;
            if ( father_of_forefather->left == father_of_element )
            {
              father_of_forefather->left = added_element;
              father_of_element->left = added_element->right;
              added_element->right = father_of_element;
            }
            if ( father_of_forefather->right == father_of_element )
            {
              father_of_forefather->right = added_element;
              father_of_element->left = added_element->right;
              added_element->right = father_of_element;
            }
            added_element->up = father_of_forefather;
          }
          else
          {
            added_element->up = 0;
            father_of_element->left = added_element->right;
            added_element->right = father_of_element;
          }
          father_of_element->up = added_element;
          if ( father_of_element->left )
          {
            father_of_element->left = father_of_element;
          }
        }
        else
        {
          added_element = &father_of_element->right;
          father_of_element->right_depth = added_element->left_depth;
          added_element->left_depth = ( min( father_of_element->left_depth, father_of_element->right_depth ) ) + 1;
          if ( father_of_element->up )
          {
            BOOLEAN first_time;
            father_of_forefather = &father_of_element->up;
            forefather_of_element = added_element;
            first_time = 1;
            do
            {
              if ( father_of_forefather->left == forefather_of_element->up )
              {
                depth = father_of_forefather->left_depth;
                if ( first_time )
                {
                  father_of_forefather->left_depth = forefather_of_element->left_depth + 1;
                  first_time = 0;
                }
                else
                {
                  father_of_forefather->left_depth = forefather_of_element->up + 1;
                }
                depth2 = father_of_forefather->left_depth;
              }
              else
              {
                depth = father_of_forefather->right_depth;
                if ( first_time )
                {
                  father_of_forefather->right_depth = forefather_of_element->left_depth + 1;
                  first_time = 0;
                }
                else
                {
                  father_of_forefather->right_depth = forefather_of_element->up + 1;
                }
                depth2 = father_of_forefather->right_depth;
              }
              father_of_forefather = &father_of_forefather->up;
              forefather_of_element = &forefather_of_element->up;
            }
            while ( depth2 != depth && father_of_forefather );
            father_of_forefather = &father_of_element->up;
            if ( father_of_forefather->left == father_of_element )
            {
              father_of_forefather->left = added_element;
              father_of_element->right = added_element->left;
              added_element->left = father_of_element;
            }
            if ( father_of_forefather->right == father_of_element )
            {
              father_of_forefather->right = added_element;
              father_of_element->right = added_element->left;
              added_element->left = father_of_element;
            }
            added_element->up = father_of_forefather;
          }
          else
          {
            added_element->up = 0;
            father_of_element->right = added_element->left;
            added_element->left = father_of_element;
          }
          father_of_element->up = added_element;
          if ( father_of_element->right )
          {
            father_of_element->right = father_of_element;
          }
        }
      }
    }
    for ( ; father_of_element->up;  )
    {
      father_of_element = &father_of_element->up;
    }
    tree->top->object = ((int)( void *, void * )*)father_of_element->object;
  }
  return;
}
HTBTElement *HTBTree_next( HTBTree *tree, HTBTElement *ele )
{
  HTBTElement *father_of_element;
  HTBTElement *father_of_forefather;
  if ( ele == 0 )
  {
    father_of_element = (HTBTElement*)&tree->top;
    if ( father_of_element )
    {
      for ( ; father_of_element->left;  )
      {
        father_of_element = &father_of_element->left;
      }
    }
  }
  else
  {
    father_of_element = ele;
    if ( father_of_element->right )
    {
      father_of_element = &father_of_element->right;
      for ( ; father_of_element->left;  )
      {
        father_of_element = &father_of_element->left;
      }
    }
    else
    {
      father_of_forefather = &father_of_element->up;
      for ( ; father_of_forefather && father_of_forefather->right == father_of_element;  )
      {
        father_of_element = father_of_forefather;
        father_of_forefather = &father_of_element->up;
      }
      father_of_element = father_of_forefather;
    }
  }
  return father_of_element;
}
#if 0
#endif
