/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void sub_8048248();
// int printf(const char *format, ...);
int hello();
int world();
int __cdecl main(int argc, const char **argv, const char **envp);


//----- (08048248) --------------------------------------------------------
void sub_8048248()
{
  JUMPOUT(0);
}
// 804824E: control flows out of bounds to 0

//----- (08048328) --------------------------------------------------------
int hello()
{
  return printf("Hello, ");
}

//----- (08048340) --------------------------------------------------------
int world()
{
  return printf("world!\n");
}

//----- (08048358) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  void *v3; // esp

  v3 = alloca(0);
  hello();
  world();
  return 0;
}

// nfuncs=15 queued=4 decompiled=4 lumina nreq=0 worse=0 better=0
// ALL OK, 4 function(s) have been successfully decompiled
