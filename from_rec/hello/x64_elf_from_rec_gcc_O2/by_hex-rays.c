/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

__int64 __fastcall sub_4003E8(); // weak
// int puts(const char *s);
int __cdecl main(int argc, const char **argv, const char **envp);

//-------------------------------------------------------------------------
// Data declarations

__int64 (*qword_600FF8)(void) = NULL; // weak


//----- (00000000004003E8) ----------------------------------------------------
__int64 sub_4003E8()
{
  return qword_600FF8();
}
// 4003E8: using guessed type __int64 __fastcall sub_4003E8();
// 600FF8: using guessed type __int64 (*qword_600FF8)(void);

//----- (0000000000400510) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  puts("Hello world.");
  return 0;
}

// nfuncs=16 queued=2 decompiled=2 lumina nreq=0 worse=0 better=0
// ALL OK, 2 function(s) have been successfully decompiled
