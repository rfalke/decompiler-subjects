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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__throw_length_error(char *param_1)

{
  __throw_length_error(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1,auStack_8)
  ;
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



// f(std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >&)

void f(vector *param_1,vector *param_2)

{
  std::vector<int,std::allocator<int>>::
  _M_range_insert<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator)param_1,(__normal_iterator)*(undefined8 *)(param_1 + 8),
             (__normal_iterator)*(undefined8 *)param_2,
             (forward_iterator_tag)*(undefined8 *)(param_2 + 8));
  return;
}



// void std::vector<int, std::allocator<int> >::_M_range_insert<__gnu_cxx::__normal_iterator<int*,
// std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
// > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
// std::forward_iterator_tag)

void std::vector<int,std::allocator<int>>::
     _M_range_insert<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               forward_iterator_tag param_4)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined4 in_register_0000000c;
  size_t sVar4;
  void *pvVar5;
  undefined4 in_register_00000014;
  void *__src;
  undefined4 in_register_00000034;
  void *__src_00;
  undefined4 in_register_0000003c;
  void **ppvVar6;
  ulong __n;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  
  ppvVar6 = (void **)CONCAT44(in_register_0000003c,param_1);
  __src_00 = (void *)CONCAT44(in_register_00000034,param_2);
  __src = (void *)CONCAT44(in_register_00000014,param_3);
  pvVar7 = (void *)CONCAT44(in_register_0000000c,param_4);
  if (__src == pvVar7) {
    return;
  }
  pvVar2 = ppvVar6[1];
  __n = (long)pvVar7 - (long)__src >> 2;
  if (__n <= (ulong)((long)ppvVar6[2] - (long)pvVar2 >> 2)) {
    uVar8 = (long)pvVar2 - (long)__src_00 >> 2;
    if (__n < uVar8) {
      sVar4 = __n * 4;
      pvVar5 = (void *)((long)pvVar2 + __n * -4);
      pvVar7 = pvVar2;
      if ((long)sVar4 >> 2 != 0) {
        memmove(pvVar2,pvVar5,((long)sVar4 >> 2) << 2);
        pvVar7 = ppvVar6[1];
      }
      lVar3 = (long)pvVar5 - (long)__src_00 >> 2;
      ppvVar6[1] = (void *)((long)pvVar7 + sVar4);
      if (lVar3 != 0) {
        memmove((void *)((long)pvVar2 + lVar3 * -4),__src_00,lVar3 * 4);
      }
      if (__n == 0) {
        return;
      }
    }
    else {
      sVar4 = uVar8 * 4;
      pvVar5 = (void *)((long)__src + sVar4);
      lVar3 = (long)pvVar7 - (long)pvVar5 >> 2;
      if (lVar3 != 0) {
        memmove(pvVar2,pvVar5,lVar3 * 4);
        pvVar2 = ppvVar6[1];
      }
      pvVar2 = (void *)((long)pvVar2 + (__n - uVar8) * 4);
      ppvVar6[1] = pvVar2;
      if (uVar8 != 0) {
        memmove(pvVar2,__src_00,sVar4);
        pvVar2 = ppvVar6[1];
      }
      lVar3 = (long)pvVar5 - (long)__src >> 2;
      ppvVar6[1] = (void *)(sVar4 + (long)pvVar2);
      if (lVar3 == 0) {
        return;
      }
      sVar4 = lVar3 * 4;
    }
    memmove(__src_00,__src,sVar4);
    return;
  }
  pvVar7 = *ppvVar6;
  uVar8 = (long)pvVar2 - (long)pvVar7 >> 2;
  if (0x3fffffffffffffff - uVar8 < __n) {
    std::__throw_length_error("vector::_M_range_insert");
LAB_00400990:
    uVar9 = uVar8 * 4;
  }
  else {
    uVar9 = 0xfffffffffffffffc;
    uVar1 = __n;
    if (__n <= uVar8) {
      uVar1 = uVar8;
    }
    bVar10 = CARRY8(uVar8,uVar1);
    uVar8 = uVar8 + uVar1;
    if ((!bVar10) && (uVar8 < 0x4000000000000000)) {
      if (uVar8 == 0) {
        uVar9 = 0;
        pvVar2 = (void *)0x0;
        goto LAB_00400746;
      }
      goto LAB_00400990;
    }
  }
  pvVar2 = operator_new(uVar9);
  pvVar7 = *ppvVar6;
LAB_00400746:
  sVar4 = 0;
  lVar3 = (long)__src_00 - (long)pvVar7 >> 2;
  if (lVar3 != 0) {
    sVar4 = lVar3 * 4;
    memmove(pvVar2,pvVar7,sVar4);
  }
  if (__n != 0) {
    __n = __n << 2;
    memmove((void *)(sVar4 + (long)pvVar2),__src,__n);
  }
  pvVar7 = (void *)(__n + (long)(void *)(sVar4 + (long)pvVar2));
  sVar4 = 0;
  lVar3 = (long)ppvVar6[1] - (long)__src_00 >> 2;
  if (lVar3 != 0) {
    sVar4 = lVar3 * 4;
    memmove(pvVar7,__src_00,sVar4);
  }
  if (*ppvVar6 != (void *)0x0) {
    operator_delete(*ppvVar6);
  }
  *ppvVar6 = pvVar2;
  ppvVar6[1] = (void *)(sVar4 + (long)pvVar7);
  ppvVar6[2] = (void *)((long)pvVar2 + uVar9);
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
    ppcVar2 = &__CTOR_LIST__;
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


