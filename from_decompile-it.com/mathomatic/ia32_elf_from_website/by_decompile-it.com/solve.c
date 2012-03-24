#include "solve.c.h"
static int repeat_count;
static int last_int_var;
int solve_espace( int want, int have )
{
  int eax;
  int rv;
  if ( n_lhs[ want ] )
  {
    if ( n_rhs[ want ] )
    {
      error( "This program will only solve for a single variable or for zero." );
      n_lhs[ want ] = 0;
      n_rhs[ want ] = 0;
      rv = 0;
      __printf_chk( 1, "Solve failed.\n" );
      return rv > 0;
    }
    else
    {
      rv = solve_sub( lhs[ want ], n_lhs[ want ], lhs[ have ], &n_lhs[ have ], rhs[ have ], &n_rhs[ have ] );
    }
  }
  else
  {
    rv = eax;
  }
  n_lhs[ want ] = 0;
  n_rhs[ want ] = 0;
  if ( rv <= 0 )
  {
    __printf_chk( 1, "Solve failed.\n" );
  }
  return rv > 0;
}
int solve_sub( token_type *wantp, int wantn, token_type *leftp, int *leftnp, token_type *rightp, int *rightnp )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  int ebp_80;
  int i, j;
  int found, found_count;
  int worked;
  int diff_sign;
  int op, op_kind;
  token_type *p1, *b1, *ep;
  long v;
  int need_flip;
  int uf_flag;
  int qtries;
  int zflag;
  int zsolve;
  int inc_count;
  int zero_solved;
  double numerator, denominator;
  int success;
  repeat_count = 0;
  n_tlhs = leftnp[0];
  memmove( tlhs, leftp, leftnp[0] << 4 );
  n_trhs = rightnp[0];
  memmove( trhs, rightp, rightnp[0] << 4 );
  if ( wantn != 1 )
  {
    error( "This program will only solve for a single variable or for zero." );
    success = 0;
  }
  if ( n_tlhs <= 0 || n_trhs <= 0 )
  {
    error( "Please enter an equation or a command like \"help\"." );
    success = 0;
  }
  if ( wantp->kind == 1 )
  {
    v = wantp->token.variable;
    if ( found_var( trhs, n_trhs, wantp->token.variable ) == 0 && found_var( tlhs, n_tlhs, v ) == 0 )
    {
      error( "Variable not found." );
      success = 0;
    }
    zsolve = 0;
  }
  else
  if ( wantp->kind || wantp->token )
  {
    error( "This program will only solve for a single variable or for zero." );
    success = 0;
  }
  zsolve = 1;
  v = 0;
  uf_power( tlhs, &n_tlhs );
  uf_power( trhs, &n_trhs );
  success = 1;
  zero_solved = 0;
  inc_count = 0;
  qtries = 0;
  uf_flag = 0;
  while ( 1 )
  {
    list_debug( 2, tlhs, n_tlhs, trhs, n_trhs );
    simps_side( tlhs, &n_tlhs, zsolve );
    if ( uf_flag )
    {
      simp_loop( trhs, &n_trhs );
      uf_simp( trhs, &n_trhs );
      factorv( trhs, &n_trhs, v );
    }
    else
      simps_side( trhs, &n_trhs, zsolve );
    list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
    do
    {
      b1 = trhs;
      ep = &trhs[ n_trhs ];
      if ( zsolve )
      {
        if ( b1 < ep )
        {
          p1 = b1;
          do
          {
            if ( p1->level == 1 && p1 == 2 && (p1->token.variable) == 4 )
            {
              if ( g_of_f( 4, b1, &b1->kind, &n_trhs, tlhs, &n_tlhs ) == 0 )
              {
                success = 0;
                break;
              }
            }
            else
            {
              p1++;
            }
          }
          while ( &p1[1].kind < ep );
        }
      }
      else
      if ( b1 < ep )
      {
        op = b1;
        p1 = b1;
        op = 0;
        found_count = b1;
        do
        {
          if ( p1 == 1 && (p1->token.variable) == v )
          {
            b1 = &found_count;
            if ( op == 0 )
            {
              p1++;
              while ( p1 < ep )
              {
                if ( p1->level == 1 && p1 == 2 )
                {
                  op = (p1->token.variable);
                  if ( (int)(p1->token.variable) >= 1 )
                  {
                    if ( op <= 2 )
                      break;
                    else
                    if ( op <= 4 )
                    {
                      p1 = b1;
                      do
                      {
                        p1->level++;
                        p1++;
                      }
                      while ( &p1[1].kind < ep );
                      op = 1;
                      if ( g_of_f( op, b1, trhs, &n_trhs, tlhs, &n_tlhs ) == 0 )
                      {
                        success = 0;
                        break;
                      }
                    }
                  }
                }
                else
                {
                  p1++;
                }
              }
              b1 = &b1->kind;
              op = 1;
            }
            if ( op <= 6 && ( ( (unsigned char)( 1 << op ) & 88 ) & 255 ) )
            {
              p1 = b1;
              do
              {
                p1->level++;
                p1++;
              }
              while ( &p1[1].kind < ep );
            }
            else
              b1 = &found_count;
          }
          else
          {
            p1++;
          }
        }
        while ( &p1[1].kind < ep );
        b1 = &found_count;
      }
      if ( uf_flag )
      {
        simps_side( b1, &n_trhs, zsolve );
      }
      while ( 1 )
      {
        uf_flag = 0;
        worked = 1;
        while ( found_var( trhs, n_trhs, v ) == 0 )
        {
          if ( se_compare( wantp, 1, tlhs, n_tlhs, &diff_sign ) && diff_sign == 0 )
          {
            if ( zsolve )
            {
              while ( 1 )
              {
                list_debug( 4, tlhs, n_tlhs, trhs, n_trhs );
                uf_power( trhs, &n_trhs );
                do
                {
                  simp_ssub( trhs, &n_trhs, 0, 0.000000000000, 0, 1, 0 );
                }
                while ( uf_power( trhs, &n_trhs ) == 0 && super_factor( trhs, &n_trhs, 1 ) == 0 );
                list_debug( 3, tlhs, n_tlhs, trhs, n_trhs );
                p1 = trhs;
                ep = &trhs[ n_trhs ];
                p1 = &trhs[1];
                op = 0;
                for ( ; p1 < ep; p1 += 2 )
                {
                  if ( p1->level == 1 )
                  {
                    op = (p1->token.variable);
                    if ( (p1->token.variable) != 4 )
                    {
                      if ( op != 3 )
                        break;
                    }
                    else
                    {
                      do
                      {
                        b1 = trhs;
                        ep = &trhs[ n_trhs ];
                      }
                      while ( (p1->token.variable) != 4 );
                    }
                  }
                  // p1 += 2;
                }
                if ( op != 3 )
                {
                  if ( op != 6 || p1->level != 1 || p1 || p1->token.constant/*union*/ <= 0.000000000000 )
                    goto B159;
                  else
                  {
                    n_trhs += -2;
                  }
                }
                else
                for ( ; &p1[1].kind < ep;  )
                {
                  do
                  {
                    if ( p1 == 2 )
                    {
                      if ( p1->level == 1 )
                        break;
                    }
                    else
                    if ( p1 && ( p1 != 1 || ( (unsigned int)(p1->token.variable) & 16383 ) > 4 ) )
                    {
                      p1++;
                      for ( ; p1 < ep && p1->level > 1; p1 += 2 )
                      {
                        // p1 += 2;
                      }
                      p1[1].kind = &p1[1].kind;
                      break;
                    }
                    p1++;
                  }
                  while ( &p1[1].kind < ep );
                  memmove( p1->kind + 16, p1, ep - p1 - p1 );
                  n_trhs -= ( p1 - ( &p1[1].kind + 16 ) ) >> 4;
                  p1->kind = 0;
                  p1->token.constant/*union*/ = 1.000000000000;
                }
B159:;
                if ( debug_level <= 0 )
                {
                  list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
                  memmove( leftp, tlhs, n_tlhs << 4 );
                  leftnp[0] = n_tlhs;
                  memmove( rightp, trhs, n_trhs << 4 );
                  rightnp[0] = n_trhs;
                  break;
                }
                __fprintf_chk( gfp, 1, "%s\n", "Solve for zero completed:" );
              }
            }
            else
            if ( debug_level <= 0 )
            {
              list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
              memmove( leftp, tlhs, n_tlhs << 4 );
              leftnp[0] = n_tlhs;
              memmove( rightp, trhs, n_trhs << 4 );
              rightnp[0] = n_trhs;
              break;
            }
            __fprintf_chk( gfp, 1, "%s\n", "Solve completed:" );
          }
          else
          {
            ebp_80 = tlhs;
            ep = ebp_80 + ( n_tlhs << 4 );
            b1 = ebp_80;
            p1 = ebp_80;
            need_flip = 0;
            op = 0;
            found = 0;
            found_count = 0;
            while ( 1 )
            {
              if ( ep <= p1 || ( p1->level == 1 && p1 == 2 ) )
              {
                if ( op == 0 )
                {
                  if ( ( p1 < ep || found_count || zsolve || n_tlhs > 1 || *ebp_80 ) && ( ( p1 - b1 ) + -16 > 15 || b1 || b1->token.constant/*union*/ != 1.000000000000 || ep <= p1 || (p1->token.variable) != 4 ) )
                  {
                    if ( op == 0 )
                    {
                      if ( p1 < ep )
                      {
                        need_flip = 0;
                        do
                        {
                          if ( p1->level == 1 && p1 == 2 )
                          {
                            op = (p1->token.variable);
                            if ( (int)(p1->token.variable) >= 1 )
                            {
                              if ( op > 2 )
                                op = op <= 4 ? op : 3;
                            }
                          }
                          else
                          {
                            p1++;
                          }
                        }
                        while ( &p1[1].kind < ep );
                      }
                      op = 1;
                    }
                    if ( zsolve )
                    {
                      if ( ep <= p1 )
                      {
                        if ( op != 4 )
                        {
                          if ( ebp_80 < ep )
                          {
                            p1 = ebp_80;
                            do
                            {
                              p1->level++;
                              p1++;
                            }
                            while ( &p1[1].kind < ep );
                          }
                          b1 = ebp_80;
                          op = 1;
                        }
                      }
                      else
                      if ( op <= 4 && ( ( (unsigned char)( 1 << op ) & 22 ) & 255 ) )
                      {
                      }
                      else
                      {
                        op = (p1->token.variable);
                        b1 = &p1[1].kind;
                        found = 0;
                      }
                    }
                    else
                    {
                    }
                    if ( g_of_f( op, b1, tlhs, &n_tlhs, trhs, &n_trhs ) == 0 )
                    {
                      success = 0;
                      break;
                    }
                    list_debug( 2, tlhs, n_tlhs, trhs, n_trhs );
                    if ( uf_flag )
                      simp_loop( tlhs, &n_tlhs );
                    else
                      simps_side( tlhs, &n_tlhs, zsolve );
                    simps_side( trhs, &n_trhs, zsolve );
                    list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
                  }
                }
                else
                {
                }
                if ( ep <= p1 )
                {
                  need_flip = op != 4 ? need_flip + g_of_f( op, b1, tlhs, &n_tlhs, trhs, &n_trhs ) : need_flip;
                  if ( found_count == 0 )
                  {
                    if ( found_var( trhs, n_trhs, v ) )
                    {
                      if ( debug_level > 0 )
                      {
                        __fprintf_chk( gfp, 1, "%s\n", "Solve variable moved back to RHS, quitting solve routine." );
                        success = 0;
                        break;
                      }
                    }
                    else
                    {
                      calc_simp( tlhs, &n_tlhs );
                      calc_simp( trhs, &n_trhs );
                      if ( se_compare( tlhs, n_tlhs, trhs, n_trhs, &diff_sign ) && diff_sign == 0 )
                      {
                        error( "This equation is an identity." );
                        __printf_chk( 1, "That is, the LHS is identical to the RHS.\n" );
                        success = -1;
                        break;
                      }
                      i = 0;
                      for ( ; i < n_tlhs; i += 2 )
                      {
                        if ( tlhs->kind == 1 && tlhs->token.variable > 3 )
                          found = 1;
                        else
                        {
                          // i += 2;
                        }
                        i = 0;
                        for ( ; i < n_trhs; i += 2 )
                        {
                          if ( trhs->kind != 1 || trhs->token.variable <= 3 )
                            continue;
                          error( "This equation is independent of the solve variable." );
                          success = -2;
                          break;
                        }
                        if ( found == 0 )
                        {
                          error( "There are no possible values for the solve variable." );
                          success = -2;
                          break;
                        }
                        error( "This equation is independent of the solve variable." );
                        success = -2;
                        break;
                      }
                      found = 0;
                      i = 0;
                    }
                  }
                  else
                  {
                    if ( n_trhs == 1 && trhs->kind == 0 && trhs->token.constant/*union*/ == 0 )
                    {
                      trhs->token.constant/*union*/ = 0.000000000000;
                      zflag = 1;
                    }
                    else
                      zflag = 0;
                    if ( found_count <= need_flip )
                    {
                      if ( flip( tlhs, &n_tlhs, trhs, &n_trhs ) == 0 )
                      {
                        success = 0;
                        break;
                      }
                      list_debug( 2, tlhs, n_tlhs, trhs, n_trhs );
                      simps_side( tlhs, &n_tlhs, zsolve );
                      simps_side( trhs, &n_trhs, zsolve );
                      list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
                    }
                    else
                    {
                      if ( worked && uf_flag == 0 )
                      {
                        if ( debug_level > 0 )
                          __fprintf_chk( gfp, 1, "%s\n", "Unfactoring..." );
                        partial_flag = 0;
                        uf_simp( tlhs, &n_tlhs );
                        partial_flag = 1;
                        factorv( tlhs, &n_tlhs, v );
                        list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
                        uf_flag = 1;
                        worked = 0;
                      }
                      else
                      {
                        if ( uf_flag )
                        {
                          simps_side( tlhs, &n_tlhs, zsolve );
                          list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
                          uf_flag = 0;
                          break;
                        }
                        else
                        {
                          found_count = tlhs;
                          b1 = tlhs;
                          op = 0;
                          i = 1;
                          for ( ; i < n_tlhs;  )
                          {
                            if ( *(int*)(tlhs[2].kind + -12) == 1 )
                            {
                              worked = *(int*)(tlhs[2].kind + -8);
                              if ( *(int*)(tlhs[2].kind + -8) + -3 > 1 )
                              {
                                op_kind = worked;
                                op = worked;
                                break;
                              }
                              else
                              {
                                op = op == 0 ? op : 3;
                                if ( zflag )
                                {
                                  if ( worked != 4 )
                                  {
                                    if ( tlhs[2].kind == 1 && tlhs[2].token.constant == v && ( tlhs[2].level == 1 || ( tlhs[2].level == 2 && tlhs[3].token.variable == 6 && tlhs[4].level == 2 && tlhs[4].kind == 0 && 0.000000000000 < tlhs[4].token.constant/*union*/ ) ) )
                                      op = worked;
                                      i += 2;
                                      b1 = ebp_80;
                                  }
                                  else
                                  {
                                    op_kind = worked;
                                    b1 = found_count + ( ebp_80 << 4 ) + 16;
                                    op = worked;
                                    break;
                                  }
                                }
                                else
                                if ( worked == 4 )
                                {
                                  ebp_80 += 2;
                                  for ( ; ebp_80 < n_tlhs; ebp_80 += 2 )
                                  {
                                    worked = tlhs[2].kind + 16 + 32;
                                    if ( worked > 1 )
                                    {
                                      if ( ebp_88 == 2 )
                                      {
                                        if ( worked + -1 <= 1 )
                                          op = 4;
                                      }
                                      else
                                      {
                                        // ebp_80 += 2;
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
                          found_count/*.1_1of4*/ = zero_solved/*.1_1of4*/;
                          if ( zflag == 0 || !( op_kind & 255 ) || op != 3 || b1 != 1 || (b1->token.variable) != v )
                          {
                            if ( op == 4 )
                            {
                              uf_flag = 1;
                              if ( debug_level > 0 )
                              {
                                __fprintf_chk( gfp, 1, "%s\n", "Juggling..." );
                                uf_flag = 1;
                              }
                            }
                            else
                            {
                              b1 = 0;
                              i = 1;
                              while ( i < n_tlhs )
                              {
                                if ( tlhs[ i ].token.constant == 6 && op_kind == *(int*)(i + g_of_f( op, b1, tlhs, &n_tlhs, trhs, &n_trhs ) + 36) && *(int*)(g_of_f( op, b1, tlhs, &n_tlhs, trhs, &n_trhs )) == 0 )
                                {
                                  if ( abs( *(double*)(eax + 8) ) < 1.000000000000 )
                                  {
                                    if ( eax && abs( numerator ) == 1.000000000000 && !0 && 2.000000000000 <= denominator )
                                    {
                                      j = i + -1;
                                      worked = i + -1;
                                      for ( ; worked >= 0 && *(int*)(ebp_84 + 4) <= *(int*)(eax + 4);  )
                                      {
                                        if ( eax == 1 && v == *(int*)(eax + 8) )
                                        {
                                          if ( b1 )
                                          {
                                            b1 += ebp_80 / 16;
                                            if ( abs( *(double*)(ebx + 8) ) < abs( b1->token.constant/*union*/ ) )
                                            {
                                              i += 2;
                                              break;
                                              while ( i < n_tlhs )
                                              {
                                              }
                                              if ( found_count/*.1_1of4*/ && b1 )
                                              {
                                                inc_count++;
                                                if ( inc_count > 20 )
                                                {
                                                  success = 0;
                                                  break;
                                                }
                                                __fprintf_chk( gfp, 1, "Raising both equation sides to the power of %.*g and unfactoring...\n", precision, 1.000000000000 / b1->token.constant/*union*/ );
                                                found_count = (int)b1->token.constant/*union*/;
                                                partial_flag = 0;
                                                ufactor( tlhs, &n_tlhs );
                                                partial_flag = 1;
                                                symb_flag = symblify;
                                                simp_ssub( tlhs, &n_tlhs, v, found_count, 1, 0, 2 );
                                                simp_ssub( tlhs, &n_tlhs, 0, 1.000000000000, 1, 1, 2 );
                                                symb_flag = 0;
                                                qtries = 1;
                                                while ( 1 )
                                                {
                                                  uf_flag = tlhs[ n_tlhs ].kind;
                                                  ebp_80 = 0;
                                                  while ( tlhs[1].kind < uf_flag )
                                                  {
                                                    if ( tlhs[1].level != 1 )
                                                    {
                                                      if ( tlhs[1].token.variable == 6 && tlhs[2].level == tlhs[1].level && tlhs[2].kind == 0 && tlhs[2].token.constant == found_count )
                                                      {
                                                        while ( tlhs[1].level <= *(int*)(tlhs[1].kind + -16 + 4) )
                                                        {
                                                          if ( v == *(int*)(tlhs[1].kind + -16 + 8) ? 0 : 1 )
                                                            ebp_80 = (unsigned char)( ( ebp_80 < ( ( tlhs[1].kind - tlhs ) >> 4 ) ) ^ 1 ) ? ( tlhs[1].kind - tlhs ) >> 4 : ebp_80;
                                                        }
                                                      }
                                                      tlhs[1].kind += 32;
                                                    }
                                                    else
                                                    {
                                                      zero_solved = qtries;
                                                      worked = qtries;
                                                      while ( tlhs[1].kind + 32 + 32 < uf_flag )
                                                      {
                                                        if ( tlhs[5].token.variable == 6 && tlhs[6].level == tlhs[5].level && tlhs[6].kind == 0 && tlhs[6].token.constant == found_count )
                                                        {
                                                          while ( tlhs[6].level <= tlhs[4].level )
                                                          {
                                                            if ( esi )
                                                            {
                                                            }
                                                          }
                                                        }
                                                        edx += 32;
                                                      }
                                                      if ( tlhs[3].token.variable == 6 && tlhs[4].level == 1 && tlhs[4].kind == 0 && found_count == tlhs[4].token.constant/*union*/ )
                                                      {
                                                        if ( g_of_f( 6, tlhs[1].kind + 32 + 16, tlhs, &n_tlhs, trhs, &n_trhs ) == 0 )
                                                        {
                                                          success = 0;
                                                          break;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        if ( esi == 0 )
                                                        {
                                                          if ( ( ( tlhs[1].kind + 32 ) - tlhs ) + -16 <= 15 && tlhs[3].token.variable == 4 )
                                                          {
                                                            if ( tlhs->kind == 0 && tlhs->token.constant/*union*/ == 1.000000000000 )
                                                            {
                                                              if ( flip( tlhs, &n_tlhs, trhs, &n_trhs ) == 0 )
                                                              {
                                                                success = 0;
                                                                break;
                                                              }
                                                              list_debug( 2, tlhs, n_tlhs, trhs, n_trhs );
                                                              simp_loop( tlhs, &n_tlhs );
                                                              simp_loop( trhs, &n_trhs );
                                                              list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
                                                              break;
                                                              while ( 1 )
                                                              {
                                                                uf_flag = tlhs[ n_tlhs ].kind;
                                                                ebp_80 = 0;
                                                                while ( tlhs[1].kind < uf_flag )
                                                                {
                                                                }
                                                              }
                                                            }
                                                          }
                                                          else
                                                          {
                                                            switch ( tlhs[3].token.variable )
                                                            {
                                                              break;
                                                            case 1:
                                                            case 2:
                                                              break;
                                                            default:
                                                              break;
                                                            }
                                                          }
                                                        }
                                                        if ( g_of_f( 1, tlhs[1].kind + 32 + 16, tlhs, &n_tlhs, trhs, &n_trhs ) == 0 )
                                                        {
                                                          success = 0;
                                                          break;
                                                        }
                                                        list_debug( 2, tlhs, n_tlhs, trhs, n_trhs );
                                                        simp_loop( tlhs, &n_tlhs );
                                                        simp_loop( trhs, &n_trhs );
                                                        list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
                                                        break;
                                                        while ( 1 )
                                                        {
                                                          uf_flag = tlhs[ n_tlhs ].kind;
                                                          ebp_80 = 0;
                                                          while ( tlhs[1].kind < uf_flag )
                                                          {
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  zero_solved = 0;
                                                  qtries = 0;
                                                  uf_flag = 1;
                                                  break;
                                                }
                                              }
                                              else
                                              {
                                                if ( qtries == 0 )
                                                {
                                                  if ( debug_level > 0 )
                                                    __fprintf_chk( gfp, 1, "%s\n", "Solving for zero..." );
                                                  leftnp[0] = n_tlhs;
                                                  memmove( leftp, tlhs, n_tlhs << 4 );
                                                  rightnp[0] = n_trhs;
                                                  memmove( rightp, trhs, n_trhs << 4 );
                                                  if ( solve_sub( &zero_token, 1, leftp, leftnp, rightp, rightnp ) <= 0 )
                                                  {
                                                    success = 0;
                                                    break;
                                                  }
                                                  qtries = ( qtries + 1 ) - ( ( found_count/*.1_1of4*/ < ( 1 & 255 ) ) & 1 );
                                                  if ( quad_solve( v ) )
                                                  {
                                                    zero_solved = 1;
                                                    break;
                                                  }
                                                  else
                                                  {
                                                    zero_solved = 1;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else
                                            b1 += ebp_80 / 16;
                                        }
                                        else
                                        {
                                          worked += -1;
                                        }
                                      }
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
                          if ( b1->level == 1 || ( b1->level == 2 && (b1[1].token.variable) == 6 && b1[2].level == 2 && b1[2].kind == 0 && 0.000000000000 < b1[2].token.constant/*union*/ ) )
                          {
                            __fprintf_chk( gfp, 1, "Removing possible solution: \"" );
                            list_proc( b1, 1, 0 );
                            __fprintf_chk( gfp, 1, " = 0\".\n" );
                            success = 2;
                            qtries = 0;
                          }
                          else
                          {
                            b1 = 0;
                            i = 1;
                            while ( i < n_tlhs )
                            {
                            }
                          }
                          if ( g_of_f( op, b1, tlhs, &n_tlhs, trhs, &n_trhs ) == 0 )
                          {
                            success = 0;
                            break;
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  op = (p1->token.variable);
                  b1 = &p1[1].kind;
                  found = 0;
                }
              }
              else
              if ( p1 == 1 && (p1->token.variable) == v )
              {
                found_count++;
                found++;
              }
              p1++;
            }
          }
        }
        if ( debug_level > 0 )
        {
          __fprintf_chk( gfp, 1, "%s\n", "Solve variable moved back to RHS, quitting solve routine." );
          success = 0;
          break;
        }
      }
    }
    while ( (p1->token.variable) != 4 );
  }
  return success;
}
int quad_solve( long v )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int i, j, k;
  token_type *p1, *p2, *ep;
  token_type *x1p, *x2p;
  token_type *a1p, *a2p, *a2ep;
  /* phantom */ token_type *b1p, *b2p, *b2ep;
  token_type *x1tp, *a1tp;
  token_type x1_storage[100];
  int op, op2, opx1, opx2;
  int found, diff_sign;
  int len, alen, blen, aloc, nx1;
  double high_power;
  uf_simp( trhs, &n_trhs );
  v = v;
  while ( factor_plus( trhs, &n_trhs, v, 0.000000000000 ) == 0 )
  {
    simp_loop( trhs, &n_trhs );
  }
  list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
  p1 = trhs;
  x1tp = trhs;
  found = 0;
  op = 0;
  a2ep = 0;
  a2p = 0;
  a1p = 0;
  x1p = 0;
  alen = 1;
  while ( 1 )
  {
    if ( p1 < trhs[ n_trhs ].kind )
    {
      high_power = 0.000000000000;
      if ( p1->level == 1 )
      {
        if ( p1 == 2 )
        {
          if ( (unsigned int)(p1->token.variable) + -1 > 1 )
          {
            return 0;
          }
        }
        else
        {
          if ( p1 == 2 )
          {
            x1tp = &p1[1].kind;
            found = 0;
            op = 0;
          }
          p1++;
        }
      }
      else
      {
        if ( p1 == 2 )
        {
          if ( p1->level == 2 )
            op = (p1->token.variable);
        }
        else
        if ( op == 0 && p1 == 1 && v == (p1->token.variable) )
          found = 1;
      }
    }
    if ( op + -3 <= 1 )
    {
      if ( x1tp < p1 )
      {
        p2 = x1tp;
        found = 0;
        while ( 1 )
        {
          if ( p2->level == 2 )
          {
            if ( p2 == 2 )
            {
              x1tp = &p2[1].kind;
              high_power = high_power;
              found = 0;
              p2++;
              if ( p1 <= &p2[1].kind )
                goto B19;
              else
              {
              }
            }
          }
          else
          if ( p2 == 2 )
          {
            if ( p2->level == 3 && (p2->token.variable) == 6 && found && ( (p2->token.variable) == 3 || (p2->token.variable) == 0 ) && p2[1].level == 3 && p2[1].kind == 0 )
            {
              high_power = p2[1].token.constant/*union*/;
              if ( high_power < p2[1].token.constant/*union*/ )
              {
                a2p = &p2[2].kind;
                a2ep = p1;
                a1p = x1tp;
                x1p = &x1tp->kind;
              }
            }
          }
          else
          if ( p2 == 1 && v == (p2->token.variable) )
          {
            high_power = high_power;
            found = alen;
          }
          high_power = high_power;
        }
      }
      else
      {
        high_power = high_power;
        found = 0;
      }
    }
    else
    {
      if ( op == 6 && found && *(int*)(p1 + -12) == 2 && *(int*)(p1 + -16) == 0 )
      {
        high_power = *(double*)(p1 + -8);
        if ( high_power < *(double*)(p1 + -8) )
        {
          a2ep = p1;
          a2p = p1;
          a1p = x1tp;
          x1p = x1tp;
        }
      }
      high_power = high_power;
    }
B19:;
    if ( p1 < trhs[ n_trhs ].kind )
    {
      if ( p1->level == 1 )
      {
      }
      else
      {
      }
    }
    else
    {
      if ( high_power == 0.000000000000 && high_power == 0.000000000000 )
      {
        return 0;
      }
      list_var( v, 0 );
      __fprintf_chk( gfp, 1, "Equation is a degree %.*g polynomial in (%s).\n", precision, high_power, var_str );
      if ( trhs < a1p )
      {
        opx1 = 2;
        if ( *(int*)(a1p + -8) == 2 )
        {
          if ( high_power == 2.000000000000 )
          {
            found = -2 + ( ( a2p - x1p ) >> 4 );
            if ( -2 + ( ( a2p - x1p ) >> 4 ) > 100 )
            {
              return 0;
            }
            __memmove_chk( &x1_storage[0].kind, x1p, ( -2 + ( ( a2p - x1p ) >> 4 ) ) << 4, 1600 );
          }
          else
          {
            found = ( a2p - x1p ) >> 4;
            if ( ( ( a2p - x1p ) >> 4 ) > 100 )
            {
              return 0;
            }
            __memmove_chk( &x1_storage[0].kind, x1p, ( ( a2p - x1p ) >> 4 ) << 4, 1600 );
            x1_storage[ found + 0 ].kind *= 0.500000000000;
          }
          p1 = trhs;
          opx2 = 0;
          while ( 1 )
          {
            if ( p1 < trhs[ n_trhs ].kind )
            {
              op = (high_power & 0xFFFFFFFF);
              if ( p1->level == 1 )
              {
                if ( p1 == 2 )
                  goto B76;
                else
                {
                  if ( p1 == 2 )
                    opx2 = (p1->token.variable);
                  p1++;
                }
              }
              else
              {
                if ( p1 != 2 || p1->level != 2 )
                {
                  high_power = op;
                }
                else
                {
                  high_power = op;
                }
              }
            }
B76:;
            alen = (high_power & 0xFFFFFFFF);
            if ( se_compare( x1_storage, found, &high_power & 0xFFFFFFFF, ( p1 - (unsigned int)(high_power & 0xFFFFFFFF) ) >> 4, &diff_sign ) == 0 )
            {
              op = (high_power & 0xFFFFFFFF);
              if ( 0 + -3 <= 1 )
              {
                p2 = &high_power & 0xFFFFFFFF;
                op2 = 0;
                while ( 1 )
                {
                  if ( p2 < p1 )
                  {
                    if ( p2->level == 2 )
                    {
                      if ( p2 == 2 )
                        goto B90;
                      else
                      {
                        if ( p2 == 2 )
                        {
                          op = &p2[1].kind;
                          op2 = (p2->token.variable);
                        }
                        p2++;
                      }
                    }
                  }
B90:;
                  if ( ( op2 == 0 || op2 == 3 ) && se_compare( x1_storage, found, &op, ( p2 - op ) >> 4, &diff_sign ) )
                    x2p = &high_power & 0xFFFFFFFF;
                  else
                  {
                    if ( p2 < p1 )
                    {
                      if ( p2->level == 2 )
                      {
                      }
                    }
                  }
                }
              }
              if ( trhs[ n_trhs ].kind <= p1 )
              {
                return 0;
              }
              if ( p1->level == 1 )
              {
                high_power = op;
              }
              else
              {
              }
            }
            else
            {
              x2p = &high_power & 0xFFFFFFFF;
              b2p = p1;
            }
            switch ( opx2 )
            {
            case 0:
            case 1:
              opx2 = 2;
              if ( diff_sign == 0 )
                opx2 = 1;
              memmove( scratch, x2p, (int)( (unsigned int)(high_power & 0xFFFFFFFF) - alen ) );
              len = len >> 4;
              scratch[ len >> 4 ].level = 7;
              scratch[ len >> 4 ].kind = CONSTANT;
              if ( opx2 == 2 )
                scratch->token.constant/*union*/ = -1.000000000000;
              else
                scratch->token.constant/*union*/ = 1.000000000000;
              len++;
              memmove( &scratch[ len + 1 ].kind, b2p, p1 - b2p );
              op = len + ( ( p1 - b2p ) >> 4 );
              if ( op > 0 )
              {
                i = 0;
                len = op;
                do
                {
                  scratch[ i ].level += ecx;
                  i++;
                }
                while ( len != i + 1 );
              }
              scratch[ ( op ) + 0 ].level = 6;
              scratch[ op ].kind = OPERATOR;
              scratch[ op + 1 ].level = 6;
              scratch[ op + 1 ].kind = CONSTANT;
              scratch[ op + 1 ].token.constant = 2.000000000000;
              scratch[ op + 2 ].level = 5;
              scratch[ op + 2 ].kind = OPERATOR;
              scratch[ op + 3 ].level = 6;
              scratch[ op + 3 ].kind = CONSTANT;
              scratch[ op + 3 ].token.constant = 4.000000000000;
              scratch[ op + 4 ].level = 6;
              scratch[ op + 4 ].kind = OPERATOR;
              len = op + 5;
              opx2 = ( op + 5 ) << 4;
              j = scratch[ op + 5 ].kind;
              memmove( &scratch[ op + 5 ].kind, a1p, x1p - a1p );
              len += ( x1p - a1p ) >> 4;
              scratch[ len + ( ( x1p - a1p ) >> 4 ) ].level = 7;
              scratch[ len + ( ( x1p - a1p ) >> 4 ) ].kind = CONSTANT;
              if ( opx1 == 2 )
                scratch->token.constant/*union*/ = -1.000000000000;
              else
                scratch->token.constant/*union*/ = 1.000000000000;
              len = len + 1;
              memmove( &scratch[ len + 1 ].kind, a2p, a2ep - a2p );
              len += ( a2ep - a2p ) >> 4;
              alen = ( len + ( ( a2ep - a2p ) >> 4 ) ) - len;
              if ( len < len )
              {
                i = len;
                do
                {
                  scratch[5].level = ( 7 - min_level( &scratch[ opx2 >> 4 ], ( len + ( ( a2ep - a2p ) >> 4 ) ) - len ) ) + *(int*)(scratch + ( ( op + 5 ) << 4 ) + 4);
                  i++;
                }
                while ( i + 1 < len );
              }
              scratch[ len ].level = 6;
              scratch[ len ].kind = OPERATOR;
              scratch[ len + 1 ] = zero_token;
              scratch[ len + 1 ].level = zero_token.level;
              p1 = trhs;
              p2 = trhs;
              len += 2;
              ep = &trhs[ n_trhs ];
              while ( 1 )
              {
                if ( ep <= p1 || ( p1->level == 1 && p1 == 2 ) )
                {
                  if ( ( x1p < p2 || p1 <= x1p ) && ( (unsigned int)(high_power & 0xFFFFFFFF) < p2 || p1 <= (unsigned int)(high_power & 0xFFFFFFFF) ) )
                  {
                    if ( trhs == p2 )
                    {
                      scratch[ len ].level = 1;
                      scratch[ len ].kind = OPERATOR;
                      len++;
                    }
                    memmove( &scratch[ len ].kind, p2, p1 - p2 );
                    p2 = ( p1 - p2 ) >> 4;
                    len += ( p1 - p2 ) >> 4;
                  }
                  if ( ep <= p1 )
                    break;
                  else
                    p2 = p1;
                }
                p1++;
              }
              if ( len + 1 < len )
              {
                i = len + 1;
                do
                {
                  scratch[1].level += 6;
                  i++;
                }
                while ( i + 1 < len );
              }
              scratch[ len ].level = 4;
              scratch[ len ].kind = OPERATOR;
              scratch[ len + 1 ].level = 4;
              scratch[ len + 1 ].kind = CONSTANT;
              scratch[ len + 1 ].token.constant = 0.500000000000;
              scratch[ len + 2 ].level = 3;
              scratch[ len + 2 ].kind = OPERATOR;
              scratch[ len + 3 ].level = 3;
              scratch[ len + 3 ].kind = VARIABLE;
              next_sign( &scratch[ len + 3 ].token.constant );
              scratch[ len + 4 ].level = 2;
              scratch[ len + 4 ].kind = OPERATOR;
              len += 5;
              if ( n_tokens < alen + op + len + 5 + 3 )
                error_huge( );
              memmove( &scratch[ len << 4 ].kind, scratch, op << 4 );
              scratch[ op + len + 5 ].level = 1;
              scratch[ op + len + 5 ].kind = OPERATOR;
              scratch[ op + len + 5 + 1 ].level = 2;
              scratch[ op + len + 5 + 1 ].kind = CONSTANT;
              scratch[ op + len + 5 + 1 ].token.constant = 2.000000000000;
              scratch[ op + len + 5 + 2 ].level = 2;
              scratch[ op + len + 5 + 2 ].kind = OPERATOR;
              len += 3;
              memmove( &scratch[ len + 3 ].kind, &scratch[ opx2 >> 4 ].kind, alen << 4 );
              len += alen;
              if ( found_var( scratch, len + alen, v ) )
              {
                return 0;
              }
              memmove( tlhs, &x1_storage[0].kind, found << 4 );
              n_tlhs = found;
              simp_loop( tlhs, &n_tlhs );
              memmove( trhs, scratch, len << 4 );
              n_trhs = len;
              simp_loop( trhs, &n_trhs );
              list_debug( 2, tlhs, n_tlhs, trhs, n_trhs );
              uf_tsimp( trhs, &n_trhs );
              simps_side( trhs, &n_trhs, 0 );
              list_debug( 1, tlhs, n_tlhs, trhs, n_trhs );
              if ( debug_level >= 0 )
              {
                __fprintf_chk( gfp, 1, "%s\n", "Equation was solved with the quadratic formula." );
                break;
              }
              break;
              break;
            case 2:
              if ( diff_sign )
                opx2 = 1;
              break;
            }
          }
        }
      }
      opx1 = 1;
    }
  }
}
int g_of_f( int op, token_type *operandp, token_type *side1p, int *side1np, token_type *side2p, int *side2np )
{
  int eax;
  int ecx;
  double fp5;
  double fp6;
  double fp7;
  static int prev_n1, prev_n2;
  token_type *p1, *p2, *ep;
  int oldn = side1np[0], operandn;
  double numerator, denominator;
  double d1, d2;
  complexs c1;
  complexs c2;
  char var_name_buf[100];
  if ( side1np[0] == prev_n1 && side2np[0] == prev_n2 )
  {
    repeat_count++;
    if ( repeat_count + 1 > 2 )
    {
      if ( debug_level > 0 )
      {
        __fprintf_chk( gfp, 1, "%s\n", "Infinite loop aborted in solve routine." );
        return 0;
      }
      else
      {
      }
    }
  }
  else
  {
    prev_n1 = oldn;
    prev_n2 = side2np[0];
    repeat_count = 0;
  }
  if ( op + -1 > 5 )
    continue;
  else
  {
    ep = side1p + ( oldn << 4 );
    p1 = &operandp[1].kind;
    if ( &operandp[1].kind < side1p + ( oldn << 4 ) )
    {
      op = 1;
      do
      {
        if ( p1->level == 1 )
        {
          if ( (p1->token.variable) == 5 )
          {
          }
          else
          if ( (p1->token.variable) == 7 )
          {
          }
          else
            break;
        }
        p1 += 2;
      }
      while ( &p1[2].kind < ep );
    }
    operandn = ( p1 - &p1[1].kind ) >> 4;
    if ( op == 6 && side1p == &p1[1].kind )
    {
      if ( parse_complex( side2p, side2np[0], &c1 ) && parse_complex( &p1[1].kind, operandn, &c2 ) )
      {
        if ( debug_level > 0 )
          __fprintf_chk( gfp, 1, "%s\n", "Taking logarithm of both equation sides:" );
        *(int*)(__errno_location( )) = 0;
        ebp = complex_log( c2.re );
        side2np[0] = 0;
        side2p->level = 1;
        side2p->kind = 0;
        side2p->token.constant/*union*/ = c1.re;
        side2p[1].level = 1;
        side2p->kind = 2;
        side2p->token.variable = 1;
        side2p[1].level = 2;
        side2p->kind = 0;
        side2p->token.constant/*union*/ = c1.im;
        side2p[1].level = 2;
        side2p->kind = 2;
        side2p->token.variable = 3;
        side2p[1].level = 2;
        side2p->kind = 1;
        side2p->token.variable = 3;
        side2np[0]++;
        side2np[0]++;
        side2np[0]++;
        side2np[0]++;
        side2np[0]++;
        p1[1].kind = &p1[1].kind;
        memmove( side1p, &p1[1].kind + 16, ( side1np[0] + ~operandn ) << 4 );
        side1np[0] += ~operandn;
        check_err( );
      }
    }
    else
    {
      if ( op == 5 && get_constant( side2p, side2np[0], &d1 ) && get_constant( &p1[1].kind, operandn, &d2 ) && abs( d1 ) <= abs( d2 ) )
      {
        error( "There are no possible solutions." );
      }
      else
      {
        if ( debug_level > 0 )
        {
          switch ( op )
          {
          case 5:
            __fprintf_chk( gfp, 1, "Applying inverse modulus of" );
            if ( !( op == 6 ) || operandn != 1 || p1[1] )
            {
              __fprintf_chk( gfp, 1, " \"" );
              if ( op == 6 )
                __fprintf_chk( gfp, 1, "1/(" );
              list_proc( &p1[1].kind, operandn, 0 );
              switch ( op )
              {
              case 1:
                __fprintf_chk( gfp, 1, "\" from both sides of the equation:\n" );
                break;
              case 2:
              case 5:
                __fprintf_chk( gfp, 1, "\" to both sides of the equation:\n" );
                break;
              case 6:
                __fprintf_chk( gfp, 1, ")" );
                __fprintf_chk( gfp, 1, "\":\n" );
                break;
              default:
                __fprintf_chk( gfp, 1, "\":\n" );
                break;
              }
            }
            else
              __fprintf_chk( gfp, 1, " %.*g:\n", precision, 1.000000000000 / p1[1].token.constant/*union*/ );
            break;
          case 6:
            __fprintf_chk( gfp, 1, "Raising both sides of the equation to the power of" );
            break;
          case 4:
            __fprintf_chk( gfp, 1, "Multiplying both sides of the equation by" );
            break;
          case 3:
            __fprintf_chk( gfp, 1, "Dividing both sides of the equation by" );
            break;
          case 2:
            __fprintf_chk( gfp, 1, "Adding" );
            break;
          case 1:
            __fprintf_chk( gfp, 1, "Subtracting" );
            break;
          case 0:
            break;
          }
        }
        if ( n_tokens < side1np[0] + operandn + 3 || op < side2np[0] + operandn + 5 )
          error_huge( );
        if ( min_level( side1p, oldn ) <= 1 && side1p < ep )
        {
          p2 = side1p;
          do
          {
            p2->level++;
            p2++;
          }
          while ( &p2[1].kind < ep );
        }
        if ( min_level( side2p, side2np[0] ) <= 1 && side2p < side2p + ( side2np[0] << 4 ) )
        {
          p2 = side2p;
          do
          {
            p2->level++;
            p2++;
          }
          while ( &p2[1].kind < ep );
        }
        switch ( op )
        {
        case 0:
          memmove( side2p + ( side2np[0] << 4 ), ep, ( side1np[0] - oldn ) << 4 );
          side2np[0] = side2np[ ( *(int*)(side1np) - oldn ) >> 2 ];
          if ( op == 6 && operandn == 1 && p1[1].kind == 0 )
          {
            f_to_fraction( p1[1].token.constant/*union*/, &numerator, &denominator );
            do
            {
              numerator = rem(numerator,2.000000000000);
            }
            while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(numerator,2.000000000000) ),2.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
            if ( numerator == ( rem(numerator,2.000000000000) ) )
            {
              if ( !( rem(numerator,2.000000000000) ) )
              {
                ep = side2p + ( side2np[0] << 4 );
                p2 = side2p;
                if ( side2p < side2p + ( side2np[0] << 4 ) )
                {
                  do
                  {
                    p2->level = side2p->level + 1;
                    p2++;
                  }
                  while ( &p2[1].kind < ep );
                  ep = side2p;
                  p2 = side2p + ( ( ep + ~side2p ) & -16 ) + 16;
                }
                p2->level = 1;
                p2 = 2;
                p2++;
                p2[1].level = 1;
                p2[1].kind = 1;
                next_sign( p2->kind + 24 );
                side2np[0] += 2;
              }
            }
            else
            {
            }
            fmod( numerator, 2.000000000000 );
          }
          if ( op + -5 <= 1 )
            side1np[0] = ( ( &p1[1].kind + -16 ) - side1p ) >> 4;
          break;
        case 5:
          ep->level = 1;
          ep->kind = 2;
          ep->token.variable = 1;
          p2 = ep->kind + 16;
          ep[1].level = 2;
          ep[1].kind = 1;
          __snprintf_chk( var_name_buf, 100, 1, 100, "%s%.0d", "integer", last_int_var );
          if ( parse_var( &ep[1].token.constant, var_name_buf ) )
          {
            last_int_var = 0 ? 0 : last_int_var + 1;
            p2[1].level = 2;
            p2[1].kind = 2;
            p2[1].token.variable = 3;
            p2 += 2;
            memmove( &p2[2].kind, &p1[1].kind, p1 - &p1[1].kind );
            side1np[0] = side1np[0] + operandn + 3;
          }
          break;
        case 6:
          ep->level = 1;
          ep->kind = 2;
          ep->token.variable = 6;
          ep[1].level = 2;
          ep[1].kind = 0;
          ep[1].token.constant/*union*/ = 1.000000000000;
          ep[2].level = 2;
          ep[2].kind = 2;
          ep[2].token.variable = 4;
          memmove( &ep[3].kind, &p1[1].kind, p1 - &p1[1].kind );
          side1np[0] = side1np[0] + operandn + 3;
          break;
        case 3:
          ep->level = 1;
          ep->kind = 2;
          ep->token.variable = 4;
          memmove( ep->kind + 16, &p1[1].kind, p1 - &p1[1].kind );
          side1np[0] = side1np[0] + operandn + 1;
          break;
        case 4:
          ep->level = 1;
          ep->kind = 2;
          ep->token.variable = 3;
          memmove( &ep[1].kind, &p1[1].kind, p1 - &p1[1].kind );
          side1np[0] = side1np[0] + operandn + 1;
          break;
        case 1:
          ep->level = 1;
          ep->kind = 2;
          ep->token.variable = 2;
          memmove( ep->kind + 16, &p1[1].kind, p1 - &p1[1].kind );
          side1np[0] = side1np[0] + operandn + 1;
          break;
        case 2:
          ep->level = 1;
          ep->kind = 2;
          ep->token.variable = 1;
          memmove( &ep[1].kind, &p1[1].kind, p1 - &p1[1].kind );
          side1np[0] = side1np[0] + operandn + 1;
          break;
        }
      }
    }
  }
}
int flip( token_type *side1p, int *side1np, token_type *side2p, int *side2np )
{
  token_type *p1, *ep;
  if ( debug_level > 0 )
    __fprintf_chk( gfp, 1, "%s\n", "Taking the reciprocal of both sides of the equation..." );
  if ( n_tokens < side1np[0] + 2 || n_tokens < side2np[0] + 2 )
    error_huge( );
  ep = side1p + ( side1np[0] << 4 );
  if ( side1p < side1p + ( side1np[0] << 4 ) )
  {
    p1 = side1p;
    do
    {
      p1->level++;
      p1++;
    }
    while ( &p1[1].kind < ep );
  }
  ep = side2p + ( side2np[0] << 4 );
  if ( side2p < side2p + ( side2np[0] << 4 ) )
  {
    p1 = side2p;
    do
    {
      p1->level++;
      p1++;
    }
    while ( &p1[1].kind < ep );
  }
  memmove( &side1p[2].kind, side1p, side1np[0] << 4 );
  side1np[0] += 2;
  memmove( &side2p[2].kind, side2p, side2np[0] << 4 );
  side2np[0] += 2;
  side1p = &one_token;
  side1p->level = one_token.level;
  side1p[1].level = 1;
  side1p[1].kind = OPERATOR;
  side2p = &one_token;
  side2p->level = one_token.level;
  side2p[1].level = 1;
  side2p[1].kind = OPERATOR;
  return 1;
(side2p[1].token.variable) = 4; // XXX
}
#if 0
#endif
