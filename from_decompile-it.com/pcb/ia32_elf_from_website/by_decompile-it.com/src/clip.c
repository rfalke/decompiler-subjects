#include "clip.c.h"
Boolean ClipLine( double minx, double miny, double maxx, double maxy, double *x1, double *y1, double *x2, double *y2, double margin )
{
  int edx;
  double fp0;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ double d, r;
  if ( x1[0] < minx - margin )
  {
    if ( 0.000000000000 <= x2[0] )
    {
      x1[0] = x2[0];
      y1[0] = (y1[ ( y2[0] * ( x1 / 0.000000000000 ) ) >> 3 ] & 0xFFFFFFFF);
      x1[0] = x1;
    }
    else
    {
      return 0;
    }
  }
  if ( x2[0] < 0.000000000000 )
  {
    x2[0] = x2[0];
    y2[0] = (y2[ ( y1[0] * ( x2 / 0.000000000000 ) ) >> 3 ] & 0xFFFFFFFF);
    fp7 = x2[0];
  }
  else
    fp7 = 0.000000000000;
  if ( x1[0] < x1[0] )
  {
    if ( minx - margin <= x1[0] )
    {
      x1[0] = x1[0] = x1[0];
      y1[0] = (y1[ ( ( ( x1 - ( minx - margin ) ) / ( minx - margin - ( minx - margin ) ) ) * ( y2[0] - y1[0] ) ) >> 3 ] & 0xFFFFFFFF);
    }
    else
    {
    }
  }
  else
  {
  }
  if ( x2[0] <= x1 )
  {
  }
  else
  {
    x2[0] = x1;
    x2[0] = x2;
    y2[0] = (y2[ ( ( ( x1 - x2[0] ) / ( x1[0] - x2[0] ) ) * ( y1[0] - y2[0] ) ) >> 3 ] & 0xFFFFFFFF);
  }
  if ( y1[0] < x1[0] - 0.000000000000 )
  {
    if ( y1[0] <= 0.000000000000 )
    {
      y1[0] = y1[0];
      x1[0] = (x1[ ( ( ( y1 - x1[0] ) / ( 0.000000000000 - x1[0] ) ) * ( x2[0] - x1[0] ) ) >> 3 ] & 0xFFFFFFFF);
      y1[0] = y1;
    }
    else
    {
    }
  }
  if ( y2[0] < y1 )
  {
    y2[0] = y1;
    x2[0] = (x2[ ( ( ( x1[0] - x2[0] - y2[0] ) / ( y1[0] - y2[0] ) ) * ( x1[0] - x2[0] ) ) >> 3 ] & 0xFFFFFFFF);
  }
  else
  {
  }
  if ( maxy + y1[0] < maxy + y1[0] )
  {
    if ( y1[0] <= maxy + y1[0] )
    {
      y1[0] += maxy;
      y1[0] = ( ( y1 - y1[0] ) / ( y1[0] - y1[0] ) ) * ( x2[0] - x1[0] );
      y1[0] += maxy;
      x1[0] = (x1[ ( ( ( y1 - y1[0] ) / ( y1[0] - y1[0] ) ) * ( x2[0] - x1[0] ) ) >> 3 ] & 0xFFFFFFFF);
    }
    else
    {
    }
  }
  else
  {
  }
  if ( y2[0] < y2[0] )
  {
    y2[0] = y2[0];
    x2[0] = (x2[ ( ( ( y2[0] - y2[0] ) / ( y1[0] - y2[0] ) ) * ( x1[0] - x2[0] ) ) >> 3 ] & 0xFFFFFFFF);
    return 1;
  }
  return 0;
}
#if 0
#endif
