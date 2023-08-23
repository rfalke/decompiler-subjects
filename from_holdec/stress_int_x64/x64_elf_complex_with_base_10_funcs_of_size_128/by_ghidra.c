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



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1,auStack_8)
  ;
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
  uVar5 = auVar3._0_4_ >> 0xb;
  uVar7 = uVar5 | 0xb3200000;
  return (auVar3._0_8_ & 0xffffffffffff9b0e) + (ulong)CONCAT22(0x3acc,uVar6) +
         SUB168(auVar2 % ZEXT816(0xf29c58b9a0e71d99),0) +
         (ulong)(CONCAT31(0x200000,(char)uVar5) | 0x6401600) + (long)(int)uVar7 + (ulong)uVar7 +
         (ulong)(CONCAT22(0xffff,uVar1) + 0x586a8154) + 0x400b3b1f617c0003;
}



// WARNING: Removing unreachable block (ram,0x00401600)
// WARNING: Removing unreachable block (ram,0x00401568)
// WARNING: Removing unreachable block (ram,0x00401604)
// WARNING: Removing unreachable block (ram,0x004015be)
// WARNING: Removing unreachable block (ram,0x0040168e)

long log_size_7_var_001(void)

{
  undefined auVar1 [16];
  short sVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ushort uVar13;
  uint uVar14;
  ushort uVar15;
  bool bVar16;
  
  auVar1._8_8_ = 0x64bfa046;
  auVar1._0_8_ = 0x3b7f669c;
  auVar1 = auVar1 / ZEXT816(0xf4a83abcf2a32b46);
  bVar16 = (char)((uint)CONCAT62(auVar1._2_6_,(ushort)auVar1[0] * (ushort)auVar1[1]) >> 0xe) == -1;
  auVar1 = ZEXT116(1) << 0x40 | ZEXT416(0xab2fb1e1);
  uVar15 = (ushort)CONCAT71(0xe0880b64265c77,bVar16);
  uVar4 = uVar15 + 0x2b01;
  uVar13 = (ushort)(uVar4 == 0x6a36) * 0x7081 ^ 0x6a36;
  iVar6 = -(int)CONCAT62(0xf4a83abcf2a3,uVar4 ^ (ushort)(uVar4 != 0x6a36) * (uVar4 ^ uVar13));
  iVar3 = 0x3a561ab7;
  if (!bVar16) {
    iVar3 = iVar6;
  }
  uVar14 = (SUB164(auVar1 >> 0x2f,0) | SUB164(auVar1 << 0x12,0)) & 0x336f7770 | 0xc0000000;
  uVar7 = CONCAT44(0xf2a32b00,iVar6) & 0x3fffffffffffffff;
  sVar2 = (short)(uVar7 / uVar14);
  sVar5 = sVar2 + -1;
  uVar10 = 0xb85c2914;
  if (SBORROW2(sVar2,1)) {
    uVar10 = 0;
  }
  iVar6 = sVar5 * -0x1a09;
  uVar9 = CONCAT62((int6)(uVar7 % (ulong)uVar14 >> 0x10),(short)((uint)iVar6 >> 0x10));
  uVar7 = (ulong)(CONCAT22(sVar5 >> 0xf,(short)iVar6) & 0xffffff00 | 0xc0) & 0xffffffffffff3fff;
  lVar8 = CONCAT62((int6)(uVar7 >> 0x10),
                   CONCAT11((char)((ushort)uVar7 % (ushort)(byte)uVar7),
                            (char)((ushort)uVar7 / (ushort)(byte)uVar7)));
  lVar11 = CONCAT71((int7)((ulong)uVar10 >> 8),(byte)uVar10 >> 4 | (byte)uVar10 << 5);
  lVar12 = lVar11 + -0xa9f943d9;
  if ((SBORROW8(lVar11,0xa9f943d8) != SBORROW8(lVar11 + -0xa9f943d8,1)) != lVar11 + -0xa9f943d9 < 0)
  {
    lVar12 = lVar8;
  }
  return lVar8 + lVar12 + uVar9 +
         (ulong)CONCAT22((ushort)(((uint)uVar13 << 0x19) >> 0x10) | (ushort)(uVar14 >> 0x17),
                         (short)uVar10 + 0x123e) +
         (ulong)(CONCAT22((short)((uint)iVar3 >> 0x10),(short)iVar3 + -0x7272) >> 10) +
         CONCAT71(0x65b2374d894000,(char)iVar6) + (ulong)(uVar14 * 2) + (uVar9 ^ 0x8b3f4698e5da9e8d)
         + CONCAT62(0xe0880b64265c,uVar15 >> 1) + 0x2e8676b354876b52;
}



// WARNING: Removing unreachable block (ram,0x00401868)
// WARNING: Removing unreachable block (ram,0x00401947)
// WARNING: Removing unreachable block (ram,0x00401937)
// WARNING: Removing unreachable block (ram,0x0040195c)

long log_size_7_var_002(void)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  byte bVar6;
  ushort uVar7;
  
  for (lVar2 = 0x3f; 0xc1df7e66U >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  uVar7 = (short)lVar2 << 1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = CONCAT62((int6)((ulong)lVar2 >> 0x10),uVar7) | 0xc000000000000000;
  auVar4 = ZEXT816(0x1c41df14a) << 0x40 | ZEXT316(0xb7eda) << 8;
  auVar5 = auVar4 / auVar3;
  auVar4 = auVar4 % auVar3;
  for (lVar1 = 0; (0xf800UL >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
  }
  bVar6 = auVar5[0];
  return CONCAT62(auVar5._2_6_,CONCAT11(auVar5[1] ^ bVar6,bVar6)) +
         CONCAT62(auVar4._2_6_,CONCAT11(auVar4[1] - 0x10U | bVar6,auVar4[0])) +
         (CONCAT62(0x20,(uVar7 ^ 0x8000) + 0x2f81) | 0x7200000000000000) +
         (ulong)CONCAT22((short)((ulong)lVar2 >> 0x10),0x2f81) + lVar1 * -0x598231c5 +
         0x4e00009371266bd0;
}



// WARNING: Removing unreachable block (ram,0x00401ad0)
// WARNING: Removing unreachable block (ram,0x00401bbd)

long log_size_7_var_003(void)

{
  short sVar1;
  undefined auVar2 [16];
  
  auVar2 = ZEXT116(1) << 0x40 | ZEXT416(0xfd350166);
  for (sVar1 = 0xf; 0xdfeaU >> sVar1 == 0; sVar1 = sVar1 + -1) {
  }
  return (CONCAT62(SUB166(auVar2 >> 0x26,2) | SUB166(auVar2 << 0x1b,2),sVar1) ^ 0x29120000) +
         0xf81657f5e1edfff1;
}



// WARNING: Removing unreachable block (ram,0x00401de7)

long log_size_7_var_004(void)

{
  byte bVar1;
  long lVar2;
  undefined auVar3 [16];
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint7 uVar8;
  ulong uVar7;
  
  auVar3 = ZEXT116(1) << 0x40 | ZEXT816(0xadf0872201891b6c);
  uVar8 = SUB167(auVar3 >> 0x1d,1) | SUB167(auVar3 << 0x24,1);
  uVar5 = CONCAT62(0x7ff0df562947,
                   (short)CONCAT71(0x7ff0df56294709,
                                   SUB161(SEXT816(0x5e22ed1ffffffffe) * SEXT816(0x7249),9) + 'G') +
                   0x4ba0) ^ 0x3f84;
  lVar2 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  bVar1 = (char)uVar5 - 1;
  uVar4 = (uint)uVar5 ^ 0xa4efdb37;
  lVar6 = 0xf1faf16e;
  if (uVar4 == 0) {
    lVar6 = lVar2;
  }
  uVar7 = CONCAT62((int6)(uVar8 >> 8),(short)CONCAT71(uVar8,1) + 1) & 0xffffffffffffff00;
  return (ulong)uVar4 + (ulong)CONCAT31(0x7149e0,bVar1) + (ulong)(uint)(int)(char)uVar4 + lVar6 +
         uVar7 + (ulong)(uint)((int)lVar2 + (int)uVar7) +
         CONCAT62((int6)((ulong)(0x64144418L >> (bVar1 & 0x3f)) >> 0x10),0x90f0) +
         (ulong)CONCAT31(0x33b23,'8' - bVar1) +
         (CONCAT62(0x8385bb2c76b5,(short)uVar5 + -0x56ff) & 0xffffffffffffff00) + 0x63e88e02b61942e8
  ;
}



// WARNING: Removing unreachable block (ram,0x0040207c)

long log_size_7_var_005(void)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  uint7 uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  char cVar13;
  char cVar14;
  short sVar15;
  ushort uVar16;
  ulong uVar17;
  ulong uVar18;
  char cVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  bool bVar23;
  
  for (sVar1 = 0; (0x30bfU >> sVar1 & 1) == 0; sVar1 = sVar1 + 1) {
  }
  uVar20 = (int)CONCAT62(0x69b0b67106cf,sVar1) + 1;
  uVar2 = (ushort)uVar20 >> 1;
  sVar1 = (short)(uVar20 >> 0x10);
  for (uVar5 = 0x1f; 0xfc3bfcf2U >> uVar5 == 0; uVar5 = uVar5 - 1) {
  }
  uVar6 = (ulong)CONCAT11('M' - (0xcf40 < (ushort)uVar5),((uVar20 & 1) != 0) + '&');
  bVar9 = (byte)uVar5 & 0x3f;
  uVar7 = (uint7)((uVar6 * 0x2f2d6e589b414e85 << bVar9) >> 8) |
          (uint7)(((CONCAT71(0x3afcab0b0c,-0x49 << ((byte)uVar5 & 0x1f)) | 0x7803400000000000) >>
                  0x40 - bVar9) >> 8);
  sVar15 = SUB162(SEXT816((long)uVar6) * SEXT816(0x2f2d6e589b414e85),8);
  bVar23 = sVar15 < 0 != (short)(sVar15 << 1) < 0;
  uVar10 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar11 = (ulong)uVar10;
  bVar8 = (byte)(uVar5 >> 0x18);
  bVar9 = bVar8 & 0x1f;
  uVar6 = CONCAT62(0xe4279a2b6b85,(short)bVar23) & 0xffffffff | 0x100000000;
  bVar8 = bVar8 & 0x1f;
  uVar17 = (ulong)(-0x15582fbc << bVar8 |
                  (uint)(CONCAT14((uVar7 & 0x800000) != 0,0xeaa7d044) >> 0x21 - bVar8));
  uVar22 = uVar17 - 0x986008fb;
  lVar21 = CONCAT22(sVar1,uVar2) + uVar11 + (ulong)(uVar17 < 0x986008fb);
  lVar12 = uVar11 + 0x6c5a0afc;
  sVar15 = (short)((uint)CONCAT11((char)((char)(((ushort)CONCAT71(uVar7,bVar23) & 0x3f3b) /
                                               (ushort)(byte)((byte)((uVar6 << bVar9) >> 8) |
                                                              (byte)((uVar6 >> 0x21 - bVar9) >> 8) |
                                                             0xc0)) + '{') >> 7,
                                  (char)((uVar5 & 0xff0000) >> 0x10)) * (uint)(ushort)lVar21 >> 0x10
                  );
  if (sVar15 == 0) {
    uVar11 = (ulong)CONCAT22((short)(uVar10 >> 0x10),(ushort)uVar22);
  }
  uVar18 = CONCAT62((int6)((ulong)lVar12 >> 0x10),(short)lVar12 + sVar15 + 1);
  cVar19 = (char)lVar21;
  uVar16 = (ushort)(byte)(uVar11 | 0xc0);
  uVar4 = (ushort)(uVar22 & 0xffff3fff);
  lVar12 = (-0xa5347351 - (uVar11 | 0xc0)) -
           (ulong)(0xffffffff575e8637 < uVar18 || 0xfffffffffffffffe < uVar18 + 0xa8a179c8);
  uVar5 = (int)CONCAT62((int6)((uVar22 & 0xffff3fff) >> 0x10),
                        CONCAT11((char)(uVar4 % uVar16),(char)(uVar4 / uVar16))) * 0x738;
  uVar11 = (ulong)uVar5 * (ulong)uVar5;
  cVar13 = (char)(uVar11 >> 0x20);
  bVar9 = (byte)lVar12;
  uVar6 = (uVar11 & 0xffffffff) - 0xa8a179c8;
  uVar17 = CONCAT62((int6)sVar1,uVar2 + 0x1f21);
  if ((POPCOUNT(uVar2 + 0x1f21 & 0xff) & 1U) != 0) {
    uVar17 = (ulong)(uint)(int)cVar19;
  }
  cVar3 = (char)uVar6;
  cVar14 = cVar13 * '\x02';
  bVar8 = (bVar9 & 0x1f) % 0x11;
  uVar5 = CONCAT22((short)(uVar11 >> 0x30),
                   CONCAT11(((char)((ulong)lVar12 >> 8) - cVar13) - ((int)(uVar11 >> 0x20) != 0),
                            cVar14));
  uVar10 = CONCAT22(cVar3 >> 7,
                    ((short)cVar3 << bVar8 |
                    (ushort)(CONCAT12((uVar6 >> 0x3d & 1) != 0,(short)cVar3) >> 0x11 - bVar8)) +
                    0xb58) & uVar5;
  uVar16 = (ushort)uVar10;
  uVar16 = uVar16 >> (bVar9 & 0xf) | uVar16 << 0x10 - (bVar9 & 0xf);
  uVar11 = (ulong)CONCAT31(0xa8a179,(SBORROW8(-0xf5981f22,uVar17) != false) !=
                                    (long)(-0xf5981f22 - uVar17) < 0);
  if (0xffffffff0a67e0de >= uVar17) {
    uVar11 = uVar17;
  }
  return CONCAT71((int7)(uVar6 >> 8),cVar14 + '^' + (0xffffffff0a67e0de < uVar17)) +
         ((ulong)CONCAT22((short)(uVar10 >> 0x10),CONCAT11(~(byte)(uVar16 >> 8),(char)uVar16)) ^
         0xe331) + CONCAT62((int6)((ulong)lVar12 >> 0x10),(ushort)bVar9) +
         (ulong)CONCAT31((int3)(uVar5 >> 8),cVar3) + uVar17 +
         (ulong)(uint)(int)(short)((ushort)uVar20 >> 5 | uVar2 << 0xd) +
         CONCAT71((int7)(uVar18 + 0xa8a179c9 >> 8),(char)(uVar18 + 0xa8a179c9) + '2') +
         (-0xf5981f22 - uVar17) + CONCAT71(cVar19 >> 7,cVar19 >> (bVar9 & 0x1f)) +
         (ulong)((uint)lVar21 >> 1 | 0x80000000) +
         CONCAT62((int6)(uVar22 >> 0x10),(ushort)uVar22 >> (bVar9 & 0x1f)) +
         (ulong)(CONCAT22(0xbe5a,(ushort)lVar21 * -0x57f4) ^ 0xb0850000) + uVar11 + -0x3089c060f;
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
         SUB168(ZEXT816(0xead8a1dc) * ZEXT816(0xc2f01213),8) +
         (SUB168(auVar1 << 5,0) | SUB168(auVar1 >> 0x3c,0)) + 0x4d2399a3d685e26c;
}



// WARNING: Removing unreachable block (ram,0x004026a0)
// WARNING: Removing unreachable block (ram,0x004026ee)

long log_size_7_var_007(void)

{
  long lVar1;
  short sVar2;
  ulong uVar3;
  byte bVar4;
  uint3 uVar5;
  byte bVar6;
  int iVar7;
  ushort uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  
  for (sVar2 = 0xf; 0xb837U >> sVar2 == 0; sVar2 = sVar2 + -1) {
  }
  iVar11 = (int)CONCAT62(0xa36ac5e0bba5,sVar2 + -0xd8f);
  uVar3 = (long)iVar11 * -0xe43f;
  if ((long)(int)uVar3 != uVar3) {
    iVar11 = -0x445a8a1c;
  }
  lVar1 = (uVar3 & 0xffffffff) - 0x982c75e4;
  uVar8 = (short)(uVar3 >> 0x20) + 0x75e5;
  iVar7 = ((uint)(uVar3 >> 0x20) & 0xff) + 0x9a1e5e40;
  bVar6 = (byte)iVar7;
  bVar4 = bVar6 & 0x1f;
  uVar10 = 0x26da242fU >> bVar4 | -0x616bcf2a << 0x20 - bVar4;
  uVar5 = (uint3)((uint)iVar7 >> 8);
  cVar9 = (char)uVar10;
  iVar7 = (uint)(ushort)(short)(char)lVar1 * (uint)uVar8;
  return CONCAT62((int6)((ulong)lVar1 >> 0x10),(short)iVar7) + (uVar3 >> 0x20) +
         (ulong)(CONCAT31(uVar5,bVar6 - 0x22) << 7 | (uint)(uVar5 >> 0x11)) +
         (ulong)(ushort)((uint)iVar7 >> 0x10) + (ulong)CONCAT22(0x982c,uVar8) +
         (ulong)(CONCAT22((short)(uVar10 >> 0x10),(ushort)(byte)(cVar9 - 0x12) << 10) | 0x1df) +
         (ulong)(CONCAT22((short)((uint)(iVar11 * 0x20000000) >> 0x10),0x7dcc) | 0xbe10000) +
         CONCAT71(0x1226daad5ac8c5,cVar9) + -0x1226daae1474ffa4;
}



// WARNING: Removing unreachable block (ram,0x004028e0)

long log_size_7_var_008(void)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined auVar4 [16];
  uint uVar5;
  uint5 uVar6;
  short sVar7;
  uint uVar8;
  byte bVar9;
  char cVar11;
  ulong uVar10;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  bool bVar16;
  
  auVar4 = ZEXT816(0x4af05981) * ZEXT816(0x71dc7511);
  bVar16 = auVar4._0_8_ == auVar4._8_8_;
  bVar15 = auVar4[0];
  bVar15 = (bVar15 ^ !bVar16 * (bVar15 ^ auVar4[8] ^ bVar16 * (auVar4[8] ^ bVar15))) * -0x65;
  bVar9 = (bVar15 == 0x9b) * -0x76 ^ 0x9b;
  sVar7 = (ushort)(byte)((bVar15 ^ (bVar15 != 0x9b) * (bVar15 ^ bVar9)) << (bVar9 & 0xf)) * 0xb;
  bVar15 = (byte)sVar7;
  uVar6 = CONCAT14(bVar15,0x71dc7510) & 0x1ffffffff;
  for (lVar3 = 0x3f; 0x17a769f2396c720bU >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  for (sVar1 = 0; (0x9cfdU >> sVar1 & 1) == 0; sVar1 = sVar1 + 1) {
  }
  uVar8 = CONCAT11((char)((ushort)sVar7 >> 8),bVar15 >> 1 | bVar15 << 7) & 0xffffffdf;
  uVar5 = (uint)CONCAT62(0x112c,sVar1) >> 5;
  lVar3 = CONCAT62(0x112c,sVar1) * 8 + 0x1e0a;
  bVar15 = (byte)uVar5 ^ 2;
  uVar14 = 0xc0000000;
  if ((char)bVar15 < '\x01') {
    uVar14 = 0xfffffffffc94a793;
  }
  uVar12 = (ulong)((CONCAT31((int3)(CONCAT22((ushort)((((uint)uVar6 | 1) << 0x19) >> 0x10) |
                                             (ushort)(uVar6 >> 0x18),0xfe) >> 8),(byte)lVar3) ^ 0xfe
                   ) >> 1);
  uVar10 = 0;
  if ((char)((byte)lVar3 & bVar15) < '\0') {
    uVar10 = uVar12;
  }
  iVar2 = 0x1f;
  if ((uint)lVar3 != 0) {
    for (; (uint)lVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  uVar13 = uVar14 | 0x271a;
  if ((long)uVar13 < 0) {
    uVar13 = CONCAT62((int6)(uVar14 >> 0x10),0xff);
  }
  cVar11 = (char)(uVar10 >> 8) >> 7;
  return (CONCAT62(0x16e4e2574686,((ushort)(uVar8 >> 1) ^ (ushort)(uVar6 >> 8)) + 0xbb) &
          0xffffffffffff00ff ^ 0x61ff) +
         CONCAT62((int6)(uVar10 >> 0x10),CONCAT11(cVar11 << 1,cVar11)) + uVar12 + uVar13 + lVar3 +
         uVar14 + ((ulong)((uVar8 >> 2) << 0x1b | uVar5) ^ 2) + 0x2fb31da59e577891;
}



// WARNING: Removing unreachable block (ram,0x00402c24)
// WARNING: Removing unreachable block (ram,0x00402cef)
// WARNING: Removing unreachable block (ram,0x00402bf0)
// WARNING: Removing unreachable block (ram,0x00402bf7)

long log_size_7_var_009(void)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  uVar7 = CONCAT62(0x7f7b9e0c2000,
                   (ushort)SUB161((ZEXT816(0x4aa373170f760cf) << 0x40 | ZEXT816(0x826ea9c85d9384ee))
                                  / ZEXT816(0xce920700fc2712f1),0) << 8);
  uVar6 = (uint)(uint3)((ulong)uVar7 >> 8) << 8 | 0xb3cded8a;
  uVar8 = ~((int)(((ulong)(((int)uVar7 << 0x14 | 0xfc271U) + 0x424f448e) & 0xffffffffffff2e7b) >> 1)
            * 2 + 0x88fe9b87U);
  iVar3 = (short)uVar8 * -0x3784;
  uVar5 = (ulong)CONCAT22(0xffff,(short)((uint)iVar3 >> 0x10));
  uVar8 = CONCAT31((int3)(uVar8 >> 8),1);
  uVar4 = (ulong)CONCAT22(0xaf12,(short)iVar3);
  if (SCARRY8(uVar5,0x380003ff) == false) {
    uVar4 = 0x380003ff;
  }
  lVar9 = (uVar5 & 0xff) - 0x438adb9d;
  uVar4 = CONCAT62((uint6)(uVar4 >> 0x11),(ushort)(uVar4 >> 1) >> 1);
  uVar1 = 0x98d4 - ((short)uVar6 + 0x537d);
  lVar2 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),-1 < (short)(uVar5 + 0x380003ff)) + (ulong)uVar6 + (ulong)uVar8
         + CONCAT62((int6)((ulong)lVar9 >> 0x10),(ushort)lVar9 >> 1 | (short)uVar8 << 0xf) +
         (ulong)(((short)iVar3 != iVar3) + 0x5c665f85) + lVar2 +
         CONCAT62(0x9f3e,uVar1 * 2 | uVar1 >> 0xf) + uVar5 + 0x380003ff + -0x3c88a49c7;
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


