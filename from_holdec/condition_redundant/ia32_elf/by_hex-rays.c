/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int sub_80482D0();
// int puts(const char *s);
int __cdecl main(int argc, const char **argv, const char **envp);

//-------------------------------------------------------------------------
// Data declarations

int (*dword_804A008)(void) = NULL; // weak


//----- (080482D0) --------------------------------------------------------
int sub_80482D0()
{
  return dword_804A008();
}
// 804A008: using guessed type int (*dword_804A008)(void);

//----- (0804840B) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  if ( argv && argc == 2 || argv && argc == 42 )
    puts("Should be expressed as argv!=null && (argc==2 || argc==42)");
  if ( argv && argc == 2 || argc == 42 && argv )
    puts("Also if order is different");
  return 0;
}

// nfuncs=18 queued=2 decompiled=2 lumina nreq=0 worse=0 better=0
// ALL OK, 2 function(s) have been successfully decompiled
