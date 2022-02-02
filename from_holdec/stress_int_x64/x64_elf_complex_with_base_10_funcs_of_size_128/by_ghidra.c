typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined5;
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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00401020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



undefined8 main(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = log_size_7_var_000();
  lVar2 = log_size_7_var_001();
  lVar3 = log_size_7_var_002();
  lVar4 = log_size_7_var_003();
  lVar5 = log_size_7_var_004();
  lVar6 = log_size_7_var_005();
  lVar7 = log_size_7_var_006();
  lVar8 = log_size_7_var_007();
  lVar9 = log_size_7_var_008();
  lVar10 = log_size_7_var_009();
  if (lVar1 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_complex_with_base_10_funcs_of_size_128.c",0x1f,
                (char *)&__PRETTY_FUNCTION___2443);
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



int _annobin_init_c(void *param_1,void *param_2)

{
  int in_EAX;
  
  return in_EAX;
}



int _dl_relocate_static_pie(void *param_1,void *param_2)

{
  int in_EAX;
  
  return in_EAX;
}



// WARNING: Removing unreachable block (ram,0x004010fd)
// WARNING: Removing unreachable block (ram,0x00401107)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040113f)
// WARNING: Removing unreachable block (ram,0x00401149)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7287 == '\0') {
    deregister_tm_clones();
    completed_7287 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Removing unreachable block (ram,0x00401364)
// WARNING: Removing unreachable block (ram,0x0040125d)
// WARNING: Removing unreachable block (ram,0x004013ac)
// WARNING: Removing unreachable block (ram,0x00401390)
// WARNING: Removing unreachable block (ram,0x00401378)
// WARNING: Removing unreachable block (ram,0x004013c4)

long log_size_7_var_000(void)

{
  ushort uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  
  for (uVar1 = 0; (0x909U >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
  }
  uVar6 = ~(1 << (uVar1 & 0xf)) & 0x588a;
  iVar4 = (uint)(byte)uVar6 * 0x3819;
  auVar2 = ZEXT416((uint)(CONCAT22(0x21f,(short)((uint)iVar4 >> 0x10)) << 0xc)) << 0x40 |
           ZEXT216((ushort)(short)(char)iVar4);
  auVar3 = auVar2 / ZEXT816(0xf29c58b9a0e71d99);
  uVar5 = SUB164(auVar3,0) >> 0xb;
  uVar7 = uVar5 | 0xb3200000;
  return (SUB168(auVar3,0) & 0xffffffffffff9b0e) + (ulong)(uVar6 | 0x3acc0000) +
         SUB168(auVar2 % ZEXT816(0xf29c58b9a0e71d99),0) + (ulong)(uVar5 | 0x26401600) +
         (long)(int)uVar7 + (ulong)uVar7 + (ulong)(CONCAT22(0xffff,uVar1) + 0x586a8154) +
         0x400b3b1f617c0003;
}



// WARNING: Removing unreachable block (ram,0x00401600)
// WARNING: Removing unreachable block (ram,0x00401568)
// WARNING: Removing unreachable block (ram,0x00401604)
// WARNING: Removing unreachable block (ram,0x004015be)
// WARNING: Removing unreachable block (ram,0x0040168e)

long log_size_7_var_001(void)

{
  undefined auVar1 [16];
  uint uVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ushort uVar14;
  uint uVar15;
  bool bVar16;
  
  auVar1 = (CONCAT88(0x64bfa046,0x64bfa0463b7f669c) & (undefined  [16])0xffffffffffffffff) /
           ZEXT816(0xf4a83abcf2a32b46);
  bVar16 = (char)((uint)CONCAT62(SUB166(auVar1 >> 0x10,0),
                                 (ushort)SUB161(auVar1,0) * (ushort)SUB161(auVar1 >> 8,0)) >> 0xe)
           == -1;
  auVar1 = ZEXT116(1) << 0x40 | ZEXT416(0xab2fb1e1);
  uVar2 = SUB164(auVar1 >> 0x2f,0) | SUB164(auVar1 << 0x12,0);
  uVar5 = (bVar16 | 0x7700) + 0x2b01;
  uVar14 = (ushort)(uVar5 == 0x6a36) * 0x7081 ^ 0x6a36;
  uVar8 = -((ushort)(uVar5 ^ (ushort)(uVar5 != 0x6a36) * (uVar5 ^ uVar14)) | 0xf2a30000);
  uVar4 = 0x3a561ab7;
  if (!bVar16) {
    uVar4 = uVar8;
  }
  uVar15 = uVar2 & 0x336f7770 | 0xc0000000;
  uVar13 = CONCAT44(0xf2a32b00,uVar8) & 0x3fffffffffffffff;
  sVar3 = (short)(uVar13 / uVar15);
  sVar6 = sVar3 + -1;
  uVar11 = 0xb85c2914;
  if (SBORROW2(sVar3,1)) {
    uVar11 = 0;
  }
  uVar8 = sVar6 * -0x1a09;
  uVar10 = uVar13 % (ulong)uVar15 & 0xffffffffffff0000 | (ulong)(ushort)(uVar8 >> 0x10);
  uVar13 = (ulong)(uVar8 & 0xff00 | (uint)(ushort)(sVar6 >> 0xf) << 0x10 | 0xc0);
  uVar9 = uVar13 & 0xffffffffffff3fff;
  uVar5 = (ushort)(byte)uVar9;
  uVar7 = (ushort)uVar9;
  uVar9 = uVar13 & 0xffffffffffff0000 | (ulong)(ushort)(uVar7 / uVar5 & 0xff | uVar7 % uVar5 << 8);
  uVar12 = uVar11 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar11 >> 4 | (byte)uVar11 << 5);
  uVar13 = uVar12 - 0xa9f943d9;
  if ((SBORROW8(uVar12,0xa9f943d8) != SBORROW8(uVar12 - 0xa9f943d8,1)) !=
      (long)(uVar12 - 0xa9f943d9) < 0) {
    uVar13 = uVar9;
  }
  return uVar9 + uVar13 + uVar10 +
         ((ulong)((uint)uVar14 << 0x19 | (uVar2 & 0x33000000 | 0xc0000000) >> 7) |
         (ulong)(ushort)((short)uVar11 + 0x123e)) +
         (((ulong)uVar4 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar4 + 0x8d8e)) >> 10) +
         ((ulong)(byte)uVar8 | 0x65b2374d89400000) + (ulong)(uVar15 * 2) +
         (uVar10 ^ 0x8b3f4698e5da9e8d) + 0xf0e82177ae3a6d2;
}



// WARNING: Removing unreachable block (ram,0x00401868)
// WARNING: Removing unreachable block (ram,0x00401947)
// WARNING: Removing unreachable block (ram,0x00401937)
// WARNING: Removing unreachable block (ram,0x0040195c)

long log_size_7_var_002(void)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  
  for (uVar7 = 0x3f; 0xc1df7e66U >> uVar7 == 0; uVar7 = uVar7 - 1) {
  }
  uVar7 = uVar7 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar7 << 1);
  auVar2 = ZEXT816(uVar7 | 0xc000000000000000);
  auVar3 = ZEXT416((uint)(((ulong)(CONCAT18(1,0x714be20e) >> 0x40) | 0x1e297c41c) << 0xf) | 0x78a5)
           << (undefined  [16])0x41 | ZEXT416(0xb7eda00);
  auVar4 = auVar3 / auVar2;
  auVar3 = auVar3 % auVar2;
  uVar6 = (uint)uVar7 ^ 0x8000;
  for (lVar1 = 0; (0xf800U >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
  }
  bVar5 = SUB161(auVar4,0);
  return CONCAT62(SUB166(auVar4 >> 0x10,0),CONCAT11(SUB161(auVar4 >> 8,0) ^ bVar5,bVar5)) +
         CONCAT62(SUB166(auVar3 >> 0x10,0),
                  CONCAT11(SUB161(auVar3 >> 8,0) - 0x10U | bVar5,SUB161(auVar3,0))) +
         ((ulong)(ushort)((short)uVar6 + 0x2f81) | 0x7200000000200000) +
         (ulong)(uVar6 & 0xffff0000 | 0x2f81) + lVar1 * -0x598231c5 + 0x4e00009371266bd0;
}



// WARNING: Removing unreachable block (ram,0x00401ad0)
// WARNING: Removing unreachable block (ram,0x00401bbd)

long log_size_7_var_003(void)

{
  ushort uVar1;
  undefined auVar2 [16];
  
  auVar2 = ZEXT116(1) << 0x40 | ZEXT416(0xfd350166);
  for (uVar1 = 0xf; 0xdfeaU >> uVar1 == 0; uVar1 = uVar1 - 1) {
  }
  return (((ulong)((SUB167((auVar2 >> 0x26) >> 8,0) | SUB167((auVar2 << 0x1b) >> 8,0)) ^ 0x291246) &
          0xffffffffffff00) << 8 | (ulong)uVar1) + 0xf81657f5e1edfff1;
}



// WARNING: Removing unreachable block (ram,0x00401de7)

long log_size_7_var_004(void)

{
  byte bVar1;
  long lVar2;
  undefined auVar3 [16];
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint7 uVar8;
  
  auVar3 = ZEXT116(1) << 0x40 | ZEXT816(0xadf0872201891b6c);
  uVar8 = SUB167((auVar3 >> 0x1d) >> 8,0) | SUB167((auVar3 << 0x24) >> 8,0);
  uVar6 = CONCAT62(0x7ff0df562947,
                   ((byte)(SUB161(SEXT816(0x5e22ed1ffffffffe) * SEXT816(0x7249) >> 0x48,0) + 0x47) |
                   0x900) + 0x4ba0) ^ 0x3f84;
  lVar2 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  bVar1 = (char)uVar6 - 1;
  uVar5 = (uint)uVar6 ^ 0xa4efdb37;
  lVar7 = 0xf1faf16e;
  if (uVar5 == 0) {
    lVar7 = lVar2;
  }
  uVar4 = CONCAT62((int6)(uVar8 >> 8),(short)CONCAT71(uVar8,1) + 1) & 0xffffffffffffff00;
  return (ulong)uVar5 + (ulong)(bVar1 | 0x7149e000) + (ulong)(uint)(int)(char)uVar5 + lVar7 + uVar4
         + (ulong)(uint)((int)lVar2 + (int)uVar4) +
         CONCAT62((int6)((ulong)(0x64144418 >> (bVar1 & 0x3f)) >> 0x10),0x90f0) +
         (ulong)((byte)(0x38 - bVar1) | 0x33b2300) +
         (CONCAT62(0x8385bb2c76b5,(short)uVar6 + -0x56ff) & 0xffffffffffffff00) + 0x63e88e02b61942e8
  ;
}



// WARNING: Removing unreachable block (ram,0x0040207c)

long log_size_7_var_005(void)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint7 uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  char cVar10;
  char cVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ulong uVar16;
  ulong uVar17;
  char cVar18;
  uint uVar19;
  long lVar20;
  ushort uVar21;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;
  
  for (sVar12 = 0; (0x30bfU >> sVar12 & 1) == 0; sVar12 = sVar12 + 1) {
  }
  uVar19 = (int)CONCAT62(0x69b0b67106cf,sVar12) + 1;
  uVar1 = uVar19 >> 1 & 0x7fff;
  uVar16 = (ulong)(uVar19 & 0xffff0000 | uVar1);
  for (uVar4 = 0x1f; 0xfc3bfcf2U >> uVar4 == 0; uVar4 = uVar4 - 1) {
  }
  uVar5 = (ulong)CONCAT11('M' - (0xcf40 < (ushort)uVar4),((uVar19 & 1) != 0) + '&');
  bVar8 = (byte)uVar4 & 0x3f;
  uVar6 = (uint7)((uVar5 * 0x2f2d6e589b414e85 << bVar8) >> 8) |
          (uint7)((((ulong)(byte)(-0x49 << ((byte)uVar4 & 0x1f)) | 0x78037afcab0b0c00) >>
                  0x40 - bVar8) >> 8);
  sVar12 = SUB162(SEXT816((long)uVar5) * SEXT816(0x2f2d6e589b414e85) >> 0x40,0);
  bVar24 = sVar12 < 0 != (short)(sVar12 << 1) < 0;
  uVar19 = (uVar4 & 0xff00) << 8;
  uVar9 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | uVar19 | uVar4 << 0x18);
  bVar7 = (byte)(uVar4 >> 0x18);
  bVar8 = bVar7 & 0x1f;
  uVar23 = CONCAT62(0xe4279a2b6b85,(short)bVar24) & 0xffffffff | 0x100000000;
  bVar7 = bVar7 & 0x1f;
  uVar5 = (ulong)(-0x15582fbc << bVar7 |
                 (uint)((CONCAT14((uVar6 & 0x800000) != 0,0xd044) | 0xeaa70000) >> 0x21 - bVar7));
  uVar22 = uVar5 - 0x986008fb;
  lVar20 = uVar16 + uVar9 + (ulong)(uVar5 < 0x986008fb);
  uVar5 = uVar9 + 0x6c5a0afc;
  sVar12 = (short)((uint)CONCAT11((char)((char)(((ushort)CONCAT71(uVar6,bVar24) & 0x3f3b) /
                                               (ushort)(byte)((byte)((uVar23 << bVar8) >> 8) |
                                                              (byte)((uVar23 >> 0x21 - bVar8) >> 8)
                                                             | 0xc0)) + '{') >> 7,(char)(uVar9 >> 8)
                                 ) * (uint)(ushort)lVar20 >> 0x10);
  uVar21 = (ushort)uVar22;
  if (sVar12 == 0) {
    uVar9 = (ulong)(uVar19 | uVar4 << 0x18 | (uint)uVar21);
  }
  uVar17 = uVar5 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar5 + sVar12 + 1);
  cVar18 = (char)lVar20;
  uVar15 = (ushort)(byte)(uVar9 | 0xc0);
  uVar9 = (-0xa5347351 - (uVar9 | 0xc0)) -
          (ulong)(0xffffffff575e8637 < uVar17 || 0xfffffffffffffffe < uVar17 + 0xa8a179c8);
  uVar4 = ((uint)uVar22 & 0xffff0000 |
          (uint)(ushort)((uVar21 & 0x3fff) / uVar15 & 0xff | (uVar21 & 0x3fff) % uVar15 << 8)) *
          0x738;
  uVar23 = (ulong)uVar4 * (ulong)uVar4;
  cVar10 = (char)(uVar23 >> 0x20);
  bVar8 = (byte)uVar9;
  uVar15 = (ushort)uVar1;
  uVar5 = (uVar23 & 0xffffffff) - 0xa8a179c8;
  uVar16 = CONCAT62((int6)(short)(uVar16 >> 0x10),uVar15 + 0x1f21);
  if ((POPCOUNT(uVar15 + 0x1f21 & 0xff) & 1U) != 0) {
    uVar16 = (long)cVar18 & 0xffffffff;
  }
  bVar3 = (byte)uVar5;
  uVar2 = (ushort)(uVar23 >> 0x30);
  cVar11 = cVar10 * '\x02';
  bVar7 = (bVar8 & 0x1f) % 0x11;
  uVar13 = CONCAT11(((char)(uVar9 >> 8) - cVar10) - ((int)(uVar23 >> 0x20) != 0),cVar11);
  uVar4 = CONCAT22((undefined2)((char)bVar3 >> 7),
                   ((short)(char)bVar3 << bVar7 |
                   (ushort)(CONCAT12((uVar5 >> 0x3d & 1) != 0,(short)(char)bVar3) >> 0x11 - bVar7))
                   + 0xb58) & CONCAT22(uVar2,uVar13);
  uVar14 = (ushort)uVar4;
  uVar14 = uVar14 >> (bVar8 & 0xf) | uVar14 << 0x10 - (bVar8 & 0xf);
  uVar23 = (ulong)((SBORROW8(-0xf5981f22,uVar16) != false) != (long)(-0xf5981f22 - uVar16) < 0 |
                  0xa8a17900);
  if (0xffffffff0a67e0de >= uVar16) {
    uVar23 = uVar16;
  }
  return (uVar5 & 0xffffffffffffff00 | (ulong)(byte)(cVar11 + '^' + (0xffffffff0a67e0de < uVar16)))
         + ((ulong)(uVar4 & 0xffff0000 |
                   (uint)(ushort)(uVar14 & 0xff | (ushort)(byte)~(byte)((uint)uVar14 >> 8) << 8)) ^
           0xe331) + (uVar9 & 0xffffffffffff00ff) +
         (ulong)((uint)uVar2 << 0x10 | uVar13 & 0xffffff00 | (uint)bVar3) + uVar16 +
         (ulong)(uint)(int)(short)(uVar15 >> 4 | uVar15 << 0xd) +
         (uVar17 + 0xa8a179c9 & 0xffffffffffffff00 |
         (ulong)(byte)((char)(uVar17 + 0xa8a179c9) + 0x32)) + (-0xf5981f22 - uVar16) +
         CONCAT71((undefined7)(cVar18 >> 7),cVar18 >> (bVar8 & 0x1f)) +
         (ulong)((uint)lVar20 >> 1 | 0x80000000) +
         (uVar22 & 0xffffffffffff0000 | (ulong)(uVar21 >> (bVar8 & 0x1f))) +
         (ulong)((ushort)((ushort)lVar20 * -0x57f4) | 0xedf0000) + uVar23 + -0x3089c060f;
}



// WARNING: Removing unreachable block (ram,0x0040231f)
// WARNING: Removing unreachable block (ram,0x00402328)
// WARNING: Removing unreachable block (ram,0x00402454)
// WARNING: Removing unreachable block (ram,0x00402470)
// WARNING: Removing unreachable block (ram,0x004024a4)

long log_size_7_var_006(void)

{
  undefined auVar1 [16];
  
  auVar1 = ZEXT116(0) << 0x40 | ZEXT416(0x384e2512);
  return (SUB168(ZEXT816(0xead8a1dc) * ZEXT816(0xc2f01213),0) ^ 0x8000000000000) +
         SUB168(ZEXT816(0xead8a1dc) * ZEXT816(0xc2f01213) >> 0x40,0) +
         (SUB168(auVar1 << 5,0) | SUB168(auVar1 >> 0x3c,0)) + 0x4d2399a3d685e26c;
}



// WARNING: Removing unreachable block (ram,0x004026a0)
// WARNING: Removing unreachable block (ram,0x004026ee)

long log_size_7_var_007(void)

{
  ulong uVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  for (sVar2 = 0xf; 0xb837U >> sVar2 == 0; sVar2 = sVar2 + -1) {
  }
  uVar9 = (ushort)(sVar2 - 0xd8f) | 0xbba50000;
  uVar3 = (long)(int)uVar9 * -0xe43f;
  if ((long)(int)uVar3 != uVar3) {
    uVar9 = 0xe4;
  }
  uVar1 = (uVar3 & 0xffffffff) - 0x982c75e4;
  uVar5 = (uint)(ushort)((short)(uVar3 >> 0x20) + 0x75e5);
  uVar6 = ((uint)(uVar3 >> 0x20) & 0xff) + 0x9a1e5e40;
  bVar7 = (byte)uVar6 & 0x1f;
  uVar8 = 0x26da242fU >> bVar7 | -0x616bcf2a << 0x20 - bVar7;
  bVar7 = (byte)uVar8;
  iVar4 = (ushort)(short)(char)uVar1 * uVar5;
  return (uVar1 & 0xffffffffffff0000 | (ulong)(ushort)iVar4) + (uVar3 >> 0x20) +
         (ulong)((uVar6 & 0xffffff00 | (uint)(byte)((byte)uVar6 - 0x22)) << 7 | uVar6 >> 0x19) +
         (ulong)(ushort)((uint)iVar4 >> 0x10) + (ulong)(uVar5 | 0x982c0000) +
         (ulong)(uVar8 & 0xffff0000 | (uint)(ushort)((ushort)(byte)(bVar7 - 0x12) << 10 | 0x1df)) +
         (ulong)(uVar9 * 0x20000000 | 0xbe17dcc) + ((ulong)bVar7 | 0x1226daad5ac8c500) +
         -0x1226daae1474ffa4;
}



// WARNING: Removing unreachable block (ram,0x004028e0)

long log_size_7_var_008(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined auVar4 [16];
  uint uVar5;
  uint5 uVar6;
  ushort uVar7;
  ushort uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  bool bVar15;
  
  auVar4 = ZEXT816(0x4af05981) * ZEXT816(0x71dc7511);
  bVar15 = SUB168(auVar4,0) == SUB168(auVar4 >> 0x40,0);
  bVar14 = SUB161(auVar4 >> 0x40,0);
  bVar9 = SUB161(auVar4,0);
  bVar14 = (bVar9 ^ !bVar15 * (bVar9 ^ bVar14 ^ bVar15 * (bVar14 ^ bVar9))) * -0x65;
  bVar9 = (bVar14 == 0x9b) * -0x76 ^ 0x9b;
  uVar7 = (ushort)(byte)((bVar14 ^ (bVar14 != 0x9b) * (bVar14 ^ bVar9)) << (bVar9 & 0xf)) * 0xb;
  bVar14 = (byte)uVar7;
  uVar6 = CONCAT14(bVar14,0x71dc7510) & 0x1ffffffff;
  for (lVar3 = 0x3f; 0x17a769f2396c720bU >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  for (uVar1 = 0; (0x9cfdU >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
  }
  uVar8 = uVar7 & 0xff00 | (byte)(bVar14 >> 1 | bVar14 << 7) & 0xffdf;
  uVar5 = (uint)((ulong)uVar1 | 0x112c0000) >> 5;
  lVar3 = ((ulong)uVar1 | 0x112c0000) * 8 + 0x1e0a;
  bVar14 = (byte)uVar5 ^ 2;
  uVar13 = 0xc0000000;
  if ((char)bVar14 < '\x01') {
    uVar13 = 0xfffffffffc94a793;
  }
  uVar11 = (ulong)((((uint)uVar6 | 1) << 0x19 | (uint)(uVar6 >> 8) & 0xffff0000 |
                   (uint)(byte)((byte)lVar3 ^ 0xfe)) >> 1);
  uVar10 = (ulong)(uint)(int)(char)((uint)uVar7 >> 8);
  if ((char)((byte)lVar3 & bVar14) < '\0') {
    uVar10 = uVar11;
  }
  iVar2 = 0x1f;
  if ((uint)lVar3 != 0) {
    for (; (uint)lVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  uVar12 = uVar13 | 0x271a;
  if ((long)uVar12 < 0) {
    uVar12 = uVar13 & 0xffffffffffff0000 | 0xff;
  }
  return (((ulong)(ushort)((uVar8 >> 1 ^ (ushort)(uVar6 >> 8)) + 0xbb) & 0xff | 0x16e4e25746860000)
         ^ 0x61ff) +
         (uVar10 & 0xffffffffffff0000 |
         (ulong)CONCAT11((char)((ulong)(ushort)((short)uVar10 >> 0x13) >> 8) << 1,
                         (char)(uVar10 >> 8) >> 0xb)) + uVar11 + uVar12 + lVar3 + uVar13 +
         ((ulong)((uint)(uVar8 >> 2) << 0x1b | uVar5) ^ 2) + 0x2fb31da59e577891;
}



// WARNING: Removing unreachable block (ram,0x00402c24)
// WARNING: Removing unreachable block (ram,0x00402cef)
// WARNING: Removing unreachable block (ram,0x00402bf0)
// WARNING: Removing unreachable block (ram,0x00402bf7)

long log_size_7_var_009(void)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  bVar4 = SUB161((ZEXT816(0x4aa373170f760cf) << 0x40 | ZEXT816(0x826ea9c85d9384ee)) /
                 ZEXT816(0xce920700fc2712f1),0);
  uVar7 = (uint)bVar4 << 8 | 0xb3cded8a;
  uVar8 = ~((int)(((ulong)(((uint)bVar4 << 0x1c | 0xfc271) + 0x424f448e) & 0xffffffffffff2e7b) >> 1)
            * 2 + 0x88fe9b87U);
  uVar3 = (short)uVar8 * -0x3784;
  uVar6 = (ulong)CONCAT22(0xffff,(short)(uVar3 >> 0x10));
  uVar8 = uVar8 & 0xffffff00 | 1;
  uVar5 = (ulong)(uVar3 & 0xffff | 0xaf120000);
  if (SCARRY8(uVar6,0x3fff73ff) == false) {
    uVar5 = 0x3fff73ff;
  }
  uVar9 = (uVar6 & 0xff) - 0x438adb9d;
  uVar5 = CONCAT62((uint6)(uVar5 >> 0x11),(ushort)(uVar5 >> 1) >> 1);
  uVar1 = 0x98d4 - ((short)uVar7 + 0x537d);
  lVar2 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  return (uVar5 & 0xffffffffffffff00 | (ulong)(-1 < (short)(uVar6 + 0x3fff73ff))) + (ulong)uVar7 +
         (ulong)uVar8 +
         (uVar9 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar9 >> 1 | (short)uVar8 << 0xf)) +
         (ulong)(((int)(short)uVar3 != uVar3) + 0x5c665f85) + lVar2 +
         ((ulong)(ushort)(uVar1 * 2 | uVar1 >> 0xf) | 0x9f3e0000) + uVar6 + 0x3fff73ff +
         -0x3c08ad9c7;
}



int __libc_csu_init(void *param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  
  _init((EVP_PKEY_CTX *)param_1);
  lVar2 = 0;
  do {
    iVar1 = (*(code *)(&__frame_dummy_init_array_entry)[lVar2])((ulong)param_1 & 0xffffffff,param_2)
    ;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 1);
  return iVar1;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


