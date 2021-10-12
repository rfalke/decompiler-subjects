typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef int    wchar_t;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef uint wint_t;

typedef void * __gnuc_va_list;

typedef struct __mbstate_t __mbstate_t, *P__mbstate_t;

typedef union _union_27 _union_27, *P_union_27;

union _union_27 {
    uint __wch;
    char __wchb[4];
};

struct __mbstate_t {
    int __count;
    union _union_27 __value;
};

typedef struct __mbstate_t mbstate_t;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRENT=1879040003,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELSZ=1610612752,
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_RELRSZ=35,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Gnu_DebugLink Gnu_DebugLink, *PGnu_DebugLink;

struct Gnu_DebugLink {
    char filename[12]; // Debug file name
    dword crc;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




void _DT_INIT(void)

{
  FUN_08048ae4();
  FUN_08048b3c();
  FUN_0804a0d0();
  return;
}



void __fpending(void)

{
  __fpending();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __overflow(_IO_FILE *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __overflow(param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs_unlocked(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs_unlocked(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



void dcgettext(void)

{
  dcgettext();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = setlocale(__category,__locale);
  return pcVar1;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = vfprintf(__s,__format,__arg);
  return iVar1;
}



void bindtextdomain(void)

{
  bindtextdomain();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  size_t sVar1;
  
  sVar1 = mbrtowc(__pwc,__s,__n,__p);
  return sVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



void textdomain(void)

{
  textdomain();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t __ctype_get_mb_cur_max(void)

{
  size_t sVar1;
  
  sVar1 = __ctype_get_mb_cur_max();
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

int iswprint(wint_t __wc)

{
  int iVar1;
  
  iVar1 = iswprint(__wc);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int mbsinit(mbstate_t *__ps)

{
  int iVar1;
  
  iVar1 = mbsinit(__ps);
  return iVar1;
}



void error(void)

{
  error();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



void entry(void)

{
  __libc_start_main(FUN_08048c4a);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 __regparm3 FUN_08048ae4(undefined4 param_1,undefined4 param_2)

{
  __gmon_start__();
  return param_2;
}



void FUN_08048b08(void)

{
  code *pcVar1;
  
  if (DAT_0804ba00 == '\0') {
    while (pcVar1 = *(code **)PTR_DAT_0804b9d4, pcVar1 != (code *)0x0) {
      PTR_DAT_0804b9d4 = PTR_DAT_0804b9d4 + 4;
      (*pcVar1)();
    }
    DAT_0804ba00 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048b54)

void FUN_08048b3c(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08048b68(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)dcgettext(0,
                             "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n"
                             ,5);
  printf(pcVar1,program_name,program_name);
  pcVar1 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar1,stdout);
  pcVar1 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar1,stdout);
  pcVar1 = (char *)dcgettext(0,"\nReport bugs to <%s>.\n",5);
  printf(pcVar1,"bug-coreutils@gnu.org");
                    // WARNING: Subroutine does not return
  exit(param_1);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08048c4a(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined uVar4;
  char *local_1c;
  
  program_name = *param_2;
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/share/locale");
  textdomain("coreutils");
  FUN_0804a0a0(close_stdout);
  if (param_1 == 2) {
    pcVar1 = getenv("POSIXLY_CORRECT");
    uVar4 = pcVar1 == (char *)0x0;
    if ((bool)uVar4) {
      iVar2 = 7;
      local_1c = (char *)param_2[1];
      pcVar1 = local_1c;
      pcVar3 = "--help";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        uVar4 = *pcVar1 == *pcVar3;
        pcVar1 = pcVar1 + 1;
        pcVar3 = pcVar3 + 1;
      } while ((bool)uVar4);
      if ((bool)uVar4) {
        FUN_08048b68(0);
        local_1c = (char *)param_2[1];
      }
      iVar2 = 10;
      pcVar1 = "--version";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        uVar4 = *local_1c == *pcVar1;
        local_1c = local_1c + 1;
        pcVar1 = pcVar1 + 1;
      } while ((bool)uVar4);
      if ((bool)uVar4) {
        FUN_08049ccd(stdout,&DAT_0804a297,"GNU coreutils","5.2.1","Jim Meyering",0);
      }
    }
  }
                    // WARNING: Subroutine does not return
  exit(0);
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void close_stdout(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = -(uint)(((uint)stdout->_flags >> 5 & 1) == 0);
  if ((iVar5 != 0) && (iVar1 = __fpending(stdout), iVar1 == 0)) {
    return;
  }
  iVar1 = fclose(stdout);
  if (iVar1 != 0) {
    piVar4 = __errno_location();
    iVar5 = *piVar4;
  }
  if (-1 < iVar5) {
    uVar2 = dcgettext(0,"write error",5);
    if (DAT_0804ba04 == 0) {
      error(exit_failure,iVar5,"%s",uVar2);
      return;
    }
    uVar3 = FUN_08049a8b(DAT_0804ba04);
    error(exit_failure,iVar5,"%s: %s",uVar3,uVar2);
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 * FUN_08048e70(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)FUN_08049dc5(0x24);
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_0804bb20;
  }
  *puVar3 = *param_1;
  puVar3[1] = param_1[1];
  puVar3[2] = param_1[2];
  puVar3[3] = param_1[3];
  puVar3[4] = param_1[4];
  puVar3[5] = param_1[5];
  puVar3[6] = param_1[6];
  puVar3[7] = param_1[7];
  puVar3[8] = param_1[8];
  *piVar2 = iVar1;
  return puVar3;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08048f36(int param_1,byte param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((uint)(param_2 >> 5) * 4 + 4 + param_1);
  if (param_1 != 0) {
    uVar2 = *puVar1;
    *puVar1 = uVar2 ^ (param_3 & 1 ^ (int)uVar2 >> (param_2 & 0x1f) & 1U) << (param_2 & 0x1f);
    return;
  }
  uVar2 = (&DAT_0804bb24)[param_2 >> 5];
  (&DAT_0804bb24)[param_2 >> 5] =
       uVar2 ^ (param_3 & 1 ^ (int)uVar2 >> (param_2 & 0x1f) & 1U) << (param_2 & 0x1f);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined * __regparm3 FUN_08048fa3(undefined *param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)dcgettext(0,param_1,5);
  if (puVar1 == param_1 && param_2 == 6) {
    puVar1 = &DAT_0804a588;
  }
  return puVar1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x08049350)
// WARNING: Removing unreachable block (ram,0x08049372)
// WARNING: Removing unreachable block (ram,0x0804937a)
// WARNING: Removing unreachable block (ram,0x08049384)
// WARNING: Removing unreachable block (ram,0x080490a8)
// WARNING: Removing unreachable block (ram,0x080490b3)
// WARNING: Removing unreachable block (ram,0x080490c5)
// WARNING: Removing unreachable block (ram,0x080490c7)
// WARNING: Removing unreachable block (ram,0x080490c9)
// WARNING: Removing unreachable block (ram,0x080490d1)
// WARNING: Removing unreachable block (ram,0x080490db)
// WARNING: Removing unreachable block (ram,0x08049185)
// WARNING: Removing unreachable block (ram,0x0804918d)
// WARNING: Removing unreachable block (ram,0x08049197)
// WARNING: Removing unreachable block (ram,0x080491a3)
// WARNING: Removing unreachable block (ram,0x080491b5)
// WARNING: Removing unreachable block (ram,0x080491c1)
// WARNING: Removing unreachable block (ram,0x080491d5)
// WARNING: Removing unreachable block (ram,0x0804924b)
// WARNING: Removing unreachable block (ram,0x08049232)
// WARNING: Removing unreachable block (ram,0x0804923a)
// WARNING: Removing unreachable block (ram,0x08049243)

uint __regparm2 FUN_08048ff6(int param_1_00,uint param_2_00,char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  uint local_60;
  byte local_5c;
  uint local_38;
  uint local_34;
  wint_t local_28;
  mbstate_t local_24 [2];
  undefined4 uStack20;
  
  uStack20 = 0x8049001;
  local_38 = 0;
  sVar2 = __ctype_get_mb_cur_max();
  if (param_3 < 7) {
                    // WARNING: Could not recover jumptable at 0x0804904f. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar3 = (*(code *)((int)&__DT_PLTGOT + *(int *)(&DAT_0804a2cc + param_3 * 4)))();
    return uVar3;
  }
  local_34 = 0;
  if (param_2 == 0xffffffff) goto LAB_08049218;
LAB_08049087:
  if (local_34 == param_2) {
LAB_08049228:
    if (local_38 < param_2_00) {
      *(undefined *)(param_1_00 + local_38) = 0;
    }
    return local_38;
  }
  do {
    local_5c = param_1[local_34];
    if (local_5c < 0x7f) {
                    // WARNING: Could not recover jumptable at 0x080490fd. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*(code *)((int)&__DT_PLTGOT + *(int *)(&DAT_0804a2e8 + (uint)local_5c * 4)))();
      return uVar3;
    }
    if (sVar2 == 1) {
      __ctype_b_loc();
LAB_0804933e:
      local_34 = local_34 + 1;
    }
    else {
      local_24[0].__count = 0;
      local_24[0].__value = 0;
      local_60 = 0;
      pcVar6 = param_1;
      if (param_2 == 0xffffffff) {
        do {
          if (param_2 == 0) break;
          param_2 = param_2 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        param_2 = ~param_2 - 1;
      }
      do {
        uVar3 = local_34 + local_60;
        sVar4 = mbrtowc((wchar_t *)&local_28,param_1 + uVar3,param_2 - uVar3,local_24);
        if ((sVar4 == 0) || (sVar4 == 0xffffffff)) break;
        if (sVar4 == 0xfffffffe) {
          if (uVar3 < param_2) {
            cVar1 = (param_1 + local_34)[local_60];
            while ((cVar1 != '\0' && (local_60 = local_60 + 1, local_34 + local_60 < param_2))) {
              cVar1 = (param_1 + local_34)[local_60];
            }
          }
          break;
        }
        iswprint(local_28);
        local_60 = local_60 + sVar4;
        iVar5 = mbsinit(local_24);
      } while (iVar5 == 0);
      if (local_60 < 2) goto LAB_0804933e;
      local_60 = local_34 + local_60;
      while (local_34 = local_34 + 1, local_34 < local_60) {
        if (local_38 < param_2_00) {
          *(byte *)(param_1_00 + local_38) = local_5c;
        }
        local_38 = local_38 + 1;
        local_5c = param_1[local_34];
      }
    }
    if (local_38 < param_2_00) {
      *(byte *)(param_1_00 + local_38) = local_5c;
    }
    local_38 = local_38 + 1;
    if (param_2 != 0xffffffff) goto LAB_08049087;
LAB_08049218:
    if (param_1[local_34] == '\0') goto LAB_08049228;
  } while( true );
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_080496c3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = &DAT_0804bb20;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_08048ff6(param_3,param_4,*param_5,param_5);
  *piVar2 = iVar1;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined * __regparm2
FUN_08049721(uint param_1_00,undefined4 param_2_00,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  uint uVar8;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if ((int)param_1_00 < 0) {
                    // WARNING: Subroutine does not return
    abort();
  }
  if (DAT_0804b9dc <= param_1_00) {
    uVar8 = param_1_00 + 1;
    if (0x1fffffff < uVar8) {
                    // WARNING: Subroutine does not return
      FUN_08049d10();
    }
    puVar6 = (undefined4 *)PTR_DAT_0804b9e8;
    if ((undefined4 *)PTR_DAT_0804b9e8 == &DAT_0804b9e0) {
      puVar6 = (undefined4 *)FUN_08049dc5(8);
      puVar5 = PTR_DAT_0804b9e4;
      PTR_DAT_0804b9e8 = (undefined *)puVar6;
      *puVar6 = DAT_0804b9e0;
      puVar6[1] = puVar5;
    }
    PTR_DAT_0804b9e8 = (undefined *)FUN_08049e3f(puVar6,uVar8 * 8);
    memset(PTR_DAT_0804b9e8 + DAT_0804b9dc * 8,0,(uVar8 - DAT_0804b9dc) * 8);
    DAT_0804b9dc = uVar8;
  }
  uVar8 = *(uint *)(PTR_DAT_0804b9e8 + param_1_00 * 8);
  puVar5 = *(undefined **)(PTR_DAT_0804b9e8 + param_1_00 * 8 + 4);
  uVar3 = FUN_080496c3(puVar5,uVar8,param_2_00,param_1,param_2);
  puVar7 = PTR_DAT_0804b9e8;
  if (uVar8 <= uVar3) {
    iVar4 = uVar3 + 1;
    *(int *)(PTR_DAT_0804b9e8 + param_1_00 * 8) = iVar4;
    if (puVar5 != &DAT_0804ba20) {
      FUN_08049fe0(puVar5);
      puVar7 = PTR_DAT_0804b9e8;
    }
    puVar5 = (undefined *)FUN_08049dc5(iVar4);
    *(undefined **)(puVar7 + param_1_00 * 8 + 4) = puVar5;
    FUN_080496c3(puVar5,iVar4,param_2_00,param_1,param_2);
  }
  piVar2 = __errno_location();
  *piVar2 = iVar1;
  return puVar5;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_080498ae(void)

{
  undefined4 uStack00000004;
  undefined4 *puStack00000008;
  
  puStack00000008 = &DAT_0804bb20;
  uStack00000004 = 0xffffffff;
  FUN_08049721();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_080498da(undefined4 param_1)

{
  FUN_080498ae(0,param_1);
  return;
}



undefined4 * __regparm3 FUN_08049905(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar2 = local_38;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = param_2;
  param_1[1] = local_38[0];
  param_1[2] = local_38[1];
  param_1[3] = local_38[2];
  param_1[4] = local_38[3];
  param_1[5] = local_28;
  param_1[6] = local_24;
  param_1[7] = local_20;
  param_1[8] = local_1c;
  return param_1;
}



void FUN_0804995f(void)

{
  undefined local_3c [52];
  
  FUN_08049905();
  FUN_08049721(0xffffffff,local_3c);
  return;
}



void FUN_0804998f(void)

{
  undefined4 in_stack_00000010;
  undefined local_3c [52];
  
  FUN_08049905();
  FUN_08049721(in_stack_00000010,local_3c);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_080499be(undefined4 param_1,undefined4 param_2)

{
  FUN_0804995f(0,param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_080499f0(undefined4 param_1,char param_2)

{
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack16;
  
  uStack16 = 0x80499fa;
  local_3c = DAT_0804bb20;
  local_38 = DAT_0804bb24;
  local_34 = DAT_0804bb28;
  local_30 = DAT_0804bb2c;
  local_2c = DAT_0804bb30;
  local_28 = DAT_0804bb34;
  local_24 = DAT_0804bb38;
  local_20 = DAT_0804bb3c;
  local_1c = DAT_0804bb40;
  FUN_08048f36(&local_3c,(int)param_2,1);
  FUN_08049721(0xffffffff,&local_3c);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08049a8b(undefined4 param_1)

{
  FUN_080499f0(param_1,0x3a);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08049ac0(FILE *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar1 = param_5;
  while (*piVar1 != 0) {
    uVar3 = uVar3 + 1;
    piVar1 = piVar1 + 1;
  }
  if (param_2 == 0) {
    fprintf(param_1,"%s %s\n",param_3,param_4);
  }
  else {
    fprintf(param_1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  if (uVar3 < 10) {
                    // WARNING: Could not recover jumptable at 0x08049b2f. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)((int)&__DT_PLTGOT + (&DAT_0804a7ec)[uVar3]))();
    return;
  }
  pcVar2 = (char *)dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n",5);
  vfprintf(param_1,pcVar2,param_5);
  if (param_1->_IO_write_ptr < param_1->_IO_write_end) {
    *param_1->_IO_write_ptr = '\n';
    param_1->_IO_write_ptr = param_1->_IO_write_ptr + 1;
  }
  else {
    __overflow((_IO_FILE *)param_1,10);
  }
  fputs_unlocked(version_etc_copyright,param_1);
  if (param_1->_IO_write_ptr < param_1->_IO_write_end) {
    *param_1->_IO_write_ptr = '\n';
    param_1->_IO_write_ptr = param_1->_IO_write_ptr + 1;
  }
  else {
    __overflow((_IO_FILE *)param_1,10);
  }
  pcVar2 = (char *)dcgettext(0,
                             "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n"
                             ,5);
  fputs_unlocked(pcVar2,param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08049ccd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08049ac0(param_1,param_2,param_3,param_4,&stack0x00000014);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08049d10(void)

{
  undefined4 uVar1;
  
  if (xalloc_fail_func != (code *)0x0) {
    (*xalloc_fail_func)();
  }
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(exit_failure,0,"%s",uVar1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08049dc5(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_08049d10();
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08049e3f(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_08049d10();
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08049e75(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (param_1 == 0) {
    if (uVar2 == 0) {
      iVar1 = (int)(0x40 / (ulonglong)param_3);
      uVar2 = iVar1 + (uint)(iVar1 == 0);
    }
  }
  else {
    if ((uint)(0x7fffffff / (ulonglong)param_3) < uVar2) {
                    // WARNING: Subroutine does not return
      FUN_08049d10();
    }
    uVar2 = uVar2 * 2;
  }
  *param_2 = uVar2;
  FUN_08049e3f(param_1,uVar2 * param_3,0x8049e80);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08049f27(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_08049dc5(param_1);
  memset(__s,0,param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08049fa5(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_08049dc5(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08049fe0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0804a03c)
// WARNING: Removing unreachable block (ram,0x0804a040)

void FUN_0804a008(void)

{
  _DT_INIT();
  return;
}



void FUN_0804a05c(void)

{
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 = iVar1 + -1, iVar1 != -1) {
    (*(code *)(&DAT_0804b82c)[iVar1])();
  }
  _DT_FINI();
  return;
}



void FUN_0804a0a0(undefined4 param_1)

{
  __cxa_atexit(param_1,0,DAT_0804b9d0);
  return;
}



undefined4 __regparm3 FUN_0804a0d0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  code **ppcVar2;
  
  ppcVar2 = &DAT_0804b82c;
  pcVar1 = DAT_0804b82c;
  while (pcVar1 != (code *)0xffffffff) {
    ppcVar2 = ppcVar2 + -1;
    (*pcVar1)();
    pcVar1 = *ppcVar2;
  }
  return param_2;
}



void __regparm3 _DT_FINI(undefined4 param_1)

{
  FUN_08048b08(param_1);
  return;
}


