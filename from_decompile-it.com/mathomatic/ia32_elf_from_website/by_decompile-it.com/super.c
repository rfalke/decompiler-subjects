#include "super.c.h"
void group_recurse( token_type *equation, int *np, int loc, int level )
{
  int eax;
  int ecx;
  int edx;
  int i;
  int len;
  int di = loc, edi;
  int group_flag;
  /* phantom */ int e1;
  i = loc;
  while ( i < np[0] && level <= equation->level )
  {
    if ( level < equation )
    {
      group_recurse( equation, np, i, level + 1 );
      i++;
      if ( i + 1 < np[0] && level < equation->level )
      {
        do
        {
          i += 2;
        }
        while ( i + 2 < np[0] && level < equation[5].level );
      }
    }
    else
      i++;
  }
  i = di + 1;
  if ( di + 1 < i )
  {
    group_flag = 0;
    di = -1;
    do
    {
      if ( level == equation->level )
      {
        if ( (equation->token.variable) == 4 )
        {
          if ( di < 0 )
            di = i;
          else
          {
            if ( i + 2 < edi )
            {
              i = equation + ( ( i + 2 ) << 4 ) + 4;
              len = i + 2;
              do
              {
                if ( equation[2].level == level && (equation->token.variable) != 4 )
                {
                }
                else
                {
                  len += 2;
                }
              }
              while ( edi <= len + 2 );
            }
            if ( i == edi )
            {
              i += len - i;
              group_flag = 1;
            }
            else
            {
              memmove( scratch, equation + ( i << 4 ), ( len - i ) << 4 );
              memmove( equation + ( ( di + ( len - i ) ) << 4 ), equation + ( di << 4 ), ( i - di ) << 4 );
              memmove( equation + ( di << 4 ), scratch, ( ( equation + ( di << 4 ) ) - i ) << 4 );
              i = i + ( ( equation + ( di << 4 ) ) - i ) + -2;
              group_flag = 1;
            }
          }
        }
        else
        if ( di >= 0 )
        {
        }
      }
      i += 2;
    }
    while ( edi <= i + 2 );
    edi = ebp_32;
    if ( group_flag == 0 || edi <= di + 1 )
    {
      return;
    }
    do
    {
      if ( level == equation->level && equation->kind == 2 )
      {
      }
      equation->level++;
      equation->level = equation + ( i << 4 ) + 4 + 16;
      i++;
    }
    while ( i + 1 < edi );
  }
  return;
}
void group_proc( token_type *equation, int *np )
{
  int eax;
  int edx;
  group_recurse( equation, np, ecx, ebp_24 );
  return;
}
int fractions_and_group( token_type *equation, int *np )
{
  int edi;
  int rv;
  elim_loop( equation, np );
  rv = make_fractions( equation, np );
  group_proc( equation, np );
  return rv;
}
int make_fractions_and_group( int n )
{
  int esi;
  int rv = 0;
  if ( n_lhs[ n ] > 0 && n_rhs[ n ] )
  {
    rv = fractions_and_group( rhs[ n ], &n_rhs[ n ] ) != 0 ? rv : 1;
  }
  return rv;
}
int super_factor( token_type *equation, int *np, int start_flag )
{
  int eax;
  int edx;
  int edi;
  int rv;
  group_proc( equation, np );
  rv = sf_recurse( equation, np, 0, 1, start_flag );
  organize( equation, np );
  return rv;
}
int sf_recurse( token_type *equation, int *np, int loc, int level, int start_flag )
{
  int eax;
  int ecx;
  int edx;
  int modified;
  int i, j, k;
  int op;
  int len1, len2;
  if ( start_flag == 0 && loc + 1 < np && level <= equation->level )
  {
    do
    {
      if ( level == equation->level && (equation->token.variable) == 4 )
      {
        start_flag = 1;
        break;
      }
      else
      {
        i += 2;
      }
    }
    while ( i + 2 < np && level <= equation[5].level );
  }
  i = loc;
  modified = 0;
  np[0] = np;
  for ( ; i < np[0] && level <= equation->level;  )
  {
    if ( level < equation + ( loc << 4 ) + 48 + 32 )
    {
      modified |= sf_recurse( equation, np, i, level + 1, start_flag );
      i++;
      if ( i + 1 < np[0] && level < equation->level )
      {
        do
        {
          i += 2;
        }
        while ( i + 2 < np[0] && level < equation[5].level );
      }
    }
    else
    {
      equation = i + 1;
    }
    i = equation;
  }
  op = ebp_28;
  if ( modified == 0 && start_flag && op + -1 + -1 <= 1 )
  {
    while ( 1 )
    {
      if ( np <= loc + 1 || equation[1].level <= level )
        k = loc + 1;
      else
      {
        k = loc + 1;
        do
        {
          k += 2;
        }
        while ( k + 2 < np && level < equation[5].level );
      }
      len1 = k - loc;
      k = loc + ( k - loc ) + 1;
      if ( loc + ( k - loc ) + 1 < np && level <= equation->level )
      {
        do
        {
          k = len2 + loc + ( k - loc ) + 1 + 1 + 1;
          if ( np <= loc + ( k - loc ) + 1 + 1 || equation->level <= level )
          {
          }
          else
          {
            len2 = k;
            do
            {
              k += 2;
              if ( np <= k + 2 )
              {
              }
              else
            }
            while ( equation[5].level <= level );
            k = len2;
          }
          k -= len2 + loc + ( k - loc ) + 1 + 1;
          len2 = k - ( len2 + loc + ( k - loc ) + 1 + 1 );
          if ( loc + ( k - loc ) <= loc + 1 )
            k = loc + 1;
          else
          {
            k = loc + 1;
            do
            {
              if ( level + 1 == equation[1].level && (equation->token.variable) == 4 )
              {
                k += 2;
                if ( k + 2 < loc + ( k - loc ) && level + 1 < equation->level )
                {
                  do
                  {
                    k += 2;
                    if ( loc + ( k - loc ) <= k + 2 )
                      k = k;
                    else
                  }
                  while ( equation[6].level <= level + 1 );
                  k = k;
                }
                if ( k < len2 + loc + ( k - loc ) + 1 + 1 + ( k - ( len2 + loc + ( k - loc ) + 1 + 1 ) ) )
                {
                  do
                  {
                    if ( level + 1 == equation->level && (equation->token.variable) == 4 )
                    {
                      k += 2;
                      if ( k + 2 < len2 + loc + ( k - loc ) + 1 + 1 + ( k - ( len2 + loc + ( k - loc ) + 1 + 1 ) ) && level + 1 < equation->level )
                      {
                        do
                        {
                          k += 2;
                        }
                        while ( k + 2 < len2 + loc + ( k - loc ) + 1 + 1 + ( k - ( len2 + loc + ( k - loc ) + 1 + 1 ) ) && level + 1 < equation[6].level );
                      }
                      if ( eax || 0 )
                      {
                        modified = eax;
                        if ( start_flag == 2 && ( 1 & 255 ) && modified )
                        {
                          if ( poly2_gcd( equation + ( ( k + 1 ) << 4 ), k - ( k + 1 ), equation + ( ( k + 1 ) << 4 ), k - ( k + 1 ), 0 ) )
                            modified = n_tlhs;
                          else
                          {
                            if ( poly2_gcd( equation + ( ( k + 1 ) << 4 ), k - ( k + 1 ), equation + ( ( k + 1 ) << 4 ), k - ( k + 1 ), 0 ) )
                              modified = n_trhs;
                          }
                          if ( n_tokens < modified + ( ( n_trhs + ( k - n_trhs ) + k + 1 + ( k - loc ) + 5 ) - ( loc + ( k - loc ) + 1 ) - k ) + ( n_tlhs * 2 ) )
                            error_huge( );
                          if ( modified > 0 )
                          {
                            do
                            {
                              trhs->level += level + 1;
                              trhs++;
                            }
                            while ( modified != 0 + 1 + 1 );
                            k = k;
                          }
                          if ( n_tlhs > 0 )
                          {
                            do
                            {
                              tlhs->level += level + 1;
                              tlhs++;
                            }
                            while ( n_tlhs != 0 + 1 + 1 );
                            k = k;
                          }
                          memmove( scratch, equation + ( loc << 4 ), ( k + 1 + ~loc ) << 4 );
                          memmove( &scratch[ k + 1 + ~loc ].kind, equation + ( k << 4 ), ( ( loc + ( k - loc ) ) - k ) << 4 );
                          scratch[ ( ( loc + ( k - loc ) ) - k ) + ~loc + ( ( loc + ( k - loc ) ) - k ) ].level = level + 1;
                          scratch[ ( ( loc + ( k - loc ) ) - k ) + ~loc + ( ( loc + ( k - loc ) ) - k ) ].kind = OPERATOR;
                          memmove( &scratch[ ( ( loc + ( k - loc ) ) - k ) + ~loc + ( ( loc + ( k - loc ) ) - k ) + 1 ].kind, tlhs, n_tlhs << 4 );
                          if ( ebp_28 + esi > 0 )
                          {
                            do
                            {
                              scratch[ 0 ].level += 2;
                            }
                            while ( esi != eax + 1 );
                          }
                          scratch[ esi ].level = level + 1 + 1;
                          scratch[ esi ].kind = OPERATOR;
                          memmove( &scratch[ esi + 1 ].kind, ebp_32 + ( ebp_104 << 4 ), ( ( ebp_68 + -1 ) - ebp_100 ) << 4 );
                          memmove( &scratch[ ebp_68 + esi ].kind, ebp_32 + ( k << 4 ), ( ebp_88 - k ) << 4 );
                          scratch[ ebp_84 + ebp_68 ].level = level + 1;
                          scratch[ ebp_84 + ebp_68 ].kind = OPERATOR;
                          memmove( &scratch[ ebp_84 + ebp_68 + 1 ].kind, ebp_128, modified << 4 );
                          if ( esi < modified + ebx )
                          {
                            do
                            {
                              eax += 16;
                            }
                            while ( esi + 1 < ebx );
                          }
                          scratch[ ebx ].level = level + 1;
                          scratch[ ebx ].kind = OPERATOR;
                          memmove( &scratch[ ebx + 1 ].kind, ebp_96, ebp_92 << 4 );
                          scratch[ ebp_92 + ebx ].level = level + 1;
                          scratch[ ebp_92 + ebx ].kind = OPERATOR;
                          memmove( &scratch[ ebp_92 + ebx + 1 ].kind, ebp_60, ebp_52 );
                          if ( ebp_28 + esi <= ebx )
                          {
                            if ( n_tokens < esi + *ebp_48 + ( ~len2 - len1 ) )
                              error_huge( );
                            memmove( ebp_72, ebp_32 + ( ebp_88 << 4 ), ( *ebp_48 - ebp_88 ) << 4 );
                            np += ~len2 / 4;
                            memmove( ebp_32 + ( ( ebp_64 + esi ) << 4 ), ebp_32 + ( ebp_36 << 4 ), ( ( *ebp_48 + ebx ) - ebp_36 ) << 4 );
                            np = *ebp_48 + ( esi - len1 );
                            memmove( ebp_112, scratch, esi << 4 );
                            modified = 1;
                            break;
                            while ( 1 )
                            {
                            }
                          }
                          else
                          {
                            do
                            {
                              eax += 16;
                            }
                            while ( ebx + 1 < esi );
                          }
                        }
                        if ( n_tokens < len2 + len1 + 8 + ( k - ( k + 1 ) ) + ( k - ( k + 1 ) ) )
                          error_huge( );
                        if ( 1 == 0 && loc < loc + ( k - loc ) )
                        {
                          loc = loc;
                          do
                          {
                            equation->level++;
                            loc++;
                          }
                          while ( loc + 1 < loc + ( k - loc ) );
                        }
                        if ( modified == 0 && ebp_100 < ebp_88 )
                        {
                          j = loc + ( k - loc ) + 1;
                          do
                          {
                            equation[1].level++;
                            j++;
                          }
                          while ( j + 1 < ecx );
                        }
                        memmove( scratch, equation + ( loc << 4 ), ( k + 1 + ~loc ) << 4 );
                        if ( 1 )
                        {
                          memmove( &scratch[ k + 1 + ~loc ].kind, equation + ( k << 4 ), ( ( loc + ( k - loc ) ) - k ) << 4 );
                        }
                        if ( modified )
                        {
                          scratch[ k + 1 + ~loc + ( ( loc + ( k - loc ) ) - k ) ].level = level + 1;
                          scratch[ k + 1 + ~loc + ( ( loc + ( k - loc ) ) - k ) ].kind = OPERATOR;
                          memmove( &scratch[ k + 1 + ~loc + ( ( loc + ( k - loc ) ) - k ) + 1 ].kind, equation + ( ( k + 1 ) << 4 ), ( k - ( k + 1 ) ) << 4 );
                        }
                        if ( ebp_28 > 0 )
                        {
                          do
                          {
                            scratch[ 0 ].level += 2;
                          }
                          while ( ecx != eax + 1 );
                        }
                        scratch[ ebp_28 ].level = level + 1 + 1;
                        scratch[ ebp_28 ].kind = OPERATOR;
                        memmove( &scratch[ ebp_28 + 1 ].kind, ebp_32 + ( ebp_104 << 4 ), ( ( ebp_68 + -1 ) - ebp_100 ) << 4 );
                        if ( modified )
                        {
                          memmove( &scratch[ ebp_28 ].kind, ebp_32 + ( k << 4 ), ( ebp_88 - k ) << 4 );
                        }
                        if ( 1 )
                        {
                          scratch[ ebp_28 ].level = level + 1;
                          scratch[ ebp_28 ].kind = OPERATOR;
                          memmove( &scratch[ ebp_28 + 1 ].kind, ebp_32 + ( ebp_84 << 4 ), ebp_96 << 4 );
                        }
                        if ( esi < ebp_28 )
                        {
                          do
                          {
                          }
                          while ( esi + 1 < ecx );
                        }
                        scratch[ ebp_28 ].level = level + 1;
                        scratch[ ebp_28 ].kind = OPERATOR;
                        if ( 1 )
                        {
                          memmove( &scratch[ ebx ].kind, ebp_32 + ( ebp_84 << 4 ), ebp_96 << 4 );
                          if ( modified )
                          {
                            scratch[ esi ].level = level + 1;
                            scratch[ esi ].kind = OPERATOR;
                          }
                          else
                          {
                            if ( ebx < esi )
                            {
                              do
                              {
                              }
                              while ( ebx + 1 < esi );
                            }
                          }
                        }
                        else
                        if ( modified )
                        {
                        }
                        else
                        {
                        }
                        memmove( &scratch[ esi ].kind, ebp_32 + ( ebp_68 << 4 ), ebp_92 << 4 );
                      }
                      else
                      {
                        if ( len2 + len2 + loc + ( k - loc ) + 1 + 1 + 1 < np && level <= equation->level )
                        {
                          do
                          {
                            k = len2 + loc + ( k - loc ) + 1 + 1 + 1;
                          }
                          while ( np <= len2 + len2 + loc + ( k - loc ) + 1 + 1 + 1 || equation->level < level );
                          break;
                        }
                        else
                          break;
                      }
                    }
                    else
                    {
                      k += 2;
                    }
                  }
                  while ( k + 2 < len2 + loc + ( k - loc ) + 1 + 1 + ( k - ( len2 + loc + ( k - loc ) + 1 + 1 ) ) );
                }
              }
              else
              {
                k += 2;
              }
            }
            while ( k + 2 < loc + ( k - loc ) );
          }
        }
        while ( np <= len2 + len2 + loc + ( k - loc ) + 1 + 1 + 1 || equation->level < level );
        break;
      }
    }
  }
  return modified;
}
#if 0
#endif
