#include "poly.c.h"
token_type divisor[30000];
int n_divisor;
token_type quotient[30000];
int n_quotient;
token_type gcd_divisor[30000];
int len_d;
int vcmp( sort_type *p1, sort_type *p2 )
{
  return p2->count - p1->count;
}
int poly_in_v( token_type *p1, int n, long v, int allow_divides )
{
  int edx;
  int ebp_36;
  int ebp_32;
  int i, j;
  ebp_32 = p1;
  j = 0;
  i = 1;
  while ( i < n && ( *(int*)(ebp_32 + 20) != 1 || *(int*)(ebp_32 + 24) + -1 > 1 ) )
  {
    i += 2;
    ebp_32 += 32;
  }
  min_level( &p1[ j ], i - j );
  if ( i - j > 0 )
  {
    ebp_36 = 0;
    do
    {
      if ( p1[ j ].kind == 1 && v == (p1[ j + 0 ].token.variable) )
      {
        ebp_36++;
        if ( ebp_36 <= 1 && ( p1[ j + 0 ].level == min_level( &p1[ p1[ j ].kind ], i - p1[ j ].kind ) || p1[ j + 0 ].level == min_level( &p1[ p1[ j ].kind ], i - p1[ j ].kind ) + 1 ) )
        {
          if ( i - j > 1 )
          {
            do
            {
              if ( p1[ j + 1 ].level == min_level( &p1[ p1[ j ].kind ], i - p1[ j ].kind ) )
              {
                if ( (p1[ j + 1 ].token.variable) != 4 )
                {
                  if ( edx == 6 )
                  {
                    if ( 1 + 2 != 1 )
                    {
                      break;
                    }
                  }
                  else
                  if ( edx == 3 )
                  {
                  }
                }
                else
                if ( allow_divides == 0 && 1 + -2 == 1 )
                {
                }
              }
            }
            while ( 1 + 2 + 2 < i - j );
          }
          if ( ebp_48 != ebp_40 || ( i - j > 1 && ebp_40 == *(int*)(edx + 20) && *(int*)(edx + 24) == 6 ) )
            continue;
        }
      }
    }
    while ( i - j <= 1 + 2 + 1 );
  }
  if ( n <= i )
  {
    return 0;
  }
  j = i + 1;
  i += 2;
  ebp_32 += 32;
  while ( i < n && ( *(int*)(ebp_32 + 20) != 1 || *(int*)(ebp_32 + 24) + -1 > 1 ) )
  {
    i += 2;
    ebp_32 += 32;
  }
}
int poly_factor( token_type *equation, int *np, int do_repeat )
{
  int eax;
  int edx;
  return pf_recurse( equation, np, 0, 1, do_repeat );
}
int pf_recurse( token_type *equation, int *np, int loc, int level, int do_repeat )
{
  int ecx;
  int edx;
  int modified;
  int i = loc + 1;
  int op;
  /* phantom */ int len;
  if ( loc + 1 < np && level <= equation->level )
  {
    modified = 0;
    do
    {
      if ( level == equation->level )
        modified = (equation->token.variable);
      i += 2;
    }
    while ( i + 2 < np && level <= equation[5].level );
    equation = equation;
    if ( modified + -1 <= 1 )
    {
      modified = pf_sub( equation, np, loc, i - loc, level, do_repeat );
      i = loc;
      while ( i < np && level <= equation->level )
      {
        if ( level < pf_sub( equation, np, loc, i - loc, level, do_repeat ) )
        {
          modified |= pf_recurse( equation, np, i, level + 1, do_repeat );
          i = i + 1;
          if ( i + 1 < np && level < equation->level )
          {
            do
            {
              i += 2;
            }
            while ( i + 2 < np && level < equation[5].level );
          }
        }
        else
        {
        }
      }
      return modified;
    }
  }
  modified = 0;
  i = loc;
  while ( i < np && level <= equation->level )
  {
  }
  return modified;
}
int pf_sub( token_type *equation, int *np, int loc, int len, int level, int do_repeat )
{
  int eax;
  int ecx;
  int edx;
  int ebp_8264;
#error unstructured control flow
}
void save_factors( token_type *equation, int *np, int loc1, int len, int level )
{
  int ecx;
  int i, j;
  if ( n_tokens < np[ ( ( n_trhs + n_tlhs + 1 ) - len ) >> 2 ] )
    error_huge( );
  memmove( equation + ( ( loc1 + n_trhs + n_tlhs + 1 ) << 4 ), equation + ( ( loc1 + len ) << 4 ), ( np[0] - ( loc1 + len ) ) << 4 );
  np[0] = np[ ( ( n_trhs + n_tlhs + 1 ) - len ) >> 2 ];
  memmove( equation + ( loc1 << 4 ), tlhs, n_tlhs << 4 );
  equation->level = 0;
  equation = 2;
  memmove( equation + ( ( n_tlhs + loc1 ) * 16 ) + 16, trhs, n_trhs << 4 );
  i = n_trhs + loc1 + n_tlhs + 1;
  if ( loc1 < n_trhs + loc1 + n_tlhs + 1 )
  {
    j = loc1;
    do
    {
      equation->level += level;
      j++;
    }
    while ( j + 1 < i );
  }
  return;
}
int remove_factors( void )
{
  int eax;
  int i, j, k;
  int plus_flag, divide_flag;
  int op;
  if ( debug_level > 2 )
    __fprintf_chk( gfp, 1, "%s\n", "Entering remove_factors() with:" );
  list_debug( 3, tlhs, n_tlhs, 0, 0 );
  do
  {
    simp_ssub( tlhs, &n_tlhs, 0, 1.000000000000, 0, 1, 4 );
  }
  while ( uf_power( tlhs, &n_tlhs ) == 0 );
  if ( n_tlhs <= 1 )
  {
    return 0;
  }
  divide_flag = 0;
  plus_flag = 0;
  i = 1;
  do
  {
    op = tlhs[ i ].token.constant;
    if ( tlhs[ i ].level != 1 )
    {
      if ( tlhs[ i ].level == 2 && op + -1 + -1 <= 1 )
        plus_flag = 1;
    }
    else
    {
      switch ( op )
      {
      default:
        if ( plus_flag && divide_flag == 0 )
        {
          divide_flag = i + 0;
          memmove( &scratch[ 0 ].kind, tlhs + ( 0 << 4 ), ( i + 0 ) << 4 );
        }
        divide_flag = op == 4;
        plus_flag = 0;
        break;
      case 1:
      case 2:
        break;
      }
    }
    i += 2;
  }
  while ( i + 2 < n_tlhs );
  k = divide_flag + 0;
  j = edi + 1;
  if ( plus_flag && divide_flag == 0 )
  {
    memmove( &scratch[ k ].kind, &tlhs[ j + -1 + -1 ].kind, ( i - ( j + -1 + -1 ) - ( j + -1 + -1 ) ) << 4 );
  }
  if ( k + ( i - ( j + -1 + -1 ) ) > 0 )
  {
    memmove( tlhs, scratch, ( k + ( i - ( j + -1 + -1 ) ) ) << 4 );
    n_tlhs = k + ( i - ( j + -1 + -1 ) );
    list_debug( 3, tlhs, k + ( i - ( j + -1 + -1 ) ), 0, 0 );
  }
}
int do_gcd( long *vp )
{
  int i;
  int count;
  vp[0] = i;
  count = 1;
  do
  {
    if ( poly_div( trhs, n_trhs, gcd_divisor, len_d, vp ) == 0 )
      break;
    if ( poly_div( trhs, n_trhs, gcd_divisor, len_d, vp ) == 2 )
      break;
    if ( n_tokens < len_d || n_trhs > 30000 )
      break;
    memmove( scratch, trhs, n_trhs << 4 );
    memmove( trhs, &gcd_divisor[0].kind, len_d << 4 );
    __memmove_chk( &gcd_divisor[0].kind, scratch, n_trhs << 4, 0x75300 );
    i = n_trhs;
    len_d = n_trhs = len_d;
    count++;
  }
  while ( count + 1 != 50 );
  count = 0;
  return count;
}
int poly_gcd( token_type *larger, int llen, token_type *smaller, int slen, long v )
{
  int eax;
  int ebx;
  int edi;
  int count;
  if ( llen <= n_tokens && slen <= ( n_tokens > 30000 ? n_tokens : 30000 ) )
  {
    memmove( trhs, larger, llen << 4 );
    n_trhs = llen;
    memmove( tlhs, smaller, slen << 4 );
    n_tlhs = slen;
    if ( remove_factors( ) && n_tlhs <= 30000 )
    {
      __memmove_chk( &gcd_divisor[0].kind, tlhs, n_tlhs << 4, 0x75300 );
      len_d = n_tlhs;
      count = do_gcd( &v );
      if ( do_gcd( &v ) == 0 )
      {
        return count;
      }
      if ( count > 1 )
      {
        if ( len_d <= n_tokens )
        {
          memmove( tlhs, &gcd_divisor[0].kind, len_d << 4 );
          n_tlhs = len_d;
          if ( remove_factors( ) && n_tlhs <= 30000 )
          {
            __memmove_chk( &gcd_divisor[0].kind, tlhs, n_tlhs << 4, 0x75300 );
            len_d = n_tlhs;
            if ( poly_div( larger, llen, gcd_divisor, n_tlhs, &v ) != 2 )
            {
              if ( debug_level > 0 )
              {
                __fprintf_chk( gfp, 1, "%s\n", "Polynomial GCD found, but larger divide failed in poly_gcd()." );
                count = 0;
                return count;
              }
            }
          }
        }
      }
      if ( len_d <= n_tokens )
      {
        memmove( trhs, &gcd_divisor[0].kind, len_d << 4 );
        n_trhs = len_d;
        uf_simp( tlhs, &n_tlhs );
        uf_simp( trhs, &n_trhs );
        if ( debug_level > 2 )
        {
          __fprintf_chk( gfp, 1, "%s\n", "poly_gcd() successful." );
        }
        return count;
      }
    }
  }
  count = 0;
  return count;
}
int poly2_gcd( token_type *larger, int llen, token_type *smaller, int slen, long v )
{
  int eax;
  int i;
  jmp_buf save_save;
  int count;
  if ( debug_level > 2 )
    __fprintf_chk( gfp, 1, "%s\n", "Entering poly2_gcd():" );
  list_debug( 3, larger, llen, 0, 0 );
  list_debug( 3, smaller, slen, 0, 0 );
  if ( llen <= n_tokens && slen <= ( n_tokens > 30000 ? n_tokens : 30000 ) )
  {
    memmove( trhs, larger, llen << 4 );
    n_trhs = llen;
    memmove( tlhs, smaller, slen << 4 );
    n_tlhs = slen;
    memmove( save_save[0].__jmpbuf, jmp_save[0].__jmpbuf, 156 );
    i = _setjmp( &jmp_save[0].__jmpbuf[0] );
    if ( _setjmp( &jmp_save[0].__jmpbuf[0] ) )
    {
      memmove( jmp_save[0].__jmpbuf, save_save[0].__jmpbuf, 156 );
      if ( i == 13 )
        __longjmp_chk( &jmp_save[0].__jmpbuf[0], 13 );
    }
    uf_simp( tlhs, &n_tlhs );
    memmove( jmp_save[0].__jmpbuf, save_save[0].__jmpbuf, 156 );
    if ( level1_plus_count( tlhs, n_tlhs ) && n_tlhs <= 30000 )
    {
      __memmove_chk( &gcd_divisor[0].kind, tlhs, n_tlhs << 4, 0x75300 );
      len_d = n_tlhs;
      count = do_gcd( &v );
      if ( do_gcd( &v ) == 0 )
      {
        return count;
      }
      if ( count > 1 )
      {
        if ( level1_plus_count( gcd_divisor, len_d ) == 0 )
        {
          count = 0;
          return count;
        }
        if ( poly_div( smaller, slen, gcd_divisor, len_d, &v ) != 2 )
        {
          if ( debug_level > 0 )
          {
            __fprintf_chk( gfp, 1, "%s\n", "Polynomial GCD found, but smaller divide failed in poly2_gcd()." );
            count = 0;
            return count;
          }
        }
        else
        {
          memmove( trhs, &gcd_divisor[0].kind, len_d << 4 );
          n_trhs = len_d;
          if ( n_tlhs <= 30000 )
          {
            __memmove_chk( &gcd_divisor[0].kind, tlhs, n_tlhs << 4, 0x75300 );
            len_d = n_tlhs;
            memmove( tlhs, trhs, n_trhs << 4 );
            n_tlhs = n_trhs;
            if ( poly_div( larger, llen, tlhs, n_trhs, &v ) != 2 )
            {
              if ( debug_level > 0 )
              {
                __fprintf_chk( gfp, 1, "%s\n", "Polynomial GCD found, but larger divide failed in poly2_gcd()." );
                count = 0;
                return count;
              }
            }
            else
            {
              memmove( trhs, &gcd_divisor[0].kind, len_d << 4 );
              n_trhs = len_d;
            }
          }
        }
      }
      else
      {
        n_trhs = 1;
        trhs->kind = one_token.kind;
        trhs->level = one_token.level;
        trhs->token.variable = one_token.token.constant;
        trhs->token.variable = *(int*)(134715056);
      }
      if ( debug_level > 2 )
      {
        __fprintf_chk( gfp, 1, "%s\n", "poly2_gcd() successful." );
      }
      return count;
    }
  }
}
int is_integer_var( long v )
{
  int eax;
  char *cp;
  int (*strncmpfunc)( void ) = case_sensitive_flag != 0 ? &strncasecmp : &strncmp;
  cp[0] = var_name( v );
  if ( var_name( v ) )
  {
  }
  return strncmpfunc( ) == 0;
}
int is_integer_expr( token_type *p1, int n )
{
  double fp5;
  double fp6;
  double fp7;
  int i;
  if ( n > 0 )
  {
    i = 0;
    do
    {
      if ( p1->kind != 1 )
      {
        if ( p1[1].kind >= 1 )
        {
          if ( p1[1].kind == 2 && p1->token.variable == 4 )
          {
          }
          else
          {
            i++;
          }
        }
        else
        {
          while ( 1 )
            break;
        }
      }
      else
      {
        if ( is_integer_var( p1->token.variable ) || ( p1->token.variable & 16383 ) == 4 )
          continue;
      }
      break;
    }
    while ( i + 1 < n );
  }
  return 1;
}
int mod_simp( token_type *equation, int *np )
{
  int eax;
  int edx;
  return mod_recurse( equation, np, ecx, ebp_24 );
}
int mod_recurse( token_type *equation, int *np, int loc, int level )
{
  int eax;
  int ecx;
  int edx;
  int ebp_148;
  int ebp_136;
  int ebp_124;
  int ebp_108;
  int ebp_104;
  int ebp_88;
  int ebp_60;
  int ebp_56;
  int ebp_52;
  int ebp_48;
  int ebp_44;
  int modified;
  int i = loc, j, k;
  int i1, i2, i3, i4, i5;
  int op, last_op2;
  int len1, len2, len3;
  int diff_sign;
  long v;
  ebp_44 = level + 1;
  while ( i < np && level <= equation->level )
  {
    if ( level < equation )
    {
      i++;
      if ( i + 1 < np && level < equation->level )
      {
        do
        {
          i += 2;
        }
        while ( i + 2 < np && level < equation[5].level );
      }
    }
    else
      i++;
  }
  modified = 0 | mod_recurse( equation, np, i, ebp_44 );
  if ( 0 | mod_recurse( equation, np, i, ebp_44 ) )
  {
    modified = 1;
  }
  i = loc + 1;
  if ( loc + 1 < np && level <= equation->level )
  {
    ebp_104 = ~i;
    ebp_108 = equation + ( loc << 4 ) + 80;
    ebp_88 = equation + ( ( loc + 3 ) << 4 );
    while ( equation->level != level || (equation->token.variable) != 5 )
    {
      if ( np <= loc + 3 || *(int*)(ebp_88 + 4) < level )
      {
        return 0 | mod_recurse( equation, np, i, ebp_44 );
      }
    }
    k = loc + 3;
    if ( loc + 3 < np && level < *(int*)(ebp_88 + 4) )
    {
      level = level;
      do
      {
        k += 2;
      }
      while ( k + 2 < np && level < *(int*)(ebp_108 + 4 + 32) );
    }
    len1 = ebp_104 + k;
    if ( np <= loc || equation->level < level )
      continue;
    else
    {
      ebp_124 = equation + ( i << 4 );
      ebp_148 = equation + ( ( loc + 3 ) << 4 );
      j = loc;
      last_op2 = 0;
      do
      {
        if ( level == equation->level && equation == 2 )
          last_op2 = (equation->token.variable);
        else
        if ( last_op2 != 5 )
        {
          ebp_56 = j;
          ebp_48 = j + 1;
          if ( j + 1 < np && level < *(int*)(ebp_124 + 4) )
          {
            ebp_44 = ebp_48;
            op = 0;
            do
            {
              k += 2;
            }
            while ( np <= k + 2 || *(int*)(ebp_148 + 32 + 4) <= level );
            len2 = k - j;
            switch ( op )
            {
            case 0:
              break;
            case 5:
              len3 = k + ~ebp_44;
              if ( se_compare( equation + ( ebp_48 << 4 ) + 16, len1, equation + ( ebp_44 << 4 ) + 16, k + ~ebp_44, &diff_sign ) )
              {
                memmove( equation + ( ebp_44 << 4 ), equation + ( k << 4 ), ( np - k ) << 4 );
                np = &np[0];
                modified = 1;
                break;
              }
              break;
            case 3:
              if ( is_integer_expr( equation + ( loc << 4 ), len2 ) )
              {
                ebp_56 = ebp_52 + 4;
                i2 = ebp_48;
                while ( ebp_48 < k && ebp_56 != level + 1 )
                {
                  ebp_48 += 2;
                  ebp_56 += 32;
                }
                if ( i2 < ebp_48 )
                {
                  ebp_44 = equation + ( i2 << 4 ) + 16;
                  do
                  {
                    ebp_52 = equation + ( i2 << 4 ) + 4 + 32 + -4;
                    if ( equation->level == level + 2 && (equation->token.variable) == 5 && se_compare( equation + ( ebp_48 << 4 ) + 16, len1, ebp_44, ebp_48 + ~i2, &diff_sign ) )
                    {
                      memmove( ebp_52, equation + ( ebp_48 << 4 ), ( np - ebp_48 ) << 4 );
                      np += ~ebp_60 / 4;
                      modified = 1;
                      break;
                    }
                    i2 += 2;
                    ebp_44 += 32;
                  }
                  while ( i2 + 2 < ebp_48 );
                }
                if ( ebp_48 < k )
                {
                  ebp_48 += 2;
                  ebp_56 += 32;
                  break;
                  while ( ebp_48 < k && ebp_56 != level + 1 )
                  {
                    ebp_48 += 2;
                    ebp_56 += 32;
                  }
                }
              }
              break;
            case 1:
            case 2:
              i3 = ebp_56 + -1;
              ebp_136 = ebp_52 + 4;
              i2 = ebp_48;
              ebp_44 = ebp_48;
              while ( ebp_44 < k && ebp_136 != level + 1 )
              {
                ebp_44 += 2;
                ebp_136 += 32;
              }
              if ( i2 < ebp_44 )
              {
                do
                {
                  if ( level + 2 == equation->level )
                  {
                    if ( (equation->token.variable) != 3 )
                    {
                      if ( (equation->token.variable) == 5 && se_compare( equation + ( ebp_48 << 4 ) + 16, len1, equation + ( i2 << 4 ) + 16, ebp_44 + ~i2, &diff_sign ) )
                      {
                        memmove( equation + ( i2 << 4 ), equation + ( ebp_44 << 4 ), ( np - ebp_44 ) << 4 );
                        np = &np[0];
                        modified = 1;
                        break;
                      }
                    }
                    else
                    {
                      i2 = ebp_44 + -2;
                      if ( is_integer_expr( equation + ( i3 << 4 ) + 16, ebp_44 + ~i3 ) && i3 + 2 < ebp_44 )
                      {
                        i4 = ~i4;
                        ebp_52 = ~i4;
                        ebp_48 = equation + ( i3 << 4 ) + 48;
                        ebp_56 = equation + ( ( i3 + 4 ) << 4 ) + 4;
                        ebp_60 = equation + ( i3 << 4 ) + 96;
                        do
                        {
                          if ( level + 3 == equation->level && (equation->token.variable) == 5 )
                          {
                            i5 = i3 + 4;
                            if ( i3 + 4 < ebp_44 && equation[2].level < *ebp_56 )
                            {
                              i1 = ebp_44;
                              do
                              {
                                i5 += 2;
                                if ( i1 <= i5 + 2 )
                                {
                                }
                                else
                              }
                              while ( *(int*)(ebp_60 + 4 + 32) <= i1 );
                            }
                            if ( se_compare( equation + ( ebp_48 << 4 ) + 16, len1, ebp_48, ebp_52 + i5, &diff_sign ) )
                            {
                              *ebp_232 = i1 + -4;
                              memmove( i1 + -4, equation + ( i5 << 4 ), ( np - i5 ) << 4 );
                              np += ~( ebp_52 + i5 ) / 4;
                              modified = 1;
                              break;
                            }
                          }
                          ebp_52 += -2;
                          ebp_48 += 32;
                          ebp_56 += 32;
                          ebp_60 += 32;
                        }
                        while ( i3 + 4 + 2 < ebp_44 );
                        i2 = i2;
                      }
                    }
                  }
                  i2 += 2;
                }
                while ( i2 + 2 < ebp_44 );
              }
              if ( ebp_44 < k )
              {
                i3 = ebp_44;
                i3 = ebp_44;
                ebp_44 += 2;
                ebp_136 += 32;
                break;
                while ( ebp_44 < k && ebp_136 != level + 1 )
                {
                  ebp_44 += 2;
                  ebp_136 += 32;
                }
              }
              break;
            }
          }
          else
            len2 = 1;
          v = 0;
          if ( poly_div( ebp_124, len2, equation + ( ebp_48 << 4 ) + 16, len1, &v ) )
          {
            uf_pplus( tlhs, &n_tlhs );
            if ( is_integer_expr( tlhs, n_tlhs ) )
            {
              if ( n_tokens < np[0] - len2 )
                error_huge( );
              if ( n_trhs <= 0 )
              {
                memmove( equation + ( ( j + n_trhs ) << 4 ), equation + ( ( len2 + j ) << 4 ), ( np - ( len2 + j ) ) << 4 );
                np[0] -= len2;
                memmove( equation + ( loc << 4 ), trhs, n_trhs << 4 );
                modified = 1;
                break;
              }
              k = 0;
              do
              {
                trhs[ k ].level += level;
                k++;
              }
              while ( k + 1 < n_trhs );
              memmove( equation + ( ( j + n_trhs ) << 4 ), equation + ( ( len2 + j ) << 4 ), ( np - ( len2 + j ) ) << 4 );
              np[0] -= len2;
              memmove( equation + ( loc << 4 ), trhs, n_trhs << 4 );
              modified = 1;
              break;
            }
          }
          last_op2 = 5;
        }
        j++;
      }
      while ( np <= j || *(int*)(ebp_124 + 4) < level );
    }
  }
}
int poly_gcd_simp( token_type *equation, int *np )
{
  int eax;
  int edx;
  return polydiv_recurse( equation, np, ecx, ebp_24 );
}
int polydiv_recurse( token_type *equation, int *np, int loc, int level )
{
  int eax;
  int ecx;
  int edx;
  int ebp_56;
  int ebp_52;
  int ebp_48;
  int ebp_36;
  int ebp_32;
  int modified;
  int i = loc, j, k;
  int last_op2;
  int len1, len2;
  modified = 0;
  j = level + 1;
  while ( i < np && level <= equation->level )
  {
    if ( level < equation )
    {
      modified |= polydiv_recurse( equation, np, i, j );
      i = i + 1;
      if ( i + 1 < np && level < equation->level )
      {
        do
        {
          i += 2;
        }
        while ( i + 2 < np && level < equation[5].level );
      }
    }
    else
      i++;
  }
  while ( loc + 1 < np && level <= equation[1].level )
  {
    ebp_52 = ~( loc + 1 );
    ebp_56 = equation + ( loc << 4 ) + 80;
    ebp_36 = equation + ( loc << 4 ) + 48;
    j = loc + 1;
    ebp_32 = loc + 1;
    do
    {
      if ( level == equation[1].level && (equation[1].token.variable) == 4 )
      {
        k = ebp_32 + 2;
        if ( ebp_32 + 2 < np && level < *(int*)(ebp_36 + 4) )
        {
          do
          {
            k += 2;
          }
          while ( k + 2 < np && level < *(int*)(ebp_56 + 4 + 32) );
        }
        k += ebp_52;
        if ( loc < np && level <= equation->level )
        {
          ebp_48 = equation + ( loc << 4 ) + 48;
          j = loc;
          last_op2 = 0;
          do
          {
            if ( level == equation->level && equation == 2 )
              last_op2 = (equation->token.variable);
            else
            if ( last_op2 != 4 )
            {
              k = j + 1;
              if ( j + 1 < np && level < equation[1].level )
              {
                do
                {
                  k += 2;
                }
                while ( k + 2 < np && level < *(int*)(ebp_48 + 4 + 32) );
              }
              len2 = k - j;
              if ( eax == 0 )
              {
                if ( poly2_gcd( equation + ( loc << 4 ), len2, equation + ( j << 4 ) + 16, ebp_52 + k, 0 ) )
                {
                  k = j + -1;
                  j = ebp_32 + 1;
                  len1 = ebp_52 + k;
                  len2 = ebp_52 + k;
                  ebp_32 = j + -1;
                }
                else
                  last_op2 = 4;
              }
              if ( n_tlhs > 0 )
              {
                k = 0;
                do
                {
                  tlhs[ k ].level += level;
                  k++;
                }
                while ( k + 1 < n_tlhs );
              }
              if ( n_trhs > 0 )
              {
                k = 0;
                do
                {
                  trhs[ k ].level += level;
                  k++;
                }
                while ( k + 1 < n_trhs );
              }
              if ( n_tokens < np + ( n_trhs - len2 ) || n_tokens < n_tlhs + ( ( np + ( n_trhs - len2 ) ) - len2 ) )
                error_huge( );
              memmove( equation + ( ( n_trhs + j ) << 4 ), equation + ( ( len2 + j ) << 4 ), ( np - ( len2 + j ) ) << 4 );
              np = np[0] - len2;
              memmove( equation + ( j << 4 ), trhs, n_trhs << 4 );
              memmove( equation + ( ( ebp_32 + n_tlhs ) << 4 ) + 16, equation + ( ebp_32 * 16 ) + ( ( ebp_52 + k ) * 16 ) + 16, ( ( np - ( ebp_52 + k ) ) + ~ebp_32 ) << 4 );
              np = ( np + n_tlhs ) - ( ebp_52 + k );
              memmove( equation + ( ebp_32 << 4 ) + 16, tlhs, n_tlhs << 4 );
              modified = 1;
              if ( debug_level > 0 )
              {
                __fprintf_chk( gfp, 1, "%s\n", "Division simplified with polynomial GCD." );
                modified = 1;
                break;
              }
            }
            j++;
          }
          while ( np <= j || equation[1].level < level );
        }
      }
      ebp_32 += 2;
      return np;
    }
    while ( *(int*)(ebp_36 + 4) < level );
    break;
  }
}
int div_remainder( token_type *equation, int *np, int poly_flag, int quick_flag )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  int rv;
  if ( quick_flag )
  {
    group_proc( equation, np );
    rv = pdiv_recurse( equation, np, 0, 1, poly_flag );
    organize( equation, np );
  }
  rv = pdiv_recurse( equation, np, 0, 1, poly_flag );
  return rv;
}
int pdiv_recurse( token_type *equation, int *np, int loc, int level, int code )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int ebp_112;
  int ebp_88;
  int ebp_84;
  int ebp_80;
  int ebp_68;
  int ebp_64;
  int modified;
  int i = loc + 1, j, k;
  int op, op2, last_op2;
  int len1, len2, real_len1;
  long v;
  int rv;
  int flag, power_flag, zero_remainder;
  if ( loc + 1 < np[0] )
  {
    op = i;
    if ( level <= equation->level )
    {
      ebp_88 = equation + ( loc << 4 ) + 80;
      ebp_84 = ~i;
      ebp_68 = equation + ( loc << 4 ) + 48;
      do
      {
        if ( level == equation->level && (equation->token.variable) == 4 )
        {
          if ( np[0] <= ebp_64 + 2 || *(int*)(ebp_68 + 4) <= level )
            k = ebp_64 + 2;
          else
          {
            level = level;
            do
            {
              k += 2;
            }
            while ( k + 2 < np[0] && level < *(int*)(ebp_88 + 4 + 32) );
          }
          if ( loc < np && level <= equation->level )
          {
            real_len1 = ebp_84 + k;
            ebp_80 = equation + ( i << 4 );
            ebp_112 = equation + ( loc << 4 ) + 48;
            len1 = real_len1;
            j = loc;
            last_op2 = 0;
            do
            {
              if ( level == equation->level && equation == 2 )
                last_op2 = (equation->token.variable);
              else
              if ( last_op2 != 4 )
              {
                k = j + 1;
                if ( j + 1 < np && level < *(int*)(ebp_80 + 4) )
                {
                  op = 0;
                  op2 = len1;
                  do
                  {
                    if ( level + 1 == *(int*)(ebp_80 + 4) )
                      op = *(int*)(ebp_80 + 8);
                    k += 2;
                  }
                  while ( np <= k + 2 || *(int*)(ebp_112 + 32 + 4) <= level );
                  len1 = op2;
                  if ( op + -1 <= 1 )
                  {
                    k -= j;
                    len2 = k - j;
                    if ( ebp_64 + 2 < np && level < *(int*)(ebp_68 + 4) )
                    {
                      k = ebp_64 + 2;
                      op2 = 0;
                      op = level + 2;
                      do
                      {
                        if ( level + 3 == *(int*)(ebp_68 + 4) )
                          op2 = *(int*)(ebp_68 + 8) + -1 > 1 ? 1 : op2;
                        else
                        if ( op == *(int*)(ebp_68 + 4) )
                        {
                        }
                        else
                        if ( level + 1 == *(int*)(ebp_68 + 4) )
                        {
                          len1 = len1;
                          op2 = code;
                          while ( 1 )
                          {
                            if ( rv > 0 && n_trhs == 1 && trhs->kind == 0 )
                            {
                              op/*.1_1of4*/ = power_flag;
                              if ( trhs->token.constant/*union*/ == 0.000000000000 && trhs->token.constant/*union*/ == 0.000000000000 )
                              {
                                if ( n_tokens < len1 + n_trhs + n_tlhs + 2 )
                                  error_huge( );
                                if ( n_tlhs > 0 )
                                {
                                  k = 0;
                                  do
                                  {
                                    k++;
                                    tlhs[ k ].level++;
                                  }
                                  while ( k + 1 < n_tlhs );
                                }
                                tlhs[ n_tlhs ].level = 1;
                                tlhs[ n_tlhs ].kind = OPERATOR;
                                n_tlhs++;
                                if ( n_trhs > 0 )
                                {
                                  k = 0;
                                  do
                                  {
                                    trhs[ k ].level += 2;
                                    k++;
                                  }
                                  while ( k + 1 < n_trhs );
                                }
                                memmove( &tlhs[ n_tlhs ].kind, trhs, n_trhs << 4 );
                                n_tlhs += n_trhs;
                                tlhs[ n_trhs + n_tlhs ].level = 2;
                                tlhs[ n_tlhs ].kind = OPERATOR;
                                k = n_tlhs + 1;
                                n_tlhs++;
                                memmove( &tlhs[ n_tlhs + 1 ].kind, equation + ( op << 4 ) + 16, len1 << 4 );
                                n_tlhs += len1;
                                if ( k < n_tlhs + len1 )
                                {
                                  do
                                  {
                                    tlhs->level += 2;
                                    k++;
                                  }
                                  while ( k + 1 < n_tlhs );
                                }
                                list_debug( 3, equation + ( loc << 4 ), len2, 0, 0 );
                                list_debug( 3, equation + ( op << 4 ) + 16, len1, 0, 0 );
                                simpb_side( tlhs, &n_tlhs, 0, 1, 3 );
                                list_debug( 3, tlhs, n_tlhs, 0, 0 );
                                if ( op/*.1_1of4*/ )
                                {
                                  k/*.1_1of4*/ = var_count( tlhs, n_tlhs ) <= k;
                                  k = var_count( tlhs, n_tlhs ) <= k;
                                }
                                else
                                {
                                  k/*.1_1of4*/ = ebp_108 <= k + ebx;
                                  k = ebp_108 <= k + ebx;
                                }
                                if ( k )
                                {
                                  level = level;
                                  if ( n_tlhs > 0 )
                                  {
                                    k = 0;
                                    do
                                    {
                                      tlhs[ k ].level += level;
                                      k++;
                                    }
                                    while ( k + 1 < n_tlhs );
                                  }
                                  if ( op/*.1_1of4*/ )
                                  {
                                    if ( n_tokens < np + ( n_tlhs - len2 ) + 2 )
                                      error_huge( );
                                    k = len1 + ebp_64 + 2;
                                    if ( k + ebp_64 + 2 <= ebp_64 + real_len1 )
                                    {
                                      do
                                      {
                                        equation->level++;
                                        k++;
                                      }
                                      while ( k + 1 <= ebp_64 + real_len1 );
                                    }
                                    memmove( equation + ( ( ebp_64 + real_len1 ) << 4 ) + 48, equation + ( k << 4 ), ( np - k ) << 4 );
                                    np += 0;
                                    level = level + 2;
                                    equation->level = level + 2 + 2;
                                    equation = 2;
                                    equation[1].level = level + 2 + 2;
                                    equation[1].kind = CONSTANT;
                                    equation[1].token.constant/*union*/ = 1.000000000000;
                                    j = (unsigned char)( ( ebp_64 < j ) ^ 1 ) ? j + 2 : j;
                                  }
                                  else
                                  {
                                    if ( n_tokens < n_tlhs + np + ( ~len1 - len2 ) )
                                      error_huge( );
                                    *ebp_200 = ebp_68;
                                    memmove( equation + ( i << 4 ), equation + ( ( ebp_64 + len1 ) * 16 ) + 16, ( ( ebp_84 + np ) - len1 ) << 4 );
                                    np += ~len1 / 4;
                                    j = (unsigned char)( ( ebp_64 < j ) ^ 1 ) ? j + ~len1 : j;
                                  }
                                  memmove( equation + ( ( n_tlhs + j ) << 4 ), equation + ( ( len2 + j ) << 4 ), ( np - ( len2 + j ) ) << 4 );
                                  np = np[0] - len2;
                                  memmove( equation + ( j << 4 ), tlhs, n_tlhs << 4 );
                                  if ( power_flag | op2 )
                                  {
                                    if ( debug_level <= 0 )
                                    {
                                      list_debug( 3, equation, np, 0, 0 );
                                      modified = 1;
                                      break;
                                    }
                                    __fprintf_chk( gfp, 1, "%s\n", "Polynomial division successful." );
                                  }
                                  else
                                  if ( debug_level <= 0 )
                                  {
                                    list_debug( 3, equation, np, 0, 0 );
                                    modified = 1;
                                    break;
                                  }
                                  __fprintf_chk( gfp, 1, "%s\n", "Smart division successful." );
                                }
                                else
                                {
                                  if ( op/*.1_1of4*/ == 0 )
                                  {
                                    if ( op2 == code )
                                    {
                                      op2 = code == 0;
                                    }
                                  }
                                  else
                                  {
                                    power_flag = 0;
                                  }
                                }
                              }
                            }
                            op/*.1_1of4*/ = power_flag;
                            if ( ( power_flag & 255 ) == 0 )
                            {
                              if ( rv > 0 )
                              {
                              }
                              else
                              {
                              }
                            }
                            else
                            {
                              power_flag = 0;
                            }
                          }
                        }
                        k += 2;
                        if ( k + 2 < np )
                          continue;
                        else
                          len1 = len1;
                      }
                      while ( *(int*)(ebp_88 + 32 + 4) <= level );
                      len1 = len1;
                    }
                    power_flag = 0;
                    op2 = code;
                  }
                }
                last_op2 = 4;
              }
              j++;
            }
            while ( np <= j || *(int*)(ebp_80 + 4) < level );
          }
        }
        ebp_64 += 2;
        if ( np <= ebp_64 )
          level = level;
        else
        {
          ebp_68 += 32;
          ebp_88 += 32;
          ebp_84 += -2;
        }
      }
      while ( level <= *(int*)(ebp_68 + 4) );
      level = level;
    }
  }
  i = j;
  op = level + 1;
  equation = equation;
  while ( i < np )
  {
    if ( equation->level < level )
    {
      modified = 0 | pdiv_recurse( equation, np, i, op, code );
      break;
    }
    if ( level < equation + ( k << 4 ) + 4 + 16 )
    {
      i++;
      if ( i + 1 < np && level < equation->level )
      {
        do
        {
          i += 2;
        }
        while ( i + 2 < np && level < equation[5].level );
      }
    }
    else
      i++;
  }
  modified = 0 | pdiv_recurse( equation, np, i, op, code );
  return modified;
}
int poly_div( token_type *d1, int len1, token_type *d2, int len2, long *vp )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  int i;
  int rv;
  int old_partial = partial_flag;
  jmp_buf save_save;
  partial_flag = 0;
  memmove( save_save[0].__jmpbuf, jmp_save[0].__jmpbuf, 156 );
  i = _setjmp( &jmp_save[0].__jmpbuf[0] );
  if ( _setjmp( &jmp_save[0].__jmpbuf[0] ) )
  {
    memmove( jmp_save[0].__jmpbuf, save_save[0].__jmpbuf, 156 );
    partial_flag = old_partial;
    if ( i != 13 )
    {
      rv = 0;
      return rv;
    }
    __longjmp_chk( &jmp_save[0].__jmpbuf[0], 13 );
  }
  if ( len1 <= n_tokens && len2 <= n_tokens )
  {
    if ( trhs != d1 )
    {
      memmove( trhs, d1, len1 << 4 );
      n_trhs = len1;
    }
    if ( tlhs != d2 )
    {
      memmove( tlhs, d2, len2 << 4 );
      n_tlhs = len2;
    }
    uf_simp( trhs, &n_trhs );
    uf_simp( tlhs, &n_tlhs );
    if ( vp[0] || find_highest_count( trhs, n_trhs, tlhs, n_tlhs, vp ) )
    {
      if ( debug_level > 2 )
      {
        list_var( vp[0], 0 );
        __fprintf_chk( gfp, 1, "poly_div() starts using base variable (%s):\n", var_str );
        list_debug( 3, trhs, n_trhs, 0, 0 );
        list_debug( 3, tlhs, n_tlhs, 0, 0 );
      }
      find_greatest_power( tlhs, n_tlhs, vp, ebp_64, ebp_36, ebp_40, ebp_44 );
      if ( 0.000000000000 <= ebp_64 )
      {
      }
      else
      if ( ebp_64 <= ebp_56 )
      {
        n_quotient = 1;
        quotient[0] = zero_token;
        quotient->level = zero_token.level;
        if ( n_tlhs <= 30000 )
        {
          __memmove_chk( &divisor, tlhs, n_tlhs << 4, 0x75300 );
          n_divisor = n_tlhs;
          while ( 1 )
          {
            if ( ebp_40 + ebp_32 + 1 <= n_tokens )
            {
              memmove( tlhs, &trhs[ ebp_28 ].kind, ebp_32 << 4 );
              n_tlhs = ebp_32;
              if ( ebp_32 > 0 )
              {
                do
                {
                  tlhs[ 0 ].level++;
                }
                while ( 0 + 1 + 1 < n_tlhs );
              }
              tlhs[ n_tlhs ].level = 1;
              tlhs[ n_tlhs ].kind = OPERATOR;
              n_tlhs++;
              memmove( &tlhs[ n_tlhs + 1 ].kind, divisor + ( ebp_36 << 4 ), ebp_40 << 4 );
              n_tlhs += ebp_40;
              if ( n_tlhs < ebp_40 + n_tlhs )
              {
                do
                {
                  tlhs->level++;
                }
                while ( n_tlhs + 1 + 1 < n_tlhs );
              }
              if ( simp_loop( tlhs, &n_tlhs ) && n_tlhs + n_quotient + 1 <= ( n_tokens <= 30000 ? 30000 : n_tokens ) )
              {
                if ( n_tlhs > 0 )
                {
                  do
                  {
                    tlhs[ 0 ].level++;
                  }
                  while ( 0 + 1 + 1 < n_tlhs );
                }
                quotient[ n_quotient ].level = 1;
                quotient[ n_quotient ].kind = OPERATOR;
                n_quotient++;
                memmove( &quotient[ n_quotient + 1 ].kind, tlhs, n_tlhs << 4 );
                n_quotient += n_tlhs;
                if ( n_divisor + n_trhs + n_tlhs + 2 <= n_tokens )
                {
                  memmove( &trhs[ ebp_28 + 1 ].kind, &trhs[ ebp_32 + ebp_28 ].kind, ( n_trhs - ( ebp_32 + ebp_28 ) ) << 4 );
                  n_trhs = ( n_trhs + 1 ) - ebp_32;
                  trhs[ ebp_28 ] = zero_token;
                  trhs[ ebp_28 ].level = zero_token.level;
                  *(int*)(trhs[ ebp_28 ].kind + 12) = *(int*)(134715680);
                  if ( n_trhs > 0 )
                  {
                    do
                    {
                      trhs[ 0 ].level++;
                    }
                    while ( 0 + 1 + 1 < n_trhs );
                  }
                  trhs[ n_trhs ].level = 1;
                  trhs[ n_trhs ].kind = OPERATOR;
                  if ( quotient[ n_quotient ].token.constant == 1 )
                  {
                  }
                  else
                  {
                  }
                  n_trhs++;
                  memmove( &trhs[ n_trhs + 1 ].kind, tlhs, n_tlhs << 4 );
                  n_trhs += n_tlhs;
                  if ( n_trhs < n_trhs + n_tlhs )
                  {
                    do
                    {
                      trhs->level++;
                    }
                    while ( n_trhs + 1 + 1 < n_trhs );
                  }
                  trhs[ n_trhs ].level = 2;
                  trhs[ n_trhs ].kind = OPERATOR;
                  n_trhs++;
                  memmove( &trhs[ n_trhs + 1 ].kind, &divisor, ebp_36 << 4 );
                  n_trhs += ebp_36;
                  trhs[ ebp_36 + n_trhs ] = zero_token;
                  trhs[ ebp_36 + n_trhs ].level = zero_token.level;
                  *(int*)(trhs[ ebp_36 + n_trhs ].kind + 12) = *(int*)(134715680);
                  n_trhs++;
                  memmove( &trhs[ n_trhs + 1 ].kind, divisor + ( ( ebp_40 + ebp_36 ) << 4 ), ( n_divisor - ( ebp_40 + ebp_36 ) ) << 4 );
                  n_trhs = ( n_trhs + n_divisor ) - ebp_36 - ebp_40;
                  if ( n_trhs + 1 < ( n_trhs + n_divisor ) - ebp_36 - ebp_40 )
                  {
                    do
                    {
                      trhs[1].level += 2;
                    }
                    while ( n_trhs + 1 + 1 + 1 < n_trhs );
                  }
                  list_debug( 3, trhs, n_trhs, 0, 0 );
                  uf_repeat( trhs, &n_trhs );
                  uf_tsimp( trhs, &n_trhs );
                  list_debug( 4, trhs, n_trhs, 0, 0 );
                  find_greatest_power( trhs, n_trhs, vp, ebp_72, ebp_28, ebp_32, ebp_44 );
                  if ( ebp_72 < ebp_64 )
                  {
                    memmove( tlhs, &quotient[0].kind, n_quotient << 4 );
                    n_tlhs = n_quotient;
                    list_debug( 3, tlhs, n_quotient, 0, 0 );
                    list_debug( 3, trhs, n_trhs, 0, 0 );
                    if ( ( n_trhs != 1 || trhs->kind || trhs->token || *(double*)(edx + 8) ) && n_quotient + n_trhs <= n_quotient + n_trhs && ( n_trhs + 1 <= n_quotient + n_trhs || n_trhs <= n_divisor ) )
                      rv = -1;
                    memmove( jmp_save[0].__jmpbuf, save_save[0].__jmpbuf, 156 );
                    partial_flag = old_partial;
                    break;
                  }
                  else
                  {
                    if ( ebp_56 < ebp_56 )
                    {
                    }
                    else
                    if ( ebp_72 < ebp_72 || edi <= n_trhs )
                      goto B8;
                  }
                }
              }
            }
          }
        }
      }
      find_greatest_power( tlhs, n_tlhs, vp, ebp_64, ebp_36, ebp_40, ebp_44 );
      if ( ebp_64 < 0.000000000000 )
      {
        if ( ebp_64 <= ebp_56 )
        {
          n_quotient = 1;
          quotient[0] = zero_token;
          quotient->level = zero_token.level;
        }
      }
      else
      {
      }
    }
  }
B8:;
  rv = 0;
}
int smart_div( token_type *d1, int len1, token_type *d2, int len2 )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int i, j, k;
  int t1, len_t1;
  int t2, len_t2;
  int sign;
  int old_n_quotient;
  int trhs_size;
  int term_size, term_count;
  int term_pos, skip_terms[100];
  int skip_count;
  token_type *qp;
  /* phantom */ int q_size;
  /* phantom */ int sum_size;
  int count;
  int dcount;
  int flag;
  memmove( trhs, d1, len1 << 4 );
  n_trhs = len1;
  memmove( tlhs, d2, len2 << 4 );
  n_tlhs = len2;
  uf_simp_no_repeat( trhs, &n_trhs );
  uf_simp_no_repeat( tlhs, &n_tlhs );
  if ( debug_level > 2 )
    __fprintf_chk( gfp, 1, "%s\n", "smart_div() starts:" );
  list_debug( 3, trhs, n_trhs, 0, 0 );
  list_debug( 3, tlhs, n_tlhs, 0, 0 );
  flag = 0;
  dcount = 0;
  len_t2 = 0;
  t2 = 0;
  k = 0;
  j = 0;
  i = 0;
  flag = 0;
  while ( 1 )
  {
    if ( i < n_tlhs )
    {
      if ( tlhs[ i ].kind == 2 )
      {
        if ( tlhs[ i + 0 ].level != 1 || (unsigned int)(tlhs[ i + 0 ].token.variable) + -1 > 1 )
        {
          i++;
        }
      }
      else
      if ( tlhs[ i ].kind == 1 )
        flag = *(int*)(tlhs[ i ].kind + 8) != 3 ? flag : 1;
    }
    dcount++;
    if ( flag && ( len_t2 == 0 || var_count( &tlhs[ j ], i - j ) < k ) )
    {
      len_t2 = i - j;
      k = var_count( &tlhs[ j ], i - j );
      t2 = j;
    }
    if ( n_tlhs <= i )
    {
      if ( len_t2 <= 0 )
      {
        return 0;
      }
      n_quotient = 1;
      quotient[0] = zero_token;
      quotient->level = zero_token.level;
      if ( n_tlhs <= 30000 )
      {
        __memmove_chk( &divisor, tlhs, n_tlhs << 4, 0x75300 );
        n_divisor = n_tlhs;
        while ( 1 )
        {
          trhs_size = n_trhs;
          count = 0;
          skip_count = 0;
          while ( 1 )
          {
            k = skip_terms[0];
            term_count = 1;
            while ( get_term( trhs, n_trhs, term_count, &t1, &len_t1 ) == 0 )
            {
              if ( skip_count > 0 )
              {
                i = 0;
                if ( t1 != k )
                {
                  do
                  {
                    i++;
                    if ( skip_count <= i + 1 )
                      goto B34;
                    else
                    {
                    }
                  }
                  while ( t1 != skip_terms[0] );
                  term_count++;
                }
              }
B34:;
              if ( len_t2 + len_t1 + 1 <= n_tokens )
              {
                memmove( tlhs, &trhs[ t1 ].kind, ( i + 1 ) << 4 );
                n_tlhs = len_t1;
                if ( len_t1 > 0 )
                {
                  i = 0;
                  do
                  {
                    i++;
                    tlhs[ i ].level++;
                  }
                  while ( i + 1 < n_tlhs );
                }
                tlhs[ n_tlhs ].level = 1;
                tlhs[ n_tlhs ].kind = OPERATOR;
                n_tlhs++;
                memmove( &tlhs[ n_tlhs + 1 ].kind, divisor + ( t2 << 4 ), len_t2 << 4 );
                i = n_tlhs;
                n_tlhs += len_t2;
                if ( n_tlhs < n_tlhs + len_t2 )
                {
                  do
                  {
                    tlhs->level++;
                    i++;
                  }
                  while ( i + 1 < n_tlhs );
                }
                if ( simp_loop( tlhs, &n_tlhs ) && basic_size( tlhs, n_tlhs ) <= basic_size( &trhs[ t1 ], len_t1 ) )
                {
                  k = t1;
                  term_size = len_t1;
                  if ( n_tlhs <= 0 )
                    break;
                  else
                  {
                    t1 = k;
                    len_t1 = term_size;
                    if ( term_size + len_t2 + 1 <= n_tokens )
                    {
                      memmove( tlhs, &trhs[ k ].kind, len_t1 << 4 );
                      n_tlhs = len_t1;
                      if ( len_t1 > 0 )
                      {
                        i = 0;
                        do
                        {
                          i++;
                          tlhs[ i ].level++;
                        }
                        while ( i + 1 < n_tlhs );
                      }
                      tlhs[ n_tlhs ].level = 1;
                      tlhs[ n_tlhs ].kind = OPERATOR;
                      n_tlhs++;
                      memmove( &tlhs[ n_tlhs + 1 ].kind, divisor + ( t2 << 4 ), len_t2 << 4 );
                      i = n_tlhs;
                      n_tlhs += len_t2;
                      if ( n_tlhs < n_tlhs + len_t2 )
                      {
                        do
                        {
                          tlhs->level++;
                          i++;
                        }
                        while ( i + 1 < n_tlhs );
                      }
                      simp_loop( tlhs, &n_tlhs );
                      if ( n_tlhs + n_quotient + 1 <= ( n_tokens <= 30000 ? 30000 : n_tokens ) )
                      {
                        if ( n_tlhs > 0 )
                        {
                          i = 0;
                          do
                          {
                            i++;
                            tlhs[ i ].level++;
                          }
                          while ( i + 1 < n_tlhs );
                        }
                        old_n_quotient = n_quotient;
                        quotient[ old_n_quotient ].level = 1;
                        quotient[ old_n_quotient ].kind = OPERATOR;
                        n_quotient = old_n_quotient + 1;
                        qp = &quotient[ old_n_quotient + 1 ];
                        memmove( qp, tlhs, n_tlhs << 4 );
                        n_quotient += n_tlhs;
                        if ( n_divisor + n_tlhs + n_trhs + 2 <= n_tokens )
                        {
                          memmove( tlhs, trhs, n_trhs << 4 );
                          n_tlhs = n_trhs;
                          memmove( &trhs[ t1 + 1 ].kind, &trhs[ t1 + len_t1 ].kind, ( n_trhs - ( t1 + len_t1 ) ) << 4 );
                          n_trhs = ( n_trhs + 1 ) - len_t1;
                          trhs[ t1 ] = zero_token;
                          trhs[ t1 ].level = zero_token.level;
                          if ( n_trhs > 0 )
                          {
                            i = 0;
                            do
                            {
                              i++;
                              trhs[ i ].level++;
                            }
                            while ( i + 1 < n_trhs );
                          }
                          trhs[ n_trhs ].level = 1;
                          trhs[ n_trhs ].kind = OPERATOR;
                          if ( sign == 1 )
                          {
                          }
                          else
                          {
                          }
                          n_trhs++;
                          memmove( &trhs[ n_trhs + 1 ].kind, qp, n_tlhs << 4 );
                          i = n_trhs;
                          n_trhs += n_tlhs;
                          if ( n_trhs < n_tlhs + n_trhs )
                          {
                            do
                            {
                              trhs->level++;
                              i++;
                            }
                            while ( i + 1 < n_trhs );
                          }
                          trhs[ n_trhs ].level = 2;
                          trhs[ n_trhs ].kind = OPERATOR;
                          i = n_trhs + 1;
                          n_trhs++;
                          memmove( &trhs[ n_trhs + 1 ].kind, &divisor, t2 << 4 );
                          n_trhs += t2;
                          trhs[ t2 + n_trhs ] = zero_token;
                          trhs[ t2 + n_trhs ].level = zero_token.level;
                          n_trhs++;
                          memmove( &trhs[ n_trhs + 1 ].kind, divisor + ( ( t2 + len_t2 ) << 4 ), ( n_divisor - ( t2 + len_t2 ) ) << 4 );
                          n_trhs = ( n_trhs + n_divisor ) - ( t2 + len_t2 );
                          if ( i < ( n_trhs + n_divisor ) - ( t2 + len_t2 ) )
                          {
                            do
                            {
                              trhs->level += 2;
                              i++;
                            }
                            while ( i + 1 < n_trhs );
                          }
                          list_debug( 3, trhs, n_trhs, 0, 0 );
                          uf_tsimp( trhs, &n_trhs );
                          list_debug( 4, trhs, n_trhs, 0, 0 );
                          if ( n_trhs == 1 && trhs->kind == 0 && trhs->token.constant/*union*/ == 0.000000000000 && *(double*)(edx + 8) == 0.000000000000 )
                          {
                            memmove( tlhs, &quotient[0].kind, n_quotient << 4 );
                            n_tlhs = n_quotient;
                            list_debug( 3, tlhs, n_quotient, 0, 0 );
                            list_debug( 3, trhs, n_trhs, 0, 0 );
                            break;
                          }
                          if ( dcount > 1 && n_quotient + n_trhs <= n_quotient + n_trhs )
                          {
                            if ( skip_count > 99 )
                            {
                              if ( count == 0 )
                              {
                                return 0;
                              }
                              n_quotient = old_n_quotient;
                              memmove( trhs, tlhs, n_tlhs << 4 );
                              n_trhs = n_tlhs;
                              if ( n_trhs + n_quotient < trhs_size + 1 )
                              {
                                memmove( tlhs, &quotient[0].kind, n_quotient << 4 );
                                n_tlhs = n_quotient;
                                list_debug( 3, tlhs, n_quotient, 0, 0 );
                                list_debug( 3, trhs, n_trhs, 0, 0 );
                                break;
                              }
                            }
                            else
                            {
                              skip_terms[ skip_count ] = k;
                              skip_count++;
                              n_quotient = old_n_quotient;
                              memmove( trhs, tlhs, n_tlhs << 4 );
                              n_trhs = n_tlhs;
                              if ( debug_level > 2 )
                              {
                                __fprintf_chk( gfp, 1, "%s\n", "Skipping last operation." );
                              }
                            }
                          }
                          else
                          {
                            if ( n_trhs != 1 || trhs->kind )
                            {
                              count++;
                              skip_count = 0;
                              break;
                            }
                            else
                            {
                              if ( dcount <= 1 )
                              {
                                memmove( tlhs, &quotient[0].kind, n_quotient << 4 );
                                n_tlhs = n_quotient;
                                list_debug( 3, tlhs, n_quotient, 0, 0 );
                                list_debug( 3, trhs, n_trhs, 0, 0 );
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
            }
            if ( count <= 0 )
            {
              if ( dcount <= 1 )
              {
                return 0;
              }
              len_t2 = n_divisor;
              t2 = 0;
              dcount = 1;
              break;
              while ( 1 )
              {
                trhs_size = n_trhs;
                count = 0;
                skip_count = 0;
              }
            }
            else
            {
            }
          }
        }
      }
    }
    else
      j = i + 1;
  }
}
int basic_size( token_type *p1, int len )
{
  int eax;
  int i, j;
  int level = min_level( p1, len );
  int rv;
  int constant_flag;
  if ( len > 0 )
  {
    rv = len;
    constant_flag = 1;
    j = -1;
    i = 0;
    do
    {
      if ( p1 == 2 )
      {
        if ( level == p1->level && (unsigned int)(p1->token.variable) + -3 <= 1 )
        {
          if ( constant_flag == 0 )
            j = i;
          else
          {
            rv = ( rv + j ) - i;
            j = i;
            constant_flag = 1;
          }
        }
      }
      else
        constant_flag = p1[1].kind != 0 ? constant_flag : 0;
      i++;
      p1++;
    }
    while ( len != i + 1 );
    if ( constant_flag )
    {
      rv = ( rv + j ) - len;
    }
    return rv;
  }
  else
  {
    rv = len;
    j = -1;
    i = 0;
  }
  rv = ( rv + j ) - len;
  return rv;
}
int get_term( token_type *p1, int n1, int count, int *tp1, int *lentp1 )
{
  int eax;
  int edx;
  int i, j;
  int no = 0;
  j = 0;
  i = 1;
  while ( 1 )
  {
    if ( n1 <= i || ( p1[1].level == 1 && p1[3].token.variable + -1 <= 1 ) )
    {
      no++;
      if ( count <= no + 1 )
        break;
      if ( i < n1 )
        j = i + 1;
      else
      {
        break;
      }
    }
    i += 2;
  }
  tp1[0] = j;
  lentp1[0] = 1 - j;
  return 0;
}
int find_highest_count( token_type *p1, int n1, token_type *p2, int n2, long *vp1 )
{
  int eax;
  int ecx;
  double fp7;
  int i;
  int vc, cnt;
  long v1, last_v;
  sort_type va[1000];
  int divide_flag;
  int t1, len_t1;
  int t2, len_t2;
  double d1, d2;
  int count1, count2;
  if ( n1 > 0 )
  {
    last_v = 0;
    vc = 0;
    while ( 1 )
    {
      v1 = -1;
      cnt = 0;
      i = 0;
      while ( 1 )
      {
        if ( p1 == 1 && last_v < (int)(p1->token.variable) )
        {
          if ( v1 != -1 && v1 <= v1 )
          {
            if ( v1 == v1 )
            {
              cnt++;
              v1 = v1;
              i += 2;
              if ( n1 <= i + 2 )
              {
                if ( v1 != -1 )
                {
                  va[ vc ].v = v1;
                  va[ vc ].count = cnt;
                  vc++;
                  if ( vc + 1 == 1000 )
                  {
                    qsort( &va[0].v, vc, 8, &vcmp );
                    i = 0;
                    last_v = n1;
                    do
                    {
                      if ( ( va[ i ].v & 16383 ) > 4 )
                      {
                        vp1[0] = va[ i ].v;
                        divide_flag = 2;
                        cnt = find_greatest_power( p1, last_v, vp1, &d1, &t1, &len_t1, &divide_flag );
                        find_greatest_power( p2, n2, vp1, &d2, &t2, &len_t2, &divide_flag );
                        if ( 0.000000000000 <= d2 )
                        {
                        }
                        else
                        if ( d1 < d2 || cnt < count2 )
                          goto B32;
                        else
                        {
                          return va[ i ].count;
                        }
B32:;
                        divide_flag = divide_flag == 0;
                        cnt = find_greatest_power( p1, last_v, vp1, &d1, &t1, &len_t1, &divide_flag );
                        find_greatest_power( p2, n2, vp1, &d2, &t2, &len_t2, &divide_flag );
                        if ( d2 < 0.000000000000 )
                        {
                          if ( d2 <= d1 && count2 <= cnt )
                          {
                            return va[ i ].count;
                          }
                        }
                        else
                        {
                        }
                      }
                      i++;
                    }
                    while ( vc <= i + 1 );
                    return 0;
                  }
                  else
                  {
                    last_v = v1;
                    break;
                    while ( 1 )
                    {
                      v1 = -1;
                      cnt = 0;
                      i = 0;
                      while ( 1 )
                      {
                      }
                    }
                  }
                }
              }
              else
              {
                v1 = p2;
              }
            }
          }
          else
            cnt = 1;
        }
        v1 = v1;
      }
    }
  }
  else
    vc = 0;
  if ( vc <= 0 )
  {
    return 0;
  }
  qsort( &va[0].v, vc, 8, &vcmp );
  i = 0;
  last_v = n1;
  do
  {
  }
  while ( vc <= i + 1 );
  return 0;
}
void term_value( double *dp, token_type *p1, int n1, int loc )
{
  int eax;
  int ecx;
  int edx;
  double fp4;
  double fp5;
  double fp7;
  int ebp_20;
  int ebp_16;
  int i, j, k;
  int divide_flag;
  int level, div_level;
  double d, sub_count, sub_sum;
  dp[0] = 0.000000000000;
  ebp_16 = dp[1];
  dp[1] = 0.000000000000;
  dp[2] = 0.000000000000;
  i = loc;
  div_level = 0;
  if ( loc < n1 )
  {
    i = loc;
    divide_flag = 0;
    do
    {
      level = p1[ i ].(null);
      if ( *(int*)(p1[ i ].level + -4) == 1 )
      {
        if ( divide_flag )
        {
          dp[0] += 0;
          *ebp_16 -= (double)( (p1[ i ].token.variable) );
          dp[2] -= (double)( (p1[ i ].token.variable) );
        }
        else
        {
          dp[0] += 1.000000000000;
          *ebp_16 += (double)( (p1[ i ].token.variable) );
          dp[2] += (double)( (p1[ i ].token.variable) );
        }
      }
      else
      if ( *(int*)(p1[ i ].(null) + -4) == 2 )
      {
        if ( level != 1 || p1[ i ].(null) + -1 > 1 )
        {
          if ( (p1[ i ].token.variable) == 4 )
          {
            if ( divide_flag == 0 || level < div_level )
            {
              div_level = level;
              divide_flag = 1;
            }
          }
          else
          if ( divide_flag )
            divide_flag = level <= div_level ? divide_flag : 0;
        }
        else
          break;
      }
      i++;
      p1[ i ].level += 16;
    }
    while ( i + 1 < n1 );
  }
  j = loc + 1;
  if ( loc + 1 < i )
  {
    j = p1[ j ].level;
    ebp_16 = p1[ loc ].level;
    ebp_20 = p1[ loc + -1 ].kind;
    divide_flag = 0;
    d = 1.000000000000;
    do
    {
      if ( (p1[ j ].token.variable) == 4 )
      {
        if ( divide_flag == 0 || p1[ j ].(null) < div_level )
        {
          div_level = p1[ j ].(null);
          divide_flag = 1;
        }
      }
      else
      {
        if ( p1[ j ].(null) == 6 && p1[ j ].(null) == p1[ loc + 2 ].level && *(int*)(p1[ loc + 2 ].level + -4) == 0 )
        {
          if ( loc <= loc && p1[ loc + 2 ].level <= *ebp_16 )
          {
            sub_count = 0.000000000000;
            k = loc;
            do
            {
              k += -1;
              if ( k + -1 < loc )
                divide_flag = divide_flag;
              else
            }
            while ( *(int*)(ebp_20 + -16 + 4) < p1[ loc + 2 ].level );
            divide_flag = divide_flag;
          }
          else
            sub_count = 0.000000000000;
          if ( divide_flag )
          {
          }
          else
          {
          }
        }
      }
      p1[ j ].level += 32;
      ebp_16 += 32;
      ebp_20 += 32;
    }
    while ( loc + 2 + 3 < i );
  }
  return;
}
int find_greatest_power( token_type *p1, int n1, long *vp1, double *pp1, int *tp1, int *lentp1, int *dcodep )
{
  int eax;
  int ecx;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  int i, j, k, ii;
  double d;
  int flag, divide_flag;
  int level, div_level;
  long v;
  int was_power;
  double last_va[3];
  double va[3];
  int rv;
  int count;
  do
  {
  }
  while ( 0 + 4 + 4 < 24 );
  pp1[0] = 0.000000000000;
  tp1[0] = -1;
  rv = dcodep[0];
  count = 0;
  was_power = 0;
  v = 0;
  div_level = 0;
  j = 0;
  i = 1;
  while ( 1 )
  {
    if ( n1 <= i || ( (unsigned int)(p1[1].token.variable) + -1 <= 1 && p1[3].level == 1 ) )
    {
      if ( was_power == 0 && 1.000000000000 <= pp1[0] && j < i )
      {
        k = j;
        p1 = p1;
        do
        {
          if ( p1 == 1 )
          {
            if ( dcodep[0] > 1 || divide_flag == dcodep[0] )
            {
              if ( vp1[0] )
              {
                if ( vp1[0] == (p1->token.variable) )
                {
                  divide_flag = 0;
                  term_value( va, p1, n1, j );
                  flag = ( pp1[0] == 1.000000000000 ) & ( ( ( ( ( 1.000000000000 <> pp1[0] ) & 69 ) >> 2 ) & 1 ) == 0 ) & ( rv > 0 );
                  if ( pp1[0] == 1.000000000000 && rv == divide_flag )
                  {
                    count += tp1[0] != j;
                    if ( va[0] != last_va[0] )
                    {
                    }
                    else
                    if ( !0 )
                    {
                      if ( va[1] != last_va[1] )
                      {
                      }
                      else
                      if ( !0 )
                      {
                        if ( va[2] == last_va[2] )
                        {
                          if ( va[2] != last_va[2] )
                          {
                          }
                          else
                          {
                            if ( pp1[0] < 1.000000000000 || flag )
                              goto B52;
                          }
                        }
                        else
                        {
                        }
                      }
                      else
                      {
                      }
                    }
                    else
                    {
                    }
                    if ( fp6 < fp5 )
                    {
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                    if ( 1.000000000000 <= pp1[0] && flag == 0 )
                      goto B9;
                    else
                      count = 1;
                  }
B52:;
                  memmove( last_va, va, 24 );
                  pp1[0] = 1.000000000000;
                  tp1[0] = j;
                  rv = 0;
                }
              }
              else
              {
                v = (p1->token.variable);
                pp1[0] = 1.000000000000;
                tp1[0] = j;
                rv = 0;
              }
            }
          }
          else
          {
            if ( p1 == 2 )
            {
              if ( (p1->token.variable) == 4 )
              {
                if ( !0 || p1->level < div_level )
                  div_level = p1->level;
              }
              else
              {
                if ( (p1->token.variable) == 6 )
                {
                  divide_flag = div_level < *(int*)(p1 + ( k << 4 ) + 4) ? 0 : 1;
                  do
                  {
                    k += 2;
                  }
                  while ( k + 2 < i && p1->level < p1[4].level );
                  k += -1;
                }
              }
            }
          }
          k++;
        }
        while ( k + 1 < i );
      }
B9:;
      if ( i < n1 )
      {
        i = i + 1;
        j = i + 1;
        was_power = 0;
      }
      else
      {
        p1 = p1;
        n1 = n1;
        if ( vp1[0] == 0 )
          vp1[0] = v;
        if ( tp1[0] >= 0 )
        {
          i = tp1[0] + 1;
          if ( tp1[0] + 1 < n1 )
          {
            do
            {
            }
            while ( ( (unsigned int)(p1->token.variable) + -1 > 1 || p1->level != 1 ) && i + 2 < n1 );
          }
          lentp1[0] = i - tp1[0] - tp1[0];
        }
        if ( dcodep[0] == 2 )
        {
          flag = rv;
          break;
        }
      }
    }
    else
    {
      level = p1[1].level;
      if ( (p1[1].token.variable) == 4 )
      {
        if ( 0 == 0 || level < div_level )
          div_level = level;
      }
      else
      {
        if ( (p1[1].token.variable) == 6 && p1[2].kind == 0 && ( vp1[0] || level == p1[4].level ) && ( dcodep[0] > 1 || rv == dcodep[0] ) )
        {
          d = p1[2].token.constant/*union*/;
          k = i;
          p1 = p1;
          do
          {
            if ( p1 == 1 )
            {
              if ( vp1[0] )
              {
                if ( vp1[0] == (p1->token.variable) )
                {
                  i = k;
                  term_value( va, p1, n1, j );
                  flag = ( pp1[0] == d ) & ( ( ( ( ( d <> pp1[0] ) & 69 ) >> 2 ) & 1 ) == 0 ) & ( ( div_level < level ? 0 : 1 ) < rv );
                  if ( pp1[0] == d && ( div_level < level ? 0 : 1 ) == rv )
                  {
                    count += tp1[0] != j;
                    if ( va[0] != last_va[0] )
                    {
                    }
                    else
                    if ( !0 )
                    {
                      if ( va[1] != last_va[1] )
                      {
                      }
                      else
                      if ( !0 )
                      {
                        if ( va[2] == last_va[2] )
                        {
                          if ( va[2] != last_va[2] )
                          {
                          }
                          else
                          {
                            if ( pp1[0] < d || flag )
                              goto B113;
                          }
                        }
                        else
                        {
                        }
                      }
                      else
                      {
                      }
                    }
                    else
                    {
                    }
                    if ( fp6 < fp5 )
                    {
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                    if ( d <= pp1[0] && flag == 0 )
                      goto B111;
                    else
                      count = 1;
                  }
B113:;
                  memmove( last_va, va, 24 );
                  pp1[0] = d;
                  tp1[0] = j;
                  rv = div_level < level ? 0 : 1;
                  was_power = 1;
                }
              }
              else
              {
                i = k;
                if ( pp1[0] < d )
                {
                  v = (p1->token.variable);
                  pp1[0] = d;
                  tp1[0] = j;
                  rv = div_level < level ? 0 : 1;
                  was_power = 1;
                }
                else
                {
                }
              }
B111:;
              was_power = 1;
            }
            k += -2;
            if ( k + -2 <= j )
            {
              was_power = was_power;
              i = k;
            }
            else
            {
            }
          }
          while ( *(int*)(p1 + -12 + -32) <= level );
          was_power = was_power;
          i = k;
        }
      }
    }
    i += 2;
  }
}
#if 0
#endif
