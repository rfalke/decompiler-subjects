/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_80482F0();
// int puts(const char *s);
// int putchar(int c);
int __cdecl main(int argc, const char **argv, const char **envp);
_BOOL4 __cdecl basic_1_ternary_simple(int);
int __cdecl basic_2_ternary_other(int);
int __cdecl intermediate_10_double_word_signed_math(__int64, __int64, __int64);
int __cdecl intermediate_10_double_word_unsigned_math(unsigned __int64, unsigned __int64, unsigned __int64);
int advanced_1_unrolled_loop();
_BOOL4 __cdecl intermediate_1_ternary_blocks(int);
int __cdecl intermediate_2_other_in_blocks(int);

//-------------------------------------------------------------------------
// Data declarations

int (*dword_804B008)(void) = NULL; // weak


//----- (080482F0) --------------------------------------------------------
int sub_80482F0()
{
  return dword_804B008();
}
// 804B008: using guessed type int (*dword_804B008)(void);

//----- (08048340) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  _BOOL4 v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx

  v3 = basic_1_ternary_simple(argc);
  v4 = basic_2_ternary_other(argc) + v3;
  v5 = intermediate_1_ternary_blocks(argc) + v4;
  v6 = intermediate_2_other_in_blocks(argc) + v5;
  v7 = intermediate_10_double_word_signed_math(argc, argc, argc) + v6;
  v8 = intermediate_10_double_word_unsigned_math(argc, argc, argc) + v7;
  return **argv + advanced_1_unrolled_loop() + v8;
}

//----- (080484C0) --------------------------------------------------------
_BOOL4 __cdecl basic_1_ternary_simple(int a1)
{
  return a1 != 42;
}

//----- (080484D0) --------------------------------------------------------
int __cdecl basic_2_ternary_other(int a1)
{
  int result; // eax

  result = 100;
  if ( a1 != 42 )
    return 201;
  return result;
}

//----- (080484F0) --------------------------------------------------------
int __cdecl intermediate_10_double_word_signed_math(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a1 + a2 > a3 )
    puts("add");
  if ( a3 < a1 - a2 )
    puts("sub");
  if ( a3 < a1 * a2 )
    puts("mult");
  if ( a3 < a1 / a2 )
    puts("diff");
  if ( a1 % a2 == a3 )
    puts("modulo");
  return 0;
}

//----- (08048680) --------------------------------------------------------
int __cdecl intermediate_10_double_word_unsigned_math(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( a1 + a2 > a3 )
    puts("add");
  if ( a3 < a1 - a2 )
    puts("sub");
  if ( a3 < a1 * a2 )
    puts("mult");
  if ( a3 < a1 / a2 )
    puts("diff");
  if ( a1 % a2 == a3 )
    puts("modulo");
  return 0;
}

//----- (08048810) --------------------------------------------------------
int advanced_1_unrolled_loop()
{
  int v0; // ebx
  int v1; // ebx
  int v2; // eax
  int c; // [esp+0h] [ebp-1Ch]

  v0 = 48;
  puts("basic");
  do
  {
    c = v0++;
    putchar(c);
  }
  while ( v0 != 58 );
  v1 = 48;
  puts("partial unrolled");
  do
  {
    putchar(v1);
    v2 = v1 + 1;
    v1 += 2;
    putchar(v2);
  }
  while ( v1 != 58 );
  puts("fully unrolled");
  putchar(48);
  putchar(49);
  putchar(50);
  putchar(51);
  putchar(52);
  putchar(53);
  putchar(54);
  putchar(55);
  putchar(56);
  putchar(57);
  return 0;
}

//----- (08048904) --------------------------------------------------------
_BOOL4 __cdecl intermediate_1_ternary_blocks(int a1)
{
  return a1 != 42;
}

//----- (0804891B) --------------------------------------------------------
int __cdecl intermediate_2_other_in_blocks(int a1)
{
  if ( a1 == 42 )
    return 100;
  else
    return 201;
}

// nfuncs=31 queued=9 decompiled=9 lumina nreq=0 worse=0 better=0
// ALL OK, 9 function(s) have been successfully decompiled
