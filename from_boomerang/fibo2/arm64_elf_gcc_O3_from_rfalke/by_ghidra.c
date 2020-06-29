typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
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



void FUN_001006c0(void)

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



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



int main(void)

{
  ulonglong uVar1;
  int number;
  
  printf("Input number: ");
  __isoc99_scanf(&DAT_00101ef8,&number);
  uVar1 = (ulonglong)(uint)number;
  if (1 < number) {
    number = fib2(number);
  }
  printf("fibonacci(%d) = %d\n",uVar1 & 0xffffffff,(ulonglong)(uint)number);
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x001007e8)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100810)
// WARNING: Removing unreachable block (ram,0x0010081c)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0010084c)
// WARNING: Removing unreachable block (ram,0x00100858)

void register_tm_clones(void)

{
  return;
}



void FUN_00100864(void)

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



int fib2(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int x_00;
  int x_01;
  int iVar6;
  int iVar7;
  int iVar8;
  int x_02;
  int x_03;
  int local_8;
  int local_4;
  
  local_8 = x + -9;
  x_01 = x + -5;
  iVar7 = x + -3;
  x_03 = x + -7;
  x_00 = x + -8;
  x_02 = x + -6;
  iVar6 = x + -4;
  iVar8 = x + -2;
  local_4 = 0;
  while( true ) {
    iVar1 = x + -1;
    if (1 < iVar1) {
      iVar1 = iVar8;
      if (1 < iVar8) {
        iVar1 = iVar7;
        if (1 < iVar7) {
          iVar1 = iVar6;
          if (1 < iVar6) {
            iVar1 = x_01;
            if (1 < x_01) {
              iVar1 = fib2(x_01);
            }
            iVar2 = x_02;
            if (1 < x_02) {
              iVar2 = fib2(x_02);
            }
            iVar1 = iVar2 + iVar1;
          }
          iVar2 = x_01;
          if (1 < x_01) {
            iVar3 = x_02;
            if (1 < x_02) {
              iVar3 = fib2(x_02);
            }
            iVar2 = x_03;
            if (1 < x_03) {
              iVar2 = fib2(x_03);
            }
            iVar2 = iVar2 + iVar3;
          }
          iVar1 = iVar2 + iVar1;
        }
        iVar2 = iVar6;
        if (1 < iVar6) {
          iVar3 = x_01;
          if (1 < x_01) {
            iVar2 = x_02;
            if (1 < x_02) {
              iVar2 = fib2(x_02);
            }
            iVar3 = x_03;
            if (1 < x_03) {
              iVar3 = fib2(x_03);
            }
            iVar3 = iVar3 + iVar2;
          }
          iVar2 = x_02;
          if (1 < x_02) {
            iVar4 = x_03;
            if (1 < x_03) {
              iVar4 = fib2(x_03);
            }
            iVar2 = x_00;
            if (1 < x_00) {
              iVar2 = fib2(x_00);
            }
            iVar2 = iVar2 + iVar4;
          }
          iVar2 = iVar2 + iVar3;
        }
        iVar1 = iVar2 + iVar1;
      }
      if (iVar7 < 2) {
        iVar1 = iVar7 + iVar1;
      }
      else {
        iVar2 = iVar6;
        if (1 < iVar6) {
          iVar3 = x_01;
          if (1 < x_01) {
            iVar2 = x_02;
            if (1 < x_02) {
              iVar2 = fib2(x_02);
            }
            iVar3 = x_03;
            if (1 < x_03) {
              iVar3 = fib2(x_03);
            }
            iVar3 = iVar3 + iVar2;
          }
          iVar2 = x_02;
          if (1 < x_02) {
            iVar4 = x_03;
            if (1 < x_03) {
              iVar4 = fib2(x_03);
            }
            iVar2 = x_00;
            if (1 < x_00) {
              iVar2 = fib2(x_00);
            }
            iVar2 = iVar2 + iVar4;
          }
          iVar2 = iVar2 + iVar3;
        }
        iVar3 = x_01;
        if (1 < x_01) {
          iVar4 = x_02;
          if (1 < x_02) {
            iVar3 = x_03;
            if (1 < x_03) {
              iVar3 = fib2(x_03);
            }
            iVar4 = x_00;
            if (1 < x_00) {
              iVar4 = fib2(x_00);
            }
            iVar4 = iVar4 + iVar3;
          }
          iVar3 = x_03;
          if (1 < x_03) {
            iVar5 = x_00;
            if (1 < x_00) {
              iVar5 = fib2(x_00);
            }
            iVar3 = local_8;
            if (1 < local_8) {
              iVar3 = fib2(local_8);
            }
            iVar3 = iVar3 + iVar5;
          }
          iVar3 = iVar3 + iVar4;
        }
        iVar1 = iVar3 + iVar2 + iVar1;
      }
    }
    if (iVar8 < 2) goto LAB_00100de0;
    iVar2 = iVar7;
    if (1 < iVar7) {
      iVar3 = iVar6;
      if (1 < iVar6) {
        iVar2 = x_01;
        if (1 < x_01) {
          iVar2 = x_02;
          if (1 < x_02) {
            iVar2 = fib2(x_02);
          }
          iVar3 = x_03;
          if (1 < x_03) {
            iVar3 = fib2(x_03);
          }
          iVar2 = iVar3 + iVar2;
        }
        iVar3 = x_02;
        if (1 < x_02) {
          iVar4 = x_03;
          if (1 < x_03) {
            iVar4 = fib2(x_03);
          }
          iVar3 = x_00;
          if (1 < x_00) {
            iVar3 = fib2(x_00);
          }
          iVar3 = iVar3 + iVar4;
        }
        iVar3 = iVar3 + iVar2;
      }
      iVar2 = x_01;
      if (1 < x_01) {
        iVar4 = x_02;
        if (1 < x_02) {
          iVar2 = x_03;
          if (1 < x_03) {
            iVar2 = fib2(x_03);
          }
          iVar4 = x_00;
          if (1 < x_00) {
            iVar4 = fib2(x_00);
          }
          iVar4 = iVar4 + iVar2;
        }
        iVar2 = x_03;
        if (1 < x_03) {
          iVar5 = x_00;
          if (1 < x_00) {
            iVar5 = fib2(x_00);
          }
          iVar2 = local_8;
          if (1 < local_8) {
            iVar2 = fib2(local_8);
          }
          iVar2 = iVar2 + iVar5;
        }
        iVar2 = iVar2 + iVar4;
      }
      iVar2 = iVar2 + iVar3;
    }
    if (iVar6 < 2) goto LAB_00100ddc;
    iVar3 = x_01;
    if (1 < x_01) {
      iVar4 = x_02;
      if (1 < x_02) {
        iVar3 = x_03;
        if (1 < x_03) {
          iVar3 = fib2(x_03);
        }
        iVar4 = x_00;
        if (1 < x_00) {
          iVar4 = fib2(x_00);
        }
        iVar4 = iVar4 + iVar3;
      }
      iVar3 = x_03;
      if (1 < x_03) {
        iVar5 = x_00;
        if (1 < x_00) {
          iVar5 = fib2(x_00);
        }
        iVar3 = local_8;
        if (1 < local_8) {
          iVar3 = fib2(local_8);
        }
        iVar3 = iVar3 + iVar5;
      }
      iVar3 = iVar3 + iVar4;
    }
    if (x_02 < 2) goto LAB_00100dd8;
    iVar4 = x_03;
    if (1 < x_03) {
      iVar5 = x_00;
      if (1 < x_00) {
        iVar5 = fib2(x_00);
      }
      iVar4 = local_8;
      if (1 < local_8) {
        iVar4 = fib2(local_8);
      }
      iVar4 = iVar4 + iVar5;
    }
    if (x_00 < 2) goto LAB_00100dd4;
    iVar5 = local_8;
    if (1 < local_8) {
      iVar5 = fib2(local_8);
    }
    x = x + -10;
    x_03 = x_03 + -10;
    x_00 = x_00 + -10;
    local_8 = local_8 + -10;
    x_01 = x_01 + -10;
    x_02 = x_02 + -10;
    iVar7 = iVar7 + -10;
    iVar6 = iVar6 + -10;
    iVar8 = iVar8 + -10;
    if (x < 2) break;
    local_4 = local_4 + iVar4 + iVar5 + iVar3 + iVar2 + iVar1;
  }
  x_00 = x + iVar5;
LAB_00100dd4:
  x_02 = x_00 + iVar4;
LAB_00100dd8:
  iVar6 = x_02 + iVar3;
LAB_00100ddc:
  iVar8 = iVar6 + iVar2;
LAB_00100de0:
  return iVar8 + iVar1 + local_4;
}



int fib1(int x)

{
  int x_00;
  int x_01;
  int x_02;
  int x_03;
  int x_04;
  int x_05;
  int x_06;
  int x_07;
  int x_08;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  int extraout_w8_09;
  int extraout_w8_10;
  int extraout_w8_11;
  int extraout_w8_12;
  int extraout_w8_13;
  int extraout_w8_14;
  int extraout_w8_15;
  int extraout_w8_16;
  int extraout_w8_17;
  int extraout_w8_18;
  int extraout_w8_19;
  int extraout_w8_20;
  int extraout_w8_21;
  int extraout_w8_22;
  int extraout_w8_23;
  int extraout_w8_24;
  int extraout_w8_25;
  int extraout_w8_26;
  int extraout_w8_27;
  int extraout_w8_28;
  int extraout_w8_29;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w9_07;
  int extraout_w9_08;
  int extraout_w9_09;
  int extraout_w9_10;
  int extraout_w9_11;
  int extraout_w9_12;
  int extraout_w9_13;
  int extraout_w9_14;
  int extraout_w9_15;
  int extraout_w9_16;
  int extraout_w9_17;
  int extraout_w9_18;
  int extraout_w9_19;
  int extraout_w9_20;
  int extraout_w9_21;
  int extraout_w9_22;
  int extraout_w9_23;
  int extraout_w9_24;
  int extraout_w9_25;
  int extraout_w9_26;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  
  if (x < 2) {
    return x;
  }
  if (x == 2) {
    return 1;
  }
  x_02 = x + -2;
  x_06 = x + -3;
  x_08 = x_02;
  x_07 = x_06;
  if (x_02 != 1) {
    x_04 = x + -4;
    x_05 = x_06;
    if (1 < x_06) {
      x_00 = x + -5;
      x_03 = x_00;
      x_01 = x_04;
      if (1 < x_04) {
        if (1 < x_00) {
          x_00 = fib2(x_00);
          x_03 = extraout_w10;
          x_04 = extraout_w9;
          x_05 = extraout_w8;
          x_08 = x_02;
          x_07 = x_06;
        }
        x_01 = x + -6;
        if (1 < x_01) {
          x_01 = fib2(x_01);
          x_00 = extraout_w11;
          x_03 = extraout_w10_00;
          x_04 = extraout_w9_00;
          x_05 = extraout_w8_00;
        }
        x_01 = x_01 + x_00;
      }
      if (1 < x_03) {
        x_02 = x + -6;
        if (1 < x_02) {
          x_02 = fib2(x_02);
          x_01 = extraout_w11_00;
          x_04 = extraout_w9_01;
          x_05 = extraout_w8_01;
        }
        x_03 = x + -7;
        if (1 < x_03) {
          x_03 = fib2(x_03);
          x_02 = extraout_w10_01;
          x_01 = extraout_w11_01;
          x_04 = extraout_w9_02;
          x_05 = extraout_w8_02;
        }
        x_03 = x_03 + x_02;
      }
      x_06 = x_03 + x_01;
    }
    if (1 < x_04) {
      x_02 = x + -5;
      x_01 = x + -6;
      x_04 = x_01;
      if (1 < x_02) {
        if (1 < x_01) {
          x_01 = fib2(x_01);
          x_04 = extraout_w9_03;
          x_06 = extraout_w10_02;
          x_05 = extraout_w8_03;
        }
        x_02 = x + -7;
        if (1 < x_02) {
          x_02 = fib2(x_02);
          x_01 = extraout_w11_02;
          x_04 = extraout_w9_04;
          x_06 = extraout_w10_03;
          x_05 = extraout_w8_04;
        }
        x_02 = x_02 + x_01;
      }
      if (1 < x_04) {
        x_01 = x + -7;
        if (1 < x_01) {
          x_01 = fib2(x_01);
          x_02 = extraout_w11_03;
          x_06 = extraout_w10_04;
          x_05 = extraout_w8_05;
        }
        x_04 = x + -8;
        if (1 < x_04) {
          x_04 = fib2(x_04);
          x_01 = extraout_w9_05;
          x_02 = extraout_w11_04;
          x_06 = extraout_w10_05;
          x_05 = extraout_w8_06;
        }
        x_04 = x_04 + x_01;
      }
      x_04 = x_04 + x_02;
    }
    x_02 = x_04 + x_06;
    x_06 = x_05;
  }
  if (1 < x_07) {
    x_04 = x + -4;
    x_06 = x + -5;
    if (1 < x_04) {
      x_01 = x + -6;
      x_04 = x_01;
      x_05 = x_06;
      if (1 < x_06) {
        if (1 < x_01) {
          x_01 = fib2(x_01);
          x_04 = extraout_w8_07;
          x_06 = extraout_w9_06;
          x_02 = extraout_w10_06;
        }
        x_05 = x + -7;
        if (1 < x_05) {
          x_05 = fib2(x_05);
          x_01 = extraout_w11_05;
          x_04 = extraout_w8_08;
          x_06 = extraout_w9_07;
          x_02 = extraout_w10_07;
        }
        x_05 = x_05 + x_01;
      }
      if (1 < x_04) {
        x_01 = x + -7;
        if (1 < x_01) {
          x_01 = fib2(x_01);
          x_05 = extraout_w11_06;
          x_06 = extraout_w9_08;
          x_02 = extraout_w10_08;
        }
        x_04 = x + -8;
        if (1 < x_04) {
          x_04 = fib2(x_04);
          x_01 = extraout_w8_09;
          x_05 = extraout_w11_07;
          x_06 = extraout_w9_09;
          x_02 = extraout_w10_09;
        }
        x_04 = x_04 + x_01;
      }
      x_04 = x_04 + x_05;
    }
    if (1 < x_06) {
      x_05 = x + -6;
      x_01 = x + -7;
      x_06 = x_01;
      if (1 < x_05) {
        if (1 < x_01) {
          x_01 = fib2(x_01);
          x_06 = extraout_w9_10;
          x_04 = extraout_w8_10;
          x_02 = extraout_w10_10;
        }
        x_05 = x + -8;
        if (1 < x_05) {
          x_05 = fib2(x_05);
          x_01 = extraout_w11_08;
          x_06 = extraout_w9_11;
          x_04 = extraout_w8_11;
          x_02 = extraout_w10_11;
        }
        x_05 = x_05 + x_01;
      }
      if (1 < x_06) {
        x_01 = x + -8;
        if (1 < x_01) {
          x_01 = fib2(x_01);
          x_05 = extraout_w11_09;
          x_04 = extraout_w8_12;
          x_02 = extraout_w10_12;
        }
        x_06 = x + -9;
        if (1 < x_06) {
          x_06 = fib2(x_06);
          x_01 = extraout_w9_12;
          x_05 = extraout_w11_10;
          x_04 = extraout_w8_13;
          x_02 = extraout_w10_13;
        }
        x_06 = x_06 + x_01;
      }
      x_06 = x_06 + x_05;
    }
    x_06 = x_06 + x_04;
  }
  x_06 = x_06 + x_02;
  if (x_08 != 1) {
    x_08 = x + -4;
    if (1 < x_07) {
      x_07 = x + -5;
      x_02 = x_08;
      if (1 < x_08) {
        x_05 = x + -6;
        x_02 = x_05;
        x_04 = x_07;
        if (1 < x_07) {
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_02 = extraout_w9_13;
            x_06 = extraout_w8_14;
          }
          x_04 = x + -7;
          if (1 < x_04) {
            x_04 = fib2(x_04);
            x_05 = extraout_w10_14;
            x_02 = extraout_w9_14;
            x_06 = extraout_w8_15;
          }
          x_04 = x_04 + x_05;
        }
        if (1 < x_02) {
          x_05 = x + -7;
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_04 = extraout_w10_15;
            x_06 = extraout_w8_16;
          }
          x_02 = x + -8;
          if (1 < x_02) {
            x_02 = fib2(x_02);
            x_05 = extraout_w9_15;
            x_04 = extraout_w10_16;
            x_06 = extraout_w8_17;
          }
          x_02 = x_02 + x_05;
        }
        x_02 = x_02 + x_04;
      }
      if (1 < x_07) {
        x_04 = x + -6;
        x_05 = x + -7;
        x_07 = x_05;
        if (1 < x_04) {
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_02 = extraout_w9_16;
            x_06 = extraout_w8_18;
          }
          x_04 = x + -8;
          if (1 < x_04) {
            x_04 = fib2(x_04);
            x_05 = extraout_w10_17;
            x_02 = extraout_w9_17;
            x_06 = extraout_w8_19;
          }
          x_04 = x_04 + x_05;
        }
        if (1 < x_07) {
          x_05 = x + -8;
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_04 = extraout_w10_18;
            x_02 = extraout_w9_18;
            x_06 = extraout_w8_20;
          }
          x_07 = x + -9;
          if (1 < x_07) {
            x_07 = fib2(x_07);
            x_04 = extraout_w10_19;
            x_02 = extraout_w9_19;
            x_06 = extraout_w8_21;
          }
          x_07 = x_07 + x_05;
        }
        x_07 = x_07 + x_04;
      }
      x_07 = x_07 + x_02;
    }
    if (1 < x_08) {
      x_02 = x + -5;
      x_08 = x + -6;
      if (1 < x_02) {
        x_05 = x + -7;
        x_02 = x_05;
        x_04 = x_08;
        if (1 < x_08) {
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_02 = extraout_w9_20;
            x_06 = extraout_w8_22;
          }
          x_04 = x + -8;
          if (1 < x_04) {
            x_04 = fib2(x_04);
            x_05 = extraout_w10_20;
            x_02 = extraout_w9_21;
            x_06 = extraout_w8_23;
          }
          x_04 = x_04 + x_05;
        }
        if (1 < x_02) {
          x_05 = x + -8;
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_04 = extraout_w10_21;
            x_06 = extraout_w8_24;
          }
          x_02 = x + -9;
          if (1 < x_02) {
            x_02 = fib2(x_02);
            x_05 = extraout_w9_22;
            x_04 = extraout_w10_22;
            x_06 = extraout_w8_25;
          }
          x_02 = x_02 + x_05;
        }
        x_02 = x_02 + x_04;
      }
      if (1 < x_08) {
        x_04 = x + -7;
        x_05 = x + -8;
        x_08 = x_05;
        if (1 < x_04) {
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_02 = extraout_w9_23;
            x_06 = extraout_w8_26;
          }
          x_04 = x + -9;
          if (1 < x_04) {
            x_04 = fib2(x_04);
            x_05 = extraout_w10_23;
            x_02 = extraout_w9_24;
            x_06 = extraout_w8_27;
          }
          x_04 = x_04 + x_05;
        }
        if (1 < x_08) {
          x_08 = x + -9;
          if (1 < x_08) {
            x_08 = fib2(x_08);
            x_04 = extraout_w10_24;
            x_02 = extraout_w9_25;
            x_06 = extraout_w8_28;
          }
          x = x + -10;
          if (1 < x) {
            x = fib2(x);
            x_04 = extraout_w10_25;
            x_02 = extraout_w9_26;
            x_06 = extraout_w8_29;
          }
          x_08 = x + x_08;
        }
        x_08 = x_08 + x_04;
      }
      x_08 = x_08 + x_02;
    }
    x_08 = x_08 + x_07;
  }
  return x_08 + x_06;
}



int fib2(int x)

{
  int x_00;
  int x_01;
  int x_02;
  int x_03;
  int x_04;
  int x_05;
  int x_06;
  int x_07;
  int x_08;
  int x_09;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  int extraout_w8_09;
  int extraout_w8_10;
  int extraout_w8_11;
  int extraout_w8_12;
  int extraout_w8_13;
  int extraout_w8_14;
  int extraout_w8_15;
  int extraout_w8_16;
  int extraout_w8_17;
  int extraout_w8_18;
  int extraout_w8_19;
  int extraout_w8_20;
  int extraout_w8_21;
  int extraout_w8_22;
  int extraout_w8_23;
  int extraout_w8_24;
  int extraout_w8_25;
  int extraout_w8_26;
  int extraout_w8_27;
  int extraout_w8_28;
  int extraout_w8_29;
  int extraout_w8_30;
  int extraout_w8_31;
  int extraout_w8_32;
  int extraout_w8_33;
  int extraout_w8_34;
  int extraout_w8_35;
  int extraout_w8_36;
  int extraout_w8_37;
  int extraout_w8_38;
  int extraout_w8_39;
  int extraout_w8_40;
  int extraout_w8_41;
  int extraout_w8_42;
  int extraout_w8_43;
  int extraout_w8_44;
  int extraout_w8_45;
  int extraout_w8_46;
  int extraout_w8_47;
  int extraout_w8_48;
  int extraout_w8_49;
  int extraout_w8_50;
  int extraout_w8_51;
  int extraout_w8_52;
  int extraout_w8_53;
  int extraout_w8_54;
  int extraout_w8_55;
  int extraout_w8_56;
  int extraout_w8_57;
  int extraout_w8_58;
  int extraout_w8_59;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w9_07;
  int extraout_w9_08;
  int extraout_w9_09;
  int extraout_w9_10;
  int extraout_w9_11;
  int extraout_w9_12;
  int extraout_w9_13;
  int extraout_w9_14;
  int extraout_w9_15;
  int extraout_w9_16;
  int extraout_w9_17;
  int extraout_w9_18;
  int extraout_w9_19;
  int extraout_w9_20;
  int extraout_w9_21;
  int extraout_w9_22;
  int extraout_w9_23;
  int extraout_w9_24;
  int extraout_w9_25;
  int extraout_w9_26;
  int extraout_w9_27;
  int extraout_w9_28;
  int extraout_w9_29;
  int extraout_w9_30;
  int extraout_w9_31;
  int extraout_w9_32;
  int extraout_w9_33;
  int extraout_w9_34;
  int extraout_w9_35;
  int extraout_w9_36;
  int extraout_w9_37;
  int extraout_w9_38;
  int extraout_w9_39;
  int extraout_w9_40;
  int extraout_w9_41;
  int extraout_w9_42;
  int extraout_w9_43;
  int extraout_w9_44;
  int extraout_w9_45;
  int extraout_w9_46;
  int extraout_w9_47;
  int extraout_w9_48;
  int extraout_w9_49;
  int extraout_w9_50;
  int extraout_w9_51;
  int extraout_w9_52;
  int extraout_w9_53;
  int extraout_w9_54;
  int extraout_w9_55;
  int extraout_w9_56;
  int extraout_w9_57;
  int extraout_w9_58;
  int extraout_w9_59;
  int extraout_w9_60;
  int extraout_w9_61;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  int extraout_w10_29;
  int extraout_w10_30;
  int extraout_w10_31;
  int extraout_w10_32;
  int extraout_w10_33;
  int extraout_w10_34;
  int extraout_w10_35;
  int extraout_w10_36;
  int extraout_w10_37;
  int extraout_w10_38;
  int extraout_w10_39;
  int extraout_w10_40;
  int extraout_w10_41;
  int extraout_w10_42;
  int extraout_w10_43;
  int extraout_w10_44;
  int extraout_w10_45;
  int extraout_w10_46;
  int extraout_w10_47;
  int extraout_w10_48;
  int extraout_w10_49;
  int extraout_w10_50;
  int extraout_w10_51;
  int extraout_w10_52;
  int extraout_w10_53;
  int extraout_w10_54;
  int extraout_w10_55;
  int extraout_w10_56;
  int extraout_w10_57;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  int extraout_w11_11;
  int extraout_w11_12;
  int extraout_w11_13;
  int extraout_w11_14;
  int extraout_w11_15;
  int extraout_w11_16;
  int extraout_w11_17;
  int extraout_w11_18;
  int extraout_w11_19;
  int extraout_w11_20;
  int extraout_w11_21;
  int extraout_w11_22;
  int extraout_w11_23;
  int extraout_w11_24;
  int extraout_w11_25;
  int extraout_w11_26;
  int extraout_w11_27;
  int extraout_w11_28;
  int extraout_w11_29;
  int extraout_w11_30;
  int extraout_w11_31;
  int extraout_w11_32;
  int extraout_w11_33;
  int extraout_w11_34;
  int extraout_w11_35;
  int extraout_w11_36;
  int extraout_w11_37;
  int extraout_w11_38;
  int extraout_w11_39;
  int extraout_w11_40;
  int extraout_w11_41;
  int extraout_w11_42;
  int extraout_w11_43;
  int extraout_w11_44;
  int extraout_w11_45;
  int extraout_w11_46;
  int extraout_w11_47;
  int extraout_w11_48;
  int extraout_w11_49;
  int extraout_w11_50;
  int extraout_w11_51;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w12_04;
  int extraout_w12_05;
  int extraout_w12_06;
  int extraout_w12_07;
  int extraout_w12_08;
  int extraout_w12_09;
  int extraout_w12_10;
  int extraout_w12_11;
  int extraout_w12_12;
  int extraout_w12_13;
  int extraout_w12_14;
  int extraout_w12_15;
  int extraout_w12_16;
  int extraout_w12_17;
  int extraout_w12_18;
  int extraout_w12_19;
  int extraout_w12_20;
  int extraout_w12_21;
  int extraout_w12_22;
  int extraout_w12_23;
  
  if (x < 2) {
    return x;
  }
  if (x == 2) {
    return 1;
  }
  x_02 = x + -2;
  x_04 = x + -3;
  x_08 = x_04;
  x_09 = x_02;
  if (x_02 != 1) {
    x_06 = x + -4;
    x_07 = x_04;
    if (1 < x_04) {
      x_05 = x + -5;
      x_03 = x_06;
      if (1 < x_06) {
        x_00 = x + -6;
        x_03 = x_00;
        x_01 = x_05;
        if (1 < x_05) {
          if (1 < x_00) {
            x_00 = fib2(x_00);
            x_03 = extraout_w11;
            x_05 = extraout_w10;
            x_06 = extraout_w8;
            x_07 = extraout_w9;
            x_08 = x_04;
            x_09 = x_02;
          }
          x_01 = x + -7;
          if (1 < x_01) {
            x_01 = fib2(x_01);
            x_00 = extraout_w12;
            x_03 = extraout_w11_00;
            x_05 = extraout_w10_00;
            x_06 = extraout_w8_00;
            x_07 = extraout_w9_00;
          }
          x_01 = x_01 + x_00;
        }
        if (1 < x_03) {
          x_02 = x + -7;
          if (1 < x_02) {
            x_02 = fib2(x_02);
            x_01 = extraout_w12_00;
            x_05 = extraout_w10_01;
            x_06 = extraout_w8_01;
            x_07 = extraout_w9_01;
          }
          x_03 = x + -8;
          if (1 < x_03) {
            x_03 = fib2(x_03);
            x_02 = extraout_w11_01;
            x_01 = extraout_w12_01;
            x_05 = extraout_w10_02;
            x_06 = extraout_w8_02;
            x_07 = extraout_w9_02;
          }
          x_03 = x_03 + x_02;
        }
        x_03 = x_03 + x_01;
      }
      if (1 < x_05) {
        x_02 = x + -6;
        x_04 = x + -7;
        x_05 = x_04;
        if (1 < x_02) {
          if (1 < x_04) {
            x_04 = fib2(x_04);
            x_05 = extraout_w11_02;
            x_03 = extraout_w12_02;
            x_06 = extraout_w8_03;
            x_07 = extraout_w9_03;
          }
          x_02 = x + -8;
          if (1 < x_02) {
            x_02 = fib2(x_02);
            x_04 = extraout_w10_03;
            x_05 = extraout_w11_03;
            x_03 = extraout_w12_03;
            x_06 = extraout_w8_04;
            x_07 = extraout_w9_04;
          }
          x_02 = x_02 + x_04;
        }
        if (1 < x_05) {
          x_04 = x + -8;
          if (1 < x_04) {
            x_04 = fib2(x_04);
            x_02 = extraout_w10_04;
            x_03 = extraout_w12_04;
            x_06 = extraout_w8_05;
            x_07 = extraout_w9_05;
          }
          x_05 = x + -9;
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_04 = extraout_w11_04;
            x_02 = extraout_w10_05;
            x_03 = extraout_w12_05;
            x_06 = extraout_w8_06;
            x_07 = extraout_w9_06;
          }
          x_05 = x_05 + x_04;
        }
        x_05 = x_05 + x_02;
      }
      x_04 = x_05 + x_03;
    }
    if (1 < x_06) {
      x_02 = x + -5;
      x_06 = x + -6;
      if (1 < x_02) {
        x_05 = x + -7;
        x_02 = x_05;
        x_03 = x_06;
        if (1 < x_06) {
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_02 = extraout_w11_05;
            x_06 = extraout_w8_07;
            x_04 = extraout_w10_06;
            x_07 = extraout_w9_07;
          }
          x_03 = x + -8;
          if (1 < x_03) {
            x_03 = fib2(x_03);
            x_05 = extraout_w12_06;
            x_02 = extraout_w11_06;
            x_06 = extraout_w8_08;
            x_04 = extraout_w10_07;
            x_07 = extraout_w9_08;
          }
          x_03 = x_03 + x_05;
        }
        if (1 < x_02) {
          x_05 = x + -8;
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_03 = extraout_w12_07;
            x_06 = extraout_w8_09;
            x_04 = extraout_w10_08;
            x_07 = extraout_w9_09;
          }
          x_02 = x + -9;
          if (1 < x_02) {
            x_02 = fib2(x_02);
            x_05 = extraout_w11_07;
            x_03 = extraout_w12_08;
            x_06 = extraout_w8_10;
            x_04 = extraout_w10_09;
            x_07 = extraout_w9_10;
          }
          x_02 = x_02 + x_05;
        }
        x_02 = x_02 + x_03;
      }
      if (1 < x_06) {
        x_03 = x + -7;
        x_05 = x + -8;
        x_06 = x_05;
        if (1 < x_03) {
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_06 = extraout_w8_11;
            x_02 = extraout_w11_08;
            x_04 = extraout_w10_10;
            x_07 = extraout_w9_11;
          }
          x_03 = x + -9;
          if (1 < x_03) {
            x_03 = fib2(x_03);
            x_05 = extraout_w12_09;
            x_06 = extraout_w8_12;
            x_02 = extraout_w11_09;
            x_04 = extraout_w10_11;
            x_07 = extraout_w9_12;
          }
          x_03 = x_03 + x_05;
        }
        if (1 < x_06) {
          x_05 = x + -9;
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_03 = extraout_w12_10;
            x_02 = extraout_w11_10;
            x_04 = extraout_w10_12;
            x_07 = extraout_w9_13;
          }
          x_06 = x + -10;
          if (1 < x_06) {
            x_06 = fib2(x_06);
            x_05 = extraout_w8_13;
            x_03 = extraout_w12_11;
            x_02 = extraout_w11_11;
            x_04 = extraout_w10_13;
            x_07 = extraout_w9_14;
          }
          x_06 = x_06 + x_05;
        }
        x_06 = x_06 + x_03;
      }
      x_06 = x_06 + x_02;
    }
    x_02 = x_06 + x_04;
    x_04 = x_07;
  }
  if (1 < x_08) {
    x_06 = x + -4;
    x_04 = x + -5;
    if (1 < x_06) {
      x_06 = x + -6;
      x_07 = x_04;
      if (1 < x_04) {
        x_05 = x + -7;
        x_07 = x_05;
        x_03 = x_06;
        if (1 < x_06) {
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_07 = extraout_w11_12;
            x_06 = extraout_w9_15;
            x_04 = extraout_w8_14;
            x_02 = extraout_w10_14;
          }
          x_03 = x + -8;
          if (1 < x_03) {
            x_03 = fib2(x_03);
            x_05 = extraout_w12_12;
            x_07 = extraout_w11_13;
            x_06 = extraout_w9_16;
            x_04 = extraout_w8_15;
            x_02 = extraout_w10_15;
          }
          x_03 = x_03 + x_05;
        }
        if (1 < x_07) {
          x_05 = x + -8;
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_03 = extraout_w12_13;
            x_06 = extraout_w9_17;
            x_04 = extraout_w8_16;
            x_02 = extraout_w10_16;
          }
          x_07 = x + -9;
          if (1 < x_07) {
            x_07 = fib2(x_07);
            x_05 = extraout_w11_14;
            x_03 = extraout_w12_14;
            x_06 = extraout_w9_18;
            x_04 = extraout_w8_17;
            x_02 = extraout_w10_17;
          }
          x_07 = x_07 + x_05;
        }
        x_07 = x_07 + x_03;
      }
      if (1 < x_06) {
        x_03 = x + -7;
        x_05 = x + -8;
        x_06 = x_05;
        if (1 < x_03) {
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_06 = extraout_w9_19;
            x_07 = extraout_w11_15;
            x_04 = extraout_w8_18;
            x_02 = extraout_w10_18;
          }
          x_03 = x + -9;
          if (1 < x_03) {
            x_03 = fib2(x_03);
            x_05 = extraout_w12_15;
            x_06 = extraout_w9_20;
            x_07 = extraout_w11_16;
            x_04 = extraout_w8_19;
            x_02 = extraout_w10_19;
          }
          x_03 = x_03 + x_05;
        }
        if (1 < x_06) {
          x_05 = x + -9;
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_03 = extraout_w12_16;
            x_07 = extraout_w11_17;
            x_04 = extraout_w8_20;
            x_02 = extraout_w10_20;
          }
          x_06 = x + -10;
          if (1 < x_06) {
            x_06 = fib2(x_06);
            x_05 = extraout_w9_21;
            x_03 = extraout_w12_17;
            x_07 = extraout_w11_18;
            x_04 = extraout_w8_21;
            x_02 = extraout_w10_21;
          }
          x_06 = x_06 + x_05;
        }
        x_06 = x_06 + x_03;
      }
      x_06 = x_06 + x_07;
    }
    if (1 < x_04) {
      x_07 = x + -6;
      x_04 = x + -7;
      if (1 < x_07) {
        x_05 = x + -8;
        x_07 = x_05;
        x_03 = x_04;
        if (1 < x_04) {
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_07 = extraout_w11_19;
            x_04 = extraout_w8_22;
            x_06 = extraout_w9_22;
            x_02 = extraout_w10_22;
          }
          x_03 = x + -9;
          if (1 < x_03) {
            x_03 = fib2(x_03);
            x_05 = extraout_w12_18;
            x_07 = extraout_w11_20;
            x_04 = extraout_w8_23;
            x_06 = extraout_w9_23;
            x_02 = extraout_w10_23;
          }
          x_03 = x_03 + x_05;
        }
        if (1 < x_07) {
          x_05 = x + -9;
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_03 = extraout_w12_19;
            x_04 = extraout_w8_24;
            x_06 = extraout_w9_24;
            x_02 = extraout_w10_24;
          }
          x_07 = x + -10;
          if (1 < x_07) {
            x_07 = fib2(x_07);
            x_05 = extraout_w11_21;
            x_03 = extraout_w12_20;
            x_04 = extraout_w8_25;
            x_06 = extraout_w9_25;
            x_02 = extraout_w10_25;
          }
          x_07 = x_07 + x_05;
        }
        x_07 = x_07 + x_03;
      }
      if (1 < x_04) {
        x_03 = x + -8;
        x_05 = x + -9;
        x_04 = x_05;
        if (1 < x_03) {
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_04 = extraout_w8_26;
            x_07 = extraout_w11_22;
            x_06 = extraout_w9_26;
            x_02 = extraout_w10_26;
          }
          x_03 = x + -10;
          if (1 < x_03) {
            x_03 = fib2(x_03);
            x_05 = extraout_w12_21;
            x_04 = extraout_w8_27;
            x_07 = extraout_w11_23;
            x_06 = extraout_w9_27;
            x_02 = extraout_w10_27;
          }
          x_03 = x_03 + x_05;
        }
        if (1 < x_04) {
          x_05 = x + -10;
          if (1 < x_05) {
            x_05 = fib2(x_05);
            x_03 = extraout_w12_22;
            x_07 = extraout_w11_24;
            x_06 = extraout_w9_28;
            x_02 = extraout_w10_28;
          }
          x_04 = x + -0xb;
          if (1 < x_04) {
            x_04 = fib2(x_04);
            x_05 = extraout_w8_28;
            x_03 = extraout_w12_23;
            x_07 = extraout_w11_25;
            x_06 = extraout_w9_29;
            x_02 = extraout_w10_29;
          }
          x_04 = x_04 + x_05;
        }
        x_04 = x_04 + x_03;
      }
      x_04 = x_04 + x_07;
    }
    x_04 = x_04 + x_06;
  }
  x_04 = x_04 + x_02;
  if (x_09 != 1) {
    x_09 = x + -4;
    if (1 < x_08) {
      x_08 = x + -5;
      x_02 = x_09;
      if (1 < x_09) {
        x_02 = x + -6;
        x_06 = x_08;
        if (1 < x_08) {
          x_03 = x + -7;
          x_06 = x_03;
          x_07 = x_02;
          if (1 < x_02) {
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_06 = extraout_w10_30;
              x_02 = extraout_w8_29;
              x_04 = extraout_w9_30;
            }
            x_07 = x + -8;
            if (1 < x_07) {
              x_07 = fib2(x_07);
              x_03 = extraout_w11_26;
              x_06 = extraout_w10_31;
              x_02 = extraout_w8_30;
              x_04 = extraout_w9_31;
            }
            x_07 = x_07 + x_03;
          }
          if (1 < x_06) {
            x_03 = x + -8;
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_07 = extraout_w11_27;
              x_02 = extraout_w8_31;
              x_04 = extraout_w9_32;
            }
            x_06 = x + -9;
            if (1 < x_06) {
              x_06 = fib2(x_06);
              x_03 = extraout_w10_32;
              x_07 = extraout_w11_28;
              x_02 = extraout_w8_32;
              x_04 = extraout_w9_33;
            }
            x_06 = x_06 + x_03;
          }
          x_06 = x_06 + x_07;
        }
        if (1 < x_02) {
          x_07 = x + -7;
          x_03 = x + -8;
          x_02 = x_03;
          if (1 < x_07) {
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_02 = extraout_w10_33;
              x_06 = extraout_w11_29;
              x_04 = extraout_w9_34;
            }
            x_07 = x + -9;
            if (1 < x_07) {
              x_07 = fib2(x_07);
              x_03 = extraout_w8_33;
              x_02 = extraout_w10_34;
              x_06 = extraout_w11_30;
              x_04 = extraout_w9_35;
            }
            x_07 = x_07 + x_03;
          }
          if (1 < x_02) {
            x_03 = x + -9;
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_07 = extraout_w8_34;
              x_06 = extraout_w11_31;
              x_04 = extraout_w9_36;
            }
            x_02 = x + -10;
            if (1 < x_02) {
              x_02 = fib2(x_02);
              x_03 = extraout_w10_35;
              x_07 = extraout_w8_35;
              x_06 = extraout_w11_32;
              x_04 = extraout_w9_37;
            }
            x_02 = x_02 + x_03;
          }
          x_02 = x_02 + x_07;
        }
        x_02 = x_02 + x_06;
      }
      if (1 < x_08) {
        x_06 = x + -6;
        x_08 = x + -7;
        if (1 < x_06) {
          x_03 = x + -8;
          x_06 = x_03;
          x_07 = x_08;
          if (1 < x_08) {
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_06 = extraout_w10_36;
              x_02 = extraout_w8_36;
              x_04 = extraout_w9_38;
            }
            x_07 = x + -9;
            if (1 < x_07) {
              x_07 = fib2(x_07);
              x_03 = extraout_w11_33;
              x_06 = extraout_w10_37;
              x_02 = extraout_w8_37;
              x_04 = extraout_w9_39;
            }
            x_07 = x_07 + x_03;
          }
          if (1 < x_06) {
            x_03 = x + -9;
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_07 = extraout_w11_34;
              x_02 = extraout_w8_38;
              x_04 = extraout_w9_40;
            }
            x_06 = x + -10;
            if (1 < x_06) {
              x_06 = fib2(x_06);
              x_03 = extraout_w10_38;
              x_07 = extraout_w11_35;
              x_02 = extraout_w8_39;
              x_04 = extraout_w9_41;
            }
            x_06 = x_06 + x_03;
          }
          x_06 = x_06 + x_07;
        }
        if (1 < x_08) {
          x_07 = x + -8;
          x_03 = x + -9;
          x_08 = x_03;
          if (1 < x_07) {
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_06 = extraout_w10_39;
              x_02 = extraout_w8_40;
              x_04 = extraout_w9_42;
            }
            x_07 = x + -10;
            if (1 < x_07) {
              x_07 = fib2(x_07);
              x_03 = extraout_w11_36;
              x_06 = extraout_w10_40;
              x_02 = extraout_w8_41;
              x_04 = extraout_w9_43;
            }
            x_07 = x_07 + x_03;
          }
          if (1 < x_08) {
            x_03 = x + -10;
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_07 = extraout_w11_37;
              x_06 = extraout_w10_41;
              x_02 = extraout_w8_42;
              x_04 = extraout_w9_44;
            }
            x_08 = x + -0xb;
            if (1 < x_08) {
              x_08 = fib2(x_08);
              x_07 = extraout_w11_38;
              x_06 = extraout_w10_42;
              x_02 = extraout_w8_43;
              x_04 = extraout_w9_45;
            }
            x_08 = x_08 + x_03;
          }
          x_08 = x_08 + x_07;
        }
        x_08 = x_08 + x_06;
      }
      x_08 = x_08 + x_02;
    }
    if (1 < x_09) {
      x_02 = x + -5;
      x_09 = x + -6;
      if (1 < x_02) {
        x_02 = x + -7;
        x_06 = x_09;
        if (1 < x_09) {
          x_03 = x + -8;
          x_06 = x_03;
          x_07 = x_02;
          if (1 < x_02) {
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_02 = extraout_w10_43;
              x_08 = extraout_w8_44;
              x_04 = extraout_w9_46;
            }
            x_07 = x + -9;
            if (1 < x_07) {
              x_07 = fib2(x_07);
              x_03 = extraout_w11_39;
              x_02 = extraout_w10_44;
              x_08 = extraout_w8_45;
              x_04 = extraout_w9_47;
            }
            x_07 = x_07 + x_03;
          }
          if (1 < x_06) {
            x_03 = x + -9;
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_07 = extraout_w11_40;
              x_02 = extraout_w10_45;
              x_08 = extraout_w8_46;
              x_04 = extraout_w9_48;
            }
            x_06 = x + -10;
            if (1 < x_06) {
              x_06 = fib2(x_06);
              x_07 = extraout_w11_41;
              x_02 = extraout_w10_46;
              x_08 = extraout_w8_47;
              x_04 = extraout_w9_49;
            }
            x_06 = x_06 + x_03;
          }
          x_06 = x_06 + x_07;
        }
        if (1 < x_02) {
          x_07 = x + -8;
          x_03 = x + -9;
          x_02 = x_03;
          if (1 < x_07) {
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_02 = extraout_w10_47;
              x_08 = extraout_w8_48;
              x_04 = extraout_w9_50;
            }
            x_07 = x + -10;
            if (1 < x_07) {
              x_07 = fib2(x_07);
              x_03 = extraout_w11_42;
              x_02 = extraout_w10_48;
              x_08 = extraout_w8_49;
              x_04 = extraout_w9_51;
            }
            x_07 = x_07 + x_03;
          }
          if (1 < x_02) {
            x_03 = x + -10;
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_07 = extraout_w11_43;
              x_08 = extraout_w8_50;
              x_04 = extraout_w9_52;
            }
            x_02 = x + -0xb;
            if (1 < x_02) {
              x_02 = fib2(x_02);
              x_03 = extraout_w10_49;
              x_07 = extraout_w11_44;
              x_08 = extraout_w8_51;
              x_04 = extraout_w9_53;
            }
            x_02 = x_02 + x_03;
          }
          x_02 = x_02 + x_07;
        }
        x_02 = x_02 + x_06;
      }
      if (1 < x_09) {
        x_06 = x + -7;
        x_09 = x + -8;
        if (1 < x_06) {
          x_03 = x + -9;
          x_06 = x_03;
          x_07 = x_09;
          if (1 < x_09) {
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_06 = extraout_w11_45;
              x_02 = extraout_w10_50;
              x_08 = extraout_w8_52;
              x_04 = extraout_w9_54;
            }
            x_07 = x + -10;
            if (1 < x_07) {
              x_07 = fib2(x_07);
              x_06 = extraout_w11_46;
              x_02 = extraout_w10_51;
              x_08 = extraout_w8_53;
              x_04 = extraout_w9_55;
            }
            x_07 = x_07 + x_03;
          }
          if (1 < x_06) {
            x_03 = x + -10;
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_02 = extraout_w10_52;
              x_08 = extraout_w8_54;
              x_04 = extraout_w9_56;
            }
            x_06 = x + -0xb;
            if (1 < x_06) {
              x_06 = fib2(x_06);
              x_03 = extraout_w11_47;
              x_02 = extraout_w10_53;
              x_08 = extraout_w8_55;
              x_04 = extraout_w9_57;
            }
            x_06 = x_06 + x_03;
          }
          x_06 = x_06 + x_07;
        }
        if (1 < x_09) {
          x_07 = x + -9;
          x_03 = x + -10;
          x_09 = x_03;
          if (1 < x_07) {
            if (1 < x_03) {
              x_03 = fib2(x_03);
              x_06 = extraout_w11_48;
              x_02 = extraout_w10_54;
              x_08 = extraout_w8_56;
              x_04 = extraout_w9_58;
            }
            x_07 = x + -0xb;
            if (1 < x_07) {
              x_07 = fib2(x_07);
              x_06 = extraout_w11_49;
              x_02 = extraout_w10_55;
              x_08 = extraout_w8_57;
              x_04 = extraout_w9_59;
            }
            x_07 = x_07 + x_03;
          }
          if (1 < x_09) {
            x_09 = x + -0xb;
            if (1 < x_09) {
              x_09 = fib2(x_09);
              x_06 = extraout_w11_50;
              x_02 = extraout_w10_56;
              x_08 = extraout_w8_58;
              x_04 = extraout_w9_60;
            }
            x = x + -0xc;
            if (1 < x) {
              x = fib2(x);
              x_06 = extraout_w11_51;
              x_02 = extraout_w10_57;
              x_08 = extraout_w8_59;
              x_04 = extraout_w9_61;
            }
            x_09 = x + x_09;
          }
          x_09 = x_09 + x_07;
        }
        x_09 = x_09 + x_06;
      }
      x_09 = x_09 + x_02;
    }
    x_09 = x_09 + x_08;
  }
  return x_09 + x_04;
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


