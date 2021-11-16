/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_8048480();
// int __xstat(int ver, const char *filename, struct stat *stat_buf);
// int __printf_chk(_DWORD, const char *, ...); weak
// void perror(const char *s);
// int __cdecl __strcat_chk(_DWORD, _DWORD, _DWORD); weak
// int fclose(FILE *stream);
// FILE *fopen(const char *filename, const char *modes);
// int __sprintf_chk(_DWORD, _DWORD, _DWORD, const char *, ...); weak
// size_t fread(void *ptr, size_t size, size_t n, FILE *stream);
unsigned int __cdecl dumpline(int, int, int);
int __cdecl hexdump(char *filename); // idb
int __cdecl main(int argc, const char **argv, const char **envp);

//-------------------------------------------------------------------------
// Data declarations

int (*dword_8049FFC)(void) = NULL; // weak


//----- (08048480) --------------------------------------------------------
int sub_8048480()
{
  return dword_8049FFC();
}
// 8049FFC: using guessed type int (*dword_8049FFC)(void);

//----- (08048600) --------------------------------------------------------
unsigned int __cdecl dumpline(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  char *v6; // ebx
  unsigned int v7; // ecx
  char *v8; // eax
  char *v9; // edx
  int i; // eax
  char v11; // cl
  unsigned int v13; // ecx
  unsigned int v14; // [esp+2Ch] [ebp-7Ch]
  char v15[9]; // [esp+3Ch] [ebp-6Ch] BYREF
  char v16; // [esp+45h] [ebp-63h] BYREF
  unsigned int v17; // [esp+8Ch] [ebp-1Ch]

  v3 = a1;
  v17 = __readgsdword(0x14u);
  __sprintf_chk(v15, 1, 80, "%08lX:", a2);
  v4 = a3;
  if ( a3 > 16 )
    v4 = 16;
  v5 = 1;
  if ( v4 > 0 )
  {
    LOWORD(v5) = 0;
    v6 = &v16;
    do
    {
      __sprintf_chk(v6, 1, -1, " %02lX", *(unsigned __int8 *)(a1 + v5++));
      v6 += 3;
    }
    while ( v5 < v4 );
    v3 = a1;
    if ( v4 > 15 )
    {
      v13 = strlen(v15) + 1;
      *(_DWORD *)&v15[v13 - 1] = 8134688;
      v14 = v13 + 2;
      goto LABEL_12;
    }
    v5 = v4 + 1;
  }
  do
  {
    __strcat_chk(v15, "   ", 80);
    ++v5;
  }
  while ( v5 - 1 <= 15 );
  v7 = strlen(v15) + 1;
  *(_DWORD *)&v15[v7 - 1] = 8134688;
  v14 = v7 + 2;
  if ( v4 <= 0 )
  {
    v4 = 0;
LABEL_11:
    v8 = &v15[v4 + v14];
    do
    {
      *v8 = 32;
      ++v4;
      ++v8;
    }
    while ( v4 <= 15 );
    goto LABEL_19;
  }
LABEL_12:
  v9 = &v15[v14];
  for ( i = 0; i != v4; ++i )
  {
    v11 = *(_BYTE *)(v3 + i);
    if ( (unsigned __int8)(v11 - 32) > 0x5Eu )
      v11 = 46;
    *v9++ = v11;
  }
  if ( v4 <= 15 )
    goto LABEL_11;
LABEL_19:
  *(_WORD *)&v15[v14 + v4] = 124;
  __printf_chk(1, "%s\n", v15);
  return __readgsdword(0x14u) ^ v17;
}
// 80484B0: using guessed type int __printf_chk(_DWORD, const char *, ...);
// 80484E0: using guessed type int __cdecl __strcat_chk(_DWORD, _DWORD, _DWORD);
// 8048520: using guessed type int __sprintf_chk(_DWORD, _DWORD, _DWORD, const char *, ...);
// 8048600: using guessed type char var_6C[9];

//----- (080487AF) --------------------------------------------------------
int __cdecl hexdump(char *filename)
{
  unsigned int i; // esi
  int v3; // eax
  int v4; // ebx
  FILE *stream; // [esp+1Ch] [ebp-8Ch]
  struct stat stat_buf; // [esp+24h] [ebp-84h] BYREF
  char ptr[16]; // [esp+7Ch] [ebp-2Ch] BYREF
  unsigned int v8; // [esp+8Ch] [ebp-1Ch]

  v8 = __readgsdword(0x14u);
  if ( __xstat(3, filename, &stat_buf) || (stream = fopen(filename, "rb")) == 0 )
  {
    perror(filename);
    return 1;
  }
  else
  {
    for ( i = 0; stat_buf.st_size > i; i += v4 )
    {
      v3 = fread(ptr, 1u, 0x10u, stream);
      v4 = v3;
      if ( !v3 )
        break;
      dumpline((int)ptr, i, v3);
    }
    fclose(stream);
    return 0;
  }
}

//----- (080488A0) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v3; // ebx
  int i; // edi

  v3 = 1;
  for ( i = 0; argc > v3; ++v3 )
    i += hexdump((char *)argv[v3]);
  return i;
}

// nfuncs=35 queued=4 decompiled=4 lumina nreq=0 worse=0 better=0
// ALL OK, 4 function(s) have been successfully decompiled
