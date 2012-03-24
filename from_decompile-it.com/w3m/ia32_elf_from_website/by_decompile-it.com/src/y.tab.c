#include "y.tab.c.h"
static int yygrowstack( void );
int yygrowstack( void )
{
  int i;
  unsigned int newsize = yystacksize;
  short *newss;
  YYSTYPE *newvs;
  if ( newsize == 0 )
    newsize = 500;
  else
  if ( newsize > 499 )
  {
    return -1;
  }
  newsize <<= 1;
  if ( newsize > 500 )
    newsize = 500;
  i = ( yyssp - yyss ) >> 1;
  newss = yyss != 0 ? realloc( yyss, newsize * 2 ) : malloc( newsize * 2 );
  if ( newss == 0 )
  {
    return -1;
  }
  yyss = newss;
  yyssp = &newss[ i ];
  newvs = yyvs != 0 ? realloc( yyvs, newsize << 2 ) : malloc( newsize << 2 );
  if ( newvs == 0 )
  {
    return -1;
  }
  yyvs = newvs;
  yyvsp = &newvs[ i ];
  yystacksize = newsize;
  yysslim = &yyss[ newsize - 1 ];
  return 0;
}
int date_parse( void )
{
  int yym, yyn, yystate;
  yynerrs = 0;
  yyerrflag = 0;
  yychar = -1;
  yystate = 0;
  if ( yyss != 0 || yygrowstack( ) == 0 )
  {
    yyssp = yyss;
    yyvsp = yyvs;
    yystate = 0;
    yyssp[0] = 0;
    while ( yyn = yydefred[ yystate ], yyn != 0 )
    {
      yym = yylen[ yyn ];
      if ( yym != 0 )
        yyval = yyvsp[ 1 - yym ];
      else
        memset( &yyval.Number, 0, 4 );
      switch ( yyn )
      {
      case 3:
        yyHaveTime++;
        yyssp = &yyssp[ yym * -1 ];
        yystate = yyssp[0];
        yyvsp = &yyvsp[ yym * -1 ];
        yym = yylhs[ yyn ];
        if ( yystate == 0 && yym == 0 )
        {
          yystate = 1;
          yyssp++;
          yyssp[0] = 1;
          yyvsp++;
          yyvsp[0] = yyval;
          if ( yychar < 0 )
          {
            yychar = date_lex( );
            if ( yychar < 0 )
              yychar = 0;
          }
          if ( yychar != 0 )
          {
          }
          else
          {
            return 0;
          }
        }
        else
        {
          yyn = yygindex[ yym ];
          if ( yyn != 0 )
          {
            yyn += yystate;
            if ( yyn >= 0 && yyn <= 300 && yystate == yycheck[ yyn ] )
              yystate = yytable[ yyn ];
              if ( yysslim <= yyssp && yygrowstack( ) != 0 )
                goto B18;
              else
              {
                yyssp++;
                yyssp[0] = yystate;
                yyvsp++;
                yyvsp[0] = yyval;
              }
          }
          yystate = yydgoto[ yym ];
        }
        break;
      case 4:
        yyHaveTime++;
        yyTimezone = yyvsp[0].Number/*union*/;
        break;
      case 5:
        yyHaveDate++;
        break;
      case 6:
        yyHaveDate++;
        yyHaveTime++;
        break;
      case 7:
        yyHaveDate++;
        yyHaveTime++;
        yyTimezone = yyvsp[0].Number/*union*/;
        break;
      case 8:
        yyHaveRel = 1;
        break;
      case 9:
        if ( yyvsp[ -1 ].Number/*union*/ <= 99 )
        {
          yyHour = yyvsp[ -1 ].Number/*union*/;
          yyMinutes = 0;
        }
        else
        {
          yyHour = ( (/*HI*/int)( 1374389535 * yyvsp[ -1 ].Number/*union*/ ) >> 5 ) - ( yyvsp[ -1 ].Number/*union*/ >> 31 );
          yyMinutes = yyvsp[ -1 ].Number/*union*/ - ( ( ( (/*HI*/int)( 1374389535 * yyvsp[ -1 ].Number/*union*/ ) >> 5 ) - ( yyvsp[ -1 ].Number/*union*/ >> 31 ) ) * 100 );
        }
        yySeconds = 0;
        yyMeridian = yyvsp[0].Number/*union*/;
        break;
      case 10:
        yyHour = yyvsp[ -3 ].Number/*union*/;
        yyMinutes = yyvsp[ -1 ].Number/*union*/;
        yySeconds = 0;
        yyMeridian = yyvsp[0].Number/*union*/;
        break;
      case 11:
        yyHour = yyvsp[ -3 ].Number/*union*/;
        yyMinutes = yyvsp[ -1 ].Number/*union*/;
        yyTimezone = yyvsp[0].Number/*union*/;
        yyMeridian = MER24;
        yyDSTmode = DSToff;
        break;
      case 12:
        yyHour = yyvsp[ -5 ].Number/*union*/;
        yyMinutes = yyvsp[ -3 ].Number/*union*/;
        yySeconds = yyvsp[ -1 ].Number/*union*/;
        yyMeridian = yyvsp[0].Number/*union*/;
        break;
      case 13:
        yyHour = yyvsp[ -5 ].Number/*union*/;
        yyMinutes = yyvsp[ -3 ].Number/*union*/;
        yySeconds = yyvsp[ -1 ].Number/*union*/;
        yyTimezone = yyvsp[0].Number/*union*/;
        yyMeridian = MER24;
        yyDSTmode = DSToff;
        break;
      case 14:
        yyval = yyvsp[0];
        yyDSTmode = DSToff;
        break;
      case 15:
        yyval = yyvsp[0];
        yyDSTmode = DSTon;
        break;
      case 16:
        yyTimezone = yyvsp[ -1 ].Number/*union*/;
        yyDSTmode = DSTon;
        break;
      case 17:
        if ( yyvsp[ -1 ].Number/*union*/ == 0 )
        {
          yyval = yyvsp[0];
          yyDSTmode = DSToff;
        }
        else
        {
          return 1;
        }
        break;
      case 18:
        yyval = yyvsp[0];
        yyDSTmode = DSToff;
        break;
      case 19:
      {
        int i;
        if ( yyvsp[0].Number/*union*/ < 0 )
        {
          yyvsp[0].Number/*union*/ *= -1;
          if ( yyvsp[0].Number/*union*/ <= 9999 )
          {
            i = ( (/*HI*/int)( 1374389535 * yyvsp[0].Number/*union*/ ) >> 5 ) - ( yyvsp[0].Number/*union*/ >> 31 );
            i = yyvsp[0].Number/*union*/ - ( i * 100 );
            if ( i <= 59 )
              yyval.Number/*union*/ = i + ( ( ( (/*HI*/int)( 1374389535 * yyvsp[0].Number/*union*/ ) >> 5 ) - ( yyvsp[0].Number/*union*/ >> 31 ) ) * 60 );
          }
        }
        else
        {
          if ( yyvsp[0].Number/*union*/ <= 9999 )
          {
            i = ( (/*HI*/int)( 1374389535 * yyvsp[0].Number/*union*/ ) >> 5 ) - ( yyvsp[0].Number/*union*/ >> 31 );
            i = yyvsp[0].Number/*union*/ - ( i * 100 );
            if ( i <= 59 )
              yyval.Number/*union*/ = ( ( ( (/*HI*/int)( 1374389535 * yyvsp[0].Number/*union*/ ) >> 5 ) - ( yyvsp[0].Number/*union*/ >> 31 ) ) * -60 ) - i;
          }
        }
      }
        break;
      case 20:
        yyMonth = yyvsp[ -2 ].Number/*union*/;
        yyDay = yyvsp[0].Number/*union*/;
        break;
      case 21:
        if ( yyvsp[ -4 ].Number/*union*/ > 100 )
        {
          yyYear = yyvsp[ -4 ].Number/*union*/;
          yyMonth = yyvsp[ -2 ].Number/*union*/;
          yyDay = yyvsp[0].Number/*union*/;
        }
        else
        {
          yyMonth = yyvsp[ -4 ].Number/*union*/;
          yyDay = yyvsp[ -2 ].Number/*union*/;
          yyYear = yyvsp[0].Number/*union*/;
        }
        break;
      case 22:
        yyMonth = yyvsp[ -1 ].Number/*union*/;
        yyDay = yyvsp[0].Number/*union*/;
        break;
      case 23:
        yyMonth = yyvsp[ -3 ].Number/*union*/;
        yyDay = yyvsp[ -2 ].Number/*union*/;
        yyYear = yyvsp[0].Number/*union*/;
        break;
      case 24:
        yyDay = yyvsp[ -1 ].Number/*union*/;
        yyMonth = yyvsp[0].Number/*union*/;
        break;
      case 25:
        yyDay = yyvsp[ -2 ].Number/*union*/;
        yyMonth = yyvsp[ -1 ].Number/*union*/;
        yyYear = yyvsp[0].Number/*union*/;
        break;
      case 26:
        yyDay = yyvsp[ -2 ].Number/*union*/;
        yyMonth = yyvsp[ -1 ].Number/*union*/;
        yyYear = yyvsp[0].Number/*union*/;
        break;
      case 27:
        yyDay = yyvsp[ -3 ].Number/*union*/;
        yyMonth = yyvsp[ -1 ].Number/*union*/;
        yyYear = yyvsp[0].Number/*union*/ * -1;
        break;
      case 28:
        yyDay = yyvsp[ -2 ].Number/*union*/;
        yyMonth = yyvsp[ -1 ].Number/*union*/ * -1;
        yyYear = yyvsp[0].Number/*union*/ * -1;
        yyDSTmode = DSToff;
        yyTimezone = 0;
        break;
      case 29:
        yyMonth = yyvsp[ -7 ].Number/*union*/;
        yyDay = yyvsp[ -6 ].Number/*union*/;
        yyYear = yyvsp[0].Number/*union*/;
        yyHour = yyvsp[ -5 ].Number/*union*/;
        yyMinutes = yyvsp[ -3 ].Number/*union*/;
        yySeconds = yyvsp[ -1 ].Number/*union*/;
        break;
      case 30:
        yyRelSeconds += yyvsp[ -1 ].Number/*union*/ * yyvsp[0].Number/*union*/;
        break;
      case 31:
        yyRelSeconds += yyvsp[ -1 ].Number/*union*/ * yyvsp[0].Number/*union*/;
        break;
      case 32:
        yyRelMonth += yyvsp[ -1 ].Number/*union*/ * yyvsp[0].Number/*union*/;
        break;
      case 33:
        yyRelMonth += yyvsp[ -1 ].Number/*union*/ * yyvsp[0].Number/*union*/;
        break;
      case 34:
        yyval.Number/*union*/ = 2;
        break;
      case 35:
        yyval = yyvsp[0];
        break;
      default:
        break;
      }
    }
    if ( yychar < 0 )
    {
      yychar = date_lex( );
      if ( yychar < 0 )
        yychar = 0;
    }
    yyn = yysindex[ yystate ];
    if ( yyn != 0 )
    {
      yyn += yychar;
      if ( yyn >= 0 && yyn <= 300 && yychar == yycheck[ yyn ] )
      {
        if ( yyssp < yysslim || yygrowstack( ) == 0 )
        {
          yystate = yytable[ yyn ];
          yyssp++;
          yyssp[0] = yytable[ yyn ];
          yyvsp++;
          yyvsp[0] = yylval;
          yychar = -1;
          if ( yyerrflag < 1 )
            continue;
          else
          {
            yyerrflag--;
          }
        }
      }
    }
    yyn = yyrindex[ yystate ];
    if ( yyn != 0 )
    {
      yyn += yychar;
      if ( yyn >= 0 && yyn <= 300 && yychar == yycheck[ yyn ] )
        yyn = yytable[ yyn ];
        yym = yylen[ yyn ];
    }
    if ( yyerrflag == 0 )
    {
      date_error( "syntax error" );
      yynerrs++;
    }
    if ( yyerrflag <= 2 )
    {
      yyerrflag = 3;
      while ( yyn = yysindex[ yyssp[0] ], yyn == 0 )
      {
        if ( yyssp <= yyss )
          continue;
        yyssp = &yyssp[ -1 ];
        yyvsp = &yyvsp[ -1 ];
      }
      yyn += 256;
      if ( yyn >= 0 && yyn <= 300 && yycheck[ yyn ] == 256 )
      {
        if ( yyssp < yysslim || yygrowstack( ) == 0 )
        {
          yystate = yytable[ yyn ];
          yyssp++;
          yyssp[0] = yytable[ yyn ];
          yyvsp++;
          yyvsp[0] = yylval;
        }
      }
    }
    else
    {
      if ( yychar != 0 )
      {
        yychar = -1;
      }
    }
  }
B18:  date_error( "yacc stack overflow" );
}
