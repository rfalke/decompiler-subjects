#include "printf-parse.c.h"
size_t xsum( size_t size1, size_t size2 )
{
  size_t sum = size2 + size1;
  return -1;
}
int printf_parse( char *format, char_directives *d, arguments *a )
{
  char *cp = format;
  size_t arg_posn = 0;
  size_t d_allocated;
  size_t a_allocated;
  size_t max_width_length = 0;
  size_t max_precision_length = 0;
  d->count = 0;
  d_allocated = 1;
  d->dir = malloc( d_allocated * 44 );
  if ( d->dir )
  {
    a->count = 0;
    a_allocated = 0;
    a->arg = 0;
    while ( cp[0] )
    {
      char c = cp[0];
      cp++;
      if ( c != '%' )
        continue;
      else
      {
        size_t arg_index = -1;
        char_directive *dp = &d->dir[ d->count ];
        dp->dir_start[0] = cp[ -1 ];
        *(int*)&dp->flags = 0;
        *(int*)&dp->width_start = 0;
        *(int*)&dp->width_end = 0;
        *(int*)&dp->width_arg_index = -1;
        *(int*)&dp->precision_start = 0;
        *(int*)&dp->precision_end = 0;
        *(int*)&dp->precision_arg_index = -1;
        *(int*)&dp->arg_index = -1;
        if ( '/' < cp[0] && cp[0] <= '9' )
        {
          char *np = cp;
          for ( ; '/' < np[0] && np[0] <= '9'; np++ )
          {
            // np++;
          }
          if ( np[0] == '$' )
          {
            size_t n = 0;
            np = cp;
            for ( ; '/' < np[0] && np[0] <= '9'; np++ )
            {
              n = xsum( n <= 0x19999999 ? n * 10 : -1, np[0] + -48 );
              // np++;
            }
            if ( n && n != -1 )
            {
              arg_index = n + -1;
              cp = &np[1];
              while ( cp[0] != '\'' )
              {
                if ( cp[0] == '-' )
                {
                  dp->flags |= 2;
                  cp++;
                }
                else
                if ( cp[0] == '+' )
                {
                  dp->flags |= 4;
                  cp++;
                }
                else
                if ( cp[0] == ' ' )
                {
                  dp->flags |= 8;
                  cp++;
                }
                else
                if ( cp[0] == '#' )
                {
                  dp->flags |= 16;
                  cp++;
                }
                else
                if ( cp[0] == '0' )
                {
                  dp->flags |= ' ';
                  cp++;
                }
                else
                {
                  if ( cp[0] == '*' )
                  {
                    dp->width_start = cp;
                    cp++;
                    dp->width_end = cp;
                    if ( max_width_length == 0 )
                      max_width_length = 1;
                    if ( '/' < cp[0] && cp[0] <= '9' )
                    {
                      char *np = cp;
                      for ( ; '/' < np[0] && np[0] <= '9'; np++ )
                      {
                        // np++;
                      }
                      if ( np[0] == '$' )
                      {
                        size_t n = 0;
                        np = cp;
                        for ( ; '/' < np[0] && np[0] <= '9'; np++ )
                        {
                          n = xsum( n <= 0x19999999 ? n * 10 : -1, np[0] + -48 );
                          // np++;
                        }
                        if ( n && n != -1 )
                        {
                          dp->width_arg_index = n + -1;
                          cp = &np[1];
                        }
                      }
                    }
                    if ( dp->width_arg_index == -1 )
                    {
                      dp->width_arg_index = arg_posn;
                      arg_posn++;
                      if ( dp->width_arg_index != -1 )
                        goto B63;
                    }
                  {
B63:;
                    size_t n = dp->width_arg_index;
                    if ( a_allocated <= n )
                    {
                      size_t memory_size;
                      argument *memory;
                      a_allocated = -1;
                      if ( a_allocated <= n )
                      {
                        a_allocated = xsum( n, 1 );
                      }
                      memory_size = a_allocated <= 0xfffffff ? a_allocated << 4 : -1;
                      if ( memory_size != -1 )
                      {
                        memory = a->arg ? (argument*)realloc( &a->arg, memory_size ) : (argument*)malloc( memory_size );
                        if ( memory )
                        {
                          a->arg = memory;
                        }
                        else
                        {
                          if ( a->arg )
                            free( &a->arg );
                          if ( d->dir == 0 )
                          {
                            *(int*)(__errno_location( )) = 12;
                            return -1;
                          }
                          free( &d->dir );
                        }
                      }
                    }
                    while ( a->count <= n )
                    {
                      a->arg[ a->count ].type = 0;
                      a->count++;
                    }
                    if ( a->arg[ n ].type == 0 )
                      a->arg[ n ].type = 5;
                    else
                    {
                      if ( a->arg[ n ].type == 5 )
                        goto B87;
                    }
                  }
                  }
                  else
                  {
                    if ( '/' < cp[0] && cp[0] <= '9' )
                    {
                      size_t width_length;
                      dp->width_start = cp;
                      for ( ; '/' < cp[0] && cp[0] <= '9'; cp++ )
                      {
                        // cp++;
                      }
                      dp->width_end = cp;
                      width_length = dp->width_end - dp->width_start;
                      if ( max_width_length < width_length )
                        max_width_length = width_length;
                    }
                  }
B87:;
                  if ( cp[0] == '.' )
                  {
                    cp++;
                    if ( cp[0] == '*' )
                    {
                      dp->precision_start = cp[ -1 ];
                      cp++;
                      dp->precision_end = cp;
                      if ( max_precision_length <= 1 )
                        max_precision_length = 2;
                      if ( '/' < cp[0] && cp[0] <= '9' )
                      {
                        char *np = cp;
                        for ( ; '/' < np[0] && np[0] <= '9'; np++ )
                        {
                          // np++;
                        }
                        if ( np[0] == '$' )
                        {
                          size_t n = 0;
                          np = cp;
                          for ( ; '/' < np[0] && np[0] <= '9'; np++ )
                          {
                            n = xsum( n <= 0x19999999 ? n * 10 : -1, np[0] + -48 );
                            // np++;
                          }
                          if ( n && n != -1 )
                          {
                            dp->precision_arg_index = n + -1;
                            cp = &np[1];
                          }
                        }
                      }
                      if ( dp->precision_arg_index == -1 )
                      {
                        dp->precision_arg_index = arg_posn;
                        arg_posn++;
                        if ( dp->precision_arg_index != -1 )
                          goto B121;
                      }
                    {
B121:;
                      size_t n = dp->precision_arg_index;
                      if ( a_allocated <= n )
                      {
                        size_t memory_size;
                        argument *memory;
                        a_allocated = -1;
                        if ( a_allocated <= n )
                        {
                          a_allocated = xsum( n, 1 );
                        }
                        memory_size = a_allocated <= 0xfffffff ? a_allocated << 4 : -1;
                        if ( memory_size != -1 )
                        {
                          memory = a->arg ? (argument*)realloc( &a->arg, memory_size ) : (argument*)malloc( memory_size );
                          if ( memory )
                          {
                            a->arg = memory;
                          }
                        }
                      }
                      while ( a->count <= n )
                      {
                        a->arg[ a->count ].type = 0;
                        a->count++;
                      }
                      if ( a->arg[ n ].type == 0 )
                        a->arg[ n ].type = 5;
                      else
                      {
                        if ( a->arg[ n ].type == 5 )
                          goto B97;
                      }
                    }
                    }
                    else
                    {
                      size_t precision_length;
                      dp->precision_start = cp[ -1 ];
                      for ( ; '/' < cp[0] && cp[0] <= '9'; cp++ )
                      {
                        // cp++;
                      }
                      dp->precision_end = cp;
                      precision_length = dp->precision_end - dp->precision_start;
                      if ( max_precision_length < precision_length )
                        max_precision_length = precision_length;
                    }
                  }
                {
B97:;
                  int flags = 0;
                  while ( cp[0] != 'h' )
                  {
                    if ( cp[0] == 'L' )
                    {
                      flags |= 4;
                      cp++;
                    }
                    else
                    {
                      if ( cp[0] == 'l' )
                      {
                        flags += 8;
                        cp++;
                      }
                      else
                      {
                        if ( cp[0] == 'j' )
                        {
                          flags += 16;
                          cp++;
                        }
                        else
                        {
                          if ( cp[0] == 'z' || cp[0] == 'Z' )
                          {
                            cp++;
                          }
                          else
                          {
                            if ( cp[0] == 't' )
                            {
                              cp++;
                            }
                            else
                            {
                              c = cp[0];
                              cp++;
                              switch ( c + -37 )
                              {
                              case 63:
                              case 68:
                                if ( flags > 15 || ( flags & 4 ) )
                                  type = TYPE_LONGLONGINT;
                                else
                                {
                                  if ( flags > 7 )
                                    type = TYPE_LONGINT;
                                  else
                                  {
                                    if ( flags & 2 )
                                      type = TYPE_SCHAR;
                                    else
                                    {
                                      if ( flags & 1 )
                                        type = TYPE_SHORT;
                                      else
                                        type = TYPE_INT;
                                    }
                                  }
                                }
                                break;
                              case 51:
                              case 74:
                              case 80:
                              case 83:
                                if ( flags > 15 || ( flags & 4 ) )
                                  type = TYPE_ULONGLONGINT;
                                else
                                {
                                  if ( flags > 7 )
                                    type = TYPE_ULONGINT;
                                  else
                                  {
                                    if ( flags & 2 )
                                      type = TYPE_UCHAR;
                                    else
                                    {
                                      if ( flags & 1 )
                                        type = TYPE_USHORT;
                                      else
                                        type = TYPE_UINT;
                                    }
                                  }
                                }
                                break;
                              case 28:
                              case 32:
                              case 33:
                              case 34:
                              case 60:
                              case 64:
                              case 65:
                              case 66:
                                if ( flags > 15 || ( flags & 4 ) )
                                  type = TYPE_LONGDOUBLE;
                                else
                                  type = TYPE_DOUBLE;
                                break;
                              case 62:
                                if ( flags > 7 )
                                  type = TYPE_WIDE_CHAR;
                                else
                                  type = TYPE_CHAR;
                                break;
                              case 30:
                                type = TYPE_WIDE_CHAR;
                                c = 'c';
                                break;
                              case 78:
                                if ( flags > 7 )
                                  type = TYPE_WIDE_STRING;
                                else
                                  type = TYPE_STRING;
                                break;
                              case 46:
                                type = TYPE_WIDE_STRING;
                                c = 's';
                                break;
                              case 75:
                                type = TYPE_POINTER;
                                break;
                              case 73:
                                if ( flags > 15 || ( flags & 4 ) )
                                  type = TYPE_COUNT_LONGLONGINT_POINTER;
                                else
                                {
                                  if ( flags > 7 )
                                    type = TYPE_COUNT_LONGINT_POINTER;
                                  else
                                  {
                                    if ( flags & 2 )
                                      type = TYPE_COUNT_SCHAR_POINTER;
                                    else
                                    {
                                      if ( flags & 1 )
                                        type = TYPE_COUNT_SHORT_POINTER;
                                      else
                                        type = TYPE_COUNT_INT_POINTER;
                                    }
                                  }
                                }
                                break;
                              case 0:
                                type = TYPE_NONE;
                                break;
                              default:
                                break;
                              }
                              if ( type )
                              {
                                dp->arg_index = arg_index;
                                if ( dp->arg_index == -1 )
                                {
                                  dp->arg_index = arg_posn;
                                  arg_posn++;
                                  if ( dp->arg_index != -1 )
                                    goto B179;
                                }
                              {
B179:;
                                size_t n = dp->arg_index;
                                if ( a_allocated <= n )
                                {
                                  size_t memory_size;
                                  argument *memory;
                                  a_allocated = -1;
                                  if ( a_allocated <= n )
                                  {
                                    a_allocated = xsum( n, 1 );
                                  }
                                  memory_size = a_allocated <= 0xfffffff ? a_allocated << 4 : -1;
                                  if ( memory_size != -1 )
                                  {
                                    memory = a->arg ? (argument*)realloc( &a->arg, memory_size ) : (argument*)malloc( memory_size );
                                    if ( memory )
                                    {
                                      a->arg = memory;
                                    }
                                  }
                                }
                                while ( a->count <= n )
                                {
                                  a->arg[ a->count ].type = 0;
                                  a->count++;
                                }
                                if ( a->arg[ n ].type )
                                {
                                  if ( a->arg[ n ].type == type )
                                    goto B176;
                                }
                                else
                                  a->arg[ n ].type = type;
                              }
                              }
B176:;
                              dp->conversion = c;
                              dp->dir_end = cp;
                              d->count++;
                              if ( d_allocated <= d->count )
                              {
                                size_t memory_size;
                                char_directive *memory;
                                d_allocated = -1;
                                memory_size = d_allocated <= 0x5d1745d ? d_allocated * 44 : -1;
                                if ( memory_size != -1 )
                                {
                                  memory = (char_directive*)realloc( &d->dir, memory_size );
                                  if ( memory )
                                  {
                                    d->dir = memory;
                                    break;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  flags |= 1 << ( flags & 1 );
                  cp++;
                }
                }
              }
              dp->flags |= 1;
              cp++;
            }
          }
        }
        if ( a->arg )
          free( &a->arg );
        if ( d->dir == 0 )
        {
          *(int*)(__errno_location( )) = 22;
          return -1;
        }
        free( &d->dir );
        *(int*)(__errno_location( )) = 22;
        return -1;
      }
    }
    d->dir[ d->count ].dir_start = cp;
    d->max_width_length = max_width_length;
    d->max_precision_length = max_precision_length;
    return 0;
  }
}
#if 0
#endif
