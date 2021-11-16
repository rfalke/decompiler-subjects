/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_8048410();
// int printf(const char *format, ...);
// time_t time(time_t *timer);
// int memcmp(const void *s1, const void *s2, size_t n);
// int fseek(FILE *stream, int off, int whence);
// size_t fwrite(const void *ptr, size_t size, size_t n, FILE *s);
// int puts(const char *s);
// char *strchr(const char *s, int c);
// FILE *fopen(const char *filename, const char *modes);
// int putchar(int c);
// int chmod(const char *file, __mode_t mode);
int __cdecl main(int argc, const char **argv, const char **envp);
int basic_1_string_literals_quoting();
int basic_2_string_literals_low_chars();
int basic_3_string_literals_high_chars();
int basic_4_readonly_vs_modifiable();
int __cdecl basic_10_result_var_name(int);
int __cdecl intermediate_1_for_loop_name(int);
int __cdecl intermediate_2_parameter_names(int);
int __cdecl intermediate_10_int_literal_in_bit_context(int);
int __cdecl intermediate_11_int_literal_in_arithm_context(int);
int __cdecl advanced_1_null_bytes_with_fixed_length(FILE *s); // idb
int __cdecl advanced_2_naming_enums(FILE *stream); // idb
int __cdecl advanced_10_int_literal_in_char_context(char *s); // idb
int advanced_11_printf_type_related();

//-------------------------------------------------------------------------
// Data declarations

const char aHex0x01Dec1Cha[20] = "hex=0x01 dec=1 char="; // idb
const char aHex0x02Dec2Cha[20] = "hex=0x02 dec=2 char="; // idb
const char aHex0x03Dec3Cha[20] = "hex=0x03 dec=3 char="; // idb
const char aHex0x04Dec4Cha[20] = "hex=0x04 dec=4 char="; // idb
const char aHex0x05Dec5Cha[20] = "hex=0x05 dec=5 char="; // idb
const char aHex0x06Dec6Cha[20] = "hex=0x06 dec=6 char="; // idb
const char aHex0x0cDec12Ch[21] = "hex=0x0c dec=12 char="; // idb
const char aHex0x0eDec14Ch[21] = "hex=0x0e dec=14 char="; // idb
const char aHex0x0fDec15Ch[21] = "hex=0x0f dec=15 char="; // idb
const char aHex0x10Dec16Ch[21] = "hex=0x10 dec=16 char="; // idb
const char aHex0x11Dec17Ch[21] = "hex=0x11 dec=17 char="; // idb
const char aHex0x12Dec18Ch[21] = "hex=0x12 dec=18 char="; // idb
const char aHex0x13Dec19Ch[21] = "hex=0x13 dec=19 char="; // idb
const char aHex0x14Dec20Ch[21] = "hex=0x14 dec=20 char="; // idb
const char aHex0x15Dec21Ch[21] = "hex=0x15 dec=21 char="; // idb
const char aHex0x16Dec22Ch[21] = "hex=0x16 dec=22 char="; // idb
const char aHex0x17Dec23Ch[21] = "hex=0x17 dec=23 char="; // idb
const char aHex0x18Dec24Ch[21] = "hex=0x18 dec=24 char="; // idb
const char aHex0x19Dec25Ch[21] = "hex=0x19 dec=25 char="; // idb
const char aHex0x1aDec26Ch[21] = "hex=0x1a dec=26 char="; // idb
const char aHex0x1cDec28Ch[21] = "hex=0x1c dec=28 char="; // idb
const char aHex0x1dDec29Ch[21] = "hex=0x1d dec=29 char="; // idb
const char aHex0x1eDec30Ch[21] = "hex=0x1e dec=30 char="; // idb
const char aHex0x1fDec31Ch[21] = "hex=0x1f dec=31 char="; // idb
const char aHex0xf0Dec240C[22] = "hex=0xf0 dec=240 char="; // idb
const char aHex0xf1Dec241C[22] = "hex=0xf1 dec=241 char="; // idb
const char aHex0xf2Dec242C[22] = "hex=0xf2 dec=242 char="; // idb
const char aHex0xf3Dec243C[22] = "hex=0xf3 dec=243 char="; // idb
const char aHex0xf4Dec244C[22] = "hex=0xf4 dec=244 char="; // idb
const char aHex0xf5Dec245C[22] = "hex=0xf5 dec=245 char="; // idb
const char aHex0xf6Dec246C[22] = "hex=0xf6 dec=246 char="; // idb
const char aHex0xf7Dec247C[22] = "hex=0xf7 dec=247 char="; // idb
const char aHex0xf8Dec248C[22] = "hex=0xf8 dec=248 char="; // idb
const char aHex0xf9Dec249C[22] = "hex=0xf9 dec=249 char="; // idb
const char aHex0xfaDec250C[22] = "hex=0xfa dec=250 char="; // idb
const char aHex0xfbDec251C[22] = "hex=0xfb dec=251 char="; // idb
const char aHex0xfcDec252C[22] = "hex=0xfc dec=252 char="; // idb
const char aHex0xfdDec253C[22] = "hex=0xfd dec=253 char="; // idb
const char aHex0xfeDec254C[22] = "hex=0xfe dec=254 char="; // idb
const char aHex0xffDec255C[22] = "hex=0xff dec=255 char="; // idb
int (*dword_804B008)(void) = NULL; // weak
char a_modifiable_string[] = "a modifiable string"; // idb


//----- (08048410) --------------------------------------------------------
int sub_8048410()
{
  return dword_804B008();
}
// 804B008: using guessed type int (*dword_804B008)(void);

//----- (080484E0) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  basic_1_string_literals_quoting();
  basic_2_string_literals_low_chars();
  basic_3_string_literals_high_chars();
  basic_4_readonly_vs_modifiable();
  basic_10_result_var_name(argc);
  intermediate_1_for_loop_name(argc);
  intermediate_2_parameter_names(argc);
  intermediate_10_int_literal_in_bit_context(argc);
  intermediate_11_int_literal_in_arithm_context(argc);
  advanced_1_null_bytes_with_fixed_length(0);
  advanced_2_naming_enums(0);
  advanced_10_int_literal_in_char_context((char *)*argv);
  advanced_11_printf_type_related();
  return **argv;
}

//----- (08048660) --------------------------------------------------------
int basic_1_string_literals_quoting()
{
  puts("with ' single quote");
  puts("with \" double quote");
  return 0;
}

//----- (08048680) --------------------------------------------------------
int basic_2_string_literals_low_chars()
{
  puts(aHex0x01Dec1Cha);
  puts(aHex0x02Dec2Cha);
  puts(aHex0x03Dec3Cha);
  puts(aHex0x04Dec4Cha);
  puts(aHex0x05Dec5Cha);
  puts(aHex0x06Dec6Cha);
  puts("hex=0x07 dec=7 char=\aFINI");
  puts("hex=0x08 dec=8 char=\bFINI");
  puts("hex=0x09 dec=9 char=\tFINI");
  puts("hex=0x0a dec=10 char=\nFINI");
  puts("hex=0x0b dec=11 char=\vFINI");
  puts(aHex0x0cDec12Ch);
  puts("hex=0x0d dec=13 char=\rFINI");
  puts(aHex0x0eDec14Ch);
  puts(aHex0x0fDec15Ch);
  puts(aHex0x10Dec16Ch);
  puts(aHex0x11Dec17Ch);
  puts(aHex0x12Dec18Ch);
  puts(aHex0x13Dec19Ch);
  puts(aHex0x14Dec20Ch);
  puts(aHex0x15Dec21Ch);
  puts(aHex0x16Dec22Ch);
  puts(aHex0x17Dec23Ch);
  puts(aHex0x18Dec24Ch);
  puts(aHex0x19Dec25Ch);
  puts(aHex0x1aDec26Ch);
  puts("hex=0x1b dec=27 char=\x1BFINI");
  puts(aHex0x1cDec28Ch);
  puts(aHex0x1dDec29Ch);
  puts(aHex0x1eDec30Ch);
  puts(aHex0x1fDec31Ch);
  return 0;
}

//----- (08048800) --------------------------------------------------------
int basic_3_string_literals_high_chars()
{
  puts(aHex0xf0Dec240C);
  puts(aHex0xf1Dec241C);
  puts(aHex0xf2Dec242C);
  puts(aHex0xf3Dec243C);
  puts(aHex0xf4Dec244C);
  puts(aHex0xf5Dec245C);
  puts(aHex0xf6Dec246C);
  puts(aHex0xf7Dec247C);
  puts(aHex0xf8Dec248C);
  puts(aHex0xf9Dec249C);
  puts(aHex0xfaDec250C);
  puts(aHex0xfbDec251C);
  puts(aHex0xfcDec252C);
  puts(aHex0xfdDec253C);
  puts(aHex0xfeDec254C);
  puts(aHex0xffDec255C);
  return 0;
}

//----- (080488D0) --------------------------------------------------------
int basic_4_readonly_vs_modifiable()
{
  puts("a read only string");
  puts(a_modifiable_string);
  return 0;
}

//----- (080488F0) --------------------------------------------------------
int __cdecl basic_10_result_var_name(int a1)
{
  if ( a1 <= 5 )
    return time(0) + 10;
  else
    return 4 * a1;
}

//----- (08048920) --------------------------------------------------------
int __cdecl intermediate_1_for_loop_name(int a1)
{
  int v1; // ebx
  int v3; // [esp-10h] [ebp-1Ch]

  if ( a1 > 0 )
  {
    v1 = 48;
    do
    {
      v3 = v1++;
      putchar(v3);
    }
    while ( v1 != a1 + 48 );
  }
  return 0;
}

//----- (08048960) --------------------------------------------------------
int __cdecl intermediate_2_parameter_names(int a1)
{
  const char *v1; // eax
  const char *v2; // edx

  if ( a1 == 1 )
  {
    v2 = "/is/a/1";
    v1 = "r";
  }
  else
  {
    v1 = "r";
    v2 = "/is/something/else";
    if ( a1 < 0 )
      v1 = "w";
  }
  if ( !fopen(v2, v1) )
    puts("failed");
  return 0;
}

//----- (080489D0) --------------------------------------------------------
int __cdecl intermediate_10_int_literal_in_bit_context(int a1)
{
  putchar(a1 & 0xF0F0);
  putchar(a1 | 0xFF0000);
  putchar(a1 ^ 3);
  putchar(a1 & 0x2A);
  putchar(a1 | 0x3E7);
  putchar(a1 ^ 0x12D591);
  return 0;
}

//----- (08048A40) --------------------------------------------------------
int __cdecl intermediate_11_int_literal_in_arithm_context(int a1)
{
  putchar(a1 + 61680);
  putchar(a1 - 16711680);
  putchar(3 * a1);
  putchar(a1 + 42);
  putchar(a1 - 999);
  putchar(1234321 * a1);
  return 0;
}

//----- (08048AA0) --------------------------------------------------------
int __cdecl advanced_1_null_bytes_with_fixed_length(FILE *s)
{
  fwrite("with null byte ", 0x11u, 1u, s);
  fwrite("with null byte ", 1u, 0x11u, s);
  return memcmp(s, "with null byte ", 0x11u);
}

//----- (08048AE0) --------------------------------------------------------
int __cdecl advanced_2_naming_enums(FILE *stream)
{
  int v1; // ebx
  int v2; // ebx
  int v3; // ebx

  v1 = fseek(stream, 0, 0);
  v2 = fseek(stream, 0, 1) + v1;
  v3 = fseek(stream, 0, 2) + v2;
  if ( v3 + chmod("/some/path", 0x24u) > 4 )
    puts("something");
  return 0;
}

//----- (08048B50) --------------------------------------------------------
int __cdecl advanced_10_int_literal_in_char_context(char *s)
{
  char v2[15]; // [esp+19h] [ebp-Fh] BYREF

  putchar(49);
  if ( strchr(s, 49) )
    puts("contains a '1'");
  strcpy(v2, "a1");
  puts(v2);
  return 0;
}

//----- (08048BA0) --------------------------------------------------------
int advanced_11_printf_type_related()
{
  printf("as char %c\n", 48);
  printf("as int %d\n", 48);
  printf("as pointer %p\n", (const void *)0x30);
  printf("as octal %o\n", 48);
  printf("as hex %x\n", 48);
  printf("as unsigned %u\n", -1);
  printf("as signed %d\n", -1);
  return 0;
}

// nfuncs=49 queued=15 decompiled=15 lumina nreq=0 worse=0 better=0
// ALL OK, 15 function(s) have been successfully decompiled
