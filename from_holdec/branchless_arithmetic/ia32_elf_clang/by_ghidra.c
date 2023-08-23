typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
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
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
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
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef enum Elf_ProgramHeaderType_x86 {
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
} Elf_ProgramHeaderType_x86;

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
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
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
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




// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_08049030(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void processEntry _start(int __status)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



void _dl_relocate_static_pie(void)

{
  return;
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080490dc)
// WARNING: Removing unreachable block (ram,0x080490e5)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08049128)
// WARNING: Removing unreachable block (ram,0x08049131)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



int sat_addu32b(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (!CARRY4(param_1,param_2)) {
    iVar1 = param_1 + param_2;
  }
  return iVar1;
}



int sat_subu32b(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 - param_2;
  if (param_1 < param_2) {
    iVar1 = 0;
  }
  return iVar1;
}



uint sat_divu32b(uint param_1,uint param_2)

{
  return param_1 / param_2;
}



undefined4 sat_mulu32b(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((ulonglong)param_1 * (ulonglong)param_2);
  if ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined8 sat_addu64b(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + param_3;
  iVar2 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
  if (CARRY4(param_2,param_4) || CARRY4(param_2 + param_4,(uint)CARRY4(param_1,param_3))) {
    iVar2 = -1;
    iVar1 = -1;
  }
  return CONCAT44(iVar2,iVar1);
}



undefined8 sat_subu64b(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - param_3;
  iVar2 = (param_2 - param_4) - (uint)(param_1 < param_3);
  if (param_2 < param_4 || param_2 - param_4 < (uint)(param_1 < param_3)) {
    iVar2 = 0;
    iVar1 = 0;
  }
  return CONCAT44(iVar2,iVar1);
}



void sat_divu64b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __udivdi3(param_1,param_2,param_3,param_4);
  return;
}



int sat_adds32b_var1(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  if (SCARRY4(param_1,param_2)) {
    iVar1 = (-1 < param_1 + param_2) + 0x7fffffff;
  }
  return iVar1;
}



uint sat_adds32b_var2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 + param_1;
  uVar2 = 0x7fffffff - ((int)param_1 >> 0x1f);
  if (-1 < (int)(uVar1 ^ param_1)) {
    uVar2 = uVar1;
  }
  if ((int)(param_2 ^ param_1) < 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



uint sat_adds32b_var3(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x7fffffff - (param_1 >> 0x1f);
  if ((int)(~(param_2 ^ param_2 + param_1) | uVar1 ^ param_2) < 0) {
    uVar1 = param_2 + param_1;
  }
  return uVar1;
}



uint sat_subs32b(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x7fffffff - (param_1 >> 0x1f);
  if (-1 < (int)((param_2 ^ uVar1) & (uVar1 ^ param_1 - param_2))) {
    uVar1 = param_1 - param_2;
  }
  return uVar1;
}



int sat_divs32b(uint param_1,int param_2)

{
  return (int)(((param_1 ^ 0x80000000 | param_2 + 1U) == 0) + param_1) / param_2;
}



int sat_muls32b(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)((longlong)(int)param_2 * (longlong)(int)param_1);
  if (iVar1 >> 0x1f != (int)((ulonglong)((longlong)(int)param_2 * (longlong)(int)param_1) >> 0x20))
  {
    iVar1 = 0x7fffffff - ((int)(param_2 ^ param_1) >> 0x1f);
  }
  return iVar1;
}



undefined8 sat_adds64b(uint param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_4 + param_2 + (uint)CARRY4(param_3,param_1);
  iVar2 = 0x7fffffff - (param_2 >> 0x1f);
  uVar1 = 0;
  if ((int)(~uVar3 | param_4) < 0) {
    iVar2 = param_3 + param_1;
    uVar1 = uVar3;
  }
  return CONCAT44(uVar1,iVar2);
}



undefined8 sat_subs64b(uint param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (param_2 - param_4) - (uint)(param_1 < param_3);
  iVar2 = 0x7fffffff - (param_2 >> 0x1f);
  uVar1 = 0;
  if (-1 < (int)(uVar3 & param_4)) {
    iVar2 = param_1 - param_3;
    uVar1 = uVar3;
  }
  return CONCAT44(uVar1,iVar2);
}



void sat_divs64b(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)((param_1 + 0x80000000 | param_3 + 1 |
                 param_2 + -1 + (uint)(0x7fffffff < param_1) |
                 param_4 + (uint)(0xfffffffe < param_3)) == 0);
  __divdi3(uVar1 + param_1,param_2 + (uint)CARRY4(uVar1,param_1),param_3,param_4);
  return;
}



int abs32(int param_1)

{
  int iVar1;
  
  iVar1 = -param_1;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}



undefined8 abs64(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 0x1f;
  return CONCAT44(param_2 + uVar1 + (uint)CARRY4(param_1,uVar1) ^ uVar1,param_1 + uVar1 ^ uVar1);
}



int sgn32(int param_1)

{
  return (param_1 >> 0x1f) + (uint)(0 < param_1);
}



void sgn64(void)

{
  return;
}



undefined4 main(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  sat_addu32b(0xffffffff);
  printf("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n");
  sat_subu32b(1);
  printf("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n");
  sat_mulu32b(0xffffffff);
  printf("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n");
  sat_divu32b(0xffffffff);
  printf("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n");
  uVar1 = sat_adds32b_var1(0x7fffffff);
  uVar2 = sat_adds32b_var2(0x7fffffff);
  sat_adds32b_var3(0x7fffffff);
  printf("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n",0x7fffffff,2,uVar1,uVar2);
  sat_subs32b(0x80000000);
  printf("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n");
  sat_muls32b(0x7fffffff);
  printf("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n");
  sat_divs32b(0x80000000);
  printf("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n");
  abs32(0xfffffff0);
  printf("abs32(0x%08x) = 0x%08x\n");
  sgn32(3);
  printf("sgn32(0x%08x) = 0x%08x\n");
  lVar3 = sat_addu64b(ZEXT816(0));
  lVar4 = sat_subu64b(ZEXT816(0));
  lVar5 = sat_divu64b();
  lVar6 = sat_adds64b(ZEXT816(0));
  lVar7 = sat_subs64b(ZEXT816(0));
  lVar8 = sat_divs64b();
  lVar9 = abs64(0);
  lVar10 = sgn64(0);
  if (lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 == 0x2a) {
    puts("not reached");
  }
  return 0;
}



undefined8 __divdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_2c;
  uint local_24;
  
  local_24 = 0;
  local_2c = param_1;
  if ((int)param_2 < 0) {
    local_2c = -param_1;
    local_24 = 0xffffffff;
    param_2 = -(param_2 + (param_1 != 0));
  }
  if ((int)param_4 < 0) {
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    local_24 = ~local_24;
    param_4 = -(param_4 + bVar10);
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      uVar9 = 0;
      iVar6 = (int)(CONCAT44(param_2,local_2c) / (ulonglong)param_3);
    }
    else {
      if (param_3 == 0) {
        param_3 = (uint)(1 / 0);
      }
      uVar9 = param_2 / param_3;
      iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)local_2c) /
                   (ulonglong)param_3);
    }
  }
  else if (param_2 < param_4) {
    uVar9 = 0;
    iVar6 = 0;
  }
  else {
    uVar9 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar9 == 0; uVar9 = uVar9 - 1) {
      }
    }
    if ((uVar9 ^ 0x1f) == 0) {
      uVar9 = 0;
      if ((param_4 < param_2) || (iVar6 = 0, param_3 <= local_2c)) {
        iVar6 = 1;
      }
    }
    else {
      bVar5 = (byte)(uVar9 ^ 0x1f);
      bVar7 = 0x20 - bVar5;
      uVar1 = (ulonglong)(param_3 >> (bVar7 & 0x1f) | param_4 << (bVar5 & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar7 & 0x1f),
                       param_2 << (bVar5 & 0x1f) | local_2c >> (bVar7 & 0x1f));
      uVar3 = uVar2 / uVar1;
      iVar6 = (int)uVar3;
      uVar9 = (uint)(uVar2 % uVar1);
      lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (bVar5 & 0x1f));
      uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar9 < uVar8) || ((local_2c << (bVar5 & 0x1f) < (uint)lVar4 && (uVar9 == uVar8)))) {
        iVar6 = iVar6 + -1;
      }
      uVar9 = 0;
    }
  }
  if (local_24 != 0) {
    bVar10 = iVar6 != 0;
    iVar6 = -iVar6;
    uVar9 = -(uVar9 + bVar10);
  }
  return CONCAT44(uVar9,iVar6);
}



ulonglong __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_4 != 0) {
    if (param_2 < param_4) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x1f;
      if (param_4 != 0) {
        for (; param_4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      if ((uVar6 ^ 0x1f) == 0) {
        if ((param_4 < param_2) || (uVar6 = 0, param_3 <= param_1)) {
          uVar6 = 1;
        }
      }
      else {
        bVar5 = (byte)(uVar6 ^ 0x1f);
        bVar7 = 0x20 - bVar5;
        uVar1 = (ulonglong)(param_4 << (bVar5 & 0x1f) | param_3 >> (bVar7 & 0x1f));
        uVar2 = CONCAT44(param_2 >> (bVar7 & 0x1f),
                         param_1 >> (bVar7 & 0x1f) | param_2 << (bVar5 & 0x1f));
        uVar3 = uVar2 / uVar1;
        uVar6 = (uint)uVar3;
        uVar8 = (uint)(uVar2 % uVar1);
        lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (bVar5 & 0x1f));
        uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
        if ((uVar8 < uVar9) || ((param_1 << (bVar5 & 0x1f) < (uint)lVar4 && (uVar8 == uVar9)))) {
          uVar6 = uVar6 - 1;
        }
      }
    }
    return (ulonglong)uVar6;
  }
  if (param_3 <= param_2) {
    if (param_3 == 0) {
      param_3 = (uint)(1 / 0);
    }
    return CONCAT44(param_2 / param_3,
                    (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                         (ulonglong)param_3));
  }
  return CONCAT44(param_2,param_1) / (ulonglong)param_3 & 0xffffffff;
}



void __libc_csu_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_EBP;
  int iVar1;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  __x86_get_pc_thunk_bp();
  _init(in_stack_ffffffe4);
  iVar1 = 0;
  do {
    (**(code **)(unaff_EBP + 0x25b2 + iVar1 * 4))(param_1,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void __x86_get_pc_thunk_bp(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _fini(void)

{
  return;
}


