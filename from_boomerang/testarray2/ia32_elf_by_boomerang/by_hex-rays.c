/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_8048290();
// int printf(const char *format, ...);
int __cdecl mid(int);
int __cdecl fst(int);
int __cdecl main(int argc, const char **argv, const char **envp);

//-------------------------------------------------------------------------
// Data declarations

int (*dword_804963C)(void) = NULL; // weak
_UNKNOWN gca; // weak


//----- (08048290) --------------------------------------------------------
int sub_8048290()
{
  return dword_804963C();
}
// 804963C: using guessed type int (*dword_804963C)(void);

//----- (08048368) --------------------------------------------------------
int __cdecl mid(int a1)
{
  return printf("Middle elment is %d\n", *(char *)(a1 + 2));
}

//----- (0804838A) --------------------------------------------------------
int __cdecl fst(int a1)
{
  return printf("First element is %d\n", *(char *)(a1 + 10));
}

//----- (080483AC) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  void *v3; // esp
  char *v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v3 = alloca(16);
  v6 = 0;
  mid((int)&gca);
  fst((int)&gca - 10);
  v5 = (char *)&gca;
  for ( i = 0; i <= 4; ++i )
    v6 += *v5++;
  printf("Sum is %d\n", v6);
  return 0;
}

// nfuncs=17 queued=4 decompiled=4 lumina nreq=0 worse=0 better=0
// ALL OK, 4 function(s) have been successfully decompiled
