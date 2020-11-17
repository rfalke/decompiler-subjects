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
    DT_INIT_ARRAY=25,
    DT_CONFIG=1879047930,
    DT_RELASZ=8,
    DT_INIT=12,
    DT_HASH=4,
    DT_NULL=0,
    DT_GNU_CONFLICT=1879047928,
    DT_FLAGS=30,
    DT_AUXILIARY=2147483645,
    DT_GNU_HASH=1879047925,
    DT_DEBUG=21,
    DT_RELCOUNT=1879048186,
    DT_RELR=36,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_RELENT=19,
    DT_REL=17,
    DT_DEPAUDIT=1879047931,
    DT_RUNPATH=29,
    DT_GNU_PRELINKED=1879047669,
    DT_POSFLAG_1=1879047677,
    DT_VERDEF=1879048188,
    DT_ANDROID_RELRENT=1879040003,
    DT_MOVETAB=1879047934,
    DT_RPATH=15,
    DT_RELACOUNT=1879048185,
    DT_RELSZ=18,
    DT_SYMINSZ=1879047678,
    DT_VERNEED=1879048190,
    DT_ANDROID_RELASZ=1610612754,
    DT_FINI_ARRAY=26,
    DT_TEXTREL=22,
    DT_ANDROID_RELSZ=1610612752,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_VERNEEDNUM=1879048191,
    DT_STRTAB=5,
    DT_NEEDED=1,
    DT_PLTPADSZ=1879047673,
    DT_ANDROID_REL=1610612751,
    DT_FLAGS_1=1879048187,
    DT_ANDROID_RELR=1879040000,
    DT_SYMINFO=1879047935,
    DT_SYMTAB=6,
    DT_TLSDESC_GOT=1879047927,
    DT_JMPREL=23,
    DT_ANDROID_RELA=1610612753,
    DT_SYMINENT=1879047679,
    DT_SONAME=14,
    DT_FINI=13,
    DT_MOVEENT=1879047674,
    DT_RELRENT=37,
    DT_FINI_ARRAYSZ=28,
    DT_PREINIT_ARRAYSZ=33,
    DT_VERSYM=1879048176,
    DT_MOVESZ=1879047675,
    DT_RELAENT=9,
    DT_PLTRELSZ=2,
    DT_RELA=7,
    DT_VERDEFNUM=1879048189,
    DT_PLTREL=20,
    DT_CHECKSUM=1879047672,
    DT_TLSDESC_PLT=1879047926,
    DT_PLTPAD=1879047933,
    DT_RELRSZ=35,
    DT_BIND_NOW=24,
    DT_PREINIT_ARRAY=32,
    DT_SYMBOLIC=16,
    DT_GNU_LIBLIST=1879047929,
    DT_PLTGOT=3,
    DT_STRSZ=10,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_INIT_ARRAYSZ=27,
    DT_AUDIT=1879047932,
    DT_SYMENT=11,
    DT_ANDROID_RELRSZ=1879040001
} Elf64_DynTag;

typedef enum Elf_ProgramHeaderType {
    PT_GNU_STACK=1685382481,
    PT_NOTE=4,
    PT_INTERP=3,
    PT_PHDR=6,
    PT_LOAD=1,
    PT_NULL=0,
    PT_DYNAMIC=2,
    PT_SHLIB=5,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
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
    SHT_SYMTAB=2,
    SHT_GNU_versym=1879048191,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_LIBLIST=1879048183,
    SHT_FINI_ARRAY=15,
    SHT_GROUP=17,
    SHT_CHECKSUM=1879048184,
    SHT_SHLIB=10,
    SHT_ANDROID_RELA=1610612738,
    SHT_NOBITS=8,
    SHT_GNU_HASH=1879048182,
    SHT_REL=9,
    SHT_SYMTAB_SHNDX=18,
    SHT_HASH=5,
    SHT_PROGBITS=1,
    SHT_ANDROID_REL=1610612737,
    SHT_NULL=0,
    SHT_GNU_verneed=1879048190,
    SHT_INIT_ARRAY=14,
    SHT_NOTE=7,
    SHT_PREINIT_ARRAY=16,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_SUNW_COMDAT=1879048187,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
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
  
  uVar1 = 0;
  while ((0x909U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
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



// WARNING: Control flow encountered bad instruction data

void log_size_7_var_001(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
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
  
  uVar7 = 0x3f;
  while (0xc1df7e66U >> uVar7 == 0) {
    uVar7 = uVar7 - 1;
  }
  uVar7 = uVar7 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar7 << 1);
  auVar2 = ZEXT816(uVar7 | 0xc000000000000000);
  auVar3 = ZEXT416((uint)(((ulong)(CONCAT18(1,0x714be20e) >> 0x40) | 0x1e297c41c) << 0xf) | 0x78a5)
           << (undefined  [16])0x41 | ZEXT416(0xb7eda00);
  auVar4 = auVar3 / auVar2;
  auVar3 = auVar3 % auVar2;
  uVar6 = (uint)uVar7 ^ 0x8000;
  lVar1 = 0;
  while ((0xf800U >> lVar1 & 1) == 0) {
    lVar1 = lVar1 + 1;
  }
  bVar5 = SUB161(auVar4,0);
  return CONCAT62(SUB166(auVar4 >> 0x10,0),CONCAT11(SUB161(auVar4 >> 8,0) ^ bVar5,bVar5)) +
         CONCAT62(SUB166(auVar3 >> 0x10,0),
                  CONCAT11(SUB161(auVar3 >> 8,0) - 0x10U | bVar5,SUB161(auVar3,0))) +
         ((ulong)(ushort)((short)uVar6 + 0x2f81) | 0x7200000000200000) +
         (ulong)(uVar6 & 0xffff0000 | 0x2f81) + lVar1 * -0x598231c5 + 0x4e00009371266bd0;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00401ad0)
// WARNING: Removing unreachable block (ram,0x00401bbd)

void log_size_7_var_003(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
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
    while (uVar6 >> lVar2 == 0) {
      lVar2 = lVar2 + -1;
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



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x0040207c)

void log_size_7_var_005(void)

{
  short sVar1;
  int iVar2;
  
  sVar1 = 0;
  while ((0x30bfU >> sVar1 & 1) == 0) {
    sVar1 = sVar1 + 1;
  }
  iVar2 = 0x1f;
  while (0xfc3bfcf2U >> iVar2 == 0) {
    iVar2 = iVar2 + -1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x0040231f)
// WARNING: Removing unreachable block (ram,0x00402328)

void log_size_7_var_006(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x004026a0)
// WARNING: Removing unreachable block (ram,0x004026ee)

void log_size_7_var_007(void)

{
  short sVar1;
  
  sVar1 = 0xf;
  while (0xb837U >> sVar1 == 0) {
    sVar1 = sVar1 + -1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
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
  lVar3 = 0x3f;
  while (0x17a769f2396c720bU >> lVar3 == 0) {
    lVar3 = lVar3 + -1;
  }
  uVar1 = 0;
  while ((0x9cfdU >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
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
    while ((uint)lVar3 >> iVar2 == 0) {
      iVar2 = iVar2 + -1;
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
    while ((uVar5 >> lVar2 & 1) == 0) {
      lVar2 = lVar2 + 1;
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


