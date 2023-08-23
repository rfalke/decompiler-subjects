typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

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

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
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
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00401020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void processEntry _start(int __status)

{
  undefined4 in_register_00000014;
  undefined8 in_stack_00000000;
  undefined auStack_8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,
                    CONCAT44(in_register_00000014,__status),auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _dl_relocate_static_pie(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040109d)
// WARNING: Removing unreachable block (ram,0x004010a7)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004010df)
// WARNING: Removing unreachable block (ram,0x004010e9)

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
  
  iVar1 = 0;
  if (param_2 <= param_1) {
    iVar1 = param_1 - param_2;
  }
  return iVar1;
}



undefined  [16] sat_divu32b(uint param_1,uint param_2)

{
  undefined auVar1 [16];
  
  auVar1._8_8_ = (ulong)param_1 % (ulong)param_2;
  auVar1._0_8_ = (ulong)param_1 / (ulong)param_2;
  return auVar1;
}



ulong sat_mulu32b(uint param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1 * (ulong)param_2 & 0xffffffff;
  if ((int)((ulong)param_1 * (ulong)param_2 >> 0x20) != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



long sat_addu64b(ulong param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = -1;
  if (!CARRY8(param_1,param_2)) {
    lVar1 = param_1 + param_2;
  }
  return lVar1;
}



long sat_subu64b(ulong param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 <= param_1) {
    lVar1 = param_1 - param_2;
  }
  return lVar1;
}



ulong sat_divu64b(ulong param_1,ulong param_2)

{
  if ((param_1 | param_2) >> 0x20 != 0) {
    return param_1 / param_2;
  }
  return (param_1 & 0xffffffff) / (param_2 & 0xffffffff);
}



undefined8 sat_mulu64b(ulong param_1,ulong param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 uVar3;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  uVar3 = SUB168(auVar1 * auVar2,0);
  if (SUB168(auVar1 * auVar2,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



int sat_adds32b_var1(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (-1 < param_1 + param_2) + 0x7fffffff;
  if (!SCARRY4(param_1,param_2)) {
    iVar1 = param_1 + param_2;
  }
  return iVar1;
}



uint sat_adds32b_var2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 + param_1;
  uVar1 = 0x7fffffff - ((int)param_1 >> 0x1f);
  if (-1 < (int)(uVar2 ^ param_1)) {
    uVar1 = uVar2;
  }
  if ((int)(param_2 ^ param_1) < 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



uint sat_adds32b_var3(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x7fffffff - (param_1 >> 0x1f);
  uVar1 = param_2 + param_1;
  if (-1 < (int)(~(param_2 ^ param_2 + param_1) | uVar2 ^ param_2)) {
    uVar1 = uVar2;
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



undefined  [16] sat_divs32b(uint param_1,int param_2)

{
  long lVar1;
  undefined auVar2 [16];
  
  lVar1 = (long)(int)(((param_1 ^ 0x80000000 | param_2 + 1U) == 0) + param_1);
  auVar2._0_8_ = lVar1 / (long)param_2 & 0xffffffff;
  auVar2._8_8_ = lVar1 % (long)param_2 & 0xffffffff;
  return auVar2;
}



ulong sat_muls32b(uint param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (long)(int)param_2 * (long)(int)param_1;
  uVar1 = (ulong)(0x7fffffff - ((int)(param_2 ^ param_1) >> 0x1f));
  if ((int)uVar2 >> 0x1f == (int)(uVar2 >> 0x20)) {
    uVar1 = uVar2 & 0xffffffff;
  }
  return uVar1;
}



ulong sat_adds64b(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0x7fffffffffffffff - (param_1 >> 0x3f);
  if ((long)(~(param_2 ^ param_2 + param_1) | uVar1 ^ param_2) < 0) {
    uVar1 = param_2 + param_1;
  }
  return uVar1;
}



ulong sat_subs64b(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0x7fffffffffffffff - (param_1 >> 0x3f);
  if (-1 < (long)((param_2 ^ uVar1) & (uVar1 ^ param_1 - param_2))) {
    uVar1 = param_1 - param_2;
  }
  return uVar1;
}



ulong sat_divs64b(ulong param_1,ulong param_2)

{
  param_1 = ((param_1 ^ 0x8000000000000000 | param_2 + 1) == 0) + param_1;
  if ((param_1 | param_2) >> 0x20 != 0) {
    return (long)param_1 / (long)param_2;
  }
  return (param_1 & 0xffffffff) / (param_2 & 0xffffffff);
}



long sat_muls64b(ulong param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_2 * param_1;
  if ((long)(param_2 * param_1) >> 0x3f != SUB168(SEXT816((long)param_2) * SEXT816((long)param_1),8)
     ) {
    lVar1 = 0x7fffffffffffffff - ((long)(param_2 ^ param_1) >> 0x3f);
  }
  return lVar1;
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



long abs64(long param_1)

{
  long lVar1;
  
  lVar1 = -param_1;
  if (0 < param_1) {
    lVar1 = param_1;
  }
  return lVar1;
}



int sgn32(int param_1)

{
  return (uint)(0 < param_1) + (param_1 >> 0x1f);
}



long sgn64(long param_1)

{
  return (ulong)(0 < param_1) + (param_1 >> 0x3f);
}



undefined8 main(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar1 = sat_addu32b(0xffffffff,3);
  printf("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n",0xffffffff,3,(ulong)uVar1);
  uVar1 = sat_subu32b(1,3);
  printf("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n",1,3,(ulong)uVar1);
  uVar1 = sat_mulu32b(0xffffffff,3);
  printf("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n",0xffffffff,3,(ulong)uVar1);
  uVar1 = sat_divu32b(0xffffffff,3);
  printf("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n",0xffffffff,3,(ulong)uVar1);
  uVar1 = sat_adds32b_var1(0x7fffffff,2);
  uVar2 = sat_adds32b_var2(0x7fffffff,2);
  uVar3 = sat_adds32b_var3(0x7fffffff,2);
  printf("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n",0x7fffffff,2,(ulong)uVar1,
         (ulong)uVar2,(ulong)uVar3);
  uVar1 = sat_subs32b(0x80000000,2);
  printf("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n",0x80000000,2,(ulong)uVar1);
  uVar1 = sat_muls32b(0x7fffffff,2);
  printf("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n",0x7fffffff,2,(ulong)uVar1);
  uVar1 = sat_divs32b(0x80000000,0xffffffff);
  printf("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n",0x80000000,0xffffffff,(ulong)uVar1);
  uVar1 = abs32(0xfffffff0);
  printf("abs32(0x%08x) = 0x%08x\n",0xfffffff0,(ulong)uVar1);
  uVar1 = sgn32(3);
  printf("sgn32(0x%08x) = 0x%08x\n",3,(ulong)uVar1);
  lVar4 = sat_addu64b(0,0);
  lVar5 = sat_subu64b(0,0);
  lVar6 = sat_divu64b(0,1);
  lVar7 = sat_mulu64b(0,0);
  lVar8 = sat_muls64b(0,0);
  lVar9 = sat_adds64b(0,0);
  lVar10 = sat_subs64b(0,0);
  lVar11 = sat_divs64b(0,1);
  lVar12 = abs64(0);
  lVar13 = sgn64(0);
  if (lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 == 0x2a) {
    puts("not reached");
  }
  return 0;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
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


