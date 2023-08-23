typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef ulong size_t;

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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
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
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00400480(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00400548)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00400570)
// WARNING: Removing unreachable block (ram,0x00400578)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004005b4)
// WARNING: Removing unreachable block (ram,0x004005bc)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7433 == '\0') {
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00400618)
// WARNING: Removing unreachable block (ram,0x00400620)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Unknown calling convention

void copy1_four_times(short *to,short *from,int count)

{
  undefined2 *in_x0;
  undefined2 *in_x1;
  int in_w2;
  int n;
  int local_18;
  undefined2 *local_10;
  undefined2 *local_8;
  
  local_18 = in_w2 + 6;
  if (-1 < in_w2 + 3) {
    local_18 = in_w2 + 3;
  }
  local_18 = local_18 >> 2;
  if ((uint)(in_w2 % 4) < 4) {
    local_10 = in_x1;
    local_8 = in_x0;
    switch(in_w2 % 4) {
    case 0:
      local_10 = in_x1;
      local_8 = in_x0;
      break;
    case 1:
      goto switchD_004006ac_caseD_1;
    case 2:
      goto switchD_004006ac_caseD_2;
    case 3:
      goto switchD_004006ac_caseD_3;
    }
    do {
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
switchD_004006ac_caseD_3:
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
switchD_004006ac_caseD_2:
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
switchD_004006ac_caseD_1:
      *local_8 = *local_10;
      local_18 = local_18 + -1;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
    } while (0 < local_18);
  }
  return;
}



// WARNING: Unknown calling convention

void copy1_eight_times(short *to,short *from,int count)

{
  undefined2 *in_x0;
  undefined2 *in_x1;
  int in_w2;
  int n;
  int local_18;
  undefined2 *local_10;
  undefined2 *local_8;
  
  local_18 = in_w2 + 0xe;
  if (-1 < in_w2 + 7) {
    local_18 = in_w2 + 7;
  }
  local_18 = local_18 >> 3;
  if ((uint)(in_w2 % 8) < 8) {
    local_10 = in_x1;
    local_8 = in_x0;
    switch(in_w2 % 8) {
    case 0:
      local_10 = in_x1;
      local_8 = in_x0;
      break;
    case 1:
      goto switchD_004007c0_caseD_1;
    case 2:
      goto switchD_004007c0_caseD_2;
    case 3:
      goto switchD_004007c0_caseD_3;
    case 4:
      goto switchD_004007c0_caseD_4;
    case 5:
      goto switchD_004007c0_caseD_5;
    case 6:
      goto switchD_004007c0_caseD_6;
    case 7:
      goto switchD_004007c0_caseD_7;
    }
    do {
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
switchD_004007c0_caseD_7:
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
switchD_004007c0_caseD_6:
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
switchD_004007c0_caseD_5:
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
switchD_004007c0_caseD_4:
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
switchD_004007c0_caseD_3:
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
switchD_004007c0_caseD_2:
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
switchD_004007c0_caseD_1:
      *local_8 = *local_10;
      local_18 = local_18 + -1;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
    } while (0 < local_18);
  }
  return;
}



// WARNING: Unknown calling convention

void copy2_four_times(short *to,short *from,int n)

{
  undefined2 *in_x0;
  undefined2 *in_x1;
  int in_w2;
  int local_14;
  undefined2 *local_10;
  undefined2 *local_8;
  
  local_14 = in_w2;
  local_10 = in_x1;
  local_8 = in_x0;
  if (0 < in_w2) {
    for (; local_14 != 0; local_14 = local_14 + -4) {
      if (local_14 == 3) {
LAB_00400990:
        *local_8 = *local_10;
        local_10 = local_10 + 1;
        local_8 = local_8 + 1;
LAB_004009b0:
        *local_8 = *local_10;
        local_10 = local_10 + 1;
        local_8 = local_8 + 1;
      }
      else {
        if (local_14 == 2) goto LAB_004009b0;
        if (local_14 != 1) {
          *local_8 = *local_10;
          local_10 = local_10 + 1;
          local_8 = local_8 + 1;
          goto LAB_00400990;
        }
      }
      *local_8 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
    }
  }
  return;
}



// WARNING: Unknown calling convention

void copy2_eight_times(short *to,short *from,int n)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *in_x0;
  undefined2 *in_x1;
  int in_w2;
  int local_14;
  undefined2 *local_10;
  undefined2 *local_8;
  
  local_14 = in_w2;
  local_10 = in_x1;
  local_8 = in_x0;
  if (0 < in_w2) {
    for (; local_14 != 0; local_14 = local_14 + -8) {
      uVar3 = -local_14 + 7;
      if (uVar3 < 6 || -local_14 == -1) {
                    // WARNING: Could not recover jumptable at 0x00400a68. Too many branches
                    // WARNING: Treating indirect jump as call
        (*(code *)(&PTR_LAB_00400d38)[uVar3])();
        return;
      }
      *local_8 = *local_10;
      local_8[1] = local_10[1];
      local_8[2] = local_10[2];
      local_8[3] = local_10[3];
      local_8[4] = local_10[4];
      local_8[5] = local_10[5];
      puVar1 = local_10 + 7;
      puVar2 = local_8 + 7;
      local_8[6] = local_10[6];
      local_10 = local_10 + 8;
      local_8 = local_8 + 8;
      *puVar2 = *puVar1;
    }
  }
  return;
}



// WARNING: Variable defined which should be unmapped: argv-local
// WARNING: Variable defined which should be unmapped: argc-local

int main(int argc,char **argv)

{
  int iVar1;
  void *__s1;
  void *__s2;
  short *dest;
  short *src;
  size_t size;
  undefined4 uVar2;
  char **argv_local;
  int argc_local;
  
  uVar2 = 0;
  __s1 = malloc(200);
  __s2 = malloc(200);
  copy1_four_times((short *)CONCAT44(uVar2,argc),(short *)argv,0);
  copy1_eight_times((short *)CONCAT44(uVar2,argc),(short *)argv,0);
  copy2_four_times((short *)CONCAT44(uVar2,argc),(short *)argv,0);
  copy2_eight_times((short *)CONCAT44(uVar2,argc),(short *)argv,0);
  iVar1 = memcmp(__s1,__s2,200);
  return iVar1;
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


