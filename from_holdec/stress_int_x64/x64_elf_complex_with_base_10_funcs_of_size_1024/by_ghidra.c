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
  
  lVar1 = log_size_10_var_000();
  lVar2 = log_size_10_var_001();
  lVar3 = log_size_10_var_002();
  lVar4 = log_size_10_var_003();
  lVar5 = log_size_10_var_004();
  lVar6 = log_size_10_var_005();
  lVar7 = log_size_10_var_006();
  lVar8 = log_size_10_var_007();
  lVar9 = log_size_10_var_008();
  lVar10 = log_size_10_var_009();
  if (lVar1 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_complex_with_base_10_funcs_of_size_1024.c",0x1f,
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



// WARNING: Removing unreachable block (ram,0x00401be5)
// WARNING: Removing unreachable block (ram,0x004013ac)
// WARNING: Removing unreachable block (ram,0x0040125d)
// WARNING: Removing unreachable block (ram,0x00401364)
// WARNING: Removing unreachable block (ram,0x0040167f)
// WARNING: Removing unreachable block (ram,0x00401f26)
// WARNING: Removing unreachable block (ram,0x00401740)
// WARNING: Removing unreachable block (ram,0x00401378)
// WARNING: Removing unreachable block (ram,0x00401390)
// WARNING: Removing unreachable block (ram,0x004013c4)

long log_size_10_var_000(void)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  uint3 uVar5;
  unkuint9 Var6;
  uint uVar7;
  uint5 uVar8;
  char cVar9;
  short sVar10;
  char cVar13;
  ushort uVar11;
  ulong uVar12;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint6 uVar18;
  byte bVar19;
  char cVar20;
  ushort uVar21;
  ushort uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  short sVar26;
  uint uVar27;
  ulong uVar28;
  ushort uVar29;
  uint uVar30;
  ulong uVar31;
  byte bVar32;
  uint uVar33;
  ulong uVar34;
  byte bVar35;
  uint uVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  byte bVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  ushort uVar44;
  short sVar45;
  ulong uVar46;
  long lVar47;
  byte bVar48;
  byte bVar49;
  ulong uVar50;
  ushort uVar51;
  ushort uVar52;
  uint uVar53;
  uint uVar54;
  long lVar55;
  ulong uVar56;
  bool bVar57;
  bool bVar58;
  char in_AF;
  
  for (uVar14 = 0; (0x419U >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
  }
  uVar21 = ~(1 << (uVar14 & 0xf)) & 0x7744;
  uVar12 = (ulong)(uVar21 | 0x6f160000);
  bVar32 = (byte)uVar21;
  iVar16 = (uint)bVar32 * 0xb95c;
  auVar2 = ZEXT416((uint)(CONCAT22(0x1140,(short)((uint)iVar16 >> 0x10)) << 0xc)) << 0x40 |
           ZEXT216((ushort)(short)(char)iVar16);
  auVar3 = auVar2 / ZEXT816(0xe8afda86c9dbcad7);
  auVar2 = auVar2 % ZEXT816(0xe8afda86c9dbcad7);
  uVar54 = SUB164(auVar3,0) >> 0xb;
  uVar41 = uVar54 | 0x5ae00000;
  uVar17 = SUB168(auVar3,0) & 0xffffffffffff9b0e;
  cVar13 = (char)uVar14 + 'T';
  cVar9 = cVar13 + (char)uVar54;
  uVar38 = 0xffffffff;
  if (cVar9 != -1 &&
      (SCARRY1(cVar13,(char)uVar54) != SCARRY1(cVar9,'\x01')) == (char)(cVar9 + '\x01') < '\0') {
    uVar38 = uVar41;
  }
  uVar5 = CONCAT12((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0,0xd8b1) >> 5;
  uVar54 = uVar54 | 0x25c01600 | SUB164(auVar2,0) >> 1 | 0x80000000;
  auVar2 = ZEXT816(uVar17) * ZEXT816(uVar17);
  bVar57 = SUB168(auVar2 >> 0x40,0) != 0;
  if (bVar57) {
    uVar41 = SUB164(auVar2,0);
  }
  uVar14 = (ushort)(CONCAT12(bVar57,0x4e05) >> 0xc) | 0xc0a0;
  bVar35 = (byte)uVar14;
  uVar17 = uVar12 & 0xffffffffffffff00 | (ulong)(byte)-bVar32;
  sVar10 = SUB162(auVar2,0);
  lVar47 = (ulong)uVar54 + 0x5e0e92a2 + ((ulong)uVar14 | 0xffffffff8c1f0000) * 2;
  uVar30 = (uint)(0x4000000000000 >> (bVar35 & 0x3f)) | (uint)(uVar17 << 0x40 - (bVar35 & 0x3f));
  uVar28 = (ulong)uVar38 ^ 1 << ((ulong)(uint)(int)sVar10 & 0x3f);
  uVar14 = (ushort)uVar17;
  uVar17 = (ulong)(ushort)(uVar14 >> (bVar35 & 0xf) | uVar14 << 0x10 - (bVar35 & 0xf));
  uVar41 = uVar41 << (bVar35 & 0x1f) | uVar30 >> 0x20 - (bVar35 & 0x1f);
  uVar44 = 0xb95c >> (bVar35 >> (bVar35 & 0x1f) & 0x1f);
  bVar48 = (byte)(((ulong)((int)sVar10 & 0xffU |
                          (uint)(uint3)(int3)(char)((uint)(int)sVar10 >> 8) << 8) | 0xbc) >> 1);
  uVar24 = (ulong)(ushort)(((ushort)uVar5 & 0xff00 | 0x1000 |
                           (ushort)(byte)((byte)uVar5 >> (bVar35 & 0x1f))) + 0x5a87);
  lVar55 = (((ulong)(CONCAT18(1,0xe7bd7ff7) >> 0x1d) | 0x7bd7ff7000000000) >> 0xc |
           (ulong)(ushort)((((ushort)uVar41 >> ((ushort)lVar47 & 0xf) & 1) != 0) + 0xaa03)) +
           0x497d81b2;
  uVar38 = ((ushort)lVar55 < (ushort)(short)(char)bVar48) + 0xcd34e971;
  uVar34 = ((uVar24 | 0x3fffffffdf530000) << 0x15 |
           ((ulong)(CONCAT18((uVar41 & 1) != 0,uVar24) >> 8) | 0x3fffffffdf5300) >> 0x24) >>
           (bVar48 & 0x3f) | (ulong)(uVar41 >> 1) << 0x40 - (bVar48 & 0x3f);
  bVar32 = (char)bVar48 >> 7;
  uVar53 = ((uint)lVar55 & 0xffff0000 | (uint)(ushort)((char)bVar48 + -0x1e83 + (short)(char)bVar48)
           ) & ~(1 << (uVar38 & 0x1f));
  uVar21 = (ushort)uVar34 >> (bVar32 & 0x1f);
  uVar25 = (ulong)(uVar38 & 0xac5a4337);
  bVar40 = (char)(uVar41 >> 1) + 1;
  uVar24 = ((uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar17 & 0xff00) << 0x28 |
           uVar17 << 0x38) >> (bVar32 & 0x3f);
  uVar14 = (short)uVar54 + 0x3a2c;
  uVar31 = (ulong)(uVar30 << 2 | 2) & 0xffffffffffffffbb;
  bVar48 = (byte)uVar14;
  bVar35 = bVar48 + 0x6f;
  uVar17 = (ulong)(uVar54 & 0xffff0000 | uVar14 & 0xffffff00 | (uint)bVar35);
  uVar12 = (ulong)(byte)(((char)bVar35 < '\0') << 7 | (bVar35 == 0) << 6 | in_AF << 4 |
                         ((POPCOUNT(bVar35) & 1U) == 0) << 2 | 2U | bVar48 < 0x91) << 8;
  uVar37 = uVar17 ^ (ulong)(uVar12 == uVar17) *
                    (uVar17 ^ (uVar28 & 0xffffffffffffff00 |
                              (ulong)(byte)((char)uVar28 >> (bVar32 & 0x1f))));
  uVar17 = (ulong)(uVar12 != uVar17) * (uVar12 ^ uVar37);
  uVar12 = uVar12 ^ uVar17;
  uVar38 = (int)uVar24 * -0x3e9812ee;
  bVar32 = (byte)uVar38;
  lVar55 = (long)(ulong)CONCAT31((uint3)(uVar41 >> 9),bVar40) >> (bVar32 & 0x3f);
  bVar57 = (uVar53 & 1) != 0;
  uVar51 = (ushort)uVar53 >> 1 | (ushort)bVar57 << 0xf;
  uVar14 = CONCAT11((char)(uVar12 >> 8) - bVar57,(char)uVar17);
  uVar52 = uVar51 ^ (ushort)(uVar14 == uVar51) * (uVar51 ^ (ushort)lVar55);
  uVar54 = uVar53 & 0xffff0000 | (uint)uVar52;
  uVar14 = uVar14 ^ (ushort)(uVar14 != uVar51) * (uVar14 ^ uVar52);
  uVar17 = uVar12 & 0xffffffffffff0000 | (ulong)uVar14;
  bVar32 = bVar32 & 0x1f;
  uVar54 = uVar54 >> bVar32 | uVar54 << 0x20 - bVar32;
  uVar51 = (short)uVar54 * 0x70f4;
  uVar12 = (ulong)(uVar54 & 0xffff0000 | (uint)uVar51);
  if ((byte)((byte)uVar31 | 0xb8) != 0) {
    uVar38 = (uint)bVar40 |
             ((uint)(uVar34 >> 8) & 0xffffff00 |
             (uint)(byte)((ushort)((uVar21 & 0xff00 | (ushort)(byte)((char)uVar21 >> 9)) << 1) >> 8)
             ) << 8;
  }
  uVar51 = (ushort)uVar37 | uVar51;
  uVar37 = uVar37 & 0xffffffffffff0000 | (ulong)uVar51;
  uVar54 = (uVar38 & 0xffffff00 | (uint)(byte)((char)uVar38 >> 1)) + 0x9e4cf7e7;
  bVar48 = (byte)uVar54;
  uVar56 = uVar12 ^ (uVar17 == uVar12) * uVar12;
  uVar34 = (uVar28 & 0xffffffffffff0000) >> (bVar48 & 0x3f) | uVar25 << 0x40 - (bVar48 & 0x3f);
  uVar38 = (uint)CONCAT62((int6)(lVar47 >> 0x11),(short)(char)lVar55) | 0xc0000000;
  uVar17 = (ulong)(ushort)((short)uVar14 >> 0xf) << 0x20 |
           (uVar17 ^ (ulong)(uVar17 != uVar12) * (uVar17 ^ uVar56)) & 0xffffffff;
  uVar12 = uVar17 / uVar38;
  uVar28 = uVar12 & 0xffffffff;
  uVar31 = (uVar31 | 0xb8) & uVar24;
  bVar32 = (byte)(uVar28 >> 8);
  uVar54 = uVar54 & 0xffff00ff;
  if ((uVar38 >> (bVar48 & 0x1f) | 0 << 0x20 - (bVar48 & 0x1f)) == 0x50cd4ee5) {
    uVar25 = (ulong)bVar32;
  }
  uVar41 = 0x1f;
  if ((uint)uVar31 != 0) {
    for (; (uint)uVar31 >> uVar41 == 0; uVar41 = uVar41 - 1) {
    }
  }
  uVar53 = (uint)lVar55 & 0xffff0000;
  uVar30 = (uint)uVar56 & 0x1f;
  uVar15 = uVar54 | 1 << uVar30;
  uVar50 = (ulong)(((uint)(0 >> (bVar48 & 0x3f)) & 0x7fff8000) << 1 | (uint)bVar32);
  if ((uVar54 >> uVar30 & 1) != 0 || (uVar34 & 0xd6e32ba3) == 0) {
    uVar50 = uVar31;
  }
  uVar30 = (ushort)((ushort)lVar55 << ((byte)uVar54 & 0x1f)) & 0xffffbfff;
  bVar32 = (byte)uVar15;
  uVar46 = (ulong)(uVar44 & 0xffffff00 | 0xdf4f0000 | (uint)(byte)((char)uVar44 + '\x15' + bVar48))
           << (bVar32 & 0x3f);
  bVar35 = (byte)uVar28;
  bVar35 = bVar35 ^ (bVar35 != 0) * (bVar35 ^ (bVar35 == 0) * bVar32);
  uVar12 = uVar12 & 0xffffff00;
  uVar15 = uVar15 | 0x8e196487;
  auVar2 = ZEXT116(0) << 0x40 | ZEXT416(uVar41 & 0xffffff00 | (uint)(uVar50 + uVar46 == 0));
  auVar3 = auVar2 >> 0x1f;
  bVar32 = (byte)uVar15;
  uVar17 = (uVar17 % (ulong)uVar38 & 0xffffffffffff8bca) << (bVar32 & 0x3f) |
           uVar46 >> 0x40 - (bVar32 & 0x3f);
  bVar40 = SUB161(auVar3,0);
  uVar28 = uVar31 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar31 + 0xaed9);
  uVar17 = (uVar17 & 0xffffffffffff0000 | (ulong)CONCAT11(-(char)(uVar17 >> 8),(char)uVar17)) -
           uVar56;
  bVar32 = (byte)(CONCAT11((char)(uVar15 >> 8) + (char)(uVar12 >> 8) + ((ushort)uVar31 < 0x5127),
                           bVar32) >> (bVar32 & 0x1f));
  uVar54 = (int)uVar28 + (int)(uVar25 & 0xffff);
  bVar48 = bVar32 & 0x3f;
  uVar24 = (uVar24 & 0xffffffffffffff00 |
           (ulong)(SCARRY8(uVar50,uVar46) != SCARRY8(uVar50 + uVar46,0))) << bVar48 |
           (uVar12 | (byte)(bVar35 ^ (bVar35 != bVar40) *
                                     (bVar35 ^ bVar40 ^ (bVar35 == bVar40) * (bVar40 ^ (byte)uVar51)
                                     ))) >> 0x40 - bVar48;
  uVar38 = ((uint)(uVar34 << 0x10) >> 0x11) + 0x7f07364a + ((uint)uVar56 ^ 0x1000000) * 2;
  bVar32 = bVar32 & 0x1f;
  uVar42 = uVar38 >> bVar32 | uVar38 << 0x20 - bVar32;
  bVar48 = (byte)(uVar24 >> 8);
  uVar31 = (ulong)(SUB167(auVar3 >> 8,0) | SUB167((auVar2 << 0x22) >> 8,0)) << 8 | uVar17 & 0xffff;
  bVar32 = (byte)(uVar12 >> 0xb);
  uVar38 = (int)(uVar28 << 0xe) << 1;
  bVar35 = (byte)(uVar25 & 0xffff);
  uVar15 = (uint)uVar46 | uVar53 | uVar30;
  uVar41 = (((uint)uVar24 & 0xffff0000 | (uint)CONCAT11(bVar48 << 5 | bVar48 >> 3,(char)uVar24)) >>
           1) << (bVar32 & 0x1f) |
           ((uint)(uVar17 * 2) & 0xffff0000 | (uint)(ushort)((short)(uVar17 * 2) << 1)) >>
           0x20 - (bVar32 & 0x1f);
  uVar28 = ((uVar37 >> (bVar32 & 0x3f) | uVar37 << 0x40 - (bVar32 & 0x3f)) & 0xbfffffffffffffff) <<
           1;
  uVar53 = uVar53 | (ushort)((short)uVar30 << 1);
  cVar9 = (char)(uVar41 >> 8);
  uVar24 = (ulong)(uVar41 & 0xffff0000 | (uint)CONCAT11(cVar9 << 1,(char)uVar41)) | 0x100;
  uVar14 = CONCAT11((char)((uVar12 >> 0xb) >> 8) << 1,bVar32);
  uVar21 = (ushort)uVar15;
  if ((short)(uVar14 - uVar21) < 0) {
    uVar38 = uVar38 & 0xffff0000 | (uint)(ushort)uVar24;
  }
  uVar14 = CONCAT11((char)((ulong)(ushort)(uVar14 ^ (ushort)(uVar14 != uVar21) *
                                                    (uVar14 ^ uVar21 ^ (ushort)(uVar14 == uVar21) *
                                                                       (uVar21 ^ uVar14))) >> 8),
                    bVar32) >> (bVar32 & 0x3f);
  uVar34 = uVar28 & 0xffffffff;
  uVar30 = (uVar54 >> 2 & 0xffff | (uVar54 >> 0x12) << 0x10) ^ 0x3b68;
  lVar47 = (uVar25 & 0xfb00 |
           (ulong)(byte)((byte)(bVar35 >> 1 | bVar35 << 7) >> 1 | (cVar9 < '\0') << 7)) << 1;
  uVar54 = ((uint)(CONCAT18((long)uVar17 < 0,uVar31) >> (bVar32 & 0x3f)) |
           (uint)(uVar31 << 0x41 - (bVar32 & 0x3f))) + uVar53;
  uVar21 = uVar14 - ((ushort)((long)uVar24 >> 0x14) | (ushort)uVar34);
  uVar17 = ((ulong)(uint6)((int6)(uint6)(ushort)(uVar15 >> 0x10) >> 1) << 0x10) >> 0x1a;
  bVar32 = (byte)((ulong)uVar14 >> 8);
  uVar12 = (ulong)(ushort)(uVar14 & 0xff | (ushort)(byte)(bVar32 << 3 | bVar32 >> 5) << 8);
  uVar24 = uVar12 * (uint)(int)(char)uVar17;
  uVar51 = (ushort)uVar30 + 0x991b;
  cVar9 = (char)uVar34;
  uVar53 = uVar53 * 0x16bf5e28 & 0xffff7fff;
  bVar32 = (char)uVar54 - 1;
  uVar41 = (uint)uVar17;
  if ((uint)uVar24 == uVar41) {
    uVar41 = SUB164(SEXT816((long)uVar12) * SEXT816((long)(ulong)(uint)(int)(char)uVar17) >> 0x40,0)
    ;
    uVar17 = uVar24;
  }
  uVar15 = uVar21 + 0x2fc2a16c;
  uVar43 = (uVar42 & 0xffffff00 | (uint)(byte)((char)uVar42 >> ((byte)uVar21 & 0x1f))) * -0x1c979db6
           - 1;
  uVar42 = (uint)((uVar51 & 1) != 0) << 0x1f;
  uVar39 = (uVar30 & 0xfbff0000 | (uint)uVar51) >> 1 | uVar42;
  bVar48 = (byte)((uVar17 & 0xf) << 4);
  uVar51 = (short)((ushort)(uVar53 >> 0x18) | (ushort)(uVar53 >> 8) & 0xff00) >> (bVar48 & 0x1f);
  uVar44 = (short)(char)bVar32 + 0x7b72;
  uVar21 = (ushort)((uVar54 & 0xffffff00 | (uint)bVar32) >> 1) ^ 0xab68;
  uVar17 = (ulong)uVar38 & 0xffffffffffff0000 | (ulong)(ushort)(short)(char)uVar21;
  cVar13 = (char)((ulong)uVar51 >> 8);
  if ((char)uVar51 < cVar13) {
    uVar39 = (uVar30 & 0xfbfe0000) >> 1 | uVar42 |
             ((0x35cb9feb << (bVar48 & 0x1f) | 0x35cb9febU >> 0x20 - (bVar48 & 0x1f)) & 0xffff0000)
             >> 0xe & 0xffff;
  }
  uVar42 = ((int)lVar47 + 0x66536d27) -
           (uint)(0x43f9 < (ushort)(((ushort)((ushort)uVar28 & 0xff00 |
                                             (ushort)(byte)(cVar9 << 5 |
                                                           (byte)(CONCAT11((ushort)uVar30 < 0x66e5,
                                                                           cVar9) >> 4))) >> 1) +
                                   0x1dd3));
  uVar12 = (uVar43 & 0xffff0000 |
           (uint)(ushort)((byte)~((char)uVar43 * (char)lVar47) - 0xa7c & 0xff |
                         (ushort)(byte)(cVar13 - 0x17) << 8)) * uVar17;
  bVar35 = (byte)(uVar12 >> 0x28);
  bVar40 = (byte)uVar12;
  uVar21 = uVar21 & 0xff00;
  uVar54 = ((uVar15 & 0xffff0000 |
            CONCAT11((((char)(uVar15 >> 8) + -0x6e) - ((bVar32 & 1) != 0)) * '\x04' + '\x01',bVar48)
            & 0x7fff8000) << 1 | (uint)(CONCAT11((char)uVar44,bVar48 << 1) & 0x6aff)) - (uint)bVar35
  ;
  uVar51 = (ushort)uVar54 | 1 << (uVar44 & 0xf);
  bVar48 = (byte)uVar51;
  bVar19 = bVar35 ^ (bVar40 == bVar35) * (bVar35 ^ bVar48);
  uVar28 = uVar12 & 0xffffff00 | (ulong)(byte)(bVar40 ^ (bVar40 != bVar35) * (bVar40 ^ bVar19));
  bVar48 = bVar48 & 0x3f;
  auVar2 = ZEXT116(bVar40 < bVar35) << 0x40 | ZEXT416(uVar54 & 0xffff0000 | (uint)uVar51);
  uVar24 = (long)CONCAT22((undefined2)((char)bVar32 >> 7),uVar44) << 1;
  uVar31 = uVar24 | 1;
  uVar15 = -(uint)(bVar19 >>
                  ((SUB161(auVar2 >> bVar48,0) | SUB161(auVar2 << 0x41 - bVar48,0)) & 0x1f));
  bVar32 = ((byte)uVar15 | 0xf2) - 0xd;
  uVar12 = uVar28 * uVar28;
  uVar54 = ~(uint)uVar17 & 0xffff0000;
  uVar53 = (uint)(ushort)(short)(char)bVar32;
  uVar30 = uVar54 | uVar53;
  uVar15 = (uVar15 & 0xffffff00 | (uint)bVar32) & ~(1 << ((uint)uVar31 & 0x1f));
  sVar10 = 0xf;
  uVar51 = (ushort)uVar15;
  if (uVar51 != 0) {
    for (; uVar51 >> sVar10 == 0; sVar10 = sVar10 + -1) {
    }
  }
  cVar9 = (char)((uVar12 & 0xffffffff) >> 8);
  bVar32 = (byte)(uVar12 & 0xffffffff);
  uVar17 = (ulong)CONCAT11(cVar9 << 1 | cVar9 < '\0',bVar32);
  uVar43 = (uint)(uVar12 >> 0x21);
  lVar47 = (uVar24 & 0xffffffffffff0000 | (ulong)(ushort)~(ushort)uVar31) +
           (uVar12 & 0xffff0000 | uVar17);
  uVar39 = uVar39 + 0x87cf1267 & 0xffffff00 | uVar42 & 0xff;
  if ((uVar53 & 0xff) == 0x99766cce) {
    uVar39 = uVar30;
  }
  bVar48 = (byte)uVar43;
  uVar17 = uVar12 & 0xffff0000 | uVar17 & 0xffffffffffffff00 |
           (ulong)(byte)(bVar32 ^ (bVar32 != bVar48) * (bVar32 ^ bVar48));
  uVar38 = (uVar41 | (uint)(1 << ((ulong)(byte)((char)uVar38 << ((byte)uVar14 & 0x1f)) & 0x3f))) &
           0xffff0000 | (uint)(ushort)(uVar21 + 0xbcb5 ^ (uVar21 | (ushort)uVar28));
  uVar39 = uVar39 ^ 0x40c0cffa;
  uVar14 = (short)uVar42 - 1;
  if (uVar39 == 0) {
    uVar14 = uVar51;
  }
  uVar41 = (uVar43 & 0xff | (uint)(uint3)(uVar12 >> 0x29) << 8) ^ uVar38;
  uVar12 = (uVar12 >> 0x20) - (ulong)uVar30;
  if ((POPCOUNT(uVar41 & 0xff) & 1U) != 0) {
    uVar12 = uVar17;
  }
  uVar38 = uVar38 ^ 1 << (uVar39 & 0x1f);
  lVar55 = 0;
  if (uVar42 != 0) {
    for (; (uVar42 >> lVar55 & 1) == 0; lVar55 = lVar55 + 1) {
    }
  }
  auVar2 = ZEXT1216(CONCAT48(uVar41,uVar17)) & (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 / ZEXT816(0xc000000000000000);
  auVar2 = auVar2 % ZEXT816(0xc000000000000000);
  uVar41 = (int)lVar47 + 0x600d809c + uVar15 * 2;
  uVar17 = 0xffffffff;
  if (0 < (short)uVar51) {
    uVar17 = SUB168(auVar2,0) & 0xffffffff;
  }
  uVar21 = (ushort)uVar41;
  if ((ushort)(uVar51 - 1) != 0 && 0 < (short)uVar51) {
    uVar14 = uVar21;
  }
  uVar30 = SUB164(auVar3,0) + SUB164(auVar2,0) * 2;
  uVar53 = (uint)uVar12 & 0xffff0000 | (uint)(ushort)((short)uVar12 >> 1) | uVar38;
  uVar43 = uVar53 << 1 | (uint)((int)uVar53 < 0);
  uVar21 = uVar21 >> 1;
  bVar32 = (byte)lVar55;
  uVar27 = (uint)CONCAT62((int6)((ulong)lVar47 >> 0x10),0x6005);
  uVar53 = uVar30 + uVar27;
  if (!CARRY4(uVar30,uVar27) && uVar53 != 0) {
    uVar14 = SUB162(auVar3,0);
  }
  uVar44 = (ushort)(uVar42 >> (bVar32 & 0x1f));
  if ((POPCOUNT(uVar53 & 0xff) & 1U) == 0) {
    uVar44 = uVar14;
  }
  uVar38 = uVar38 << 1;
  uVar14 = (ushort)uVar38;
  uVar52 = uVar14 | 4;
  uVar38 = uVar38 & 0xffff0000;
  uVar14 = (ushort)(byte)(((uVar14 >> 2 & 1) != 0) << 7) << 1 |
           (ushort)(uVar17 <= (uVar38 | uVar52));
  cVar9 = (char)uVar21;
  bVar48 = -cVar9;
  uVar21 = uVar21 & 0xff00 | SUB162(auVar2,0) << 0xf | (ushort)bVar48;
  if (bVar48 != 0) {
    uVar53 = uVar53 & 0xffff0000 | (uint)uVar14;
  }
  uVar29 = 0xf;
  if (uVar21 != 0) {
    for (; uVar21 >> uVar29 == 0; uVar29 = uVar29 - 1) {
    }
  }
  uVar54 = uVar54 >> 1;
  uVar30 = (uint)CONCAT62(SUB166(auVar3 >> 0x10,0),SUB162(auVar3,0) * (short)uVar43);
  uVar42 = uVar30 << (bVar32 & 0x1f) | uVar30 >> 0x20 - (bVar32 & 0x1f);
  uVar39 = uVar39 << (bVar32 & 0x1f);
  cVar20 = (char)(uVar42 >> 8);
  cVar13 = cVar20 + '\x01';
  uVar30 = uVar27 + 0x30c8a36 & 0xffffff00 | (uint)(byte)~(byte)(uVar27 + 0x30c8a36);
  if (SCARRY1(cVar20,'\x01') != cVar13 < '\0') {
    uVar30 = uVar39;
  }
  uVar17 = (ulong)uVar30;
  uVar11 = CONCAT11(cVar13,(char)uVar42 + bVar32);
  if (POPCOUNT((ushort)uVar39 & uVar14 & 0xff) == '\0') {
    uVar14 = uVar11;
  }
  uVar39 = (uVar38 | uVar52 & 0xffffff00) ^ 0x2000000;
  bVar32 = (byte)uVar29 | 1;
  bVar57 = cVar13 < '\0';
  uVar11 = uVar11 << 1 | (ushort)bVar57;
  uVar38 = uVar42 & 0xffff0000 | (uint)uVar11;
  uVar22 = (ushort)(byte)((uint)uVar11 >> 8);
  uVar42 = uVar54 & 0xffff0000 | (uint)((POPCOUNT(uVar51 - 1 & 0xff) & 1U) == 0) << 0x1f |
           (uint)uVar22;
  uVar12 = (ulong)(ushort)(SUB162(auVar2 >> 0x10,0) | 0x7916) << 0x10;
  if (bVar57 != (short)uVar11 < 0) {
    uVar12 = uVar17;
  }
  iVar16 = uVar38 + 0xb6aae3aa;
  bVar48 = (byte)uVar14;
  uVar14 = uVar14 & 0xff00 | (ushort)(byte)((byte)uVar52 >> 1 | (cVar9 != '\0') << 7);
  uVar27 = uVar39 | bVar48;
  uVar15 = (uint)((uint3)(uVar15 >> 8) & 0xffff00) << 8 | uVar29 & 0xffffff00 |
           (uint)(byte)(bVar32 + 0x67);
  if (SBORROW1(bVar32,-0x67) == false) {
    uVar43 = uVar27;
  }
  uVar41 = uVar41 & 0xffff0000 | uVar21 >> 1 & 0xffffff00 | (uint)bVar48;
  uVar21 = (short)uVar30 + (short)uVar41 * 8;
  uVar24 = (ulong)(uVar53 >> 1) & 0x79968f3b;
  bVar32 = (byte)uVar21 & 0x1f;
  uVar33 = 0x13c3f5f0 << bVar32 | 0x13c3f5f0U >> 0x21 - bVar32;
  uVar51 = (ushort)uVar15;
  if (uVar38 != uVar33) {
    uVar17 = (ulong)uVar33;
    uVar38 = uVar33;
  }
  uVar52 = (short)uVar17 - uVar51;
  uVar28 = (ulong)uVar43;
  if (SBORROW2((short)uVar17,uVar51)) {
    uVar28 = uVar24;
  }
  bVar32 = (byte)uVar21 + (char)uVar52;
  uVar43 = 0xffffffff;
  if (SBORROW4(uVar15,uVar15) != false) {
    uVar43 = (ushort)uVar28 | 0xffff0000;
  }
  uVar29 = (ushort)((ushort)uVar24 >> 1 | 0x8000) >> 0xb;
  uVar52 = (uVar52 & 0xff00 | uVar21 & 0xff) << 5 | uVar29;
  uVar11 = (ushort)uVar43 >> (bVar32 & 0x1f);
  uVar15 = (ushort)((short)(char)uVar38 * (short)(char)uVar38) & 0xffff7b2f;
  bVar35 = bVar32 - (char)uVar15;
  if ((SBORROW1(bVar32,(char)uVar15) != false) != (char)bVar35 < '\0') {
    uVar15 = (uint)(uVar44 & ~(1 << (uVar51 & 0xf)));
  }
  bVar32 = (byte)(uVar30 + 0xe7124603);
  uVar33 = (uint)(byte)(bVar32 >> 1 | bVar32 << 7);
  uVar24 = (ulong)uVar52 & 0x3f;
  uVar31 = (ulong)uVar41 ^ 1 << uVar24;
  bVar58 = (uVar41 >> uVar24 & 1) != 0;
  uVar15 = uVar38 & 0xffff0000 | uVar15 & 0xffffff00 | (uint)!bVar58;
  uVar21 = (uVar21 & 7) << 5 | uVar29 |
           (ushort)(byte)(((char)((ulong)uVar52 >> 8) - (char)uVar52) - bVar58) << 8;
  uVar23 = (uint)(uVar17 & 0xffffffffffff0000) | (uint)uVar21;
  bVar58 = CARRY4(uVar23,uVar15);
  uVar38 = iVar16 + uVar30 + (uVar53 >> 1) + (uint)bVar57 & 0xffffff00;
  if (!bVar58 && uVar23 + uVar15 != 0) {
    uVar38 = uVar43 + uVar41;
  }
  uVar8 = CONCAT14(bVar58,uVar30 + 0xe7124603 & 0xffffff00 | uVar33) >> 7;
  iVar16 = (int)(short)uVar21 * (int)(short)uVar11;
  uVar18 = (uint6)(uVar12 >> 0x11);
  bVar32 = (byte)((ulong)(ushort)iVar16 >> 8);
  bVar40 = (byte)((uint)iVar16 >> 0x18);
  uVar52 = (ushort)iVar16 & 0xff | (ushort)(byte)(bVar32 + bVar40) << 8;
  uVar21 = (ushort)CARRY1(bVar32,bVar40);
  uVar51 = uVar52 - uVar11;
  bVar57 = SBORROW2(uVar52,uVar11) != SBORROW2(uVar51,uVar21);
  uVar44 = (ushort)((uint)iVar16 >> 0x10) & 0xff;
  uVar52 = (ushort)(uVar11 <= uVar52 && uVar21 <= uVar51) << 8;
  uVar29 = uVar44 | uVar52;
  if (bVar57 == (short)(uVar51 - uVar21) < 0) {
    uVar38 = uVar38 & 0xffff0000 | (uint)uVar22;
  }
  uVar21 = uVar51 - uVar21;
  if (bVar57) {
    uVar21 = uVar22;
  }
  uVar24 = (ulong)uVar11 ^ 1 << ((ulong)uVar11 & 0x3f);
  uVar25 = (ulong)(uint)(int)(short)uVar14;
  uVar12 = (ulong)(ushort)((uVar21 - uVar29) - 1);
  uVar34 = CONCAT62(uVar18,uVar29);
  uVar21 = (ushort)uVar31;
  uVar30 = (uint)uVar24 & 0xffff0000 | (uint)(ushort)((ushort)uVar24 ^ uVar21);
  uVar53 = uVar30 + 0x1424bd37;
  uVar37 = (ulong)uVar53;
  uVar41 = (uint)(((ulong)((uint)(uVar28 >> 1) & uVar42) | 0xafb9) >> 1);
  uVar24 = ((ulong)uVar38 & 0x7fffffff) << 1;
  if (0xebdb42c8 < uVar30) {
    uVar24 = (ulong)(uVar33 << 0x1a | (uint)uVar8 & 0xffff0000 |
                    (uint)(ushort)((ushort)((short)uVar8 << (bVar35 & 0x1f)) >> 0xc | uVar21 << 4));
  }
  uVar52 = uVar52 | uVar44;
  if (0xf18c < (uVar21 & 0xff)) {
    uVar25 = (ulong)(ushort)((short)uVar14 >> 0xf) << 0x10;
  }
  lVar47 = 0;
  if (uVar34 != 0) {
    for (; (uVar34 >> lVar47 & 1) == 0; lVar47 = lVar47 + 1) {
    }
  }
  uVar14 = (short)uVar24 << 1 | (ushort)((short)uVar24 < 0);
  uVar24 = uVar24 & 0xffffffffffff0000;
  uVar28 = uVar24 | uVar14;
  uVar29 = uVar29 ^ 0x2225;
  uVar38 = (int)lVar47 - (int)uVar28;
  bVar32 = (byte)uVar25 + 0x94;
  if (0x6b < (byte)uVar25 && bVar32 != 0) {
    uVar42 = uVar54 & 0xffff0000;
  }
  uVar34 = (uVar17 & 0xffffffffffff0000 | uVar12) ^
           1 << ((ulong)(ushort)((short)uVar27 + 0x283b) & 0x3f);
  uVar21 = ((short)uVar38 + 0x33be) - (ushort)(((uVar52 | (ushort)uVar53) & 1) != 0);
  uVar17 = (ulong)(uVar38 & 0xffff0000 | (uint)uVar21);
  if ((POPCOUNT(uVar21 & 0xff) & 1U) != 0) {
    uVar17 = uVar28;
  }
  uVar28 = (ulong)(uVar41 & 0xffff0000 | (uint)uVar52) << 1;
  cVar9 = (char)uVar34;
  uVar50 = uVar24 | (ulong)uVar14 & 0xffffffffffffff00 | (ulong)(byte)uVar14;
  cVar13 = ((char)uVar44 + (char)uVar31) * '\x02';
  uVar54 = CONCAT22((ushort)(uVar39 >> 0x11),(short)((uVar39 | (byte)(bVar48 - 0x3f)) >> 1) + uVar29
                   ) >> 1;
  uVar56 = uVar28 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar28 >> 1 | 0x8000);
  uVar38 = CONCAT22((undefined2)(cVar9 >> 7),cVar9 + 0xb58) &
           ((int)uVar18 << 0x10 | (uint)CONCAT11((char)(uVar12 >> 8),cVar13));
  uVar12 = uVar56 - uVar17;
  uVar28 = 0;
  if (uVar56 >= uVar17) {
    uVar28 = uVar17;
  }
  uVar34 = uVar34 & 0xffffffffffffff00 | (ulong)(byte)(cVar13 + '^' + (uVar56 < uVar17));
  uVar30 = (ushort)((ushort)uVar38 & 0xff | (ushort)(byte)~(byte)(uVar38 >> 8) << 8) ^ 0xe331;
  bVar48 = (byte)(uVar30 >> 8);
  uVar56 = (ulong)(uVar38 & 0xffff0000 | (uint)CONCAT11(bVar48 >> 5 | bVar48 << 3,(char)uVar30));
  uVar34 = uVar34 ^ (ulong)(uVar34 != uVar56) *
                    (uVar34 ^ uVar56 ^ (ulong)(uVar34 == uVar56) * (uVar56 ^ uVar50));
  uVar30 = uVar54 & 0xffffff00 | 0x80000800;
  uVar15 = ((uint)uVar31 & 0xffff0000 | uVar41 & 0xffff | 1) - 1;
  uVar46 = (ulong)(uVar30 & 0xffff0000 |
                  (uint)(ushort)((ushort)uVar30 | (ushort)(byte)((char)uVar54 - 1)));
  uVar41 = (uint)uVar34 ^ 0x800;
  uVar21 = (short)(uVar12 >> 0x20) * 0x2bc0;
  bVar40 = (byte)(uVar37 >> 8) & 0xde;
  uVar14 = (ushort)uVar41 ^ 0xef;
  uVar38 = (int)(short)uVar14 * (int)(short)uVar14;
  cVar9 = (char)uVar38;
  uVar56 = (uVar24 | (ushort)((((short)uVar50 << 1 | 1U) << 0xb | (ushort)uVar34 >> 5) &
                             (ushort)(uVar37 & 0x6321dee4))) ^ 0xc21e;
  uVar31 = (ulong)(ushort)(((short)cVar9 & 0xff00U |
                           (ushort)(byte)(cVar9 << 2 |
                                         (byte)((ushort)((short)cVar9 & 0xffU |
                                                        (ushort)((int)(short)uVar38 != uVar38) << 8)
                                               >> 7))) & ~(1 << ((ushort)(uVar38 >> 0x10) & 0xf)));
  lVar55 = ((ulong)((uint7)(uint3)((uVar42 << 1) >> 8) ^ 0xfffffffff56111) & 0xffffffffffff00) << 8;
  uVar50 = uVar46 & 0xfffffffffffffd00 | (uVar46 & 0xfffffffffffffdff) >> 3 & 0x1f;
  uVar54 = uVar53 >> 0x18 | (uVar53 & 0xff0000) >> 8;
  lVar47 = uVar31 << 1;
  bVar48 = (byte)lVar47;
  uVar42 = (uVar15 & 0xffffff00 | uVar38 >> 0x10 & 0xff) << (bVar48 & 0x1f);
  auVar2 = ZEXT416(uVar41 & 0xffff0000 |
                   (uint)(ushort)((short)cVar9 * (short)(char)(uVar53 >> 0x18))) *
           ZEXT816(uVar12 << 0x20 | uVar12 >> 0x20 & 0xffffffffffff0000 |
                   (ulong)(ushort)(((uint)lVar55 | uVar38 & 0xff) >> 1));
  bVar35 = SUB161(auVar2,0);
  bVar19 = bVar40 ^ (bVar35 == bVar40) * (bVar40 ^ ((byte)((ulong)lVar47 >> 8) | bVar40));
  bVar49 = (byte)uVar42;
  bVar49 = bVar49 >> 3 | bVar49 << 5;
  uVar46 = (ulong)(uVar42 & 0xffffff00 | (uint)bVar49);
  sVar10 = (short)uVar50;
  auVar2 = CONCAT88(CONCAT71(SUB167(auVar2 >> 0x48,0),SUB161(auVar2 >> 0x40,0) & (byte)uVar56),
                    CONCAT71(SUB167(auVar2 >> 8,0),bVar35 ^ (bVar35 != bVar40) * (bVar35 ^ bVar19)))
           & (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 / ZEXT816(uVar46 | 0xc000000000000000);
  uVar41 = SUB164(auVar2 % ZEXT816(uVar46 | 0xc000000000000000),0) ^ 0x559d5e46;
  uVar24 = (ulong)(uint7)((long)(uVar17 | 0x400000000) >> 9) << 8;
  uVar34 = uVar46 & 0xff | uVar24;
  uVar46 = uVar46 & 0xffffffffffffff00 |
           (ulong)(byte)(bVar49 + (char)((long)(uVar17 | 0x400000000) >> 1));
  uVar14 = ((ushort)(CONCAT12((bVar48 + ((byte)(uVar12 >> 0x20) |
                                        (byte)(1 << ((ushort)uVar15 & 0xf))) & 1) != 0,sVar10) >> 5)
           | sVar10 << 0xc) & (ushort)uVar54;
  uVar51 = uVar14 + 1;
  uVar17 = (uVar37 & 0x63210000 | (ulong)CONCAT11(bVar19,(char)(uVar37 & 0x6321dee4))) & 0x533f8d65;
  if (uVar51 != 0 && SCARRY2(uVar14,1) == (short)uVar51 < 0) {
    uVar17 = SUB168(auVar3,0);
  }
  auVar2 = ZEXT816(uVar34 | 0xc000000000000000);
  auVar3 = ZEXT416(uVar41 & 0xffff0000 | uVar41 >> 1 & 0x7fff) << 0x40 |
           auVar3 & (undefined  [16])0xffffffffffffffff;
  auVar4 = auVar3 / auVar2;
  sVar10 = (short)uVar46;
  uVar14 = uVar51 + sVar10 + 1;
  uVar31 = (ulong)((CONCAT31((int3)(char)((byte)(uVar29 >> 0xc) |
                                         (byte)((ushort)(uVar29 << 0xd) >> 8)),
                             (byte)(uVar29 >> 4) >> 1) & ~(uint)(1 << (uVar31 & 0x3f)) & 0x2ca423df)
                   + (int)uVar50 + 0x3707af0f);
  lVar47 = (uVar25 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)((ushort)uVar25 & 0xff00 | (ushort)bVar32) >> 1 |
                          (ushort)((bVar32 & 1) != 0) << 0xf)) + uVar31;
  iVar16 = SUB164(auVar3 % auVar2,0) * -0xd0f639a;
  bVar32 = SUB161(auVar4,0);
  bVar35 = (byte)((uint)iVar16 >> 8);
  bVar40 = bVar35 ^ (bVar32 == bVar35) * (bVar35 ^ (byte)iVar16);
  uVar12 = CONCAT71(SUB167(auVar4 >> 8,0),bVar32 ^ (bVar32 != bVar35) * (bVar32 ^ bVar40));
  if ((uVar14 & 0xcc91) != 0 && -1 < (short)uVar14) {
    uVar12 = uVar17;
  }
  uVar37 = (ulong)((uVar30 & 0xffff0000 | (uint)uVar51) * 3 + 0x54835d6c & 0xffff0000 |
                  (uint)(ushort)(short)(char)((uint)(ushort)(sVar10 << 6) >> 8)) + 0x21f1fc4b;
  uVar25 = uVar17 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)uVar17 & ~(1 << ((ushort)uVar37 & 0xf)));
  uVar54 = (int)(((ulong)(uVar54 | (uVar53 & 0xff00) << 8 | uVar53 * 0x1000000) & 0x7fffffff) << 1)
           << 1;
  bVar32 = (byte)uVar37;
  uVar50 = -(ulong)((uint)uVar46 >> (bVar32 & 0x1f));
  uVar31 = (long)uVar31 >> (bVar32 & 0x3f);
  uVar51 = (ushort)(uVar25 << 1) | (ushort)(uVar31 >> 0x3f);
  sVar10 = (short)uVar34;
  uVar44 = sVar10 * 0x400;
  uVar41 = (uint)uVar24;
  bVar35 = (byte)uVar31 ^ (byte)uVar21;
  uVar24 = uVar31 & 0xffffffffffffff00 | (ulong)bVar35;
  uVar17 = uVar37 << (bVar32 & 0x3f) | uVar37 >> 0x40 - (bVar32 & 0x3f);
  sVar45 = (short)lVar47;
  uVar52 = uVar44 ^ (ushort)(uVar51 == uVar44) * (uVar44 ^ (ushort)uVar50);
  if (SBORROW2(uVar51,uVar44)) {
    uVar21 = (ushort)uVar17;
  }
  uVar29 = uVar51 ^ (ushort)(uVar51 != uVar44) * (uVar51 ^ uVar52);
  if ((short)(uVar51 + sVar10 * -0x400) < 0) {
    uVar29 = 0;
  }
  bVar32 = (byte)uVar17;
  uVar37 = uVar56 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar56 ^ 1 << (uVar29 & 0xf));
  uVar53 = ((uint)lVar47 & 0xffff0000 | (uint)(ushort)(sVar45 << 1 | (ushort)(sVar45 < 0))) << 0xe;
  Var6 = CONCAT18(((ushort)uVar24 >> ((ushort)uVar50 & 0xf) & 1) != 0,
                  uVar28 & 0xffffffffffff0000 | (ulong)uVar21) >> 3;
  uVar30 = uVar41 >> 0x1b | (uVar41 & 0xffff0000 | (uint)uVar52) << 5;
  bVar49 = (byte)Var6;
  bVar19 = bVar49 ^ (bVar48 == bVar49) * (bVar49 ^ bVar32);
  uVar34 = (ulong)Var6 & 0xffffffffffffff00 | (ulong)bVar19;
  uVar41 = (uint)uVar17 & 0xd74cbe43;
  sVar10 = (short)((int)(uVar54 | (uint)uVar25 >> 0x1f) >> 1) << 1;
  cVar9 = (char)sVar10;
  uVar28 = (ulong)((uint)CONCAT62((int6)(short)((ushort)((ulong)lVar55 >> 0x10) >> 1 |
                                               (ushort)(((uint)((uVar38 & 1) != 0) << 0x1f) >> 0x10)
                                               ),(short)(char)bVar48) & 0xffffff00 |
                   (uint)(byte)(bVar48 ^ (bVar48 != bVar49) * (bVar48 ^ bVar19)) | 0x12959770);
  uVar24 = uVar50 ^ (ulong)(uVar28 == uVar50) *
                    (uVar50 ^ (ulong)((int)uVar24 + 0x90680819) - 0x6c8ff010);
  uVar28 = uVar28 ^ (ulong)(uVar28 != uVar50) * (uVar28 ^ uVar24);
  uVar38 = (uint)((uVar12 & 0xffff0000 |
                  (ulong)CONCAT11(((char)((uVar12 & 0xffffffff) >> 8) - bVar32) - (uVar51 < uVar44),
                                  (char)(uVar12 & 0xffffffff))) >> 1) | 0xa020a6b;
  uVar21 = (ushort)uVar28;
  uVar51 = (ushort)CONCAT31((int3)(char)((uVar31 & 0xffffffffffffff00) >> 8),bVar35 + cVar9);
  bVar48 = (byte)uVar41;
  bVar35 = cVar9 << (bVar48 & 0x1f);
  uVar17 = 0;
  if (uVar30 != 0) {
    for (; (uVar30 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
    }
  }
  uVar15 = (uint)uVar37 & 0x1f;
  if ((uVar41 >> uVar15 & 1) == 0) {
    uVar37 = uVar56 & 0xffffffffffff0000 | (ulong)(ushort)uVar30;
  }
  bVar48 = (bVar48 ^ (byte)(1 << uVar15)) & 0x1f;
  uVar41 = uVar53 << bVar48 | uVar53 >> 0x20 - bVar48;
  uVar41 = uVar41 & 0xffff0000 | (uint)(ushort)((ushort)uVar41 & (ushort)uVar34);
  uVar12 = (uVar17 & 0xffff) - 1;
  uVar15 = (int)uVar24 + 0xc802fe;
  uVar52 = (short)uVar17 - (ushort)bVar35 & 0xff;
  uVar44 = (ushort)uVar38 >> 6;
  uVar53 = ((uint)uVar28 & 0xffff0000 |
           (uint)(ushort)(uVar21 ^ (ushort)(uVar21 != uVar51) *
                                   (uVar21 ^ uVar51 ^ (ushort)(uVar21 == uVar51) *
                                                      (uVar51 ^ (uVar14 & 0xcc91 |
                                                                (ushort)(byte)(bVar40 << 1 |
                                                                              (char)bVar40 < '\0')
                                                                << 8))))) + 0x6638cca8 & 0xffff0000
           ^ 0xfa8d9330;
  uVar17 = 0x3f;
  if (uVar53 != 0) {
    for (; uVar53 >> uVar17 == 0; uVar17 = uVar17 - 1) {
    }
  }
  bVar40 = (byte)uVar52 & 0x1f;
  uVar54 = CONCAT22((short)((int)uVar54 >> 0x11),sVar10) & 0xffffff00 |
           (uint)(bVar35 & (byte)uVar44);
  uVar42 = (int)uVar34 + 0x920db7ad;
  bVar48 = (char)uVar30 - 0x3e;
  uVar43 = (uVar30 ^ 0x2000) & 0xffffff00;
  uVar39 = uVar43 | bVar48;
  uVar12 = uVar12 & 0xffff0000 |
           (ulong)(ushort)(CONCAT11((char)(uVar12 >> 8) * '\x02',(char)uVar12 << 1) | 1);
  if (bVar48 == 0 || (SCARRY1((char)uVar30,-0x3e) != SCARRY1(bVar48,'\0')) != (char)bVar48 < '\0') {
    uVar12 = (ulong)uVar39;
  }
  uVar41 = ((uVar41 << bVar40 | uVar41 >> 0x20 - bVar40) - (int)(uVar17 ^ 0xffffffffcaf2047e)) - 1;
  lVar55 = (long)(uVar17 ^ 0xffffffffcaf2047e) >> 1;
  lVar47 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar47 == 0; lVar47 = lVar47 + -1) {
    }
  }
  uVar30 = (uint)lVar47;
  cVar9 = (char)((ulong)(long)(int)(uVar53 & 0xffffff00) >> 8);
  cVar13 = (char)((uVar38 & 0xffffff00 | (uint)(byte)~(byte)uVar38) >> 1);
  cVar20 = cVar13 + cVar9;
  if (cVar20 == '\0' || SCARRY1(cVar13,cVar9) != cVar20 < '\0') {
    uVar15 = uVar15 & 0xffff0000 |
             (0xffffffffU >> (bVar32 & 0x1f) | -1 << 0x20 - (bVar32 & 0x1f)) >> 1 & 0xffff;
  }
  sVar26 = (short)uVar39;
  uVar27 = ((int)sVar26 - uVar54) - 1;
  sVar10 = (short)((uVar53 & 0xffffff00) >> 0x10);
  sVar45 = (short)uVar41;
  uVar21 = sVar45 >> 1;
  uVar33 = uVar27 & 0xffff0000 | (uint)(ushort)((ushort)uVar27 >> 1 | (short)uVar54 << 0xf);
  uVar53 = (uint)CONCAT71((int7)(uVar12 >> 8),0xab) >> 1;
  uVar27 = (int)sVar26 << 0x1f;
  uVar14 = (ushort)lVar55;
  uVar23 = (uint)lVar55;
  if ((uVar53 | uVar27) != 0) {
    uVar30 = uVar30 & 0xffff0000 | uVar23 & 0xffff;
  }
  uVar36 = uVar38 >> 0x12;
  if (uVar39 == 0xffffffff) {
    uVar36 = uVar15 << 1;
  }
  uVar7 = uVar39 + 1 & 0xffff0000 | uVar39 + 1 >> 0xe & 3;
  uVar15 = 0;
  if (uVar54 != 0) {
    for (; (uVar54 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
    }
  }
  uVar1 = 0x1f;
  if (uVar33 != 0) {
    for (; uVar33 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar41 = (uVar41 & 0xffff0000 | uVar21 & 0xffffff00 | (uint)(byte)((char)uVar21 + 0x90)) & uVar30;
  if (-1 < (int)uVar41) {
    uVar41 = uVar41 & 0xffff0000 | (uint)uVar14;
  }
  uVar30 = uVar30 << 1;
  cVar9 = (char)(uVar54 >> 5);
  bVar32 = -cVar9;
  uVar12 = (ulong)(uVar54 >> 5) & 0xffffffffffffff00 |
           (ulong)(byte)((short)((short)(((int)sVar10 << 0x10) >> 1) * uVar21) >> 0xf) << 0x3b |
           (ulong)bVar32;
  uVar17 = (long)(short)uVar14;
  if (cVar9 == '\0' && bVar32 != 0) {
    uVar17 = (ulong)uVar39;
  }
  bVar35 = (byte)uVar15 & 0x1f;
  iVar16 = (uint)(ushort)uVar17 * (uVar30 & 0xffff);
  uVar17 = uVar17 & 0xffffffffffff0000 | (ulong)(ushort)iVar16;
  bVar32 = (byte)(uVar15 + 0xa816dfb7) & 0x3f;
  uVar39 = (uint)(CONCAT18(uVar12 < 0xf93185a2,uVar17) >> bVar32) | (uint)(uVar17 << 0x41 - bVar32);
  uVar17 = (long)(int)((int)((uVar38 & 0xfffffe00) >> 1 | (uVar44 | uVar42) << 0x1f |
                            (uint)(byte)(cVar20 - 0x19)) >> (bVar48 & 0x1f) & 0xffffff00U |
                      (uint)(byte)(((char)(sVar10 >> 4) + '\x13') - (uVar15 < 0x57e92049))) *
           0x4eb0fc3f;
  return (ulong)(uVar39 >> 0x14 | uVar39 << 0xc) + (uVar17 & 0xffffffff) +
         (ulong)(uVar15 + 0xa816dfb7) +
         ((ulong)(uVar53 & 0xffff0000 | uVar27) | (ulong)(ushort)((uint)iVar16 >> 0x10)) +
         (ulong)(uVar43 | (byte)~bVar48) +
         (((ulong)uVar30 - 0x7f79fbddd) - (ulong)((long)(int)uVar17 != uVar17)) + (ulong)uVar7 +
         (ulong)(uVar33 ^ uVar7) + (ulong)(uVar36 >> 0x1f | uVar36 << 1) +
         (ulong)((uVar23 >> bVar35 | uVar30 << 0x20 - bVar35) << 9 | uVar1 >> 0x17) +
         (ulong)(uVar42 & 0xffff0000 | (ushort)(sVar45 + 0xe4 + uVar52) & 0xffffff00 |
                (uint)((uVar15 >> (uVar36 & 0x1f) & 1) != 0 || uVar54 == 0)) +
         (uVar37 & 0xffffffffffffff00 |
         (ulong)(byte)((char)uVar37 + -0x47 + ((byte)((uint)(int)sVar26 >> 8) & 1))) +
         (ulong)(uVar41 >> 0xd | uVar41 << 0x13) +
         (ulong)(uVar1 & 0xffffff00 | (uint)(byte)((char)uVar1 - 1)) + uVar12;
}



// WARNING: Removing unreachable block (ram,0x00402d20)
// WARNING: Removing unreachable block (ram,0x004025b3)
// WARNING: Removing unreachable block (ram,0x00402d1c)
// WARNING: Removing unreachable block (ram,0x00402f7f)
// WARNING: Removing unreachable block (ram,0x00402d81)
// WARNING: Removing unreachable block (ram,0x00402241)

long log_size_10_var_001(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  uint uVar3;
  char cVar4;
  byte bVar11;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar12;
  sbyte sVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  byte bVar19;
  long lVar18;
  undefined uVar20;
  uint uVar21;
  ulong uVar22;
  char cVar23;
  ushort uVar24;
  short sVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  ushort uVar35;
  byte bVar36;
  ulong uVar37;
  char cVar38;
  uint uVar39;
  byte bVar40;
  ulong uVar41;
  char cVar42;
  uint uVar43;
  ulong uVar44;
  int iVar45;
  uint uVar46;
  ulong uVar47;
  ushort uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  bool bVar52;
  char in_AF;
  
  bVar11 = in_AF << 4 | 0x83;
  uVar26 = 0xdbae8300;
  uVar5 = ((ushort)bVar11 << 8 | 0xc1) * -0xcc6;
  if (((uint)bVar11 << 8 | 0xd8b60000) != 0x8b69063f) {
    uVar26 = 0xdbae253c;
  }
  uVar27 = (uVar26 & 0xffffff00 | (uint)(byte)((byte)uVar26 + 0x36)) * -0x36f9a82d;
  uVar8 = (ulong)(uVar5 & 0xffffff00 | 0x9be80000 | (uint)(byte)((char)uVar5 << 1) | 1) * 0x442066c9
  ;
  uVar10 = uVar8 & 0xffffffff;
  cVar4 = (char)(uVar8 >> 0x28);
  uVar20 = (undefined)(uVar8 >> 0x20);
  bVar11 = -cVar4;
  uVar31 = uVar26 + 0xd2727107 & 0xffffff00 | (uint)(byte)(uVar10 >> 8);
  cVar23 = -0x4e - (char)uVar10;
  uVar21 = (uint)CONCAT71(0xffffffffffffd9,cVar23);
  if (cVar23 != '\0' && (SBORROW1(-0x4e,(char)uVar10) != false) == cVar23 < '\0') {
    uVar21 = 0x2a657673;
  }
  uVar10 = (ulong)(uint)((int)uVar10 << 0xb);
  uVar10 = uVar10 & 0xffffffffffff0000 |
           (ulong)(byte)(((byte)(uVar10 >> 8) & 0x31) >> 1 | (0xfc1122c8 < uVar21) << 7) << 8;
  uVar21 = CONCAT22((short)(uVar8 >> 0x30),CONCAT11(cVar4 * -0x80 | bVar11 >> 2,uVar20) >> 6) ^
           0x3c2ee30c;
  uVar8 = (ulong)uVar21;
  uVar34 = (ulong)((byte)uVar26 < 0xca) << 0x3f | 0x71bc32b7bfbeebe0;
  uVar22 = uVar8 ^ (ulong)(uVar10 == uVar8) * (ulong)(uVar21 ^ uVar31);
  uVar5 = (short)uVar31 << 1;
  uVar26 = uVar26 + 0xd2727107 & 0xffff0000 | (uint)uVar5;
  uVar8 = (uVar10 ^ (ulong)(uVar10 != uVar8) * (uVar10 ^ uVar22)) >> 5;
  for (lVar18 = 0x3f; 0xfffff8e48b690006U >> lVar18 == 0; lVar18 = lVar18 + -1) {
  }
  uVar10 = (uVar8 & 0xffffffffffff0000 |
           (ulong)(ushort)((CONCAT22((ushort)uVar22 & 0xff00 |
                                     (ushort)(byte)((char)uVar22 - (char)((uint)uVar5 >> 8)),
                                     (short)uVar8) & 0x3fffffff) / 0xc000)) << 0x17;
  uVar22 = CONCAT62(0x4cda08784420,
                    (0x66c9 - CONCAT11(bVar11,uVar20)) -
                    (ushort)(0xd3c88fefeacd264d < (ulong)uVar27)) ^ 0x1a0ddc47;
  uVar14 = (ushort)uVar22 & 0xf;
  uVar31 = (uint)(CONCAT14((0xc000U >> uVar14 & 1) != 0,uVar26) >> 0x19);
  uVar26 = uVar26 << 8 | uVar31;
  uVar8 = 0;
  if (uVar34 != 0) {
    for (; (uVar34 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  uVar34 = (ulong)(uVar10 != uVar8) *
           (uVar10 ^ uVar8 ^ (ulong)(uVar10 == uVar8) * (uVar8 ^ 0x33a7cb85));
  uVar21 = 0;
  if ((long)uVar8 < (long)uVar10) {
    uVar21 = (uint)uVar22;
  }
  uVar6 = (ushort)uVar34;
  uVar48 = (ushort)(uVar6 == 0x28b5) * ((ushort)uVar26 ^ 0x28b5) ^ 0x28b5;
  uVar6 = uVar6 ^ (ushort)(uVar6 != 0x28b5) * (uVar6 ^ uVar48);
  uVar8 = (uVar10 ^ uVar34) & 0xffffffffffff0000;
  uVar14 = ~(1 << uVar14) & 0xc000;
  if (uVar48 != 0x6f81) {
    uVar14 = uVar6;
  }
  uVar7 = (uVar6 & 0xff) * (ushort)(byte)((byte)uVar48 ^ 0x81);
  uVar10 = uVar8 | uVar7;
  uVar43 = (uVar48 | 0x17a30000) ^ 0x8b696f87;
  uVar6 = 0xf;
  sVar25 = (short)(uVar8 >> 0x10);
  uVar48 = sVar25 >> 0xf;
  if (sVar25 < 0) {
    for (; uVar48 >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  uVar30 = (uVar6 | 0xdbae0000) * 0x20;
  uVar26 = uVar26 ^ 2;
  cVar23 = (char)uVar26;
  bVar11 = cVar23 - 8;
  uVar39 = ((ushort)(((uVar31 & 2) != 0) + 0x7087) | 0xd77d0000) + 0xf45ec191;
  uVar31 = uVar43;
  if (uVar48 <= uVar7) {
    uVar31 = 0x33a7ce85;
  }
  bVar40 = (char)(uVar27 >> 7) + 2;
  uVar49 = SEXT14((char)bVar40);
  uVar14 = (uVar14 + 0x527c) * 0x1e83;
  auVar1 = CONCAT88(((ulong)uVar30 - 0x204de81f) + uVar10 * 0x674f9d0a,uVar10 * 0x33a7ce85) &
           (undefined  [16])0xffffffffffffffff;
  auVar1 = ZEXT816(SUB168(auVar1 % ZEXT816(0xf1bc32b7bfbeebe0),0) & 0x3fffffffffffffff) << 0x40 |
           auVar1 / ZEXT816(0xf1bc32b7bfbeebe0) & (undefined  [16])0xffffffffffffffff;
  auVar2 = auVar1 / ZEXT816(0xf1bc32b7bfbeebe0);
  uVar39 = (uVar39 & 0xffffff00 | (uint)(byte)((byte)uVar39 | (byte)uVar43)) + 1;
  uVar27 = SUB164(auVar1 % ZEXT816(0xf1bc32b7bfbeebe0),0) | 0x2000000;
  cVar4 = SUB161(auVar2,0) + (char)uVar5 + (uVar30 < 0x28dcf732);
  uVar8 = CONCAT71(SUB167(auVar2 >> 8,0),cVar4);
  bVar36 = (byte)uVar31 | bVar40;
  if ((POPCOUNT(cVar4) & 1U) == 0) {
    bVar36 = bVar40;
  }
  uVar31 = uVar30 + 0xd72308ce & 0x928bd803;
  if ((uint)uVar8 != uVar39) {
    uVar8 = (ulong)uVar39;
    uVar27 = uVar39;
  }
  bVar52 = uVar49 != 0 || 0xfffffffe < uVar49 - 1;
  uVar21 = (uint)(((ulong)((((uVar21 | (uint)(1 << (uVar22 & 0x3f))) & 0xffffff00 ^ 0x7bac7f) &
                            0xffffff00 ^ 0x3f195e09) & 0xffffff00) | 0x7698) << 5) & 0xffff0000;
  bVar19 = (byte)uVar31;
  bVar12 = bVar19 - bVar11;
  uVar48 = (ushort)uVar31;
  uVar7 = uVar48 & 0xff00 | (ushort)(byte)(bVar12 - bVar52);
  iVar16 = uVar43 * 9 + 0x256be85b;
  uVar5 = (ushort)(bVar19 < bVar11 || bVar12 < bVar52);
  uVar6 = (ushort)uVar43 - uVar7;
  uVar26 = uVar26 & 0xffff0000 | (uint)CONCAT11(uVar7 <= (ushort)uVar43 && uVar5 <= uVar6,bVar11);
  uVar5 = (uVar6 - uVar5) * -0x2f10;
  uVar27 = uVar27 + 0x8cbb157a;
  cVar42 = (-1 - (char)uVar5) - (iVar16 != 0);
  uVar48 = uVar48 << 1;
  auVar1 = ZEXT816((ulong)(long)(int)(short)(((ushort)uVar8 & 0xff) * (ushort)bVar36)) *
           ZEXT816(0x82e0000000000000);
  uVar8 = (ulong)(SUB164(auVar1 >> 0x40,0) & 0x3fffffff) << 0x20 |
          (ulong)(SUB168(auVar1 >> 0x40,0) == 0) << 8;
  uVar10 = uVar8 / (uVar27 | 0xc0000000);
  cVar4 = (char)uVar10;
  uVar10 = uVar10 & 0xffff0000;
  bVar11 = (byte)uVar48;
  uVar34 = (ulong)(uVar21 | uVar14) + 0x444c1514;
  uVar22 = (ulong)(uint)((int)(uVar43 & 0xffff0000 | (uint)uVar5) >> 1) * -0x6d023b53;
  uVar31 = uVar30 + 0xd72308ce & 0x928b0000 | uVar48 & 0xffffff00 | (uint)(byte)((char)bVar11 >> 1);
  cVar38 = (char)(uVar27 >> 8) >> 0x16;
  uVar5 = (short)uVar27 >> 0x1e & 0xff00U | (ushort)(byte)(cVar38 << 1 | cVar38 < '\0');
  uVar43 = (int)(uVar8 % (ulong)(uVar27 | 0xc0000000) >> 0x14) + 0xd3e68a92;
  uVar43 = uVar43 & 0xffff0000 | (uint)CONCAT11((char)(uVar43 >> 8) >> 1,(char)uVar43);
  uVar30 = (0xdb3dc88dU - iVar16 & 0xffffff00 | uVar26 + 0x662095c & 0xff) + 0x575878c;
  if (uVar31 + 0x606bc9d9 != -1 &&
      (SCARRY4(uVar31,0x606bc9d9) != SCARRY4(uVar31 + 0x606bc9d9,1)) ==
      (int)(uVar31 + 0x606bc9da) < 0) {
    uVar30 = uVar43;
  }
  uVar6 = ((short)(char)(cVar4 * cVar4) << bVar11 | (ushort)uVar31 >> 0x10 - bVar11) + 1;
  uVar5 = uVar5 >> bVar11 | uVar5 << 0x10 - bVar11;
  iVar45 = (uVar30 - ((uint)uVar10 | (uint)uVar6)) + -0x68c25a30 + (uint)((byte)uVar34 < 0x74);
  iVar16 = 0;
  if (-0x3b < (char)iVar45) {
    iVar16 = iVar45;
  }
  uVar6 = (uVar6 & 0xff) * (ushort)(byte)((ulong)uVar6 >> 8);
  uVar48 = SEXT12((char)bVar40);
  uVar30 = (uVar21 | (ushort)((uVar14 & 0xff00 |
                              (ushort)(byte)((byte)uVar14 >> bVar11 | (byte)uVar14 << 8 - bVar11)) &
                             ~(1 << ((byte)(cVar42 * '\x02' | cVar42 < '\0') & 0xf)))) ^ 0x7a32;
  uVar34 = uVar34 & 0xffffffffffff0000 |
           (ulong)((ushort)uVar34 & 0xff00 | (byte)-((byte)uVar34 + 0x8c) & 0xfffe);
  uVar51 = (ulong)uVar49 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar48 ^ (ushort)(uVar6 == uVar48) * (uVar48 ^ uVar6)) |
           0xffffffffcc746d0c;
  uVar21 = (uint)((uVar22 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar22 << 1)) << bVar11) >>
           1;
  uVar8 = (ulong)(CONCAT22(0xff,(short)iVar45 << 0xf | 0x7fc5) | 0xc0000000);
  uVar10 = (ulong)((uVar43 << 1 ^ 0xb6bba199) & ~(uint)(1 << (uVar51 & 0x3f)) & 0x3fffffff) << 0x20
           | uVar10;
  uVar31 = ((uVar27 & 0xffff0000 | 0xc0000000 | uVar5 & 0xffffff00 |
            (uint)(byte)((byte)uVar5 ^ cVar23 + 0x54U)) >> 1) - iVar45;
  lVar18 = 0x3f;
  if (uVar34 != 0) {
    for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  uVar27 = 0;
  if ((uint)lVar18 != 0) {
    for (; ((uint)lVar18 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
    }
  }
  bVar36 = (byte)uVar27;
  bVar40 = bVar36 ^ (bVar36 == 0x5e) * bVar36;
  uVar22 = (ulong)(uVar21 | 0xc0000000);
  uVar8 = ((ulong)(((uint)(uVar10 % uVar8) ^ uVar30) & 0x3fffffff) << 0x20 |
          CONCAT62((uint6)(uVar10 / uVar8 >> 0x10) & 0xffff,0xf15e) & 0xffffffffffffff00 |
          (ulong)(byte)((bVar36 != 0x5e) * (bVar40 ^ 0x5e) ^ 0x5e)) / uVar22;
  lVar28 = uVar22 - 0x41979e87;
  uVar39 = ((uint)uVar51 & 0xffff0000 | uVar21 & 0xffff) + 0xf027d5ee ^ 0x100;
  uVar26 = uVar26 + 0x662095b;
  lVar9 = ((uVar8 & 0xffff0000 |
           (ulong)(ushort)(((ushort)uVar8 & 0xff00 | (ushort)(byte)((char)uVar8 - (char)uVar31)) *
                          (short)uVar31)) + 0x5e5e1412) * lVar18;
  bVar36 = ~(byte)uVar30 + 0x96;
  uVar10 = lVar9 * lVar9;
  uVar26 = uVar26 & 0xffffff00 | (uint)(byte)((char)uVar26 + bVar36 + 1);
  uVar43 = (ushort)lVar28 & 0xffffff00;
  uVar21 = (uint)(byte)((char)lVar28 << 1);
  uVar8 = CONCAT71((int7)((ulong)lVar18 >> 8),0x7b);
  iVar45 = (int)(short)uVar10 * (int)(short)uVar8;
  uVar8 = uVar8 & 0xffffffff;
  if ((short)(ushort)iVar45 != iVar45) {
    uVar8 = (ulong)(uVar31 & 0xffff0000 | (uint)(ushort)((short)uVar31 + 0x9d00));
  }
  uVar22 = (uVar10 & 0xffffffffffff0000 | (ulong)(ushort)iVar45) & (ulong)uVar39;
  uVar31 = ~((uint)lVar28 & 0xffff0000 | uVar43 | uVar21);
  bVar12 = (byte)(uVar8 & 0xffffffffffffff0f);
  uVar30 = ((uint)CONCAT62((uint6)(((ulong)bVar11 << 0x1a) >> 0x12),0x100) & 0xffff0000 |
           (uint)(ushort)(0x100 << bVar12 | (ushort)uVar26 >> 0x10 - bVar12)) -
           (uVar27 & 0xffffff00 | (uint)bVar40);
  uVar5 = 0xf;
  uVar14 = (ushort)uVar39;
  if (uVar14 != 0) {
    for (; uVar14 >> uVar5 == 0; uVar5 = uVar5 - 1) {
    }
  }
  uVar22 = (ulong)((uint)CONCAT62(SUB166(SEXT816(lVar9) * SEXT816(lVar9) >> 0x50,0),
                                  (short)((uint)iVar45 >> 0x10)) & 0x3fffffff | 0x100) << 0x20 |
           uVar22 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)uVar22 ^ 1 << ((ushort)uVar8 & 0xf));
  uVar34 = uVar22 / (uVar31 | 0xc0000000);
  uVar51 = uVar34 & 0xffffffff;
  uVar14 = (ushort)(uVar8 & 0xffffffffffffff0f) >> bVar12;
  uVar39 = ((uint)uVar34 & 0xffff0000 | (uint)(ushort)(short)(char)uVar51) + 0x2014d58e;
  uVar26 = uVar26 * 2;
  cVar23 = ((byte)(CONCAT11(((uint)uVar51 >> 0x1b & 1) != 0,bVar40) >> bVar12 % 9) |
           bVar40 << 9 - bVar12 % 9) + 0x77;
  uVar21 = uVar43 | uVar21;
  if (-1 < cVar23) {
    uVar21 = uVar31 & 0xffff0000 | (uint)(ushort)((ushort)uVar31 >> 8 | (ushort)uVar31 << 8);
  }
  uVar6 = CONCAT11((char)(uVar39 >> 8) - (char)(uVar22 % (ulong)(uVar31 | 0xc0000000) >> 8),
                   (char)uVar39);
  uVar48 = uVar6 | 1 << (uVar5 & 0xf);
  uVar7 = ((ushort)(byte)(-(bVar36 ^ (byte)(1 << (SUB168(SEXT816(lVar9) * SEXT816(lVar9) >> 0x40,0)
                                                 & 0x3f)) | 1) - 1) -
          (short)(CONCAT22(0xff,(short)(char)((byte)iVar16 & 0xa0)) >> 1)) -
          (ushort)((uVar6 >> (uVar5 & 0xf) & 1) != 0);
  sVar25 = 0;
  uVar6 = (ushort)uVar26;
  if (uVar6 != 0) {
    for (; (uVar6 >> sVar25 & 1) == 0; sVar25 = sVar25 + 1) {
    }
  }
  uVar31 = (uVar27 & 0xffff0000 | (uint)uVar7) + 0x50;
  uVar8 = (ulong)(((uint)uVar8 & 0xffff0000 | (uint)uVar14) >> ((byte)uVar14 & 0x1f)) | 0x7210;
  uVar21 = (uVar21 & 0xffff0000 | (uint)(ushort)((short)uVar21 + 0x74b5)) >> 1;
  bVar11 = (char)uVar7 - cVar23;
  uVar27 = 0;
  if (uVar30 != 0) {
    for (; (uVar30 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
    }
  }
  uVar10 = CONCAT62((uint6)(uVar10 >> 0x10) & 0xffff,0x3bb6) & 0xfffffffffbffffff;
  lVar18 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  uVar14 = uVar48 & 0xff |
           (ushort)(byte)((byte)((uint)uVar48 >> 8) ^ (byte)((int)(uVar39 & 0xffff0000) >> 0x27)) <<
           8;
  uVar6 = uVar6 - uVar14;
  uVar26 = uVar26 & 0xffff0000 | (uint)uVar6;
  iVar16 = (uint)uVar14 * (uint)uVar5;
  uVar14 = (ushort)iVar16 ^ 1 << (uVar6 & 0xf);
  lVar9 = (ulong)(((uint)uVar10 & 0xffff0000 | (uint)(ushort)((short)uVar10 + uVar5)) >> 1 |
                 uVar30 * -0x80000000) + 0xa0 + (ulong)uVar31 * 0x10;
  bVar36 = (byte)uVar14;
  uVar22 = (ulong)uVar31 << 1 | 1;
  iVar16 = SUB164((ZEXT816(((ulong)(uint3)((int3)((uint3)((uVar39 & 0xffff0000) >> 8) |
                                                 (uint3)(byte)(uVar48 >> 8)) >> 0x1f) &
                           0xffffffffffff00) << 8 |
                           (ulong)(ushort)((uint)iVar16 >> 0x10) & 0xffffffffffffff00 |
                           (ulong)(byte)((byte)((uint)iVar16 >> 0x10) >> 1)) << 0x40 |
                  ZEXT416(CONCAT22((short)(ushort)iVar16 >> 0xf,uVar14) & 0xffffff00 |
                          (uint)(byte)(bVar36 ^ (bVar36 != bVar11) *
                                                (bVar36 ^ bVar11 ^ (bVar36 == bVar11) *
                                                                   (bVar11 ^ (byte)uVar21))))) /
                  ZEXT816((ulong)uVar26 | 0xc000000000000000),0);
  uVar10 = (ulong)uVar27 + 0x579368be >> 1 & 0x7fff;
  uVar43 = (uint)((ulong)uVar27 + 0x579368be) & 0xffff0000 | (uint)uVar10 & 0xffffff00 |
           (uint)(byte)((char)uVar10 + 0x31);
  uVar27 = ((uint)lVar9 & 0xffff0000 |
           (uint)CONCAT11((byte)((ulong)lVar9 >> 8) >> ((byte)uVar8 & 0x1f),(char)lVar9)) ^ uVar26;
  uVar10 = (long)iVar16 << 3;
  uVar34 = (ulong)(long)iVar16 >> 0x3d | uVar10;
  bVar36 = (byte)(uVar8 * 0x5f8f1e61);
  uVar14 = (short)uVar22 + 0xda3dU & 0xff00;
  uVar48 = (ushort)bVar36;
  uVar17 = (ulong)(((uint)uVar22 & 0xffffff00 | 0x80) >> 1 | 0x80000000);
  uVar22 = (ulong)uVar26 & 0xffffffffffff0000;
  uVar51 = (ulong)(uVar31 + uVar21 * 8) & 0xffffffffffffff00 ^ uVar17;
  uVar26 = uVar43 + uVar27;
  uVar21 = uVar26 + 1;
  lVar9 = uVar17 + 0x2d21bcfa;
  uVar5 = (uVar6 - 1 &
          ~(1 << (~(ushort)(byte)((char)lVar18 + '\b' + bVar36 + (char)uVar27 +
                                 (CARRY4(uVar43,uVar27) || 0xfffffffe < uVar26)) & 0xf))) + 0xc84b;
  uVar26 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 * 0x1000000;
  bVar11 = (bVar36 & 0x1f) % 0x11;
  uVar7 = uVar5 >> bVar11 | uVar5 << 0x11 - bVar11;
  uVar17 = uVar22 | 0xc000000000000000 | (ulong)uVar7;
  uVar26 = uVar26 >> (bVar36 & 0x1f) | uVar26 << 0x20 - (bVar36 & 0x1f);
  uVar5 = 0xf;
  uVar6 = (ushort)uVar34;
  if (uVar6 != 0) {
    for (; uVar6 >> uVar5 == 0; uVar5 = uVar5 - 1) {
    }
  }
  uVar43 = (uint)uVar10;
  lVar18 = (((ulong)(uint3)(uVar31 >> 8) & 0xffffffffffff00) << 8 | (ulong)uVar5) - 0xae44398c;
  uVar5 = -(short)(char)(((char)uVar21 - (char)uVar7) + -1);
  lVar28 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar17 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  uVar31 = (uVar43 & 0xffff0000 |
           (ushort)((ushort)(byte)((char)uVar34 + (char)lVar9) * (ushort)(byte)uVar26) & 0xffffff0f)
           + 0xda9b8fa6 >> 1;
  uVar24 = (ushort)((ulong)lVar28 >> 0x30);
  uVar29 = uVar7 << 1 & ~(1 << (uVar24 & 0xf));
  uVar34 = uVar51 & 0xffffffffffffff00;
  uVar33 = (ulong)((uint)(ushort)((uVar14 | uVar48) >> 1) | (uint)(uVar14 | uVar48) << 0x1f);
  uVar6 = uVar14 | uVar48 & 0xffc4;
  uVar44 = uVar33 * -0x130676ca;
  uVar10 = (ulong)((((int)lVar18 * 0x100000 | (uint)((ulong)lVar18 >> 0x2c)) ^ 0x1c) + uVar26) << 1;
  uVar17 = (ulong)(uVar31 | uVar26 << 0x1f) << ((byte)uVar31 & 0x3f);
  uVar7 = (short)uVar17 - 0x714;
  uVar31 = (uVar27 & (uint)uVar51 & 0xffff0000 ^ 0xf6af9e98) & 0xffff0000 |
           (uint)(ushort)((ushort)uVar44 + 0xcf4c);
  bVar11 = (byte)uVar7 & 0x3f;
  uVar51 = (uVar17 & 0xffffffffffff0000 | (ulong)uVar7) >> bVar11 |
           (uVar22 | uVar29) << 0x40 - bVar11;
  uVar17 = lVar28 >> 0x30 & 0xffffffffffff0000U | (ulong)(ushort)(uVar24 - 0x81);
  if ((short)(uVar24 + 0x2f81) < 0) {
    uVar34 = (ulong)uVar31;
  }
  bVar11 = (byte)uVar51;
  uVar47 = (ulong)uVar26 << (bVar11 & 0x3f) | (ulong)(uVar26 >> 0x40 - (bVar11 & 0x3f));
  uVar41 = ((ulong)uVar29 & 0xfe) >> 1;
  uVar30 = (uint)uVar22 | uVar29 & 0xffffff00 | (uint)uVar41;
  uVar37 = (uVar34 >> 0x1d | (ulong)(uint)(int)(short)uVar5 << 0x23) - 0x3c55ce9a;
  uVar27 = ((uint)lVar9 & 0xffffff00 | (uint)(iVar16 >> 0x1f) >> 0x1d | uVar43 & 0xff) * 0x3247861c
           & 0xd20f8e8d;
  uVar7 = (short)uVar5 >> 0xf;
  uVar34 = (ulong)CONCAT22(uVar7,(uVar5 & 0xff) * (ushort)(byte)uVar41) |
           1 << ((ulong)uVar27 + 1 & 0x3f);
  uVar29 = uVar7 << 1 & 0xff | 1 |
           (ushort)(byte)((byte)((ushort)(uVar7 << 1) >> 8) | (byte)(uVar31 + 0x7787d2b5 >> 8)) << 8
  ;
  lVar18 = (ulong)(uVar14 | uVar48 & 0xfffe) << 1;
  uVar26 = (uint)lVar18 & 0x1f;
  uVar49 = uVar27 ^ 1 << uVar26;
  uVar41 = (ulong)(CONCAT18((uVar27 >> uVar26 & 1) != 0,uVar17) >> 0x32) | uVar17 << 0xf;
  uVar5 = (ushort)uVar34;
  uVar14 = uVar29 ^ (ushort)(uVar5 == uVar29) * (uVar29 ^ (ushort)uVar44);
  uVar5 = uVar5 ^ (ushort)(uVar5 != uVar29) * (uVar5 ^ uVar14);
  uVar17 = uVar34 & 0xffffffffffff0000 | (ulong)uVar5 & 0xffffffffffffff00 |
           (ulong)(byte)((byte)uVar5 | (byte)(uVar47 << 1) | (long)uVar47 < 0);
  uVar26 = (uint)(uVar8 * 0x5f8f1e61) & 0xffff0000 |
           (uint)(ushort)(uVar6 << (bVar11 & 0xf) | uVar6 >> 0x10 - (bVar11 & 0xf));
  uVar22 = uVar41 & 0xffffffffffff0000;
  uVar43 = (uint)uVar22 |
           (uint)(ushort)(((ushort)uVar41 & 0xff00 | 0xff) + (short)uVar17 +
                         (ushort)((uVar7 >> 0xb & 1) != 0));
  bVar36 = (byte)(uVar14 >> 8);
  uVar27 = (CONCAT22(uVar7,uVar14) ^ 0x8000000) & 0xffff0000 |
           (uint)(ushort)(uVar14 & 0xff | (ushort)(byte)(bVar36 >> 6 | bVar36 << 2) << 8);
  uVar8 = ((uVar10 & 0xffffffffffff0000 |
           uVar10 & 0xffff |
           (ulong)(SEXT816((long)uVar44) != SEXT816((long)uVar33) * SEXT416(-0x130676ca))) ^ 0xbfed)
          << 1;
  uVar14 = (short)(char)(uVar48 & 0xffc4) << (bVar11 & 0x1f);
  uVar5 = (ushort)uVar51 | (ushort)lVar18;
  uVar31 = (uint)uVar17;
  uVar39 = uVar26 + uVar31;
  uVar10 = uVar44 & 0xffffffffffffff00;
  if (!CARRY4(uVar26,uVar31)) {
    uVar10 = uVar8;
  }
  uVar31 = 0;
  if (uVar43 != 0) {
    for (; (uVar43 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
    }
  }
  uVar17 = ((uVar10 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar8 * 5000)) ^ 0x40) -
           0x4774450e;
  uVar10 = (ulong)(ushort)((byte)(((char)(uVar37 >> 8) >> 4) << 1) + 0x6a48);
  uVar33 = uVar37 & 0xffffffffffff0000 | uVar10;
  uVar6 = uVar5 + 0x80cd;
  uVar51 = uVar51 & 0xffffffffffff0000 | (ulong)uVar6;
  iVar16 = 0x1f;
  if (uVar39 != 0) {
    for (; uVar39 >> iVar16 == 0; iVar16 = iVar16 + -1) {
    }
  }
  uVar50 = (uVar49 & 0xffff0000 |
           (uint)((ushort)((ushort)uVar49 & 0xff00 |
                          (ushort)(byte)((byte)uVar49 &
                                        ((byte)(uVar30 << 1) | (int)uVar30 < 0) &
                                        ~(byte)(1 << ((ulong)uVar49 & 0x3f)))) >>
                 ((byte)uVar5 & 0x1f))) - (int)uVar51;
  uVar43 = uVar50 & 0xfffffffe;
  uVar30 = uVar21 & 0xffff0000 | (uint)uVar14 | 0xc0000000;
  uVar49 = (uint)uVar8 & 0xffffff00 | (uint)(byte)((char)uVar8 >> 9);
  uVar5 = 0xf;
  if (uVar14 != 0) {
    for (; uVar14 >> uVar5 == 0; uVar5 = uVar5 - 1) {
    }
  }
  bVar36 = (byte)uVar6;
  bVar11 = bVar36 & 0x1f;
  lVar18 = (ulong)(uint)((int)uVar33 + -0x7dd1e502 +
                        (int)(((ulong)((((uVar27 << 1 | uVar21 >> 0x1f) - uVar26) -
                                       (uint)((int)uVar27 < 0)) - (int)uVar51 & 0x3fffffff) << 0x20
                              | uVar34 & 0xffff0000 | (ulong)(ushort)(short)(char)(byte)uVar39) %
                             (ulong)uVar30)) << 1;
  iVar16 = (int)(uVar17 >> 0xe);
  bVar36 = bVar36 & 0x3f;
  uVar51 = uVar51 ^ (ulong)((int)lVar18 * uVar43 == uVar51) * (uVar51 ^ (uVar22 | (byte)uVar39));
  bVar40 = (byte)uVar51;
  uVar27 = (iVar16 << 1 | (uint)(iVar16 < 0)) << (bVar40 & 0x1f);
  uVar26 = uVar49 + (int)uVar51 * 4;
  uVar10 = (uVar33 >> 0xc | uVar10 << 0x34) >> (bVar40 & 0x3f);
  uVar14 = (ushort)uVar10 & 0xff00 | (ushort)(byte)((char)uVar10 * '\x02');
  uVar26 = uVar26 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar26 & 0xfed9) << 1 |
                         (ushort)((ushort)(uVar17 >> bVar36) | (ushort)(lVar18 << 0x40 - bVar36)) >>
                         0xf);
  bVar36 = (byte)uVar27;
  bVar36 = bVar36 >> 6 | bVar36 << 2;
  uVar27 = uVar27 & 0xffffff00 | (uint)bVar36;
  uVar21 = uVar26 * 0x39e432a8;
  uVar22 = (ulong)uVar21;
  iVar45 = -((int)uVar39 >> 0x1f) + 0x4584ff9e;
  uVar10 = (ulong)uVar5 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar5 << 1);
  iVar16 = (uint)(ushort)uVar10 * 0xfed9;
  uVar5 = (ushort)((uint)iVar16 >> 0x10);
  if (uVar5 == 0) {
    uVar14 = (ushort)(uVar30 << bVar11) |
             (ushort)((((uVar31 ^ 0x8ec01210) & 0xffff0000 |
                       (uint)(ushort)((short)(uVar31 ^ 0x8ec01210) + 0x3b59)) >> 1 &
                      ~(1 << (uVar39 & 0x1f))) >> 0x20 - bVar11);
  }
  bVar11 = (byte)iVar16;
  bVar12 = (byte)((uint)iVar45 >> 8);
  bVar40 = (byte)iVar45;
  bVar19 = bVar12 ^ (bVar11 == bVar12) * (bVar12 ^ bVar40);
  uVar34 = CONCAT62(0x4584,(short)iVar16) & 0xffffffffffffff00 |
           (ulong)(byte)(bVar11 ^ (bVar11 != bVar12) * (bVar11 ^ bVar19));
  if (bVar12 < bVar11) {
    uVar49 = (uint)uVar8 & 0xffff0000 | uVar39 >> 0x1f;
  }
  uVar6 = CONCAT11(bVar19,bVar40);
  if ((char)bVar11 <= (char)bVar12) {
    uVar6 = uVar5;
  }
  uVar8 = uVar22 ^ (ulong)(uVar34 == uVar22) * (ulong)(uVar21 ^ uVar27);
  uVar24 = (short)uVar8 << ((byte)uVar6 & 0x1f);
  uVar5 = uVar5 & 0xff | (ushort)(byte)((byte)((ulong)uVar5 >> 8) >> 5) << 8;
  uVar8 = uVar34 ^ (ulong)(uVar34 != uVar22) * (uVar34 ^ uVar8) | 1 << ((ulong)uVar5 & 0x3f);
  uVar7 = (ushort)(CONCAT12((byte)((ulong)uVar24 >> 8) < (byte)((ulong)uVar5 >> 8),uVar6) >> 0xb) |
          uVar6 << 6;
  cVar23 = (char)uVar8 + bVar36;
  uVar31 = uVar26 * 0x23faeb45 >> 1;
  uVar21 = -((int)uVar39 >> 0x1f) & 0xffff0000;
  uVar48 = ~(uVar5 ^ 1 << ((ushort)uVar27 & 0xf));
  bVar11 = (byte)uVar7 & 0x3f;
  uVar8 = uVar8 & 0xffffffffffffff00 | (ulong)(byte)(cVar23 * '\x02' | cVar23 < '\0');
  bVar40 = (byte)uVar7 ^ (byte)((ulong)uVar7 >> 8);
  uVar5 = uVar14 >> 1;
  iVar16 = (int)(short)-(short)uVar8 *
           (int)(short)(uVar48 >> 1 | (ushort)((uVar48 & 1) != 0) << 0xf);
  uVar29 = (ushort)((uint)iVar16 >> 0x10);
  uVar48 = (ushort)iVar16;
  uVar48 = uVar48 & 0xff |
           (ushort)(byte)((char)((ulong)uVar48 >> 8) + (char)((ulong)uVar29 >> 8)) << 8;
  uVar27 = uVar21 << (bVar40 & 0x1f) | uVar21 >> 0x20 - (bVar40 & 0x1f) | 0x242f9c53;
  uVar35 = (uVar7 << bVar11 | (ushort)((uVar49 << 0xe | uVar49 >> 0x12) >> 0x40 - bVar11)) * 2 +
           uVar48;
  uVar21 = ((ushort)(((uVar24 & 0xff | 0x5a00) - ((ushort)uVar43 >> ((byte)uVar6 & 0x1f))) -
                    (ushort)(uVar8 != 0)) | 0xbaac0000) & ~(1 << (uVar5 & 0x1f)) |
           (uint)(1 << ((ulong)(uVar29 & 0xff) & 0x3f));
  uVar43 = uVar21 + 0x9913c8b7;
  uVar8 = (ulong)uVar31 & 0xffffffffffff0000 | (ulong)((uVar26 * 0x23faeb45 & 1) != 0) << 0x3f |
          (ulong)(ushort)((short)uVar31 << 1 | (ushort)(0x66ec3748 < uVar21));
  iVar16 = (uint)uVar48 * (uVar43 & 0xffff);
  uVar24 = (ushort)((uint)iVar16 >> 0x10);
  uVar10 = uVar10 * 2;
  uVar48 = (ushort)iVar16 ^ (ushort)(1 << (uVar10 & 0x3f));
  lVar18 = uVar10 - 0x2399b507;
  bVar11 = (byte)lVar18 & 7;
  uVar7 = (ushort)lVar18;
  uVar29 = uVar7 ^ (ushort)(uVar48 == uVar7) * (uVar7 ^ uVar5);
  uVar48 = uVar48 ^ (ushort)(uVar48 != uVar7) * (uVar48 ^ uVar29);
  bVar36 = (byte)((ulong)uVar48 >> 8);
  bVar12 = (byte)((ulong)uVar29 >> 8);
  cVar23 = bVar36 - bVar12;
  uVar48 = uVar48 & 0xff;
  if ((SBORROW1(bVar36,bVar12) != SBORROW1(cVar23,'\x01')) == (char)(cVar23 - 1U) < '\0') {
    uVar27 = uVar27 & 0xffff0000 | (uint)uVar24;
  }
  sVar25 = CONCAT11(0x72U >> bVar11 | 'r' << 8 - bVar11,0x6b) +
           ((ushort)(uVar6 << 6 & 0xff00 | (ushort)(byte)(bVar40 << 1)) >> 1 |
           (ushort)((char)bVar40 < '\0') << 0xf) + (ushort)(bVar36 < bVar12 || cVar23 == '\0');
  uVar30 = (char)uVar5 + -0x576a684f + (uint)CARRY1((byte)(uVar24 >> 1),bVar12);
  uVar7 = (uVar35 & 0xff) * 2 + (ushort)uVar43 + 1;
  uVar21 = ((uint)CONCAT71((int7)((long)uVar8 >> 9),(char)((long)uVar8 >> 1) + (char)uVar29) |
           uVar43) - uVar43;
  uVar31 = uVar21 + 4;
  bVar36 = (byte)sVar25 | (byte)((ushort)sVar25 >> 8);
  uVar8 = CONCAT62(0x6096,sVar25) & 0xffffffffffffff00;
  uVar3 = (uint)(ushort)(((ushort)uVar21 ^ 0x62d7) + 0x8722);
  uVar5 = (ushort)(uVar50 >> 0x1c);
  bVar11 = (byte)uVar31;
  uVar46 = (uVar30 & 0xffffff00 | (uint)(byte)(((char)uVar30 - (char)uVar48) - 1)) * 2;
  uVar6 = ((uVar35 & 0xfe00) >> 1) + 0xb;
  sVar25 = uVar6 << (bVar11 & 0x1f);
  uVar10 = (ulong)CONCAT22((short)uVar6 >> 0xf,sVar25);
  iVar16 = uVar46 + (uint)(ushort)((ushort)(CONCAT12(bVar11 < bVar36,uVar5) >> 7) | uVar5 << 10) * 8
           + 0x10a9b4e4;
  uVar5 = (short)(char)(((byte)uVar14 & 0xfe | (byte)(uVar43 >> 0x1f)) ^ bVar36) *
          (short)(char)((uint)iVar16 >> 8);
  uVar32 = (uVar26 ^ 0xedb0) & 0xffffff00 | (uVar26 ^ 0xedb0) >> 1 & 0x7f;
  iVar45 = (uVar31 & 0xffff0000 | (uint)(ushort)((short)uVar46 << (bVar11 & 0x1f))) + 0xb3f7f102;
  uVar15 = CONCAT31(CONCAT21((short)((uint)iVar45 >> 0x10),(char)iVar45),
                    (char)iVar45 + (char)((uint)iVar45 >> 8));
  uVar30 = uVar32 & 0xf73d | 0xc000;
  uVar39 = CONCAT22((short)iVar16,uVar5) & 0x3fffffff;
  uVar49 = uVar39 / uVar30;
  uVar50 = (uint)(ushort)(uVar48 | (ushort)(byte)(cVar23 - 1U) << 8) << 0x11 | uVar49 & 0xffff;
  uVar31 = uVar46 & 0xffff0000 | (uint)(ushort)((ushort)uVar31 | (ushort)uVar15);
  uVar26 = 0;
  if (uVar50 != 0) {
    for (; (uVar50 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
    }
  }
  uVar14 = (uVar7 & 0xff00 | (ushort)(byte)((char)uVar7 << 3)) & (ushort)uVar43;
  uVar15 = uVar15 & ~(1 << ((uVar3 & 0xf8) >> 3));
  uVar46 = uVar31 + 0x411cc0df;
  uVar22 = (ulong)(uVar31 < 0xbee33f21) << 0x20 |
           uVar8 | (byte)((bVar36 - (char)((ulong)(ushort)(uVar39 % uVar30) >> 8)) - 1);
  uVar31 = (uint)(uVar22 >> 0x18);
  uVar43 = (uint)(uVar22 << 9);
  uVar34 = (ulong)(uVar31 | uVar43);
  bVar11 = (byte)uVar15;
  uVar30 = (uVar32 & 0xae31f73d | 0xc000) << (bVar11 & 0x1f);
  uVar5 = (short)(char)((uint)uVar5 >> 8) & uVar14;
  uVar22 = (ulong)uVar27 << 0x20 | (ulong)uVar6;
  if ((POPCOUNT(uVar5 & 0xff) & 1U) != 0) {
    uVar22 = (ulong)uVar15;
  }
  uVar14 = uVar14 & uVar5;
  if ((uVar49 & 0x100) == 0 && (uVar49 & 0x4000) == 0) {
    uVar46 = uVar46 & 0xffff0000 | (uint)uVar22 & 0xffff;
  }
  uVar27 = uVar30 & 0xffff0000 |
           (uint)(ushort)(((short)uVar30 + -0x9a5) - (ushort)((ushort)uVar46 < 0x45f4));
  auVar1 = ZEXT816((ulong)uVar50) * ZEXT816((ulong)uVar50);
  uVar22 = uVar22 & 0xffffffffffff0000 | (ulong)(ushort)(uVar14 + sVar25 * 8);
  bVar40 = SUB161(auVar1 >> 8,0);
  bVar36 = bVar11 + bVar40;
  bVar52 = SCARRY1(bVar11,bVar40) != SCARRY1(bVar36,'\0');
  uVar30 = uVar15 & 0xffffff00 | (uint)bVar36;
  if (bVar52 != (char)bVar36 < '\0') {
    uVar30 = uVar15 & 0xffff0000 | uVar31 | uVar43 & 0xffff;
  }
  uVar51 = (ulong)uVar30;
  uVar17 = (ulong)(uVar3 << 0x1d | (uVar21 & 0xffff0000 | uVar3) >> 3);
  if (!bVar52) {
    uVar51 = uVar51 & 0xffffffffffff0000 | (ulong)uVar5;
    uVar17 = uVar34;
  }
  uVar21 = (uint)uVar5;
  if (bVar36 == 0 || bVar52 != (char)bVar36 < '\0') {
    uVar21 = uVar27;
  }
  bVar36 = (byte)uVar51;
  uVar33 = (ulong)(0xffffffff36875639 < uVar22 ||
                  CARRY8(uVar22 + 0xc978a9c6,(ulong)CARRY1(bVar11,bVar40))) << 0x20 |
           uVar26 - uVar34 & 0xffff0000 | (ulong)(ushort)((short)(uVar26 - uVar34) << 1 | 1);
  uVar44 = uVar17 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar17 >> (bVar36 & 0x1f));
  uVar26 = (uint)(uVar51 >> (bVar36 & 0x3f));
  uVar30 = uVar31 | uVar43 & 0xffff | 0x32d7e7c4;
  iVar16 = uVar26 + 0x405ddd7c;
  if (uVar26 < 0xbfa22284) {
    uVar27 = (uint)uVar44;
  }
  uVar26 = ((uint)(uVar33 >> (bVar36 & 0x1f)) | (uint)(uVar33 << 0x21 - (bVar36 & 0x1f))) +
           0xc44eab2a;
  uVar39 = (uVar31 | uVar43 & 0xffff) + (int)uVar22 | uVar21;
  uVar51 = (long)(int)uVar30 * (long)(int)uVar30;
  bVar11 = (byte)iVar16;
  uVar31 = (int)(uint)uVar14 >> (bVar11 & 0x1f);
  bVar11 = bVar11 & 0x1f;
  uVar30 = iVar16 << bVar11 | uVar46 >> 0x20 - bVar11;
  sVar25 = (short)uVar44;
  uVar48 = sVar25 << 1 | (ushort)(sVar25 < 0);
  uVar44 = uVar10 - 1;
  uVar6 = CONCAT11((char)(uVar26 >> 8) << 1,uVar44 != 0 && uVar10 != 0) & 0x3fff;
  uVar5 = (ushort)(byte)((byte)((ulong)uVar30 >> 8) | 0xc0);
  uVar31 = uVar31 & 0xffff0000 | (uint)(ushort)((short)uVar31 << ((byte)uVar30 & 0x1f));
  uVar33 = -((ulong)~uVar27 - SUB168(auVar1 >> 0x40,0) & 0xffffffffffff0000 |
            uVar51 >> 0x20 & 0xffff);
  uVar14 = (byte)uVar30 & 0xff0f;
  sVar13 = (sbyte)uVar14;
  uVar14 = (ushort)((ushort)uVar30 & 0xff00 | 0xc000 | uVar14) >> sVar13 | 0x6da4 << 0x10 - sVar13;
  uVar10 = (ulong)uVar30 & 0xffffffffffff0000 | (ulong)uVar14;
  bVar11 = (byte)((ulong)uVar14 >> 8);
  uVar5 = -(uVar6 / uVar5 & 0xff |
           (ushort)(byte)(((char)((ulong)(ushort)(uVar6 % uVar5 << 8) >> 8) - bVar11) - 1) << 8);
  uVar41 = uVar33 & 0xffff;
  bVar36 = (byte)(uVar8 >> 0x18);
  uVar27 = (uint)CONCAT11(((char)(uVar34 >> 8) - (char)uVar5) + -1,bVar36);
  uVar34 = (ulong)uVar39 * 2 + (ulong)(uVar26 & 0xffff0000 | (uint)uVar5);
  uVar8 = (ulong)uVar21 & 0xffffffffffff0000 |
          (ulong)(ushort)((ushort)uVar21 & ~(1 << ((short)(uVar22 >> 1) + (short)uVar26 & 0xfU)));
  if (-1 < (char)((char)((ulong)uVar5 >> 8) - (char)uVar5)) {
    uVar8 = (ulong)(uVar43 & 0xffff0000 | uVar27);
  }
  uVar26 = (uint)((uVar44 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar44 << 1)) >> 1);
  bVar12 = (byte)uVar34;
  bVar40 = (byte)uVar14 & 7;
  uVar6 = (ushort)uVar34 & 0xff00 | (ushort)(byte)(bVar12 >> bVar40 | bVar12 << 8 - bVar40);
  uVar5 = CONCAT11(bVar11,bVar12 + 1);
  bVar40 = (byte)uVar14 & 0xf;
  return (ulong)uVar5 + (uVar41 >> 1) + uVar10 + (ulong)(byte)(0x5f - CARRY1(bVar36,bVar11)) * 0x100
         + uVar8 + uVar33 + (long)(int)uVar31 * 0x7d724300 +
         (uVar17 & 0xffffffffffff0000 | (ulong)uVar48 & 0xffffffffffffff00 |
         (ulong)(byte)((char)uVar48 - (char)uVar39)) +
         (ulong)(uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18
                ) +
         (uVar34 & 0xffffffffffff0000 | (ulong)(ushort)(uVar6 << bVar40 | uVar6 >> 0x10 - bVar40)) +
         (ulong)(uint)((int)((int)uVar41 +
                            (uVar43 & 0xffff0000 | uVar27 & 0xffffff00 |
                            (uint)(byte)(bVar36 + bVar11))) >> 1) + (ulong)uVar31 +
         (ulong)(uVar5 + 0x2e3dfe50 + (int)uVar10) +
         (ulong)((int)(uVar51 >> 0x20) << 1 | (uint)uVar8 >> 0x1f) + 0x7d6dfd92aa39;
}



// WARNING: Removing unreachable block (ram,0x004037a2)
// WARNING: Removing unreachable block (ram,0x00403176)
// WARNING: Removing unreachable block (ram,0x004031d3)
// WARNING: Removing unreachable block (ram,0x00403c38)
// WARNING: Removing unreachable block (ram,0x004032c0)
// WARNING: Removing unreachable block (ram,0x004033d3)
// WARNING: Removing unreachable block (ram,0x00403388)

long log_size_10_var_002(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  short sVar4;
  uint uVar5;
  ushort uVar6;
  byte bVar7;
  char cVar10;
  uint uVar8;
  ulong uVar9;
  sbyte sVar11;
  byte bVar12;
  byte bVar13;
  ushort uVar14;
  short sVar15;
  uint uVar16;
  ulong uVar17;
  char cVar18;
  ushort uVar19;
  ushort uVar20;
  ulong uVar21;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint7 uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  byte bVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  byte bVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  ushort uVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  byte bVar47;
  ushort uVar48;
  ulong uVar49;
  bool bVar50;
  bool bVar51;
  
  for (lVar45 = 0; (0x1c53e29bU >> lVar45 & 1) == 0; lVar45 = lVar45 + 1) {
  }
  for (sVar15 = 0xf; 0xa94fU >> sVar15 == 0; sVar15 = sVar15 + -1) {
  }
  uVar46 = ((ulong)(((uint7)(CONCAT18(1,lVar45) >> 0x10) & 0xffffffffffff) >> 0x19) &
           0xffffffffffff00) << 8;
  uVar43 = sVar15 >> 0x10;
  uVar32 = (uVar46 | uVar43) - 0x5ee75fcd;
  uVar40 = SEXT24((short)uVar43);
  uVar48 = 0;
  if (uVar43 != 0) {
    for (; (uVar43 >> uVar48 & 1) == 0; uVar48 = uVar48 + 1) {
    }
  }
  bVar7 = (byte)uVar32;
  bVar47 = bVar7 ^ (bVar7 == 0x47) * (bVar7 ^ (byte)(sVar15 >> 0x10));
  uVar42 = (ulong)(byte)((bVar7 != 0x47) * (bVar47 ^ 0x47) ^ 0x47) | 0x1ce8fe00;
  lVar45 = 0;
  if (uVar42 != 0) {
    for (; (uVar42 >> lVar45 & 1) == 0; lVar45 = lVar45 + 1) {
    }
  }
  uVar42 = (ulong)(SEXT816((long)(uVar42 * 0x60daad9d)) !=
                  SEXT816((long)uVar42) * SEXT416(0x60daad9d)) << 0x20 |
           uVar42 * 0x60daad9d & 0xffffffff;
  uVar8 = (uint)(uVar42 << 0xe);
  uVar23 = (uint)(uVar42 >> 0x13) | uVar8;
  uVar25 = (uint)bVar47 << 10;
  if ((uVar40 & 0x7fffff) == 0) {
    uVar25 = uVar40 * -0x200;
  }
  if (-1 < (int)(uVar40 * -0x400 | (uint)((uVar32 & 0x3fff00) << 10) >> 0x1f)) {
    uVar23 = uVar8 & 0xffff0000 | uVar25 & 0xffff;
  }
  iVar39 = 0;
  if ((int)(short)uVar25 != 0) {
    for (; ((uint)(int)(short)uVar25 >> iVar39 & 1) == 0; iVar39 = iVar39 + 1) {
    }
  }
  uVar22 = (short)uVar23 >> 2;
  bVar7 = (byte)(uVar43 & 0xc256437c);
  auVar3 = ZEXT216(uVar22) * ZEXT816(0xc256437f);
  uVar40 = (uint)SUB162(auVar3,0) * 0xf;
  uVar8 = (int)CONCAT62(SUB166(auVar3 >> 0x10,0),(short)uVar40) * 0x3da9a9d9;
  if (((ulong)(uVar48 | 0x3000000) << 0x24 | 0xf) == 0xffffffffffffffff) {
    uVar8 = uVar8 & 0xffff0000 | 0x832c;
  }
  uVar48 = (ushort)uVar8 | 0xc000;
  uVar32 = (long)(int)(uVar8 & 0xffff0000 |
                      (uint)(ushort)((short)((uVar40 & 0x3fff0000 | (uint)uVar48) / (uint)uVar48) >>
                                    0xd)) * -0x4000000;
  uVar8 = 0x1fff3;
  if ((long)(int)uVar32 != uVar32) {
    uVar8 = 0;
  }
  uVar25 = (int)lVar45 + 0xa12b4cd1;
  uVar8 = uVar8 ^ (uVar23 & 0xffff0000 | (uint)(ushort)((ushort)(uVar22 - 0x7f) >> 0xc | 0xff30));
  uVar23 = uVar25 & 0xffffff00 | uVar25 >> 1 & 0x7f;
  cVar10 = (bVar7 << 2 | bVar7 >> 6) + 0x2c;
  uVar32 = (ulong)((uint)(uVar32 >> 0x20) & 0x3fffffff) << 0x20 |
           (uVar32 & 0xffffffff) + 0x3f4ac851 & 0xffffffff;
  uVar42 = uVar32 / 0xe12b21bf;
  bVar7 = (byte)(uVar42 >> 8);
  uVar32 = uVar32 % 0xe12b21bf;
  lVar44 = (ulong)(uVar23 + 0xd7990616) * 2;
  lVar45 = 0xe12b21bf;
  if (0xa3ac98fa < uVar8) {
    lVar45 = lVar44;
  }
  bVar47 = (bVar7 & 0x1f) % 9;
  uVar29 = (uVar8 + 0x5c536705) * -0x7472935a;
  uVar48 = (short)uVar23 + 0x5f8;
  uVar43 = CONCAT11((char)((uVar43 & 0xc256437c) >> 8) + (char)uVar32 + ((uVar40 & 0x10000) != 0),
                    cVar10);
  uVar40 = ((uint)uVar42 & 0xffff0000 |
           (uint)(byte)(bVar7 << bVar47 | (byte)(CONCAT11(uVar8 < 0xa3ac98fb,bVar7) >> 9 - bVar47))
           << 8) ^ 0x1593918c;
  uVar23 = uVar40 & 0xffffff00;
  uVar38 = uVar40 >> 8 & 0xff;
  uVar16 = (int)(char)bVar7 & ((uint)uVar46 & 0xc2560000 | (uint)uVar43);
  uVar31 = (uint)lVar45;
  uVar40 = ((uint)uVar32 & 0xffff0000 | (uint)((ushort)uVar32 & 0xfdff)) + 0xf0d6d370 + uVar31 * 4;
  uVar32 = (ulong)uVar16 & 0xffffffffffffff0f;
  sVar11 = (sbyte)uVar32;
  uVar22 = (ushort)uVar40 >> sVar11 | ((ushort)uVar23 | (ushort)uVar38) << 0x10 - sVar11;
  uVar40 = uVar40 & 0xffff0000 | (uint)uVar22;
  bVar47 = (byte)uVar38;
  bVar12 = (byte)(uVar32 >> 8);
  uVar38 = SUB164(auVar3 >> 0x6b,0) + uVar40;
  uVar43 = ((ushort)uVar16 & 0xf) - (uVar43 & 0x7fff);
  uVar32 = 0x3f;
  if (uVar29 != 0) {
    for (; uVar29 >> uVar32 == 0; uVar32 = uVar32 - 1) {
    }
  }
  bVar33 = (byte)((ushort)((ushort)((uVar38 & 1) != 0) << 8) >> 2);
  uVar34 = (uint)uVar43 << 0x1f;
  uVar5 = (uVar31 | 0xd69b5e81) >> 0xc;
  uVar38 = (uVar38 & 0xffff0000 | uVar38 >> 1 & 0x7fff) + 1;
  bVar50 = (uVar31 + 1 & 1) != 0;
  uVar42 = (long)(ulong)(uVar31 + 1) >> 1;
  uVar46 = uVar42 - 0x167c9fe5;
  bVar7 = (((char)uVar48 << (bVar7 & 0x3f) |
           (byte)((uVar25 & 0xffff0000 | (uint)uVar48) >> 0x40 - (bVar7 & 0x3f))) + cVar10 + 'u') -
          (uVar42 < 0x167c9fe5 || uVar46 < bVar50);
  uVar25 = (int)uVar46 - (uint)bVar50 & 0xffff0000 | (uint)(ushort)(short)(char)bVar7;
  uVar40 = -(-uVar40 | 0xd2);
  uVar19 = (ushort)uVar32 >> 1 | (ushort)((uVar32 & 1) != 0) << 0xf;
  bVar37 = (byte)uVar29;
  uVar48 = uVar19 + 0x86c9;
  uVar20 = uVar48 + (bVar7 < bVar37);
  uVar46 = (ulong)(0x7936 < uVar19 || CARRY2(uVar48,(ushort)(bVar7 < bVar37))) << 0x20 |
           ((ulong)(uVar23 | (byte)(bVar47 ^ (bVar47 != bVar12) *
                                             (bVar47 ^ bVar12 ^ (bVar47 == bVar12) *
                                                                (bVar12 ^ (byte)uVar22)))) &
           0x7fffff80) << 1 | (ulong)(byte)(bVar7 ^ (bVar7 != bVar37) * (bVar7 ^ bVar37));
  uVar42 = uVar32 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar20 & 0xff | (ushort)(byte)((char)((ulong)uVar20 >> 8) + 1) << 8) |
           0x72c75da3;
  uVar32 = (ulong)uVar16 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar43 & 0xff | (ushort)((int)uVar34 < 0) << 8);
  if ((ulong)bVar33 < 0xffffffffa1fb9402) {
    uVar32 = uVar42;
  }
  bVar7 = ((byte)uVar32 & 0x1f) % 0x11;
  lVar45 = (long)(int)((uint)(uVar46 >> 0x1d) | (uint)(uVar46 << 4)) *
           (long)(int)(uVar40 & 0xffff0000 |
                      (uint)CONCAT11((byte)(uVar40 >> 8) | (byte)uVar40,(byte)uVar40));
  uVar16 = (int)uVar32 + 1;
  uVar23 = (int)(short)lVar45 * (int)(short)uVar42;
  uVar41 = uVar25 >> 1;
  uVar40 = (uint)(ushort)((ushort)uVar23 | 0xc000);
  uVar23 = uVar23 & 0xffff | (uint)((ushort)(uVar23 >> 0x10) & 0x3fff) << 0x10 | 0xc000;
  uVar40 = (uVar23 / uVar40 & 0xffff) * (uVar23 % uVar40);
  bVar47 = (byte)uVar16 & 0x1f;
  uVar24 = bVar33 + 0x5e046bfe << bVar47 |
           ((uint)((ulong)lVar45 >> 0x20) & 0xffff0000 | uVar40 >> 0x10) >> 0x20 - bVar47;
  uVar23 = ((ushort)(0x7c14 << bVar7 | (ushort)(0x17c14 >> 0x11 - bVar7)) | 0xe59f0000) +
           ((uint)((ulong)(lVar44 + -0x7cdc75b8) >> 0x25) << 0x10 | (uint)uVar42 >> 0x10);
  uVar40 = (uVar40 & 0xffff) + uVar24;
  uVar31 = uVar34 ^ 0x400;
  if ((POPCOUNT(uVar40 & 0xff) & 1U) == 0) {
    uVar31 = uVar23;
  }
  uVar16 = uVar16 & 0xffffff0f;
  sVar11 = (sbyte)uVar16;
  uVar48 = (ushort)uVar31 >> sVar11 | (short)uVar41 << 0x10 - sVar11;
  bVar50 = (short)((uVar40 & 0xffff) * (uVar29 & 0xffff) >> 0x10) != 0;
  bVar47 = (byte)uVar42;
  uVar32 = (ulong)CONCAT11(-bVar50,bVar47);
  uVar8 = (uVar23 + (uVar8 + 0x5c536705) * 0x7472935a) - (uint)bVar50;
  uVar16 = uVar16 >> 1;
  uVar40 = CONCAT31((uint3)(uVar25 >> 9),(byte)uVar41 >> 1);
  uVar24 = uVar24 ^ 1 << (uVar48 & 0x1f);
  bVar12 = (byte)(uVar32 >> 8);
  bVar7 = bVar47 + bVar12;
  uVar32 = uVar42 & 0xffffffffffff0000 | uVar32 & 0xffffffffffffff00 | (ulong)(byte)(bVar7 + 1);
  uVar46 = (ulong)((uVar5 & 0xffffff00 | (uint)(byte)((char)uVar5 + (char)uVar38)) >> 1 | 0x80000000
                  ) << 1 | (ulong)(CARRY1(bVar47,bVar12) || 0xfe < bVar7);
  lVar45 = 0x3f;
  if (uVar46 != 0) {
    for (; uVar46 >> lVar45 == 0; lVar45 = lVar45 + -1) {
    }
  }
  bVar12 = (byte)uVar16;
  uVar21 = uVar32 << (bVar12 & 0x3f) | uVar32 >> 0x40 - (bVar12 & 0x3f);
  uVar25 = (uVar24 & 0xffff0000 | (uint)(ushort)((ushort)uVar24 | uVar48)) - 1;
  uVar23 = (int)lVar45 - (uint)uVar21;
  lVar45 = (ulong)uVar23 * (ulong)uVar23;
  bVar7 = (char)uVar21 << 1;
  uVar23 = uVar25 >> 0xc;
  uVar34 = 0x1faf268c << (bVar12 & 0x1f);
  auVar3 = ZEXT116(0) << 0x40 |
           ZEXT416(uVar25 * 0x200000 | uVar23 & 0xffff0000 | (uint)(ushort)((ushort)uVar23 | 1));
  uVar26 = SUB168(auVar3 >> (bVar12 & 0x3f),0) | SUB168(auVar3 << 0x41 - (bVar12 & 0x3f),0);
  uVar32 = (ulong)((uVar31 & 0xffff0000 | (uint)uVar48) << (bVar12 & 0x1f) |
                  ((uint)(uVar21 & 0xffffffffffffff00) | (uint)bVar7) >> 0x20 - (bVar12 & 0x1f));
  uVar19 = (ushort)uVar34 >> (bVar12 & 0xf) | (ushort)uVar34 << 0x10 - (bVar12 & 0xf);
  uVar20 = (short)uVar8 >> (bVar12 & 0x1f);
  lVar44 = uVar26 + ((uVar38 & 0xffffff00 | uVar5 & 0xff) >> 1 | 0x80000000);
  uVar43 = (short)uVar16 << 7;
  uVar22 = CONCAT11((char)((uint)uVar43 >> 8),bVar7);
  bVar47 = (byte)(ushort)(CONCAT12(0x5d < (byte)((char)uVar34 + 0x67U),(short)uVar16) >> 10);
  uVar46 = uVar32 - 0xc87ffa36;
  bVar50 = uVar46 == 0;
  uVar42 = (ulong)uVar40 - 0xc16500b6;
  uVar48 = ((ushort)(uVar29 >> 0x17) ^ 1 << ((ushort)uVar26 & 0xf)) + 0x57e2;
  uVar32 = (uVar32 - 0xc87ffa18) + uVar42 * 2;
  bVar7 = (bVar47 | (byte)uVar43) - bVar50;
  uVar23 = uVar16 & 0xffff0000 | 0x80000000 | (uint)(byte)((uVar21 & 0xffffffffffffff00) >> 8) << 8
           | (uint)bVar7;
  uVar17 = lVar44 * 2;
  uVar35 = (ulong)(lVar44 < 0);
  uVar27 = uVar17 | uVar35;
  uVar9 = uVar27 * 0x7acb03cc;
  uVar25 = (uint)(ushort)(uVar48 << (bVar7 & 0xf) | uVar48 >> 0x10 - (bVar7 & 0xf)) |
           uVar8 & 0xffff0000 |
           (uint)(ushort)(uVar20 >> (bVar12 & 0xf) | uVar20 << 0x10 - (bVar12 & 0xf));
  uVar48 = (short)uVar42 + 0x60 + (short)uVar23 * 8;
  uVar36 = CONCAT62((undefined6)((char)bVar12 >> 7),uVar48);
  uVar8 = uVar23 + uVar25;
  bVar12 = (byte)uVar8 | (byte)(uVar8 >> 8);
  if (-1 < (char)bVar12) {
    uVar9 = uVar9 & 0xffffffffffff0000 | uVar17 & 0xffff | uVar35;
  }
  lVar44 = -uVar27;
  uVar17 = (uVar8 & 0xffffff00 | (uint)bVar12) & uVar9;
  if (uVar17 != 0) {
    uVar46 = uVar32 & 0xffff;
  }
  uVar38 = (-((uint)((ulong)lVar45 >> 0x20) & 0xffff0000 |
             (uint)CONCAT11((char)((ulong)lVar45 >> 0x28) + '2',(char)((ulong)lVar45 >> 0x20))) &
            0xffff0000 | (uint)(byte)(bVar50 + bVar7 + 1)) >> (bVar12 & 0x1f) & 0xffffff00;
  uVar8 = (uint)(ushort)((short)uVar40 + 0x99 +
                         (((ushort)((uVar34 & 0xffff0000 | uVar19 & 0xffffff00 |
                                    (uint)(byte)((char)uVar19 << (bVar47 & 0x1f))) >> (bVar7 & 0x1f)
                                   ) | (ushort)(uVar23 << 0x20 - (bVar7 & 0x1f))) & 0xff00 |
                         (ushort)((long)uVar27 < 1)) * 4 | 0xc000);
  uVar23 = CONCAT22((short)uVar38,(ushort)((int)uVar9 << 1) & (ushort)lVar44) & 0x3fffffff;
  uVar35 = (ulong)(ushort)(uVar23 % uVar8);
  uVar9 = (ulong)uVar38 & 0xffffffffffff0000 | uVar35;
  uVar17 = (ulong)CONCAT31((int3)((uint3)(uVar17 >> 8) & 0xffff00 |
                                 (uint3)(byte)((char)(uVar17 >> 8) << ((byte)uVar17 & 0x1f))) >>
                           0x13,!SBORROW2((short)((int)lVar44 >> 1),0x7f15)) << 1;
  bVar7 = (char)(uVar32 >> 0x18) + (char)(uVar17 >> 8) + 1;
  sVar15 = (short)((int)uVar26 + -0x28f3dffd << (sbyte)(uVar17 | 1));
  uVar19 = sVar15 << 1;
  bVar47 = (byte)uVar19 | sVar15 < 0;
  uVar43 = ((ushort)uVar46 >> 3 |
           (ushort)(byte)((byte)uVar42 >> (bVar12 & 7) | (byte)uVar42 << 8 - (bVar12 & 7)) << 0xd) +
           0x4ec2;
  uVar46 = uVar17 & 0xffff0000 | (ulong)(ushort)(short)(char)(uVar35 >> 8);
  if (uVar43 == 0) {
    uVar46 = uVar9;
  }
  bVar12 = bVar47 ^ (bVar7 == bVar47) * (bVar47 ^ 8);
  bVar7 = bVar7 ^ (bVar7 != bVar47) * (bVar7 ^ bVar12);
  uVar38 = ((uint)uVar21 & 0xffff0000 | (uint)(ushort)(uVar22 + 0x1008)) + (int)uVar9 +
           (uint)(0xeff7 < uVar22);
  iVar39 = 0x63edee48;
  if (uVar38 == 0) {
    iVar39 = (int)(uVar17 | 1) * 2;
  }
  uVar20 = (ushort)uVar46 + 0x4856;
  uVar17 = uVar46 & 0xffffffffffff0000 | (ulong)uVar20;
  iVar39 = (iVar39 - (int)uVar9) - (uint)((ushort)uVar46 < 0xb7aa);
  uVar42 = (uVar42 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)(uVar40 | 0x69c5a947) & 0xff00 |
                          (ushort)(byte)((char)(uVar40 | 0x69c5a947) << 1))) - 0x548467fc;
  bVar33 = (byte)uVar32;
  bVar47 = bVar7 - bVar33;
  uVar46 = (ulong)((uVar25 & 0xffffff00) - 1);
  if ((POPCOUNT(bVar47) & 1U) != 0) {
    uVar46 = uVar42;
  }
  uVar6 = (ushort)uVar42 & 0xff;
  uVar14 = uVar6 | (ushort)(uVar9 < uVar36 || uVar9 - uVar36 < (ulong)(bVar7 < bVar33)) << 8;
  iVar30 = 0x1f;
  if ((uint)uVar17 != 0) {
    for (; (uint)uVar17 >> iVar30 == 0; iVar30 = iVar30 + -1) {
    }
  }
  bVar13 = (byte)uVar20;
  bVar37 = bVar13 & 0x1f;
  uVar35 = CONCAT62((uint6)(ushort)((short)((ulong)lVar44 >> 0x10) >> 1),0xb7aa) * 2;
  uVar21 = (ulong)((uint)(CONCAT14(((ushort)uVar38 >> ((ushort)uVar38 & 0xf) & 1) != 0,iVar39) >>
                         bVar37) | iVar39 << 0x21 - bVar37);
  if ((char)((ushort)(uVar19 & 0xff00 | (ushort)bVar12) >> 3) < '^') {
    uVar21 = uVar36;
  }
  bVar13 = bVar13 & 0xf;
  uVar26 = ((ulong)uVar22 | 0xc4bd0000) ^ 1 << ((ulong)uVar48 & 0x3f);
  if (-1 < (char)((byte)iVar30 ^ 0x3a)) {
    uVar17 = (ulong)(uint)(int)(char)((char)(uVar9 - uVar36) - (bVar7 < bVar33) |
                                     (byte)(1 << ((ulong)(ushort)(uVar23 / uVar8) & 0x3f)));
  }
  uVar48 = (short)uVar17 + 0x5387;
  uVar20 = ((ushort)iVar30 ^ 0x3a) << 4 | uVar48 >> 0xc;
  lVar45 = (ulong)(((uint)uVar32 & 0xffff00) << 8 | (uint)CONCAT11(bVar33 ^ bVar47,bVar47)) *
           (ulong)(uVar38 & 0xffff0000 | (uint)uVar14);
  sVar15 = (short)lVar45;
  uVar32 = (uVar42 & 0xffffffffffff0000 | uVar26) >> 10;
  uVar22 = (short)((ulong)lVar45 >> 0x20) + uVar48 + 0x58 + uVar20;
  uVar19 = (ushort)uVar21 & 0xfdff;
  uVar48 = 0xf;
  if (uVar14 != 0) {
    for (; uVar14 >> uVar48 == 0; uVar48 = uVar48 - 1) {
    }
  }
  bVar7 = (byte)uVar20 | (byte)uVar22;
  uVar42 = uVar32 & 0xffffffffffff0000;
  uVar8 = CONCAT22((short)(ushort)uVar35 >> 0xf,(short)uVar32) >> 0xb;
  bVar47 = bVar7 & 0xf;
  sVar4 = sVar15 >> 0xf;
  uVar20 = sVar15 << bVar47 | uVar22 >> 0x10 - bVar47;
  uVar14 = (uVar20 & 0xff00 | bVar7 & 0xff0f) >> bVar47;
  uVar20 = uVar20 + 0xe0ce;
  uVar48 = (ushort)uVar26 & (uVar48 | (ushort)uVar35);
  uVar9 = (ulong)(ushort)(uVar43 << bVar13 | uVar43 >> 0x10 - bVar13) - 0x698ffe8e;
  iVar30 = (((uint)uVar46 & 0x7fff8000) << 1 | (uint)(ushort)(uVar22 + 0x37c)) * -0x25658eee;
  uVar32 = uVar9 & 0xff;
  uVar46 = (ulong)((uint7)((uVar35 >> bVar47) >> 8) | (uint7)(((ulong)uVar8 << 0x40 - bVar47) >> 8))
           << 8;
  uVar17 = uVar32 | uVar46;
  cVar10 = (char)uVar14;
  bVar7 = cVar10 + (char)((short)uVar20 >> 0xf);
  iVar39 = (int)uVar17;
  uVar40 = iVar30 + iVar39;
  if (uVar40 == 0 || SCARRY4(iVar30,iVar39) != (int)uVar40 < 0) {
    cVar10 = (char)uVar19;
  }
  uVar43 = (ushort)uVar17;
  bVar7 = bVar7 & 0xf;
  bVar12 = bVar7 + cVar10;
  uVar23 = (int)CONCAT62((uint6)(uVar42 >> 0x11),(ushort)((uVar42 | uVar35 & 0xffff) >> 1) >> 1) <<
           1;
  iVar39 = CONCAT11((char)((ulong)uVar14 >> 8) + (char)uVar6 * '\x02' +
                    (CONCAT22(sVar4,uVar20) < 0x22922899),bVar12) * 0x9e2;
  bVar33 = (char)uVar23 + (char)uVar48 + ((short)iVar39 != iVar39);
  uVar25 = uVar23 & 0xffffff00 | (uint)bVar33;
  uVar32 = -(ulong)(uVar40 & 0xffff0000 | (uint)(ushort)((short)(char)uVar32 + 0x11fd));
  uVar22 = uVar48 & 0xff00 | (ushort)(byte)((char)uVar48 << (bVar12 & 0x1f));
  iVar39 = 0;
  if (uVar25 >> 1 != 0) {
    for (; ((uVar25 >> 1) >> iVar39 & 1) == 0; iVar39 = iVar39 + 1) {
    }
  }
  uVar40 = uVar25 >> 2;
  iVar39 = (int)(short)((uVar20 & 0xff) * (uVar48 & 0xff) *
                       ~(uVar19 + uVar43 * 8 + -0x6c47 << bVar7 | uVar19 >> 0x10 - bVar7) * 2) *
           (int)(short)uVar40;
  uVar19 = (ushort)((uint)iVar39 >> 0x10);
  uVar48 = (ushort)iVar39;
  sVar15 = 0xf;
  if (uVar19 != 0) {
    for (; uVar19 >> sVar15 == 0; sVar15 = sVar15 + -1) {
    }
  }
  uVar46 = uVar46 & 0xffffffffffff0000 | (ulong)(ushort)(uVar43 >> 1 | 0x8000);
  if (((ushort)((sVar15 + 0x1e40) - (ushort)((uVar9 & 1) != 0)) >> 2 & 1) == 0) {
    uVar46 = (ulong)uVar25;
  }
  uVar19 = (ushort)((uVar21 & 0xffffffffffff0000) >> 1);
  uVar20 = (uVar48 & 0xff) * (ushort)(byte)((char)((uint6)(int6)sVar4 >> 8) >> 7);
  uVar25 = (uint)bVar12;
  bVar50 = uVar22 <= uVar20;
  uVar43 = uVar20 - uVar22;
  uVar22 = uVar22 ^ (ushort)(uVar43 == 0) *
                    (uVar22 ^ (uVar19 << (bVar12 & 0xf) | uVar19 >> 0x10 - (bVar12 & 0xf)));
  uVar28 = (uint7)(uVar26 >> 8) & 0xffffffffffff00 | (uint7)(byte)(uVar22 >> 8);
  if ((POPCOUNT(uVar43 & 0xff) & 1U) != 0) {
    uVar25 = (uint)CONCAT71(uVar28,bVar50);
  }
  uVar38 = (uint)(uVar32 >> 0xb) & 0x1f0000 | (uint)(ushort)((short)(uVar32 >> 0xb) << 1 | 1);
  uVar42 = (ulong)(uVar40 & 0xff | (uVar23 >> 10) << 8) & 0xffffffffffffff0f;
  bVar37 = ((char)uVar40 + -0x34) * '\x04' + 0x95;
  uVar29 = ((int)CONCAT62((int6)sVar4,uVar48) >> 0x1f) - 1;
  uVar35 = uVar32 & 0xff00 | (ulong)(byte)((char)uVar32 - 0x33);
  cVar10 = bVar50 + (char)uVar25;
  bVar12 = (byte)(uVar42 >> 1);
  bVar7 = bVar12 & 0x1f;
  uVar31 = uVar38 << bVar7 | uVar38 >> 0x20 - bVar7;
  uVar46 = (CONCAT71((int7)(uVar46 >> 8),0xc) & 0xffff | uVar46 & 0xffffffffffff0000) ^ 0x100;
  uVar38 = uVar31 >> 1;
  uVar16 = (uint)bVar37 << 0x1f;
  uVar34 = uVar38 | uVar16;
  bVar51 = (POPCOUNT(uVar38 & 0xff) & 1U) != 0;
  uVar17 = uVar46 >> 1;
  sVar15 = CONCAT11(!bVar51 * bVar51 * bVar37,bVar12 - 0x2f) + 0x36b8;
  uVar32 = CONCAT62((uint6)(uVar42 >> 0x11) | (uint6)(((ulong)((bVar33 & 4) != 0) << 0x3f) >> 0x10),
                    sVar15);
  uVar38 = (int)CONCAT71(uVar28,cVar10) + 1;
  uVar42 = -(ulong)(((uVar23 & 0xffff0000 |
                     (uint)(ushort)((short)(char)uVar40 << (sbyte)uVar42 |
                                   (ushort)(uVar20 ^ (ushort)(uVar43 != 0) * (uVar20 ^ uVar22)) >>
                                   0x10 - (sbyte)uVar42)) ^ 0xd902 |
                    (uint)(1 << ((ulong)uVar29 & 0x3f))) >> 1);
  lVar45 = ((ulong)(((int)uVar8 >> bVar47 & 0xffff0000U) << 3) << 1 |
           (ulong)(byte)((((SCARRY1(bVar50,(char)uVar25) != SCARRY1(cVar10,'\0')) == cVar10 < '\0')
                         + '\x11') -
                        (((uVar29 & 0xffff0000 |
                          (uint)(uVar34 != 0 && ((int)uVar31 < 0 != (uVar16 != 0)) == (uVar16 != 0))
                          ) >> ((uint)uVar17 & 0x1f) & 1) != 0))) - 0x4f16de94;
  bVar7 = (byte)uVar17 >> 1;
  uVar28 = (uint7)(uVar46 >> 9);
  uVar40 = (uint)CONCAT71(uVar28,bVar7);
  uVar8 = (uint)lVar45 & 0xffff0000 | (uint)(ushort)((ushort)lVar45 >> 1);
  bVar47 = (byte)sVar15 & 0x3f;
  iVar39 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> iVar39 & 1) == 0; iVar39 = iVar39 + 1) {
    }
  }
  uVar16 = 0x2864;
  uVar48 = (short)uVar38 - 1;
  uVar23 = (uint)(CONCAT14((bVar7 & 1) != 0,iVar39) >> 0x1e);
  bVar7 = (byte)uVar48;
  uVar46 = (ulong)(uVar38 & 0xffff0000 | uVar48 & 0xffffff00 | (uint)(byte)(bVar7 >> 2 | bVar7 << 6)
                  );
  uVar17 = uVar46 * -0x6bc638f5;
  bVar50 = SEXT816((long)uVar17) != SEXT816((long)uVar46) * SEXT416(-0x6bc638f5);
  uVar46 = uVar32 - 0x6ecbd071;
  bVar51 = uVar32 < 0x6ecbd071 || uVar46 < bVar50;
  uVar8 = ((int)uVar46 - (uint)bVar50) * 2;
  bVar7 = (byte)uVar8 | bVar51;
  bVar50 = (short)uVar17 < 0;
  if (bVar50) {
    uVar16 = uVar23 | iVar39 << 3 & 0xffffU;
  }
  bVar12 = ((byte)uVar8 & 0x1f | bVar51) % 9;
  bVar7 = bVar7 << bVar12 | (byte)(CONCAT11(bVar50,bVar7) >> 9 - bVar12);
  iVar30 = 0;
  if (uVar16 != 0) {
    for (; (uVar16 >> iVar30 & 1) == 0; iVar30 = iVar30 + 1) {
    }
  }
  uVar32 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 | (uVar17 & 0xff0000000000) >> 0x18
           | (uVar17 & 0xff00000000) >> 8;
  uVar46 = (ulong)((uint)uVar32 | 0xc0000000);
  uVar32 = uVar32 | ((ulong)(uVar29 & 0xffff0000 |
                            (uint)(ushort)((short)uVar17 << 1 | (ushort)bVar50) *
                            ((uVar40 & 0x1fffe) >> 1) >> 0x10) & 0x3fffffff) << 0x20 | 0xc0000000;
  uVar17 = uVar32 / uVar46;
  sVar15 = (short)(char)(uVar40 >> 1);
  uVar26 = (ulong)CONCAT22((ushort)(uVar28 >> 8) >> 1,sVar15);
  uVar48 = ((short)uVar17 - sVar15) - 1;
  uVar17 = uVar17 & 0xffff0000;
  uVar9 = uVar17 | uVar48;
  uVar27 = uVar9 * 0x7f62377b;
  uVar17 = uVar17 | (ushort)(uVar48 & 0xff |
                            (ushort)(byte)((byte)(uVar32 % uVar46) | (byte)((ulong)uVar48 >> 8)) <<
                            8);
  uVar21 = uVar17 * uVar26;
  uVar32 = (ulong)(-uVar25 & 0xffffff00 |
                  (uint)(-1 < (int)((uVar34 << bVar47 | (uint)(uVar42 >> 0x40 - bVar47)) +
                                   0x7ed71ac6))) << 0x17;
  uVar46 = uVar27 >> 0x29;
  uVar43 = 1 << ((ushort)uVar35 & 0xf) ^ 0x2e47;
  uVar29 = 0x40c96952U >> (bVar7 & 0x1f) ^ 1;
  uVar9 = uVar9 * 0xfec46ef6;
  bVar47 = (byte)((uVar8 & 0xffffff00) >> 8);
  lVar45 = -(uVar42 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar42 << 1));
  uVar25 = (int)uVar35 + 0x46fcc4ad;
  uVar40 = (uVar43 | 0xa6a60000) + 0xc7053b5e + ((uint)uVar32 | (uint)(uVar27 >> 0x29)) * 8;
  uVar38 = uVar8 & 0xffffff00 |
           (uint)(byte)((byte)(uVar16 >> (bVar7 & 0x1f)) | (byte)(uVar16 << 0x20 - (bVar7 & 0x1f)));
  uVar43 = ~uVar43;
  iVar30 = (int)CONCAT11((char)(uVar21 >> 8) >> 0x1d,(char)uVar21) *
           (int)CONCAT11(bVar47 + 1,(bVar7 - (char)uVar21) - (0xfe < bVar47));
  bVar7 = (byte)((ushort)(uVar43 & 0xff | (ushort)((short)iVar30 != iVar30) << 8) >> 5) |
          (char)uVar43 << 4;
  uVar48 = (ushort)((uint)iVar30 >> 0x10) ^ (ushort)uVar9;
  bVar47 = bVar7 << 1;
  if (-1 < (char)bVar7) {
    uVar38 = uVar8 & 0xffff0000 | uVar40 & 0xffff;
  }
  uVar43 = (uVar43 & 0xff00 | (ushort)bVar47) << 1 | (ushort)uVar40 >> 0xf;
  bVar7 = (byte)uVar46;
  bVar12 = bVar7 >> 3 | bVar7 << 5;
  uVar42 = uVar32 | uVar46 & 0xffffffffffffff00 | (ulong)bVar12;
  uVar16 = (uint)lVar45 ^ 1 << ((int)(char)uVar43 & 0x1fU);
  uVar46 = ((uVar21 & 0xffffffffffff0000 | (ulong)(ushort)(short)(char)iVar30) ^ 0x266d) +
           (ulong)uVar29 + lVar45 + 1;
  uVar32 = uVar46 & 0xffffffffffffff00;
  uVar8 = ((uVar23 | iVar39 << 3) >> 1) + ~(uint)bVar47;
  bVar7 = (byte)(uVar32 >> 8);
  bVar47 = (byte)uVar38;
  bVar33 = (byte)uVar9 >> (bVar47 & 7) | (byte)uVar9 << 8 - (bVar47 & 7);
  uVar35 = (ulong)((uVar29 & 0xffff0000 |
                   (uint)(ushort)((ushort)uVar29 >> 1 | (ushort)((uVar29 & 1) != 0) << 0xf)) <<
                  (bVar47 & 0x1f)) | 0xc000000000000000;
  if ((char)uVar25 < (char)bVar12) {
    uVar25 = uVar25 & 0xffff0000 | (uint)(ushort)uVar42;
  }
  auVar3 = ((CONCAT88(CONCAT62(SUB166(SEXT816((long)uVar17) * SEXT816((long)uVar26) >> 0x50,0),
                               uVar48 & 0xff |
                               (ushort)(byte)((((char)((ulong)uVar48 >> 8) + bVar47) - bVar7) - 1)
                               << 8),uVar32 | (byte)(((byte)uVar46 | (byte)uVar48) ^ bVar7)) &
            (undefined  [16])0xffffffffffffffff) / ZEXT816(uVar35) &
           (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)uVar25);
  uVar32 = SUB168(auVar3 >> 0x40,0);
  cVar10 = SUB161(auVar3 >> 8,0);
  cVar18 = SUB161(auVar3 >> 0x48,0);
  if (SBORROW1(cVar10,cVar18) != SBORROW1(cVar10 - cVar18,'\x01')) {
    uVar32 = uVar9 & 0xff00 | (ulong)bVar33 | (ulong)SUB166(auVar3 >> 0x50,0) << 0x10;
  }
  uVar29 = uVar8 << (bVar47 & 0x1f) | uVar8 >> 0x20 - (bVar47 & 0x1f);
  uVar8 = (uint)uVar42;
  uVar16 = (uVar16 & 0xffff0000 | (uint)(ushort)((ushort)uVar16 | 0x8000)) << (bVar47 & 0x1f);
  uVar23 = uVar8 | 0x5596c267;
  uVar16 = uVar16 >> (bVar47 & 0x1f) | uVar16 << 0x21 - (bVar47 & 0x1f);
  uVar21 = ((ulong)uVar25 & 0xffffffffffff0000 |
            (ulong)(ushort)((ushort)uVar25 | 0x1000) & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar25 - 0x11)) ^ 0x2e47498f;
  uVar22 = CONCAT11(uVar21 == 0,(char)uVar16);
  uVar17 = (ulong)((uVar43 | 0xa6a60000 | uVar40) + 0x45b27b19 +
                  ((uint)uVar9 & 0xffffff00 | (uint)bVar33) * 2) + 0x341fdf6a;
  uVar42 = (ulong)(uVar40 >> (bVar47 & 0x3f)) | uVar35 << 0x40 - (bVar47 & 0x3f);
  cVar10 = (char)uVar32;
  uVar48 = (short)uVar23 + 0x30cf;
  uVar46 = (ulong)uVar38 |
           uVar32 & 0xffffffffffff0000 | (ulong)CONCAT11((char)(uVar32 >> 8) + -0x3f,cVar10);
  uVar42 = uVar42 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar42 + cVar10 + 1);
  uVar40 = uVar48 & 0xff;
  uVar43 = 0;
  if (uVar22 != 0) {
    for (; (uVar22 >> uVar43 & 1) == 0; uVar43 = uVar43 + 1) {
    }
  }
  uVar48 = uVar43 + uVar48;
  bVar7 = (byte)uVar46 & 0x1f;
  uVar25 = (uint)uVar46;
  uVar25 = uVar25 >> bVar7 | uVar25 << 0x20 - bVar7;
  bVar7 = (byte)uVar25 & 0xf;
  uVar38 = ((uint)uVar42 & 0xffff0000 | (uint)(ushort)((short)uVar42 + 0xc9cf)) + 0x8eb9c6e9;
  uVar42 = uVar17 & 0xffffffff9553ee00 |
           (ulong)(byte)((char)(uVar17 & 0xffffffff9553ee24) + (cVar10 + -0x46) * '\x12');
  uVar31 = (int)((uVar8 + 0x4dc7e9d2 + (int)uVar32 * 8) * 0x6a24b602) >> 0xf;
  uVar8 = uVar38 >> 7;
  uVar34 = -(uVar23 & 0xffff0000 | (uint)uVar43);
  uVar32 = (long)(int)((uVar16 & 0xffff0000 | (uint)uVar22) << bVar7) * (long)(int)uVar34;
  uVar43 = (short)(char)(uVar32 & 0xffffffff) * (short)(char)((uVar32 & 0xffffffff) >> 8);
  uVar46 = (uVar38 * 0x2000000 | uVar8 & 0xffff0000 |
           (uint)CONCAT11((byte)(uVar8 >> 8) ^ (byte)uVar8,(byte)uVar8)) | uVar42;
  cVar10 = (char)uVar43 + (char)uVar31;
  uVar22 = (short)uVar46 + 0x9a6;
  uVar46 = uVar46 & 0xffffffffffff0000;
  uVar23 = (uint)uVar46;
  bVar47 = (bVar7 - cVar10) * '\x02';
  uVar8 = ((uint)((uVar32 >> 0x20) >> bVar7) | uVar23 | uVar22) ^ uVar34;
  bVar7 = bVar47 & 0x1f;
  uVar38 = ((((uint)uVar21 >> 1 | (uint)((uVar21 & 1) != 0) << 0x1f) >> 0x1e |
            (int)(uVar17 & 0xffffffff9553ee24) << 2) << bVar7 | uVar31 >> 0x20 - bVar7) & 0xb91ad5d0
  ;
  uVar19 = (short)uVar42 >> 9;
  uVar42 = uVar17 & 0xffffffff95530000 | (ulong)uVar19;
  uVar32 = uVar32 & 0xffff0000 | (ulong)uVar43 & 0xffffffffffffff00 | (ulong)(byte)(cVar10 + 1);
  if ((uint)uVar32 != uVar8) {
    uVar32 = (ulong)uVar8;
  }
  cVar10 = (char)((ulong)uVar22 >> 8);
  uVar17 = uVar32 & 0xffffffffffff0000 | (ulong)(ushort)((short)(char)uVar32 * (short)cVar10);
  bVar47 = bVar47 & 0x1f;
  uVar43 = SEXT12((char)((byte)(uVar25 >> 8) | 8));
  iVar39 = (int)uVar38 >> 1;
  uVar32 = (ulong)uVar48;
  if (iVar39 <= (int)(uint)uVar48) {
    uVar32 = (ulong)uVar29;
  }
  uVar22 = (uVar22 & 0xff | (ushort)(byte)(cVar10 << 1 | cVar10 < '\0') << 8) &
           ~(1 << (uVar43 & 0xf));
  uVar35 = (ulong)(uVar25 & 0xffff0000 | (uint)uVar43);
  uVar9 = uVar35 & 0xffffffffffffff0f;
  bVar7 = (byte)uVar9;
  uVar21 = uVar35 & 0xffffffffffff0000 |
           (ulong)CONCAT11((ulong)(uVar29 + 0x83c76b7c) != 0xffffffff6e6ba890,bVar7);
  iVar30 = (int)uVar42;
  uVar8 = iVar30 + 0x260e0026;
  uVar36 = (ulong)uVar8;
  lVar45 = uVar17 * 2;
  lVar44 = lVar45 * uVar36;
  uVar16 = ~((uint)lVar44 >> 1);
  uVar48 = (ushort)(byte)uVar16;
  uVar16 = uVar16 & 0xffff0000;
  uVar49 = (ulong)CONCAT22((short)((int)uVar38 >> 0x11),
                           (short)iVar39 << bVar7 | 0x576fU >> 0x10 - bVar7) << bVar7;
  uVar26 = (ulong)(uint)((int)(uVar16 | uVar48) >> 0x1f);
  uVar9 = ((ulong)(uVar34 & 0xffff0000) | 0x800000000000000 |
          (ulong)(((ushort)(uVar34 & 0xffffff00) ^ 1 << ((ushort)uVar9 & 0xf)) & 0xff00 &
                 ~(1 << ((ushort)uVar40 & 0xf)))) ^ 1 << (uVar26 & 0x3f);
  uVar35 = (ulong)(ushort)((ushort)uVar9 ^ 4);
  uVar27 = uVar9 & 0xffffffffffff0000 | uVar35;
  lVar45 = ((ulong)(uVar34 & 0xffffff00) * 0xc65a01c939a3267 |
           (ulong)(byte)('\0' << bVar7 % 9 |
                        (byte)((ushort)((ushort)(SEXT816(lVar44) !=
                                                SEXT816(lVar45) * SEXT816((long)uVar36)) << 8) >>
                              9 - bVar7 % 9))) + uVar36 + (ulong)(((ushort)uVar9 >> 2 & 1) != 0);
  if (lVar45 == 0) {
    uVar26 = (ulong)((int)(short)uVar31 << bVar47 | (uint)uVar17 >> 0x20 - bVar47);
  }
  uVar38 = uVar8 & 0xffff | 0xc000;
  uVar31 = CONCAT22((short)uVar26,uVar48) & 0x3fffffff;
  auVar3 = ZEXT816(uVar21 | 0xc000000000000000);
  auVar1 = CONCAT88(uVar26 & 0xffffffffffff0000 | (ulong)(ushort)(uVar31 % uVar38),
                    CONCAT62((int6)(short)(uVar16 >> 0x10),(short)(uVar31 / uVar38))) &
           (undefined  [16])0xffffffffffffffff;
  auVar2 = auVar1 % auVar3;
  uVar8 = (uVar8 | 0xc000) >> bVar7 | (uVar8 | 0xc000) << 0x20 - bVar7;
  iVar39 = (int)SUB162(auVar1 / auVar3,0) * (int)SUB162(auVar2,0);
  sVar15 = (short)((uint)iVar39 >> 0x10);
  uVar17 = uVar49;
  if ((short)iVar39 != iVar39) {
    uVar17 = uVar27;
  }
  sVar4 = sVar15 << 1;
  uVar40 = (uVar40 - iVar30) - 1 & (uint)uVar32;
  bVar47 = (byte)uVar40;
  bVar50 = 0xd2 < bVar47;
  bVar47 = bVar47 + 0x2d;
  uVar26 = (ulong)((int)(short)iVar39 + 1);
  if (!bVar50 && bVar47 != 0) {
    uVar26 = uVar9 & 0xffff0000 | uVar35;
  }
  uVar35 = uVar21 | 0xc000008000000000;
  if (bVar50) {
    uVar35 = 0xffffffff;
  }
  uVar19 = uVar19 | 0xc000;
  uVar38 = CONCAT22(sVar15 << 10 | (ushort)(CONCAT12(bVar50,sVar4) >> 8),(short)uVar26) & 0x3fffffff
  ;
  uVar9 = (ulong)(((uVar25 & 0xff0f ^ uVar34) + uVar29 + 1) * 0x400000 | (uint)uVar19) | 0xc000;
  uVar25 = (uint)(ushort)uVar9;
  uVar38 = uVar38 / uVar19 & 0xffff | (uVar38 % (uint)uVar19 & 0x3fff) << 0x10;
  return (uVar26 & 0xffffffffffff0000 | (ulong)(ushort)(uVar38 / uVar25)) +
         (uVar46 | (ulong)uVar22 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar22 & (byte)uVar49))
         + uVar35 +
         ((ulong)((uint)CONCAT62(SUB166(auVar2 >> 0x10,0),sVar4) & 0xfffb0000) |
         (ulong)(ushort)(uVar38 % uVar25)) + (ulong)(uVar40 & 0xffffff00 | (uint)bVar47) +
         ((long)(ulong)(uVar29 + 0xb3 + (uVar23 | uVar22) * 4) >> bVar7) * 0x443f2bfd + uVar27 +
         (ulong)(uVar8 << 0x10 | uVar8 >> 0x11) + lVar45 + uVar32 + uVar42 + uVar9 + uVar17 +
         -0x666e265a15440761;
}



// WARNING: Removing unreachable block (ram,0x004046a5)
// WARNING: Removing unreachable block (ram,0x00404195)
// WARNING: Removing unreachable block (ram,0x00404696)
// WARNING: Removing unreachable block (ram,0x0040476a)
// WARNING: Removing unreachable block (ram,0x0040489b)
// WARNING: Removing unreachable block (ram,0x00404908)
// WARNING: Removing unreachable block (ram,0x0040425f)

long log_size_10_var_003(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  sbyte sVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar17;
  ulong uVar16;
  char cVar18;
  byte bVar19;
  ulong uVar20;
  byte bVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  ushort uVar26;
  ushort uVar27;
  uint uVar28;
  ulong uVar29;
  byte bVar30;
  byte bVar31;
  short sVar32;
  ushort uVar33;
  uint uVar34;
  ulong uVar35;
  ushort uVar36;
  ushort uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  ulong uVar41;
  int iVar42;
  uint uVar43;
  ulong uVar44;
  byte bVar45;
  ushort uVar46;
  uint uVar47;
  bool bVar48;
  char in_AF;
  
  uVar20 = (ulong)CONCAT11(in_AF << 4,0x73) & 0x272f;
  uVar28 = (uint)CONCAT11(((byte)(uVar20 >> 8) | 2) + 0x69,(char)uVar20) * 0x3223;
  sVar12 = (short)(uVar28 >> 0x10);
  uVar10 = uVar28 & 0xffff | 0xac920000;
  uVar28 = 0x152cfbf0;
  if (sVar12 != 0) {
    uVar28 = 0x40394238;
  }
  uVar20 = 0x9b3831b8c004baca - (ulong)(sVar12 != 0);
  if (uVar10 != 0x6bd83580) {
    uVar10 = 0x6bd83580;
  }
  uVar14 = CONCAT62(0xe34a07cf36af,sVar12) + 0x8470ffff;
  uVar26 = 0x8b5b;
  uVar15 = (uVar14 & 0xffffffffffff0000 |
           (ulong)CONCAT11((byte)(uVar14 >> 8) & (byte)uVar14,(byte)uVar14)) & 0xffffe8ed;
  uVar35 = (ulong)(ushort)(0x609f - (0xc52c767b7f2e6110 < uVar20)) << 0x1d | 0x18a58ecf;
  uVar14 = 0x3f;
  if (uVar15 != 0) {
    for (; uVar15 >> uVar14 == 0; uVar14 = uVar14 - 1) {
    }
  }
  uVar47 = (ushort)((ushort)(uVar14 < 0xffffe8ed || uVar14 - 0xffffe8ed == 0) << 0xf | 0x7fff) |
           0x84700000;
  uVar13 = (uint)(uVar15 << 1) | 1;
  if (uVar10 != 0x54faf) {
    uVar10 = 0x54faf;
    uVar26 = 0x4faf;
  }
  uVar5 = SEXT24((short)uVar10);
  uVar10 = uVar28 >> 1;
  uVar34 = uVar47;
  if (uVar5 != uVar13) {
    uVar5 = uVar13;
    uVar34 = uVar13;
  }
  uVar3 = (short)uVar5 >> 1;
  uVar28 = uVar28 >> 0xd;
  uVar47 = uVar47 ^ 0x6a456c44;
  iVar42 = (uint)(ushort)(uVar3 * -0x7131) * (uVar10 & 0xffff);
  bVar48 = (short)((uint)iVar42 >> 0x10) != 0;
  uVar37 = ((short)(uVar14 - 0xffffe8ed) + -1) * 2 | 1;
  if (bVar48) {
    uVar37 = uVar3 & 0xff;
  }
  iVar11 = ((byte)uVar3 | 0xfff00000) + 0xe12e9d80 + (uint)bVar48;
  sVar12 = uVar37 + (ushort)uVar10;
  uVar13 = (uint)uVar20;
  if (!CARRY2(uVar37,(ushort)uVar10) && sVar12 != -1) {
    uVar13 = uVar28 | 0x7800000;
  }
  cVar18 = (char)iVar42;
  sVar32 = (short)(uVar35 >> 1);
  uVar13 = uVar13 ^ 1 << ((ushort)(sVar12 + 1) & 0x1f);
  uVar5 = iVar11 * 2;
  uVar37 = (uVar26 & 0xff00) + 0x474e + (ushort)(iVar11 < 0);
  uVar9 = uVar47 >> 1;
  uVar26 = uVar37 + 0xbfbf;
  uVar24 = (uVar5 & 0xffffff00 | (uint)(byte)(((byte)uVar5 | (byte)(uVar13 >> 0x1f)) + 0x95)) &
           ~(1 << ((7 < (byte)(cVar18 - 1U) || CARRY1(cVar18 - 9,0x4040 < uVar37)) | 0x10));
  uVar37 = (ushort)(byte)((char)((ulong)uVar26 >> 8) + 0x52) << 8;
  uVar5 = (uint)(uVar26 & 0xff | uVar37);
  uVar38 = uVar28 & 0xffff0000 | 0x7800000 | (uint)(ushort)((short)uVar28 * 0x73d4);
  sVar12 = sVar32 + 0x1890;
  uVar28 = uVar9 << 0x1f;
  cVar18 = (char)uVar10 + -0x7c;
  bVar48 = SCARRY1((char)uVar10,-0x7c) != SCARRY1(cVar18,'\0');
  uVar10 = uVar24;
  if (cVar18 == '\0' || bVar48 != cVar18 < '\0') {
    uVar10 = uVar28 | 0x797181cb;
  }
  uVar34 = uVar34 & 0xffff0000 | (uint)(byte)(0xaf - ((ushort)(sVar32 + 0xa8bcU) < 0x2320)) << 8 |
           (uint)(byte)(uVar3 & 0xff);
  if (bVar48) {
    uVar34 = 0x96;
  }
  uVar34 = uVar34 + (uVar13 & 0xffffff00 | (uint)(byte)((char)uVar13 - (byte)uVar3));
  bVar45 = (byte)uVar24 >> 4;
  uVar20 = CONCAT62((uint6)(uVar35 >> 0x11),sVar12) ^ 0xc288;
  if (sVar12 == -0x3d78) {
    uVar9 = uVar9 & 0xffff | (uVar47 >> 0x11) << 0x10;
  }
  uVar14 = (ulong)(uVar34 >> 0x17 |
                  (uVar34 & 0xffff0000 |
                  (uint)(ushort)(CONCAT11((byte)(uVar34 >> 8) >> 1,(char)uVar34) | 0x8000)) << 9) <<
           1;
  lVar6 = 0x3f;
  if ((ulong)uVar9 != 0) {
    for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  cVar18 = (char)(uint)(CONCAT14(uVar10 < 0xcd0d82d8,uVar10 + 0x32f27d28) >> 0x19);
  uVar35 = (ulong)((uVar10 + 0x32f27d28) * 0x100 | (uint)(byte)(cVar18 << 1));
  uVar28 = uVar28 | 0x79710000 | (uint)(ushort)(0x81cb - (short)uVar9);
  bVar21 = (char)uVar20 >> 0x19;
  iVar42 = uVar38 - uVar28;
  uVar15 = (ulong)(uVar5 | 0xffff1000) + (ulong)(cVar18 < '\0' | 0xffffb5de);
  if (uVar28 <= uVar38 && iVar42 != 0) {
    uVar15 = uVar14 >> 0x15 | (uVar14 & 0xffffffffffff00ff) << 0x2b;
  }
  uVar26 = (short)iVar42 + 0x46;
  uVar34 = -~(uint)uVar20;
  bVar31 = (byte)uVar15;
  lVar6 = (ulong)uVar28 * 2 * lVar6;
  bVar17 = (bVar45 | bVar31) & 7;
  uVar14 = uVar35 << 1;
  bVar45 = (char)uVar9 >> (bVar45 | bVar31 & 0x1f);
  uVar29 = (ulong)uVar9 & 0xffffffffffffff00;
  uVar10 = (((ushort)((uVar37 | 0x1000 | (ushort)((uVar5 & 0xfe) >> 1)) ^ 0x400) | 0xffff0000) +
           0x8a2b9d1f) * 8;
  uVar47 = uVar34 >> 0x1d;
  auVar1 = SEXT816(lVar6) * SEXT816(0x2a1d8476167680cb);
  lVar6 = lVar6 * 0x2a1d8476167680cb;
  uVar13 = iVar42 + 0x1098f4d5U >> 0xb;
  uVar28 = 0;
  if ((uVar26 | 0x81c00000) != 0) {
    for (; ((uVar26 | 0x81c00000) >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
    }
  }
  uVar37 = ~((ushort)uVar20 & 0xff00 | (ushort)(byte)((char)(bVar21 << 3 | bVar21 >> 5) >> 0x1a));
  uVar24 = (uint)uVar20 & 0xffff0000 | (uint)uVar37;
  uVar9 = uVar28 | uVar24;
  uVar3 = uVar26 * 2 | (ushort)((short)uVar26 < 0);
  uVar5 = 0xe3fb58f5 - uVar13;
  sVar12 = (short)uVar34;
  uVar26 = (ushort)uVar5 >> 1 | sVar12 << 0xf;
  if (uVar26 == 0) {
    uVar13 = uVar13 & 0xffff0000 | (uint)(ushort)((ushort)uVar29 | (ushort)bVar45);
  }
  uVar38 = 0x167680ca - (uVar5 & 0xffff0000 | (uint)uVar26);
  uVar34 = ((uint)lVar6 & 0xffff0000 | (uint)(ushort)((short)(char)lVar6 * (short)(char)bVar45)) *
           0x276e6623;
  if (sVar12 != 0) {
    uVar34 = uVar10 | uVar47;
  }
  uVar20 = 0;
  if (uVar35 != 0) {
    for (; (uVar14 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
    }
  }
  uVar35 = (ulong)(uVar24 >> 1 | (uint)((uVar37 & 1) != 0) << 0x1f) +
           CONCAT62(SUB166(auVar1 >> 0x50,0),
                    CONCAT11(SUB161(auVar1 >> 0x48,0) + (char)uVar28 +
                             ((0xe3fb58f5U >> (uVar10 & 0x1f | uVar47) & 1) != 0),
                             SUB161(auVar1 >> 0x40,0)));
  uVar29 = uVar29 | (byte)(bVar45 << 1);
  uVar37 = (ushort)uVar9 | (ushort)uVar38;
  uVar10 = (ushort)(uVar3 + 0xc6c1) | 0x81c00000;
  uVar26 = (ushort)uVar20 >> 1;
  iVar42 = (int)uVar14;
  uVar28 = uVar10 + 0x1157ddd9 + iVar42;
  bVar19 = (byte)uVar37;
  uVar7 = (ulong)uVar34 << (bVar19 & 0x3f) | (ulong)(uVar34 >> 0x40 - (bVar19 & 0x3f));
  bVar30 = (char)uVar26 << 7;
  uVar14 = (((uVar15 & 0xffffffffffffff00 | (ulong)(byte)(bVar31 << bVar17 | bVar31 >> 8 - bVar17))
             << 1 | (ulong)((uVar5 & 1) != 0)) - 0x74fdece4) + (ulong)((uVar7 & 1) != 0);
  bVar21 = (bVar19 & 0x1f) % 9;
  uVar15 = uVar20 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar26 | (ushort)(uVar3 < 0x393f) << 0xf) & 0xffffffffffffff00 |
           (ulong)(byte)(bVar30 >> bVar21 | bVar30 << 9 - bVar21);
  uVar26 = (ushort)uVar14 & ~(1 << (uVar37 & 0xf));
  uVar14 = uVar14 & 0xffffffffffff0000;
  uVar20 = uVar14 | uVar26;
  lVar6 = 0;
  if (uVar20 != 0) {
    for (; (uVar20 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
    }
  }
  uVar10 = uVar10 >> 0xc;
  uVar34 = uVar10 | iVar42 << 0x14;
  uVar47 = -(uVar38 & 0xeabfc66);
  uVar7 = (uVar7 >> 1) << 6 | uVar35 >> 0x3a;
  bVar48 = (ushort)((ushort)uVar35 & 0xff00 | (ushort)(byte)((char)uVar35 >> (bVar19 & 0x1f))) <
           (ushort)uVar13;
  bVar30 = (byte)uVar10;
  iVar42 = (uint)(ushort)(uVar26 & 0xff00 | (ushort)(byte)-bVar48) * (uVar13 & 0xffff);
  uVar3 = (ushort)((uint)iVar42 >> 0x10);
  uVar24 = (uint)uVar15;
  bVar17 = (byte)(uVar37 & 0xff);
  iVar42 = (int)(short)iVar42 * (int)(short)uVar3;
  uVar26 = (ushort)iVar42;
  uVar14 = uVar14 | uVar26;
  bVar21 = (bVar17 & 0x1f) % 9;
  cVar18 = (char)uVar47;
  uVar10 = uVar47 & 0xffffff00 |
           (uint)(byte)((byte)(CONCAT11((short)uVar26 != iVar42,cVar18) >> bVar21) |
                       cVar18 << 9 - bVar21);
  uVar20 = (ulong)uVar10;
  uVar39 = uVar20 ^ (ulong)(uVar14 == uVar20) * (ulong)(uVar10 ^ uVar13);
  uVar14 = uVar14 ^ (ulong)(uVar14 != uVar20) * (uVar14 ^ uVar39);
  uVar10 = (uVar9 & 0xffff0000 |
           (uint)(ushort)(uVar37 & 0xff |
                         (ushort)(byte)((byte)((uint)uVar37 >> 8) >> 1 | (uVar3 != 0) << 7) << 8))
           << (bVar17 & 0x1f);
  bVar21 = (byte)(uVar14 >> 8);
  bVar31 = (byte)(uVar10 >> 8);
  uVar26 = CONCAT11(bVar31,(char)uVar14);
  uVar47 = (uint)uVar14 & 0xffff0000 | (uint)uVar26;
  uVar5 = (uVar13 - (((uint)lVar6 & 0xffff0000 | (uint)uVar3) + uVar24 * 2)) -
          (uint)CARRY1(bVar31,bVar21);
  uVar20 = (ulong)(uVar10 & 0xffff0000 | (uint)CONCAT11(bVar31 + bVar21,(char)uVar10)) +
           ((ulong)uVar28 | 0x40000);
  uVar10 = ((uint)(CONCAT14(bVar48,uVar34) >> (bVar19 & 0x1f)) | uVar34 << 0x21 - (bVar19 & 0x1f)) &
           0xffffff00;
  if (-1 < (int)(uVar24 & (int)uVar47 >> 0x1f)) {
    uVar10 = (uint)uVar39;
  }
  uVar9 = ((uint)uVar7 & 0xffffff00 | (uint)(byte)~(byte)uVar7) ^
          (uint)(1 << ((ulong)(byte)(bVar45 << 1) & 0x3f));
  uVar34 = uVar9 & 0x7fffffff;
  uVar35 = (uVar35 & 0xffffffffffff0000 |
           (ulong)(byte)(bVar30 >> (bVar17 & 7) | bVar30 << 8 - (bVar17 & 7))) + 0x60c3a993;
  bVar48 = CARRY4(uVar47,uVar10 & 0xe6e7dc28);
  iVar42 = uVar47 + (uVar10 & 0xe6e7dc28);
  if (!bVar48 && iVar42 != 0) {
    uVar39 = uVar39 & 0xffffffffffff0000 | (ulong)uVar28 & 0xffff;
  }
  uVar10 = CONCAT22((short)(ushort)(uVar5 >> 0x11) >> 1,(ushort)((int)(uVar5 >> 1) >> 1) & uVar26);
  bVar45 = (byte)uVar20 & 0x3f;
  uVar7 = (ulong)(uVar10 >> bVar45) | (ulong)uVar10 << 0x40 - bVar45;
  lVar6 = 0x3f;
  if (uVar29 != 0) {
    for (; uVar29 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  uVar44 = (ulong)((uVar13 + 0xe169a1fc) - (uint)bVar48) + 0x245ec30;
  bVar21 = (byte)((uint)iVar42 >> 0x18);
  uVar16 = uVar35 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar35 >> 0x1d) & 0xffffffffffffff00
  ;
  uVar13 = (uint)uVar16 | (uint)(byte)(((char)(uVar35 >> 8) >> 0x15) + 0x31);
  uVar35 = (ulong)((uint)uVar29 - uVar34);
  bVar45 = bVar21 >> 3;
  auVar1 = ZEXT116(0) << 0x40 | ZEXT816(uVar15);
  auVar2 = auVar1 >> 0x13;
  bVar17 = (byte)(uVar20 & 0xff);
  cVar18 = (byte)uVar34 + (char)uVar39 << (bVar17 & 0x1f);
  uVar47 = CONCAT31((uint3)((uVar9 << 1) >> 9),cVar18);
  uVar10 = 1 << (uVar26 & 0x1f);
  lVar23 = (uVar7 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar7 << 1)) + uVar35 +
           (ulong)((uVar10 & 1) != 0);
  bVar31 = ~SUB161(auVar2,0);
  uVar15 = SUB168(auVar2,0) & 0xffffffffffffff00 | SUB168(auVar1 << 0x2e,0);
  uVar13 = (((int)lVar6 + ((uint)uVar14 & 0xffff0000 | (uint)uVar26) + (uint)((uint)uVar29 < uVar34)
             >> (bVar17 & 0x1f) | uVar13 << 0x20 - (bVar17 & 0x1f)) & 0xffffffb8) - uVar13;
  uVar14 = (uVar15 | bVar31) >> 1;
  if (((uVar15 & 0x8000000000000000) != 0) == ((bVar31 & 1) != 0)) {
    uVar35 = (ulong)uVar13;
  }
  uVar5 = (uint)(uVar44 * 0x200) | (uint)(byte)('\0' >> (bVar17 & 0x1f));
  lVar6 = (ulong)CONCAT11(bVar21 >> 4 | bVar45 << 7,bVar45) * lVar23;
  uVar7 = uVar44 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar44 & (ushort)uVar14);
  uVar40 = CONCAT71((uint7)(byte)((ushort)((short)uVar28 - (short)(uVar20 & 0xff)) >> 8),0x6d);
  uVar15 = (long)(int)((uint)lVar6 & 0xffffff00 | (uint)(byte)((char)lVar6 + cVar18 + 1)) *
           (long)(int)uVar7;
  uVar29 = uVar15 & 0xffffffff;
  uVar9 = uVar13 * 8 >> (bVar17 & 0x3f) | uVar47 << 0x40 - (bVar17 & 0x3f);
  uVar28 = (uint)uVar14;
  if (CARRY8(uVar7,uVar35)) {
    uVar28 = uVar9;
  }
  iVar42 = uVar9 - uVar5;
  uVar3 = (short)(uVar7 + uVar35) + (short)uVar29 + 1;
  uVar26 = (short)(char)uVar29 * (short)(char)iVar42;
  uVar14 = (ulong)uVar47 << (bVar17 & 0x3f) | (ulong)(uVar47 >> 0x40 - (bVar17 & 0x3f));
  uVar37 = (ushort)lVar23 - (ushort)uVar14;
  uVar47 = uVar28 + 0xa4468e02 & 0xffff0000;
  bVar48 = (ushort)uVar14 <= (ushort)lVar23 && uVar37 != 0;
  bVar21 = (byte)uVar26;
  bVar31 = bVar17 ^ (bVar21 == bVar17) * (bVar17 ^ bVar48);
  uVar20 = uVar20 & 0xffffffffffff0000 |
           (ulong)CONCAT11(-1 >> (bVar17 & 0x1f),bVar17) & 0xffffffffffffff00 | (ulong)bVar31;
  lVar6 = uVar20 * 0x4e014301;
  bVar45 = ((byte)lVar6 & 0x1f) % 0x11;
  uVar20 = (ulong)(ushort)(CONCAT11(SEXT816(lVar6) != SEXT816((long)uVar20) * SEXT416(0x4e014301),
                                    (char)uVar14) ^ 1 << ((ushort)(uVar15 >> 0x21) & 0xf));
  uVar14 = uVar14 & 0xffffffffffff0000 | uVar20;
  uVar46 = ((ushort)uVar35 & 0xff00 | (ushort)bVar48) ^ (ushort)uVar40;
  uVar38 = (uint)lVar23 >> 0x18 | ((uint)lVar23 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
           (uint)uVar37 << 0x18;
  auVar1 = ZEXT816(uVar15 & 0xffff0000 | (ulong)uVar26 & 0xffffffffffffff00 |
                   (ulong)(byte)(bVar21 ^ (bVar21 != bVar17) * (bVar21 ^ bVar31))) * ZEXT416(uVar38)
  ;
  uVar26 = (ushort)~(uint)lVar6;
  uVar3 = (uVar3 >> bVar45 | uVar3 << 0x11 - bVar45) + uVar26;
  bVar45 = (byte)~(uint)lVar6;
  uVar9 = ((uint)(((ulong)(uint3)((uint)iVar42 >> 8) & 0xffffffffffff00) << 8) | (uint)uVar40) >>
          (bVar45 & 0x1f);
  uVar41 = SEXT28((short)uVar3);
  uVar15 = ((ulong)(uint)((int)uVar29 + 0x66 + (int)(uVar15 >> 0x20)) - 0x1223dd24c) -
           (ulong)(0xfffffffff8ce9108 < uVar41 || 0xfffffffffffffffe < uVar41 + 0x7316ef7);
  uVar37 = (ushort)((ushort)(uVar44 * 0x200 >> 0x10) >> 1 | 0x8000) >> 0xd;
  uVar43 = (uint)(ushort)(uVar37 + 0x897e);
  uVar24 = uVar9 << 0xc;
  uVar9 = (uint)(CONCAT14(uVar37 < 0x7682,uVar9) >> 0x15);
  uVar25 = (uint)uVar15 & 0xffff0000 | (uint)(uVar15 >> 1) & 0x7fff;
  uVar15 = uVar41 + 0x7316ef8 >> 1 | uVar20 << 0x3f;
  uVar37 = uVar26 << 1 | (ushort)((short)uVar26 < 0);
  uVar20 = uVar14 << 1;
  uVar38 = uVar38 + 0xe5c87b0d << (bVar45 & 0x1f);
  if ((long)uVar14 < 0 != (long)uVar20 < 0) {
    uVar38 = uVar47 | (ushort)((short)(uVar5 >> 1) + (short)(uVar28 + 0xa4468e02) * 8);
  }
  bVar45 = (byte)uVar37;
  bVar31 = (byte)uVar20 ^ bVar45;
  uVar28 = uVar25 << (bVar45 & 0x1f) | uVar25 >> 0x20 - (bVar45 & 0x1f);
  uVar5 = uVar37 ^ uVar28;
  lVar6 = (long)(uVar20 & 0xffffffffffffff00 | (ulong)bVar31) >> 1;
  bVar21 = (byte)uVar5 & 0xf;
  uVar37 = (short)uVar28 << bVar21 | (ushort)lVar6 >> 0x10 - bVar21;
  uVar28 = uVar28 & 0xffff0000 | (uint)uVar37;
  bVar17 = (char)((ulong)(ushort)((short)(((ushort)CONCAT71(SUB167(auVar1 >> 0x48,0),
                                                            SUB161(auVar1 >> 0x40,0) &
                                                            ~(byte)(1 << (ulong)bVar48) & 0x2b) |
                                          uVar26) << 7) >> 0x13) >> 8) + SUB161(auVar1,0) + 1;
  uVar25 = uVar43 << 0x11;
  uVar38 = uVar38 & 0xffffff00 | uVar38 >> 1 & 0x7f;
  uVar5 = uVar5 & 0xffffff0f;
  sVar8 = (sbyte)uVar5;
  uVar5 = (uVar24 & 0xffff0000 |
          (uint)(ushort)(((ushort)uVar9 & 0xff00 | (ushort)uVar24 |
                         (ushort)(byte)((char)uVar9 + (char)uVar3)) << sVar8 |
                        (ushort)uVar5 >> 0x10 - sVar8)) >> 1;
  uVar22 = uVar38 << sVar8 | uVar38 >> 0x20 - sVar8;
  uVar14 = (ulong)uVar22;
  uVar9 = (uint)((uVar16 | (byte)((bVar31 == 0) + 0xbb)) << (bVar45 & 0x3f)) & 0xffffff00 &
          ~(1 << (uVar37 & 0x1f));
  uVar25 = uVar25 >> sVar8 | uVar25 << 0x20 - sVar8;
  uVar38 = uVar9 >> sVar8 | uVar9 << 0x20 - sVar8;
  uVar20 = (ulong)uVar43 ^ 0xffffffff84e5ea14;
  uVar26 = (ushort)CARRY1((byte)uVar37,bVar17);
  uVar37 = uVar46 + 0xd9b9;
  bVar21 = (sVar8 + -0x4f) - (uVar46 < 0x2647 || uVar37 < uVar26) & 8;
  uVar43 = ~((int)(uVar7 + uVar35 >> 0x1d) + 0x2060d13bU);
  uVar9 = -((byte)((byte)lVar6 ^ SUB161(auVar1,0)) + uVar5 + 1 & 0xff);
  uVar46 = (ushort)uVar5;
  uVar46 = uVar46 << bVar21 % 0x11 | uVar46 >> 0x11 - bVar21 % 0x11;
  uVar10 = ~((int)(((((uint)((uVar39 & 0xffffffffffffff00 | (ulong)(byte)uVar34) << 0xb) | uVar10)
                    >> 1) - uVar13) - 1 & 0xffff0000 | (uint)(uVar3 >> (bVar45 & 0x1f))) >> 0xf &
            uVar28);
  uVar3 = ((ushort)(uVar47 >> 0x10) & 0xff00 | 1) ^ 1 << ((ushort)uVar43 & 0xf);
  if ((uVar24 & 0x1000000) != 0) {
    uVar10 = uVar10 & 0xffff0000;
  }
  uVar4 = uVar3 * 0x2beb;
  uVar29 = (ulong)(ushort)(uVar4 & 0xff | (ushort)(byte)((byte)(uVar4 >> 8) ^ bVar17) << 8);
  uVar7 = uVar14 ^ (ulong)(uVar29 == uVar14) * (ulong)(uVar22 ^ uVar43);
  uVar35 = uVar35 & 0xffffffffffff0000 | ((ulong)(ushort)(uVar37 - uVar26) & 0xfe00) >> 1 |
           uVar20 & 0xff;
  if ((uVar3 >> 9 & 1) != 0) {
    uVar35 = (ulong)uVar25;
  }
  uVar28 = ((uint)(((ulong)uVar28 & 0xffff) << 1) & 0xffff0000 | (uint)(byte)((ulong)uVar9 >> 8)) +
           (int)uVar35;
  bVar45 = (byte)uVar28;
  uVar39 = ((ulong)uVar9 + 0x2a6abdd5 << (bVar45 & 0x3f) |
           (ulong)((((uVar24 & 0xfffe0000) >> 1 | (uint)uVar46) & 0xff7fff00 |
                   (uint)(byte)((char)uVar46 + 1)) >> 0x40 - (bVar45 & 0x3f))) >> 1;
  uVar16 = (ulong)(long)(short)uVar9 >> (bVar45 & 0x3f);
  uVar28 = uVar28 >> 1;
  uVar34 = (uVar24 & 0xfefe0000) >> 1;
  lVar6 = (long)(((uVar20 & 0xffffffffffffff00 | uVar39 & 0xff) - 0xca9c81ef) -
                (ulong)((uVar38 >> 0x18 & 1) != 0)) >> ((byte)uVar28 & 0x3f);
  uVar26 = (ushort)uVar16 |
           1 << (((short)uVar25 << (bVar45 & 0x3f) | (ushort)(uVar35 >> 0x40 - (bVar45 & 0x3f))) &
                0xf);
  uVar5 = (uint)((uVar15 << bVar21 | uVar15 >> 0x40 - bVar21) >> 1);
  uVar13 = uVar5 & 0xffff;
  bVar45 = (byte)(uVar28 >> 8);
  uVar47 = (uint)CONCAT11(bVar45 >> 1 | bVar45 << 7,(byte)uVar28);
  uVar20 = uVar29 ^ (ulong)(uVar29 != uVar14) * (uVar29 ^ uVar7);
  if (CARRY4(uVar10 & 0xffff0000,uVar10 & 0xffff0000)) {
    uVar20 = (ulong)uVar34;
  }
  iVar42 = uVar47 << 1;
  bVar45 = (byte)iVar42;
  bVar21 = (byte)(uVar39 >> 0x18) >> 7;
  cVar18 = (char)lVar6;
  uVar3 = (short)uVar7 >> 7;
  uVar14 = uVar7 & 0xffffffffffff0000 | (ulong)uVar3;
  uVar37 = 0;
  if (uVar26 != 0) {
    for (; (uVar26 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
    }
  }
  bVar31 = (byte)((uint)iVar42 >> 8) & (byte)uVar20;
  uVar15 = uVar20 & 0x3fff | 0xc0;
  uVar46 = (ushort)(byte)uVar15;
  uVar4 = (ushort)uVar15;
  uVar46 = uVar4 / uVar46 & 0xff | uVar4 % uVar46 << 8;
  uVar4 = (short)lVar6 - 1;
  uVar10 = (uint)uVar4;
  bVar30 = (byte)uVar3 >> 3 | (byte)uVar3 << 5;
  uVar44 = (ulong)((uint)lVar6 & 0xffff0000 | uVar10 | 0xc0000000);
  uVar15 = (ulong)(((uint)uVar16 & 0xffff0000 | (uint)uVar26) * -0x33fa521e & 0x3fffffff) << 0x20 |
           uVar20 & 0xffff0000 | (ulong)uVar46;
  uVar29 = uVar15 % uVar44;
  bVar17 = bVar45 & 7 | bVar21;
  bVar19 = (byte)(uVar13 >> 8);
  uVar9 = uVar38 & 0xffffff00 | (uint)(byte)((char)uVar38 + 0x19) | 0x100946f;
  uVar7 = uVar29 & 0x5955d500 | (ulong)(byte)(((byte)uVar29 & 0x15) - 0x26);
  uVar29 = uVar14 & 0xffffff00 | (ulong)bVar30;
  if ((ushort)(uVar3 & 0xff00 | (ushort)bVar30) != 0) {
    uVar29 = uVar35 & 0xffffffffffff0000 | (ulong)uVar37;
  }
  uVar47 = ((uVar28 & 0xffff0000 | uVar47 & 0x7fff8000 | uVar34) << 1 |
           (uint)CONCAT11(bVar31 << 2 | bVar31 >> 7,bVar45 | bVar21)) & ~(1 << ((uint)uVar7 & 0x1f))
  ;
  auVar1 = (CONCAT88(uVar7,uVar15 / uVar44 << 0x35) & (undefined  [16])0xffffffffffffffff) %
           ZEXT816((ulong)uVar43 | 0xc000000000000000);
  uVar15 = 1 << ((ulong)uVar47 & 0x3f) ^ 0x3fffffffffffffff;
  uVar13 = ((uint)uVar39 & 0xffff0000 |
           (uint)CONCAT11(bVar19 >> bVar17 | bVar19 << 8 - bVar17,(char)uVar13)) + 0x4f8c61d1;
  bVar21 = (char)uVar9 << 1;
  uVar3 = (short)(ushort)uVar43 >> 1;
  sVar12 = SUB162(auVar1,0);
  uVar10 = ((uint)lVar6 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  uVar24 = ((uint)uVar20 & 0xffff0000 | (uint)uVar46) + (int)uVar14 & 0xffffff00 |
           (uint)((char)uVar4 != 'j') | 0x1ff38473;
  uVar20 = ~CONCAT62(SUB166(auVar1 >> 0x10,0),
                     (short)((uint)((int)(short)((cVar18 - sVar12) - (ushort)((uVar43 & 1) != 0)) *
                                   (int)sVar12) >> 0x10));
  uVar28 = bVar21 & 0x1f;
  bVar45 = ((byte)uVar47 & 0x1f) % 0x11;
  sVar12 = (short)uVar15;
  uVar37 = (ushort)(short)cVar18 >> 0xc | (short)cVar18 << 4;
  uVar34 = uVar9 & 0xffffff00 | (uint)(bVar21 & (byte)uVar20);
  uVar28 = ~(((uint)uVar15 & 0xffff0000 |
             (uint)(ushort)(sVar12 << bVar45 |
                           (ushort)(CONCAT12((uVar24 >> uVar28 & 1) != 0,sVar12) >> 0x11 - bVar45)))
            & uVar24 & ~(1 << uVar28));
  uVar14 = ((ulong)(ushort)((short)(char)(uVar13 >> 8) & 0xffU |
                           (ushort)(byte)(((uVar34 & 0x9db) == 0) << 6 |
                                         ((POPCOUNT((ushort)uVar34 & 0xdb) & 1U) == 0) << 2) << 8) |
           0x200) * uVar20;
  uVar20 = (ulong)((uVar13 & 0x7fff8000) << 1 |
                  (uint)(ushort)((short)uVar20 + 0xe6 + ((short)cVar18 + uVar37 + 1) * 4)) << 1;
  uVar15 = uVar20 | ((ulong)uVar10 << 0x35) >> 0x3f;
  uVar35 = (ulong)(uVar10 >> 0xb) + 1;
  bVar21 = (byte)uVar15;
  bVar45 = (byte)(uVar47 - uVar34) | bVar21;
  uVar5 = (uVar5 & 0xffff | (uint)(ushort)(cVar18 >> 7) << 0x10) ^ 0xc265e644;
  iVar42 = (int)(short)uVar14 * (int)(short)uVar37;
  uVar26 = (ushort)iVar42;
  uVar13 = (uint)(uVar35 << (bVar45 & 0x1f)) | (uint)(uVar35 >> 0x21 - (bVar45 & 0x1f));
  lVar6 = uVar29 << (bVar45 & 0x3f);
  uVar10 = (uVar47 - uVar34 & 0xffffff00 | (uint)bVar45) << (bVar45 & 0x1f);
  bVar45 = (byte)((ulong)(ushort)((uint)iVar42 >> 0x10) >> 8);
  uVar14 = uVar14 & 0xffffffffffff0000 | (ulong)(ushort)(uVar26 & 0xff | (ushort)bVar45 << 8);
  if ((POPCOUNT(bVar45 + (char)((ulong)uVar26 >> 8)) & 1U) != 0) {
    uVar28 = uVar28 & 0xffff0000 | (uint)(ushort)lVar6;
  }
  uVar35 = (ulong)(uVar10 & 0xffff0000 | (uint)(ushort)((short)uVar10 + 0x2b9e));
  uVar10 = (uint)lVar6 ^ uVar13;
  uVar47 = (int)(((uVar43 & 0xffff0000 | (uint)uVar3) & ~(uint)(1 << ((ulong)uVar3 & 0x3f))) +
                0x747e84d7) >> 1;
  lVar6 = 0x3f;
  if (uVar47 != 0) {
    for (; uVar47 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  auVar1 = SEXT816((long)uVar14) * SEXT816((long)(ulong)uVar5);
  uVar14 = uVar14 * uVar5;
  bVar45 = (byte)uVar14;
  if (!SCARRY8((ulong)uVar28,(ulong)uVar28)) {
    uVar10 = (uint)uVar15;
  }
  uVar15 = (ulong)(CONCAT18(SEXT816(lVar6 * -0x3e42a425) != SEXT816(lVar6) * SEXT416(-0x3e42a425),
                            uVar35) >> 0x1b);
  bVar17 = (byte)uVar15;
  uVar24 = (uint)uVar15;
  uVar29 = (uVar13 - uVar35) - 0x264f52ba;
  bVar31 = SUB161(auVar1 >> 0x40,0);
  uVar28 = (uVar5 & 0xffffff00 | (uint)(byte)((char)uVar5 >> bVar17)) >> 1;
  uVar20 = uVar20 & 0xffffffffffffff00 | (ulong)(bVar21 & bVar31);
  uVar20 = uVar20 << bVar17 | uVar20 >> 0x40 - bVar17;
  uVar5 = (uint)uVar20 & 0xffffff00 | (uint)(byte)((char)uVar20 - 1);
  iVar42 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> iVar42 & 1) == 0; iVar42 = iVar42 + 1) {
    }
  }
  lVar23 = SUB168(auVar1 >> 0x40,0) * 0x52c811a0;
  uVar5 = CONCAT22((undefined2)(cVar18 >> 7),uVar37) & 0xffffff00 |
          (uint)(byte)((byte)uVar37 << (bVar17 & 7) | (byte)uVar37 >> 8 - (bVar17 & 7));
  cVar18 = (char)lVar23;
  lVar6 = -(uVar14 & 0xffffffffffff0000 |
            (ulong)CONCAT11(!SBORROW8((ulong)uVar13,uVar35),bVar45) & 0xffffffffffffff00 |
           (ulong)(bVar45 | bVar31));
  uVar20 = (ulong)uVar5;
  if ((uint)(int)(short)uVar5 < 0x52c4cc6c) {
    uVar20 = uVar29;
  }
  uVar35 = (ulong)(uVar28 & 0xffff | 0x61320000) | 0xffffffffefbcc356;
  uVar14 = 0;
  if ((POPCOUNT(uVar35 & 0xff) & 1U) != 0) {
    uVar14 = (ulong)(uVar10 & 0xffffff00 | uVar10 >> 1 & 0x7f);
  }
  uVar26 = (ushort)uVar28 & 0xff;
  uVar14 = uVar14 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar14 << 10 | uVar26 >> 6);
  uVar13 = (uint)uVar29;
  uVar10 = (uint)lVar6 & 0xffff0000 | (uint)(ushort)((short)lVar6 - (short)uVar35);
  iVar42 = 0x1f;
  if ((uVar15 & 0xff) != 0) {
    for (; uVar24 >> iVar42 == 0; iVar42 = iVar42 + -1) {
    }
  }
  sVar12 = 0xf;
  if ((uVar28 & 0xff) != 0) {
    for (; uVar26 >> sVar12 == 0; sVar12 = sVar12 + -1) {
    }
  }
  uVar46 = CONCAT11((char)((ulong)lVar23 >> 8) * '\x02',cVar18) + sVar12 * 4;
  uVar29 = uVar35 & 0xffffffffffff0000 | (ulong)uVar46;
  bVar45 = ((char)(uVar24 >> 1) + '\v') -
           (SEXT816((long)(uVar29 * 0x725232a3)) != SEXT816((long)uVar29) * SEXT416(0x725232a3));
  uVar15 = (ulong)(uVar24 << 0x1f) | (ulong)bVar45;
  uVar28 = (uVar28 & 0xffff) << 1;
  uVar37 = (ushort)uVar28;
  uVar4 = uVar37 | 1;
  uVar5 = uVar10 << (bVar45 & 0x1f) | uVar10 >> 0x20 - (bVar45 & 0x1f);
  uVar35 = (ulong)uVar5;
  uVar47 = ((((uVar9 & 0xffff0000 | (uint)(ushort)((ushort)uVar34 >> 1)) + uVar47) * 2 ^ 0x3a01bc8d)
           & (uVar13 << 2 | uVar13 >> 0x1e)) >> (bVar45 & 0x1f) |
           (int)uVar15 << 0x20 - (bVar45 & 0x1f);
  uVar15 = uVar15 << (bVar45 & 0x3f);
  bVar45 = (char)uVar15 + (char)(uVar15 >> 8);
  uVar3 = (ushort)uVar15 & 0xff00 | (ushort)bVar45;
  bVar45 = bVar45 & 0xf;
  uVar15 = uVar15 & 0xffffffffffff0000;
  uVar10 = ((uint)uVar29 & 0xffff0000 | (uint)(ushort)(uVar46 + (byte)((char)uVar26 << 1 | 1))) >> 1
  ;
  uVar26 = (uVar3 << bVar45 | uVar3 >> 0x10 - bVar45) + 0x318a;
  uVar29 = (uVar47 * -0x2fc71c46 | uVar47 >> 0x1f) - uVar14;
  sVar12 = 0xf;
  if (uVar4 != 0) {
    for (; uVar4 >> sVar12 == 0; sVar12 = sVar12 + -1) {
    }
  }
  uVar7 = uVar29 ^ (ulong)(uVar35 == uVar29) * (uVar29 ^ (uVar15 | uVar26));
  uVar35 = uVar35 ^ (ulong)(uVar35 != uVar29) * (uVar35 ^ uVar7);
  bVar45 = (byte)uVar26;
  uVar44 = uVar20 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)uVar20 >> (bVar45 & 0xf) |
                          (ushort)uVar20 << 0x10 - (bVar45 & 0xf));
  uVar29 = uVar35 >> (bVar45 & 0x3f) | uVar35 << 0x40 - (bVar45 & 0x3f);
  uVar14 = uVar14 ^ 0x81;
  uVar34 = (uint)(uVar37 >> 6);
  uVar24 = (int)uVar7 + uVar47;
  uVar20 = (ulong)uVar34 & 0x3f;
  uVar35 = 1 << uVar20;
  uVar41 = uVar14 ^ uVar35;
  uVar39 = (ulong)((uint)((CONCAT14((uVar14 >> uVar20 & 1) != 0,uVar10) | 0x80000000) >> 5) |
                  uVar10 << 0x1c) & (uVar15 | uVar26);
  uVar46 = (short)uVar41 << (bVar45 & 0x1f);
  bVar19 = cVar18 + '%' +
           ((byte)((long)((ulong)(ushort)((short)uVar5 >> 0xf) ^ 0x100) >> 1) ^ bVar45);
  uVar26 = uVar26 >> 1;
  uVar7 = uVar15 | uVar26;
  uVar3 = (ushort)uVar24;
  uVar13 = (int)(short)uVar29 * (int)(short)uVar3;
  uVar5 = (uint)uVar29;
  uVar37 = ~(uVar46 + ~(ushort)uVar39);
  uVar4 = uVar37 << 6 | (ushort)(CONCAT12((int)(short)uVar13 != uVar13,uVar37) >> 0xb);
  uVar47 = uVar47 & 0xffff0000 | (uint)((ushort)((short)uVar47 << (bVar45 & 0x1f)) >> 1);
  uVar9 = (uint)uVar7;
  uVar10 = uVar47 - uVar9;
  uVar16 = (ulong)(uVar28 & 0xffff0000 | uVar34 & 0xffffff00 |
                  (uint)((SBORROW4(uVar47,uVar9) != false) == (int)uVar10 < 0));
  uVar28 = (uVar5 & 0xffff0000 | uVar13 & 0xff00 | 0xe2) >> 1;
  uVar20 = (ulong)uVar10 + 0x8e785eaddc7459db;
  lVar23 = uVar20 + (uVar3 < uVar4);
  bVar17 = (byte)uVar28;
  bVar31 = (byte)(uVar28 >> 8);
  bVar45 = (byte)uVar26 >> 1;
  uVar29 = uVar16 | 0xc000000000000000;
  bVar21 = bVar45 & 0xf;
  uVar37 = SUB162((ZEXT116(0x7187a152238ba624 < (ulong)uVar10 ||
                           CARRY8(uVar20,(ulong)(uVar3 < uVar4))) << 0x40 |
                  ZEXT816(0x8e785eaddc7459db)) >> 0x26,0);
  uVar14 = (uVar15 | (ulong)uVar26 & 0xffffffffffffff00 |
           (ulong)(byte)(bVar45 | (bVar31 < bVar17) << 7)) << 0x14;
  uVar15 = uVar14 | uVar35 >> 0x2c;
  lVar6 = uVar15 + 0x3d7c25ce + (uVar39 & 0xffffffffffff0000 | (ulong)uVar46) * 8;
  bVar45 = SUB161((ZEXT416((uVar13 >> 0x10) + 1) << 0x40 |
                  ZEXT416((uVar5 & 0xfffe0000) >> 1 | (uint)CONCAT11(bVar31 - bVar17,bVar17))) %
                  ZEXT816(uVar29) >> 8,0);
  uVar28 = (uint)lVar6 & 0xffff0000 | (uint)(ushort)((ushort)(byte)lVar6 * (ushort)bVar45);
  uVar20 = uVar44 - 0x45c02fef;
  if (0x45c02fee < uVar44) {
    uVar15 = uVar14 | (uVar41 & 0xf000000000000000) >> 0x2c |
             (ulong)(ushort)((((ushort)lVar23 & 0xff00 | (ushort)(byte)((char)lVar23 + 0x3e)) &
                             ~(ushort)(1 << (uVar13 & 0x1f))) * 0x4513);
  }
  uVar46 = 0xf;
  if (bVar19 != 0) {
    for (; bVar19 >> uVar46 == 0; uVar46 = uVar46 - 1) {
    }
  }
  bVar17 = (byte)(uVar3 - uVar4);
  uVar14 = 1 << (uVar16 & 0x3f) ^ 0x3fffffffffffff45;
  bVar45 = (bVar19 - bVar45) - ((int)uVar28 < 0);
  auVar1 = ZEXT416(uVar28 << 1 | 1) * ZEXT816(uVar15);
  uVar27 = (ushort)((ulong)uVar46 << 1);
  if ((ushort)uVar15 <= uVar27) {
    uVar29 = uVar7;
  }
  bVar31 = (byte)(SUB162(auVar1,0) >> 6);
  uVar35 = uVar15 & 0xffffffffffffff00 | (ulong)bVar31;
  uVar29 = uVar29 >> (bVar31 & 0x3f);
  sVar12 = (short)uVar20;
  sVar32 = sVar12 * 5;
  uVar10 = (uVar24 & 0xffff0000 | (ushort)(uVar3 - uVar4) & 0xffffff00 |
           (uint)(byte)(bVar17 >> 1 | bVar17 << 7)) ^ 1 << ((uint)uVar14 & 0x1f);
  uVar35 = uVar35 >> (bVar31 & 0x3f) | uVar35 << 0x40 - (bVar31 & 0x3f);
  iVar42 = (int)sVar32 * (int)(short)uVar35;
  uVar28 = (uint)uVar14 & 0xffff0000 |
           (uint)(ushort)((((ushort)uVar14 >> 1 | (ushort)((uVar14 & 1) != 0) << 0xf) - sVar12) - 1)
  ;
  uVar3 = (ushort)(uVar35 & 0xffffffffffffff00) |
          (ushort)(byte)((char)(byte)uVar35 >> ((byte)uVar35 & 0x1f));
  uVar14 = 0x80;
  sVar12 = 0xf;
  if (uVar3 != 0) {
    for (; uVar3 >> sVar12 == 0; sVar12 = sVar12 + -1) {
    }
  }
  bVar17 = (byte)((uint)iVar42 >> 0x10);
  uVar7 = ((uint)(ushort)(uVar37 << bVar21 | uVar37 >> 0x10 - bVar21) << 0x1c) - uVar29;
  uVar37 = (ushort)((short)(ulong)(CONCAT18(CARRY4((uint)(byte)(bVar45 >> 1 | bVar45 * -0x80),
                                                   (uint)uVar29),
                                            (ulong)uVar46 << 1 & 0xffffffffffff0000 |
                                            (ulong)(ushort)(uVar27 - (ushort)uVar15)) >> 9) + sVar12
                   ) >> 1;
  iVar11 = (int)CONCAT62((int6)((uVar35 & 0xffffffffffffff00) >> 0x10),0x8ba1) >> 1;
  bVar45 = (byte)iVar11;
  uVar47 = (uint)CONCAT62(SUB166(auVar1 >> 0x50,0),(short)((uint)iVar42 >> 0x10));
  uVar20 = (ulong)((char)((byte)((uVar47 << (bVar45 & 0x1f)) >> 8) |
                         (byte)((uVar47 >> 0x20 - (bVar45 & 0x1f)) >> 8)) < '\0') << 0x20 |
           uVar20 & 0xffffffff;
  uVar5 = (uint)(uVar20 << (bVar45 & 0x1f)) | (uint)(uVar20 >> 0x21 - (bVar45 & 0x1f));
  uVar3 = (short)uVar10 * -0x2265;
  bVar31 = (byte)uVar37;
  bVar21 = bVar31 >> 1 |
           ((ulong)(long)(int)CONCAT71((uint7)(CONCAT62(SUB166(auVar1 >> 0x10,0),sVar32) >> 8) &
                                       0xffffffffffff00 | (uint7)(byte)((uint)iVar42 >> 8),
                                       (short)iVar42 != iVar42) < (ulong)uVar5) << 7;
  uVar13 = uVar37 & 0xffffff00;
  uVar47 = uVar13 | 0x80000000 | (uint)bVar21;
  if ((int)uVar28 < 0) {
    uVar3 = (ushort)(uVar7 & 0xffffffff);
  }
  uVar37 = CONCAT11((char)((uint)iVar11 >> 8),bVar17);
  uVar10 = (uVar10 & 0xffff0000 | (uint)uVar3) + 1;
  sVar12 = (uVar26 & 0xcc00 | (ushort)(((byte)uVar26 & 0xa2) >> 1)) + 0x274c;
  if (sVar12 == 0) {
    uVar14 = (ulong)uVar10;
  }
  uVar26 = (short)uVar14 << 1 | (ushort)((short)uVar14 < 0);
  uVar34 = (uVar10 - iVar11) - 1;
  uVar10 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar10 == 0; uVar10 = uVar10 - 1) {
    }
  }
  uVar10 = uVar10 & 0xffff0000 | (uint)(ushort)((short)uVar10 << 1 | (ushort)uVar29 >> 0xf);
  uVar24 = (uint)(bVar17 >> (bVar45 & 0x1f)) | uVar47 << 0x20 - (bVar45 & 0x1f);
  if ((uVar7 & 0xffffffff) <= (ulong)uVar47) {
    uVar24 = uVar10;
  }
  uVar47 = uVar24 + 0x4caf3bec + (uint)((int)uVar10 < 0);
  uVar3 = (ushort)uVar7;
  uVar27 = (ushort)uVar34;
  uVar46 = uVar3 ^ (ushort)(uVar37 == uVar3) * (uVar3 ^ uVar27);
  uVar37 = uVar37 ^ (ushort)(uVar37 != uVar3) * (uVar37 ^ uVar46);
  uVar20 = uVar29 >> 0x25;
  uVar3 = (ushort)iVar11;
  bVar19 = bVar45 + (char)sVar12;
  bVar17 = (byte)uVar37 & bVar19;
  uVar37 = uVar37 & 0xff00;
  if ((char)bVar17 < '\0') {
    uVar29 = uVar29 & 0xffffffffffff0000 |
             (ulong)(ushort)((ushort)(uVar10 << 1) | (ushort)CARRY1(bVar21,bVar21));
  }
  uVar15 = (ulong)(uVar47 >> (bVar45 & 0x1f) | uVar47 << 0x20 - (bVar45 & 0x1f)) + 1;
  uVar10 = ((int)(char)bVar45 << 0x1b | (uint)uVar20) + 0x900a1c66;
  uVar35 = (ulong)((((uint)uVar41 & 0xffff0000 | (uint)(ushort)((short)uVar4 >> 0x17)) << 3 |
                   uVar9 >> 0x1d) & 0xa886862b) | 1 << (uVar15 & 0x3f);
  uVar33 = SEXT12((char)uVar10);
  bVar21 = bVar19 ^ (bVar17 == bVar19) * (bVar19 ^ (byte)((ulong)uVar37 >> 8));
  uVar4 = (ushort)uVar10;
  uVar36 = (short)uVar29 - 1;
  uVar20 = uVar15 & 0xffffffffffffff00;
  if (!SCARRY2(uVar33,uVar3)) {
    uVar34 = uVar34 & 0xffff0000 | uVar5 & 0xffff;
  }
  uVar16 = (ulong)CONCAT22((short)uVar27 >> 0xf,(uVar27 + 0xd25a) - (ushort)CARRY2(uVar33,uVar3));
  uVar28 = (uVar28 >> 1 | 0x80000000) & ~(1 << (uVar34 & 0x1f));
  uVar39 = (ulong)((uVar34 & 0xffffff00 | (uint)(byte)((char)uVar34 + (char)uVar36)) >> 1 |
                  uVar28 << 0x1f);
  if (uVar16 == 0) {
    uVar20 = uVar15 & 0xffffffffffff0000;
  }
  auVar1 = ZEXT416((uint)(int)(short)(uVar37 | (byte)(bVar17 ^ (bVar17 != bVar19) *
                                                               (bVar17 ^ bVar21)) | uVar27)) *
           ZEXT816(uVar39);
  uVar15 = (ulong)(uVar4 & 0xff | 0x2000);
  uVar20 = (uVar20 << 1 & 0xffffffffffff0000 | (uVar20 << 1) >> 10 & 0x3f) + 0x5e3212a8;
  if (0x14ad6ed9 < uVar28) {
    uVar20 = uVar15;
  }
  return SUB168(auVar1,0) + uVar20 + (ulong)(uVar5 * 0x240c8c2a) + SUB168(auVar1 >> 0x40,0) +
         (ulong)((int)((long)(uVar7 & 0xffffffffffff0000 |
                             (ulong)(ushort)((uVar46 & 0xff00 | (ushort)(byte)((char)uVar46 << 1)) &
                                            ~(1 << (uVar4 & 0xf)))) >> 1) + 0x1687f373U >> 1) +
         uVar15 + (ulong)(uVar10 & 0xfff7ff00 |
                         (uint)(byte)((char)uVar10 + bVar17 + 0x88 + bVar45 * '\x04')) +
         (ulong)(uint)((int)uVar28 >> 0x15) + uVar39 * 2 +
         CONCAT62((uint6)((ulong)(((long)(uVar14 & 0xffffffffffff0000 |
                                          (ulong)uVar26 & 0xffffffffffffff00 |
                                         (ulong)(byte)((char)uVar26 - 1)) >> 1) << 0x13) >> 0x11),
                  (short)(uVar33 + uVar3) >> 0x18) +
         (uVar29 & 0xffffffffffff0000 |
         (ulong)(ushort)(uVar36 >> 1 | (ushort)((uVar36 & 1) != 0) << 0xf)) + (ulong)uVar5 +
         (uVar35 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar35 << (bVar21 & 0x1f))) +
         (-uVar16 & 0xffffffffffff0000 | (ulong)(ushort)(uVar4 * 0x20b8)) +
         (ulong)(((ushort)((ushort)uVar13 & 0xbfff | (ushort)(bVar31 & 0xfe)) | 0x80000000) +
                0x20e916ad) + 0x40156acb01da3258;
}



// WARNING: Removing unreachable block (ram,0x004052bd)
// WARNING: Removing unreachable block (ram,0x004050ae)
// WARNING: Removing unreachable block (ram,0x004050cb)
// WARNING: Removing unreachable block (ram,0x00405661)
// WARNING: Removing unreachable block (ram,0x004051ea)
// WARNING: Removing unreachable block (ram,0x004050e3)
// WARNING: Removing unreachable block (ram,0x00405d50)

long log_size_10_var_004(void)

{
  long lVar1;
  int iVar2;
  undefined auVar3 [16];
  uint3 uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  char cVar14;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  sbyte sVar15;
  byte bVar16;
  byte bVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar23;
  ulong uVar24;
  byte bVar25;
  ulong uVar26;
  byte bVar27;
  short sVar28;
  byte bVar30;
  uint uVar29;
  uint uVar31;
  ushort uVar32;
  ulong uVar33;
  char cVar34;
  ulong uVar35;
  ulong uVar36;
  byte bVar37;
  byte bVar38;
  ushort uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  long lVar44;
  uint uVar45;
  ushort uVar46;
  uint uVar47;
  ulong uVar49;
  ulong uVar50;
  uint uVar51;
  ulong uVar52;
  bool bVar53;
  char in_AF;
  ulong uVar22;
  int iVar48;
  
  for (lVar44 = 0x3f; 0x9638161f78676efeU >> lVar44 == 0; lVar44 = lVar44 + -1) {
  }
  uVar7 = (ushort)(lVar44 + 0x40b1);
  uVar18 = uVar7 + 0x179;
  bVar16 = (byte)uVar18;
  uVar41 = (byte)(-7 >> (bVar16 & 0x1f)) | 0x5442d000;
  bVar16 = bVar16 & 0x1f;
  uVar40 = uVar41 >> bVar16 | uVar41 << 0x20 - bVar16;
  uVar20 = (uVar18 | 0xe4ae0000) + 0x5a158cce;
  bVar16 = (byte)uVar20;
  uVar41 = (int)((uVar7 >> 9 & 1) != 0 | 0x1ae) >> (bVar16 & 0x1f);
  uVar18 = 0 >> (bVar16 & 0x1f);
  sVar9 = 0xf;
  uVar7 = (ushort)uVar40 >> 1;
  if (uVar7 != 0) {
    for (; uVar7 >> sVar9 == 0; sVar9 = sVar9 + -1) {
    }
  }
  uVar7 = (ushort)uVar41 >> 1;
  uVar41 = uVar41 & 0xffff0000;
  uVar40 = -((uVar40 << 0x10) >> 0x11);
  bVar53 = (POPCOUNT(uVar7 & 0xd4) & 1U) != 0;
  bVar37 = (char)uVar40 + 0x5b;
  uVar23 = 0x92b20f83;
  if (bVar37 != 0) {
    uVar23 = 0x15dd1bdf;
  }
  uVar43 = 1 << bVar53 ^ 0x15dd1bdf;
  uVar46 = uVar18 | 1 << ((ushort)uVar43 & 0xf);
  uVar51 = uVar46 & 0x1f;
  uVar21 = (ulong)(uVar20 ^ 1 << uVar51) + 0xaa522ab56f08825b;
  for (uVar10 = 0; (0xffffd0c9U >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
  }
  uVar47 = uVar41 | (uint)(byte)((char)((uint)(ushort)(uVar7 | uVar18 << 0xf) >> 8) + 0xf) << 8;
  if ((uVar46 >> 2 & 1) != 0) {
    bVar16 = (byte)uVar43;
  }
  lVar1 = 0x3f;
  if (uVar23 != 0) {
    for (; uVar23 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar13 = uVar21 & 0xffffffffffffff0f;
  uVar18 = 0;
  uVar46 = (ushort)uVar13;
  if (uVar46 != 0) {
    for (; (uVar46 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
    }
  }
  uVar11 = ((((ulong)uVar40 & 0xffffffffffffff00 | 0xc000000000000000 | (ulong)bVar37) -
            CONCAT71(SUB167(((CONCAT88(0x12,0x12dfe10f83) & (undefined  [16])0xffffffffffffffff ^
                             (undefined  [16])0x6a) & (undefined  [16])0xffffffffffffffff) %
                            ZEXT816((ulong)uVar40 | 0xc000000000000000) >> 8,0),bVar53)) -
            (ulong)((uVar20 >> uVar51 & 1) != 0) >> 8 & 0xffffffffffff00) << 8;
  uVar20 = ((uint)lVar1 & 0xffffff00 | (uint)(byte)((byte)lVar1 + 0x26)) + 0xc8b1feae +
           (uint)((byte)lVar1 < 0xda);
  sVar15 = (sbyte)uVar13;
  uVar8 = 0;
  uVar19 = (ushort)uVar20;
  if (uVar19 != 0) {
    for (; (uVar19 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  uVar35 = ((ulong)(uVar47 | (byte)~(byte)uVar7) << 4 | 3) ^ 0xffffffffcd675f34;
  bVar37 = -~(byte)uVar7;
  uVar47 = uVar47 | bVar37;
  uVar13 = 0xffffffffffffffc1;
  if ((uVar19 >> (uVar46 & 0xf) & 1) == 0 && bVar37 != 0) {
    uVar13 = uVar23;
  }
  bVar53 = (uVar13 & 1) != 0;
  if (!bVar53) {
    uVar47 = uVar41 | (ushort)uVar23;
  }
  if ((POPCOUNT((char)(uVar10 >> 8) + bVar16 + bVar53) & 1U) != 0) {
    uVar18 = 0x87c1;
  }
  uVar24 = (ulong)uVar18;
  uVar51 = (uint)((uVar13 & 0xffffffff) >> 1);
  uVar52 = (uVar11 | uVar24) >> 4;
  uVar41 = (uVar10 & 0xffff0000 |
            (uint)(ushort)((short)(char)uVar8 & 0xffU |
                          (ushort)(byte)((uint)(ushort)(short)(char)uVar8 >> 8) << 8) | 0xdb00) * 3;
  uVar41 = uVar41 & 0xffff0000 | (uint)CONCAT11(~(byte)(uVar41 >> 8),(char)uVar41);
  bVar37 = sVar15 + 0x8aU ^ 0x7a;
  uVar33 = (ulong)((ushort)((short)(char)bVar16 << sVar15 |
                           (ushort)(short)(char)bVar16 >> 0x10 - sVar15) >> (bVar37 & 0x3f));
  uVar13 = (long)(int)uVar41 * (long)(int)uVar41;
  uVar4 = CONCAT12((long)(int)uVar13 != uVar13,(short)uVar13) >> 2;
  uVar7 = (ushort)uVar4 | (short)uVar13 << 0xf;
  uVar36 = uVar13 & 0xffff0000;
  bVar17 = (byte)uVar47;
  uVar39 = (ushort)uVar35;
  uVar50 = (ulong)uVar47 + (long)(int)uVar51;
  uVar18 = (short)uVar50 * 0x485b;
  uVar21 = uVar21 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar18 & 0xff |
                          (ushort)(byte)((char)((ulong)uVar18 >> 8) + (char)uVar50) << 8);
  uVar45 = ((uint)(lVar44 + 0x40b1) >> 1 | 0x80000000) ^ 0x80000000;
  uVar12 = uVar21 << 0x14;
  uVar26 = (ulong)(CONCAT18(uVar45 < 0x59fc8758,uVar21) >> 0x2d);
  uVar10 = (uint)(ushort)(uVar19 & ~(1 << (uVar46 & 0xf)) | 0x8000);
  uVar21 = uVar33 << 1;
  bVar16 = (byte)uVar26 ^ (char)(uVar36 >> 0x18) >> 7;
  uVar22 = uVar26 & 0xffffffffffffff00 | uVar12 | (ulong)bVar16;
  uVar35 = (uVar35 & 0xffffffffffff0000 | (ulong)(ushort)(uVar39 >> 6 | uVar39 << 10)) +
           (ulong)(uint)((int)((uint)uVar36 | (uint)uVar7) >> 0x1f);
  uVar49 = (ulong)((uint)uVar23 ^
                  1 << ((byte)(((bVar37 + bVar17 + (uVar13 >> 0x20 < 0x6e0cd358)) - (char)uVar4) - 1
                              ) & 0x1f)) | 0xc000;
  uVar41 = (uint)(ushort)uVar49;
  uVar40 = CONCAT22((short)(uVar36 >> 0x10) >> 0xf,uVar7) & 0x3fffffff;
  uVar7 = (ushort)(uVar40 / uVar41);
  uVar40 = uVar40 % uVar41;
  bVar37 = (byte)uVar40;
  uVar23 = (uVar11 | uVar24 & 0xfffffffffffff000) >> 4 | uVar24 << 0x3c;
  uVar13 = uVar23 | bVar37;
  uVar29 = uVar45 + 0xcf08ee97 + (uint)CARRY1(bVar37,(byte)uVar52);
  uVar42 = 0 >> (bVar16 & 0x1f);
  uVar45 = (int)uVar43 >> sVar15 & 0x4d49;
  uVar20 = uVar10 << 0x1e | (uVar20 & 0xffff0000 | uVar10) >> 2;
  uVar18 = (ushort)uVar45;
  uVar41 = (uint)(ushort)((short)uVar7 >> 0xf) << 0x10;
  bVar16 = SCARRY2(uVar18,uVar7) + bVar17;
  uVar43 = uVar35 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar35 << 1 |
                        (CARRY1(SCARRY2(uVar18,uVar7),bVar17) || CARRY1(bVar16,CARRY2(uVar18,uVar7))
                        ));
  if (0x57efdd66 < (uVar45 | uVar41)) {
    uVar22 = uVar26 & 0xffffffffffff0000 | uVar12 | uVar52 & 0xff00 | (ulong)bVar37;
  }
  uVar51 = ((uVar8 | 0x15dd0000) << 7 | uVar51 >> 0x19) + 1;
  lVar44 = (ulong)uVar47 + (uVar49 >> 1);
  uVar40 = (int)(short)uVar18 *
           (int)(short)((int)((uint)(uVar50 & 0xffffffffffffff00) & 0xffff0000 |
                             (uint)CONCAT11((char)((uVar50 & 0xffffffffffffff00) >> 8) +
                                            (char)(uVar40 >> 8),uVar33 != 0)) >> 10);
  uVar10 = uVar41 | uVar40 & 0xffff | 0x750275bc;
  cVar14 = (char)uVar42;
  uVar10 = uVar10 ^ (uint)(uVar10 != uVar20) *
                    (uVar10 ^ uVar20 ^ (uint)(uVar10 == uVar20) *
                                       (uVar20 ^ (uVar42 & 0xffffff00 |
                                                 (uint)(byte)(cVar14 << 1 | cVar14 < '\0'))));
  bVar37 = (char)uVar22 + 8;
  uVar41 = (uint)((uVar23 & 0x7fffffffffff8000) << 1);
  uVar46 = (short)((ushort)uVar22 & 0xff00 | (ushort)bVar37) >> (bVar37 & 0x1f);
  uVar23 = uVar22 & 0xffffffffffff0000 | (ulong)uVar46;
  lVar1 = 0x3f;
  if (uVar43 != 0) {
    for (; uVar43 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  bVar17 = (byte)uVar46;
  bVar37 = (bVar17 & 0x1f) % 0x11;
  uVar8 = (ushort)uVar21;
  uVar21 = uVar21 & 0xffffffffffff0000 | (ulong)(ushort)(uVar8 >> bVar37 | uVar8 << 0x11 - bVar37);
  uVar20 = (byte)(uVar18 + uVar7) | 0xf98d0000;
  iVar48 = 0;
  if (uVar20 != 0) {
    for (; (uVar20 >> iVar48 & 1) == 0; iVar48 = iVar48 + 1) {
    }
  }
  uVar20 = uVar29 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar29 & 0xff00 |
                          (ushort)(byte)(bVar16 + CARRY2(uVar18,uVar7) ^ 0x97) |
                         1 << ((ushort)lVar44 & 0xf));
  uVar11 = (ulong)((uVar10 & 0xffff0000 | (uint)(ushort)((short)uVar10 * (short)(uVar40 >> 0x10))) *
                  uVar20);
  auVar3 = SEXT816((long)uVar11) * SEXT816((long)uVar21);
  uVar11 = uVar11 * uVar21;
  uVar8 = 0;
  uVar19 = (ushort)lVar1;
  if (uVar19 != 0) {
    for (; (uVar19 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  uVar40 = (uint)(ushort)(uVar18 + uVar7 | 0xc000);
  uVar10 = CONCAT22(SUB162(auVar3 >> 0x40,0),(short)uVar11) & 0x3fffffff;
  uVar52 = SUB168(auVar3 >> 0x40,0) & 0xffffffffffff0000;
  uVar7 = uVar8 ^ 1 << (uVar19 & 0xf);
  uVar47 = (uint)lVar44 & 0xffff0000 | (uint)uVar7;
  uVar36 = (ulong)(uVar51 & 0xffffff00 |
                  (uint)(byte)((char)uVar51 + (char)uVar7 + ((uVar8 >> (uVar19 & 0xf) & 1) != 0)));
  uVar50 = (ulong)(ushort)(uVar8 & 0xff | (ushort)SCARRY4(uVar47,1) << 8);
  uVar20 = (int)uVar20 >> (bVar17 & 0x1f) |
           uVar41 | (ushort)(((ushort)(uVar13 << 1) | (ushort)((long)uVar13 < 0)) - 1);
  if ((int)uVar20 < 1) {
    uVar36 = uVar22 & 0xffff0000 | (ulong)uVar46;
  }
  uVar7 = ((short)(uVar10 / uVar40) << 1 | 1U) + 0xaa3b;
  uVar13 = CONCAT62((int6)((long)uVar52 >> 0x11),
                    (ushort)((long)(uVar52 | (ushort)(uVar10 % uVar40)) >> 1) >> 1);
  if (-1 < (short)uVar7) {
    uVar13 = uVar23;
  }
  uVar52 = (ulong)CONCAT11((char)((uVar13 & 0xffffffff) >> 8) - bVar17,(char)(uVar13 & 0xffffffff));
  uVar26 = uVar13 & 0xffff0000 | uVar52;
  uVar13 = ((uVar11 & 0xffffffffffff0000 | (ulong)uVar7) ^ 0x2634) & 0xffffffff;
  if ((short)(uVar7 ^ 0x2634) < 0) {
    uVar13 = uVar50;
  }
  uVar40 = uVar41 | (uint)lVar1 & 0xffff | 0x400000;
  lVar44 = 0x3f;
  if (uVar26 != 0) {
    for (; uVar26 >> lVar44 == 0; lVar44 = lVar44 + -1) {
    }
  }
  uVar23 = uVar23 | 1 << (uVar52 & 0x3f);
  uVar18 = (short)uVar36 << 1;
  uVar8 = ((short)(((ulong)((uint)uVar26 & 0x3fffffff) << 0x20 | uVar13) / 0xc0000000) -
          (short)lVar44) - 1;
  uVar39 = (ushort)(uVar21 - 0xcb61b0a);
  uVar7 = uVar39 & 0xf;
  uVar19 = (ushort)uVar23 ^ 1 << uVar7;
  uVar13 = uVar23 & 0xffffffffffff0000;
  uVar11 = (ulong)uVar19;
  if (uVar8 == 0) {
    uVar8 = uVar18;
  }
  if (((ushort)uVar23 >> uVar7 & 1) != 0) {
    uVar40 = uVar41 | 0x400000 | (uint)uVar39;
  }
  uVar22 = (ulong)uVar40;
  uVar46 = (ushort)uVar20 & ~(1 << (uVar46 & 0xf)) ^ 0x80;
  uVar52 = (long)(int)(uVar47 + 1) * 0x4dd9e487;
  uVar49 = uVar52 & 0xffffffff;
  uVar12 = (ulong)(uint)(int)(short)(uVar8 >> 0xc | 0x80);
  uVar26 = 0;
  uVar7 = ((ushort)uVar43 & 0xff00 ^ 1 << ((ushort)iVar48 & 0xf)) + 0xaf + (short)uVar40 * 2;
  uVar24 = uVar13 | uVar11 & 0xffffffffffffff00 | (ulong)(byte)uVar19;
  uVar33 = uVar22 ^ (ulong)(uVar12 == uVar22) *
                    (ulong)(uVar40 ^ (uVar20 & 0xffff0000 | (uint)uVar46));
  uVar43 = uVar33;
  if (uVar12 >= uVar22) {
    uVar43 = uVar24;
  }
  uVar21 = (uVar21 - 0xcb61b0a & 0xffffffffffffff00 | uVar11 & 0xff) + 0x795e097d +
           (ulong)(uVar12 < uVar22);
  uVar19 = (short)uVar24 + 1;
  uVar39 = (short)uVar43 * -0x3333;
  uVar43 = uVar43 & 0xffff0000 | (ulong)uVar39;
  bVar16 = ((byte)uVar19 & 0x1f) % 9;
  bVar37 = (byte)((ulong)uVar19 >> 8);
  uVar8 = 0xf;
  if (uVar39 != 0) {
    for (; uVar39 >> uVar8 == 0; uVar8 = uVar8 - 1) {
    }
  }
  uVar24 = uVar21 & 0xffffffffffff0000 | (ulong)uVar8;
  uVar46 = uVar46 | 0x1000;
  uVar35 = (uVar12 ^ (ulong)(uVar12 != uVar22) * (uVar12 ^ uVar33)) *
           (((uint)uVar35 & 0xffff0000 | (uint)uVar7) + (int)uVar49 * 4 & uVar21);
  bVar17 = (byte)(uVar19 & 0xff) & 0x3f;
  uVar21 = (uVar49 << bVar17 | uVar49 >> 0x40 - bVar17) >> 1;
  uVar8 = 0xf;
  if (uVar46 != 0) {
    for (; uVar46 >> uVar8 == 0; uVar8 = uVar8 - 1) {
    }
  }
  lVar44 = CONCAT71((int7)((long)uVar24 >> 0x36),(char)((long)uVar24 >> 0x2e) + -0x7d);
  uVar12 = ((uVar36 & 0xffffffffffff0000 | (ulong)uVar18) << 0x23 | uVar23 >> 0x1d) - uVar43 &
           0xffffffffffff0000 | (ulong)uVar8 & 0xffffffffffffff00;
  uVar36 = (uVar13 | (ushort)(uVar19 & 0xff |
                             (ushort)(byte)(bVar37 << bVar16 | bVar37 >> 9 - bVar16) << 8)) >> 1;
  uVar24 = uVar21 & 0xffffffff;
  uVar7 = uVar7 | (ushort)uVar21;
  uVar21 = (uVar35 & 0xffff0000 |
           (ulong)(ushort)((ushort)(byte)uVar35 * (ushort)(byte)(uVar50 >> 8))) *
           (uVar21 & 0xffffffff);
  uVar35 = ((ulong)(ushort)((ushort)((long)(int)uVar52 != uVar52) << 0xf) | 0xc0000000) ^ 0x4b ^
           uVar24;
  bVar16 = (byte)uVar36;
  uVar41 = (uint)lVar44 | 0xc0000000;
  uVar20 = (int)(((ulong)((uint)(uVar21 >> 0x20) & 0x3fffffff) << 0x20 | uVar21 & 0xffffffff) /
                (ulong)uVar41) << (bVar16 & 0x1f) |
           ((uint)uVar12 | (uint)(byte)((char)uVar8 << 1) | 1) >> 0x20 - (bVar16 & 0x1f);
  uVar18 = (ushort)uVar35;
  uVar41 = uVar41 * -0x28388f15 >> 1;
  auVar3 = ZEXT416(uVar20 & 0xffff0000 | (uint)(ushort)((short)uVar20 * uVar18)) * ZEXT816(uVar36);
  uVar46 = (short)(lVar44 + -0x16587c82) + 0xd4d8;
  uVar20 = (uint)(lVar44 + -0x16587c82) & 0xffff0000 | (uint)uVar46;
  if (uVar46 == 0) {
    uVar26 = (ulong)(ushort)((ushort)lVar44 & ~(1 << (uVar18 & 0xf)));
  }
  uVar21 = (uVar23 & 0xffff0000 | uVar11) & uVar43;
  uVar51 = SUB164(auVar3,0);
  bVar37 = (bVar16 & 0x1f) % 9;
  bVar17 = (byte)(uVar36 >> 8);
  uVar40 = uVar51 >> 1;
  uVar10 = 0 >> (bVar16 & 0x3f);
  uVar23 = (ulong)(uVar40 & 0xffffff00 | uVar41 << 0x1f |
                  (uint)(byte)((char)uVar40 << (bVar16 & 0x1f))) + 1;
  sVar9 = 0xf;
  uVar18 = (ushort)uVar41;
  if (uVar18 != 0) {
    for (; uVar18 >> sVar9 == 0; sVar9 = sVar9 + -1) {
    }
  }
  bVar6 = (byte)(uVar23 >> 8);
  bVar38 = (byte)((ulong)uVar10 >> 8);
  sVar28 = CONCAT11(bVar38 - bVar6,(char)uVar10);
  uVar40 = ((uint)uVar43 & 0xffffff00 | (uint)(byte)((byte)uVar39 >> 4 | (byte)uVar39 << 4)) +
           0xce1b30e1 + (uint)(bVar38 < bVar6);
  bVar6 = (char)uVar23 << 1;
  uVar41 = uVar20 + 0x9ecff9f7;
  if (0x61300608 < uVar20) {
    uVar26 = (ulong)uVar40;
  }
  uVar46 = (short)uVar41 + sVar28;
  uVar41 = uVar41 & 0xffff0000;
  uVar43 = uVar21 & 0xffffffffffff0000;
  uVar21 = (ulong)(ushort)((short)uVar21 << 1);
  uVar20 = (SUB164(auVar3 >> 0x40,0) & ~(1 << (uVar51 & 0x1f)) & 0xffff0000 |
           (uint)CONCAT11((bVar17 << bVar37 | bVar17 >> 9 - bVar37) + 0x5d,bVar16)) <<
           (bVar16 & 0x3f) | uVar40 >> 0x40 - (bVar16 & 0x3f);
  bVar17 = (byte)(uVar40 >> 0x1b);
  bVar38 = -bVar17;
  bVar37 = (bVar16 & 0x1f) % 0x11;
  uVar18 = sVar28 << bVar37 | (ushort)(CONCAT12(bVar17 != 0,sVar28) >> 0x11 - bVar37);
  uVar35 = uVar35 & (uVar23 & 0xffffffffffffff00 | (ulong)bVar6);
  sVar28 = 0xf;
  if ((ushort)uVar26 != 0) {
    for (; (ushort)((ushort)uVar26 >> sVar28) == 0; sVar28 = sVar28 + -1) {
    }
  }
  uVar11 = uVar35 & (uVar41 | uVar46);
  uVar11 = uVar23 & 0xffffffffffff0000 |
           (ulong)CONCAT11((uVar11 == 0) << 6 | in_AF << 4 |
                           ((POPCOUNT(uVar11 & 0xff) & 1U) == 0) << 2,bVar6) | 0x200;
  uVar23 = (ulong)(byte)((char)uVar18 - (char)(uVar11 >> 8));
  uVar52 = (ulong)uVar10 & 0xffffffffffff0000 | (ulong)uVar18 & 0xffffffffffffff00 | uVar23;
  uVar8 = uVar7 ^ 0x2b28;
  uVar40 = uVar20 - bVar38;
  uVar13 = CONCAT62((uint6)(uVar13 >> 0x11),sVar28) + uVar52 * 8;
  if (SBORROW4(uVar20,(uint)bVar38) == false) {
    uVar13 = CONCAT62((int6)((uint6)((uVar24 >> (bVar16 & 0x3f)) >> 0x10) |
                            (uint6)((uVar24 << 0x40 - (bVar16 & 0x3f)) >> 0x10)) >> 0x1e,sVar9);
  }
  bVar16 = (byte)uVar35;
  uVar35 = uVar13 & 0xffffff00 | (ulong)(byte)((byte)uVar13 - bVar16);
  uVar20 = uVar40 & 0xffffff00 | (uint)(byte)((byte)uVar40 >> 1 | ((byte)uVar13 < bVar16) << 7);
  bVar16 = (byte)sVar28 & 0x3f;
  uVar13 = uVar11 >> bVar16 | uVar11 << 0x40 - bVar16;
  uVar39 = (ushort)uVar35;
  uVar19 = uVar8 + uVar39;
  uVar10 = uVar19 | 0xdb5d0000;
  uVar51 = uVar20 << 1 | (uint)CARRY2(uVar8,uVar39);
  if ((int)uVar20 < 0 == (int)uVar51 < 0) {
    uVar21 = (ulong)uVar18 & 0xff00 | uVar23;
  }
  uVar50 = uVar43 | uVar21;
  bVar16 = ((byte)sVar28 & 0x1f) % 9;
  uVar35 = uVar35 - bVar38;
  uVar18 = (short)uVar51 + 0xe442;
  uVar11 = uVar52 + uVar50 + 1;
  uVar41 = uVar41 | uVar46 & 0xffffff00 |
           (uint)((byte)((byte)((ushort)(uVar46 & 0xff | (ushort)((uVar13 & 1) != 0) << 8) >> bVar16
                               ) | (char)uVar46 << 9 - bVar16) >> 1);
  uVar23 = uVar26 & 0xffffffffffffff00 | (ulong)(byte)-(char)uVar26;
  if ((short)uVar7 < (short)uVar11) {
    uVar23 = 0xffffffff;
  }
  lVar44 = CONCAT62((int6)((long)uVar13 >> 0x11),
                    (short)(char)((long)uVar13 >> 1) * (short)(char)uVar35);
  uVar7 = (ushort)uVar35 | 0x1b9;
  uVar13 = (ulong)bVar38;
  if (-1 < (short)uVar7) {
    uVar13 = uVar50;
  }
  uVar20 = (uVar40 & 0x7fff8000) << 1 | uVar18 & 0xffffff00 | (uint)(byte)((char)uVar18 + 4);
  if ((POPCOUNT(uVar7 & 0xff) & 1U) != 0) {
    uVar20 = uVar41;
  }
  uVar52 = uVar12 >> 7;
  if ((short)uVar7 < 1) {
    uVar52 = 0xffffffff;
  }
  uVar50 = lVar44 - uVar52;
  uVar52 = uVar52 ^ (ulong)(uVar50 == 0) * (uVar52 ^ (uVar35 | 0x1b9));
  uVar40 = (uint)lVar44;
  uVar40 = uVar40 ^ (uint)(uVar50 != 0) * (uVar40 ^ (uint)uVar52);
  if ((POPCOUNT(uVar50 & 0xff) & 1U) != 0) {
    uVar23 = (ulong)uVar19;
  }
  iVar48 = (int)(uVar35 | 0x1b9);
  bVar53 = SCARRY4(iVar48,(int)uVar11);
  uVar47 = iVar48 + (int)uVar11;
  uVar51 = (uint)uVar13;
  if (bVar53 == (int)uVar47 < 0) {
    uVar51 = uVar20;
  }
  uVar41 = uVar41 * 0x100;
  uVar45 = (uVar41 - 1) + (uint)(uVar51 < 0x7ecbeb5e);
  lVar44 = 0;
  if (uVar10 != 0) {
    for (; (uVar10 >> lVar44 & 1) == 0; lVar44 = lVar44 + 1) {
    }
  }
  uVar10 = uVar45 >> 1;
  uVar13 = (ulong)((uVar45 & 1) != 0);
  uVar35 = (ulong)uVar41 - 0xb5a3ec37;
  uVar50 = uVar35 - uVar13;
  bVar16 = (byte)uVar52 & 0x3f;
  uVar11 = (ulong)uVar20 & 0xff |
           (ulong)((uint7)((uVar11 >> bVar16) >> 8) | (uint7)((uVar11 << 0x40 - bVar16) >> 8)) << 8;
  uVar36 = uVar52 >> 0x1f & 1;
  bVar16 = ~(byte)uVar52;
  uVar43 = uVar43 | (ushort)(((ushort)uVar21 & 0xff00 | (ushort)(byte)((byte)uVar21 ^ (byte)uVar10))
                            & ~(1 << ((ushort)uVar11 & 0xf)));
  uVar45 = (ushort)((bVar53 | 0xff00) + 0x5aa) | 0xffff0000;
  uVar31 = (uint)uVar43;
  uVar42 = uVar45 << 1 | uVar31 >> 0x1f;
  uVar29 = (uint)uVar11;
  if ((int)uVar45 < 0 == (int)uVar42 < 0) {
    uVar29 = (uint)(uVar52 & 0xff00) | (uint)bVar16;
  }
  uVar11 = (ulong)(uVar47 ^ 0x10) + 0x36cd7731 + (ulong)((int)uVar45 < 0);
  uVar21 = (ulong)(ushort)-(short)uVar11;
  auVar3 = (ZEXT1216(CONCAT48(uVar20,CONCAT62((int6)(short)(uVar40 >> 0x10),-(short)(char)uVar40)))
           & (undefined  [16])0xffffffffffffffff) / ZEXT816(uVar43 | 0xc000000000000000);
  sVar9 = SUB162(auVar3,0);
  uVar20 = (int)sVar9 * (int)sVar9;
  uVar43 = CONCAT62(SUB166(auVar3 >> 0x10,0),(short)uVar20);
  uVar13 = (uVar50 & 0xffffffffffff0000 |
            (ulong)(ushort)((ushort)uVar50 >> 1 |
                           (ushort)((ulong)uVar41 < 0xb5a3ec37 || uVar35 < uVar13) << 0xf) &
            0xffffffffffffff00 | 0xff) >> 1;
  bVar37 = (byte)(uVar20 >> 8) | 0x8f;
  if (bVar37 == 0) {
    uVar42 = uVar45 << 1 & 0xffff0000 |
             (uint)(ushort)((short)(uVar51 + 0x813414a2) << (bVar16 & 0x1f));
  }
  uVar50 = uVar13 ^ (ulong)(uVar43 == uVar13) * (uVar13 ^ uVar36);
  uVar41 = (uint)uVar43 ^ (uint)(uVar43 != uVar13) * ((uint)uVar43 ^ (uint)uVar50);
  uVar40 = (uVar29 * 0x20000 + 0x8d293d00 | (uint)(byte)(bVar37 << 1)) ^ 0x9f26d2d7;
  uVar43 = (long)(int)uVar31 * -0x5ab5c818;
  cVar14 = (char)uVar41;
  bVar37 = (byte)(CONCAT11((long)(int)uVar43 != uVar43,cVar14) >> 5) | cVar14 << 4;
  uVar35 = (ulong)uVar10;
  if ((POPCOUNT((ulong)bVar37 & 0x37) & 1U) != 0) {
    uVar35 = uVar50;
  }
  uVar47 = (int)(uint)CONCAT11(bVar16,(char)((uVar52 & 0xff00) >> 8)) >> 1;
  uVar10 = uVar47 * 2;
  uVar52 = CONCAT71((int7)(int3)(uVar41 >> 8),bVar37);
  if (!CARRY4(uVar47,uVar47)) {
    uVar52 = uVar50;
  }
  uVar45 = (uint)uVar52 ^ 1 << (uVar42 & 0x1f);
  uVar35 = uVar35 & 0xffffffff | (ulong)uVar40;
  bVar37 = (byte)(uVar10 >> 8);
  bVar16 = (byte)uVar10 - bVar37;
  bVar37 = (char)uVar35 << 1 | (byte)uVar10 < bVar37;
  uVar35 = uVar35 & 0xffffffffffffff00;
  uVar52 = uVar35 | bVar37;
  uVar47 = (uint)uVar52;
  uVar41 = (uVar10 & 0xffffff00 | (uint)bVar16) >> 1;
  lVar44 = (long)(int)uVar36 * -0x531863aa;
  uVar7 = (ushort)lVar44;
  uVar21 = ((uVar11 & 0xffffffffffff0000 | uVar21 & 0x7fffffffffffff80) << 1 |
           (uVar21 & 0x7f) << 1 | (ulong)((bVar16 & 1) != 0)) ^ 0x2d;
  if ((int)(uint)lVar44 == lVar44) {
    uVar21 = (ulong)(uVar42 << 1 | (uint)((int)uVar42 < 0));
  }
  uVar11 = (uVar50 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar50 >> 9)) >> 1;
  uVar18 = (ushort)(byte)((byte)uVar21 << 4 | (byte)uVar21 >> 4);
  uVar10 = (uint)(ushort)((ushort)uVar52 >> 1 | uVar18 << 0xf);
  bVar16 = ((char)uVar43 * -2 | '\0' < (char)uVar43) - 1;
  uVar43 = uVar43 & 0xffffff00 | (ulong)bVar16;
  uVar51 = (uVar51 + 0x813414a2 & 0xffff0000 | (uint)(ushort)((short)uVar45 * 4)) + 1;
  if (bVar16 != 0) {
    uVar51 = uVar47;
  }
  uVar13 = uVar13 & 0xffff | 0x5b;
  auVar3 = ZEXT816((ulong)(long)(int)(uVar45 & 0xffffff00 |
                                     ((uVar20 >> 0x10) + 0xca7ff322) - uVar40 & 0xff)) *
           ZEXT816(uVar43);
  uVar20 = (int)(short)uVar41 & 0xfffffffe;
  iVar48 = (int)uVar13 + 0xbd + (int)uVar43 * 8;
  uVar19 = (ushort)uVar13;
  uVar8 = uVar19 & 0x7fff;
  uVar39 = (short)((ushort)(uVar21 & 0xffffffffffffff00) | uVar18) >> 0x11;
  uVar46 = CONCAT11(0xa3 >> ((byte)uVar41 & 0x1e),0xff);
  uVar18 = uVar19 & 0xff | 0x100;
  uVar41 = uVar42 << 1 & 0xe46de1d7 | (uint)((int)uVar42 < 0);
  uVar40 = uVar20 + 0xde704b1a;
  bVar17 = (byte)(uVar40 >> 8);
  bVar16 = bVar17 + 0x27;
  cVar14 = (char)uVar40;
  uVar43 = (ulong)(uVar47 >> 0x18 | (uVar47 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                  uVar10 << 0x18);
  if (bVar17 >= 0xd9 && bVar16 != 0) {
    uVar43 = uVar52;
  }
  uVar10 = ((((int)(uVar23 << 0x10) + 1) * 2 & (uint)uVar11) -
           (uVar40 & 0xffff0000 | (uint)CONCAT11(bVar16,cVar14))) - (uint)(bVar17 < 0xd9);
  uVar40 = (uint)(byte)((char)uVar10 + (char)uVar41);
  bVar17 = cVar14 + (char)((uint)CONCAT11(bVar16,cVar14) >> 8);
  if (SCARRY1(cVar14,bVar16) == (char)bVar17 < '\0') {
    uVar47 = uVar47 & 0xffff | (int)(short)(uVar35 >> 0x10) << 0x10;
  }
  uVar51 = -(((uVar51 & 0xffffff00 |
              (uint)(byte)(((byte)uVar51 | (char)((uVar21 & 0xffffffffffffff00) >> 8) >> 9) + 0x52))
             - ((uVar8 & 0xffffff00 | (uint)(byte)((char)uVar8 + SUB161(auVar3,0))) + 0xdbcc1c31)) -
            (uint)(0xe245 < uVar46 || 0xfffe < (ushort)(uVar46 + 0x1dba)));
  uVar46 = bVar17 & 0xff0f;
  sVar15 = (sbyte)uVar46;
  uVar8 = (short)uVar11 << sVar15 | uVar18 >> 0x10 - sVar15;
  iVar2 = (int)(short)uVar18 * (int)(short)uVar39;
  uVar23 = uVar21 & 0xffffffffffff0000 | (ulong)uVar39;
  if (0x7bd30fa9 < uVar51) {
    uVar23 = (ulong)(uVar10 & 0xffffff00 | uVar40);
  }
  if (-1 < (short)((((ushort)iVar48 & 0xff00 | (ushort)(byte)((char)iVar48 >> 1)) + 0x7444 +
                   (ushort)(uVar20 + 0x550298e9 < 0x76924dcf)) - uVar7)) {
    uVar41 = uVar47;
  }
  uVar41 = uVar41 | 0xc0000000;
  uVar21 = ((ulong)((uint)CONCAT62(SUB166(auVar3 >> 0x50,0),(short)((uint)iVar2 >> 0x10)) &
                   0x3fffffff) << 0x20 |
           CONCAT62(SUB166(auVar3 >> 0x10,0),(short)iVar2) >> 1 & 0xffffffff) / (ulong)uVar41;
  bVar17 = (byte)uVar21;
  bVar6 = (byte)uVar43;
  bVar25 = (byte)uVar47;
  bVar38 = bVar6 ^ (bVar17 == bVar6) * (bVar6 ^ bVar25);
  uVar13 = uVar43 & 0xffffffffffffff00 | (ulong)bVar38;
  uVar21 = uVar21 & 0xffffff00;
  uVar18 = (ushort)uVar21 | (ushort)(byte)(bVar17 ^ (bVar17 != bVar6) * (bVar17 ^ bVar38));
  sVar9 = (short)uVar13;
  cVar14 = (char)(uVar21 >> 0x18);
  uVar46 = ((((ushort)bVar16 << 8 | uVar46) + sVar9 + 0x2bec) - uVar18) -
           (ushort)CARRY1(cVar14 >> 7,cVar14 >> 0xf);
  if ((short)uVar46 < 0) {
    uVar51 = uVar51 & 0xffff0000 | (uint)uVar8;
  }
  bVar17 = bVar25 << 5 | bVar25 >> 3;
  uVar47 = uVar47 & 0xffffff00;
  bVar16 = (byte)uVar46;
  lVar1 = 0;
  if (uVar23 != 0) {
    for (; (uVar23 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  uVar19 = (ushort)(byte)((byte)uVar8 >> 1 | (char)uVar23 << 7);
  uVar11 = (ulong)(uint)((int)CONCAT71((int7)(int3)(uVar35 >> 8),~bVar37) >> 0xd) + 0x17c90fe4 ^
           0xffffffffbdb12441;
  uVar21 = uVar11 & 0xff;
  if ((long)uVar11 < 0) {
    uVar11 = uVar11 & 0xffffffffffff0000 | (ulong)uVar46;
  }
  uVar20 = (uint)lVar1;
  if ((POPCOUNT(uVar21) & 1U) != 0) {
    uVar20 = (uint)uVar23 & 0xffffff00 | (uint)(byte)((char)uVar23 >> 1);
  }
  uVar51 = (uVar51 & 0xffffff00 | (uint)(byte)((char)uVar51 >> 0x11)) << 0xe;
  uVar40 = uVar51 | ((((uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                       uVar40 << 0x18) >> (bVar16 & 0x3f)) >> 0x10 |
                     (uint)((ulong)((long)(int)(uVar47 | bVar17) << 0x40 - (bVar16 & 0x3f)) >> 0x10)
                     ) << 0x10) >> 0x12;
  uVar23 = (ulong)(uVar20 << 7);
  uVar46 = uVar8 & 0xbf00 | uVar19;
  uVar10 = (uint)uVar11 | (uint)bVar16;
  uVar20 = ((uint)lVar44 & 0xffff0000 |
           (uint)(ushort)((uVar7 << (bVar16 & 0xf) | uVar7 >> 0x10 - (bVar16 & 0xf)) + 0x715e)) +
           0x8cc787d1;
  if (uVar10 != 0) {
    uVar20 = uVar40;
  }
  uVar10 = CONCAT31((int3)(uVar11 >> 8),~(byte)uVar10);
  uVar7 = ~(ushort)uVar40;
  uVar45 = (int)((uint)((uVar50 & 0xfffffffffffe0000) >> 1) | (uint)uVar46) >> 6 ^ 0xb83e0c28;
  uVar40 = (int)CONCAT71((int7)(int3)(uVar47 >> 8),bVar17 - 1) * -0x32075b17;
  uVar23 = ((uVar23 & 0xff000000) << 8 | (uVar23 & 0xff0000) << 0x18 | (uVar23 & 0xff00) << 0x28 |
           uVar23 << 0x38) >> 1;
  uVar11 = uVar23 | 0x8000000000000000;
  uVar21 = (ulong)(ushort)((((short)CONCAT31((uint3)(uVar41 >> 9),(char)(uVar41 >> 1) + '\x01') -
                            sVar9) - (ushort)((uVar8 >> 0xe & 1) != 0)) + uVar18 + 0x64ba) -
           0x6e87bde2;
  sVar9 = 0;
  uVar18 = (ushort)uVar45;
  if (uVar18 != 0) {
    for (; (uVar18 >> sVar9 & 1) == 0; sVar9 = sVar9 + 1) {
    }
  }
  uVar41 = uVar40 & 0xffffff00 | (uint)(byte)((char)uVar40 << 1);
  uVar39 = 0xf;
  uVar32 = (ushort)uVar41;
  if (uVar32 != 0) {
    for (; uVar32 >> uVar39 == 0; uVar39 = uVar39 - 1) {
    }
  }
  uVar40 = (uint)CONCAT62((int6)(short)(uVar47 >> 0x10),(short)((uVar13 & 0xffffffffc0278201) == 0))
  ;
  if (uVar40 != 0) {
    uVar20 = uVar40;
  }
  uVar18 = uVar18 & 0xff00;
  uVar35 = (long)(int)uVar20 * 0x5217e8f1;
  uVar52 = (ulong)((ushort)((short)uVar10 << 1 | (ushort)((short)uVar10 < 0)) >>
                  ((byte)uVar21 & 0x1f));
  uVar40 = uVar20 & 0xffff0000 | (uint)(ushort)(short)(char)uVar7;
  uVar13 = 0;
  if (uVar11 != 0) {
    for (; (uVar11 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
    }
  }
  uVar42 = (uint)uVar13;
  uVar11 = uVar35 & 0xffffffff & ~(1 << (uVar21 & 0x3f));
  iVar48 = (int)uVar21 - (uVar42 & 0x5d4f3ffa);
  uVar7 = -uVar7;
  uVar47 = (uint)(((ulong)uVar10 & 0xffffffffffff0000 | uVar52 & 0xfffffffffffffe00) >> 1) |
           uVar39 & 0xff;
  uVar21 = (long)(int)uVar41 * 0x45613a4f;
  lVar44 = ((uVar43 >> 8 & 0xffffffffffff00) << 8 | (ulong)uVar39 & 0xffffffffffffff00 |
           (uVar52 & 0x1fe) >> 1) + (uVar21 & 0xffffffff) + (ulong)((long)(int)uVar21 != uVar21);
  uVar41 = (uint)((ulong)lVar44 >> 0x18) & 0xffffff00 |
           (uint)(byte)((char)((ulong)lVar44 >> 0x18) + 0x4b);
  if ((SBORROW2(uVar18,0x6f7b) != SBORROW2(uVar18 + 0x9085,1)) != (short)(uVar18 + 0x9084) < 0) {
    uVar47 = (uint)(((ulong)uVar10 & 0xfffffffffffe0000) >> 1) | uVar42 & 0xffff;
  }
  bVar37 = (byte)iVar48;
  uVar39 = (short)uVar47 + 0xef22;
  uVar43 = (long)(int)(uVar47 & 0xffff0000 | (uint)uVar39) * 0x192ee299;
  bVar16 = (bVar37 & 0x1f) % 0x11;
  bVar17 = (byte)((ulong)(ushort)((uint)((int)(short)(CONCAT11((char)(uVar11 >> 8) + -1,(char)uVar11
                                                              ) & uVar7) * (int)(short)uVar46) >>
                                 0x10) >> 8);
  bVar6 = (byte)uVar39;
  uVar47 = (uint)((byte)(bVar17 - bVar6) != 0 && (char)bVar6 <= (char)bVar17);
  uVar40 = ((uVar40 << 1 | (uint)((int)uVar40 < 0)) ^ 0xa67a52e9) << 1;
  uVar10 = uVar40 & 0xffff0000;
  uVar40 = uVar40 & 0xffff | (uint)(bVar17 < bVar6);
  uVar21 = (ulong)(uVar42 & 0x5d4f0000 |
                  (uint)(ushort)((short)-((ushort)uVar13 & 0x3f00 |
                                         (ushort)(byte)((char)(uVar42 & 0x5d4f3ffa) << 1 |
                                                       (uVar20 & 0x20000000) != 0)) >> 8)) +
           0x5a4ddc75;
  if ((int)uVar41 < (int)(uVar10 | uVar40 | 0xc000)) {
    uVar41 = (((uint)uVar23 >> 1) + 0x81c02874) * 2;
  }
  uVar39 = (short)uVar41 - (short)uVar21;
  bVar37 = ((bVar37 - bVar6) -
            (((((uint)(uVar35 >> 0x20) & 0xffffff00 |
               (uint)(byte)((byte)(uVar35 >> 0x20) | (byte)uVar13)) + 0x798023ab & 0xffff0000 |
               (uint)(byte)(bVar17 - bVar6) << 8 | (uint)(byte)((uVar43 & 0xffffffff) >> 8)) >>
              ((byte)(uVar43 & 0xffffffff) & 0x1f) & 1) != 0) & 0x1f) % 9;
  bVar37 = (char)uVar21 << bVar37 |
           (byte)(CONCAT11((uVar41 & 0xffff0000 | (uint)uVar39) < 0xf59385b9,(char)uVar21) >>
                 9 - bVar37);
  bVar38 = bVar37 ^ (bVar37 == 0x29) * (bVar37 ^ (byte)uVar40);
  uVar20 = ((int)(short)(((uint)uVar43 & 0xffff0000) >> 1) | 0x9e164a00U) & 0xffff0000 |
           (uint)(ushort)(short)(char)((bVar37 != 0x29) * (bVar38 ^ 0x29) ^ 0x29);
  bVar17 = ((char)((uint)iVar48 >> 8) >> 7) * '\x02' + ((short)(uVar13 & 0xffffffff) < 0);
  uVar42 = (uVar41 & 0xffff0000 | uVar39 & 0xffffff00 |
           (uint)(byte)((byte)uVar39 >> 1 | (byte)uVar39 << 7)) & ~(1 << (uVar47 << 1));
  bVar37 = bVar17 & 0x3f;
  uVar11 = (ulong)uVar20 << bVar37 | (ulong)(uVar20 >> 0x40 - bVar37);
  bVar37 = (byte)((ulong)(long)(int)(uint)uVar11 >> 8);
  iVar48 = (uint)(ushort)uVar11 * (uVar42 & 0xffff);
  sVar9 = (short)iVar48;
  uVar39 = CONCAT11(bVar37 + ((char)bVar17 >> 7 & bVar37) + '\x01',(char)uVar11) + -0x7714 +
           (ushort)(sVar9 != 0);
  uVar4 = (uint3)(uVar42 >> 8);
  uVar20 = (uVar45 & 0xffff0000 | (uint)(ushort)(uVar18 + 0x9000 ^ 1 << (uVar39 & 0xf))) >> 1;
  uVar41 = (int)(uVar13 & 0xffffffff) << 1;
  uVar40 = uVar41 & 0xffffff00 |
           (uint)(byte)(((byte)uVar41 | ((ushort)((uint)iVar48 >> 0x12) & 1) != 0) + (char)uVar7) |
           0xf6c4;
  uVar35 = (ulong)(uVar42 & 0xffffff00 | (uint)(byte)((char)uVar42 >> 0x12));
  uVar23 = 1 << (uVar35 & 0x3f);
  bVar6 = (byte)((uVar42 >> 1) >> 8) & 0x7f;
  lVar44 = (long)(int)(((uint)uVar11 & 0xffff0000 | (uint)(ushort)-sVar9) >> 1 | 0x80000000) *
           0x23b50b52;
  sVar9 = uVar39 * 4;
  uVar50 = uVar35 | uVar23 & 0xffffffff;
  bVar27 = (char)sVar9 - 0x3c;
  uVar13 = CONCAT62((int6)(short)(uVar11 >> 0x10),sVar9) & 0xffffffffffffff00;
  uVar35 = (uVar35 | uVar23) & 0xff;
  uVar23 = (long)(int)(uVar41 & 0xffff0000 | (uint)(ushort)((short)((short)uVar40 * -0x673c) >> 2))
           * (long)(int)((uint)uVar13 | (uint)bVar27);
  uVar11 = uVar23 & 0xffffffff;
  uVar52 = ((uVar23 >> 0x20) - 0x49c6bd03) - (ulong)(((ushort)uVar20 >> 6 & 1) != 0);
  uVar41 = (int)(((uVar21 & 0xfffffffffffe0000) >> 1 |
                 (uVar21 & 0xffffffffffffff00 | (ulong)bVar38) >> 2 & 0x7fff) >> 1) << 1;
  bVar30 = (byte)(uVar13 >> 8);
  bVar17 = bVar27 + bVar30;
  bVar38 = (byte)uVar35;
  bVar37 = (bVar38 & 0x1f) % 9;
  uVar23 = ((ulong)CONCAT61((int6)(uVar13 >> 0x10),bVar27) & 0xffffffffffff00) << 8;
  uVar20 = uVar40 + (uVar20 | uVar42 << 0x1f) + 1;
  bVar25 = (char)(uVar11 >> 8) >> 7;
  bVar25 = bVar25 << (bVar38 & 7) | bVar25 >> 8 - (bVar38 & 7);
  uVar21 = (ulong)CONCAT11((bVar27 << bVar37 |
                           (byte)(CONCAT11(CARRY1(bVar27,bVar30),bVar27) >> 9 - bVar37)) ^ bVar25,
                           bVar17);
  uVar7 = (ushort)uVar50;
  if (SBORROW4((uint)((byte)((byte)(uVar10 >> 0x1c) + (char)((ulong)lVar44 >> 0x20) +
                             ((int)lVar44 != lVar44) & (byte)uVar11) >> 1),-0x49869cce)) {
    bVar6 = (byte)((uint)uVar7 >> 8);
  }
  uVar13 = 0xd2a69862;
  uVar18 = (ushort)(short)(char)(byte)uVar11 >> 1;
  uVar7 = uVar7 << (bVar38 & 0xf) | uVar7 >> 0x10 - (bVar38 & 0xf);
  uVar50 = uVar50 & 0xffffffffffff0000 | (ulong)uVar7;
  bVar37 = (byte)uVar18;
  bVar27 = bVar25 ^ (bVar37 == bVar25) * bVar25;
  bVar37 = bVar37 ^ (bVar37 != bVar25) * (bVar37 ^ bVar27);
  sVar9 = (short)uVar41;
  uVar40 = (ushort)(0x16a5U - sVar9) | 0x476a0000;
  if ((SBORROW2(0x16a5,sVar9) != false) != (short)(0x16a5U - sVar9) < 0) {
    uVar40 = (uint)uVar50;
  }
  uVar10 = (uint)uVar35 & 0x1f;
  cVar14 = ((char)((ulong)(uVar18 & 0xff00) >> 8) - bVar37) - ((uVar40 >> uVar10 & 1) != 0);
  if (cVar14 == '\0') {
    uVar13 = uVar23 & 0xffffffff | uVar21;
  }
  uVar35 = uVar52 >> 0x21;
  cVar5 = (char)uVar7;
  cVar34 = (char)((uVar40 & ~(1 << uVar10)) >> 1) - cVar5;
  uVar52 = (uVar52 & 0xffffffffffff0000 | (ulong)CONCAT11(bVar25,bVar25) & 0xffffffffffffff00 |
           (ulong)bVar37) << 0x1f | uVar35 & 0xffffffffffff0000;
  lVar44 = (ulong)(((uint)CONCAT62((undefined6)((short)(uVar8 & 0xff00 | uVar19) >> 0xf),
                                   (ushort)((uint3)(CONCAT12((long)(int)(uint)uVar43 != uVar43,
                                                             uVar46 >> 1) | 0x8000) >> bVar16) |
                                   (uVar46 >> 1 | 0x8000) << 0x11 - bVar16) & 0xffffff00 | uVar47)
                   << 1 | (uint)uVar11) * 2;
  uVar46 = (ushort)((uint)CONCAT11(cVar14,(bVar27 - cVar34) -
                                          (((ushort)((short)uVar35 << ((bVar38 ^ bVar17) & 0x1f)) >>
                                            0xd & 1) != 0)) * (uVar20 & 0xffff) >> 0x10);
  uVar7 = (ushort)(short)cVar34 >> 1 | 0x8000;
  uVar47 = (uint)lVar44;
  uVar35 = (((ulong)(uVar51 & 0xffff0000) ^ 0x4000000000000000) + 0x16a5) * 2 + 0x55f877c;
  uVar43 = uVar13 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar13 - cVar5);
  uVar18 = -uVar7;
  uVar40 = CONCAT22((undefined2)(cVar34 >> 7),uVar18);
  bVar16 = (byte)uVar18;
  uVar45 = uVar47 << (bVar16 & 0x1f) | uVar47 >> 0x20 - (bVar16 & 0x1f);
  uVar10 = CONCAT31(uVar4 >> 8,~((bVar6 - (char)uVar35) - 1) + 1);
  uVar11 = (ulong)uVar10;
  uVar51 = (uVar20 - uVar45 ^ 0x31dfa813) >> 10;
  uVar20 = 0;
  if (uVar51 != 0) {
    for (; (uVar51 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
    }
  }
  bVar37 = (bVar16 & 0x1f) % 0x11;
  uVar8 = ((ushort)uVar10 ^ 0xdc42) << 2;
  uVar19 = (ushort)uVar43 + 0x16b5;
  uVar36 = (ulong)bVar16;
  if (uVar19 != 0) {
    uVar36 = uVar11;
  }
  uVar39 = (ushort)((((short)uVar20 << bVar37 |
                     (ushort)(CONCAT12(((uint)uVar52 | (uint)uVar46) < 0xa09ebd71,(short)uVar20) >>
                             0x11 - bVar37)) & 0xff) * (ushort)(byte)(uVar21 >> 8)) >> 1;
  uVar50 = uVar50 + lVar44 & 0xffffffffffffdfc3;
  return (ulong)(uVar20 & 0xffff0000 | (uint)(ushort)(uVar39 & 0xff | uVar46 << 8)) +
         (uVar23 | uVar21 & 0xffffffffffff00ff) +
         (CONCAT71((uint7)(uint3)(uVar40 >> 9) | (uint7)(((ulong)((uVar18 & 1) != 0) << 0x3f) >> 8),
                   (char)(uVar40 >> 1)) & 0xffffffffffffff62) +
         (uVar52 | (ulong)uVar46 & 0xffffffffffffff00 |
         (ulong)((ushort)(uVar39 | uVar19 * -0x8000) >> 8)) + uVar43 +
         (ulong)(uVar51 & 0xffff0000 |
                (uint)(ushort)((short)uVar51 >> 0x11 | 1 << ((ushort)uVar45 & 0xf))) +
         (((ulong)(((uVar47 - (int)uVar43) * 0x40000 | (uint)(uVar4 >> 0xe)) >> (bVar16 & 0x3f)) |
          uVar11 << 0x40 - (bVar16 & 0x3f)) >> 0x18 | uVar50 << 0x28) + uVar36 +
         (ulong)((uint)uVar19 << 1 | 1) +
         (ulong)(((uVar41 & 0xffff0000 |
                  (uint)(ushort)((ushort)(CONCAT12(uVar7 != 0,sVar9) >> 3) | sVar9 << 0xe)) ^
                 0x10000000) & 0xfeffffff | 0x80) + uVar11 + uVar50 +
         (ulong)(byte)((byte)uVar8 | (byte)((uVar13 & 0xffffffffffffff00) >> 8) >> 6) +
         (ulong)uVar45 +
         (uVar35 & 0xffffffffffff0000 |
         (ulong)(ushort)((ushort)uVar35 & ~(1 << (uVar8 & 0xf | (ushort)uVar43 >> 0xe)))) +
         -0x5b65c3051f295f2f;
}



// WARNING: Removing unreachable block (ram,0x004063cc)
// WARNING: Removing unreachable block (ram,0x0040607e)
// WARNING: Removing unreachable block (ram,0x0040606c)
// WARNING: Removing unreachable block (ram,0x0040617b)
// WARNING: Removing unreachable block (ram,0x00406483)
// WARNING: Removing unreachable block (ram,0x00406d3b)
// WARNING: Removing unreachable block (ram,0x0040675a)
// WARNING: Removing unreachable block (ram,0x004061f3)
// WARNING: Removing unreachable block (ram,0x00406afa)
// WARNING: Removing unreachable block (ram,0x004062fb)
// WARNING: Removing unreachable block (ram,0x004062d4)
// WARNING: Removing unreachable block (ram,0x004063b6)

long log_size_10_var_005(void)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int6 iVar8;
  byte bVar14;
  char cVar15;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar16;
  byte bVar18;
  ushort uVar17;
  byte bVar19;
  byte bVar21;
  long lVar20;
  short sVar22;
  ushort uVar23;
  ushort uVar24;
  uint uVar25;
  ulong uVar26;
  ushort uVar27;
  uint uVar28;
  char cVar29;
  short sVar30;
  uint uVar31;
  ushort uVar32;
  ushort uVar33;
  ulong uVar34;
  ushort uVar35;
  ulong uVar36;
  ulong uVar37;
  uint7 uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  ulong uVar43;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  ulong uVar47;
  bool bVar48;
  bool bVar49;
  
  for (lVar20 = 0x3f; 0x120845e2bU >> lVar20 == 0; lVar20 = lVar20 + -1) {
  }
  for (lVar20 = 0; (0xa914f5beU >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
  }
  for (uVar17 = 0; (0x8d9aU >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
  }
  uVar11 = (uVar17 | 0xf6a10000) ^ 0x13100000;
  uVar25 = (uVar11 & 0xffffff00 | (uint)(byte)((char)uVar17 - 0xb)) >> 1;
  uVar9 = 0;
  uVar25 = (uVar11 & 0xfffe0000) >> 1 | 0x80000000 |
           (uint)CONCAT11((char)(uVar25 >> 8) + '\x06',(char)uVar25);
  uVar31 = uVar25 + 0xcc563908;
  if (0x33a9c6f7 < uVar25) {
    uVar31 = uVar9;
  }
  uVar23 = (ushort)(0xf8db9f8 - uVar11 >> 0x10);
  uVar17 = uVar23 >> 6;
  uVar34 = (ulong)((uint)(lVar20 << 0xd) & 0xfffd0000 | 0xc669);
  bVar2 = (byte)uVar31;
  bVar2 = bVar2 ^ (bVar2 != 0xff) * (bVar2 ^ (bVar2 == 0xff) * -0x6a ^ 0xffU);
  for (sVar22 = 0xf; 0xc563U >> sVar22 == 0; sVar22 = sVar22 + -1) {
  }
  iVar8 = (int6)(short)(uVar31 >> 0x10);
  uVar36 = uVar34 & 0xffffffffffffff00;
  for (iVar7 = 0x1f; 0x33a9c669U >> iVar7 == 0; iVar7 = iVar7 + -1) {
  }
  uVar33 = (short)(char)bVar2 & 0xff;
  uVar25 = ((uint)uVar36 | 0xd2) ^ 1;
  if ((int)uVar25 < 0) {
    uVar9 = (uint)CONCAT62(iVar8,uVar33 | (ushort)(byte)(((char)bVar2 >> 7) + 0x17) << 8);
  }
  uVar36 = CONCAT71((int7)(uVar36 >> 8),0x27);
  uVar4 = (char)uVar33 * 0x27;
  uVar9 = uVar9 | 0x1409;
  for (uVar33 = 0xf; 0x1409U >> uVar33 == 0; uVar33 = uVar33 - 1) {
  }
  bVar2 = (byte)uVar9;
  uVar31 = (uint)(ushort)(0 >> (bVar2 & 0x1f));
  if (((uint)(0x33a9c669 << (bVar2 & 0x1f)) >> 0x11 & 1) != 0) {
    uVar36 = uVar34 & 0xffffffffffff0000;
  }
  bVar48 = (CONCAT22(uVar17,0x1b96) | 0x800) != 0;
  cVar16 = (char)((uint)uVar33 >> 8);
  bVar14 = cVar16 - 1;
  bVar18 = bVar14 - bVar48;
  uVar33 = uVar33 & 0xff | (ushort)bVar18 << 8;
  bVar3 = (bVar2 & 0x1f) % 9;
  bVar2 = (byte)(CONCAT11(cVar16 == '\0' || bVar14 < bVar48,bVar2) >> bVar3) | bVar2 << 9 - bVar3;
  uVar11 = uVar9 & 0xffffff00;
  iVar10 = (short)(uVar25 << 1) * 0x4ff4;
  uVar25 = 0x43073ff8;
  if ((short)(ushort)iVar10 != iVar10) {
    uVar25 = uVar11;
  }
  uVar36 = uVar36 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar36 >> 2 | (byte)uVar36 << 6);
  uVar44 = uVar31 + 0x65f8aef1;
  uVar31 = 0x1408 - uVar31 >> 1;
  uVar34 = 0;
  if (uVar36 != 0) {
    for (; (uVar36 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
    }
  }
  lVar20 = CONCAT62(iVar8,(short)(char)((uVar4 & 0x3fff | 0xc0) / (uVar4 & 0xff | 0xc0)) *
                          (short)(char)uVar31);
  uVar39 = iVar7 * -0x856ed44;
  uVar37 = (ulong)uVar39;
  bVar14 = bVar2 & 0x3f;
  uVar36 = uVar36 >> bVar14 | lVar20 << 0x40 - bVar14;
  uVar42 = uVar44 + (int)lVar20 + 1;
  uVar4 = 0;
  uVar17 = (ushort)(CONCAT22(uVar17,0x1b96) >> 2);
  if (uVar17 != 0) {
    for (; (uVar17 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  uVar45 = uVar42 & 0xffff0000 | (uint)uVar4;
  sVar22 = uVar17 + ((ushort)iVar10 & 0xff00 | (ushort)(byte)~(byte)iVar10) + 0xb42a;
  bVar14 = (byte)(uVar11 >> 0x10);
  uVar27 = (ushort)uVar36;
  uVar17 = uVar27 >> 1;
  uVar32 = (ushort)bVar14;
  uVar5 = uVar32 << 0xf;
  uVar35 = uVar17 | uVar5;
  uVar24 = CONCAT11(bVar18 >> 1,(char)(uVar33 >> 1) + 'v');
  if (uVar35 == 0 || ((short)uVar27 < 0 != (uVar5 != 0)) != (uVar5 != 0)) {
    uVar24 = uVar32;
  }
  uVar36 = uVar36 & 0xffff0000 | (ulong)uVar35;
  if ((POPCOUNT(uVar17 & 0xff) & 1U) == 0) {
    uVar36 = 0xbed8a57e;
  }
  uVar44 = (uint)(ushort)((byte)((char)uVar42 + -0x40 + CARRY4(uVar44,(uint)uVar33)) | 64000);
  uVar42 = CONCAT22(uVar24,uVar32) & 0x3fffffff;
  uVar26 = CONCAT62(iVar8,(short)(uVar42 / uVar44));
  uVar17 = (ushort)(uVar42 % uVar44);
  bVar18 = (byte)(uVar11 >> 0x18);
  bVar3 = bVar18 & 7;
  bVar14 = bVar14 >> bVar3 | bVar14 << 8 - bVar3;
  uVar25 = uVar25 & 0xffffff00 | (uint)(0xbed8a57e < uVar45);
  if (uVar45 < 0xbed8a57f) {
    uVar25 = 0xbed8a57e;
  }
  cVar16 = (char)((ulong)uVar17 >> 8);
  uVar17 = uVar17 & 0xff;
  uVar34 = (uVar34 ^ 0x61b6) & 0xffffffff;
  if (uVar26 + uVar37 != 0 && SCARRY8(uVar26,uVar37) == (long)(uVar26 + uVar37) < 0) {
    uVar34 = (ulong)CONCAT22(uVar23 >> 8,sVar22);
  }
  uVar25 = uVar25 & 0xffff0000 |
           (uint)(ushort)((ushort)(CONCAT12(CARRY8(uVar26,uVar37),(short)uVar25) >> 0x10) |
                         (short)uVar25 << 1);
  uVar37 = (ulong)(ushort)(uVar17 | (ushort)bVar14 << 8);
  uVar23 = CONCAT11(bVar14 + (cVar16 << 6 | (byte)(CONCAT11(0xbed8a57d < uVar45,cVar16) >> 3)),
                    bVar18) | 0x65;
  iVar7 = 0;
  if (uVar25 != 0) {
    for (; (uVar25 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
    }
  }
  bVar14 = (byte)uVar23;
  uVar31 = uVar31 << (bVar14 & 0x1f);
  uVar26 = uVar37 * 0x1812860d;
  bVar14 = bVar14 & 0x3f;
  uVar12 = (ulong)((uVar9 & 0xff00) << 8 | (uint)bVar2 << 0x18 | (uint)uVar23) << bVar14 |
           (ulong)(uVar39 >> 0x40 - bVar14);
  uVar25 = (uVar25 << 1 |
           (uint)(SEXT816((long)uVar26) != SEXT816((long)uVar37) * SEXT416(0x1812860d))) - uVar45;
  bVar2 = (byte)uVar17 | 0xa8;
  if (uVar4 != 0xc697) {
    uVar26 = uVar36;
  }
  uVar17 = (ushort)uVar36;
  uVar9 = 0x1f;
  if (uVar31 != 0) {
    for (; uVar31 >> uVar9 == 0; uVar9 = uVar9 - 1) {
    }
  }
  iVar10 = ((uint)uVar12 & 0xffff0000 | 0xa57e) - uVar31;
  bVar3 = ('~' - (char)(uVar12 >> 8)) - (0x4666 < uVar17 || 0xfffe < (ushort)(uVar17 + 0xb999));
  uVar11 = iVar10 * 0x20;
  bVar14 = (bVar3 == 0xa5) * (bVar2 ^ 0xa5);
  uVar44 = (uint)bVar2;
  if (bVar3 < 0xa6) {
    uVar44 = uVar11;
  }
  bVar2 = (byte)iVar10;
  uVar42 = (int)(uint)(ushort)(CONCAT11(bVar3 ^ (bVar3 != 0xa5) * (bVar3 ^ bVar14 ^ 0xa5),bVar14) ^
                              0xa5) >> (bVar2 & 0x1f);
  uVar37 = (ulong)uVar42;
  uVar12 = (ulong)(uVar9 >> 1) ^ 0x7e6c4760;
  if (uVar42 != (uint)(uVar36 << 0x19)) {
    uVar37 = 0;
  }
  bVar14 = (byte)(uVar17 + 0xb99a) & (byte)iVar7;
  uVar42 = uVar25 & 0xffff0000 | (ushort)(uVar17 + 0xb99a) & 0xffffff00 | (uint)bVar14;
  uVar17 = CONCAT11('\0' < (char)bVar14,(byte)((byte)uVar25 & (byte)sVar22) == 0);
  bVar2 = (bVar2 & 0x1f) % 0x11;
  uVar23 = (ushort)uVar12;
  uVar23 = uVar23 >> bVar2 | uVar23 << 0x11 - bVar2;
  uVar47 = uVar34 >> 0xd | uVar34 << 0x33 | 0xb148;
  cVar15 = (char)uVar47;
  bVar2 = (char)uVar23 * '\x02' + cVar15;
  uVar25 = ((uint)uVar26 ^ uVar45 ^ 0xc697) & 0xffffff00 | (uint)(byte)((char)uVar44 - 1);
  cVar16 = (char)((iVar7 - (uVar17 | 0xbed80000)) - 1 >> 0xd);
  uVar36 = (uVar12 & 0xffffffffffff0000 | (ulong)uVar23 & 0x7fffffffffffff80) << 1 |
           (ulong)(byte)(bVar2 * '\x04' | bVar2 >> 6);
  sVar22 = (short)uVar25;
  uVar45 = (uint)uVar36;
  uVar9 = (uVar39 + 1 >> 1 & 0xffffff00 | (uint)((uVar39 + 1 & 1) != 0) << 0x1f |
          (uint)((char)bVar14 < '\x01')) + 1 >> 1;
  uVar12 = -(ulong)((((ushort)(uVar17 + 0x5c9f) | 0xbed80000) + 0x2f5ec3b7) - uVar45);
  bVar14 = (byte)(uVar47 * -0x3c0b6074);
  uVar26 = (ulong)((uVar44 >> 0x11) << 0x10) << 1;
  bVar2 = bVar14 & 0xf;
  uVar17 = (ushort)uVar9;
  uVar17 = uVar17 << bVar2 | uVar17 >> 0x10 - bVar2;
  uVar44 = uVar9 & 0xffff0000 | (int)sVar22 << 0x1f | (uint)uVar17;
  uVar9 = (int)uVar12 + (uVar45 & 0xffff0000 | (uint)(ushort)((short)uVar36 >> (bVar14 & 0x1f)));
  cVar29 = (char)uVar17;
  uVar36 = (ulong)(uVar31 & 0xffff0000 |
                  (uint)(ushort)((ushort)uVar31 & (short)(uVar11 >> 0x10) << 8)) * 2 & 0xffffffff;
  if (!SBORROW1(cVar16,cVar29)) {
    uVar36 = uVar26;
  }
  uVar33 = (ushort)uVar47 & 0xff00 | (ushort)(byte)(cVar15 << 1 | cVar15 < '\0');
  uVar47 = (uVar47 * -0x3c0b6074 ^ (ulong)uVar42) & 0xffffffffffffff0f;
  uVar23 = (ushort)uVar42 >> (sbyte)uVar47 | 0x22f9 << 0x10 - (sbyte)uVar47;
  uVar25 = uVar25 + 0x77cdd4d3;
  uVar13 = uVar47 - 0x5ecb5ba;
  uVar43 = -(ulong)((int)uVar26 + 0xda8b9ac5);
  bVar2 = (byte)uVar13 & 0x3f;
  uVar41 = (ulong)uVar44 << bVar2 | (ulong)(uVar44 >> 0x40 - bVar2);
  uVar26 = (ulong)(ushort)uVar9;
  uVar46 = uVar36 & 0xffffffffffff0000 | uVar26;
  uVar31 = (byte)((byte)uVar13 & (byte)uVar23) & 0xffffff0f;
  bVar3 = (byte)uVar31;
  uVar17 = (ushort)((ushort)(0x5ecb5b9 < uVar47) << 8) >> bVar3 | (short)uVar25 << 0x10 - bVar3;
  uVar12 = (uVar12 & 0xffffffff) - 1;
  bVar14 = ((POPCOUNT(uVar13 & 0xff) & 1U) == 0) * '8';
  uVar42 = (uint)uVar23 | (uint)uVar12;
  uVar23 = SEXT12((char)((uVar13 & 0xffffffffffffff00) >> 8));
  uVar39 = ((uVar25 >> 0x18 | uVar25 * 0x100) >> (uVar42 & 0x1f) & 1) != 0 | 0xfdca22f8;
  uVar36 = CONCAT62(((uint6)(uVar37 >> 8) & 0xff0000) >> 1,
                    (ushort)(uVar17 & 0xff | (ushort)(byte)((byte)((ulong)uVar17 >> 8) >> 1) << 8)
                    >> 1 & 0xff |
                    (ushort)((POPCOUNT(uVar39 & (byte)-(cVar16 - cVar29)) & 1U) != 0) << 8);
  uVar11 = ((uint)(uVar13 & 0xffffffffffffff00) | uVar31) ^ 0x9429f7bf;
  bVar2 = (byte)uVar11 & 0x3f;
  uVar45 = CONCAT22(sVar22 >> 0xf,sVar22 + 1) << bVar2 | (uint)(uVar43 >> 0x40 - bVar2);
  uVar11 = uVar11 & 0xffff0000;
  uVar31 = uVar11 | bVar14;
  uVar44 = (uint)uVar43;
  uVar25 = uVar44 & 0xffffff00 | uVar25 & 0xff;
  cVar15 = (char)(uVar23 >> 1);
  cVar29 = (char)uVar42;
  cVar16 = cVar15 + cVar29;
  if (SCARRY1(cVar15,cVar29) == SCARRY1(cVar16,'\0')) {
    uVar25 = uVar44 & 0xffff0000 | (uint)bVar14;
  }
  uVar37 = SEXT48((int)uVar45);
  uVar36 = (uVar36 & 0xffffffff) * (uVar36 & 0xffffffff);
  bVar2 = (char)uVar36 + (char)uVar41 + ((int)(uVar36 >> 0x20) != 0);
  uVar44 = uVar25 + 0xd2a8b933;
  if ((SBORROW4(uVar25,0x2d5746cc) != SBORROW4(uVar25 + 0xd2a8b934,1)) == (int)uVar44 < 0) {
    uVar37 = uVar36 & 0xff00 | (ulong)bVar2 | (ulong)(uint6)(int6)(short)(uVar45 >> 0x10) << 0x10;
  }
  uVar47 = uVar36 & 0xffffff00 | (ulong)(byte)(bVar2 + 0x36);
  uVar4 = (short)uVar12 + (short)uVar41;
  uVar13 = uVar41 & 0xffffffffffff0000 | uVar12 & 0xffff;
  iVar7 = 0;
  if (uVar31 != 0) {
    for (; (uVar31 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
    }
  }
  uVar1 = (undefined2)(uVar36 >> 0x30);
  iVar6 = (int)uVar47;
  iVar10 = iVar6 << 1;
  uVar31 = iVar7 + uVar39;
  uVar24 = (short)uVar31 - 1;
  uVar25 = uVar31 & 0xffff0000 | (uint)uVar24;
  uVar5 = (ushort)iVar10;
  uVar32 = (ushort)(uVar5 == 0x8d98) * ((ushort)uVar44 ^ 0x8d98) ^ 0x8d98;
  uVar5 = uVar5 ^ (ushort)(uVar5 != 0x8d98) * (uVar5 ^ uVar32);
  uVar9 = uVar9 & 0xffff0000 | (uVar23 & 0xfe00) >> 1 | (uint)(byte)((cVar16 + '$') - (iVar6 < 0));
  if (-0x708c < (short)uVar24) {
    uVar9 = uVar44;
  }
  uVar36 = (long)(int)(uVar11 | (ushort)uVar37) * 0x13e1ff78;
  bVar48 = (long)(int)uVar36 != uVar36;
  bVar18 = (byte)((uVar36 & 0xffffffff) >> 8);
  bVar2 = bVar18 + 0xb4;
  cVar16 = (char)(uVar36 & 0xffffffff);
  cVar15 = bVar2 + bVar48;
  uVar41 = (ulong)uVar44;
  if ((0x4b < bVar18 || CARRY1(bVar2,bVar48)) || cVar15 == '\0') {
    uVar41 = uVar46;
  }
  uVar35 = (ushort)((byte)(bVar14 - 1) >> 1) | (ushort)((bVar14 - 1 & 1) != 0) << 0xf;
  uVar23 = (ushort)uVar39;
  uVar27 = uVar23 ^ (ushort)(uVar5 == uVar23) * (uVar23 ^ uVar35);
  iVar8 = (int6)(short)((uint)iVar10 >> 0x10);
  uVar43 = (ulong)uVar35;
  if ((short)uVar23 < (short)uVar5) {
    uVar43 = uVar26;
  }
  uVar43 = uVar37 & 0xffffffffffff0000 | uVar43;
  if ((short)uVar23 <= (short)uVar5) {
    uVar41 = uVar43;
  }
  uVar39 = (int)uVar41 << 1 | (uint)((int)uVar41 < 0);
  uVar42 = (uVar32 | 0x5aae0000) ^ 1 << ((uint)uVar46 & 0x1f);
  uVar11 = (uint)(ushort)(uVar5 ^ (ushort)(uVar5 != uVar23) * (uVar5 ^ uVar27)) *
           (uint)(ushort)((short)uVar47 >> 0xf);
  uVar23 = (ushort)(uVar11 >> 0x10);
  uVar26 = (ulong)CONCAT22(uVar1,uVar23);
  uVar44 = uVar11;
  if (uVar46 + uVar26 == 0 || SCARRY8(uVar46,uVar26) != false) {
    uVar44 = (uint)(uVar46 + uVar26);
  }
  uVar26 = (ulong)uVar27 & 0xffffffffffffff00 | 0xfdca0000 |
           (ulong)(byte)((byte)((ushort)(uVar27 & 0xff | (ushort)CARRY8(uVar46,uVar26) << 8) >> 4) |
                        (char)uVar27 << 5);
  bVar2 = cVar16 << 1;
  uVar34 = uVar34 >> 0xd & 0xffffffffffff0000 | uVar34 << 0x33 |
           (ulong)(ushort)(uVar33 << bVar3 % 0x11 |
                          (ushort)(CONCAT12((uVar17 & 1) != 0,uVar33) >> 0x11 - bVar3 % 0x11)) |
           0xc000;
  uVar11 = (uint)(uVar23 & 0x3fff) << 0x10 | uVar11 & 0xffff;
  sVar22 = (short)(uVar11 / (ushort)uVar34);
  uVar44 = uVar44 & 0xffff;
  if ((POPCOUNT(uVar24 & 0xda) & 1U) != 0) {
    uVar44 = (uint)CONCAT62(iVar8,sVar22);
  }
  uVar47 = 0;
  if (uVar13 != 0) {
    for (; (uVar13 >> uVar47 & 1) == 0; uVar47 = uVar47 + 1) {
    }
  }
  bVar14 = bVar2 & 0x3f;
  uVar26 = uVar26 << bVar14 | uVar26 >> 0x40 - bVar14;
  bVar2 = bVar2 & 0x3f;
  uVar46 = 0x865d5c7f88e24f10U >> bVar2 | -0x79a2a380771db0f0 << 0x40 - bVar2;
  uVar38 = (uint7)(uVar43 >> 9);
  uVar13 = CONCAT71(uVar38,(byte)(uVar43 >> 1) >> 1);
  uVar45 = (int)sVar22 * (int)(short)uVar39;
  uVar17 = ((ushort)uVar9 & 0xff00 | (ushort)(byte)((byte)uVar9 << 1 | (byte)uVar9 >> 7)) << 1;
  uVar36 = (uVar36 & 0x7fff0000 | (ulong)CONCAT11(cVar15,cVar16)) << 1;
  if (uVar34 <= uVar13) {
    uVar36 = (ulong)uVar25;
  }
  uVar28 = ((uint)uVar26 & 0xffffff00 | (uint)(byte)((char)uVar26 - 1)) + 1;
  uVar33 = ((ushort)uVar42 & 0xff00 | (ushort)(byte)((byte)uVar42 >> 1 | 0x80)) + 0xc2e7 +
           (ushort)(0x1402d1eb < uVar34);
  if (-1 < (short)uVar33) {
    uVar39 = (uint)uVar12 & 0xffff0000 | (uint)(uVar4 | 0x400);
  }
  uVar26 = (uVar47 & ~(1 << ((ulong)uVar25 & 0x3f))) - (ulong)(uVar42 & 0xffff0000 | (uint)uVar33);
  sVar22 = (short)uVar13 + -0x17f0;
  uVar42 = (uint)CONCAT62((uint6)((uVar37 & 0xffffffffffff0000) >> 0x11),sVar22);
  uVar25 = -(((uint)CONCAT61((int6)(((ulong)((uint7)(uint3)(CONCAT22(uVar1,uVar23) >> 8) &
                                            0xffffffffffff00) << 8) >> 0x10),
                             (char)(uVar11 % (uint)(ushort)uVar34 >> 8) >> 1) & 0x7fff80) << 9 |
            uVar45 >> 0x10);
  uVar23 = (ushort)uVar25;
  uVar23 = uVar23 | 1 << (uVar23 & 0xf);
  uVar25 = uVar25 & 0xffff0000;
  cVar16 = (char)uVar23 + 'J';
  uVar33 = (ushort)uVar46 & (ushort)uVar36;
  bVar2 = (byte)uVar36 & 0x3f;
  uVar37 = (ulong)(uVar31 >> 0x18) - 0x464d2c4b;
  uVar23 = CONCAT11((char)((uint)uVar23 >> 8) + (char)uVar17,cVar16) << 1;
  uVar34 = uVar36 << bVar2 | uVar36 >> 0x40 - bVar2;
  uVar31 = uVar28 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar28 & 0xff00 |
                          (ushort)(byte)(((char)uVar28 << 1 | 1U) + cVar16 +
                                        ((uVar17 >> 8 & 1) != 0))) ^ 0x400);
  if ((uVar33 & 0x1000) != 0 || (uVar44 | (uint)uVar26) == 0x9ab684bf) {
    uVar34 = uVar37;
    uVar31 = uVar25 | uVar23;
  }
  iVar7 = (int)CONCAT62(iVar8,(short)uVar45) + 0x558996ff;
  uVar11 = ((uVar9 & 0xffff0000 | (uint)(uVar17 | 0x100)) + 0x54512ac1) * 2;
  uVar17 = (ushort)uVar39 & 0xff00 | (ushort)(byte)((char)uVar39 >> 0x1c) | 1;
  uVar44 = (uint)(uVar13 & 0xffffffff);
  uVar31 = uVar31 + uVar44 + 1;
  uVar36 = (ulong)(uVar42 >> 0x17 | (uVar42 & 0xffffff00 | (uint)(byte)((byte)sVar22 >> 1)) << 9) ^
           0x80;
  uVar9 = uVar31 + (uint)uVar26 * 4;
  uVar12 = -((uVar46 & 0xffffffffffff0000 | (ulong)uVar33) ^ 0x1000);
  bVar2 = (byte)uVar12 | (byte)uVar4;
  uVar47 = uVar12 & 0xffffffffffffff00 | (ulong)bVar2;
  if ((char)bVar2 < '\x01') {
    uVar47 = uVar12 & 0xffffffffffff0000 | (ulong)uVar17;
  }
  bVar2 = (byte)(uVar34 & 0xffffffff);
  uVar39 = uVar39 & 0xffff0000 | (uint)(ushort)(uVar17 * 0x6ad);
  uVar17 = CONCAT11((char)((uVar34 & 0xffffffff) >> 8) >> (bVar2 & 0x1f),bVar2) << 1;
  uVar33 = uVar17 | 1;
  iVar10 = 0;
  if (uVar39 != 0) {
    for (; (uVar39 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
    }
  }
  bVar14 = (byte)uVar33;
  bVar2 = bVar14 & 0x1f;
  uVar42 = uVar9 >> bVar2 | uVar9 << 0x20 - bVar2;
  uVar45 = (uint)(ushort)(short)(char)((char)uVar31 + '\x01');
  uVar9 = (uint)((uVar37 >> 8 & 0xffffffffffff00) << 8) | uVar45;
  cVar16 = (char)uVar42;
  uVar42 = uVar42 & 0xffffff00 | (uint)(byte)(cVar16 << 1 | cVar16 < '\0');
  uVar37 = uVar34 & 0xffff0000 | (ulong)(ushort)((short)uVar33 >> 8);
  uVar46 = (ulong)(uVar42 + 0x3d09442e + uVar9 * 4);
  uVar12 = (ulong)uVar42 * 0x1000000;
  bVar2 = (byte)(uVar17 >> 8);
  uVar39 = uVar39 << (bVar2 & 0x1f) | uVar39 >> 0x20 - (bVar2 & 0x1f);
  uVar9 = uVar9 << 1;
  uVar41 = uVar46 + uVar12;
  uVar34 = (ulong)(uVar39 & 0xffffbfff);
  if (uVar41 != 0) {
    uVar34 = uVar37;
  }
  uVar43 = uVar41;
  if (SCARRY8(uVar46,uVar12) != false) {
    uVar43 = uVar12;
  }
  uVar46 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar45 & 0x7f80) << 9 |
                  (uVar9 | (uVar39 >> 0xe & 1) != 0) << 0x18);
  if (uVar41 != 0) {
    uVar46 = uVar37;
  }
  uVar9 = 0;
  uVar39 = (uint)uVar46;
  if (uVar39 != 0) {
    for (; (uVar39 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
    }
  }
  iVar7 = SUB164((ZEXT1216(CONCAT48(uVar25 | (ushort)(uVar23 & 0xff00 |
                                                     (ushort)(byte)((char)uVar23 -
                                                                   (char)((uint)uVar23 >> 8))) >>
                                             (bVar14 & 0x1f),
                                    CONCAT62((int6)(short)((uint)iVar7 >> 0x10),
                                             CONCAT11((char)((ulong)(long)iVar7 >> 8) << 1,
                                                      (char)iVar7)))) &
                 (undefined  [16])0xffffffffffffffff) % ZEXT816(uVar47 | 0xc000000000000000),0) << 1
  ;
  uVar17 = (ushort)iVar7 | (ushort)(uVar43 >> 0x10) >> 0xf;
  bVar14 = ((char)(uVar11 >> 8) >> 0xd) + (char)((uint)iVar7 >> 8) + 1;
  uVar25 = uVar39 & 0x3f5f0000 | (uint)(ushort)(((ushort)uVar46 & 0xb021) + 0x94ed);
  if ((char)bVar14 < '\0') {
    uVar25 = (uint)uVar37;
  }
  sVar30 = (short)(uVar13 & 0xffffffff);
  uVar23 = sVar30 + uVar17;
  uVar39 = (uint)(((ulong)uVar38 & 0xffff00) << 8);
  uVar25 = (uVar25 << (bVar2 & 0x1f)) + 0xde63b492;
  uVar47 = (uVar47 & 0xffffffffffff0000 | 0xc000000000000000 |
           (ulong)(ushort)((ushort)uVar47 >> 1 | (ushort)((uVar47 & 1) != 0) << 0xf)) ^ uVar43;
  uVar26 = (uVar26 & 0xffffffffffff0000 |
           (ulong)(ushort)(((ushort)uVar26 & 0xff00 | (ushort)(byte)-((uVar36 & 1) != 0)) + 0x2882 ^
                          0x7fff)) ^ 0x2585a6f;
  sVar22 = 0xf;
  uVar33 = (ushort)uVar25;
  if (uVar33 != 0) {
    for (; uVar33 >> sVar22 == 0; sVar22 = sVar22 + -1) {
    }
  }
  uVar39 = uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | (uint)uVar23 << 0x18
  ;
  uVar13 = (ulong)(uVar9 >> 1 & 0xff | 0xffff7f00) << (bVar2 & 0x3f);
  lVar20 = uVar39 + uVar37;
  cVar16 = (char)lVar20;
  uVar42 = (uint)lVar20 & 0xffffff00 | (uint)(byte)(cVar16 << 1);
  uVar40 = (uint)uVar26 & 0xffff0000 |
           (uint)(ushort)((short)uVar26 + (ushort)uVar34 + (ushort)(cVar16 < '\0'));
  uVar37 = uVar43 & 0xffffffffffff0000 | uVar43 >> 1 & 0x7fff;
  bVar18 = (char)((uVar44 & 0xffff) >> 1) << 1 | 0xc0;
  uVar11 = ((uint)(((ulong)(uVar11 & 0xffff0000 | (ushort)((short)uVar11 >> 0x15) & 0xffffff00 |
                           (uint)bVar14) << (bVar2 & 0x3f) |
                   (uVar36 & 0xffffffffffff0000 | uVar36 >> 1 & 0x7fff) >> 0x40 - (bVar2 & 0x3f)) >>
                  2) & 0x7fffffff) * -0x5b152ab2;
  iVar7 = (uVar9 & 0xffff0000 | uVar9 >> 1 & 0x7f00 | 0xff) + 1 + uVar39;
  uVar44 = ((uint)uVar37 & 0xffff0000 | (uint)(uVar37 >> 0xd) & 7) ^ 0xfefe84be;
  uVar25 = uVar25 ^ 0x40000;
  uVar9 = uVar11 & 0xffff0000 | (uint)(ushort)((short)uVar11 + (short)uVar44 + 1);
  uVar36 = (ulong)uVar39 - 1;
  uVar33 = ((ushort)(uVar43 >> 1) & 0xff) << 1;
  bVar3 = (byte)uVar36;
  bVar14 = bVar3 & 0x1f;
  uVar45 = uVar9 >> bVar14 | uVar9 << 0x20 - bVar14;
  bVar3 = bVar3 & 0x3f;
  uVar37 = uVar36 >> bVar3 |
           ((uVar47 & 0xffffffffffff0000 | (ulong)((ushort)uVar47 & 0xfbff | 1)) << (bVar2 & 0x3f) |
           uVar43 >> 0x40 - (bVar2 & 0x3f)) << 0x40 - bVar3;
  uVar28 = ~CONCAT31((uint3)(uVar44 >> 9),(char)uVar34);
  bVar14 = (byte)uVar37;
  uVar39 = iVar7 << (bVar14 & 0x1f) | (uint)(CONCAT14(uVar42 != 0,iVar7) >> 0x21 - (bVar14 & 0x1f));
  uVar44 = ((uint)uVar12 | (uint)(ushort)(0U % (ushort)bVar18 << 8) | 0xe5861937) * uVar39;
  bVar19 = (byte)(uVar40 >> 0xe);
  uVar11 = uVar44 & 0xffff0000;
  bVar48 = (int)uVar25 < 0;
  uVar9 = (((uVar31 & 0xff80) << 1 |
           (uint)(uVar23 == 0 || SCARRY2(sVar30,uVar17) != (short)uVar23 < 0)) >> (bVar2 & 0x3f) &
           0xffff0000 | uVar33 & 0xffffff00 | (uint)(byte)~(byte)uVar33) * 0x76f3dbe4;
  uVar23 = (ushort)uVar9 | (ushort)bVar48;
  sVar30 = (short)uVar13;
  uVar4 = sVar22 << 1 | (ushort)(sVar22 < 0);
  uVar31 = -uVar42 & 0xffff0000 | (uint)uVar4;
  uVar26 = uVar37 >> (bVar14 & 0x3f);
  uVar33 = (short)uVar39 + 1;
  uVar12 = (ulong)(uVar39 & 0xffff0000 | (uint)uVar33);
  bVar2 = (byte)uVar26 & 0x1f;
  uVar44 = (uint)(uVar33 != 0 && SCARRY2((short)uVar39,1) == (short)uVar33 < 0) << bVar2 |
           (uVar11 | (uVar44 & 0xffff) * (uVar25 & 0xffff) & 0xffff) >> 0x20 - bVar2;
  bVar2 = (byte)uVar44;
  bVar3 = bVar14 & bVar2;
  uVar4 = ((ushort)uVar28 >> 1 | (short)uVar37 << 0xf) - uVar4;
  uVar25 = uVar28 & 0xffff0000 | (uint)uVar4;
  uVar17 = sVar30 - uVar23;
  uVar36 = uVar13 & 0xffffffffffff0000;
  if (SBORROW2(sVar30,uVar23) != false) {
    uVar26 = uVar26 & 0xffffffffffff0000 | (ulong)uVar25 & 0xffff;
  }
  bVar21 = (byte)(uVar37 >> 8);
  uVar23 = (ushort)(byte)(bVar2 << 1) * (ushort)bVar21;
  uVar24 = (ushort)(uVar44 << ((byte)uVar26 & 0x1f));
  uVar5 = uVar24 ^ (ushort)(uVar23 == uVar24) * (uVar24 ^ (ushort)uVar26);
  uVar47 = (ulong)(uVar11 | (ushort)(uVar23 ^ (ushort)(uVar23 != uVar24) * (uVar23 ^ uVar5)));
  uVar41 = ((ulong)uVar31 & 0x7f) << 1 | 1;
  uVar46 = (ulong)uVar45;
  if ((short)(uVar23 - uVar24) < 0) {
    uVar46 = (ulong)uVar9 | (ulong)bVar48;
  }
  bVar49 = (uVar33 >> (uVar33 & 0xf) & 1) != 0;
  uVar43 = uVar47 - 0x5d46dd1d;
  uVar11 = (int)uVar43 - (uint)bVar49;
  if ('\0' < (char)((uint)uVar5 >> 8)) {
    uVar11 = uVar11 & 0xffff0000 | (uint)CONCAT71((int7)(int3)(uVar37 >> 8),bVar3) & 0xffff;
  }
  iVar7 = (int)((uVar34 & 0xffffffffffff0000 |
                (ulong)(ushort)(((ushort)uVar34 & 0xff00 |
                                (ushort)(byte)(((SBORROW1(bVar18,'3') != false) ==
                                               (char)(bVar18 - 0x33) < '\0') << 1)) << 1)) >> 1);
  uVar34 = uVar26 - 1 | 0x4ef9e65e;
  uVar11 = (uVar11 & 0xffff0000 | (uint)(((ushort)uVar11 ^ (ushort)uVar41) & 0xff7f)) + 0xba65582b;
  bVar2 = (byte)uVar11;
  uVar44 = (char)uVar45 + iVar7 +
           ((uint)uVar36 | uVar17 & 0xffffff00 |
           (uint)(byte)((char)uVar17 << 1 | (uVar47 < 0x5d46dd1d || uVar43 < bVar49))) + 2;
  uVar46 = uVar46 ^ 0x25e5;
  bVar18 = (char)(bVar21 + 0x6d) >> 1;
  uVar47 = 1 << (uVar12 & 0x3f) & 0xffU |
           (ulong)((uint7)(uVar34 >> 8) & 0xffffffffffff00 |
                  (uint7)(byte)((ushort)((short)uVar34 + -0x50e) >> 8)) << 8;
  uVar17 = -((short)CONCAT31((uint3)(uVar40 >> 0x16),
                             bVar19 << (bVar14 & 7) | bVar19 >> 8 - (bVar14 & 7)) + sVar30);
  uVar43 = (ulong)(uVar9 & 0xffff0000 | uVar9 & 0xc3f3 | (uint)bVar48);
  uVar34 = (long)(int)(uVar11 & 0xffffff00 |
                      (uint)(byte)(bVar2 ^ (bVar2 != (byte)uVar5) * (bVar2 ^ (byte)uVar5))) *
           (long)(int)uVar41;
  uVar9 = (uint)(uVar34 >> 0x20);
  lVar20 = uVar47 + uVar43;
  uVar26 = uVar47;
  if (CARRY8(uVar47,uVar43) || lVar20 == 0) {
    uVar26 = uVar12;
  }
  bVar2 = (byte)lVar20 & 7;
  uVar42 = (int)lVar20 - uVar25;
  uVar39 = uVar44 + (int)uVar41;
  uVar11 = (uint)!CARRY8((ulong)uVar44,uVar41);
  uVar44 = uVar9 - uVar39;
  if ((uVar9 < uVar39 || uVar44 < uVar11) || uVar44 == uVar11) {
    uVar17 = (ushort)uVar46;
  }
  bVar14 = (byte)uVar42 & 0xf;
  uVar33 = (ushort)(uVar46 * 2);
  uVar12 = (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
           (ulong)(ushort)((ushort)((ushort)(uVar36 >> 0x38) | (ushort)(uVar36 >> 0x28) & 0xff00) >>
                           bVar14 | uVar33 << 0x10 - bVar14);
  uVar11 = (uint)(uVar26 >> 1);
  uVar9 = (uint)(ushort)uVar34 * (uint)uVar17;
  uVar34 = uVar34 & 0xffff0000 | (ulong)(ushort)uVar9;
  uVar44 = (uint)uVar12;
  uVar39 = iVar7 + -0x4a0784fd + (uint)(0x60e0526e < uVar11);
  lVar20 = CONCAT62((int6)(short)(uVar37 >> 0x10),
                    CONCAT11(bVar18 >> bVar2 | bVar18 << 8 - bVar2,bVar3 << 1)) + 0x24d0a6d1;
  uVar23 = (short)(ushort)uVar41 >> bVar14;
  bVar3 = (byte)(uVar9 >> 0x10);
  bVar18 = (byte)((ulong)lVar20 >> 8);
  bVar2 = bVar18 + bVar3;
  cVar16 = bVar2 + 1;
  uVar36 = (ulong)uVar23 << 0x19;
  uVar37 = (ulong)(CONCAT18((uVar9 & 0x100) != 0,uVar34) >> 0x13) | uVar34 << 0x2e;
  bVar2 = (char)uVar39 + ((CARRY1(bVar18,bVar3) || 0xfe < bVar2) || cVar16 == '\0');
  uVar5 = (short)uVar17 >> 1;
  uVar9 = CONCAT22((short)uVar17 >> 0xf,uVar5);
  uVar34 = ((ulong)(((uVar11 & 0xff) >> bVar14 | uVar44 << 0x20 - bVar14) & 0xfbffffff) - 0x453f12c7
           ) + uVar46 * 0x10;
  uVar11 = (int)CONCAT61((int6)((ulong)lVar20 >> 0x10),cVar16) << 8 | 1 << (uVar23 & 0x1f);
  if ((bVar2 & 0x46) != 0) {
    uVar11 = uVar9;
  }
  uVar26 = uVar34 ^ (ulong)(uVar37 == uVar34) * (uVar34 ^ (ushort)(uVar4 * 0x800));
  uVar34 = (ulong)(uVar37 != uVar34) * (uVar37 ^ uVar26);
  uVar37 = uVar37 ^ uVar34;
  uVar45 = (uint)uVar26;
  uVar28 = ((uVar31 << 1 | 1) + (int)uVar47) - 1;
  uVar31 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
    }
  }
  bVar18 = (byte)(uVar36 >> 0x1d);
  iVar7 = (uVar11 & 0xffffff00 | uVar45 & 0xff) + 0x85d3bda5 + (uint)(bVar18 & 1);
  iVar10 = (int)(uVar44 + uVar25 * 2) >> 1;
  uVar25 = iVar7 * 2;
  bVar3 = (byte)uVar25 | (uVar33 >> 0xb & 1) != 0;
  uVar11 = (uVar39 & 0xffffff00 | (uint)bVar2) >> 1;
  uVar26 = (ulong)uVar11;
  uVar47 = uVar26 | (ulong)(iVar7 < 0) << 0x3f;
  cVar16 = (char)uVar5;
  uVar39 = uVar31;
  if (SBORROW1(cVar16,-0x34) != false) {
    uVar39 = uVar31 & 0xffff0000 | (uint)uVar5;
    uVar45 = uVar31;
  }
  uVar31 = (int)CONCAT11(-1 < (int)(uVar42 & 0xffffff00 | 0x10000 |
                                   (uint)(byte)(bVar14 | (byte)(uVar37 >> 8))),(char)uVar37) *
           (int)(short)uVar11;
  uVar23 = (ushort)(uVar31 >> 0x10);
  bVar2 = (byte)uVar31;
  uVar17 = (ushort)uVar31 & 0xff | (ushort)(byte)((char)(uVar31 >> 8) + 9) << 8;
  uVar34 = CONCAT62((int6)(short)(uVar34 >> 0x10),uVar17);
  if ((uint)uVar34 == uVar11) {
    uVar47 = (ulong)(uVar9 & 0xffffff00 | (uint)(byte)(cVar16 + 0x34U));
    uVar26 = uVar34;
  }
  uVar34 = (ulong)((ushort)((ushort)(((uint)(uVar47 >> (bVar2 & 0x3f)) |
                                     (uint)(uVar47 << 0x40 - (bVar2 & 0x3f))) << (bVar2 & 0x1f)) |
                           (ushort)((uVar45 & 0xffff0000 | (uint)uVar23) >> 0x20 - (bVar2 & 0x1f)))
                  < uVar17) << 0x20 | (ulong)uVar39 & 0xffffffffffffff64;
  uVar37 = uVar46 * 2 & 0xffffffffffff0000 | (ulong)(ushort)((uVar33 ^ 0x800) << 1 | 1) | 0x20b8;
  bVar21 = (byte)(uVar25 >> 8);
  uVar11 = uVar23 & 0xffffffc8;
  bVar14 = (byte)uVar26;
  bVar19 = bVar3 ^ (bVar14 == bVar3) * (bVar3 ^ (byte)uVar11);
  uVar11 = -(uVar45 & 0xffff0000 | uVar11);
  return (uVar26 & 0xffffffffffffff00 |
         (ulong)(byte)(bVar14 ^ (bVar14 != bVar3) * (bVar14 ^ bVar19))) +
         (ulong)(uVar25 & 0xffff0000 |
                 CONCAT11(bVar21 << (bVar2 & 7) | bVar21 >> 8 - (bVar2 & 7),bVar3) & 0xffffff00 |
                (uint)bVar19) + ((ulong)(uVar42 & 0xffff0000 | 0x10000 | uVar31 & 0xff) | 0x2e00) +
         (ulong)(uVar11 & 0xffff0000 | (uint)(ushort)((short)uVar11 >> 0x10)) +
         CONCAT62((uint6)(ushort)(-(int)CONCAT71((uint7)(uVar36 >> 0x25),bVar18 >> 1) >> 0x16),
                  0xddb9) + (ulong)((uVar31 & 0xffff ^ 0x84) >> 1 | iVar10 << 0x1f) * -0x49044844 +
         (ulong)CONCAT22((undefined2)((char)bVar2 >> 7),((short)(char)bVar2 << (bVar2 & 0x1f)) + 1)
         + (ulong)CONCAT31((uint3)(uVar12 >> 8) >> 0xc,(char)(uVar44 >> 0xc) << 2) +
         (ulong)(uVar28 & 0xffff0000 | (uint)(ushort)((short)uVar28 << 1)) + uVar37 +
         (ulong)(((uVar9 & 0xffffff00 | (uint)(byte)(cVar16 << (bVar2 & 0x1f))) << (bVar2 & 0x1f) |
                 (uint)uVar37 >> 0x20 - (bVar2 & 0x1f)) >> (bVar2 & 0x1f)) +
         (ulong)(uVar9 & 0xffffff00 | (uint)(byte)((char)(cVar16 + 0x34U) >> (bVar2 & 0x1f))) * 2 +
         (ulong)((uint)(uVar34 << (bVar2 & 0x1f)) | (uint)(uVar34 >> 0x21 - (bVar2 & 0x1f))) +
         (ulong)(iVar10 + 0x5c20cf71) + 0x13c9982e76a;
}



// WARNING: Removing unreachable block (ram,0x00407089)
// WARNING: Removing unreachable block (ram,0x00407753)

long log_size_10_var_006(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  char cVar15;
  short sVar9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  sbyte sVar16;
  byte bVar19;
  ushort uVar17;
  ulong uVar18;
  byte bVar20;
  ushort uVar21;
  byte bVar23;
  uint uVar22;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ushort uVar29;
  long lVar30;
  int iVar31;
  byte bVar32;
  ushort uVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  ushort uVar40;
  ushort uVar41;
  short sVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  ulong uVar46;
  long lVar47;
  ulong uVar48;
  uint7 uVar49;
  byte bVar50;
  short sVar52;
  uint uVar53;
  bool bVar54;
  bool bVar55;
  byte bVar51;
  
  auVar4 = (ZEXT116(0) << 0x40 | ZEXT816(0x447bee4c2634519f)) >> 0x19;
  for (uVar26 = 0; (0x56a497da9a5610e4U >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
  }
  uVar26 = uVar26 >> 2 ^ 0x51c5f3f2;
  uVar49 = (uint7)(uVar26 >> 8) & 0xffffffffffff00 | (uint7)(byte)((byte)(uVar26 >> 8) | 0xbf);
  lVar30 = 0x64d7c2fec9d9f307 - ((ulong)(ushort)((short)uVar49 * 0x1400) | 0x3da100ff);
  uVar43 = -((SUB164(auVar4,0) & 0xffff0000 | 0x80) >> 1 |
            (uint)((SUB168(auVar4,0) >> 0xc & 0xf) != 0) << 0x1f) - 1;
  iVar11 = (((uint)(((ulong)uVar49 & 0xffffff) << 8) & 0xffff0000 | 0xb0b0) >> 1) + 0xaf2d45c9;
  uVar12 = SEXT48(iVar11);
  uVar26 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> uVar26 == 0; uVar26 = uVar26 - 1) {
    }
  }
  bVar6 = (char)((uint)iVar11 >> 8) >> 7;
  uVar24 = ((((uint)lVar30 & 0xffff | (int)(short)((ulong)lVar30 >> 0x10) << 0x10) ^ 0x8000) +
            0x5caf4208 >> 1) * 8 + 0x4b4ce1e1;
  uVar28 = 0;
  if ((int)(char)bVar6 != 0) {
    for (; ((uint)(int)(char)bVar6 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
    }
  }
  uVar14 = (ulong)uVar28;
  if (0xda < (byte)uVar24) {
    uVar14 = 0x7086efc3;
  }
  uVar40 = (ushort)uVar43 ^ 0x40da;
  uVar43 = uVar43 & 0xffff0000;
  uVar28 = (uVar43 | uVar40) ^ 0x534a681c;
  uVar41 = (uVar40 >> 1 | (short)uVar14 << 0xf) ^ (ushort)uVar28;
  bVar32 = (bVar6 & 0x1f) % 0x11;
  bVar8 = bVar6 >> 2;
  uVar13 = CONCAT62((int6)(short)((uint)iVar11 >> 0x10),
                    CONCAT11((char)(uVar12 >> 8) + '\x01',(char)iVar11)) & 0xffffffffffffff00 |
           (ulong)(byte)((char)iVar11 >> 0xc);
  uVar40 = (ushort)uVar28 + 0x7d95 + (short)uVar26 * 2;
  uVar37 = -(ulong)uVar24;
  uVar12 = 0xd52620c9df4340da;
  if ((POPCOUNT(uVar37 & 0xff) & 1U) == 0) {
    uVar12 = uVar26;
  }
  uVar24 = ((int)((uVar14 & 0xffffffffffff0000 | 0x1820) >> 1) + -0x64427c7e) -
           (uint)((ulong)uVar24 != 0);
  auVar4 = ZEXT116((uVar26 & 1) != 0) << 0x40 |
           ZEXT416(uVar43 | (ushort)(uVar41 << bVar32 | uVar41 >> 0x11 - bVar32));
  uVar43 = ((uint)uVar26 & 0xffffff00 | (uint)(byte)((byte)uVar26 >> 1 | 0x80)) * -0x71ae25f5;
  uVar25 = (uint)uVar12;
  if ((uint)uVar13 == uVar25) {
    uVar25 = 0xa210b1ed;
  }
  else {
    uVar13 = uVar12 & 0xffffffff;
  }
  uVar38 = (int)((byte)(0x93 - bVar6) | 0xe0001700) >> 0xe;
  lVar30 = (long)((ulong)(byte)(bVar6 << 6 | bVar8) | 0xd34d0000) >> 0x1f;
  uVar36 = (uint)uVar13;
  if (uVar36 != uVar38) {
    uVar13 = (ulong)uVar38;
    uVar36 = uVar38;
  }
  sVar16 = (sbyte)lVar30;
  sVar52 = (short)(uVar24 & 0xffffff00);
  iVar11 = (int)(short)uVar13 * (int)sVar52;
  auVar1 = ZEXT816((ulong)(uVar28 << sVar16 | uVar28 >> 0x20 - sVar16) | 0xc000000000000000);
  auVar2 = CONCAT88(((ulong)(ushort)(uVar40 & 0xff | (ushort)(byte)((short)uVar40 >> 9) << 8) |
                    0xa330000) - 0x78d2ae45 & 0xffffffffffff0000 |
                    (ulong)(ushort)((uint)iVar11 >> 0x10),
                    uVar13 & 0xffffffffffff0000 | (ulong)(ushort)iVar11) &
           (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 % auVar1;
  uVar28 = SUB164(auVar3,0);
  bVar32 = (byte)uVar43;
  uVar43 = uVar43 & 0xffffff00 | (uint)(byte)(bVar32 >> sVar16 | bVar32 << 8 - sVar16);
  uVar38 = uVar28 ^ (uint)(SUB168(auVar2 / auVar1,0) == SUB168(auVar3,0)) * (uVar28 ^ (uint)lVar30)
           | 0x54;
  uVar28 = uVar43 << sVar16 |
           (uint)(CONCAT14(((ushort)lVar30 >> ((ushort)uVar25 & 0xf) & 1) != 0,uVar43) >>
                 0x21 - sVar16);
  uVar39 = (uint)uVar37 & 0xffff0000 | (uint)(ushort)((ushort)uVar25 + 0x84);
  uVar40 = (ushort)lVar30 + 0x57c7;
  bVar32 = (byte)uVar40;
  bVar23 = (byte)(uVar38 * 0xd968641 >> 0x10);
  uVar43 = uVar38 * -0x79bf0000 | uVar38 * 0xd968641 >> 0x10 & 0xffffff00 |
           (uint)(byte)(bVar23 << (bVar32 & 7) | bVar23 >> 8 - (bVar32 & 7));
  cVar15 = (char)((ulong)uVar40 >> 8);
  bVar23 = bVar32 & 0xf;
  cVar7 = (char)((ulong)(ushort)~((short)(uVar24 >> 8) << 8) >> 8);
  uVar41 = 0;
  if ((short)cVar7 != 0) {
    for (; ((ushort)(short)cVar7 >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
    }
  }
  uVar26 = (ulong)CONCAT22((undefined2)(cVar7 >> 7),(short)cVar7) ^ 64000;
  iVar11 = (uVar24 & 0xffff0000 | (uint)(ushort)(sVar52 << (bVar32 & 0x1f))) * uVar43;
  uVar33 = (short)uVar28 >> bVar23;
  uVar28 = uVar28 & 0xffff0000;
  uVar44 = uVar25 << bVar23 | uVar25 >> 0x20 - bVar23;
  uVar27 = 0xfffffffd;
  sVar52 = (short)((uint)iVar11 >> 0x10);
  uVar21 = sVar52 >> 0xf;
  uVar21 = uVar21 << bVar23 | uVar21 >> 0x10 - bVar23;
  cVar7 = (char)uVar21;
  bVar19 = cVar15 - cVar7;
  uVar25 = (uint)uVar26;
  if (bVar19 == 0 || cVar15 < cVar7) {
    uVar25 = uVar43 + 0x7c56e8d6;
  }
  uVar53 = uVar44 & 0xffff0000;
  uVar43 = uVar53 | uVar44 >> 1 & 0x7fff;
  uVar13 = (ulong)(uVar28 | uVar33 | 0xc0000000);
  uVar12 = CONCAT44(CONCAT22(sVar52 >> 0x1f,uVar21),iVar11) & 0x3fffffffffffffff;
  uVar14 = uVar12 / uVar13;
  sVar52 = (short)uVar14;
  uVar21 = sVar52 + 0x92df;
  if ((SBORROW2(sVar52,0x6d21) != false) != (short)uVar21 < 0) {
    uVar27 = uVar25 & 0xffff | 0xffff0000;
  }
  uVar36 = 1 << ((uVar36 >> (bVar32 & 0x1f) | uVar39 << 0x20 - (bVar32 & 0x1f)) & 0x1f);
  uVar44 = (ushort)(uVar40 & 0xf | (ushort)bVar19 << 8) | uVar36;
  lVar30 = 0x3f;
  if (uVar43 != 0) {
    for (; uVar43 >> lVar30 == 0; lVar30 = lVar30 + -1) {
    }
  }
  bVar32 = (byte)uVar44;
  uVar40 = CONCAT11((char)(uVar44 >> 8) + -1,bVar32);
  uVar44 = (uint)(uVar12 % uVar13) ^
           1 << ((byte)(bVar6 << 7 | bVar6 >> 1) >> (bVar32 & 0x1f) & 0x1f);
  uVar25 = uVar25 >> (bVar32 & 0x1f);
  lVar47 = (ulong)(uVar41 >> 1) << 0xc;
  uVar43 = uVar28 | uVar33 & 0xffffff00 | 0xc0000000 | (uint)(byte)((char)uVar33 << 1);
  sVar9 = (short)lVar47;
  uVar29 = sVar9 + 1;
  uVar28 = (uint)lVar47 & 0xffff0000 | (uint)uVar29;
  uVar12 = (ulong)uVar43 << (bVar32 & 0x3f) | (ulong)(uVar43 >> 0x40 - (bVar32 & 0x3f));
  uVar33 = uVar41 >> 2 | (short)lVar30 << 0xf;
  sVar52 = 0xf;
  uVar41 = (ushort)uVar44;
  if (uVar41 != 0) {
    for (; uVar41 >> sVar52 == 0; sVar52 = sVar52 + -1) {
    }
  }
  uVar35 = CONCAT62((int6)(short)(SUB162((auVar4 >> bVar8) >> 0x10,0) |
                                 SUB162((auVar4 << 0x41 - bVar8) >> 0x10,0)),sVar52);
  uVar37 = (ulong)(uVar25 & 0xffff0000 | uVar25 >> 1 & 0x7fff);
  uVar37 = uVar37 & ~(1 << (uVar37 & 0x3f));
  uVar41 = (ushort)((char)uVar37 < '\0');
  uVar10 = uVar40 + 0x82fe;
  uVar17 = uVar10 - uVar41;
  uVar14 = (ulong)(uVar40 < 0x7d02 || uVar10 < uVar41) << 0x20 |
           uVar14 & 0xffff0000 | (ulong)uVar21 & 0xffffffffffffff00 |
           (ulong)(uVar29 != 0 && SCARRY2(sVar9,1) == (short)uVar29 < 0);
  uVar14 = (ulong)((uint)(uVar14 << 0xc) | (uint)(uVar14 >> 0x15));
  uVar25 = ~-uVar28;
  uVar22 = uVar44 * -0x106a8c05 ^ (uint)uVar33;
  uVar34 = uVar12 ^ (ulong)(uVar14 == uVar12) * (uVar12 ^ uVar22);
  uVar13 = uVar14 ^ (ulong)(uVar14 != uVar12) * (uVar14 ^ uVar34);
  uVar43 = (uint)uVar35;
  uVar44 = (int)lVar30 + uVar27 + 1;
  if ((long)uVar12 < (long)uVar14) {
    uVar44 = uVar43;
  }
  lVar30 = (uVar53 | 0xffff) + uVar13;
  bVar54 = (uVar44 & 1) != 0;
  uVar26 = (ushort)(0 << bVar23 | 0xfffeU >> 0x10 - bVar23) + uVar26 + 1;
  if (bVar54) {
    uVar26 = uVar13;
  }
  bVar6 = ((byte)uVar17 & 0x1f) % 0x11;
  sVar52 = (short)uVar25;
  uVar40 = (ushort)(CONCAT12(bVar54,sVar52) >> bVar6) | sVar52 << 0x11 - bVar6;
  uVar25 = uVar25 & 0xffff0000;
  auVar4 = (ZEXT1216(CONCAT48(uVar22,uVar13)) & (undefined  [16])0xffffffffffffffff) /
           ZEXT816(uVar35 | 0xc000000000000000);
  uVar53 = (int)uVar26 << 0x14 | (uint)uVar34 >> 0xc;
  uVar43 = uVar43 + 0xaa654822;
  sVar52 = (short)lVar30;
  uVar38 = (((uVar38 + 0xb8 + (uVar24 & 0xffffff00) | 1 << (uVar21 & 0x1f)) + 0xfa63eb43) *
            0x9300000 | uVar43 & 0xffff) + 1;
  bVar6 = SUB161(auVar4,0) | (byte)((uint)uVar17 >> 8);
  lVar47 = CONCAT71(SUB167(auVar4 >> 8,0),bVar6);
  uVar24 = uVar36 & 0xffff0000 | (uint)uVar17;
  if (bVar6 != 0) {
    uVar24 = uVar38 & 0xffff0000 |
             (uint)(ushort)((ushort)uVar38 >> 0xd |
                           ((ushort)(uVar37 & 0xffffffffffffff00) |
                           (ushort)(byte)((char)uVar37 << 1 | uVar28 != 0)) << 3);
  }
  bVar6 = (byte)uVar24;
  uVar46 = lVar30 >> (bVar6 & 0x3f);
  uVar35 = (ulong)(uint)((int)(uVar44 | 1) >> 0xc);
  uVar28 = (uVar39 & 0xb24e3000) >> 0x13;
  bVar32 = (char)uVar34 + bVar6;
  uVar34 = uVar34 & 0xffffffffffffff00 | (ulong)bVar32;
  uVar14 = lVar47 * uVar34;
  uVar12 = uVar35 << 1;
  uVar36 = CONCAT22(sVar52 >> 0xf,sVar52 << 1) | 1;
  uVar13 = uVar37 & 0xffffffffffff0000 |
           (ulong)(byte)(((char)((uVar37 & 0xffffffffffffff00) >> 8) - (byte)uVar14) -
                        ((byte)(uVar14 >> 8) < 0xcd)) << 8;
  uVar26 = 0x3f;
  if (uVar35 != 0) {
    for (; uVar12 >> uVar26 == 0; uVar26 = uVar26 - 1) {
    }
  }
  uVar38 = ((uint)uVar13 & 0xffff0000 | (uint)(uVar13 >> 0xc) & 0xf) << (bVar6 & 0x1f) |
           uVar53 >> 0x20 - (bVar6 & 0x1f);
  uVar41 = (ushort)uVar38 >> 1;
  lVar30 = (uVar14 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar14 >> 1 | 0x80)) << 1;
  bVar6 = (byte)lVar30 | SUB161(SEXT816(lVar47) * SEXT816((long)uVar34) >> 0x7f,0);
  if (!SBORROW2((short)uVar43,-0x3025)) {
    uVar53 = uVar25 | uVar40;
  }
  uVar40 = uVar40 + 0x16e3;
  sVar16 = (sbyte)(uVar24 & 0xffffbf0f);
  uVar43 = (uVar24 & 0xffffbf0f | 0x2d52679) - uVar43;
  bVar8 = (byte)((uint)(ushort)(uVar41 | (ushort)((uVar38 & 1) != 0) << 0xf) >> 8);
  lVar47 = (long)(uVar46 & 0xffffffffffffff00 | uVar46 >> 1 & 0x7f) >> 0x11;
  uVar39 = ((uint)uVar12 | 0x9d7f) << 1 | (uint)lVar47 >> 0x1f;
  uVar41 = CONCAT11(bVar8,(char)uVar41 + '\r');
  uVar49 = SEXT37((int3)((ulong)lVar30 >> 8));
  uVar24 = uVar43;
  if (bVar6 <= bVar8) {
    uVar24 = uVar25 | uVar40;
  }
  sVar52 = (short)uVar39 + 0xcb;
  uVar21 = 0x2655;
  if (bVar8 < bVar6) {
    uVar21 = uVar41;
  }
  if ((uVar49 & 1) != 0) {
    uVar41 = (ushort)(CONCAT12(bVar6 < bVar8,uVar21) >> 0xe) | uVar21 << 3;
  }
  uVar39 = uVar39 - 1;
  uVar26 = uVar26 & 0xfeffffffffff0000 |
           (ulong)(ushort)((((ushort)uVar26 >> sVar16 |
                            ((ushort)(uVar33 + 0x1dcf) >> 1) << 0x10 - sVar16) - uVar41) - 1);
  lVar30 = (long)(int)CONCAT71(uVar49,bVar6 ^ (bVar6 != bVar8) * (bVar6 ^ bVar8)) *
           (long)(int)uVar28;
  cVar15 = (char)((ulong)lVar30 >> 0x28);
  uVar21 = (ushort)uVar34 & 0xff00 | (ushort)(byte)((char)bVar32 >> ((byte)uVar43 & 0x1f));
  if (0x48da829f < uVar36) {
    uVar21 = uVar40;
  }
  uVar14 = lVar47 + (ulong)(uVar38 & 0xffff0000 | (uint)uVar41) + (ulong)(uVar36 < 0x48da82a0);
  uVar43 = uVar24 >> 0xb;
  uVar12 = (ulong)((uVar43 | uVar24 << 0x15) << 5);
  if (cVar15 != '\0') {
    uVar12 = uVar14;
  }
  uVar25 = uVar39 & 0xffffff00 | (uint)(byte)((char)uVar39 + (char)uVar21 + (cVar15 != '\0'));
  uVar33 = (short)uVar43 + 0xbf89;
  uVar13 = (ulong)(uVar43 & 0xffff0000 | uVar24 << 0x15 |
                  (uint)(ushort)(sVar52 * 2 | (ushort)(sVar52 < 0))) - (ulong)uVar25;
  uVar41 = uVar41 << ((byte)uVar13 & 0x1f);
  uVar24 = (uint)(uVar40 >> 1) << 0x1f;
  uVar44 = (uint)uVar14;
  sVar52 = (short)uVar25;
  uVar29 = sVar52 << 1 | (ushort)(sVar52 < 0);
  uVar43 = uVar39 & 0xffff0000 | (uint)uVar29;
  iVar11 = CONCAT11(0xec,(byte)lVar30 & uVar36 != 0x48da82a0) * uVar43;
  bVar6 = (byte)uVar28;
  uVar14 = (ulong)((uVar38 & 0xffff0000 | uVar41 & 0xfffffe00) >> 1 | uVar24 |
                  (uint)(byte)((char)(uVar41 >> 1) + -0x73 +
                              (0x62 < bVar6 || 0xfe < (byte)(bVar6 + 0x9d))));
  iVar45 = (uVar44 << 10 | uVar44 >> 0x16) << 4;
  uVar12 = (long)((int)CONCAT71((uint7)(uVar12 >> 8) & 0xffffffffffff00 | (uint7)(byte)(uVar21 >> 8)
                                ,-1 < (long)uVar26) + 0x55073a79) * 0x286d2712;
  iVar31 = CONCAT31((uint3)(uVar43 >> 0x1f),(long)(int)uVar12 != uVar12);
  uVar28 = iVar45 >> 0x1d;
  uVar41 = (ushort)(iVar45 >> 0x1d);
  uVar40 = (uVar33 & 0xff) + 0xe53 & 0xff00;
  for (uVar43 = 0x1f; 0x953f8402U >> uVar43 == 0; uVar43 = uVar43 - 1) {
  }
  uVar37 = (ulong)(ushort)((short)uVar13 + 0x1fcc) & 0xffffffffffffff0f;
  uVar34 = uVar13 & 0xffffffffffff0000 | uVar37;
  sVar16 = (sbyte)uVar37;
  uVar49 = (uint7)(((ulong)(ushort)(uVar27 >> 0x18) << 0x2e) >> 0x17);
  cVar15 = (char)((uint)iVar11 >> 8);
  bVar54 = (char)(cVar15 + '\x01') < '\0';
  uVar37 = (ulong)(uint)(int)(char)iVar11;
  uVar13 = uVar12 & 0xffffffff;
  if (SCARRY1(cVar15,'\x01') != bVar54) {
    uVar13 = uVar34;
  }
  uVar35 = uVar13 ^ (ulong)(uVar37 == uVar13) * (uVar13 ^ uVar14);
  uVar37 = uVar37 ^ (ulong)(uVar37 != uVar13) * (uVar37 ^ uVar35);
  lVar30 = CONCAT71(0x953f84,(char)uVar35 + '\x02');
  bVar6 = (byte)(uVar34 >> 1);
  uVar13 = uVar14 << 0x40 - (bVar6 & 0x3f);
  uVar25 = (ushort)(0 << (bVar6 & 0x1f)) & 0xffff68e5;
  if ((POPCOUNT((char)uVar25) & 1U) == 0) {
    uVar14 = (ulong)((uVar38 & 0xfffe0000) >> 1 | uVar24 | (uint)uVar40);
  }
  lVar47 = (ulong)(uint)((int)(short)((ushort)uVar37 & 0xff00 | (ushort)(byte)((char)uVar37 + 0xb7))
                        + (int)CONCAT71(uVar49,bVar54)) * lVar30;
  uVar37 = (ulong)(ushort)((ushort)uVar14 >> 1 | 0x8000);
  uVar14 = uVar14 & 0xffffffffffff0000 | uVar37;
  uVar24 = (uint)lVar47;
  if ((int)(((uint)((ulong)lVar47 >> 0x21) | uVar28 << 0x1f) - 1) < 0) {
    uVar24 = iVar31 + 0x64ebf2ceU & 0xffff0000 |
             (uint)(ushort)~((short)(iVar31 + 0x64ebf2ceU) << sVar16 |
                            (ushort)(uVar12 & 0xffffffff) >> 0x10 - sVar16);
  }
  uVar34 = (ulong)((uVar43 & 0xffff0000 | uVar25) >> 4 | 0xf0000000);
  uVar24 = uVar24 * ((uVar53 + 0x354b8e68 & 0xffff0000 | (uint)uVar33) + 0xc5d86109 & 0xffff0000 |
                    (uint)(ushort)((ushort)(SCARRY4(iVar31,0x64ebf2cd) !=
                                           SCARRY4(iVar31 + 0x64ebf2cd,1)) << 9 | uVar40 >> 7));
  bVar32 = (byte)uVar24;
  bVar55 = 0x27 < bVar32 || 0xfe < (byte)(bVar32 - 0x28);
  cVar7 = bVar32 - 0x27;
  cVar15 = (char)(uVar24 >> 8);
  uVar12 = (uVar39 & 0xffff0000 | (uint)(uVar29 | uVar41)) >> (bVar6 & 0x3f) | uVar13;
  if (cVar7 != '\0' && (SCARRY1(bVar32,-0x28) != SCARRY1(bVar32 - 0x28,'\x01')) == cVar7 < '\0') {
    uVar12 = uVar14;
  }
  iVar11 = 0;
  if ((uint)uVar12 != 0) {
    for (; ((uint)uVar12 >> iVar11 & 1) == 0; iVar11 = iVar11 + 1) {
    }
  }
  uVar21 = (short)lVar30 << bVar55 |
           ((ushort)((short)(uVar26 >> 1) + 0xbfU) >> (bVar6 & 0x1f)) >> 0x10 - bVar55;
  uVar26 = uVar12 << 4 | uVar12 >> 0x3c;
  iVar31 = (int)(short)uVar26;
  uVar38 = (uint)uVar26;
  lVar30 = (long)(int)uVar38 * -0x118fc552;
  bVar6 = (byte)lVar30 & 0x3f;
  iVar45 = (int)uVar14;
  uVar36 = (int)CONCAT71(uVar49,bVar54 << 1) - iVar45;
  uVar43 = (uint)(CONCAT14(1,iVar31) >> 0x16);
  uVar28 = uVar28 & 0xffff0000 |
           (uint)(ushort)((uVar41 & 0xff00 | (ushort)((uVar41 & 0xfe) >> 1)) + 1);
  uVar25 = (uint)CONCAT11(cVar15 * '\x02',cVar7);
  bVar8 = (byte)uVar43;
  uVar26 = ((ulong)uVar36 & 0xffffffffffff0000 | (ulong)(uVar36 >> 1) & 0x7fff) >> 1;
  uVar37 = uVar37 & 0xff;
  uVar39 = iVar45 << (bVar8 & 0x1f) | uVar28 >> 0x20 - (bVar8 & 0x1f);
  uVar41 = CONCAT11((cVar15 >> 0xf) << 1,cVar15 >> 7) * -0xf29;
  uVar38 = uVar38 | uVar28;
  uVar14 = (uVar34 << bVar6 | (ulong)(CONCAT18((int)lVar30 != lVar30,uVar34) >> 0x41 - bVar6)) ^
           0x800000000000000;
  uVar36 = uVar38 & 0xffff0000;
  uVar12 = uVar37 >> 1;
  uVar38 = uVar36 | (ushort)((short)uVar26 << 8) | (uint)(byte)(((char)(uVar38 >> 8) - cVar7) - 1);
  uVar40 = (ushort)(iVar11 << 1) >> 1 | 0x8000;
  if ((uVar41 & 0xe73f) == 0 || (short)uVar41 < 0) {
    uVar40 = CONCAT11(0x23,bVar8);
  }
  uVar28 = uVar28 | uVar24 & 0xffff0000 | uVar25;
  uVar13 = (ulong)(uVar24 & 0xffff0000 | uVar25 & 0xffffff00 | (uint)(byte)(bVar32 + 0xb5));
  uVar24 = (uint)uVar26;
  uVar24 = uVar24 << 0xd | uVar24 >> 0x13;
  uVar34 = uVar14 >> 1;
  uVar26 = 0;
  if (uVar38 != 0) {
    for (; (uVar38 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
    }
  }
  sVar52 = uVar40 - (short)uVar12;
  uVar41 = sVar52 - 1;
  uVar39 = (uVar39 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar39 & 0xff00 |
                          (ushort)(byte)((byte)uVar39 >> 7 | (byte)uVar39 << 2)) + 0x7f6b)) -
           (((uint)CONCAT62(0x953f,uVar21) & 0xffffff00 | (uint)(byte)(((byte)uVar21 & 0xfe) << 1) |
            1) + 0xc6578433);
  uVar46 = uVar26 ^ (ulong)(uVar13 == uVar26) * (uVar26 ^ 0xbd1e75aeeeaf2bd3);
  uVar13 = uVar13 ^ (ulong)(uVar13 != uVar26) * (uVar13 ^ uVar46);
  uVar35 = uVar13 & 0xffffffffffff0000;
  uVar33 = (short)uVar38 - CONCAT11(0x23,bVar8);
  sVar9 = (short)(uVar35 >> 0x10);
  uVar40 = sVar9 >> 0x1f;
  uVar48 = (((ulong)uVar28 << 0x22) >> 0x24 | (ulong)(uVar28 >> 0x1e) << 0x1c) -
           (ulong)(uVar36 | uVar33);
  uVar26 = (ulong)(uVar43 | iVar31 << 0xb) << 1;
  uVar36 = ((uint)uVar46 & 0xffff0000 | (uint)(ushort)((short)uVar46 << 1)) & (uint)uVar48;
  uVar25 = (uint)CONCAT62((uint6)uVar40,0xc126);
  uVar43 = uVar24 + uVar25;
  bVar32 = (bVar8 - 0x3f & 0x1f) % 0x11;
  sVar42 = (short)(uVar37 >> 2);
  uVar21 = (short)uVar13 + 0xa875;
  bVar6 = (char)uVar43 + (char)uVar41;
  uVar28 = uVar43 & 0xffffff00 | (uint)bVar6;
  uVar13 = (ulong)(ushort)(sVar42 << bVar32 |
                          (ushort)(CONCAT12(CARRY4(uVar24,uVar25),sVar42) >> 0x11 - bVar32));
  if (bVar6 != 0) {
    uVar13 = uVar34;
  }
  uVar24 = uVar39;
  if (!SBORROW2((short)uVar28,uVar21)) {
    uVar24 = uVar36 & 0xffff8294 ^ 1 << (uVar36 & 0x14);
  }
  sVar42 = (short)uVar26;
  uVar29 = sVar42 << 1;
  lVar30 = (uVar13 - (uVar26 & 0xffffffffffff0000 | (ulong)uVar29)) - (ulong)(sVar42 < 0);
  uVar25 = (uint)(uVar29 | 0xc000);
  uVar36 = CONCAT22(sVar9 >> 0xf,(sVar52 + -0x6947) - (ushort)((uVar39 >> 7 & 1) != 0)) & 0x3fffffff
  ;
  sVar9 = (short)(uVar36 / uVar25);
  uVar29 = (ushort)((byte)uVar48 < 0xe6);
  sVar52 = sVar9 + (short)uVar24;
  uVar26 = -(uVar13 & 0xffffffff);
  if ((uVar13 & 0xffffffff) != 0) {
    uVar28 = uVar43 & 0xffff0000 | (uint)(ushort)uVar26;
  }
  uVar39 = (uint)lVar30;
  uVar38 = ((uint)uVar35 | (uint)(ushort)(sVar52 + uVar29)) + uVar39;
  bVar6 = (byte)(uVar26 & 0xffffffffffffff0f);
  bVar6 = bVar6 ^ ((byte)uVar38 == bVar6) *
                  (bVar6 ^ ((byte)(uVar33 << bVar6) |
                           (byte)((ushort)(uVar26 & 0xffffffffffffff0f) >> 0x10 - bVar6)));
  lVar47 = (long)(ulong)(ushort)(((byte)((char)uVar12 - (char)((ulong)uVar41 >> 8)) & 0x490f) +
                                 (short)uVar34 + 1) >> 1;
  bVar32 = (byte)lVar47;
  uVar41 = CONCAT11(-(char)((ulong)lVar47 >> 8),bVar32);
  uVar43 = uVar39 + 0xbabcaf4c;
  sVar42 = 0xf;
  uVar33 = (ushort)lVar30;
  if (uVar33 != 0) {
    for (; uVar33 >> sVar42 == 0; sVar42 = sVar42 + -1) {
    }
  }
  uVar27 = (int)uVar24 >> (bVar6 & 0x1f);
  uVar33 = ((short)CONCAT71((uint7)(uint3)(uVar38 >> 8),1) -
           CONCAT11((char)(uVar36 % uVar25 >> 8),
                    ((SCARRY2(sVar9,(short)uVar24) == SCARRY2(sVar52,uVar29)) - (char)uVar26) + -1))
           - 1;
  bVar6 = bVar6 - (char)(uVar33 >> 8);
  if (uVar43 != uVar41) {
    uVar27 = uVar27 & 0xffff0000 | (uint)uVar21;
  }
  uVar24 = (uint)uVar33 * (uVar28 & 0xffff);
  uVar21 = (ushort)(uVar24 >> 0x10);
  uVar25 = CONCAT22(uVar40,uVar21);
  uVar12 = ~(ulong)(uVar38 & 0xffff0000 | uVar24 & 0xffff);
  uVar12 = (ulong)uVar41 & 0xff |
           (ulong)((uint7)(uVar12 >> 8) & 0xffffffffffff00 |
                  (uint7)(byte)((ushort)((ushort)(byte)uVar12 * (ushort)bVar32) >> 8)) << 8;
  uVar36 = ~(uVar27 & 0xffff0000 | (uint)(ushort)((ushort)uVar27 >> 0xf | (ushort)uVar27 << 1));
  uVar13 = (ulong)uVar36;
  uVar34 = (ulong)(uVar43 & 0xffffff00 | (uint)(byte)~(byte)uVar43) - 0x6ecb58e3 ^
           1 << (((ulong)uVar21 & 0x7e) >> 1);
  uVar37 = uVar13 ^ (ulong)(uVar12 == uVar13) * (ulong)(uVar36 ^ uVar25 >> 1);
  uVar38 = (uint)uVar37;
  uVar12 = uVar12 ^ (ulong)(uVar12 != uVar13) * (uVar12 ^ uVar37);
  uVar43 = (int)((uint)uVar26 & 0xffffff00 | (uint)(byte)((char)bVar6 >> 1)) >>
           ((char)bVar6 >> 1 & 0x1fU);
  uVar26 = (ulong)uVar25 & 0xffffffffffff7500 | uVar12 & 0xff;
  bVar32 = (byte)uVar43 & 0xf;
  uVar25 = ~((uint)uVar26 & 0xffff0000 |
            (uint)(ushort)((short)uVar26 << bVar32 |
                          ((ushort)((uVar48 & 0xffffffffffffff00 |
                                    (ulong)(byte)((byte)uVar48 + 0x1a)) << 1) >> (bVar6 & 0x1f) &
                          0xefff) >> 0x10 - bVar32));
  uVar43 = uVar43 >> 0x11 & 0xffff00ff;
  bVar8 = (byte)uVar43;
  uVar26 = CONCAT62((undefined6)((char)uVar28 >> 7),
                    ((short)(char)uVar28 | 0x4000U) ^ 1 << ((ushort)uVar34 & 0xf)) + 0x397c41c8;
  bVar32 = bVar8 & 0xf;
  uVar21 = (ushort)(CONCAT62((uint6)(uVar14 >> 0x11),sVar42) >> (bVar6 & 0x3f));
  uVar27 = (uint)uVar34;
  uVar36 = uVar25 + uVar27;
  uVar40 = (short)uVar43 - 1;
  uVar43 = ((uint)CONCAT71(0x711b02,!SCARRY1((char)uVar12,
                                             (char)(uVar24 >> 0x10) + (char)((uVar39 >> 5) << 1))) &
           0xffff) + 0x6b83909a;
  bVar6 = (byte)uVar40;
  iVar11 = ((uint)(ushort)((short)(uVar41 & 0xffffff00) >> 7) << (bVar8 & 0x3f)) + -0x6db0dc5;
  if (-1 < iVar11) {
    uVar26 = (ulong)(uVar28 & 0xffff0000 | (uint)(ushort)((short)uVar28 * -0x3e0d));
  }
  uVar29 = CONCAT11((char)(uVar36 >> 8) + (char)iVar11,
                    (byte)uVar36 >> 1 | CARRY4(uVar25,uVar27) << 7);
  uVar33 = (short)uVar43 -
           ((ushort)(uVar39 ^ 0xa848bf4a) & 0xff00 |
           (ushort)((byte)((char)((byte)(uVar39 ^ 0xa848bf4a) >> 1 | 0x80) >> 1) >> (bVar6 & 0x1f)))
  ;
  uVar43 = uVar43 & 0xffff0000;
  if (-1 < (short)uVar33) {
    uVar38 = uVar38 & 0xffff0000 | (uint)(ushort)(uVar21 << bVar32 | uVar21 >> 0x10 - bVar32);
  }
  uVar17 = uVar29 * -0x5496;
  uVar12 = (ulong)(uVar38 + 0x9e6788af & 0xffff0000 |
                  (uint)(ushort)((ushort)(uVar38 + 0x9e6788af) ^ 0xdd4a));
  uVar21 = (ushort)(byte)(bVar6 >> 3 | bVar6 << 5 | 0xc0);
  uVar10 = 0x1e5f / uVar21 & 0xff;
  uVar14 = (ulong)(ushort)(uVar10 | 0x1e5fU % uVar21 << 8);
  uVar13 = uVar14 | 0xfffffffff8400000;
  if ((POPCOUNT((uint)uVar26 & (uint)uVar13 & 0xff) & 1U) == 0) {
    uVar29 = uVar17;
  }
  bVar6 = bVar6 >> 3 | bVar6 << 5 & 0x3f;
  uVar37 = (ulong)((uVar36 & 0xffff0000 | (uint)uVar29) >> bVar6) | uVar13 << 0x40 - bVar6;
  iVar11 = (uint)uVar26 << 2;
  uVar21 = (ushort)iVar11;
  bVar6 = (byte)(uVar14 >> 8);
  bVar32 = (byte)(uVar12 & 0xffffffffffff4a3a);
  uVar14 = (ulong)CONCAT11(-(char)((uVar12 & 0xffffffffffff4a3a) >> 8),bVar32);
  uVar13 = uVar12 & 0xffffffffffff0000 | uVar14;
  uVar29 = 0;
  if ((POPCOUNT(uVar40 & 0xff) & 1U) == 0) {
    uVar29 = 0x14c1;
  }
  uVar35 = (ulong)((uint)uVar13 >> 0x11 | 0x9c800000);
  uVar40 = uVar21 >> 0xb | 0xa0;
  uVar34 = (ulong)(long)(short)uVar17 >> (bVar6 & 0x3f) |
           (long)(short)uVar17 << 0x40 - (bVar6 & 0x3f);
  uVar12 = (uVar12 & 0x4a3a) << (bVar6 & 0x3f) | uVar13 >> 0x40 - (bVar6 & 0x3f);
  bVar23 = (byte)(uVar14 >> 8);
  bVar8 = (byte)uVar10 | bVar23;
  uVar24 = (uint)((long)uVar26 >> (bVar6 & 0x3f)) & 0xffffff00;
  if (-1 < (char)bVar8) {
    uVar24 = (uVar41 & 0xffffff00) << 0xf | (uint)(ushort)(short)(char)bVar6;
  }
  uVar41 = uVar40 | 1 << (bVar32 & 0xf);
  bVar19 = (bVar6 + (char)uVar41 & 3) << 2 | (byte)(uVar12 >> 8) >> 6;
  uVar28 = uVar41 & 0xffffffdf | 0x928b0000;
  uVar10 = (bVar8 | 0x100) << bVar19 | (ushort)((int)uVar43 >> 0x15) >> 0x10 - bVar19;
  uVar41 = uVar10 << 1;
  uVar10 = uVar41 | (short)uVar10 < 0;
  bVar8 = (byte)((ushort)(uVar41 & 0xff | (ushort)(bVar23 < bVar32) << 8) >> 7) | (char)uVar10 << 2;
  uVar26 = (ulong)((uint)(ushort)((char)bVar6 >> 7) << 0x10 |
                  (uVar10 & 0xff00 | (uint)bVar8 |
                   (CONCAT11((byte)(bVar23 - bVar32) >> 1,bVar32) & 0x3fff) << 0x10 | 0xc000) /
                  (uint)(ushort)(uVar41 & 0xff00 | (ushort)bVar8 | 0xc000) & 0xffff);
  lVar30 = ((uVar26 ^ (ulong)(uVar26 != uVar35) *
                      (uVar26 ^ uVar35 ^ (ulong)(uVar26 == uVar35) * (uVar35 ^ uVar34))) &
           0xffffffff) * (ulong)uVar28;
  uVar41 = (ushort)(0xcc5 << bVar19 | 0xcc5U >> 0x10 - bVar19) >> 1;
  uVar13 = uVar34 & 0xffffffffffffff00 |
           (ulong)(byte)((byte)uVar34 + (char)((int)(uVar43 | uVar33) >> 0x15));
  uVar43 = (uint)(uint3)((ulong)lVar30 >> 0x28) << 8;
  uVar14 = (ulong)((int)lVar30 + 0x1858ab2a) << 1;
  uVar24 = (uVar24 >> 1 & 0xffffff00 | (uint)(byte)((char)uVar37 + 1) << 0x1f |
           (uint)(byte)(CONCAT11((uVar40 >> (bVar32 & 0xf) & 1) != 0,(char)(uVar24 >> 1)) >> 1)) +
           0x833ea67;
  uVar26 = CONCAT62((int6)(((ulong)(uint3)(uVar28 >> 8) << 8) >> 0x10),0x9436) << 3;
  uVar40 = uVar29 & ~(ushort)((uint)(1 << ((byte)((char)uVar41 + (char)((ulong)lVar30 >> 0x20)) &
                                          0x1f)) >> 0x10);
  if (SBORROW4((int)uVar13,-0x695efcfb)) {
    uVar40 = 0xee00;
  }
  uVar29 = (ushort)uVar24;
  auVar4 = ZEXT116(0) << 0x40 | ZEXT416(0xad806464);
  uVar49 = SUB167((auVar4 << 0x1e) >> 8,0) | SUB167((auVar4 >> 0x23) >> 8,0);
  uVar25 = ((uint)uVar37 & 0xffffff00 | (uint)(byte)((char)uVar12 + 0x21)) >> 1;
  uVar33 = (ushort)(uVar43 >> 2) >> 0xb | (uVar29 & 7) << 5;
  bVar6 = (byte)uVar14 & (byte)uVar34;
  uVar37 = uVar14 & 0xffffffffffffff00 | (ulong)bVar6;
  uVar28 = 0x1f;
  uVar36 = (uint)uVar37;
  if (uVar36 != 0) {
    for (; uVar36 >> uVar28 == 0; uVar28 = uVar28 - 1) {
    }
  }
  uVar35 = (ulong)uVar25 | 0xe814;
  bVar54 = -1 < (short)((ushort)uVar25 | 0xe814);
  uVar12 = uVar12 & 0xffffffffffff0000 | uVar12 >> 1 & 0x7fff;
  if (bVar54) {
    uVar12 = uVar37;
  }
  bVar32 = (byte)((uVar14 & 0xffffffffffffff00) >> 8) | (byte)uVar33;
  uVar14 = uVar14 & 0xffffffffffff0000 | (ulong)CONCAT11(bVar32,bVar6);
  uVar24 = uVar24 & 0xffff0000 | (uint)(ushort)((short)(uVar29 >> 0xd | uVar29 << 3) >> 0x10);
  bVar6 = (byte)(uVar28 & 0xffff00ff);
  uVar25 = CONCAT11((byte)(uVar26 >> 8) >> 1,(byte)uVar26) & 0xffffff00;
  bVar8 = (byte)uVar26 >> (bVar6 & 0x1f) ^ bVar6;
  uVar37 = CONCAT62((int6)(uVar49 >> 8),
                    (ushort)CONCAT71(uVar49,(char)bVar32 < '\0') >> (bVar6 & 0x1f));
  uVar29 = (short)(uVar28 & 0xffff00ff) + 1;
  uVar46 = uVar37 ^ (ulong)(uVar14 == uVar37) *
                    (uVar37 ^ ((ulong)(CONCAT31((uint3)((uint)iVar11 >> 8) & 0xffff00 |
                                                (uint3)(byte)((ushort)(uVar21 << 1) >> 8),bVar54) >>
                                      1) | (ulong)bVar54 << 0x3f));
  uVar14 = uVar14 ^ (ulong)(uVar14 != uVar37) * (uVar14 ^ uVar46);
  bVar32 = (byte)uVar29;
  bVar6 = bVar32 & 0x1f;
  uVar36 = (uint)uVar46;
  uVar36 = uVar36 << bVar6 | uVar36 >> 0x20 - bVar6;
  bVar6 = (byte)(uVar25 >> 8);
  lVar30 = 0;
  if (uVar35 != 0) {
    for (; (uVar35 >> lVar30 & 1) == 0; lVar30 = lVar30 + 1) {
    }
  }
  if (uVar35 == 0) {
    uVar12 = uVar13 << 0x15 | uVar34 >> 0x2b;
  }
  bVar32 = bVar32 << 1;
  uVar39 = uVar28 & 0xffff0000 | uVar29 & 0xffffff00 | 0x400000 | (uint)bVar32;
  uVar38 = (int)lVar30 + uVar39;
  uVar28 = uVar24 * 9 + 0x1a;
  uVar36 = (uVar36 & 0xff00) << 8 | uVar36 << 0x18;
  uVar27 = (int)(char)uVar35 - 1;
  uVar28 = (uint)CONCAT62((int6)(uint6)(ushort)(uVar28 >> 0x10) >> 1,
                          (short)((long)(ulong)uVar28 >> 1) << (bVar32 & 0x1f));
  uVar44 = uVar28 >> (bVar32 & 0x1f) | uVar28 << 0x20 - (bVar32 & 0x1f);
  uVar12 = uVar12 & SUB168(ZEXT816(uVar14 & 0xffffffffffff0000 |
                                   (ulong)(ushort)((ushort)(byte)uVar14 * (ushort)bVar6)) *
                           ZEXT416((uint)uVar33 << 0x17 |
                                   ((uVar43 & 0xfffc0000) >> 2 | (uint)uVar41 << 0x1e) >> 9) >> 0x40
                           ,0);
  bVar23 = (byte)uVar12;
  uVar53 = uVar36 >> (bVar32 & 0x1f) | uVar36 << 0x20 - (bVar32 & 0x1f);
  uVar43 = (uVar27 >> (bVar32 & 0x3f) | uVar27 << 0x40 - (bVar32 & 0x3f)) + 0x98030a3e + uVar53 * 8;
  uVar28 = uVar38 & 0xffff0000;
  uVar36 = uVar38 >> 0xf & 1;
  uVar14 = (ulong)(uVar28 | uVar36);
  uVar13 = (long)(int)(((uint)(uVar26 & 0xffffffffffff0000) | uVar25 | (uint)bVar8) * -0x345f254d) *
           (long)(int)uVar39;
  uVar25 = uVar53 & 0xa62c4f49;
  uVar37 = uVar13 & 0xffffffff;
  if ((int)uVar25 < 0) {
    uVar37 = uVar14;
  }
  uVar46 = uVar26 & 0xffffffffffff0000 | (ulong)CONCAT11(uVar25 != 0,bVar8);
  uVar14 = uVar24 + uVar14;
  sVar52 = (short)uVar43 + (ushort)bVar6;
  bVar8 = (byte)(uVar13 >> 0x20);
  uVar26 = uVar13 >> 0x20 & 0xffff0000;
  bVar32 = bVar8 << (bVar32 & 7) | bVar8 >> 8 - (bVar32 & 7);
  uVar41 = (ushort)uVar37 >> 1;
  uVar21 = uVar41 | (ushort)((uVar37 & 1) != 0) << 0xf;
  uVar34 = (ulong)CONCAT11((char)((char)(uVar13 >> 0x28) << 1 | 1U) >> 0x15,bVar32);
  uVar35 = uVar26 | uVar34;
  uVar13 = (ulong)uVar39 & 0xffffffffffffff0f;
  sVar16 = (sbyte)uVar13;
  uVar24 = (uint)(ushort)((short)uVar25 - 1);
  if (SBORROW8(uVar35,0x4fd5d62c)) {
    uVar13 = uVar14 & 0xffffffff;
  }
  if (0x4fd5d62b < uVar35) {
    uVar24 = uVar44 & 0xffff | 1;
  }
  uVar24 = uVar53 & 0xa62c0000 | uVar24;
  uVar25 = (int)uVar46 + ((uint)(uVar37 & 0xffffffffffff0000) | (uint)uVar21) * 8;
  bVar19 = (char)(byte)uVar13 >> ((byte)uVar13 & 0x1f);
  uVar33 = (ushort)uVar13 & 0xff00 | (ushort)bVar19;
  uVar46 = uVar46 - 0x7d39fdf7;
  uVar38 = uVar44 & 0xffffff00 | (uint)((uVar24 >> ((ulong)uVar25 & 0x3f) & 1) != 0);
  bVar8 = (byte)uVar41;
  bVar20 = bVar32 ^ (bVar8 == bVar32) * (bVar32 ^ (byte)sVar52);
  bVar8 = bVar8 ^ (bVar8 != bVar32) * (bVar8 ^ bVar20);
  uVar35 = uVar37 & 0xffffffffffff0000 | (ulong)uVar21 & 0xffffffffffffff00;
  bVar51 = (byte)uVar25;
  bVar50 = bVar51 ^ (bVar8 == bVar51) * (bVar51 ^ bVar6);
  uVar48 = uVar46 & 0xffffffffffff0000;
  uVar5 = (undefined)uVar46;
  uVar37 = uVar35 >> 0xb;
  uVar21 = uVar33 << (bVar19 & 0xf) | uVar33 >> 0x10 - (bVar19 & 0xf);
  uVar24 = (uVar24 | (uint)(1 << ((ulong)uVar25 & 0x3f))) - 1;
  bVar32 = (byte)uVar21;
  uVar41 = 0xf;
  uVar33 = (ushort)uVar24;
  if (uVar33 != 0) {
    for (; uVar33 >> uVar41 == 0; uVar41 = uVar41 - 1) {
    }
  }
  uVar46 = ~(ulong)(((uVar28 | (ushort)((ushort)uVar36 >> sVar16 | (short)uVar14 << 0x10 - sVar16) |
                     0x2eb497c2) & 0x1fffe) << 0xf | (uint)uVar41);
  cVar15 = (char)(uVar34 >> 8);
  uVar14 = (ulong)CONCAT11(cVar15,uVar5);
  uVar34 = 0;
  if (-1 < (long)(uVar46 & (uVar48 | uVar14))) {
    uVar34 = (ulong)bVar6;
  }
  uVar41 = CONCAT11(cVar15 + (char)((ulong)uVar21 >> 8),bVar20 - (char)uVar37) >> (bVar32 & 0x1f);
  uVar18 = uVar13 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar38 << 0xf);
  return (uVar37 | (uVar35 | (byte)(bVar8 ^ (bVar8 != bVar51) * (bVar8 ^ bVar50))) << 0x35) +
         (uVar48 | CONCAT11((char)(uVar14 >> 8) + (char)(uVar41 >> 8),uVar5)) + uVar18 +
         (uVar26 | uVar41) + (uVar13 >> 8 & 0xff) +
         (ulong)((uint)((ushort)((ushort)uVar34 << (bVar32 & 0xf) |
                                (ushort)uVar34 >> 0x10 - (bVar32 & 0xf)) >> 1) | (uint)uVar18) +
         (ulong)bVar6 + (ulong)uVar38 + (ulong)(byte)((uVar40 >> 8) << 1) + uVar46 +
         (ulong)(ushort)(sVar52 >> (bVar19 & 0x1f)) +
         (ulong)(uVar43 & 0xffff0000 | (uint)(ushort)(sVar52 * 2)) + (ulong)uVar24 +
         (ulong)((uVar25 & 0xffffff00 | (uint)bVar50) >> (bVar32 & 0x3f)) +
         (uVar12 & 0xffffffffffffff00 | (ulong)(byte)(bVar23 << 6 | bVar23 >> 2)) + -0x6345b3981;
}


/*
Unable to decompile 'log_size_10_var_007'
Cause: Exception while decompiling 00407dfa: process: timeout

*/

/*
Unable to decompile 'log_size_10_var_008'
Cause: Exception while decompiling 00408d62: process: timeout

*/


// WARNING: Removing unreachable block (ram,0x00409e50)
// WARNING: Removing unreachable block (ram,0x00409dcc)
// WARNING: Removing unreachable block (ram,0x00409de7)
// WARNING: Removing unreachable block (ram,0x00409f83)
// WARNING: Removing unreachable block (ram,0x0040a3c5)
// WARNING: Removing unreachable block (ram,0x0040a4fb)
// WARNING: Removing unreachable block (ram,0x0040aab4)

long log_size_10_var_009(void)

{
  short sVar1;
  long lVar2;
  undefined auVar3 [16];
  char cVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  sbyte sVar8;
  byte bVar9;
  short sVar10;
  byte bVar12;
  ulong uVar11;
  byte bVar13;
  ushort uVar14;
  uint uVar15;
  byte bVar18;
  uint uVar16;
  ulong uVar17;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  byte bVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ulong uVar29;
  uint7 uVar31;
  ulong uVar30;
  byte bVar32;
  int iVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  undefined8 uVar38;
  ushort uVar39;
  byte bVar40;
  uint uVar41;
  ulong uVar42;
  ushort uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  ushort uVar47;
  ulong uVar48;
  ushort uVar49;
  uint uVar51;
  ushort uVar52;
  uint uVar53;
  ulong uVar54;
  long lVar55;
  byte bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  ushort uVar50;
  
  for (sVar10 = 0; (0x1989U >> sVar10 & 1) == 0; sVar10 = sVar10 + 1) {
  }
  uVar17 = CONCAT62(0x5d0feb477bfc,sVar10) ^ 0xde5d376bdad4b765;
  for (uVar37 = 0; (0x9978202aU >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
  }
  uVar21 = 0x60e8c1e1;
  bVar56 = (byte)uVar17;
  uVar44 = (uint)(byte)((char)uVar37 - 0xd);
  uVar41 = uVar37 & 0xffffff00 | uVar44;
  uVar17 = (uVar17 & 0xffffffffffff0000 |
            (ulong)CONCAT11((char)(uVar17 >> 8) + 'V',bVar56) & 0xffffffffffffff00 |
           (ulong)(byte)(bVar56 + 0x16)) & 0x53e0289d;
  if (uVar17 == 0) {
    uVar21 = 0x60e81097;
  }
  uVar26 = 0x710b - (0xbdcc636d9978000a <
                    ((ulong)(ushort)((ushort)(CONCAT12(0xe9 < bVar56,0xf1b) >> 0xb) | 0xc6c0) |
                    0x80161aed310b0000));
  lVar24 = 0x3f;
  if (uVar41 != 0) {
    for (; uVar41 >> lVar24 == 0; lVar24 = lVar24 + -1) {
    }
  }
  uVar34 = uVar21 >> 9;
  auVar3 = (ZEXT116(uVar41 < 0x133b0b8a) << 0x40 | ZEXT816(0xde5d376bdad4b765)) >> 0xb;
  cVar4 = ((byte)(((uint)(ushort)uVar17 << 0x10 | (1 << (uVar26 & 0x1f) ^ 1U) & 0xffff) / 0xdc1a) ^
          (byte)(1 << (uVar44 & 0x1f))) * (char)uVar34;
  uVar43 = (bVar56 | 0xd200) ^ SUB162(auVar3,0);
  sVar10 = (short)(char)(cVar4 * cVar4) + (short)(uVar41 + 0xecc4f476);
  uVar14 = sVar10 >> 0xf | 0xab00;
  uVar17 = (ulong)(uVar41 + 0xecc4f476 & 0xffff0000 | 0x98fb);
  uVar41 = (uVar37 & 0xffff0000 | (uint)SUB161(auVar3,0)) * 0x800 + 0x6a42a24d;
  uVar48 = uVar17 << 0xd;
  uVar37 = ((ushort)((short)(uVar26 & 0xff00 |
                            (ushort)(byte)((byte)((ushort)(uVar26 & 0xff |
                                                          (ushort)((byte)sVar10 < 0x73) << 8) >> 2)
                                          | (char)uVar26 << 7)) >> 0x13) | 0xaa8f0000) >> 0xb;
  uVar26 = ((ushort)uVar34 >> 0xd | uVar43 << 3) + 0xb93e +
           (ushort)(0xecc9 < uVar14 || 0xfffe < (ushort)(uVar14 + 0x1336));
  lVar55 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar48 >> lVar55 == 0; lVar55 = lVar55 + -1) {
    }
  }
  uVar14 = uVar14 + 0x1337 | 0x38fa;
  sVar10 = 0xf;
  if (uVar14 != 0) {
    for (; uVar14 >> sVar10 == 0; sVar10 = sVar10 + -1) {
    }
  }
  bVar56 = (byte)uVar37;
  uVar28 = (byte)(-bVar56 - 5) | 0xb600;
  uVar47 = (ushort)uVar48 >> (bVar56 & 0xf) | (ushort)uVar48 << 0x10 - (bVar56 & 0xf);
  uVar30 = uVar48 & 0xffffffffffff0000 | (ulong)uVar47 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar47 + (char)sVar10);
  uVar44 = (int)uVar48 << 0x10 | (uint)(ushort)(uVar28 << 1 | 1);
  uVar15 = ((ushort)(1 << (uVar43 & 0xf) | 0x4000) | 0xa92b0000) + 1 & uVar44;
  iVar23 = (uint)(ushort)(bVar56 | 0x9800) * 0x98fe;
  uVar48 = (ulong)((uVar37 | 0xf9a00000) >> 9) & ~(1 << ((ulong)(uVar43 ^ 0x4000) & 0x3f));
  uVar22 = (((uint)lVar24 & 0x7fff0000) << 1 | 0xc524) - uVar41 | 0x8354477b;
  sVar10 = (short)uVar30;
  uVar34 = (ulong)((uint)(uVar21 << 0x18) | (uint)uVar34 & 0xffff0000 |
                  (uint)(ushort)((ushort)(uVar26 & 0xff00 | (ushort)(byte)~(byte)uVar26) >> 1 |
                                0x8000)) - (ulong)uVar41;
  uVar52 = (short)uVar22 + -0x504a + (ushort)(uVar48 >> 0x16 != 0);
  uVar39 = (ushort)(sVar10 << 0xf | 0x4c7fU) >> 1 | 0x8000;
  uVar37 = uVar41 + (uVar39 | 0x39cf0000);
  uVar17 = (ulong)uVar44 << 1;
  bVar5 = -(byte)uVar48;
  uVar53 = 0;
  bVar56 = (byte)uVar48 & 0xf;
  uVar44 = (uint)(ushort)(uVar39 << bVar56 | uVar39 >> 0x10 - bVar56);
  uVar51 = (uint)(ushort)(((uVar43 ^ 0x4000) >> 5 | uVar52 * 0x800) + 0xea9);
  uVar36 = uVar15 & 0xffff0000;
  uVar43 = (short)((ushort)uVar48 ^ 0x1000) >> 1;
  uVar27 = (ushort)uVar37;
  bVar56 = (byte)uVar34 & 1;
  uVar21 = (ulong)(byte)((byte)uVar34 >> 1 | bVar56 << 7);
  uVar50 = (ushort)uVar17;
  uVar26 = uVar50 + 0xda0;
  uVar49 = uVar26 - bVar56;
  uVar17 = uVar17 & 0xffffffffffff0000;
  uVar14 = 0xf;
  if (uVar52 != 0) {
    for (; uVar52 >> uVar14 == 0; uVar14 = uVar14 - 1) {
    }
  }
  uVar45 = uVar22 & 0xffff0000 | (uint)uVar14;
  uVar19 = 0x1f;
  if (uVar45 != 0) {
    for (; uVar45 >> uVar19 == 0; uVar19 = uVar19 - 1) {
    }
  }
  uVar14 = (short)(char)uVar15 | (uVar47 & 0xff) * 2 - 0x38d;
  lVar24 = (ulong)(uVar44 | 0x39cf0000) + (ulong)(uVar36 | uVar14) * 8;
  uVar54 = (ulong)(uVar44 << 0x1a);
  bVar12 = (byte)((ulong)uVar43 >> 8);
  bVar6 = (byte)((ulong)(ushort)((uint)iVar23 >> 0x10) - 0x481cfa8a >> 8);
  bVar9 = (byte)uVar43;
  uVar44 = (int)uVar51 >> (bVar9 & 0x1f);
  uVar29 = -(ulong)uVar19;
  uVar48 = ((ulong)(ushort)((ushort)iVar23 & 0xff |
                           (ushort)(uVar37 == 0 ||
                                   (SCARRY4(uVar41,uVar39 | 0x39cf0000) != SCARRY4(uVar37,0)) !=
                                   (int)uVar37 < 0) << 8) | 0x39cf0000) *
           (uVar34 & 0xffffff00 | uVar21);
  bVar25 = (byte)(uVar48 >> 0x20);
  lVar55 = uVar54 - 0x39679c89;
  uVar43 = (short)lVar55 - 1;
  bVar9 = bVar9 & 7;
  uVar7 = uVar48 & 0xffff0000 | (ulong)(ushort)((short)uVar48 - uVar27);
  if ((short)uVar48 < (short)uVar27) {
    uVar7 = uVar17 | uVar49;
  }
  uVar47 = (ushort)lVar24;
  uVar39 = uVar47 & 0xf;
  uVar52 = uVar43 & ~(1 << uVar39);
  uVar42 = ((ulong)uVar37 - lVar24) - (ulong)((uVar43 >> uVar39 & 1) != 0);
  sVar1 = SCARRY1(bVar12,bVar6) + uVar52;
  uVar43 = sVar1 + 1;
  uVar37 = ((uint)uVar30 & 0xffff0000 |
           (uint)(ushort)(sVar10 + (ushort)bVar5 + (ushort)((bVar5 >> (uVar27 & 0xf) & 1) != 0))) +
           (uVar51 | 0x86bc0000) + (uint)(uVar50 < 0xf260 || uVar26 < bVar56);
  if (uVar43 == 0 ||
      (SCARRY2((ushort)SCARRY1(bVar12,bVar6),uVar52) != SCARRY2(sVar1,1)) != (short)uVar43 < 0) {
    uVar37 = uVar44;
  }
  uVar47 = uVar47 & 0x9dea;
  lVar24 = (uVar34 & 0xffffffffffffff00 | uVar21) << 1;
  uVar34 = ((uVar7 >> 1 | (ulong)uVar44 << 0x3f) - uVar42) - 1;
  uVar21 = 0;
  if ((long)(short)uVar47 != 0) {
    for (; ((ulong)(long)(short)uVar47 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
    }
  }
  uVar41 = uVar36 | (uint)(!CARRY1(bVar12,bVar6) && (byte)(bVar12 + bVar6) != '\0') << 8 |
           (uint)(byte)((char)uVar14 - (char)uVar37);
  uVar44 = (int)(char)uVar37 >> ((byte)uVar21 & 1);
  sVar10 = (short)uVar44;
  uVar26 = -sVar10;
  if (sVar10 != 0 || uVar26 == 0) {
    uVar37 = uVar41;
  }
  uVar30 = (ulong)uVar41;
  if ((POPCOUNT(uVar26 & 0xff) & 1U) == 0) {
    uVar30 = uVar42;
  }
  iVar23 = (int)(uVar22 << 0x1c) >> 2;
  bVar12 = ((byte)(uVar21 >> 8) & 0x89) - (char)uVar30;
  bVar5 = (byte)uVar34 | bVar12;
  bVar6 = (byte)(lVar24 >> 1);
  lVar24 = CONCAT71((int7)(lVar24 >> 9),bVar6 + 0x87);
  bVar56 = (byte)uVar42 & 0x1f;
  uVar48 = (ulong)(0x79 < bVar6 || 0xfe < (byte)(bVar6 + 0x86)) << 0x20 |
           uVar48 >> 0x20 & 0xffffff00 | (ulong)(byte)(bVar25 << bVar9 | bVar25 >> 8 - bVar9);
  uVar15 = (uint)(uVar48 >> bVar56) | (uint)(uVar48 << 0x21 - bVar56);
  uVar14 = (ushort)uVar15 ^ 1 << (bVar5 & 0xf);
  uVar36 = (uint)uVar42 & 0xffffff00 | (uint)uVar21 & 0xa0;
  uVar35 = lVar24 << 0x2d | (ulong)(CONCAT18((uVar14 & 1) != 0,lVar24) >> 0x14);
  uVar41 = (int)uVar30 - 1;
  bVar57 = (uVar43 & 1) != 0;
  bVar12 = bVar12 - 1;
  uVar30 = uVar34 & 0xffffffffffffff00 | (ulong)bVar12;
  bVar60 = bVar57 || bVar12 == 0;
  uVar48 = uVar35 ^ (ulong)(uVar30 == uVar35) * (uVar35 ^ uVar37 + (int)(short)uVar47);
  uVar7 = uVar30 ^ (ulong)(uVar30 != uVar35) * (uVar30 ^ uVar48);
  uVar37 = uVar37 + (int)(short)uVar47 & 0xffffff00 | (uint)(uVar35 < uVar30);
  uVar34 = (ulong)uVar37;
  uVar39 = uVar26 & 0xff00 | (ushort)(byte)((char)uVar26 << 1 | (char)uVar26 < '\0');
  uVar26 = CONCAT11(bVar5 >> 1 | ((int)uVar36 < 0) << 7,bVar60);
  uVar11 = uVar21 & 0xffffffffffff0000 | (ulong)uVar26;
  bVar56 = (byte)(uVar41 >> 8);
  uVar41 = uVar41 & 0xffff0000 |
           (uint)CONCAT11(bVar56 >> bVar60 | bVar56 << 8 - bVar60,(char)uVar41);
  uVar21 = (ulong)(iVar23 != 0);
  lVar24 = (ulong)uVar41 + 0x10f9bbf1;
  uVar20 = lVar24 + uVar21;
  if (SCARRY8((ulong)uVar41,0x10f9bbf1) != SCARRY8(lVar24,uVar21)) {
    uVar48 = uVar20;
  }
  bVar56 = (byte)(uVar7 >> 8) | 0xd2;
  uVar51 = (uint)(uVar42 * 2) & 0xffff0000 | (uint)(ushort)((ushort)(uVar42 * 2) >> 1);
  bVar5 = (byte)(uVar20 >> 8);
  bVar58 = bVar56 < bVar5;
  cVar4 = bVar56 - bVar5;
  uVar21 = uVar7 & 0xffffffffffff0000 | (ulong)CONCAT11(cVar4,(char)uVar7);
  uVar17 = uVar17 | (ulong)uVar49 & 0xffffffffffffff00 | (ulong)bVar58;
  if (bVar58 || cVar4 == '\0') {
    uVar53 = uVar49 & 0xff00;
  }
  uVar53 = ((uint)(CONCAT14((short)uVar28 < 0,0x3ef) >> 0x1d) | 0x3ef0) << 0xd | uVar53;
  if (bVar58) {
    uVar53 = (uint)uVar17;
  }
  uVar7 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> uVar7 == 0; uVar7 = uVar7 - 1) {
    }
  }
  uVar22 = SEXT14(uVar35 < uVar30);
  bVar56 = (byte)((uint)uVar14 >> 8) & ((byte)(uVar51 << 1) | (int)uVar51 < 0) << 3;
  uVar27 = (ushort)uVar17 & 0xf;
  uVar42 = (ulong)(uVar44 & 0xffff0000 | (uint)(ushort)(uVar39 | 1 << uVar27));
  uVar30 = uVar48;
  if ((uVar39 >> uVar27 & 1) == 0 && bVar56 != 0) {
    uVar30 = uVar17;
  }
  bVar59 = (uVar29 & 2) != 0;
  uVar48 = (ulong)(uVar26 & ~(1 << ((ushort)uVar48 & 0xf)));
  if (!bVar59) {
    uVar48 = uVar42;
  }
  uVar11 = uVar34;
  if ((uint)uVar21 == uVar37) {
    uVar34 = uVar21;
    uVar11 = (ulong)uVar22;
  }
  uVar44 = (uint)(uVar7 >> 0x1b) & 0x1f ^ 0xa22de8ad;
  uVar22 = uVar22 & uVar44;
  uVar42 = uVar42 - 0x77ef848a;
  iVar33 = (int)(short)uVar34 * (int)(short)(uVar14 & 0xff | (ushort)(byte)(bVar56 - 1) << 8);
  uVar26 = (ushort)iVar33;
  uVar34 = uVar42 & 0x71b67a1b;
  bVar56 = (byte)uVar48;
  bVar5 = (byte)(uVar53 >> 0xb);
  uVar37 = uVar53 >> 0xb & 0xffffff00 | (int)uVar11 << 0x15 |
           (uint)(byte)(bVar5 >> (bVar56 & 7) | bVar5 << 8 - (bVar56 & 7));
  uVar14 = (short)uVar37 + 0xb4 + uVar26 * 2;
  uVar44 = uVar44 & 0xffffff00 |
           (uint)(byte)((char)uVar44 << 1 | (byte)((uint)iVar33 >> 0x10) < bVar58);
  uVar21 = (ulong)uVar37 * -0x68181f7a;
  if (SEXT816((long)uVar21) == SEXT816((long)(ulong)uVar37) * SEXT416(-0x68181f7a)) {
    uVar21 = uVar21 & 0xffffffffffff0000 | (ulong)(ushort)uVar44;
  }
  uVar51 = (uint)uVar14 << (bVar56 & 0x3f);
  uVar7 = ((uVar29 & 0xffffffffffff0000 |
           (ulong)(ushort)(CONCAT12(uVar54 < 0x39679c89 || lVar55 == 0,(short)uVar29) >> 1)) >> 1 |
          (ulong)bVar59 << 0x3f) + 1;
  uVar43 = (ushort)((uVar43 ^ 1) + uVar47 + (ushort)bVar57 + 1) >> 1;
  uVar53 = ((uVar43 | 0x8000) & 0xffffff00 | (uint)(byte)((char)uVar43 * '\x02' + 1)) >>
           (bVar56 & 0x1f) | (uVar51 | uVar14 >> 0x40 - (bVar56 & 0x3f)) << 0x20 - (bVar56 & 0x1f);
  sVar8 = (sbyte)(uVar48 & 0xffffffffffffff0f);
  uVar21 = uVar21 & 0xffff0000 |
           (ulong)(ushort)((short)uVar21 << sVar8 | (ushort)uVar34 >> 0x10 - sVar8);
  uVar19 = (uint)(uVar21 >> sVar8) | (uint)(uVar21 << 0x21 - sVar8);
  uVar43 = (ushort)(uVar48 & 0xffffffffffffff0f) | 0x36f2;
  uVar14 = uVar26 & 0xff | ((byte)((byte)((ulong)uVar26 >> 8) >> 1) & 0x3f) << 8;
  uVar26 = (ushort)(byte)((char)((uint)iVar33 >> 0x18) << 1 | iVar33 < 0 | 0xc0);
  uVar38 = CONCAT71((uint7)(uint3)(((uVar36 * 2 + 0x49fb5c51 >> bVar60 | uVar41 << 0x20 - bVar60) >>
                                    1 | uVar22) - (int)uVar34 >> 8),0x33);
  bVar5 = (byte)(uVar7 >> 0x38);
  uVar21 = (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
           (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8;
  uVar37 = (int)(short)(uVar14 / uVar26 & 0xff | uVar14 % uVar26 << 8) * (int)(short)uVar53;
  uVar41 = (int)uVar38 << 1;
  uVar15 = uVar15 & 0xffff0000 | uVar37 >> 0x10;
  if ((uVar19 & 1) != 0) {
    uVar15 = uVar41;
  }
  lVar24 = uVar11 - uVar41;
  uVar41 = (-iVar23 | (uint)(ushort)((short)uVar22 * 0x4313)) + 0x651806d1;
  uVar34 = 1 << ((ulong)uVar43 & 0x3f);
  bVar9 = (byte)((ulong)uVar43 >> 8);
  if (((char)((byte)uVar37 | (byte)(uVar51 >> 0x18) | (byte)((uVar7 & 0xff00000000) >> 0x20)) >> 7 &
      0x88U) != 0) {
    uVar53 = uVar15;
  }
  uVar14 = (ushort)uVar38;
  sVar10 = (short)uVar41;
  uVar37 = uVar41 & 0xffff0000 | (uint)(ushort)(sVar10 << 1);
  uVar26 = 0;
  if (uVar14 != 0) {
    for (; (uVar14 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
    }
  }
  uVar29 = (ulong)uVar44 << 0x28 | (ulong)uVar26;
  uVar54 = ((ulong)(uVar53 & 0xffffff00 | (uint)(byte)((byte)uVar53 + (byte)uVar15)) -
           (ulong)(((uint)uVar17 << 1 | (uint)uVar7 >> 0x1f) ^ 0x800000)) -
           (ulong)CARRY1((byte)uVar53,(byte)uVar15);
  uVar7 = lVar24 << (bVar9 & 0x3f) | (ulong)(CONCAT18(sVar10 < 0,lVar24) >> 0x41 - (bVar9 & 0x3f));
  uVar15 = ((uint)uVar30 & 0xff00 | (uint)((POPCOUNT((char)uVar11 - bVar56) & 1U) != 0) |
            (int)(uVar30 >> 0x10) << 0x10 | 0x13c8) - 1;
  uVar44 = ((int)(char)bVar9 ^ 0xa560fc4U) & 0xffff0000 |
           (uint)(ushort)((ushort)(byte)((int)(char)bVar9 ^ 0xa560fc4U) * (ushort)(byte)uVar7);
  sVar10 = CONCAT11((char)uVar43,bVar9) + -0x46b2;
  uVar17 = uVar54 & 0xffffffffffffff00;
  auVar3 = SEXT816((long)(int)uVar44) * SEXT816((long)uVar17);
  uVar36 = (uint)((uVar42 & 0x71060802) << 1) | 0x1236cd7b;
  bVar9 = (byte)(uVar37 >> 1);
  uVar31 = (uint7)(uVar21 >> 9);
  bVar25 = (char)((uVar21 | (byte)(bVar5 << 7 | bVar5 >> 1)) >> 1) + bVar9 + 1;
  uVar30 = CONCAT71(uVar31,bVar25);
  uVar41 = uVar36 >> 1;
  uVar48 = (ulong)CONCAT31((uint3)(uVar37 >> 9),bVar9 + bVar25);
  bVar56 = ((byte)sVar10 & 0x1f) % 0x11;
  uVar14 = (ushort)(CONCAT12((ushort)uVar17 < 0xfbbb,sVar10) >> bVar56) | sVar10 << 0x11 - bVar56;
  bVar56 = ((byte)uVar14 & 0x1f) % 0x11;
  uVar43 = (ushort)uVar15;
  iVar23 = (int)uVar30 + 0x20;
  bVar5 = (byte)iVar23 & 0x3f;
  uVar21 = uVar29 << bVar5 | uVar29 >> 0x40 - bVar5;
  if ((char)uVar21 == (char)(uVar41 | 1)) {
    uVar21 = uVar30;
  }
  sVar10 = (short)iVar23 * 2;
  uVar39 = sVar10 + 0x1b9b + (ushort)(byte)-((uVar14 >> ((ushort)uVar7 & 0xf) & 1) != 0) * 2;
  uVar37 = ((uVar44 * (int)uVar17 * 2 & 0xffff0000 ^ 1 << (uVar26 & 0x1f)) & 0xffff0000) >> 1 &
           0xffff00ff | (uVar19 >> 1 | (uint)uVar34) << 0x1f;
  bVar5 = (byte)sVar10;
  uVar29 = uVar54 & 0xffffffffffff0000 | (ulong)(ushort)(short)(char)bVar5;
  uVar30 = (ulong)uVar37;
  uVar17 = uVar48 + uVar29;
  uVar44 = (uint)CARRY8(uVar48,uVar29);
  uVar27 = (ushort)uVar17;
  uVar47 = uVar27 + 0x634f;
  uVar17 = uVar17 & 0xffffffffffff0000;
  uVar7 = uVar17 | uVar47;
  sVar10 = (short)(uVar36 >> 0xc);
  uVar48 = (ulong)((uVar41 | 1) << 0x15 | (uVar41 & 0xf8000000) >> 0xb |
                  (uint)(ushort)(sVar10 << 3 | (ushort)(CONCAT12(0x9cb0 < uVar27,sVar10) >> 0xe)));
  iVar33 = (uVar15 & 0xffff0000 | (uint)(ushort)(uVar43 >> bVar56 | uVar43 << 0x11 - bVar56)) <<
           (bVar5 & 0x1f);
  lVar24 = (ulong)(uVar30 != uVar48) *
           (uVar30 ^ uVar48 ^ (ulong)(uVar30 == uVar48) * (uVar48 ^ uVar7));
  uVar43 = (short)CONCAT71(uVar31,bVar25 >> 3 | bVar25 * ' ') + 0x4f2;
  sVar10 = ((ushort)uVar21 & 0xff00 | (ushort)(byte)((char)uVar21 << 1)) + uVar43 * 8;
  uVar21 = (ulong)(byte)sVar10;
  uVar48 = CONCAT62((int6)(uint6)(ushort)((uint)iVar23 >> 0x10) >> 0xe,sVar10) & 0xffffffffffffff00
           | uVar21 | 0xc0;
  uVar26 = CONCAT11((byte)((ulong)lVar24 >> 8) >> 1,(char)lVar24) & 0x3fff;
  bVar5 = (byte)uVar48;
  uVar37 = ((uVar37 ^ (uint)lVar24) & 0xffff0000 |
           (uint)(ushort)(uVar26 / bVar5 & 0xff | uVar26 % (ushort)bVar5 << 8)) * iVar33;
  uVar14 = (ushort)uVar37;
  bVar12 = (byte)uVar47;
  lVar55 = CONCAT71(0x5561a5ad9addba,bVar12 + 0x7d);
  uVar26 = (uVar14 ^ (ushort)(uVar14 != uVar43) *
                     (uVar14 ^ uVar43 ^ (ushort)(uVar14 == uVar43) *
                                        (uVar43 ^ (ushort)(iVar33 * -0x59f077a3)))) + 0xc351;
  bVar56 = (byte)((ulong)uVar26 >> 8);
  uVar44 = ((uint)uVar29 >> 1 | uVar44 << 0x1f) >> 1 | (uint)(uVar14 < uVar43) << 0x1f | 1 << uVar44
  ;
  lVar24 = 0x3f;
  if (uVar48 != 0) {
    for (; uVar48 >> lVar24 == 0; lVar24 = lVar24 + -1) {
    }
  }
  uVar14 = -(short)lVar24;
  uVar15 = ((short)lVar24 != 0) + 0x6d0a8dd6;
  uVar43 = (ushort)uVar15 ^ uVar14;
  bVar6 = (byte)uVar26;
  bVar13 = (byte)iVar33;
  bVar32 = bVar13 + 0xb1;
  uVar26 = 0xf;
  if (uVar43 != 0) {
    for (; uVar43 >> uVar26 == 0; uVar26 = uVar26 - 1) {
    }
  }
  uVar53 = (uVar37 & 0xffff0000 | (uint)uVar26) *
           (((uint)uVar7 & 0xffff0000 |
            (uint)(ushort)(uVar47 & 0xff |
                          (ushort)(byte)((char)((ulong)uVar47 >> 8) + bVar12 +
                                        (0x4f < bVar13 || 0xfe < (byte)(bVar13 + 0xb0))) << 8)) &
           0x25db68e4);
  uVar22 = (((uint)lVar24 & 0xffff0000 | (uint)uVar14) - (int)lVar55) - 1;
  uVar51 = (uint)CONCAT11(bVar6 ^ (bVar6 != bVar56) *
                                  (bVar6 ^ bVar56 ^ (bVar6 == bVar56) * (bVar56 ^ bVar5)),
                          (char)uVar39 << 7 |
                          (byte)((ushort)(uVar39 & 0xff | (ushort)(0x82 < bVar12) << 8) >> 2)) <<
           0x13;
  uVar37 = iVar33 + (((int)CONCAT71(SUB167(auVar3 >> 0x48,0),
                                    (SUB161(auVar3 >> 0x40,0) - (char)uVar41) - CARRY1(bVar9,bVar25)
                                   ) + 0x1e418814U >> 0x11) * 0x10000 + -1) * 2 + 0x81;
  uVar14 = (ushort)(uVar22 >> 2) & 0x3fff;
  uVar39 = (short)uVar14 >> 1;
  bVar60 = (uVar37 & 1) != 0;
  uVar19 = (((uVar15 & 0xffff0000 | (uint)uVar43) & 0xe143825a) + 0xf4546485) - (uint)bVar60;
  uVar26 = ((ushort)uVar37 >> 1 | (ushort)bVar60 << 0xf) + uVar39;
  uVar41 = uVar37 & 0xffff0000 | (uint)uVar26;
  bVar56 = (char)(uVar34 >> 0x2d) - (byte)uVar53;
  uVar36 = (uint)((uVar34 & 0xffe0000000000000) >> 0x2d);
  uVar17 = (uVar17 | (ushort)(uVar27 + 0x634e)) << (bVar5 & 0x3f);
  uVar15 = uVar22 & 0xffff0000 | uVar39 & 0xffffff00 | (uVar39 & 0xfe) >> 1;
  uVar22 = uVar53 & 0xffffff00 |
           (uint)(byte)((byte)uVar53 & (byte)(((uVar34 & 0xffe0000000000000) >> 0x2d) >> 8));
  uVar21 = uVar21 & 0x3f;
  uVar30 = (ulong)uVar15 | 1 << uVar21;
  lVar24 = ((uVar17 & 0xffffffffffff0000 |
            (ulong)(ushort)((ushort)uVar17 >> 6 | (short)uVar19 << 10)) - 0x9f32ce85) -
           (ulong)((uVar15 >> uVar21 & 1) != 0);
  if ((uVar19 * 0x10 | uVar19 >> 0x1c) ==
      (iVar33 * -0x59f077a3 & 0xffff0000U | (uint)(ushort)(uVar14 * -0x5b31))) {
    uVar22 = uVar53 & 0xffff0000 | (uint)uVar30 & 0xffff;
  }
  lVar55 = lVar55 + 0x285cba59;
  uVar44 = CONCAT22((ushort)(uVar44 >> 0x11),(short)(uVar44 >> 1) >> (bVar5 & 0x1f));
  lVar2 = 0;
  if (uVar41 != 0) {
    for (; (uVar41 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  uVar37 = uVar37 & 0xffff0000 | uVar26 & 0xffffff00 | (uint)(byte)((char)uVar26 >> 0xc);
  uVar41 = (uint)lVar2;
  if ((POPCOUNT(bVar5 & (byte)uVar22) & 1U) == 0) {
    uVar41 = uVar44;
  }
  uVar15 = 0x1f;
  if ((uint)uVar48 != 0) {
    for (; (uint)uVar48 >> uVar15 == 0; uVar15 = uVar15 - 1) {
    }
  }
  uVar53 = uVar36 & 0xffff0000 | uVar51 |
           (uint)(ushort)((ushort)bVar56 * (ushort)(byte)((ulong)lVar24 >> 0x38));
  uVar19 = uVar44;
  if (uVar53 != uVar41) {
    uVar53 = uVar41;
    uVar19 = uVar41;
  }
  bVar5 = (byte)uVar15 & 0x1f;
  uVar45 = (uint)lVar55;
  uVar41 = uVar15 >> 1 & 0x7fff;
  uVar53 = (uVar53 ^ uVar37) * (int)(char)bVar32 * (uVar15 & 0xffff0000 | uVar41);
  uVar17 = (ulong)((uVar36 | uVar51 | (uint)bVar56) +
                  (uVar22 & 0xffff0000 |
                  (uint)(ushort)(((short)uVar22 * (short)lVar55 & 0xffU) * (ushort)bVar32))) + 1;
  iVar23 = uVar19 << ((byte)uVar41 & 0x1f);
  uVar21 = (ulong)(lVar24 * 0x100) >> 0x19 & 0x7f;
  lVar24 = 0;
  if (uVar17 != 0) {
    for (; (uVar17 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
    }
  }
  for (uVar26 = 0xf; 0xb7ebU >> uVar26 == 0; uVar26 = uVar26 - 1) {
  }
  uVar36 = (uVar53 & 0xffff | ((ushort)uVar30 & 0x3fff) << 0x10) / 0xf7eb;
  uVar51 = uVar15 >> 1 & 0x7f0f;
  sVar8 = (sbyte)uVar51;
  uVar48 = (long)(int)(uVar53 & 0xffff0000 | uVar36) * (long)(int)uVar21;
  uVar14 = (ushort)((uVar44 & 0xffffff00) >> 0x10);
  iVar33 = iVar23 + 1;
  bVar60 = iVar33 == 0 || SCARRY4(iVar23,1) != iVar33 < 0;
  uVar53 = (int)uVar48 * (int)(uVar48 >> 0x20);
  uVar41 = (uVar45 >> bVar5 | uVar45 << 0x20 - bVar5) + iVar33;
  uVar43 = (ushort)((POPCOUNT(uVar41 & 0xff) & 1U) != 0);
  uVar51 = CONCAT22(uVar14 >> 10,
                    (short)(CONCAT22(uVar14 >> 1,
                                     (ushort)((uVar44 & 0xffffff00) >> 1) ^ (ushort)(uVar34 >> 0x2d)
                                    ) >> 9) - (short)uVar51) + -0x7a7af73b + (uint)(iVar33 < 0);
  bVar56 = bVar60 * '\x02';
  uVar14 = CONCAT11((char)(uVar53 >> 8) * '\x02' + '\x01',(char)uVar53) | 0x20;
  uVar44 = (uint)(uVar30 >> 0x19) >> 1;
  bVar57 = (uVar30 >> 0x19 & 1) != 0;
  uVar27 = (short)uVar44 << 1 | (ushort)(((ulong)uVar37 + (uVar48 >> 0x20) >> 3 & 1) != 0);
  uVar44 = uVar44 & 0xffff0000 | (uint)uVar14 << 0x1f;
  uVar37 = uVar44 | uVar27;
  bVar5 = ((byte)(uVar21 << 1) | 1) ^ (byte)uVar14;
  uVar34 = (ulong)bVar5;
  auVar3 = ZEXT116(0) << 0x40 |
           ZEXT416(((uint)CONCAT62((undefined6)((char)bVar32 >> 7),
                                   (ushort)((short)(char)bVar32 << 1) >> sVar8 |
                                   (short)uVar36 << 0x10 - sVar8) & 0x7fffff80) << 1 |
                   (uint)(byte)-bVar57);
  uVar30 = SUB168(auVar3 >> bVar56,0) | SUB168(auVar3 << bVar60 * -2 + 0x41,0);
  uVar39 = 0xe128U >> bVar56 | uVar27 << bVar60 * -2 + 0x10;
  uVar21 = (ulong)(uVar53 & 0xffff0000 | (uint)uVar14) * (ulong)uVar37;
  uVar36 = (uint)(uVar21 >> 0x20);
  uVar48 = 0;
  if (uVar36 != 0) {
    uVar48 = (ulong)uVar37;
  }
  uVar14 = (short)((ushort)(uVar41 >> 1) & 0x7fff) >> 1;
  uVar53 = uVar15 & 0xffff0000 | (uint)uVar39 | 0xc0000000;
  uVar21 = (ulong)(uVar36 & 0x3fffffff) << 0x20 | uVar21 & 0xffffffff;
  uVar29 = uVar21 / uVar53 & 0xffffffff;
  uVar15 = (int)uVar29 - (uint)bVar5;
  uVar7 = uVar34;
  if (uVar15 == 0) {
    uVar34 = uVar29;
    uVar7 = (ulong)uVar53;
  }
  uVar36 = (uint)bVar56;
  if ((POPCOUNT(uVar15 & 0xff) & 1U) != 0) {
    uVar36 = uVar51;
  }
  uVar47 = (ushort)uVar7 >> 1;
  uVar37 = (((byte)(-0x15 << bVar56 % 9 | (byte)(CONCAT11(bVar57,0xeb) >> 9 - bVar56 % 9)) |
            0x7d48ff00) - 1) + uVar37;
  uVar29 = uVar30 & 0xffffffffffff0000;
  bVar9 = (char)uVar36 + 0x5f;
  bVar5 = (byte)((ulong)(ushort)(uVar47 | (ushort)((uVar7 & 1) != 0) << 0xf) >> 8);
  bVar56 = (byte)uVar47;
  bVar25 = (byte)uVar14;
  uVar15 = uVar41 & 0xffff0000 | uVar14 & 0xffffff00 | (uint)(byte)(bVar25 + (byte)uVar37);
  uVar14 = (short)uVar30 + 0x29f2 + (ushort)CARRY1(bVar25,(byte)uVar37);
  uVar51 = uVar51 >> 0x1d;
  bVar12 = (byte)(uVar21 % (ulong)uVar53 >> 8);
  bVar25 = bVar12 ^ (bVar56 == bVar12) *
                    (bVar12 ^ (byte)((uint)(ushort)((uVar26 + 1 & 0xff00 | uVar43) * -0x2161) >> 8))
  ;
  uVar44 = (uVar44 | uVar27 & 0xffffff00 |
           (uint)(byte)((byte)uVar27 << (bVar9 & 7) | (byte)uVar27 >> 8 - (bVar9 & 7))) + 1;
  uVar41 = uVar51 + 0x10f4e08;
  uVar21 = (ulong)bVar25 << 8;
  if (uVar51 < 0xfef0b1f8) {
    uVar21 = uVar29 | uVar14;
  }
  uVar41 = uVar41 & 0xffff0000 | (uint)((ushort)uVar41 & 0x7fff);
  bVar5 = SUB161(ZEXT816(uVar7 & 0xffffffffffff0000 |
                         (ulong)(byte)(bVar5 << (bVar9 & 7) | bVar5 >> 8 - (bVar9 & 7)) << 8 |
                         (ulong)(byte)((bVar56 ^ (bVar56 != bVar12) * (bVar56 ^ bVar25)) +
                                      (char)(uVar21 >> 8))) * ZEXT816((ulong)uVar15) >> 0x48,0);
  uVar36 = uVar44 >> 1 & 0xffff | (uVar44 >> 0x11) << 0x10 | 0xc000;
  lVar55 = (uVar48 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar48 << 1 | (char)uVar48 < '\0')) -
           (ulong)(uint)(int)(char)bVar5;
  uVar30 = (ulong)uVar15 << (bVar5 & 0x3f) | (ulong)(uVar15 >> 0x40 - (bVar5 & 0x3f));
  uVar27 = (short)(char)bVar5 ^ 1 << uVar43;
  uVar47 = (ushort)lVar55;
  uVar28 = (ushort)uVar30;
  uVar43 = uVar28 + uVar47;
  bVar56 = (byte)uVar27 & 0x1f;
  uVar15 = (uint)(CONCAT14(CARRY2(uVar28,uVar47),uVar41) >> bVar56) | uVar41 << 0x21 - bVar56;
  bVar25 = (byte)uVar14 & 0xc5;
  uVar44 = uVar37 & 0xffff0000 |
           (ushort)((short)uVar37 << (bVar9 & 0xf) | uVar39 >> 0x10 - (bVar9 & 0xf)) & 0xffffff00 |
           (uint)((uVar14 & 0x78c5) != 0);
  uVar48 = (uVar29 | uVar14) - 0x36db4c27;
  lVar24 = (((ulong)(uint3)(CONCAT22((undefined2)((char)bVar5 >> 7),uVar27) >> 8) & 0xffffffffffff00
            ) << 8 | (ulong)(ushort)(uVar14 * 0x2581)) + (ulong)uVar44;
  uVar39 = (ushort)uVar48 | (ushort)uVar15;
  bVar56 = bVar25 * '\x02';
  bVar9 = (byte)lVar24;
  bVar5 = (bVar9 & 0x1f) % 9;
  uVar21 = uVar34 & 0xffffffffffffff00 |
           (ulong)(byte)((byte)(CONCAT11((char)bVar25 < '\0',(char)uVar34) >> bVar5) |
                        (char)uVar34 << 9 - bVar5);
  uVar41 = 0;
  if (uVar15 != 0) {
    for (; (uVar15 >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
    }
  }
  uVar34 = (ulong)uVar41;
  uVar17 = (ulong)((uint3)((((uint)uVar17 & 0xffff0000 | (uint)uVar26) ^ 0xac) + 0x381833fc >> 8) &
                  0xffff00) << 8;
  uVar26 = (short)(uVar14 & 0xff) >> 1;
  uVar41 = ((uint)uVar48 & 0xffff0000 | (uint)uVar39) +
           ((uint)uVar21 & 0xffff0000 | (uint)(ushort)((short)uVar21 << (bVar9 & 0x1f)));
  uVar27 = (short)uVar44 - (short)uVar41;
  uVar44 = ((uint)lVar55 & 0xffff0000 | (uint)uVar30 & 0xffff) + 1;
  iVar23 = 0;
  if (uVar36 != 0) {
    for (; (uVar36 >> iVar23 & 1) == 0; iVar23 = iVar23 + 1) {
    }
  }
  uVar44 = uVar44 & 0xffff0000 | (uint)(ushort)~(ushort)uVar44;
  uVar30 = (ulong)uVar44;
  uVar15 = (uint)lVar24 >> (bVar9 & 0x1f) | ((uint)uVar17 | (uint)uVar26) << 0x20 - (bVar9 & 0x1f);
  uVar22 = iVar23 + 0xc9cb307a;
  uVar53 = (uint)uVar29 | uVar14 & 0xffff7800 | (uint)(byte)(bVar56 + 0x51);
  uVar21 = (ulong)(0xae < bVar56) << 0x20 | uVar48 & 0xffff0000 | (ulong)uVar39;
  uVar17 = uVar17 | uVar26 ^ 8;
  uVar21 = ((ulong)((uint)(uVar21 >> 0x13) | (uint)(uVar21 << 0xe)) - 0x23006b8c) +
           (ulong)((uVar26 >> 3 & 1) != 0);
  bVar56 = (byte)uVar15;
  uVar26 = (ushort)uVar21;
  uVar26 = uVar26 >> (bVar56 & 0xf) | uVar26 << 0x10 - (bVar56 & 0xf);
  uVar21 = uVar21 & 0xffffffffffff0000;
  uVar51 = (uint)uVar21 | (uint)uVar26;
  uVar7 = uVar30 ^ (ulong)(uVar34 == uVar30) * (ulong)(uVar44 ^ uVar15);
  uVar34 = uVar34 ^ (ulong)(uVar34 != uVar30) * (uVar34 ^ uVar7);
  uVar53 = uVar53 >> (bVar56 & 0x1f) | uVar53 << 0x20 - (bVar56 & 0x1f);
  bVar56 = ((byte)(uVar15 >> (bVar56 & 0x1f)) | (byte)((int)uVar17 << 0x20 - (bVar56 & 0x1f))) & 0xf
  ;
  uVar48 = (ulong)(ushort)((ushort)uVar7 << bVar56 | (ushort)uVar7 >> 0x10 - bVar56);
  uVar54 = uVar7 & 0xffffffffffff0000 | uVar48;
  uVar30 = uVar17 ^ (ulong)(uVar34 == uVar17) *
                    (uVar17 ^ CONCAT62((int6)(short)(uVar29 >> 0x10),uVar14 + 0x9cc3));
  uVar34 = uVar34 ^ (ulong)(uVar34 != uVar17) * (uVar34 ^ uVar30);
  uVar17 = uVar34 & 0xffffffffffff0000;
  uVar15 = (int)uVar30 + 0x8fd38db4;
  uVar44 = 0x1f;
  if (uVar51 != 0) {
    for (; uVar51 >> uVar44 == 0; uVar44 = uVar44 - 1) {
    }
  }
  bVar56 = ((byte)uVar44 & 0x1f) % 0x11;
  uVar51 = (uint)((uVar43 + (short)uVar34 + 0x23f5 & 1) != 0) << 0x10 | uVar41 & 0xffff;
  bVar56 = (byte)(uVar51 << bVar56) | (byte)(uVar51 >> 0x11 - bVar56);
  uVar51 = ((uint)uVar17 | (uint)uVar43) + 0x9a + uVar44 * 4;
  uVar14 = uVar26 ^ (ushort)(uVar43 == uVar26) * (uVar26 ^ uVar27);
  uVar17 = uVar17 | (ushort)(uVar43 ^ (ushort)(uVar43 != uVar26) * (uVar43 ^ uVar14));
  uVar17 = (long)((int)uVar17 * (int)uVar54) *
           (long)SUB164(SEXT816((long)uVar17) * SEXT816((long)uVar54) >> 0x40,0);
  uVar29 = uVar17 & 0xffffffff;
  uVar34 = (uVar17 >> 0x20) + (ulong)uVar51 >> ((byte)uVar44 & 0x3f);
  uVar42 = (ulong)((uVar36 + 0xa852b96d & 0xffff0000 | uVar22 & 0xffff) +
                   (uVar22 & 0xffff0000 | (uint)(ushort)((short)uVar22 + 0x82a0)) +
                  (uint)((uVar44 >> 0x19 & 1) != 0));
  uVar30 = (ulong)uVar44;
  if (SBORROW8(uVar42,uVar29) != false) {
    uVar30 = uVar54;
  }
  uVar47 = (ushort)uVar51 & 0xff00 | (ushort)(uVar51 >> 1) & 0x7f;
  bVar9 = (byte)uVar29;
  uVar26 = (short)uVar15 + 0xa01d;
  uVar44 = uVar15 & 0xffff0000 | uVar26 & 0xffffff00 |
           (uint)(byte)((char)uVar26 + ((char)uVar22 + 1U | 0x93));
  bVar25 = (byte)uVar30 << ((byte)uVar30 & 0x1f);
  uVar39 = ((ushort)((uVar53 & 0xffff0000 |
                     (uint)(ushort)(((short)uVar53 + -0x3872) - (ushort)(uVar42 < uVar29))) >>
                    (bVar25 & 0x3f)) | (ushort)((uVar21 | uVar14) << 0x40 - (bVar25 & 0x3f))) -
           uVar47;
  bVar40 = (byte)uVar39;
  bVar12 = bVar25 ^ (bVar9 == bVar25) * (bVar25 ^ bVar40);
  uVar54 = uVar30 & 0xffffffffffffff00 | (ulong)bVar12 | 1 << ((ulong)uVar14 & 0x3f);
  bVar13 = (char)uVar34 + -0x6e + ((char)(bVar56 ^ bVar9) < '\0');
  uVar34 = uVar34 & 0xffffffffffffff00;
  bVar6 = (byte)uVar54;
  bVar18 = (byte)(uVar34 >> 8);
  uVar42 = (ulong)uVar44 << (bVar6 & 0x3f) | (ulong)(uVar44 >> 0x40 - (bVar6 & 0x3f));
  uVar21 = (uVar7 & 0x7f0000 | uVar48) << 9;
  uVar44 = (uint)(uVar21 << (bVar6 & 0x1f)) | (uint)(uVar21 >> 0x21 - (bVar6 & 0x1f));
  bVar5 = (bVar6 & 0x1f) % 0x11;
  sVar10 = (short)uVar44;
  uVar43 = SEXT12((char)bVar56);
  uVar21 = (ulong)(uVar41 & 0xffff0000) & 0xfffffffffff70000;
  uVar47 = (uVar47 | 1) << (bVar6 & 0x1f);
  bVar32 = bVar6 + (char)uVar14;
  uVar14 = (short)((ushort)uVar34 | (ushort)bVar13) >> (bVar32 & 0x1f);
  uVar34 = (ulong)((byte)(bVar9 ^ (bVar9 != bVar25) * (bVar9 ^ bVar12) ^ bVar13) + 0xe0223518) *
           -0x37e26697;
  lVar24 = (ulong)CONCAT11(0xff,bVar32) << 1;
  uVar26 = (short)(char)bVar56 + 0xed6e;
  if (-1 < (short)(uVar14 & 0xff |
                  (ushort)(byte)((char)((ulong)uVar14 >> 8) -
                                (char)((ulong)(ushort)((ushort)(((byte)(((char)(uVar29 >> 8) -
                                                                        (char)(uVar30 >> 8)) + -1 +
                                                                       bVar18) & 0x3f) << 8 |
                                                               uVar43 & 0xff) %
                                                       (ushort)(byte)((byte)(uVar42 >> 8) | 0xc0) <<
                                                      8) >> 8)) << 8)) {
    uVar26 = uVar39 & 0xff00 | (ushort)(byte)(bVar40 + 0x17);
  }
  uVar14 = CONCAT11((byte)((ulong)lVar24 >> 8) ^ (byte)uVar42 & bVar18,(char)lVar24) + 0xebb4;
  uVar39 = CONCAT11((byte)(uVar54 >> 8) >> 1,bVar6) * -0x5afe;
  uVar44 = uVar44 & 0xffff0000 |
           (uint)(ushort)((sVar10 << bVar5 |
                          (ushort)(CONCAT12((uVar51 >> 1 & 1) != 0,sVar10) >> 0x11 - bVar5)) << 1 |
                         uVar14 >> 0xf);
  uVar28 = (ushort)uVar34 & 0xffdf;
  uVar34 = uVar34 & 0xffffffffffff0000;
  uVar17 = CONCAT71((uint7)(uint6)(int6)(short)(uVar17 >> 0x10) << 8,0x53);
  uVar17 = (uVar17 & 0xffffffff) * (uVar17 & 0xffffffff);
  uVar41 = ((uint)uVar21 | (uint)uVar43) + 0xa244c772;
  uVar49 = (ushort)uVar41 & 0xff00 | (ushort)(byte)((char)uVar41 - (char)uVar26);
  uVar15 = (uint)(uVar17 >> 0x20);
  if (!SBORROW1((char)uVar41,(char)uVar26)) {
    uVar15 = (uint)uVar34 | uVar28 & 0xffffff00 | (uint)(((ulong)uVar28 & 0xfe | 0x40) >> 1);
  }
  uVar17 = uVar17 & 0xffffffff ^ (ulong)uVar43 & 0xff;
  uVar27 = (ushort)((int)(uVar37 & 0xffff0000 | (uint)uVar27) >> 2);
  uVar37 = (uint)((ulong)uVar43 & 0xff);
  if (uVar27 != uVar49 && (SBORROW2(uVar27,uVar49) != false) == (short)(uVar27 - uVar49) < 0) {
    uVar37 = uVar15;
  }
  if ((uint)uVar17 != uVar44) {
    uVar17 = (ulong)uVar44;
  }
  uVar27 = uVar49 << 1 | (ushort)((short)uVar49 < 0);
  uVar41 = uVar41 & 0xffff0000 | (uint)uVar27;
  bVar56 = (byte)uVar14 & 0xf;
  if ((short)uVar49 < 0 != (short)uVar27 < 0) {
    bVar56 = (byte)uVar17;
  }
  uVar36 = uVar37 & 0xffff0000 | (uint)((ushort)uVar37 & uVar47) | 0xc0000000;
  uVar37 = (uint)(((ulong)((uVar15 | 0xbbaeafb3) & 0x3fffffff) << 0x20 | uVar17) / (ulong)uVar36);
  auVar3 = (ZEXT116(0) << 0x40 | ZEXT816(uVar21 | (ushort)(uVar43 | 1 << (uVar14 & 0xf)))) >> 0xf;
  uVar44 = uVar37 >> (bVar56 & 0x1f) | uVar37 << 0x20 - (bVar56 & 0x1f);
  uVar17 = (ulong)uVar36 << (bVar56 & 0x3f) | (ulong)(uVar36 >> 0x40 - (bVar56 & 0x3f));
  bVar56 = SUB161(auVar3,0) & 0xdf;
  uVar37 = uVar44 & 0xffff0000;
  if (SCARRY2((short)uVar44,uVar26 | uVar39)) {
    uVar34 = uVar17;
  }
  lVar24 = 0;
  if (uVar17 != 0) {
    for (; (uVar17 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
    }
  }
  bVar60 = (auVar3 & (undefined  [16])0xdf) == (undefined  [16])0x0;
  bVar56 = bVar56 ^ bVar60 * bVar56;
  uVar44 = (uVar37 | (byte)(!bVar60 * bVar56)) - 1;
  uVar41 = (uVar41 << 1) >> 0x14 | uVar41 << 0xd;
  for (lVar55 = 0; (0x382aU >> lVar55 & 1) == 0; lVar55 = lVar55 + 1) {
  }
  uVar15 = (uVar44 & 0xff0000) >> 8;
  uVar36 = (uVar44 & 0xff00) << 8;
  uVar26 = (ushort)(SUB162(auVar3,0) & 0xff00 | (ushort)bVar56) >> 1;
  uVar19 = (uint)(uVar39 - (short)(uVar37 >> 9) & uVar26);
  uVar45 = (uint)lVar24 & 0xffff0000 | (ushort)lVar24 & 0xffffff00 | (uint)(byte)lVar24;
  uVar37 = (uVar44 >> 0x18 | uVar15 | uVar36) + 0x39dd33b6 +
           (uint)(byte)((ulong)(uVar49 << 1 & 0xff00) >> 8) * 0x800;
  uVar22 = uVar26 & 0xffffff00 | uVar44 >> 0x18;
  uVar34 = (uVar34 & 0xffffff00 | (ulong)(byte)((char)uVar34 >> 6)) & 0xffffffffd6a00ef3;
  uVar21 = (ulong)uVar37 & 0xffffffffffffffa3;
  uVar53 = (uint)uVar34 & 0x1f;
  uVar46 = uVar45 ^ 1 << uVar53;
  bVar56 = (byte)uVar21 & 0x1f;
  uVar21 = uVar21 >> 1;
  uVar44 = uVar41 + 0xd5 + uVar19;
  if ((byte)uVar34 != 0xe7) {
    uVar21 = (ulong)(uVar37 >> 0x11) << 0x10;
  }
  uVar48 = 0x9d800000;
  if ((byte)uVar34 < 0xe8) {
    uVar48 = uVar34;
  }
  uVar15 = (uVar15 | uVar26 & 0xff) * (uVar44 & 0xffff);
  uVar16 = (uint)uVar34 & 0xffff0000 | uVar15 >> 0x10;
  uVar26 = (ushort)uVar15;
  uVar37 = ((uVar37 * 0x2d695007 ^ (uint)(1 << ((ulong)uVar37 & 0x23))) << 1 | 1) &
           ~(1 << (uVar46 & 0x1f));
  uVar14 = (short)uVar37 + uVar26;
  sVar8 = (sbyte)(uVar21 & 0xffffffffffffff0f);
  uVar48 = uVar48 & 0xffffffffffff0000 |
           (ulong)(ushort)((short)uVar48 << sVar8 |
                          (ushort)(uVar21 & 0xffffffffffffff0f) >> 0x10 - sVar8);
  uVar26 = uVar26 & 0x3583;
  uVar34 = (ulong)uVar36 | (ulong)(ushort)(uVar26 / 0xc9 | uVar26 % 0xc9 << 8);
  bVar5 = (byte)((uVar21 & 0xffffffffffffff00) >> 8);
  return uVar34 + ((ulong)(ushort)(short)(char)bVar5 & 0xffffffffffffff00 | 0x36a3feae43650000 |
                  (ulong)(byte)(bVar5 >> 4 | bVar5 << 4)) +
         (uVar21 & 0xffffffffffffff00 | (ulong)(byte)((uVar16 < uVar14) << 7)) +
         (ulong)(uVar16 - uVar14 ^ 1 << ((uint)uVar48 & 0x1f)) +
         (ulong)(uint)((int)uVar19 >> ((byte)uVar21 & 0x1f)) +
         (ulong)((uint)uVar14 << 0x1e | (uint)uVar34 >> 2) +
         (ulong)((uint)(CONCAT14((uVar45 >> uVar53 & 1) != 0,uVar22) >> bVar56) |
                uVar22 << 0x21 - bVar56) + (ulong)uVar37 + uVar48 + (uVar17 >> 10 | uVar17 << 0x36)
         + (ulong)uVar46 + (ulong)(uVar44 & 0xffff0000 | (uint)(ushort)((short)uVar44 << 0xd)) +
         (ulong)uVar41 +
         ((ulong)((uVar51 & 0xffff0000 | (uVar47 | 0xc000) >> 0xf) - 1 & 0xffffff00) << 0x1f | 1) +
         -0x50be7eb0a20e3663;
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


