typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef struct thread_state_hdr thread_state_hdr, *Pthread_state_hdr;

struct thread_state_hdr {
    dword flavor;
    dword count;
};

typedef struct __program_vars __program_vars, *P__program_vars;

struct __program_vars {
    void * mh; // pointer to __mh_execute_header
    qword * NXArgcPtr; // pointer to argc
    char * * * NXArgvPtr; // pointer to argv
    char * * * environPtr; // pointer to environment
    char * * __prognamePtr; // pointer to program name
};

typedef ulong __darwin_size_t;

typedef __darwin_size_t size_t;

typedef struct __sFILEX __sFILEX, *P__sFILEX;

struct __sFILEX {
};

typedef struct __sbuf __sbuf, *P__sbuf;

struct __sbuf {
    uchar * _base;
    int _size;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef longlong __int64_t;

typedef __int64_t __darwin_off_t;

typedef __darwin_off_t fpos_t;

typedef struct __sFILE FILE;

struct __sFILE {
    uchar * _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void * _cookie;
    int (* _close)(void *);
    int (* _read)(void *, char *, int);
    fpos_t (* _seek)(void *, fpos_t, int);
    int (* _write)(void *, char *, int);
    struct __sbuf _ub;
    struct __sFILEX * _extra;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    fpos_t _offset;
};

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct thread_command thread_command, *Pthread_command;

typedef struct x86_THREAD_STATE64 x86_THREAD_STATE64, *Px86_THREAD_STATE64;

struct x86_THREAD_STATE64 {
    qword rax;
    qword rbx;
    qword cx;
    qword rdx;
    qword rdi;
    qword rsi;
    qword rbp;
    qword rsp;
    qword r8;
    qword r9;
    qword r10;
    qword r11;
    qword r12;
    qword r13;
    qword r14;
    qword r15;
    qword rip;
    qword rflags;
    qword cs;
    qword fs;
    qword gs;
};

struct thread_command {
    dword cmd;
    dword cmdsize;
    struct thread_state_hdr threadStateHeader;
    struct x86_THREAD_STATE64 threadState;
};

typedef struct dyld_info_command dyld_info_command, *Pdyld_info_command;

struct dyld_info_command {
    dword cmd;
    dword cmdsize;
    dword rebase_off;
    dword rebase_size;
    dword bind_off;
    dword bind_size;
    dword weak_bind_off;
    dword weak_bind_size;
    dword lazy_bind_off;
    dword lazy_bind_size;
    dword export_off;
    dword export_size;
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    qword addr;
    qword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
    dword reserved3;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
    dword reserved;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    dword cmd;
    dword cmdsize;
    struct lc_str name;
};




void entry(void)

{
  int iVar1;
  long *plVar2;
  int in_stack_00000000;
  
  plVar2 = (long *)(&stack0x00000008 + (uint)((in_stack_00000000 + 1) * 8));
  while (*plVar2 != 0) {
    plVar2 = plVar2 + 1;
  }
  iVar1 = _main();
                    // WARNING: Subroutine does not return
  _exit(iVar1);
}



void _dumpline(byte *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 local_98 [2];
  char acStack143 [79];
  long local_40;
  
  local_40 = *(long *)___stack_chk_guard;
  ___sprintf_chk(local_98,0,0x50,"%08lX:");
  iVar6 = 0x10;
  if (param_3 < 0x11) {
    iVar6 = param_3;
  }
  iVar10 = 1;
  if (iVar6 < 1) {
LAB_100000ba4:
    do {
      ___strcat_chk(local_98,"   ",0x50);
      bVar2 = iVar10 < 0x10;
      iVar10 = iVar10 + 1;
    } while (bVar2);
    lVar4 = -1;
    puVar9 = local_98;
    do {
      uVar3 = (uint)lVar4;
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      uVar3 = (uint)lVar4;
      cVar1 = *(char *)puVar9;
      puVar9 = (undefined4 *)((long)puVar9 + 1);
    } while (cVar1 != '\0');
    iVar10 = ~uVar3 - 1;
    *(undefined4 *)((long)local_98 + (long)iVar10) = 0x7c2020;
    iVar11 = ~uVar3 + 2;
    if (0 < iVar6) goto LAB_100000c0a;
    iVar6 = 0;
  }
  else {
    iVar11 = 0;
    iVar10 = 0;
    pbVar7 = param_1;
    do {
      _sprintf(acStack143 + iVar10," %02lX",(ulong)*pbVar7);
      iVar11 = iVar11 + 1;
      pbVar7 = pbVar7 + 1;
      iVar10 = iVar10 + 3;
    } while (iVar11 != iVar6);
    if (iVar6 < 0x10) {
      iVar10 = iVar6 + 1;
      goto LAB_100000ba4;
    }
    lVar4 = -1;
    puVar9 = local_98;
    do {
      uVar3 = (uint)lVar4;
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      uVar3 = (uint)lVar4;
      cVar1 = *(char *)puVar9;
      puVar9 = (undefined4 *)((long)puVar9 + 1);
    } while (cVar1 != '\0');
    iVar10 = ~uVar3 - 1;
    *(undefined4 *)((long)local_98 + (long)iVar10) = 0x7c2020;
    iVar11 = ~uVar3 + 2;
LAB_100000c0a:
    iVar8 = 0;
    lVar4 = 0;
    do {
      bVar5 = param_1[lVar4];
      if (0x5e < (byte)(bVar5 - 0x20)) {
        bVar5 = 0x2e;
      }
      *(byte *)((long)local_98 + (long)(iVar10 + 3 + (int)lVar4)) = bVar5;
      iVar8 = iVar8 + 1;
      lVar4 = lVar4 + 1;
    } while (iVar8 != iVar6);
    if (0xf < iVar8) goto LAB_100000c99;
  }
  iVar10 = iVar11 + iVar6;
  do {
    *(undefined *)((long)local_98 + (long)iVar10) = 0x20;
    iVar6 = iVar6 + 1;
    iVar10 = iVar10 + 1;
    iVar8 = iVar6;
  } while (iVar6 < 0x10);
LAB_100000c99:
  *(undefined2 *)((long)local_98 + (long)iVar8 + (long)iVar11) = 0x7c;
  _puts((char *)local_98);
  if (local_40 == *(long *)___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 _hexdump(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  FILE *pFVar3;
  size_t sVar4;
  ulong uVar5;
  undefined local_d8 [96];
  ulong local_78;
  undefined local_48 [24];
  long local_30;
  
  local_30 = *(long *)___stack_chk_guard;
  iVar1 = _stat_INODE64(param_1,local_d8,0);
  if (iVar1 == 0) {
    pFVar3 = _fopen(param_1,"rb");
    if (pFVar3 == (FILE *)0x0) {
      _perror(param_1);
      uVar2 = 1;
    }
    else {
      uVar5 = 0;
      if (local_78 != 0) {
        do {
          sVar4 = _fread(local_48,1,0x10,pFVar3);
          if ((int)sVar4 == 0) break;
          _dumpline(local_48,uVar5,sVar4 & 0xffffffff);
          uVar5 = uVar5 + (long)(int)sVar4;
        } while (uVar5 < local_78);
      }
      _fclose(pFVar3);
      uVar2 = 0;
    }
  }
  else {
    _perror(param_1);
    uVar2 = 1;
  }
  if (local_30 == *(long *)___stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



ulong _main(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (1 < param_1) {
    iVar2 = 1;
    uVar3 = 0;
    do {
      iVar1 = _hexdump(*(undefined8 *)(param_2 + 8));
      uVar3 = uVar3 + iVar1;
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 8;
    } while (iVar2 != param_1);
  }
  return (ulong)uVar3;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100000e08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)___sprintf_chk)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100000e0e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)___stack_chk_fail)();
  return;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100000e14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)___strcat_chk)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100000e1a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_exit)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000e20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)_fclose)();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000e26. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)_fopen)();
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000e2c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)_fread)();
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100000e32. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_perror)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000e38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)_puts)();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _sprintf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000e3e. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)_sprintf)();
  return iVar1;
}



void _stat_INODE64(void)

{
                    // WARNING: Could not recover jumptable at 0x000100000e44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_stat_INODE64)();
  return;
}



void stub_helpers(void)

{
  (*(code *)PTR_dyld_stub_binder_100001000)();
  return;
}



void ___sprintf_chk(void)

{
  stub_helpers();
  return;
}



void ___stack_chk_fail(void)

{
  stub_helpers();
  return;
}



void ___strcat_chk(void)

{
  stub_helpers();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _exit(int param_1)

{
  stub_helpers();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
  iVar1 = stub_helpers();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)stub_helpers();
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
  sVar1 = stub_helpers();
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _perror(char *param_1)

{
  stub_helpers();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
  iVar1 = stub_helpers();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _sprintf(char *param_1,char *param_2,...)

{
  int iVar1;
  
  iVar1 = stub_helpers();
  return iVar1;
}



void _stat_INODE64(void)

{
  stub_helpers();
  return;
}


