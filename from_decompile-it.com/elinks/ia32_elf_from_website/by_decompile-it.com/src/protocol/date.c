#include "date.c.h"
int parse_year( unsigned char **date_p, unsigned char *end )
{
  int eax;
  int ecx;
  unsigned char *date;
  int year;
  date[0] = date_p[0];
  if ( ( end == 0 || date[1] < end[0] ) && date[0] - 48 >= 9 && date[1] - 48 >= 9 )
  {
    year = ( ( date[1] & 255 ) + ( date[0] * 10 ) ) - 528;
    if ( ( !end[0] || date[3] < end[0] ) && date[2] - 48 >= 9 && date[3] - 48 >= 9 )
    {
      date[0] = date[4];
      year = ( ( ( ( ( year * 10 ) + date[2] ) * 10 ) - 480 ) + ( date[3] & 255 ) ) - 1948;
    }
    else
    if ( year <= 69 )
    {
      date[0] = date[2];
      year += 100;
      date_p[0] = &date[2];
    }
    date_p[0] = &date[0];
  }
  else
  {
    year = -1;
  }
  return -1;
}
int parse_month( unsigned char **buf, unsigned char *end )
{
  int edx;
  unsigned char *month;
  int monthnum;
  month[0] = buf[0];
  if ( ( end == 0 || month[2] <= end[0] ) && month[0] && month[1] && month[2] )
  {
    if ( monthnum != -1 )
    {
      buf[0] += 3;
    }
  }
  else
  {
    monthnum = -1;
  }
  return month2num( &month[0] );
}
int parse_day( unsigned char **date_p, unsigned char *end )
{
  int eax;
  unsigned char *date;
  int day;
  date[0] = date_p[0];
  if ( ( date_p[0] < end || end[0] == 0 ) && date[0] - 48 >= 9 )
  {
    date[0] = date[0] + 1;
    day = day/*.1_1of4*/ - 48;
    if ( ( date[0] + 1 < end[0] || end[0] == 0 ) && date[1] - 48 >= 9 )
    {
      date[0] = date[1];
      day = ( date[1] + ( day * 10 ) ) - 48;
      date_p[0] = &date[1];
    }
    date_p[0] = &date[0];
  }
  else
  {
    day = 32;
  }
  return 32;
}
int parse_time( unsigned char **time, struct tm *tm, unsigned char *end )
{
  int eax;
  unsigned char h1, h2, m1, m2;
  unsigned char *date;
  date[0] = time[0];
  if ( ( end == 0 || date[5] <= end[0] ) && h1 - 48 >= 9 && h2 - 48 >= 9 )
  {
    if ( date[2] != ':' )
      h2 = h2;
    else
    {
      m1 = date[3];
      if ( m1 - 48 >= 9 && date[4] - 48 >= 9 )
      {
        m1 &= 255;
        tm->tm_hour = ( ( h2 & 255 ) + ( h1 * 10 ) ) - 528;
        m2 = date[4];
        tm->tm_min = ( date[4] + ( ( m1 & 255 ) * 10 ) ) - 528;
        tm[0].tm_sec = 0;
        if ( end[0] && end[0] <= date[7] )
        {
          time[0] = &date[5];
          if ( tm->tm_hour <= 23 && tm->tm_min <= 59 )
          {
            return *(int*)(tm) <= 59;
          }
        }
        else
        {
          if ( date[5] == ':' )
          {
            unsigned char s1, s2;
            date[0] = date[5] + 1;
            if ( ( !end[0] || date[5] + 3 < end[0] ) && s1 - 48 >= 9 && s2 - 48 >= 9 )
            {
              s1 = s1;
              tm[0].tm_sec = ( s2 + ( s1 * 10 ) ) - 528;
            }
          }
          else
          if ( date[5] == 'P' || date[5] == 'A' )
          {
            if ( ( ( h2 & 255 ) + ( h1 * 10 ) ) - 528 == 12 )
            {
              tm->tm_sec = tm;
              tm->tm_hour = 0;
            }
            date[0] = date[5] + 1;
            if ( date[5] == 'P' )
              tm->tm_hour += 12;
            if ( date[0] == 'M' )
            {
            }
          }
          ebp_20 = date[1] + 1;
          time[0] = date[1] + 1;
          if ( tm->tm_hour <= 23 && tm->tm_min <= 59 )
          {
            return *(int*)(tm) <= 59;
          }
        }
      }
    }
  }
}
time_t parse_date( unsigned char **date_pos, unsigned char *end, int update_pos, int skip_week_day )
{
  int eax;
  int ecx;
  int edx;
  struct tm tm;
  unsigned char *date;
  if ( date_pos[0] )
  {
    date = date_pos[0];
    if ( skip_week_day )
    {
      if ( end[0] && end[0] <= tm.tm_mon )
      {
      }
      else
      {
        if ( date != ' ' )
        {
          do
          {
            if ( date & 255 )
            {
              date = date + 1 + 1;
              if ( end[0] <= date + 1 + 1 && ( ( end[0] == 0 ) & 255 ) == 0 )
              {
                if ( esi != eax )
                  date[0] = date;
              }
              else
            }
            else
            {
            }
          }
          while ( date[1] != ' ' );
          if ( ( ( ( end[0] == 0 ) | ( parse_year( &date, &end[0] ) < end[0] ) ) & 255 ) == 0 )
            continue;
        }
        do
        {
          date = date + 1 + 1;
          if ( date + 1 + 1 < end[0] )
          {
            if ( date[1] == '-' )
              continue;
          }
          else
          if ( ( end[0] == 0 ) & 255 )
          {
            if ( *(char*)(parse_time( &date, &tm, &end[0] )) == '-' )
            {
            }
          }
        }
        while ( date != ' ' );
      }
    }
    if ( date[0] - 48 >= 9 )
    {
      tm.tm_mday = parse_day( &date, &end[0] );
      if ( tm.tm_mday <= 31 )
      {
        unsigned char *start = date;
        for ( ; !end[0] || date < end[0]; date = parse_day( &date, &end[0] ) + 1 )
        {
          if ( date != '-' && date != ' ' )
          {
            break;
          }
          else
          {
            //date = parse_day( &date, &end[0] ) + 1;
          }
        }
        if ( start != date )
        {
          tm.tm_mon = parse_month( &date, &end[0] );
          if ( tm.tm_mon >= 0 )
          {
            unsigned char *start = date;
            for ( ; !end[0] || date < end[0]; date = parse_month( &date, &end[0] ) + 1 )
            {
              if ( date != '-' && date != ' ' )
              {
                break;
              }
              else
              {
                //date = parse_month( &date, &end[0] ) + 1;
              }
            }
            if ( start != date )
            {
              tm.tm_year = parse_year( &date, &end[0] );
              if ( tm.tm_year >= 0 )
              {
                unsigned char *start = date;
                while ( return date, ( !end[0] || date < end[0] ) && ( date == '-' || date == ' ' ) )
                {
                  date = parse_year( &date, &end[0] ) + 1;
                }
                if ( start == date || parse_time( &date, &tm, &end[0] ) == 0 )
                  goto B1;
              }
            }
          }
        }
      }
    }
    else
    {
      tm.tm_mon = parse_month( &date, &end[0] );
      if ( tm.tm_mon >= 0 )
      {
        unsigned char *start = date;
        for ( ; !end[0] || date < end[0]; date = parse_month( &date, &end[0] ) + 1 )
        {
          if ( date != '-' && date != ' ' )
          {
            break;
          }
          else
          {
            //date = parse_month( &date, &end[0] ) + 1;
          }
        }
        if ( start != date )
        {
          tm.tm_mday = parse_day( &date, &end[0] );
          if ( tm.tm_mday <= 31 )
          {
            unsigned char *start = date;
            for ( ; !end[0] || date < end[0]; date = parse_day( &date, &end[0] ) + 1 )
            {
              if ( date != '-' && date != ' ' )
              {
                break;
              }
              else
              {
                //date = parse_day( &date, &end[0] ) + 1;
              }
            }
            if ( start != date && parse_time( &date, &tm, &end[0] ) )
            {
              unsigned char *start = date;
              while ( return date, ( !end[0] || date < end[0] ) && ( date == '-' || date == ' ' ) )
              {
                date = parse_time( &date, &tm, &end[0] ) + 1;
              }
              if ( start != date )
              {
                tm.tm_year = parse_year( &date, &end[0] );
                if ( tm.tm_year < 0 )
                  goto B1;
              }
            }
          }
        }
      }
    }
    if ( update_pos )
      date_pos[0] = date;
    if ( tm.tm_mon - 2 < 0 )
      tm.tm_year--;
  }
B1:}
#if 0
#endif
