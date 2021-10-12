typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef int    wchar_t;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

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

typedef struct _IO_FILE __FILE;

typedef struct _IO_FILE FILE;

typedef void (* __sighandler_t)(int);

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_AARCH64_ARCHEXT=1879048192,
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
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_AARCH64_ATTRIBUTES=1879048195,
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
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct Gnu_DebugLink Gnu_DebugLink, *PGnu_DebugLink;

struct Gnu_DebugLink {
    char filename[32]; // Debug file name
    dword crc;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
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
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
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
  FUN_00101498();
  return;
}



void FUN_00100da0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _exit(int __status)

{
                    // WARNING: Subroutine does not return
  _exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



void __fpending(void)

{
  __fpending();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void bindtextdomain(void)

{
  bindtextdomain();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void __printf_chk(void)

{
  __printf_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t wcslen(wchar_t *__s)

{
  size_t sVar1;
  
  sVar1 = wcslen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = feof(__stream);
  return iVar1;
}



void textdomain(void)

{
  textdomain();
  return;
}



void getopt_long(void)

{
  getopt_long();
  return;
}



void __fprintf_chk(void)

{
  __fprintf_chk();
  return;
}



void warn(void)

{
  warn();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen64(__filename,__modes);
  return pFVar1;
}



void warnx(void)

{
  warnx();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputws(wchar_t *__ws,__FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputws(__ws,__stream);
  return iVar1;
}



void dcgettext(void)

{
  dcgettext();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



void err(void)

{
  err();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = setlocale(__category,__locale);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = ferror(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

wchar_t * fgetws(wchar_t *__ws,int __n,__FILE *__stream)

{
  wchar_t *pwVar1;
  
  pwVar1 = fgetws(__ws,__n,__stream);
  return pwVar1;
}



undefined4 FUN_00100fc0(undefined4 param_1,long param_2)

{
  wchar_t wVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  FILE *pFVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  char *pcVar11;
  long lVar12;
  size_t __size;
  undefined4 local_14;
  char *local_10;
  char **local_8;
  
  pFVar6 = stdin;
  setlocale(6,"");
  bindtextdomain("util-linux","/usr/share/locale");
  textdomain("util-linux");
  FUN_00101740(FUN_00101580);
  signal(2,FUN_00101570);
  signal(0xf,FUN_00101570);
  iVar3 = getopt_long(param_1,param_2,&DAT_001017c0,&PTR_s_version_0011fc28,0);
  if (iVar3 == -1) {
    lVar12 = (long)optind;
    pwVar5 = (wchar_t *)malloc(0x8000);
    local_8 = (char **)(param_2 + lVar12 * 8);
    if (pwVar5 != (wchar_t *)0x0) {
      pcVar11 = *(char **)(param_2 + lVar12 * 8);
      local_14 = 0;
      local_10 = "stdin";
      lVar12 = 0x2000;
      DAT_00120010 = pwVar5;
      if (pcVar11 == (char *)0x0) goto LAB_00101140;
      while( true ) {
        pFVar6 = fopen64(pcVar11,"r");
        if (pFVar6 != (FILE *)0x0) break;
        uVar4 = dcgettext(0,"cannot open %s",5);
        local_14 = 1;
        warn(uVar4,*local_8);
        local_8 = local_8 + 1;
LAB_00101254:
        pcVar11 = *local_8;
        if (pcVar11 == (char *)0x0) {
          free(DAT_00120010);
          return local_14;
        }
      }
      local_10 = *local_8;
      local_8 = local_8 + 1;
LAB_00101140:
      do {
        pwVar5 = DAT_00120010;
        do {
          pwVar7 = fgetws(pwVar5,(int)lVar12,(__FILE *)pFVar6);
          pwVar5 = DAT_00120010;
          if (pwVar7 == (wchar_t *)0x0) {
            iVar3 = ferror(pFVar6);
            if (iVar3 != 0) {
              local_14 = 1;
              warn(&DAT_00101930,local_10);
            }
            fclose(pFVar6);
            goto LAB_00101254;
          }
          sVar8 = wcslen(DAT_00120010);
        } while (sVar8 == 0);
        wVar1 = pwVar5[sVar8 - 1];
        lVar2 = lVar12;
        while (lVar12 = lVar2, wVar1 != L'\n') {
          iVar3 = feof(pFVar6);
          if (iVar3 != 0) {
LAB_001011f4:
            pwVar5 = DAT_00120010;
            if (DAT_00120010[sVar8 - 1] != L'\n') goto LAB_00101204;
            break;
          }
          __size = lVar2 * 8;
          pwVar5 = (wchar_t *)realloc(pwVar5,__size);
          lVar12 = lVar2 << 1;
          if (pwVar5 == (wchar_t *)0x0 && __size != 0) {
            iVar3 = err(1,"cannot allocate %zu bytes",__size);
            goto LAB_00101304;
          }
          DAT_00120010 = pwVar5;
          pwVar7 = fgetws(pwVar5 + sVar8,(int)lVar2,(__FILE *)pFVar6);
          pwVar5 = DAT_00120010;
          if (pwVar7 == (wchar_t *)0x0) goto LAB_001011f4;
          sVar8 = wcslen(DAT_00120010);
          lVar2 = lVar12;
          wVar1 = pwVar5[sVar8 - 1];
        }
        pwVar5[sVar8] = L'\0';
        sVar8 = sVar8 - 1;
LAB_00101204:
        if (sVar8 >> 1 != 0) {
          pwVar7 = pwVar5 + sVar8;
          pwVar9 = pwVar5;
          do {
            wVar1 = *pwVar9;
            pwVar10 = pwVar9 + 1;
            *pwVar9 = pwVar7[-1];
            pwVar7 = pwVar7 + -1;
            *pwVar7 = wVar1;
            pwVar9 = pwVar10;
          } while (pwVar10 != pwVar5 + (sVar8 >> 1));
        }
        fputws(pwVar5,stdout);
      } while( true );
    }
    err(1,"cannot allocate %zu bytes",0x8000);
  }
  else {
    if (iVar3 == 0x56) {
      uVar4 = dcgettext(0,"%s from %s\n",5);
      __printf_chk(1,uVar4,program_invocation_short_name,"util-linux 2.30.2");
                    // WARNING: Subroutine does not return
      exit(0);
    }
LAB_00101304:
    pFVar6 = stderr;
    if (iVar3 != 0x68) {
      uVar4 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
      __fprintf_chk(pFVar6,1,uVar4,program_invocation_short_name);
                    // WARNING: Subroutine does not return
      exit(1);
    }
  }
  pFVar6 = (FILE *)stdout;
  uVar4 = dcgettext(0,"Usage: %s [options] [file ...]\n",5);
  __fprintf_chk(pFVar6,1,uVar4,program_invocation_short_name);
  fputc(10,pFVar6);
  pcVar11 = (char *)dcgettext(0,"Reverse lines characterwise.\n",5);
  fputs(pcVar11,pFVar6);
  pcVar11 = (char *)dcgettext(0,"\nOptions:\n",5);
  fputs(pcVar11,pFVar6);
  pcVar11 = (char *)dcgettext(0," -h, --help     display this help and exit\n",5);
  fputs(pcVar11,pFVar6);
  pcVar11 = (char *)dcgettext(0," -V, --version  output version information and exit\n",5);
  fputs(pcVar11,pFVar6);
  uVar4 = dcgettext(0,"\nFor more details see %s.\n",5);
  __fprintf_chk(pFVar6,1,uVar4,"rev(1)");
                    // WARNING: Subroutine does not return
  exit((uint)(stderr == pFVar6));
}



void entry(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(FUN_00100fc0,in_stack_00000000,&stack0x00000008,FUN_001016b8,FUN_00101738,
                    param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x001014a8)

void FUN_00101498(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x001014c8)
// WARNING: Removing unreachable block (ram,0x001014d4)

void FUN_001014b0(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101504)
// WARNING: Removing unreachable block (ram,0x00101510)

void FUN_001014e0(void)

{
  return;
}



void FUN_0010151c(void)

{
  if (DAT_00120008 == '\0') {
    __cxa_finalize(&PTR_LOOP_0011fc20);
    FUN_001014b0();
    DAT_00120008 = '\x01';
  }
  return;
}



void _FINI_0(void)

{
  if (DAT_00120008 == '\0') {
    __cxa_finalize(&PTR_LOOP_0011fc20);
    FUN_001014b0();
    DAT_00120008 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00101504)
// WARNING: Removing unreachable block (ram,0x00101510)

void _INIT_0(void)

{
  return;
}



void FUN_0010156c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x0010156c. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0,0x10156c);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00101570(void)

{
                    // WARNING: Subroutine does not return
  _exit(0);
}



void FUN_00101580(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  pFVar1 = stdout;
  lVar4 = __fpending(stdout);
  iVar2 = ferror(pFVar1);
  iVar3 = fclose(pFVar1);
  if (iVar2 == 0) {
    if (iVar3 != 0) {
      piVar5 = __errno_location();
      iVar2 = *piVar5;
      if ((lVar4 != 0) || (iVar2 != 9)) goto LAB_001015dc;
    }
LAB_0010161c:
    pFVar1 = stderr;
    lVar4 = __fpending(stderr);
    iVar2 = ferror(pFVar1);
    iVar3 = fclose(pFVar1);
    if (iVar2 == 0) {
      if ((iVar3 == 0) || ((lVar4 == 0 && (piVar5 = __errno_location(), *piVar5 == 9)))) {
        return;
      }
    }
    else {
      if ((iVar3 == 0) && (piVar5 = __errno_location(), *piVar5 != 0x20)) {
        *piVar5 = 0;
      }
    }
  }
  else {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    if (iVar3 == 0) {
      if (iVar2 == 0x20) goto LAB_0010161c;
      *piVar5 = 0;
    }
    else {
LAB_001015dc:
      if (iVar2 == 0x20) goto LAB_0010161c;
      if (iVar2 != 0) {
        dcgettext(0,"write error",5);
        warn();
        goto LAB_00101664;
      }
    }
    dcgettext(0,"write error",5);
    warnx();
  }
LAB_00101664:
                    // WARNING: Subroutine does not return
  _exit(1);
}



void FUN_001016b8(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  long lVar2;
  
  _DT_INIT();
  lVar2 = 0;
  do {
    ppcVar1 = (code **)(&__DT_INIT_ARRAY + lVar2);
    lVar2 = lVar2 + 1;
    (**ppcVar1)(param_1,param_2,param_3);
  } while (lVar2 != 1);
  return;
}



void FUN_00101738(void)

{
  return;
}



void FUN_00101740(undefined8 param_1)

{
  __cxa_atexit(param_1,0,PTR_LOOP_0011fc20);
  return;
}



void _DT_FINI(void)

{
  return;
}


