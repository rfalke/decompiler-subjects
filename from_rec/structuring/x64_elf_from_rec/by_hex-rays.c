/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

__int64 __fastcall sub_400368(); // weak
int __cdecl main(int argc, const char **argv, const char **envp);
void __cdecl enter();
void __cdecl leave();
void __cdecl loop1();
int __cdecl loop2();

//-------------------------------------------------------------------------
// Data declarations

__int64 (*qword_600978)(void) = NULL; // weak
int arr[100]; // idb
int i; // idb
int j; // idb


//----- (0000000000400368) ----------------------------------------------------
__int64 sub_400368()
{
  return qword_600978();
}
// 400368: using guessed type __int64 __fastcall sub_400368();
// 600978: using guessed type __int64 (*qword_600978)(void);

//----- (000000000040047C) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax

  return result;
}
// 40047C: variable 'result' is possibly undefined

//----- (0000000000400482) ----------------------------------------------------
void __cdecl enter()
{
  ;
}

//----- (0000000000400488) ----------------------------------------------------
void __cdecl leave()
{
  ;
}

//----- (000000000040048E) ----------------------------------------------------
void __cdecl loop1()
{
  enter();
  for ( i = 0; i <= 99; ++i )
    arr[i] = i;
  leave();
}

//----- (00000000004004E3) ----------------------------------------------------
int __cdecl loop2()
{
  int x; // [rsp+Ch] [rbp-4h]

  enter();
  while ( 1 )
  {
    x += arr[i] + j;
    if ( x == 10 )
      x = 22;
    if ( j > 99 )
    {
      j = 0;
      if ( i > 99 )
        break;
    }
  }
  leave();
  return x;
}
// 40050D: variable 'x' is possibly undefined

// nfuncs=18 queued=6 decompiled=6 lumina nreq=0 worse=0 better=0
// ALL OK, 6 function(s) have been successfully decompiled
