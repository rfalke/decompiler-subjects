/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void sub_8048248();
// int printf(const char *format, ...);
int foo2();
int foo1();
int __cdecl main(int argc, const char **argv, const char **envp);

//-------------------------------------------------------------------------
// Data declarations

__int64 a = 4617540697942969549LL; // weak
int b = 7; // weak


//----- (08048248) --------------------------------------------------------
void sub_8048248()
{
  JUMPOUT(0);
}
// 804824E: control flows out of bounds to 0

//----- (08048328) --------------------------------------------------------
int foo2()
{
  b = 12;
  return printf("a = %f\n", *(double *)&a);
}
// 8049468: using guessed type __int64 a;
// 8049470: using guessed type int b;

//----- (08048356) --------------------------------------------------------
int foo1()
{
  return foo2();
}

//----- (08048363) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  void *v3; // esp

  v3 = alloca(0);
  foo1();
  printf("b = %i\n", b);
  return 0;
}
// 8049470: using guessed type int b;

// nfuncs=17 queued=4 decompiled=4 lumina nreq=0 worse=0 better=0
// ALL OK, 4 function(s) have been successfully decompiled
