typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ulong size_t;

typedef ulong sizetype;

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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
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



void FUN_001006b0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
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

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



int main(int argc,char **argv)

{
  int iVar1;
  short *from;
  short *to;
  
  from = (short *)malloc(200);
  to = (short *)malloc(200);
  copy1_four_times(to,from,100);
  copy1_eight_times(to,from,100);
  copy2_four_times(to,from,100);
  copy2_eight_times(to,from,100);
  iVar1 = memcmp(from,to,200);
  return iVar1;
}



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x001007f0)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100818)
// WARNING: Removing unreachable block (ram,0x00100824)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100854)
// WARNING: Removing unreachable block (ram,0x00100860)

void register_tm_clones(void)

{
  return;
}



void FUN_0010086c(void)

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



void copy1_four_times(short *to,short *from,int count)

{
  uint uVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = count + 6;
  if (-1 < count + 3) {
    iVar4 = count + 3;
  }
  uVar1 = count & 3;
  if (count < 1) {
    uVar1 = -(-count & 3U);
  }
  iVar4 = iVar4 >> 2;
  psVar3 = to;
  switch(uVar1) {
  case 0:
    while( true ) {
      sVar2 = *from;
      psVar3 = to + 1;
      from = from + 1;
      *to = sVar2;
switchD_00100934_caseD_3:
      sVar2 = *from;
      from = from + 1;
      *psVar3 = sVar2;
      psVar3 = psVar3 + 1;
LAB_00100948:
      sVar2 = *from;
      to = psVar3 + 1;
      from = from + 1;
      *psVar3 = sVar2;
switchD_00100934_caseD_1:
      iVar4 = iVar4 + -1;
      *to = *from;
      if (iVar4 < 1) break;
      to = to + 1;
      from = from + 1;
    }
    break;
  case 1:
    goto switchD_00100934_caseD_1;
  case 2:
    goto LAB_00100948;
  case 3:
    goto switchD_00100934_caseD_3;
  }
  return;
}



void copy1_eight_times(short *to,short *from,int count)

{
  uint uVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = count + 0xe;
  if (-1 < count + 7) {
    iVar4 = count + 7;
  }
  uVar1 = count & 7;
  if (count < 1) {
    uVar1 = -(-count & 7U);
  }
  iVar4 = iVar4 >> 3;
  psVar3 = to;
  switch(uVar1) {
  case 0:
    while( true ) {
      sVar2 = *from;
      psVar3 = to + 1;
      from = from + 1;
      *to = sVar2;
switchD_001009d4_caseD_7:
      sVar2 = *from;
      to = psVar3 + 1;
      from = from + 1;
      *psVar3 = sVar2;
switchD_001009d4_caseD_6:
      sVar2 = *from;
      from = from + 1;
      *to = sVar2;
      psVar3 = to + 1;
LAB_001009f8:
      sVar2 = *from;
      to = psVar3 + 1;
      from = from + 1;
      *psVar3 = sVar2;
switchD_001009d4_caseD_4:
      sVar2 = *from;
      from = from + 1;
      *to = sVar2;
      to = to + 1;
LAB_00100a18:
      sVar2 = *from;
      from = from + 1;
      *to = sVar2;
      psVar3 = to + 1;
LAB_00100a28:
      sVar2 = *from;
      to = psVar3 + 1;
      from = from + 1;
      *psVar3 = sVar2;
switchD_001009d4_caseD_1:
      iVar4 = iVar4 + -1;
      *to = *from;
      if (iVar4 < 1) break;
      to = to + 1;
      from = from + 1;
    }
    break;
  case 1:
    goto switchD_001009d4_caseD_1;
  case 2:
    goto LAB_00100a28;
  case 3:
    goto LAB_00100a18;
  case 4:
    goto switchD_001009d4_caseD_4;
  case 5:
    goto LAB_001009f8;
  case 6:
    goto switchD_001009d4_caseD_6;
  case 7:
    goto switchD_001009d4_caseD_7;
  }
  return;
}



void copy2_four_times(short *to,short *from,int n)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  if (0 < n) {
    iVar4 = 4 - n;
LAB_00100aec:
    do {
      if (iVar4 != 2) {
        if (iVar4 == 3) {
          iVar4 = 7;
          *to = *from;
          to = to + 1;
          from = from + 1;
          goto LAB_00100aec;
        }
        psVar3 = to;
        if (iVar4 != 1) {
          sVar2 = *from;
          psVar3 = to + 1;
          from = from + 1;
          *to = sVar2;
        }
        sVar2 = *from;
        to = psVar3 + 1;
        from = from + 1;
        *psVar3 = sVar2;
      }
      psVar3 = from + 1;
      psVar1 = to + 1;
      iVar4 = iVar4 + 4;
      *to = *from;
      from = from + 2;
      to = to + 2;
      *psVar1 = *psVar3;
    } while (iVar4 != 4);
  }
  return;
}



void copy2_eight_times(short *to,short *from,int n)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  if (n < 1) {
    return;
  }
  iVar3 = 8 - n;
LAB_00100bd4:
  do {
    psVar2 = to;
    switch(iVar3) {
    case 3:
      break;
    case 4:
      goto DUFF_4;
    case 5:
      goto DUFF_5;
    case 6:
      goto DUFF_6;
    case 7:
      goto switchD_00100bec_caseD_7;
    default:
      sVar1 = *from;
      psVar2 = to + 1;
      from = from + 1;
      *to = sVar1;
    case 1:
      sVar1 = *from;
      to = psVar2 + 1;
      from = from + 1;
      *psVar2 = sVar1;
    case 2:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      psVar2 = to + 1;
    }
    sVar1 = *from;
    to = psVar2 + 1;
    from = from + 1;
    *psVar2 = sVar1;
DUFF_4:
    sVar1 = *from;
    from = from + 1;
    *to = sVar1;
    psVar2 = to + 1;
DUFF_5:
    sVar1 = *from;
    to = psVar2 + 1;
    from = from + 1;
    *psVar2 = sVar1;
DUFF_6:
    psVar2 = from + 1;
    iVar3 = iVar3 + 8;
    *to = *from;
    from = from + 2;
    to[1] = *psVar2;
    to = to + 2;
    if (iVar3 == 8) {
      return;
    }
  } while( true );
switchD_00100bec_caseD_7:
  sVar1 = *from;
  iVar3 = iVar3 + 8;
  from = from + 1;
  *to = sVar1;
  to = to + 1;
  if (iVar3 == 8) {
    return;
  }
  goto LAB_00100bd4;
}



void FUN_00100c24(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x00100c24. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0,0x100c24);
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


