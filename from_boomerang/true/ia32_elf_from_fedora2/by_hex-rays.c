/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>

#include <stdarg.h>


//-------------------------------------------------------------------------
// Function declarations

// int __usercall init_proc@<eax>(int@<eax>);
int sub_8048790();
// size_t __fpending(FILE *fp);
// int __overflow(_IO_FILE *, int);
// int __cdecl fputs_unlocked(_DWORD, _DWORD); weak
// int fprintf(FILE *stream, const char *format, ...);
// char *getenv(const char *name);
// char *dcgettext(const char *domainname, const char *msgid, int category);
// char *setlocale(int category, const char *locale);
// int __cdecl __cxa_atexit(void (__cdecl *lpfunc)(void *), void *obj, void *lpdso_handle);
// int *__errno_location(void);
// void *malloc(size_t size);
// void abort(void);
// int vfprintf(FILE *s, const char *format, __gnuc_va_list arg);
// char *bindtextdomain(const char *domainname, const char *dirname);
// size_t strlen(const char *s);
// size_t mbrtowc(wchar_t *pwc, const char *s, size_t n, mbstate_t *p);
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// void *realloc(void *ptr, size_t size);
// char *textdomain(const char *domainname);
// int printf(const char *format, ...);
// int fclose(FILE *stream);
// size_t __ctype_get_mb_cur_max(void);
// void exit(int status);
// int iswprint(wint_t wc);
// void free(void *ptr);
// void *memset(void *s, int c, size_t n);
// int mbsinit(const mbstate_t *ps);
// void error(int status, int errnum, const char *format, ...);
// const unsigned __int16 **__ctype_b_loc(void);
// void __usercall __noreturn start(int@<eax>, void (*)(void)@<edx>);
// void *__usercall sub_80489A4@<eax>(int@<eax>);
void sub_80489C8();
int sub_8048A04();
void __cdecl __noreturn sub_8048A30(int status); // idb
void __cdecl __noreturn main(int a1, char **a2);
void __cdecl func();
int __cdecl sub_8048DB0(int, unsigned __int8, char);
char *__cdecl sub_8048E10(char *msgid, int a2);
unsigned int __cdecl sub_8048E50(int, int, char *s, int, int, int);
unsigned int __cdecl sub_8049490(int, int, char *s, int, int);
void *__cdecl sub_80494F0(int, char *s, int, int);
void *__cdecl sub_8049660(int, char *s);
// _DWORD *__userpurge sub_80496B0@<eax>(_DWORD *, int);
void *__cdecl sub_8049720(int, int, char *s);
void *__cdecl sub_80497F0(char *s, char);
void *__cdecl sub_8049890(char *s);
int __cdecl sub_80498B0(FILE *stream, int, int, int, __gnuc_va_list __varargs); // idb
int sub_8049AC0(FILE *stream, int, int, int, ...); // idb
void __noreturn sub_8049B00();
void *__cdecl sub_8049BA0(size_t size);
void *__cdecl sub_8049C20(void *ptr, size_t size);
void __cdecl sub_8049DF0(void *ptr);
// void __usercall init(int a1@<eax>);
void fini(void); // idb
int __cdecl sub_8049E90(void (__cdecl *lpfunc)(void *)); // idb
int __fastcall sub_8049EC0(int, int);
// void term_proc();

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN unk_804A079; // weak
int dword_804B648 = -1; // weak
int dword_804B658 = 0; // weak
int (*dword_804B734)(void) = NULL; // weak
_DWORD dword_804B7B4 = 0; // weak
int *off_804B7B8 = &dword_804B654; // weak
int status = 1; // idb
int dword_804B7C0 = 1; // weak
int dword_804B7C4 = 256; // weak
void *off_804B7C8 = &unk_804B800; // weak
void *ptr = &dword_804B7C4; // idb
char *off_804B7D0 = "Copyright (C) 2004 Free Software Foundation, Inc."; // weak
FILE *stdout; // idb
char byte_804B7E4; // weak
char *s; // idb
_UNKNOWN unk_804B800; // weak
int dword_804B900; // weak
int dword_804B904[]; // weak
int dword_804B908; // weak
int dword_804B90C; // weak
int dword_804B910; // weak
int dword_804B914; // weak
int dword_804B918; // weak
int dword_804B91C; // weak
int dword_804B920; // weak
int (*dword_804B924)(void); // weak
int dword_804B928; // weak
// extern _UNKNOWN _gmon_start__; weak


//----- (08048790) --------------------------------------------------------
int sub_8048790()
{
  return dword_804B734();
}
// 804B734: using guessed type int (*dword_804B734)(void);

//----- (08048980) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>)
{
  int v2; // esi
  int v3; // [esp-4h] [ebp-4h] BYREF
  char *retaddr; // [esp+0h] [ebp+0h] BYREF

  v2 = v3;
  v3 = a1;
  __libc_start_main((int (__cdecl *)(int, char **, char **))main, v2, &retaddr, (void (*)(void))init, fini, a2, &v3);
  __halt();
}
// 8048983: positive sp value 4 has been found

//----- (080489A4) --------------------------------------------------------
void *__usercall sub_80489A4@<eax>(int a1@<eax>)
{
  void *result; // eax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (void *)((int (__cdecl *)(int))_gmon_start__)(a1);
  return result;
}

//----- (080489C8) --------------------------------------------------------
void sub_80489C8()
{
  int *v0; // eax
  void (*i)(void); // edx

  if ( !byte_804B7E4 )
  {
    v0 = off_804B7B8;
    for ( i = (void (*)(void))*off_804B7B8; *off_804B7B8; i = (void (*)(void))*off_804B7B8 )
    {
      off_804B7B8 = v0 + 1;
      i();
      v0 = off_804B7B8;
    }
    byte_804B7E4 = 1;
  }
}
// 804B7B8: using guessed type int *off_804B7B8;
// 804B7E4: using guessed type char byte_804B7E4;

//----- (08048A04) --------------------------------------------------------
int sub_8048A04()
{
  int result; // eax

  result = dword_804B658;
  if ( dword_804B658 )
    return 0;
  return result;
}
// 804B658: using guessed type int dword_804B658;

//----- (08048A30) --------------------------------------------------------
void __cdecl __noreturn sub_8048A30(int status)
{
  char *v1; // eax
  char *v2; // eax
  char *v3; // eax
  char *v4; // eax

  v1 = dcgettext(
         0,
         "Usage: %s [ignored command line arguments]\n"
         "  or:  %s OPTION\n"
         "Exit with a status code indicating success.\n"
         "\n"
         "These option names may not be abbreviated.\n"
         "\n",
         5);
  printf(v1, dword_804B928, dword_804B928);
  v2 = dcgettext(0, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v2, stdout);
  v3 = dcgettext(0, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v3, stdout);
  v4 = dcgettext(0, "\nReport bugs to <%s>.\n", 5);
  printf(v4, "bug-coreutils@gnu.org");
  exit(status);
}
// 80487C0: using guessed type int __cdecl fputs_unlocked(_DWORD, _DWORD);
// 804B928: using guessed type int dword_804B928;

//----- (08048B10) --------------------------------------------------------
void __cdecl __noreturn main(int a1, char **a2)
{
  dword_804B928 = (int)*a2;
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/share/locale");
  textdomain("coreutils");
  sub_8049E90((void (__cdecl *)(void *))func);
  if ( a1 == 2 && !getenv("POSIXLY_CORRECT") )
  {
    if ( !strcmp(a2[1], "--help") )
      sub_8048A30(0);
    if ( !strcmp(a2[1], "--version") )
      sub_8049AC0(stdout, (int)"true", (int)&unk_804A079, (int)"5.2.1", "Jim Meyering", 0);
  }
  exit(0);
}
// 804B928: using guessed type int dword_804B928;

//----- (08048C20) --------------------------------------------------------
void __cdecl func()
{
  FILE *v0; // edx
  int v1; // ebx
  char *v2; // esi
  const char *v3; // eax

  v0 = stdout;
  v1 = ((stdout->_flags & 0x20) != 0) - 1;
  if ( (stdout->_flags & 0x20) == 0 )
  {
    if ( !__fpending(stdout) )
      return;
    v0 = stdout;
  }
  if ( fclose(v0) )
    v1 = *__errno_location();
  if ( v1 >= 0 )
  {
    v2 = dcgettext(0, "write error", 5);
    if ( s )
    {
      v3 = (const char *)sub_8049890(s);
      error(status, v1, "%s: %s", v3, v2);
    }
    else
    {
      error(status, v1, "%s", v2);
    }
  }
}

//----- (08048DB0) --------------------------------------------------------
int __cdecl sub_8048DB0(int a1, unsigned __int8 a2, char a3)
{
  int v3; // edx
  int *v4; // esi
  int result; // eax

  v3 = a2 >> 5;
  v4 = (int *)(v3 * 4 + a1 + 4);
  if ( !a1 )
    v4 = &dword_804B904[v3];
  result = (*v4 >> (a2 & 0x1F)) & 1;
  *v4 ^= (result ^ a3 & 1) << (a2 & 0x1F);
  return result;
}
// 804B904: using guessed type int dword_804B904[];

//----- (08048E10) --------------------------------------------------------
char *__cdecl sub_8048E10(char *msgid, int a2)
{
  char *result; // eax

  result = dcgettext(0, msgid, 5);
  if ( result == msgid && a2 == 6 )
    return "\"";
  return result;
}

//----- (08048E50) --------------------------------------------------------
unsigned int __cdecl sub_8048E50(int a1, int a2, char *s, int a4, int a5, int a6)
{
  int v7; // edx
  char v8; // al
  char v10; // cl
  unsigned int v11; // ecx
  size_t v12; // eax
  char k; // al
  char *i; // edx
  int j; // [esp+28h] [ebp-60h]
  unsigned int v16; // [esp+2Ch] [ebp-5Ch]
  unsigned __int8 v17; // [esp+30h] [ebp-58h]
  _BOOL4 v18; // [esp+4Ch] [ebp-3Ch]
  int v19; // [esp+50h] [ebp-38h]
  unsigned int v20; // [esp+54h] [ebp-34h]
  const char *v21; // [esp+58h] [ebp-30h]
  char *v22; // [esp+58h] [ebp-30h]
  unsigned int v23; // [esp+5Ch] [ebp-2Ch]
  unsigned int v24; // [esp+5Ch] [ebp-2Ch]
  unsigned int v25; // [esp+5Ch] [ebp-2Ch]
  unsigned int v26; // [esp+5Ch] [ebp-2Ch]
  unsigned int v27; // [esp+5Ch] [ebp-2Ch]
  unsigned int v28; // [esp+5Ch] [ebp-2Ch]
  unsigned int v29; // [esp+5Ch] [ebp-2Ch]
  unsigned int v30; // [esp+5Ch] [ebp-2Ch]
  int v31; // [esp+60h] [ebp-28h]
  wchar_t pwc; // [esp+64h] [ebp-24h] BYREF
  mbstate_t p; // [esp+68h] [ebp-20h] BYREF

  v23 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = __ctype_get_mb_cur_max() == 1;
  switch ( a5 )
  {
    case 2:
      if ( a2 )
        *(_BYTE *)a1 = 39;
      v23 = 1;
      v21 = "'";
      goto LABEL_5;
    case 3:
      if ( a2 )
        *(_BYTE *)a1 = 34;
      v23 = 1;
      v19 = 1;
      v21 = "\"";
LABEL_5:
      v20 = 1;
      break;
    case 4:
      v19 = 1;
      break;
    case 5:
    case 6:
      v22 = sub_8048E10("`", a5);
      for ( i = sub_8048E10("'", a5); *v22; ++v23 )
      {
        if ( v23 < a2 )
          *(_BYTE *)(v23 + a1) = *v22;
        ++v22;
      }
      v19 = 1;
      v21 = i;
      v20 = strlen(i);
      break;
    default:
      break;
  }
  v31 = 0;
  while ( !(a4 == -1 ? s[v31] == 0 : v31 == a4) )
  {
    if ( v19 && v20 && v20 + v31 <= a4 && !memcmp(&s[v31], v21, v20) )
    {
      if ( v23 < a2 )
        *(_BYTE *)(v23 + a1) = 92;
      ++v23;
    }
    v17 = s[v31];
    switch ( v17 )
    {
      case 0u:
        v7 = v31 + 1;
        if ( !v19 )
          goto LABEL_31;
        if ( v23 < a2 )
          *(_BYTE *)(v23 + a1) = 92;
        v24 = v23 + 1;
        if ( v24 < a2 )
          *(_BYTE *)(v24 + a1) = 48;
        v25 = v24 + 1;
        if ( v25 < a2 )
          *(_BYTE *)(v25 + a1) = 48;
        v23 = v25 + 1;
        v17 = 48;
        goto LABEL_26;
      case 7u:
        v8 = 97;
        goto LABEL_35;
      case 8u:
        v8 = 98;
        goto LABEL_35;
      case 9u:
        v8 = 116;
        goto LABEL_39;
      case 0xAu:
        v8 = 110;
        goto LABEL_39;
      case 0xBu:
        v8 = 118;
        goto LABEL_35;
      case 0xCu:
        v8 = 102;
        goto LABEL_35;
      case 0xDu:
        v8 = 114;
        goto LABEL_39;
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x24u:
      case 0x26u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Eu:
      case 0x5Bu:
      case 0x5Eu:
      case 0x60u:
      case 0x7Cu:
        goto LABEL_98;
      case 0x23u:
      case 0x7Eu:
        if ( v31 )
          goto LABEL_26;
LABEL_98:
        if ( a5 != 1 )
          goto LABEL_26;
        return sub_8048E50(a1, a2, s, a4, 2, a6);
      case 0x25u:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Du:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x4Fu:
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Du:
      case 0x5Fu:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
      case 0x75u:
      case 0x76u:
      case 0x77u:
      case 0x78u:
      case 0x79u:
      case 0x7Au:
      case 0x7Bu:
      case 0x7Du:
        goto LABEL_26;
      case 0x27u:
        if ( a5 == 1 )
          return sub_8048E50(a1, a2, s, a4, 2, a6);
        if ( a5 == 2 )
        {
          if ( v23 < a2 )
            *(_BYTE *)(v23 + a1) = 39;
          v26 = v23 + 1;
          if ( v26 < a2 )
            *(_BYTE *)(v26 + a1) = 92;
          v27 = v26 + 1;
          if ( v27 < a2 )
            *(_BYTE *)(v27 + a1) = 39;
LABEL_53:
          v23 = v27 + 1;
        }
        goto LABEL_26;
      case 0x3Fu:
        if ( a5 == 1 )
          return sub_8048E50(a1, a2, s, a4, 2, a6);
        if ( a5 == 3 && v31 + 2 < (unsigned int)a4 && s[v31 + 1] == 63 )
        {
          v10 = s[v31 + 2];
          switch ( v10 )
          {
            case '!':
            case '\'':
            case '(':
            case ')':
            case '-':
            case '/':
            case '<':
            case '=':
            case '>':
              v31 += 2;
              v17 = v10;
              if ( v23 < a2 )
                *(_BYTE *)(v23 + a1) = 63;
              v28 = v23 + 1;
              if ( v28 < a2 )
                *(_BYTE *)(v28 + a1) = 92;
              v27 = v28 + 1;
              if ( v27 < a2 )
                *(_BYTE *)(v27 + a1) = 63;
              goto LABEL_53;
            default:
              goto LABEL_26;
          }
        }
        goto LABEL_26;
      case 0x5Cu:
        v8 = s[v31];
LABEL_39:
        if ( a5 == 1 )
          return sub_8048E50(a1, a2, s, a4, 2, a6);
LABEL_35:
        v7 = v31 + 1;
        if ( !v19 )
          goto LABEL_31;
        v17 = v8;
        goto LABEL_28;
      default:
        if ( v18 )
        {
          v16 = 1;
          j = (*__ctype_b_loc())[v17] & 0x4000;
        }
        else
        {
          p.__count = 0;
          p.__wch = 0;
          v16 = 0;
          j = 1;
          if ( a4 == -1 )
            a4 = strlen(s);
          do
          {
            v12 = mbrtowc(&pwc, &s[v16 + v31], a4 - (v16 + v31), &p);
            if ( !v12 )
              break;
            if ( v12 == -1 )
            {
              j = 0;
              break;
            }
            if ( v12 == -2 )
            {
              for ( j = 0; v16 + v31 < a4 && s[v16 + v31]; ++v16 )
                ;
              break;
            }
            v16 += v12;
            j = iswprint(pwc) == 0 ? 0 : j;
          }
          while ( !mbsinit(&p) );
          if ( v16 > 1 )
          {
LABEL_69:
            v11 = v16 + v31;
            while ( 1 )
            {
              if ( v19 && !j )
              {
                if ( v23 < a2 )
                  *(_BYTE *)(v23 + a1) = 92;
                v29 = v23 + 1;
                if ( v29 < a2 )
                  *(_BYTE *)(v29 + a1) = (v17 >> 6) + 48;
                v30 = v29 + 1;
                if ( v30 < a2 )
                  *(_BYTE *)(v30 + a1) = ((v17 >> 3) & 7) + 48;
                v23 = v30 + 1;
                v17 = (v17 & 7) + 48;
              }
              v7 = v31 + 1;
              if ( v11 <= v31 + 1 )
                break;
              if ( v23 < a2 )
                *(_BYTE *)(v23 + a1) = v17;
              ++v23;
              ++v31;
              v17 = s[v7];
            }
            goto LABEL_31;
          }
        }
        v7 = v31 + 1;
        if ( !v19 )
          goto LABEL_31;
        if ( !j )
          goto LABEL_69;
LABEL_26:
        v7 = v31 + 1;
        if ( v19 && ((*(int *)(a6 + 4 * (v17 >> 5) + 4) >> (v17 & 0x1F)) & 1) != 0 )
        {
LABEL_28:
          if ( v23 < a2 )
            *(_BYTE *)(v23 + a1) = 92;
          ++v23;
          v7 = v31 + 1;
        }
LABEL_31:
        if ( v23 < a2 )
          *(_BYTE *)(v23 + a1) = v17;
        ++v23;
        v31 = v7;
        break;
    }
  }
  if ( v21 )
  {
    for ( k = *v21; *v21; k = *v21 )
    {
      if ( v23 < a2 )
        *(_BYTE *)(v23 + a1) = k;
      ++v21;
      ++v23;
    }
  }
  if ( v23 < a2 )
    *(_BYTE *)(v23 + a1) = 0;
  return v23;
}

//----- (08049490) --------------------------------------------------------
unsigned int __cdecl sub_8049490(int a1, int a2, char *s, int a4, int a5)
{
  int *v5; // edi
  int *v6; // eax
  int v7; // esi
  int *v8; // ebx
  unsigned int result; // eax

  v5 = (int *)a5;
  if ( !a5 )
    v5 = &dword_804B900;
  v6 = __errno_location();
  v7 = *v6;
  v8 = v6;
  result = sub_8048E50(a1, a2, s, a4, *v5, (int)v5);
  *v8 = v7;
  return result;
}
// 804B900: using guessed type int dword_804B900;

//----- (080494F0) --------------------------------------------------------
void *__cdecl sub_80494F0(int a1, char *s, int a3, int a4)
{
  int v4; // esi
  int *v5; // ebx
  unsigned int v6; // edi
  void *v7; // esi
  unsigned int v8; // eax
  _DWORD *v9; // ebx
  size_t v10; // edi
  int v12; // eax
  int v13; // [esp+18h] [ebp-10h]

  v13 = *__errno_location();
  if ( a1 < 0 )
    abort();
  if ( dword_804B7C0 <= (unsigned int)a1 )
  {
    v4 = a1 + 1;
    if ( (unsigned int)(a1 + 1) > 0x1FFFFFFF )
      sub_8049B00();
    v5 = (int *)ptr;
    if ( ptr == &dword_804B7C4 )
    {
      ptr = sub_8049BA0(8u);
      v5 = (int *)ptr;
      v12 = dword_804B7C4;
      *((_DWORD *)ptr + 1) = off_804B7C8;
      *v5 = v12;
    }
    ptr = sub_8049C20(v5, 8 * v4);
    memset((char *)ptr + 8 * dword_804B7C0, 0, 8 * (v4 - dword_804B7C0));
    dword_804B7C0 = a1 + 1;
  }
  v6 = *((_DWORD *)ptr + 2 * a1);
  v7 = (void *)*((_DWORD *)ptr + 2 * a1 + 1);
  v8 = sub_8049490((int)v7, v6, s, a3, a4);
  if ( v6 <= v8 )
  {
    v9 = ptr;
    v10 = v8 + 1;
    *((_DWORD *)ptr + 2 * a1) = v8 + 1;
    if ( v7 != &unk_804B800 )
    {
      sub_8049DF0(v7);
      v9 = ptr;
    }
    v7 = sub_8049BA0(v10);
    v9[2 * a1 + 1] = v7;
    sub_8049490((int)v7, v10, s, a3, a4);
  }
  *__errno_location() = v13;
  return v7;
}
// 804B7C0: using guessed type int dword_804B7C0;
// 804B7C4: using guessed type int dword_804B7C4;
// 804B7C8: using guessed type void *off_804B7C8;

//----- (08049660) --------------------------------------------------------
void *__cdecl sub_8049660(int a1, char *s)
{
  return sub_80494F0(a1, s, -1, (int)&dword_804B900);
}
// 804B900: using guessed type int dword_804B900;

//----- (080496B0) --------------------------------------------------------
_DWORD *__userpurge sub_80496B0@<eax>(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v3[8]; // [esp+4h] [ebp-34h] BYREF

  memset(v3, 0, sizeof(v3));
  result = a1;
  *a1 = a2;
  a1[1] = v3[0];
  a1[2] = v3[1];
  a1[3] = v3[2];
  a1[4] = v3[3];
  a1[5] = v3[4];
  a1[6] = v3[5];
  a1[7] = v3[6];
  a1[8] = v3[7];
  return result;
}

//----- (08049720) --------------------------------------------------------
void *__cdecl sub_8049720(int a1, int a2, char *s)
{
  int v4[13]; // [esp+10h] [ebp-38h] BYREF

  sub_80496B0(v4, a2);
  return sub_80494F0(a1, s, -1, (int)v4);
}

//----- (080497F0) --------------------------------------------------------
void *__cdecl sub_80497F0(char *s, char a2)
{
  int v3[13]; // [esp+10h] [ebp-38h] BYREF

  v3[0] = dword_804B900;
  v3[1] = dword_804B904[0];
  v3[2] = dword_804B908;
  v3[3] = dword_804B90C;
  v3[4] = dword_804B910;
  v3[5] = dword_804B914;
  v3[6] = dword_804B918;
  v3[7] = dword_804B91C;
  v3[8] = dword_804B920;
  sub_8048DB0((int)v3, a2, 1);
  return sub_80494F0(0, s, -1, (int)v3);
}
// 804B900: using guessed type int dword_804B900;
// 804B904: using guessed type int dword_804B904[];
// 804B908: using guessed type int dword_804B908;
// 804B90C: using guessed type int dword_804B90C;
// 804B910: using guessed type int dword_804B910;
// 804B914: using guessed type int dword_804B914;
// 804B918: using guessed type int dword_804B918;
// 804B91C: using guessed type int dword_804B91C;
// 804B920: using guessed type int dword_804B920;

//----- (08049890) --------------------------------------------------------
void *__cdecl sub_8049890(char *s)
{
  return sub_80497F0(s, 58);
}

//----- (080498B0) --------------------------------------------------------
int __cdecl sub_80498B0(FILE *stream, int a2, int a3, int a4, __gnuc_va_list __varargs)
{
  int v5; // ebx
  _DWORD *v6; // edx
  const char *v8; // eax
  char *v9; // eax
  char *IO_write_ptr; // eax
  char *v11; // eax
  char *v12; // eax
  int result; // eax

  v5 = 0;
  v6 = (char *)__varargs + 4;
  if ( *(_DWORD *)__varargs )
  {
    do
      ++v5;
    while ( *v6++ );
  }
  if ( a2 )
    fprintf(stream, "%s (%s) %s\n", (const char *)a2, (const char *)a3, (const char *)a4);
  else
    fprintf(stream, "%s %s\n", (const char *)a3, (const char *)a4);
  switch ( v5 )
  {
    case 0:
      abort();
      return result;
    case 1:
      v8 = "Written by %s.\n";
      goto LABEL_8;
    case 2:
      v9 = dcgettext(0, "Written by %s and %s.\n", 5);
      goto LABEL_9;
    case 3:
      v8 = "Written by %s, %s, and %s.\n";
      goto LABEL_8;
    case 4:
      v8 = "Written by %s, %s, %s,\nand %s.\n";
      goto LABEL_8;
    case 5:
      v8 = "Written by %s, %s, %s,\n%s, and %s.\n";
      goto LABEL_8;
    case 6:
      v9 = dcgettext(0, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_9;
    case 7:
      v9 = dcgettext(0, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      goto LABEL_9;
    case 8:
      v8 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n";
      goto LABEL_8;
    case 9:
      v8 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      goto LABEL_8;
    default:
      v8 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
LABEL_8:
      v9 = dcgettext(0, v8, 5);
LABEL_9:
      vfprintf(stream, v9, __varargs);
      IO_write_ptr = stream->_IO_write_ptr;
      if ( IO_write_ptr >= stream->_IO_write_end )
      {
        __overflow(stream, 10);
      }
      else
      {
        *IO_write_ptr = 10;
        ++stream->_IO_write_ptr;
      }
      fputs_unlocked(off_804B7D0, stream);
      v11 = stream->_IO_write_ptr;
      if ( v11 >= stream->_IO_write_end )
      {
        __overflow(stream, 10);
      }
      else
      {
        *v11 = 10;
        ++stream->_IO_write_ptr;
      }
      v12 = dcgettext(
              0,
              "This is free software; see the source for copying conditions.  There is NO\n"
              "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n",
              5);
      return fputs_unlocked(v12, stream);
  }
}
// 80487C0: using guessed type int __cdecl fputs_unlocked(_DWORD, _DWORD);
// 804B7D0: using guessed type char *off_804B7D0;

//----- (08049AC0) --------------------------------------------------------
int sub_8049AC0(FILE *stream, int a2, int a3, int a4, ...)
{
  va_list __varargs; // [esp+30h] [ebp+18h] BYREF

  va_start(__varargs, a4);
  return sub_80498B0(stream, a2, a3, a4, __varargs);
}

//----- (08049B00) --------------------------------------------------------
void __noreturn sub_8049B00()
{
  char *v0; // eax

  if ( dword_804B924 )
    dword_804B924();
  v0 = dcgettext(0, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}
// 804B924: using guessed type int (*dword_804B924)(void);

//----- (08049BA0) --------------------------------------------------------
void *__cdecl sub_8049BA0(size_t size)
{
  void *result; // eax

  result = malloc(size);
  if ( !result )
    sub_8049B00();
  return result;
}

//----- (08049C20) --------------------------------------------------------
void *__cdecl sub_8049C20(void *ptr, size_t size)
{
  void *result; // eax

  result = realloc(ptr, size);
  if ( !result )
    sub_8049B00();
  return result;
}

//----- (08049DF0) --------------------------------------------------------
void __cdecl sub_8049DF0(void *ptr)
{
  if ( ptr )
    free(ptr);
}

//----- (08049E04) --------------------------------------------------------
void __usercall init(int a1@<eax>)
{
  init_proc(a1);
}

//----- (08049E4C) --------------------------------------------------------
void fini(void)
{
  term_proc();
}

//----- (08049E90) --------------------------------------------------------
int __cdecl sub_8049E90(void (__cdecl *lpfunc)(void *))
{
  void *v1; // edx

  v1 = 0;
  if ( &dword_804B7B4 )
    v1 = (void *)dword_804B7B4;
  return __cxa_atexit(lpfunc, 0, v1);
}
// 804B7B4: using guessed type _DWORD dword_804B7B4;

//----- (08049EC0) --------------------------------------------------------
int __fastcall sub_8049EC0(int a1, int a2)
{
  void (__fastcall *v2)(int); // eax
  int *v3; // ebx

  v2 = (void (__fastcall *)(int))dword_804B648;
  v3 = &dword_804B648;
  if ( dword_804B648 != -1 )
  {
    do
    {
      --v3;
      v2(a1);
      v2 = (void (__fastcall *)(int))*v3;
    }
    while ( *v3 != -1 );
  }
  return a2;
}
// 8049ED7: variable 'a1' is possibly undefined
// 804B648: using guessed type int dword_804B648;

// nfuncs=90 queued=28 decompiled=28 lumina nreq=0 worse=0 better=0
// ALL OK, 28 function(s) have been successfully decompiled
