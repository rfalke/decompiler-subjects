typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
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
  int unaff_retaddr;
  
  for (plVar2 = (long *)(&stack0x00000008 + (uint)((unaff_retaddr + 1) * 8)); *plVar2 != 0;
      plVar2 = plVar2 + 1) {
  }
  iVar1 = _main();
                    // WARNING: Subroutine does not return
  _exit(iVar1);
}



// WARNING: Removing unreachable block (ram,0x000100000b2e)
// WARNING: Removing unreachable block (ram,0x000100000c02)

void _dumpline(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  size_t sVar3;
  char local_8d;
  int local_8c;
  int local_6c;
  char local_68 [9];
  undefined auStack_5f [79];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_100001010;
  ___sprintf_chk(local_68,0,0x50,"%08lX:",param_2);
  local_8c = param_3;
  if (0x10 < param_3) {
    local_8c = 0x10;
  }
  for (local_6c = 0; local_6c < local_8c; local_6c = local_6c + 1) {
    ___sprintf_chk(auStack_5f + local_6c * 3,0,0xffffffffffffffff," %02lX",
                   *(undefined *)(local_6c + param_1));
  }
  while (bVar2 = local_6c < 0x10, local_6c = local_6c + 1, bVar2) {
    ___strcat_chk(local_68,"   ",0x50);
  }
  sVar3 = _strlen(local_68);
  ___inline_strcpy_chk(local_68 + (int)sVar3,"  |");
  iVar1 = (int)sVar3 + 3;
  for (local_6c = 0; local_6c < local_8c; local_6c = local_6c + 1) {
    if ((*(byte *)(local_6c + param_1) < 0x20) || (0x7e < *(byte *)(local_6c + param_1))) {
      local_8d = '.';
    }
    else {
      local_8d = *(char *)(local_6c + param_1);
    }
    local_68[iVar1 + local_6c] = local_8d;
  }
  for (; local_6c < 0x10; local_6c = local_6c + 1) {
    local_68[iVar1 + local_6c] = ' ';
  }
  ___inline_strcpy_chk(local_68 + (long)local_6c + (long)iVar1,"|");
  _puts(local_68);
  if (local_10 != *(long *)PTR____stack_chk_guard_100001010) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



void ___inline_strcpy_chk(undefined8 param_1,undefined8 param_2)

{
  ___strcpy_chk(param_1,param_2,0xffffffffffffffff);
  return;
}



undefined4 _hexdump(char *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 local_e4;
  undefined local_d8 [96];
  ulong local_78;
  FILE *local_40;
  ulong local_38;
  int local_2c;
  undefined local_28 [24];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_100001010;
  iVar1 = _stat_INODE64(param_1,local_d8,0);
  if (iVar1 == 0) {
    local_40 = _fopen(param_1,"rb");
    if (local_40 == (FILE *)0x0) {
      _perror(param_1);
      local_e4 = 1;
    }
    else {
      for (local_38 = 0; local_38 < local_78; local_38 = local_38 + (long)local_2c) {
        sVar2 = _fread(local_28,1,0x10,local_40);
        local_2c = (int)sVar2;
        if (local_2c == 0) break;
        _dumpline(local_28,local_38,sVar2 & 0xffffffff);
      }
      _fclose(local_40);
      local_e4 = 0;
    }
  }
  else {
    _perror(param_1);
    local_e4 = 1;
  }
  if (local_10 != *(long *)PTR____stack_chk_guard_100001010) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_e4;
}



int _main(int param_1,long param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  for (local_c = 1; local_c < param_1; local_c = local_c + 1) {
    iVar1 = _hexdump(*(undefined8 *)((long)local_c * 8 + param_2));
    local_10 = local_10 + iVar1;
  }
  return local_10;
}



void ___sprintf_chk(void)

{
  (*(code *)PTR____sprintf_chk_100001018)();
  return;
}



void ___stack_chk_fail(void)

{
  (*(code *)PTR____stack_chk_fail_100001020)();
  return;
}



void ___strcat_chk(void)

{
  (*(code *)PTR____strcat_chk_100001028)();
  return;
}



void ___strcpy_chk(void)

{
  (*(code *)PTR____strcpy_chk_100001030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
  (*(code *)PTR__exit_100001038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR__fclose_100001040)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100001048)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR__fread_100001050)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
  (*(code *)PTR__perror_100001058)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR__puts_100001060)();
  return iVar1;
}



void _stat_INODE64(void)

{
  (*(code *)PTR__stat_INODE64_100001068)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR__strlen_100001070)();
  return sVar1;
}


