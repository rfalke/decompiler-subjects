/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_8048290();
// int printf(const char *format, ...);
int __cdecl main(int argc, const char **argv, const char **envp);

//-------------------------------------------------------------------------
// Data declarations

int (*dword_80495A4)(void) = NULL; // weak


//----- (08048290) --------------------------------------------------------
int sub_8048290()
{
  return dword_80495A4();
}
// 80495A4: using guessed type int (*dword_80495A4)(void);

//----- (08048368) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  void *v3; // esp
  int v5; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = alloca(16);
  v5 = 0;
  for ( i = 0; i <= 4; ++i )
    v5 += *(char *)(i + 134518204);
  printf("Sum is %d\n", v5);
  return 0;
}

// nfuncs=15 queued=2 decompiled=2 lumina nreq=0 worse=0 better=0
// ALL OK, 2 function(s) have been successfully decompiled
