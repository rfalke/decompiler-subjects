typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
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
    char _unused2[56];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef long __time_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef __time_t time_t;

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType {
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
} Elf_ProgramHeaderType;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef enum Elf64_DynTag {
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
} Elf64_DynTag;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___0105dff8;
  if (PTR___gmon_start___0105dff8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___0105dff8)();
  }
  return (int)puVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  (*(code *)PTR___libc_start_main_0105dff0)
            (FUN_00400da9,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3
             ,auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00400941)
// WARNING: Removing unreachable block (ram,0x0040094b)

void FUN_00400930(void)

{
  return;
}



void _FINI_0(void)

{
  if (DAT_0105e088 == '\0') {
    FUN_00400930();
    DAT_0105e088 = 1;
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00400983)
// WARNING: Removing unreachable block (ram,0x0040098d)

void _INIT_0(void)

{
  return;
}



undefined4 FUN_004009d7(long **param_1)

{
  long *__ptr;
  undefined4 uVar1;
  
  if ((param_1 == (long **)0x0) || (*param_1 == (long *)0x0)) {
    uVar1 = 0;
  }
  else {
    __ptr = *param_1;
    *param_1 = (long *)**param_1;
    uVar1 = *(undefined4 *)(__ptr + 1);
    *(undefined4 *)(__ptr + 1) = 0;
    *__ptr = 0;
    free(__ptr);
  }
  return uVar1;
}



undefined8 FUN_00400a52(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)0x0;
  local_20 = (undefined8 *)*param_1;
  while (local_20 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*local_20;
    *local_20 = local_18;
    local_18 = local_20;
    local_20 = puVar1;
  }
  *param_1 = local_18;
  return 0;
}



undefined8 FUN_00400aae(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    puVar2 = (undefined8 *)malloc(0x10);
    if (puVar2 == (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      exit(0);
    }
    *(undefined4 *)(puVar2 + 1) = param_2;
    *puVar2 = *param_1;
    *param_1 = puVar2;
    uVar1 = 0;
  }
  return uVar1;
}



long * FUN_00400b14(long **param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long **local_20;
  
  if (param_1 == (long **)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    if (*param_1 == (long *)0x0) {
      local_20 = (long **)malloc(0x10);
      if (local_20 == (long **)0x0) {
                    // WARNING: Subroutine does not return
        exit(0);
      }
      *(undefined4 *)(local_20 + 1) = param_2;
      *local_20 = *param_1;
    }
    else {
      plVar1 = *param_1;
      lVar2 = FUN_00400b14(*param_1,param_2);
      *plVar1 = lVar2;
      local_20 = (long **)*param_1;
    }
    *param_1 = (long *)local_20;
    plVar1 = *param_1;
  }
  return plVar1;
}



void FUN_00400bbf(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  
  if (param_1 != (undefined8 *)0x0) {
    local_18 = (undefined8 *)*param_1;
    while (local_18 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*local_18;
      *(undefined4 *)(local_18 + 1) = 0;
      *local_18 = 0;
      free(local_18);
      local_18 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}



void FUN_00400c33(long **param_1,int param_2)

{
  long *__ptr;
  long **local_20;
  
  local_20 = param_1;
  while (*local_20 != (long *)0x0) {
    __ptr = *local_20;
    if (param_2 == *(int *)(*local_20 + 1)) {
      *local_20 = (long *)**local_20;
      *(undefined4 *)(__ptr + 1) = 0;
      *__ptr = 0;
      free(__ptr);
    }
    else {
      local_20 = (long **)*local_20;
    }
  }
  return;
}



ulong FUN_00400cb5(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = (ulong)param_2;
  }
  else {
    uVar1 = FUN_00400cb5(*param_1,param_2 + 1);
  }
  return uVar1;
}



void FUN_00400ce9(undefined8 param_1)

{
  FUN_00400cb5(param_1,0);
  return;
}



undefined4 FUN_00400d08(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *local_20;
  int local_10;
  
  iVar1 = FUN_00400ce9(param_1);
  local_20 = param_1;
  for (local_10 = 0; param_2 != (iVar1 + -1) - local_10; local_10 = local_10 + 1) {
    local_20 = (undefined8 *)*local_20;
  }
  return *(undefined4 *)(local_20 + 1);
}



void FUN_00400d55(undefined8 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *local_20;
  int local_10;
  
  iVar1 = FUN_00400ce9(param_1);
  local_20 = param_1;
  for (local_10 = 0; param_2 != (iVar1 + -1) - local_10; local_10 = local_10 + 1) {
    local_20 = (undefined8 *)*local_20;
  }
  *(undefined4 *)(local_20 + 1) = param_3;
  return;
}



void FUN_00400da9(void)

{
  time_t tVar1;
  undefined auStack184456 [9536];
  undefined auStack174920 [9536];
  undefined auStack165384 [11104];
  undefined auStack154280 [11104];
  undefined auStack143176 [143160];
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  memcpy(auStack184456,&DAT_00e4dc00,0x253c);
  memcpy(auStack174920,&DAT_00e50140,0x253c);
  memcpy(auStack165384,&DAT_00e52680,0x2b5c);
  memcpy(auStack154280,&DAT_00e551e0,0x2b5c);
  memcpy(auStack143176,&PTR_LAB_00e57d40,0x56b8);
  return;
}



// WARNING: Instruction at (ram,0x00e4db20) overlaps instruction at (ram,0x00e4db1d)
// 
// WARNING: Removing unreachable block (ram,0x00e4db29)

long FUN_00e4db15(long param_1)

{
  return param_1 + 0x350000;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


