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
    char _unused2[40];
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

typedef union _union_54 _union_54, *P_union_54;

union _union_54 {
    uint __wch;
    char __wchb[4];
};

struct __mbstate_t {
    int __count;
    union _union_54 __value;
};

typedef struct __mbstate_t mbstate_t;

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
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
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct GnuDebugLink_12 GnuDebugLink_12, *PGnuDebugLink_12;

struct GnuDebugLink_12 {
    char filename[12];
    dword crc;
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
  FUN_080489a4();
  FUN_08048a04();
  FUN_08049ec0();
  return;
}



void FUN_08048790(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __fpending(void)

{
  __fpending();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __overflow(_IO_FILE *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __overflow(param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputs_unlocked(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs_unlocked(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention -- yet parameter storage is locked

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*_FUN_0804b750)();
  return pcVar1;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t __ctype_get_mb_cur_max(void)

{
  size_t sVar1;
  
  sVar1 = __ctype_get_mb_cur_max();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int iswprint(wint_t __wc)

{
  int iVar1;
  
  iVar1 = iswprint(__wc);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_4 [4];
  
  __libc_start_main(FUN_08048b10,param_2,&stack0x00000004,FUN_08049e04,FUN_08049e4c,param_1,
                    auStack_4);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __regparm3 FUN_080489a4(undefined4 param_1)

{
  __gmon_start__(param_1);
  return;
}



void FUN_080489c8(void)

{
  code *pcVar1;
  
  if (DAT_0804b7e4 == '\0') {
    DAT_0804b7e4 = 0;
    pcVar1 = *(code **)PTR_DAT_0804b7b8;
    while (pcVar1 != (code *)0x0) {
      PTR_DAT_0804b7b8 = PTR_DAT_0804b7b8 + 4;
      (*pcVar1)();
      pcVar1 = *(code **)PTR_DAT_0804b7b8;
    }
    DAT_0804b7e4 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048a1c)

void FUN_08048a04(void)

{
  return;
}



void FUN_08048a30(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)dcgettext(0,
                             "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n"
                             ,5);
  printf(pcVar1,DAT_0804b928,DAT_0804b928);
  pcVar1 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar1,stdout);
  pcVar1 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar1,stdout);
  pcVar1 = (char *)dcgettext(0,"\nReport bugs to <%s>.\n",5);
  printf(pcVar1,"bug-coreutils@gnu.org");
                    // WARNING: Subroutine does not return
  exit(param_1);
}



void FUN_08048b10(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined uVar4;
  char *local_14;
  
  DAT_0804b928 = *param_2;
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/share/locale");
  textdomain("coreutils");
  FUN_08049e90(&LAB_08048c20);
  if (param_1 == 2) {
    pcVar1 = getenv("POSIXLY_CORRECT");
    uVar4 = pcVar1 == (char *)0x0;
    if ((bool)uVar4) {
      local_14 = (char *)param_2[1];
      iVar2 = 7;
      pcVar1 = local_14;
      pcVar3 = "--help";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        uVar4 = *pcVar1 == *pcVar3;
        pcVar1 = pcVar1 + 1;
        pcVar3 = pcVar3 + 1;
      } while ((bool)uVar4);
      if ((bool)uVar4) {
        FUN_08048a30(0);
        local_14 = (char *)param_2[1];
      }
      iVar2 = 10;
      pcVar1 = "--version";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        uVar4 = *local_14 == *pcVar1;
        local_14 = local_14 + 1;
        pcVar1 = pcVar1 + 1;
      } while ((bool)uVar4);
      if ((bool)uVar4) {
        FUN_08049ac0(stdout,&DAT_0804a087,"GNU coreutils","5.2.1","Jim Meyering",0);
      }
    }
  }
                    // WARNING: Subroutine does not return
  exit(0);
}



void FUN_08048c10(undefined4 param_1)

{
  DAT_0804b7e8 = param_1;
  return;
}



undefined4 * FUN_08048cf0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)FUN_08049ba0(0x24);
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_0804b900;
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



undefined4 FUN_08048d70(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_0804b900;
  }
  return *param_1;
}



void FUN_08048d90(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_0804b900;
  }
  *param_1 = param_2;
  return;
}



void FUN_08048db0(int param_1,byte param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)((uint)(param_2 >> 5) * 4 + 4 + param_1);
  if (param_1 == 0) {
    puVar1 = &DAT_0804b904 + (param_2 >> 5);
  }
  *puVar1 = *puVar1 ^ (param_3 & 1 ^ (int)*puVar1 >> (param_2 & 0x1f) & 1U) << (param_2 & 0x1f);
  return;
}



undefined * FUN_08048e10(undefined *param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)dcgettext(0,param_1,5);
  if ((puVar1 == param_1) && (param_2 == 6)) {
    puVar1 = &DAT_0804a0cb;
  }
  return puVar1;
}



uint FUN_08048e50(undefined *param_1,uint param_2,char *param_3,size_t param_4,int param_5,
                 int param_6)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  size_t sVar4;
  ushort **ppuVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  ushort uVar9;
  uint uVar10;
  char *pcVar11;
  bool bVar12;
  uint local_60;
  byte local_5c;
  size_t local_38;
  char *local_34;
  uint local_30;
  uint local_2c;
  wchar_t local_28;
  mbstate_t local_24 [2];
  
  local_30 = 0;
  local_34 = (char *)0x0;
  local_38 = 0;
  bVar2 = false;
  sVar4 = __ctype_get_mb_cur_max();
  switch(param_5) {
  case 2:
    if (param_2 != 0) {
      *param_1 = 0x27;
    }
    local_34 = "\'";
    goto LAB_08048eb7;
  case 3:
    if (param_2 != 0) {
      *param_1 = 0x22;
    }
    bVar2 = true;
    local_34 = "\"";
LAB_08048eb7:
    local_30 = 1;
    local_38 = 1;
    break;
  case 4:
    bVar2 = true;
    break;
  case 5:
  case 6:
    pcVar7 = (char *)FUN_08048e10(&DAT_0804a0cf,param_5);
    local_34 = (char *)FUN_08048e10(&DAT_0804a0cd,param_5);
    cVar1 = *pcVar7;
    while (cVar1 != '\0') {
      if (local_30 < param_2) {
        param_1[local_30] = *pcVar7;
      }
      pcVar7 = pcVar7 + 1;
      local_30 = local_30 + 1;
      cVar1 = *pcVar7;
    }
    bVar2 = true;
    local_38 = strlen(local_34);
  }
  local_2c = 0;
  do {
    if (param_4 == 0xffffffff) {
      bVar12 = param_3[local_2c] == '\0';
    }
    else {
      bVar12 = local_2c == param_4;
    }
    if (bVar12) {
      if (local_34 != (char *)0x0) {
        cVar1 = *local_34;
        while (cVar1 != '\0') {
          if (local_30 < param_2) {
            param_1[local_30] = cVar1;
          }
          local_34 = local_34 + 1;
          local_30 = local_30 + 1;
          cVar1 = *local_34;
        }
      }
      if (param_2 <= local_30) {
        return local_30;
      }
      param_1[local_30] = 0;
      return local_30;
    }
    if (((bVar2) && (local_38 != 0)) && (local_2c + local_38 <= param_4)) {
      bVar12 = true;
      sVar8 = local_38;
      pcVar7 = param_3 + local_2c;
      pcVar11 = local_34;
      do {
        if (sVar8 == 0) break;
        sVar8 = sVar8 - 1;
        bVar12 = *pcVar7 == *pcVar11;
        pcVar7 = pcVar7 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar12);
      if (bVar12) {
        if (local_30 < param_2) {
          param_1[local_30] = 0x5c;
        }
        local_30 = local_30 + 1;
      }
    }
    bVar3 = param_3[local_2c];
    local_5c = bVar3;
    switch(bVar3) {
    case 0:
      uVar10 = local_2c + 1;
      if (bVar2) {
        if (local_30 < param_2) {
          param_1[local_30] = 0x5c;
        }
        if (local_30 + 1 < param_2) {
          param_1[local_30 + 1] = 0x30;
        }
        if (local_30 + 2 < param_2) {
          param_1[local_30 + 2] = 0x30;
        }
        local_30 = local_30 + 3;
        local_5c = 0x30;
        bVar3 = local_5c;
        break;
      }
      goto LAB_08049000;
    default:
      if (sVar4 == 1) {
        local_60 = 1;
        ppuVar5 = __ctype_b_loc();
        uVar9 = (*ppuVar5)[bVar3] & 0x4000;
LAB_080491ae:
        uVar10 = local_2c + 1;
        if (!bVar2) goto LAB_08049000;
        if (uVar9 != 0) break;
      }
      else {
        local_24[0].__count = 0;
        local_24[0].__value.__wch = 0;
        local_60 = 0;
        uVar9 = 1;
        if (param_4 == 0xffffffff) {
          param_4 = strlen(param_3);
        }
        do {
          uVar10 = local_2c + local_60;
          sVar8 = mbrtowc(&local_28,param_3 + uVar10,param_4 - uVar10,local_24);
          if (sVar8 == 0) break;
          if (sVar8 == 0xffffffff) {
            uVar9 = 0;
            break;
          }
          if (sVar8 == 0xfffffffe) {
            uVar9 = 0;
            if (uVar10 < param_4) {
              cVar1 = param_3[uVar10];
              goto joined_r0x08049333;
            }
            break;
          }
          iVar6 = iswprint(local_28);
          local_60 = local_60 + sVar8;
          uVar9 = uVar9 & (iVar6 == 0) - 1;
          iVar6 = mbsinit(local_24);
        } while (iVar6 == 0);
LAB_08049315:
        if (local_60 < 2) goto LAB_080491ae;
      }
      local_60 = local_2c + local_60;
      while( true ) {
        if ((bVar2) && (uVar9 == 0)) {
          if (local_30 < param_2) {
            param_1[local_30] = 0x5c;
          }
          if (local_30 + 1 < param_2) {
            param_1[local_30 + 1] = (local_5c >> 6) + 0x30;
          }
          if (local_30 + 2 < param_2) {
            param_1[local_30 + 2] = (local_5c >> 3 & 7) + 0x30;
          }
          local_30 = local_30 + 3;
          local_5c = (local_5c & 7) + 0x30;
        }
        uVar10 = local_2c + 1;
        if (local_60 <= uVar10) break;
        if (local_30 < param_2) {
          param_1[local_30] = local_5c;
        }
        local_30 = local_30 + 1;
        local_5c = param_3[uVar10];
        local_2c = uVar10;
      }
      goto LAB_08049000;
    case 7:
      bVar3 = 0x61;
      goto LAB_08049030;
    case 8:
      bVar3 = 0x62;
      goto LAB_08049030;
    case 9:
      bVar3 = 0x74;
      goto LAB_08049048;
    case 10:
      bVar3 = 0x6e;
      goto LAB_08049048;
    case 0xb:
      bVar3 = 0x76;
      goto LAB_08049030;
    case 0xc:
      bVar3 = 0x66;
      goto LAB_08049030;
    case 0xd:
      bVar3 = 0x72;
      goto LAB_08049048;
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x3b:
    case 0x3c:
    case 0x3e:
    case 0x5b:
    case 0x5e:
    case 0x60:
    case 0x7c:
switchD_08048f49_caseD_20:
      if (param_5 == 1) goto LAB_0804904e;
      break;
    case 0x23:
    case 0x7e:
      if (local_2c == 0) goto switchD_08048f49_caseD_20;
      break;
    case 0x25:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3d:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5d:
    case 0x5f:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7d:
      break;
    case 0x27:
      if (param_5 == 1) {
LAB_0804904e:
        uVar10 = FUN_08048e50(param_1,param_2,param_3,param_4,2,param_6);
        return uVar10;
      }
      if (param_5 == 2) {
        if (local_30 < param_2) {
          param_1[local_30] = 0x27;
        }
        if (local_30 + 1 < param_2) {
          param_1[local_30 + 1] = 0x5c;
        }
        if (local_30 + 2 < param_2) {
          param_1[local_30 + 2] = 0x27;
        }
LAB_080490e2:
        local_30 = local_30 + 3;
        bVar3 = local_5c;
      }
      break;
    case 0x3f:
      if (param_5 == 1) goto LAB_0804904e;
      if (((param_5 == 3) && (uVar10 = local_2c + 2, uVar10 < param_4)) &&
         (param_3[local_2c + 1] == '?')) {
        local_5c = param_3[local_2c + 2];
        switch(local_5c) {
        case 0x21:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2d:
        case 0x2f:
        case 0x3c:
        case 0x3d:
        case 0x3e:
          if (local_30 < param_2) {
            param_1[local_30] = 0x3f;
          }
          if (local_30 + 1 < param_2) {
            param_1[local_30 + 1] = 0x5c;
          }
          local_2c = uVar10;
          if (local_30 + 2 < param_2) {
            param_1[local_30 + 2] = 0x3f;
          }
          goto LAB_080490e2;
        }
      }
      break;
    case 0x5c:
LAB_08049048:
      if (param_5 != 1) {
LAB_08049030:
        uVar10 = local_2c + 1;
        if (bVar2) goto LAB_08048fdb;
        goto LAB_08049000;
      }
      goto LAB_0804904e;
    }
    local_5c = bVar3;
    uVar10 = local_2c + 1;
    if ((bVar2) &&
       (bVar3 = local_5c,
       (*(int *)(param_6 + 4 + (uint)(local_5c >> 5) * 4) >> (local_5c & 0x1f) & 1U) != 0)) {
LAB_08048fdb:
      local_5c = bVar3;
      if (local_30 < param_2) {
        param_1[local_30] = 0x5c;
      }
      local_30 = local_30 + 1;
      uVar10 = local_2c + 1;
    }
LAB_08049000:
    if (local_30 < param_2) {
      param_1[local_30] = local_5c;
    }
    local_30 = local_30 + 1;
    local_2c = uVar10;
  } while( true );
joined_r0x08049333:
  if (cVar1 == '\0') goto LAB_08049315;
  local_60 = local_60 + 1;
  if (param_4 <= local_2c + local_60) goto LAB_08049315;
  cVar1 = param_3[local_2c + local_60];
  goto joined_r0x08049333;
}



void FUN_08049490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = &DAT_0804b900;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_08048e50(param_1,param_2,param_3,param_4,*param_5,param_5);
  *piVar2 = iVar1;
  return;
}



undefined * FUN_080494f0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  uint uVar9;
  
  piVar4 = __errno_location();
  iVar2 = *piVar4;
  if ((int)param_1 < 0) {
                    // WARNING: Subroutine does not return
    abort();
  }
  if (DAT_0804b7c0 <= param_1) {
    uVar9 = param_1 + 1;
    if (0x1fffffff < uVar9) {
                    // WARNING: Subroutine does not return
      FUN_08049b00();
    }
    puVar7 = (undefined4 *)PTR_DAT_0804b7cc;
    if ((undefined4 *)PTR_DAT_0804b7cc == &DAT_0804b7c4) {
      puVar7 = (undefined4 *)FUN_08049ba0(8);
      uVar3 = DAT_0804b7c4;
      PTR_DAT_0804b7cc = (undefined *)puVar7;
      puVar7[1] = PTR_DAT_0804b7c8;
      *puVar7 = uVar3;
    }
    PTR_DAT_0804b7cc = (undefined *)FUN_08049c20(puVar7,uVar9 * 8);
    memset(PTR_DAT_0804b7cc + DAT_0804b7c0 * 8,0,(uVar9 - DAT_0804b7c0) * 8);
    DAT_0804b7c0 = uVar9;
  }
  uVar9 = *(uint *)(PTR_DAT_0804b7cc + param_1 * 8);
  puVar6 = *(undefined **)(PTR_DAT_0804b7cc + param_1 * 8 + 4);
  uVar5 = FUN_08049490(puVar6,uVar9,param_2,param_3,param_4);
  puVar8 = PTR_DAT_0804b7cc;
  if (uVar9 <= uVar5) {
    iVar1 = uVar5 + 1;
    *(int *)(PTR_DAT_0804b7cc + param_1 * 8) = iVar1;
    if (puVar6 != &DAT_0804b800) {
      FUN_08049df0(puVar6);
      puVar8 = PTR_DAT_0804b7cc;
    }
    puVar6 = (undefined *)FUN_08049ba0(iVar1);
    *(undefined **)(puVar8 + param_1 * 8 + 4) = puVar6;
    FUN_08049490(puVar6,iVar1,param_2,param_3,param_4);
  }
  piVar4 = __errno_location();
  *piVar4 = iVar2;
  return puVar6;
}



void FUN_08049660(undefined4 param_1,undefined4 param_2)

{
  FUN_080494f0(param_1,param_2,0xffffffff,&DAT_0804b900);
  return;
}



void FUN_08049690(undefined4 param_1)

{
  FUN_08049660(0,param_1);
  return;
}



undefined4 * FUN_080496b0(undefined4 *param_1,undefined4 param_2)

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



void FUN_08049720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined local_3c [52];
  
  FUN_080496b0(local_3c,param_2);
  FUN_080494f0(param_1,param_3,0xffffffff,local_3c);
  return;
}



void FUN_08049770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined local_3c [52];
  
  FUN_080496b0(local_3c,param_2);
  FUN_080494f0(param_1,param_3,param_4,local_3c);
  return;
}



void FUN_080497c0(undefined4 param_1,undefined4 param_2)

{
  FUN_08049720(0,param_1,param_2);
  return;
}



void FUN_080497f0(undefined4 param_1,char param_2)

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
  
  local_3c = DAT_0804b900;
  local_38 = DAT_0804b904;
  local_34 = DAT_0804b908;
  local_30 = DAT_0804b90c;
  local_2c = DAT_0804b910;
  local_28 = DAT_0804b914;
  local_24 = DAT_0804b918;
  local_20 = DAT_0804b91c;
  local_1c = DAT_0804b920;
  FUN_08048db0(&local_3c,(int)param_2,1);
  FUN_080494f0(0,param_1,0xffffffff,&local_3c);
  return;
}



void FUN_08049890(undefined4 param_1)

{
  FUN_080497f0(param_1,0x3a);
  return;
}



void FUN_080498b0(FILE *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *param_5;
  piVar3 = param_5;
  while (iVar1 != 0) {
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
    iVar1 = *piVar3;
  }
  if (param_2 == 0) {
    fprintf(param_1,"%s %s\n",param_3,param_4);
  }
  else {
    fprintf(param_1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  switch(iVar4) {
  case 0:
                    // WARNING: Subroutine does not return
    abort();
  case 1:
    pcVar2 = "Written by %s.\n";
    break;
  case 2:
    pcVar2 = "Written by %s and %s.\n";
    break;
  case 3:
    pcVar2 = "Written by %s, %s, and %s.\n";
    break;
  case 4:
    pcVar2 = "Written by %s, %s, %s,\nand %s.\n";
    break;
  case 5:
    pcVar2 = "Written by %s, %s, %s,\n%s, and %s.\n";
    break;
  case 6:
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
    break;
  case 7:
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
    break;
  case 8:
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n";
    break;
  case 9:
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    break;
  default:
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
  }
  pcVar2 = (char *)dcgettext(0,pcVar2,5);
  vfprintf(param_1,pcVar2,param_5);
  if (param_1->_IO_write_ptr < param_1->_IO_write_end) {
    *param_1->_IO_write_ptr = '\n';
    param_1->_IO_write_ptr = param_1->_IO_write_ptr + 1;
  }
  else {
    __overflow(param_1,10);
  }
  fputs_unlocked(PTR_s_Copyright__C__2004_Free_Software_0804b7d0,param_1);
  if (param_1->_IO_write_ptr < param_1->_IO_write_end) {
    *param_1->_IO_write_ptr = '\n';
    param_1->_IO_write_ptr = param_1->_IO_write_ptr + 1;
  }
  else {
    __overflow(param_1,10);
  }
  pcVar2 = (char *)dcgettext(0,
                             "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n"
                             ,5);
  fputs_unlocked(pcVar2,param_1);
  return;
}



void FUN_08049ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_080498b0(param_1,param_2,param_3,param_4,&stack0x00000014);
  return;
}



void FUN_08049b00(void)

{
  undefined4 uVar1;
  
  if (DAT_0804b924 != (code *)0x0) {
    (*DAT_0804b924)();
  }
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0804b7bc,0,"%s",uVar1);
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_08049ba0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_08049b00();
}



void FUN_08049c20(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_08049b00();
}



void FUN_08049c50(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if ((uVar1 == 0) && (uVar1 = (uint)(0x40 / (ulonglong)param_3), uVar1 == 0)) {
      uVar1 = 1;
    }
  }
  else {
    if ((uint)(0x7fffffff / (ulonglong)param_3) < uVar1) {
                    // WARNING: Subroutine does not return
      FUN_08049b00();
    }
    uVar1 = uVar1 * 2;
  }
  *param_2 = uVar1;
  FUN_08049c20();
  return;
}



void * FUN_08049d40(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_08049ba0(param_1);
  memset(__s,0,param_1);
  return __s;
}



void FUN_08049dc0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_08049ba0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}



void FUN_08049df0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08049e35)
// WARNING: Removing unreachable block (ram,0x08049e38)

void FUN_08049e04(void)

{
  _DT_INIT();
  return;
}



// WARNING: Removing unreachable block (ram,0x08049e80)
// WARNING: Removing unreachable block (ram,0x08049e8e)

void FUN_08049e4c(void)

{
  _DT_FINI();
  return;
}



void FUN_08049e90(undefined4 param_1)

{
  __cxa_atexit(param_1,0,DAT_0804b7b4);
  return;
}



undefined4 __regparm3 FUN_08049ec0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  code **ppcVar2;
  
  ppcVar2 = &DAT_0804b648;
  pcVar1 = DAT_0804b648;
  if (DAT_0804b648 != (code *)0xffffffff) {
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return param_2;
}



void __regparm3 _DT_FINI(undefined4 param_1,undefined4 param_2)

{
  FUN_080489c8(param_2);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Type propagation algorithm not settling

void __regparm3 FUN_0804b750(undefined4 param_1,char param_2,byte *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char **ppcVar4;
  undefined *unaff_ESI;
  
  ppcVar4 = (char **)(CONCAT31((int3)((uint)param_1 >> 8),0xe0) + 1);
  pbVar1 = (byte *)((int)ppcVar4 + (int)param_3);
  *pbVar1 = *pbVar1 << 4 | *pbVar1 >> 4;
  *(byte *)((int)ppcVar4 + (int)param_3) = *(byte *)((int)ppcVar4 + (int)param_3);
  pbVar1 = (byte *)((int)ppcVar4 + (int)param_3);
  *pbVar1 = *pbVar1 << 4 | *pbVar1 >> 4;
  *(byte *)((int)ppcVar4 + (int)param_3) = *(byte *)((int)ppcVar4 + (int)param_3);
  pbVar1 = (byte *)((int)ppcVar4 + (int)param_3);
  *pbVar1 = *pbVar1 << 4 | *pbVar1 >> 4;
  *(byte *)((int)ppcVar4 + (int)param_3) = *(byte *)((int)ppcVar4 + (int)param_3);
  pbVar1 = (byte *)((int)ppcVar4 + (int)param_3);
  *pbVar1 = *pbVar1 << 4 | *pbVar1 >> 4;
  *(byte *)((int)ppcVar4 + (int)param_3) = *(byte *)((int)ppcVar4 + (int)param_3);
  pbVar1 = (byte *)((int)ppcVar4 + (int)param_3);
  *pbVar1 = *pbVar1 << 4 | *pbVar1 >> 4;
  *(byte *)((int)ppcVar4 + (int)param_3) = *(byte *)((int)ppcVar4 + (int)param_3);
  pbVar1 = (byte *)((int)ppcVar4 + (int)param_3);
  *pbVar1 = *pbVar1 << 4 | *pbVar1 >> 4;
  *(byte *)((int)ppcVar4 + (int)param_3) = *(byte *)((int)ppcVar4 + (int)param_3);
  *(byte *)((int)ppcVar4 + (int)param_3) = *(byte *)((int)ppcVar4 + (int)param_3);
  *(byte *)((int)ppcVar4 + (int)param_3) = *(byte *)((int)ppcVar4 + (int)param_3);
  bVar3 = (byte)ppcVar4;
  *(byte *)ppcVar4 = *(char *)ppcVar4 + bVar3;
  *(byte *)ppcVar4 = *(char *)ppcVar4 + bVar3;
  *(byte *)ppcVar4 = *(char *)ppcVar4 + bVar3;
  pcVar2 = (char *)((int)unaff_ESI * 5 + 4);
  *pcVar2 = *pcVar2 + param_2;
  *param_3 = *param_3 | bVar3;
  *(byte *)ppcVar4 = *(char *)ppcVar4 + bVar3;
  *param_3 = *param_3 + bVar3;
  *(byte *)ppcVar4 = *(char *)ppcVar4 + bVar3;
  *(byte *)ppcVar4 = *(char *)ppcVar4 + bVar3;
  *ppcVar4 = *ppcVar4 + (int)ppcVar4;
  *(byte *)ppcVar4 = *(char *)ppcVar4 + bVar3;
  uRam00000804 = CONCAT31(0xb7c408,*unaff_ESI);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


