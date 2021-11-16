/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

__int64 __fastcall sub_400530(); // weak
// void __fastcall __noreturn std::__throw_length_error(const char *); idb
// void __fastcall operator delete(void *); idb
// void *memmove(void *dest, const void *src, size_t n);
// _QWORD __fastcall operator new(unsigned __int64); idb
int __cdecl main(int argc, const char **argv, const char **envp);
void __fastcall f(__int64, char **);
void __fastcall std::vector<int>::_M_range_insert<__gnu_cxx::__normal_iterator<int *,std::vector<int>>>(__int64, _BYTE *, char *, char *);

//-------------------------------------------------------------------------
// Data declarations

__int64 (*qword_600DE0)(void) = NULL; // weak


//----- (0000000000400530) ----------------------------------------------------
__int64 sub_400530()
{
  return qword_600DE0();
}
// 400530: using guessed type __int64 __fastcall sub_400530();
// 600DE0: using guessed type __int64 (*qword_600DE0)(void);

//----- (0000000000400590) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  return 0;
}

//----- (0000000000400680) ----------------------------------------------------
void __fastcall f(__int64 a1, char **a2)
{
  std::vector<int>::_M_range_insert<__gnu_cxx::__normal_iterator<int *,std::vector<int>>>(
    a1,
    *(_BYTE **)(a1 + 8),
    *a2,
    a2[1]);
}

//----- (00000000004006A0) ----------------------------------------------------
void __fastcall std::vector<int>::_M_range_insert<__gnu_cxx::__normal_iterator<int *,std::vector<int>>>(
        __int64 a1,
        _BYTE *a2,
        char *a3,
        char *a4)
{
  __int64 v7; // r14
  unsigned __int64 v8; // r13
  _BYTE *v9; // rsi
  unsigned __int64 v10; // r14
  signed __int64 v11; // rax
  unsigned __int64 v12; // r15
  bool v13; // cf
  unsigned __int64 v14; // r14
  char *v15; // rax
  char *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  char *v19; // rcx
  char *v20; // r13
  __int64 v21; // rbp
  __int64 v22; // rax
  _BYTE *v23; // rdi
  char *v24; // rbp
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  size_t v30; // rdx
  size_t v31; // r8
  char *v32; // r9
  __int64 v33; // rcx
  char *v34; // rdi
  __int64 v35; // r9
  char *v36; // [rsp+0h] [rbp-48h]
  char *v37; // [rsp+0h] [rbp-48h]
  __int64 v38; // [rsp+8h] [rbp-40h]
  char *v39; // [rsp+8h] [rbp-40h]
  size_t v40; // [rsp+8h] [rbp-40h]

  if ( a3 == a4 )
    return;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (a4 - a3) >> 2;
  if ( v8 > (*(_QWORD *)(a1 + 16) - v7) >> 2 )
  {
    v9 = *(_BYTE **)a1;
    v10 = (v7 - *(_QWORD *)a1) >> 2;
    if ( v8 > 0x3FFFFFFFFFFFFFFFLL - v10 )
      std::__throw_length_error("vector::_M_range_insert");
    v11 = (a4 - a3) >> 2;
    v12 = -4LL;
    if ( v10 >= v8 )
      v11 = v10;
    v13 = __CFADD__(v11, v10);
    v14 = v11 + v10;
    if ( !v13 && v14 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      if ( !v14 )
      {
        v12 = 0LL;
        v16 = 0LL;
        goto LABEL_9;
      }
      v12 = 4 * v14;
    }
    v15 = (char *)operator new(v12);
    v9 = *(_BYTE **)a1;
    v16 = v15;
LABEL_9:
    v17 = 0LL;
    v18 = (a2 - v9) >> 2;
    if ( v18 )
    {
      v38 = 4 * v18;
      memmove(v16, v9, 4 * v18);
      v17 = v38;
    }
    v19 = &v16[v17];
    if ( v8 )
    {
      v8 *= 4LL;
      v39 = v19;
      memmove(v19, a3, v8);
      v19 = v39;
    }
    v20 = &v19[v8];
    v21 = 0LL;
    v22 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)a2) >> 2;
    if ( v22 )
    {
      v21 = 4 * v22;
      memmove(v20, a2, 4 * v22);
    }
    v23 = *(_BYTE **)a1;
    v24 = &v20[v21];
    if ( *(_QWORD *)a1 )
      operator delete(v23);
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = v24;
    *(_QWORD *)(a1 + 16) = &v16[v12];
    return;
  }
  v25 = (v7 - (__int64)a2) >> 2;
  if ( v8 < v25 )
  {
    v26 = *(_QWORD *)(a1 + 8);
    v27 = v7 - 4 * v8;
    v28 = (__int64)(4 * v8) >> 2;
    if ( v28 )
    {
      memmove(*(void **)(a1 + 8), (const void *)(v7 - 4 * v8), 4 * v28);
      v26 = *(_QWORD *)(a1 + 8);
      v27 = v7 - 4 * v8;
    }
    v29 = (v27 - (__int64)a2) >> 2;
    *(_QWORD *)(a1 + 8) = 4 * v8 + v26;
    if ( v29 )
    {
      memmove((void *)(v7 - 4 * v29), a2, 4 * v29);
      v30 = 4 * v8;
      if ( !v8 )
        return;
    }
    else
    {
      v30 = 4 * v8;
      if ( !v8 )
        return;
    }
LABEL_24:
    memmove(a2, a3, v30);
    return;
  }
  v31 = 4 * v25;
  v32 = &a3[4 * v25];
  v33 = (a4 - v32) >> 2;
  if ( v33 )
  {
    v36 = &a3[4 * v25];
    memmove(*(void **)(a1 + 8), v32, 4 * v33);
    v7 = *(_QWORD *)(a1 + 8);
    v32 = v36;
    v31 = 4 * v25;
  }
  v34 = (char *)(v7 + 4 * (v8 - v25));
  *(_QWORD *)(a1 + 8) = v34;
  if ( v25 )
  {
    v40 = v31;
    v37 = v32;
    memmove(v34, a2, v31);
    v34 = *(char **)(a1 + 8);
    v32 = v37;
    v31 = v40;
  }
  v35 = (v32 - a3) >> 2;
  *(_QWORD *)(a1 + 8) = &v34[v31];
  if ( v35 )
  {
    v30 = 4 * v35;
    goto LABEL_24;
  }
}

// nfuncs=24 queued=4 decompiled=4 lumina nreq=0 worse=0 better=0
// ALL OK, 4 function(s) have been successfully decompiled
