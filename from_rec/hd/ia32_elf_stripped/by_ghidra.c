typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
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
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
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

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
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
    byte e_ident_pad[9];
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
  
  iVar1 = FUN_08048980();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

void perror(char *__s)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _xstat(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __libc_init(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcat(char *__dest,char *__src)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atexit(__func *__func)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __setfpucw(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void entry(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int __status;
  int unaff_retaddr;
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)&stack0x00000004;
  pcVar1 = (code *)swi(0x80);
  uVar2 = 0;
  (*pcVar1)(&stack0x00000004,&stack0x00000008 + unaff_retaddr * 4,0,0,0);
  environ = uVar2;
  __setfpucw((uint)__bss_start);
  __libc_init();
  atexit(_fini);
  _init(ctx);
  __status = FUN_080488e0();
                    // WARNING: Subroutine does not return
  exit(__status);
}



void FUN_08048620(void)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)&DAT_080499f8;
  if (DAT_080499f8 != 0) {
    do {
      (**ppcVar1)();
      ppcVar1 = ppcVar1 + 1;
    } while (*ppcVar1 != (code *)0x0);
  }
  return;
}



void FUN_08048650(void)

{
  return;
}



void FUN_08048660(int param_1,undefined4 param_2,int param_3)

{
  size_t sVar1;
  char cVar2;
  int local_58;
  char local_54 [9];
  char acStack75 [71];
  
  sprintf(local_54,"%08lX:",param_2);
  if (0x10 < param_3) {
    param_3 = 0x10;
  }
  local_58 = 0;
  while (local_58 < param_3) {
    sprintf(acStack75 + local_58 * 3," %02lX",(uint)*(byte *)(param_1 + local_58));
    local_58 = local_58 + 1;
  }
  while (local_58 < 0x10) {
    strcat(local_54,"   ");
    local_58 = local_58 + 1;
  }
  sVar1 = strlen(local_54);
  strcpy(local_54 + sVar1,"  |");
  local_58 = 0;
  while (local_58 < param_3) {
    if ((*(byte *)(param_1 + local_58) < 0x20) || (0x7e < *(byte *)(param_1 + local_58))) {
      cVar2 = '.';
    }
    else {
      cVar2 = *(char *)(param_1 + local_58);
    }
    local_54[sVar1 + local_58] = cVar2;
    local_58 = local_58 + 1;
  }
  while (local_58 < 0x10) {
    local_54[sVar1 + local_58] = ' ';
    local_58 = local_58 + 1;
  }
  strcpy(local_54 + local_58 + sVar1,"|");
  printf("%s\n",local_54);
  return;
}



undefined4 FUN_080487f0(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined local_5c [20];
  uint local_48;
  FILE *local_1c;
  uint local_18;
  undefined local_14 [16];
  
  iVar1 = FUN_08048950(param_1,local_5c);
  if (iVar1 == 0) {
    perror(param_1);
    uVar2 = 1;
  }
  else {
    local_1c = fopen(param_1,"rb");
    if (local_1c == (FILE *)0x0) {
      perror(param_1);
      uVar2 = 1;
    }
    else {
      local_18 = 0;
      while ((local_18 < local_48 && (sVar3 = fread(local_14,1,0x10,local_1c), sVar3 != 0))) {
        FUN_08048660(local_14,local_18,sVar3);
        local_18 = local_18 + sVar3;
      }
      fclose(local_1c);
      uVar2 = 0;
    }
  }
  return uVar2;
}



int FUN_080488e0(int param_1,int param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 1;
  while (local_8 < param_1) {
    iVar1 = FUN_080487f0(*(undefined4 *)(param_2 + local_8 * 4));
    local_c = local_c + iVar1;
    local_8 = local_8 + 1;
  }
  return local_c;
}



undefined4 FUN_08048950(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = _xstat(1,param_1,param_2);
  return uVar1;
}



void FUN_08048980(void)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)&DAT_080499ec;
  if (DAT_080499ec != -1) {
    do {
      (**ppcVar1)();
      ppcVar1 = ppcVar1 + -1;
    } while (*ppcVar1 != (code *)0xffffffff);
  }
  return;
}



void FUN_080489b0(void)

{
  return;
}



void _fini(void)

{
  FUN_08048620();
  return;
}


