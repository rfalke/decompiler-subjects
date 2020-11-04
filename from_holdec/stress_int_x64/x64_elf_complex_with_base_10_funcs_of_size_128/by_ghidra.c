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



// WARNING: Removing unreachable block (ram,0x00401378)
// WARNING: Removing unreachable block (ram,0x004013ac)
// WARNING: Removing unreachable block (ram,0x00401390)
// WARNING: Removing unreachable block (ram,0x004013c4)

long log_size_7_var_000(void)

{
  ushort uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  bool in_PF;
  
  uVar1 = 0;
  while ((0x909U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  uVar6 = (ulong)((uint)(~(1 << (uVar1 & 0xf)) & 0x588a) | 0x3acc0000);
  if (in_PF) {
    uVar6 = 0x729c58b9a0e71d99;
  }
  iVar4 = (uint)(byte)uVar6 * 0x3819;
  auVar2 = ZEXT1216(CONCAT48(CONCAT22(0x21f,(short)((uint)iVar4 >> 0x10)) << 0xc,
                             (ulong)(ushort)(short)(char)iVar4) |
                    (undefined  [12])0xb589f18400000000) & (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 / ZEXT816(0xf29c58b9a0e71d99);
  uVar5 = SUB164(auVar3,0) >> 0xb;
  uVar7 = uVar5 | 0xb3200000;
  return (SUB168(auVar3,0) & 0xffffffffffff9b0e) + uVar6 +
         SUB168(auVar2 % ZEXT816(0xf29c58b9a0e71d99),0) + (ulong)(uVar5 & 0xff | 0x26401600) +
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
  int iVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort uVar12;
  ulong uVar13;
  bool bVar14;
  
  auVar1 = ((CONCAT88(0x7c04d6d664bfa046,0x3b7f669c) | (undefined  [16])0x32eff12b00000000) &
           (undefined  [16])0xffffffffffffffff) / ZEXT816(0xf4a83abcf2a32b46);
  bVar14 = (char)((uint)CONCAT62(SUB166(auVar1 >> 0x10,0),
                                 (ushort)SUB161(auVar1,0) * (ushort)SUB161(auVar1 >> 8,0)) >> 0xe)
           == -1;
  uVar4 = ((ushort)bVar14 | 0x7700) + 0x2b01;
  uVar12 = (ushort)(uVar4 == 0x6a36) * -0x904 ^ 0x6a36;
  uVar11 = (ulong)-((uint)(ushort)(uVar4 ^ (ushort)(uVar4 == 0x6a36) * (uVar4 & uVar12)) |
                   0xf2a30000);
  uVar13 = 0x902528db3a569cca;
  if (!bVar14) {
    uVar13 = uVar11 | 0xf4a83abc00000000;
  }
  uVar11 = uVar11 | 0x32a32b0000000000;
  sVar3 = (short)(uVar11 / 0xc34f0000);
  sVar5 = sVar3 + -1;
  uVar9 = 0x143531f185c2914;
  if (SBORROW2(sVar3,1)) {
    uVar9 = 0x170a;
  }
  iVar2 = (int)sVar5 * 0x63e3;
  uVar8 = (ulong)CONCAT22((short)(uVar11 % 0xc34f0000 >> 0x10),(short)((uint)iVar2 >> 0x10));
  uVar4 = (ushort)iVar2;
  uVar6 = uVar4 & 0x3f00 | 0xc0;
  uVar7 = (ulong)(uint)(int)sVar5 & 0xffffffffffff0000 | 0xf4a83abc00000000 |
          (ulong)(ushort)(uVar6 / 0xc0 | uVar6 % 0xc0 << 8);
  uVar10 = uVar9 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar9 >> 4 | (byte)uVar9 << 5);
  uVar11 = uVar10 - 0xa9f943d9;
  if ((SBORROW8(uVar10,0xa9f943d8) != SBORROW8(uVar10 - 0xa9f943d8,1)) !=
      (long)(uVar10 - 0xa9f943d9) < 0) {
    uVar11 = uVar7;
  }
  return uVar7 + uVar11 + uVar8 +
         ((ulong)((uint)uVar12 << 0x19 | 0x1860000) | (ulong)(ushort)((short)uVar9 + 0x123e)) +
         ((uVar13 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar13 + 0x8d8e)) >> 10) +
         ((ulong)uVar4 & 0xff | 0xa5b2374c89400000) + (uVar8 ^ 0x8b3f4698e5da9e8d) +
         -0x577b71ad1e2619f6;
}



// WARNING: Removing unreachable block (ram,0x00401947)
// WARNING: Removing unreachable block (ram,0x00401937)
// WARNING: Removing unreachable block (ram,0x0040195c)

long log_size_7_var_002(void)

{
  long lVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  byte bVar6;
  ushort uVar7;
  
  uVar2 = 0x3f;
  while (0xc1df7e66U >> uVar2 == 0) {
    uVar2 = uVar2 - 1;
  }
  uVar7 = (short)uVar2 * 2;
  auVar3 = ZEXT816(uVar2 & 0xffffffffffff0000 | (ulong)uVar7 | 0xc000000000000000);
  auVar4 = ZEXT416(0xe20e78a5) << (undefined  [16])0x41 | ZEXT416(0xb7eda00);
  auVar5 = auVar4 / auVar3;
  auVar4 = auVar4 % auVar3;
  lVar1 = 0;
  while ((0xf800U >> lVar1 & 1) == 0) {
    lVar1 = lVar1 + 1;
  }
  bVar6 = SUB161(auVar5,0);
  return CONCAT62(SUB166(auVar5 >> 0x10,0),CONCAT11(SUB161(auVar5 >> 8,0) ^ bVar6,bVar6)) +
         ((SUB168(auVar4,0) ^ 0x8000) & 0xffffffffffff0000 |
         (ulong)CONCAT11((SUB161(auVar4 >> 8,0) ^ 0x80) - 0x10 | bVar6,SUB161(auVar4,0))) +
         ((ulong)(ushort)(uVar7 + 0x2f81) | 0x7200000000200000) +
         (uVar2 & 0xffffffffffff0000 | 0xc000000000002f81) + lVar1 * -0x598231c5 +
         0x4e00009371266b8c;
}



// WARNING: Removing unreachable block (ram,0x00401bbd)

long log_size_7_var_003(void)

{
  ushort uVar1;
  
  uVar1 = 0xf;
  while (0x36eeU >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  return (((ulong)((SUB167((ZEXT416(0xfd3501e6) >> 0x26) >> 8,0) |
                   (uint7)((ulong)(SUB168(ZEXT416(0xfd3501e6),0) << 0x1b) >> 8)) ^ 0x291246) &
          0xffffffffffff00) << 8 | (ulong)uVar1) + 0xe4bb37f44101ff7f;
}



// WARNING: Removing unreachable block (ram,0x00401de7)

long log_size_7_var_004(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint7 uVar7;
  
  uVar7 = SUB167((ZEXT816(0xadf0872201891b6c) >> 0x1d) >> 8,0) |
          SUB167((ZEXT816(0xadf0872201891b6c) << 0x24) >> 8,0);
  uVar5 = CONCAT62(0x7ff0df562947,
                   ((ushort)(byte)(SUB161(SEXT816(0x5e22ed1bfffffffe) * SEXT816(0x7249) >> 0x48,0) +
                                  0x47) | 0x900) + 0x4ba0) ^ 0x3f84;
  lVar2 = 0x3f;
  if (uVar5 != 0) {
    while (uVar5 >> lVar2 == 0) {
      lVar2 = lVar2 + -1;
    }
  }
  bVar1 = (char)uVar5 - 1;
  uVar4 = (uint)uVar5 ^ 0xa4efdb37;
  lVar6 = 0xf1faf16e;
  if (uVar4 == 0) {
    lVar6 = lVar2;
  }
  uVar3 = CONCAT62((int6)(uVar7 >> 8),(short)CONCAT71(uVar7,1) + 1) & 0xffffffffffffff00;
  return (ulong)uVar4 + (ulong)((uint)bVar1 | 0x7149e000) + (ulong)(uint)(int)(char)uVar4 + lVar6 +
         uVar3 + (ulong)(uint)((int)lVar2 + (int)uVar3) +
         CONCAT62((int6)((ulong)(0x64144418 >> (bVar1 & 0x3f)) >> 0x10),0x90f0) +
         (ulong)((uint)(byte)(0x38 - bVar1) | 0x33b2300) +
         (CONCAT62(0x8385bb2c76b5,(short)uVar5 + -0x56ff) & 0xffffffffffffff00) + 0x12afad1cb61942e8
  ;
}



// WARNING: Removing unreachable block (ram,0x0040207c)

long log_size_7_var_005(void)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  uint7 uVar6;
  byte bVar7;
  ulong uVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  ushort uVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  char cVar18;
  uint uVar19;
  long lVar20;
  ushort uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  
  sVar11 = 0;
  while ((0x30bfU >> sVar11 & 1) == 0) {
    sVar11 = sVar11 + 1;
  }
  uVar19 = (int)CONCAT62(0x69b0b67106cf,sVar11) + 1;
  uVar3 = uVar19 >> 1 & 0x7fff;
  uVar16 = (ulong)(uVar19 & 0xffff0000 | uVar3);
  uVar15 = 0x1f;
  while (0xfc3bfcf2U >> uVar15 == 0) {
    uVar15 = uVar15 - 1;
  }
  bVar2 = (byte)uVar15 & 0x3f;
  uVar6 = (uint7)(((ulong)CONCAT11('M' - (0xcf40 < (ushort)uVar15),((uVar19 & 1) != 0) + '&') *
                   0x2f2d6e589b414e85 << bVar2) >> 8) |
          (uint7)((((ulong)(byte)(-0x49 << ((byte)uVar15 & 0x1f)) | 0x78037afcab0b0c00) >>
                  0x40 - bVar2) >> 8);
  uVar19 = (uVar15 & 0xff00) << 8;
  uVar8 = (ulong)(uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | uVar19 | uVar15 << 0x18);
  bVar7 = (byte)(uVar15 >> 0x18);
  bVar2 = bVar7 & 0x1f;
  bVar7 = bVar7 & 0x1f;
  uVar22 = -0x15582fbc << bVar7 |
           (uint)(CONCAT14((uVar6 & 0x800000) != 0,0xeaa7d044) >> 0x21 - bVar7);
  bVar2 = (char)((((ushort)uVar6 & 0x3f) << 8) /
                (ushort)(byte)((byte)((ulong)((uint)(0x16b850000 << bVar2) |
                                             (uint)(0x16b850000 >> 0x21 - bVar2)) >> 8) | 0xc0)) +
          '{' >> 7;
  uVar23 = (ulong)uVar22 - 0x986008fb;
  lVar20 = uVar16 + uVar8 + (ulong)(uVar22 < 0x986008fb);
  uVar1 = uVar8 + 0x6c5a0afc;
  sVar11 = (short)((uint)bVar2 * 0x100 * (uint)(ushort)lVar20 >> 0x10);
  uVar21 = (ushort)uVar23;
  if (sVar11 == 0) {
    uVar8 = (ulong)(uVar19 | uVar15 << 0x18 | (uint)uVar21);
  }
  uVar17 = uVar1 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar1 + sVar11 + 1);
  cVar18 = (char)lVar20;
  uVar12 = (ushort)(byte)(uVar8 | 0xc0);
  uVar8 = (-0xa5347351 - (uVar8 | 0xc0)) -
          (ulong)(0xffffffff575e8637 < uVar17 || 0xfffffffffffffffe < uVar17 + 0xa8a179c8);
  uVar1 = (ulong)(((uint)uVar23 & 0xffff0000 |
                  (uint)(ushort)((uVar21 & 0x3fff) / uVar12 & 0xff | (uVar21 & 0x3fff) % uVar12 << 8
                                )) * 0x738);
  uVar1 = uVar1 * uVar1;
  iVar13 = (int)(uVar1 >> 0x20);
  cVar9 = (char)(uVar1 >> 0x20);
  bVar7 = (byte)uVar8;
  uVar1 = (uVar1 & 0xffffffff) - 0xa8a179c8;
  uVar16 = CONCAT62((int6)(short)(uVar16 >> 0x10),(short)uVar3 + 0x1f21);
  if ((bVar2 & 4) == 0) {
    uVar16 = (long)cVar18 & 0xffffffff;
  }
  cVar5 = (char)uVar1;
  uVar4 = CONCAT44(0x8ce5fc69,iVar13) & 0xffffffffffff0000;
  cVar10 = cVar9 * '\x02';
  bVar2 = (bVar7 & 0x1f) % 0x11;
  uVar12 = CONCAT11(((char)(uVar8 >> 8) - cVar9) - (iVar13 != 0),cVar10);
  uVar15 = CONCAT22((undefined2)(cVar5 >> 7),
                    ((short)cVar5 << bVar2 |
                    (ushort)(CONCAT12((uVar1 >> 0x3d & 1) != 0,(short)cVar5) >> 0x11 - bVar2)) +
                    0xb58) & ((uint)uVar4 | (uint)uVar12);
  uVar14 = (ushort)uVar15;
  uVar14 = uVar14 >> (bVar7 & 0xf) | uVar14 << 0x10 - (bVar7 & 0xf);
  uVar15 = uVar15 & 0xffff0000;
  uVar24 = (ulong)((uint)((SBORROW8(-0xf5981f22,uVar16) != false) !=
                         (long)(-0xf5981f22 - uVar16) < 0) | 0xa8a17900);
  if (0xffffffff0a67e0de >= uVar16) {
    uVar24 = uVar16;
  }
  return (uVar1 & 0xffffffffffffff00 | (ulong)(byte)(cVar10 + '^' + (0xffffffff0a67e0de < uVar16)))
         + ((ulong)(uVar15 | (ushort)(uVar14 & 0xff |
                                     (ushort)(byte)~(byte)((ulong)(uVar15 | uVar14) >> 8) << 8)) ^
           0xe331) + (uVar8 & 0xffffffffffff00ff) +
         (uVar4 | (ulong)uVar12 & 0xffffffffffffff00 | uVar1 & 0xff) + uVar16 +
         (ulong)(uint)(int)(short)((ushort)(uVar3 >> 4) | (ushort)(uVar3 << 0xd)) +
         (uVar17 + 0xa8a179c9 & 0xffffffffffffff00 |
         (ulong)(byte)((char)(uVar17 + 0xa8a179c9) + 0x32)) + (-0xf5981f22 - uVar16) +
         CONCAT71((undefined7)(cVar18 >> 7),cVar18 >> (bVar7 & 0x1f)) +
         (ulong)((uint)lVar20 >> 1 | 0x80000000) +
         (uVar23 & 0xffffffffffff0000 | (ulong)(uVar21 >> (bVar7 & 0x1f))) +
         (ulong)((uint)(ushort)((ushort)lVar20 * -0x57f4) | 0xedf0000) + uVar24 + -0x3ea11f716;
}



long log_size_7_var_006(void)

{
  short sVar1;
  int iVar2;
  short sVar3;
  ulong uVar4;
  ushort uVar5;
  byte bVar6;
  ushort uVar7;
  char cVar11;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar12;
  byte bVar13;
  sbyte sVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  byte bVar29;
  ushort uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  ushort uVar34;
  ulong uVar35;
  bool in_PF;
  
  uVar35 = 0x54c786e03cac826f;
  if (!in_PF) {
    uVar35 = 0x54c786e03cac86b2;
  }
  uVar17 = (int)(short)((ushort)!in_PF | 0x3c00) * 0x32fa;
  uVar7 = (ushort)uVar17;
  iVar31 = ((uint)uVar35 & 0x6f28cea8) + 0xb37c14ff;
  uVar19 = (ulong)(byte)((char)uVar35 + 0xa8);
  uVar10 = uVar19 | 0xc3fe67696f28ce00;
  uVar17 = (uVar17 >> 0x10 | 0x69180000) + 0xc5aa161;
  uVar19 = uVar19 | 0xce00;
  uVar25 = (uint)uVar19 | 0xb31d0000;
  sVar15 = 0x7cca;
  if ((short)uVar10 != 0) {
    sVar15 = (short)uVar7 >> 0xf;
  }
  iVar2 = iVar31 + uVar25;
  uVar32 = iVar2 + 1;
  uVar4 = (ulong)uVar7 & 0xffffffffffffff00;
  bVar12 = (byte)sVar15;
  uVar22 = 0x4a709c4aU >> (bVar12 & 0x1f) | 0x2785 << 0x20 - (bVar12 & 0x1f);
  uVar24 = (ushort)uVar32 >> 6;
  uVar30 = uVar24 | (ushort)uVar32 << 10;
  uVar23 = (ulong)(uVar32 & 0xffff0000 | (uint)uVar30);
  cVar11 = (char)(uVar4 >> 8);
  uVar18 = (uVar17 & 0xffff0000 | (uint)(ushort)(CONCAT11(in_PF,(char)((ulong)uVar7 >> 8) >> 7) + 1)
           ) + 0x10e3635b;
  uVar27 = (ulong)(ushort)((ushort)uVar19 ^ 0xca31) | 0x14a8e4db31dc000;
  uVar16 = (uint)(ushort)uVar27;
  uVar25 = CONCAT22((short)uVar18,
                    (ushort)uVar4 |
                    (ushort)((uVar32 == 0 ||
                             (SCARRY4(iVar31,uVar25) != SCARRY4(iVar2,1)) != (int)uVar32 < 0) |
                            bVar12)) & 0x3fffffff;
  uVar8 = (ushort)(uVar25 / uVar16);
  uVar18 = uVar18 & 0xffff0000 | uVar25 % uVar16;
  sVar3 = ((short)uVar35 + (short)uVar17) * 0x1000;
  uVar17 = (uint)(ushort)(0x411c >> (bVar12 & 0x1f)) | 0x2d7f0000;
  uVar16 = uVar17 + 0x539d191d;
  uVar25 = uVar22 << 7;
  uVar22 = uVar25 | (uint)(CONCAT14(0xaca56934 < uVar18,uVar22) >> 0x1a);
  uVar19 = (ulong)(uVar18 + 0x535a96cb & 0xffff0000 | (uint)(ushort)((short)uVar8 >> 0xf)) | 0xc0;
  uVar8 = uVar8 & 0x3fff;
  uVar7 = (ushort)(byte)uVar19;
  uVar5 = uVar8 / uVar7 & 0xff;
  if (0x27fdec15 < uVar22) {
    uVar17 = (uint)uVar19;
  }
  sVar1 = sVar3 + uVar30;
  uVar34 = sVar1 + (ushort)(uVar22 < 0x27fdec15);
  uVar18 = 0xe0000278;
  if (SCARRY2(sVar3,uVar30) != SCARRY2(sVar1,(ushort)(uVar22 < 0x27fdec15))) {
    uVar18 = uVar22;
  }
  if (uVar34 != 0) {
    uVar34 = (ushort)uVar16;
  }
  bVar13 = (byte)uVar16;
  uVar9 = (uint)(ushort)(uVar5 | uVar8 % uVar7 << 8) & 0xffffff00 | 0x2c8c0000 |
          (uint)(byte)((char)uVar5 >> (bVar13 & 0x1f));
  uVar21 = -(int)(char)((ushort)sVar15 >> 8) & 0xffffff00U | (uint)(byte)('\0' << (bVar13 & 0x1f));
  uVar26 = (uint)uVar27 | uVar9;
  uVar21 = uVar21 >> (bVar13 & 0x1f) | uVar21 << 0x20 - (bVar13 & 0x1f);
  bVar12 = (bVar13 & 0x1f) % 9;
  bVar20 = (byte)uVar21;
  uVar33 = (uint)uVar10;
  uVar28 = uVar33 ^ (uint)(uVar9 == uVar33) * (uVar33 ^ uVar18);
  uVar9 = uVar9 ^ (uint)(uVar9 == uVar33) * (uVar9 & uVar28);
  uVar19 = uVar23 - 0x75544e16;
  bVar6 = (byte)uVar9;
  bVar29 = (byte)uVar19;
  bVar29 = bVar29 ^ (bVar6 == bVar29) * (bVar29 ^ (byte)uVar24);
  uVar33 = uVar17 + 0xfa221152 + (uint)(bVar6 < bVar29);
  uVar24 = (short)uVar26 << 1 | (ushort)uVar28 >> 0xf;
  uVar10 = ((ulong)uVar9 & 0xffffffffffffff00 | 0x9566171b00000000 |
           (ulong)(byte)(bVar6 ^ (bVar6 == bVar29) * (bVar6 & bVar29))) * (ulong)uVar33;
  sVar14 = (sbyte)((ulong)uVar16 & 0xffffffffffffff0f);
  uVar7 = (short)cVar11 << sVar14 | uVar24 >> 0x10 - sVar14;
  uVar17 = CONCAT22((undefined2)(cVar11 >> 7),uVar7);
  if ((uVar17 & uVar33) == 0) {
    uVar23 = (ulong)(uVar32 & 0xffff0000 | 0x8107);
  }
  uVar25 = uVar25 & 0xffff0000 | (uint)(ushort)((short)uVar22 + 1);
  cVar11 = (char)uVar7;
  return (uVar10 ^ (uVar10 >> 0x33 & 1) << 0x33) +
         (ulong)(uVar21 & 0xffffff00 | (uint)(byte)(bVar20 << bVar12 | bVar20 >> 9 - bVar12)) +
         ((ulong)uVar16 & 0xffffffffffffff0f) + (ulong)(uVar25 + 0xac0cafc7 + (int)uVar23 * 2) +
         (ulong)uVar25 * 0x20 +
         (ulong)(uVar17 & 0xffffff00 | (uint)(byte)(cVar11 << 1 | cVar11 < '\0')) + uVar23 +
         (ulong)(uVar26 & 0xffff0000 | (uint)uVar24) +
         (ulong)((uVar18 >> (bVar13 & 0x1f)) >> sVar14) +
         (((ulong)uVar28 | 0xc3fe676900000000) >> 0x14) +
         (uVar19 & 0xffffffffffffff00 | (ulong)bVar29) + (ulong)uVar33 +
         CONCAT62(0x5817c06b4a88,(short)uVar10 << 0xe) +
         ((uVar35 & 0xffffffffffff0000 | (ulong)uVar34) << (bVar13 & 0x3f)) + -0x7cf42993533f33ff;
}



// WARNING: Removing unreachable block (ram,0x004026b9)
// WARNING: Removing unreachable block (ram,0x004026ee)

long log_size_7_var_007(void)

{
  ulong uVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  
  sVar2 = 0xf;
  while (0xb837U >> sVar2 == 0) {
    sVar2 = sVar2 + -1;
  }
  uVar11 = (uint)(ushort)(sVar2 - 0xd8f) | 0xbba50000;
  uVar3 = (long)(int)uVar11 * -0xe43f;
  uVar7 = (uint)(uVar3 >> 0x20);
  if (uVar7 != 0 && uVar7 != 0xffffffff) {
    uVar11 = 0xbba575e4;
  }
  uVar1 = (uVar3 & 0xffffffff | 0xffffffff00000000) + 0xf447702e67d38a1c;
  uVar8 = (short)(uVar3 >> 0x20) + 0x75e5;
  uVar6 = (uVar7 & 0xff) + 0x9a1e5e40;
  uVar5 = (int)uVar1 - 1;
  bVar9 = (byte)uVar6 & 0x1f;
  uVar10 = 0x26da242fU >> bVar9 | -0x616bcf2a << 0x20 - bVar9;
  bVar9 = (byte)uVar10;
  iVar4 = (uint)(ushort)(short)(char)uVar5 * (uint)uVar8;
  return (uVar1 & 0xffffffff00000000 | (ulong)uVar5 & 0xffffffffffff0000 | (ulong)(ushort)iVar4) +
         (ulong)uVar7 +
         (ulong)((uVar6 & 0xffffff00 | (uint)(byte)((byte)uVar6 - 0x22)) << 7 | uVar6 >> 0x19) +
         (ulong)(ushort)((uint)iVar4 >> 0x10) + ((ulong)uVar8 | 0xbb88fd1982c0000) +
         (ulong)(uVar10 & 0xffff0000 | (uint)(ushort)((ushort)(byte)(bVar9 - 0x12) << 10 | 0x1df)) +
         (ulong)(uVar11 * 0x20000000 | 0xbe17dcc) + ((ulong)bVar9 | 0x1226daad5ac8c500) +
         0x5a195aff19bf003b;
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
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  
  auVar4 = ZEXT816(0x4af05981) * ZEXT816(0x71dc7511);
  bVar16 = SUB168(auVar4,0) == SUB168(auVar4 >> 0x40,0);
  bVar7 = SUB161(auVar4 >> 0x40,0);
  bVar10 = SUB161(auVar4,0);
  bVar7 = (bVar10 ^ bVar16 * (bVar10 & (bVar7 ^ bVar16 * (bVar7 ^ bVar10)))) * -0x65;
  bVar10 = (bVar7 == 0x9b) * -0x76 ^ 0x9b;
  uVar8 = (ushort)(byte)((bVar7 ^ (bVar7 == 0x9b) * (bVar7 & bVar10)) << (bVar10 & 0xf)) * 0xb;
  bVar7 = (byte)uVar8;
  uVar6 = CONCAT14(bVar7,0x71dc7510) & 0x1ffffffff;
  lVar3 = 0x3f;
  while (0x17a769f2396c720bU >> lVar3 == 0) {
    lVar3 = lVar3 + -1;
  }
  uVar1 = 0;
  while ((0x9cfdU >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  uVar9 = uVar8 & 0xff00 | (ushort)(byte)(bVar7 >> 1 | bVar7 << 7) & 0xffdf;
  uVar5 = (uint)((ulong)uVar1 | 0x112c0000) >> 5;
  lVar3 = ((ulong)uVar1 | 0x112c0000) * 8 + 0x1e0a;
  uVar15 = (ulong)((uint)(uVar9 >> 2) << 0x1b | uVar5) ^ 2;
  uVar14 = 0xc0000000;
  if ((char)((byte)uVar5 ^ 2) < '\x01') {
    uVar14 = 0xfffffffffc94a793;
  }
  uVar12 = (ulong)((((uint)uVar6 | 1) << 0x19 | (uint)(uVar6 >> 8) & 0xffff0000 |
                   (uint)(byte)((byte)lVar3 ^ 0xfe)) >> 1);
  uVar11 = (ulong)(uint)(int)(char)((ulong)uVar8 >> 8);
  if ((char)((byte)lVar3 & (byte)uVar15) < '\0') {
    uVar11 = uVar12;
  }
  iVar2 = 0x1f;
  if ((uint)lVar3 != 0) {
    while ((uint)lVar3 >> iVar2 == 0) {
      iVar2 = iVar2 + -1;
    }
  }
  uVar13 = uVar14 | 0x271a;
  if ((long)uVar13 < 0) {
    uVar13 = uVar14 & 0xffffffffffff0000 | 0xff;
  }
  return (((ulong)(ushort)((uVar9 >> 1 ^ (ushort)(uVar6 >> 8)) + 0xbb) & 0xff | 0x16e4e25746860000)
         ^ 0x61ff) +
         (uVar11 & 0xffffffffffff0000 |
         (ulong)CONCAT11((char)((ulong)(ushort)((short)uVar11 >> 0x13) >> 8) << 1,
                         (char)(uVar11 >> 8) >> 0xb)) + uVar12 + uVar13 + lVar3 + uVar14 + uVar15 +
         0x2fb31da59e577891;
}



// WARNING: Removing unreachable block (ram,0x00402c24)
// WARNING: Removing unreachable block (ram,0x00402cef)
// WARNING: Removing unreachable block (ram,0x00402bf7)

long log_size_7_var_009(void)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  ushort uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  bVar4 = SUB161((ZEXT816(0x4aa373170f760cf) << 0x40 | ZEXT816(0x826ea9c85d9384ee)) /
                 ZEXT816(0xce920700fc2712f1),0);
  uVar8 = (uint)bVar4 << 8 | 0xb3cded8a;
  uVar9 = ~((int)(((ulong)(((uint)bVar4 << 0x1c | 0xfc271) + 0x424f448e) & 0xffffffffffff2e7b) >> 1)
            * 2 + 0x88fe9b8dU);
  uVar3 = (int)(short)uVar9 * -0x3784;
  uVar6 = (ushort)(uVar3 >> 0x10);
  uVar10 = (ulong)uVar6 | 0xffff0000;
  lVar7 = uVar10 + 0x6fff73ff;
  uVar9 = uVar9 & 0xffffff00 | 1;
  uVar5 = (ulong)(uVar3 & 0xffff | 0xaf120000);
  if (SCARRY8(uVar10,0x6fff73ff) == false) {
    uVar5 = 0x6fff73ff;
  }
  uVar10 = ((ulong)uVar6 & 0xff) - 0x438adb9d;
  uVar5 = CONCAT62((uint6)(uVar5 >> 0x11),(ushort)(uVar5 >> 1) >> 1);
  uVar1 = 0x98d4 - ((short)uVar8 + 0x53bd);
  lVar2 = 0;
  if (uVar5 != 0) {
    while ((uVar5 >> lVar2 & 1) == 0) {
      lVar2 = lVar2 + 1;
    }
  }
  return (uVar5 & 0xffffffffffffff00 | (ulong)(-1 < (short)lVar7)) + (ulong)uVar8 + (ulong)uVar9 +
         (uVar10 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar10 >> 1 | (short)uVar9 << 0xf))
         + (ulong)((uint)(uVar6 != 0 && uVar6 != 0xffff) + 0x5c665f85) + lVar2 +
         ((ulong)(ushort)(uVar1 * 2 | uVar1 >> 0xf) | 0x9f3e0000) + lVar7 + -0x3908ad9bf;
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


