typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef longlong long int;

typedef ulonglong sizetype;

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long int __off_t;

typedef long int __off64_t;

typedef long unsigned int size_t;

struct _IO_FILE {
    int _flags;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
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
    undefined field_0x84;
    undefined field_0x85;
    undefined field_0x86;
    undefined field_0x87;
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
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
};

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef enum _LIB_VERSION_TYPE {
    _IEEE_=-1,
    _ISOC_=3,
    _POSIX_=2,
    _SVID_=0,
    _XOPEN_=1
} _LIB_VERSION_TYPE;

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

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
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



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100738)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100760)
// WARNING: Removing unreachable block (ram,0x0010076c)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0010079c)
// WARNING: Removing unreachable block (ram,0x001007a8)

void register_tm_clones(void)

{
  return;
}



void FUN_001007b4(void)

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



void use(double x)

{
  printf((char *)x,&DAT_001023c8);
  return;
}



void use_int(int x)

{
  printf("%d",(ulonglong)(uint)x);
  return;
}



int read_ints(void)

{
  double sum;
  
  use((double)(int)global_char + 0.00000000 + (double)(int)global_short + (double)global_int +
      (double)global_long + (double)global_long_long);
  return 0x78;
}



int write_ints(double pi)

{
  global_char = (char)(int)pi;
  global_short = (short)(int)pi;
  global_int = (int)pi;
  global_long = (longlong)pi;
  global_long_long = (longlong)pi;
  return 0x79;
}



int read_floats(void)

{
  double x;
  double sum;
  
  x = (double)global_float + 0.00000000 + global_double;
  __extenddftf2(x,(double)global_float + 0.00000000);
  __addtf3(x,global_long_double._0_8_,x);
  __trunctfdf2();
  use(x);
  return 0x7a;
}



void write_floats(double pi)

{
  undefined8 uVar1;
  
  global_float = (float)pi;
  uVar1 = 0;
  global_double = pi;
  global_long_double._0_8_ = __extenddftf2(pi);
  global_long_double._8_8_ = uVar1;
  return;
}



void converting_between_floats_f1(void)

{
  global_float = (float)global_double;
  return;
}



void converting_between_floats_f2(void)

{
  global_float = (float)__trunctfsf2(global_long_double._0_8_);
  return;
}



void converting_between_floats_d1(void)

{
  global_double = (double)global_float;
  return;
}



void converting_between_floats_d2(void)

{
  global_double = (double)__trunctfdf2(global_long_double._0_8_);
  return;
}



void converting_between_floats_l1(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  global_long_double._0_8_ = __extendsftf2(global_float);
  global_long_double._8_8_ = uVar1;
  return;
}



void converting_between_floats_l2(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  global_long_double._0_8_ = __extenddftf2(global_double);
  global_long_double._8_8_ = uVar1;
  return;
}



int basic_operations(double x,double y)

{
  use(x + y);
  use(x - y);
  use(y - x);
  use(x * y);
  use(x / y);
  use(y / x);
  use(-x);
  return 0x7b;
}



int compare_floats(double x,double y)

{
  use_int((uint)(x == y));
  use_int((uint)(x != y));
  use_int((uint)(y < x));
  use_int((uint)(y <= x));
  use_int((uint)(x < y));
  use_int((uint)(x <= y));
  return 0x7c;
}



int constants(double x)

{
  use(x + x);
  use(x * 3.00000000);
  use(x * 3.14159265);
  use(x * 10.00000000);
  use(x * 12.34500000);
  return 0x7d;
}



int main(void)

{
  printf("%zu %zu %zu %zu %zu\n",1,2,4,8,8);
  printf("%zu %zu %zu\n",4,8,0x10);
  return 0;
}


/*
Unable to decompile '__addtf3'
Cause: 
Low-level Error: Overlapping input varnodes
*/


void __extendsftf2(uint param_1)

{
  longlong lVar1;
  undefined auVar2 [16];
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  cRead(fpcr);
  uVar4 = param_1 >> 0x17 & 0xff;
  uVar6 = (ulonglong)param_1 & 0x7fffff;
  if ((uVar4 + 1 & 0xff) < 2) {
    if (uVar4 == 0) {
      if ((param_1 & 0x7fffff) == 0) {
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        uVar5 = uVar6 | uVar6 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8 | uVar5 >> 0x10;
        uVar5 = ((uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar5 & 0x5555555555555555);
        uVar5 = ((uVar5 & 0xcccccccccccccccc) >> 2) + (uVar5 & 0x3333333333333333);
        uVar5 = ((uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar5 & 0xf0f0f0f0f0f0f0f);
        lVar1 = ((uVar5 & 0xff00ff00ff00ff00) >> 8) + (uVar5 & 0xff00ff00ff00ff);
        iVar3 = -((int)((ulonglong)lVar1 >> 0x10) + ((uint)lVar1 & 0xffff));
        uVar5 = (ulonglong)(0x3fa9U - (iVar3 + 0x40) & 0x7fff);
        uVar6 = uVar6 << ((ulonglong)(iVar3 + 0x31) & 0x3f) & 0xffffffffffff;
      }
    }
    else {
      if ((param_1 & 0x7fffff) != 0) {
        auVar2 = SIMD_COPY(ZEXT816(0),
                           uVar6 << 0x19 | 0x7fff800000000000 | (ulonglong)(param_1 >> 0x1f) << 0x3f
                           ,1,8);
        if ((uint)uVar6 >> 0x16 == 0) {
          __sfp_handle_exceptions(SUB168(auVar2,0),1);
          return;
        }
        return;
      }
      uVar5 = 0x7fff;
      uVar6 = 0;
    }
  }
  else {
    uVar6 = uVar6 << 0x19;
    uVar5 = (ulonglong)(uVar4 + 0x3f80);
  }
  SIMD_COPY(ZEXT816(0),uVar6 | uVar5 << 0x30 | (ulonglong)(param_1 >> 0x1f) << 0x3f,1,8);
  return;
}



void __extenddftf2(void)

{
  longlong lVar1;
  undefined auVar2 [16];
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined in_z0 [32];
  
  uVar8 = SUB328(in_z0,0);
  cRead(fpcr);
  uVar5 = uVar8 >> 0x34 & 0x7ff;
  uVar7 = uVar8 & 0xfffffffffffff;
  if ((uVar5 + 1 & 0x7ff) < 2) {
    if (uVar5 == 0) {
      if ((in_z0 & (undefined  [32])0xfffffffffffff) == (undefined  [32])0x0) {
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        uVar5 = uVar7 | uVar7 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = uVar5 | uVar5 >> 0x10;
        uVar5 = uVar5 | uVar5 >> 0x20;
        uVar5 = ((uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar5 & 0x5555555555555555);
        uVar5 = ((uVar5 & 0xcccccccccccccccc) >> 2) + (uVar5 & 0x3333333333333333);
        uVar5 = ((uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar5 & 0xf0f0f0f0f0f0f0f);
        uVar5 = ((uVar5 & 0xff00ff00ff00ff00) >> 8) + (uVar5 & 0xff00ff00ff00ff);
        lVar1 = ((uVar5 & 0xffff0000ffff0000) >> 0x10) + (uVar5 & 0xffff0000ffff);
        iVar3 = -((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1);
        iVar4 = iVar3 + 0x40;
        if (iVar4 < 0xf) {
          uVar6 = uVar7 >> ((ulonglong)(0xf - iVar4) & 0x3f);
          uVar7 = uVar7 << ((ulonglong)(iVar3 + 0x71) & 0x3f);
        }
        else {
          uVar6 = uVar7 << ((ulonglong)(iVar3 + 0x31) & 0x3f);
          uVar7 = 0;
        }
        uVar6 = uVar6 & 0xffffffffffff;
        uVar5 = (ulonglong)(0x3c0cU - iVar4 & 0x7fff);
      }
    }
    else {
      if ((in_z0 & (undefined  [32])0xfffffffffffff) != (undefined  [32])0x0) {
        auVar2 = SIMD_COPY(ZEXT816(uVar7 << 0x3c),
                           uVar7 >> 4 | 0x7fff800000000000 | uVar8 & 0x8000000000000000,1,8);
        if (uVar7 >> 0x33 == 0) {
          __sfp_handle_exceptions(SUB168(auVar2,0),1);
          return;
        }
        return;
      }
      uVar5 = 0x7fff;
      uVar6 = 0;
    }
  }
  else {
    uVar6 = uVar7 >> 4;
    uVar5 = (ulonglong)((int)uVar5 + 0x3c00);
    uVar7 = uVar7 << 0x3c;
  }
  SIMD_COPY(ZEXT816(uVar7),uVar6 | uVar5 << 0x30 | uVar8 & 0x8000000000000000,1,8);
  return;
}



ulonglong __trunctfsf2(ulonglong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 in_register_00005008;
  
  uVar6 = SIMD_PIECE(CONCAT88(in_register_00005008,param_1),1);
  uVar1 = cRead_8(fpcr);
  uVar4 = uVar6 >> 0x30 & 0x7fff;
  uVar8 = (uVar6 & 0xffffffffffff) << 3;
  uVar7 = uVar8 | param_1 >> 0x3d;
  param_1 = param_1 << 3;
  iVar2 = (int)((longlong)uVar6 >> 0x3f);
  uVar11 = -iVar2;
  if ((uVar4 + 1 & 0x7fff) < 2) {
    if (uVar4 == 0) {
      if ((uVar7 | param_1) != 0) {
        uVar3 = 0x10;
        uVar10 = 1;
        uVar8 = 1;
LAB_00101cac:
        uVar6 = uVar1 & 0xc00000;
        if (uVar6 == 0x400000) {
          uVar6 = uVar8 + 8;
          if (uVar11 != 0) {
            uVar6 = uVar8;
          }
joined_r0x00101eac:
          uVar8 = uVar6;
          if (uVar10 == 0) goto LAB_00101cc4;
LAB_00101da8:
          uVar3 = uVar3 | 8;
          uVar10 = (uint)uVar8;
        }
        else {
          if (uVar6 == 0x800000) {
            uVar7 = uVar8 + 8;
            if (uVar11 == 0) {
              uVar7 = uVar8;
            }
          }
          else {
            uVar7 = uVar8;
            if (uVar6 == 0) {
              if ((uVar8 & 0xf) == 4) goto joined_r0x00101da0;
              uVar6 = uVar8 + 4;
              goto joined_r0x00101eac;
            }
          }
          uVar8 = uVar7;
          if (uVar10 != 0) goto LAB_00101da8;
LAB_00101cc4:
          uVar10 = (uint)uVar8;
        }
        if ((uVar10 >> 0x1a & 1) == 0) goto LAB_00101dac;
        uVar10 = (uint)(uVar4 + 1);
        if (uVar4 + 1 != 0xff) {
          uVar11 = (uint)(uVar8 >> 3) & 0x7fffff | (uVar10 & 0xff) << 0x17 | iVar2 * -0x80000000;
          goto joined_r0x00101cf8;
        }
        uVar1 = uVar1 & 0xc00000;
        uVar5 = 0;
        if (uVar1 != 0) {
          uVar10 = 0xff;
          if (uVar1 == 0x400000) {
            if (uVar11 != 0) {
              uVar10 = 0xfe;
            }
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = 0xffffffff;
            }
          }
          else {
            uVar11 = uVar11 & uVar1 == 0x800000;
            if (uVar11 == 0) {
              uVar10 = 0xfe;
            }
            uVar5 = 0;
            if (uVar11 == 0) {
              uVar5 = 0xffffffff;
            }
          }
        }
        uVar3 = uVar3 | 0x14;
        goto LAB_00101d44;
      }
      uVar10 = 0;
      uVar3 = 0;
    }
    else {
      if ((uVar7 | param_1) != 0) {
        uVar3 = (uint)(uVar8 >> 0x32) ^ 1;
        if (uVar4 != 0x7fff) {
          uVar3 = 0;
        }
        uVar8 = uVar8 >> 0x19 & 0xfffffffffffffff8 | 0x2000000;
        uVar4 = 0xff;
        goto LAB_00101c98;
      }
      uVar10 = 0xff;
      uVar3 = 0;
    }
LAB_00101d40:
    uVar5 = 0;
  }
  else {
    uVar6 = uVar4 - 0x3f80;
    if (0xfe < (longlong)uVar6) {
      uVar8 = uVar1 & 0xc00000;
      if (uVar8 != 0) {
        if (uVar8 == 0x400000) {
          if (uVar11 != 0) {
            uVar4 = 0xfe;
            uVar3 = 0x14;
            uVar8 = 0xffffffffffffffff;
            goto LAB_00101cc4;
          }
        }
        else {
          uVar10 = uVar11 & uVar8 == 0x800000;
          if (uVar10 == 0) {
            uVar3 = 0x14;
            uVar8 = 0xffffffffffffffff;
            uVar4 = 0xfe;
            goto LAB_00101cac;
          }
        }
      }
      uVar10 = 0xff;
      uVar3 = 0x14;
      goto LAB_00101d40;
    }
    if ((longlong)uVar6 < 1) {
      if ((longlong)(uVar4 - 0x3f69) < 0 != SCARRY8(uVar6,0x17)) {
        uVar3 = 0x10;
        uVar10 = 1;
        uVar8 = 1;
        uVar4 = 0;
        goto LAB_00101cac;
      }
      uVar9 = (uVar7 | 0x8000000000000) >> ((ulonglong)(0x1a - (int)uVar6) & 0x3f);
      uVar4 = (ulonglong)
              (((uVar7 | 0x8000000000000) << ((ulonglong)((int)uVar6 + 0x26) & 0x3f) | param_1) != 0
              );
      uVar8 = uVar9 | uVar4;
      if ((uVar9 & 7 | uVar4) != 0) {
        uVar10 = 1;
        uVar4 = 0;
        uVar3 = 0;
        goto LAB_00101ca4;
      }
      uVar4 = 0;
      uVar3 = 0;
      uVar10 = (uint)uVar1 >> 0xb & 1;
joined_r0x00101da0:
      if (uVar10 != 0) goto LAB_00101da8;
    }
    else {
      uVar3 = 0;
      uVar8 = (ulonglong)((param_1 | uVar7 << 0x27) != 0) | uVar8 >> 0x19;
      uVar4 = uVar6;
LAB_00101c98:
      uVar10 = 0;
      if ((uVar8 & 7) != 0) {
LAB_00101ca4:
        uVar3 = uVar3 | 0x10;
        goto LAB_00101cac;
      }
    }
LAB_00101dac:
    uVar11 = (uint)(uVar8 >> 3);
    uVar10 = (uint)uVar4 & 0xff;
    uVar5 = uVar11 | 0x400000;
    if (uVar4 != 0xff || uVar8 >> 3 == 0) {
      uVar5 = uVar11;
    }
  }
LAB_00101d44:
  uVar11 = uVar5 & 0x7fffff | (uVar10 & 0xff) << 0x17 | iVar2 * -0x80000000;
joined_r0x00101cf8:
  if (uVar3 == 0) {
    return (ulonglong)uVar11;
  }
  __sfp_handle_exceptions();
  return (ulonglong)uVar11;
}



ulonglong __trunctfdf2(ulonglong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 in_register_00005008;
  
  uVar6 = SIMD_PIECE(CONCAT88(in_register_00005008,param_1),1);
  uVar9 = cRead_8(fpcr);
  uVar11 = uVar6 >> 0x30 & 0x7fff;
  uVar8 = (uVar6 & 0xffffffffffff) << 3;
  uVar7 = uVar8 | param_1 >> 0x3d;
  uVar12 = param_1 << 3;
  iVar2 = (int)((longlong)uVar6 >> 0x3f);
  uVar5 = -iVar2;
  if ((uVar11 + 1 & 0x7fff) < 2) {
    if (uVar11 == 0) {
      if ((uVar7 | uVar12) != 0) {
        uVar4 = 0x10;
        uVar13 = 1;
        uVar8 = 1;
LAB_00101fcc:
        uVar7 = uVar9 & 0xc00000;
        uVar3 = (uint)uVar4;
        if (uVar7 == 0x400000) {
          uVar12 = uVar8 + 8;
          if (uVar5 != 0) {
            uVar12 = uVar8;
          }
        }
        else {
          if (uVar7 == 0x800000) {
            uVar12 = uVar8 + 8;
            if (uVar5 == 0) {
              uVar12 = uVar8;
            }
          }
          else {
            uVar12 = uVar8;
            if ((uVar7 == 0) && (uVar12 = uVar8 + 4, (uVar8 & 0xf) == 4)) {
              uVar12 = uVar8;
            }
          }
        }
        uVar8 = uVar12;
        if (uVar13 != 0) {
LAB_00102070:
          uVar4 = (ulonglong)(uVar3 | 8);
        }
        goto LAB_00101fe4;
      }
    }
    else {
      if ((uVar7 | uVar12) != 0) {
        uVar13 = (uint)(uVar8 >> 0x32) ^ 1;
        if (uVar11 != 0x7fff) {
          uVar13 = 0;
        }
        uVar4 = (ulonglong)uVar13;
        uVar8 = uVar12 >> 0x3c & 0xfffffffffffffff8 | uVar7 << 4 | 0x40000000000000;
        uVar11 = 0x7ff;
        goto LAB_00101fb8;
      }
      uVar11 = 0x7ff;
    }
    uVar4 = 0;
LAB_00102030:
    uVar8 = 0;
LAB_00102034:
    uVar8 = uVar8 >> 3;
    uVar5 = (uint)uVar11;
    uVar9 = uVar8 | 0x8000000000000;
    if (uVar11 != 0x7ff || uVar8 == 0) {
      uVar9 = uVar8;
    }
  }
  else {
    uVar1 = uVar11 - 0x3c00;
    if (0x7fe < (longlong)uVar1) {
      uVar11 = uVar9 & 0xc00000;
      if (uVar11 != 0) {
        if (uVar11 == 0x400000) {
          if (uVar5 != 0) {
            uVar11 = 0x7fe;
            uVar4 = 0x14;
            uVar8 = 0xffffffffffffffff;
            goto LAB_00101fe4;
          }
        }
        else {
          uVar13 = uVar5 & uVar11 == 0x800000;
          if (uVar13 == 0) {
            uVar4 = 0x14;
            uVar8 = 0xffffffffffffffff;
            uVar11 = 0x7fe;
            goto LAB_00101fcc;
          }
        }
      }
      uVar11 = 0x7ff;
      uVar4 = 0x14;
      goto LAB_00102030;
    }
    if (0 < (longlong)uVar1) {
      uVar4 = 0;
      uVar8 = (ulonglong)((param_1 & 0x1ffffffffffffff) != 0) | uVar12 >> 0x3c | uVar7 << 4;
      uVar11 = uVar1;
LAB_00101fb8:
      uVar3 = (uint)uVar4;
      uVar13 = 0;
      if ((uVar8 & 7) != 0) {
LAB_00101fc4:
        uVar4 = (ulonglong)(uVar3 | 0x10);
        goto LAB_00101fcc;
      }
LAB_00101fe4:
      if ((uVar8 & 0x80000000000000) != 0) {
        uVar11 = uVar11 + 1;
        uVar5 = (uint)uVar11;
        if (uVar11 == 0x7ff) {
          uVar9 = uVar9 & 0xc00000;
          uVar8 = 0;
          if (uVar9 != 0) {
            uVar13 = -iVar2;
            if (uVar9 == 0x400000) {
              if (uVar13 != 0) {
                uVar5 = 0x7fe;
              }
              uVar11 = (ulonglong)uVar5;
              uVar8 = 0;
              if (uVar13 != 0) {
                uVar8 = 0x1fffffffffffffff;
              }
            }
            else {
              uVar13 = uVar13 & uVar9 == 0x800000;
              if (uVar13 == 0) {
                uVar5 = 0x7fe;
              }
              uVar11 = (ulonglong)uVar5;
              uVar8 = 0;
              if (uVar13 == 0) {
                uVar8 = 0x1fffffffffffffff;
              }
            }
          }
          uVar4 = (ulonglong)((uint)uVar4 | 0x14);
          uVar11 = uVar8 & 0xfffffffffffff | (uVar11 & 0x7ff) << 0x34 | uVar6 & 0x8000000000000000;
          goto LAB_00102138;
        }
        goto LAB_00101ff8;
      }
      goto LAB_00102034;
    }
    if ((longlong)(uVar11 - 0x3bcc) < 0 != SCARRY8(uVar1,0x34)) {
      uVar4 = 0x10;
      uVar13 = 1;
      uVar8 = 1;
      uVar11 = 0;
      goto LAB_00101fcc;
    }
    uVar7 = uVar7 | 0x8000000000000;
    iVar10 = (int)uVar1;
    if ((longlong)(0x3d - uVar1) < 0x40) {
      uVar8 = uVar12 >> ((ulonglong)(0x3d - iVar10) & 0x3f) |
              uVar7 << ((ulonglong)(iVar10 + 3) & 0x3f) |
              (ulonglong)(uVar12 << ((ulonglong)(iVar10 + 3) & 0x3f) != 0);
    }
    else {
      if (0x3d - uVar1 == 0x40) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar7 << ((ulonglong)(iVar10 + 0x43) & 0x3f);
      }
      uVar8 = uVar7 >> ((ulonglong)(-iVar10 - 3) & 0x3f) | (ulonglong)((uVar11 | uVar12) != 0);
    }
    uVar13 = (uint)(uVar8 != 0);
    if ((uVar8 & 7) != 0) {
      uVar11 = 0;
      uVar3 = 0;
      goto LAB_00101fc4;
    }
    if (uVar8 == 0) {
      uVar11 = 0;
      uVar4 = 0;
      goto LAB_00101fe4;
    }
    if (((uint)uVar9 >> 0xb & 1) != 0) {
      uVar11 = 0;
      uVar3 = 0;
      goto LAB_00102070;
    }
    if ((uVar8 >> 0x37 & 1) == 0) {
      uVar11 = 0;
      uVar4 = 0;
      goto LAB_00102034;
    }
    uVar5 = 1;
    uVar4 = 0;
LAB_00101ff8:
    uVar9 = uVar8 >> 3 & 0x1fefffffffffffff;
  }
  uVar11 = uVar9 & 0xfffffffffffff | (ulonglong)(uVar5 & 0x7ff) << 0x34 | uVar6 & 0x8000000000000000
  ;
  if ((int)uVar4 == 0) {
    return uVar11;
  }
LAB_00102138:
  __sfp_handle_exceptions(uVar4);
  return uVar11;
}



ulonglong __sfp_handle_exceptions(ulonglong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    cRead(fpsr);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    cRead(fpsr);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    cRead(fpsr);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    cRead(fpsr);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_1 = cRead_8(fpsr);
  }
  return param_1;
}



undefined8 __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  _init(param_1);
  lVar3 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (**ppcVar1)((ulonglong)param_1 & 0xffffffff,param_2,param_3);
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


