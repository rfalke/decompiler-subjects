typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct ElfNote_8_2 ElfNote_8_2, *PElfNote_8_2;

struct ElfNote_8_2 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[8]; // Vendor name
    byte description[2]; // Blob value
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




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  call_gmon_start();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



void FUN_080487c8(void)

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

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

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
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



void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,__libc_csu_init,__libc_csu_fini,param_1,auStack_4)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 __regparm3 call_gmon_start(undefined4 param_1,undefined4 param_2)

{
  __gmon_start__();
  return param_2;
}



void __regparm3 __do_global_dtors_aux(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (completed_1 == '\0') {
    completed_1 = 0;
    pcVar1 = *(code **)p_0;
    uVar2 = param_1;
    while (pcVar1 != (code *)0x0) {
      p_0 = p_0 + 4;
      (*pcVar1)(param_1,uVar2);
      pcVar1 = *(code **)p_0;
    }
    completed_1 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048a68)

void frame_dummy(void)

{
  return;
}



void usage(int param_1)

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



void main(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined uVar4;
  char *local_14;
  
  program_name = *param_2;
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
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
        usage(0);
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
        version_etc(stdout,&DAT_0804a0a7,"GNU coreutils","5.2.1","Jim Meyering",0);
      }
    }
  }
                    // WARNING: Subroutine does not return
  exit(0);
}



void close_stdout_set_file_name(undefined4 param_1)

{
  file_name = param_1;
  return;
}



void close_stdout(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = -(uint)(((uint)stdout->_flags >> 5 & 1) == 0);
  if ((iVar5 == 0) || (iVar1 = __fpending(stdout), iVar1 != 0)) {
    iVar1 = fclose(stdout);
    if (iVar1 != 0) {
      piVar2 = __errno_location();
      iVar5 = *piVar2;
    }
    if (-1 < iVar5) {
      uVar3 = dcgettext(0,"write error",5);
      if (file_name == 0) {
        error(exit_failure,iVar5,"%s",uVar3);
        return;
      }
      uVar4 = quotearg_colon(file_name);
      error(exit_failure,iVar5,"%s: %s",uVar4,uVar3);
    }
  }
  return;
}



undefined4 get_quoting_style(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return default_quoting_options;
}



void set_quoting_style(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    return;
  }
  default_quoting_options = param_2;
  return;
}



void set_char_quoting(int param_1,byte param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((uint)(param_2 >> 5) * 4 + 4 + param_1);
  if (param_1 != 0) {
    uVar2 = *puVar1;
    *puVar1 = uVar2 ^ (param_3 & 1 ^ (int)uVar2 >> (param_2 & 0x1f) & 1U) << (param_2 & 0x1f);
    return;
  }
  uVar2 = (&DAT_0804b924)[param_2 >> 5];
  (&DAT_0804b924)[param_2 >> 5] =
       uVar2 ^ (param_3 & 1 ^ (int)uVar2 >> (param_2 & 0x1f) & 1U) << (param_2 & 0x1f);
  return;
}



undefined4 * clone_quoting_options(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)xmalloc(0x24);
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &default_quoting_options;
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



undefined4 * __regparm3 quoting_options_from_style(undefined4 *param_1,undefined4 param_2)

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



undefined * __regparm3 gettext_quote(undefined *param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)dcgettext(0,param_1,5);
  if (param_2 == 6 && puVar1 == param_1) {
    puVar1 = &DAT_0804a3bc;
  }
  return puVar1;
}



uint __regparm3
quotearg_buffer_restyled
          (undefined *param_1_00,uint param_2_00,char *param_3_00,size_t param_1,int param_2,
          int param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  size_t sVar5;
  ushort **ppuVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  uint uVar10;
  char *pcVar11;
  bool bVar12;
  uint local_70;
  uint local_60;
  byte local_5c;
  size_t local_40;
  char *local_3c;
  uint local_38;
  wchar_t local_28;
  mbstate_t local_24 [2];
  
  local_70 = 0;
  local_3c = (char *)0x0;
  local_40 = 0;
  bVar2 = false;
  sVar5 = __ctype_get_mb_cur_max();
  switch(param_2) {
  case 2:
    if (param_2_00 != 0) {
      *param_1_00 = 0x27;
    }
    local_3c = "\'";
    goto LAB_08048f90;
  case 3:
    if (param_2_00 != 0) {
      *param_1_00 = 0x22;
    }
    bVar2 = true;
    local_3c = "\"";
LAB_08048f90:
    local_70 = 1;
    local_40 = 1;
    break;
  case 4:
    bVar2 = true;
    break;
  case 5:
  case 6:
    pcVar8 = (char *)gettext_quote();
    local_3c = (char *)gettext_quote();
    cVar1 = *pcVar8;
    while (cVar1 != '\0') {
      if (local_70 < param_2_00) {
        param_1_00[local_70] = *pcVar8;
      }
      pcVar8 = pcVar8 + 1;
      local_70 = local_70 + 1;
      cVar1 = *pcVar8;
    }
    bVar2 = true;
    local_40 = strlen(local_3c);
  }
  local_38 = 0;
  do {
    if (param_1 == 0xffffffff) {
      if (param_3_00[local_38] == '\0') goto LAB_08049125;
    }
    else if (local_38 == param_1) {
LAB_08049125:
      if (local_3c != (char *)0x0) {
        cVar1 = *local_3c;
        while (cVar1 != '\0') {
          if (local_70 < param_2_00) {
            param_1_00[local_70] = cVar1;
          }
          local_3c = local_3c + 1;
          local_70 = local_70 + 1;
          cVar1 = *local_3c;
        }
      }
      if (local_70 < param_2_00) {
        param_1_00[local_70] = 0;
      }
      return local_70;
    }
    if (((bVar2) && (local_40 != 0)) && (local_38 + local_40 <= param_1)) {
      bVar12 = true;
      sVar9 = local_40;
      pcVar8 = param_3_00 + local_38;
      pcVar11 = local_3c;
      do {
        if (sVar9 == 0) break;
        sVar9 = sVar9 - 1;
        bVar12 = *pcVar8 == *pcVar11;
        pcVar8 = pcVar8 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar12);
      if (bVar12) {
        if (local_70 < param_2_00) {
          param_1_00[local_70] = 0x5c;
        }
        local_70 = local_70 + 1;
      }
    }
    bVar3 = param_3_00[local_38];
    local_5c = bVar3;
    switch(bVar3) {
    case 0:
      uVar10 = local_38 + 1;
      if (bVar2) {
        if (local_70 < param_2_00) {
          param_1_00[local_70] = 0x5c;
        }
        if (local_70 + 1 < param_2_00) {
          param_1_00[local_70 + 1] = 0x30;
        }
        if (local_70 + 2 < param_2_00) {
          param_1_00[local_70 + 2] = 0x30;
        }
        local_70 = local_70 + 3;
        local_5c = 0x30;
        bVar3 = local_5c;
        break;
      }
      goto LAB_08049290;
    default:
      if (sVar5 == 1) {
        local_60 = 1;
        ppuVar6 = __ctype_b_loc();
        uVar4 = (*ppuVar6)[bVar3] & 0x4000;
LAB_08049049:
        if (!bVar2 || uVar4 != 0) break;
      }
      else {
        local_24[0].__count = 0;
        local_24[0].__value.__wch = 0;
        local_60 = 0;
        uVar4 = 1;
        if (param_1 == 0xffffffff) {
          param_1 = strlen(param_3_00);
        }
        do {
          uVar10 = local_38 + local_60;
          sVar9 = mbrtowc(&local_28,param_3_00 + uVar10,param_1 - uVar10,local_24);
          if (sVar9 == 0) break;
          if (sVar9 == 0xffffffff) {
            uVar4 = 0;
            break;
          }
          if (sVar9 == 0xfffffffe) {
            uVar4 = 0;
            if (uVar10 < param_1) {
              cVar1 = param_3_00[uVar10];
              goto joined_r0x080494f0;
            }
            break;
          }
          iVar7 = iswprint(local_28);
          local_60 = local_60 + sVar9;
          uVar4 = uVar4 & -(ushort)(iVar7 != 0);
          iVar7 = mbsinit(local_24);
        } while (iVar7 == 0);
LAB_080494ce:
        if (local_60 < 2) goto LAB_08049049;
      }
      local_60 = local_38 + local_60;
      while( true ) {
        if (bVar2 && uVar4 == 0) {
          if (local_70 < param_2_00) {
            param_1_00[local_70] = 0x5c;
          }
          if (local_70 + 1 < param_2_00) {
            param_1_00[local_70 + 1] = (local_5c >> 6) + 0x30;
          }
          if (local_70 + 2 < param_2_00) {
            param_1_00[local_70 + 2] = (local_5c >> 3 & 7) + 0x30;
          }
          local_70 = local_70 + 3;
          local_5c = (local_5c & 7) + 0x30;
        }
        uVar10 = local_38 + 1;
        if (local_60 <= uVar10) break;
        if (local_70 < param_2_00) {
          param_1_00[local_70] = local_5c;
        }
        local_70 = local_70 + 1;
        local_5c = param_3_00[uVar10];
        local_38 = uVar10;
      }
      goto LAB_08049290;
    case 7:
      bVar3 = 0x61;
      goto LAB_080492be;
    case 8:
      bVar3 = 0x62;
      goto LAB_080492be;
    case 9:
      bVar3 = 0x74;
      goto joined_r0x08049380;
    case 10:
      bVar3 = 0x6e;
      goto joined_r0x08049380;
    case 0xb:
      bVar3 = 0x76;
      goto LAB_080492be;
    case 0xc:
      bVar3 = 0x66;
      goto LAB_080492be;
    case 0xd:
      bVar3 = 0x72;
      goto joined_r0x08049380;
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
switchD_08049015_caseD_20:
      if (param_2 == 1) goto LAB_08049386;
      break;
    case 0x23:
    case 0x7e:
      if (local_38 == 0) goto switchD_08049015_caseD_20;
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
      if (param_2 == 1) {
LAB_08049386:
        uVar10 = quotearg_buffer_restyled(param_1,2,param_3);
        return uVar10;
      }
      if (param_2 == 2) {
        if (local_70 < param_2_00) {
          param_1_00[local_70] = 0x27;
        }
        if (local_70 + 1 < param_2_00) {
          param_1_00[local_70 + 1] = 0x5c;
        }
        if (local_70 + 2 < param_2_00) {
          param_1_00[local_70 + 2] = 0x27;
        }
LAB_08049372:
        local_70 = local_70 + 3;
        bVar3 = local_5c;
      }
      break;
    case 0x3f:
      if (param_2 == 1) goto LAB_08049386;
      if (((param_2 == 3) && (uVar10 = local_38 + 2, uVar10 < param_1)) &&
         (param_3_00[local_38 + 1] == '?')) {
        local_5c = param_3_00[local_38 + 2];
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
          if (local_70 < param_2_00) {
            param_1_00[local_70] = 0x3f;
          }
          if (local_70 + 1 < param_2_00) {
            param_1_00[local_70 + 1] = 0x5c;
          }
          local_38 = uVar10;
          if (local_70 + 2 < param_2_00) {
            param_1_00[local_70 + 2] = 0x3f;
          }
          goto LAB_08049372;
        }
      }
      break;
    case 0x5c:
joined_r0x08049380:
      if (param_2 != 1) {
LAB_080492be:
        uVar10 = local_38 + 1;
        if (bVar2) goto LAB_0804926b;
        goto LAB_08049290;
      }
      goto LAB_08049386;
    }
    local_5c = bVar3;
    uVar10 = local_38 + 1;
    if ((bVar2) &&
       (bVar3 = local_5c,
       (*(int *)(param_3 + 4 + (uint)(local_5c >> 5) * 4) >> (local_5c & 0x1f) & 1U) != 0)) {
LAB_0804926b:
      local_5c = bVar3;
      if (local_70 < param_2_00) {
        param_1_00[local_70] = 0x5c;
      }
      local_70 = local_70 + 1;
      uVar10 = local_38 + 1;
    }
LAB_08049290:
    if (local_70 < param_2_00) {
      param_1_00[local_70] = local_5c;
    }
    local_70 = local_70 + 1;
    local_38 = uVar10;
  } while( true );
joined_r0x080494f0:
  if (cVar1 == '\0') goto LAB_080494ce;
  local_60 = local_60 + 1;
  if (param_1 <= local_38 + local_60) goto LAB_080494ce;
  cVar1 = param_3_00[local_38 + local_60];
  goto joined_r0x080494f0;
}



void quotearg_buffer(void)

{
  int iVar1;
  int *piVar2;
  undefined4 param_4;
  undefined4 *param_5;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = &default_quoting_options;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  quotearg_buffer_restyled(param_4,*param_5,param_5);
  *piVar2 = iVar1;
  return;
}



undefined1 * __regparm3
quotearg_n_options(uint param_1_00,undefined4 param_2,undefined4 param_3,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *__ptr;
  undefined4 *puVar6;
  undefined *puVar7;
  uint uVar8;
  
  piVar4 = __errno_location();
  iVar2 = *piVar4;
  if ((int)param_1_00 < 0) {
                    // WARNING: Subroutine does not return
    abort();
  }
  if (nslots_1 <= param_1_00) {
    uVar8 = param_1_00 + 1;
    if (0x1fffffff < uVar8) {
                    // WARNING: Subroutine does not return
      xalloc_die();
    }
    puVar6 = (undefined4 *)slotvec_3;
    if ((undefined4 *)slotvec_3 == &slotvec0_2) {
      puVar6 = (undefined4 *)xmalloc(8);
      uVar3 = slotvec0_2;
      slotvec_3 = (undefined *)puVar6;
      puVar6[1] = PTR_slot0_0_0804b7e0;
      *puVar6 = uVar3;
    }
    slotvec_3 = (undefined *)xrealloc(puVar6,uVar8 * 8);
    puVar6 = (undefined4 *)(slotvec_3 + nslots_1 * 8);
    uVar5 = (uVar8 - nslots_1) * 8;
    if ((7 < uVar5) && (((uint)puVar6 & 4) != 0)) {
      *puVar6 = 0;
      uVar5 = uVar5 - 4;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 >> 2; nslots_1 = uVar8, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  uVar8 = *(uint *)(slotvec_3 + param_1_00 * 8);
  __ptr = *(undefined1 **)(slotvec_3 + param_1_00 * 8 + 4);
  uVar5 = quotearg_buffer(__ptr,uVar8,param_2,param_3,param_1);
  puVar7 = slotvec_3;
  if (uVar8 <= uVar5) {
    iVar1 = uVar5 + 1;
    *(int *)(slotvec_3 + param_1_00 * 8) = iVar1;
    if (__ptr != slot0_0) {
      free(__ptr);
      puVar7 = slotvec_3;
    }
    __ptr = (undefined1 *)xmalloc(iVar1);
    *(undefined1 **)(puVar7 + param_1_00 * 8 + 4) = __ptr;
    quotearg_buffer(__ptr,iVar1,param_2,param_3,param_1);
  }
  piVar4 = __errno_location();
  *piVar4 = iVar2;
  return __ptr;
}



void quotearg_char(undefined4 param_1,char param_2)

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
  
  local_3c = default_quoting_options;
  local_38 = DAT_0804b924;
  local_34 = DAT_0804b928;
  local_30 = DAT_0804b92c;
  local_2c = DAT_0804b930;
  local_28 = DAT_0804b934;
  local_24 = DAT_0804b938;
  local_20 = DAT_0804b93c;
  local_1c = DAT_0804b940;
  set_char_quoting(&local_3c,(int)param_2,1);
  quotearg_n_options(&local_3c);
  return;
}



void quotearg_colon(undefined4 param_1)

{
  quotearg_char(param_1,0x3a);
  return;
}



void quotearg_n_style_mem(void)

{
  undefined local_3c [52];
  
  quoting_options_from_style();
  quotearg_n_options(local_3c);
  return;
}



void quotearg_n_style(void)

{
  undefined local_3c [52];
  
  quoting_options_from_style();
  quotearg_n_options(local_3c);
  return;
}



void quotearg_style(undefined4 param_1,undefined4 param_2)

{
  quotearg_n_style(0,param_1,param_2);
  return;
}



void quotearg_n(void)

{
  undefined4 *param_1;
  
  param_1 = &default_quoting_options;
  quotearg_n_options();
  return;
}



void quotearg(undefined4 param_1)

{
  quotearg_n(0,param_1);
  return;
}



void version_etc_va(FILE *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

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
  fputs_unlocked(version_etc_copyright,param_1);
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



void version_etc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  version_etc_va(param_1,param_2,param_3,param_4,&stack0x00000014);
  return;
}



void xalloc_die(void)

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



void xcalloc(uint param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_1 <= (uint)(0xffffffff / (ulonglong)param_2)) {
    pvVar1 = calloc(param_1,param_2);
    if (pvVar1 != (void *)0x0) {
      return;
    }
  }
                    // WARNING: Subroutine does not return
  xalloc_die();
}



void xrealloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  xalloc_die();
}



void x2realloc(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (param_1 == 0) {
    if (iVar1 == 0) {
      iVar1 = 0x40;
    }
  }
  else {
    if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
      xalloc_die();
    }
    iVar1 = iVar1 * 2;
  }
  *param_2 = iVar1;
  xrealloc();
  return;
}



void x2nrealloc(int param_1,uint *param_2,uint param_3)

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
      xalloc_die();
    }
    uVar2 = uVar2 * 2;
  }
  *param_2 = uVar2;
  xrealloc();
  return;
}



void xnrealloc(void *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  if (param_2 <= (uint)(0xffffffff / (ulonglong)param_3)) {
    pvVar1 = realloc(param_1,param_2 * param_3);
    if (pvVar1 != (void *)0x0) {
      return;
    }
  }
                    // WARNING: Subroutine does not return
  xalloc_die();
}



void xmalloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  xalloc_die();
}



void xclone(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)xmalloc(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}



void xzalloc(size_t param_1)

{
  void *__s;
  
  __s = (void *)xmalloc(param_1);
  memset(__s,0,param_1);
  return;
}



void xnmalloc(uint param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_1 <= (uint)(0xffffffff / (ulonglong)param_2)) {
    pvVar1 = malloc(param_1 * param_2);
    if (pvVar1 != (void *)0x0) {
      return;
    }
  }
                    // WARNING: Subroutine does not return
  xalloc_die();
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x08049e04)
// WARNING: Removing unreachable block (ram,0x08049e0e)

void __libc_csu_fini(void)

{
  _fini();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x08049e66)
// WARNING: Removing unreachable block (ram,0x08049e70)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = __cxa_atexit(__func,0,__dso_handle);
  return iVar1;
}



undefined4 __regparm3 __do_global_ctors_aux(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  code **ppcVar2;
  
  ppcVar2 = &__CTOR_LIST__;
  pcVar1 = __CTOR_LIST__;
  if (__CTOR_LIST__ != (code *)0xffffffff) {
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return param_2;
}



void __regparm3 _fini(undefined4 param_1)

{
  __do_global_dtors_aux(param_1);
  return;
}


