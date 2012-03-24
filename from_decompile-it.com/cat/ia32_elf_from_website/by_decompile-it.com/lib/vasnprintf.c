#include "vasnprintf.c.h"
size_t xsum( size_t size1, size_t size2 )
{
  size_t sum = size2 + size1;
  return -1;
}
size_t xsum4( size_t size1, size_t size2, size_t size3, size_t size4 )
{
  return xsum( xsum( xsum( size1, size2 ), size3 ), size4 );
}
size_t xmax( size_t size1, size_t size2 )
{
  return size2;
}
int is_infinitel( double long x )
{
  return rpl_isnanl( x/*.1_8of16*/ ) || ( !( ( ( x/*.1_8of16*/ == x/*.1_8of16*/ * 0.000000000000 ) ^ 1 ) & 255 ) && ( x/*.1_8of16*/ != 0.000000000000 || x/*.1_8of16*/ != 0.000000000000 ) );
}
char *vasnprintf( char *resultbuf, size_t *lengthp, char *format, va_list args )
{
  int eax;
  int ah;
  char_directives d;
  arguments a;
  if ( printf_parse( format, &d, &a ) < 0 )
    return 0;
  else
  {
    if ( printf_fetchargs( args, &a ) < 0 )
    {
      free( d.dir );
      if ( a.arg )
        free( a.arg );
      *(int*)(__errno_location( )) = 22;
      return 0;
    }
    else
    {
      size_t buf_neededlength = xsum4( 7, d.max_width_length, d.max_precision_length, 6 );
      char *buf;
      char *buf_malloced;
      char *cp;
      size_t i;
      char_directive *dp;
      char *result;
      size_t allocated;
      size_t length;
      if ( buf_neededlength <= 3999 )
      {
        buf = ( ( ( ebp_1368 - ( ( ( buf_neededlength + 30 ) >> 4 ) << 4 ) ) + 36 + 15 ) >> 4 ) << 4;
        buf_malloced = 0;
      }
      else
      {
        size_t buf_memsize = buf_neededlength;
        if ( buf_memsize != -1 )
        {
          buf = malloc( ( buf_memsize ) * sizeof( char ) );
          if ( buf )
            buf_malloced = buf;
          else
          {
            free( d.dir );
            if ( a.arg )
              free( a.arg );
            *(int*)(__errno_location( )) = 12;
            return 0;
          }
        }
      }
      if ( resultbuf )
      {
        result = resultbuf;
        allocated = lengthp[0];
      }
      else
      {
        result = 0;
        allocated = 0;
      }
      length = 0;
      cp = format;
      i = 0;
      dp = d.dir;
      while ( dp->dir_start[0] == cp )
      {
        if ( i != d.count )
        {
          if ( dp->conversion == '%' )
          {
            size_t augmented_length;
            if ( dp->arg_index != -1 )
            {
              abort( );
            }
            augmented_length = xsum( length, 1 );
            if ( allocated < augmented_length )
            {
              size_t memory_size;
              char *memory;
              allocated = 12;
              if ( allocated < augmented_length )
                allocated = augmented_length;
              memory_size = allocated;
              if ( memory_size != -1 )
              {
                if ( resultbuf != result && result )
                {
                  memory = (char*)realloc( result, memory_size );
                }
                else
                {
                  memory = malloc( ( memory_size ) * sizeof( char ) );
                }
                if ( memory )
                {
                  if ( resultbuf == result && length )
                    memcpy( memory, result, length );
                  result = memory;
                }
                else
                {
                  if ( resultbuf != result && result )
                    free( result );
                  if ( buf_malloced )
                    free( buf_malloced );
                }
              }
            }
            result[ length ] = '%';
            length = augmented_length;
          }
          else
          {
            if ( dp->arg_index == -1 )
            {
              abort( );
            }
            if ( dp->conversion == 'n' )
            {
              switch ( a.arg[ dp->arg_index + 2 ].a.a_longdouble )
              {
              case 0:
                a.arg[ dp->arg_index ].a.a_schar = length;
                break;
              case 1:
                a.arg[ dp->arg_index ].a.a_short = length;
                break;
              case 2:
                a.arg[ dp->arg_index ].a.a_int = length;
                break;
              case 3:
                a.arg[ dp->arg_index ].a.a_int = length;
                break;
              case 4:
                a.arg[ dp->arg_index ].a.a_int = length;
                break;
              default:
                abort( );
                break;
              }
            }
            else
            {
              if ( ( dp->conversion == 'f' || dp->conversion == 'F' || dp->conversion == 'e' || dp->conversion == 'E' || dp->conversion == 'g' || dp->conversion == 'G' || dp->conversion == 'a' || dp->conversion == 'A' ) && a.arg[ dp->arg_index ].type == 12 && is_infinitel( a.arg[ dp->arg_index ].a.a_schar ) )
              {
                int flags = dp->flags;
                int has_width = 0;
                size_t width = 0;
                int has_precision;
                size_t precision;
                size_t tmp_length;
                char tmpbuf[700];
                char *tmp;
                char *pad_ptr;
                char *p;
                if ( dp->width_end != dp->width_start )
                {
                  if ( dp->width_arg_index != -1 )
                  {
                    int arg;
                    if ( a.arg[ dp->width_arg_index ].type != 5 )
                    {
                      abort( );
                    }
                    arg = a.arg[ dp->width_arg_index ].a.a_schar;
                    if ( arg < 0 )
                    {
                      flags |= 2;
                      width = 0 - arg;
                    }
                    else
                      width = arg;
                  }
                  else
                  {
                    char *digitp = &dp->width_start;
                    do
                    {
                      width = xsum( width <= 0x19999999 ? width * 10 : -1, digitp[0] + -48 );
                    }
                    while ( dp->width_end != digitp );
                  }
                  has_width = 1;
                }
                has_precision = 0;
                precision = 0;
                if ( dp->precision_end != dp->precision_start )
                {
                  if ( dp->precision_arg_index != -1 )
                  {
                    int arg;
                    if ( a.arg[ dp->precision_arg_index ].type != 5 )
                    {
                      abort( );
                    }
                    arg = a.arg[ dp->precision_arg_index ].a.a_schar;
                    if ( arg >= 0 )
                    {
                      precision = arg;
                      has_precision = 1;
                    }
                  }
                  else
                  {
                    char *digitp = &dp->precision_start[1];
                    precision = 0;
                    for ( ; dp->precision_end != digitp;  )
                    {
                      digitp++;
                      precision = xsum( precision <= 0x19999999 ? precision * 10 : -1, digitp[0] + -48 );
                    }
                    has_precision = 1;
                  }
                }
                if ( has_precision == 0 )
                  precision = 6;
                tmp_length = 0;
                if ( tmp_length < precision )
                  tmp_length = precision;
                tmp_length = xsum( tmp_length, 12 );
                if ( tmp_length < width )
                  tmp_length = width;
                tmp_length = xsum( tmp_length, 1 );
                if ( tmp_length <= 700 )
                  tmp = tmpbuf;
                else
                {
                  size_t tmp_memsize = tmp_length;
                  if ( tmp_memsize != -1 )
                  {
                    tmp = malloc( ( tmp_memsize ) * sizeof( char ) );
                    if ( tmp == 0 )
                      continue;
                  }
                }
                pad_ptr = 0;
                p = tmp;
              {
                double long arg;
                arg/*.5_8of16*/ = (a.arg[ dp->arg_index ].a.a_float);
                arg/*.9_12of16*/ = a.arg[ dp->arg_index + 0 ].a.a_char;
                if ( rpl_isnanl( arg/*.1_8of16*/ ) )
                {
                  if ( '@' < dp->conversion && dp->conversion <= 'Z' )
                  {
                    p[0] = 'N';
                    p++;
                    p[0] = 'A';
                    p++;
                    p[0] = 'N';
                    p++;
                  }
                  else
                  {
                    p[0] = 'n';
                    p++;
                    p[0] = 'a';
                    p++;
                    p[0] = 'n';
                    p++;
                  }
                }
                else
                {
                  int sign = 0;
                  fpucw_t oldcw;
                {
                  fpucw_t _cw = ( ( fpround & 3 ) << 10 ) | 895;
                  oldcw = ebp_936;
                {
                  fpucw_t _ncw = "ah | 3 | 3 # oldcw";
                  if ( __signbitl( &arg/*.5_8of16*/ ) )
                  {
                    sign = -1;
                    arg/*.1_8of16*/ = -( arg/*.1_8of16*/ );
                  }
                  if ( sign < 0 )
                  {
                    p[0] = '-';
                    p++;
                  }
                  else
                  if ( flags & 4 )
                  {
                    p[0] = '+';
                    p++;
                  }
                  else
                  if ( flags & 8 )
                  {
                    p[0] = ' ';
                    p++;
                  }
                  if ( ( ( ( 0.000000000000 < arg/*.1_8of16*/ ) ^ 1 ) & 255 ) == 0 && ( ( ( arg/*.1_8of16*/ == arg/*.1_8of16*/ * 0.000000000000 ) ^ 1 ) & 255 ) == 0 )
                  {
                    if ( '@' < dp->conversion && dp->conversion <= 'Z' )
                    {
                      p[0] = 'I';
                      p++;
                      p[0] = 'N';
                      p++;
                      p[0] = 'F';
                      p++;
                    }
                    else
                    {
                      p[0] = 'i';
                      p++;
                      p[0] = 'n';
                      p++;
                      p[0] = 'f';
                      p++;
                    }
                  {
                    fpucw_t _ncw = oldcw;
                  }
                  }
                  else
                  {
                    abort( );
                  }
                }
                }
                }
                if ( has_width && p - tmp < width )
                {
                  size_t pad = width + ( tmp - p );
                  char *end = &p[ pad ];
                  if ( flags & 2 )
                  {
                    for ( ; pad;  )
                    {
                      p[0] = ' ';
                      p++;
                      pad += -1;
                    }
                  }
                  else
                  if ( ( flags & 32 ) && pad_ptr )
                  {
                    char *q = end;
                    for ( ; pad_ptr < p;  )
                    {
                      q = &q[ -1 ];
                      p = &p[ -1 ];
                      q[0] = p[0];
                    }
                    for ( ; pad;  )
                    {
                      p[0] = '0';
                      p++;
                      pad += -1;
                    }
                  }
                  else
                  {
                    char *q = end;
                    for ( ; tmp < p;  )
                    {
                      q = &q[ -1 ];
                      p = &p[ -1 ];
                      q[0] = p[0];
                    }
                    for ( ; pad;  )
                    {
                      p[0] = ' ';
                      p++;
                      pad += -1;
                    }
                  }
                  p = end;
                }
              {
                size_t count = p - tmp;
                if ( tmp_length <= count )
                {
                  abort( );
                }
                if ( allocated - length <= count )
                {
                  size_t n = xsum( length, count );
                  if ( allocated < n )
                  {
                    size_t memory_size;
                    char *memory;
                    allocated = 12;
                    if ( allocated < n )
                      allocated = n;
                    memory_size = allocated;
                    if ( memory_size != -1 )
                    {
                      if ( resultbuf != result && result )
                      {
                        memory = (char*)realloc( result, memory_size );
                      }
                      else
                      {
                        memory = malloc( ( memory_size ) * sizeof( char ) );
                      }
                      if ( memory )
                      {
                        if ( resultbuf == result && length )
                          memcpy( memory, result, length );
                        result = memory;
                      }
                    }
                  }
                }
                memcpy( &result[ length ], tmp, count );
                if ( tmpbuf[0] != tmp )
                  free( tmp );
                length += count;
              }
              }
              }
              else
              {
                arg_type type = a.arg[ dp->arg_index ];
                int flags = dp->flags;
                char *fbp = buf;
                unsigned int prefix_count;
                int prefixes[2];
                fbp[0] = '%';
                fbp++;
                if ( flags & 1 )
                {
                  fbp[0] = '\'';
                  fbp++;
                }
                if ( flags & 2 )
                {
                  fbp[0] = '-';
                  fbp++;
                }
                if ( flags & 4 )
                {
                  fbp[0] = '+';
                  fbp++;
                }
                if ( flags & 8 )
                {
                  fbp[0] = ' ';
                  fbp++;
                }
                if ( flags & 16 )
                {
                  fbp[0] = '#';
                  fbp++;
                }
                if ( flags & 32 )
                {
                  fbp[0] = '0';
                  fbp++;
                }
                if ( dp->width_end != dp->width_start )
                {
                  size_t n = dp->width_end - dp->width_start;
                  memcpy( fbp, &dp->width_start, n );
                  fbp = &fbp[ n ];
                }
                if ( dp->precision_end != dp->precision_start )
                {
                  size_t n = dp->precision_end - dp->precision_start;
                  memcpy( fbp, &dp->precision_start, n );
                  fbp = &fbp[ n ];
                }
                if ( type <= 16 )
                {
                  if ( ( ( 1 << type ) & 0x14180 ) == 0 )
                  {
                    if ( ( ( 1 << type ) & 4096 ) == 0 )
                    {
                      if ( ( 1 << type ) & 1536 )
                      {
                        fbp[0] = 'l';
                        fbp++;
                      }
                    }
                    else
                    {
                      fbp[0] = 'L';
                      fbp++;
                    }
                  }
                  fbp[0] = 'l';
                  fbp++;
                }
                fbp[0] = dp->conversion;
                fbp[1] = 0;
                prefix_count = 0;
                if ( dp->width_arg_index != -1 )
                {
                  if ( a.arg[ dp->width_arg_index ].type != 5 )
                  {
                    abort( );
                  }
                  prefixes[ prefix_count ] = a.arg[ dp->width_arg_index ].a.a_schar;
                  prefix_count++;
                }
                if ( dp->precision_arg_index != -1 )
                {
                  if ( a.arg[ dp->precision_arg_index ].type != 5 )
                  {
                    abort( );
                  }
                  prefixes[ prefix_count ] = a.arg[ dp->precision_arg_index ].a.a_schar;
                  prefix_count++;
                }
                if ( allocated < xsum( length, 2 ) )
                {
                  size_t memory_size;
                  char *memory;
                  allocated = 12;
                  if ( allocated < xsum( length, 2 ) )
                  {
                    allocated = xsum( length, 2 );
                  }
                  memory_size = allocated;
                  if ( memory_size != -1 )
                  {
                    if ( resultbuf != result && result )
                    {
                      memory = (char*)realloc( result, memory_size );
                    }
                    else
                    {
                      memory = malloc( ( memory_size ) * sizeof( char ) );
                    }
                    if ( memory )
                    {
                      if ( resultbuf == result && length )
                        memcpy( memory, result, length );
                      result = memory;
                    }
                  }
                }
                result[ length ] = 0;
              {
                while ( count = -1, retcount = 0, maxlen = allocated - length, (int)maxlen >= 0 )
                {
                  switch ( type )
                  {
                  case TYPE_SCHAR:
                  {
                    int arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                    if ( count >= 0 )
                    {
                      if ( count < maxlen && result[ length + count ] )
                      {
                        abort( );
                      }
                      if ( count < retcount )
                        count = retcount;
                    }
                    else
                    if ( fbp[1] )
                    {
                      fbp[1] = 0;
                    }
                    else
                    if ( retcount < 0 )
                    {
                      size_t bigger_need = xsum( -1, 12 );
                      if ( allocated < bigger_need )
                      {
                        size_t memory_size;
                        char *memory;
                        allocated = 12;
                        if ( allocated < bigger_need )
                          allocated = bigger_need;
                        memory_size = allocated;
                        if ( memory_size != -1 )
                        {
                          if ( resultbuf != result && result )
                          {
                            memory = (char*)realloc( result, memory_size );
                          }
                          else
                          {
                            memory = malloc( ( memory_size ) * sizeof( char ) );
                          }
                          if ( memory )
                          {
                            if ( resultbuf == result && length )
                              memcpy( memory, result, length );
                            result = memory;
                          }
                        }
                      }
                    }
                    else
                      count = retcount;
                    if ( count < 0 )
                    {
                      if ( resultbuf != result && result )
                        free( result );
                      if ( buf_malloced )
                        free( buf_malloced );
                      free( d.dir );
                      if ( a.arg )
                        free( a.arg );
                      *(int*)(__errno_location( )) = 22;
                      return 0;
                    }
                    else
                    {
                      if ( maxlen <= count + 1 )
                      {
                        if ( maxlen != 2147483647 )
                        {
                          size_t n = xmax( xsum( length, count + 2 ), -1 );
                          if ( allocated < n )
                          {
                            size_t memory_size;
                            char *memory;
                            allocated = 12;
                            if ( allocated < n )
                              allocated = n;
                            memory_size = allocated;
                            if ( memory_size != -1 )
                            {
                              if ( resultbuf != result && result )
                              {
                                memory = (char*)realloc( result, memory_size );
                              }
                              else
                              {
                                memory = malloc( ( memory_size ) * sizeof( char ) );
                              }
                              if ( memory )
                              {
                                if ( resultbuf == result && length )
                                  memcpy( memory, result, length );
                                result = memory;
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( resultbuf != result && result )
                            free( result );
                          if ( buf_malloced )
                            free( buf_malloced );
                          free( d.dir );
                          if ( a.arg )
                            free( a.arg );
                          *(int*)(__errno_location( )) = 75;
                          return 0;
                        }
                      }
                      else
                        length += count;
                    }
                  }
                    break;
                  case TYPE_UCHAR:
                  {
                    unsigned int arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_SHORT:
                  {
                    int arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_USHORT:
                  {
                    unsigned int arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_INT:
                  {
                    int arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_UINT:
                  {
                    unsigned int arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_LONGINT:
                  {
                    long arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_ULONGINT:
                  {
                    unsigned long arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_LONGLONGINT:
                  {
                    long long arg;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_ULONGLONGINT:
                  {
                    unsigned long long arg;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_DOUBLE:
                  {
                    double arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_LONGDOUBLE:
                  {
                    double long arg;
                    arg/*.5_8of16*/ = (a.arg[ dp->arg_index ].a.a_float);
                    arg/*.9_12of16*/ = a.arg[ dp->arg_index + 0 ].a.a_char;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg/*.1_8of16*/, arg/*.9_12of16*/, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg/*.1_8of16*/, arg/*.9_12of16*/, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg/*.1_8of16*/, arg/*.9_12of16*/, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_CHAR:
                  {
                    int arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_WIDE_CHAR:
                  {
                    wint_t arg = a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_STRING:
                  {
                    char *arg = &a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_WIDE_STRING:
                  {
                    wchar_t *arg = &a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_POINTER:
                  {
                    void *arg = &a.arg[ dp->arg_index ].a.a_schar;
                    switch ( prefix_count )
                    {
                    case 0:
                      retcount = snprintf( &result[ length ], maxlen, buf, arg, count );
                      break;
                    case 1:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], arg, count );
                      break;
                    case 2:
                      retcount = snprintf( &result[ length ], maxlen, buf, prefixes[0], prefixes[1], arg, count );
                      break;
                    default:
                      abort( );
                      break;
                    }
                  }
                    break;
                  case TYPE_NONE:
                    abort( );
                    break;
                  }
                }
                maxlen = 0x7fffffff;
                switch ( type )
                {
                case TYPE_SCHAR:
                  break;
                case TYPE_UCHAR:
                  break;
                case TYPE_SHORT:
                  break;
                case TYPE_USHORT:
                  break;
                case TYPE_INT:
                  break;
                case TYPE_UINT:
                  break;
                case TYPE_LONGINT:
                  break;
                case TYPE_ULONGINT:
                  break;
                case TYPE_LONGLONGINT:
                  break;
                case TYPE_ULONGLONGINT:
                  break;
                case TYPE_DOUBLE:
                  break;
                case TYPE_LONGDOUBLE:
                  break;
                case TYPE_CHAR:
                  break;
                case TYPE_WIDE_CHAR:
                  break;
                case TYPE_STRING:
                  break;
                case TYPE_WIDE_STRING:
                  break;
                case TYPE_POINTER:
                  break;
                case TYPE_NONE:
                  break;
                }
              }
              }
            }
          }
          cp = &dp->dir_end;
          i++;
          dp++;
        }
        else
        {
          if ( allocated < xsum( length, 1 ) )
          {
            size_t memory_size;
            char *memory;
            allocated = 12;
            if ( allocated < xsum( length, 1 ) )
            {
              allocated = xsum( length, 1 );
            }
            memory_size = allocated;
            if ( memory_size != -1 )
            {
              if ( resultbuf != result && result )
              {
                memory = (char*)realloc( result, memory_size );
              }
              else
              {
                memory = malloc( ( memory_size ) * sizeof( char ) );
              }
              if ( memory )
              {
                if ( resultbuf == result && length )
                  memcpy( memory, result, length );
                result = memory;
              }
            }
          }
          result[ length ] = 0;
          if ( resultbuf != result && length + 1 < allocated )
          {
            char *memory = (char*)realloc( result, length + 1 );
            if ( memory )
              result = memory;
          }
          if ( buf_malloced )
            free( buf_malloced );
          free( d.dir );
          if ( a.arg )
            free( a.arg );
          lengthp[0] = length;
          return result;
        }
      }
    {
      size_t n = dp->dir_start[0] - cp;
      size_t augmented_length = xsum( length, n );
      if ( allocated < augmented_length )
      {
        size_t memory_size;
        char *memory;
        allocated = 12;
        if ( allocated < augmented_length )
          allocated = augmented_length;
        memory_size = allocated;
        if ( memory_size != -1 )
        {
          if ( resultbuf != result && result )
          {
            memory = (char*)realloc( result, memory_size );
          }
          else
          {
            memory = malloc( ( memory_size ) * sizeof( char ) );
          }
          if ( memory )
          {
            if ( resultbuf == result && length )
              memcpy( memory, result, length );
            result = memory;
          }
        }
      }
      memcpy( &result[ length ], cp, n );
      length = augmented_length;
    }
    }
  }
}
#if 0
#endif
