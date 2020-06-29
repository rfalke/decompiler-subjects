typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
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

typedef ulong size_t;

typedef struct vector vector, *Pvector;

struct vector { // PlaceHolder Structure
};

typedef dword forward_iterator_tag;

typedef dword __normal_iterator;

typedef enum Elf64_DynTag {
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
} Elf64_DynTag;

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef enum Elf_ProgramHeaderType {
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
} Elf_ProgramHeaderType;

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

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

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
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
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
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
  
  call_gmon_start();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



void FUN_00400530(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __throw_length_error(char *param_1)

{
  __throw_length_error(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



undefined8 main(void)

{
  return 0;
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void call_gmon_start(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00400612)
// WARNING: Removing unreachable block (ram,0x00400618)

void __do_global_dtors_aux(void)

{
  if (completed_5886 == '\0') {
    completed_5886 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00400668)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  return;
}



// f(std::vector<int, std::allocator<int>>&, std::vector<int, std::allocator<int>>&)

void f(vector *param_1,vector *param_2)

{
  _M_range_insert___gnu_cxx____normal_iterator_int__std__vector_int_std__allocator_int____
            ((__normal_iterator)param_1,(__normal_iterator)*(undefined8 *)(param_1 + 8),
             (__normal_iterator)*(undefined8 *)param_2,
             (forward_iterator_tag)*(undefined8 *)(param_2 + 8));
  return;
}



// void std::vector<int, std::allocator<int>>::_M_range_insert<__gnu_cxx::__normal_iterator<int*,
// std::vector<int, std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>,
// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>,
// std::forward_iterator_tag)

void _M_range_insert___gnu_cxx____normal_iterator_int__std__vector_int_std__allocator_int____
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               forward_iterator_tag param_4)

{
  ulong uVar1;
  void *__dest;
  long lVar2;
  void *__src;
  undefined4 in_register_0000000c;
  size_t __n;
  void *__src_00;
  undefined4 in_register_00000014;
  void *__src_01;
  undefined4 in_register_00000034;
  void *__src_02;
  undefined4 in_register_0000003c;
  void **ppvVar3;
  ulong __n_00;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  ppvVar3 = (void **)CONCAT44(in_register_0000003c,param_1);
  __src_02 = (void *)CONCAT44(in_register_00000034,param_2);
  __src_01 = (void *)CONCAT44(in_register_00000014,param_3);
  __src = (void *)CONCAT44(in_register_0000000c,param_4);
  if (__src_01 == __src) {
    return;
  }
  __dest = ppvVar3[1];
  __n_00 = (long)((long)__src - (long)__src_01) >> 2;
  if (__n_00 <= (ulong)((long)((long)ppvVar3[2] - (long)__dest) >> 2)) {
    uVar4 = (long)((long)__dest - (long)__src_02) >> 2;
    if (__n_00 < uVar4) {
      __n = __n_00 * 4;
      __src_00 = (void *)((long)__dest + __n_00 * -4);
      __src = __dest;
      if ((long)__n >> 2 != 0) {
        memmove(__dest,__src_00,((long)__n >> 2) << 2);
        __src = ppvVar3[1];
      }
      lVar2 = (long)((long)__src_00 - (long)__src_02) >> 2;
      ppvVar3[1] = (void *)((long)__src + __n);
      if (lVar2 != 0) {
        memmove((void *)((long)__dest + lVar2 * -4),__src_02,lVar2 * 4);
      }
      if (__n_00 == 0) {
        return;
      }
    }
    else {
      __n = uVar4 * 4;
      __src_00 = (void *)((long)__src_01 + __n);
      lVar2 = (long)((long)__src - (long)__src_00) >> 2;
      if (lVar2 != 0) {
        memmove(__dest,__src_00,lVar2 * 4);
        __dest = ppvVar3[1];
      }
      __dest = (void *)((long)__dest + (__n_00 - uVar4) * 4);
      ppvVar3[1] = __dest;
      if (uVar4 != 0) {
        memmove(__dest,__src_02,__n);
        __dest = ppvVar3[1];
      }
      lVar2 = (long)((long)__src_00 - (long)__src_01) >> 2;
      ppvVar3[1] = (void *)(__n + (long)__dest);
      if (lVar2 == 0) {
        return;
      }
      __n = lVar2 * 4;
    }
    memmove(__src_02,__src_01,__n);
    return;
  }
  __src = *ppvVar3;
  uVar4 = (long)((long)__dest - (long)__src) >> 2;
  if (0x3fffffffffffffff - uVar4 < __n_00) {
    __throw_length_error("vector::_M_range_insert");
LAB_00400990:
    uVar5 = uVar4 * 4;
  }
  else {
    uVar5 = 0xfffffffffffffffc;
    uVar1 = __n_00;
    if (__n_00 <= uVar4) {
      uVar1 = uVar4;
    }
    bVar6 = CARRY8(uVar4,uVar1);
    uVar4 = uVar4 + uVar1;
    if ((!bVar6) && (uVar4 < 0x4000000000000000)) {
      if (uVar4 == 0) {
        uVar5 = 0;
        __dest = (void *)0x0;
        goto LAB_00400746;
      }
      goto LAB_00400990;
    }
  }
  __dest = operator_new(uVar5);
  __src = *ppvVar3;
LAB_00400746:
  __n = 0;
  lVar2 = (long)((long)__src_02 - (long)__src) >> 2;
  if (lVar2 != 0) {
    __n = lVar2 * 4;
    memmove(__dest,__src,__n);
  }
  if (__n_00 != 0) {
    __n_00 = __n_00 << 2;
    memmove((void *)(__n + (long)__dest),__src_01,__n_00);
  }
  __src = (void *)(__n_00 + (long)(void *)(__n + (long)__dest));
  __n = 0;
  lVar2 = (long)((long)ppvVar3[1] - (long)__src_02) >> 2;
  if (lVar2 != 0) {
    __n = lVar2 * 4;
    memmove(__src,__src_02,__n);
  }
  if (*ppvVar3 != (void *)0x0) {
    operator_delete(*ppvVar3);
  }
  *ppvVar3 = __dest;
  ppvVar3[1] = (void *)(__n + (long)__src);
  ppvVar3[2] = (void *)((long)__dest + uVar5);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004009fa)
// WARNING: Removing unreachable block (ram,0x00400a00)

void __libc_csu_init(EVP_PKEY_CTX *param_1)

{
  _init(param_1);
  return;
}



void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (__CTOR_LIST__ != (code *)0xffffffffffffffff) {
    ppcVar2 = (code **)&__CTOR_LIST__;
    pcVar1 = __CTOR_LIST__;
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffffffffffff);
  }
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}


