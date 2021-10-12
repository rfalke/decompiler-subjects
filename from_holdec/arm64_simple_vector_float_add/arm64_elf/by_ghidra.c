typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned int    uint;
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

typedef struct tls_module tls_module, *Ptls_module;

typedef ulong size_t;

struct tls_module {
    struct tls_module * next;
    void * image;
    size_t len;
    size_t size;
    size_t align;
    size_t offset;
};

typedef struct __locale_struct __locale_struct, *P__locale_struct;

typedef struct __locale_map __locale_map, *P__locale_map;

struct __locale_struct {
    struct __locale_map * cat[6];
};

struct __locale_map {
};

typedef struct __libc __libc, *P__libc;

struct __libc {
    char can_do_threads;
    char threaded;
    char secure;
    char need_locks;
    int threads_minus_1;
    size_t * auxv;
    struct tls_module * tls_head;
    size_t tls_size;
    size_t tls_align;
    size_t tls_cnt;
    size_t page_size;
    struct __locale_struct global_locale;
};

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef struct _IO_FILE FILE;

struct _IO_FILE {
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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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
  return (int)ctx;
}



void FUN_00100630(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __deregister_frame_info(void)

{
  __deregister_frame_info();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void __register_frame_info(void)

{
  __register_frame_info();
  return;
}



void _start(void)

{
  undefined in_stack_00000000;
  
  _start_c((long *)register0x00000008);
  return;
}



void _start_c(long *p)

{
  __libc_start_main(main,*p,p + 1,_init,_fini,0);
  return;
}



// WARNING: Removing unreachable block (ram,0x0010070c)
// WARNING: Removing unreachable block (ram,0x00100718)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100748)
// WARNING: Removing unreachable block (ram,0x00100754)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7318 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  __deregister_frame_info(&cie_001009f8);
  completed_7318 = 1;
  return;
}



void frame_dummy(void)

{
  __register_frame_info(&cie_001009f8,object_7323);
  register_tm_clones();
  return;
}



void add_float_neon3(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  do {
    cWrite_8(tmp_ldXn,param_2);
    pfVar3 = (float *)cRead_8(tmp_ldXn);
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    pfVar5 = (float *)cRead_8(tmp_ldXn);
    fVar7 = *pfVar5;
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    pfVar5 = (float *)cRead_8(tmp_ldXn);
    fVar8 = *pfVar5;
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    pfVar5 = (float *)cRead_8(tmp_ldXn);
    fVar9 = *pfVar5;
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    param_2 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,param_3);
    pfVar5 = (float *)cRead_8(tmp_ldXn);
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    pfVar6 = (float *)cRead_8(tmp_ldXn);
    fVar10 = *pfVar6;
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    pfVar6 = (float *)cRead_8(tmp_ldXn);
    fVar11 = *pfVar6;
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    pfVar6 = (float *)cRead_8(tmp_ldXn);
    fVar12 = *pfVar6;
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    param_3 = cRead_8(tmp_ldXn);
    iVar2 = param_4 + -4;
    cWrite_8(tmp_ldXn,param_1);
    pfVar6 = (float *)cRead_8(tmp_ldXn);
    *pfVar6 = *pfVar3 + *pfVar5;
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    pfVar3 = (float *)cRead_8(tmp_ldXn);
    *pfVar3 = fVar7 + fVar10;
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    pfVar3 = (float *)cRead_8(tmp_ldXn);
    *pfVar3 = fVar8 + fVar11;
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    pfVar3 = (float *)cRead_8(tmp_ldXn);
    *pfVar3 = fVar9 + fVar12;
    lVar4 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar4 + 4);
    param_1 = cRead_8(tmp_ldXn);
    bVar1 = 3 < param_4;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}



undefined8 main(void)

{
  int local_3c;
  float local_38 [4];
  float local_28 [4];
  float afStack24 [4];
  long local_8;
  
  local_8 = __stack_chk_guard;
  local_38[0] = 1.2;
  local_38[1] = 2.3;
  local_38[2] = 3.4;
  local_38[3] = 5.6;
  local_28[0] = 0.1;
  local_28[1] = 0.2;
  local_28[2] = 0.3;
  local_28[3] = 0.4;
  add_float_neon3(afStack24,local_38,local_28,4);
  for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
    printf((char *)(double)local_38[local_3c],(double)local_28[local_3c],(double)afStack24[local_3c]
           ,"%f + %f = %f\n");
  }
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



void _fini(void)

{
  return;
}


