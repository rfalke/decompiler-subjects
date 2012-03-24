#include "LYSearch.c.h"
BOOLEAN link_has_target( int cur, char *target )
{
  LinkInfo *a = &links[ cur ];
  OptionType *option;
  char *stars = 0;
  char *cp;
  int count = 0;
{
  while ( text == 0 )
  {
    if ( ( case_sensitive ? LYno_attr_char_strstr( text, target ) : LYno_attr_char_case_strstr( text, target ) ) != 0 )
    {
      break;
    }
    else
    {
      count++;
    }
  }
  if ( a->l_form && a->l_form->value && a->l_form->type != 8 )
  {
    if ( a->l_form->type == 2 )
    {
      if ( ( case_sensitive ? LYno_attr_char_strstr( &a->l_form->value, target ) : LYno_attr_char_case_strstr( &a->l_form->value, target ) ) != 0 )
      {
        return 0;
      }
      else
      {
        HTSACopy( &stars, &a->l_form->value );
        memset( stars, 42, strlen( stars ) );
        if ( ( case_sensitive ? LYno_attr_char_strstr( stars, target ) : LYno_attr_char_case_strstr( stars, target ) ) != 0 )
        {
          if ( stars )
          {
            free( stars );
            stars = 0;
          }
          return 0;
        }
        else
        if ( stars )
        {
          free( stars );
          stars = 0;
        }
      }
    }
    else
    {
      if ( a->l_form->type == 7 )
      {
        option = &a->l_form->select_list;
        for ( ; option;  )
        {
          if ( ( case_sensitive ? LYno_attr_char_strstr( &option->name[0], target ) : LYno_attr_char_case_strstr( &option->name[0], target ) ) != 0 )
          {
            break;
          }
          else
          {
            option = &option->next;
          }
        }
      }
      else
      {
        if ( a->l_form->type == 4 )
        {
          if ( a->l_form->num_value )
            cp = checked_radio;
          else
            cp = unchecked_radio;
          if ( ( case_sensitive ? LYno_attr_char_strstr( cp, target ) : LYno_attr_char_case_strstr( cp, target ) ) != 0 )
          {
            return 0;
          }
        }
        else
        {
          if ( a->l_form->type == 3 )
          {
            if ( a->l_form->num_value )
              cp = checked_box;
            else
              cp = unchecked_box;
            if ( ( case_sensitive ? LYno_attr_char_strstr( cp, target ) : LYno_attr_char_case_strstr( cp, target ) ) != 0 )
            {
              return 0;
            }
          }
          else
          {
            if ( ( case_sensitive ? LYno_attr_char_strstr( &a->l_form->value, target ) : LYno_attr_char_case_strstr( &a->l_form->value, target ) ) != 0 )
            {
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}
}
int check_next_target_in_links( int *cur, char *target )
{
  int i;
  if ( nlinks )
  {
    i = cur[0] + 1;
    for ( ; i < nlinks; i++ )
    {
      if ( link_has_target( i, target ) & 255 )
      {
        cur[0] = i;
        return 1;
      }
      // i++;
    }
  }
  return 0;
}
int check_prev_target_in_links( int *cur, char *target )
{
  int i;
  if ( nlinks )
  {
    i = cur[0] + -1;
    for ( ; i >= 0;  )
    {
      if ( link_has_target( i, target ) & 255 )
      {
        cur[0] = i;
        return 1;
      }
      i += -1;
    }
  }
  return 0;
}
BOOLEAN textsearch( DocInfo *cur_doc, char prev_target[1024], int target_size, int direction )
{
  int eax;
  static char prev_target_buffer[512];
  static BOOLEAN first = 1;
  int offset;
  int oldcur = cur_doc->link;
  char *cp;
  int ch = 0;
  RecallType recall;
  int QueryTotal;
  int QueryNum;
  BOOLEAN FirstRecall = 1;
  if ( first )
  {
    prev_target_buffer[0] = 0;
    first = 0;
  }
  QueryTotal = 0;
  recall = QueryTotal > 0;
  QueryNum = QueryTotal;
  if ( direction )
    LYstrncpy( prev_target, prev_target_buffer, target_size );
  if ( prev_target[0] == 0 )
  {
    mustshow = 1;
    statusline( gettext( "Enter a whereis query: " ) );
    ch = LYgetstr( prev_target, 0, target_size, recall );
    if ( ch < 0 )
    {
      LYstrncpy( prev_target, prev_target_buffer, target_size );
      HTInfoMsg( gettext( "Cancelled!!!" ) );
    }
    do
    {
      if ( !prev_target[0] && ( recall == NORECALL || ( ch != 256 && ch != 257 ) ) )
      {
        HTInfoMsg( gettext( "Cancelled!!!" ) );
        break;
      }
      if ( recall && ch == 256 )
      {
        if ( FirstRecall )
        {
          FirstRecall = 0;
          if ( prev_target_buffer[0] )
          {
            QueryNum = QueryTotal + -1;
            for ( ; QueryNum > 0;  )
            {
              cp = (char*)HTList_objectAt( search_queries, QueryNum );
              if ( cp && strcmp( prev_target_buffer, cp ) == 0 )
                break;
              else
              {
                QueryNum += -1;
              }
            }
          }
          else
            QueryNum = 0;
        }
        else
          QueryNum++;
        if ( QueryTotal <= QueryNum )
          QueryNum = 0;
        cp = (char*)HTList_objectAt( search_queries, QueryNum );
        if ( cp )
        {
          LYstrncpy( prev_target, cp, target_size );
          if ( prev_target_buffer[0] && strcmp( prev_target_buffer, prev_target ) == 0 )
          {
            mustshow = 1;
            statusline( gettext( "Edit the current query: " ) );
          }
          else
          if ( ( prev_target_buffer[0] && QueryTotal == 2 ) || ( prev_target_buffer[0] == 0 && QueryTotal == 1 ) )
          {
            mustshow = 1;
            statusline( gettext( "Edit the previous query: " ) );
          }
          else
          {
            mustshow = 1;
            statusline( gettext( "Edit a previous query: " ) );
          }
          ch = LYgetstr( prev_target, 0, target_size, recall );
          if ( ch < 0 )
          {
            LYstrncpy( prev_target, prev_target_buffer, target_size );
            HTInfoMsg( gettext( "Cancelled!!!" ) );
            break;
          }
        }
      }
      else
      {
        if ( recall && ch == 257 )
        {
          if ( FirstRecall )
          {
            FirstRecall = 0;
            if ( prev_target_buffer[0] )
            {
              QueryNum = 0;
              for ( ; QueryNum < QueryTotal + -1; QueryNum++ )
              {
                cp = (char*)HTList_objectAt( search_queries, QueryNum );
                if ( cp && strcmp( prev_target_buffer, cp ) == 0 )
                  break;
                else
                {
                  // QueryNum++;
                }
              }
            }
            else
              QueryNum = QueryTotal + -1;
          }
          else
            QueryNum += -1;
          if ( QueryNum < 0 )
            QueryNum = QueryTotal + -1;
          cp = (char*)HTList_objectAt( search_queries, QueryNum );
          if ( cp )
          {
            LYstrncpy( prev_target, cp, target_size );
            if ( prev_target_buffer[0] && strcmp( prev_target_buffer, prev_target ) == 0 )
            {
              mustshow = 1;
              statusline( gettext( "Edit the current query: " ) );
            }
            else
            if ( ( prev_target_buffer[0] && QueryTotal == 2 ) || ( prev_target_buffer[0] == 0 && QueryTotal == 1 ) )
            {
              mustshow = 1;
              statusline( gettext( "Edit the previous query: " ) );
            }
            else
            {
              mustshow = 1;
              statusline( gettext( "Edit a previous query: " ) );
            }
            ch = LYgetstr( prev_target, 0, target_size, recall );
          }
        }
      }
      LYstrncpy( prev_target_buffer, prev_target, 511 );
      HTAddSearchQuery( prev_target_buffer );
      if ( direction < 0 )
      {
        offset = 0;
        if ( check_prev_target_in_links( &cur_doc->link, prev_target ) )
        {
          LYhighlight( 0, oldcur, prev_target );
          break;
        }
      }
      else
      {
        if ( check_next_target_in_links( &cur_doc->link, prev_target ) )
        {
          LYhighlight( 0, oldcur, prev_target );
          break;
        }
        if ( nlinks == 0 )
          offset = display_lines + -1;
        else
          offset = links[ cur_doc->link ].ly + -1;
      }
      www_user_search( cur_doc->line + offset, cur_doc, prev_target, direction );
      if ( cur_doc->link != oldcur )
      {
        LYhighlight( 0, oldcur, prev_target );
        break;
      }
      break;
    }
    while ( ch >= 0 );
    LYstrncpy( prev_target, prev_target_buffer, target_size );
    HTInfoMsg( gettext( "Cancelled!!!" ) );
  }
  return 1;
}
#if 0
#endif
