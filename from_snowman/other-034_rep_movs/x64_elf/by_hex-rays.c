/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void __fastcall __noreturn start(_DWORD *, _DWORD *, __int64, __int64);


//----- (00000000004000D4) ----------------------------------------------------
void __fastcall __noreturn start(_DWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  while ( a4 )
  {
    *a1++ = *a2++;
    --a4;
  }
  JUMPOUT(0x4000D9LL);
}
// 4000D7: control flows out of bounds to 4000D9
// 4000D7: conditional instruction was optimized away because rcx.8==0

// nfuncs=1 queued=1 decompiled=1 lumina nreq=0 worse=0 better=0
// ALL OK, 1 function(s) have been successfully decompiled
