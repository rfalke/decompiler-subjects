/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_80482A0();
int __cdecl f(__int64);
int __cdecl main(int argc, const char **argv, const char **envp);

//-------------------------------------------------------------------------
// Data declarations

int (*dword_80496A4)(void) = NULL; // weak
int g; // weak


//----- (080482A0) --------------------------------------------------------
int sub_80482A0()
{
  return dword_80496A4();
}
// 80496A4: using guessed type int (*dword_80496A4)(void);

//----- (080483CD) --------------------------------------------------------
int __cdecl f(__int64 a1)
{
  int result; // eax

  g = a1;
  result = 134518461;
  *(int *)((char *)&g + 1) = *(_DWORD *)((char *)&a1 + 1);
  return result;
}
// 80496BC: using guessed type int g;

//----- (080483E4) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  __int64 v4; // [esp+0h] [ebp-14h]
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i <= 9; ++i )
  {
    LODWORD(v4) = i;
    f(v4);
  }
  return 0;
}
// 80483F9: variable 'v4' is possibly undefined

// nfuncs=17 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
