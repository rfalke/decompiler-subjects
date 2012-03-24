#include "predicates.c.h"
static double splitter;
static double resulterrbound;
static double ccwerrboundA;
static double ccwerrboundB;
static double ccwerrboundC;
static double o3derrboundA;
static double o3derrboundB;
static double o3derrboundC;
static double iccerrboundA;
static double iccerrboundB;
static double iccerrboundC;
static double isperrboundA;
static double isperrboundB;
static double isperrboundC;
void gts_predicates_init( void )
{
  int eax;
  int edx;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ double half;
  double check = 1.000000000000, lastcheck;
  int every_other = 1;
  double epsilon = 0.500000000000;
  while ( 1 )
  {
    epsilon = epsilon * epsilon;
    if ( every_other )
    {
      check = epsilon;
      epsilon = epsilon * epsilon * 0.000000000000;
      if ( 0 + 1 != 52 )
      {
        epsilon = check = epsilon;
      }
      else
      {
        check = epsilon;
        break;
      }
    }
    else
    {
      epsilon = check;
      if ( 0 != 52 )
        fp7 = 0.000000000000;
      else
      {
        break;
      }
    }
    if ( 0.000000000000 == 0.000000000000 && 0.000000000000 == 0.000000000000 )
    {
      break;
    }
    else
    {
      every_other ^= 1;
    }
  }
}
int fast_expansion_sum_zeroelim( int elen, double *e, int flen, double *f, double *h )
{
  int eax;
  int edx;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double Q;
  double Qnew = f[0];
  double hh;
  /* phantom */ double bvirt;
  /* phantom */ double avirt, bround, around;
  int eindex, findex, hindex;
  double enow, fnow;
  if ( flen <= findex || elen <= eindex )
  {
    Qnew = enow = Qnew;
    hindex = 0;
  }
  else
  {
    enow = Qnew;
    hindex = 0;
    if ( enow == 0.000000000000 )
    {
      if ( fp7 - ( ( fp7 + enow ) - enow ) )
      {
        enow = fnow = enow;
      }
      else
        enow = fnow;
        fnow = 0.000000000000;
        if ( flen <= findex )
        {
        }
        else
        for ( ; eindex < elen;  )
        {
          fnow = enow = fnow;
          if ( enow == Qnew )
          {
            if ( enow != ( Qnew - ( ( fp7 + Qnew ) - fp7 ) ) + ( fp7 - ( ( fp7 + Qnew ) - ( ( fp7 + Qnew ) - fp7 ) ) ) )
            {
              Qnew = Q = Qnew;
            }
            else
            {
              Qnew = enow;
              enow = Q;
              if ( flen <= findex )
                Qnew = fnow;
              else
              {
                fnow = Qnew;
                Qnew = fnow;
              }
            }
          }
          else
          {
            Qnew = Q = Qnew;
          }
          h = &(double*)Q & 0xFFFFFFFF;
          enow = Qnew = enow;
          hindex++;
        }
    }
    else
    {
      enow = fnow = enow;
    }
    h[0] = fnow;
    fnow = 0.000000000000;
  }
  if ( eindex < elen )
  {
    eindex++;
    fnow = 0.000000000000;
    elen = elen;
    while ( 1 )
    {
      e[0] = e[0] + Qnew;
      enow = e[1];
      if ( ( Qnew - Qnew ) + ( e[0] - ( ( e[0] + Qnew ) - Qnew ) ) != 0.000000000000 || ( Qnew - ( ( e[0] + Qnew ) - e[0] ) ) + ( e[0] - ( ( e[0] + Qnew ) - ( ( e[0] + Qnew ) - e[0] ) ) ) != 0.000000000000 )
      {
        h = 0.000000000000;
        hindex++;
      }
      else
        Q = 0.000000000000;
      if ( elen <= eindex )
      {
        Qnew = enow;
        findex = findex;
      }
      else
      {
        eindex++;
      }
    }
  }
  else
    Qnew = enow;
  if ( findex < flen )
  {
    findex++;
    enow = 0.000000000000;
    while ( 1 )
    {
      e[0] = e[0] + Qnew;
      Q = ( Qnew - Qnew ) + ( e[0] - ( 0.000000000000 - ( ( e[0] + Qnew ) - e[0] ) ) );
      enow = f[ findex + 1 + 1 ];
      if ( ( Qnew - Qnew ) + ( e[0] - ( 0.000000000000 - Qnew ) ) != 0.000000000000 || ( Qnew - ( ( e[0] + Qnew ) - e[0] ) ) + ( e[0] - ( 0.000000000000 - ( ( e[0] + Qnew ) - e[0] ) ) ) != 0.000000000000 )
      {
        h = 0.000000000000;
        hindex++;
      }
      else
        fnow = 0.000000000000;
      if ( flen <= findex )
      {
      }
      else
      {
        findex++;
      }
    }
  }
  else
  {
  }
  if ( hindex && e[0] + Qnew == 0.000000000000 && e[0] == 0.000000000000 )
  {
    return hindex + 1;
  }
  h = &(double*)e[0] & 0xFFFFFFFF;
  return hindex + 1 + 1;
}
int scale_expansion_zeroelim( int elen, double *e, double b, double *h )
{
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double Q, sum;
  double hh;
  double product1;
  double product0;
  int eindex, hindex = 0;
  double enow;
  double bvirt;
  /* phantom */ double avirt, bround, around;
  double c;
  /* phantom */ double abig;
  double ahi, alo, bhi, blo;
  /* phantom */ double err1, err2, err3;
  Q = ( ( e[0] - ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) ) * ( b - ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) ) - ( ( e[0] * b ) - ( ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) * ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) - ( ( e[0] - ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) ) * ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) - ( ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) * ( b - ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) ) );
  if ( ( ( ( e[0] - ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) ) * ( b - ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) ) - ( ( e[0] * b ) - ( ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) * ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) - ( ( e[0] - ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) ) * ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) - ( ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) * ( b - ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) ) ) ) || ( ( ( e[0] - ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) ) * ( b - ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) ) - ( ( e[0] * b ) - ( ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) * ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) - ( ( e[0] - ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) ) * ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) - ( ( ( e[0] * splitter ) - ( ( e[0] * splitter ) - e[0] ) ) * ( b - ( ( splitter * b ) - ( ( splitter * b ) - b ) ) ) ) ) ) )
    h[0] = Q;
  else
  {
  }
  if ( elen > 1 )
  {
    eindex = 1;
    do
    {
      bvirt += ( hh * ( e - ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( ( b * e ) - ( product1 * ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) - ( product1 * ( e - ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( hh * ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) );
      Q = ( ( hh * ( e - ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( ( b * e ) - ( product1 * ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) - ( product1 * ( e - ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( hh * ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( ( bvirt + ( ( hh * ( e - ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( ( b * e ) - ( product1 * ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) - ( product1 * ( e - ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( hh * ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) ) ) - bvirt ) ) + ( bvirt - ( ( bvirt + ( ( hh * ( e - ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( ( b * e ) - ( product1 * ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) - ( product1 * ( e - ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( hh * ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) ) ) - ( ( bvirt + ( ( hh * ( e - ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( ( b * e ) - ( product1 * ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) - ( product1 * ( e - ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) - ( hh * ( ( splitter * e ) - ( ( splitter * e ) - e ) ) ) ) ) ) - bvirt ) ) );
      if ( !( "huge", 0 ) )
      {
        if ( !1 )
        {
          Q = sum = Q;
        }
        else
          Q = sum;
          bvirt += Q;
          Q = bvirt - ( ( bvirt + Q ) - Q );
          if ( ( bvirt - ( ( bvirt + Q ) - Q ) ) || ( bvirt - ( ( bvirt + Q ) - Q ) ) )
          {
            h = &(double*)Q & 0xFFFFFFFF;
            hindex++;
          }
          else
          {
          }
          eindex++;
      }
      else
      {
        Q = sum = Q;
      }
      h = &(double*)sum & 0xFFFFFFFF;
      hindex++;
      bvirt += Q;
      Q = bvirt - ( ( bvirt + Q ) - Q );
    }
    while ( elen != eindex + 1 );
  }
  else
  {
  }
  if ( hindex && bvirt == 0.000000000000 )
  {
    return hindex;
  }
  h = &(double*)bvirt & 0xFFFFFFFF;
  return hindex + 1;
}
double orient2dadapt( double *pa, double *pb, double *pc, double detsum )
{
  int edx;
  double fp2;
  double fp4;
  double fp5;
  double fp7;
  double acx, acy, bcx, bcy;
  double acxtail, acytail, bcxtail, bcytail = pc[0];
  double detleft, detright;
  double detlefttail, detrighttail;
  double det, errbound;
  double B[4], C1[8], C2[12], D[16];
  double B3;
  int C1length, C2length, Dlength;
  double u[4];
  double u3;
  double s1, t1;
  double s0, t0;
  double bvirt;
  /* phantom */ double avirt, bround, around;
  double c;
  /* phantom */ double abig;
  double ahi, alo, bhi, blo;
  /* phantom */ double err1, err2, err3;
  double _i, _j;
  double _0;
  bcx = pb[0] - pc[0];
  ahi = ( splitter * ( pa[0] - pc[0] ) ) - ( ( splitter * ( pa[0] - pc[0] ) ) - ( pa[0] - pc[0] ) );
  alo = pa[0] - pc[0] - ( ( splitter * ( pa[0] - pc[0] ) ) - ( ( splitter * ( pa[0] - pc[0] ) ) - ( pa[0] - pc[0] ) ) );
  bhi = ( splitter * ( pb[1] - pc[1] ) ) - ( ( splitter * ( pb[1] - pc[1] ) ) - ( pb[1] - pc[1] ) );
  blo = pb[1] - pc[1] - ( ( splitter * ( pb[1] - pc[1] ) ) - ( ( splitter * ( pb[1] - pc[1] ) ) - ( pb[1] - pc[1] ) ) );
  bcxtail = bcx * ( pa[1] - pc[1] );
  bvirt = ( alo * ( pb[1] - pc[1] - ( ( splitter * ( pb[1] - pc[1] ) ) - ( ( splitter * ( pb[1] - pc[1] ) ) - ( pb[1] - pc[1] ) ) ) ) ) - ( ( ( pa[0] - pc[0] ) * ( pb[1] - pc[1] ) ) - ( bhi * ahi ) - ( bhi * alo ) - ( blo * ahi ) ) - ( ( alo * ( pb[1] - pc[1] - ( ( splitter * ( pb[1] - pc[1] ) ) - ( ( splitter * ( pb[1] - pc[1] ) ) - ( pb[1] - pc[1] ) ) ) ) ) - ( ( ( pa[0] - pc[0] ) * ( pb[1] - pc[1] ) ) - ( bhi * ahi ) - ( bhi * alo ) - ( blo * ahi ) ) - ( ( ( pa[1] - pc[1] - ( ( splitter * ( pa[1] - pc[1] ) ) - ( ( splitter * ( pa[1] - pc[1] ) ) - ( pa[1] - pc[1] ) ) ) ) * ( bcx - ( ( splitter * bcx ) - ( ( splitter * bcx ) - bcx ) ) ) ) - ( bcxtail - ( ( ( splitter * ( pa[1] - pc[1] ) ) - ( ( splitter * ( pa[1] - pc[1] ) ) - ( pa[1] - pc[1] ) ) ) * ( ( splitter * bcx ) - ( ( splitter * bcx ) - bcx ) ) ) - ( ( pa[1] - pc[1] - ( ( splitter * ( pa[1] - pc[1] ) ) - ( ( splitter * ( pa[1] - pc[1] ) ) - ( pa[1] - pc[1] ) ) ) ) * ( ( splitter * bcx ) - ( ( splitter * bcx ) - bcx ) ) ) - ( ( ( splitter * ( pa[1] - pc[1] ) ) - ( ( splitter * ( pa[1] - pc[1] ) ) - ( pa[1] - pc[1] ) ) ) * ( bcx - ( ( splitter * bcx ) - ( ( splitter * bcx ) - bcx ) ) ) ) ) ) );
  acytail = ( "huge", 0 );
  B[0] = ( "huge", 0 );
  B[1] = ( "huge", 0 );
  bcxtail = ( "huge", 0 );
  B[2] = ( "huge", 0 );
  B[3] = ( "huge", 0 );
  if ( ( "huge", 0 ) )
  {
    acy = -0.000000000000;
    if ( 0.000000000000 < -0.000000000000 )
    {
      bcxtail = ( pb[0] - ( bcx + ( pb[0] - bcx ) ) ) + ( pb[0] - bcx - bcytail );
      acytail = ( pa[1] - ( bcy + ( pa[1] - bcy ) ) ) + ( pa[1] - bcy - pc[1] );
      bcytail = ( pb[1] - ( acx + ( pb[1] - acx ) ) ) + ( pb[1] - acx - pc[1] );
      if ( ( pa[0] - ( detlefttail + ( pa[0] - detlefttail ) ) ) + ( pa[0] - detlefttail - bcytail ) )
      {
      }
      else
      if ( !0 )
      {
        if ( !1 )
        {
        }
        else
        if ( !0 )
        {
          if ( bcxtail != 0.000000000000 )
          {
          }
          else
          if ( !0 )
          {
            if ( bcytail == 0.000000000000 )
            {
              detlefttail = 0.000000000000;
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
      bvirt = bcy * bcxtail;
      if ( ( ( detlefttail * bcytail ) + ( 0.000000000000 * acx ) ) - ( bvirt + ( bcx * acytail ) ) <= ( detsum * ccwerrboundC ) + ( resulterrbound * ( 0.000000000000 < 0.000000000000 ? 0.000000000000 : acy ) ) )
      {
        detlefttail = errbound;
      }
      else
      {
        acy = errbound;
        if ( -( errbound ) <= acy )
        {
          detlefttail = acy;
        }
        else
        {
          C1length = 4;
          bcx = ( splitter * acytail ) - ( ( splitter * acytail ) - acytail );
          bhi = acytail - ( ( splitter * acytail ) - ( ( splitter * acytail ) - acytail ) );
          u[0] = ( "huge", 0 );
          u[1] = ( "huge", 0 );
          u[2] = ( "huge", 0 );
          u[3] = ( "huge", 0 );
          fast_expansion_sum_zeroelim( 4, B, 4, u, C1 );
          u[0] = ( "huge", 0 );
          u[1] = ( "huge", 0 );
          u[2] = ( "huge", 0 );
          u[3] = ( "huge", 0 );
          fast_expansion_sum_zeroelim( C1length, C1, 4, u, C2 );
          u[0] = ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ebp_400 * bhi ) - ( ( bcxtail * acytail ) - ( ebp_560 * bcx ) - ( ebp_560 * bhi ) - ( ebp_400 * bcx ) ) ) ) - ( ( ebp_400 * bhi ) - ( ( bcxtail * acytail ) - ( ebp_560 * bcx ) - ( ebp_560 * bhi ) - ( ebp_400 * bcx ) ) ) ) + ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ebp_400 * bhi ) - ( ( bcxtail * acytail ) - ( ebp_560 * bcx ) - ( ebp_560 * bhi ) - ( ebp_400 * bcx ) ) ) ) + ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ebp_400 * bhi ) - ( ( bcxtail * acytail ) - ( ebp_560 * bcx ) - ( ebp_560 * bhi ) - ( ebp_400 * bcx ) ) ) ) ) ) );
          u[1] = ( "huge", 0 );
          u[2] = ( "huge", 0 );
          u[3] = ( ebp_544 * bcytail ) + ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ebp_400 * bhi ) - ( ( bcxtail * acytail ) - ( ebp_560 * bcx ) - ( ebp_560 * bhi ) - ( ebp_400 * bcx ) ) ) ) + ( ( ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ebp_400 * bhi ) - ( ( bcxtail * acytail ) - ( ebp_560 * bcx ) - ( ebp_560 * bhi ) - ( ebp_400 * bcx ) ) ) - ( ( ( ebp_544 * bcytail ) + ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ebp_400 * bhi ) - ( ( bcxtail * acytail ) - ( ebp_560 * bcx ) - ( ebp_560 * bhi ) - ( ebp_400 * bcx ) ) ) ) ) - ( ebp_544 * bcytail ) ) ) + ( ( ebp_544 * bcytail ) - ( ( ( ebp_544 * bcytail ) + ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ebp_400 * bhi ) - ( ( bcxtail * acytail ) - ( ebp_560 * bcx ) - ( ebp_560 * bhi ) - ( ebp_400 * bcx ) ) ) ) ) - ( ( ( ebp_544 * bcytail ) + ( ( ebp_504 * ebp_424 ) - ( ( ebp_544 * bcytail ) - ( ebp_576 * ebp_464 ) - ( ebp_576 * ebp_504 ) - ( ebp_464 * ebp_424 ) ) - ( ( ebp_400 * bhi ) - ( ( bcxtail * acytail ) - ( ebp_560 * bcx ) - ( ebp_560 * bhi ) - ( ebp_400 * bcx ) ) ) ) ) - ( ebp_544 * bcytail ) ) ) ) ) - ( bcxtail * acytail ) );
          detlefttail = acxtail;
        }
      }
    }
    else
    {
      detlefttail = 0.000000000000;
    }
  }
  else
  {
    acy = 0.000000000000;
    detlefttail = 0.000000000000;
  }
  return 0;
}
double orient2d( double *pa, double *pb, double *pc )
{
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double detleft, detright = ( ( pa[0] - pc[0] ) * ( pb[1] - pc[1] ) ) - ( ( pa[1] - pc[1] ) * ( pb[0] - pc[0] ) ), det;
  double detsum, errbound;
  /* phantom */ double orient;
  if ( 0.000000000000 < ( pa[0] - pc[0] ) * ( pb[1] - pc[1] ) )
  {
    detleft = 0.000000000000;
    if ( ( pa[1] - pc[1] ) * ( pb[0] - pc[0] ) < 0.000000000000 )
    {
    }
    else
    {
      return 1;
    }
  }
  else
  if ( 0.000000000000 < 0.000000000000 )
  {
    if ( detleft < ( pa[1] - pc[1] ) * ( pb[0] - pc[0] ) )
    {
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 1;
  }
  if ( 0.000000000000 <= 0.000000000000 * ccwerrboundA )
  {
    return 1;
  }
  else
  {
    if ( 0.000000000000 < -( detright ) )
    {
      pa = -( detright ) - fp7;
    }
    return 1;
  }
}
double orient3dadapt( double *pa, double *pb, double *pc, double *pd, double permanent )
{
  int eax;
  int ecx;
  int edx;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double adx = pa[0] - pd[0], bdx = pb[0] - pd[0], cdx = pc[0] - pd[0], ady = pa[1] - pd[1], bdy = pb[1] - pd[1], cdy, adz, bdz, cdz;
  double det, errbound;
  double bdxcdy1, cdxbdy1, cdxady1, adxcdy1, adxbdy1, bdxady1;
  double bdxcdy0, cdxbdy0, cdxady0, adxcdy0, adxbdy0, bdxady0;
  double bc[4], ca[4], ab[4];
  double bc3, ca3, ab3;
  double adet[8], bdet[8], cdet[8];
  int alen, blen, clen;
  double abdet[16];
  int ablen = 4;
  double *finnow, *finother, *finswap;
  double fin1[192], fin2[192];
  int finlength;
  double adxtail, bdxtail, cdxtail;
  double adytail, bdytail, cdytail;
  double adztail, bdztail, cdztail;
  double at_blarge, at_clarge;
  double bt_clarge, bt_alarge;
  double ct_alarge, ct_blarge;
  double at_b[4], at_c[4], bt_c[4], bt_a[4], ct_a[4], ct_b[4];
  int at_blen, at_clen, bt_clen, bt_alen, ct_alen, ct_blen;
  /* phantom */ double bdxt_cdy1, cdxt_bdy1, cdxt_ady1;
  /* phantom */ double adxt_cdy1, adxt_bdy1, bdxt_ady1;
  double bdxt_cdy0, cdxt_bdy0, cdxt_ady0;
  double adxt_cdy0, adxt_bdy0, bdxt_ady0;
  /* phantom */ double bdyt_cdx1, cdyt_bdx1, cdyt_adx1;
  /* phantom */ double adyt_cdx1, adyt_bdx1, bdyt_adx1;
  double bdyt_cdx0, cdyt_bdx0, cdyt_adx0;
  double adyt_cdx0, adyt_bdx0, bdyt_adx0;
  double bct[8], cat[8], abt[8];
  int bctlen, catlen, abtlen;
  double bdxt_cdyt1, cdxt_bdyt1, cdxt_adyt1;
  double adxt_cdyt1, adxt_bdyt1, bdxt_adyt1;
  double bdxt_cdyt0, cdxt_bdyt0, cdxt_adyt0;
  double adxt_cdyt0, adxt_bdyt0, bdxt_adyt0;
  double u[4], v[12], w[16];
  double u3;
  int vlength, wlength;
  double negate;
  double bvirt;
  /* phantom */ double avirt, bround, around;
  double c;
  /* phantom */ double abig;
  double ahi, alo, bhi, blo;
  /* phantom */ double err1, err2, err3;
  double _i, _j, _k;
  double _0;
  adz = ablen - pd[2];
  bdz = pb[2] - pd[2];
  cdz = pc[2] - pd[2];
  bdxcdy1 = bdx * ( pc[1] - pd[1] );
  cdxbdy1 = cdx * bdy;
  bc[0] = ( "huge", 0 );
  bc[1] = ( "huge", 0 );
  bc[2] = ( "huge", 0 );
  bc[3] = ( "huge", 0 );
  alen = ablen;
  ablen = 4;
  cdxady1 = cdx * ady;
  adxcdy1 = ( pc[1] - pd[1] ) * adx;
  ca[0] = ( "huge", 0 );
  ca[1] = ( "huge", 0 );
  ca[2] = ( "huge", 0 );
  ca[3] = ( "huge", 0 );
  blen = ablen;
  ablen = 4;
  adxbdy1 = bdy * adx;
  bdxady1 = bdx * ady;
  ab[0] = ( "huge", 0 );
  ab[1] = ( "huge", 0 );
  ab[2] = ( "huge", 0 );
  ab[3] = ( "huge", 0 );
  clen = ablen;
  ablen = alen;
  fast_expansion_sum_zeroelim( alen, adet, blen, bdet, abdet );
  bdxt_cdy0 = fin1[0];
  cdxbdy0 = pc[1] - pd[1];
  if ( permanent * o3derrboundB < 0.000000000000 )
  {
    cdxbdy0 = errbound;
    if ( cdxbdy0 < -0.000000000000 )
    {
      clen = ( bdztail - ( bdx + ( bdztail - bdx ) ) ) + ( bdztail - bdx - pd[0] );
      blen = ( pc - cdx - pd[0] ) + ( pc - ( cdx + ( pc - cdx ) ) );
      alen = ( cdztail - ( ady + ( cdztail - ady ) ) ) + ( cdztail - ady - pd[1] );
      ablen = (cdztail & 0xFFFFFFFF);
      bdytail = ( bdztail - ( bdy + ( bdztail - bdy ) ) ) + ( bdztail - bdy - pd[1] );
      cdytail = ( pc[1] - bdxt_cdy0 - pd[1] ) + ( *(double*)(pc + 8) - ( bdxt_cdy0 + ( *(double*)(pc + 8) - bdxt_cdy0 ) ) );
      adztail = ( cdztail - ( adz + ( cdztail - adz ) ) ) + ( cdztail - adz - pd[2] );
      bdztail = ( bdztail - ( bdz + ( bdztail - bdz ) ) ) + ( bdztail - bdz - *(double*)(pd + 16) );
      cdztail = ( pc[2] - cdz - *(double*)(pd + 16) ) + ( *(double*)(pc + 16) - ( cdz + ( *(double*)(pc + 16) - cdz ) ) );
      if ( ( cdztail - adx - pd[0] ) + ( cdztail - ( adx + ( cdztail - adx ) ) ) )
        errbound = 0.000000000000;
      else
      if ( ( cdztail - adx - edi ) + ( cdztail - ( adx + ( cdztail - adx ) ) ) == 0.000000000000 )
      {
        if ( !1 )
          errbound = 0.000000000000;
        else
        if ( !0 )
        {
          if ( blen != 0.000000000000 )
            errbound = 0.000000000000;
          else
          if ( blen == 0.000000000000 )
          {
            if ( alen != 0.000000000000 )
              errbound = 0.000000000000;
            else
            if ( alen == 0.000000000000 )
            {
              if ( bdytail != 0.000000000000 )
                errbound = 0.000000000000;
              else
              if ( bdytail == 0.000000000000 )
              {
                if ( cdytail != 0.000000000000 )
                  errbound = 0.000000000000;
                else
                if ( cdytail == 0.000000000000 )
                {
                  if ( adztail != 0.000000000000 )
                    errbound = 0.000000000000;
                  else
                  if ( adztail == 0.000000000000 )
                  {
                    if ( bdztail != 0.000000000000 )
                      errbound = 0.000000000000;
                    else
                    if ( bdztail == 0.000000000000 )
                    {
                      errbound = 0.000000000000;
                      if ( cdztail == 0.000000000000 )
                      {
                        bdxt_cdy0 = cdxbdy0;
                      }
                    }
                    else
                      errbound = 0.000000000000;
                  }
                  else
                    errbound = 0.000000000000;
                }
                else
                  errbound = 0.000000000000;
              }
              else
                errbound = 0.000000000000;
            }
            else
              errbound = 0.000000000000;
          }
          else
            errbound = 0.000000000000;
        }
        else
          errbound = 0.000000000000;
      }
      else
        errbound = 0.000000000000;
      if ( resulterrbound * ( ( ( cdxbdy0 <> 0.000000000000 ) & 1 ) == 0 ? -0.000000000000 : cdxbdy0 ) < cdxbdy0 + ( bdz * ( ( ( cdx * alen ) + ( blen * ady ) ) - ( ( errbound * bdxt_cdy0 ) + ( cdytail * adx ) ) ) ) + ( bdztail * ( cdxady1 - adxcdy1 ) ) + ( adztail * ( bdxcdy1 - cdxbdy1 ) ) + ( adz * ( ( ( cdytail * bdx ) + ( clen * bdxt_cdy0 ) ) - ( ( blen * bdy ) + ( cdx * bdytail ) ) ) ) + ( cdz * ( ( ( bdytail * adx ) + ( errbound * bdy ) ) - ( ( clen * ady ) + ( bdx * alen ) ) ) ) + ( cdztail * ( adxbdy1 - bdxady1 ) ) )
      {
        cdy = 0.000000000000;
        if ( 0.000000000000 < -0.000000000000 )
        {
          if ( cdxbdy0 == bdxt_cdy0 )
          {
            cdxbdy0 = errbound;
            if ( cdxbdy0 == alen && cdxbdy0 == alen )
            {
              at_b[0] = 0.000000000000;
              at_c[0] = 0.000000000000;
            }
            else
            {
              at_blarge = bdx * -( alen );
              adxbdy1 = -( alen ) - ( ( splitter * -( alen ) ) - ( ( splitter * -( alen ) ) - -( alen ) ) );
              at_b[0] = 0.000000000000 - ( at_blarge - ( ( ( splitter * -( alen ) ) - ( ( splitter * -( alen ) ) - -( alen ) ) ) * ( ( splitter * bdx ) - ( ( splitter * bdx ) - bdx ) ) ) - ( adxbdy1 * ( ( splitter * bdx ) - ( ( splitter * bdx ) - bdx ) ) ) - ( ( ( splitter * -( alen ) ) - ( ( splitter * -( alen ) ) - -( alen ) ) ) * ( bdx - ( ( splitter * bdx ) - ( ( splitter * bdx ) - bdx ) ) ) ) );
              at_c[0] = ( ( alen - ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) * ( cdx - ( ( splitter * cdx ) - ( ( splitter * cdx ) - cdx ) ) ) ) - ( ( cdx * alen ) - ( ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) * ( ( splitter * cdx ) - ( ( splitter * cdx ) - cdx ) ) ) - ( ( alen - ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) * ( ( splitter * cdx ) - ( ( splitter * cdx ) - cdx ) ) ) - ( ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) * ( cdx - ( ( splitter * cdx ) - ( ( splitter * cdx ) - cdx ) ) ) ) );
              at_clarge = cdx * alen;
            }
          }
          else
          {
            cdxbdy0 = errbound;
            if ( cdxbdy0 == alen && cdxbdy0 == alen )
            {
              cdxady1 = cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) );
              adxbdy1 = bdy - ( ( splitter * bdy ) - ( ( splitter * bdy ) - bdy ) );
              at_b[0] = 0.000000000000 - ( ( errbound * bdy ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * bdy ) - ( ( splitter * bdy ) - bdy ) ) ) - ( cdxady1 * ( ( splitter * bdy ) - ( ( splitter * bdy ) - bdy ) ) ) - ( adxbdy1 * ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) );
              at_blarge = errbound * bdy;
              at_clarge = bdxt_cdy0 * -( cdxbdy0 );
              adxbdy1 = -( cdxbdy0 ) - ( ( splitter * -( cdxbdy0 ) ) - ( ( splitter * -( cdxbdy0 ) ) - -( cdxbdy0 ) ) );
              at_c[0] = ( adxbdy1 * ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) - ( at_clarge - ( ( ( splitter * -( cdxbdy0 ) ) - ( ( splitter * -( cdxbdy0 ) ) - -( cdxbdy0 ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) - ( adxbdy1 * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) - ( ( ( splitter * -( cdxbdy0 ) ) - ( ( splitter * -( cdxbdy0 ) ) - -( cdxbdy0 ) ) ) * ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) );
            }
            else
            {
              bdxcdy1 = ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 );
              adxcdy1 = cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) );
              cdxady1 = ( splitter * alen ) - ( ( splitter * alen ) - alen );
              bdxady1 = alen - ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) );
              at_b[0] = ( "huge", 0 );
              at_blarge = ( "huge", 0 );
              at_c[0] = ( "huge", 0 );
              at_clarge = ( "huge", 0 );
            }
          }
          errbound = 0.000000000000;
          if ( clen == 0.000000000000 )
          {
            if ( clen == 0.000000000000 )
            {
              bdxt_cdy0 = cdxbdy0 = errbound;
              errbound = cdy;
              if ( cdy == bdytail )
              {
                if ( cdy == bdytail )
                {
                  bt_c[0] = cdxbdy0;
                  ablen = 1;
                  bt_a[0] = cdxbdy0;
                  cdxbdy0 = 0.000000000000;
                  if ( blen )
                    cdxbdy0 = errbound;
                  else
                  if ( blen == 0.000000000000 )
                  {
                    if ( errbound == cdytail )
                    {
                      if ( errbound == cdytail )
                      {
                        ct_a[0] = cdxbdy0;
                        ct_blen = 1;
                        ct_b[0] = cdxbdy0;
                        finlength = ablen = ablen;
                        ablen = (bdy & 0xFFFFFFFF);
                        finlength = ablen = finlength;
                        ablen = (bdxcdy1 & 0xFFFFFFFF);
                        finlength = ablen = finlength;
                        cdxbdy0 = bdxt_cdy0;
                        bdxt_cdy0 = adztail;
                        if ( adztail == 0.000000000000 )
                        {
                          if ( adztail == 0.000000000000 )
                            bdxt_cdy0 = cdxbdy0;
                            cdxbdy0 = bdztail;
                            if ( bdztail == 0.000000000000 && bdztail == 0.000000000000 )
                            {
                            }
                            else
                            {
                              ablen = 4;
                              finlength = ablen = finlength;
                              ablen = finnow;
                              bdxt_cdy0 = bdxt_cdy0;
                            }
                            cdxbdy0 = cdztail;
                            if ( cdztail == 0.000000000000 && cdztail == 0.000000000000 )
                            {
                            }
                            else
                            {
                              ablen = 4;
                              finlength = ablen = finlength;
                              ablen = finnow;
                              bdxt_cdy0 = bdxt_cdy0;
                            }
                            if ( ( "huge", 0 ) || bdxt_cdy0 )
                            {
                              if ( cdxbdy0 == bdytail && cdxbdy0 == bdytail )
                                bdxt_cdy0 = cdxbdy0;
                              else
                              {
                                adx = errbound * cdxbdy0;
                                cdxady1 = cdz * ( 0.000000000000 - ( adx - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) ) ) );
                                bdxcdy1 = ( 0.000000000000 - ( adx - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) ) ) - ( ( splitter * ( 0.000000000000 - ( adx - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) ) ) ) ) - ( ( splitter * ( 0.000000000000 - ( adx - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) ) ) ) ) - ( 0.000000000000 - ( adx - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) ) ) ) ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) );
                                u[0] = ( "huge", 0 );
                                adxbdy1 = ( splitter * adx ) - ( ( splitter * adx ) - adx );
                                bdxcdy1 = adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) );
                                adxbdy1 = ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) - ( ( cdz * adx ) - ( adxbdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( bdxcdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( adxbdy1 * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) );
                                u[1] = ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) - ( ( cdz * adx ) - ( adxbdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( bdxcdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( adxbdy1 * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) ) - adxbdy1 ) + ( cdxady1 - ( ( cdxady1 + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) - ( ( cdz * adx ) - ( adxbdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( bdxcdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( adxbdy1 * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) ) ) ) - ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) - ( ( cdz * adx ) - ( adxbdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( bdxcdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( adxbdy1 * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) ) ) ) );
                                ablen = finlength;
                                u[2] = ( cdxady1 + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) - ( ( cdz * adx ) - ( adxbdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( bdxcdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( adxbdy1 * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) ) ) ) - ( ( cdxady1 + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) - ( ( cdz * adx ) - ( adxbdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( bdxcdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( adxbdy1 * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) ) ) + ( cdz * adx ) ) - ( cdz * adx ) );
                                u[3] = cdxady1 + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) - ( ( cdz * adx ) - ( adxbdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( bdxcdy1 * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( adxbdy1 * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) ) ) + ( cdz * adx );
                                finlength = ablen;
                                bdxt_cdy0 = cdxbdy0 = 0.000000000000 - ( adx - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) ) );
                                if ( cdztail == bdxt_cdy0 && cdztail == bdxt_cdy0 )
                                  ablen = finnow;
                                else
                                {
                                  ablen = finlength;
                                  u[0] = ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) ) - ( ( cdztail * cdxbdy0 ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) ) );
                                  adx -= ( splitter * adx ) - ( ( splitter * adx ) - adx );
                                  u[1] = ( "huge", 0 );
                                  u[2] = ( ( cdztail * cdxbdy0 ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) ) - ( ( cdztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( adx * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) ) ) - ( ( ( cdztail * cdxbdy0 ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) ) - ( ( cdztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( adx * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) ) + ( cdztail * adx ) ) - ( cdztail * adx ) );
                                  u[3] = ( cdztail * cdxbdy0 ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) ) - ( ( cdztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( adx * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) ) + ( cdztail * adx );
                                  finlength = ablen;
                                  bdxt_cdy0 = bdxt_cdy0;
                                }
                              }
                              if ( cdytail == 0.000000000000 )
                              {
                                if ( cdytail == 0.000000000000 )
                                {
                                }
                                else
                                {
                                  bdxt_cdy0 = errbound = bdxt_cdy0;
                                }
                              }
                              else
                              {
                                bdxt_cdy0 = errbound = bdxt_cdy0;
                              }
                              ablen = finlength;
                              adx = bdxt_cdy0 * -( errbound );
                              cdxady1 = ( "huge", 0 );
                              u[0] = ( "huge", 0 );
                              cdxady1 = bdz * adx;
                              adxbdy1 = adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) );
                              u[1] = ( "huge", 0 );
                              u[2] = ( ( bdz * ( ( ( -( errbound ) - ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) ) * ( cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) ) - ( adx - ( ( -( errbound ) - ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) ) * ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) - ( ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) * ( cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) ) ) ) ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) ) - ( cdxady1 - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( adxbdy1 * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) ) ) - ( ( bdz * ( ( ( -( errbound ) - ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) ) * ( cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) ) - ( adx - ( ( -( errbound ) - ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) ) * ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) - ( ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) * ( cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) ) ) ) ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) ) - ( cdxady1 - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( adxbdy1 * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) ) );
                              u[3] = cdxady1 + ( bdz * ( ( ( -( errbound ) - ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) ) * ( cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) ) - ( adx - ( ( -( errbound ) - ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) ) * ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) - ( ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) * ( cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) ) ) ) ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) ) - ( cdxady1 - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( adxbdy1 * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) );
                              finlength = ablen;
                              bdxt_cdy0 = ( ( -( errbound ) - ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) ) * ( cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) ) - ( adx - ( ( -( errbound ) - ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) ) * ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) - ( ( ( splitter * -( errbound ) ) - ( ( splitter * -( errbound ) ) - -( errbound ) ) ) * ( cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) ) );
                              if ( cdxbdy0 == bdztail && cdxbdy0 == bdztail )
                                ablen = finnow;
                              else
                              {
                                ablen = finlength;
                                u[0] = ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) - ( ( bdztail * bdxt_cdy0 ) - ( ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) );
                                u[1] = ( "huge", 0 );
                                u[2] = ( ( bdztail * bdxt_cdy0 ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) - ( ( bdztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) ) ) - ( ( ( bdztail * bdxt_cdy0 ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) - ( ( bdztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) ) + ( bdztail * adx ) ) - ( bdztail * adx ) );
                                u[3] = ( bdztail * bdxt_cdy0 ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) - ( ( bdztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) ) + ( bdztail * adx );
                                finlength = ablen;
                              }
                            }
                            else
                            {
                            }
                            if ( clen || clen )
                            {
                              if ( cdytail == cdxbdy0 && cdytail == cdxbdy0 )
                              {
                              }
                              else
                              {
                                ablen = finlength;
                                adxbdy1 = adz * ( ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( errbound - ( ( splitter * errbound ) - ( splitter * errbound ) ) ) ) - ( ( errbound * cdxbdy0 ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * errbound ) - ( splitter * errbound ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * errbound ) - ( splitter * errbound ) ) ) - ( ( errbound - ( ( splitter * errbound ) - ( splitter * errbound ) ) ) * ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) ) );
                                cdxady1 = ( "huge", 0 );
                                u[0] = ( "huge", 0 );
                                cdxady1 = adz * errbound * cdxbdy0;
                                adx = ( errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( errbound * cdxbdy0 ) ) );
                                u[1] = ( "huge", 0 );
                                u[2] = ( adxbdy1 + ( ( ( ( errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( errbound * cdxbdy0 ) ) ) ) * ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) ) - ( cdxady1 - ( ( ( splitter * errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( errbound * cdxbdy0 ) ) ) * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( adx * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) * ( ( splitter * errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( errbound * cdxbdy0 ) ) ) ) ) ) ) - ( adxbdy1 + ( ( ( ( errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( errbound * cdxbdy0 ) ) ) ) * ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) ) - ( cdxady1 - ( ( ( splitter * errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( errbound * cdxbdy0 ) ) ) * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( adx * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) * ( ( splitter * errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( errbound * cdxbdy0 ) ) ) ) ) ) );
                                u[3] = cdxady1 + adxbdy1 + ( ( ( ( errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( errbound * cdxbdy0 ) ) ) ) * ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) ) - ( cdxady1 - ( ( ( splitter * errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( errbound * cdxbdy0 ) ) ) * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( adx * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) * ( ( splitter * errbound * cdxbdy0 ) - ( ( splitter * errbound * cdxbdy0 ) - ( errbound * cdxbdy0 ) ) ) ) ) );
                                finlength = ablen;
                                cdxbdy0 = ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( errbound - ( ( splitter * errbound ) - ( splitter * errbound ) ) ) ) - ( ( errbound * cdxbdy0 ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * errbound ) - ( splitter * errbound ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * errbound ) - ( splitter * errbound ) ) ) - ( ( errbound - ( ( splitter * errbound ) - ( splitter * errbound ) ) ) * ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) );
                                bdxt_cdy0 = errbound * cdxbdy0;
                                if ( bdxt_cdy0 == adztail && bdxt_cdy0 == adztail )
                                  ablen = finnow;
                                else
                                {
                                  ablen = finlength;
                                  u[0] = ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( adztail - ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) ) - ( ( cdxbdy0 * adztail ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( adztail - ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) ) );
                                  u[1] = ( "huge", 0 );
                                  u[2] = ( ( cdxbdy0 * adztail ) + ( ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( adztail - ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) ) - ( ( bdxt_cdy0 * adztail ) - ( ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) * ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) - ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) - ( ( adztail - ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) ) ) - ( ( ( cdxbdy0 * adztail ) + ( ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( adztail - ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) ) - ( ( bdxt_cdy0 * adztail ) - ( ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) * ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) - ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) - ( ( adztail - ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) ) + ( bdxt_cdy0 * adztail ) ) - ( bdxt_cdy0 * adztail ) );
                                  u[3] = ( cdxbdy0 * adztail ) + ( ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( adztail - ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) ) - ( ( bdxt_cdy0 * adztail ) - ( ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) * ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) - ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) - ( ( adztail - ( ( splitter * adztail ) - ( ( splitter * adztail ) - adztail ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) ) + ( bdxt_cdy0 * adztail );
                                  finlength = ablen;
                                }
                              }
                              if ( alen == 0.000000000000 && alen == 0.000000000000 )
                              {
                              }
                              else
                              {
                                ablen = finlength;
                                adxbdy1 = cdz * ( 0.000000000000 - ( ( cdxbdy0 * -( clen ) ) - ( ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) * ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) - ( ( -( clen ) - ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) ) * ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) - ( ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) * ( alen - ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) ) ) );
                                cdxady1 = ( "huge", 0 );
                                u[0] = ( "huge", 0 );
                                cdz *= cdxbdy0 * -( clen );
                                adx = ( cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( cdxbdy0 * -( clen ) ) ) );
                                u[1] = ( "huge", 0 );
                                u[2] = ( adxbdy1 + ( ( ( ( cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( cdxbdy0 * -( clen ) ) ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) - ( cdz - ( ( ( splitter * cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( cdxbdy0 * -( clen ) ) ) ) * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( adx * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) * ( ( splitter * cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( cdxbdy0 * -( clen ) ) ) ) ) ) ) ) - ( adxbdy1 + ( ( ( ( cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( cdxbdy0 * -( clen ) ) ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) - ( cdz - ( ( ( splitter * cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( cdxbdy0 * -( clen ) ) ) ) * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( adx * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) * ( ( splitter * cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( cdxbdy0 * -( clen ) ) ) ) ) ) ) );
                                u[3] = cdz + adxbdy1 + ( ( ( ( cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( cdxbdy0 * -( clen ) ) ) ) ) * ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) ) - ( cdz - ( ( ( splitter * cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( cdxbdy0 * -( clen ) ) ) ) * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( adx * ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) - ( ( cdz - ( ( splitter * cdz ) - ( ( splitter * cdz ) - cdz ) ) ) * ( ( splitter * cdxbdy0 * -( clen ) ) - ( ( splitter * cdxbdy0 * -( clen ) ) - ( cdxbdy0 * -( clen ) ) ) ) ) ) );
                                finlength = ablen;
                                cdxbdy0 = 0.000000000000 - ( ( cdxbdy0 * -( clen ) ) - ( ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) * ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) - ( ( -( clen ) - ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) ) * ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) - ( ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) * ( alen - ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) ) );
                                bdxt_cdy0 = cdxbdy0 * -( clen );
                                if ( cdztail == bdxt_cdy0 && cdztail == bdxt_cdy0 )
                                  ablen = finnow;
                                else
                                {
                                  ablen = finlength;
                                  u[0] = ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) ) - ( ( cdztail * cdxbdy0 ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) ) );
                                  adx = cdztail * bdxt_cdy0;
                                  u[1] = ( "huge", 0 );
                                  u[2] = ( ( cdztail * cdxbdy0 ) + ( ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) ) - ( adx - ( ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) ) ) - ( ( cdztail * cdxbdy0 ) + ( ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) ) - ( adx - ( ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) ) );
                                  u[3] = adx + ( cdztail * cdxbdy0 ) + ( ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) ) - ( adx - ( ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) - ( ( cdztail - ( ( splitter * cdztail ) - ( ( splitter * cdztail ) - cdztail ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) );
                                  finlength = ablen;
                                }
                              }
                            }
                            else
                            {
                            }
                            if ( blen || blen )
                            {
                              if ( cdxbdy0 == alen && cdxbdy0 == alen )
                              {
                              }
                              else
                              {
                                adx = errbound * cdxbdy0;
                                cdxady1 = bdz * ( ( ( blen - ( ( splitter * blen ) - ( ( splitter * blen ) - blen ) ) ) * ( alen - ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) ) - ( adx - ( ( blen - ( ( splitter * blen ) - ( ( splitter * blen ) - blen ) ) ) * ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) - ( ( ( splitter * blen ) - ( ( splitter * blen ) - blen ) ) * ( alen - ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) ) ) );
                                u[0] = ( "huge", 0 );
                                adxbdy1 = adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) );
                                u[1] = ( "huge", 0 );
                                u[2] = ( cdxady1 + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) ) - ( ( bdz * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( adxbdy1 * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) ) ) ) ) - ( ( cdxady1 + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) ) - ( ( bdz * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( adxbdy1 * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) ) ) ) + ( bdz * adx ) ) - ( bdz * adx ) );
                                u[3] = cdxady1 + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) ) - ( ( bdz * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( adxbdy1 * ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( bdz - ( ( splitter * bdz ) - ( ( splitter * bdz ) - bdz ) ) ) ) ) ) + ( bdz * adx );
                                finlength = ablen = finlength;
                                bdxt_cdy0 = ( ( blen - ( ( splitter * blen ) - ( ( splitter * blen ) - blen ) ) ) * ( alen - ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) ) - ( adx - ( ( blen - ( ( splitter * blen ) - ( ( splitter * blen ) - blen ) ) ) * ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) - ( ( ( splitter * blen ) - ( ( splitter * blen ) - blen ) ) * ( alen - ( ( splitter * alen ) - ( ( splitter * alen ) - alen ) ) ) ) );
                                if ( bdztail == bdxt_cdy0 && bdztail == bdxt_cdy0 )
                                  ablen = finnow;
                                else
                                {
                                  ablen = finlength;
                                  u[0] = ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) - ( ( bdztail * bdxt_cdy0 ) - ( ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) );
                                  u[1] = ( "huge", 0 );
                                  u[2] = ( ( bdztail * bdxt_cdy0 ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) - ( ( bdztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) ) ) ) - ( ( ( bdztail * bdxt_cdy0 ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) - ( ( bdztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) ) ) + ( bdztail * adx ) ) - ( bdztail * adx ) );
                                  u[3] = ( bdztail * bdxt_cdy0 ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) - ( ( bdztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( bdztail - ( ( splitter * bdztail ) - ( ( splitter * bdztail ) - bdztail ) ) ) ) ) ) + ( bdztail * adx );
                                  finlength = ablen;
                                }
                              }
                              if ( bdytail == 0.000000000000 && bdytail == 0.000000000000 )
                              {
                              }
                              else
                              {
                                adx = cdxbdy0 * -( blen );
                                cdxady1 = adz * ( ( ( -( blen ) - ( ( splitter * -( blen ) ) - ( ( splitter * -( blen ) ) - -( blen ) ) ) ) * ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) ) - ( adx - ( ( -( blen ) - ( ( splitter * -( blen ) ) - ( ( splitter * -( blen ) ) - -( blen ) ) ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( ( splitter * -( blen ) ) - ( ( splitter * -( blen ) ) - -( blen ) ) ) * ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) ) ) );
                                u[0] = ( "huge", 0 );
                                adz *= adx;
                                u[1] = ( "huge", 0 );
                                u[2] = ( cdxady1 + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) ) - ( adz - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) ) ) ) ) - ( cdxady1 + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) ) - ( adz - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) ) ) ) );
                                u[3] = adz + cdxady1 + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) ) - ( adz - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( adz - ( ( splitter * adz ) - ( ( splitter * adz ) - adz ) ) ) ) ) );
                                finlength = ablen = finlength;
                                cdxbdy0 = ( ( -( blen ) - ( ( splitter * -( blen ) ) - ( ( splitter * -( blen ) ) - -( blen ) ) ) ) * ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) ) - ( adx - ( ( -( blen ) - ( ( splitter * -( blen ) ) - ( ( splitter * -( blen ) ) - -( blen ) ) ) ) * ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) - ( ( ( splitter * -( blen ) ) - ( ( splitter * -( blen ) ) - -( blen ) ) ) * ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) ) );
                                bdxt_cdy0 = adztail;
                                if ( bdxt_cdy0 == adztail && bdxt_cdy0 == adztail )
                                  ablen = finnow;
                                else
                                {
                                  ablen = finlength;
                                  u[0] = ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( adztail - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) - ( ( cdxbdy0 * adztail ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) - ( ( cdxbdy0 - ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) - ( ( ( splitter * cdxbdy0 ) - ( ( splitter * cdxbdy0 ) - cdxbdy0 ) ) * ( adztail - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) );
                                  u[1] = ( "huge", 0 );
                                  u[2] = ( ( cdxbdy0 * adztail ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( adztail - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) - ( ( adztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( adztail - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) ) ) ) - ( ( ( cdxbdy0 * adztail ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( adztail - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) - ( ( adztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( adztail - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) ) ) + ( adztail * adx ) ) - ( adztail * adx ) );
                                  u[3] = ( cdxbdy0 * adztail ) + ( ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( adztail - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) - ( ( adztail * adx ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) - ( ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) - ( ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) * ( adztail - ( ( splitter * bdxt_cdy0 ) - ( ( splitter * bdxt_cdy0 ) - bdxt_cdy0 ) ) ) ) ) ) + ( adztail * adx );
                                  finlength = ablen;
                                  ablen = (bdx & 0xFFFFFFFF);
                                  finlength = ablen = finlength;
                                  ablen = finnow;
                                  bdxt_cdy0 = bdztail;
                                  if ( bdztail == 0.000000000000 && bdztail == 0.000000000000 )
                                  {
                                  }
                                  else
                                  {
                                    ablen = (cdx & 0xFFFFFFFF);
                                    finlength = ablen = finlength;
                                    ablen = finnow;
                                  }
                                  bdxt_cdy0 = cdztail;
                                  bdxt_cdy0 = *(double*)(finnow + -8);
                                }
                              }
                            }
                            else
                            {
                            }
                            bdxt_cdy0 = 0.000000000000;
                            if ( adztail || adztail )
                            {
                              ablen = (bdx & 0xFFFFFFFF);
                              finlength = ablen = finlength;
                              ablen = finnow;
                              bdxt_cdy0 = bdztail;
                            }
                            else
                            {
                              bdxt_cdy0 = bdztail;
                            }
                          else
                          {
                          }
                        }
                        else
                        {
                        }
                        ablen = 4;
                        finlength = ablen = finlength;
                        bdxt_cdy0 = bdxt_cdy0;
                        ablen = fin2[0];
                        cdxbdy0 = bdztail;
                      }
                      else
                      {
                      }
                    }
                    else
                    {
                    }
                    ct_blen = 2;
                    ct_alarge = adx * -( cdytail );
                    ct_a[0] = 0.000000000000 - ( ct_alarge - ( ( ( splitter * -( cdytail ) ) - ( ( splitter * -( cdytail ) ) - -( cdytail ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) - ( ( -( cdytail ) - ( ( splitter * -( cdytail ) ) - ( ( splitter * -( cdytail ) ) - -( cdytail ) ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) - ( ( ( splitter * -( cdytail ) ) - ( ( splitter * -( cdytail ) ) - -( cdytail ) ) ) * ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) );
                    ct_b[0] = ( ( cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) * ( bdx - ( ( splitter * bdx ) - ( ( splitter * bdx ) - bdx ) ) ) ) - ( ( cdytail * bdx ) - ( ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) * ( ( splitter * bdx ) - ( ( splitter * bdx ) - bdx ) ) ) - ( ( cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) ) * ( ( splitter * bdx ) - ( ( splitter * bdx ) - bdx ) ) ) - ( ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) ) * ( bdx - ( ( splitter * bdx ) - ( ( splitter * bdx ) - bdx ) ) ) ) );
                    ct_b[1] = cdytail * bdx;
                  }
                  else
                    cdxbdy0 = errbound;
                  if ( cdytail == cdxbdy0 && cdytail == cdxbdy0 )
                  {
                    ct_blen = 2;
                    ct_a[0] = 0.000000000000 - ( ( blen * ady ) - ( ( ( splitter * blen ) - ( ( splitter * blen ) - blen ) ) * ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) - ( ( blen - ( ( splitter * blen ) - ( ( splitter * blen ) - blen ) ) ) * ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) - ( ( ( splitter * blen ) - ( ( splitter * blen ) - blen ) ) * ( ady - ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) ) );
                    ct_alarge = blen * ady;
                    ct_b[0] = ( ( -( blen ) - ( ( splitter * -( blen ) ) - ( ( splitter * -( blen ) ) - -( blen ) ) ) ) * ( bdy - ( ( splitter * bdy ) - ( ( splitter * bdy ) - bdy ) ) ) ) - ( ( bdy * -( blen ) ) - ( ( ( splitter * -( blen ) ) - ( ( splitter * -( blen ) ) - -( blen ) ) ) * ( ( splitter * bdy ) - ( ( splitter * bdy ) - bdy ) ) ) - ( ( -( blen ) - ( ( splitter * -( blen ) ) - ( ( splitter * -( blen ) ) - -( blen ) ) ) ) * ( ( splitter * bdy ) - ( ( splitter * bdy ) - bdy ) ) ) - ( ( ( splitter * -( blen ) ) - ( ( splitter * -( blen ) ) - -( blen ) ) ) * ( bdy - ( ( splitter * bdy ) - ( ( splitter * bdy ) - bdy ) ) ) ) );
                    ct_b[1] = bdy * -( blen );
                  }
                  else
                  {
                    ct_blen = 4;
                    cdx = ( splitter * blen ) - ( ( splitter * blen ) - blen );
                    ady = cdytail - ( ( splitter * cdytail ) - ( ( splitter * cdytail ) - cdytail ) );
                    ct_a[0] = ( "huge", 0 );
                    ct_alarge = ( "huge", 0 );
                    ct_b[0] = ( "huge", 0 );
                    ct_b[1] = ( "huge", 0 );
                    ct_b[2] = ( "huge", 0 );
                    ct_b[3] = ( "huge", 0 );
                  }
                }
                else
                {
                }
              }
              else
              {
              }
              ablen = 2;
              bt_clarge = cdx * -( bdytail );
              bt_c[0] = 0.000000000000 - ( bt_clarge - ( ( ( splitter * -( bdytail ) ) - ( ( splitter * -( bdytail ) ) - -( bdytail ) ) ) * ( ( splitter * cdx ) - ( ( splitter * cdx ) - cdx ) ) ) - ( ( -( bdytail ) - ( ( splitter * -( bdytail ) ) - ( ( splitter * -( bdytail ) ) - -( bdytail ) ) ) ) * ( ( splitter * cdx ) - ( ( splitter * cdx ) - cdx ) ) ) - ( ( ( splitter * -( bdytail ) ) - ( ( splitter * -( bdytail ) ) - -( bdytail ) ) ) * ( cdx - ( ( splitter * cdx ) - ( ( splitter * cdx ) - cdx ) ) ) ) );
              bt_a[0] = ( ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) * ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) - ( ( bdytail * adx ) - ( ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) - ( ( bdytail - ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) ) * ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) - ( ( ( splitter * bdytail ) - ( ( splitter * bdytail ) - bdytail ) ) * ( adx - ( ( splitter * adx ) - ( ( splitter * adx ) - adx ) ) ) ) );
              bt_alarge = bdytail * adx;
            }
            else
              errbound = cdy;
          }
          else
            errbound = cdy;
          if ( errbound == bdytail && errbound == bdytail )
          {
            ablen = 2;
            bt_c[0] = ( ( clen - ( ( splitter * clen ) - ( ( splitter * clen ) - clen ) ) ) * ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( 0.000000000000 - bdxt_cdy0 ) ) ) ) - ( ( clen * bdxt_cdy0 ) - ( ( ( splitter * clen ) - ( ( splitter * clen ) - clen ) ) * ( ( splitter * bdxt_cdy0 ) - ( 0.000000000000 - bdxt_cdy0 ) ) ) - ( ( clen - ( ( splitter * clen ) - ( ( splitter * clen ) - clen ) ) ) * ( ( splitter * bdxt_cdy0 ) - ( 0.000000000000 - bdxt_cdy0 ) ) ) - ( ( ( splitter * clen ) - ( ( splitter * clen ) - clen ) ) * ( bdxt_cdy0 - ( ( splitter * bdxt_cdy0 ) - ( 0.000000000000 - bdxt_cdy0 ) ) ) ) );
            bt_clarge = clen * bdxt_cdy0;
            bt_alarge = ady * -( clen );
            bdxt_cdy0 = cdxbdy0 = ( ( -( clen ) - ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) ) * ( ady - ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) ) - ( bt_alarge - ( ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) * ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) - ( ( -( clen ) - ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) ) * ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) - ( ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) * ( ady - ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) ) );
            bt_a[0] = ( ( -( clen ) - ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) ) * ( ady - ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) ) - ( bt_alarge - ( ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) * ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) - ( ( -( clen ) - ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) ) * ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) - ( ( ( splitter * -( clen ) ) - ( ( splitter * -( clen ) ) - -( clen ) ) ) * ( ady - ( ( splitter * ady ) - ( ( splitter * ady ) - ady ) ) ) ) );
          }
          else
          {
            ablen = 4;
            adxbdy1 = ( splitter * clen ) - ( ( splitter * clen ) - clen );
            bdxady1 = clen - ( ( splitter * clen ) - ( ( splitter * clen ) - clen ) );
            bt_c[0] = ( "huge", 0 );
            bt_clarge = ( "huge", 0 );
            bt_a[0] = ( "huge", 0 );
            bt_alarge = ( "huge", 0 );
            bdxt_cdy0 = cdxbdy0 = ( "huge", 0 );
          }
        }
        else
        {
          bdxt_cdy0 = cdy;
        }
      }
      else
      {
        cdy = 0.000000000000;
        bdxt_cdy0 = 0.000000000000;
      }
    }
    else
    {
      bdxt_cdy0 = cdxbdy0;
    }
  }
  else
  {
    bdxt_cdy0 = errbound;
  }
  return 0;
}
double orient3d( double *pa, double *pb, double *pc, double *pd )
{
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double adx, bdx, cdx, ady, bdy, cdy, adz = pa[2] - pd[2], bdz = pb[2] - pd[2], cdz = pc[2] - pd[2];
  double bdxcdy = ( pb[0] - pd[0] ) * ( pc[1] - pd[1] ), cdxbdy, cdxady, adxcdy, adxbdy, bdxady;
  double det;
  double permanent, errbound;
  /* phantom */ double orient;
  cdx = ( ( pb[2] - pd[2] ) * ( ( ( pc[0] - pd[0] ) * ( pa[1] - pd[1] ) ) - ( ( pc[1] - pd[1] ) * ( pa[0] - pd[0] ) ) ) ) + ( adz * ( bdxcdy - ( ( pc[0] - pd[0] ) * ( pb[1] - pd[1] ) ) ) ) + ( cdz * ( ( ( pa[0] - pd[0] ) * ( pb[1] - pd[1] ) ) - ( ( pa[1] - pd[1] ) * ( pb[0] - pd[0] ) ) ) );
  if ( bdxcdy <= 0.000000000000 )
  {
  }
  else
    bdxcdy = -( bdxcdy );
  if ( adz <= 0.000000000000 )
  {
  }
  else
    adz = -( adz );
  if ( bdz <= 0.000000000000 )
  {
  }
  else
    bdz = -( bdz );
  if ( cdz <= 0.000000000000 )
  {
    cdy = ady = cdy;
  }
  else
  {
    cdz = -( cdz );
    cdy = ady = cdy;
  }
  if ( o3derrboundA * ( ( adz * ( -( ( pc[0] - pd[0] ) * ( pa[1] - pd[1] ) ) + bdxcdy ) ) + ( bdz * ( bdy + bdx ) ) + ( cdz * ( cdy + ady ) ) ) < 0.000000000000 )
  {
    cdx = bdy;
  }
  else
  {
    cdx = bdy;
    if ( -( bdy ) <= cdx )
    {
      pb = &(double*)cdy & 0xFFFFFFFF;
      pa = pd;
    }
  }
  return 1;
}
double incircleadapt( double *pa, double *pb, double *pc, double *pd, double permanent )
{
  int eax;
  int ecx;
  int edx;
  double fp1;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double adx, bdx, cdx, ady, bdy, cdy;
  double det, errbound;
  double bdxcdy1, cdxbdy1, cdxady1, adxcdy1, adxbdy1, bdxady1;
  double bdxcdy0, cdxbdy0, cdxady0, adxcdy0, adxbdy0, bdxady0;
  double bc[4], ca[4], ab[4];
  double bc3, ca3, ab3;
  double axbc[8], axxbc[16], aybc[8], ayybc[16], adet[32];
  int axbclen, axxbclen, aybclen, ayybclen, alen;
  double bxca[8], bxxca[16], byca[8], byyca[16], bdet[32];
  int bxcalen, bxxcalen, bycalen, byycalen, blen;
  double cxab[8], cxxab[16], cyab[8], cyyab[16], cdet[32];
  int cxablen, cxxablen, cyablen, cyyablen, clen;
  double abdet[64];
  int ablen;
  double fin1[1152], fin2[1152];
  double *finnow, *finother, *finswap;
  int finlength;
  double adxtail, bdxtail, cdxtail, adytail, bdytail, cdytail;
  /* phantom */ double adxadx1, adyady1, bdxbdx1, bdybdy1, cdxcdx1, cdycdy1;
  double adxadx0, adyady0, bdxbdx0, bdybdy0, cdxcdx0, cdycdy0;
  double aa[4], bb[4], cc[4];
  double aa3, bb3, cc3;
  double ti1, tj1;
  double ti0, tj0;
  double u[4], v[4];
  double u3, v3;
  double temp8[8], temp16a[16], temp16b[16], temp16c[16];
  double temp32a[32], temp32b[32], temp48[48], temp64[64];
  int temp8len, temp16alen, temp16blen, temp16clen;
  int temp32alen, temp32blen, temp48len, temp64len;
  double axtbb[8], axtcc[8], aytbb[8], aytcc[8];
  int axtbblen, axtcclen, aytbblen, aytcclen;
  double bxtaa[8], bxtcc[8], bytaa[8], bytcc[8];
  int bxtaalen, bxtcclen, bytaalen, bytcclen;
  double cxtaa[8], cxtbb[8], cytaa[8], cytbb[8];
  int cxtaalen, cxtbblen, cytaalen, cytbblen;
  double axtbc[8], aytbc[8], bxtca[8], bytca[8], cxtab[8], cytab[8];
  int axtbclen, aytbclen;
  int bxtcalen = permanent, bytcalen;
  int cxtablen, cytablen;
  double axtbct[16], aytbct[16], bxtcat[16], bytcat[16], cxtabt[16], cytabt[16];
  int axtbctlen, aytbctlen, bxtcatlen, bytcatlen, cxtabtlen, cytabtlen;
  double axtbctt[8], aytbctt[8], bxtcatt[8];
  double bytcatt[8], cxtabtt[8], cytabtt[8];
  int axtbcttlen, aytbcttlen, bxtcattlen, bytcattlen, cxtabttlen, cytabttlen;
  double abt[8], bct[8], cat[8];
  int abtlen, bctlen, catlen;
  double abtt[4], bctt[4], catt[4];
  int abttlen, bcttlen, cattlen;
  double abtt3, bctt3, catt3;
  double negate;
  double bvirt;
  /* phantom */ double avirt, bround, around;
  double c;
  /* phantom */ double abig;
  double ahi, alo, bhi, blo;
  /* phantom */ double err1, err2, err3;
  double _i, _j;
  double _0;
  bdx = cdxtail - pd[0];
  cdx = pc[0] - pd[0];
  ady = bdxtail - pd[1];
  axbclen = 4;
  bdy = cdxtail - pd[1];
  cdy = pc[1] - pd[1];
  bdxcdy1 = bdx * ( pc[1] - pd[1] );
  cdxbdy1 = cdx * bdy;
  bc[0] = ( "huge", 0 );
  bc[1] = ( "huge", 0 );
  bc[2] = ( "huge", 0 );
  bc[3] = ( "huge", 0 );
  scale_expansion_zeroelim( 4, bc, axbc[0], (int)( bdxtail - pd[0] ) );
  axbclen = 4;
  scale_expansion_zeroelim( 4, bc, aybc[0], (int)( &(double*)ady & 0xFFFFFFFF ) );
  alen = axbclen = (adxbdy1 & 0xFFFFFFFF);
  axbclen = 4;
  cdxady1 = cdx * ady;
  adxcdy1 = ( bdxtail - pd[0] ) * cdy;
  ca[0] = ( "huge", 0 );
  ca[1] = ( "huge", 0 );
  ca[2] = ( "huge", 0 );
  ca[3] = ( "huge", 0 );
  scale_expansion_zeroelim( 4, ca, bxca[0], (int)( &(double*)bdx & 0xFFFFFFFF ) );
  axbclen = 4;
  scale_expansion_zeroelim( 4, ca, byca[0], (int)( &(double*)bdy & 0xFFFFFFFF ) );
  blen = axbclen = (adxbdy1 & 0xFFFFFFFF);
  axbclen = 4;
  adxbdy1 = ( bdxtail - pd[0] ) * bdy;
  bdxady1 = bdx * ady;
  ab[0] = ( "huge", 0 );
  ab[1] = ( "huge", 0 );
  ab[2] = ( "huge", 0 );
  ab[3] = ( "huge", 0 );
  scale_expansion_zeroelim( 4, ab, cxab[0], (int)( &(double*)cdx & 0xFFFFFFFF ) );
  cxxablen = axbclen;
  axbclen = 4;
  scale_expansion_zeroelim( 4, ab, cyab[0], (int)( &(double*)cdy & 0xFFFFFFFF ) );
  cxxablen = axbclen = cxxablen;
  axbclen = alen;
  fast_expansion_sum_zeroelim( alen, adet, blen, bdet, abdet );
  ahi = fin1[0];
  errbound = bdxtail - pd[0];
  if ( iccerrboundB * bxtcalen < 0.000000000000 )
  {
    errbound = -0.000000000000;
    if ( errbound < -0.000000000000 )
    {
      cxxablen = ( bdxtail - ( ahi + ( bdxtail - ahi ) ) ) + ( bdxtail - ahi - pd[0] );
      axbclen = (cdytail & 0xFFFFFFFF);
      adytail = ( bdxtail - ( ady + ( bdxtail - ady ) ) ) + ( bdxtail - ady - pd[1] );
      bdxtail = ( cdxtail - ( bdx + ( cdxtail - bdx ) ) ) + ( cdxtail - bdx - pd[0] );
      blen = ( cdxtail - ( bdy + ( cdxtail - bdy ) ) ) + ( cdxtail - bdy - pd[1] );
      cdxtail = ( cdytail - cdx - pd[0] ) + ( cdytail - ( cdx + ( cdytail - cdx ) ) );
      cdytail = ( cdytail - cdy - pd[1] ) + ( cdytail - ( cdy + ( cdytail - cdy ) ) );
      if ( cxxablen )
      {
      }
      else
      if ( !0 )
      {
        if ( bdxtail != adx )
        {
        }
        else
        if ( !0 )
        {
          if ( cdxtail != adx )
          {
          }
          else
          if ( !0 )
          {
            if ( adytail != adx )
            {
            }
            else
            if ( !0 )
            {
              if ( blen != adx )
              {
              }
              else
              if ( !0 )
              {
                if ( cdytail == adx )
                {
                  ahi = bc3;
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
      axtbclen = ahi * ahi;
      alen = bdx * bdx;
      axtbctlen = bdy * bdy;
      bxtcalen = cdx * cdx;
      bctlen = cdy * cdy;
      if ( ( iccerrboundC * bxtcalen ) + ( resulterrbound * ( ( ( bc3 <> 0.000000000000 ) & 1 ) == 0 ? errbound : bc3 ) ) < bc3 + ( ( axtbctlen + alen ) * ( ( ( cdx * adytail ) + ( cdxtail * ady ) ) - ( ( cxxablen * cdy ) + ( cdytail * ahi ) ) ) ) + ( ( ( bdxtail * bdx ) + ( blen * bdy ) ) * 0.000000000000 * ( cdxady1 - adxcdy1 ) ) + ( ( ( cxxablen * ahi ) + ( adytail * ady ) ) * 0.000000000000 * ( bdxcdy1 - cdxbdy1 ) ) + ( ( axtbclen + ( ady * ady ) ) * ( ( ( cdytail * bdx ) + ( cdy * bdxtail ) ) - ( ( cdxtail * bdy ) + ( cdx * blen ) ) ) ) + ( ( bxtcalen + bctlen ) * ( ( ( blen * ahi ) + ( cxxablen * bdy ) ) - ( ( bdxtail * ady ) + ( bdx * adytail ) ) ) ) + ( ( ( cdxtail * cdx ) + ( cdytail * cdy ) ) * 0.000000000000 * ( adxbdy1 - bdxady1 ) ) )
      {
        errbound = bc3;
        if ( errbound < -( bc3 ) )
        {
          if ( bdxtail )
          {
          }
          else
          if ( !0 )
          {
            if ( errbound != blen )
            {
            }
            else
            if ( !0 )
            {
              if ( errbound != cdxtail )
              {
              }
              else
              if ( !0 )
              {
                if ( errbound == cdytail && errbound == cdytail )
                {
                  if ( cdxtail )
                  {
                  }
                  else
                  if ( !0 )
                  {
                    if ( errbound != cdytail )
                    {
                    }
                    else
                    if ( !0 )
                    {
                      if ( errbound != cxxablen )
                      {
                      }
                      else
                      if ( !0 )
                      {
                        if ( errbound == adytail && errbound == adytail )
                        {
                          if ( cxxablen )
                          {
                          }
                          else
                          if ( !0 )
                          {
                            if ( errbound != adytail )
                            {
                            }
                            else
                            if ( !0 )
                            {
                              if ( errbound != bdxtail )
                              {
                              }
                              else
                              if ( errbound == bdxtail )
                              {
                                if ( errbound == blen )
                                {
                                  errbound = 0.000000000000;
                                  if ( cxxablen == 0 && cxxablen == 0.000000000000 )
                                    axtbclen = 0;
                                  else
                                  {
                                    axtbclen = axbclen = 4;
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, cc, axtcc[0], &cxxablen );
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, bb, axtbb[0], &cxxablen );
                                    axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                    axbclen = (adxbdy1 & 0xFFFFFFFF);
                                    finlength = axbclen = finlength;
                                    ahi = ahi;
                                  }
                                  errbound = adytail;
                                  alen = 0;
                                  if ( adytail == 0.000000000000 && adytail == 0.000000000000 )
                                  {
                                  }
                                  else
                                  {
                                    alen = axbclen = 4;
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, bb, aytbb[0], (int)( &(double*)adytail & 0xFFFFFFFF ) );
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, cc, aytcc[0], (int)( &(double*)adytail & 0xFFFFFFFF ) );
                                    axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                    axbclen = (adxbdy1 & 0xFFFFFFFF);
                                    finlength = axbclen = finlength;
                                    axbclen = finnow;
                                    ahi = ahi;
                                  }
                                  errbound = bdxtail;
                                  bxtcalen = 0;
                                  if ( bdxtail == 0.000000000000 && bdxtail == 0.000000000000 )
                                  {
                                  }
                                  else
                                  {
                                    bxtcalen = axbclen = 4;
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, aa, bxtaa[0], (int)( &(double*)bdxtail & 0xFFFFFFFF ) );
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, cc, bxtcc[0], (int)( &(double*)bdxtail & 0xFFFFFFFF ) );
                                    axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                    axbclen = (adxbdy1 & 0xFFFFFFFF);
                                    finlength = axbclen = finlength;
                                    axbclen = finnow;
                                    ahi = ahi;
                                  }
                                  errbound = blen;
                                  if ( blen == 0.000000000000 && blen == 0.000000000000 )
                                  {
                                  }
                                  else
                                  {
                                    axbclen = 4;
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, cc, bytcc[0], &blen );
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, aa, bytaa[0], &blen );
                                    axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                    axbclen = (adxbdy1 & 0xFFFFFFFF);
                                    finlength = axbclen = finlength;
                                    axbclen = finnow;
                                    ahi = ahi;
                                  }
                                  errbound = cdxtail;
                                  if ( cdxtail == 0.000000000000 && cdxtail == 0.000000000000 )
                                  {
                                  }
                                  else
                                  {
                                    axbclen = 4;
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, bb, cxtbb[0], (int)( &(double*)cdxtail & 0xFFFFFFFF ) );
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, aa, cxtaa[0], (int)( &(double*)cdxtail & 0xFFFFFFFF ) );
                                    axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                    axbclen = (adxbdy1 & 0xFFFFFFFF);
                                    finlength = axbclen = finlength;
                                    axbclen = finnow;
                                    ahi = ahi;
                                  }
                                  errbound = cdytail;
                                  if ( cdytail == 0.000000000000 && cdytail == 0.000000000000 )
                                  {
                                  }
                                  else
                                  {
                                    axbclen = 4;
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, aa, cytaa[0], (int)( &(double*)cdytail & 0xFFFFFFFF ) );
                                    axbclen = 4;
                                    scale_expansion_zeroelim( 4, bb, cytbb[0], (int)( &(double*)cdytail & 0xFFFFFFFF ) );
                                    axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                    axbclen = (adxbdy1 & 0xFFFFFFFF);
                                    finlength = axbclen = finlength;
                                    axbclen = finnow;
                                    ahi = ahi;
                                  }
                                  if ( cxxablen == 0.000000000000 )
                                  {
                                    if ( cxxablen == 0.000000000000 )
                                    {
                                      if ( errbound == adytail && errbound == adytail )
                                      {
                                        if ( bdxtail == 0.000000000000 )
                                        {
                                          if ( bdxtail == 0.000000000000 )
                                          {
                                            if ( errbound == blen && errbound == blen )
                                            {
                                              if ( cdxtail )
                                              {
                                              }
                                              else
                                              if ( !0 )
                                              {
                                                if ( errbound == cdytail && errbound == cdytail )
                                                {
                                                  ahi = *(double*)(finnow + -8);
                                                }
                                              }
                                              else
                                              {
                                              }
                                              errbound = 0.000000000000;
                                              if ( cxxablen == 0.000000000000 )
                                              {
                                                if ( !0 )
                                                {
                                                  if ( bc3 == adytail )
                                                  {
                                                    if ( !0 )
                                                    {
                                                      if ( bdxtail == bc3 )
                                                      {
                                                        if ( !0 )
                                                        {
                                                          if ( blen == bc3 )
                                                          {
                                                            if ( 1 )
                                                            {
                                                              abt[0] = errbound;
                                                              abtt[0] = errbound;
                                                              if ( cdxtail == 0.000000000000 && cdxtail == 0.000000000000 )
                                                              {
                                                              }
                                                              else
                                                              {
                                                                axbclen = (adxcdy1 & 0xFFFFFFFF);
                                                                axbclen = (bdy & 0xFFFFFFFF);
                                                                axbclen = (ady & 0xFFFFFFFF);
                                                                cdx *= 0.000000000000;
                                                                axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                                                finlength = axbclen = finlength;
                                                                ahi = ahi;
                                                                if ( ahi == adytail && ahi == adytail )
                                                                  axbclen = finnow;
                                                                else
                                                                {
                                                                  axbclen = 4;
                                                                  scale_expansion_zeroelim( 4, bb, temp8[0], (int)( &(double*)cdxtail & 0xFFFFFFFF ) );
                                                                  finlength = axbclen = finlength;
                                                                }
                                                                ahi = 0.000000000000;
                                                                if ( blen || blen )
                                                                {
                                                                  axbclen = 4;
                                                                  scale_expansion_zeroelim( 4, aa, temp8[0], -( cdxtail ) );
                                                                  finlength = axbclen = finlength;
                                                                  axbclen = finnow;
                                                                }
                                                                axbclen = (ady & 0xFFFFFFFF);
                                                                axbclen = (bdx & 0xFFFFFFFF);
                                                                axbclen = (ady & 0xFFFFFFFF);
                                                                axbclen = (cdx & 0xFFFFFFFF);
                                                                axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                                                finlength = axbclen = finlength;
                                                                axbclen = finnow;
                                                              }
                                                              ahi = cdytail;
                                                              if ( cdytail || cdytail )
                                                              {
                                                                axbclen = (bdxady1 & 0xFFFFFFFF);
                                                                axbclen = (bdy & 0xFFFFFFFF);
                                                                axbclen = axbclen = (ady & 0xFFFFFFFF);
                                                                axbclen = (cdx & 0xFFFFFFFF);
                                                                axbclen = (bdx & 0xFFFFFFFF);
                                                                axbclen = (cdx & 0xFFFFFFFF);
                                                                axbclen = (bdx & 0xFFFFFFFF);
                                                                axbclen = (cdy & 0xFFFFFFFF);
                                                                finlength = axbclen = (bdy & 0xFFFFFFFF);
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
                                              u[0] = ( "huge", 0 );
                                              u[1] = ( "huge", 0 );
                                              u[2] = ( "huge", 0 );
                                              u[3] = ( "huge", 0 );
                                              bdx -= ( splitter * bdx ) - ( ( splitter * bdx ) - bdx );
                                              v[0] = ( "huge", 0 );
                                              axbclen = 4;
                                              v[1] = ahi;
                                              v[2] = ( errbound - ( ( errbound + bc3 ) - bc3 ) ) + ( bc3 - ( ( errbound + bc3 ) - ( ( errbound + bc3 ) - bc3 ) ) );
                                              v[3] = errbound + bc3;
                                              bdx = adytail - ( ( splitter * adytail ) - ( ( splitter * adytail ) - adytail ) );
                                              abtt[0] = ( "huge", 0 );
                                              abtt[1] = ( "huge", 0 );
                                              abtt[2] = ( "huge", 0 );
                                              abtt[3] = ( "huge", 0 );
                                            }
                                          }
                                          else
                                          {
                                          }
                                        }
                                        else
                                        {
                                        }
                                        errbound = 0.000000000000;
                                        if ( cdxtail == 0.000000000000 )
                                        {
                                          if ( !0 )
                                          {
                                            if ( cdytail == bc3 )
                                            {
                                              if ( !0 )
                                              {
                                                if ( cxxablen == bc3 )
                                                {
                                                  if ( !0 )
                                                  {
                                                    if ( bc3 == adytail )
                                                    {
                                                      if ( 1 )
                                                      {
                                                        cat[0] = errbound;
                                                        catt[0] = errbound;
                                                        alen = 1;
                                                        if ( bdxtail == 0.000000000000 && bdxtail == 0.000000000000 )
                                                        {
                                                        }
                                                        else
                                                        {
                                                          bctlen = axbclen = bxtcalen;
                                                          axbclen = axtbclen = axbclen = alen;
                                                          bxtcalen = bdx * 0.000000000000;
                                                          axbclen = bctlen;
                                                          finlength = axbclen = finlength;
                                                          ahi = ahi;
                                                          if ( errbound == cdytail && errbound == cdytail )
                                                            axbclen = finnow;
                                                          else
                                                          {
                                                            axbclen = 4;
                                                            scale_expansion_zeroelim( 4, aa, temp8[0], (int)( &(double*)bdxtail & 0xFFFFFFFF ) );
                                                            finlength = axbclen = finlength;
                                                            ahi = ahi;
                                                          }
                                                          errbound = 0.000000000000;
                                                          if ( adytail || adytail )
                                                          {
                                                            axbclen = 4;
                                                            scale_expansion_zeroelim( 4, cc, temp8[0], -( bdxtail ) );
                                                            finlength = axbclen = finlength;
                                                            axbclen = finnow;
                                                            ahi = ahi;
                                                          }
                                                          bctlen = axbclen = axtbclen;
                                                          axtbclen = axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                                          bxtcalen = axbclen;
                                                          axbclen = axtbclen;
                                                          axbclen = bxtcalen;
                                                          axbclen = bctlen;
                                                          finlength = axbclen = finlength;
                                                          axbclen = finnow;
                                                          ahi = ahi;
                                                        }
                                                        errbound = blen;
                                                        if ( blen || blen )
                                                        {
                                                          axbclen = (cdxbdy1 & 0xFFFFFFFF);
                                                          axbclen = alen;
                                                          axbclen = (cdxady1 & 0xFFFFFFFF);
                                                          bxtcalen = axbclen = finlength;
                                                          axbclen = (adxbdy1 & 0xFFFFFFFF);
                                                          axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                                          axbclen = (adxbdy1 & 0xFFFFFFFF);
                                                          axbclen = (cdxady1 & 0xFFFFFFFF);
                                                          axbclen = (cdxbdy1 & 0xFFFFFFFF);
                                                          finlength = axbclen = bxtcalen;
                                                          ahi = ahi;
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
                                        u[0] = ( "huge", 0 );
                                        u[1] = ( "huge", 0 );
                                        u[2] = ( "huge", 0 );
                                        u[3] = ( "huge", 0 );
                                        cdxady1 = cxxablen * -( cdy );
                                        bdxcdy1 = ahi * -( cdytail );
                                        axbclen = 4;
                                        v[0] = ( "huge", 0 );
                                        v[1] = 0.000000000000;
                                        v[2] = ( 0.000000000000 - ( 0.000000000000 - bc3 ) ) + ( bc3 - ( bc3 - ( 0.000000000000 - bc3 ) ) );
                                        v[3] = bc3;
                                        alen = axbclen;
                                        adxbdy1 = cdxtail * adytail;
                                        cdxady1 = cxxablen * cdytail;
                                        catt[0] = ( "huge", 0 );
                                        catt[1] = ( "huge", 0 );
                                        catt[2] = ( "huge", 0 );
                                        catt[3] = ( "huge", 0 );
                                        ahi = ahi;
                                      }
                                    }
                                    else
                                    {
                                    }
                                  }
                                  else
                                  {
                                  }
                                  errbound = 0.000000000000;
                                  if ( bdxtail == 0.000000000000 )
                                  {
                                    if ( !0 )
                                    {
                                      if ( blen == bc3 )
                                      {
                                        if ( !0 )
                                        {
                                          if ( cdxtail == bc3 )
                                          {
                                            if ( !0 )
                                            {
                                              if ( cdytail == bc3 )
                                              {
                                                if ( 1 )
                                                {
                                                  bct[0] = errbound;
                                                  bctt[0] = errbound;
                                                  bctlen = 1;
                                                  if ( cxxablen == 0.000000000000 && cxxablen == 0.000000000000 )
                                                  {
                                                  }
                                                  else
                                                  {
                                                    axbclen = axtbclen;
                                                    axbclen = axtbctlen = axbclen = bctlen;
                                                    axtbclen = ahi * 0.000000000000;
                                                    axbclen = axbclen;
                                                    finlength = axbclen = finlength;
                                                    ahi = ahi;
                                                    if ( errbound == blen && errbound == blen )
                                                      axbclen = finnow;
                                                    else
                                                    {
                                                      axbclen = 4;
                                                      scale_expansion_zeroelim( 4, cc, temp8[0], &cxxablen );
                                                      finlength = axbclen = finlength;
                                                      ahi = ahi;
                                                    }
                                                    errbound = 0.000000000000;
                                                    if ( cdytail || cdytail )
                                                    {
                                                      axbclen = 4;
                                                      scale_expansion_zeroelim( 4, bb, temp8[0], -( cxxablen ) );
                                                      finlength = axbclen = finlength;
                                                      axbclen = finnow;
                                                      ahi = ahi;
                                                    }
                                                    axbclen = axtbctlen;
                                                    axtbctlen = axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                                    axtbclen = axbclen;
                                                    axbclen = axtbctlen;
                                                    axbclen = axbclen = axtbclen;
                                                    finlength = axbclen = finlength;
                                                    axbclen = finnow;
                                                    ahi = ahi;
                                                  }
                                                  errbound = adytail;
                                                  if ( adytail || adytail )
                                                  {
                                                    axbclen = alen;
                                                    axbclen = bctlen;
                                                    axbclen = (cdxady1 & 0xFFFFFFFF);
                                                    axtbclen = axbclen = finlength;
                                                    alen = axbclen = (adxbdy1 & 0xFFFFFFFF);
                                                    axbclen = (bdxcdy1 & 0xFFFFFFFF);
                                                    axbclen = (adxbdy1 & 0xFFFFFFFF);
                                                    axbclen = (cdxady1 & 0xFFFFFFFF);
                                                    axbclen = alen;
                                                    finlength = axbclen = axtbclen;
                                                    ahi = ahi;
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
                                  u[0] = ( "huge", 0 );
                                  u[1] = ( "huge", 0 );
                                  u[2] = ( "huge", 0 );
                                  u[3] = ( "huge", 0 );
                                  cdxady1 = cdxtail * -( bdy );
                                  bdxcdy1 = cdx * -( blen );
                                  axbclen = 4;
                                  v[0] = ( "huge", 0 );
                                  v[1] = 0.000000000000;
                                  v[2] = ( 0.000000000000 - ( 0.000000000000 - bc3 ) ) + ( bc3 - ( bc3 - ( 0.000000000000 - bc3 ) ) );
                                  v[3] = bc3;
                                  bctlen = axbclen;
                                  adxbdy1 = cdytail * bdxtail;
                                  cdxady1 = cdxtail * blen;
                                  bctt[0] = ( "huge", 0 );
                                  bctt[1] = ( "huge", 0 );
                                  bctt[2] = ( "huge", 0 );
                                  bctt[3] = ( "huge", 0 );
                                  ahi = ahi;
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
                          cc[0] = ( "huge", 0 );
                          cc[1] = ( "huge", 0 );
                          cc[2] = ( "huge", 0 );
                          cc[3] = ( "huge", 0 );
                          errbound = 0.000000000000;
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
                  bb[0] = ( "huge", 0 );
                  bb[1] = ( "huge", 0 );
                  bb[2] = ( "huge", 0 );
                  bb[3] = ( "huge", 0 );
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
          aa[0] = ( "huge", 0 );
          aa[1] = ( "huge", 0 );
          aa[2] = ( "huge", 0 );
          aa[3] = ( "huge", 0 );
        }
        else
        {
          ahi = errbound;
        }
      }
      else
      {
        ahi = bc3;
      }
    }
    else
    {
      ahi = bc3;
    }
  }
  else
  {
    ahi = bc3;
  }
  return 0;
}
double incircle( double *pa, double *pb, double *pc, double *pd )
{
  double fp2;
  double fp3;
  double fp4;
  double fp6;
  double fp7;
  double adx, bdx, cdx, ady, bdy, cdy;
  double bdxcdy, cdxbdy = ( pc[0] - pd[0] ) * ( pb[1] - pd[1] ), cdxady, adxcdy, adxbdy, bdxady;
  double alift = ( pa[0] - pd[0] ) * ( pa[0] - pd[0] ), blift, clift;
  double det;
  double permanent, errbound;
  /* phantom */ double inc;
  alift += ( pa[1] - pd[1] ) * ( pa[1] - pd[1] );
  cdxady = ( pc[0] - pd[0] ) * ( pa[1] - pd[1] );
  adxcdy = ( pa[0] - pd[0] ) * ( pc[1] - pd[1] );
  blift = ( pb[0] - pd[0] ) * ( pb[0] - pd[0] );
  blift += ( pb[1] - pd[1] ) * ( pb[1] - pd[1] );
  bdxcdy = ( ( blift + ( ( pb[1] - pd[1] ) * ( pb[1] - pd[1] ) ) ) * ( cdxady - adxcdy ) ) + ( alift * ( ( ( pb[0] - pd[0] ) * ( pc[1] - pd[1] ) ) - cdxbdy ) ) + ( ( ( ( pa[0] - pd[0] ) * ( pb[1] - pd[1] ) ) - ( ( pb[0] - pd[0] ) * ( pa[1] - pd[1] ) ) ) * ( ( ( pc[0] - pd[0] ) * ( pc[0] - pd[0] ) ) + ( ( pc[1] - pd[1] ) * ( pc[1] - pd[1] ) ) ) );
  cdy = ( pb[0] - pd[0] ) * ( pc[1] - pd[1] );
  if ( cdxbdy <= 0.000000000000 )
  {
  }
  else
    cdxbdy = -( cdxbdy );
  if ( cdxady <= 0.000000000000 )
  {
  }
  else
    cdxady = -( cdxady );
  if ( adxcdy <= 0.000000000000 )
  {
  }
  else
    adxcdy = -( adxcdy );
  if ( iccerrboundA * ( ( alift * ( cdy + cdxbdy ) ) + ( blift * ( cdxady + adxcdy ) ) + ( cdx * ( bdx + ady ) ) ) < bdxcdy )
  {
    bdx = cdx;
  }
  else
  {
    bdx = cdx;
    if ( -( cdx ) <= bdx )
    {
      pb = &(double*)ady & 0xFFFFFFFF;
      pa = pd;
    }
  }
  return 0;
}
double insphereadapt( double *pa, double *pb, double *pc, double *pd, double *pe, double permanent )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double aex = pa - pe[0], bex = pb - pe[0], cex = pc[0] - pe[0], dex = pd[0] - pe[0], aey = pa[1] - pe[1], bey = pb[1] - pe[1], cey = pc[1] - pe[1], dey = pd[1] - pe[1], aez = pa[2] - pe[2], bez = pb[2] - pe[2], cez = pc[2] - pe[2], dez;
  double det, errbound;
  double aexbey1, bexaey1, bexcey1, cexbey1;
  double cexdey1, dexcey1, dexaey1, aexdey1;
  double aexcey1, cexaey1, bexdey1, dexbey1;
  double aexbey0, bexaey0, bexcey0, cexbey0;
  double cexdey0, dexcey0, dexaey0, aexdey0;
  double aexcey0, cexaey0, bexdey0, dexbey0;
  double ab[4], bc[4], cd[4], da[4], ac[4], bd[4];
  double ab3, bc3, cd3, da3, ac3, bd3;
  double abeps, bceps, cdeps, daeps, aceps, bdeps;
  double temp8a[8], temp8b[8], temp8c[8], temp16[16], temp24[24], temp48[48];
  int temp8alen, temp8blen, temp8clen, temp16len, temp24len, temp48len = 4;
  double xdet[96], ydet[96], zdet[96], xydet[192];
  int xlen, ylen, zlen, xylen;
  double adet[288], bdet[288], cdet[288], ddet[288];
  int alen, blen, clen, dlen;
  double abdet[576], cddet[576];
  int ablen, cdlen;
  double fin1[1152];
  int finlength;
  double aextail, bextail, cextail, dextail;
  double aeytail, beytail, ceytail, deytail;
  double aeztail, beztail, ceztail, deztail;
  double bvirt;
  /* phantom */ double avirt, bround, around;
  double c;
  /* phantom */ double abig;
  double ahi, alo, bhi, blo;
  /* phantom */ double err1, err2, err3;
  double _i, _j;
  double _0;
  dez = pd[2] - pe[2];
  blen = ( splitter * aex ) - ( ( splitter * aex ) - aex );
  bdeps = aex - ( ( splitter * aex ) - ( ( splitter * aex ) - aex ) );
  clen = ( splitter * bey ) - ( ( splitter * bey ) - bey );
  cextail = bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) );
  xlen = ( splitter * bex ) - ( ( splitter * bex ) - bex );
  dextail = bex - ( ( splitter * bex ) - ( ( splitter * bex ) - bex ) );
  ylen = ( splitter * aey ) - ( ( splitter * aey ) - aey );
  ceytail = aey - ( ( splitter * aey ) - ( ( splitter * aey ) - aey ) );
  ab[0] = ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) + ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) + ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) ) ) );
  ab[1] = ( "huge", 0 );
  ab3 = ( bey * aex ) + ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) + ( ( ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) - ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) ) + ( ( bey * aex ) - ( ( ( bey * aex ) + ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) ) - ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) ) ) ) - ( bex * aey ) );
  ab[2] = ( "huge", 0 );
  ab[3] = ( bey * aex ) + ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) + ( ( ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) - ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) ) + ( ( bey * aex ) - ( ( ( bey * aex ) + ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) ) - ( ( bdeps * ( bey - ( ( splitter * bey ) - ( ( splitter * bey ) - bey ) ) ) ) - ( ( bey * aex ) - ( clen * blen ) - ( clen * bdeps ) - ( cextail * blen ) ) - ( ( dextail * ceytail ) - ( ( bex * aey ) - ( ylen * xlen ) - ( ylen * dextail ) - ( xlen * ceytail ) ) ) ) ) ) ) - ( bex * aey ) );
  temp8clen = ( splitter * cey ) - ( ( splitter * cey ) - cey );
  deytail = cey - ( ( splitter * cey ) - ( ( splitter * cey ) - cey ) );
  ac3 = ( splitter * cex ) - ( ( splitter * cex ) - cex );
  beztail = 0.000000000000;
  bc[0] = ( errbound - ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) + ( errbound - ( ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) + ( errbound - ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) ) ) );
  bc[1] = ( "huge", 0 );
  bc3 = aexbey1 + ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) + ( ( ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) - ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) ) + ( aexbey1 - ( ( aexbey1 + ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) ) - ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) ) ) ) - aexbey0 );
  bc[2] = ( "huge", 0 );
  bc[3] = aexbey1 + ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) + ( ( ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) - ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) ) + ( aexbey1 - ( ( aexbey1 + ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) ) - ( errbound - ( 0.000000000000 - ( aexbey0 - ( det * clen ) - ( clen * beztail ) - ( cextail * ac3 ) ) ) ) ) ) ) - aexbey0 );
  ceztail = dey - ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) );
  alen = dex - ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) );
  da3 = ( ceztail * beztail ) - ( ( dey * cex ) - ( ac3 * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( beztail * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( ceztail * ac3 ) ) - ( ( ceztail * beztail ) - ( ( dey * cex ) - ( ac3 * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( beztail * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( ceztail * ac3 ) ) - ( ( deytail * ( dex - ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) - ( ( dex * cey ) - ( temp8clen * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) - ( temp8clen * alen ) - ( deytail * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) ) );
  cd[0] = ( ( ceztail * beztail ) - ( ( dey * cex ) - ( ac3 * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( beztail * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( ceztail * ac3 ) ) - ( ( ( ceztail * beztail ) - ( ( dey * cex ) - ( ac3 * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( beztail * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( ceztail * ac3 ) ) - ( ( ceztail * beztail ) - ( ( dey * cex ) - ( ac3 * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( beztail * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( ceztail * ac3 ) ) - ( ( deytail * ( dex - ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) - ( ( dex * cey ) - ( temp8clen * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) - ( temp8clen * alen ) - ( deytail * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) ) ) ) + ( ( ceztail * beztail ) - ( ( dey * cex ) - ( ac3 * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( beztail * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( ceztail * ac3 ) ) - ( ( deytail * ( dex - ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) - ( ( dex * cey ) - ( temp8clen * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) - ( temp8clen * alen ) - ( deytail * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) ) ) ) ) + ( da3 - ( ( deytail * ( dex - ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) - ( ( dex * cey ) - ( temp8clen * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) - ( temp8clen * alen ) - ( deytail * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) ) );
  cd[1] = ( "huge", 0 );
  cd3 = ( "huge", 0 );
  cd[2] = ( "huge", 0 );
  cd[3] = cd3;
  da3 = ( ceytail * alen ) - ( ( dex * aey ) - ( ylen * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) - ( ylen * alen ) - ( ceytail * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) - ( ( ceytail * alen ) - ( ( dex * aey ) - ( ylen * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) - ( ylen * alen ) - ( ceytail * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) - ( ( ceztail * bdeps ) - ( ( dey * aex ) - ( blen * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( bdeps * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( ceztail * blen ) ) ) );
  da[0] = ( ( ceytail * alen ) - ( ( dex * aey ) - ( ylen * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) - ( ylen * alen ) - ( ceytail * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) - ( ( ( ceytail * alen ) - ( ( dex * aey ) - ( ylen * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) - ( ylen * alen ) - ( ceytail * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) - ( ( ceytail * alen ) - ( ( dex * aey ) - ( ylen * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) - ( ylen * alen ) - ( ceytail * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) - ( ( ceztail * bdeps ) - ( ( dey * aex ) - ( blen * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( bdeps * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( ceztail * blen ) ) ) ) ) + ( ( ceytail * alen ) - ( ( dex * aey ) - ( ylen * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) - ( ylen * alen ) - ( ceytail * ( ( dex * cexdey1 ) - ( ( dex * cexdey1 ) - dex ) ) ) ) - ( ( ceztail * bdeps ) - ( ( dey * aex ) - ( blen * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( bdeps * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( ceztail * blen ) ) ) ) ) ) + ( da3 - ( ( ceztail * bdeps ) - ( ( dey * aex ) - ( blen * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( bdeps * ( ( dey * cexdey1 ) - ( ( dey * cexdey1 ) - dey ) ) ) - ( ceztail * blen ) ) ) );
  da[1] = ( aexbey0 - ( fp2 - det ) - det ) + ( aexbey0 - ( ( fp2 - det ) + ( aexbey0 - ( fp2 - det ) ) ) );
  da3 = errbound + ( fp2 - det );
  da[2] = ( errbound - ( da3 - ( ( errbound + ( fp2 - det ) ) - errbound ) ) ) + ( fp2 - det - ( ( errbound + ( fp2 - det ) ) - errbound ) );
  da[3] = da3;
  ac3 = ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( ceytail * beztail ) - ( ( cex * aey ) - ( ylen * ac3 ) - ( ylen * beztail ) - ( ceytail * ac3 ) ) ) );
  ac[0] = ( ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( ceytail * beztail ) - ( ( cex * aey ) - ( ylen * ac3 ) - ( ylen * beztail ) - ( ceytail * ac3 ) ) ) ) ) + ( ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( ceytail * beztail ) - ( ( cex * aey ) - ( ylen * ac3 ) - ( ylen * beztail ) - ( ceytail * ac3 ) ) ) ) ) ) + ( ac3 - ( ( ceytail * beztail ) - ( ( cex * aey ) - ( ylen * ac3 ) - ( ylen * beztail ) - ( ceytail * ac3 ) ) ) );
  ac[1] = ( "huge", 0 );
  ac3 = ( cey * aex ) + ( ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( ceytail * beztail ) - ( ( cex * aey ) - ( ylen * ac3 ) - ( ylen * beztail ) - ( ceytail * ac3 ) ) ) ) + ( ( ( ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( ceytail * beztail ) - ( ( cex * aey ) - ( ylen * ac3 ) - ( ylen * beztail ) - ( ceytail * ac3 ) ) ) - ( ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( ceytail * beztail ) - ( ( cex * aey ) - ( ylen * ac3 ) - ( ylen * beztail ) - ( ceytail * ac3 ) ) ) ) ) + ( ( cey * aex ) - ( ( ( cey * aex ) + ( ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( ceytail * beztail ) - ( ( cex * aey ) - ( ylen * ac3 ) - ( ylen * beztail ) - ( ceytail * ac3 ) ) ) ) ) - ( ( deytail * bdeps ) - ( ( cey * aex ) - ( temp8clen * blen ) - ( temp8clen * bdeps ) - ( deytail * blen ) ) - ( ( ceytail * beztail ) - ( ( cex * aey ) - ( ylen * ac3 ) - ( ylen * beztail ) - ( ceytail * ac3 ) ) ) ) ) ) ) - ( cex * aey ) );
  ac[2] = ( "huge", 0 );
  ac[3] = ac3;
  bd[0] = ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) + ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) + ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) ) ) );
  bd[1] = ( "huge", 0 );
  bd[2] = ( "huge", 0 );
  bd[3] = ( dey * bex ) + ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) + ( ( ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) - ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) ) + ( ( dey * bex ) - ( ( ( dey * bex ) + ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) ) - ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) ) ) ) - ( dex * bey ) );
  temp8alen = temp48len;
  temp8blen = temp48len = 4;
  temp8clen = temp48len = 4;
  temp48len = temp8alen;
  temp8clen = temp48len = temp8clen;
  scale_expansion_zeroelim( temp48len, temp24, temp48[0], (int)( &(double*)aex & 0xFFFFFFFF ) );
  xlen = temp48len;
  temp48len = temp8clen;
  scale_expansion_zeroelim( temp8clen, temp24, temp48[0], (int)( &(double*)aey & 0xFFFFFFFF ) );
  ylen = temp48len;
  temp48len = temp8clen;
  scale_expansion_zeroelim( temp8clen, temp24, temp48[0], (int)( &(double*)aez & 0xFFFFFFFF ) );
  temp8clen = temp48len;
  temp48len = xlen;
  fast_expansion_sum_zeroelim( xlen, xdet, ylen, ydet, xydet );
  alen = temp48len;
  xlen = temp48len = 4;
  ylen = temp48len = 4;
  temp8clen = temp48len = 4;
  temp48len = xlen;
  temp8clen = temp48len = temp8clen;
  scale_expansion_zeroelim( temp48len, temp24, temp48[0], (int)( &(double*)bex & 0xFFFFFFFF ) );
  xlen = temp48len;
  temp48len = temp8clen;
  scale_expansion_zeroelim( temp8clen, temp24, temp48[0], (int)( &(double*)bey & 0xFFFFFFFF ) );
  ylen = temp48len;
  temp48len = temp8clen;
  scale_expansion_zeroelim( temp8clen, temp24, temp48[0], (int)( &(double*)bez & 0xFFFFFFFF ) );
  temp8clen = temp48len;
  temp48len = xlen;
  fast_expansion_sum_zeroelim( xlen, xdet, ylen, ydet, xydet );
  blen = temp48len;
  xlen = temp48len = 4;
  ylen = temp48len = 4;
  temp8clen = temp48len = 4;
  temp48len = xlen;
  temp8clen = temp48len = temp8clen;
  scale_expansion_zeroelim( temp48len, temp24, temp48[0], (int)( &(double*)cex & 0xFFFFFFFF ) );
  xlen = temp48len;
  temp48len = temp8clen;
  scale_expansion_zeroelim( temp8clen, temp24, temp48[0], (int)( &(double*)cey & 0xFFFFFFFF ) );
  ylen = temp48len;
  temp48len = temp8clen;
  scale_expansion_zeroelim( temp8clen, temp24, temp48[0], (int)( &(double*)cez & 0xFFFFFFFF ) );
  temp8clen = temp48len;
  temp48len = xlen;
  fast_expansion_sum_zeroelim( xlen, xdet, ylen, ydet, xydet );
  clen = temp48len;
  xlen = temp48len = 4;
  ylen = temp48len = 4;
  temp8clen = temp48len = 4;
  temp48len = xlen;
  temp24len = temp48len = temp8clen;
  scale_expansion_zeroelim( temp48len, temp24, temp48[0], (int)( &(double*)dex & 0xFFFFFFFF ) );
  ylen = temp48len;
  temp48len = temp24len;
  scale_expansion_zeroelim( temp24len, temp24, temp48[0], (int)( &(double*)dey & 0xFFFFFFFF ) );
  temp8clen = temp48len;
  temp48len = temp24len;
  scale_expansion_zeroelim( temp24len, temp24, temp48[0], (int)( &(double*)dez & 0xFFFFFFFF ) );
  zlen = temp48len;
  temp48len = ylen;
  fast_expansion_sum_zeroelim( ylen, xdet, temp8clen, ydet, xydet );
  ylen = temp48len;
  temp8clen = temp48len = alen;
  temp48len = clen;
  temp48len = temp8clen;
  cexdey1 = fin1[0];
  aexbey1 = ( dey * bex ) + ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) + ( ( ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) - ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) ) + ( ( dey * bex ) - ( ( ( dey * bex ) + ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) ) - ( ( dextail * ceztail ) - ( ( dey * bex ) - ( xlen * aexbey1 ) - ( dextail * aexbey1 ) - ( xlen * ceztail ) ) - ( ( cextail * alen ) - ( ( dex * bey ) - ( clen * cexdey1 ) - ( clen * alen ) - ( cextail * cexdey1 ) ) ) ) ) ) ) - ( dex * bey ) );
  if ( permanent * isperrboundB < 0.000000000000 )
  {
    aexbey1 = -0.000000000000;
    if ( aexbey1 < -0.000000000000 )
    {
      temp8clen = ( pa - ( aex + ( pa - aex ) ) ) + ( pa - aex - pe[0] );
      ylen = ( pa[1] - ( aey + ( *(double*)(pa + 8) - aey ) ) ) + ( *(double*)(pa + 8) - aey - pe[1] );
      xlen = ( pa[2] - ( aez + ( *(double*)(pa + 16) - aez ) ) ) + ( *(double*)(pa + 16) - aez - pe[2] );
      clen = ( pb - ( bex + ( pb - bex ) ) ) + ( pb - bex - pe[0] );
      blen = ( pb[1] - ( bey + ( *(double*)(pb + 8) - bey ) ) ) + ( *(double*)(pb + 8) - bey - pe[1] );
      beztail = ( pb[2] - ( bez + ( *(double*)(pb + 16) - bez ) ) ) + ( *(double*)(pb + 16) - bez - pe[2] );
      cextail = ( pc - ( cex + ( pc - cex ) ) ) + ( pc - cex - pe[0] );
      ceytail = ( pc[1] - ( cey + ( *(double*)(pc + 8) - cey ) ) ) + ( *(double*)(pc + 8) - cey - pe[1] );
      temp48len = pd;
      ceztail = ( pc[2] - ( cez + ( *(double*)(pc + 16) - cez ) ) ) + ( *(double*)(pc + 16) - cez - pe[2] );
      dextail = ( temp48len - ( dex + ( pd[0] - dex ) ) ) + ( pd[0] - dex - pe[0] );
      deytail = ( pd[1] - ( dey + ( pd[1] - dey ) ) ) + ( pd[1] - dey - pe[1] );
      alen = ( pd[2] - dez - pe[2] ) + ( pd[2] - ( dez + ( pd[2] - dez ) ) );
      if ( temp8clen )
      {
      }
      else
      if ( temp8clen == 0.000000000000 )
      {
        if ( ylen != aexbey0 )
        {
        }
        else
        if ( ylen == aexbey0 )
        {
          if ( xlen != aexbey0 )
          {
          }
          else
          if ( xlen == aexbey0 )
          {
            if ( clen != aexbey0 )
            {
            }
            else
            if ( clen == aexbey0 )
            {
              if ( blen != aexbey0 )
              {
              }
              else
              if ( blen == aexbey0 )
              {
                if ( beztail != aexbey0 )
                {
                }
                else
                if ( beztail == aexbey0 )
                {
                  if ( cextail != aexbey0 )
                  {
                  }
                  else
                  if ( cextail == aexbey0 )
                  {
                    if ( ceytail != aexbey0 )
                    {
                    }
                    else
                    if ( ceytail == aexbey0 )
                    {
                      if ( ceztail != aexbey0 )
                      {
                      }
                      else
                      if ( ceztail == aexbey0 )
                      {
                        if ( dextail != aexbey0 )
                        {
                        }
                        else
                        if ( dextail == aexbey0 )
                        {
                          if ( deytail != aexbey0 )
                          {
                          }
                          else
                          if ( deytail == aexbey0 )
                          {
                            if ( alen == aexbey0 && alen == aexbey0 )
                            {
                              cexdey1 = errbound;
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
      else
      {
      }
      abeps = ( blen * aex ) + ( temp8clen * bey );
      abeps -= ( clen * aey ) + ( ylen * bex );
      bceps = ( ceytail * bex ) + ( clen * cey );
      bceps -= ( cextail * bey ) + ( cex * blen );
      daeps = ( ylen * dex ) + ( dextail * aey );
      daeps -= ( temp8clen * dey ) + ( deytail * aex );
      bdeps = deytail * bex;
      bdeps += dey * clen;
      bdeps -= ( dextail * bey ) + ( dex * blen );
      if ( aexbey1 + errbound + ( ( ( ( ( aexbey0 + ( beztail * bez ) ) * ( ( da3 * cez ) + ( dez * ac3 ) + ( cd3 * aez ) ) ) + ( ( ( dextail * dex ) + ( deytail * dey ) + ( dez * alen ) ) * ( ( ( bc3 * aez ) - ( bez * ac3 ) ) + ( cez * ab3 ) ) ) ) - ( ( ( ( dez * ab3 ) + ( cexdey1 * aez ) + ( da3 * bez ) ) * ( ( cextail * cex ) + ( ceytail * cey ) + ( ceztail * cez ) ) ) + ( ( ( temp8clen * aex ) + ( ylen * aey ) + ( xlen * aez ) ) * ( ( ( cd3 * bez ) - ( cez * cexdey1 ) ) + ( dez * bc3 ) ) ) ) ) * 0.000000000000 ) <= ( permanent * isperrboundC ) + ( resulterrbound * ( ( ( errbound <> 0.000000000000 ) & 1 ) == 0 ? aexbey1 : errbound ) ) )
      {
        cexdey1 = aexbey1;
      }
      else
      {
        cexdey1 = aexbey1;
        if ( cexdey1 < -( aexbey1 ) )
        {
          temp48len = 4;
          bex = ( pa * splitter ) - ( ( pa * splitter ) - pa );
          clen = pa - ( ( pa * splitter ) - ( ( pa * splitter ) - pa ) );
          aex = ( pb[1] * splitter ) - ( ( pb[1] * splitter ) - pb[1] );
          blen = pb[1] - ( ( pb[1] * splitter ) - ( ( pb[1] * splitter ) - pb[1] ) );
          cex = ( pb * splitter ) - ( ( pb * splitter ) - pb );
          xlen = pb - ( ( pb * splitter ) - ( ( pb * splitter ) - pb ) );
          dex = ( pa[1] * splitter ) - ( ( pa[1] * splitter ) - pa[1] );
          ylen = pa[1] - ( ( pa[1] * splitter ) - ( ( pa[1] * splitter ) - pa[1] ) );
          aey = ( pc[1] * splitter ) - ( ( pc[1] * splitter ) - pc[1] );
          temp8clen = pc[1] - ( ( pc[1] * splitter ) - ( ( pc[1] * splitter ) - pc[1] ) );
          bey = ( pc * splitter ) - ( ( pc * splitter ) - pc );
          ac3 = pc - ( ( pc * splitter ) - ( ( pc * splitter ) - pc ) );
          cey = ( temp48len * cexdey1 ) - ( ( temp48len * cexdey1 ) - temp48len );
          cez = temp48len - ( ( temp48len * cexdey1 ) - ( ( temp48len * cexdey1 ) - temp48len ) );
          dey = ( temp48len * cexdey1 ) - ( ( temp48len * cexdey1 ) - temp48len );
          aez = temp48len - ( ( temp48len * cexdey1 ) - ( ( temp48len * cexdey1 ) - temp48len ) );
          bez = pe[1] - ( ( pe[1] * cexdey1 ) - ( ( pe[1] * cexdey1 ) - pe[1] ) );
          dez = pe[0] - ( ( pe[0] * cexdey1 ) - ( ( pe[0] * cexdey1 ) - pe[0] ) );
          temp48len = 4;
          temp48len = (dey & 0xFFFFFFFF);
          temp48len = 4;
          scale_expansion_zeroelim( 4, ebp_240, ebp_784, (int)( &(double*)pc[2] & 0xFFFFFFFF ) );
          temp48len = 4;
          temp48len = 4;
          temp48len = (dey & 0xFFFFFFFF);
          temp48len = 4;
          scale_expansion_zeroelim( 4, ebp_272, ebp_784, (int)( &(double*)pd[2] & 0xFFFFFFFF ) );
          temp48len = 4;
          temp48len = 4;
          temp48len = (dey & 0xFFFFFFFF);
          temp48len = 4;
          scale_expansion_zeroelim( 4, ebp_304, ebp_784, (int)( &(double*)pe[2] & 0xFFFFFFFF ) );
          temp48len = 4;
          temp48len = 4;
          temp48len = (dey & 0xFFFFFFFF);
          temp48len = 4;
          scale_expansion_zeroelim( 4, ebp_336, ebp_784, (int)( &(double*)pa[2] & 0xFFFFFFFF ) );
          temp48len = 4;
          temp48len = 4;
          temp48len = (dey & 0xFFFFFFFF);
          temp48len = 4;
          scale_expansion_zeroelim( 4, ebp_368, ebp_784, (int)( &(double*)pb[2] & 0xFFFFFFFF ) );
          temp48len = 4;
          temp48len = 4;
          temp48len = (dey & 0xFFFFFFFF);
          temp48len = 4;
          scale_expansion_zeroelim( 4, ebp_240, ebp_784, (int)( &(double*)pd[2] & 0xFFFFFFFF ) );
          temp48len = 4;
          temp48len = 4;
          temp48len = (dey & 0xFFFFFFFF);
          temp48len = 4;
          scale_expansion_zeroelim( 4, ebp_272, ebp_784, (int)( &(double*)pe[2] & 0xFFFFFFFF ) );
          temp48len = 4;
          temp48len = 4;
          temp48len = (dey & 0xFFFFFFFF);
          temp48len = 4;
          scale_expansion_zeroelim( 4, ebp_304, ebp_784, (int)( &(double*)pa[2] & 0xFFFFFFFF ) );
          temp48len = 4;
          temp48len = 4;
          temp48len = (dey & 0xFFFFFFFF);
          temp48len = 4;
          scale_expansion_zeroelim( 4, ebp_336, ebp_784, (int)( &(double*)pb[2] & 0xFFFFFFFF ) );
          temp48len = 4;
          temp48len = 4;
          temp48len = (dey & 0xFFFFFFFF);
          temp48len = 4;
          scale_expansion_zeroelim( 4, ebp_368, ebp_784, (int)( &(double*)pc[2] & 0xFFFFFFFF ) );
          temp48len = (aey & 0xFFFFFFFF);
          temp48len = (bez & 0xFFFFFFFF);
          if ( temp48len > 0 )
          {
            do
            {
            }
            while ( temp48len != 0 + 1 + 1 );
          }
          temp48len = temp48len;
          scale_expansion_zeroelim( temp48len, ebp_8208, ebp_13584, pa );
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( (int)( (int)(dey & 0xFFFFFFFF) ), ebp_8208, ebp_13584, (int)( &(double*)pa[1] & 0xFFFFFFFF ) );
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( (int)( (int)(dey & 0xFFFFFFFF) ), ebp_8208, ebp_13584, (int)( &(double*)pa[2] & 0xFFFFFFFF ) );
          temp48len = (ac3 & 0xFFFFFFFF);
          fast_expansion_sum_zeroelim( (int)( (int)(ac3 & 0xFFFFFFFF) ), ebp_25872, (int)( (int)(cez & 0xFFFFFFFF) ), ebp_28944, ebp_47376 );
          temp48len = (dex & 0xFFFFFFFF);
          temp48len = (aez & 0xFFFFFFFF);
          if ( temp48len > 0 )
          {
            do
            {
            }
            while ( temp48len != 0 + 1 + 1 );
          }
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( temp48len, ebp_8976, ebp_13584, pb );
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( (int)( (int)(dey & 0xFFFFFFFF) ), ebp_8976, ebp_13584, (int)( &(double*)pb[1] & 0xFFFFFFFF ) );
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( (int)( (int)(dey & 0xFFFFFFFF) ), ebp_8976, ebp_13584, (int)( &(double*)pb[2] & 0xFFFFFFFF ) );
          temp48len = (cez & 0xFFFFFFFF);
          fast_expansion_sum_zeroelim( (int)( (int)(cez & 0xFFFFFFFF) ), ebp_25872, (int)( (int)(aey & 0xFFFFFFFF) ), ebp_28944, ebp_47376 );
          temp48len = (cex & 0xFFFFFFFF);
          temp48len = (bex & 0xFFFFFFFF);
          if ( temp48len > 0 )
          {
            do
            {
            }
            while ( temp48len != 0 + 1 + 1 );
          }
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( temp48len, ebp_9744, ebp_13584, pc );
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( (int)( (int)(dey & 0xFFFFFFFF) ), ebp_9744, ebp_13584, (int)( &(double*)pc[1] & 0xFFFFFFFF ) );
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( (int)( (int)(dey & 0xFFFFFFFF) ), ebp_9744, ebp_13584, (int)( &(double*)pc[2] & 0xFFFFFFFF ) );
          temp48len = (dex & 0xFFFFFFFF);
          fast_expansion_sum_zeroelim( (int)( (int)(dex & 0xFFFFFFFF) ), ebp_25872, (int)( (int)(aey & 0xFFFFFFFF) ), ebp_28944, ebp_47376 );
          temp48len = (cey & 0xFFFFFFFF);
          temp48len = (aex & 0xFFFFFFFF);
          if ( temp48len > 0 )
          {
            do
            {
            }
            while ( temp48len != 0 + 1 + 1 );
          }
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( temp48len, ebp_10512, ebp_13584, (int)( &(double*)pd[0] & 0xFFFFFFFF ) );
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( (int)( (int)(dey & 0xFFFFFFFF) ), ebp_10512, ebp_13584, (int)( &(double*)pd[1] & 0xFFFFFFFF ) );
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( (int)( (int)(dey & 0xFFFFFFFF) ), ebp_10512, ebp_13584, (int)( &(double*)pd[2] & 0xFFFFFFFF ) );
          temp48len = (dex & 0xFFFFFFFF);
          fast_expansion_sum_zeroelim( (int)( (int)(dex & 0xFFFFFFFF) ), ebp_25872, (int)( (int)(aey & 0xFFFFFFFF) ), ebp_28944, ebp_47376 );
          temp48len = (bey & 0xFFFFFFFF);
          temp48len = (dez & 0xFFFFFFFF);
          if ( temp48len > 0 )
          {
            do
            {
            }
            while ( temp48len != 0 + 1 + 1 );
          }
          temp48len = (dey & 0xFFFFFFFF);
          scale_expansion_zeroelim( temp48len, ebp_7440, ebp_13584, (int)( &(double*)pe[0] & 0xFFFFFFFF ) );
          temp48len = temp48len;
          scale_expansion_zeroelim( temp48len, ebp_7440, ebp_13584, (int)( &(double*)pe[1] & 0xFFFFFFFF ) );
          temp48len = temp48len;
          scale_expansion_zeroelim( temp48len, ebp_7440, ebp_13584, (int)( &(double*)pe[2] & 0xFFFFFFFF ) );
          temp48len = (cey & 0xFFFFFFFF);
          fast_expansion_sum_zeroelim( (int)( (int)(cey & 0xFFFFFFFF) ), ebp_25872, (int)( (int)(dey & 0xFFFFFFFF) ), ebp_28944, ebp_47376 );
          temp48len = (ac3 & 0xFFFFFFFF);
          temp48len = (bez & 0xFFFFFFFF);
          fast_expansion_sum_zeroelim( (int)( (int)(bez & 0xFFFFFFFF) ), ebp_84240, (int)( (int)(aey & 0xFFFFFFFF) ), ebp_93456, ebp_139536 );
          temp48len = (cey & 0xFFFFFFFF);
          cexdey1 = bexaey1;
        }
      }
    }
    else
    {
      cexdey1 = errbound;
    }
  }
  else
  {
    cexdey1 = errbound;
  }
  return 1;
}
double insphere( double *pa, double *pb, double *pc, double *pd, double *pe )
{
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ static char *ins[26] = { "21 21 4 1", "  c black", ". c #7A8584", "X c gray100", "o c None", "oooooo...oooooooooooo", "ooooo.ooo.ooooooooooo", "ooooo.o.o.ooooooooooo", "oooooo....ooooooooooo", "ooooooooooooooooooooo", "oooo  ooooo  oooooooo", "ooooooooooooooooooooo", "oo...ooooooooooo...oo", "o.oo..ooooooooo.ooo.o", "o.o o...........o o.o", "o.ooo.ooooooooo.ooo.o", "oo...ooooooooooo...oo", "ooooooooooooooooooooo", "ooo   o ooo oo    ooo", "oooo oo ooo o ooooooo", "oooo oo  oo o ooooooo", "oooo oo o o oo   oooo", "oooo oo oo  ooooo ooo", "oooo oo ooo ooooo ooo", "oooo oo ooo ooooo ooo", "ooo   o ooo o    oooo" };
  double aex, bex, cex = pc[0] - pe[0], dex = pd[0] - pe[0];
  double aey, bey, cey = pc[1] - pe[1], dey = pd[1] - pe[1];
  double aez, bez, cez, dez = pd[2] - pe[2];
  double aexbey = ( pa[0] - pe[0] ) * ( pb[1] - pe[1] ), bexaey = ( pb[0] - pe[0] ) * ( pa[1] - pe[1] ), bexcey, cexbey, cexdey, dexcey, dexaey, aexdey;
  double aexcey, cexaey, bexdey, dexbey;
  double alift, blift, clift, dlift;
  double ab = aexbey - bexaey, bc, cd, da, ac, bd;
  /* phantom */ double abc, bcd, cda, dab;
  double aezplus, bezplus, cezplus, dezplus;
  double aexbeyplus, bexaeyplus, bexceyplus, cexbeyplus;
  double cexdeyplus, dexceyplus, dexaeyplus, aexdeyplus;
  double aexceyplus, cexaeyplus, bexdeyplus, dexbeyplus;
  double det;
  double permanent, errbound;
  bexcey = cey * ( pb[0] - pe[0] );
  cexbey = cex * ( pb[1] - pe[1] );
  bc = bexcey - cexbey;
  cexdey = dey * cex;
  dexcey = dex * cey;
  cd = cexdey - dexcey;
  dexaey = dex * ( pa[1] - pe[1] );
  aexdey = dey * ( pa[0] - pe[0] );
  da = dexaey - aexdey;
  aexcey = cey * ( pa[0] - pe[0] );
  cexaey = cex * ( pa[1] - pe[1] );
  ac = aexcey - cexaey;
  bexdey = dey * ( pb[0] - pe[0] );
  dexbey = dex * ( pb[1] - pe[1] );
  bd = bexdey - dexbey;
  alift = ( ( pa[0] - pe[0] ) * ( pa[0] - pe[0] ) ) + ( ( pa[1] - pe[1] ) * ( pa[1] - pe[1] ) );
  alift += ( pa[2] - pe[2] ) * ( pa[2] - pe[2] );
  blift = ( ( pb[0] - pe[0] ) * ( pb[0] - pe[0] ) ) + ( ( pb[1] - pe[1] ) * ( pb[1] - pe[1] ) );
  blift += ( pb[2] - pe[2] ) * ( pb[2] - pe[2] );
  cex = ( cex * cex ) + ( cey * cey );
  cex += ( pc[2] - pe[2] ) * ( pc[2] - pe[2] );
  dex = ( dex * dex ) + ( dey * dey );
  dex += dez * dez;
  bey = ( ( dex * ( ( ( bc * ( pa[2] - pe[2] ) ) - ( ac * ( pb[2] - pe[2] ) ) ) + ( ab * ( pc[2] - pe[2] ) ) ) ) - ( cex * ( ( dez * ab ) + ( bd * ( pa[2] - pe[2] ) ) + ( da * ( pb[2] - pe[2] ) ) ) ) ) + ( ( blift * ( ( da * ( pc[2] - pe[2] ) ) + ( dez * ac ) + ( cd * ( pa[2] - pe[2] ) ) ) ) - ( alift * ( ( ( cd * ( pb[2] - pe[2] ) ) - ( bd * ( pc[2] - pe[2] ) ) ) + ( dez * bc ) ) ) );
  cez = dey = pa[2] - pe[2];
  if ( dey <= 0.000000000000 )
  {
  }
  else
    dey = -( cez );
  cez = dez;
  det = aexbey;
  if ( aexbey <= 0.000000000000 )
  {
  }
  else
    aexbey = -( det );
  det = bexaey;
  if ( bexaey <= 0.000000000000 )
  {
  }
  else
    bexaey = -( det );
  det = bexcey;
  if ( bexcey <= 0.000000000000 )
  {
  }
  else
    bexcey = -( det );
  det = cexbey;
  if ( cexbey <= 0.000000000000 )
  {
  }
  else
    cexbey = -( det );
  det = cexdey;
  if ( cexdey <= 0.000000000000 )
  {
  }
  else
    cexdey = -( det );
  det = dexcey;
  if ( dexaey <= 0.000000000000 )
  {
  }
  else
    dexaey = -( dexaey );
  if ( aexdey <= 0.000000000000 )
  {
  }
  else
    aexdey = -( aexdey );
  if ( aexcey <= 0.000000000000 )
  {
  }
  else
    aexcey = -( aexcey );
  if ( cexaey <= 0.000000000000 )
  {
  }
  else
    cexaey = -( cexaey );
  if ( dexbey <= 0.000000000000 )
  {
    cez = det = cez;
  }
  else
  {
    dexbey = -( dexbey );
    cez = det = cez;
  }
  dez = -( bexdey ) + cexdey;
  dexbey += det;
  bexcey += cexbey;
  dexaey += aexdey;
  aexbey += bexaey;
  if ( isperrboundA * ( ( alift * ( ( dez * bez ) + ( dexbey * aez ) + ( cez * bexcey ) ) ) + ( blift * ( ( dexaey * aez ) + ( cez * ( cexaey + aexcey ) ) + ( dez * dey ) ) ) + ( cex * ( ( cez * aexbey ) + ( dey * dexbey ) + ( dexaey * bez ) ) ) + ( dex * ( ( dey * bexcey ) + ( bez * ( cexaey + aexcey ) ) + ( aez * aexbey ) ) ) ) < 0.000000000000 )
  {
    bey = bez;
  }
  else
  {
    bey = bez;
    if ( -( bez ) <= bey )
    {
      pc = &(double*)aez & 0xFFFFFFFF;
      pb = pe;
      pa = pd;
    }
  }
  return 1;
}
#if 0
#endif
