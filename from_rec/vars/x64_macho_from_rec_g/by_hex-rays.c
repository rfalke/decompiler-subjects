/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void __fastcall __noreturn start(__int64, __int64, __int64, __int64, __int64, __int64, const char *);
__int64 __fastcall func(__int64);
_DWORD *func2();
int __cdecl main(int argc, const char **argv, const char **envp);
// void __cdecl __noreturn exit(int);

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN gs1; // weak


//----- (0000000100000DF8) ----------------------------------------------------
void __fastcall __noreturn start(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const char *a7)
{
  _QWORD *i; // rcx
  int v8; // eax
  void *retaddr; // [rsp+0h] [rbp+0h]

  for ( i = (const char **)((char *)&a7 + (unsigned int)(8 * ((_DWORD)retaddr + 1))); *i; ++i )
    ;
  v8 = main((int)retaddr, &a7, (const char **)((char *)&a7 + (unsigned int)(8 * ((_DWORD)retaddr + 1))));
  exit(v8);
}

//----- (0000000100000E34) ----------------------------------------------------
__int64 __fastcall func(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 1;
  *(_BYTE *)(a1 + 16) = 107;
  result = a1;
  *(_QWORD *)(a1 + 24) = 10LL;
  return result;
}

//----- (0000000100000E5C) ----------------------------------------------------
_DWORD *func2()
{
  _DWORD *result; // rax

  gs1 = 1;
  *((_QWORD *)&gs1 + 1) = &gs1;
  *((_BYTE *)&gs1 + 16) = 107;
  *((_QWORD *)&gs1 + 3) = 10LL;
  **((_DWORD **)&gs1 + 1) = 2;
  result = *(_DWORD **)(*((_QWORD *)&gs1 + 1) + 8LL);
  *result = 3;
  return result;
}

//----- (0000000100000EC1) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  func((__int64)&gs1);
  return (unsigned int)func2();
}

// nfuncs=6 queued=4 decompiled=4 lumina nreq=0 worse=0 better=0
// ALL OK, 4 function(s) have been successfully decompiled
