#include "getdate.c.h"
static void yydestruct( char *yymsg, int yytype, YYSTYPE *yyvaluep, parser_control *pc );
static relative_time RELATIVE_TIME_0;
static yytype_uint8 yytranslate[277] = { 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 24, 2, 2, 25, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 23, 2, 2, 2, 2, 2, 22, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,  };
static yytype_uint8 yyr1[81] = { 0, 26, 27, 27, 28, 29, 29, 30, 30, 30, 30, 30, 30, 30, 30, 31, 31, 31, 31, 31, ' ', ' ', '!', '!', '!', '!', '!', '"', '"', '"', '"', '#', '#', '#', '#', '#', '#', '#', '#', '#', '$', '$', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '%', '&', '&', '&', '&', '&', '&', '\'', '\'', '(', '(', ')', ')', '*', '+', ',', ',', '-', '-',  };
static yytype_uint8 yyr2[81] = { 0, 2, 1, 1, 2, 0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 4, 5, 6, 7, 1, 2, 1, 2, 3, 1, 2, 1, 2, 2, 2, 3, 5, 3, 3, 3, 2, 4, 2, 3, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 0, 2, 0, 1,  };
static yytype_uint8 yydefact[98] = { 5, 0, 0, 2, 3, 'H', 'J', 'G', 'I', 4, 'E', 'F', 1, ',', '/', '5', '8', '=', '2', 27, 25, 20, 0, 0, 22, 0, 'K', 0, 0, 6, 7, 8, 9, 11, 10, 12, ')', '>', 13, 14, 28, 21, 0, '$', '*', '-', '3', '6', '9', '0', 29, 26, 'M', 23, '?', '@', 'B', 'C', 'D', 'A', '+', '.', '4', '7', ':', '1', 30, 15, '&', 0, 0, 0, 'L', ';', '<', '(', '#', 0, 0, 24, '"', '\'', '!', 'O', 31, '%', 'N', 'P', 'M', 0, 16, 0, 17, 'O', ' ', 'M', 18, 19,  };
static yytype_int8 yydefgoto[20] = { -1, 2, 3, 4, 29, 30, 31, ' ', '!', '"', '#', '$', '%', 9, 10, 11, '&', '\'', 'O', 'Z',  };
static yytype_int8 yypact[98] = { -10, '6', 'F', -81, 25, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, '7', -81, 'J', '2', '0', 10, '8', -5, 'G', 'H', -81, -81, -81, -81, -81, -81, -81, 'O', -81, -81, -81, -81, -81, 'A', '<', -81, -81, -81, -81, -81, -81, -81, -81, 16, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, ':', '*', 'B', 'C', -81, -81, -81, -81, -81, 'D', 'E', -81, -81, -81, -81, -7, '@', -81, -81, -81, 'I', -2, -81, 'K', -81, '5', -81, 'I', -81, -81,  };
static yytype_int8 yypgoto[20] = { -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, 3, -81, -81, 1, -81, -81, -80, -1,  };
static yytype_uint8 yytable[97] = { '<', '=', '>', '?', '@', 'A', 'B', 'W', '\\', 'C', 'D', 'X', 1, 'E', '3', 'a', 'Y', 6, 'F', 8, 'G', '6', '7', '8', '9', ':', ';', '5', '4', 'H', 13, 14, 15, 16, 17, 18, 19, 20, 21, 'N', 22, 23, 24, 25, 26, 27, 28, '6', '7', '8', '9', ':', ';', ',', '-', '.', '/', '0', '1', '2', 'R', '6', '7', '8', '9', ':', ';', 'W', '*', '+', 12, '_', 5, 6, 7, 8, 'P', 'Q', ')', '(', 'I', 'J', 'K', 'L', 'M', 'S', 'T', 'U', 'V', '[', ']', 0, '`', 0, '^', 0, 'N',  };
static yytype_int8 yycheck[97] = { 5, 6, 7, 8, 9, 10, 11, 14, 'X', 14, 15, 18, 22, 18, 4, '_', 23, 19, 23, 21, 25, 5, 6, 7, 8, 9, 10, 24, 18, 26, 5, 6, 7, 8, 9, 10, 11, 12, 13, 23, 15, 16, 17, 18, 19, 20, 21, 5, 6, 7, 8, 9, 10, 5, 6, 7, 8, 9, 10, 11, 18, 5, 6, 7, 8, 9, 10, 14, 18, 19, 0, 18, 18, 19, 20, 21, 18, 19, 4, 24, 9, 9, 3, 18, 24, 19, 19, 19, 19, 25, 'Y', -1, ']', -1, 19, -1, 23,  };
static yytype_uint8 yystos[98] = { 0, 22, 27, 28, 29, 18, 19, 20, 21, '\'', '(', ')', 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18, 19, 20, 21, 30, 31, ' ', '!', '"', '#', '$', '%', '&', '*', '+', 24, 4, 18, 19, 5, 6, 7, 8, 9, 10, 11, 4, 18, '&', 5, 6, 7, 8, 9, 10, 5, 6, 7, 8, 9, 10, 11, 14, 15, 18, 23, 25, '&', 9, 9, 3, 18, 24, 23, ',', 18, 19, 18, 19, 19, 19, 19, 14, 18, 23, '-', 25, ',', ')', 19, 18, '-', ',',  };
static table meridian_table[5] = { { "AM", 269, 0,  }
, { "A.M.", 269, 0,  }
, { "PM", 269, 1,  }
, { "P.M.", 269, 1,  }
, { 0, 0, 0,  }
,  };
static table dst_table[1] = { { "DST", 259, 0,  }
,  };
static table month_and_day_table[25] = { { "JANUARY", 270, 1,  }
, { "FEBRUARY", 270, 2,  }
, { "MARCH", 270, 3,  }
, { "APRIL", 270, 4,  }
, { "MAY", 270, 5,  }
, { "JUNE", 270, 6,  }
, { "JULY", 270, 7,  }
, { "AUGUST", 270, 8,  }
, { "SEPTEMBER", 270, 9,  }
, { "SEPT", 270, 9,  }
, { "OCTOBER", 270, 10,  }
, { "NOVEMBER", 270, 11,  }
, { "DECEMBER", 270, 12,  }
, { "SUNDAY", 266, 0,  }
, { "MONDAY", 266, 1,  }
, { "TUESDAY", 266, 2,  }
, { "TUES", 266, 2,  }
, { "WEDNESDAY", 266, 3,  }
, { "WEDNES", 266, 3,  }
, { "THURSDAY", 266, 4,  }
, { "THUR", 266, 4,  }
, { "THURS", 266, 4,  }
, { "FRIDAY", 266, 5,  }
, { "SATURDAY", 266, 6,  }
, { 0, 0, 0,  }
,  };
static table time_units_table[11] = { { "YEAR", 260, 1,  }
, { "MONTH", 261, 1,  }
, { "FORTNIGHT", 265, 14,  }
, { "WEEK", 265, 7,  }
, { "DAY", 265, 1,  }
, { "HOUR", 262, 1,  }
, { "MINUTE", 263, 1,  }
, { "MIN", 263, 1,  }
, { "SECOND", 264, 1,  }
, { "SEC", 264, 1,  }
, { 0, 0, 0,  }
,  };
static table relative_time_table[20] = { { "TOMORROW", 265, 1,  }
, { "YESTERDAY", 265, -1,  }
, { "TODAY", 265, 0,  }
, { "NOW", 265, 0,  }
, { "LAST", 271, -1,  }
, { "THIS", 271, 0,  }
, { "NEXT", 271, 1,  }
, { "FIRST", 271, 1,  }
, { "THIRD", 271, 3,  }
, { "FOURTH", 271, 4,  }
, { "FIFTH", 271, 5,  }
, { "SIXTH", 271, 6,  }
, { "SEVENTH", 271, 7,  }
, { "EIGHTH", 271, 8,  }
, { "NINTH", 271, 9,  }
, { "TENTH", 271, 10,  }
, { "ELEVENTH", 271, 11,  }
, { "TWELFTH", 271, 12,  }
, { "AGO", 258, 1,  }
, { 0, 0, 0,  }
,  };
static table universal_time_zone_table[4] = { { "GMT", 272, 0,  }
, { "UT", 272, 0,  }
, { "UTC", 272, 0,  }
, { 0, 0, 0,  }
,  };
static table time_zone_table[48] = { { "WET", 272, 0,  }
, { "WEST", 267, 0,  }
, { "BST", 267, 0,  }
, { "ART", 272, -180,  }
, { "BRT", 272, -180,  }
, { "BRST", 267, -180,  }
, { "NST", 272, -210,  }
, { "NDT", 267, -210,  }
, { "AST", 272, -240,  }
, { "ADT", 267, -240,  }
, { "CLT", 272, -240,  }
, { "CLST", 267, -240,  }
, { "EST", 272, -300,  }
, { "EDT", 267, -300,  }
, { "CST", 272, -360,  }
, { "CDT", 267, -360,  }
, { "MST", 272, -420,  }
, { "MDT", 267, -420,  }
, { "PST", 272, -480,  }
, { "PDT", 267, -480,  }
, { "AKST", 272, -540,  }
, { "AKDT", 267, -540,  }
, { "HST", 272, -600,  }
, { "HAST", 272, -600,  }
, { "HADT", 267, -600,  }
, { "SST", 272, -720,  }
, { "WAT", 272, 60,  }
, { "CET", 272, 60,  }
, { "CEST", 267, 60,  }
, { "MET", 272, 60,  }
, { "MEZ", 272, 60,  }
, { "MEST", 267, 60,  }
, { "MESZ", 267, 60,  }
, { "EET", 272, 120,  }
, { "EEST", 267, 120,  }
, { "CAT", 272, 120,  }
, { "SAST", 272, 120,  }
, { "EAT", 272, 180,  }
, { "MSK", 272, 180,  }
, { "MSD", 267, 180,  }
, { "IST", 272, 330,  }
, { "SGT", 272, 480,  }
, { "KST", 272, 540,  }
, { "JST", 272, 540,  }
, { "GST", 272, 600,  }
, { "NZST", 272, 720,  }
, { "NZDT", 267, 720,  }
, { 0, 0, 0,  }
,  };
static table military_table[26] = { { "A", 272, -60,  }
, { "B", 272, -120,  }
, { "C", 272, -180,  }
, { "D", 272, -240,  }
, { "E", 272, -300,  }
, { "F", 272, -360,  }
, { "G", 272, -420,  }
, { "H", 272, -480,  }
, { "I", 272, -540,  }
, { "K", 272, -600,  }
, { "L", 272, -660,  }
, { "M", 272, -720,  }
, { "N", 272, 60,  }
, { "O", 272, 120,  }
, { "P", 272, 180,  }
, { "Q", 272, 240,  }
, { "R", 272, 300,  }
, { "S", 272, 360,  }
, { "T", 272, 420,  }
, { "U", 272, 480,  }
, { "V", 272, 540,  }
, { "W", 272, 600,  }
, { "X", 272, 660,  }
, { "Y", 272, 720,  }
, { "Z", 272, 0,  }
, { 0, 0, 0,  }
,  };
void yydestruct( char *yymsg, int yytype, YYSTYPE *yyvaluep, parser_control *pc )
{
  if ( yymsg == 0 )
  {
    yymsg = "Deleting";
  }
  return;
}
int yyparse( parser_control *pc )
{
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
  int yystate;
  int yyn;
  int yyresult;
  int yyerrstatus;
  int yytoken = 0;
  yytype_int16 yyssa[20];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;
  YYSTYPE yyvsa[20];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;
  unsigned int yystacksize = 20;
  YYSTYPE yyval;
  int yylen = 0;
  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = -2;
  yyssp = yyss;
  yyvsp = yyvs;
  while ( yyssp[0] = yystate, yyss[ yystacksize - 1 ] <= yyssp )
  {
    if ( yystate != 12 )
    {
      yyn = yypact[ yystate ];
      if ( yyn != -81 )
      {
        if ( yychar == -2 )
        {
          yychar = yylex( &yylval, pc );
        }
        if ( yychar < 1 )
        {
          yychar = yytoken = 0;
        }
        else
        {
          yytoken = yychar <= 276 ? yytranslate[ yychar ] : 2;
        }
        yyn += yytoken;
        if ( yyn >= 0 && yyn <= 96 && yytoken == yycheck[ yyn ] )
        {
          yyn = yytable[ yyn ];
          if ( yyn < 1 )
          {
            if ( yyn != 0 && yyn != -1 )
              yyn *= -1;
              yyval.intval = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ));
              yylen = yyr2[ yyn ];
              *(int*)(ebp_2147483632 - 128) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 4);
              *(int*)(ebp_2147483632 - 124) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 8);
              *(int*)(ebp_2147483632 - 120) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 12);
              *(int*)(ebp_2147483632 - 116) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 16);
              *(int*)(ebp_2147483632 - 112) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 20);
              *(int*)(ebp_2147483632 - 108) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 24);
              switch ( yyn )
              {
              case 4:
                pc->seconds.tv_sec = yyvsp->intval;
                pc->seconds.tv_nsec = yyvsp->relative_time.month/*error:'l'*/;
                pc->timespec_seen = 1;
                yyvsp->intval = yyval.intval;
                yyvsp = &yyvsp[ yylen * -1 ];
                yyssp = &yyssp[ yylen * -1 ];
                yylen = 0;
                yyvsp++;
                yyvsp->relative_time.month/*error:'l'*/ = *(int*)(ebp_2147483632 - 128);
                yyvsp->relative_time.day/*error:'l'*/ = *(int*)(ebp_2147483632 - 124);
                yyvsp->relative_time.hour/*error:'l'*/ = *(int*)(ebp_2147483632 - 120);
                yyvsp->relative_time.minutes/*error:'l'*/ = *(int*)(ebp_2147483632 - 116);
                yyvsp->relative_time.seconds/*error:'l'*/ = *(int*)(ebp_2147483632 - 112);
                yyvsp->relative_time.ns/*error:'l'*/ = *(int*)(ebp_2147483632 - 108);
                yyn = yyr1[ yyn ];
                yystate = yypgoto[ yyn - 26 ] + yyssp[0];
                if ( yystate >= 0 && yystate <= 96 && yyssp[0] == yycheck[ yystate ] )
                  yystate = yytable[ yystate ];
                  yyssp++;
                else
                  yystate = yydefgoto[ yyn - 26 ];
                break;
              case 7:
                pc->times_seen++;
                break;
              case 8:
                pc->local_zones_seen++;
                break;
              case 9:
                pc->zones_seen++;
                break;
              case 10:
                pc->dates_seen++;
                break;
              case 11:
                pc->days_seen++;
                break;
              case 12:
                pc->rels_seen = 1;
                break;
              case 15:
                pc->hour = *(int*)(yyvsp - 24);
                pc->minutes = 0;
                pc->seconds.tv_sec = 0;
                pc->seconds.tv_nsec = 0;
                pc->meridian = yyvsp->intval;
                break;
              case 16:
                pc->hour = *(int*)(yyvsp - 80);
                pc->minutes = *(int*)(yyvsp - 24);
                pc->seconds.tv_sec = 0;
                pc->seconds.tv_nsec = 0;
                pc->meridian = yyvsp->intval;
                break;
              case 17:
                pc->hour = *(int*)(yyvsp - 108);
                pc->minutes = *(int*)(yyvsp - 52);
                pc->seconds.tv_sec = 0;
                pc->seconds.tv_nsec = 0;
                pc->meridian = 2;
                pc->zones_seen++;
                pc->time_zone = time_zone_hhmm( yyvsp - 28, yyvsp->intval );
                break;
              case 18:
                pc->hour = *(int*)(yyvsp - 136);
                pc->minutes = *(int*)(yyvsp - 80);
                pc->seconds.tv_sec = *(int*)(yyvsp - 28);
                pc->seconds.tv_nsec = *(int*)(yyvsp - 24);
                pc->meridian = yyvsp->intval;
                break;
              case 19:
                pc->hour = *(int*)(yyvsp - 164);
                pc->minutes = *(int*)(yyvsp - 108);
                pc->seconds.tv_sec = *(int*)(yyvsp - 56);
                pc->seconds.tv_nsec = *(int*)(yyvsp - 52);
                pc->meridian = 2;
                pc->zones_seen++;
                pc->time_zone = time_zone_hhmm( yyvsp - 28, yyvsp->intval );
                break;
              case 20:
                pc->local_isdst = yyvsp->intval;
                pc->dsts_seen += yyvsp->intval > 0;
                break;
              case 21:
                pc->local_isdst = 1;
                pc->dsts_seen += *(int*)(yyvsp - 28) < 1 ? 1 : 2;
                break;
              case 22:
                pc->time_zone = yyvsp->intval;
                break;
              case 23:
                pc->time_zone = *(int*)(yyvsp - 28);
                pc->rel.ns += yyvsp->relative_time.ns/*error:'l'*/;
                pc->rel.seconds += yyvsp->relative_time.seconds/*error:'l'*/;
                pc->rel.minutes += yyvsp->relative_time.minutes/*error:'l'*/;
                pc->rel.hour += yyvsp->relative_time.hour/*error:'l'*/;
                pc->rel.day += (int)yyvsp->relative_time.day/*error:'l'*/;
                pc->rel.month += yyvsp->relative_time.month/*error:'l'*/;
                pc->rel.year += yyvsp->intval;
                pc->rels_seen = 1;
                break;
              case 24:
                pc->time_zone = *(int*)(yyvsp - 56) + time_zone_hhmm( yyvsp - 28, yyvsp->intval );
                break;
              case 25:
                pc->time_zone = yyvsp->intval + 60;
                break;
              case 26:
                pc->time_zone = *(int*)(yyvsp - 28) + 60;
                break;
              case 27:
                pc->day_ordinal = 1;
                pc->day_number = yyvsp->intval;
                break;
              case 28:
                pc->day_ordinal = 1;
                pc->day_number = *(int*)(yyvsp - 28);
                break;
              case 29:
                pc->day_ordinal = *(int*)(yyvsp - 28);
                pc->day_number = yyvsp->intval;
                break;
              case 30:
                pc->day_ordinal = *(int*)(yyvsp - 24);
                pc->day_number = yyvsp->intval;
                break;
              case 31:
                pc->month = *(int*)(yyvsp - 52);
                pc->day = yyvsp->relative_time.month/*error:'l'*/;
                break;
              case 32:
                if ( *(int*)(yyvsp - 104) > 3 )
                {
                  pc->year.negative = *(int*)(yyvsp - 112);
                  pc->year.value = *(int*)(yyvsp - 108);
                  pc->year.digits = *(int*)(yyvsp - 104);
                  pc->month = *(int*)(yyvsp - 52);
                  pc->day = yyvsp->relative_time.month/*error:'l'*/;
                }
                else
                {
                  pc->month = *(int*)(yyvsp - 108);
                  pc->day = *(int*)(yyvsp - 52);
                  pc->year.negative = yyvsp->intval;
                  pc->year.value = yyvsp->relative_time.month/*error:'l'*/;
                  pc->year.digits = yyvsp->relative_time.day/*error:'l'*/;
                }
                break;
              case 33:
                pc->year.negative = *(int*)(yyvsp - 56);
                pc->year.value = *(int*)(yyvsp - 52);
                pc->year.digits = *(int*)(yyvsp - 48);
                pc->month = *(int*)(yyvsp - 24) * -1;
                pc->day = yyvsp->relative_time.month/*error:'l'*/ * -1;
                break;
              case 34:
                pc->day = *(int*)(yyvsp - 52);
                pc->month = *(int*)(yyvsp - 28);
                pc->year.value = yyvsp->relative_time.month/*error:'l'*/ * -1;
                pc->year.digits = yyvsp->relative_time.day/*error:'l'*/;
                break;
              case 35:
                pc->month = *(int*)(yyvsp - 56);
                pc->day = *(int*)(yyvsp - 24) * -1;
                pc->year.value = yyvsp->relative_time.month/*error:'l'*/ * -1;
                pc->year.digits = yyvsp->relative_time.day/*error:'l'*/;
                break;
              case 36:
                pc->month = *(int*)(yyvsp - 28);
                pc->day = yyvsp->relative_time.month/*error:'l'*/;
                break;
              case 37:
                pc->month = *(int*)(yyvsp - 84);
                pc->day = *(int*)(yyvsp - 52);
                pc->year.negative = yyvsp->intval;
                pc->year.value = yyvsp->relative_time.month/*error:'l'*/;
                pc->year.digits = yyvsp->relative_time.day/*error:'l'*/;
                break;
              case 38:
                pc->day = *(int*)(yyvsp - 24);
                pc->month = yyvsp->intval;
                break;
              case 39:
                pc->day = *(int*)(yyvsp - 52);
                pc->month = *(int*)(yyvsp - 28);
                pc->year.negative = yyvsp->intval;
                pc->year.value = yyvsp->relative_time.month/*error:'l'*/;
                pc->year.digits = yyvsp->relative_time.day/*error:'l'*/;
                break;
              case 40:
                pc->rel.ns -= *(int*)(yyvsp - 4);
                pc->rel.seconds -= *(int*)(yyvsp - 8);
                pc->rel.minutes -= *(int*)(yyvsp - 12);
                pc->rel.hour -= *(int*)(yyvsp - 16);
                pc->rel.day -= *(int*)(yyvsp - 20);
                pc->rel.month -= *(int*)(yyvsp - 24);
                pc->rel.year -= *(int*)(yyvsp - 28);
                break;
              case 41:
                pc->rel.ns += yyvsp->relative_time.ns/*error:'l'*/;
                pc->rel.seconds += yyvsp->relative_time.seconds/*error:'l'*/;
                pc->rel.minutes += yyvsp->relative_time.minutes/*error:'l'*/;
                pc->rel.hour += yyvsp->relative_time.hour/*error:'l'*/;
                pc->rel.day += (int)yyvsp->relative_time.day/*error:'l'*/;
                pc->rel.month += yyvsp->relative_time.month/*error:'l'*/;
                pc->rel.year += yyvsp->intval;
                break;
              case 42:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                yyval.intval = *(int*)(yyvsp - 28);
                break;
              case 43:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                yyval.intval = *(int*)(yyvsp - 24);
                break;
              case 44:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                yyval.intval = 1;
                break;
              case 45:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 128) = *(int*)(yyvsp - 28);
                break;
              case 46:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 128) = *(int*)(yyvsp - 24);
                break;
              case 47:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 128) = 1;
                break;
              case 48:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 124) = yyvsp->intval * *(int*)(yyvsp - 28);
                break;
              case 49:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 124) = yyvsp->intval * *(int*)(yyvsp - 24);
                break;
              case 50:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 124) = yyvsp->intval;
                break;
              case 51:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 120) = *(int*)(yyvsp - 28);
                break;
              case 52:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 120) = *(int*)(yyvsp - 24);
                break;
              case 53:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 120) = 1;
                break;
              case 54:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 116) = *(int*)(yyvsp - 28);
                break;
              case 55:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 116) = *(int*)(yyvsp - 24);
                break;
              case 56:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 116) = 1;
                break;
              case 57:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 112) = *(int*)(yyvsp - 28);
                break;
              case 58:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 112) = *(int*)(yyvsp - 24);
                break;
              case 59:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 112) = *(int*)(yyvsp - 28);
                *(int*)(ebp_2147483632 - 108) = *(int*)(yyvsp - 24);
                break;
              case 60:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 112) = *(int*)(yyvsp - 28);
                *(int*)(ebp_2147483632 - 108) = *(int*)(yyvsp - 24);
                break;
              case 61:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 112) = 1;
                break;
              case 63:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                yyval.intval = *(int*)(yyvsp - 24);
                break;
              case 64:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 128) = *(int*)(yyvsp - 24);
                break;
              case 65:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 124) = yyvsp->intval * *(int*)(yyvsp - 24);
                break;
              case 66:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 120) = *(int*)(yyvsp - 24);
                break;
              case 67:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 116) = *(int*)(yyvsp - 24);
                break;
              case 68:
                yyval.intval = RELATIVE_TIME_0.year;
                *(int*)(ebp_2147483632 - 128) = RELATIVE_TIME_0.month;
                *(int*)(ebp_2147483632 - 124) = RELATIVE_TIME_0.day;
                *(int*)(ebp_2147483632 - 120) = RELATIVE_TIME_0.hour;
                *(int*)(ebp_2147483632 - 116) = RELATIVE_TIME_0.minutes;
                *(int*)(ebp_2147483632 - 112) = RELATIVE_TIME_0.seconds;
                *(int*)(ebp_2147483632 - 108) = RELATIVE_TIME_0.ns;
                *(int*)(ebp_2147483632 - 112) = *(int*)(yyvsp - 24);
                break;
              case 72:
                yyval.intval = yyvsp->relative_time.month/*error:'l'*/;
                *(int*)(ebp_2147483632 - 128) = 0;
                break;
              case 74:
                yyval.intval = yyvsp->relative_time.month/*error:'l'*/;
                *(int*)(ebp_2147483632 - 128) = 0;
                break;
              case 75:
                digits_to_date_time( pc, yyvsp[0].intval/*error:'l'*/ );
                break;
              case 76:
                digits_to_date_time( pc, yyvsp - 28 );
                pc->rel.ns += yyvsp->relative_time.ns/*error:'l'*/;
                pc->rel.seconds += yyvsp->relative_time.seconds/*error:'l'*/;
                pc->rel.minutes += yyvsp->relative_time.minutes/*error:'l'*/;
                pc->rel.hour += yyvsp->relative_time.hour/*error:'l'*/;
                pc->rel.day += (int)yyvsp->relative_time.day/*error:'l'*/;
                pc->rel.month += yyvsp->relative_time.month/*error:'l'*/;
                pc->rel.year += yyvsp->intval;
                pc->rels_seen = 1;
                break;
              case 77:
                yyval.intval = -1;
                break;
              case 78:
                yyval.intval = yyvsp->relative_time.month/*error:'l'*/;
                break;
              case 79:
                yyval.intval = 2;
                break;
              case 80:
                yyval.intval = yyvsp->intval;
                break;
              default:
                break;
              }
            else
            {
              if ( yyerrstatus == 0 )
              {
                yynerrs++;
                yyerror( pc, "syntax error" );
              }
              if ( yyerrstatus == 3 )
              {
                if ( yychar < 1 )
                {
                  if ( yychar != 0 )
                  {
                  }
                  else
                    yyresult = 1;
                    if ( yychar != -2 )
                      yydestruct( "Cleanup: discarding lookahead", yytoken, &yylval, pc );
                    yyvsp = &yyvsp[ yylen * -1 ];
                    yyssp = &yyssp[ yylen * -1 ];
                    for ( ; yyssp != yyss; yyssp = &yyssp[ -1 ] )
                    {
                      yydestruct( "Cleanup: popping", yystos[ yyssp[0] ], yyvsp, pc );
                      yyvsp -= 28;
                      //yyssp = &yyssp[ -1 ];
                    }
                    if ( yyssa[0] != yyss )
                    {
                      free( yyss );
                      break;
                    }
                }
                else
                {
                  yydestruct( "Error: discarding", yytoken, &yylval, pc );
                  yychar = -2;
                }
              }
              yyerrstatus = 3;
              while ( yyn = yypact[ yystate ], yyn == -81 )
              {
                if ( yyssp != yyss )
                {
                  yydestruct( "Error: popping", yystos[ yystate ], yyvsp, pc );
                  yyvsp -= 28;
                  yyssp = &yyssp[ -1 ];
                  yystate = yyssp[0];
                }
              }
              yyn++;
              if ( yyn >= 0 && yyn <= 96 && yycheck[ yyn ] == 1 )
              {
                yyn = yytable[ yyn ];
                if ( yyn >= 1 )
                  yyvsp->intval = yylval.intval;
                {
                  yyvsp->intval = yylval.intval;
                  yyvsp++;
                  yyvsp->relative_time.month/*error:'l'*/ = *(int*)(ebp_2147483632 - 100);
                  yyvsp->relative_time.day/*error:'l'*/ = *(int*)(ebp_2147483632 - 96);
                  yyvsp->relative_time.hour/*error:'l'*/ = *(int*)(ebp_2147483632 - 92);
                  yyvsp->relative_time.minutes/*error:'l'*/ = *(int*)(ebp_2147483632 - 88);
                  yyvsp->relative_time.seconds/*error:'l'*/ = *(int*)(ebp_2147483632 - 84);
                  yyvsp->relative_time.ns/*error:'l'*/ = *(int*)(ebp_2147483632 - 80);
                  yystate = yyn;
                }
              }
            }
          }
          else
          {
            if ( yyerrstatus != 0 )
              yyerrstatus--;
            yyvsp->intval = yylval.intval;
            yychar = -2;
            yystate = yyn;
            yyvsp++;
            yyvsp->relative_time.month/*error:'l'*/ = *(int*)(ebp_2147483632 - 100);
            yyvsp->relative_time.day/*error:'l'*/ = *(int*)(ebp_2147483632 - 96);
            yyvsp->relative_time.hour/*error:'l'*/ = *(int*)(ebp_2147483632 - 92);
            yyvsp->relative_time.minutes/*error:'l'*/ = *(int*)(ebp_2147483632 - 88);
            yyvsp->relative_time.seconds/*error:'l'*/ = *(int*)(ebp_2147483632 - 84);
            yyvsp->relative_time.ns/*error:'l'*/ = *(int*)(ebp_2147483632 - 80);
          }
        }
      }
      yyn = yydefact[ yystate ];
      if ( yyn != 0 )
      {
        yyval.intval = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ));
        yylen = yyr2[ yyn ];
        *(int*)(ebp_2147483632 - 128) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 4);
        *(int*)(ebp_2147483632 - 124) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 8);
        *(int*)(ebp_2147483632 - 120) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 12);
        *(int*)(ebp_2147483632 - 116) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 16);
        *(int*)(ebp_2147483632 - 112) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 20);
        *(int*)(ebp_2147483632 - 108) = *(int*)(yyvsp + ( ( ( yylen * -32 ) + 32 ) - ( ( yylen * -4 ) + 4 ) ) + 24);
        switch ( yyn )
        {
        case 4:
          break;
        case 7:
          break;
        case 8:
          break;
        case 9:
          break;
        case 10:
          break;
        case 11:
          break;
        case 12:
          break;
        case 15:
          break;
        case 16:
          break;
        case 17:
          break;
        case 18:
          break;
        case 19:
          break;
        case 20:
          break;
        case 21:
          break;
        case 22:
          break;
        case 23:
          break;
        case 24:
          break;
        case 25:
          break;
        case 26:
          break;
        case 27:
          break;
        case 28:
          break;
        case 29:
          break;
        case 30:
          break;
        case 31:
          break;
        case 32:
          break;
        case 33:
          break;
        case 34:
          break;
        case 35:
          break;
        case 36:
          break;
        case 37:
          break;
        case 38:
          break;
        case 39:
          break;
        case 40:
          break;
        case 41:
          break;
        case 42:
          break;
        case 43:
          break;
        case 44:
          break;
        case 45:
          break;
        case 46:
          break;
        case 47:
          break;
        case 48:
          break;
        case 49:
          break;
        case 50:
          break;
        case 51:
          break;
        case 52:
          break;
        case 53:
          break;
        case 54:
          break;
        case 55:
          break;
        case 56:
          break;
        case 57:
          break;
        case 58:
          break;
        case 59:
          break;
        case 60:
          break;
        case 61:
          break;
        case 63:
          break;
        case 64:
          break;
        case 65:
          break;
        case 66:
          break;
        case 67:
          break;
        case 68:
          break;
        case 72:
          break;
        case 74:
          break;
        case 75:
          break;
        case 76:
          break;
        case 77:
          break;
        case 78:
          break;
        case 79:
          break;
        case 80:
          break;
        default:
          break;
        }
      }
      else
      {
      }
    }
    else
      yyresult = 0;
  }
}
