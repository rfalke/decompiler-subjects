#include "parsdate.c.h"
static char yysccsid[36];
static char *yyInput;
static DSTMODE yyDSTmode;
static int yyHaveDate;
static int yyHaveRel;
static int yyHaveTime;
static time_t yyTimezone;
static time_t yyDay;
static time_t yyHour;
static time_t yyMinutes;
static time_t yyMonth;
static time_t yySeconds;
static time_t yyYear;
static MERIDIAN yyMeridian;
static time_t yyRelMonth;
static time_t yyRelSeconds;
static short yylhs[36];
static short yylen[36];
static short yydefred[59];
static short yydgoto[9];
static short yysindex[59];
static short yyrindex[59];
static short yygindex[9];
static short yytable[301];
static short yycheck[301];
int yydebug;
int yynerrs;
static TABLE MonthDayTable[19];
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
static short *yyss;
static short *yysslim;
static YYSTYPE *yyvs;
static unsigned int yystacksize;
static TABLE UnitsTable[9];
static TABLE TimezoneTable[55];
void date_error( char *s )
{
  return;
}
time_t ToSeconds( time_t Hours, time_t Minutes, time_t Seconds, MERIDIAN Meridian )
{
  if ( Minutes < 0 || Minutes > 59 || Seconds < 0 || Seconds > 61 )
  {
  }
  if ( Meridian == MER24 )
  {
    if ( Hours < 0 || Hours > 23 )
    {
    }
  }
  else
  if ( Hours <= 0 || Hours > 12 )
  {
  }
  if ( Hours == 12 )
    Hours = 0;
  if ( Meridian == MERpm )
    Hours += 12;
  return Seconds + ( ( ( Hours * 3840 ) + ( Minutes * 64 ) ) - ( ( Minutes + ( Hours * 60 ) ) << 2 ) );
}
time_t Convert( time_t Month, time_t Day, time_t Year, time_t Hours, time_t Minutes, time_t Seconds, MERIDIAN Meridian, DSTMODE dst )
{
  static int DaysNormal[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  static int DaysLeap[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  static int LeapYears[17] = { 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032, 2036 };
  int *yp;
  int *mp;
  int i;
  time_t Julian;
  time_t tod;
  if ( Year < 0 )
    Year = 0 - Year;
  if ( Year <= 69 )
    Year += 2000;
  if ( Year <= 99 )
    Year += 1900;
  if ( Year <= 1969 )
    Year += 100;
  mp = DaysNormal;
  yp = LeapYears;
  for ( ; yp < ""; yp++ )
  {
    if ( yp[0] == Year )
    {
      mp = DaysLeap;
      break;
    }
    else
    {
      // yp++;
    }
  }
  if ( Year <= 1969 || Year > 2038 || Month <= 0 || Month > 12 || Day <= 0 || mp[ Month ] < Day )
  {
    return -1;
  }
  Julian = Day + ( Year * 365 ) + -719050 + -1;
  yp = LeapYears;
  for ( ; yp < "" && yp[0] < Year; Julian++ )
  {
    yp++;
    // Julian++;
  }
  i = 1;
  for ( ; i < Month; i++ )
  {
    mp++;
    Julian += mp[0];
    // i++;
  }
  Julian *= 0x15180;
  Julian += yyTimezone * 60;
  tod = ToSeconds( Hours, Minutes, Seconds, Meridian );
  if ( tod < 0 )
  {
    return -1;
  }
  Julian += tod;
  tod = Julian;
  if ( dst == DSTon || ( dst == DSTmaybe && *(int*)localtime( &tod )/*.32*/ ) )
    Julian += -3600;
  return Julian;
}
time_t DSTcorrect( time_t Start, time_t Future )
{
  time_t StartDay = ( (/*HI*/int)( 0x2aaaaaab * ( *(int*)localtime( &Start )/*.8*/ + 1 ) ) >> 2 ) - ( ( *(int*)localtime( &Start )/*.8*/ + 1 ) >> 31 );
  time_t FutureDay;
  StartDay = ( *(int*)localtime( &Start )/*.8*/ + 1 ) - ( StartDay * 24 );
  FutureDay = ( (/*HI*/int)( 0x2aaaaaab * ( *(int*)localtime( &Future )/*.8*/ + 1 ) ) >> 2 ) - ( ( *(int*)localtime( &Future )/*.8*/ + 1 ) >> 31 );
  FutureDay = ( *(int*)localtime( &Future )/*.8*/ + 1 ) - ( FutureDay * 24 );
  return ( Future - Start ) + ( ( StartDay - FutureDay ) * 3600 );
}
time_t RelativeMonth( time_t Start, time_t RelMonth )
{
  struct tm *tm = (struct tm*)localtime( &Start );
  time_t Month = RelMonth + tm->tm_mon + ( tm->tm_year * 12 );
  time_t Year = ( Month / 12 ) + 1900;
  Month = ( Month - ( ( Month / 12 ) * 12 ) ) + 1;
  return DSTcorrect( Start, Convert( Month, tm->tm_mday, Year, tm->tm_hour, tm->tm_min, tm->tm_sec, 2, 2 ) );
}
int LookupWord( char *buff, int length )
{
  char *p = buff;
  char *q;
  TABLE *tp;
  int c = p[0];
  if ( length == 3 || ( length == 4 && p[3] == '.' ) )
  {
    tp = MonthDayTable;
    for ( ; tp < "year"; tp++ )
    {
      q = &tp->name[0];
      if ( c == q[0] && q[1] == p[1] && q[2] == p[2] )
      {
        yylval.Number = tp->value;
        return tp->type;
      }
      // tp++;
    }
  }
  else
  {
    tp = MonthDayTable;
    for ( ; tp < "year"; tp++ )
    {
      if ( c == tp->name && strcmp( p, &tp->name[0] ) == 0 )
      {
        yylval.Number = tp->value;
        return tp->type;
      }
      // tp++;
    }
  }
  tp = TimezoneTable;
  for ( ; tp < ""; tp++ )
  {
    if ( c == tp->name && tp->name[1] == p[1] && strcmp( p, &tp->name[0] ) == 0 )
    {
      yylval.Number = tp->value;
      return tp->type;
    }
    // tp++;
  }
  if ( strcmp( buff, "dst" ) == 0 )
  {
    return 266;
  }
  tp = UnitsTable;
  for ( ; tp < "gmt"; tp++ )
  {
    if ( c == tp->name && strcmp( p, &tp->name[0] ) == 0 )
    {
      yylval.Number = tp->value;
      return tp->type;
    }
    // tp++;
  }
  length += -1;
  if ( length > 0 && p[ length ] == 's' )
  {
    p[ length ] = 0;
    tp = UnitsTable;
    for ( ; tp < "gmt"; tp++ )
    {
      if ( c == tp->name && strcmp( p, &tp->name[0] ) == 0 )
      {
        p[ length ] = 's';
        yylval.Number = tp->value;
        return tp->type;
      }
      // tp++;
    }
    p[ length ] = 's';
  }
  length++;
  p = buff;
  q = buff;
  for ( ; q[0]; q++ )
  {
    if ( q[0] != '.' )
    {
      p[0] = q[0];
      p++;
    }
    // q++;
  }
  p[0] = 0;
  if ( buff[1] == 'm' && buff[2] == 0 )
  {
    if ( buff[0] == 'a' )
    {
      yylval.Number = 0;
      return 259;
    }
    if ( buff[0] == 'p' )
    {
      yylval.Number = 1;
      return 259;
    }
  }
  if ( p != length )
  {
    c = buff[0];
    p = buff;
    tp = TimezoneTable;
    for ( ; tp < ""; tp++ )
    {
      if ( c == tp->name && tp->name[1] == p[1] && strcmp( p, &tp->name[0] ) == 0 )
      {
        yylval.Number = tp->value;
        return tp->type;
      }
      // tp++;
    }
  }
  yylval.Number = 0;
  return 265;
}
int date_lex( void )
{
  int eax;
  int c;
  char *p;
  char buff[20];
  int sign;
  int i;
  int nesting;
  while ( yyInput[0] >= 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( yyInput[0] * 2 )) & 8192 ) )
  {
    yyInput++;
  }
  c = yyInput[0];
  if ( c == 40 )
  {
    nesting = 1;
    while ( yyInput++, c = yyInput[0], c != 41 )
    {
      if ( c == 40 )
      {
        nesting++;
      }
      else
      {
        return 63;
      }
    }
    nesting += -1;
    if ( nesting == 0 )
    {
      yyInput++;
    }
  }
  else
  {
    if ( ( !(_Bool)( ( c >> 7 ) & 1 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( c * 2 )) & 2048 ) ) || c == 45 || c == 43 )
    {
      if ( c == 45 || c == 43 )
      {
        sign = c == 45 ? -1 : 1;
        yyInput++;
        if ( yyInput[0] < 0 || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( yyInput[0] * 2 )) & 2048 ) == 0 )
        {
          yyInput = &yyInput[ -1 ];
          return yyInput[0];
          yyInput++;
        }
      }
      else
        sign = 0;
      i = 0;
      while ( c = yyInput[0], yyInput++, !( ( ( c != 0 ) ^ 1 ) & 255 ) && !(_Bool)( ( c >> 7 ) & 1 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( c * 2 )) & 2048 ) )
      {
        i = c + ( i * 10 ) + -48;
      }
      yyInput = &yyInput[ -1 ];
      yylval.Number = sign < 0 ? 0 - i : i;
      return 264;
    }
    else
    {
      if ( !(_Bool)( ( c >> 7 ) & 1 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( c * 2 )) & 1024 ) )
      {
        p = buff;
        while ( c = yyInput[0], yyInput++, ( ( c == 46 ) & 255 ) || ( !(_Bool)( ( c >> 7 ) & 1 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( c * 2 )) & 1024 ) ) )
        {
          if ( buff[19] <= p )
            continue;
          else
          {
            p[0] = c;
            p++;
          }
        }
        p[0] = 0;
        yyInput = &yyInput[ -1 ];
      }
      else
      {
        return yyInput[0];
        yyInput++;
      }
    }
  }
}
int GetTimeInfo( TIMEINFO *Now )
{
  static time_t LastTime;
  static long LastTzone;
  struct tm *tm;
  struct timeval tv;
  if ( gettimeofday( &tv.tv_sec, ebp_36 ) == -1 )
  {
    return -1;
  }
  Now->time = tv.tv_sec;
  Now->usec = tv.tv_usec;
  if ( Now->time - LastTime > 3600 )
  {
    LastTime = Now->time;
    tm = (struct tm*)localtime( Now );
    if ( tm == 0 )
    {
      return -1;
    }
    LastTzone = ( ( (/*HI*/int)( -2004318071 * ( 0 - tm->tm_gmtoff ) ) + ( 0 - tm->tm_gmtoff ) ) >> 5 ) - ( ( 0 - tm->tm_gmtoff ) >> 31 );
  }
  Now->tzone = LastTzone;
  return 0;
}
time_t parsedate( char *p, TIMEINFO *now )
{
  struct tm *tm;
  TIMEINFO ti;
  time_t Start;
  yyInput = p;
  if ( now == 0 )
  {
    now = &ti;
    GetTimeInfo( &ti );
  }
  tm = (struct tm*)localtime( now );
  yyYear = tm->tm_year + 1900;
  yyMonth = tm->tm_mon + 1;
  yyDay = tm->tm_mday;
  yyTimezone = now->tzone;
  if ( tm->tm_isdst )
    yyTimezone += 60;
  yyDSTmode = DSTmaybe;
  yyHour = 0;
  yyMinutes = 0;
  yySeconds = 0;
  yyMeridian = MER24;
  yyRelSeconds = 0;
  yyRelMonth = 0;
  yyHaveDate = 0;
  yyHaveRel = 0;
  yyHaveTime = 0;
  if ( date_parse( ) || yyHaveTime > 1 || yyHaveDate > 1 )
  {
    return -1;
  }
  if ( yyHaveDate || yyHaveTime )
  {
    Start = Convert( yyMonth, yyDay, yyYear, yyHour, yyMinutes, yySeconds, yyMeridian, yyDSTmode );
    if ( Start < 0 )
    {
      return -1;
    }
  }
  else
  {
    Start = now->time;
    if ( yyHaveRel == 0 )
      Start += ( ( ( tm->tm_hour * -60 ) - tm->tm_min ) * 60 ) - tm->tm_sec;
  }
  Start += yyRelSeconds;
  if ( yyRelMonth )
  {
    Start += RelativeMonth( Start, yyRelMonth );
  }
  return 0;
}
int yygrowstack( void )
{
  int eax;
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
  newss = yyss ? (short*)realloc( yyss, newsize * 2 ) : (short*)malloc( newsize * 2 );
  if ( newss == 0 )
  {
    return -1;
  }
  yyss = newss;
  yyssp = &newss[ i ];
  newvs = yyvs ? (YYSTYPE*)realloc( yyvs, newsize << 2 ) : (YYSTYPE*)malloc( newsize << 2 );
  if ( newvs == 0 )
  {
    return -1;
  }
  yyvs = newvs;
  yyvsp = &newvs[ i ];
  yystacksize = newsize;
  yysslim = &yyss[ newsize + -1 ];
  return 0;
}
int date_parse( void )
{
  int yym, yyn, yystate;
  yynerrs = 0;
  yyerrflag = 0;
  yychar = -1;
  yystate = 0;
  if ( yyss || yygrowstack( ) == 0 )
  {
    yyssp = yyss;
    yyvsp = yyvs;
    yystate = 0;
    yyssp[0] = 0;
    while ( yyn = yydefred[ yystate ], yyn )
    {
      yym = yylen[ yyn ];
      if ( yym )
        yyval = yyvsp[ 1 - yym ];
      else
        memset( &yyval.Number, 0, 4 );
      switch ( yyn + -3 )
      {
      case 0:
        yyHaveTime++;
        yyssp = &yyssp[ ( 0 - ( yym * 2 ) ) >> 1 ];
        yystate = yyssp[0];
        yyvsp = &yyvsp[ ( 0 - ( yym << 2 ) ) >> 2 ];
        yym = yylhs[ yyn ];
        if ( yystate == 0 && yym == 0 )
        {
          yystate = 1;
          yyssp++;
          yyssp[0] = 1;
          yyvsp++;
          yyvsp->Number = yyval.Number;
          if ( yychar < 0 )
          {
            yychar = date_lex( );
            if ( yychar < 0 )
              yychar = 0;
          }
          if ( yychar == 0 )
          {
            return 0;
          }
        }
        else
        {
          yyn = yygindex[ yym ];
          if ( yystate == yycheck[ yyn ] )
            yystate = yytable[ yyn ];
            if ( yyssp < yysslim || yygrowstack( ) == 0 )
            {
              yyssp++;
              yyssp[0] = yystate;
              yyvsp++;
              yyvsp->Number = yyval.Number;
            }
        }
        break;
      case 1:
        yyHaveTime++;
        yyTimezone = yyvsp->Number;
        break;
      case 2:
        yyHaveDate++;
        break;
      case 3:
        yyHaveDate++;
        yyHaveTime++;
        break;
      case 4:
        yyHaveDate++;
        yyHaveTime++;
        yyTimezone = yyvsp->Number;
        break;
      case 5:
        yyHaveRel = 1;
        break;
      case 6:
        if ( yyvsp[ -1 ].Number <= 99 )
        {
          yyHour = yyvsp[ -1 ].Number;
          yyMinutes = 0;
        }
        else
        {
          yyHour = ( (/*HI*/int)( 0x51eb851f * yyvsp[ -1 ].Number ) >> 5 ) - ( yyvsp[ -1 ].Number >> 31 );
          yyMinutes = yyvsp[ -1 ].Number - ( ( ( (/*HI*/int)( 0x51eb851f * yyvsp[ -1 ].Number ) >> 5 ) - ( yyvsp[ -1 ].Number >> 31 ) ) * 100 );
        }
        yySeconds = 0;
        yyMeridian = yyvsp->Number;
        break;
      case 7:
        yyHour = yyvsp[ -3 ].Number;
        yyMinutes = yyvsp[ -1 ].Number;
        yySeconds = 0;
        yyMeridian = yyvsp->Number;
        break;
      case 8:
        yyHour = yyvsp[ -3 ].Number;
        yyMinutes = yyvsp[ -1 ].Number;
        yyTimezone = yyvsp->Number;
        yyMeridian = MER24;
        yyDSTmode = DSToff;
        break;
      case 9:
        yyHour = yyvsp[ -5 ].Number;
        yyMinutes = yyvsp[ -3 ].Number;
        yySeconds = yyvsp[ -1 ].Number;
        yyMeridian = yyvsp->Number;
        break;
      case 10:
        yyHour = yyvsp[ -5 ].Number;
        yyMinutes = yyvsp[ -3 ].Number;
        yySeconds = yyvsp[ -1 ].Number;
        yyTimezone = yyvsp->Number;
        yyMeridian = MER24;
        yyDSTmode = DSToff;
        break;
      case 11:
        yyval.Number = yyvsp->Number;
        yyDSTmode = DSToff;
        break;
      case 12:
        yyval.Number = yyvsp->Number;
        yyDSTmode = DSTon;
        break;
      case 13:
        yyTimezone = yyvsp[ -1 ].Number;
        yyDSTmode = DSTon;
        break;
      case 14:
        if ( yyvsp[ -1 ].Number == 0 )
        {
          yyval.Number = yyvsp->Number;
          yyDSTmode = DSToff;
        }
        else
        {
          return 1;
        }
        break;
      case 15:
        yyval.Number = yyvsp->Number;
        yyDSTmode = DSToff;
        break;
      case 16:
      {
        int i;
        if ( yyvsp->Number < 0 )
        {
          yyvsp->Number = 0 - yyvsp->Number;
          if ( yyvsp->Number <= 9999 )
          {
            i = ( (/*HI*/int)( 0x51eb851f * yyvsp->Number ) >> 5 ) - ( yyvsp->Number >> 31 );
            i = yyvsp->Number - ( i * 100 );
            if ( i <= 59 )
              yyval.Number = i + ( ( ( (/*HI*/int)( 0x51eb851f * yyvsp->Number ) >> 5 ) - ( yyvsp->Number >> 31 ) ) * 60 );
          }
        }
        else
        {
          if ( yyvsp->Number <= 9999 )
          {
            i = ( (/*HI*/int)( 0x51eb851f * yyvsp->Number ) >> 5 ) - ( yyvsp->Number >> 31 );
            i = yyvsp->Number - ( i * 100 );
            if ( i <= 59 )
              yyval.Number = ( ( ( (/*HI*/int)( 0x51eb851f * yyvsp->Number ) >> 5 ) - ( yyvsp->Number >> 31 ) ) * -60 ) - i;
          }
        }
      }
        break;
      case 17:
        yyMonth = yyvsp[ -2 ].Number;
        yyDay = yyvsp->Number;
        break;
      case 18:
        if ( yyvsp[ -4 ].Number > 100 )
        {
          yyYear = yyvsp[ -4 ].Number;
          yyMonth = yyvsp[ -2 ].Number;
          yyDay = yyvsp->Number;
        }
        else
        {
          yyMonth = yyvsp[ -4 ].Number;
          yyDay = yyvsp[ -2 ].Number;
          yyYear = yyvsp->Number;
        }
        break;
      case 19:
        yyMonth = yyvsp[ -1 ].Number;
        yyDay = yyvsp->Number;
        break;
      case 20:
        yyMonth = yyvsp[ -3 ].Number;
        yyDay = yyvsp[ -2 ].Number;
        yyYear = yyvsp->Number;
        break;
      case 21:
        yyDay = yyvsp[ -1 ].Number;
        yyMonth = yyvsp->Number;
        break;
      case 22:
        yyDay = yyvsp[ -2 ].Number;
        yyMonth = yyvsp[ -1 ].Number;
        yyYear = yyvsp->Number;
        break;
      case 23:
        yyDay = yyvsp[ -2 ].Number;
        yyMonth = yyvsp[ -1 ].Number;
        yyYear = yyvsp->Number;
        break;
      case 24:
        yyDay = yyvsp[ -3 ].Number;
        yyMonth = yyvsp[ -1 ].Number;
        yyYear = 0 - yyvsp->Number;
        break;
      case 25:
        yyDay = yyvsp[ -2 ].Number;
        yyMonth = 0 - yyvsp[ -1 ].Number;
        yyYear = 0 - yyvsp->Number;
        yyDSTmode = DSToff;
        yyTimezone = 0;
        break;
      case 26:
        yyMonth = yyvsp[ -7 ].Number;
        yyDay = yyvsp[ -6 ].Number;
        yyYear = yyvsp->Number;
        yyHour = yyvsp[ -5 ].Number;
        yyMinutes = yyvsp[ -3 ].Number;
        yySeconds = yyvsp[ -1 ].Number;
        break;
      case 27:
        yyRelSeconds += yyvsp[ -1 ].Number * yyvsp->Number;
        break;
      case 28:
        yyRelSeconds += yyvsp[ -1 ].Number * yyvsp->Number;
        break;
      case 29:
        yyRelMonth += yyvsp[ -1 ].Number * yyvsp->Number;
        break;
      case 30:
        yyRelMonth += yyvsp[ -1 ].Number * yyvsp->Number;
        break;
      case 31:
        yyval.Number = 2;
        break;
      case 32:
        yyval.Number = yyvsp->Number;
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
    if ( yychar == yycheck[ yyn ] )
    {
      if ( yyssp < yysslim || yygrowstack( ) == 0 )
      {
        yystate = yytable[ yyn ];
        yyssp++;
        yyssp[0] = yytable[ yyn ];
        yyvsp++;
        yyvsp->Number = yylval.Number;
        yychar = -1;
        if ( yyerrflag > 0 )
        {
          yyerrflag += -1;
        }
      }
    }
  }
  date_error( "yacc stack overflow" );
}
#if 0
#endif
