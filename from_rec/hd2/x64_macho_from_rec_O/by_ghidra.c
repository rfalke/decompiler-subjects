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
  __symbol_stub1::_exit(iVar1);
}



void _dumpline(byte *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 local_98 [2];
  char acStack143 [79];
  long local_40;
  
  local_40 = *(long *)__nl_symbol_ptr::___stack_chk_guard;
  __symbol_stub1::___sprintf_chk(local_98,0,0x50,"%08lX:");
  iVar5 = 0x10;
  if (param_3 < 0x11) {
    iVar5 = param_3;
  }
  iVar9 = 1;
  if (iVar5 < 1) {
LAB_100000ba4:
    do {
      __symbol_stub1::___strcat_chk(local_98,"   ",0x50);
      bVar2 = iVar9 < 0x10;
      iVar9 = iVar9 + 1;
    } while (bVar2);
    lVar3 = -1;
    puVar8 = local_98;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *(char *)puVar8;
      puVar8 = (undefined4 *)((long)puVar8 + 1);
    } while (cVar1 != '\0');
    iVar9 = ~(uint)lVar3 - 1;
    *(undefined4 *)((long)local_98 + (long)iVar9) = 0x7c2020;
    iVar10 = ~(uint)lVar3 + 2;
    if (0 < iVar5) goto LAB_100000c0a;
    iVar5 = 0;
  }
  else {
    iVar10 = 0;
    iVar9 = 0;
    pbVar6 = param_1;
    do {
      __symbol_stub1::_sprintf(acStack143 + iVar9," %02lX",(ulong)*pbVar6);
      iVar10 = iVar10 + 1;
      pbVar6 = pbVar6 + 1;
      iVar9 = iVar9 + 3;
    } while (iVar10 != iVar5);
    if (iVar5 < 0x10) {
      iVar9 = iVar5 + 1;
      goto LAB_100000ba4;
    }
    lVar3 = -1;
    puVar8 = local_98;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *(char *)puVar8;
      puVar8 = (undefined4 *)((long)puVar8 + 1);
    } while (cVar1 != '\0');
    iVar9 = ~(uint)lVar3 - 1;
    *(undefined4 *)((long)local_98 + (long)iVar9) = 0x7c2020;
    iVar10 = ~(uint)lVar3 + 2;
LAB_100000c0a:
    iVar7 = 0;
    lVar3 = 0;
    do {
      bVar4 = param_1[lVar3];
      if (0x5e < (byte)(bVar4 - 0x20)) {
        bVar4 = 0x2e;
      }
      *(byte *)((long)local_98 + (long)(iVar9 + 3 + (int)lVar3)) = bVar4;
      iVar7 = iVar7 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar7 != iVar5);
    if (0xf < iVar7) goto LAB_100000c99;
  }
  iVar9 = iVar10 + iVar5;
  do {
    *(undefined *)((long)local_98 + (long)iVar9) = 0x20;
    iVar5 = iVar5 + 1;
    iVar9 = iVar9 + 1;
    iVar7 = iVar5;
  } while (iVar5 < 0x10);
LAB_100000c99:
  *(undefined2 *)((long)local_98 + (long)iVar7 + (long)iVar10) = 0x7c;
  __symbol_stub1::_puts((char *)local_98);
  if (local_40 == *(long *)__nl_symbol_ptr::___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __symbol_stub1::___stack_chk_fail();
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
  
  local_30 = *(long *)__nl_symbol_ptr::___stack_chk_guard;
  iVar1 = __symbol_stub1::_stat_INODE64(param_1,local_d8,0);
  if (iVar1 == 0) {
    pFVar3 = __symbol_stub1::_fopen(param_1,"rb");
    if (pFVar3 == (FILE *)0x0) {
      __symbol_stub1::_perror(param_1);
      uVar2 = 1;
    }
    else {
      uVar5 = 0;
      if (local_78 != 0) {
        do {
          sVar4 = __symbol_stub1::_fread(local_48,1,0x10,pFVar3);
          if ((int)sVar4 == 0) break;
          _dumpline(local_48,uVar5,sVar4 & 0xffffffff);
          uVar5 = uVar5 + (long)(int)sVar4;
        } while (uVar5 < local_78);
      }
      __symbol_stub1::_fclose(pFVar3);
      uVar2 = 0;
    }
  }
  else {
    __symbol_stub1::_perror(param_1);
    uVar2 = 1;
  }
  if (local_30 == *(long *)__nl_symbol_ptr::___stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __symbol_stub1::___stack_chk_fail();
}



int _main(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (1 < param_1) {
    iVar2 = 1;
    iVar3 = 0;
    do {
      iVar1 = _hexdump(*(undefined8 *)(param_2 + 8));
      iVar3 = iVar3 + iVar1;
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 8;
    } while (iVar2 != param_1);
  }
  return iVar3;
}



void __symbol_stub1::___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100000e08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___sprintf_chk)();
  return;
}



void __symbol_stub1::___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100000e0e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___stack_chk_fail)();
  return;
}



void __symbol_stub1::___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100000e14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___strcat_chk)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __symbol_stub1::_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100000e1a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_exit)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __symbol_stub1::_fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000e20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_fclose)();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * __symbol_stub1::_fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000e26. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)__la_symbol_ptr::_fopen)();
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t __symbol_stub1::_fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000e2c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)__la_symbol_ptr::_fread)();
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __symbol_stub1::_perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100000e32. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_perror)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __symbol_stub1::_puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000e38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_puts)();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __symbol_stub1::_sprintf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000e3e. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_sprintf)();
  return iVar1;
}



void __symbol_stub1::_stat_INODE64(void)

{
                    // WARNING: Could not recover jumptable at 0x000100000e44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_stat_INODE64)();
  return;
}



void stub_helpers(void)

{
  (*(code *)PTR_dyld_stub_binder_100001000)();
  return;
}



void __stub_helper::___sprintf_chk(void)

{
  stub_helpers();
  return;
}



void __stub_helper::___stack_chk_fail(void)

{
  stub_helpers();
  return;
}



void __stub_helper::___strcat_chk(void)

{
  stub_helpers();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __stub_helper::_exit(int param_1)

{
  stub_helpers();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stub_helper::_fclose(FILE *param_1)

{
  int iVar1;
  
  iVar1 = stub_helpers();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * __stub_helper::_fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)stub_helpers();
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t __stub_helper::_fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
  sVar1 = stub_helpers();
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __stub_helper::_perror(char *param_1)

{
  stub_helpers();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stub_helper::_puts(char *param_1)

{
  int iVar1;
  
  iVar1 = stub_helpers();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stub_helper::_sprintf(char *param_1,char *param_2,...)

{
  int iVar1;
  
  iVar1 = stub_helpers();
  return iVar1;
}



void __stub_helper::_stat_INODE64(void)

{
  stub_helpers();
  return;
}


