/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

__int64 __fastcall sub_4003A0(); // weak
void __cdecl func(s1 *s1p);
int __cdecl main(int argc, const char **argv, const char **envp);

//-------------------------------------------------------------------------
// Data declarations

__int64 (*qword_600FF8)(void) = NULL; // weak
s1 gs1; // idb


//----- (00000000004003A0) ----------------------------------------------------
__int64 sub_4003A0()
{
  return qword_600FF8();
}
// 4003A0: using guessed type __int64 __fastcall sub_4003A0();
// 600FF8: using guessed type __int64 (*qword_600FF8)(void);

//----- (00000000004004AC) ----------------------------------------------------
void __cdecl func(s1 *s1p)
{
  s1p->f1 = 1;
  s1p->f3 = 107;
  s1p->f4 = 10LL;
}

//----- (00000000004004D4) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax

  func(&gs1);
  return result;
}

// nfuncs=15 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
