/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_8049030();
// int printf(const char *format, ...);
int __cdecl main(int argc, const char **argv, const char **envp);
void sub_8049127();

//-------------------------------------------------------------------------
// Data declarations

int (*dword_804C008)(void) = NULL; // weak


//----- (08049030) --------------------------------------------------------
int sub_8049030()
{
  return dword_804C008();
}
// 804C008: using guessed type int (*dword_804C008)(void);

//----- (08049060) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  printf("lea1 should=0x55667788 is=0x%08x\n", 1432778632);
  printf("lea2 should=0x11227788 is=0x%08x\n", 287471496);
  printf("lea3 should=0x00007788 is=0x%08x\n", 30600);
  printf("lea4 should=0x11227788 is=0x%08x\n", 287471496);
  return 0;
}

//----- (08049127) --------------------------------------------------------
void sub_8049127()
{
  ;
}

// nfuncs=18 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
