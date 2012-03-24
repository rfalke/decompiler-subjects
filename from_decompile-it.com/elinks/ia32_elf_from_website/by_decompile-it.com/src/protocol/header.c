#include "header.c.h"
unsigned char *parse_header( unsigned char *head, unsigned char *item, unsigned char **ptr )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *pos;
  if ( head )
  {
    do
    {
      while ( pos[0] & 255 )
      {
        if ( pos[0] != 10 )
        {
          do
          {
            pos[0] = pos[1];
            if ( pos[0] == 10 )
              goto B6;
            else
            {
              pos[0] = pos[0];
            }
          }
          while ( 0 & 255 );
          break;
        }
B6:        pos[0] = pos[0] + 1;
        if ( item[0] )
        {
          if ( pos[1] )
          {
            edx = item;
            do
            {
              if ( edi != eax || pos[1] == 0 )
                goto B13;
              else
            }
            while ( pos[0] );
            break;
          }
        }
        else
        {
        }
B13:        if ( pos[0] )
        {
          if ( pos[1] == 0 )
          {
            if ( pos[0] == ' ' || pos[0] == 9 )
            {
              pos[0] = pos[0];
              do
              {
                pos[0] = pos[1];
              }
              while ( pos[0] == 9 || pos[0] == ' ' );
              if ( ( pos[0] & 255 ) == 0 )
                break;
            }
            pos[0] = pos[0];
            if ( pos[0] )
            {
              if ( pos[0] != 9 && pos[0] != ' ' )
                pos[0] = pos[0];
              else
              {
                do
                {
                  pos[0] = pos[1];
                }
                while ( pos[0] == 9 || pos[0] == ' ' );
                if ( ( pos[0] & 255 ) == 0 )
                  break;
              }
              if ( pos[0] != pos[0] )
              {
                edx = pos[0];
                if ( pos[0] == 127 )
                  continue;
                else
                {
                  do
                  {
                    if ( ' ' <= pos[1] && pos[1] != 9 && pos[1] != ' ' )
                    {
                      pos[0] = pos[0];
                      if ( pos[1] & 255 )
                      {
                        if ( pos[1] != 10 && pos[1] != 13 )
                        {
                        }
                        else
                        {
                          if ( pos[0] < pos[0] + 1 )
                          {
                            if ( *(char*)(( pos[0] + 1 ) - 1) != ' ' && *(char*)(( pos[0] + 1 ) - 1) != 9 )
                            {
                            }
                            else
                            {
                              if ( pos[0] < ( pos[0] + 1 ) - 1 )
                              {
                                do
                                {
                                  if ( *(char*)(( pos[0] + 1 ) - 1 - 1) != 9 )
                                  {
                                    if ( edx != ' ' )
                                      break;
                                    else
                                      ecx = ecx;
                                  }
                                  else
                                    ecx = ecx;
                                }
                                while ( pos[0] < eax );
                              }
                            }
                          }
                          if ( assert_failed == 0 )
                          {
                            assert_failed = ( 0 - pos[0] ) >> 31;
                            if ( ( 0 - pos[0] ) >> 31 )
                            {
                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/header.c";
                              errline = 179;
                              elinks_internal( "assertion len &gt;= 0 failed!" );
                              if ( assert_failed )
                                goto B57;
                            }
                            if ( 0 - pos[0] == 0 )
                            {
                              do
                              {
                              }
                              while ( 0 - pos[0] == 0 );
                              if ( eax && ptr )
                                break;
                              break;
                            }
                          }
B57:                          assert_failed = 0;
                          break;
                        }
                      }
                    }
                    else
                    {
                    }
                  }
                  while ( pos[1] != 127 );
                }
              }
            }
          }
          return pos[0];
        }
      }
    }
    while ( 0 - pos[0] == 0 );
  }
{
  unsigned char *end, *itempos, *value;
  int len;
  return 0;
}
}
enum parse_header_param  parse_header_param( unsigned char *str, unsigned char *name, unsigned char **ret )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *p;
  int plen;
  if ( ret )
    ret[0] = 0;
  if ( assert_failed == 0 )
  {
    if ( name[0] && str[0] && name[0] )
    {
      assert_failed = 0;
      if ( str[0] == 0 )
      {
        return HEADER_PARAM_NOT_FOUND;
      }
    }
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/header.c";
      errline = 216;
      elinks_internal( "assertion str && name && *name failed!" );
      if ( assert_failed == 0 )
      {
        if ( str[0] == 0 )
        {
          return HEADER_PARAM_NOT_FOUND;
        }
      }
    }
    do
    {
      p[0] = strchr( &p[0], 59 );
      if ( strchr( &p[0], 59 ) )
      {
        for ( ; p[0] && ( ' ' <= p[0] || p[0] == ';' ); p[0] = p[1] )
        {
          //p[0] = p[1];
        }
        if ( strlen( &name[0] ) <= strlen( &p[0] ) )
        {
        }
        else
          break;
      }
      else
        break;
    }
    while ( c_strncasecmp( &p[0], &name[0], strlen( &name[0] ) ) );
    p[0] = p[ strlen( &name[0] ) ];
    if ( p[0] )
    {
      if ( p[0] < ' ' && p[0] != '=' )
      {
      }
      else
      {
        do
        {
          p[0] = p[1];
          if ( p[0] == 0 )
            goto B28;
          else
        }
        while ( p[0] != '=' && p[0] < ' ' );
      }
      plen = 0;
      while ( 1 )
      {
        if ( p[ plen ] < ' ' )
        {
          if ( p[ plen ] != ';' )
          {
            plen++;
          }
        }
        else
        if ( p[ plen ] != 9 && p[ plen ] != ' ' )
        {
        }
        else
        {
          plen++;
        }
        if ( plen )
        {
          if ( p[ ( plen + 1 ) - 1 ] == 9 || p[ p[0] - 1 ] == ' ' )
          {
            p[ plen ] = p[ plen ];
            do
            {
              plen--;
              if ( plen == 1 )
                plen--;
              else
            }
            while ( *(char*)(eax - 2) != 9 && *(char*)(memacpy( &p[0], plen ) - 2) != ' ' );
          }
          else
          {
          }
          if ( plen <= 1 || p[0] != '\'' || *(char*)(( p[0] + plen ) - 1) != '\'' )
            plen--;
          else
          {
            while ( plen -= 2, p[0] = p[1], plen - 2 > 1 && p[0] == '\'' && *(char*)(ecx - 2) == '\'' )
            {
              plen -= 2;
            }
          }
        }
        if ( ret )
        {
          ret[0] = memacpy( &p[0], plen );
          if ( ret == 0 )
          {
            break;
          }
          break;
        }
        else
          break;
      }
    }
B28:    if ( ret )
    {
      ret[0] = stracpy( "" );
      if ( ret == 0 )
      {
        return HEADER_PARAM_NOT_FOUND;
      }
      return HEADER_PARAM_FOUND;
    }
    else
    {
      return HEADER_PARAM_FOUND;
    }
    plen = 0;
    while ( 1 )
    {
    }
  }
  assert_failed = 0;
  return HEADER_PARAM_NOT_FOUND;
}
unsigned char *get_header_param( unsigned char *e, unsigned char *name )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *n, *start;
  n[0] = name[1];
  do
  {
    if ( e[0] )
    {
      e[0] = e[1];
      if ( c_toupper( e[0] ) != c_toupper( name[0] ) )
        continue;
      else
      if ( e[0] )
      {
        n[0] = name[1];
        if ( n[0] )
        {
          while ( c_toupper( e[0] ) == c_toupper( n[0] ) )
          {
            n[0] = n[1];
            e[0] = e[1];
            if ( n[0] == 0 )
              goto B17;
            else
            {
            }
B17:          }
        }
        else
          return e[0];
        if ( edx == '=' )
        {
          e[0] = e[0] + 1;
          if ( e[1] != '\'' && e[1] != '"' )
          {
            if ( e[0] )
            {
            }
          }
          else
          {
            e[0] = e[1];
            if ( e[1] != e[0] )
            {
              if ( e[0] & 255 )
              {
                do
                {
                  e[0] = e[1];
                  if ( e[0] == e[1] )
                  {
                    start[0] = start[0];
                    if ( e[1] < e[0] )
                    {
                      do
                      {
                        if ( start[0] != ' ' )
                        {
                          e[0] = e[0] - 1;
                          if ( *(char*)(e[0] - 1) == ' ' )
                          {
                            for ( ; start[0] < e[0] && *(char*)(e[0] - 1 - 1) == ' '; e[0] = e[0] )
                            {
                              //e[0] = e[0];
                            }
                            e[0] = e[0];
                            break;
                          }
                          else
                            break;
                        }
                        else
                        {
                          start[0] = start[1];
                        }
                      }
                      while ( start[1] < e[0] );
                      if ( start[0] != e[0] )
                      {
                        if ( n[0] )
                        {
                          if ( start[0] < e[0] )
                          {
                            start[0] = start[0];
                            do
                            {
                              start[0] = start[1];
                              n[0] = (unsigned char)( 31 <= start[0] ) ? start[0] : 46;
                            }
                            while ( start[1] < e[0] );
                            n[0] = n[0];
                            *(int*)(e[0] - start[0]) = e[0] - start[0];
                          }
                          break;
                        }
                        else
                          break;
                      }
                    }
                  }
                  else
                }
                while ( e[0] & 255 );
              }
            }
          }
          start[0] = e[0];
          e[0] = e[1];
        }
      }
    }
    n[0] = 0;
    break;
  }
  while ( n[0] );
B17:}
#if 0
#endif
