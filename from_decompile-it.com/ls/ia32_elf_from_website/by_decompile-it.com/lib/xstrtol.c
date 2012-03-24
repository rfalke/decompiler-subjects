#include "xstrtol.c.h"
static strtol_error bkm_scale( unsigned long *x, int scale_factor );
static strtol_error bkm_scale_by_power( unsigned long *x, int base, int power );
static strtol_error bkm_scale( uintmax_t *x, int scale_factor );
static strtol_error bkm_scale_by_power( uintmax_t *x, int base, int power );
strtol_error bkm_scale( unsigned long *x, int scale_factor )
{
  if ( (long long)4294967295 / scale_factor < x[0] )
  {
    x[0] = -1;
    return 1;
  }
  x[0] *= scale_factor;
  return 0;
}
strtol_error bkm_scale( uintmax_t *x, int scale_factor )
{
  if ( __udivdi3( -1, scale_factor ) <= (unsigned int)(x[0] << 32) && ( __udivdi3( -1, scale_factor ) < (unsigned int)(x[0] << 32) || __udivdi3( -1, scale_factor ) < (unsigned int)(x[0] & 0xFFFFFFFF) ) )
  {
    x[0] = -1;
    return 1;
  }
  (x[0] & 0xFFFFFFFF) = (int)( scale_factor * (int)(x[0] & 0xFFFFFFFF) );
  (x[0] << 32) = ( (unsigned int)(x[0] << 32) * scale_factor ) + ( (unsigned int)(x[0] & 0xFFFFFFFF) * ( scale_factor >> 31 ) ) + (/*HI*/int)( scale_factor * (int)(x[0] & 0xFFFFFFFF) );
  return 0;
}
strtol_error bkm_scale_by_power( unsigned long *x, int base, int power )
{
  strtol_error err = LONGINT_OK;
  while ( power-- )
  {
    err |= bkm_scale( x, base );
  }
  return err;
}
strtol_error bkm_scale_by_power( uintmax_t *x, int base, int power )
{
  strtol_error err = LONGINT_OK;
  while ( power-- )
  {
    err |= bkm_scale( x, base );
  }
  return err;
}
strtol_error xstrtoul( char *s, char **ptr, int strtol_base, unsigned long *val, char *valid_suffixes )
{
  // static char __PRETTY_FUNCTION__[9] = { 'x', 's', 't', 'r', 't', 'o', 'u', 'l',  };
  char *t_ptr;
  char **p;
  unsigned long tmp;
  strtol_error err = LONGINT_OK;
  if ( strtol_base < 0 || strtol_base > 36 )
  {
    __assert_fail( "0 &lt;= strtol_base && strtol_base &lt;= 36", "xstrtol.c", 83, __PRETTY_FUNCTION__ );
  }
  p = ptr == 0 ? &t_ptr : ptr;
{
  char *q = s;
  unsigned char ch = q[0];
  for ( ; ( *(short*)(*(int*)(__ctype_b_loc( ptr == 0 ? t_ptr : ptr )) + ( ch * 2 )) & 8192 ) != 0; ch = q[0] )
  {
    q++;
    //ch = q[0];
  }
  if ( ch == '-' )
  {
    return 4;
  }
  *(int*)(__errno_location( )) = 0;
  tmp = strtoul( s, p, strtol_base );
  if ( p[0] == s )
  {
    if ( valid_suffixes != 0 && ( p[0][0] & 255 ) != 0 && strchr( valid_suffixes, p[0][0] ) != 0 )
      tmp = 1;
    else
    {
      return 4;
    }
  }
  else
  {
    if ( *(int*)(__errno_location( )) != 0 )
    {
      if ( *(int*)(__errno_location( )) != 34 )
      {
        return 4;
      }
      err = LONGINT_OVERFLOW;
    }
  }
  if ( valid_suffixes == 0 )
  {
    val[0] = tmp;
    return err;
  }
  if ( ( p[0][0] & 255 ) != 0 )
  {
    int base = 1024;
    int suffixes = 1;
    strtol_error overflow;
    if ( strchr( valid_suffixes, p[0][0] ) == 0 )
    {
      val[0] = tmp;
      return err | 2;
    }
    if ( strchr( valid_suffixes, 48 ) != 0 )
    {
      switch ( p[0][1] )
      {
      default:
        break;
      case 105:
        if ( p[0][2] == 'B' )
          suffixes += 2;
        break;
      case 66:
      case 68:
        base = 1000;
        suffixes++;
        break;
      }
    }
    switch ( p[0][0] )
    {
    case 98:
      overflow = bkm_scale( &tmp, 512 );
      break;
    case 66:
      overflow = bkm_scale( &tmp, 1024 );
      break;
    case 99:
      overflow = LONGINT_OK;
      break;
    case 69:
      overflow = bkm_scale_by_power( &tmp, base, 6 );
      break;
    case 71:
    case 103:
      overflow = bkm_scale_by_power( &tmp, base, 3 );
      break;
    case 75:
    case 107:
      overflow = bkm_scale_by_power( &tmp, base, 1 );
      break;
    case 77:
    case 109:
      overflow = bkm_scale_by_power( &tmp, base, 2 );
      break;
    case 80:
      overflow = bkm_scale_by_power( &tmp, base, 5 );
      break;
    case 84:
    case 116:
      overflow = bkm_scale_by_power( &tmp, base, 4 );
      break;
    case 119:
      overflow = bkm_scale( &tmp, 2 );
      break;
    case 89:
      overflow = bkm_scale_by_power( &tmp, base, 8 );
      break;
    case 90:
      overflow = bkm_scale_by_power( &tmp, base, 7 );
      break;
    default:
      val[0] = tmp;
      return err | 2;
      break;
    }
    err |= overflow;
    p[0] = &p[0][ suffixes ];
    if ( ( p[0][0] & 255 ) != 0 )
      err |= LONGINT_INVALID_SUFFIX_CHAR;
  }
  val[0] = tmp;
  return err;
}
}
strtol_error xstrtoumax( char *s, char **ptr, int strtol_base, uintmax_t *val, char *valid_suffixes )
{
  // static char __PRETTY_FUNCTION__[11] = { 'x', 's', 't', 'r', 't', 'o', 'u', 'm', 'a', 'x',  };
  char *t_ptr;
  char **p;
  uintmax_t tmp;
  strtol_error err = LONGINT_OK;
  if ( strtol_base < 0 || strtol_base > 36 )
  {
    __assert_fail( "0 &lt;= strtol_base && strtol_base &lt;= 36", "xstrtol.c", 83, __PRETTY_FUNCTION__ );
  }
  p = ptr == 0 ? &t_ptr : ptr;
{
  char *q = s;
  unsigned char ch = q[0];
  for ( ; ( *(short*)(*(int*)(__ctype_b_loc( ptr == 0 ? t_ptr : ptr )) + ( ch * 2 )) & 8192 ) != 0; ch = q[0] )
  {
    q++;
    //ch = q[0];
  }
  if ( ch == '-' )
  {
    return 4;
  }
  (tmp & 0xFFFFFFFF) = strtoumax( s, p, strtol_base );
  *(int*)(__errno_location( )) = 0;
  if ( p[0] == s )
  {
    if ( valid_suffixes != 0 && ( p[0][0] & 255 ) != 0 && strchr( valid_suffixes, p[0][0] ) != 0 )
      (tmp << 32) = *(int*)(__ctype_b_loc( ptr == 0 ? t_ptr : ptr ));
      tmp = 1;
    else
    {
      return 4;
    }
  }
  else
  {
    if ( *(int*)(__errno_location( )) != 0 )
    {
      if ( *(int*)(__errno_location( )) != 34 )
      {
        return 4;
      }
      err = LONGINT_OVERFLOW;
    }
  }
  if ( valid_suffixes == 0 )
  {
    val[0] = tmp;
    return err;
  }
  if ( ( p[0][0] & 255 ) != 0 )
  {
    int base = 1024;
    int suffixes = 1;
    strtol_error overflow;
    if ( strchr( valid_suffixes, p[0][0] ) == 0 )
    {
      val[0] = tmp;
      return err | 2;
    }
    if ( strchr( valid_suffixes, 48 ) != 0 )
    {
      switch ( p[0][1] )
      {
      default:
        break;
      case 105:
        if ( p[0][2] == 'B' )
          suffixes += 2;
        break;
      case 66:
      case 68:
        base = 1000;
        suffixes++;
        break;
      }
    }
    switch ( p[0][0] )
    {
    case 98:
      overflow = bkm_scale( &tmp, 512 );
      break;
    case 66:
      overflow = bkm_scale( &tmp, 1024 );
      break;
    case 99:
      overflow = LONGINT_OK;
      break;
    case 69:
      overflow = bkm_scale_by_power( &tmp, base, 6 );
      break;
    case 71:
    case 103:
      overflow = bkm_scale_by_power( &tmp, base, 3 );
      break;
    case 75:
    case 107:
      overflow = bkm_scale_by_power( &tmp, base, 1 );
      break;
    case 77:
    case 109:
      overflow = bkm_scale_by_power( &tmp, base, 2 );
      break;
    case 80:
      overflow = bkm_scale_by_power( &tmp, base, 5 );
      break;
    case 84:
    case 116:
      overflow = bkm_scale_by_power( &tmp, base, 4 );
      break;
    case 119:
      overflow = bkm_scale( &tmp, 2 );
      break;
    case 89:
      overflow = bkm_scale_by_power( &tmp, base, 8 );
      break;
    case 90:
      overflow = bkm_scale_by_power( &tmp, base, 7 );
      break;
    default:
      val[0] = tmp;
      return err | 2;
      break;
    }
    err |= overflow;
    p[0] = &p[0][ suffixes ];
    if ( ( p[0][0] & 255 ) != 0 )
      err |= LONGINT_INVALID_SUFFIX_CHAR;
  }
  val[0] = tmp;
  return err;
}
}
