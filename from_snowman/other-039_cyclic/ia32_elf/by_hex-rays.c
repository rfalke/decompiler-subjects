/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void g();
void h();
void __cdecl f(int, int, int, int);


//----- (080480D8) --------------------------------------------------------
void g()
{
  ;
}

//----- (080480DD) --------------------------------------------------------
void h()
{
  ;
}

//----- (080480E2) --------------------------------------------------------
void __cdecl f(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  while ( a1 )
    ++a2;
  while ( 1 )
  {
    h();
    if ( !v4 )
      break;
    ++a1;
  }
  while ( 1 )
  {
    g();
    if ( !v5 )
      break;
    h();
    if ( !v6 )
      break;
    ++a1;
  }
  do
  {
    f(a4, a1, a2, a3);
    g();
  }
  while ( v7 );
  if ( a1 )
  {
    f(a4, a3, a2, a1);
  }
  else
  {
    g();
    if ( v8 )
      h();
    do
    {
      g();
      if ( v9 != a2 )
        break;
      g();
      if ( !v10 )
        break;
      h();
    }
    while ( v11 );
  }
}
// 804810A: conditional instruction was optimized away because %arg_0.4==0
// 804819D: conditional instruction was optimized away because %arg_0.4==0
// 8048119: variable 'v4' is possibly undefined
// 8048128: variable 'v5' is possibly undefined
// 8048131: variable 'v6' is possibly undefined
// 804815A: variable 'v7' is possibly undefined
// 8048190: variable 'v8' is possibly undefined
// 80481A7: variable 'v9' is possibly undefined
// 80481B7: variable 'v10' is possibly undefined
// 80481C0: variable 'v11' is possibly undefined

// nfuncs=3 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
