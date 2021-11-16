/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_8049030();
// int printf(const char *format, ...);
int __cdecl main(int argc, const char **argv, const char **envp);
void sub_8049327();
_BOOL4 __cdecl carry(unsigned __int8, char);
int __cdecl signed_carry(int, int);
int __cdecl adc_simu(unsigned __int8, unsigned __int8, unsigned __int8);
int __cdecl add(char, char);
int __cdecl adc_set(char, char);
int __cdecl adc_clear(char, char);

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN unk_804A00C; // weak
_UNKNOWN unk_804A00F; // weak
_UNKNOWN unk_804A012; // weak
int (*dword_804C008)(void) = NULL; // weak


//----- (08049030) --------------------------------------------------------
int sub_8049030()
{
  return dword_804C008();
}
// 804C008: using guessed type int (*dword_804C008)(void);

//----- (08049060) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int i; // edi
  int j; // esi
  int v5; // ebx
  const char *v6; // ecx
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // edx
  const char *v10; // ecx
  const char *v11; // eax
  const char *v12; // eax
  bool v13; // zf
  const char *v14; // edx
  const char *v15; // eax
  const char *v16; // edx
  const char *v17; // ebx
  const char *v18; // ecx
  const char *v19; // eax
  const char *v20; // eax
  int v22; // [esp+0h] [ebp-28h]
  int v23; // [esp+4h] [ebp-24h]
  int v24; // [esp+8h] [ebp-20h]
  int v25; // [esp+Ch] [ebp-1Ch]

  for ( i = 0; i != 256; ++i )
  {
    for ( j = 0; j != 256; ++j )
    {
      v25 = add(i, j);
      v5 = adc_clear(i, j);
      v23 = adc_set(i, j);
      v22 = adc_simu(i, j, 1u);
      v24 = adc_simu(i, j, 0);
      if ( v25 != v5 )
      {
        printf("%3d = 0x%2x %3d = 0x%2x ->", i, i, j, j);
        v6 = (const char *)&unk_804A00F;
        if ( (v25 & 0x1000000) != 0 )
          v6 = (const char *)&unk_804A00C;
        v7 = (const char *)&unk_804A00F;
        if ( (v25 & 0x10000) != 0 )
          v7 = (const char *)&unk_804A012;
        printf("add=(%3d,%s,%s) ", (unsigned __int8)v25, v7, v6);
        v8 = (const char *)&unk_804A00F;
        if ( (v5 & 0x1000000) != 0 )
          v8 = (const char *)&unk_804A00C;
        v9 = (const char *)&unk_804A012;
        if ( (v5 & 0x10000) == 0 )
          v9 = (const char *)&unk_804A00F;
        printf("adc_clear=(%3d,%s,%s)\n", (unsigned __int8)v5, v9, v8);
      }
      if ( v5 != v24 )
      {
        printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->", i, i, j, j);
        v10 = (const char *)&unk_804A00F;
        if ( (v24 & 0x1000000) != 0 )
          v10 = (const char *)&unk_804A00C;
        v11 = (const char *)&unk_804A00F;
        if ( (v24 & 0x10000) != 0 )
          v11 = (const char *)&unk_804A012;
        printf("adc_clear simu=(%3d,%s,%s) ", (unsigned __int8)v24, v11, v10);
        v12 = (const char *)&unk_804A00F;
        if ( (v5 & 0x1000000) != 0 )
          v12 = (const char *)&unk_804A00C;
        v13 = (v5 & 0x10000) == 0;
        v14 = (const char *)&unk_804A012;
        v5 = (unsigned __int8)v5;
        if ( v13 )
          v14 = (const char *)&unk_804A00F;
        printf("adc_clear=(%3d,%s,%s)\n", v5, v14, v12);
      }
      if ( v23 != v22 )
      {
        printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->", i, i, j, j);
        v15 = (const char *)&unk_804A00F;
        v16 = (const char *)&unk_804A00F;
        if ( (v25 & 0x1000000) != 0 )
          v16 = (const char *)&unk_804A00C;
        v17 = (const char *)&unk_804A012;
        if ( (v25 & 0x10000) != 0 )
          v15 = (const char *)&unk_804A012;
        printf("add=(%3d,%s,%s) ", (unsigned __int8)v25, v15, v16);
        v18 = (const char *)&unk_804A00F;
        if ( (v23 & 0x1000000) != 0 )
          v18 = (const char *)&unk_804A00C;
        v19 = (const char *)&unk_804A00F;
        if ( (v23 & 0x10000) != 0 )
          v19 = (const char *)&unk_804A012;
        printf("adc_set=(%3d,%s,%s) ", (unsigned __int8)v23, v19, v18);
        v20 = (const char *)&unk_804A00F;
        if ( (v22 & 0x1000000) != 0 )
          v20 = (const char *)&unk_804A00C;
        if ( (v22 & 0x10000) == 0 )
          v17 = (const char *)&unk_804A00F;
        printf("adc_set simu=(%3d,%s,%s)\n", (unsigned __int8)v22, v17, v20);
      }
    }
  }
  return 0;
}

//----- (08049327) --------------------------------------------------------
void sub_8049327()
{
  ;
}

//----- (08049410) --------------------------------------------------------
_BOOL4 __cdecl carry(unsigned __int8 a1, char a2)
{
  return a1 > (unsigned __int8)(a1 + a2);
}

//----- (08049430) --------------------------------------------------------
int __cdecl signed_carry(int a1, int a2)
{
  int v2; // ecx
  int v3; // eax

  v2 = a1;
  v3 = a2 + a1;
  LOBYTE(v2) = (unsigned __int8)a1 >> 7;
  LOBYTE(v3) = (unsigned __int8)(a2 + a1) >> 7;
  return ((unsigned __int8)a2 >> 7 == (unsigned __int8)a1 >> 7) & (v2 ^ v3);
}

//----- (08049460) --------------------------------------------------------
int __cdecl adc_simu(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  _BOOL4 v3; // esi
  unsigned __int8 v4; // cl
  int result; // eax

  v3 = 1;
  v4 = a3 + a2 + a1;
  if ( !__CFADD__(a2, a1) )
    v3 = __CFADD__(a3, a2 + a1);
  result = v4;
  if ( ((a3 >> 7 == (unsigned __int8)(a2 + a1) >> 7) & (((unsigned __int8)(a2 + a1) >> 7) ^ (v4 >> 7))) != ((a2 >> 7 == a1 >> 7) & ((a1 >> 7) ^ ((unsigned __int8)(a2 + a1) >> 7))) )
    result = v4 + 0x10000;
  if ( v3 )
    result += 0x1000000;
  return result;
}

//----- (080494DC) --------------------------------------------------------
int __cdecl add(char a1, char a2)
{
  unsigned __int16 v2; // dx

  LOBYTE(v2) = __OFADD__(a2, a1);
  HIBYTE(v2) = __CFADD__(a2, a1);
  return (v2 << 16) + (unsigned __int8)(a2 + a1);
}

//----- (080494FE) --------------------------------------------------------
int __cdecl adc_set(char a1, char a2)
{
  unsigned __int16 v2; // dx

  LOBYTE(v2) = __OFADD__(1, a1) | __OFADD__(a2, a1 + 1);
  HIBYTE(v2) = __CFADD__(a1, 1) | __CFADD__(a2, a1 + 1);
  return (v2 << 16) + (unsigned __int8)(a2 + a1 + 1);
}

//----- (08049521) --------------------------------------------------------
int __cdecl adc_clear(char a1, char a2)
{
  unsigned __int16 v2; // dx

  LOBYTE(v2) = __OFADD__(a2, a1);
  HIBYTE(v2) = __CFADD__(a2, a1);
  return (v2 << 16) + (unsigned __int8)(a2 + a1);
}

// nfuncs=24 queued=9 decompiled=9 lumina nreq=0 worse=0 better=0
// ALL OK, 9 function(s) have been successfully decompiled
