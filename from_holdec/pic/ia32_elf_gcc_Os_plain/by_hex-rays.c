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
void sub_80490D7();
void a_func(); // idb

//-------------------------------------------------------------------------
// Data declarations

int (*dword_804C008)(void) = NULL; // weak
int a_global = 42; // idb


//----- (08049030) --------------------------------------------------------
int sub_8049030()
{
  return dword_804C008();
}
// 804C008: using guessed type int (*dword_804C008)(void);

//----- (08049060) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  printf("in main: %d\n", a_global);
  ++a_global;
  a_func();
  return 0;
}

//----- (080490D7) --------------------------------------------------------
void sub_80490D7()
{
  ;
}

//----- (080491B6) --------------------------------------------------------
void a_func()
{
  printf("in func: %d\n", a_global);
}

// nfuncs=19 queued=4 decompiled=4 lumina nreq=0 worse=0 better=0
// ALL OK, 4 function(s) have been successfully decompiled
