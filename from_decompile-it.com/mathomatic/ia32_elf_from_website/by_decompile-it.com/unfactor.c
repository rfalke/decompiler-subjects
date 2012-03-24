#include "unfactor.c.h"
int uf_tsimp( token_type *equation, int *np )
{
  int rv = uf_times( equation, np );
  simp_loop( equation, np );
  for ( ; uf_times( equation, np );  )
  {
    simp_loop( equation, np );
    rv = 1;
  }
  return rv;
}
int uf_power( token_type *equation, int *np )
{
  int rv;
  organize( equation, np );
  rv = sub_ufactor( equation, np, 2 );
  if ( sub_ufactor( equation, np, 2 ) )
  {
    organize( equation, np );
  }
  return rv;
}
int uf_pplus( token_type *equation, int *np )
{
  int rv;
  organize( equation, np );
  rv = sub_ufactor( equation, np, 4 );
  if ( sub_ufactor( equation, np, 4 ) )
  {
    organize( equation, np );
  }
  return rv;
}
void uf_allpower( token_type *equation, int *np )
{
  do
  {
    organize( equation, np );
  }
  while ( sub_ufactor( equation, np, 0 ) == 0 );
  return;
}
void uf_repeat( token_type *equation, int *np )
{
  organize( equation, np );
  if ( sub_ufactor( equation, np, 6 ) )
    organize( equation, np );
  patch_root_div( equation, np );
  return;
}
void uf_repeat_always( token_type *equation, int *np )
{
  organize( equation, np );
  if ( sub_ufactor( equation, np, 8 ) )
  {
    organize( equation, np );
  }
  return;
}
void uf_simp( token_type *equation, int *np )
{
  uf_tsimp( equation, np );
  uf_power( equation, np );
  uf_repeat( equation, np );
  uf_tsimp( equation, np );
  return;
}
void uf_simp_no_repeat( token_type *equation, int *np )
{
  uf_power( equation, np );
  uf_tsimp( equation, np );
  return;
}
int ufactor( token_type *equation, int *np )
{
  int edi;
  int rv;
  uf_repeat( equation, np );
  rv = uf_times( equation, np );
  uf_allpower( equation, np );
  return rv;
}
int uf_times( token_type *equation, int *np )
{
  int eax;
  int edx;
  int i;
  int rv = 0;
  do
  {
    organize( equation, np );
    if ( partial_flag )
      reorder( equation, np );
    group_proc( equation, np );
    if ( partial_flag && np[0] > 1 )
    {
      do
      {
        if ( equation[1].token.variable == 4 && 0 >= 0 && equation[1].level <= equation->level )
        {
          do
          {
            *(int*)(equation + -12) += 0;
            if ( 0 + -1 + -1 < 0 )
            {
            }
            else
          }
          while ( *(int*)(equation + -28) < equation[1].level );
        }
      }
      while ( 0 + 2 + 3 < np[0] );
    }
    rv |= sub_ufactor( equation, np, 1 );
  }
  while ( i == 0 );
  organize( equation, np );
  return rv;
}
int sub_ufactor( token_type *equation, int *np, int ii )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  int ebp_40;
  int modified;
  int i = 1;
  int b1, e1;
  int level;
  modified = 0;
  if ( np[0] > 1 )
  {
    do
    {
      if ( equation[ i ].token.constant >= 3 )
      {
        if ( equation[ i ].token.constant <= 4 )
        {
          if ( ii == 1 )
          {
          }
        }
        else
        if ( equation[ i ].token.constant != 6 || ( ii & 1 ) )
          goto B4;
        level = equation[ i + 0 ].level;
        if ( i + -2 >= 0 && level <= equation[ i + -2 ].level )
        {
          b1 = i + -2;
          do
          {
            b1 += -2;
            if ( b1 + -2 < 0 )
              i = i;
            else
          }
          while ( equation->kind < level );
          i = i;
        }
        i = i + 2;
        if ( np[0] <= i + 2 || equation[ i + 2 ].level < level )
        {
        }
        else
        {
          do
          {
            e1 += 2;
            if ( np[0] <= e1 + 2 )
              i = ebp_40;
            else
          }
          while ( equation[6].level < level );
          i = ebp_40;
        }
        switch ( equation[ i ].token.constant )
        {
        case 6:
          if ( ( ii == 2 || ( ( ii == 0 ) & 255 ) ) && b1 + 1 + 1 < i )
          {
            if ( equation[ ebp_40 ].level != level + 1 )
            {
              do
              {
                ebp_40 += 2;
                if ( ebp_40 < i )
                  continue;
              }
              while ( equation[ b1 + 4 + 2 + 0 ].level != level + 1 );
            }
            if ( (unsigned int)(equation[ b1 + 4 + 0 ].token.variable) + -3 <= 1 )
            {
              modified = ( e1 - i ) << 4;
              while ( ebp_84 + ebp_56 + ( ebp_40 - ebp_48 ) + 1 <= n_tokens )
              {
                memmove( &scratch[ ebp_56 ].kind, &equation[ ebp_48 ].kind, ebx << 4 );
                memmove( &scratch[ esi ].kind, ebp_36, modified );
                if ( esi < edi )
                {
                  do
                  {
                  }
                  while ( esi + 1 < edi );
                }
                if ( ebp_40 < i )
                {
                  scratch[ edi ] = equation[ ebp_40 ];
                  scratch[ edi ].level = equation[ ebp_40 ].level;
                  *(int*)(scratch[ edi ].kind + 12) = (equation[ ebp_40 + 0 ].token.variable);
                  scratch[ edi ].level += -1;
                  if ( i <= ebp_40 + 2 || ebp_72 == *(int*)(ebx + ( eax << 4 ) + 4) )
                    continue;
                  else
                  {
                    i = i;
                    do
                    {
                    }
                    while ( ebp_40 + 2 + 2 + 2 < i && esi != edx );
                  }
                }
                else
                {
                  if ( n_tokens < edi + np[0] + ( ebp_88 - ebp_60 ) )
                    error_huge( );
                  memmove( &equation[ ebp_88 + edi ].kind, &equation[ ebp_60 ].kind, ( np[0] - ebp_60 ) << 4 );
                  np[0] = edi + np[0] + ebx;
                  memmove( &equation[ ebp_88 ].kind, scratch, edi << 4 );
                  i = b1;
                  modified = 1;
                }
              }
              error_huge( );
              memmove( &scratch[ ebp_56 ].kind, &equation[ ebp_48 ].kind, ebx << 4 );
              memmove( &scratch[ esi ].kind, ebp_36, modified );
            }
          }
          if ( ( ( ii == 0 ) & 255 ) || ii == 4 )
          {
            if ( e1 <= i + 2 )
            {
            }
            else
            {
              if ( equation[ i + 2 ].level != level + 1 )
              {
                ebp_40 = i + 2;
                do
                {
                  e1 += 2;
                  if ( e1 + 2 < e1 )
                    continue;
                }
                while ( equation[ i + 4 + 2 + 0 ].level != level + 1 );
              }
              else
                ebp_40 = i + 2;
              if ( (unsigned int)(equation[ i + 4 + 0 ].token.variable) + -1 <= 1 )
              {
                modified = level;
                while ( 0 + 1 + ( ( i + 2 ) - ( b1 + 1 ) ) + ( ebp_40 - ( ebp_40 + 1 ) ) <= n_tokens )
                {
                  memmove( &scratch[ 0 + 1 ].kind, &equation[ b1 + 1 ].kind, ( ( i + 1 ) - ( b1 + 1 ) ) << 4 );
                  if ( 0 + 1 < 0 + 1 + ( ( i + 1 ) - ( b1 + 1 ) ) )
                  {
                    do
                    {
                      scratch[1].level++;
                    }
                    while ( 0 + 1 + 1 < 0 + 1 + ( ( i + 1 ) - ( b1 + 1 ) ) );
                  }
                  memmove( &scratch[ 0 + 1 + ( ( i + 1 ) - ( b1 + 1 ) ) ].kind, &equation[ ebp_40 + 1 ].kind, ( ebp_40 - ( ebp_40 + 1 ) ) << 4 );
                  if ( ebp_40 < e1 )
                  {
                    scratch[ edi ].level = modified;
                    scratch[ edi ].kind = OPERATOR;
                    if ( equation[ ebp_40 ].token.constant == 1 )
                    {
                    }
                    else
                    {
                    }
                    e1 = ebp_40 + 2;
                    if ( ebp_40 + 2 < e1 && equation[ e1 ].level != ebp_40 + 1 + ( ebp_40 - ( ( i + 2 ) - ( b1 + 1 ) ) ) + ( ( ( i + 1 ) - ( b1 + 1 ) ) << 4 ) + 1 )
                    {
                      e1 = e1;
                      do
                      {
                        e1 += 2;
                      }
                      while ( e1 + 2 < e1 && esi != edx );
                    }
                  }
                  else
                  {
                    if ( n_tokens < edi + np[0] + ( ebp_88 - ebp_60 ) )
                      error_huge( );
                    memmove( &equation[ ebp_88 + edi ].kind, &equation[ ebp_60 ].kind, ( np[0] - ebp_60 ) << 4 );
                    np[0] = edi + np[0] + ebx;
                    memmove( ebp_68, scratch, edi << 4 );
                  }
                }
                error_huge( );
                memmove( &scratch[ 0 + 1 ].kind, &equation[ b1 + 1 ].kind, ( ( i + 1 ) - ( b1 + 1 ) ) << 4 );
              }
            }
          }
          ebp_40 = ii != 8;
          if ( ( ii == 6 || !ebp_40 ) && equation[ i + 1 ].level == level && equation[ i + 1 ].kind == 0 && __finite( equation[ i + 1 + 0 ].token.constant/*union*/ ) )
          {
            if ( equation[ i + 1 + 0 ].token.constant/*union*/ < 1.000000000000 )
            {
              if ( ebp_40 )
              {
                if ( equation[ i + 1 + 0 ].token.constant/*union*/ <= 100.000000000000 )
                {
                  if ( i - ( b1 + 1 ) == 1 )
                  {
                    if ( equation[ b1 + 1 ].kind == 0 )
                      goto B159;
                  }
                  else
                  if ( i - ( b1 + 1 ) > 1 && 2.000000000000 < equation[ i + 1 + 0 ].token.constant/*union*/ )
                  {
                    do
                    {
                      equation[ i + 1 + 0 ].token.constant = rem(equation[ i + 1 + 0 ].token.constant/*union*/,1.000000000000);
                    }
                    while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(fp6,fp7) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                    if ( fp6 == fp6 )
                    {
                      if ( fp6 != fp6 )
                      {
                      }
                      else
                      {
                        if ( !fmod( equation[ i + 1 + 0 ].token.constant/*union*/, 1.000000000000 ) && fmod( equation[ i + 1 + 0 ].token.constant/*union*/, 1.000000000000 ) == 0.000000000000 )
                        {
                        }
                      }
                    }
                    else
                    {
                    }
                    fmod( equation[ i + 1 + 0 ].token.constant/*union*/, 1.000000000000 );
                  }
                }
              }
              else
              {
              }
B159:;
              if ( (double)( np[0] ) + ( ( 1.000000000000 + (double)( i - ( b1 + 1 ) ) ) * ( ceil( equation[ i + 1 + 0 ].token.constant/*union*/ ) - 1.000000000000 ) ) <= (double)( n_tokens + -10 ) )
              {
                ebp_40 = (int)( ebp_56 );
                modified = e1;
                memmove( &equation[ modified + (int)( ebp_56 ) ].kind, &equation[ ebp_60 ].kind, ( edx - modified ) << 4 );
                np[0] += ebp_64;
                equation[ i + 1 + 0 ].token.constant/*union*/ = *(double*)(edi + 8) - ebp_56;
                if ( ebp_40 > 0 )
                {
                  modified = equation[ i + 1 ].kind;
                  i = e1 << 4;
                  do
                  {
                    memmove( &equation[ modified + 1 ].kind, &equation[ b1 + 1 ].kind, ( i - ( b1 + 1 ) ) << 4 );
                  }
                  while ( ebp_40 <= 0 );
                }
                if ( modified != 1.000000000000 || modified != 1.000000000000 )
                {
                  if ( modified <= b1 + 1 )
                  {
                  }
                  else
                  {
                    b1++;
                    do
                    {
                      equation[ b1 + 1 ].level++;
                      b1++;
                    }
                    while ( b1 + 1 < modified );
                  }
                }
                else
                {
                  memmove( &equation[ i ].kind, &equation[ modified ].kind, ( np[0] - modified ) << 4 );
                  np[0] += i - modified - modified;
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
          break;
        case 3:
        case 4:
          if ( ii == 1 && b1 + 1 + 1 < e1 )
          {
            ecx = b1 + 1 + 1;
            do
            {
              if ( equation[ b1 + 1 + 1 ].level == level + 1 && equation[6].token.variable + -1 <= 1 )
              {
                if ( b1 + 1 <= b1 + 1 + 1 + -2 && level < equation[ eax ].level )
                {
                  b1++;
                  do
                  {
                    if ( eax + -2 < b1 )
                    {
                    }
                    else
                  }
                  while ( edx <= level );
                }
                if ( b1 + 1 + 1 + 2 < e1 && level < equation[ eax ].level )
                {
                  e1 = e1;
                  do
                  {
                    if ( e1 <= eax + 2 )
                    {
                    }
                    else
                  }
                  while ( edx <= level );
                }
                if ( ebp_56 <= ebp_88 || equation[ ebp_56 + -1 ].token.constant != 4 )
                {
                  modified = ebp_56 - ebp_88;
                  while ( ebp_40 = ebp_96 + modified + esi + ( ebp_36 - ebp_56 ), ebp_96 + modified + esi + ( ebp_36 - ebp_56 ) + 1 <= n_tokens )
                  {
                    memmove( &scratch[ esi ].kind, ebp_100, ebp_104 );
                    if ( esi < ebp_48 )
                    {
                      do
                      {
                      }
                      while ( esi + 1 < edx );
                    }
                    memmove( &scratch[ ebp_48 ].kind, &equation[ ebp_56 ].kind, ebp_64 << 4 );
                    memmove( &scratch[ edi ].kind, ebp_112, ebp_108 );
                    if ( edi < ebp_40 )
                    {
                      do
                      {
                      }
                      while ( edi + 1 < edx );
                    }
                    if ( ebp_36 < ebp_68 )
                    {
                      scratch[ ebp_40 ] = equation[ ebp_36 ];
                      scratch[ ebp_40 ].level = equation[ ebp_36 ].level;
                      scratch[ ebp_40 ].level += -1;
                      if ( ebp_68 <= ebp_36 + 2 || ebp_84 == *(int*)(esi + ( eax << 4 ) + 4) )
                        continue;
                      else
                      {
                        do
                        {
                        }
                        while ( eax + 2 < ebx && esi != edx );
                      }
                    }
                    else
                    {
                      if ( n_tokens < ebp_40 + np[0] + ( ( b1 + 1 ) - e1 ) )
                        error_huge( );
                      memmove( &equation[ b1 + 1 + ebp_40 ].kind, &equation[ e1 ].kind, ( np[0] - e1 ) << 4 );
                      np[0] += ebp_40 + ( ( b1 + 1 ) - e1 );
                      memmove( &equation[ b1 + 1 ].kind, scratch, ebp_40 << 4 );
                    }
                  }
                  error_huge( );
                  memmove( &scratch[ esi ].kind, ebp_100, ebp_104 );
                }
                else
                {
                }
              }
            }
            while ( ebp_60 <= ecx + 2 );
            i = i;
          }
          break;
        }
      }
B4:;
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
  return modified;
}
int unsimp_power( token_type *equation, int *np )
{
  int eax;
  int ecx;
  int edx;
  int modified = 0;
  int i;
  if ( np[0] > 1 )
  {
    do
    {
      if ( *(int*)(equation[2].kind + -8) == 6 && ( equation[2].level != *(int*)(equation[2].kind + -12) || equation[4] ) )
      {
        if ( -1 >= 0 )
        {
          if ( *(int*)(equation[2].kind + -12) <= *(int*)(equation[2].kind + -44) )
          {
            do
            {
              if ( -1 + -2 + -2 < 0 )
              {
              }
              else
            }
            while ( *(int*)(equation[2].kind + -80 + -28) < equation[2].kind );
          }
          if ( *(int*)(equation[2].kind + -80 + 4) == *(int*)(equation[2].kind + -12) + -1 && *(int*)(equation[2].kind + -80 + 8) == 4 )
          {
            if ( n_tokens < ebp_40 + 2 )
              error_huge( );
            np[0] = 3;
            if ( -1 + 3 < np[0] && *(int*)(equation[2].kind + -12) <= *(int*)(equation[2].kind + -48 + 4) )
            {
              do
              {
                *(int*)(ebx + 4) = edx + 1;
                if ( np[0] <= np[0] + 1 + 1 )
                {
                }
                else
              }
              while ( *(int*)(eax + 4) < ebp_28 );
            }
            memmove( ebx + 32, &ebx, ( edi - ebp_32 ) << 4 );
            np[0] += 2;
            *(int*)(ebx + 4) = *(int*)(equation[2].kind + -12) + 1;
            ebx = 0;
            *(double*)(ebx + 8) = -1.000000000000;
            *(int*)(ebx + 20) = *(int*)(equation[2].kind + -12) + 1;
            *(int*)(ebx + 16) = 2;
            *(int*)(ebx + 24) = 3;
            modified |= 0;
          }
        }
        modified |= 0;
      }
      i = -1 + 4;
    }
    while ( -1 + 2 + 4 < np[0] );
  }
  return modified;
}
void uf_neg_help( token_type *equation, int *np )
{
  double fp7;
  int i;
  /* phantom */ int level;
  if ( np[0] + -1 > 0 )
  {
    i = 0;
    do
    {
      if ( !equation[ i ].kind && equation[ i + 0 ].token.constant/*union*/ < 0.000000000000 && equation[ i + 1 ].level == equation[ i + 0 ].level && (unsigned int)(equation[ i + 1 + 0 ].token.variable) + -3 <= 1 )
      {
        if ( n_tokens < np[0] + 2 )
          error_huge( );
        memmove( &equation[ i + 3 ].kind, &equation[ i + 1 ].kind, ( np[0] + ~i ) << 4 );
        np[0] += 2;
        equation[ i + 0 ].token.constant/*union*/ = -( equation[ i + 0 ].token.constant/*union*/ );
        equation[ i + 1 ].level = equation[ i + 1 ].level;
        equation[ i + 1 ].kind = OPERATOR;
        i += 2;
        equation[ i + 2 ].level = equation[ i + 1 ].level;
        equation[ i + 2 ].kind = CONSTANT;
        equation[ i + 2 ].token.constant = -1.000000000000;
      }
      i += 2;
    }
    while ( i + 2 < np[0] + -1 );
  }
  return;
}
int patch_root_div( token_type *equation, int *np )
{
  double fp5;
  double fp6;
  double fp7;
  int i;
  /* phantom */ int level;
  int modified = 0;
  i = 1;
  if ( np[0] + -2 > 1 )
  {
    do
    {
      if ( equation[ i ].token.constant == 4 && equation[ i + 2 ].token.constant == 6 && equation[ i + 2 + 0 ].level == equation[ i + 0 ].level + 1 && equation[ i + 1 ].kind == 0 && equation[ i + 2 + 0 ].level == equation[3].level && equation[3].kind == 0 )
      {
        do
        {
          equation[ i + 1 + 0 ].token.constant = rem(equation[ i + 1 + 0 ].token.constant/*union*/,1.000000000000);
        }
        while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(equation[ i + 1 + 0 ].token.constant/*union*/,1.000000000000) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
        if ( equation[ i + 1 + 0 ].token.constant/*union*/ == ( rem(equation[ i + 1 + 0 ].token.constant/*union*/,1.000000000000) ) )
        {
          if ( !fp7 && fp6 == 0.000000000000 )
          {
            if ( rationalize_denominators && __finite( equation[3].token.constant/*union*/ ) )
            {
              if ( equation[3].token.constant/*union*/ < 0.000000000000 )
              {
                if ( 1.000000000000 < fp7 )
                {
                  if ( n_tokens < np[0] + 2 )
                    error_huge( );
                  equation[3].token.constant/*union*/ += 0;
                  memmove( &equation[ i + 2 ].kind, &equation[ i ].kind, ( np[0] - i ) << 4 );
                  np[0] += 2;
                  equation[ i + 1 ].level = equation[ i + 0 ].level;
                  equation[ i + 1 ].kind = CONSTANT;
                  equation[ i + 1 ].token.constant = equation[ i + 3 ].token.constant;
                  i += 2;
                  modified = 1;
                }
              }
              else
              {
              }
            }
          }
          else
          {
            equation[ i + 1 + 0 ].token.constant/*union*/ = 1.000000000000 / equation[ i + 1 + 0 ].token.constant/*union*/;
            modified = 1;
          }
        }
        else
        {
        }
        fmod( equation[ i + 1 + 0 ].token.constant/*union*/, 1.000000000000 );
      }
      i += 2;
    }
    while ( i + 2 < np[ 0 ] );
  }
  return modified;
}
#if 0
#endif
