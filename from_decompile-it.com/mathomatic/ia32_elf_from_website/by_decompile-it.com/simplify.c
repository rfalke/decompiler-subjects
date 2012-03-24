#include "simplify.c.h"
void organize( token_type *equation, int *np )
{
  int eax;
  int edx;
  if ( np[0] <= 0 || ( ( np[0] & 1 ) & 255 ) == 0 )
  {
    __printf_chk( 1, "Bad expression size = %d.\n", np[0] );
    error_bug( "Internal error: organize() called with bad expression size." );
  }
  if ( n_tokens < np[0] )
    error_bug( "Internal error: expression array overflow detected in organize()." );
  org_recurse( equation, np, 0, 1, 0 );
  return;
}
void org_up_level( token_type *bp, token_type *ep, int level, int invert )
{
  if ( invert )
  {
    if ( bp <= ep )
    {
      do
      {
        bp->level += -1;
        if ( level == bp->level + -1 && bp == 2 )
        {
          switch ( (bp->token.variable) )
          {
          case 1:
            break;
          case 4:
            break;
          case 2:
            break;
          case 3:
            break;
          }
        }
        bp++;
      }
      while ( &bp[1].kind <= ep );
    }
  }
  else
  if ( bp <= ep )
  {
    do
    {
      bp->level += -1;
      bp++;
    }
    while ( &bp[1].kind <= ep );
  }
  return;
}
int org_recurse( token_type *equation, int *np, int loc, int level, int *elocp )
{
  int eax;
  int ecx;
  int edx;
  token_type *p1, *bp = equation + ( loc << 4 ), *ep = equation + ( np << 4 );
  int op, sub_op;
  int i;
  int eloc;
  int sub_eloc;
  int min1 = equation->level;
  int invert;
  p1 = equation + ( p1 << 4 ) + 16;
  if ( equation + ( p1 << 4 ) + 16 < equation + ( np << 4 ) )
  {
    do
    {
      min1 = p1->level;
      if ( p1->level < min1 )
      {
        if ( level <= min1 )
        {
        }
        else
          break;
      }
      p1 += 2;
    }
    while ( &p1[2].kind < ep );
  }
  eloc = -1 + ( ( p1 - equation ) >> 4 );
  if ( elocp )
    elocp[0] = -1 + ( ( p1 - equation ) >> 4 );
  if ( loc == eloc )
  {
    bp->level = level + -1 <= 0 ? level + -1 : 1;
    op = 0;
  }
  else
  {
    if ( level < min1 && bp < p1 )
    {
      p1 = bp;
      do
      {
        p1->level += level - min1;
        p1++;
      }
      while ( &p1[1].kind < &p1[2].kind );
    }
    if ( p1->kind < p1 )
    {
      if ( p1->level != level )
      {
        do
        {
          p1 += 2;
          if ( &p1[2].kind < &p1[2].kind )
            continue;
        }
        while ( p1->level != level );
      }
      op = p1->token.variable;
      if ( loc <= eloc )
      {
        i = loc;
        level = level = level + 1;
        do
        {
          bp = &i;
          if ( level < equation->level )
          {
            switch ( sub_op )
            {
            default:
              if ( op + -3 <= 1 )
              {
                invert = 0;
                org_up_level( equation + ( i << 4 ), equation + ( sub_eloc << 4 ), level, invert );
              }
              break;
            case 1:
            case 2:
              if ( op + -1 <= 1 )
              {
                invert = 0;
                org_up_level( equation + ( i << 4 ), equation + ( sub_eloc << 4 ), level, invert );
              }
              break;
            }
            i = sub_eloc;
          }
          i += 2;
        }
        while ( i + 2 <= eloc );
      }
    }
    op = 0;
  }
  return op;
}
void elim_loop( token_type *equation, int *np )
{
  if ( abort_flag )
  {
    abort_flag = 0;
    __longjmp_chk( &jmp_save[0].__jmpbuf[0], 13 );
  }
  list_debug( 6, equation, np[0], 0, 0 );
  do
  {
    organize( equation, np );
  }
  while ( combine_constants( equation, np, 1 ) == 0 && elim_k( equation, np ) == 0 && simp_pp( equation, np ) == 0 );
  if ( reorder( equation, np ) )
  {
    do
    {
      organize( equation, np );
    }
    while ( elim_k( equation, np ) == 0 );
  }
  list_debug( 5, equation, np[0], 0, 0 );
  return;
}
void simp_ssub( token_type *equation, int *np, long v, double d, int power_flag, int times_flag, int fc_level )
{
  do
  {
    elim_loop( equation, np );
  }
  while ( simp2_power( equation, np ) == 0 && ( times_flag == 0 || factor_times( equation, np ) == 0 ) && elim_sign( equation, np ) == 0 && subtract_itself( equation, np ) == 0 && factor_constants( equation, np, fc_level ) == 0 && factor_divide( equation, np, v, d ) == 0 && factor_plus( equation, np, v, d ) == 0 && ( power_flag == 0 || factor_power( equation, np ) == 0 ) );
  return;
}
void simp_equation( int n )
{
  if ( n_lhs[ n ] > 0 )
  {
    simp_loop( lhs[ n ], &n_lhs[ n ] );
    if ( n_rhs[ n ] )
    {
      simp_loop( rhs[ n ], &n_rhs[ n ] );
    }
  }
  return;
}
void simp_side( token_type *equation, int *np )
{
  simp_ssub( equation, np, ebp_32, ebp_32, ebp_28, ebp_28, ebp_20 );
  return;
}
void simps_side( token_type *equation, int *np, int zsolve )
{
  elim_loop( equation, np );
  simp_constant_power( equation, np );
  do
  {
    simp_ssub( equation, np, 0, 0.000000000000, zsolve == 0, 1, 6 );
  }
  while ( super_factor( equation, np, 0 ) == 0 );
  return;
}
void simpv_side( token_type *equation, int *np, long v )
{
  int edx;
  if ( np[0] )
  {
    simp_ssub( equation, np, v, 0.000000000000, v == 0, 1, 6 );
  }
  return;
}
void factorv( token_type *equation, int *np, long v )
{
  if ( v == 3 )
  {
    approximate_complex_roots( equation, np );
    do
    {
      simp_loop( equation, np );
    }
    while ( factor_plus( equation, np, v, 0.000000000000 ) == 0 && ( v != 3 || div_imaginary( equation, np ) == 0 ) );
    return;
  }
}
void calc_simp( token_type *equation, int *np )
{
  approximate_roots = 1;
  subst_constants( equation, np );
  simp_side( equation, np );
  uf_power( equation, np );
  factorv( equation, np, 3 );
  ufactor( equation, np );
  factorv( equation, np, 3 );
  uf_simp( equation, np );
  factorv( equation, np, 3 );
  simp_side( equation, np );
  make_fractions( equation, np );
  uf_tsimp( equation, np );
  approximate_roots = 0;
  return;
}
void simp_i( token_type *equation, int *np )
{
  int i;
  int level;
  simp_loop( equation, np );
  if ( np[0] > 0 )
  {
    i = 0;
    np[0] = np;
    do
    {
      if ( equation == 1 && (equation->token.variable) == 3 )
      {
        if ( n_tokens < np[0] + 2 )
          error_huge( );
        level = equation->level + 1;
        memmove( equation + ( i << 4 ) + 32, equation + ( i << 4 ), ( np[0] - i ) << 4 );
        np[0] += 2;
        equation->level = level;
        equation = 0;
        equation->token.constant/*union*/ = -1.000000000000;
        equation[1].level = level;
        equation[1].kind = OPERATOR;
        i += 2;
        equation[2].level = level;
        equation = 0;
        equation[2].token.constant/*union*/ = 0.500000000000;
      }
      i += 2;
    }
    while ( i + 2 < np[0] );
    np[0] = np;
    equation = equation;
  }
  do
  {
    organize( equation, np );
    combine_constants( equation, np, 0 );
  }
  while ( elim_k( equation, np ) == 0 && simp_pp( equation, np ) == 0 && factor_power( equation, np ) == 0 && factor_times( equation, np ) == 0 );
  simp_loop( equation, np );
  return;
}
void simp_divide( token_type *equation, int *np )
{
  do
  {
    simp_loop( equation, np );
  }
  while ( factor_constants( equation, np, 1 ) == 0 && factor_divide( equation, np, 0, 0.000000000000 ) == 0 );
  return;
}
void simp2_divide( token_type *equation, int *np, long v, int fc_level )
{
  do
  {
    elim_loop( equation, np );
  }
  while ( simp2_power( equation, np ) == 0 && elim_sign( equation, np ) == 0 && subtract_itself( equation, np ) == 0 && factor_constants( equation, np, fc_level ) == 0 && factor_divide( equation, np, v, 0.000000000000 ) == 0 );
  return;
}
int simpb_vcmp( sort_type *p1, sort_type *p2 )
{
  int eax;
  if ( ( ( p1->v & 16383 ) != 4 ) != (unsigned char)( ( p2->v & 16383 ) == 4 ) )
  {
    if ( p2->count == p1->count )
    {
      if ( p2->v <= p1->v )
      {
        return p1->v != p2->v;
      }
    }
    else
    {
      p2->count -= p1->count;
    }
  }
  else
  {
    return 1;
  }
}
void simpb_side( token_type *equation, int *np, int uf_power_flag, int power_flag, int fc_level )
{
  int eax;
  int ecx;
  int i;
  int vc, cnt;
  long v1, last_v;
  sort_type va[1000];
  simp_loop( equation, np );
  if ( uf_power_flag )
    uf_allpower( equation, np );
  last_v = 0;
  vc = 0;
  for ( ; np > 0;  )
  {
    v1 = -1;
    cnt = 0;
    i = 0;
    while ( 1 )
    {
      if ( eax == 1 && last_v < *(int*)(eax + 8) )
      {
        if ( v1 != -1 && v1 <= v1 )
        {
          if ( v1 == v1 )
          {
            cnt++;
            v1 = v1;
            i += 2;
            if ( np <= i + 2 )
            {
              if ( v1 != -1 )
              {
                if ( v1 > 3 )
                {
                  va[ vc ].v = v1;
                  va[ vc ].count = cnt;
                  vc++;
                }
                if ( vc <= 999 )
                {
                  last_v = v1;
                  break;
                }
                else
                {
                  equation = equation;
                  np[0] = np;
                  if ( vc == 0 )
                  {
                    simp_ssub( equation, np, 5, 0.000000000000, power_flag, 1, fc_level );
                    return;
                  }
                  qsort( &va[0].v, vc, 8, &simpb_vcmp );
                  simp2_divide( equation, np, va[0].v, fc_level );
                  if ( vc > 1 )
                  {
                    i = 1;
                    cnt = equation;
                    np[0] = np[0];
                    do
                    {
                      if ( factor_divide( &cnt, np, va[ i ].v, 0.000000000000 ) )
                        simp2_divide( &cnt, np, va[ i ].v, fc_level );
                      i++;
                    }
                    while ( vc <= i + 1 );
                    np[0] = np;
                    equation = &cnt;
                  }
                  simp2_divide( equation, np, 0, fc_level );
                  i = 0;
                  if ( vc > 0 )
                  {
                    while ( 1 )
                    {
                      if ( factor_plus( equation, np, va[ i ].v, 0.000000000000 ) == 0 )
                      {
                        i++;
                        if ( vc <= i + 1 )
                          break;
                      }
                      else
                      {
                        simp2_divide( equation, np, 0, fc_level );
                      }
                    }
                  }
                  while ( factor_plus( equation, np, 5, 0.000000000000 ) == 0 )
                  {
                    simp2_divide( equation, np, 0, fc_level );
                  }
                  simp_ssub( equation, np, 5, 0.000000000000, power_flag, 1, fc_level );
                  return;
                }
              }
            }
            else
            {
              v1 = v1;
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
void simple_frac_side( token_type *equation, int *np )
{
  if ( np[0] > 0 )
  {
    do
    {
      simp_ssub( equation, np, 0, 1.000000000000, 0, 1, 5 );
    }
    while ( poly_gcd_simp( equation, np ) == 0 && uf_power( equation, np ) == 0 && super_factor( equation, np, 2 ) == 0 );
    list_debug( 2, equation, np[0], 0, 0 );
    make_fractions( equation, np );
    uf_tsimp( equation, np );
    poly_factor( equation, np, 1 );
    simpb_side( equation, np, 1, 0, 2 );
    fractions_and_group( equation, np );
  }
  return;
}
void simpa_side( token_type *equation, int *np, int quick_flag, int frac_flag )
{
  int i;
  int flag, poly_flag;
  jmp_buf save_save;
  if ( np[0] > 1 )
  {
    list_debug( 2, equation, np[0], 0, 0 );
    simpb_side( equation, np, 0, 1, 1 );
    if ( rationalize_denominators )
      rationalize( equation, np );
    unsimp_power( equation, np );
    uf_times( equation, np );
    simp_loop( equation, np );
    uf_pplus( equation, np );
    uf_repeat( equation, np );
    do
    {
      elim_loop( equation, np );
    }
    while ( mod_simp( equation, np ) == 0 );
    simp_i( equation, np );
    unsimp_power( equation, np );
    uf_times( equation, np );
    simp_ssub( equation, np, 0, 1.000000000000, 1, 1, 1 );
    unsimp_power( equation, np );
    uf_neg_help( equation, np );
    uf_times( equation, np );
    do
    {
      simp_ssub( equation, np, 0, 1.000000000000, 0, 1, 2 );
    }
    while ( poly_gcd_simp( equation, np ) == 0 && uf_power( equation, np ) == 0 && super_factor( equation, np, 2 ) == 0 );
    unsimp_power( equation, np );
    uf_times( equation, np );
    factorv( equation, np, 3 );
    uf_pplus( equation, np );
    simp_ssub( equation, np, 0, 1.000000000000, 1, 0, 1 );
    uf_times( equation, np );
    uf_pplus( equation, np );
    factorv( equation, np, 3 );
    uf_power( equation, np );
    do
    {
      simp_ssub( equation, np, 0, 1.000000000000, 0, 1, 6 );
    }
    while ( poly_gcd_simp( equation, np ) == 0 && uf_power( equation, np ) == 0 && super_factor( equation, np, 2 ) == 0 );
    partial_flag = frac_flag;
    n_tlhs = np[0];
    memmove( tlhs, equation, np[0] << 4 );
    memmove( save_save[0].__jmpbuf, jmp_save[0].__jmpbuf, 156 );
    i = _setjmp( &jmp_save[0].__jmpbuf[0] );
    if ( _setjmp( &jmp_save[0].__jmpbuf[0] ) )
    {
      memmove( jmp_save[0].__jmpbuf, save_save[0].__jmpbuf, 156 );
      if ( i == 13 )
        __longjmp_chk( &jmp_save[0].__jmpbuf[0], 13 );
      np[0] = n_tlhs;
      memmove( equation, tlhs, n_tlhs << 4 );
      if ( debug_level > 0 )
        __fprintf_chk( gfp, 1, "%s\n", "Simplify not expanding fully, due to oversized expression." );
      partial_flag = 1;
      uf_tsimp( equation, np );
    }
    else
    {
      if ( quick_flag )
        uf_tsimp( equation, np );
      else
      {
        do
        {
          uf_power( equation, np );
          uf_repeat( equation, np );
        }
        while ( uf_tsimp( equation, np ) == 0 );
      }
      memmove( jmp_save[0].__jmpbuf, save_save[0].__jmpbuf, 156 );
    }
    partial_flag = 1;
    simpb_side( equation, np, 1, 1, 2 );
    if ( debug_level > 0 )
      __fprintf_chk( gfp, 1, "%s\n", "Simplify result before applying polynomial operations:" );
    list_debug( 1, equation, np[0], 0, 0 );
    flag = 0;
    while ( 1 )
    {
      if ( poly_gcd_simp( equation, np ) )
        simpb_side( equation, np, 0, 1, 3 );
      else
      if ( flag == 0 )
        goto B74;
      else
      {
        if ( frac_flag == 0 && div_remainder( equation, np, 1, quick_flag ) )
        {
          simpb_side( equation, np, 0, 1, 3 );
          flag = 0;
        }
        else
        {
          simp_constant_power( equation, np );
          simp_ssub( equation, np, 0, 1.000000000000, 1, 1, 5 );
          unsimp_power( equation, np );
          make_fractions( equation, np );
          factor_power( equation, np );
          uf_tsimp( equation, np );
          make_fractions( equation, np );
          uf_power( equation, np );
          integer_root_simp( equation, np );
          simpb_side( equation, np, 1, 1, 3 );
          poly_factor( equation, np, 0 );
          simpb_side( equation, np, 1, frac_flag == 0, 2 );
          break;
        }
      }
B74:;
      if ( poly_factor( equation, np, 1 ) )
      {
        simpb_side( equation, np, 0, 1, 3 );
        flag = 1;
      }
      else
      {
      }
    }
  }
  return;
}
void simpa_repeat_side( token_type *equation, int *np, int quick_flag, int frac_flag )
{
  simpa_side( equation, np, quick_flag, frac_flag );
  if ( repeat_flag )
  {
    do
    {
      n_tes = np[0];
      memmove( tes, equation, np[0] << 4 );
      simpa_side( equation, np, quick_flag, frac_flag );
    }
    while ( np[0] < n_tes );
    if ( np[0] != n_tes )
    {
      np[0] = n_tes;
      memmove( equation, tes, n_tes << 4 );
    }
  }
  return;
}
int simp_loop( token_type *equation, int *np )
{
  int i;
  int rv = 0;
  while ( 1 )
  {
    elim_loop( equation, np );
    if ( simp2_power( equation, np ) )
      continue;
    else
    {
      if ( i == 0 )
      {
        if ( elim_sign( equation, np ) == 0 && subtract_itself( equation, np ) == 0 )
          break;
      }
      else
      {
        rv = 1;
      }
    }
  }
}
int simp_pp( token_type *equation, int *np )
{
  int eax;
  int ecx;
  double fp5;
  double fp6;
  double fp7;
  int i, j, k;
  int ilevel, jlevel;
  int modified = 0;
  double numerator, denominator;
  i = 1;
  if ( np[0] > 1 )
  {
    do
    {
      if ( equation[ i ].token.constant == 6 )
      {
        ilevel = equation[ i + 0 ].level;
        if ( k + 2 < np[0] )
        {
          j = k + 2;
          do
          {
            jlevel = equation[ k + 2 ].(null);
            if ( ilevel + -1 == equation[ k + 2 ].level && (equation[ k + 2 ].token.variable) == 6 )
            {
              ilevel += -1;
              if ( symb_flag == 0 )
              {
                if ( equation[ j + 1 ].level == ilevel && equation[ j + 1 ].kind == 0 )
                {
                  f_to_fraction( equation[ j + 1 + 0 ].token.constant/*union*/, &numerator, &denominator );
                  do
                  {
                    denominator = rem(denominator,2.000000000000);
                  }
                  while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(denominator,2.000000000000) ),2.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                  if ( denominator == ( rem(denominator,2.000000000000) ) )
                  {
                    if ( !( rem(denominator,2.000000000000) ) && ( rem(denominator,2.000000000000) ) == 0.000000000000 )
                    {
                      if ( j == k + 2 && equation[ i + 1 ].kind == 0 )
                      {
                        f_to_fraction( equation[ i + 1 + 0 ].token.constant/*union*/, &numerator, &denominator );
                        do
                        {
                          if ( fp7 == 0.000000000000 )
                            goto B11;
                        }
                        while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(numerator,rem(denominator,2.000000000000)) ),2.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                        if ( numerator == ( rem(numerator,2.000000000000) ) )
                        {
                        }
                        else
                        {
                        }
                        fmod( numerator, 2.000000000000 );
                      }
                    }
                  }
                  else
                  {
                  }
                  fmod( denominator, 2.000000000000 );
                }
                else
                {
                  if ( j == k + 2 && equation[ i + 1 ].kind == 0 )
                  {
                    f_to_fraction( equation[ i + 1 + 0 ].token.constant/*union*/, &numerator, &denominator );
                    do
                    {
                      if ( ( rem(numerator,2.000000000000) ) || ( rem(numerator,2.000000000000) ) )
                        goto B11;
                    }
                    while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(numerator,rem(numerator,2.000000000000)) ),2.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                    if ( numerator == ( rem(numerator,2.000000000000) ) )
                    {
                    }
                    else
                    {
                    }
                    fmod( numerator, 2.000000000000 );
                  }
                }
              }
B11:;
              equation[ i + 1 + 1 ].(null) = 3;
              if ( j < np[0] && ilevel <= equation[ i + 1 + 0 ].level )
              {
                do
                {
                  *(int*)(ecx + 4) = edx + 2;
                  k++;
                  if ( np[0] <= k + 1 )
                    j = j;
                  else
                }
                while ( equation[ j + 1 + 1 + 0 ].level < ilevel );
                j = j;
              }
              k = i + 1;
              if ( i + 1 < j )
              {
                do
                {
                  equation[ k ].level++;
                  equation[ k ].level += 16;
                  k++;
                }
                while ( k + 1 < j );
              }
              i += -2;
              modified = 1;
              break;
            }
            else
            {
            }
          }
          while ( ilevel < jlevel && j + 2 < np[0] );
        }
      }
      i += 2;
    }
    while ( i < np[0] );
  }
  return modified;
}
int integer_root_simp( token_type *equation, int *np )
{
  int eax;
  int edx;
  double fp0;
  double fp6;
  double fp7;
  int modified;
  int i = 1, j, k;
  /* phantom */ int level;
  double d1, d2;
  int root;
  modified = 0;
  if ( np[0] + -2 > 1 )
  {
    do
    {
      if ( equation[ i ].token.constant == 6 && equation[ i - 1 ].level == equation[ i + 0 ].level )
      {
        if ( equation[ i - 1 ].level == (d1 & 0xFFFFFFFF) && equation[2].token.variable == 4 && equation[ i + 3 ].level == (d1 & 0xFFFFFFFF) && equation[ i - 1 ].kind == 0 && !equation[ i + 1 ].kind && equation[ i + 3 ].kind == 0 && ( np[0] <= i + 4 || equation[ i + 4 ].level < equation[ i - 1 ].level ) )
        {
          d1 = equation[ i + 1 + 0 ].token.constant/*union*/;
          if ( 1.000000000000 <= d1 )
          {
            if ( d1 <= 50.000000000000 )
            {
              do
              {
                d1 = rem(d1,1.000000000000);
              }
              while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(d1,d1) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
              if ( d1 == ( rem(d1,1.000000000000) ) )
              {
                if ( fp6 != fp6 )
                {
                }
                else
                {
                  if ( !fmod( d1, 1.000000000000 ) && fmod( d1, 1.000000000000 ) == 0.000000000000 )
                  {
                    *(int*)(__errno_location( )) = 0;
                    pow( (int)( &(void*)equation[ i + -1 + 0 ].token.variable ), (int)( &(void*)d1 & 0xFFFFFFFF ) );
                    if ( *(int*)(__errno_location( )) == 0 )
                    {
                      if ( equation[ i + 3 + 0 ].token.constant/*union*/ <= 50.000000000000 )
                      {
                        if ( 2.000000000000 <= equation[ i + 3 + 0 ].token.constant/*union*/ )
                        {
                          root = (int)( equation[ i + 3 + 0 ].token.constant/*union*/ );
                          if ( equation[ i + 3 + 0 ].token.constant/*union*/ == (double)( root ) )
                          {
                            if ( root == fp7 )
                            {
                              if ( root > 1 )
                              {
                                if ( eax )
                                {
                                  d1 = 1.000000000000;
                                  j = 0;
                                  for ( ; j < uno; j++ )
                                  {
                                    while ( root <= ucnt[ j ] )
                                    {
                                      d1 *= unique[ j ];
                                      ucnt[ j ] -= root;
                                    }
                                    // j++;
                                  }
                                  if ( d1 != 1.000000000000 || d1 != 1.000000000000 )
                                  {
                                    if ( n_tokens < np[0] + 2 )
                                      error_huge( );
                                    equation[ i + 1 + 0 ].token.constant/*union*/ = 1.000000000000;
                                    equation[ i + -1 + 0 ].token.constant/*union*/ = multiply_out_unique( );
                                    k = i + -1;
                                    for ( ; k < i + 4; k++ )
                                    {
                                      equation[ i + -1 ].level++;
                                      // k++;
                                    }
                                    memmove( &equation[ i + 1 ].kind, &equation[ i - 1 ].kind, ( ( np[0] + 1 ) - i ) << 4 );
                                    np[0] += 2;
                                    equation[ i + 0 ].level = equation[ i - 1 ].level;
                                    equation[ i ].kind = OPERATOR;
                                    equation[ i + -1 + 0 ].level = equation[ i - 1 ].level;
                                    equation[ i - 1 ].kind = CONSTANT;
                                    equation[ i + -1 + 0 ].token.constant/*union*/ = d1;
                                    i += 2;
                                    modified = 1;
                                  }
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
                  }
                }
              }
              else
              {
              }
              fmod( d1, 1.000000000000 );
            }
          }
          else
          {
          }
        }
      }
      i += 2;
    }
    while ( i + 2 < np[0] + -2 );
  }
  return modified;
}
int simp_constant_power( token_type *equation, int *np )
{
  double fp7;
  int modified;
  int i;
  if ( symb_flag && np[0] > 1 )
  {
    modified = 0;
    do
    {
      if ( *(int*)(equation[3].kind + -24) == 6 )
      {
        if ( *(int*)(equation[3].kind + -28) == *(int*)(equation[3].kind + -44) && *(int*)(equation[3].kind + -48) == 0 && *(int*)(equation[3].kind + -12) == *(int*)(equation[3].kind + -28) + 1 && *(int*)(equation[3].kind + -16) == 0 && ( *(double*)(equation[3].kind + -8) != 1.000000000000 || *(double*)(equation[3].kind + -8) != 1.000000000000 ) && np[0] > 3 && equation[3].level == *(int*)(equation[3].kind + -12) )
        {
          if ( equation[3].token.variable == 3 )
            goto B16;
          else
          if ( equation[3].token.variable == 4 )
          {
            if ( n_tokens < np[0] + 2 )
              error_huge( );
            memmove( equation[3].kind + 32, &equation[3].kind, ( np[0] + -3 ) << 4 );
            np[0] += 2;
            equation[4].level = *(int*)(equation[3].kind + -12);
            equation[4].kind = 0;
            equation[4].token.constant/*union*/ = 1.000000000000;
          }
B16:;
          equation[5].level = *(int*)(equation[3].kind + -28);
          equation[5].token.variable = 6;
          *(int*)(equation[5].kind + -44)++;
          *(int*)(equation[5].kind + -28)++;
          modified |= 0;
        }
        modified |= 0;
      }
      i = 3;
    }
    while ( i + 2 < np[0] );
  }
  else
  {
    modified = 0;
  }
  return modified;
}
int simp2_power( token_type *equation, int *np )
{
  int eax;
  int edx;
  double fp7;
  int modified = 0;
  int i;
  if ( np[0] > 1 )
  {
    i = 1;
    do
    {
      if ( *(int*)(equation[2].kind + -8) == 6 )
      {
        if ( np[0] <= i + 1 || equation[2].level < *(int*)(equation[2].kind + -12) )
        {
        }
        else
        {
          do
          {
            if ( equation[2].level == *(int*)(equation[2].kind + -12) + 1 )
            {
              if ( equation[2].kind == 2 )
              {
              }
              else
              if ( equation[2].kind == 0 )
              {
              }
            }
            if ( np[0] <= i + 1 + 1 + 1 )
            {
            }
            else
            {
            }
          }
          while ( equation[4].level < *(int*)(equation[2].kind + -12) );
        }
        if ( 1 > 2 || equation[2] || 0.000000000000 <= equation[2].token.constant/*union*/ )
        {
          if ( -1 >= 0 )
          {
          }
          else
          {
            modified |= 0;
          }
        }
        if ( 4 >= 0 && ( ( (unsigned char)( 1 << 0 ) & 25 ) & 255 ) )
        {
          if ( n_tokens < np[0] + 2 )
            error_huge( );
          equation[ -1 ].token.constant = -( equation[ -1 ].token.constant );
          if ( i + -2 >= 0 && *(int*)(equation[2].kind + -12) <= *(int*)(equation[2].kind + -44) )
          {
            do
            {
            }
            while ( i + -2 + -1 + -1 >= 0 && edi <= edx );
          }
          if ( i + -2 + -1 + 1 < -1 )
          {
            do
            {
              eax++;
              eax += 16;
            }
            while ( edx + 1 < ebx );
          }
          memmove( &equation[ edi + 2 ].kind, &equation[ edi ].kind, ( np[0] - edi ) << 4 );
          np[0] += 2;
          *(int*)(ebx + 4) = *(int*)(equation[2].kind + -12);
          ebx = 0;
          *(double*)(ebx + 8) = 1.000000000000;
          equation[ edi + 1 ].level = *(int*)(equation[2].kind + -12);
          equation[ edi + 1 ].kind = OPERATOR;
          modified |= 0;
        }
        else
        {
          modified |= 0;
        }
      }
      i += 2;
    }
    while ( i < np[0] );
  }
  return modified;
}
int combine_constants( token_type *equation, int *np, int iflag )
{
  int eax;
  int edx;
  return const_recurse( equation, np, 0, 1, iflag );
}
int calc( int *op1p, double *k1p, int op2, double k2 )
{
  int eax;
  int esi;
  int edi;
  double fp0;
  double fp6;
  double fp7;
  int op1;
  double d, d1, d2;
  domain_check = 0;
  op1 = 0;
  op1 = 0;
  switch ( op2 )
  {
  case 1:
  case 2:
    op1p[0] = op1p;
    if ( op1 == 2 )
      d = -( k1p[0] );
    else
      d = k1p[0];
    d1 = epsilon * abs( d );
    if ( op2 == 1 )
      d += k2;
    else
      d -= k2;
    if ( abs( d ) < d1 )
      d = 0.000000000000;
    if ( op1 == 0 )
    {
      k1p[0] = d;
    }
    if ( d <= 0.000000000000 )
    {
      op1p[0] = 1;
      k1p[0] = d;
    }
    op1p[0] = 2;
    k1p[0] = -( d );
    break;
  case 3:
  case 4:
    op1 = op1 == 0 ? op1 : 3;
    if ( op2 == ( op1 == 0 ? op1 : 3 ) )
    {
      k1p[0] *= k2;
    }
    if ( op1 == 4 )
    {
      check_divide_by_zero( k1p[0] );
      k1p[0] = k2 / k1p[0];
      op1p[0] = 3;
    }
    if ( op2 == 4 )
    {
      check_divide_by_zero( k2 );
      k1p[0] /= k2;
    }
    return 1;
    break;
  case 9:
    check_divide_by_zero( k2 );
    break;
  case 5:
    if ( k2 == 0 )
      warning( "Modulo 0 encountered, might be considered undefined." );
    k1p[0] = k2 * modf( k1p[0] / k2, &d );
    if ( modulus_mode )
    {
      if ( k2 * modf( k1p[0] / k2, &d ) < 0.000000000000 )
        k1p[0] = ( k2 * modf( k1p[0] / k2, &d ) ) + abs( k2 );
      else
      {
      }
      if ( modulus_mode == 1 )
      {
        if ( k2 < 0.000000000000 )
        {
          if ( 0.000000000000 < k1p[0] )
          {
            k1p[0] += k2;
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
    break;
  case 6:
    if ( k1p[0] < 0.000000000000 )
    {
      do
      {
        k2 = rem(k2,1.000000000000);
      }
      while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(k2,k2) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
      if ( k2 == ( rem(k2,1.000000000000) ) )
      {
        if ( fp6 != fp6 )
        {
        }
        else
        {
          if ( fmod( k2, 1.000000000000 ) || fmod( k2, 1.000000000000 ) != 0.000000000000 )
          {
            return 1;
          }
        }
      }
      else
      {
      }
      fmod( k2, 1.000000000000 );
    }
    domain_check = 1;
    if ( k1p[0] )
    {
    }
    else
    if ( !0 )
    {
      if ( 1 )
      {
        warning( "0^0 encountered, might be considered indeterminate." );
        d = 1.000000000000;
        check_err( );
        if ( domain_check )
        {
          k1p[0] = d;
        }
      }
      else
      {
        if ( k2 < 0.000000000000 )
        {
          warning( "Divide by zero (0 raised to negative power)." );
          d = 0.000000000000;
        }
        else
        {
          pow( 0.000000000000, (int)( &(void*)k2 & 0xFFFFFFFF ) );
          d = 0.000000000000;
          if ( preserve_surds && approximate_roots == 0 && __finite( k2 ) )
          {
            do
            {
              if ( ( fmod( k2, 1.000000000000 ) || fmod( k2, 1.000000000000 ) ) && f_to_fraction( k1p[0], &d1, &d2 ) && f_to_fraction( d, &d1, &d2 ) == 0 )
              {
                domain_check = 0;
              }
            }
            while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(k2,1.000000000000) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
            if ( k2 == ( rem(k2,1.000000000000) ) )
            {
              if ( fp7 != fp7 )
              {
              }
              else
              {
              }
            }
            else
            {
            }
            fmod( k2, 1.000000000000 );
          }
        }
      }
    }
    else
    {
    }
    if ( !0.000000000000 )
    {
    }
    else
    {
      pow( 0.000000000000, (int)( &(void*)k2 & 0xFFFFFFFF ) );
      d = 0.000000000000;
    }
    break;
  case 7:
    d = exp( lgamma( (k1p[ 1.000000000000 >> 3 ] & 0xFFFFFFFF) ) ) * (double)( signgam );
    if ( ebx == 0 )
    {
      k1p[0] = exp( lgamma( (k1p[ 1.000000000000 >> 3 ] & 0xFFFFFFFF) ) ) * (double)( signgam );
    }
  case 0:
  case 8:
    return 0;
    break;
  }
}
int const_recurse( token_type *equation, int *np, int loc, int level, int iflag )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp6;
  double fp7;
  int loc1 = loc, old_loc;
  int const_count;
  int op;
  int modified = 0;
  double d1, d2, d3, numerator, denominator;
  complexs cv;
  complexs p;
  const_count = 0;
  do
  {
    if ( np <= loc || equation->level < level )
    {
      if ( loc - loc - loc == 1 )
      {
        equation->level = level + -1 <= 0 ? level + -1 : 1;
        break;
      }
    }
    else
    if ( level < equation->level )
    {
      modified |= const_recurse( equation, np, loc, level + 1, iflag );
      if ( np <= loc || equation->level <= level )
        continue;
      else
      {
      }
    }
    else
    {
      if ( equation == 0 )
      {
        if ( const_count == 0 )
        {
          loc1 = loc;
          const_count = 1;
        }
        else
        {
          op = equation;
          d1 = equation->token.constant/*union*/;
          d2 = equation->token.constant/*union*/;
          if ( calc( equation + ( loc1 << 4 ) + -8, &d1, op, d2 ) )
          {
            if ( op == 6 && domain_check == 0 )
            {
              if ( f_to_fraction( d2, &numerator, &denominator ) == 0 )
              {
                if ( iflag == 0 || ( preserve_surds && approximate_roots == 0 ) )
                  break;
                cv.re = d1;
                cv.im = 0.000000000000;
                p.re = d2;
                p.im = 0.000000000000;
                // memcpy( ebp_196, &p.re, 16 );
                // memcpy( ebp_212, &cv.re, 16 );
                edx = complex_pow( loc );
                if ( n_tokens < np[0] )
                  error_huge( );
                memmove( equation + ( loc1 << 4 ) + 32, equation + ( loc1 << 4 ), ( np - loc1 ) << 4 );
                np += 0;
                equation->level = level;
                equation = 0;
                equation->token.constant/*union*/ = cv.re;
                equation[1].level = level;
                equation[1].kind = OPERATOR;
                level++;
                equation->level = level + 1;
                equation = 1;
                equation[1].level = level + 1;
                equation[1].kind = OPERATOR;
                equation[2].level = level + 1;
                equation[2].kind = CONSTANT;
                equation[2].token.constant/*union*/ = cv.im;
                modified = 1;
                break;
              }
              else
              {
                *(int*)(__errno_location( )) = 0;
                pow( -( d1 ), (int)( &(void*)d2 & 0xFFFFFFFF ) );
                op = 0.000000000000;
                check_err( );
                do
                {
                  denominator = rem(denominator,2.000000000000);
                }
                while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(denominator,2.000000000000) ),2.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                if ( denominator == ( rem(denominator,2.000000000000) ) )
                {
                  if ( ( rem(denominator,2.000000000000) ) || ( rem(denominator,2.000000000000) ) )
                  {
                    do
                    {
                      if ( ( rem(numerator,2.000000000000) ) || ( rem(numerator,2.000000000000) ) )
                        op = -( op );
                      d1 = op;
                    }
                    while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(numerator,rem(denominator,2.000000000000)) ),2.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                    if ( numerator == ( rem(numerator,2.000000000000) ) )
                    {
                    }
                    else
                    {
                    }
                    fmod( numerator, 2.000000000000 );
                  }
                  else
                  {
                    if ( iflag == 0 )
                      break;
                    if ( n_tokens < np[0] )
                      error_huge( );
                    memmove( equation + ( loc1 << 4 ) + 32, equation + ( loc1 << 4 ), ( np - loc1 ) << 4 );
                    np += 0;
                    if ( d2 == 0.500000000000 && d2 == 0.500000000000 )
                    {
                      equation->level = level + 1;
                      equation = 0;
                      equation->token.constant/*union*/ = -( d1 );
                      equation[1].level = level + 1;
                      equation[1].kind = OPERATOR;
                      equation->level = level + 1;
                      equation = 0;
                      equation->token.constant/*union*/ = 0.500000000000;
                      equation[1].level = level;
                      equation[1].kind = OPERATOR;
                      equation[2].level = level;
                      equation[2].kind = VARIABLE;
                      modified = 1;
                      break;
                    }
                    else
                    {
                      equation->level = level;
                      equation = 0;
                      equation->token.constant/*union*/ = op;
                      equation[1].level = level;
                      equation[1].kind = OPERATOR;
                      level++;
                      equation->level = level + 1;
                      equation = 1;
                      equation[1].level = level + 1;
                      equation[1].kind = OPERATOR;
                      equation[2].level = level + 1;
                      equation[2].kind = CONSTANT;
                      equation[2].token.constant/*union*/ = d2 * 0.000000000000;
                      modified = 1;
                      break;
                    }
                  }
                }
                else
                {
                }
                fmod( denominator, 2.000000000000 );
              }
            }
            equation->token.constant/*union*/ = d1;
            domain_check = 0;
            memmove( equation + ( loc << 4 ) + -16, equation + ( loc << 4 ) + 16, ( np + ~loc ) << 4 );
            np = &np[0];
            loc += -2;
            modified = 1;
          }
        }
      }
      loc++;
    }
  }
  while ( np <= loc + 1 || equation[2].level <= level );
  loc++;
  if ( loc + 1 < np && level < equation[2].level )
  {
    loc++;
  }
}
int elim_k( token_type *equation, int *np )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int ebp_92;
  token_type *p1 = &equation[1], *p2, *p3, *p4;
  token_type *ep;
  int modified = 0;
  int level;
  double d, numerator, denominator;
  int flag;
  while ( ep = &equation[ np[0] ], p1 < equation[ np[0] ].kind )
  {
    if ( p1 == 2 )
    {
      if ( (unsigned int)(p1->token.variable) + -1 <= 1 )
      {
        if ( &p1[2].kind < ep && p1[2].level == (unsigned int)(d & 0xFFFFFFFF) + 1 && (unsigned int)(p1[2].token.variable) + -3 <= 1 && p1[1].kind == 0 && p1[1].token.constant/*union*/ < 0.000000000000 )
          p1[1].token.constant/*union*/ = -( p1[1].token.constant/*union*/ );
        if ( (d & 0xFFFFFFFF) == p1[1].level && p1[1].kind == 0 )
        {
          if ( p1[1].token.constant/*union*/ < 0.000000000000 )
            p1[1].token.constant/*union*/ = -( p1[1].token.constant/*union*/ );
          if ( p1[1].token.constant/*union*/ == 0 )
          {
            memmove( p1, &p1[2].kind, ep - &p1[2].kind - &p1[2].kind );
            np[0] = np[ 0 ];
            modified = 1;
          }
        }
        if ( (d & 0xFFFFFFFF) == *(int*)(p1 + -12) && *(int*)(p1 + -16) == 0 && __isinf( *(double*)(p1 + -16 + 8) ) )
        {
        }
        else
        if ( (d & 0xFFFFFFFF) == p1[1].level && p1[1].kind == 0 )
          goto B28;
B28:;
        if ( __isinf( *(double*)(p1 + -16 + 8) ) )
        {
          if ( *(int*)(p1 + -16 + 4) <= p1->level )
          {
            level = (d & 0xFFFFFFFF);
            p3 = ebp_92;
            flag = 0;
            do
            {
              if ( p3 == 0 && p3 != p1 + -16 )
              {
                flag = __finite( p3->token.constant/*union*/ ) == 0 ? flag : 1;
              }
              if ( p3 == equation )
              {
                ep = ep;
                p1 = p1;
                np[0] = np;
                do
                {
                  if ( p4 == 0 && p4 != p1 + -16 )
                  {
                  }
                  p4++;
                  if ( ep <= &p4[1].kind )
                  {
                    p1 = p1;
                    np[0] = np;
                    if ( ( __finite( p4->token.constant/*union*/ ) != 0 ? 1 : flag ) == 0 )
                    {
                      if ( ebp_92 < p1 + -16 && *(int*)(p1 + -16 + -8) == 2 )
                      {
                      }
                      memmove( p1 + -16 + 16, p4, ep - p4 - p4 );
                      np[0] -= ( p4 - ( p1 + -16 + 16 ) ) >> 4;
                      memmove( ebp_92, p1 + -16, equation[ np[0] - ( ( p4 - ( p1 + -16 + 16 ) ) >> 4 ) ].kind - ( p1 + -16 ) );
                      np[0] -= ( ( p1 + -16 ) - ebp_92 ) >> 4;
                      modified = 1;
                      break;
                    }
                  }
                  else
                  {
                  }
                }
                while ( p4->level < *(int*)(p1 + -16 + 4) );
                p1 = p1;
                np[0] = np;
              }
              else
              {
                p3 += -241;
              }
            }
            while ( p3->level < level );
            ep = ep;
            p1 = p1;
            np[0] = np;
          }
          ebp_92 += 16;
          if ( p1->level < *(int*)(p1 + -16 + 4) )
          {
          }
          else
          {
            do
            {
            }
            while ( p4->level < *(int*)(p1 + -16 + 4) );
          }
        }
      }
      switch ( (p1->token.variable) )
      {
      case 1:
        if ( (d & 0xFFFFFFFF) == *(int*)(p1 + -16 + 4) && *(int*)(p1 + -16) == 0 && *(double*)(p1 + -16 + 8) == 0 && *(double*)(p1 + -16 + 8) == 0.000000000000 )
        {
          memmove( p1 + -16, &p1[1].kind, ep - &p1[1].kind - &p1[1].kind );
          np[0] = np[ 0 ];
          modified = 1;
        }
        else
        {
          p1 += 2;
        }
        break;
      case 2:
        if ( (d & 0xFFFFFFFF) == *(int*)(p1 + -16 + 4) && *(int*)(p1 + -16) == 0 && *(double*)(p1 + -16 + 8) == 0 && *(double*)(p1 + -16 + 8) == 0.000000000000 && ( p1 == equation || *(int*)(p1 + -16 + -12) < *(int*)(p1 + -16 + 4) ) )
        {
          *(double*)(p1 + -16 + 8) = -1.000000000000;
          binary_parenthesize( equation, np[0], ( p1 - equation ) >> 4 );
          modified = 1;
        }
        break;
      case 3:
        if ( (d & 0xFFFFFFFF) == *(int*)(p1 + -16 + 4) && *(int*)(p1 + -16) == 0 )
        {
          if ( *(double*)(p1 + -16 + 8) == 0 )
          {
            if ( &p1[2].kind < ep && *(int*)(p1 + -16 + 4) <= p1[2].level )
            {
              p2 = &d & 0xFFFFFFFF;
              do
              {
                p2 += 2;
                if ( ep <= &p2[2].kind )
                {
                }
                else
                {
                  np[0] = np;
                }
              }
              while ( p2->level < *(int*)(p1 + -16 + 4) );
              np[0] = np;
            }
            memmove( p1, (int)( &(void*)(d & 0xFFFFFFFF) ), ep - (unsigned int)(d & 0xFFFFFFFF) - (unsigned int)(d & 0xFFFFFFFF) );
            np[0] -= ( (unsigned int)(d & 0xFFFFFFFF) - p1 ) >> 4;
            modified = 1;
          }
          else
          {
            *(double*)(*(double*)(p1 + -16 + 8)) = abs( *(double*)(p1 + -16 + 8) - 1.000000000000 );
            if ( epsilon <= abs( *(double*)(p1 + -16 + 8) - 1.000000000000 ) )
            {
              memmove( p1 + -16, &p1[1].kind, ep - &p1[1].kind - &p1[1].kind );
              np[0] = np[ 0 ];
              modified = 1;
            }
          }
        }
        if ( p1[1].level == (d & 0xFFFFFFFF) && p1[1].kind == 0 )
        {
          d = p1[1].token.constant/*union*/;
          if ( equation < p1 + -16 && p1[1].level <= p2->level )
          {
            for ( ; equation < p2;  )
            {
              p2 = p2->kind + -16;
              if ( p2->level < p1[1].level )
              {
              }
              else
              {
                p2 = &p2->kind;
              }
            }
          }
          if ( p2->level != p1[1].level || p2->kind )
          {
            memmove( p2->kind + 32, &p2->kind, p1 - p2->kind - p2->kind );
            p2->level = p1[1].level;
            p2->kind = 0;
            p2->token.constant/*union*/ = d;
            p2[1].level = p1[1].level;
            p2[1].kind = 2;
            p2[1].token.variable = 3;
            p1 = (unsigned char)( ( equation < p2->kind ) ^ 1 ) ? p2->kind + -16 : &equation[1];
          }
        }
        break;
      case 4:
        if ( p2->level == (d & 0xFFFFFFFF) && p2 == 0 && p2->token.constant/*union*/ == 0 )
        {
          if ( &p1[2].kind < ep && p2->level <= p1[2].level )
          {
            p2 = &d & 0xFFFFFFFF;
            do
            {
              p2 += 2;
              if ( ep <= &p2[2].kind )
              {
              }
              else
              {
                np[0] = np;
              }
            }
            while ( p2->level < p2->level );
            np[0] = np;
          }
          memmove( p1, (int)( &(void*)(d & 0xFFFFFFFF) ), ep - (unsigned int)(d & 0xFFFFFFFF) - (unsigned int)(d & 0xFFFFFFFF) );
          np[0] -= ( (unsigned int)(d & 0xFFFFFFFF) - p1 ) >> 4;
          modified = 1;
        }
        else
        {
          p2 = &p1[1].kind;
          if ( p2->level == (d & 0xFFFFFFFF) )
          {
            if ( p2 == 0 )
            {
              f_to_fraction( p2->token.constant/*union*/, &numerator, &denominator );
              check_divide_by_zero( numerator );
              p2->token.constant/*union*/ = denominator / numerator;
            }
            else
            {
              if ( p2 == 1 && ( (unsigned int)(p2->token.variable) & 16383 ) == 4 )
              {
              }
            }
          }
        }
        break;
      case 5:
      case 9:
        if ( (d & 0xFFFFFFFF) == *(int*)(p1 + -16 + 4) && *(int*)(p1 + -16) == 0 && *(double*)(p1 + -16 + 8) == 0 && *(double*)(p2->kind + 8) == 0.000000000000 )
        {
          if ( &p1[2].kind < ep && *(int*)(p1 + -16 + 4) <= *(int*)(&p1[2].kind + 4) )
          {
            p2 = &d & 0xFFFFFFFF;
            do
            {
              p2 += 2;
              if ( ep <= &p2[2].kind )
              {
              }
              else
            }
            while ( p2->level < *(int*)(p1 + -16 + 4) );
            np[0] = np;
          }
          memmove( p1, (int)( &(void*)(d & 0xFFFFFFFF) ), ep - (unsigned int)(d & 0xFFFFFFFF) - (unsigned int)(d & 0xFFFFFFFF) );
          np[0] -= ( (unsigned int)(d & 0xFFFFFFFF) - p1 ) >> 4;
          modified = 1;
        }
        break;
      case 6:
        if ( (d & 0xFFFFFFFF) == *(int*)(p1 + -16 + 4) && *(int*)(p1 + -16) == 0 && *(double*)(p1 + -16 + 8) == 1.000000000000 )
        {
          if ( &p1[2].kind < ep && *(int*)(p1 + -16 + 4) < *(int*)(&p1[2].kind + 4) )
          {
            p2 = &d & 0xFFFFFFFF;
            do
            {
              p2 += 2;
              if ( ep <= &p2[2].kind )
              {
              }
              else
              {
                np[0] = np;
              }
            }
            while ( p2->level <= *(int*)(p1 + -16 + 4) );
            np[0] = np;
          }
          memmove( p1, (int)( &(void*)(d & 0xFFFFFFFF) ), ep - (unsigned int)(d & 0xFFFFFFFF) - (unsigned int)(d & 0xFFFFFFFF) );
          np[0] -= ( (unsigned int)(d & 0xFFFFFFFF) - p1 ) >> 4;
          modified = 1;
        }
        else
        {
          if ( p1[1].level == (d & 0xFFFFFFFF) && p1[1].kind == 0 )
          {
            if ( p1[1].token.constant/*union*/ == 0.000000000000 )
            {
              if ( equation < p1 + -16 && p1[1].level < p2->level )
              {
                while ( equation < p2 )
                {
                  p2 += -241;
                  np[0] = np;
                  if ( p2->level <= p1[1].level )
                    p1 = &d & 0xFFFFFFFF;
                  else
                  {
                  }
                }
                p1 = &d & 0xFFFFFFFF;
              }
              p1[1].kind = &p1[1].kind;
              memmove( &p2->kind, &p1[1].kind, ep - ( &p1[1].kind + 16 ) - ( &p1[1].kind + 16 ) );
              np[0] -= ( &p1[1].kind - p2->kind ) >> 4;
              p2->token.constant/*union*/ = 1.000000000000;
              p1 = p2->kind + 16;
              modified = 1;
            }
            else
            {
              p1[1].token.constant = abs( p1[1].token.constant/*union*/ - 1.000000000000 );
              if ( epsilon <= abs( p1[1].token.constant/*union*/ - 1.000000000000 ) )
              {
                memmove( p1, &p1[2].kind, ep - &p1[2].kind - &p1[2].kind );
                np[0] = np[ 0 ];
                modified = 1;
              }
            }
          }
        }
        break;
      case 0:
      case 7:
      case 8:
        break;
      }
    }
    else
    {
      p1++;
    }
  }
  return modified;
}
int se_compare( token_type *p1, int n1, token_type *p2, int n2, int *diff_signp )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  int l1 = min_level( p1, n1 ), l2;
  return compare_recurse( p1, n1, l1, p2, n2, min_level( p2, n2 ), diff_signp );
}
int compare_recurse( token_type *p1, int n1, int l1, token_type *p2, int n2, int l2, int *diff_signp )
{
  int ecx;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  int ebp_50044;
  token_type *pv1, *ep1, *ep2;
  int i, j;
  int len;
  int first;
  int oc2;
  token_type *opa2[10000];
  char used[10000];
  int last_op1, op1, op2;
  int diff_op;
  double d1, c1, c2;
  double compare_epsilon = epsilon;
  diff_signp[0] = 0;
  if ( ebp_50044 == 1 && n2 == 1 )
  {
    if ( p2 == p1 )
    {
      if ( p1 == 0 )
      {
        if ( p2->token.constant/*union*/ != p1->token.constant/*union*/ || p2->token.constant/*union*/ != p1->token.constant/*union*/ )
        {
          if ( 0.000000000000 == -0.000000000000 )
            diff_signp[0] = 1;
            diff_op = 0;
            if ( 0 ^ 0 )
            {
              __stack_chk_fail( );
            }
            return 0;
          else
          {
            d1 = compare_epsilon * abs( 0.000000000000 );
            if ( compare_epsilon * abs( 0.000000000000 ) <= abs( 0.000000000000 ) )
            {
              if ( abs( 0.000000000000 ) < d1 )
                diff_signp[0] = 1;
              else
              {
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
      if ( p1 == 1 )
      {
        if ( sign_cmp_flag && ( (unsigned int)(p1->token.variable) & 16383 ) == 4 )
        {
        }
        else
        {
        }
      }
    }
  }
  else
  {
    ep2 = p2 + ( n2 << 4 );
    pv1 = &p1[1].kind;
    if ( p1 + ( ebp_50044 << 4 ) <= &p1[1].kind )
      goto B24;
    else
    {
      if ( pv1->level == l1 )
        goto B28;
      else
      {
        ep1 = p1 + ( ebp_50044 << 4 );
        do
        {
          pv1 += 2;
          if ( ep1 <= &pv1[2].kind )
            goto B24;
          else
        }
        while ( pv1->level != l1 );
      }
B28:;
      op1 = pv1->token.variable;
      pv1 = &p2[1].kind;
      if ( ep2 <= &p2[1].kind )
        goto B32;
      else
      {
        if ( pv1->level != l2 )
        {
          pv1 = pv1;
          do
          {
            pv1 += 2;
            if ( ep2 <= &pv1[2].kind )
              pv1 = &p2[1].kind;
            else
          }
          while ( pv1->level != l2 );
          pv1 = ebp_50056;
        }
        op2 = (pv1->token.variable);
        if ( (pv1->token.variable) == 0 )
        {
          if ( op1 + -3 <= 1 )
          {
            opa2[0] = p2;
            used[0] = 0;
            if ( pv1 < ep2 )
            {
              oc2 = 1;
              do
              {
                if ( pv1->level == l2 )
                {
                  pv1[1].kind = &pv1[1].kind;
                  opa2[ oc2 ] = &pv1[1].kind;
                  used[ oc2 ] = 0;
                  oc2++;
                  if ( oc2 + 1 > 9999 )
                  {
                    if ( debug_level > 0 )
                    {
                      __fprintf_chk( gfp, 1, "%s\n", "Expression too big to compare, because MAX_COMPARE_TERMS exceeded." );
                    }
                  }
                }
                pv1 += 2;
              }
              while ( &pv1[2].kind < ep2 );
              p1 = ebp_50044;
              opa2[ oc2 ] = &pv1[1].kind + 16;
              last_op1 = 0;
              first = 1;
              while ( 1 )
              {
                if ( p1 + ( ebp_50044 << 4 ) <= ebp_50044 + 16 || *(int*)(ebp_50044 + 16 + 4) <= l1 )
                  len = 1;
                else
                {
                  len = 1;
                  ep1 = p1 + ( ebp_50044 << 4 );
                  do
                  {
                    len += 2;
                    pv1 = ebp_50044 + 48;
                    if ( ep1 <= ebp_50044 + 48 )
                    {
                    }
                    else
                  }
                  while ( *(int*)(ebp_50044 + 48 + 36) <= l1 );
                }
                if ( oc2 <= 0 )
                  goto B83;
                else
                {
                  i = 0;
                  do
                  {
                    if ( used[ i ] == 0 )
                    {
                      if ( op1 <= 4 )
                      {
                        if ( ( ( 1 << op1 ) & 25 ) == 0 )
                        {
                          if ( ( ( ( 1 << op1 ) & 6 ) & 255 ) == 0 )
                            goto B99;
                          else
                          {
                            l1 = (unsigned char)( ( l1 < *(int*)(ebp_50044 + 4) ) ^ 1 ) ? l1 + 1 : l1;
                            if ( compare_recurse( ebp_50044, len, (unsigned char)( ( l1 < *(int*)(ebp_50044 + 4) ) ^ 1 ) ? l1 + 1 : l1, opa2[ i ], -1 + ( ( opa2[ i + 1 ] - opa2[ i ] ) >> 4 ), (unsigned char)( ( l2 < opa2[ i ]->level ) ^ 1 ) ? l2 + 1 : l2, &j ) )
                            {
                              if ( op1 <= 4 )
                              {
                                if ( ( ( 1 << op1 ) & 25 ) == 0 )
                                {
                                  if ( ( ( 1 << op1 ) & 6 ) & 255 )
                                  {
                                    if ( last_op1 == 2 )
                                      j = j == 0;
                                    if ( i && *(int*)(opa2[ i ] + -8) == 2 )
                                      j = j == 0;
                                    if ( first == 0 )
                                    {
                                      if ( diff_signp[0] == j )
                                        used[ i ] = 1;
                                        if ( ebp_50056 < ebp_50076 )
                                        {
                                          last_op1 = *(int*)(ebp_50056 + 8);
                                          ebp_50044 = ebp_50056 + 16;
                                          break;
                                          while ( 1 )
                                          {
                                          }
                                        }
                                        else
                                        {
                                          if ( oc2 > 0 )
                                          {
                                            i = 0;
                                            oc2 = oc2;
                                            ebp_50044 = op2 + -3;
                                            do
                                            {
                                              if ( used[0] == 0 )
                                              {
                                                if ( ebp_50044 > 1 || opa2[0]->level != l2 || opa2[0]->kind )
                                                  continue;
                                                else
                                                if ( compare_epsilon <= abs( abs( *(double*)(opa2[0] + 8) ) - 1.000000000000 ) )
                                                {
                                                  if ( opa2[0]->token.constant/*union*/ < 0.000000000000 )
                                                    diff_signp[0] ^= 1;
                                                }
                                                else
                                                {
                                                }
                                              }
                                              i++;
                                            }
                                            while ( oc2 <= i + 1 );
                                          }
                                        }
                                    }
                                    else
                                    {
                                      diff_signp[0] = j;
                                      first = 0;
                                    }
                                  }
                                }
                                else
                                  diff_signp[0] ^= j;
                              }
                              if ( j == 0 )
                                continue;
                            }
                          }
                        }
                        else
                        {
                          if ( ( opa2[ i ][ 0 ].kind == 4 ) == (unsigned char)( last_op1 == 4 ) )
                            continue;
                        }
                      }
B99:;
                      if ( (unsigned char)( last_op1 == 0 ) == (unsigned char)( i == 0 ) )
                        continue;
                    }
                    i++;
                  }
                  while ( oc2 <= i + 1 );
                }
B83:;
                if ( op1 + -3 <= 1 && l1 == *(int*)(ebp_50044 + 4) && *ebp_50044 == 0 )
                {
                  if ( compare_epsilon <= abs( abs( *(double*)(ebp_50044 + 8) ) - 1.000000000000 ) )
                  {
                    if ( *(double*)(ebp_50044 + 8) < 0.000000000000 )
                      diff_signp[0] ^= 1;
                  }
                  else
                  {
                  }
                }
              }
            }
            else
            {
              opa2[ oc2 ] = &pv1[1].kind + 16;
              last_op1 = 0;
              first = 1;
              while ( 1 )
              {
              }
            }
          }
        }
        else
        {
          switch ( op1 )
          {
          case 1:
          case 2:
            diff_op/*.1_1of4*/ = op2 + -1 > 1;
            diff_op = op2 + -1 > 1;
            break;
          default:
            diff_op/*.1_1of4*/ = op2 != op1;
            diff_op = op2 != op1;
            break;
          case 3:
          case 4:
            diff_op/*.1_1of4*/ = op2 + -3 > 1;
            diff_op = op2 + -3 > 1;
            break;
          case 0:
            if ( op2 + -3 <= 1 )
            {
              opa2[0] = p2;
              used[0] = 0;
              oc2 = 1;
            }
            break;
          }
          if ( diff_op )
          {
            if ( p1 == 0 && p1->level == l1 && op1 == 3 && compare_epsilon <= abs( abs( p1->token.constant/*union*/ ) - 1.000000000000 ) )
            {
              ebp_50044 += -2;
              p1[2].kind = &p1[2].kind;
              if ( compare_recurse( &p1[2].kind, ebp_50044, min_level( &p1[2].kind, ebp_50044 + -2 ), p2, n2, l2, diff_signp ) )
              {
                if ( p1->token.constant/*union*/ < 0.000000000000 )
                  diff_signp[0] ^= 1;
              }
            }
            else
            {
              if ( p2 == 0 && p2->level == l2 && op2 == 3 && compare_epsilon <= abs( abs( p2->token.constant/*union*/ ) - 1.000000000000 ) && compare_recurse( p1, ebp_50044, l1, &p2[2].kind, n2 + -2, min_level( &p2[2].kind, n2 + -2 ), diff_signp ) )
              {
                if ( p2->token.constant/*union*/ < 0.000000000000 )
                  diff_signp[0] ^= 1;
              }
            }
          }
          else
          {
            opa2[0] = p2;
            used[0] = 0;
            oc2 = 1;
          }
        }
      }
B32:;
      op2 = 0;
    }
B24:;
    op1 = 0;
    pv1 = &p2[1].kind;
  }
}
int elim_sign( token_type *equation, int *np )
{
  int eax;
  int ecx;
  double fp5;
  double fp6;
  double fp7;
  int i, j;
  int level;
  int modified = 0;
  /* phantom */ int op;
  double d;
  double numerator, denominator;
  i = 1;
  if ( np[0] > 1 )
  {
    do
    {
      level = equation[ i ].level;
      if ( equation[ i ].token.constant == 4 && equation[ i + 1 ].level == level )
      {
        if ( equation[ i + 1 ].kind == 1 && (equation[ i + 1 + 0 ].token.variable) == 3 )
        {
          if ( n_tokens < np[0] + 2 )
            error_huge( );
          memmove( &equation[ i + 2 ].kind, &equation[ i ].kind, ( np[0] - i ) << 4 );
          np[0] += 2;
          equation[ i + 0 ].level = equation[ i + 1 ].level;
          equation[ i ].kind = OPERATOR;
          equation[ i + 1 ].level = equation[ i + 1 ].level;
          equation[ i + 1 ].kind = CONSTANT;
          equation[ i + 1 ].token.constant = -1.000000000000;
          i += 2;
          equation[ i + 2 ].level = equation[ i + 1 ].level;
          equation[ i + 2 ].kind = OPERATOR;
          modified = 1;
        }
      }
      else
      {
        if ( equation[ i ].token.constant == 6 && equation[ i + 1 ].level == level && equation[ i + 1 ].kind == 0 )
        {
          f_to_fraction( equation[ i + 1 + 0 ].token.constant/*union*/, &numerator, &denominator );
          do
          {
            numerator = rem(numerator,2.000000000000);
          }
          while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(numerator,2.000000000000) ),2.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
          if ( numerator == ( rem(numerator,2.000000000000) ) )
          {
            if ( !( rem(numerator,2.000000000000) ) && ( rem(numerator,2.000000000000) ) == 0.000000000000 )
            {
              if ( equation[ i - 1 ].level == equation[ i + 1 ].level && equation[ i - 1 ].kind == 1 && (equation[ i + -1 + 0 ].token.variable) == 3 )
              {
                equation[ i - 1 ].kind = CONSTANT;
                equation[ i + -1 + 0 ].token.constant/*union*/ = -1.000000000000;
                equation[ i + 1 + 0 ].token.constant/*union*/ *= 0.500000000000;
                modified = 1;
              }
              else
              {
                level = i + -1;
                if ( i + -1 >= 0 )
                {
                  if ( equation[ i + 1 ].level <= equation[ i + -1 ].level )
                  {
                    j = level;
                    do
                    {
                      if ( equation[ i + 1 ].level + 1 < equation[ i + -1 ].level || equation[ i + -1 ].kind != 2 )
                      {
                        j += -1;
                        if ( j + -1 < 0 )
                          i = i;
                        else
                      }
                      else
                      {
                        i = i;
                        if ( (unsigned int)(equation[ i + -1 + 0 ].token.variable) <= 4 && ( ( (unsigned char)( 1 << *(int*)(equation[ i + -1 ].kind + 8) ) & 25 ) & 255 ) )
                        {
                          if ( level < 0 )
                          {
                          }
                        }
                      }
                    }
                    while ( equation[ i + -2 + -1 + 0 ].level < equation[ i + 1 ].level );
                    i = i;
                  }
                  if ( equation[ i + 1 ].level <= equation[ level ].level )
                  {
                    j = level;
                    do
                    {
                      if ( equation[ level ].level <= equation[ i + 1 ].level + 1 )
                      {
                        if ( equation[ level ].kind == 1 && ( (unsigned int)(equation[ level + 0 ].token.variable) & 16383 ) == 4 )
                        {
                          equation[ level ].kind = CONSTANT;
                          equation[ level + 0 ].token.constant/*union*/ = 1.000000000000;
                          modified = 1;
                        }
                        else
                        if ( equation[ level ].kind == 0 )
                        {
                          if ( equation[ level + 0 ].token.constant/*union*/ < 0.000000000000 )
                          {
                            equation[ level + 0 ].token.constant/*union*/ = -( equation[ level + 0 ].token.constant/*union*/ );
                            modified = 1;
                          }
                          else
                          {
                          }
                        }
                      }
                      j += -1;
                      if ( j + -1 < 0 )
                        i = i;
                      else
                      {
                      }
                    }
                    while ( equation[ i + -2 + -1 + 0 ].level < equation[ i + 1 ].level );
                    i = i;
                  }
                }
              }
            }
            else
            {
              if ( equation[ i - 1 ].level == level && equation[ i - 1 ].kind == 1 )
              {
                if ( (equation[ i + -1 + 0 ].token.variable) == 3 )
                {
                  do
                  {
                    equation[ i + 1 + 0 ].token.constant = rem(equation[ i + 1 + 0 ].token.constant/*union*/,4.000000000000);
                  }
                  while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(equation[ i + 1 + 0 ].token.constant/*union*/,rem(numerator,2.000000000000)) ),4.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                  if ( equation[ i + 1 + 0 ].token.constant/*union*/ == ( rem(equation[ i + 1 + 0 ].token.constant/*union*/,4.000000000000) ) )
                  {
                    if ( fp7 == 1.000000000000 && !0 )
                    {
                      equation[ i + 1 + 0 ].token.constant/*union*/ = 1.000000000000;
                      modified = 1;
                    }
                    else
                    {
                      if ( fp7 == 3.000000000000 && fp7 == 3.000000000000 )
                      {
                        equation[ i + 1 + 0 ].token.constant/*union*/ = -1.000000000000;
                        modified = 1;
                      }
                    }
                  }
                  else
                  {
                  }
                  fmod( equation[ i + 1 + 0 ].token.constant/*union*/, 4.000000000000 );
                }
                else
                {
                  if ( ( eax & 16383 ) == 4 )
                  {
                    do
                    {
                      denominator = rem(denominator,2.000000000000);
                    }
                    while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(fp5,fp6) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                    if ( denominator == ( rem(denominator,2.000000000000) ) )
                    {
                      if ( ( rem(denominator,2.000000000000) ) == 1.000000000000 )
                      {
                        do
                        {
                          numerator = rem(numerator,2.000000000000);
                        }
                        while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(numerator,rem(denominator,2.000000000000)) ),2.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                        if ( numerator == ( rem(numerator,2.000000000000) ) )
                        {
                          numerator = fp7;
                          if ( equation[ i + 1 + 0 ].token.constant != numerator || equation[ i + 1 + 0 ].token.constant != numerator )
                          {
                            equation[ i + 1 + 0 ].token.constant/*union*/ = numerator;
                            modified = 1;
                          }
                          else
                          {
                          }
                        }
                        else
                        {
                        }
                        fmod( numerator, 2.000000000000 );
                        numerator = fp7;
                      }
                    }
                    else
                    {
                    }
                    fmod( denominator, 2.000000000000 );
                  }
                }
              }
            }
          }
          else
          {
          }
          fmod( numerator, 2.000000000000 );
        }
      }
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
  return modified;
}
int div_imaginary( token_type *equation, int *np )
{
  int eax;
  int edx;
  int ebp_36;
  int i, j, k;
  int n;
  int level;
  int ilevel;
  int op;
  int iloc, biloc, eiloc;
  /* phantom */ int eloc;
  if ( np[0] > 1 )
  {
    ebp_36 = 2;
    i = 1;
    do
    {
      if ( equation[1].token.variable == 4 )
      {
        level = equation[1].level;
        if ( ebp_36 < np[0] && equation[1].level < equation[2].level )
        {
          j = ebp_36;
          iloc = -1;
          eiloc = -1;
          biloc = -1;
          op = 0;
          do
          {
            if ( equation[2].kind == 2 && equation[1].level + 1 == equation[2].level )
            {
              op = equation[2].token.variable;
              if ( iloc < 0 || eiloc >= 0 )
              {
              }
              else
                eiloc = j;
            }
            else
            if ( eax == 1 && equation[2].token.variable == 3 )
            {
              if ( iloc >= 0 )
                op = 0;
                if ( iloc >= 0 )
                  eiloc = eiloc < 0 ? eiloc : j;
                if ( iloc >= 0 && op + -1 <= 1 )
                {
                  ilevel = equation[ iloc ].level;
                  if ( equation[ iloc ].level != level + 1 )
                  {
                    ilevel = level + 2;
                    if ( ilevel == level + 2 && ( iloc <= biloc || equation[ ilevel + -1 ].token.constant == 3 ) && ( eiloc <= iloc + 1 || equation[ iloc + 1 ].level <= 1 ) )
                      ilevel = ilevel;
                  }
                  op = ~i;
                  eiloc -= biloc;
                  if ( n_tokens < np[0] + j + ~i + 7 + ( eiloc - biloc ) )
                    error_huge( );
                  ebp_36 = ( j + ~i ) << 4;
                  memmove( scratch, &equation[ i + 1 ].kind, ( j + ~i ) << 4 );
                  scratch[ op + iloc ].kind = CONSTANT;
                  scratch[ op + iloc ].token.constant = 0.000000000000;
                  if ( j + ~i > 0 )
                  {
                    j = 0;
                    do
                    {
                      scratch[ j ].level += 2;
                      j++;
                    }
                    while ( j != j + ~i );
                  }
                  scratch[ ( ebp_36 >> 4 ) + 0 ].level = level + 2;
                  scratch[ ebp_36 >> 4 ].kind = OPERATOR;
                  scratch[ j + ~i + 1 ].level = level + 2;
                  scratch[ j + ~i + 1 ].kind = CONSTANT;
                  scratch[ j + ~i + 1 ].token.constant = 2.000000000000;
                  scratch[ j + ~i + 2 ].level = level + 1;
                  scratch[ j + ~i + 2 ].kind = OPERATOR;
                  level = j + ~i + 3;
                  memmove( &scratch[ level ].kind, &equation[ biloc ].kind, eiloc << 4 );
                  n = level + eiloc;
                  if ( level < level + eiloc )
                  {
                    k = level;
                    do
                    {
                      scratch[3].level += 2;
                      k++;
                    }
                    while ( k + 1 < n );
                  }
                  scratch[ n ].level = level + 2;
                  scratch[ n ].kind = OPERATOR;
                  scratch[ n + 1 ].level = level + 2;
                  scratch[ n + 1 ].kind = CONSTANT;
                  scratch[ n + 1 ].token.constant = 2.000000000000;
                  scratch[ level + ( iloc - biloc ) ].kind = CONSTANT;
                  scratch[ level + ( iloc - biloc ) ].token.constant = 1.000000000000;
                  memmove( &equation[ iloc + 2 ].kind, &equation[ iloc ].kind, ( np[0] - iloc ) << 4 );
                  np[0] += 2;
                  ilevel++;
                  equation[ iloc + 0 ].level = ilevel + 1;
                  equation[ iloc ].kind = CONSTANT;
                  equation[ iloc + 0 ].token.constant/*union*/ = -1.000000000000;
                  equation[ iloc + 1 ].level = ilevel + 1;
                  equation[ iloc + 1 ].kind = OPERATOR;
                  equation[ iloc + 2 ].level = ilevel + 1;
                  n = equation[ ebp_36 + n + 2 ].kind;
                  memmove( &equation[ ebp_36 + n + 2 ].kind, n + 2, ( np[0] - i ) << 4 );
                  np[0] = np[0] + n + 2 + 1;
                  memmove( &equation[ i + 1 ].kind, scratch, ( n + 2 ) << 4 );
                  n = 3;
                  break;
                }
              else
              {
                biloc = j + 1;
                iloc = j;
              }
            }
            j++;
            if ( np[0] <= j + 1 )
            {
            }
            else
            {
            }
          }
          while ( equation[4].level <= level );
        }
      }
      i += 2;
      ebp_36 += 2;
    }
    while ( i < np[0] );
  }
  return 0;
}
int reorder( token_type *equation, int *np )
{
  int eax;
  int edx;
  return order_recurse( equation, np, ecx, ebp_24 );
}
int order_recurse( token_type *equation, int *np, int loc, int level )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int i, j, k = np, n;
  int op;
  int modified;
  if ( ( ( loc/*.1_1of4*/ & 1 ) & 255 ) == 0 )
  {
    i = loc;
    modified = 0;
    op = 0;
    for ( ; i < k; i++ )
    {
      if ( equation->level < level )
      {
        if ( equation == 2 )
          break;
      }
      else
      {
        if ( level < equation->level )
        {
          modified |= order_recurse( equation, &k, i, level + 1 );
          i = i + 1;
          if ( i + 1 < k && level < equation->level )
          {
            do
            {
              i++;
            }
            while ( i + 1 < k && level < equation[3].level );
          }
        }
        else
        if ( (unsigned char)( *(int*)(equation + ( i << 4 )) == 2 ) == (unsigned char)( i & 1 ) )
        {
          if ( ( *(int*)(equation + ( i << 4 )) == 2 ) & 255 )
          {
            op = op;
            if ( op )
            {
              if ( op )
              {
                if ( op >= 1 )
                {
                  if ( op > 2 )
                  {
                    if ( op <= 4 && op + -3 <= 1 )
                      goto B15;
                  }
                  else
                  if ( op + -1 > 1 )
                  {
                  }
                }
              }
              else
                i = i + 1;
            }
          }
B15:;
          i = i + 1;
        }
        // i++;
      }
    }
    if ( ( i/*.1_1of4*/ & 1 ) & 255 )
    {
      switch ( op )
      {
      default:
        j = loc + 1;
        if ( loc + 1 < i )
        {
          do
          {
            if ( level == equation->level && (equation->token.variable) == 4 )
            {
              k = j + 2;
              if ( j + 2 < i )
              {
                do
                {
                  if ( level == equation->level && (equation->token.variable) == 3 )
                  {
                    n = k + 2;
                    if ( k + 2 < i && level < equation->level )
                    {
                      i = i;
                      do
                      {
                        n += 2;
                        if ( i <= n + 2 )
                        {
                        }
                        else
                      }
                      while ( i <= level );
                    }
                    modified = n - k;
                    memmove( scratch, equation + ( k << 4 ), ( n - k ) << 4 );
                    j += modified;
                    memmove( equation + ( ( modified + j ) << 4 ), equation + ( j << 4 ), ( k - j ) << 4 );
                    memmove( equation + ( j << 4 ), scratch, ( n - k ) << 4 );
                    k += modified;
                    modified = 1;
                  }
                  else
                    k += 2;
                }
                while ( k < i );
                break;
              }
              else
                break;
            }
            else
            {
              j += 2;
              equation->level = equation + ( j << 4 ) + 4 + 32;
            }
          }
          while ( j + 2 < i );
          return modified;
        }
        else
        {
          return modified;
        }
        break;
      case 1:
      case 2:
        k = equation + ( loc << 4 );
        if ( equation == 0 && equation->token.constant/*union*/ < 0.000000000000 && ( level == equation->level || ( equation[1].level == level + 1 && (unsigned int)(equation[1].token.variable) + -3 <= 1 ) ) && loc + 1 < i )
        {
          do
          {
            if ( level == equation->level && (equation->token.variable) == 1 )
            {
              modified = j + 1;
              while ( j < k && level < equation[2].level )
              {
                j += 2;
              }
              while ( modified + 1 < k && level < equation[4].level )
              {
              }
              memmove( scratch, &k, ( ( modified + 1 + 2 ) - loc ) << 4 );
              memmove( equation + ( ( loc + ( ( modified + 1 + 2 ) - modified ) ) << 4 ), equation + ( j << 4 ), ( modified - j ) << 4 );
              memmove( &k, &scratch[ modified - loc ].kind, ( ( modified + 1 + 2 ) - modified ) << 4 );
              memmove( equation + ( ( ( modified + 1 + 2 ) - ( j - loc ) ) << 4 ), scratch, ( j - loc ) << 4 );
              modified = 1;
              break;
            }
            else
            {
              j += 2;
            }
          }
          while ( i <= j + 2 );
          return modified;
        }
        else
        {
          return modified;
        }
        break;
      }
    }
  }
  else
    modified = 0;
  error_bug( "Internal representation of expression is corrupt!" );
  return modified;
}
int rationalize( token_type *equation, int *np )
{
  int eax;
  int ecx;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  int i, j, k;
  int i1, k1;
  int div_level;
  int end_loc, neg_one_loc;
  int flag;
  int modified = 0;
  int count;
  i = 1;
  while ( i < np[0] )
  {
    if ( equation[ i ].token.constant == 4 )
    {
      div_level = equation[ i + 0 ].level;
      if ( i + 2 < np[0] && div_level < equation[ i + 2 ].level )
      {
        count = 0;
        div_level = div_level + 1;
        do
        {
          if ( div_level + 1 == equation[ i + 2 ].level )
            count++;
          end_loc += 2;
        }
        while ( np[0] <= end_loc + 2 || equation[ i + 4 ].(null) <= div_level );
        j = 0 > -1 ? -1 : end_loc;
        if ( ( 0 > -1 ? -1 : end_loc ) >= 0 && equation[ j ].level <= 1 )
        {
          j = div_level + 2;
          neg_one_loc = div_level + 2;
          while ( k = j + -2, j + -2 <= ( 0 > -1 ? -1 : end_loc ) )
          {
            if ( j < end_loc )
            {
              j += 2;
              if ( j + 2 < end_loc && equation[ j ].level != end_loc )
              {
                end_loc = end_loc;
                do
                {
                  j += 2;
                }
                while ( j + 2 < end_loc && esi != edx );
              }
            }
          }
          if ( equation[ k ].level != neg_one_loc )
          {
            flag = k;
            i1 = 0 > -1 ? -1 : end_loc;
            do
            {
              k += -2;
              if ( i1 < k + -2 )
                continue;
            }
            while ( equation[ j + -4 + -2 + 0 ].level != k );
            k = flag;
          }
          if ( (int)(equation[ j + -4 + 0 ].token.variable) < 3 )
            continue;
          else
          {
            flag = 1;
            if ( eax <= 4 )
              goto B23;
            else
            if ( eax == 6 )
              flag = 2;
B23:;
            do
            {
              if ( ( neg_one_loc == *(int*)(*(int*)(equation[ k ].level + -32 + 8)) || ( div_level + 3 == *(int*)(equation[ k ].level + -32) && flag == 1 ) ) && *(int*)(*(int*)(equation[ k ].level + -32) + 4) == 6 && i1 == *(int*)(equation[ k ].level + -32) && *(int*)(i1 + -4) == 0 )
              {
                do
                {
                  i1 = rem(i1,1.000000000000);
                }
                while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(i1,1.000000000000) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                if ( i1 == ( rem(i1,1.000000000000) ) )
                {
                  if ( fp7 == 0.500000000000 && fp6 == 0.500000000000 )
                  {
                    end_loc = end_loc;
                    if ( i + 2 < end_loc )
                    {
                      neg_one_loc = end_loc;
                      k1 = i + 2;
                      do
                      {
                        if ( (equation[ i + 2 ].token.variable) == 6 && equation[ i + 3 ].level == *(int*)(equation[ i + 2 ].token.constant + -4) && *(int*)(equation[ i + 3 ].level + -4) == 0 )
                        {
                          do
                          {
                            equation[ i + 3 ].token.constant = rem(equation[ i + 3 ].token.constant/*union*/,1.000000000000);
                          }
                          while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(fp5,fp6) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                          if ( equation[ i + 3 ].token.constant/*union*/ == ( rem(equation[ i + 3 ].token.constant/*union*/,1.000000000000) ) )
                          {
                            if ( fp7 == 0.500000000000 && !0 && k1 != k && ( neg_one_loc != *(int*)(equation[ i + 2 ].token.constant + -4) || count != 1 ) )
                            {
                              i = ecx + 2;
                            }
                          }
                          else
                          {
                          }
                          fmod( equation[ i + 3 ].token.constant/*union*/, 1.000000000000 );
                        }
                        k1 += 2;
                      }
                      while ( k1 + 2 < neg_one_loc );
                      end_loc = neg_one_loc;
                    }
                    neg_one_loc = ( 0 > -1 ? -1 : end_loc ) + 1;
                    k = ( 0 > -1 ? -1 : end_loc ) - i;
                    memmove( scratch, &equation[ i + 1 ].kind, ( ( 0 > -1 ? -1 : end_loc ) - i ) << 4 );
                    scratch->level = neg_one_loc;
                    scratch->kind = 0;
                    scratch->token.constant/*union*/ = -1.000000000000;
                    scratch[ k + 1 ].level = neg_one_loc;
                    scratch[ k + 1 ].kind = OPERATOR;
                    memmove( &scratch[ k + 2 ].kind, &equation[ neg_one_loc ].kind, ( end_loc - neg_one_loc ) << 4 );
                    if ( j - neg_one_loc > 0 )
                    {
                      k1 = 0;
                      do
                      {
                        scratch[2].level++;
                        k1++;
                      }
                      while ( k1 != j - neg_one_loc );
                    }
                    k = end_loc + ~i + 2;
                    i = ( ( end_loc + ~i ) * 2 ) + 6;
                    if ( n_tokens < np[0] + ( ( end_loc + ~i ) * 2 ) + 6 )
                      error_huge( );
                    memmove( &equation[ i + end_loc ].kind, &equation[ end_loc ].kind, ( np[0] - end_loc ) << 4 );
                    np[0] += i;
                    equation[ end_loc + 0 ].level = div_level;
                    equation[ end_loc ].kind = OPERATOR;
                    k1 = 3;
                    k1 = end_loc + 1;
                    memmove( &equation[ end_loc + 1 ].kind, scratch, k << 4 );
                    equation[ k1 + k ].level = div_level;
                    equation[ k1 + k ].kind = OPERATOR;
                    k1 = k1 + k + 1;
                    memmove( &equation[ k1 + k + 1 ].kind, scratch, k << 4 );
                    i = k1 + k1 + k;
                    modified = 1;
                    if ( debug_level > 0 )
                    {
                      __fprintf_chk( gfp, 1, "%s\n", "Square roots in denominator rationalized." );
                      modified = 1;
                    }
                  }
                }
                else
                {
                }
                fmod( i1, 1.000000000000 );
              }
              k += -2;
            }
            while ( k + -2 <= ( 0 > -1 ? -1 : end_loc ) );
          }
        }
      }
    }
    i += 2;
  }
  return modified;
}
#if 0
#endif
