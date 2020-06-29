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
  b((ulonglong)(uint)argc);
  printf("ecx is %d, edx is %d\n",0,0);
  printf("res is %d\n",(ulonglong)(uint)res);
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100778)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x001007a0)
// WARNING: Removing unreachable block (ram,0x001007ac)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x001007dc)
// WARNING: Removing unreachable block (ram,0x001007e8)

void register_tm_clones(void)

{
  return;
}



void FUN_001007f4(void)

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



void f(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = f_g + -1;
  if (iVar1 < 0) {
    f_g = iVar1;
    res = res + 0xb;
    return;
  }
  iVar2 = g_f + -1;
  if (-1 < iVar2) {
    iVar1 = f_g + -2;
    if (iVar1 == -1) {
      res = res + 0xb;
    }
    else {
      iVar2 = g_f + -2;
      if (iVar2 != -1) {
        f_g = f_g + -3;
        if (f_g != -1) {
          g_f = g_f + -3;
          if (g_f != -1) {
            f();
            res = res + 0x48;
            return;
          }
          res = res + 0xd;
          iVar2 = g_f;
        }
        g_f = iVar2;
        res = res + 0xb;
        iVar1 = f_g;
        iVar2 = g_f;
      }
      g_f = iVar2;
      f_g = iVar1;
      res = res + 0x18;
      iVar1 = f_g;
      iVar2 = g_f;
    }
  }
  g_f = iVar2;
  f_g = iVar1;
  res = res + 0x18;
  return;
}



void FUN_0010099c(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  c_d = c_d + -1;
  if (-1 < c_d) {
    d_e = d_e + -1;
    if (-1 < d_e) {
      e_c = e_c - 1;
      if (-1 < e_c) {
        c((void *)(ulonglong)(uint)e_c,&f_g);
      }
      res = res + 7;
    }
    res = res + 5;
  }
  c_f = c_f + -1;
  if (-1 < c_f) {
    iVar1 = f_g + -1;
    if (iVar1 < 0) {
      res = res + 0xb;
      f_g = iVar1;
    }
    else {
      iVar2 = g_f + -1;
      if (-1 < iVar2) {
        iVar1 = f_g + -2;
        if (iVar1 != -1) {
          iVar2 = g_f + -2;
          if (iVar2 != -1) {
            f_g = f_g + -3;
            if (f_g == -1) {
              res = res + 0xb;
              iVar1 = f_g;
            }
            else {
              g_f = g_f + -3;
              if (g_f != -1) {
                f();
              }
              res = res + 0x18;
              iVar1 = f_g;
              iVar2 = g_f;
            }
          }
          g_f = iVar2;
          f_g = iVar1;
          res = res + 0xd;
          iVar1 = f_g;
          iVar2 = g_f;
        }
        g_f = iVar2;
        f_g = iVar1;
        res = res + 0xb;
        iVar1 = f_g;
        iVar2 = g_f;
      }
      g_f = iVar2;
      f_g = iVar1;
      res = res + 0x18;
    }
  }
  c_h = c_h + -1;
  if (-1 < c_h) {
    h_i = h_i + -1;
    if (-1 < h_i) {
      res = res + 0x13;
    }
    res = res + 0x11;
  }
  c_j = c_j - 1;
  pvVar3 = (void *)(ulonglong)(uint)c_j;
  if (-1 < c_j) {
    j_k = j_k - 1;
    pvVar3 = (void *)(ulonglong)(uint)j_k;
    if (-1 < j_k) {
      k_e = k_e - 1;
      pvVar3 = (void *)(ulonglong)(uint)k_e;
      if (-1 < k_e) {
        e_c = e_c - 1;
        pvVar3 = (void *)(ulonglong)(uint)e_c;
        if (-1 < e_c) {
          c(&f_g,pvVar3);
        }
        res = res + 7;
      }
      res = res + 0x1b;
    }
    res = res + 0x17;
  }
  c_l = c_l + -1;
  if (c_l < 0) {
    res = res + 3;
    return;
  }
  l_b = l_b + -1;
  if (-1 < l_b) {
    b_c = b_c - 1;
    if (-1 < b_c) {
      c((void *)(ulonglong)(uint)b_c,pvVar3);
    }
    res = res + 2;
  }
  res = res + 0x20;
  return;
}



int c(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  void *param_2_00;
  
  c_d = c_d + -1;
  if (-1 < c_d) {
    d_e = d_e + -1;
    if (-1 < d_e) {
      e_c = e_c - 1;
      if (-1 < e_c) {
        c((void *)(ulonglong)(uint)e_c,&f_g);
      }
      res = res + 7;
    }
    res = res + 5;
  }
  c_f = c_f + -1;
  if (-1 < c_f) {
    iVar1 = f_g + -1;
    if (iVar1 < 0) {
      res = res + 0xb;
      f_g = iVar1;
    }
    else {
      iVar2 = g_f + -1;
      if (-1 < iVar2) {
        iVar1 = f_g + -2;
        if (iVar1 != -1) {
          iVar2 = g_f + -2;
          if (iVar2 != -1) {
            f_g = f_g + -3;
            if (f_g == -1) {
              res = res + 0xb;
              iVar1 = f_g;
            }
            else {
              g_f = g_f + -3;
              if (g_f != -1) {
                f();
              }
              res = res + 0x18;
              iVar1 = f_g;
              iVar2 = g_f;
            }
          }
          g_f = iVar2;
          f_g = iVar1;
          res = res + 0xd;
          iVar1 = f_g;
          iVar2 = g_f;
        }
        g_f = iVar2;
        f_g = iVar1;
        res = res + 0xb;
        iVar1 = f_g;
        iVar2 = g_f;
      }
      g_f = iVar2;
      f_g = iVar1;
      res = res + 0x18;
    }
  }
  c_h = c_h + -1;
  if (-1 < c_h) {
    h_i = h_i + -1;
    if (-1 < h_i) {
      res = res + 0x13;
    }
    res = res + 0x11;
  }
  c_j = c_j - 1;
  param_2_00 = (void *)(ulonglong)(uint)c_j;
  if (-1 < c_j) {
    j_k = j_k - 1;
    param_2_00 = (void *)(ulonglong)(uint)j_k;
    if (-1 < j_k) {
      k_e = k_e - 1;
      param_2_00 = (void *)(ulonglong)(uint)k_e;
      if (-1 < k_e) {
        e_c = e_c - 1;
        param_2_00 = (void *)(ulonglong)(uint)e_c;
        if (-1 < e_c) {
          c(&f_g,param_2_00);
        }
        res = res + 7;
      }
      res = res + 0x1b;
    }
    res = res + 0x17;
  }
  c_l = c_l + -1;
  if (c_l < 0) {
    res = res + 3;
    return res;
  }
  l_b = l_b + -1;
  if (-1 < l_b) {
    b_c = b_c - 1;
    if (-1 < b_c) {
      c((void *)(ulonglong)(uint)b_c,param_2_00);
    }
    res = res + 2;
  }
  res = res + 0x20;
  return res;
}



void d(void)

{
  d_e = d_e + -1;
  if (d_e < 0) {
    res = res + 5;
    return;
  }
  e_c = e_c - 1;
  if (-1 < e_c) {
    c(&f_g,(void *)(ulonglong)(uint)e_c);
    res = res + 0xc;
    return;
  }
  res = res + 0xc;
  return;
}



void b(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  ppuVar6 = &PTR___cxa_finalize_00112000;
  b_c = b_c + -1;
  if (b_c < 0) {
    res = res + 2;
    return;
  }
  c_d = c_d + -1;
  if (-1 < c_d) {
    d_e = d_e + -1;
    if (-1 < d_e) {
      e_c = e_c - 1;
      if (-1 < e_c) {
        c(&f_g,(void *)(ulonglong)(uint)e_c);
      }
      res = res + 7;
    }
    res = res + 5;
  }
  ppuVar7 = &PTR___cxa_finalize_00112000;
  iVar4 = *(int *)((longlong)ppuVar6 + 0x4c) + -1;
  *(int *)((longlong)ppuVar6 + 0x4c) = iVar4;
  if (-1 < iVar4) {
    iVar4 = *(int *)(ppuVar6 + 7);
    *(int *)(ppuVar6 + 7) = iVar4 + -1;
    iVar3 = res;
    if (-1 < iVar4 + -1) {
      iVar3 = *(int *)((longlong)ppuVar6 + 0x3c);
      *(int *)((longlong)ppuVar6 + 0x3c) = iVar3 + -1;
      iVar2 = res;
      if (-1 < iVar3 + -1) {
        *(int *)(ppuVar6 + 7) = iVar4 + -2;
        if (iVar4 + -2 == -1) {
          iVar2 = res + 0xb;
        }
        else {
          *(int *)((longlong)ppuVar6 + 0x3c) = iVar3 + -2;
          iVar2 = res;
          if (iVar3 + -2 != -1) {
            *(int *)(ppuVar6 + 7) = iVar4 + -3;
            if (iVar4 + -3 == -1) {
              iVar2 = res + 0xb;
            }
            else {
              *(int *)((longlong)ppuVar6 + 0x3c) = iVar3 + -3;
              if (iVar3 + -3 != -1) {
                f();
              }
              iVar2 = *(int *)((longlong)ppuVar7 + 0x74) + 0x18;
            }
          }
          iVar2 = iVar2 + 0x18;
        }
      }
      iVar3 = iVar2 + 0xd;
    }
    *(int *)((longlong)ppuVar7 + 0x74) = iVar3 + 0xb;
  }
  iVar4 = *(int *)(ppuVar6 + 10);
  *(int *)(ppuVar6 + 10) = iVar4 + -1;
  if (-1 < iVar4 + -1) {
    iVar4 = *(int *)((longlong)ppuVar6 + 0x54) + -1;
    *(int *)((longlong)ppuVar6 + 0x54) = iVar4;
    if (iVar4 < 0) {
      iVar4 = *(int *)((longlong)ppuVar7 + 0x74);
    }
    else {
      iVar4 = *(int *)((longlong)ppuVar7 + 0x74) + 0x13;
    }
    *(int *)((longlong)ppuVar7 + 0x74) = iVar4 + 0x11;
  }
  uVar1 = *(int *)(ppuVar6 + 0xb) - 1;
  pvVar5 = (void *)(ulonglong)uVar1;
  *(uint *)(ppuVar6 + 0xb) = uVar1;
  if (-1 < (int)uVar1) {
    uVar1 = *(int *)((longlong)ppuVar6 + 0x5c) - 1;
    pvVar5 = (void *)(ulonglong)uVar1;
    *(uint *)((longlong)ppuVar6 + 0x5c) = uVar1;
    if ((int)uVar1 < 0) {
      iVar4 = *(int *)((longlong)ppuVar7 + 0x74);
    }
    else {
      uVar1 = *(int *)(ppuVar6 + 0xc) - 1;
      pvVar5 = (void *)(ulonglong)uVar1;
      *(uint *)(ppuVar6 + 0xc) = uVar1;
      if ((int)uVar1 < 0) {
        iVar4 = *(int *)((longlong)ppuVar7 + 0x74);
      }
      else {
        uVar1 = *(int *)(ppuVar6 + 9) - 1;
        pvVar5 = (void *)(ulonglong)uVar1;
        *(uint *)(ppuVar6 + 9) = uVar1;
        if (-1 < (int)uVar1) {
          c(ppuVar6 + 7,pvVar5);
        }
        iVar4 = *(int *)((longlong)ppuVar7 + 0x74) + 7;
      }
      iVar4 = iVar4 + 0x1b;
    }
    *(int *)((longlong)ppuVar7 + 0x74) = iVar4 + 0x17;
  }
  iVar4 = *(int *)((longlong)ppuVar6 + 100) + -1;
  *(int *)((longlong)ppuVar6 + 100) = iVar4;
  if (iVar4 < 0) {
    *(int *)((longlong)ppuVar7 + 0x74) = *(int *)((longlong)ppuVar7 + 0x74) + 5;
    return;
  }
  iVar4 = *(int *)(ppuVar6 + 0xd);
  *(int *)(ppuVar6 + 0xd) = iVar4 + -1;
  if (iVar4 + -1 < 0) {
    iVar4 = *(int *)((longlong)ppuVar7 + 0x74) + 0x1d;
  }
  else {
    uVar1 = *(int *)((longlong)ppuVar6 + 0x6c) - 1;
    *(uint *)((longlong)ppuVar6 + 0x6c) = uVar1;
    if (-1 < (int)uVar1) {
      c((void *)(ulonglong)uVar1,pvVar5);
    }
    iVar4 = *(int *)((longlong)ppuVar7 + 0x74) + 0x1f;
  }
  *(int *)((longlong)ppuVar7 + 0x74) = iVar4 + 5;
  return;
}



void e(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  ppuVar6 = &PTR___cxa_finalize_00112000;
  iVar4 = e_c + -1;
  if (iVar4 < 0) {
    e_c = iVar4;
    res = res + 7;
    return;
  }
  c_d = c_d + -1;
  if (-1 < c_d) {
    d_e = d_e - 1;
    if (-1 < d_e) {
      e_c = e_c + -2;
      if (e_c != -1) {
        c(&f_g,(void *)(ulonglong)(uint)d_e);
      }
      res = res + 7;
      iVar4 = e_c;
    }
    e_c = iVar4;
    res = res + 5;
    iVar4 = e_c;
  }
  e_c = iVar4;
  ppuVar7 = &PTR___cxa_finalize_00112000;
  iVar4 = *(int *)((longlong)ppuVar6 + 0x4c) + -1;
  *(int *)((longlong)ppuVar6 + 0x4c) = iVar4;
  if (-1 < iVar4) {
    iVar4 = *(int *)(ppuVar6 + 7);
    *(int *)(ppuVar6 + 7) = iVar4 + -1;
    iVar3 = res;
    if (-1 < iVar4 + -1) {
      iVar3 = *(int *)((longlong)ppuVar6 + 0x3c);
      *(int *)((longlong)ppuVar6 + 0x3c) = iVar3 + -1;
      iVar2 = res;
      if (-1 < iVar3 + -1) {
        *(int *)(ppuVar6 + 7) = iVar4 + -2;
        if (iVar4 + -2 == -1) {
          iVar2 = res + 0xb;
        }
        else {
          *(int *)((longlong)ppuVar6 + 0x3c) = iVar3 + -2;
          iVar2 = res;
          if (iVar3 + -2 != -1) {
            *(int *)(ppuVar6 + 7) = iVar4 + -3;
            if (iVar4 + -3 == -1) {
              iVar2 = res + 0xb;
            }
            else {
              *(int *)((longlong)ppuVar6 + 0x3c) = iVar3 + -3;
              if (iVar3 + -3 != -1) {
                f();
              }
              iVar2 = *(int *)((longlong)ppuVar7 + 0x74) + 0x18;
            }
          }
          iVar2 = iVar2 + 0x18;
        }
      }
      iVar3 = iVar2 + 0xd;
    }
    *(int *)((longlong)ppuVar7 + 0x74) = iVar3 + 0xb;
  }
  iVar4 = *(int *)(ppuVar6 + 10);
  *(int *)(ppuVar6 + 10) = iVar4 + -1;
  if (-1 < iVar4 + -1) {
    iVar4 = *(int *)((longlong)ppuVar6 + 0x54) + -1;
    *(int *)((longlong)ppuVar6 + 0x54) = iVar4;
    if (iVar4 < 0) {
      iVar4 = *(int *)((longlong)ppuVar7 + 0x74);
    }
    else {
      iVar4 = *(int *)((longlong)ppuVar7 + 0x74) + 0x13;
    }
    *(int *)((longlong)ppuVar7 + 0x74) = iVar4 + 0x11;
  }
  uVar1 = *(int *)(ppuVar6 + 0xb) - 1;
  pvVar5 = (void *)(ulonglong)uVar1;
  *(uint *)(ppuVar6 + 0xb) = uVar1;
  if (-1 < (int)uVar1) {
    uVar1 = *(int *)((longlong)ppuVar6 + 0x5c) - 1;
    pvVar5 = (void *)(ulonglong)uVar1;
    *(uint *)((longlong)ppuVar6 + 0x5c) = uVar1;
    if ((int)uVar1 < 0) {
      iVar4 = *(int *)((longlong)ppuVar7 + 0x74);
    }
    else {
      uVar1 = *(int *)(ppuVar6 + 0xc) - 1;
      pvVar5 = (void *)(ulonglong)uVar1;
      *(uint *)(ppuVar6 + 0xc) = uVar1;
      if ((int)uVar1 < 0) {
        iVar4 = *(int *)((longlong)ppuVar7 + 0x74);
      }
      else {
        uVar1 = *(int *)(ppuVar6 + 9) - 1;
        pvVar5 = (void *)(ulonglong)uVar1;
        *(uint *)(ppuVar6 + 9) = uVar1;
        if (-1 < (int)uVar1) {
          c(ppuVar6 + 7,pvVar5);
        }
        iVar4 = *(int *)((longlong)ppuVar7 + 0x74) + 7;
      }
      iVar4 = iVar4 + 0x1b;
    }
    *(int *)((longlong)ppuVar7 + 0x74) = iVar4 + 0x17;
  }
  iVar4 = *(int *)((longlong)ppuVar6 + 100) + -1;
  *(int *)((longlong)ppuVar6 + 100) = iVar4;
  if (iVar4 < 0) {
    *(int *)((longlong)ppuVar7 + 0x74) = *(int *)((longlong)ppuVar7 + 0x74) + 10;
    return;
  }
  iVar4 = *(int *)(ppuVar6 + 0xd);
  *(int *)(ppuVar6 + 0xd) = iVar4 + -1;
  if (iVar4 + -1 < 0) {
    iVar4 = *(int *)((longlong)ppuVar7 + 0x74) + 0x1d;
  }
  else {
    uVar1 = *(int *)((longlong)ppuVar6 + 0x6c) - 1;
    *(uint *)((longlong)ppuVar6 + 0x6c) = uVar1;
    if (-1 < (int)uVar1) {
      c((void *)(ulonglong)uVar1,pvVar5);
    }
    iVar4 = *(int *)((longlong)ppuVar7 + 0x74) + 0x1f;
  }
  *(int *)((longlong)ppuVar7 + 0x74) = iVar4 + 10;
  return;
}



void g(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = g_f + -1;
  if (iVar1 < 0) {
    g_f = iVar1;
    res = res + 0xd;
    return;
  }
  iVar2 = f_g + -1;
  if (-1 < iVar2) {
    iVar1 = g_f + -2;
    if (iVar1 == -1) {
      res = res + 0xd;
    }
    else {
      iVar2 = f_g + -2;
      if (iVar2 != -1) {
        iVar1 = g_f + -3;
        if (iVar1 != -1) {
          f_g = f_g + -3;
          if (f_g == -1) {
            res = res + 0xb;
            iVar2 = f_g;
          }
          else {
            g_f = g_f + -4;
            if (g_f != -1) {
              f();
              res = res + 0x55;
              return;
            }
            res = res + 0x18;
            iVar2 = f_g;
            iVar1 = g_f;
          }
        }
        g_f = iVar1;
        f_g = iVar2;
        res = res + 0xd;
        iVar2 = f_g;
        iVar1 = g_f;
      }
      g_f = iVar1;
      f_g = iVar2;
      res = res + 0x18;
      iVar2 = f_g;
      iVar1 = g_f;
    }
  }
  g_f = iVar1;
  f_g = iVar2;
  res = res + 0x18;
  return;
}



void h(void)

{
  h_i = h_i + -1;
  if (-1 < h_i) {
    res = res + 0x24;
    return;
  }
  res = res + 0x11;
  return;
}



void i(void)

{
  res = res + 0x13;
  return;
}



void j(void)

{
  j_k = j_k + -1;
  if (j_k < 0) {
    res = res + 0x17;
    return;
  }
  k_e = k_e + -1;
  if (-1 < k_e) {
    e_c = e_c - 1;
    if (-1 < e_c) {
      c(&f_g,(void *)(ulonglong)(uint)e_c);
      res = res + 0x39;
      return;
    }
    res = res + 7;
  }
  res = res + 0x32;
  return;
}



void k(void)

{
  k_e = k_e + -1;
  if (k_e < 0) {
    res = res + 0x1b;
    return;
  }
  e_c = e_c - 1;
  if (-1 < e_c) {
    c(&f_g,(void *)(ulonglong)(uint)e_c);
    res = res + 0x22;
    return;
  }
  res = res + 0x22;
  return;
}



void l(void)

{
  l_b = l_b + -1;
  if (l_b < 0) {
    res = res + 0x1d;
    return;
  }
  b_c = b_c - 1;
  if (-1 < b_c) {
    c(&f_g,(void *)(ulonglong)(uint)b_c);
    res = res + 0x1f;
    return;
  }
  res = res + 0x1f;
  return;
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


