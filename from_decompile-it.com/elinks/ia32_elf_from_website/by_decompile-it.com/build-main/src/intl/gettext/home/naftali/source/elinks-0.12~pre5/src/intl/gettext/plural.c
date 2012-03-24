#include "plural.c.h"
static unsigned char yytranslate[263] = { 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 10, 2, 2, 2, 2, 5, 2, 14, 15, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 12, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 13, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 6, 7, 8, 9, 11 };
static unsigned char yyr1[14] = { 0, 16, 17, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18 };
static unsigned char yyr2[14] = { 0, 2, 1, 5, 3, 3, 3, 3, 3, 3, 2, 1, 1, 3 };
static unsigned char yydefact[27] = { 0, 0, 12, 11, 0, 0, 2, 10, 0, 1, 0, 0, 0, 0, 0, 0, 0, 13, 0, 4, 5, 6, 7, 8, 9, 0, 3 };
static yysigned_char yydefgoto[3] = { -1, 5, 6 };
static yysigned_char yypact[27] = { -9, -9, -10, -10, -9, 8, '$', -10, 13, -10, -9, -9, -9, -9, -9, -9, -9, -10, 26, ')', '-', 18, -2, 14, -10, -9, '$' };
static yysigned_char yypgoto[3] = { -10, -10, -1 };
static unsigned char yytable[55] = { 7, 1, 2, 8, 3, 4, 15, 16, 9, 18, 19, 20, 21, 22, 23, 24, 10, 11, 12, 13, 14, 15, 16, 16, 26, 14, 15, 16, 17, 10, 11, 12, 13, 14, 15, 16, 0, 0, 25, 10, 11, 12, 13, 14, 15, 16, 12, 13, 14, 15, 16, 13, 14, 15, 16 };
static yysigned_char yycheck[55] = { 1, 10, 11, 4, 13, 14, 8, 9, 0, 10, 11, 12, 13, 14, 15, 16, 3, 4, 5, 6, 7, 8, 9, 9, 25, 7, 8, 9, 15, 3, 4, 5, 6, 7, 8, 9, -1, -1, 12, 3, 4, 5, 6, 7, 8, 9, 5, 6, 7, 8, 9, 6, 7, 8, 9 };
struct expression *new_exp( int nargs, enum operator  op, struct expression **args )
{
  int i = nargs - 1;
  struct expression *newp;
  if ( nargs - 1 >= 0 )
  {
    if ( args[ i ] )
    {
      do
      {
        i--;
        if ( i - 1 < 0 )
          goto B1;
        else
        {
        }
      }
      while ( edx );
      while ( 1 )
      {
        gettext_free_exp__( args[ nargs - 2 - 2 ] );
        i--;
        if ( i - 1 < 0 )
          break;
      }
    }
  }
B1:  if ( newp[0].nargs )
  {
    newp = &nargs;
    newp->operation = op;
    if ( i >= 0 )
    {
      do
      {
        newp->val.args[1][ ( i << 2 ) - 1 ] = *(int*)(( args[0] + ( ( i << 2 ) << 2 ) ) - 4);
      }
      while ( nargs != 0 + 1 + 1 );
    }
  }
  else
  if ( i >= 0 )
    i = i;
  return (struct expression*)malloc( 20 );
}
void gettext_free_exp__( struct expression *exp )
{
  if ( exp )
  {
    switch ( exp->nargs )
    {
    case 3:
      gettext_free_exp__( exp->val.args[2] );
      gettext_free_exp__( exp->val.args[1] );
      gettext_free_exp__( &exp->val.num );
      exp = &exp[0];
      break;
    case 2:
      gettext_free_exp__( exp->val.args[1] );
      gettext_free_exp__( &exp->val.num );
      exp = &exp[0];
      break;
    case 1:
      gettext_free_exp__( &exp->val.num );
      exp = &exp[0];
      break;
    default:
      exp = &exp[0];
      break;
    }
  }
  else
  {
    return;
  }
}
int gettext__parse( void *arg )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int gettext__char;
  YYSTYPE gettext__lval;
  int yystate;
  int yyn;
  int yyresult;
  int yyerrstatus;
  int yytoken;
  short yyssa[200];
  short *yyss;
  short *yyssp;
  YYSTYPE yyvsa[200];
  YYSTYPE *yyvs;
  YYSTYPE *yyvsp;
  unsigned int yystacksize;
  YYSTYPE yyval;
  int yylen;
  yyssp[0] = yyssa[0];
  yyvsp = yyvsa;
  yyerrstatus = 0;
  yyvs = yyvsa;
  yyss[0] = yyssa[0];
  gettext__char = -2;
  while ( yyssp[0] = yyn, yyssp[0] < yyss[ 199 ] )
  {
    unsigned int yysize;
    if ( 9999 >= 200 )
    {
      yyss[0] = ( ( ebp_1320 - ( ( ( ( ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) <= 10000 ? 10000 : ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) * 6 ) + 33 ) & -16 ) ) + 27 ) & -16;
      yylen = 1 + ( ( yyssp[0] - yyssa[0] ) >> 1 );
      *(int*)(ebp_1320 - ( ( ( ( ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) <= 10000 ? 10000 : ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) * 6 ) + 33 ) & -16 )) = ( ( ebp_1320 - ( ( ( ( ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) <= 10000 ? 10000 : ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) * 6 ) + 33 ) & -16 ) ) + 27 ) & -16;
      // memcpy( ebp_1272, 199, ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 );
      yyssp[0] = yyss[ ( yystacksize - yyss[0] ) >> 1 ];
      memcpy( ( ( ( ebp_1320 - ( ( ( ( ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) <= 10000 ? 10000 : ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) * 6 ) + 33 ) & -16 ) ) + 27 ) & -16 ) + ( ( ( ( ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) <= 10000 ? 10000 : ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) * 2 ) + 3 ) & -4 ), &yyvs[0].num, yylen << 2 );
      if ( yyssp[0] < yyss[ ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) - 1 ] )
        yyvsp = ebp_1248 + ( yyvsp[0].num << 2 );
      else
        yyresult = 1;
        if ( 0 ^ 0 )
        {
          __stack_chk_fail(  );
        }
        break;
    }
    else
      yyresult = 2;
    yyn = yypact[ yyn ];
    if ( yypact[ 0 ] != -10 )
    {
      if ( gettext__char == -2 )
      {
        if ( *(char*)(*(int*)(arg)) )
        {
          if ( *(char*)(*(int*)(arg)) != 9 && *(char*)(*(int*)(arg)) != ' ' )
            yyvsp = &yyvsp[0];
          else
          do
          {
            if ( yystate/*.1_1of4*/ )
            {
              yyvsp = &yyvsp[0];
            }
          }
          while ( *(char*)(*(int*)(arg)) != 9 && yystate/*.1_1of4*/ != ' ' );
          gettext__char = *(char*)(*(int*)(arg));
          yylen = yystate + 1 + 1;
          switch ( gettext__char )
          {
          case 0:
          case 10:
          case 59:
            gettext__char = 0;
            break;
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
            gettext__lval.num = yylen/*.1_1of4*/;
            if ( yylen/*.1_1of4*/ - 48 >= 9 )
            {
              *(int*)(gettext__lval.num) = gettext__lval.num;
              gettext__lval = yyvsp[0];
              gettext__char = yyss[0];
              yyn = yypact[ yyssp[0] ];
              do
              {
              }
              while ( yylen/*.1_1of4*/ - 48 >= 9 );
              yylen++;
              yyvsp = &gettext__lval;
              yyss[0] = gettext__char;
            }
            gettext__lval.num = ( gettext__lval.num + ( ( gettext__char - 48 ) * 10 ) ) - 48;
            yylen = yylen;
            gettext__char = 262;
            break;
          case 61:
            if ( yylen/*.1_1of4*/ == '=' )
            {
              yylen = yylen + 1;
              gettext__lval.num = 12;
              gettext__char = 258;
            }
            else
            {
              yylen = yylen;
              gettext__char = 256;
            }
            break;
          case 33:
            if ( yylen/*.1_1of4*/ == '=' )
            {
              *(int*)(ecx + 1) = yylen + 1;
              gettext__lval.num = 13;
              gettext__char = 258;
            }
            else
              yylen = yylen;
            break;
          case 38:
          case 124:
            if ( gettext__char == yylen/*.1_1of4*/ )
              *(int*)(ecx + 1) = yylen + 1;
            break;
          case 60:
            if ( yylen/*.1_1of4*/ == '=' )
            {
              yylen = yylen + 1;
              gettext__lval.num = 10;
              gettext__char = 259;
            }
            else
            {
              gettext__lval.num = 8;
              yylen = yylen;
              gettext__char = 259;
            }
            break;
          case 62:
            if ( yylen/*.1_1of4*/ == '=' )
            {
              *(int*)(ecx + 1) = yylen + 1;
              gettext__lval.num = 11;
              gettext__char = 259;
            }
            else
            {
              gettext__lval.num = 9;
              yylen = yylen;
              gettext__char = 259;
            }
            break;
          case 42:
            gettext__lval.num = 3;
            yylen = yylen;
            gettext__char = 261;
            break;
          case 47:
            gettext__lval.num = 4;
            yylen = yylen;
            gettext__char = 261;
            break;
          case 37:
            gettext__lval.num = 5;
            yylen = yylen;
            gettext__char = 261;
            break;
          case 43:
            gettext__lval.num = 6;
            yylen = yylen;
            gettext__char = 260;
            break;
          case 45:
            gettext__lval.num = 7;
            yylen = yylen;
            gettext__char = 260;
            break;
          case 40:
          case 41:
          case 58:
          case 63:
          case 110:
            yylen = yylen;
            break;
          default:
            break;
          }
          *(int*)(arg) = yylen;
        }
        *(int*)(arg)++;
        yytoken = 0;
        gettext__char = 0;
        yylen = yytoken + yyn;
        if ( yytoken + yyn <= 54 && yytoken == yycheck[ yyvs[0].num ] )
        {
          yyn = yytable[ yylen ];
          if ( yytable[ yylen ] == 0 )
            yyvsp = &yyvsp[0];
            if ( yyerrstatus == 3 )
            {
              gettext__char = gettext__char;
              if ( gettext__char )
              {
                gettext__char = -2;
                while ( yyn == -10 || yyn + 1 > 54 || yycheck[ yyn ] != 1 || yytable[ yyn ] == 0 )
                {
                  if ( yyssp[0] == yyss[0] )
                    continue;
                  else
                  {
                    yyssp[0] = yyssp[ -1 ];
                    yyvsp = &yyvsp[ -1 ];
                    yyn = yypact[ yyssp[ -1 ] ];
                  }
                }
                if ( yyn != 9 )
                {
                  yyvsp[1] = gettext__lval;
                  yyvsp++;
                  yyerrstatus = 3;
                  yyssp[0] = yyssp[1];
                  yyss[0] = yyss[0];
                  yyvs = &yyssp[0];
                }
                else
                  yyresult = 0;
              }
            }
          else
          {
            if ( yyn != 9 )
            {
              gettext__char = gettext__char == 0 ? -2 : gettext__char;
              yyvsp++;
              yyvsp[1] = gettext__lval;
              yyerrstatus = ( yyerrstatus - 1 ) + ( ( yyerrstatus < 1 ) & 1 );
            }
            else
              yyresult = 0;
          }
        }
      }
      if ( gettext__char >= 1 )
      {
        yytoken = 2;
        if ( gettext__char <= 262 )
          yytoken = yytranslate[ gettext__char ];
      }
      else
      {
        yytoken = 0;
        gettext__char = 0;
      }
    }
    if ( yydefact[ 0 ] )
    {
      yylen = yyr2[ yydefact[ yyn ] ];
      yyval = yyvsp[ 1 - yylen ];
      switch ( yydefact[ yyn ] )
      {
      case 11:
        new_exp( 0, var, 0 );
        yyssp[0] -= yylen * 2;
        yyvsp = ( yyvsp[0].num - ( yylen << 2 ) ) + 4;
        yystate = *(short*)(yyssp[0] - ( yylen * 2 )) + yypgoto[ yyr1[ yydefact[ yyn ] ] - 16 ];
        if ( yyssp[0] + yypgoto[ yyr1[ yydefact[ yyn ] ] - 16 ] <= 54 && yyssp[0] == yycheck[ yystate ] )
        {
        }
        else
        {
        }
        break;
      case 12:
        if ( yyval.num/*union*/ )
          yyval.num = yyvsp[0].num/*union*/;
        break;
      case 10:
        new_exp( 1, lnot, ebp_40 );
        break;
      case 2:
        if ( yyvsp[0].num/*union*/ )
        {
          ((int*)arg)[1] = yyvsp[0].num/*union*/;
          yyvsp = &yyvsp[0];
        }
        break;
      case 3:
        new_exp( 3, qmop, ebp_40 );
        break;
      case 4:
        new_exp( 2, lor, ebp_40 );
        break;
      case 5:
        new_exp( 2, land, ebp_40 );
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        new_exp( 2, yyvsp[ -1 ].num, ebp_40 );
        break;
      case 13:
        yyval = yyvsp[ -1 ];
        break;
      case 0:
      case 1:
        break;
      }
    }
    else
    {
    }
  }
}
#if 0
#endif
