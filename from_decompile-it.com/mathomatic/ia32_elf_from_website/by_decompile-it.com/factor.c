#include "factor.c.h"
int factor_divide( token_type *equation, int *np, long v, double d )
{
  int eax;
  int edx;
  return fplus_recurse( equation, np, 0, 1, v, d, ebp_24, ebp_24 );
}
int subtract_itself( token_type *equation, int *np )
{
  int eax;
  int edx;
  return fplus_recurse( equation, np, ecx, ebp_40, ebp_40, ebp_36, ebp_36, ebp_32 );
}
int factor_plus( token_type *equation, int *np, long v, double d )
{
  int eax;
  int edx;
  return fplus_recurse( equation, np, 0, 1, v, d, ebp_24, ebp_24 );
}
int fplus_recurse( token_type *equation, int *np, int loc, int level, long v, double d, int whole_flag, int div_only )
{
  int eax;
  int ecx;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  int ebp_92;
  int ebp_52;
  int ebp_48;
  int modified;
  int i = loc + 1, j, k;
  /* phantom */ int op;
  int len1, len2;
  for ( ; i < np && level <= equation[2].level; i += 2 )
  {
    if ( level == loc )
    {
      modified = 0;
      if ( *(int*)(ebx + 8) + -1 <= 1 )
      {
        do
        {
          if ( np <= loc + 1 || *(int*)(equation + ( ( ebp_180 + len1 + 1 ) << 4 ) + 4) <= level )
            k = ebp_180;
          else
          {
            k = level;
            level = level;
            do
            {
              k += 2;
            }
            while ( k + 2 < np && level < equation[5].level );
          }
          len1 = k - ebp_72;
          k = ebp_72 + ( k - ebp_72 ) + 1;
          j = ebp_72 + ( k - ebp_72 ) + 1;
          if ( loc + ( k - loc ) + 1 < np && level <= *(int*)(ebp_56 + ( eax << 4 ) + -12) )
          {
            do
            {
              k = j + 1;
              if ( j + 1 < np && level < equation->level )
              {
                level = level;
                do
                {
                  k += 2;
                }
                while ( k + 2 < np && level < equation[5].level );
              }
              len2 = k - j;
              ebp_92 = equation + ( j << 4 );
              while ( ebp_52 = eax + 1, eax + 1 < ebp_112 )
              {
                if ( whole_flag )
                {
                  if ( len1 > 1 && *(int*)(ebp_56 + ( edi << 4 )) == 0 && ebp_100 == *(int*)(ecx + ( edi << 4 ) + 20) && *(int*)(eax + 8) + -3 <= 1 )
                    ebp_52 = edi + 2;
                  else
                  {
                  }
                }
                else
                if ( ebp_52 + 1 < ebp_112 )
                {
                  return ebp_56 + ( eax << 4 ) + 36;
                }
                if ( ( div_only == 0 || equation == 4 ) && ( ( ebp_52 + 1 + 2 ) - ebp_52 != 1 || equation || abs( equation->token.constant/*union*/ ) != 1.000000000000 || abs( *(double*)(eax + 8) ) != 1.000000000000 ) )
                {
                  if ( whole_flag == 0 && v != 0 && v != 5 )
                  {
                    if ( d || d )
                    {
                      if ( d != 1.000000000000 )
                      {
                        if ( ebp_52 + 1 < ebp_52 + 1 + 2 )
                        {
                          do
                          {
                            if ( (equation[1].token.variable) == 6 && equation[2].level == equation->level && equation[2].kind == 0 && equation[2].token.constant == d && ebp_52 >= 0 && equation->level <= equation->level )
                            {
                              do
                              {
                                if ( equation->kind != 1 || equation->token.constant != v )
                                {
                                  ebp_48 += -1;
                                  if ( ebp_48 + -1 < 0 )
                                  {
                                  }
                                  else
                                }
                              }
                              while ( *(int*)(ebp_200 + -16 + 4) < ebp_52 + 1 );
                            }
                          }
                          while ( ebp_52 + 2 + 3 < ebp_52 + 1 + 2 );
                        }
                      }
                    }
                    else
                    {
                    }
                    if ( ebp_52 < ebp_52 + 1 + 2 )
                    {
                      i = ebp_52;
                      do
                      {
                        if ( equation == 1 && v == (equation->token.variable) )
                          goto B58;
                        else
                        {
                          i += 2;
                        }
                      }
                      while ( i + 2 < ebp_52 + 1 + 2 );
                    }
                  }
B58:;
                  while ( ebp_48 = j + ( k - j ) + 1, j + ( k - j ) + 1 < j + ( k - j ) )
                  {
                    if ( whole_flag )
                    {
                      if ( len2 > 1 && equation == 0 && level + 1 == equation[1].level && (unsigned int)(equation[1].token.variable) + -3 <= 1 )
                        ebp_48 += 2;
                      else
                      {
                      }
                    }
                    else
                    {
                      if ( ebp_48 + 1 < j + ( k - j ) )
                      {
                        do
                        {
                        }
                        while ( ( equation[2].level != level + 1 || (unsigned int)(equation[2].token.variable) + -3 > 1 ) && ebp_48 + 1 + 2 + 2 < j + ( k - j ) );
                      }
                      if ( ebp_48 <= j )
                      {
                        if ( equation == 4 )
                          continue;
                      }
                      else
                      {
                        if ( equation == equation )
                          goto B101;
                        else
                        {
                        }
                      }
                    }
B101:;
                    if ( ( j + ( k - j ) ) - ebp_48 != 1 || equation || abs( equation->token.constant/*union*/ ) != 1.000000000000 || abs( *(double*)(eax + 8) ) != 1.000000000000 )
                    {
                      if ( ( ( whole_flag != 0 ) & ( loc < ebp_52 ) ) == 0 )
                      {
                      }
                      else
                      {
                        equation->token.constant/*union*/ = 1.000000000000;
                        ebp_52 = loc;
                      }
                      if ( ( ( whole_flag != 0 ) & ( j < ebp_48 ) ) == 0 )
                      {
                      }
                      else
                      {
                        *(double*)(ebp_92 + 8) = 1.000000000000;
                        ebp_48 = j;
                      }
                      se_compare( equation + ( ebp_52 << 4 ), ( ebp_52 + 1 + 2 ) - ebp_52, equation + ( ebp_48 << 4 ), ( j + ( k - j ) ) - ebp_48, ebp_28 );
                      if ( ( whole_flag != 0 ) & ( loc < ebp_52 ) )
                      {
                        equation->token.constant/*union*/ = equation->token.constant/*union*/;
                        ebp_52 += 2;
                      }
                      if ( ( whole_flag != 0 ) & ( j < ebp_48 ) )
                      {
                        *(double*)(ebp_92 + 8) = *(double*)(ebp_92 + 8);
                        ebp_48 += 2;
                      }
                      if ( se_compare( equation + ( ebp_52 << 4 ), ( ebp_52 + 1 + 2 ) - ebp_52, equation + ( ebp_48 << 4 ), ( j + ( k - j ) ) - ebp_48, ebp_28 ) )
                      {
                      }
                      else
                      if ( whole_flag )
                      {
                        j = len2 + j + 1;
                        if ( len2 + j + 1 < np && level <= equation )
                        {
                          do
                          {
                            k = j + 1;
                          }
                          while ( np <= len2 + j + 1 || equation < level );
                        }
                        else
                        {
                          if ( ebx <= ebp_180 + len1 || *(int*)(ebp_56 + ( ecx << 4 ) + -12) < level )
                            goto B11;
                        }
                      }
                      else
                      if ( ( div_only != 0 ) == 0 && ( v != 0 ) == 0 )
                      {
                        if ( ebp_52 + 1 < ebp_52 + 1 + 2 )
                        {
                          do
                          {
                            if ( level + 2 == equation[1].level && (equation->token.variable) == 6 )
                            {
                              if ( equation[3].level != level + 2 || equation[3] )
                              {
                                if ( ebp_48 + 1 < j + ( k - j ) )
                                {
                                  do
                                  {
                                    if ( level + 2 == equation[1].level && (equation->token.variable) == 6 )
                                    {
                                      if ( equation[2].level != level + 2 || equation[2] )
                                      {
                                        if ( ( ebp_52 + 1 + 2 != ebp_52 + 1 + 2 || j != ebp_48 + 1 + 2 ) && ( ( ebp_52 + 1 + 2 ) - ebp_52 != 1 || equation ) )
                                        {
                                          if ( d == 1.000000000000 )
                                          {
                                            if ( -1.000000000000 < 0.000000000000 )
                                            {
                                            }
                                            else
                                            if ( -1.000000000000 < 0.000000000000 )
                                              continue;
                                          }
                                          if ( se_compare( equation + ( ebp_52 << 4 ), ( ebp_52 + 1 + 2 ) - ebp_52, equation + ( ebp_48 << 4 ), ( ebp_48 + 1 + 2 ) - ebp_48, ebp_28 ) )
                                          {
                                            if ( 0.000000000000 < -1.000000000000 )
                                            {
                                            }
                                            else
                                            if ( -1.000000000000 <= 0.000000000000 )
                                            {
                                              ebp_92 = loc <= loc ? 1 : equation;
                                              if ( 1 )
                                              {
                                                if ( !0 )
                                                {
                                                  if ( j + ( k - j ) <= ebp_48 + 1 + 2 + 2 || equation[3].level != equation[2].level + 1 || equation[4].level != equation[3].level || equation[3] || (unsigned int)(equation[2].token.variable) + -3 > 1 )
                                                  {
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
                                              if ( abs( *(double*)(( ( ebp_52 + 1 + 2 ) - ebp_52 ) + 8) ) <= 0.000000000000 )
                                              {
                                                if ( n_tokens < *ebp_152 + ( ebx - len1 ) + ~len2 )
                                                  error_huge( );
                                                if ( ( loc <= loc ? 1 : equation ) == 2 )
                                                  equation = 1;
                                                memmove( equation + ( j << 4 ) + -16, equation + ( ( j + ( k - j ) ) << 4 ), ( np - ( j + ( k - j ) ) ) << 4 );
                                                np[0] = ~len2 + np;
                                                memmove( ebp_56 + ( ( ebp_72 + ebx ) << 4 ), ebp_56 + ( ebp_112 << 4 ), ( ( esi + edi ) - ebp_112 ) << 4 );
                                                np[0] = edi + ( ebx - len1 );
                                                memmove( ebp_184 + ebp_56, scratch, ebx << 4 );
                                                modified = 1;
                                              }
                                              else
                                              {
                                              }
                                            }
                                            if ( -1.000000000000 < 0.000000000000 )
                                            {
                                            }
                                            else
                                            if ( -1.000000000000 < 0.000000000000 )
                                            {
                                            }
                                            else
                                            if ( ebp_28 == 0 )
                                            {
                                              do
                                              {
                                              }
                                              while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(fp5,fp6) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                                              if ( ( rem(( -1.000000000000 < -1.000000000000 ? -1.000000000000 : -1.000000000000 ),1.000000000000) ) == ( rem(( -1.000000000000 < -1.000000000000 ? -1.000000000000 : -1.000000000000 ),1.000000000000) ) )
                                              {
                                                if ( fp7 || fp6 )
                                                {
                                                  do
                                                  {
                                                  }
                                                  while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(fp5,fp6) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                                                  if ( ( rem(( ( -1.000000000000 <= -1.000000000000 ? -1.000000000000 : -1.000000000000 ) - ( -1.000000000000 < -1.000000000000 ? -1.000000000000 : -1.000000000000 ) ),1.000000000000) ) == ( rem(( ( -1.000000000000 <= -1.000000000000 ? -1.000000000000 : -1.000000000000 ) - ( -1.000000000000 < -1.000000000000 ? -1.000000000000 : -1.000000000000 ) ),1.000000000000) ) )
                                                  {
                                                    if ( fp7 || fp6 )
                                                      goto B257;
                                                  }
                                                  else
                                                  {
                                                  }
                                                  fmod( ( -1.000000000000 <= -1.000000000000 ? -1.000000000000 : -1.000000000000 ) - ( -1.000000000000 < -1.000000000000 ? -1.000000000000 : -1.000000000000 ), 1.000000000000 );
                                                }
                                              }
                                              else
                                              {
                                              }
                                              fmod( -1.000000000000 < -1.000000000000 ? -1.000000000000 : -1.000000000000, 1.000000000000 );
                                            }
                                            else
                                            {
                                            }
B257:;
                                            if ( -1.000000000000 < 1.000000000000 )
                                            {
                                            }
                                            else
                                            {
                                            }
                                          }
                                        }
                                      }
                                      else
                                      if ( 0.000000000000 <= equation[1].token.constant/*union*/ )
                                        continue;
                                    }
                                    else
                                  }
                                  while ( ebp_48 + 1 + 2 + 2 < j + ( k - j ) );
                                }
                              }
                              else
                              if ( 0.000000000000 <= equation[1].token.constant/*union*/ )
                                continue;
                            }
                            else
                          }
                          while ( ebp_52 + 1 + 2 + 2 < ebp_52 + 1 + 2 );
                        }
                      }
                      if ( equation == 4 )
                      {
                        scratch->level = level + 1;
                        scratch->kind = 0;
                        scratch->token.constant/*union*/ = 1.000000000000;
                        scratch[1].level = level + 1;
                        scratch[1].kind = 2;
                        scratch[1].token.variable = 4;
                      }
                      memmove( &scratch[ 2 ].kind, equation + ( ebp_52 << 4 ), ( ( ebp_52 + 1 + 2 ) - ebp_52 ) << 4 );
                      ebp_92 = ebp_96 + ebp_88;
                      if ( 1.000000000000 != 1.000000000000 || 1.000000000000 != 1.000000000000 )
                      {
                        if ( ebp_96 < eax )
                        {
                          do
                          {
                            scratch->level += 2;
                          }
                          while ( 2 + 1 + 1 < ebp_92 );
                        }
                        scratch[ ebp_92 ].level = level + 1 + 1;
                        scratch[ ebp_92 ].kind = OPERATOR;
                        scratch[ ebp_92 + 1 ].level = level + 1 + 1;
                        scratch[ ebp_92 + 1 ].kind = CONSTANT;
                        scratch[ ebp_92 + 1 ].token.constant = 1.000000000000;
                        ebp_92 += 2;
                        while ( 1 )
                        {
                        }
                      }
                      else
                      if ( loc == ebp_52 && ebp_112 == esi && ebp_92 > 2 )
                      {
                        do
                        {
                          scratch->level++;
                        }
                        while ( 2 + 1 + 1 < ebp_92 );
                      }
                      scratch[ ebp_92 ].level = level + 1;
                      scratch[ ebp_92 ].kind = OPERATOR;
                      ebp_92 = ebp_52 - ebp_72;
                      memmove( &scratch[ ebp_92 + 1 ].kind, equation + ( loc << 4 ), ( ebp_52 - loc ) << 4 );
                      ebp_92 += ebp_92 + 1;
                      if ( ebp_52 + 1 + 2 != ebp_52 + 1 + 2 )
                      {
                        memmove( &scratch[ ebp_92 ].kind, equation + ( ebp_52 << 4 ), ( ( ebp_52 + 1 + 2 ) - ebp_52 ) << 4 );
                        if ( loc == ebp_52 && ebp_112 == ebp_60 && ebp_92 < ( ebp_52 + 1 + 2 ) - ebp_52 )
                        {
                          do
                          {
                            scratch->level++;
                          }
                          while ( ebp_92 + 1 + 1 < ( ebp_52 + 1 + 2 ) - ebp_52 );
                        }
                        if ( ebp_88 + 1 < esi )
                        {
                          do
                          {
                            edx += 16;
                          }
                          while ( ecx + 1 < esi );
                        }
                        scratch[ ( ebp_52 + 1 + 2 ) - ebp_52 ].level = scratch[ ebp_88 ].level + 1;
                        scratch[ ( ebp_52 + 1 + 2 ) - ebp_52 ].kind = OPERATOR;
                        scratch[ ( ( ebp_52 + 1 + 2 ) - ebp_52 ) + 1 ].level = *(int*)(scratch[ ebp_88 ].kind + 4) + 1;
                        scratch[ ( ( ebp_52 + 1 + 2 ) - ebp_52 ) + 1 ].kind = CONSTANT;
                        scratch[ ( ( ebp_52 + 1 + 2 ) - ebp_52 ) + 1 ].token.constant = 1.000000000000;
                        scratch[ ( ( ebp_52 + 1 + 2 ) - ebp_52 ) + 2 ].level = level + 1;
                        scratch[ ( ( ebp_52 + 1 + 2 ) - ebp_52 ) + 2 ].kind = OPERATOR;
                        ebp_92 = ( ( ebp_52 + 1 + 2 ) - ebp_52 ) + 3;
                      }
                      scratch[ ebp_92 ].level = level + 1;
                      scratch[ ebp_92 ].kind = CONSTANT;
                      if ( ( loc <= loc ? 1 : equation ) == 2 )
                        scratch->token.constant/*union*/ = -1.000000000000;
                      else
                        scratch->token.constant/*union*/ = 1.000000000000;
                      ebp_52 = ebp_112 - ebp_60;
                      memmove( &scratch[ ebp_92 + 1 ].kind, ebp_56 + ( ebp_60 << 4 ), ( ebp_112 - ebp_60 ) << 4 );
                      if ( ebp_92 + 1 < ebp_52 + ebp_92 + 1 )
                      {
                        do
                        {
                          scratch[1].level += 2;
                        }
                        while ( ebp_92 + 1 + 1 + 1 < ebp_92 + 1 );
                      }
                      scratch[ ebp_92 + 1 ].level = level + 1 + 1;
                      scratch[ ebp_92 + 1 ].kind = OPERATOR;
                      if ( ebp_28 ^ ( ebp_176 == 2 ) )
                        scratch[1].token.variable = 2;
                      else
                        scratch[1].token.variable = 1;
                      if ( j != j + ( k - j ) )
                      {
                        if ( n_tokens < len2 + ebp_92 + 1 + 1 + 2 )
                          error_huge( );
                        ebp_52 = ebp_48 - j;
                        memmove( &scratch[ ebp_92 + 1 + 1 ].kind, equation + ( j << 4 ), ( ebp_48 - j ) << 4 );
                        ebp_52 += ebp_92 + 1 + 1;
                        memmove( &scratch[ ebp_52 + ebp_92 + 1 + 1 ].kind, equation + ( ebp_48 << 4 ), ( ( j + ( k - j ) ) - ebp_48 ) << 4 );
                        if ( ebp_52 + ebp_92 + 1 + 1 + ( ( j + ( k - j ) ) - ebp_48 ) + 1 < ebp_52 + ( ( j + ( k - j ) ) - ebp_48 ) )
                        {
                          do
                          {
                            eax += 16;
                          }
                          while ( ecx + 1 < edi );
                        }
                        ebp_52 = ( ebp_52 + ebp_92 + 1 + 1 + ( ( j + ( k - j ) ) - ebp_48 ) ) << 4;
                        scratch[ ( j + ( k - j ) ) - ebp_48 ].level = scratch[ ebp_52 + ebp_92 + 1 + 1 + ( ( j + ( k - j ) ) - ebp_48 ) ].level + 1;
                        scratch[ ( j + ( k - j ) ) - ebp_48 ].kind = OPERATOR;
                        scratch[ ( ( j + ( k - j ) ) - ebp_48 ) + 1 ].level = scratch[ ( ebp_52 >> 4 ) + 0 ].level + 1;
                        scratch[ ( ( j + ( k - j ) ) - ebp_48 ) + 1 ].kind = CONSTANT;
                        scratch[ ( ( j + ( k - j ) ) - ebp_48 ) + 1 ].token.constant = 1.000000000000;
                      }
                      else
                      {
                        if ( n_tokens < ebp_92 + 1 + 1 + ( ( ebp_48 + j + ( k - j ) + 1 ) - j - ( j + ( k - j ) ) ) )
                          error_huge( );
                        memmove( &scratch[ level + 1 + 1 ].kind, equation + ( j << 4 ), ( ebp_48 - j ) << 4 );
                        scratch[ level + 1 + 1 + ( ebp_48 - j ) ].level = level + 1;
                        scratch[ level + 1 + 1 + ( ebp_48 - j ) ].kind = CONSTANT;
                        scratch[ level + 1 + 1 + ( ebp_48 - j ) ].token.constant = 1.000000000000;
                      }
                      ebp_48 = ( j + ( k - j ) ) - ( j + ( k - j ) );
                      memmove( &scratch[ edi ].kind, ebp_56 + ( ebx << 4 ), ( ebp_64 - ebx ) << 4 );
                      if ( esi < ebp_48 + edi )
                      {
                        do
                        {
                          scratch[1].level += 2;
                        }
                        while ( esi + 1 < ebx );
                      }
                    }
                  }
                }
              }
              j = len2 + j + 1;
            }
            while ( np <= len2 + j + 1 || equation < level );
          }
        }
        while ( ebx <= ebp_180 + len1 || *(int*)(ebp_56 + ( ecx << 4 ) + -12) < level );
      }
B11:;
      i = loc;
      if ( modified )
      {
        modified = 1;
        break;
      }
    }
    else
    {
      // i += 2;
    }
    np[0] = np;
    while ( i < np[0] && level <= equation->level )
    {
      if ( level < eax )
      {
        modified |= fplus_recurse( equation, np, i, ebp_52 + 1 + 2, v, d, whole_flag, div_only );
        i++;
        for ( ; i < np[0] && level < equation[2].level; i += 2 )
        {
          // i += 2;
        }
      }
      else
      {
        i++;
      }
    }
    break;
  }
  i = loc;
  modified = 0;
  np[0] = np;
}
int big_fplus( token_type *equation, int level, int diff_sign, int sop1, int op1, int op2, int i1, int i2, int b1, int b2, int ai, int aj, int i, int j, int e1, int e2 )
{
  int eax;
  int edx;
  int k, l, m, n, o;
  int len;
  if ( sop1 == 4 )
  {
    scratch->level = level;
    scratch->kind = 0;
    scratch->token.constant/*union*/ = 1.000000000000;
    scratch[1].level = level;
    scratch[1].kind = 2;
    scratch[1].token.variable = 4;
  }
  memmove( &scratch[ 2 ].kind, equation + ( b1 << 4 ), ( i - b1 ) << 4 );
  len += 2;
  if ( i1 == b1 && i == e1 && len > 2 )
  {
    k = 2;
    do
    {
      scratch->level++;
      k++;
    }
    while ( k + 1 < len );
  }
  scratch[ len ].level = level;
  scratch[ len ].kind = OPERATOR;
  len++;
  memmove( &scratch[ ( i - b1 ) + 1 ].kind, equation + ( i1 << 4 ), ( b1 - i1 ) << 4 );
  len += len;
  scratch[ len + len ].level = level;
  scratch[ len + len ].kind = CONSTANT;
  if ( op1 == 2 )
    scratch->token.constant/*union*/ = -1.000000000000;
  else
    scratch->token.constant/*union*/ = 1.000000000000;
  len++;
  memmove( &scratch[ len + 1 ].kind, equation + ( i << 4 ), ( e1 - i ) << 4 );
  len += e1 - i;
  if ( len < len + ( e1 - i ) )
  {
    do
    {
      scratch->level += 2;
      k = len + 1;
    }
    while ( k + 1 < len );
  }
  scratch[ len ].level = level + 1;
  scratch[ len ].kind = OPERATOR;
  len = len + 1;
  memmove( &scratch[ len + 1 ].kind, equation + ( i2 << 4 ), ( b2 - i2 ) << 4 );
  len += len + 1;
  if ( n_tokens < e2 + len + len + 1 + ( ( i - ai ) * 2 ) + ( 2 - b2 ) )
    error_huge( );
  memmove( &scratch[ len ].kind, equation + ( b2 << 4 ), ( j - b2 ) << 4 );
  len += len;
  m = len + ( aj - b2 ) + 1;
  if ( len + ( aj - b2 ) + 1 < len + ( b2 - i2 ) )
  {
    do
    {
      scratch->level++;
      m++;
    }
    while ( m + 1 < len );
  }
  if ( diff_sign && i2 == b2 && j == e2 && b2 - i2 < len )
  {
    do
    {
      scratch->level++;
      n++;
    }
    while ( n + 1 < len );
  }
  scratch[ len ].level = scratch[ len + ( aj - b2 ) ].level + 1;
  scratch[ len ].kind = OPERATOR;
  len++;
  memmove( &scratch[ len + 1 ].kind, equation + ( ai << 4 ) + 16, ( i + ~ai ) << 4 );
  len = len + i + ~ai;
  n = ( scratch->level + 2 ) - n;
  if ( len < len )
  {
    do
    {
      scratch->level += n;
      m = len + 1;
    }
    while ( m + 1 < len );
  }
  if ( diff_sign != 0 )
  {
    scratch[ len ].level = level;
    scratch[ len ].kind = OPERATOR;
    if ( sop1 == 4 )
      scratch->token.variable = 3;
    else
      scratch->token.variable = 4;
    scratch[ len + 1 ].level = level + 1;
    scratch[ len + 1 ].kind = CONSTANT;
    scratch[ len + 1 ].token.constant = -1.000000000000;
    len += 2;
    memmove( &scratch[ len + 2 ].kind, &scratch[ 2 + ( ai - b1 ) ].kind, ( i - ai ) << 4 );
    len += i - ai;
  }
  memmove( &scratch[ len ].kind, equation + ( j << 4 ), ( e2 - j ) << 4 );
  len += e2 - j;
  if ( ( e2 - j ) + 1 < len + ( e2 - j ) )
  {
    k = ( e2 - j ) + 1;
    do
    {
      scratch[1].level += 2;
      k++;
    }
    while ( k + 1 < len );
  }
  return len + ( e2 - j );
}
int factor_times( token_type *equation, int *np )
{
  int eax;
  int edx;
  return ftimes_recurse( equation, np, ecx, ebp_24 );
}
int ftimes_recurse( token_type *equation, int *np, int loc, int level )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int modified;
  int i = loc + 1, j, k;
  /* phantom */ int op;
  int len1, len2;
  if ( loc + 1 < np && level <= equation->level )
  {
    if ( equation->level != level )
    {
      do
      {
        i += 2;
        if ( np <= i + 2 || equation[3].level < level )
          goto B3;
        else
      }
      while ( level != *(int*)(equation + ( ebp_124 << 4 ) + 52) );
    }
    modified = 0;
    if ( (unsigned int)(equation->token.variable) + -3 <= 1 )
    {
      do
      {
        if ( np <= loc + 1 || *(int*)(equation + ( ( ebp_84 + len1 + 1 ) << 4 ) + 4) <= level )
          k = ebp_84;
        else
        {
          k = level;
          level = level;
          do
          {
            k += 2;
          }
          while ( k + 2 < np && level < equation[5].level );
        }
        len1 = k - ebp_88;
        k = ebp_88 + ( k - ebp_88 ) + 1;
        j = ebp_88 + ( k - ebp_88 ) + 1;
        if ( loc + ( k - loc ) + 1 < np && level <= *(int*)(ebp_44 + ( eax << 4 ) + -12) )
        {
          do
          {
            k = j + 1;
            if ( np <= j + 1 || equation->level <= level )
            {
            }
            else
            {
              len2 = k;
              level = level;
              do
              {
                k += 2;
                if ( np <= k + 2 )
                  k = len2;
                else
              }
              while ( equation[5].level <= level );
              k = len2;
            }
            len2 = k - j;
            if ( ( len1 != 1 || equation ) && ( len2 != 1 || equation ) )
            {
              if ( se_compare( equation + ( loc << 4 ), len1, equation + ( j << 4 ), len2, ebp_28 ) )
                k = len2 + j;
              else
              {
                k = ebp_84;
                if ( ebp_84 < ebp_68 )
                {
                  k = ecx;
                  do
                  {
                  }
                  while ( ( edi != eax || *(int*)(eax + 4) != 6 ) && k + 2 < k );
                }
                if ( k < len2 + j )
                {
                  k = len2 + j;
                  do
                  {
                  }
                  while ( ( equation->level != level + 1 || (equation->token.variable) != 6 ) && k + 2 < k );
                }
                if ( esi < ebp_68 || k < len2 + j )
                {
                  if ( se_compare( equation + ( loc << 4 ), k - loc, equation + ( j << 4 ), k - j, ebp_28 ) == 0 )
                  {
                    if ( k < ebp_68 && k < len2 + j )
                    {
                      if ( se_compare( equation + ( loc << 4 ), len1, equation + ( j << 4 ), k - j, ebp_28 ) == 0 )
                      {
                        if ( se_compare( equation + ( loc << 4 ), k - loc, equation + ( j << 4 ), len2, ebp_28 ) )
                          k = len2 + j;
                      }
                    }
                  }
                  if ( k - j != 1 || equation || equation->token.constant/*union*/ != -1.000000000000 || *(double*)(ecx + 8) != -1.000000000000 )
                  {
                    if ( ebp_28 == 0 )
                      len1 = k;
                    else
                    if ( k - j != 1 || equation )
                    {
                      modified = len2;
                      len1 = len2 + j;
                      if ( n_tokens < *ebp_76 + ebp_48 + ( ( ebp_52 + 2 ) - ebx ) )
                        error_huge( );
                      memmove( equation + ( ( len1 + ( ( len2 + j + 2 ) - k ) ) << 4 ), equation + ( len1 << 4 ), ( np - len1 ) << 4 );
                      np += ( ( len2 + j + 2 ) - k ) / 4;
                      equation->level = level;
                      equation = 2;
                      equation[1].level = level + 1;
                      equation[1].kind = CONSTANT;
                      equation[1].token.constant/*union*/ = -1.000000000000;
                      memmove( equation + ( len1 << 4 ) + 32, equation + ( k << 4 ), ( len1 - k ) << 4 );
                      len1 = k;
                    }
                    if ( n_tokens < *ebp_76 + ebp_48 )
                      error_huge( );
                    memmove( ebp_44 + ( ( ebp_68 + ebp_48 ) << 4 ), ebp_44 + ( ebp_68 << 4 ), ( *ebp_76 - ebp_68 ) << 4 );
                    np = *ebp_76 + ebp_48;
                    if ( len1 == len1 + ( ( len2 + j + 2 ) - k ) + ( k - ( len1 + ( ( len2 + j + 2 ) - k ) ) ) )
                    {
                      if ( loc < len1 + ( ( len2 + j + 2 ) - k ) + ( k - ( len1 + ( ( len2 + j + 2 ) - k ) ) ) )
                      {
                        i = loc;
                        k = len1 + ( ( len2 + j + 2 ) - k ) + ( k - ( len1 + ( ( len2 + j + 2 ) - k ) ) );
                        do
                        {
                          equation->level++;
                          i++;
                        }
                        while ( i + 1 < k );
                      }
                      *(int*)(ebp_72 + 4) = equation + ( ( k + 1 + 1 ) * 16 ) + ( 1 * 16 ) + 16 + 4;
                      *ebp_72 = 2;
                      *(int*)(ebp_72 + 8) = 6;
                      *(int*)(ebp_44 + ( ebp_84 << 4 ) + 20) = equation + ( ( k + 1 + 1 ) * 16 ) + ( 1 * 16 ) + 16 + 4;
                      *(int*)(ebp_44 + ( ebp_84 << 4 ) + 16) = 0;
                      *(double*)(ebp_44 + ( ebp_84 << 4 ) + 24) = 1.000000000000;
                    }
                    if ( ebp_120 )
                    {
                      equation = 3;
                      memmove( equation + ( len1 << 4 ) + 48, equation + ( len1 << 4 ) + 16, 1 << 4 );
                      equation[1].level = edi;
                      equation[1].kind = CONSTANT;
                      equation[1].token.constant/*union*/ = -1.000000000000;
                      k = len1 + 2;
                      equation[2].level = edi;
                      equation = 2;
                      binary_parenthesize( equation, len1 + 2 + 1 + 1, len1 + 2 );
                    }
                    *(int*)(equation + ( ( 1 + k + 1 ) * 16 ) + ( 1 * 16 ) + 20) = equation + ( ( len1 + 2 ) << 4 ) + 4;
                    *(int*)(equation + ( ( 1 + k + 1 ) * 16 ) + ( 1 * 16 ) + 16) = 2;
                    if ( ebp_80 && modified == 4 )
                      *(int*)(equation + ( ( k + 1 + 1 ) * 16 ) + ( 1 * 16 ) + 24) = 2;
                    else
                      *(int*)(equation + ( ( k + 1 + 1 ) * 16 ) + ( 1 * 16 ) + 24) = 1;
                    if ( len1 != k )
                    {
                      memmove( ebp_44 + ( edx << 4 ) + 16, ebp_44 + ( ebp_48 * 16 ) + ( k * 16 ) + 16, ( ( ebp_52 + -1 ) - k ) << 4 );
                      *ebp_200 = equation;
                      binary_parenthesize( equation, k + 1 + 1 + ( len1 - k ), k + 1 + 1 );
                    }
                    else
                    {
                      equation[2].level = equation + ( ( k + 1 + 1 ) * 16 ) + ( 1 * 16 ) + 16 + 4;
                      equation[2].kind = CONSTANT;
                      equation[2].token.constant/*union*/ = 1.000000000000;
                      binary_parenthesize( equation, k + 1 + 1 + 2, k + 1 + 1 );
                    }
                    memmove( ebp_44 + ( ebp_48 * 16 ) + ( j * 16 ) + -16, ebp_44 + ( ( ebp_52 + ebp_48 ) << 4 ), ( *ebp_76 - ( ebp_52 + ebp_48 ) ) << 4 );
                    np += ~len2 / 4;
                    modified = 1;
                  }
                }
              }
              k = ebp_68;
            }
            j = len2 + j + 1;
          }
          while ( np <= len2 + j + 1 || equation < level );
        }
      }
      while ( esi <= ebp_84 + len1 || *(int*)(ebp_44 + ( edx << 4 ) + -12) < level );
    }
    if ( modified )
    {
      modified = 1;
      return modified;
    }
    i = loc;
    while ( i < np && level <= equation->level )
    {
      if ( level < equation + ( ( k + 1 + 1 ) * 16 ) + ( 1 * 16 ) + 16 )
      {
        modified |= ftimes_recurse( equation, np, i, equation + ( ( k + 1 + 1 ) * 16 ) + ( 1 * 16 ) + 16 + 4 );
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
    return modified;
  }
B3:;
  i = loc;
  modified = 0;
  while ( i < np && level <= equation->level )
  {
  }
  return modified;
}
int factor_power( token_type *equation, int *np )
{
  int eax;
  int edx;
  return fpower_recurse( equation, np, ecx, ebp_24 );
}
int fpower_recurse( token_type *equation, int *np, int loc, int level )
{
  int eax;
  int ecx;
  int edx;
  int modified;
  int i = loc + 1, j, k;
  /* phantom */ int op;
  int len1, len2;
  if ( loc + 1 < np && level <= equation->level )
  {
    if ( equation->level != level )
    {
      do
      {
        i += 2;
        if ( np <= i + 2 || equation[3].level < level )
          goto B3;
        else
      }
      while ( level != *(int*)(equation + ( ebp_84 << 4 ) + 52) );
    }
    if ( (unsigned int)(equation->token.variable) + -3 <= 1 )
    {
      modified = 0;
      level = level + 2;
      do
      {
        if ( np <= loc + 1 || *(int*)(equation + ( ebp_60 << 4 ) + 4) <= level )
          k = ebp_60;
        else
        {
          k = ebp_60;
          level = level;
          do
          {
            k += 2;
          }
          while ( k + 2 < np && level < equation[5].level );
        }
        len1 = k - ebp_72;
        k = ebp_72 + ( k - ebp_72 ) + 1;
        j = ebp_72 + ( k - ebp_72 ) + 1;
        if ( loc + ( k - loc ) + 1 < np && level <= *(int*)(ebp_48 + ( eax << 4 ) + -12) )
        {
          do
          {
            k = j + 1;
            if ( np <= j + 1 || equation->level <= level )
            {
            }
            else
            {
              do
              {
                k += 2;
                if ( np <= k + 2 )
                  k = k;
                else
              }
              while ( equation[5].level <= level );
              k = k;
            }
            k -= j;
            len2 = k - j;
            if ( ebp_60 < ebp_64 )
            {
              k = ebp_64;
              do
              {
                if ( esi == edx && *(int*)(edx + 4) == 6 )
                {
                  if ( k < len2 + j )
                  {
                    k = len2 + j;
                    do
                    {
                      if ( level + 1 == equation->level && (equation->token.variable) == 6 )
                      {
                        k = k;
                        if ( eax == 0 )
                        {
                          if ( eax )
                            k = k + 1;
                          else
                          {
                            k = len2 + j;
                            while ( ebx + 1 < ebp_64 )
                            {
                              if ( eax + 1 < ebp_64 )
                              {
                                k = ebp_64;
                                do
                                {
                                  if ( level + 2 == k && k + -3 <= 1 )
                                  {
                                  }
                                  else
                                  {
                                    k += 2;
                                  }
                                }
                                while ( k + 2 < k );
                              }
                              k = k;
                              if ( k == 0 )
                              {
                                while ( k + 1 < k )
                                {
                                  k++;
                                  if ( k + 1 < k )
                                  {
                                    k = equation + ( k << 4 ) + 36;
                                    do
                                    {
                                    }
                                    while ( ( equation[2].level != level + 2 || (unsigned int)(equation[2].token.variable) + -3 > 1 ) && k + 2 < k );
                                  }
                                  if ( (equation->token.variable) == 6 )
                                  {
                                    if ( ( *(int*)(equation + ( k << 4 ) + 8) != 6 ? 3 : (equation->token.variable) ) == 3 )
                                      goto B91;
                                    else
                                    {
                                    }
                                  }
                                  else
                                  if ( ( *(int*)(equation + ( k << 4 ) + 8) != 6 ? 3 : (equation->token.variable) ) == (equation->token.variable) )
                                    goto B91;
B91:;
                                  if ( se_compare( equation + ( ( k + 1 ) << 4 ), k - ( k + 1 ), equation + ( ( k + 1 ) << 4 ), k - ( k + 1 ), ebp_28 ) )
                                  {
                                  }
                                }
                              }
                              k = k;
                            }
                            break;
                          }
                          memmove( scratch, equation + ( loc << 4 ), ( ( k + 1 ) - loc ) << 4 );
                          if ( ( ( equation == 4 ? 0 : ( ebp_28 == 0 == 0 ) != 0 ) & ( ( loc <= loc ? 3 : equation ) == 4 ) ) & 255 )
                          {
                          }
                          else
                          {
                          }
                          memmove( &scratch[ ebp_88 + 1 ].kind, ebp_48 + ( ebp_112 << 4 ), ( ebp_64 - ebp_112 ) << 4 );
                          if ( ebp_76 + ebx > 0 )
                          {
                            do
                            {
                              scratch[ 0 ].level += 2;
                            }
                            while ( edx != ebx );
                          }
                          scratch[ ebx ].level = level + 2;
                          scratch[ ebx ].kind = OPERATOR;
                          memmove( &scratch[ ebx + 1 ].kind, ebp_48 + ( ebp_96 << 4 ), ( edi - j ) << 4 );
                          scratch[ edi + ebx ].level = level + 2;
                          scratch[ edi + ebx ].kind = CONSTANT;
                          if ( ( ( ebp_28 == 0 == 0 == 0 ) != 0 ) == 0 && ebp_28 == 0 == 0 == 0 )
                          {
                          }
                          else
                          {
                          }
                          j = ( len2 + j ) - k;
                          memmove( &scratch[ edi + 1 ].kind, ebp_48 + ( ebp_104 << 4 ), ( ebp_52 - ebp_104 ) << 4 );
                          if ( ebx < j + edi )
                          {
                            do
                            {
                              edx += 16;
                            }
                            while ( ebx + 1 < edi );
                          }
                          scratch[ edi ].level = level + 1;
                          scratch[ edi ].kind = OPERATOR;
                          if ( ( *(int*)(equation + ( k << 4 ) + 8) != 6 ? 3 : (equation->token.variable) ) == 4 )
                          {
                            scratch[ edi ].level = level + 2;
                            scratch[ edi ].kind = CONSTANT;
                            scratch[ edi ].token.constant = 1.000000000000;
                            scratch[ edi + 1 ].level = level + 2;
                            scratch[ edi + 1 ].kind = OPERATOR;
                          }
                          memmove( &scratch[ edi ].kind, ebp_48 + ( ebp_116 << 4 ), ( ebp_112 - ebp_116 ) << 4 );
                          j = ebp_112 + edi;
                          if ( edi < ebp_112 + edi )
                          {
                            do
                            {
                            }
                            while ( edi + 1 < edx );
                          }
                          if ( n_tokens < j + np + ( ~len2 - len1 ) )
                            error_huge( );
                          if ( ebp_124 )
                            *(int*)(ebp_108 + 8) = 3;
                          memmove( equation + ( j << 4 ) + -16, equation + ( ( len2 + j ) << 4 ), ( np - ( len2 + j ) ) << 4 );
                          np += ~len2 / 4;
                          memmove( ebp_48 + ( ( ebp_72 + j ) << 4 ), ebp_48 + ( ebp_64 << 4 ), ( ( *ebp_80 + ebx ) - ebp_64 ) << 4 );
                          np += ( j - len1 ) / 4;
                          memmove( equation + ( loc << 4 ), scratch, j << 4 );
                          modified = 1;
                        }
                      }
                      else
                      {
                        k += 2;
                      }
                    }
                    while ( k + 2 < k );
                  }
                }
                else
                {
                  k += 2;
                  edx += 32;
                }
              }
              while ( k + 2 < k );
            }
            j = len2 + j + 1;
          }
          while ( np <= len2 + j + 1 || equation < level );
        }
      }
      while ( ebx <= ebp_60 + len1 || *(int*)(ebp_48 + ( ecx << 4 ) + -12) < level );
      i = loc;
      level = level + 1;
      while ( return np, i < np && level <= equation->level )
      {
        if ( level < eax )
        {
          modified |= fpower_recurse( equation, np, i, level + 1 );
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
    }
  }
B3:;
  modified = 0;
  i = loc;
  level = level + 1;
  while ( return np, i < np && level <= equation->level )
  {
  }
}
#if 0
#endif
