/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_8048350();
// int abs(int x);
// int puts(const char *s);
// void exit(int status);
// size_t strlen(const char *s);
// int putchar(int c);
int __cdecl main(int argc, const char **argv, const char **envp);
int __cdecl advanced_3_value_range_analysis(int);
int __cdecl basic_1_reg_in_block(int);
int __cdecl basic_2_reg_in_prev_block(int);
int __cdecl basic_3_reg_cond_overwrite(int);
int __cdecl basic_4_reg_cond_change(int);
int __cdecl basic_5_reg_different_values(int);
int __cdecl basic_6_reg_overwrite_in_block(int);
int __cdecl intermediate_1_mem_in_block(int);
int __cdecl intermediate_2_mem_in_prev_block(int);
int __cdecl intermediate_3_mem_cond_overwrite(int);
int __cdecl intermediate_4_mem_cond_change(int);
int __cdecl intermediate_5_mem_different_values(int);
int __cdecl intermediate_6_mem_overwrite_in_block(int);
int intermediate_10_subregs();
int __cdecl advanced_1_writes_can_be_omitted_for_non_mem_access_calls(int x); // idb
size_t __cdecl advanced_2_mem_values_can_be_propagated_for_non_write_calls(char *s);

//-------------------------------------------------------------------------
// Data declarations

int (*dword_804A008)(void) = NULL; // weak
int global_var; // weak
char global_char1; // weak
char global_char2; // weak


//----- (08048350) --------------------------------------------------------
int sub_8048350()
{
  return dword_804A008();
}
// 804A008: using guessed type int (*dword_804A008)(void);

//----- (080483D0) --------------------------------------------------------
int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  size_t v17; // ebx
  int v18; // eax

  v3 = basic_1_reg_in_block(argc);
  v4 = basic_2_reg_in_prev_block(argc) + v3;
  v5 = basic_3_reg_cond_overwrite(argc) + v4;
  v6 = basic_4_reg_cond_change(argc) + v5;
  v7 = basic_5_reg_different_values(argc) + v6;
  v8 = basic_6_reg_overwrite_in_block(argc) + v7;
  v9 = intermediate_1_mem_in_block(argc) + v8;
  v10 = intermediate_2_mem_in_prev_block(argc) + v9;
  v11 = intermediate_3_mem_cond_overwrite(argc) + v10;
  v12 = intermediate_4_mem_cond_change(argc) + v11;
  v13 = intermediate_5_mem_different_values(argc) + v12;
  v14 = intermediate_6_mem_overwrite_in_block(argc) + v13;
  v15 = intermediate_10_subregs() + v14;
  v16 = advanced_1_writes_can_be_omitted_for_non_mem_access_calls(argc) + v15;
  v17 = advanced_2_mem_values_can_be_propagated_for_non_write_calls((char *)*argv) + v16;
  v18 = advanced_3_value_range_analysis(argc);
  exit(**argv + v18 + v17);
}

//----- (0804858B) --------------------------------------------------------
int __cdecl advanced_3_value_range_analysis(int a1)
{
  if ( a1 > 10 )
  {
    putchar(98);
    putchar(65);
    putchar(49);
    puts(">10");
  }
  if ( a1 == 42 )
  {
    putchar(98);
    putchar(65);
    putchar(48);
    puts("= 42");
  }
  return 0;
}
// 804859A: conditional instruction was optimized away because %arg_0.4>=B
// 80485B9: conditional instruction was optimized away because %arg_0.4>=B
// 80485D8: conditional instruction was optimized away because %arg_0.4>=B
// 80485F7: conditional instruction was optimized away because %arg_0.4>=B
// 8048634: conditional instruction was optimized away because %arg_0.4==2A
// 8048653: conditional instruction was optimized away because %arg_0.4==2A
// 8048672: conditional instruction was optimized away because %arg_0.4==2A

//----- (0804868D) --------------------------------------------------------
int __cdecl basic_1_reg_in_block(int a1)
{
  putchar(a1 + 48);
  return 0;
}

//----- (080486A4) --------------------------------------------------------
int __cdecl basic_2_reg_in_prev_block(int a1)
{
  putchar(a1 + 49);
  return 0;
}

//----- (080486C2) --------------------------------------------------------
int __cdecl basic_3_reg_cond_overwrite(int a1)
{
  int v1; // ebx

  v1 = 65;
  if ( a1 != 42 )
    v1 = 97;
  putchar(v1 + a1);
  return 0;
}

//----- (080486E3) --------------------------------------------------------
int __cdecl basic_4_reg_cond_change(int a1)
{
  int v1; // ebx

  v1 = 65;
  if ( a1 != 42 )
    v1 = 97;
  putchar(v1 + a1);
  return 0;
}

//----- (08048702) --------------------------------------------------------
int __cdecl basic_5_reg_different_values(int a1)
{
  int v1; // ebx

  if ( a1 == 42 )
    v1 = 97;
  else
    v1 = 65;
  putchar(v1 + a1);
  return 0;
}

//----- (08048725) --------------------------------------------------------
int __cdecl basic_6_reg_overwrite_in_block(int a1)
{
  putchar(a1 + 48);
  return 0;
}

//----- (08048741) --------------------------------------------------------
int __cdecl intermediate_1_mem_in_block(int a1)
{
  global_var = 48;
  putchar(a1 + 48);
  return 0;
}
// 804A02C: using guessed type int global_var;

//----- (08048761) --------------------------------------------------------
int __cdecl intermediate_2_mem_in_prev_block(int a1)
{
  global_var = 48;
  putchar(a1 + 49);
  return 0;
}
// 804A02C: using guessed type int global_var;

//----- (0804878E) --------------------------------------------------------
int __cdecl intermediate_3_mem_cond_overwrite(int a1)
{
  global_var = 65;
  if ( a1 != 42 )
    global_var = 97;
  putchar(global_var + a1);
  return 0;
}
// 804A02C: using guessed type int global_var;

//----- (080487BD) --------------------------------------------------------
int __cdecl intermediate_4_mem_cond_change(int a1)
{
  global_var = 65;
  if ( a1 != 42 )
    global_var += 32;
  putchar(global_var + a1);
  return 0;
}
// 804A02C: using guessed type int global_var;

//----- (080487E9) --------------------------------------------------------
int __cdecl intermediate_5_mem_different_values(int a1)
{
  if ( a1 == 42 )
    global_var = 97;
  else
    global_var = 65;
  putchar(global_var + a1);
  return 0;
}
// 804A02C: using guessed type int global_var;

//----- (0804881A) --------------------------------------------------------
int __cdecl intermediate_6_mem_overwrite_in_block(int a1)
{
  global_var = 48;
  putchar(a1 + 48);
  return 0;
}
// 804A02C: using guessed type int global_var;

//----- (08048844) --------------------------------------------------------
int intermediate_10_subregs()
{
  putchar((unsigned __int8)(2 * global_char1) + (unsigned __int8)(4 * global_char2));
  return 0;
}
// 804A030: using guessed type char global_char1;
// 804A031: using guessed type char global_char2;

//----- (08048877) --------------------------------------------------------
int __cdecl advanced_1_writes_can_be_omitted_for_non_mem_access_calls(int x)
{
  int v2; // [esp+Ch] [ebp-Ch]

  global_var = 1;
  v2 = abs(x);
  global_var = 2;
  return v2 + 2;
}
// 804A02C: using guessed type int global_var;

//----- (080488AF) --------------------------------------------------------
size_t __cdecl advanced_2_mem_values_can_be_propagated_for_non_write_calls(char *s)
{
  global_var = 1;
  return strlen(s) + 1;
}
// 804A02C: using guessed type int global_var;

// nfuncs=42 queued=18 decompiled=18 lumina nreq=0 worse=0 better=0
// ALL OK, 18 function(s) have been successfully decompiled
