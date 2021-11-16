/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

__int64 __fastcall sub_4003E0(); // weak
// void *memset(void *s, int c, size_t n);
void __fastcall use(int *x);
void __fastcall fill(int *dest, int n);
void __fastcall with_array(int n);
void __fastcall with_alloca(int n);
int __cdecl main(int argc, const char **argv, const char **envp);

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

//----- (0000000000400500) ----------------------------------------------------
void __fastcall use(int *x)
{
  sum += *x;
}

//----- (0000000000400510) ----------------------------------------------------
void __fastcall fill(int *dest, int n)
{
  memset(dest, 120, 4LL * n);
}

//----- (0000000000400530) ----------------------------------------------------
void __fastcall with_array(int n)
{
  __int64 v1; // rbx
  _BYTE v2[16]; // [rsp+0h] [rbp-10h] BYREF

  v1 = (4LL * (unsigned int)n + 15) & 0x7FFFFFFF0LL;
  memset(&v2[-v1], 120, 4LL * n);
  sum += *(_DWORD *)&v2[-v1] + 15;
}

//----- (0000000000400590) ----------------------------------------------------
void __fastcall with_alloca(int n)
{
  __int64 v1; // rdx
  _DWORD *v2; // rdi
  __int64 v3; // [rsp+0h] [rbp-10h] BYREF

  v1 = n;
  v2 = (_DWORD *)((char *)&v3 - ((4LL * n + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset(v2, 120, 4 * v1);
  sum += *v2 + 15;
}

//----- (00000000004005E0) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  with_alloca(argc);
  with_array(argc);
  return 0;
}

// nfuncs=19 queued=6 decompiled=6 lumina nreq=0 worse=0 better=0
// ALL OK, 6 function(s) have been successfully decompiled
