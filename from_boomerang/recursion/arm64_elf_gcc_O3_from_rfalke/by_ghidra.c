typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ulong sizetype;

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
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
    undefined field24_0x84;
    undefined field25_0x85;
    undefined field26_0x86;
    undefined field27_0x87;
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
};

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
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
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
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

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
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
    PT_GNU_RELRO=1685382482,
    PT_AARCH64_ARCHEXT=1879048192
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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00100680(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
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

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



int main(int argc)

{
  printf("a(%d)\n");
  printf("b(%d)\n",(ulong)(uint)(argc * 3));
  c(argc * 3 - 1);
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100780)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x001007a8)
// WARNING: Removing unreachable block (ram,0x001007b4)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x001007e4)
// WARNING: Removing unreachable block (ram,0x001007f0)

void register_tm_clones(void)

{
  return;
}



void FUN_001007fc(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  if (___JCR_END__ == 0) {
    register_tm_clones();
    return;
  }
  _Jv_RegisterClasses();
  register_tm_clones();
  return;
}



void g(int x)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = x - 2;
  uVar2 = x - 1;
  uVar4 = x - 3;
  uVar6 = x - 5;
  uVar5 = x - 4;
  while( true ) {
    printf("g(%d)\n",(ulong)(uint)x);
    if (x < 2) {
      return;
    }
    printf("f(%d)\n",(ulong)uVar2);
    if (uVar2 == 1) {
      return;
    }
    printf("g(%d)\n",(ulong)uVar3);
    if ((int)uVar3 < 2) {
      return;
    }
    printf("f(%d)\n",(ulong)uVar4);
    uVar3 = uVar3 - 6;
    uVar2 = uVar2 - 6;
    if ((int)uVar4 < 2) break;
    printf("g(%d)\n",(ulong)uVar5);
    x = x - 6;
    if ((int)uVar5 < 2) {
      return;
    }
    printf("f(%d)\n",(ulong)uVar6);
    bVar1 = (int)uVar6 < 2;
    uVar4 = uVar4 - 6;
    uVar6 = uVar6 - 6;
    uVar5 = uVar5 - 6;
    if (bVar1) {
      return;
    }
  }
  return;
}



void c(int x)

{
  printf("c(%d)\n",(ulong)(uint)x);
  switch(x) {
  case 2:
    break;
  case 3:
    printf("f(%d)\n",3);
    printf("g(%d)\n",2);
    printf("f(%d)\n",1);
    return;
  case 4:
    printf("h(%d)\n",4);
    printf("i(%d)\n",3);
    return;
  case 5:
    printf("j(%d)\n",5);
    printf("k(%d)\n",5);
    printf("e(%d)\n",4);
    printf("c(%d)\n",2);
    break;
  case 6:
    printf("l(%d)\n",6);
    printf("b(%d)\n",8);
    printf("c(%d)\n",7);
    return;
  default:
    return;
  }
  printf("d(%d)\n",2);
  printf("e(%d)\n",1);
  printf("c(%d)\n",0);
  return;
}



void e(int x)

{
  printf("e(%d)\n");
  printf("c(%d)\n",(ulong)(uint)(x >> 1));
  switch(x >> 1) {
  case 2:
    printf("d(%d)\n",2);
    printf("e(%d)\n",1);
    c(0);
    return;
  case 3:
    printf("f(%d)\n",3);
    printf("g(%d)\n",2);
    printf("f(%d)\n",1);
    return;
  case 4:
    printf("h(%d)\n",4);
    printf("i(%d)\n",3);
    return;
  case 5:
    printf("j(%d)\n",5);
    printf("k(%d)\n",5);
    printf("e(%d)\n",4);
    c(2);
    return;
  case 6:
    printf("l(%d)\n",6);
    printf("b(%d)\n",8);
    c(7);
    return;
  default:
    return;
  }
}



void f(int x)

{
  printf("f(%d)\n",(ulong)(uint)x);
  if (((((((1 < x) && (printf("g(%d)\n",(ulong)(x - 1U)), x - 1U != 1)) &&
         (printf("f(%d)\n",(ulong)(x - 2U)), x - 2U != 1)) &&
        ((printf("g(%d)\n",(ulong)(x - 3U)), 1 < (int)(x - 3U) &&
         (printf("f(%d)\n",(ulong)(x - 4U)), 1 < (int)(x - 4U))))) &&
       ((printf("g(%d)\n",(ulong)(x - 5U)), 1 < (int)(x - 5U) &&
        ((printf("f(%d)\n",(ulong)(x - 6U)), 1 < (int)(x - 6U) &&
         (printf("g(%d)\n",(ulong)(x - 7U)), 1 < (int)(x - 7U))))))) &&
      (printf("f(%d)\n",(ulong)(x - 8U)), 1 < (int)(x - 8U))) &&
     (((((printf("g(%d)\n",(ulong)(x - 9U)), 1 < (int)(x - 9U) &&
         (printf("f(%d)\n",(ulong)(x - 10U)), 1 < (int)(x - 10U))) &&
        (printf("g(%d)\n",(ulong)(x - 0xbU)), 1 < (int)(x - 0xbU))) &&
       (((printf("f(%d)\n",(ulong)(x - 0xcU)), 1 < (int)(x - 0xcU) &&
         (printf("g(%d)\n",(ulong)(x - 0xdU)), 1 < (int)(x - 0xdU))) &&
        ((printf("f(%d)\n",(ulong)(x - 0xeU)), 1 < (int)(x - 0xeU) &&
         ((printf("g(%d)\n",(ulong)(x - 0xfU)), 1 < (int)(x - 0xfU) &&
          (printf("f(%d)\n",(ulong)(x - 0x10U)), 1 < (int)(x - 0x10U))))))))) &&
      ((printf("g(%d)\n",(ulong)(x - 0x11U)), 1 < (int)(x - 0x11U) &&
       (printf("f(%d)\n",(ulong)(x - 0x12U)), 1 < (int)(x - 0x12U))))))) {
    g(x + -0x13);
    return;
  }
  return;
}



ulong FUN_00100e44(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  
  printf("b(%d)\n",(ulong)param_1);
  uVar1 = printf("c(%d)\n",(ulong)(param_1 - 1));
  switch(param_1) {
  case 3:
    printf("d(%d)\n",2);
    printf("e(%d)\n",1);
    uVar2 = 0;
    c(0);
    return uVar2;
  case 4:
    printf("f(%d)\n",3);
    printf("g(%d)\n",2);
    uVar1 = printf("f(%d)\n",1);
    return (ulong)uVar1;
  case 5:
    printf("h(%d)\n",4);
    uVar1 = printf("i(%d)\n",3);
    return (ulong)uVar1;
  case 6:
    printf("j(%d)\n",5);
    printf("k(%d)\n",5);
    printf("e(%d)\n",4);
    uVar2 = 2;
    c(2);
    return uVar2;
  case 7:
    printf("l(%d)\n",6);
    printf("b(%d)\n",8);
    uVar2 = 7;
    c(7);
    return uVar2;
  default:
    return (ulong)uVar1;
  }
}



void b(int x)

{
  printf("b(%d)\n",(ulong)(uint)x);
  printf("c(%d)\n",(ulong)(x - 1));
  switch(x) {
  case 3:
    printf("d(%d)\n",2);
    printf("e(%d)\n",1);
    c(0);
    return;
  case 4:
    printf("f(%d)\n",3);
    printf("g(%d)\n",2);
    printf("f(%d)\n",1);
    return;
  case 5:
    printf("h(%d)\n",4);
    printf("i(%d)\n",3);
    return;
  case 6:
    printf("j(%d)\n",5);
    printf("k(%d)\n",5);
    printf("e(%d)\n",4);
    c(2);
    return;
  case 7:
    printf("l(%d)\n",6);
    printf("b(%d)\n",8);
    c(7);
    return;
  default:
    return;
  }
}



void d(int x)

{
  uint uVar1;
  
  printf("d(%d)\n",(ulong)(uint)x);
  if (1 < x) {
    uVar1 = x + -1 >> 1;
    printf("e(%d)\n");
    printf("c(%d)\n",(ulong)uVar1);
    switch(uVar1) {
    case 2:
      printf("d(%d)\n",2);
      printf("e(%d)\n",1);
      c(0);
      return;
    case 3:
      printf("f(%d)\n",3);
      printf("g(%d)\n",2);
      printf("f(%d)\n",1);
      return;
    case 4:
      printf("h(%d)\n",4);
      printf("i(%d)\n",3);
      return;
    case 5:
      printf("j(%d)\n",5);
      printf("k(%d)\n",5);
      printf("e(%d)\n",4);
      c(2);
      return;
    case 6:
      printf("l(%d)\n",6);
      printf("b(%d)\n",8);
      c(7);
      return;
    }
  }
  return;
}



int FUN_00101144(uint param_1)

{
  int iVar1;
  
  iVar1 = printf("h(%d)\n",(ulong)param_1);
  if (0 < (int)param_1) {
    iVar1 = printf("i(%d)\n",(ulong)(param_1 - 1));
    return iVar1;
  }
  return iVar1;
}



void h(int x)

{
  printf("h(%d)\n",(ulong)(uint)x);
  if (0 < x) {
    printf("i(%d)\n",(ulong)(x - 1));
    return;
  }
  return;
}



void i(int x)

{
  printf("i(%d)\n",(ulong)(uint)x);
  return;
}



void j(int x)

{
  printf("j(%d)\n",(ulong)(uint)x);
  if (1 < x) {
    printf("k(%d)\n",(ulong)(uint)x);
    printf("e(%d)\n",(ulong)(x - 1U));
    c((int)(x - 1U) >> 1);
    return;
  }
  return;
}



ulong FUN_00101214(uint param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = printf("k(%d)\n",(ulong)param_1);
  if (1 < (int)param_1) {
    uVar1 = (int)(param_1 - 1) >> 1;
    printf("e(%d)\n");
    uVar2 = printf("c(%d)\n",(ulong)uVar1);
    switch(uVar1) {
    case 2:
      printf("d(%d)\n",2);
      printf("e(%d)\n",1);
      uVar3 = 0;
      c(0);
      return uVar3;
    case 3:
      printf("f(%d)\n",3);
      printf("g(%d)\n",2);
      uVar2 = printf("f(%d)\n",1);
      return (ulong)uVar2;
    case 4:
      printf("h(%d)\n",4);
      uVar2 = printf("i(%d)\n",3);
      return (ulong)uVar2;
    case 5:
      printf("j(%d)\n",5);
      printf("k(%d)\n",5);
      printf("e(%d)\n",4);
      uVar3 = 2;
      c(2);
      return uVar3;
    case 6:
      printf("l(%d)\n",6);
      printf("b(%d)\n",8);
      uVar3 = 7;
      c(7);
      return uVar3;
    }
  }
  return (ulong)uVar2;
}



void k(int x)

{
  uint uVar1;
  
  printf("k(%d)\n",(ulong)(uint)x);
  if (1 < x) {
    uVar1 = x + -1 >> 1;
    printf("e(%d)\n");
    printf("c(%d)\n",(ulong)uVar1);
    switch(uVar1) {
    case 2:
      printf("d(%d)\n",2);
      printf("e(%d)\n",1);
      c(0);
      return;
    case 3:
      printf("f(%d)\n",3);
      printf("g(%d)\n",2);
      printf("f(%d)\n",1);
      return;
    case 4:
      printf("h(%d)\n",4);
      printf("i(%d)\n",3);
      return;
    case 5:
      printf("j(%d)\n",5);
      printf("k(%d)\n",5);
      printf("e(%d)\n",4);
      c(2);
      return;
    case 6:
      printf("l(%d)\n",6);
      printf("b(%d)\n",8);
      c(7);
      return;
    }
  }
  return;
}



ulong FUN_001013b4(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = printf("l(%d)\n",(ulong)param_1);
  if (1 < (int)param_1) {
    printf("b(%d)\n",(ulong)(param_1 + 2));
    uVar1 = printf("c(%d)\n",(ulong)(param_1 + 1));
    switch(param_1) {
    case 2:
      printf("f(%d)\n",3);
      printf("g(%d)\n",2);
      uVar1 = printf("f(%d)\n",1);
      return (ulong)uVar1;
    case 3:
      printf("h(%d)\n",4);
      uVar1 = printf("i(%d)\n",3);
      return (ulong)uVar1;
    case 4:
      printf("j(%d)\n",5);
      printf("k(%d)\n",5);
      printf("e(%d)\n",4);
      uVar2 = 2;
      c(2);
      return uVar2;
    case 5:
      printf("l(%d)\n",6);
      printf("b(%d)\n",8);
      uVar2 = 7;
      c(7);
      return uVar2;
    }
  }
  return (ulong)uVar1;
}



void l(int x)

{
  printf("l(%d)\n",(ulong)(uint)x);
  if (1 < x) {
    printf("b(%d)\n",(ulong)(x + 2));
    printf("c(%d)\n",(ulong)(x + 1));
    switch(x) {
    case 2:
      printf("f(%d)\n",3);
      printf("g(%d)\n",2);
      printf("f(%d)\n",1);
      return;
    case 3:
      printf("h(%d)\n",4);
      printf("i(%d)\n",3);
      return;
    case 4:
      printf("j(%d)\n",5);
      printf("k(%d)\n",5);
      printf("e(%d)\n",4);
      c(2);
      return;
    case 5:
      printf("l(%d)\n",6);
      printf("b(%d)\n",8);
      c(7);
      return;
    }
  }
  return;
}



void FUN_0010151c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x0010151c. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0,0x10151c);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



undefined8 __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined8 uVar2;
  long lVar3;
  
  _init(param_1);
  lVar3 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (**ppcVar1)((ulong)param_1 & 0xffffffff,param_2,param_3);
  } while (lVar3 != 1);
  return uVar2;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


