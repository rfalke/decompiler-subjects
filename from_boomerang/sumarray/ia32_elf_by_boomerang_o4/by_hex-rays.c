/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void sub_8048248();
// int printf(const char *format, ...);
int __cdecl main(int argc, const char **argv, const char **envp);

//-------------------------------------------------------------------------
// Data declarations

_DWORD a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // weak


//----- (08048248) --------------------------------------------------------
void sub_8048248()
{
  JUMPOUT(0);
}
// 804824E: control flows out of bounds to 0

//----- (08048328) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v3; // edx
  int i; // eax

  v3 = 0;
  for ( i = 0; i <= 9; ++i )
    v3 += a[i];
  printf("Sum is %d\n", v3);
  return 0;
}
// 8049440: using guessed type _DWORD a[10];

// nfuncs=15 queued=2 decompiled=2 lumina nreq=0 worse=0 better=0
// ALL OK, 2 function(s) have been successfully decompiled
