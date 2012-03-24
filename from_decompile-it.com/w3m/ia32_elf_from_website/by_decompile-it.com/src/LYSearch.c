#include "LYSearch.c.h"
BOOLEAN link_has_target( int cur, char *target )
{
  LinkInfo *a = &links[ cur ];
  OptionType *option;
  char *stars = 0;
  char *cp;
  int count = 0;
{
  char *text = LYGetHiliteStr( cur, count );
  if ( text != 0 )
  {
    if ( ( case_sensitive & 255 ) != 0 )
    {
      if ( ( LYno_attr_char_case_strstr( text, target ) != 0 ) == 0 )
        count++;
      {
        char *text = LYGetHiliteStr( cur, count );
      }
      else
      {
        return 1;
      }
    }
    else
    {
    }
  }
  else
  {
    if ( a->l_form != 0 )
    {
      if ( a->l_form->value != 0 )
      {
        if ( a->l_form->type != 8 )
        {
          if ( a->l_form->type == 2 )
          {
            if ( ( case_sensitive & 255 ) != 0 )
            {
              if ( ( LYno_attr_char_case_strstr( a->l_form->value, target ) != 0 ) != 0 )
              {
                return 1;
              }
              else
              {
                HTSACopy( &stars, a->l_form->value );
                memset( stars, 42, strlen( stars ) );
                if ( ( case_sensitive & 255 ) != 0 )
                {
                  if ( ( LYno_attr_char_case_strstr( stars, target ) != 0 ) != 0 )
                  {
                    if ( stars != 0 )
                    {
                      free( stars );
                      stars = 0;
                      return 1;
                    }
                    else
                    {
                      return 1;
                    }
                  }
                  else
                  {
                    if ( stars != 0 )
                    {
                      free( stars );
                      stars = 0;
                      return 1;
                    }
                  }
                }
                else
                {
                }
              }
            }
            else
            {
            }
          }
          else
          {
            if ( a->l_form->type == 7 )
              option = a->l_form->select_list;
              if ( option != 0 )
              {
                if ( ( case_sensitive & 255 ) != 0 )
                {
                  if ( ( LYno_attr_char_case_strstr( option->name, target ) != 0 ) != 0 )
                  {
                    return 1;
                  }
                  else
                    option = option->next;
                }
                else
                {
                }
              }
            else
            {
              if ( a->l_form->type == 4 )
              {
                if ( a->l_form->num_value != 0 )
                  cp = checked_radio;
                  if ( ( case_sensitive & 255 ) != 0 )
                  {
                    if ( ( LYno_attr_char_case_strstr( cp, target ) != 0 ) != 0 )
                    {
                      return 1;
                    }
                  }
                  else
                  {
                  }
                else
                  cp = unchecked_radio;
              }
              else
              {
                if ( a->l_form->type == 3 )
                {
                  if ( a->l_form->num_value != 0 )
                    cp = checked_box;
                    if ( ( case_sensitive & 255 ) != 0 )
                    {
                      if ( ( LYno_attr_char_case_strstr( cp, target ) != 0 ) != 0 )
                      {
                        return 1;
                      }
                    }
                    else
                    {
                    }
                  else
                    cp = unchecked_box;
                }
                else
                {
                  if ( ( case_sensitive & 255 ) != 0 )
                  {
                    if ( ( LYno_attr_char_case_strstr( a->l_form->value, target ) != 0 ) != 0 )
                    {
                      return 1;
                    }
                  }
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
}
}
int check_next_target_in_links( int *cur, char *target )
{
  int i;
  if ( nlinks != 0 )
    i = cur[0] + 1;
    if ( i < nlinks )
    {
      if ( ( link_has_target( i, target ) & 255 ) == 0 )
        i++;
      else
      {
        cur[0] = i;
        return 1;
      }
    }
    else
    {
      return 0;
    }
  else
  {
    return 0;
  }
}
int check_prev_target_in_links( int *cur, char *target )
{
  int i;
  if ( nlinks != 0 )
    i = cur[0] - 1;
    if ( i >= 0 )
    {
      if ( ( link_has_target( i, target ) & 255 ) == 0 )
        i--;
      else
      {
        cur[0] = i;
        return 1;
      }
    }
    else
    {
      return 0;
    }
  else
  {
    return 0;
  }
}
BOOLEAN textsearch( DocInfo *cur_doc, char *prev_target, int target_size, int direction )
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
  if ( ( first & 255 ) != 0 )
  {
    prev_target_buffer[0] = 0;
    first = 0;
    if ( search_queries != 0 )
    {
      QueryTotal = HTList_count( search_queries );
      recall = ( QueryTotal < 1 ) ^ 1;
      QueryNum = QueryTotal;
      if ( direction != 0 )
        LYstrncpy( prev_target, prev_target_buffer, target_size );
        if ( ( prev_target[0] & 255 ) == 0 )
        {
          mustshow = 1;
          statusline( gettext( "Enter a whereis query: " ) );
          ch = LYgetstr( prev_target, 0, target_size, recall );
          if ( ch < 0 )
          {
            LYstrncpy( prev_target, prev_target_buffer, target_size );
            HTInfoMsg( gettext( "Cancelled!!!" ) );
            return 0;
          }
          else
          {
            if ( ( prev_target[0] & 255 ) == 0 )
            {
              if ( recall != NORECALL )
              {
                if ( ch == 256 )
                {
                  if ( recall != NORECALL )
                  {
                    if ( ch == 256 )
                    {
                      if ( FirstRecall != 0 )
                      {
                        FirstRecall = 0;
                        if ( ( prev_target_buffer[0] & 255 ) != 0 )
                          QueryNum = QueryTotal - 1;
                          if ( QueryNum >= 1 )
                          {
                            cp = HTList_objectAt( search_queries, QueryNum );
                            if ( cp == 0 )
                              QueryNum--;
                            else
                            {
                              if ( strcmp( prev_target_buffer, cp ) != 0 )
                                QueryNum--;
                              else
                              {
                                if ( QueryTotal <= QueryNum )
                                  QueryNum = 0;
                                  cp = HTList_objectAt( search_queries, QueryNum );
                                  if ( cp != 0 )
                                  {
                                    LYstrncpy( prev_target, cp, target_size );
                                    if ( ( prev_target_buffer[0] & 255 ) != 0 )
                                    {
                                      if ( strcmp( prev_target_buffer, prev_target ) == 0 )
                                      {
                                        mustshow = 1;
                                        statusline( gettext( "Edit the current query: " ) );
                                        ch = LYgetstr( prev_target, 0, target_size, recall );
                                        if ( ch >= 0 )
                                          continue;
                                        else
                                        {
                                          LYstrncpy( prev_target, prev_target_buffer, target_size );
                                          HTInfoMsg( gettext( "Cancelled!!!" ) );
                                          return 0;
                                        }
                                      }
                                      else
                                      {
                                        if ( ( prev_target_buffer[0] & 255 ) != 0 )
                                        {
                                          if ( QueryTotal != 2 )
                                          {
                                            if ( ( prev_target_buffer[0] & 255 ) == 0 )
                                            {
                                              if ( QueryTotal == 1 )
                                              {
                                                mustshow = 1;
                                                statusline( gettext( "Edit the previous query: " ) );
                                              }
                                              else
                                              {
                                                mustshow = 1;
                                                statusline( gettext( "Edit a previous query: " ) );
                                              }
                                            }
                                            else
                                            {
                                              mustshow = 1;
                                              statusline( gettext( "Edit a previous query: " ) );
                                            }
                                          }
                                          else
                                          {
                                            mustshow = 1;
                                            statusline( gettext( "Edit the previous query: " ) );
                                          }
                                        }
                                        else
                                        {
                                        }
                                      }
                                    }
                                    else
                                    {
                                    }
                                  }
                                  else
                                  {
                                    LYstrncpy( prev_target_buffer, prev_target, 511 );
                                    HTAddSearchQuery( prev_target_buffer );
                                    if ( direction < 0 )
                                    {
                                      offset = 0;
                                      if ( check_prev_target_in_links( &cur_doc->link, prev_target ) != 0 )
                                      {
                                        LYhighlight( 0, oldcur, prev_target );
                                        return 0;
                                      }
                                      else
                                      {
                                        www_user_search( cur_doc->line + offset, cur_doc, prev_target, direction );
                                        if ( cur_doc->link != oldcur )
                                        {
                                          LYhighlight( 0, oldcur, prev_target );
                                          return 0;
                                        }
                                        else
                                        {
                                          return 0;
                                        }
                                      }
                                    }
                                    else
                                    {
                                      if ( check_next_target_in_links( &cur_doc->link, prev_target ) != 0 )
                                      {
                                        LYhighlight( 0, oldcur, prev_target );
                                        return 0;
                                      }
                                      else
                                      {
                                        if ( nlinks == 0 )
                                          offset = display_lines - 1;
                                        else
                                          offset = links[ cur_doc->link ].ly - 1;
                                      }
                                    }
                                  }
                                else
                                {
                                  cp = HTList_objectAt( search_queries, QueryNum );
                                }
                              }
                            }
                          }
                        else
                          QueryNum = 0;
                      }
                      else
                        QueryNum++;
                    }
                    else
                    {
                      if ( recall != NORECALL )
                      {
                        if ( ch == 257 )
                        {
                          if ( FirstRecall != 0 )
                          {
                            FirstRecall = 0;
                            if ( ( prev_target_buffer[0] & 255 ) != 0 )
                              QueryNum = 0;
                              if ( QueryNum < QueryTotal - 1 )
                              {
                                cp = HTList_objectAt( search_queries, QueryNum );
                                if ( cp == 0 )
                                  QueryNum++;
                                else
                                {
                                  if ( strcmp( prev_target_buffer, cp ) != 0 )
                                    QueryNum++;
                                  else
                                  {
                                    if ( QueryNum < 0 )
                                      QueryNum = QueryTotal - 1;
                                      cp = HTList_objectAt( search_queries, QueryNum );
                                      if ( cp != 0 )
                                      {
                                        LYstrncpy( prev_target, cp, target_size );
                                        if ( ( prev_target_buffer[0] & 255 ) != 0 )
                                        {
                                          if ( strcmp( prev_target_buffer, prev_target ) == 0 )
                                          {
                                            mustshow = 1;
                                            statusline( gettext( "Edit the current query: " ) );
                                            ch = LYgetstr( prev_target, 0, target_size, recall );
                                            if ( ch >= 0 )
                                              continue;
                                            else
                                            {
                                              LYstrncpy( prev_target, prev_target_buffer, target_size );
                                              HTInfoMsg( gettext( "Cancelled!!!" ) );
                                              return 0;
                                            }
                                          }
                                          else
                                          {
                                            if ( ( prev_target_buffer[0] & 255 ) != 0 )
                                            {
                                              if ( QueryTotal != 2 )
                                              {
                                                if ( ( prev_target_buffer[0] & 255 ) == 0 )
                                                {
                                                  if ( QueryTotal == 1 )
                                                  {
                                                    mustshow = 1;
                                                    statusline( gettext( "Edit the previous query: " ) );
                                                  }
                                                  else
                                                  {
                                                    mustshow = 1;
                                                    statusline( gettext( "Edit a previous query: " ) );
                                                  }
                                                }
                                                else
                                                {
                                                  mustshow = 1;
                                                  statusline( gettext( "Edit a previous query: " ) );
                                                }
                                              }
                                              else
                                              {
                                                mustshow = 1;
                                                statusline( gettext( "Edit the previous query: " ) );
                                              }
                                            }
                                            else
                                            {
                                            }
                                          }
                                        }
                                        else
                                        {
                                        }
                                      }
                                    else
                                    {
                                      cp = HTList_objectAt( search_queries, QueryNum );
                                    }
                                  }
                                }
                              }
                            else
                              QueryNum = QueryTotal - 1;
                          }
                          else
                            QueryNum--;
                        }
                      }
                    }
                  }
                  else
                  {
                  }
                }
                else
                {
                  if ( ch == 257 )
                    continue;
                  else
                  {
                    HTInfoMsg( gettext( "Cancelled!!!" ) );
                    return 0;
                  }
                }
              }
              else
              {
                HTInfoMsg( gettext( "Cancelled!!!" ) );
                return 0;
              }
            }
          }
        }
      else
      {
      }
    }
    else
    {
      QueryTotal = HTList_count( search_queries );
      recall = ( QueryTotal < 1 ) ^ 1;
      QueryNum = QueryTotal;
    }
  }
  else
  {
  }
}
