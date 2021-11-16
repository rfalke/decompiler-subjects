/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

__int64 __fastcall sub_4003E0(); // weak
// void *memset(void *s, int c, size_t n);
int __cdecl main(int argc, const char **argv, const char **envp);
void __fastcall use(int *x);
void __fastcall fill(int *dest, int n);
void __fastcall with_array(int n);
void __fastcall with_alloca(int n);

//-------------------------------------------------------------------------
// Data declarations

__int64 (*qword_601010)(void) = NULL; // weak
int sum; // idb


//----- (00000000004003E0) ----------------------------------------------------
__int64 sub_4003E0()
{
  return qword_601010();
}
// 4003E0: using guessed type __int64 __fastcall sub_4003E0();
// 601010: using guessed type __int64 (*qword_601010)(void);

//----- (0000000000400400) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  with_alloca(argc);
  with_array(argc);
  return 0;
}

//----- (0000000000400520) ----------------------------------------------------
void __fastcall use(int *x)
{
  sum += *x;
}

//----- (0000000000400530) ----------------------------------------------------
void __fastcall fill(int *dest, int n)
{
  memset(dest, 120, 4LL * n);
}

//----- (0000000000400550) ----------------------------------------------------
void __fastcall with_array(int n)
{
  size_t v1; // rdx
  void *v2; // rsp
  int v3; // [rsp+0h] [rbp-10h] BYREF

  v1 = 4LL * n;
  v2 = alloca(v1 + 3);
  memset(&v3, 120, v1);
  sum += v3 + 15;
}

//----- (00000000004005B0) ----------------------------------------------------
void __fastcall with_alloca(int n)
{
  size_t v1; // rdx
  void *v2; // rsp
  __int64 savedregs; // [rsp+0h] [rbp+0h] BYREF

  v1 = 4LL * n;
  v2 = alloca(v1 + 15);
  sum += *(_DWORD *)memset(&savedregs, 120, v1) + 15;
}

// nfuncs=19 queued=6 decompiled=6 lumina nreq=0 worse=0 better=0
// ALL OK, 6 function(s) have been successfully decompiled
