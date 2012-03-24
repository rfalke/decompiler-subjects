#include "tribox3.c.h"
int planeBoxOverlap( double *normal, double *vert, double *maxbox )
{
  int eax;
  int ecx;
  int edx;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  int q = 0;
  double vmin[3], vmax[3], v;
  do
  {
    if ( 0.000000000000 < normal )
    {
      vmin[0] = -( maxbox ) - vert;
      vmax[0] = maxbox - vert;
    }
    else
    {
      vmin[0] = maxbox - vert;
      vmax[0] = -( maxbox ) - vert;
    }
    q++;
  }
  while ( q + 1 != 3 );
  return ( ( ( ( vmax[0] * normal[0] ) + ( vmax[1] * vert ) + ( vmax[2] * normal[2] ) ) <> 0.000000000000 ) & 1 ) == 0;
}
int triBoxOverlap( double *boxcenter, double *boxhalfsize, double (*triverts)[3] )
{
  int eax;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double v0[3], v1[3], v2[3];
  double min, max, p0, p1, p2, rad, fex, fey, fez;
  double normal[3], e0[3], e1[3], e2[3];
  v0[0] = triverts[0][0] - boxcenter[0];
  v0[1] = triverts[0][1] - boxcenter[1];
  v0[2] = triverts[0][2] - boxcenter[2];
  fey = abs( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) );
  fez = abs( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) );
  max = ( ( triverts[2][1] - boxcenter[1] ) * ( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) - ( ( triverts[2][2] - boxcenter[2] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) < ( ( triverts[0][1] - boxcenter[1] ) * ( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) ? ( ( triverts[0][1] - boxcenter[1] ) * ( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) : ( ( triverts[2][1] - boxcenter[1] ) * ( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) - ( ( triverts[2][2] - boxcenter[2] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) );
  if ( ( ( triverts[2][1] - boxcenter[1] ) * ( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) - ( ( triverts[2][2] - boxcenter[2] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) < ( ( triverts[0][1] - boxcenter[1] ) * ( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) ? ( ( triverts[2][1] - boxcenter[1] ) * ( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) - ( ( triverts[2][2] - boxcenter[2] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) : ( ( triverts[0][1] - boxcenter[1] ) * ( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) <= ( boxhalfsize[1] * fez ) + ( boxhalfsize[2] * fey ) )
  {
    if ( max < -( ( boxhalfsize[1] * fez ) + ( boxhalfsize[2] * fey ) ) )
    {
    }
    else
    {
      max = triverts[2][0] - boxcenter[0];
      fex = abs( boxcenter[0] );
      if ( ( max * -( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) + ( ( triverts[2][2] - boxcenter[2] ) * boxcenter[0] ) < ( ( triverts[0][0] - boxcenter[0] ) * -( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) + ( boxcenter[0] * ( triverts[0][2] - boxcenter[2] ) ) ? ( max * -( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) + ( ( triverts[2][2] - boxcenter[2] ) * boxcenter[0] ) : ( ( triverts[0][0] - boxcenter[0] ) * -( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) + ( boxcenter[0] * ( triverts[0][2] - boxcenter[2] ) ) <= ( boxhalfsize[0] * fez ) + ( boxhalfsize[2] * fex ) )
      {
        if ( -( ( boxhalfsize[0] * fez ) + ( boxhalfsize[2] * fex ) ) <= ( max * -( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) + ( ( triverts[2][2] - boxcenter[2] ) * boxcenter[0] ) < ( ( triverts[0][0] - boxcenter[0] ) * -( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) + ( boxcenter[0] * ( triverts[0][2] - boxcenter[2] ) ) ? ( ( triverts[0][0] - boxcenter[0] ) * -( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) + ( boxcenter[0] * ( triverts[0][2] - boxcenter[2] ) ) : ( max * -( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) + ( ( triverts[2][2] - boxcenter[2] ) * boxcenter[0] ) )
        {
          fez = ( ( triverts[1][0] - boxcenter[0] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) - ( ( triverts[1][1] - boxcenter[1] ) * ( triverts[1][0] - boxcenter[0] - boxcenter[0] - ( triverts[0][0] - boxcenter[0] ) ) ) < ( max * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) - ( ( triverts[2][1] - boxcenter[1] ) * ( triverts[1][0] - boxcenter[0] - boxcenter[0] - ( triverts[0][0] - boxcenter[0] ) ) ) ? ( max * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) - ( ( triverts[2][1] - boxcenter[1] ) * ( triverts[1][0] - boxcenter[0] - boxcenter[0] - ( triverts[0][0] - boxcenter[0] ) ) ) : ( ( triverts[1][0] - boxcenter[0] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) - ( ( triverts[1][1] - boxcenter[1] ) * ( triverts[1][0] - boxcenter[0] - boxcenter[0] - ( triverts[0][0] - boxcenter[0] ) ) );
          if ( ( ( triverts[1][0] - boxcenter[0] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) - ( ( triverts[1][1] - boxcenter[1] ) * ( triverts[1][0] - boxcenter[0] - boxcenter[0] - ( triverts[0][0] - boxcenter[0] ) ) ) < ( max * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) - ( ( triverts[2][1] - boxcenter[1] ) * ( triverts[1][0] - boxcenter[0] - boxcenter[0] - ( triverts[0][0] - boxcenter[0] ) ) ) ? ( ( triverts[1][0] - boxcenter[0] ) * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) - ( ( triverts[1][1] - boxcenter[1] ) * ( triverts[1][0] - boxcenter[0] - boxcenter[0] - ( triverts[0][0] - boxcenter[0] ) ) ) : ( max * ( triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] ) ) ) - ( ( triverts[2][1] - boxcenter[1] ) * ( triverts[1][0] - boxcenter[0] - boxcenter[0] - ( triverts[0][0] - boxcenter[0] ) ) ) <= ( boxhalfsize[0] * fey ) + ( boxhalfsize[1] * fex ) )
          {
            if ( fez < -( ( boxhalfsize[0] * fey ) + ( boxhalfsize[1] * fex ) ) )
            {
            }
            else
            {
              fey = triverts[2][1] - boxcenter[1] - ( triverts[1][1] - boxcenter[1] );
              fez = triverts[2][2] - boxcenter[2] - ( triverts[1][2] - boxcenter[2] );
              fex = abs( triverts[2][2] - boxcenter[2] - ( triverts[1][2] - boxcenter[2] ) );
              if ( ( ( triverts[2][1] - boxcenter[1] ) * fez ) - ( ( triverts[2][2] - boxcenter[2] ) * fey ) < ( p2 * ( triverts[2][2] - boxcenter[2] - ( triverts[1][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * fey ) ? ( ( triverts[2][1] - boxcenter[1] ) * fez ) - ( ( triverts[2][2] - boxcenter[2] ) * fey ) : ( p2 * ( triverts[2][2] - boxcenter[2] - ( triverts[1][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * fey ) <= ( boxhalfsize[1] * fex ) + ( boxhalfsize[2] * abs( triverts[2][1] - boxcenter[1] - ( triverts[1][1] - boxcenter[1] ) ) ) )
              {
                if ( ( ( triverts[2][1] - boxcenter[1] ) * fez ) - ( ( triverts[2][2] - boxcenter[2] ) * fey ) < ( p2 * ( triverts[2][2] - boxcenter[2] - ( triverts[1][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * fey ) ? ( p2 * ( triverts[2][2] - boxcenter[2] - ( triverts[1][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * fey ) : ( ( triverts[2][1] - boxcenter[1] ) * fez ) - ( ( triverts[2][2] - boxcenter[2] ) * fey ) < -( ( boxhalfsize[1] * fex ) + ( boxhalfsize[2] * abs( triverts[2][1] - boxcenter[1] - ( triverts[1][1] - boxcenter[1] ) ) ) ) )
                {
                }
                else
                if ( ( max * -( fez ) ) + ( ( triverts[2][2] - boxcenter[2] ) * ( max - ( triverts[1][0] - boxcenter[0] ) ) ) < ( ( triverts[0][0] - boxcenter[0] ) * -( fez ) ) + ( ( triverts[0][2] - boxcenter[2] ) * ( max - ( triverts[1][0] - boxcenter[0] ) ) ) ? ( max * -( fez ) ) + ( ( triverts[2][2] - boxcenter[2] ) * ( max - ( triverts[1][0] - boxcenter[0] ) ) ) : ( ( triverts[0][0] - boxcenter[0] ) * -( fez ) ) + ( ( triverts[0][2] - boxcenter[2] ) * ( max - ( triverts[1][0] - boxcenter[0] ) ) ) <= ( boxhalfsize[0] * fex ) + ( boxhalfsize[2] * abs( max - ( triverts[1][0] - boxcenter[0] ) ) ) )
                {
                  if ( -( ( boxhalfsize[0] * fex ) + ( boxhalfsize[2] * abs( max - ( triverts[1][0] - boxcenter[0] ) ) ) ) <= ( max * -( fez ) ) + ( ( triverts[2][2] - boxcenter[2] ) * ( max - ( triverts[1][0] - boxcenter[0] ) ) ) < ( ( triverts[0][0] - boxcenter[0] ) * -( fez ) ) + ( ( triverts[0][2] - boxcenter[2] ) * ( max - ( triverts[1][0] - boxcenter[0] ) ) ) ? ( ( triverts[0][0] - boxcenter[0] ) * -( fez ) ) + ( ( triverts[0][2] - boxcenter[2] ) * ( max - ( triverts[1][0] - boxcenter[0] ) ) ) : ( max * -( fez ) ) + ( ( triverts[2][2] - boxcenter[2] ) * ( max - ( triverts[1][0] - boxcenter[0] ) ) ) )
                  {
                    fex = ( ( triverts[1][0] - boxcenter[0] ) * fey ) - ( ( max - ( triverts[1][0] - boxcenter[0] ) ) * ( triverts[1][1] - boxcenter[1] ) ) < ( ( triverts[0][0] - boxcenter[0] ) * fey ) - ( ( max - ( triverts[1][0] - boxcenter[0] ) ) * p2 ) ? ( ( triverts[0][0] - boxcenter[0] ) * fey ) - ( ( max - ( triverts[1][0] - boxcenter[0] ) ) * p2 ) : ( ( triverts[1][0] - boxcenter[0] ) * fey ) - ( ( max - ( triverts[1][0] - boxcenter[0] ) ) * ( triverts[1][1] - boxcenter[1] ) );
                    if ( ( ( triverts[1][0] - boxcenter[0] ) * fey ) - ( ( max - ( triverts[1][0] - boxcenter[0] ) ) * ( triverts[1][1] - boxcenter[1] ) ) < ( ( triverts[0][0] - boxcenter[0] ) * fey ) - ( ( max - ( triverts[1][0] - boxcenter[0] ) ) * p2 ) ? ( ( triverts[1][0] - boxcenter[0] ) * fey ) - ( ( max - ( triverts[1][0] - boxcenter[0] ) ) * ( triverts[1][1] - boxcenter[1] ) ) : ( ( triverts[0][0] - boxcenter[0] ) * fey ) - ( ( max - ( triverts[1][0] - boxcenter[0] ) ) * p2 ) <= ( abs( triverts[2][1] - boxcenter[1] - ( triverts[1][1] - boxcenter[1] ) ) * boxhalfsize[0] ) + ( abs( max - ( triverts[1][0] - boxcenter[0] ) ) * boxhalfsize[1] ) )
                    {
                      if ( fex < -( ( abs( triverts[2][1] - boxcenter[1] - ( triverts[1][1] - boxcenter[1] ) ) * boxhalfsize[0] ) + ( abs( max - ( triverts[1][0] - boxcenter[0] ) ) * boxhalfsize[1] ) ) )
                      {
                      }
                      else
                      {
                        fex = p2 - ( triverts[2][1] - boxcenter[1] );
                        if ( ( ( triverts[1][1] - boxcenter[1] ) * ( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) - ( ( triverts[1][2] - boxcenter[2] ) * fex ) < ( p2 * ( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * ( p2 - ( triverts[2][1] - boxcenter[1] ) ) ) ? ( ( triverts[1][1] - boxcenter[1] ) * ( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) - ( ( triverts[1][2] - boxcenter[2] ) * fex ) : ( p2 * ( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * ( p2 - ( triverts[2][1] - boxcenter[1] ) ) ) <= ( boxhalfsize[1] * abs( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) + ( boxhalfsize[2] * abs( p2 - ( triverts[2][1] - boxcenter[1] ) ) ) )
                        {
                          if ( ( ( triverts[1][1] - boxcenter[1] ) * ( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) - ( ( triverts[1][2] - boxcenter[2] ) * fex ) < ( p2 * ( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * ( p2 - ( triverts[2][1] - boxcenter[1] ) ) ) ? ( p2 * ( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) - ( ( triverts[0][2] - boxcenter[2] ) * ( p2 - ( triverts[2][1] - boxcenter[1] ) ) ) : ( ( triverts[1][1] - boxcenter[1] ) * ( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) - ( ( triverts[1][2] - boxcenter[2] ) * fex ) < -( ( boxhalfsize[1] * abs( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) + ( boxhalfsize[2] * abs( p2 - ( triverts[2][1] - boxcenter[1] ) ) ) ) )
                          {
                          }
                          else
                          if ( ( ( triverts[1][0] - boxcenter[0] ) * -( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) + ( ( triverts[1][2] - boxcenter[2] ) * ( triverts[0][0] - boxcenter[0] - max ) ) < ( ( triverts[0][0] - boxcenter[0] ) * -( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) + ( ( triverts[0][2] - boxcenter[2] ) * ( triverts[0][0] - boxcenter[0] - max ) ) ? ( ( triverts[1][0] - boxcenter[0] ) * -( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) + ( ( triverts[1][2] - boxcenter[2] ) * ( triverts[0][0] - boxcenter[0] - max ) ) : ( ( triverts[0][0] - boxcenter[0] ) * -( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) + ( ( triverts[0][2] - boxcenter[2] ) * ( triverts[0][0] - boxcenter[0] - max ) ) <= ( abs( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) * boxhalfsize[0] ) + ( boxhalfsize[2] * abs( triverts[0][0] - boxcenter[0] - max ) ) )
                          {
                            if ( -( ( abs( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) * boxhalfsize[0] ) + ( boxhalfsize[2] * abs( triverts[0][0] - boxcenter[0] - max ) ) ) <= ( ( triverts[1][0] - boxcenter[0] ) * -( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) + ( ( triverts[1][2] - boxcenter[2] ) * ( triverts[0][0] - boxcenter[0] - max ) ) < ( ( triverts[0][0] - boxcenter[0] ) * -( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) + ( ( triverts[0][2] - boxcenter[2] ) * ( triverts[0][0] - boxcenter[0] - max ) ) ? ( ( triverts[0][0] - boxcenter[0] ) * -( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) + ( ( triverts[0][2] - boxcenter[2] ) * ( triverts[0][0] - boxcenter[0] - max ) ) : ( ( triverts[1][0] - boxcenter[0] ) * -( triverts[0][2] - boxcenter[2] - ( triverts[2][2] - boxcenter[2] ) ) ) + ( ( triverts[1][2] - boxcenter[2] ) * ( triverts[0][0] - boxcenter[0] - max ) ) )
                            {
                              if ( ( max * fex ) - ( ( triverts[0][0] - boxcenter[0] - max ) * ( triverts[2][1] - boxcenter[1] ) ) < ( ( triverts[1][0] - boxcenter[0] ) * fex ) - ( ( triverts[0][0] - boxcenter[0] - max ) * ( triverts[1][1] - boxcenter[1] ) ) )
                                fex = 0.000000000000;
                              else
                                fex = 0.000000000000;
                              if ( abs( p2 - ( triverts[2][1] - boxcenter[1] ) ) * boxhalfsize[0] <= abs( p2 - ( triverts[2][1] - boxcenter[1] ) ) * boxhalfsize[0] )
                              {
                                if ( -( abs( p2 - ( triverts[2][1] - boxcenter[1] ) ) * boxhalfsize[0] ) <= fex )
                                {
                                  if ( ( ( triverts[1][0] - boxcenter[0] ) * fex ) - ( ( triverts[0][0] - boxcenter[0] - max ) * ( triverts[1][1] - boxcenter[1] ) ) <= triverts[1][0] - boxcenter[0] ? triverts[1][0] - boxcenter[0] : ( ( triverts[1][0] - boxcenter[0] ) * fex ) - ( ( triverts[0][0] - boxcenter[0] - max ) * ( triverts[1][1] - boxcenter[1] ) ) < max ? ( ( triverts[1][0] - boxcenter[0] ) * fex ) - ( ( triverts[0][0] - boxcenter[0] - max ) * ( triverts[1][1] - boxcenter[1] ) ) <= triverts[1][0] - boxcenter[0] ? triverts[1][0] - boxcenter[0] : ( ( triverts[1][0] - boxcenter[0] ) * fex ) - ( ( triverts[0][0] - boxcenter[0] - max ) * ( triverts[1][1] - boxcenter[1] ) ) : max <= boxhalfsize[0] )
                                  {
                                    if ( -( boxhalfsize[0] ) <= max <= triverts[1][0] - boxcenter[0] <= ( ( triverts[1][0] - boxcenter[0] ) * fex ) - ( ( triverts[0][0] - boxcenter[0] - max ) * ( triverts[1][1] - boxcenter[1] ) ) ? triverts[1][0] - boxcenter[0] : ( ( triverts[1][0] - boxcenter[0] ) * fex ) - ( ( triverts[0][0] - boxcenter[0] - max ) * ( triverts[1][1] - boxcenter[1] ) ) ? max : triverts[1][0] - boxcenter[0] <= ( ( triverts[1][0] - boxcenter[0] ) * fex ) - ( ( triverts[0][0] - boxcenter[0] - max ) * ( triverts[1][1] - boxcenter[1] ) ) ? triverts[1][0] - boxcenter[0] : ( ( triverts[1][0] - boxcenter[0] ) * fex ) - ( ( triverts[0][0] - boxcenter[0] - max ) * ( triverts[1][1] - boxcenter[1] ) ) )
                                    {
                                      p2 = triverts[2][1] - boxcenter[1] <= triverts[1][1] - boxcenter[1] <= p2 ? triverts[1][1] - boxcenter[1] : p2 ? triverts[2][1] - boxcenter[1] : triverts[1][1] - boxcenter[1] <= p2 ? triverts[1][1] - boxcenter[1] : p2;
                                      if ( p2 <= triverts[1][1] - boxcenter[1] ? triverts[1][1] - boxcenter[1] : p2 < triverts[2][1] - boxcenter[1] ? p2 <= triverts[1][1] - boxcenter[1] ? triverts[1][1] - boxcenter[1] : p2 : triverts[2][1] - boxcenter[1] <= boxhalfsize[1] )
                                      {
                                        p2 = triverts[1][1] - boxcenter[1] - ( triverts[0][1] - boxcenter[1] );
                                        if ( -( boxhalfsize[1] ) <= p2 )
                                        {
                                          if ( triverts[0][2] - boxcenter[2] <= triverts[1][2] - boxcenter[2] ? triverts[1][2] - boxcenter[2] : triverts[0][2] - boxcenter[2] < triverts[2][2] - boxcenter[2] ? triverts[0][2] - boxcenter[2] <= triverts[1][2] - boxcenter[2] ? triverts[1][2] - boxcenter[2] : triverts[0][2] - boxcenter[2] : triverts[2][2] - boxcenter[2] <= boxhalfsize[2] )
                                          {
                                            if ( -( boxhalfsize[2] ) <= triverts[2][2] - boxcenter[2] <= triverts[1][2] - boxcenter[2] <= triverts[0][2] - boxcenter[2] ? triverts[1][2] - boxcenter[2] : triverts[0][2] - boxcenter[2] ? triverts[2][2] - boxcenter[2] : triverts[1][2] - boxcenter[2] <= triverts[0][2] - boxcenter[2] ? triverts[1][2] - boxcenter[2] : triverts[0][2] - boxcenter[2] )
                                            {
                                              normal[0] = ( p2 * fez ) - ( ( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) * fey );
                                              normal[1] = ( ( max - ( triverts[1][0] - boxcenter[0] ) ) * ( triverts[1][2] - boxcenter[2] - ( triverts[0][2] - boxcenter[2] ) ) ) - ( ( triverts[1][0] - boxcenter[0] - boxcenter[0] - ( triverts[0][0] - boxcenter[0] ) ) * fez );
                                              normal[2] = ( ( triverts[1][0] - boxcenter[0] - boxcenter[0] - ( triverts[0][0] - boxcenter[0] ) ) * fey ) - ( p2 * ( max - ( triverts[1][0] - boxcenter[0] ) ) );
                                              return 0;
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
  else
  {
  }
  return 0;
}
#if 0
#endif
