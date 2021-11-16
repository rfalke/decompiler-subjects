/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_8048310();
// int puts(const char *s);
// void exit(int status);
// int putchar(int c);
int __cdecl main(int argc, const char **argv, const char **envp);
int intermediate_1_cmp_with_are_constant();
int __cdecl intermediate_2_cmp_with_extra(int);
int __cdecl intermediate_3_division_by_multiplication(int);
int __cdecl intermediate_4_swap_with_xor(int, int);
_BOOL4 __cdecl advanced_1_boolean_minization(int, int, int);

//-------------------------------------------------------------------------
// Data declarations

int (*dword_804A008)(void) = NULL; // weak


//----- (08048310) --------------------------------------------------------
int sub_8048310()
{
  return dword_804A008();
}
// 804A008: using guessed type int (*dword_804A008)(void);

//----- (08048370) --------------------------------------------------------
int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  _BOOL4 v7; // eax

  v3 = intermediate_1_cmp_with_are_constant();
  v4 = intermediate_2_cmp_with_extra(argc) + v3;
  v5 = intermediate_3_division_by_multiplication(argc) + v4;
  v6 = intermediate_4_swap_with_xor(48, 97) + v5;
  v7 = advanced_1_boolean_minization(argc == 0, (argc & 1) == 0, argc == 3 * (argc / 3));
  exit(**argv + v7 + v6);
}

//----- (080484EB) --------------------------------------------------------
int intermediate_1_cmp_with_are_constant()
{
  return 0;
}
// 804852F: conditional instruction was optimized away because %arg_0.4==1

//----- (08048551) --------------------------------------------------------
int __cdecl intermediate_2_cmp_with_extra(int a1)
{
  if ( a1 > 10 && a1 <= 19 )
    puts("!=30 is always true");
  if ( a1 == 1 )
    puts("!=2 is always true");
  if ( a1 > 10 )
    puts(">9 is always true");
  return 0;
}
// 8048567: conditional instruction was optimized away because %arg_0.4 is in (B..13)
// 80485A3: conditional instruction was optimized away because %arg_0.4>=B

//----- (080485BE) --------------------------------------------------------
int __cdecl intermediate_3_division_by_multiplication(int a1)
{
  putchar(a1 / 7);
  return 0;
}

//----- (080485E4) --------------------------------------------------------
int __cdecl intermediate_4_swap_with_xor(int a1, int a2)
{
  putchar(a2);
  putchar(a1);
  return 0;
}

//----- (0804861A) --------------------------------------------------------
_BOOL4 __cdecl advanced_1_boolean_minization(int a1, int a2, int a3)
{
  return !a1 && !a2 && a3 || !a1 && a2 && a3 || a1 && !a2;
}

// nfuncs=27 queued=7 decompiled=7 lumina nreq=0 worse=0 better=0
// ALL OK, 7 function(s) have been successfully decompiled
