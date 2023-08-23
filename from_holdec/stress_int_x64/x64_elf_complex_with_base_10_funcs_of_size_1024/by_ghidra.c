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



// WARNING: Removing unreachable block (ram,0x00401be5)
// WARNING: Removing unreachable block (ram,0x00401364)
// WARNING: Removing unreachable block (ram,0x0040125d)
// WARNING: Removing unreachable block (ram,0x004013ac)
// WARNING: Removing unreachable block (ram,0x0040167f)
// WARNING: Removing unreachable block (ram,0x00401f26)
// WARNING: Removing unreachable block (ram,0x00401740)
// WARNING: Removing unreachable block (ram,0x00401390)
// WARNING: Removing unreachable block (ram,0x00401378)
// WARNING: Removing unreachable block (ram,0x004013c4)

long log_size_10_var_000(void)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  uint3 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined3 uVar13;
  unkuint9 Var14;
  uint3 uVar15;
  uint uVar16;
  uint5 uVar17;
  byte bVar18;
  byte bVar21;
  ushort uVar19;
  uint7 uVar22;
  undefined8 uVar20;
  byte bVar23;
  ushort uVar24;
  int iVar25;
  ulong uVar26;
  short sVar27;
  long lVar28;
  uint6 uVar29;
  byte bVar30;
  ushort uVar31;
  ushort uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 uVar37;
  uint uVar38;
  int iVar39;
  ulong uVar40;
  byte bVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  undefined6 uVar45;
  char cVar46;
  uint uVar47;
  ulong uVar48;
  uint uVar49;
  undefined6 uVar50;
  char cVar51;
  short sVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  long lVar56;
  ushort uVar57;
  int iVar58;
  undefined8 uVar59;
  ushort uVar60;
  short sVar61;
  short sVar62;
  uint uVar63;
  ulong uVar64;
  ulong uVar65;
  char cVar66;
  ushort uVar67;
  ushort uVar68;
  uint uVar69;
  long lVar70;
  ulong uVar71;
  bool bVar72;
  bool bVar73;
  char in_AF;
  
  for (uVar24 = 0; (0x419U >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
  }
  uVar31 = ~(1 << (uVar24 & 0xf)) & 0x7744;
  bVar41 = (byte)uVar31;
  iVar25 = (uint)bVar41 * 0xb95c;
  auVar4 = ZEXT416((uint)(CONCAT22(0x1140,(short)((uint)iVar25 >> 0x10)) << 0xc)) << 0x40 |
           ZEXT216((ushort)(short)(char)iVar25);
  auVar8 = auVar4 / ZEXT816(0xe8afda86c9dbcad7);
  auVar4 = auVar4 % ZEXT816(0xe8afda86c9dbcad7);
  uVar49 = auVar8._0_4_ >> 0xb;
  uVar53 = uVar49 | 0x5ae00000;
  cVar51 = (char)uVar49;
  uVar44 = auVar8._0_8_ & 0xffffffffffff9b0e;
  cVar66 = (char)uVar24 + 'T';
  cVar46 = cVar66 + cVar51;
  uVar49 = 0xffffffff;
  if (cVar46 != -1 &&
      (SCARRY1(cVar66,cVar51) != SCARRY1(cVar46,'\x01')) == (char)(cVar46 + '\x01') < '\0') {
    uVar49 = uVar53;
  }
  uVar10 = CONCAT12((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0,0xd8b1) >> 5;
  uVar55 = CONCAT31(0x200000,cVar51) | 0x5c01600 | auVar4._0_4_ >> 1 | 0x80000000;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar44;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar44;
  auVar4 = auVar4 * auVar8;
  bVar72 = auVar4._8_8_ != 0;
  if (bVar72) {
    uVar53 = auVar4._0_4_;
  }
  uVar24 = (ushort)(CONCAT12(bVar72,0x4e05) >> 0xc) | 0xc0a0;
  lVar34 = CONCAT62(0xffffffff8c1f,uVar24);
  bVar18 = (byte)uVar24;
  iVar25 = CONCAT31((int3)(CONCAT22(0x6f16,uVar31) >> 8),-bVar41);
  lVar28 = (ulong)uVar55 + 0x5e0e92a2 + lVar34 * 2;
  uVar38 = (uint)(0x4000000000000 >> (bVar18 & 0x3f)) | iVar25 << 0x40 - (bVar18 & 0x3f);
  uVar36 = (ulong)uVar49 ^ 1L << ((ulong)(uint)(int)auVar4._0_2_ & 0x3f);
  uVar24 = (ushort)iVar25;
  uVar24 = uVar24 >> (bVar18 & 0xf) | uVar24 << 0x10 - (bVar18 & 0xf);
  uVar54 = uVar53 << (bVar18 & 0x1f) | uVar38 >> 0x20 - (bVar18 & 0x1f);
  bVar23 = bVar18 >> (bVar18 & 0x1f);
  uVar60 = 0xb95c >> (bVar23 & 0x1f);
  bVar21 = (byte)(((ulong)CONCAT31((int3)auVar4[1],auVar4[0]) | 0xbc) >> 1);
  lVar56 = CONCAT62(0x3fffffffdf53,
                    (short)CONCAT71((int7)(CONCAT62(0x3fffffffdf53,(ushort)uVar10 | 0x1000) >> 8),
                                    (byte)uVar10 >> (bVar18 & 0x1f)) + 0x5a87);
  lVar70 = CONCAT62(((uint6)(CONCAT18(1,0xe7bd7ff7) >> 0x2d) | 0x7bd7ff700000) >> 0xc,
                    (((ushort)uVar54 >> ((ushort)lVar28 & 0xf) & 1) != 0) + 0xaa03) + 0x497d81b2;
  uVar49 = ((ushort)lVar70 < (ushort)(short)(char)bVar21) + 0xcd34e971;
  uVar44 = (lVar56 << 0x15 | (ulong)(CONCAT18((uVar54 & 1) != 0,lVar56) >> 0x2c)) >> (bVar21 & 0x3f)
           | (ulong)(uVar54 >> 1) << 0x40 - (bVar21 & 0x3f);
  bVar41 = (char)bVar21 >> 7;
  uVar69 = (uint)CONCAT62((int6)((ulong)lVar70 >> 0x10),(char)bVar21 + -0x1e83 + (short)(char)bVar21
                         ) & ~(1 << (uVar49 & 0x1f));
  uVar45 = (undefined6)(uVar44 >> 0x10);
  uVar31 = (ushort)uVar44 >> (bVar41 & 0x1f);
  uVar35 = (ulong)(uVar49 & 0xac5a4337);
  cVar51 = (char)(uVar54 >> 1) + '\x01';
  uVar33 = (((ulong)uVar24 & 0xff00) << 0x28 | 0x166f00000000 | (ulong)uVar24 << 0x38) >>
           (bVar41 & 0x3f);
  sVar27 = (short)uVar55 + 0x3a2c;
  uVar40 = (ulong)(uVar38 << 2 | (uint)CONCAT71((int7)((ulong)lVar34 >> 8),bVar23) >> 0x1e) &
           0xffffffffffffffbb;
  bVar21 = (byte)sVar27;
  cVar46 = bVar21 + 0x6f;
  uVar26 = (ulong)CONCAT31((int3)(CONCAT22((short)(uVar55 >> 0x10),sVar27) >> 8),cVar46);
  bVar21 = (cVar46 < '\0') << 7 | (cVar46 == '\0') << 6 | in_AF << 4 |
           ((POPCOUNT(cVar46) & 1U) == 0) << 2 | 2U | bVar21 < 0x91;
  uVar44 = (ulong)bVar21 << 8;
  uVar48 = uVar26 ^ (ulong)(uVar44 == uVar26) *
                    (uVar26 ^ CONCAT71((int7)(uVar36 >> 8),(char)uVar36 >> (bVar41 & 0x1f)));
  lVar34 = (ulong)(uVar44 != uVar26) * (uVar44 ^ uVar48);
  uVar53 = (int)uVar33 * -0x3e9812ee;
  bVar41 = (byte)uVar53;
  lVar56 = (long)(ulong)CONCAT31((uint3)(uVar54 >> 9),cVar51) >> (bVar41 & 0x3f);
  bVar72 = (uVar69 & 1) != 0;
  uVar67 = (ushort)uVar69 >> 1 | (ushort)bVar72 << 0xf;
  uVar24 = CONCAT11((bVar21 ^ (byte)((ulong)lVar34 >> 8)) - bVar72,(char)lVar34);
  uVar68 = uVar67 ^ (ushort)(uVar24 == uVar67) * (uVar67 ^ (ushort)lVar56);
  uVar49 = CONCAT22((short)(uVar69 >> 0x10),uVar68);
  uVar24 = uVar24 ^ (ushort)(uVar24 != uVar67) * (uVar24 ^ uVar68);
  uVar44 = CONCAT62((int6)((ulong)lVar34 >> 0x10),uVar24);
  bVar41 = bVar41 & 0x1f;
  uVar49 = uVar49 >> bVar41 | uVar49 << 0x20 - bVar41;
  uVar67 = (short)uVar49 * 0x70f4;
  uVar65 = (ulong)CONCAT22((short)(uVar49 >> 0x10),uVar67);
  uVar26 = (ulong)uVar53;
  if ((byte)((byte)uVar40 | 0xb8) != 0) {
    uVar26 = CONCAT71((int7)(CONCAT62(uVar45,(short)CONCAT71((int7)(CONCAT62(uVar45,uVar31) >> 8),
                                                             (char)uVar31 >> 9) << 1) >> 8),cVar51)
             & 0xffffffff;
  }
  uVar67 = (ushort)uVar48 | uVar67;
  uVar48 = CONCAT62((int6)(uVar48 >> 0x10),uVar67);
  iVar25 = (int)CONCAT71((int7)(uVar26 >> 8),(char)uVar26 >> 1) + -0x61b30819;
  bVar21 = (byte)iVar25;
  uVar71 = uVar65 ^ (uVar44 == uVar65) * uVar65;
  uVar36 = (uVar36 & 0xffffffffffff0000) >> (bVar21 & 0x3f) | uVar35 << 0x40 - (bVar21 & 0x3f);
  uVar53 = (uint)CONCAT62((int6)(lVar28 >> 0x11),(short)(char)lVar56) | 0xc0000000;
  uVar44 = (ulong)(ushort)((short)uVar24 >> 0xf) << 0x20 |
           (uVar44 ^ (ulong)(uVar44 != uVar65) * (uVar44 ^ uVar71)) & 0xffffffff;
  uVar26 = uVar44 / uVar53 & 0xffffffff;
  uVar40 = (uVar40 | 0xb8) & uVar33;
  bVar41 = (byte)(uVar26 >> 8);
  uVar49 = CONCAT22((short)((uint)iVar25 >> 0x10),(ushort)bVar21);
  if ((uVar53 >> (bVar21 & 0x1f) | 0 << 0x20 - (bVar21 & 0x1f)) == 0x50cd4ee5) {
    uVar35 = (ulong)(ushort)bVar41;
  }
  iVar25 = 0x1f;
  if ((uint)uVar40 != 0) {
    for (; (uint)uVar40 >> iVar25 == 0; iVar25 = iVar25 + -1) {
    }
  }
  uVar55 = (uint)uVar71 & 0x1f;
  uVar38 = uVar49 | 1 << uVar55;
  uVar65 = (ulong)CONCAT22((short)((uint)((int)(0L >> (bVar21 & 0x3f)) << 1) >> 0x10),(ushort)bVar41
                          );
  if ((uVar49 >> uVar55 & 1) != 0 || (uVar36 & 0xd6e32ba3) == 0) {
    uVar65 = uVar40;
  }
  uVar55 = (uint)CONCAT62((int6)((ulong)lVar56 >> 0x10),(ushort)lVar56 << (bVar21 & 0x1f)) &
           0xffffbfff;
  bVar23 = (byte)uVar38;
  uVar64 = (ulong)CONCAT31((int3)(CONCAT22(0xdf4f,uVar60) >> 8),(char)uVar60 + '\x15' + bVar21) <<
           (bVar23 & 0x3f);
  bVar18 = (byte)uVar26;
  uVar22 = (uint7)(uVar26 >> 8);
  bVar18 = bVar18 ^ (bVar18 != 0) * (bVar18 ^ (bVar18 == 0) * bVar23);
  uVar38 = uVar38 | 0x8e196487;
  auVar4 = ZEXT116(0) << 0x40 | ZEXT416(CONCAT31((int3)((uint)iVar25 >> 8),uVar65 + uVar64 == 0));
  auVar8 = auVar4 >> 0x1f;
  bVar21 = (byte)uVar38;
  uVar44 = (uVar44 % (ulong)uVar53 & 0xffffffffffff8bca) << (bVar21 & 0x3f) |
           uVar64 >> 0x40 - (bVar21 & 0x3f);
  bVar23 = auVar8[0];
  lVar28 = CONCAT62((int6)(uVar44 >> 0x10),CONCAT11(-(char)(uVar44 >> 8),(char)uVar44)) - uVar71;
  iVar39 = (int)CONCAT62((int6)(uVar40 >> 0x10),(ushort)uVar40 + 0xaed9);
  uVar49 = iVar39 + (int)(uVar35 & 0xffff);
  bVar41 = (byte)(CONCAT11((char)(uVar38 >> 8) + bVar41 + ((ushort)uVar40 < 0x5127),bVar21) >>
                 (bVar21 & 0x1f));
  bVar21 = bVar41 & 0x3f;
  uVar44 = CONCAT71((int7)(uVar33 >> 8),SCARRY8(uVar65,uVar64) != SCARRY8(uVar65 + uVar64,0)) <<
           bVar21 | CONCAT71(uVar22,bVar18 ^ (bVar18 != bVar23) *
                                             (bVar18 ^ bVar23 ^ (bVar18 == bVar23) *
                                                                (bVar23 ^ (byte)uVar67))) >>
                    0x40 - bVar21;
  uVar53 = ((uint)(uVar36 << 0x10) >> 0x11) + 0x7f07364a + ((uint)uVar71 ^ 0x1000000) * 2;
  bVar41 = bVar41 & 0x1f;
  uVar54 = uVar53 >> bVar41 | uVar53 << 0x20 - bVar41;
  bVar21 = (byte)(uVar44 >> 8);
  uVar22 = uVar22 >> 3;
  uVar20 = CONCAT62(auVar8._2_6_ | SUB166(auVar4 << 0x22,2),(short)lVar28);
  bVar41 = (byte)uVar22;
  iVar39 = iVar39 << 0xf;
  uVar38 = (uint)uVar64 | uVar55;
  uVar53 = ((uint)(CONCAT62((int6)(uVar44 >> 0x10),CONCAT11(bVar21 << 5 | bVar21 >> 3,(char)uVar44))
                  >> 1) & 0x7fffffff) << (bVar41 & 0x1f) |
           (uint)CONCAT62((int6)((ulong)(lVar28 * 2) >> 0x10),(short)(lVar28 * 2) << 1) >>
           0x20 - (bVar41 & 0x1f);
  iVar25 = CONCAT22((short)(uVar55 >> 0x10),(short)uVar55 << 1);
  cVar46 = (char)(uVar53 >> 8);
  uVar44 = (ulong)CONCAT22((short)(uVar53 >> 0x10),CONCAT11(cVar46 << 1,(char)uVar53)) | 0x100;
  bVar21 = (char)(uVar22 >> 8) << 1;
  uVar24 = CONCAT11(bVar21,bVar41);
  uVar31 = (ushort)uVar38;
  if ((short)(uVar24 - uVar31) < 0) {
    iVar39 = CONCAT22((short)((uint)iVar39 >> 0x10),(short)uVar44);
  }
  uVar24 = CONCAT11(bVar21 ^ (byte)((ushort)((ushort)(uVar24 != uVar31) *
                                            (uVar24 ^ uVar31 ^ (ushort)(uVar24 == uVar31) *
                                                               (uVar31 ^ uVar24))) >> 8),bVar41) >>
           (bVar41 & 0x3f);
  lVar56 = ((uVar48 >> (bVar41 & 0x3f) | uVar48 << 0x40 - (bVar41 & 0x3f)) & 0x7fffffff) << 1;
  lVar34 = CONCAT71((int7)((uVar35 & 0xffff) >> 8),
                    (byte)((byte)uVar35 >> 1 | (byte)uVar35 << 7) >> 1 | (cVar46 < '\0') << 7) << 1;
  iVar1 = ((uint)(CONCAT18(lVar28 < 0,uVar20) >> (bVar41 & 0x3f)) |
          (int)uVar20 << 0x41 - (bVar41 & 0x3f)) + iVar25;
  uVar40 = ((ulong)CONCAT22((ushort)(uVar49 >> 0x12),(short)(uVar49 >> 2)) ^ 0x3b68) &
           0xfffffffffbffffff;
  uVar31 = uVar24 - ((ushort)((long)uVar44 >> 0x14) | (ushort)lVar56);
  uVar44 = ((ulong)(uint6)((int6)(uint6)(ushort)(uVar38 >> 0x10) >> 1) << 0x10) >> 0x1a;
  cVar46 = (char)uVar44;
  bVar41 = (byte)(uVar24 >> 8);
  uVar33 = (ulong)CONCAT11(bVar41 << 3 | bVar41 >> 5,(byte)uVar24);
  uVar36 = uVar33 * (uint)(int)cVar46;
  uVar60 = (ushort)uVar40;
  uVar67 = uVar60 + 0x991b;
  uVar49 = iVar25 * 0x16bf5e28 & 0xffff7fff;
  bVar41 = (char)iVar1 - 1;
  uVar26 = uVar44;
  if ((int)uVar36 == (int)uVar44) {
    uVar44 = uVar36;
    uVar26 = (ulong)SUB164(SEXT816((long)uVar33) * SEXT816((long)(ulong)(uint)(int)cVar46),8);
  }
  lVar28 = (ulong)uVar31 + 0x2fc2a16c;
  iVar58 = CONCAT31((int3)(uVar54 >> 8),(char)uVar54 >> ((byte)uVar31 & 0x1f)) * -0x1c979db6 + -1;
  uVar53 = (uint)CONCAT62((int6)(uVar40 >> 0x10),uVar67) >> 1 | (uint)((uVar67 & 1) != 0) << 0x1f;
  bVar21 = (byte)(uVar44 << 4);
  sVar27 = (short)((ushort)(byte)(uVar49 >> 0x18) | (ushort)(uVar49 >> 8) & 0xff00) >>
           (bVar21 & 0x1f);
  uVar68 = (short)(char)bVar41 + 0x7b72;
  uVar31 = (ushort)(CONCAT31((int3)((uint)iVar1 >> 8),bVar41) >> 1) ^ 0xab68;
  iVar25 = (int)CONCAT62((int6)((ulong)lVar28 >> 0x10),
                         CONCAT11((((char)((ulong)lVar28 >> 8) + -0x6e) - ((bVar41 & 1) != 0)) *
                                  '\x04' + '\x01',bVar21)) << 1;
  uVar67 = (ushort)((uint)iVar39 >> 0x10);
  cVar46 = (char)((ushort)sVar27 >> 8);
  if ((char)sVar27 < cVar46) {
    uVar53 = CONCAT22((short)(uVar53 >> 0x10),
                      (short)(((uint)(ushort)((ushort)((uint)(0x35cb9feb << (bVar21 & 0x1f)) >> 0x10
                                                      ) |
                                             (ushort)((0x35cb9febU >> 0x20 - (bVar21 & 0x1f)) >>
                                                     0x10)) << 0x10) >> 0xe));
  }
  uVar38 = ((int)lVar34 + 0x66536d27) -
           (uint)(0x43f9 < (ushort)(((ushort)CONCAT71((int7)((ulong)lVar56 >> 8),
                                                      (char)lVar56 << 5 |
                                                      (byte)(CONCAT11(uVar60 < 0x66e5,(char)lVar56)
                                                            >> 4)) >> 1) + 0x1dd3));
  uVar44 = (ulong)CONCAT22((short)((uint)iVar58 >> 0x10),
                           CONCAT11(cVar46 + -0x17,~((char)iVar58 * (char)lVar34) + 0x84)) *
           (ulong)CONCAT22(uVar67,(short)(char)uVar31);
  bVar18 = (byte)(uVar44 >> 0x28);
  uVar44 = uVar44 & 0xffffffff;
  uVar67 = ~uVar67;
  uVar31 = uVar31 & 0xff00;
  iVar25 = (CONCAT22((short)((uint)iVar25 >> 0x10),CONCAT11((char)uVar68,(char)iVar25)) & 0xffff6aff
           ) - (uint)bVar18;
  uVar60 = (ushort)iVar25 | 1 << (uVar68 & 0xf);
  bVar23 = (byte)uVar44;
  bVar21 = (byte)uVar60;
  bVar30 = bVar18 ^ (bVar23 == bVar18) * (bVar18 ^ bVar21);
  lVar28 = CONCAT71((int7)(uVar44 >> 8),bVar23 ^ (bVar23 != bVar18) * (bVar23 ^ bVar30));
  bVar21 = bVar21 & 0x3f;
  auVar4 = ZEXT116(bVar23 < bVar18) << 0x40 |
           ZEXT416(CONCAT22((short)((uint)iVar25 >> 0x10),uVar60));
  uVar33 = (long)CONCAT22((char)bVar41 >> 7,uVar68) << 1;
  uVar40 = uVar33 | 1;
  lVar34 = -(ulong)(bVar30 >>
                   ((SUB161(auVar4 >> bVar21,0) | SUB161(auVar4 << 0x41 - bVar21,0)) & 0x1f));
  cVar46 = ((byte)lVar34 | 0xf2) - 0xd;
  uVar44 = lVar28 * lVar28;
  uVar36 = uVar44 & 0xffffffff;
  uVar49 = CONCAT22(uVar67,(short)cVar46);
  uVar55 = (uint)CONCAT71((int7)((ulong)lVar34 >> 8),cVar46) & ~(1 << ((uint)uVar40 & 0x1f));
  sVar27 = 0xf;
  uVar60 = (ushort)uVar55;
  if (uVar60 != 0) {
    for (; uVar60 >> sVar27 == 0; sVar27 = sVar27 + -1) {
    }
  }
  cVar51 = (char)(uVar36 >> 8);
  bVar41 = (byte)uVar36;
  lVar56 = CONCAT62((int6)(uVar36 >> 0x10),CONCAT11(cVar51 << 1 | cVar51 < '\0',bVar41));
  lVar34 = CONCAT62((int6)(uVar33 >> 0x10),~(ushort)uVar40) + lVar56;
  uVar53 = CONCAT31((int3)(uVar53 + 0x87cf1267 >> 8),(char)uVar38);
  if (((ushort)(short)cVar46 & 0xff) == 0x99766cce) {
    uVar53 = uVar49;
  }
  bVar21 = (byte)(uint)(uVar44 >> 0x21);
  lVar56 = CONCAT71((int7)((ulong)lVar56 >> 8),bVar41 ^ (bVar41 != bVar21) * (bVar41 ^ bVar21));
  uVar54 = CONCAT22((ushort)(uVar26 >> 0x10) |
                    (ushort)((ulong)(1L << ((ulong)(byte)((char)iVar39 << ((byte)uVar24 & 0x1f)) &
                                           0x3f)) >> 0x10),
                    uVar31 + 0xbcb5 ^ (uVar31 | (ushort)lVar28));
  uVar53 = uVar53 ^ 0x40c0cffa;
  uVar24 = (short)uVar38 - 1;
  if (uVar53 == 0) {
    uVar24 = uVar60;
  }
  uVar69 = CONCAT31((uint3)(uVar44 >> 0x29),bVar21) ^ uVar54;
  lVar28 = (uVar44 >> 0x20) - (ulong)uVar49;
  if ((POPCOUNT(uVar69 & 0xff) & 1U) != 0) {
    lVar28 = lVar56;
  }
  uVar54 = uVar54 ^ 1 << (uVar53 & 0x1f);
  lVar70 = 0;
  if (uVar38 != 0) {
    for (; (uVar38 >> lVar70 & 1) == 0; lVar70 = lVar70 + 1) {
    }
  }
  auVar5._8_4_ = uVar69;
  auVar5._0_8_ = lVar56;
  auVar5._12_4_ = 0;
  auVar4 = auVar5 / ZEXT816(0xc000000000000000);
  auVar5 = auVar5 % ZEXT816(0xc000000000000000);
  iVar25 = (int)lVar34 + 0x600d809c + uVar55 * 2;
  uVar44 = 0xffffffff;
  if (0 < (short)uVar60) {
    uVar44 = auVar5._0_8_ & 0xffffffff;
  }
  uVar31 = (ushort)iVar25;
  if ((ushort)(uVar60 - 1) != 0 && 0 < (short)uVar60) {
    uVar24 = uVar31;
  }
  uVar49 = auVar4._0_4_ + auVar5._0_4_ * 2;
  uVar69 = (uint)CONCAT62((int6)((ulong)lVar28 >> 0x10),(short)lVar28 >> 1) | uVar54;
  uVar47 = uVar69 << 1 | (uint)((int)uVar69 < 0);
  uVar31 = uVar31 >> 1;
  uVar11 = (undefined2)((uint)iVar25 >> 0x10);
  bVar41 = (byte)lVar70;
  uVar42 = (uint)CONCAT62((int6)((ulong)lVar34 >> 0x10),0x6005);
  uVar69 = uVar49 + uVar42;
  if (!CARRY4(uVar49,uVar42) && uVar69 != 0) {
    uVar24 = auVar4._0_2_;
  }
  uVar68 = (ushort)(uVar38 >> (bVar41 & 0x1f));
  if ((POPCOUNT(uVar69 & 0xff) & 1U) == 0) {
    uVar68 = uVar24;
  }
  uVar54 = uVar54 << 1;
  uVar24 = (ushort)(byte)((((ushort)uVar54 >> 2 & 1) != 0) << 7) << 1 |
           (ushort)(uVar44 <= (uVar54 | 4));
  uVar44 = (ulong)uVar24;
  cVar51 = (char)uVar31;
  cVar46 = -cVar51;
  if (cVar46 != '\0') {
    uVar69 = CONCAT22((short)(uVar69 >> 0x10),uVar24);
  }
  bVar21 = (byte)((byte)uVar54 | 4) >> 1 | (cVar51 != '\0') << 7;
  sVar27 = 0xf;
  uVar31 = (ushort)CONCAT31((int3)(CONCAT22(uVar11,uVar31 | auVar5._0_2_ << 0xf) >> 8),cVar46);
  if (uVar31 != 0) {
    for (; uVar31 >> sVar27 == 0; sVar27 = sVar27 + -1) {
    }
  }
  uVar67 = uVar67 >> 1 | (ushort)(((uint)((POPCOUNT(uVar60 - 1 & 0xff) & 1U) == 0) << 0x1f) >> 0x10)
  ;
  uVar49 = (uint)CONCAT62(auVar4._2_6_,auVar4._0_2_ * (short)uVar47);
  uVar38 = uVar49 << (bVar41 & 0x1f) | uVar49 >> 0x20 - (bVar41 & 0x1f);
  uVar53 = uVar53 << (bVar41 & 0x1f);
  cVar46 = (char)(uVar38 >> 8);
  uVar12 = (undefined2)(uVar38 >> 0x10);
  cVar51 = cVar46 + '\x01';
  uVar49 = CONCAT31((int3)(uVar42 + 0x30c8a36 >> 8),~(byte)(uVar42 + 0x30c8a36));
  if (SCARRY1(cVar46,'\x01') != cVar51 < '\0') {
    uVar49 = uVar53;
  }
  uVar38 = CONCAT31((int3)(CONCAT22(uVar12,CONCAT11(cVar51,(char)uVar38)) >> 8),
                    (char)uVar38 + bVar41);
  if (POPCOUNT((ushort)uVar53 & uVar24 & 0xff) == '\0') {
    uVar44 = (ulong)uVar38;
  }
  uVar54 = CONCAT31((int3)(uVar54 >> 8),bVar21) ^ 0x2000000;
  bVar41 = (byte)sVar27 | 1;
  uVar36 = (ulong)uVar49;
  sVar52 = (short)uVar38;
  bVar72 = sVar52 < 0;
  uVar24 = sVar52 << 1;
  uVar60 = uVar24 | bVar72;
  uVar53 = CONCAT22(uVar12,uVar60);
  uVar26 = (ulong)uVar53;
  uVar24 = uVar24 >> 8;
  uVar33 = (ulong)(ushort)(auVar5._2_2_ | 0x7916) << 0x10;
  if (bVar72 != (short)uVar60 < 0) {
    uVar33 = uVar36;
  }
  lVar28 = (uVar26 - 0x49551c56) + uVar36;
  cVar46 = (char)uVar44;
  uVar13 = (undefined3)(uVar54 >> 8);
  uVar38 = CONCAT31(uVar13,cVar46);
  iVar25 = CONCAT31((int3)(CONCAT22((short)(uVar55 >> 0x10),sVar27) >> 8),bVar41 + 0x67);
  if (SBORROW1(bVar41,-0x67) == false) {
    uVar47 = uVar38;
  }
  uVar55 = CONCAT31((int3)(CONCAT22(uVar11,uVar31 >> 1) >> 8),cVar46);
  bVar41 = (char)uVar49 + cVar46 * '\b';
  uVar40 = (ulong)(uVar69 >> 1) & 0x79968f3b;
  uVar42 = 0x13c3f5f0 << (bVar41 & 0x1f) | 0x13c3f5f0U >> 0x21 - (bVar41 & 0x1f);
  uVar31 = (ushort)iVar25;
  if (uVar53 != uVar42) {
    uVar26 = (ulong)uVar42;
    uVar36 = (ulong)uVar42;
  }
  uVar45 = (undefined6)(uVar36 >> 0x10);
  sVar27 = (short)uVar36 - uVar31;
  uVar48 = (ulong)uVar47;
  if (SBORROW2((short)uVar36,uVar31)) {
    uVar48 = uVar40;
  }
  bVar18 = bVar41 + (char)sVar27;
  iVar39 = -1;
  if (SBORROW4(iVar25,iVar25) != false) {
    iVar39 = CONCAT22(0xffff,(short)uVar48);
  }
  uVar60 = (short)CONCAT71((int7)(CONCAT62(uVar45,sVar27) >> 8),bVar41) << 5;
  uVar32 = uVar60 | (ushort)((ushort)uVar40 >> 1 | 0x8000) >> 0xb;
  uVar57 = (ushort)iVar39 >> (bVar18 & 0x1f);
  uVar26 = CONCAT62((int6)(uVar26 >> 0x10),(short)(char)uVar26 * (short)(char)uVar26) &
           0xffffffffffff7b2f;
  bVar41 = bVar18 - (char)uVar26;
  if ((SBORROW1(bVar18,(char)uVar26) != false) != (char)bVar41 < '\0') {
    uVar26 = CONCAT62((int6)(uVar26 >> 0x10),uVar68 & ~(1 << (uVar31 & 0xf)));
  }
  bVar18 = (byte)(uVar49 + 0xe7124603);
  iVar25 = CONCAT31((int3)(uVar49 + 0xe7124603 >> 8),bVar18 >> 1 | bVar18 << 7);
  uVar36 = (ulong)uVar32 & 0x3f;
  uVar40 = (ulong)uVar55 ^ 1L << uVar36;
  bVar73 = (uVar55 >> uVar36 & 1) != 0;
  cVar51 = (char)uVar32;
  sVar27 = CONCAT11(((char)(uVar60 >> 8) - cVar51) - bVar73,cVar51);
  uVar49 = (uint)CONCAT71((int7)(uVar26 >> 8),!bVar73);
  uVar53 = (uint)CONCAT62(uVar45,sVar27);
  bVar73 = CARRY4(uVar53,uVar49);
  uVar26 = lVar28 + (ulong)(uVar69 >> 1) + (ulong)bVar72 & 0xffffff00;
  if (!bVar73 && uVar53 + uVar49 != 0) {
    uVar26 = (ulong)(iVar39 + uVar55);
  }
  uVar17 = CONCAT14(bVar73,iVar25) >> 7;
  iVar39 = (int)sVar27 * (int)(short)uVar57;
  uVar29 = (uint6)(uVar33 >> 0x11);
  bVar18 = (byte)((uint)iVar39 >> 8);
  bVar23 = (byte)((uint)iVar39 >> 0x18);
  uVar68 = CONCAT11(bVar18 + bVar23,(char)iVar39);
  uVar31 = (ushort)CARRY1(bVar18,bVar23);
  uVar60 = uVar68 - uVar57;
  bVar73 = SBORROW2(uVar68,uVar57) != SBORROW2(uVar60,uVar31);
  bVar72 = uVar57 <= uVar68 && uVar31 <= uVar60;
  uVar68 = CONCAT11(bVar72,(char)((uint)iVar39 >> 0x10));
  if (bVar73 == (short)(uVar60 - uVar31) < 0) {
    uVar26 = CONCAT62((int6)(uVar26 >> 0x10),uVar24);
  }
  uVar31 = uVar60 - uVar31;
  if (bVar73) {
    uVar31 = uVar24;
  }
  lVar28 = 1L << ((ulong)uVar57 & 0x3f);
  sVar52 = (short)CONCAT71((int7)(uVar44 >> 8),bVar21);
  uVar36 = (ulong)(uint)(int)sVar52;
  sVar27 = (uVar31 - uVar68) + -1;
  uVar33 = CONCAT62(uVar29,uVar68);
  uVar44 = ((ulong)((uint)(uVar48 >> 1) & CONCAT22(uVar67,uVar24)) | 0xafb9) >> 1;
  uVar31 = (ushort)uVar40;
  uVar53 = (uint)CONCAT62((int6)((ulong)lVar28 >> 0x10),uVar57 ^ (ushort)lVar28 ^ uVar31);
  uVar49 = uVar53 + 0x1424bd37;
  uVar26 = (uVar26 & 0x7fffffff) << 1;
  if (0xebdb42c8 < uVar53) {
    uVar26 = (ulong)CONCAT22((ushort)((uint)(iVar25 << 0x1a) >> 0x10) | (ushort)(uVar17 >> 0x10),
                             (ushort)((short)uVar17 << (bVar41 & 0x1f)) >> 0xc | uVar31 << 4);
  }
  uVar48 = CONCAT62(uVar29,(short)((uint)iVar39 >> 0x10)) & 0xffffffffffff00ff;
  cVar51 = (char)uVar48;
  uVar60 = CONCAT11(bVar72,cVar51);
  if (0xf18c < (uVar31 & 0xff)) {
    uVar36 = (ulong)(ushort)(sVar52 >> 0xf) << 0x10;
  }
  lVar28 = 0;
  if (uVar33 != 0) {
    for (; (uVar33 >> lVar28 & 1) == 0; lVar28 = lVar28 + 1) {
    }
  }
  uVar50 = (undefined6)(uVar26 >> 0x10);
  uVar57 = (short)uVar26 << 1 | (ushort)((short)uVar26 < 0);
  uVar35 = CONCAT62(uVar50,uVar57);
  uVar68 = uVar68 ^ 0x2225;
  iVar25 = (int)lVar28 - (int)uVar35;
  bVar41 = (char)uVar36 + 0x94;
  uVar31 = (ushort)(uVar54 >> 0x10);
  uVar53 = CONCAT22(uVar31 >> 1,(short)(CONCAT31(uVar13,cVar46 + -0x3f) >> 1) + uVar68);
  uVar33 = CONCAT62(uVar45,sVar27) ^ 1L << ((ulong)(ushort)((short)uVar38 + 0x283b) & 0x3f);
  uVar32 = ((short)iVar25 + 0x33be) - (ushort)(((uVar60 | (ushort)uVar49) & 1) != 0);
  uVar26 = (ulong)CONCAT22((short)((uint)iVar25 >> 0x10),uVar32);
  if ((POPCOUNT(uVar32 & 0xff) & 1U) != 0) {
    uVar26 = uVar35;
  }
  lVar28 = (ulong)CONCAT22((short)(uVar44 >> 0x10),uVar60) << 1;
  cVar46 = (char)uVar33;
  uVar65 = CONCAT71((int7)(uVar35 >> 8),(char)uVar57);
  cVar51 = (cVar51 + (char)uVar40) * '\x02';
  uVar45 = (undefined6)(uVar36 >> 0x10);
  uVar35 = CONCAT62((int6)((ulong)lVar28 >> 0x10),(ushort)lVar28 >> 1) | 0x8000;
  uVar55 = CONCAT22(cVar46 >> 7,cVar46 + 0xb58) &
           (uint)CONCAT62((int6)(uVar48 >> 0x10),CONCAT11((char)((ushort)sVar27 >> 8),cVar51));
  uVar11 = (undefined2)(uVar55 >> 0x10);
  lVar28 = uVar35 - uVar26;
  uVar48 = 0;
  if (uVar35 >= uVar26) {
    uVar48 = uVar26;
  }
  uVar33 = CONCAT71((int7)(uVar33 >> 8),cVar51 + '^' + (uVar35 < uVar26));
  uVar55 = CONCAT22(uVar11,CONCAT11(~(byte)(uVar55 >> 8),(char)uVar55)) ^ 0xe331;
  bVar21 = (byte)(uVar55 >> 8);
  uVar35 = (ulong)CONCAT22(uVar11,CONCAT11(bVar21 >> 5 | bVar21 << 3,(char)uVar55));
  uVar33 = uVar33 ^ (ulong)(uVar33 != uVar35) *
                    (uVar33 ^ uVar35 ^ (ulong)(uVar33 == uVar35) * (uVar35 ^ uVar65));
  uVar60 = (ushort)uVar33;
  iVar25 = ((uint)CONCAT62((int6)(uVar40 >> 0x10),(short)uVar44) | 1) - 1;
  uVar44 = (ulong)uVar49 & 0x6321dee4;
  sVar27 = (short)((ulong)lVar28 >> 0x20) * 0x2bc0;
  uVar32 = uVar60 ^ 0x8ef;
  uVar71 = (ulong)(CONCAT22(uVar31 >> 2,
                            (short)CONCAT31((uint3)(uVar53 >> 9),(char)(uVar53 >> 1) + -1)) |
                  0x80000800) & 0xfffffffffffffdff;
  uVar55 = (int)(short)uVar32 * (int)(short)uVar32;
  cVar46 = (char)uVar55;
  uVar31 = (((short)uVar65 << 1 | 1U) << 0xb | uVar60 >> 5) & (ushort)uVar44 ^ 0xc21e;
  uVar40 = (ulong)CONCAT22(0xfffc,(ushort)CONCAT31((int3)(CONCAT22(0xfffc,(short)cVar46) >> 8),
                                                   cVar46 << 2 |
                                                   (byte)(CONCAT11((int)(short)uVar55 != uVar55,
                                                                   cVar46) >> 7)) &
                                  ~(1 << (short)((uVar55 & 0xf0001) >> 0x10)));
  uVar54 = (CONCAT22((short)((uint)(CONCAT22(uVar67,uVar24) << 1) >> 0x10),(short)uVar55) ^
           0xf5610000) & 0xffff00ff;
  uVar20 = CONCAT71((int7)(uVar71 >> 8),(byte)uVar71 >> 3);
  auVar9._2_6_ = (uint6)((ulong)(lVar28 << 0x20) >> 0x10) | (uint6)(ushort)((ulong)lVar28 >> 0x30);
  auVar9._0_2_ = (short)(uVar54 >> 1);
  uVar53 = uVar49 >> 0x18 | (uVar49 & 0xff0000) >> 8;
  lVar34 = uVar40 << 1;
  bVar21 = (byte)lVar34;
  bVar23 = (byte)(uVar44 >> 8);
  iVar39 = CONCAT31((int3)((uint)iVar25 >> 8),(char)(uVar55 >> 0x10)) << (bVar21 & 0x1f);
  auVar9._8_8_ = 0;
  auVar9 = ZEXT416(CONCAT22((short)(uVar33 >> 0x10),(short)cVar46 * (short)(char)(uVar49 >> 0x18)))
           * auVar9;
  bVar18 = auVar9[0];
  bVar30 = bVar23 ^ (bVar18 == bVar23) * (bVar23 ^ ((byte)((ulong)lVar34 >> 8) | bVar23));
  auVar6._1_7_ = auVar9._1_7_;
  auVar6[0] = bVar18 ^ (bVar18 != bVar23) * (bVar18 ^ bVar30);
  bVar18 = (byte)iVar39;
  bVar18 = bVar18 >> 3 | bVar18 << 5;
  sVar52 = (short)uVar20;
  uVar65 = (ulong)CONCAT31((int3)((uint)iVar39 >> 8),bVar18) | 0xc000000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar65;
  auVar6._8_8_ = CONCAT71(auVar9._9_7_,auVar9[8] & (byte)uVar31) & 0x3fffffffffffffff;
  uVar33 = SUB168(auVar6 / auVar2,0);
  uVar38 = SUB164(auVar6 % auVar2,0) ^ 0x559d5e46;
  uVar35 = CONCAT71((int7)((long)(uVar26 | 0x400000000) >> 9),bVar18);
  uVar37 = CONCAT71((int7)(uVar65 >> 8),bVar18 + (char)((long)(uVar26 | 0x400000000) >> 1));
  uVar24 = ((ushort)(CONCAT12((bVar21 + ((byte)((ulong)lVar28 >> 0x20) |
                                        (byte)(1 << ((ushort)iVar25 & 0xf))) & 1) != 0,sVar52) >> 5)
           | sVar52 << 0xc) & (ushort)uVar53;
  auVar7._10_2_ = (short)(uVar38 >> 0x10);
  auVar7._8_2_ = (ushort)uVar38 >> 1;
  sVar52 = uVar24 + 1;
  uVar44 = CONCAT62((int6)(uVar44 >> 0x10),CONCAT11(bVar30,(char)uVar44)) & 0x533f8d65;
  if (sVar52 != 0 && SCARRY2(uVar24,1) == sVar52 < 0) {
    uVar44 = uVar33;
  }
  uVar65 = uVar35 | 0xc000000000000000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar65;
  auVar7._0_8_ = uVar33;
  auVar7._12_4_ = 0;
  sVar61 = (short)uVar37;
  uVar24 = sVar52 + sVar61 + 1;
  uVar33 = (ulong)((CONCAT31((int3)(char)((byte)(uVar68 >> 0xc) |
                                         (byte)((ushort)(uVar68 << 0xd) >> 8)),
                             (byte)(uVar68 >> 4) >> 1) & ~(uint)(1L << (uVar40 & 0x3f)) & 0x2ca423df
                   ) + (int)uVar20 + 0x3707af0f);
  lVar28 = CONCAT62(uVar45,(ushort)CONCAT71((int7)(CONCAT62(uVar45,(short)CONCAT71((int7)(uVar36 >>
                                                                                         8),bVar41))
                                                  >> 8),bVar41) >> 1 |
                           (ushort)((bVar41 & 1) != 0) << 0xf) + uVar33;
  iVar25 = SUB164(auVar7 % auVar3,0) * -0xd0f639a;
  bVar41 = SUB161(auVar7 / auVar3,0);
  bVar23 = (byte)((uint)iVar25 >> 8);
  bVar18 = bVar23 ^ (bVar41 == bVar23) * (bVar23 ^ (byte)iVar25);
  uVar26 = CONCAT71(SUB167(auVar7 / auVar3,1),bVar41 ^ (bVar41 != bVar23) * (bVar41 ^ bVar18));
  if (0 < (short)(uVar24 & 0xcc91)) {
    uVar26 = uVar44;
  }
  uVar26 = uVar26 & 0xffffffff;
  uVar36 = (ulong)CONCAT22((short)((uint)((int)CONCAT62((int6)(uVar71 >> 0x10),sVar52) * 3 +
                                         0x54835d6c) >> 0x10),
                           (short)(char)((ushort)(sVar61 << 6) >> 8)) + 0x21f1fc4b;
  uVar68 = (ushort)uVar44 & ~(1 << ((ushort)uVar36 & 0xf));
  uVar49 = (int)(((ulong)(uVar53 | (uVar49 & 0xff00) << 8 | uVar49 * 0x1000000) & 0x7fffffff) << 1)
           << 1;
  bVar41 = (byte)uVar36;
  uVar40 = -(ulong)((uint)uVar37 >> (bVar41 & 0x1f));
  uVar67 = (ushort)(byte)(bVar18 << 1 | (char)bVar18 < '\0') << 8;
  lVar34 = (long)uVar33 >> (bVar41 & 0x3f);
  uVar60 = uVar68 << 1 | (ushort)((ulong)lVar34 >> 0x3f);
  sVar52 = (short)uVar35;
  uVar32 = sVar52 * 0x400;
  bVar18 = (byte)lVar34 ^ (byte)sVar27;
  uVar20 = CONCAT71((int7)((ulong)lVar34 >> 8),bVar18);
  uVar33 = uVar36 << (bVar41 & 0x3f) | uVar36 >> 0x40 - (bVar41 & 0x3f);
  sVar61 = (short)lVar28;
  uVar57 = uVar32 ^ (ushort)(uVar60 == uVar32) * (uVar32 ^ (ushort)uVar40);
  if (SBORROW2(uVar60,uVar32)) {
    sVar27 = (short)uVar33;
  }
  uVar19 = uVar60 ^ (ushort)(uVar60 != uVar32) * (uVar60 ^ uVar57);
  if ((short)(uVar60 + sVar52 * -0x400) < 0) {
    uVar19 = uVar67;
  }
  bVar41 = (byte)uVar33;
  uVar59 = CONCAT62(uVar50,uVar31 ^ 1 << (uVar19 & 0xf));
  uVar47 = (int)CONCAT62((int6)((ulong)lVar28 >> 0x10),sVar61 << 1 | (ushort)(sVar61 < 0)) << 0xe;
  Var14 = CONCAT18(((ushort)uVar20 >> ((ushort)uVar40 & 0xf) & 1) != 0,
                   CONCAT62((int6)(uVar48 >> 0x10),sVar27)) >> 3;
  uVar38 = (uint)CONCAT62((int6)(uVar65 >> 0x10),uVar57);
  uVar53 = uVar38 << 5;
  uVar69 = uVar38 >> 0x1b | uVar53;
  bVar23 = (byte)Var14;
  bVar30 = bVar23 ^ (bVar21 == bVar23) * (bVar23 ^ bVar41);
  uVar37 = CONCAT71((int7)(Var14 >> 8),bVar30);
  uVar38 = (uint)uVar33 & 0xd74cbe43;
  sVar27 = (short)((int)(uVar49 | (uint)CONCAT62((int6)(uVar44 >> 0x10),uVar68) >> 0x1f) >> 1) << 1;
  cVar46 = (char)sVar27;
  uVar33 = (ulong)((uint)CONCAT71((int7)(CONCAT62((int6)(short)((ushort)(uVar54 >> 0x11) |
                                                               (ushort)(((uint)((short)(uVar55 & 
                                                  0xf0001) != 0) << 0x1f) >> 0x10)),
                                                  (short)(char)bVar21) >> 8),
                                  bVar21 ^ (bVar21 != bVar23) * (bVar21 ^ bVar30)) | 0x12959770);
  uVar36 = uVar40 ^ (ulong)(uVar33 == uVar40) *
                    (uVar40 ^ (ulong)((int)uVar20 + 0x90680819) - 0x6c8ff010);
  uVar33 = uVar33 ^ (ulong)(uVar33 != uVar40) * (uVar33 ^ uVar36);
  uVar55 = (uint)(CONCAT62((int6)(uVar26 >> 0x10),
                           CONCAT11(((char)(uVar26 >> 8) - bVar41) - (uVar60 < uVar32),(char)uVar26)
                          ) >> 1) | 0xa020a6b;
  uVar31 = (ushort)uVar33;
  uVar60 = (ushort)CONCAT31((int3)(char)((ulong)lVar34 >> 8),bVar18 + cVar46);
  bVar21 = (byte)uVar38;
  uVar10 = (uint3)(CONCAT22((short)((int)uVar49 >> 0x11),sVar27) >> 8);
  bVar18 = cVar46 << (bVar21 & 0x1f);
  uVar44 = 0;
  if (uVar69 != 0) {
    for (; (uVar69 >> uVar44 & 1) == 0; uVar44 = uVar44 + 1) {
    }
  }
  uVar49 = (uint)uVar59 & 0x1f;
  if ((uVar38 >> uVar49 & 1) == 0) {
    uVar59 = CONCAT62(uVar50,(short)uVar69);
  }
  bVar21 = (bVar21 ^ (byte)(1 << uVar49)) & 0x1f;
  uVar49 = uVar47 << bVar21 | uVar47 >> 0x20 - bVar21;
  uVar49 = CONCAT22((short)(uVar49 >> 0x10),(ushort)uVar49 & (ushort)uVar37);
  lVar28 = (uVar44 & 0xffff) - 1;
  lVar34 = uVar36 + 0xc802fe;
  iVar25 = (int)lVar34;
  uVar32 = (short)uVar44 - (short)CONCAT31(uVar10,bVar18) & 0xff;
  uVar68 = (ushort)uVar55 >> 6;
  uVar13 = (undefined3)(uVar53 >> 8);
  uVar38 = (int)CONCAT62((int6)(uVar33 >> 0x10),
                         uVar31 ^ (ushort)(uVar31 != uVar60) *
                                  (uVar31 ^ uVar60 ^ (ushort)(uVar31 == uVar60) *
                                                     (uVar60 ^ (uVar24 & 0xcc91 | uVar67)))) +
           0x6638cca8U & 0xffff0000 ^ 0xfa8d9330;
  uVar44 = 0x3f;
  if (uVar38 != 0) {
    for (; uVar38 >> uVar44 == 0; uVar44 = uVar44 - 1) {
    }
  }
  bVar23 = (byte)uVar32 & 0x1f;
  uVar54 = CONCAT31(uVar10,bVar18 & (byte)uVar68);
  uVar47 = (int)uVar37 + 0x920db7ad;
  bVar21 = (char)uVar69 - 0x3e;
  uVar42 = CONCAT31(uVar13,bVar21) ^ 0x2000;
  uVar26 = CONCAT62((int6)((ulong)lVar28 >> 0x10),
                    CONCAT11((char)((ulong)lVar28 >> 8) * '\x02',(char)lVar28 << 1)) & 0xffffffff |
           1;
  if (bVar21 == 0 || (SCARRY1((char)uVar69,-0x3e) != SCARRY1(bVar21,'\0')) != (char)bVar21 < '\0') {
    uVar26 = (ulong)uVar42;
  }
  iVar39 = ((uVar49 << bVar23 | uVar49 >> 0x20 - bVar23) - (int)(uVar44 ^ 0xffffffffcaf2047e)) + -1;
  lVar56 = (long)(uVar44 ^ 0xffffffffcaf2047e) >> 1;
  uVar15 = (uint3)(uVar55 >> 8);
  lVar28 = 0x3f;
  if (uVar26 != 0) {
    for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  uVar49 = (uint)lVar28;
  cVar46 = (char)(CONCAT31(uVar15,~(byte)uVar55) >> 1);
  if (cVar46 == 'm' || SCARRY1(cVar46,-0x6d) != (char)(cVar46 + -0x6d) < '\0') {
    iVar25 = (int)CONCAT62((int6)((ulong)lVar34 >> 0x10),
                           (short)((0xffffffffU >> (bVar41 & 0x1f) | -1 << 0x20 - (bVar41 & 0x1f))
                                  >> 1));
  }
  lVar34 = ((long)(short)uVar42 - (ulong)uVar54) + -1;
  sVar27 = (short)(uVar38 >> 0x10);
  sVar52 = (short)iVar39;
  sVar62 = sVar52 >> 1;
  uVar38 = (uint)CONCAT71((int7)(uVar26 >> 8),0xab) >> 1 | (int)(short)uVar42 << 0x1f;
  sVar61 = (short)lVar56;
  if (uVar38 != 0) {
    uVar49 = (uint)CONCAT62((int6)((ulong)lVar28 >> 0x10),sVar61);
  }
  uVar55 = uVar55 >> 0x12;
  if (uVar42 == 0xffffffff) {
    uVar55 = iVar25 << 1;
  }
  uVar16 = CONCAT22((short)(uVar42 + 1 >> 0x10),(ushort)(uVar42 + 1) >> 0xe);
  uVar69 = 0;
  if (uVar54 != 0) {
    for (; (uVar54 >> uVar69 & 1) == 0; uVar69 = uVar69 + 1) {
    }
  }
  iVar25 = 0x1f;
  uVar43 = (uint)CONCAT62((int6)((ulong)lVar34 >> 0x10),(ushort)lVar34 >> 1 | (short)uVar54 << 0xf);
  if (uVar43 != 0) {
    for (; uVar43 >> iVar25 == 0; iVar25 = iVar25 + -1) {
    }
  }
  uVar63 = CONCAT31((int3)(CONCAT22((short)((uint)iVar39 >> 0x10),sVar62) >> 8),(char)sVar62 + -0x70
                   ) & uVar49;
  if (-1 < (int)uVar63) {
    uVar63 = CONCAT22((short)(uVar63 >> 0x10),sVar61);
  }
  uVar49 = uVar49 << 1;
  cVar66 = (char)(uVar54 >> 5);
  cVar51 = -cVar66;
  uVar26 = CONCAT71((uint7)(uVar10 >> 5) |
                    (uint7)(((ulong)(byte)((short)((short)(((int)sVar27 << 0x10) >> 1) * sVar62) >>
                                          0xf) << 0x3b) >> 8),cVar51);
  uVar44 = (long)sVar61;
  if (cVar66 == '\0' && cVar51 != '\0') {
    uVar44 = (ulong)uVar42;
  }
  bVar18 = (byte)uVar69 & 0x1f;
  uVar10 = (uint3)((uint)iVar25 >> 8);
  iVar39 = (uint)(ushort)uVar44 * (uVar49 & 0xffff);
  uVar20 = CONCAT62((int6)(uVar44 >> 0x10),(short)iVar39);
  bVar41 = (byte)(uVar69 + 0xa816dfb7) & 0x3f;
  uVar42 = (uint)(CONCAT18(uVar26 < 0xf93185a2,uVar20) >> bVar41) | (int)uVar20 << 0x41 - bVar41;
  uVar44 = (long)CONCAT31((int3)((uint)(CONCAT31(uVar15 >> 1 |
                                                 (uint3)(((uVar68 | uVar47) << 0x1f) >> 8),
                                                 cVar46 + 'z') >> (bVar21 & 0x1f)) >> 8),
                          ((char)(sVar27 >> 4) + '\x13') - (uVar69 < 0x57e92049)) * 0x4eb0fc3f;
  return (ulong)(uVar42 >> 0x14 | uVar42 << 0xc) + (uVar44 & 0xffffffff) +
         (ulong)(uVar69 + 0xa816dfb7) +
         (ulong)CONCAT22((short)(uVar38 >> 0x10),(short)((uint)iVar39 >> 0x10)) +
         (ulong)(CONCAT31(uVar13,~bVar21) ^ 0x2000) +
         (((ulong)uVar49 - 0x7f79fbddd) - (ulong)((long)(int)uVar44 != uVar44)) + (ulong)uVar16 +
         (ulong)(uVar43 ^ uVar16) + (ulong)(uVar55 >> 0x1f | uVar55 << 1) +
         (ulong)(((uint)lVar56 >> bVar18 | uVar49 << 0x20 - bVar18) << 9 | (uint)(uVar10 >> 0xf)) +
         (ulong)CONCAT31((int3)(CONCAT22((short)(uVar47 >> 0x10),sVar52 + 0xe4 + uVar32) >> 8),
                         (uVar69 >> (uVar55 & 0x1f) & 1) != 0 || uVar54 == 0) +
         CONCAT71((int7)((ulong)uVar59 >> 8),(char)uVar59 + -0x47 + ((byte)(uVar53 >> 8) & 1)) +
         (ulong)(uVar63 >> 0xd | uVar63 << 0x13) + (ulong)CONCAT31(uVar10,(char)iVar25 + -1) +
         uVar26;
}



// WARNING: Removing unreachable block (ram,0x00402d81)
// WARNING: Removing unreachable block (ram,0x00402d20)
// WARNING: Removing unreachable block (ram,0x00402d1c)
// WARNING: Removing unreachable block (ram,0x00402241)
// WARNING: Removing unreachable block (ram,0x004025b3)
// WARNING: Removing unreachable block (ram,0x00402f7f)

long log_size_10_var_001(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined4 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  uint uVar12;
  undefined5 uVar13;
  char cVar14;
  char cVar15;
  byte bVar23;
  short sVar16;
  ushort uVar17;
  ushort uVar18;
  ulong uVar19;
  ulong uVar20;
  uint6 uVar24;
  ulong uVar21;
  undefined6 uVar25;
  undefined8 uVar22;
  byte bVar26;
  uint uVar27;
  byte bVar30;
  long lVar28;
  ulong uVar29;
  undefined uVar31;
  uint uVar32;
  int iVar33;
  ulong uVar34;
  byte bVar35;
  short sVar36;
  int iVar37;
  short sVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  ushort uVar45;
  uint uVar46;
  ushort uVar47;
  uint uVar48;
  int iVar49;
  long lVar50;
  byte bVar51;
  int iVar52;
  ulong uVar53;
  undefined6 uVar54;
  char cVar55;
  short sVar56;
  short sVar57;
  int iVar58;
  uint uVar59;
  ushort uVar60;
  ushort uVar61;
  uint uVar62;
  ulong uVar63;
  bool bVar64;
  char in_AF;
  
  bVar23 = in_AF << 4 | 0x83;
  uVar22 = 0xffffffffdbae8300;
  sVar16 = ((ushort)CONCAT71((int7)(CONCAT62(0xd9cc084e9be8,CONCAT11(bVar23,0xc9)) >> 8),8) ^ 0xc9)
           * -0xcc6;
  if ((int)CONCAT62(0x64c5cec3d8b6,(ushort)bVar23 << 8) != -0x7496f9c1) {
    uVar22 = 0xffffffffdbae253c;
  }
  iVar37 = (int)uVar22 + -0x2d8d8ef9;
  uVar39 = (int)CONCAT71((int7)((ulong)uVar22 >> 8),(byte)uVar22 + 0x36) * -0x36f9a82d;
  uVar29 = (ulong)((uint)CONCAT71((int7)(CONCAT62(0xd9cc084e9be8,sVar16) >> 8),(char)sVar16 << 1) |
                  1) * 0x442066c9;
  uVar19 = uVar29 & 0xffffffff;
  cVar15 = (char)(uVar29 >> 0x28);
  uVar31 = (undefined)(uVar29 >> 0x20);
  bVar23 = -cVar15;
  uVar43 = CONCAT31((int3)((uint)iVar37 >> 8),(char)(uVar19 >> 8));
  cVar14 = -0x4e - (char)uVar19;
  uVar32 = (uint)CONCAT71(0xffffffffffffd9,cVar14);
  if (cVar14 != '\0' && (SBORROW1(-0x4e,(char)uVar19) != false) == cVar14 < '\0') {
    uVar32 = 0xff7673;
  }
  uVar19 = (ulong)(uint)((int)uVar19 << 0xb) & 0xffffffffffff318e;
  uVar19 = (ulong)CONCAT61((int6)(uVar19 >> 0x10),
                           (byte)(uVar19 >> 8) >> 1 | (0xfc1122c8 < uVar32) << 7) << 8;
  uVar32 = CONCAT22((short)(uVar29 >> 0x30),CONCAT11(cVar15 * -0x80 | bVar23 >> 2,uVar31) >> 6) ^
           0x3c2ee30c;
  uVar63 = (ulong)uVar32;
  uVar29 = CONCAT62((int6)(((ulong)((byte)uVar22 < 0xca) << 0x3f) >> 0x10),0x8000);
  uVar34 = uVar63 ^ (ulong)(uVar19 == uVar63) * (ulong)(uVar32 ^ uVar43);
  uVar19 = uVar19 ^ (ulong)(uVar19 != uVar63) * (uVar19 ^ uVar34);
  sVar16 = (short)uVar43;
  sVar36 = sVar16 << 1;
  uVar9 = CONCAT22((short)((uint)iVar37 >> 0x10),sVar36);
  for (lVar40 = 0x3f; 0xfffff8e48b690006U >> lVar40 == 0; lVar40 = lVar40 + -1) {
  }
  uVar63 = CONCAT62((uint6)(uVar19 >> 0x15),
                    (short)((CONCAT22((short)CONCAT71((int7)(uVar34 >> 8),
                                                      (char)uVar34 - (char)((ushort)sVar36 >> 8)),
                                      (short)(uVar19 >> 5)) & 0x3fffffff) / 0xc000)) << 0x17;
  uVar34 = CONCAT62(0x4cda08784420,
                    (0x66c9 - CONCAT11(bVar23,uVar31)) -
                    (ushort)(0xd3c88fefeacd264d < (ulong)uVar39)) ^ 0x1a0ddc47;
  uVar45 = (ushort)uVar34 & 0xf;
  uVar13 = CONCAT14((0xc000U >> uVar45 & 1) != 0,uVar9);
  uVar43 = (uint)((uint5)uVar13 >> 0x19);
  uVar19 = 0;
  if ((uVar29 | 0x71bc32b7bfbe6be0) != 0) {
    for (; ((uVar29 | 0x71bc32b7bfbe6be0) >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
    }
  }
  uVar21 = (ulong)(uVar63 != uVar19) *
           (uVar63 ^ uVar19 ^ (ulong)(uVar63 == uVar19) * (uVar19 ^ 0x33a7cb85));
  uVar20 = uVar63 ^ uVar21;
  uVar53 = 0;
  if ((long)uVar19 < (long)uVar63) {
    uVar53 = uVar34;
  }
  uVar17 = (ushort)uVar21;
  uVar60 = (ushort)(uVar17 == 0x28b5) * ((sVar16 << 9 | (ushort)((uint5)uVar13 >> 0x19)) ^ 0x28b5) ^
           0x28b5;
  uVar17 = uVar17 ^ (ushort)(uVar17 != 0x28b5) * (uVar17 ^ uVar60);
  uVar45 = ~(1 << uVar45) & 0xc000;
  if (uVar60 != 0x6f81) {
    uVar45 = uVar17;
  }
  uVar18 = (uVar17 & 0xff) * (ushort)(byte)((byte)uVar60 ^ 0x81);
  lVar40 = CONCAT62((int6)(uVar20 >> 0x10),uVar18);
  uVar32 = CONCAT22(0x17a3,uVar60) ^ 0x8b696f87;
  uVar17 = 0xf;
  sVar16 = (short)(uVar20 >> 0x10);
  uVar60 = sVar16 >> 0xf;
  if (sVar16 < 0) {
    for (; uVar60 >> uVar17 == 0; uVar17 = uVar17 - 1) {
    }
  }
  uVar42 = (uVar17 | 0xdbae0000) * 0x20;
  bVar23 = (byte)uVar43 ^ 2;
  bVar35 = bVar23 - 8;
  lVar50 = (ulong)CONCAT22(0xd77d,((uVar43 & 2) != 0) + 0x7087) - 0xba13e6f;
  uVar43 = uVar32;
  if (uVar60 <= uVar18) {
    uVar43 = 0x33a7ce85;
  }
  bVar51 = (char)(uVar39 >> 7) + 2;
  sVar16 = (uVar45 + 0x527c) * 0x1e83;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar29 | 0xf1bc32b7bfbe6be0;
  auVar4._8_8_ = ((ulong)uVar42 - 0x204de81f) + lVar40 * 0x674f9d0a & 0x3fffffffffffffff;
  auVar4._0_8_ = lVar40 * 0x33a7ce85;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar29 | 0xf1bc32b7bfbe6be0;
  auVar5._8_8_ = SUB168(auVar4 % auVar1,0) & 0x3fffffffffffffff;
  auVar5._0_8_ = SUB168(auVar4 / auVar1,0);
  uVar11 = (undefined2)
           ((((ulong)(((uint)(uint3)(((uint3)(uVar53 >> 8) |
                                     (uint3)((ulong)(1L << (uVar34 & 0x3f)) >> 8)) ^ 0x7bac) << 8 ^
                      0x3f195e09) & 0xffffff00) | 0x7698) << 5) >> 0x10);
  uVar48 = (int)CONCAT71((int7)((ulong)lVar50 >> 8),(byte)lVar50 | (byte)uVar32) + 1;
  uVar39 = SUB164(auVar5 % auVar2,0) | 0x2000000;
  cVar14 = SUB161(auVar5 / auVar2,0) + (char)sVar36 + (uVar42 < 0x28dcf732);
  uVar19 = CONCAT71(SUB167(auVar5 / auVar2,1),cVar14);
  bVar26 = (byte)uVar43 | bVar51;
  if ((POPCOUNT(cVar14) & 1U) == 0) {
    bVar26 = bVar51;
  }
  uVar43 = uVar42 + 0xd72308ce & 0x928bd803;
  if ((uint)uVar19 != uVar48) {
    uVar19 = (ulong)uVar48;
    uVar39 = uVar48;
  }
  bVar64 = (char)bVar51 != 0 || 0xfffffffe < (int)(char)bVar51 - 1U;
  uVar42 = CONCAT22(uVar11,sVar16);
  bVar30 = (byte)uVar43 - bVar35;
  iVar49 = uVar32 * 9 + 0x256be85b;
  uVar45 = (ushort)((byte)uVar43 < bVar35 || bVar30 < bVar64);
  uVar60 = (ushort)CONCAT31((int3)(uVar43 >> 8),bVar30 - bVar64);
  uVar17 = (ushort)uVar32 - uVar60;
  sVar38 = (uVar17 - uVar45) * -0x2f10;
  uVar39 = uVar39 + 0x8cbb157a;
  cVar55 = (-1 - (char)sVar38) - (iVar49 != 0);
  sVar36 = (short)uVar43 << 1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (long)(int)(short)(((ushort)uVar19 & 0xff) * (ushort)bVar26);
  uVar48 = uVar39 | 0xc0000000;
  uVar19 = (ulong)(SUB164(auVar6 * ZEXT816(0x82e0000000000000),8) & 0x3fffffff) << 0x20 |
           (ulong)(SUB168(auVar6 * ZEXT816(0x82e0000000000000),8) == 0) << 8;
  uVar63 = uVar19 / uVar48 & 0xffffffff;
  cVar14 = (char)uVar63;
  uVar24 = (uint6)(uVar63 >> 0x10);
  uVar10 = (undefined2)(uVar48 >> 0x10);
  bVar26 = (byte)sVar36;
  lVar50 = (ulong)uVar42 + 0x444c1514;
  lVar40 = (ulong)(uint)(CONCAT22((short)(uVar32 >> 0x10),sVar38) >> 1) * -0x6d023b53;
  iVar37 = CONCAT31((int3)(CONCAT22((short)(uVar43 >> 0x10),sVar36) >> 8),(char)bVar26 >> 1);
  bVar30 = (byte)sVar16;
  cVar15 = (char)(uVar39 >> 8) >> 7;
  iVar33 = ((int)(uVar19 % (ulong)uVar48 >> 0x14) -
           ((uint)(((uVar29 | 0xf1bc32b7bfbe6be0) >> 0x11) << 0x10) >> 1)) + 0x43d60a92;
  iVar33 = CONCAT22((short)((uint)iVar33 >> 0x10),
                    CONCAT11((char)((uint)iVar33 >> 8) >> 1,(char)iVar33));
  iVar49 = (int)CONCAT71((int7)((ulong)(uint)-iVar49 - 0x24c23773 >> 8),bVar23 + 0x54) + 0x575878c;
  if (iVar37 + 0x606bc9d9 != -1 &&
      (SCARRY4(iVar37,0x606bc9d9) != SCARRY4(iVar37 + 0x606bc9d9,1)) == iVar37 + 0x606bc9da < 0) {
    iVar49 = iVar33;
  }
  uVar18 = ((short)(char)(cVar14 * cVar14) << bVar26 | (ushort)iVar37 >> 0x10 - bVar26) + 1;
  uVar47 = (ushort)CONCAT31((int3)(CONCAT22(uVar10,(short)uVar39 >> 0x1e) >> 8),
                            cVar15 << 1 | cVar15 < '\0');
  uVar47 = uVar47 >> bVar26 | uVar47 << 0x10 - bVar26;
  iVar37 = (iVar49 - (int)CONCAT62(uVar24,uVar18)) + -0x68c25a30 + (uint)((byte)lVar50 < 0x74);
  iVar49 = 0;
  if (-0x3b < (char)iVar37) {
    iVar49 = iVar37;
  }
  uVar18 = (uVar18 & 0xff) * (uVar18 >> 8);
  uVar61 = (ushort)(char)bVar51;
  uVar42 = CONCAT22(uVar11,(ushort)CONCAT31((int3)(uVar42 >> 8),
                                            bVar30 >> bVar26 | bVar30 << 8 - bVar26) &
                           ~(1 << ((byte)(cVar55 * '\x02' | cVar55 < '\0') & 0xf))) ^ 0x7a32;
  uVar19 = CONCAT62((int6)((ulong)lVar50 >> 0x10),
                    (short)CONCAT71((int7)((ulong)lVar50 >> 8),-((byte)lVar50 + 0x8c))) &
           0xfffffffffffffffe;
  uVar63 = (ulong)CONCAT22((char)bVar51 >> 7,uVar61 ^ (ushort)(uVar18 == uVar61) * (uVar61 ^ uVar18)
                          ) | 0xffffffffcc746d0c;
  uVar43 = (uint)((int)CONCAT62((int6)((ulong)lVar40 >> 0x10),(short)lVar40 << 1) << bVar26) >> 1;
  uVar39 = CONCAT22(0xff,(short)iVar37 << 0xf | 0x7fc5) | 0xc0000000;
  uVar29 = (ulong)((iVar33 << 1 ^ 0xb6bba199U) & ~(uint)(1L << (uVar63 & 0x3f)) & 0x3fffffff) <<
           0x20 | (ulong)uVar24 << 0x10;
  iVar37 = (CONCAT31((int3)(CONCAT22(uVar10,uVar47) >> 8),(byte)uVar47 ^ bVar23 + 0x54) >> 1) -
           iVar37;
  lVar40 = 0x3f;
  if (uVar19 != 0) {
    for (; uVar19 >> lVar40 == 0; lVar40 = lVar40 + -1) {
    }
  }
  iVar33 = 0;
  if ((uint)lVar40 != 0) {
    for (; ((uint)lVar40 >> iVar33 & 1) == 0; iVar33 = iVar33 + 1) {
    }
  }
  bVar23 = (byte)iVar33;
  bVar51 = bVar23 ^ (bVar23 == 0x5e) * bVar23;
  uVar19 = (ulong)(uVar43 | 0xc0000000);
  uVar29 = ((ulong)(((uint)(uVar29 % (ulong)uVar39) ^ uVar42) & 0x3fffffff) << 0x20 |
           CONCAT71((int7)(CONCAT62((uint6)(uVar29 / uVar39 >> 0x10) & 0xffff,0xf15e) >> 8),
                    (bVar23 != 0x5e) * (bVar51 ^ 0x5e)) ^ 0x5e) / uVar19 & 0xffffffff;
  lVar41 = uVar19 - 0x41979e87;
  uVar43 = (int)CONCAT62((int6)(uVar63 >> 0x10),(short)uVar43) + 0xf027d5eeU ^ 0x100;
  iVar52 = CONCAT22((short)((uint)uVar9 >> 8),
                    CONCAT11(uVar60 <= (ushort)uVar32 && uVar45 <= uVar17,bVar35)) + 0x662095b;
  lVar50 = (CONCAT62((int6)(uVar29 >> 0x10),
                     (short)CONCAT71((int7)(uVar29 >> 8),(char)uVar29 - (char)iVar37) *
                     (short)iVar37) + 0x5e5e1412) * lVar40;
  bVar23 = ~(byte)uVar42 + 0x96;
  iVar58 = CONCAT31((int3)((uint)iVar52 >> 8),(char)iVar52 + bVar23 + '\x01');
  uVar19 = CONCAT71((int7)((ulong)lVar41 >> 8),(char)lVar41 << 1);
  uVar24 = (uint6)((ulong)(lVar50 * lVar50) >> 0x10);
  uVar63 = uVar19 & 0xffff;
  uVar29 = CONCAT71((int7)((ulong)lVar40 >> 8),0x7b);
  iVar52 = (int)(short)(lVar50 * lVar50) * (int)(short)uVar29;
  uVar29 = uVar29 & 0xffffffff;
  if ((short)iVar52 != iVar52) {
    uVar29 = (ulong)CONCAT22((short)((uint)iVar37 >> 0x10),(short)iVar37 + -0x6300);
  }
  uVar34 = CONCAT62(uVar24,(short)iVar52) & (ulong)uVar43;
  uVar32 = ~(uint)uVar19;
  uVar19 = uVar29 & 0xffffffffffffff0f;
  bVar35 = (byte)uVar19;
  uVar42 = (int)CONCAT62((uint6)(((ulong)bVar26 << 0x1a) >> 0x12),
                         0x100 << bVar35 | (ushort)iVar58 >> 0x10 - bVar35) -
           CONCAT31((int3)((uint)iVar33 >> 8),bVar51);
  uVar45 = 0xf;
  uVar17 = (ushort)uVar43;
  if (uVar17 != 0) {
    for (; uVar17 >> uVar45 == 0; uVar45 = uVar45 - 1) {
    }
  }
  uVar43 = uVar32 | 0xc0000000;
  uVar29 = (ulong)((uint)CONCAT62(SUB166(SEXT816(lVar50) * SEXT816(lVar50),10),
                                  (short)((uint)iVar52 >> 0x10)) & 0x3fffffff | 0x100) << 0x20 |
           CONCAT62((int6)(uVar34 >> 0x10),(ushort)uVar34 ^ 1 << ((ushort)uVar29 & 0xf));
  uVar34 = uVar29 / uVar43 & 0xffffffff;
  uVar60 = (ushort)uVar32;
  uVar17 = (ushort)uVar19 >> bVar35;
  iVar37 = (int)CONCAT62((int6)(uVar34 >> 0x10),(short)(char)uVar34) + 0x2014d58e;
  iVar58 = iVar58 * 2;
  cVar14 = ((byte)(CONCAT11(((uint)uVar34 >> 0x1b & 1) != 0,bVar51) >> bVar35 % 9) |
           bVar51 << 9 - bVar35 % 9) + 0x77;
  if (-1 < cVar14) {
    uVar63 = (ulong)CONCAT22((short)(uVar43 >> 0x10),uVar60 >> 8 | uVar60 << 8);
  }
  uVar60 = CONCAT11((char)((uint)iVar37 >> 8) - (char)(uVar29 % (ulong)uVar43 >> 8),(char)iVar37);
  uVar18 = uVar60 | 1 << (uVar45 & 0xf);
  sVar36 = ((ushort)(byte)(-(bVar23 ^ (byte)(1L << (SUB168(SEXT816(lVar50) * SEXT816(lVar50),8) &
                                                   0x3f)) | 1) - 1) -
           (short)(CONCAT22((short)(uVar39 >> 0x10),(short)(char)((byte)iVar49 & 0xa0)) >> 1)) -
           (ushort)((uVar60 >> (uVar45 & 0xf) & 1) != 0);
  sVar16 = 0;
  uVar60 = (ushort)iVar58;
  if (uVar60 != 0) {
    for (; (uVar60 >> sVar16 & 1) == 0; sVar16 = sVar16 + 1) {
    }
  }
  uVar43 = CONCAT22((short)((uint)iVar33 >> 0x10),sVar36) + 0x50;
  uVar29 = (ulong)((uint)CONCAT62((int6)(uVar19 >> 0x10),uVar17) >> ((byte)uVar17 & 0x1f)) | 0x7210;
  uVar32 = (uint)CONCAT62((int6)(uVar63 >> 0x10),(short)uVar63 + 0x74b5) >> 1;
  bVar23 = (char)sVar36 - cVar14;
  uVar39 = 0;
  if (uVar42 != 0) {
    for (; (uVar42 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
    }
  }
  uVar19 = CONCAT62(uVar24 & 0xffff,0x3bb6) & 0xfffffffffbffffff;
  lVar40 = 0x3f;
  if (uVar29 != 0) {
    for (; uVar29 >> lVar40 == 0; lVar40 = lVar40 + -1) {
    }
  }
  uVar17 = CONCAT11((byte)(uVar18 >> 8) ^ (byte)(iVar37 >> 0x1f),(char)uVar18);
  lVar41 = (ulong)uVar43 << 1;
  uVar60 = uVar60 - uVar17;
  uVar48 = CONCAT22((short)((uint)iVar58 >> 0x10),uVar60);
  iVar33 = (uint)uVar17 * (uint)uVar45;
  uVar17 = (ushort)iVar33 ^ 1 << (uVar60 & 0xf);
  lVar50 = (ulong)((uint)CONCAT62((int6)(uVar19 >> 0x10),(short)uVar19 + uVar45) >> 1 |
                  uVar42 * -0x80000000) + 0xa0 + (ulong)uVar43 * 0x10;
  bVar35 = (byte)uVar17;
  uVar34 = (ulong)uVar48 | 0xc000000000000000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar34;
  uVar63 = (ulong)SUB164((ZEXT516(CONCAT41((int)(CONCAT32((uint3)((int)CONCAT22((short)((uint)iVar37
                                                                                       >> 0x10),
                                                                                uVar18) >> 0x1f) >>
                                                          8,(short)((uint)iVar33 >> 0x10)) >> 8),
                                           (byte)((uint)iVar33 >> 0x10) >> 1)) << 0x40 |
                         ZEXT416(CONCAT31((int3)(CONCAT22((short)(ushort)iVar33 >> 0xf,uVar17) >> 8)
                                          ,bVar35 ^ (bVar35 != bVar23) *
                                                    (bVar35 ^ bVar23 ^ (bVar35 == bVar23) *
                                                                       (bVar23 ^ (byte)uVar32))))) /
                         auVar3,0);
  uVar45 = (ushort)((ulong)uVar39 + 0x579368be) >> 1;
  uVar48 = (uint)CONCAT62((int6)((ulong)lVar50 >> 0x10),
                          CONCAT11((byte)((ulong)lVar50 >> 8) >> ((byte)uVar29 & 0x1f),(char)lVar50)
                         ) ^ uVar48;
  uVar19 = uVar63 << 3;
  uVar63 = uVar63 >> 0x3d | uVar19;
  bVar35 = (byte)(uVar29 * 0x5f8f1e61);
  uVar17 = CONCAT11((char)((ushort)(((ushort)lVar41 | 1) + 0xda3d) >> 8),bVar35);
  uVar62 = ((uint)lVar41 & 0xffffff00) >> 1 | 0x80000000;
  uVar32 = uVar43 + uVar32 * 8 & 0xffffff00 ^ uVar62;
  uVar46 = (uint)CONCAT71((int7)(CONCAT62((int6)((ulong)uVar39 + 0x579368be >> 0x10),uVar45) >> 8),
                          (char)uVar45 + '1');
  uVar39 = uVar46 + uVar48;
  iVar37 = uVar39 + 1;
  lVar50 = (ulong)uVar62 + 0x2d21bcfa;
  uVar45 = (uVar60 - 1 &
           ~(1 << (~(ushort)(byte)((char)lVar40 + '\b' + bVar35 + (char)uVar48 +
                                  (CARRY4(uVar46,uVar48) || 0xfffffffe < uVar39)) & 0xf))) + 0xc84b;
  uVar39 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 | uVar42 * 0x1000000;
  bVar23 = (bVar35 & 0x1f) % 0x11;
  uVar60 = uVar45 >> bVar23 | uVar45 << 0x11 - bVar23;
  uVar34 = CONCAT62((int6)(uVar34 >> 0x10),uVar60);
  uVar39 = uVar39 >> (bVar35 & 0x1f) | uVar39 << 0x20 - (bVar35 & 0x1f);
  sVar16 = 0xf;
  uVar45 = (ushort)uVar63;
  if (uVar45 != 0) {
    for (; uVar45 >> sVar16 == 0; sVar16 = sVar16 + -1) {
    }
  }
  cVar14 = (char)uVar63;
  sVar36 = (ushort)(byte)(cVar14 + (char)lVar50) * (ushort)(byte)uVar39;
  lVar40 = (ulong)CONCAT22((short)(uVar43 >> 0x10),sVar16) - 0xae44398c;
  uVar60 = -(short)(char)(((char)iVar37 - (char)uVar60) + -1);
  uVar45 = (ushort)((uint)iVar37 >> 0x10);
  lVar41 = 0x3f;
  if (uVar34 != 0) {
    for (; uVar34 >> lVar41 == 0; lVar41 = lVar41 + -1) {
    }
  }
  uVar43 = ((uint)CONCAT71((int7)(CONCAT62((int6)(uVar19 >> 0x10),sVar36) >> 8),(char)sVar36) &
           0xffffff0f) + 0xda9b8fa6 >> 1;
  uVar47 = (ushort)((ulong)lVar41 >> 0x30);
  uVar18 = (short)(uVar34 & 0xffffffff) << 1 & ~(1 << (uVar47 & 0xf));
  lVar44 = CONCAT62((int6)((uVar34 & 0xffffffff) >> 0x10),uVar18);
  uVar19 = (ulong)((uint)(uVar17 >> 1) | (uint)uVar17 << 0x1f);
  uVar63 = CONCAT71((int7)(CONCAT62((int6)(uVar29 * 0x5f8f1e61 >> 0x10),uVar17) >> 8),bVar35) &
           0xffffffffffffffc4;
  uVar34 = uVar19 * -0x130676ca;
  lVar40 = (ulong)((((int)lVar40 * 0x100000 | (uint)((ulong)lVar40 >> 0x2c)) ^ 0x1c) + uVar39) << 1;
  lVar28 = (ulong)(uVar43 | uVar39 << 0x1f) << ((byte)uVar43 & 0x3f);
  sVar16 = (short)lVar28 + -0x714;
  uVar42 = CONCAT22((ushort)(uVar48 >> 0x10) & (ushort)(uVar32 >> 0x10),(ushort)uVar34 + 0xcf4c) ^
           0xf6af0000;
  bVar23 = (byte)sVar16 & 0x3f;
  uVar29 = CONCAT62((int6)((ulong)lVar28 >> 0x10),sVar16) >> bVar23 | lVar44 << 0x40 - bVar23;
  lVar41 = CONCAT62((int6)(lVar41 >> 0x3f),uVar47 - 0x81);
  uVar43 = uVar32 & 0xffffff00;
  if ((short)(uVar47 + 0x2f81) < 0) {
    uVar43 = uVar42;
  }
  bVar35 = (byte)uVar29;
  uVar20 = (ulong)uVar39 << (bVar35 & 0x3f) | (ulong)(uVar39 >> 0x40 - (bVar35 & 0x3f));
  bVar23 = (byte)uVar18 >> 1;
  lVar28 = ((ulong)(uVar43 >> 0x1d) | (ulong)(uint)(int)(short)uVar60 << 0x23) - 0x3c55ce9a;
  uVar39 = (int)CONCAT71((int7)((ulong)lVar50 >> 8),cVar14) * 0x3247861c & 0xd20f8e8d;
  uVar18 = (short)uVar60 >> 0xf;
  uVar21 = (ulong)CONCAT22(uVar18,(uVar60 & 0xff) * (ushort)bVar23) |
           1L << ((ulong)uVar39 + 1 & 0x3f);
  uVar60 = CONCAT11((byte)((ushort)(uVar18 << 1) >> 8) | (byte)(uVar42 + 0x7787d2b5 >> 8),
                    (char)(uVar18 << 1)) | 1;
  lVar50 = (ulong)(uVar17 & 0xfffe) << 1;
  uVar43 = (uint)lVar50 & 0x1f;
  uVar48 = uVar39 ^ 1 << uVar43;
  uVar53 = (ulong)(CONCAT18((uVar39 >> uVar43 & 1) != 0,lVar41) >> 0x32) | lVar41 << 0xf;
  uVar17 = (ushort)uVar21;
  uVar47 = uVar60 ^ (ushort)(uVar17 == uVar60) * (uVar60 ^ (ushort)uVar34);
  uVar25 = (undefined6)(uVar21 >> 0x10);
  uVar17 = uVar17 ^ (ushort)(uVar17 != uVar60) * (uVar17 ^ uVar47);
  iVar37 = (int)CONCAT71((int7)((ulong)lVar44 >> 8),bVar23);
  uVar22 = CONCAT71((int7)(CONCAT62(uVar25,uVar17) >> 8),
                    (byte)uVar17 | (byte)(uVar20 << 1) | (long)uVar20 < 0);
  uVar54 = (undefined6)(uVar53 >> 0x10);
  bVar23 = (byte)(uVar47 >> 8);
  uVar32 = CONCAT22(uVar18,CONCAT11(bVar23 >> 6 | bVar23 << 2,(char)uVar47)) ^ 0x8000000;
  uVar19 = (CONCAT62((int6)((ulong)lVar40 >> 0x10),
                     (ushort)lVar40 |
                     (ushort)(SEXT816((long)uVar34) != SEXT816((long)uVar19) * SEXT416(-0x130676ca))
                    ) ^ 0xbfed) << 1;
  uVar60 = (short)(char)uVar63 << (bVar35 & 0x1f);
  uVar17 = (ushort)uVar29 | (ushort)lVar50;
  uVar43 = (uint)CONCAT62((int6)(uVar63 >> 0x10),
                          (ushort)uVar63 << (bVar35 & 0xf) | (ushort)uVar63 >> 0x10 - (bVar35 & 0xf)
                         );
  uVar39 = (uint)uVar22;
  uVar42 = uVar43 + uVar39;
  uVar63 = uVar34 & 0xffffffffffffff00;
  if (!CARRY4(uVar43,uVar39)) {
    uVar63 = uVar19;
  }
  sVar16 = (short)uVar19 * 5000;
  uVar39 = 0;
  uVar46 = (uint)CONCAT62(uVar54,(short)CONCAT71((int7)(uVar53 >> 8),0xff) + (short)uVar22 +
                                 (ushort)((uVar18 >> 0xb & 1) != 0));
  if (uVar46 != 0) {
    for (; (uVar46 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
    }
  }
  uVar63 = (CONCAT71((int7)(CONCAT62((int6)(uVar63 >> 0x10),sVar16) >> 8),(char)sVar16) ^ 0x40) -
           0x4774450e;
  uVar34 = CONCAT62((int6)((ulong)lVar28 >> 0x10),
                    (byte)(((char)((ulong)lVar28 >> 8) >> 4) << 1) + 0x6a48);
  sVar16 = uVar17 + 0x80cd;
  uVar29 = CONCAT62((int6)(uVar29 >> 0x10),sVar16);
  iVar33 = 0x1f;
  if (uVar42 != 0) {
    for (; uVar42 >> iVar33 == 0; iVar33 = iVar33 + -1) {
    }
  }
  uVar48 = CONCAT22((short)(uVar48 >> 0x10),
                    (ushort)CONCAT31((int3)(uVar48 >> 8),
                                     (byte)uVar48 &
                                     ((byte)(iVar37 << 1) | iVar37 < 0) &
                                     ~(byte)(1L << ((ulong)uVar48 & 0x3f))) >> ((byte)uVar17 & 0x1f)
                   ) - (int)uVar29 & 0xfffffffe;
  uVar46 = CONCAT22(uVar45,uVar60) | 0xc0000000;
  uVar62 = (uint)CONCAT71((int7)(uVar19 >> 8),(char)uVar19 >> 9);
  sVar36 = 0xf;
  if (uVar60 != 0) {
    for (; uVar60 >> sVar36 == 0; sVar36 = sVar36 + -1) {
    }
  }
  bVar35 = (byte)sVar16;
  bVar23 = bVar35 & 0x1f;
  uVar17 = (ushort)(uVar46 << bVar23) |
           (ushort)(((uint)CONCAT62((int6)(((ulong)uVar39 ^ 0xffffffff8ec01210) >> 0x10),
                                    (short)((ulong)uVar39 ^ 0xffffffff8ec01210) + 0x3b59) >> 1 &
                    ~(1 << (uVar42 & 0x1f))) >> 0x20 - bVar23);
  lVar40 = (ulong)(uint)((int)uVar34 + -0x7dd1e502 +
                        (int)(((ulong)((((uVar32 << 1 | (uint)(uVar45 >> 0xf)) - uVar43) -
                                       (uint)((int)uVar32 < 0)) - (int)uVar29 & 0x3fffffff) << 0x20
                              | CONCAT62(uVar25,(short)(char)(byte)uVar42) & 0xffffffff) %
                             (ulong)uVar46)) << 1;
  iVar37 = (int)(uVar63 >> 0xe);
  bVar35 = bVar35 & 0x3f;
  uVar29 = uVar29 ^ (ulong)((int)lVar40 * uVar48 == uVar29) *
                    (uVar29 ^ CONCAT62(uVar54,(ushort)(byte)uVar42));
  bVar23 = (byte)uVar29;
  iVar49 = (iVar37 << 1 | (uint)(iVar37 < 0)) << (bVar23 & 0x1f);
  iVar37 = uVar62 + (int)uVar29 * 4;
  uVar34 = (uVar34 >> 0xc | uVar34 << 0x34) >> (bVar23 & 0x3f);
  uVar11 = (undefined2)((uint)iVar37 >> 0x10);
  uVar60 = ((ushort)iVar37 & 0xfed9) << 1 |
           (ushort)((ushort)(uVar63 >> bVar35) | (ushort)(lVar40 << 0x40 - bVar35)) >> 0xf;
  iVar33 = CONCAT22(uVar11,uVar60);
  bVar23 = (byte)iVar49;
  bVar23 = bVar23 >> 6 | bVar23 << 2;
  uVar43 = CONCAT31((int3)((uint)iVar49 >> 8),bVar23);
  uVar39 = iVar33 * 0x39e432a8;
  uVar29 = (ulong)uVar39;
  iVar49 = 0x4584ff9e - ((int)uVar42 >> 0x1f);
  uVar45 = CONCAT11((char)((ushort)sVar36 >> 8),(char)sVar36 << 1);
  iVar37 = (uint)uVar45 * 0xfed9;
  sVar16 = (short)((uint)iVar37 >> 0x10);
  if (sVar16 != 0) {
    uVar17 = (ushort)CONCAT71((int7)(uVar34 >> 8),(char)uVar34 * '\x02');
  }
  bVar35 = (byte)iVar37;
  bVar51 = (byte)((uint)iVar49 >> 8);
  bVar26 = (byte)iVar49;
  bVar30 = bVar51 ^ (bVar35 == bVar51) * (bVar51 ^ bVar26);
  uVar63 = CONCAT71((int7)(CONCAT62(0x4584,(short)iVar37) >> 8),
                    bVar35 ^ (bVar35 != bVar51) * (bVar35 ^ bVar30));
  if (bVar51 < bVar35) {
    uVar62 = (uint)CONCAT62((int6)(uVar19 >> 0x10),(ushort)(uVar42 >> 0x1f));
  }
  sVar36 = CONCAT11(bVar30,bVar26);
  if ((char)bVar35 <= (char)bVar51) {
    sVar36 = sVar16;
  }
  uVar32 = iVar33 * 0x23faeb45;
  uVar19 = uVar29 ^ (ulong)(uVar63 == uVar29) * (ulong)(uVar39 ^ uVar43);
  sVar16 = (short)uVar19 << ((byte)sVar36 & 0x1f);
  bVar35 = (byte)((uint)iVar37 >> 0x1d);
  uVar47 = CONCAT11(bVar35,(char)((uint)iVar37 >> 0x10));
  uVar29 = uVar63 ^ (ulong)(uVar63 != uVar29) * (uVar63 ^ uVar19) | 1L << ((ulong)uVar47 & 0x3f);
  uVar18 = (ushort)(CONCAT12((byte)((ushort)sVar16 >> 8) < bVar35,sVar36) >> 0xb) | sVar36 << 6;
  cVar14 = (char)uVar29 + bVar23;
  uVar47 = ~(uVar47 ^ 1 << ((ushort)uVar43 & 0xf));
  bVar26 = (byte)uVar18;
  bVar23 = bVar26 & 0x3f;
  lVar40 = CONCAT71((int7)(uVar29 >> 8),cVar14 * '\x02' | cVar14 < '\0');
  uVar19 = (ulong)CONCAT22(uVar11,uVar60) ^ 0xedb0;
  bVar51 = (byte)((ushort)(sVar36 << 6) >> 8);
  bVar26 = bVar26 ^ bVar51;
  uVar17 = uVar17 >> 1;
  iVar37 = (int)(short)-(short)lVar40 *
           (int)(short)(uVar47 >> 1 | (ushort)((uVar47 & 1) != 0) << 0xf);
  uVar60 = CONCAT11((char)((uint)iVar37 >> 8) + (char)((uint)iVar37 >> 0x18),(char)iVar37);
  uVar43 = 0 << (bVar26 & 0x1f) | 0U >> 0x20 - (bVar26 & 0x1f) | 0x242f9c53;
  lVar50 = (ulong)(ushort)((uVar18 << bVar23 |
                           (ushort)((uVar62 << 0xe | uVar62 >> 0x12) >> 0x40 - bVar23)) << 1) +
           (ulong)uVar60;
  uVar39 = ((ushort)(((short)CONCAT31(0x5a,(char)sVar16) - ((ushort)uVar48 >> ((byte)sVar36 & 0x1f))
                     ) - (ushort)(lVar40 != 0)) | 0xbaac0000) & ~(1 << (uVar17 & 0x1f)) |
           (uint)(1L << ((ulong)((ushort)((uint)iVar37 >> 0x10) & 0xff) & 0x3f));
  uVar42 = uVar39 + 0x9913c8b7;
  lVar41 = CONCAT62((uint6)(ushort)(uVar32 >> 0x11) |
                    (uint6)(((ulong)((uVar32 & 1) != 0) << 0x3f) >> 0x10),
                    (short)(uVar32 >> 1) << 1 | (ushort)(0x66ec3748 < uVar39));
  iVar37 = (uint)uVar60 * (uVar42 & 0xffff);
  uVar47 = (ushort)((uint)iVar37 >> 0x10);
  uVar29 = (ulong)uVar45 * 2;
  uVar45 = (ushort)iVar37 ^ (ushort)(1L << (uVar29 & 0x3f));
  lVar40 = uVar29 - 0x2399b507;
  bVar23 = (byte)lVar40 & 7;
  uVar60 = (ushort)lVar40;
  uVar18 = uVar60 ^ (ushort)(uVar45 == uVar60) * (uVar60 ^ uVar17);
  uVar45 = uVar45 ^ (ushort)(uVar45 != uVar60) * (uVar45 ^ uVar18);
  bVar35 = (byte)(uVar45 >> 8);
  bVar30 = (byte)(uVar18 >> 8);
  cVar14 = bVar35 - bVar30;
  cVar15 = (char)uVar45;
  if ((SBORROW1(bVar35,bVar30) != SBORROW1(cVar14,'\x01')) == (char)(cVar14 + -1) < '\0') {
    uVar43 = CONCAT22((short)(uVar43 >> 0x10),uVar47);
  }
  sVar36 = CONCAT11(0x72U >> bVar23 | 'r' << 8 - bVar23,0x6b) +
           (CONCAT11(bVar51,bVar26 << 1) >> 1 | (ushort)((char)bVar26 < '\0') << 0xf) +
           (ushort)(bVar35 < bVar30 || cVar14 == '\0');
  iVar49 = (char)uVar17 + -0x576a684f + (uint)CARRY1((byte)(uVar47 >> 1),bVar30);
  sVar57 = (ushort)(byte)lVar50 * 2 + (ushort)uVar42 + 1;
  iVar33 = ((uint)CONCAT71((int7)(lVar41 >> 9),(char)(lVar41 >> 1) + (char)uVar18) | uVar42) -
           uVar42;
  iVar37 = iVar33 + 4;
  bVar35 = (byte)sVar36 | (byte)((ushort)sVar36 >> 8);
  uVar60 = ((ushort)iVar33 ^ 0x62d7) + 0x8722;
  uVar62 = CONCAT22((short)((uint)iVar33 >> 0x10),uVar60);
  uVar45 = (ushort)(uVar48 >> 0x1c);
  bVar23 = (byte)iVar37;
  iVar58 = CONCAT31((int3)((uint)iVar49 >> 8),((char)iVar49 - cVar15) + -1) * 2;
  sVar56 = ((ushort)((ushort)((byte)((ulong)lVar50 >> 8) & 0xfe) << 8) >> 1) + 0xb;
  sVar38 = sVar56 << (bVar23 & 0x1f);
  uVar63 = (ulong)CONCAT22(sVar56 >> 0xf,sVar38);
  iVar52 = CONCAT22(CONCAT11(cVar14 + -1,cVar15),uVar17) << 1;
  iVar33 = iVar58 + (uint)(ushort)((ushort)(CONCAT12(bVar23 < bVar35,uVar45) >> 7) | uVar45 << 10) *
                    8 + 0x10a9b4e4;
  sVar16 = (short)(char)(((byte)iVar52 | (byte)(uVar42 >> 0x1f)) ^ bVar35) *
           (short)(char)((uint)iVar33 >> 8);
  iVar49 = CONCAT22((short)((uint)iVar37 >> 0x10),(short)iVar58 << (bVar23 & 0x1f)) + -0x4c080efe;
  uVar27 = CONCAT31(CONCAT21((short)((uint)iVar49 >> 0x10),(char)iVar49),
                    (char)iVar49 + (char)((uint)iVar49 >> 8));
  uVar29 = CONCAT71((int7)(uVar19 >> 8),(byte)uVar19 >> 1) & 0xffffffffae31f73d | 0xc000;
  uVar32 = (uint)(ushort)uVar29;
  uVar48 = CONCAT22((short)iVar33,sVar16) & 0x3fffffff;
  uVar46 = uVar48 / uVar32;
  uVar12 = CONCAT22((short)((uint)iVar52 >> 0x10),(short)uVar46);
  uVar19 = (ulong)CONCAT22((short)((uint)iVar58 >> 0x10),(ushort)iVar37 | (ushort)uVar27);
  uVar39 = 0;
  if (uVar12 != 0) {
    for (; (uVar12 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
    }
  }
  uVar17 = CONCAT11((char)((ushort)sVar57 >> 8),(char)sVar57 << 3) & (ushort)uVar42;
  uVar27 = uVar27 & ~(1 << ((uVar60 & 0xf8) >> 3));
  lVar50 = uVar19 - 0xbee33f21;
  uVar59 = (uint)lVar50;
  uVar19 = (ulong)(uVar19 < 0xbee33f21) << 0x20 |
           CONCAT71((int7)(CONCAT62(0x6096,sVar36) >> 8),
                    (bVar35 - (char)(uVar48 % uVar32 >> 8)) + -1);
  lVar40 = uVar19 << 9;
  uVar32 = (uint)(uVar19 >> 0x18);
  uVar42 = (uint)lVar40;
  uVar48 = uVar32 | uVar42;
  bVar23 = (byte)uVar27;
  iVar37 = (int)uVar29 << (bVar23 & 0x1f);
  uVar45 = (short)(char)((ushort)sVar16 >> 8) & uVar17;
  uVar29 = CONCAT62((int6)(((ulong)uVar43 << 0x20) >> 0x10),sVar56);
  if ((POPCOUNT(uVar45 & 0xff) & 1U) != 0) {
    uVar29 = (ulong)uVar27;
  }
  uVar17 = uVar17 & uVar45;
  if ((uVar46 & 0x100) == 0 && (uVar46 & 0x4000) == 0) {
    uVar59 = (uint)CONCAT62((int6)((ulong)lVar50 >> 0x10),(short)uVar29);
  }
  uVar43 = CONCAT22((short)((uint)iVar37 >> 0x10),
                    ((short)iVar37 + -0x9a5) - (ushort)((ushort)uVar59 < 0x45f4));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = CONCAT44(0,uVar12);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = CONCAT44(0,uVar12);
  lVar50 = (ulong)uVar39 - (ulong)uVar48;
  uVar29 = CONCAT62((int6)(uVar29 >> 0x10),uVar17 + sVar38 * 8);
  bVar35 = SUB161(auVar7 * auVar8,1);
  cVar14 = bVar23 + bVar35;
  bVar64 = SCARRY1(bVar23,bVar35) != SCARRY1(cVar14,'\0');
  uVar39 = CONCAT31((int3)(uVar27 >> 8),cVar14);
  if (bVar64 != cVar14 < '\0') {
    uVar39 = CONCAT22((short)(uVar27 >> 0x10),(short)uVar48);
  }
  uVar19 = (ulong)(uVar62 << 0x1d | uVar62 >> 3);
  if (!bVar64) {
    uVar39 = CONCAT22((short)(uVar39 >> 0x10),uVar45);
    uVar19 = (ulong)uVar48;
  }
  uVar46 = (uint)uVar45;
  if (cVar14 == '\0' || bVar64 != cVar14 < '\0') {
    uVar46 = uVar43;
  }
  bVar26 = (byte)uVar39;
  uVar34 = (ulong)(0xffffffff36875639 < uVar29 ||
                  CARRY8(uVar29 + 0xc978a9c6,(ulong)CARRY1(bVar23,bVar35))) << 0x20 |
           CONCAT62((int6)((ulong)lVar50 >> 0x10),(short)lVar50 << 1) & 0xffffffff | 1;
  uVar22 = CONCAT71((int7)(uVar19 >> 8),(char)uVar19 >> (bVar26 & 0x1f));
  uVar39 = uVar39 >> (bVar26 & 0x3f);
  uVar62 = uVar32 | uVar42 & 0xffff | 0x32d7e7c4;
  iVar37 = uVar39 + 0x405ddd7c;
  if (uVar39 < 0xbfa22284) {
    uVar43 = (uint)uVar22;
  }
  iVar33 = ((uint)(uVar34 >> (bVar26 & 0x1f)) | (uint)(uVar34 << 0x21 - (bVar26 & 0x1f))) +
           0xc44eab2a;
  uVar32 = (uVar32 | uVar42 & 0xffff) + (int)uVar29 | uVar46;
  lVar50 = (long)(int)uVar62 * (long)(int)uVar62;
  bVar23 = (byte)iVar37;
  iVar49 = (int)(uint)uVar17 >> (bVar23 & 0x1f);
  bVar23 = bVar23 & 0x1f;
  uVar39 = iVar37 << bVar23 | uVar59 >> 0x20 - bVar23;
  sVar16 = (short)uVar22;
  uVar18 = sVar16 << 1 | (ushort)(sVar16 < 0);
  uVar11 = (undefined2)((uint)iVar33 >> 0x10);
  lVar28 = uVar63 - 1;
  uVar34 = (ulong)uVar39 | 0xc000;
  uVar63 = (ulong)CONCAT22(uVar11,(short)CONCAT31(CONCAT21(uVar11,(char)((uint)iVar33 >> 8) << 1),
                                                  lVar28 != 0 && uVar63 != 0)) & 0xffffffffffff3fff;
  uVar45 = (ushort)(byte)(uVar34 >> 8);
  uVar17 = (ushort)uVar63;
  bVar23 = (byte)uVar39;
  uVar39 = CONCAT22((short)((uint)iVar49 >> 0x10),(short)iVar49 << (bVar23 & 0x1f));
  uVar21 = -CONCAT62((int6)((ulong)~uVar43 - SUB168(auVar7 * auVar8,8) >> 0x10),
                     (short)((ulong)lVar50 >> 0x20));
  uVar34 = CONCAT71((int7)(uVar34 >> 8),bVar23) & 0xffffffffffffff0f;
  uVar60 = (ushort)uVar34 >> (sbyte)uVar34 | 0x6da4 << 0x10 - (sbyte)uVar34;
  lVar41 = CONCAT62((int6)(uVar34 >> 0x10),uVar60);
  bVar23 = (byte)(uVar60 >> 8);
  sVar16 = -CONCAT11(((char)(uVar17 % uVar45) - bVar23) + -1,(char)(uVar17 / uVar45));
  uVar34 = uVar21 & 0xffff;
  uVar43 = CONCAT22((short)((ulong)lVar40 >> 0x10),
                    CONCAT11(((char)(uVar48 >> 8) - (char)sVar16) + -1,0x60));
  lVar40 = (ulong)uVar32 * 2 + CONCAT62((int6)(uVar63 >> 0x10),sVar16);
  uVar42 = CONCAT22((short)(uVar46 >> 0x10),
                    (ushort)uVar46 & ~(1 << ((short)(uVar29 >> 1) + (short)iVar33 & 0xfU)));
  if (-1 < (char)((char)((ushort)sVar16 >> 8) - (char)sVar16)) {
    uVar42 = uVar43;
  }
  uVar48 = (uint)(CONCAT62((int6)((ulong)lVar28 >> 0x10),(short)lVar28 << 1) >> 1);
  bVar51 = (byte)lVar40;
  bVar26 = (byte)uVar60 & 7;
  uVar45 = CONCAT11(bVar23,bVar51 + 1);
  bVar35 = (byte)uVar60 & 0xf;
  uVar17 = (ushort)CONCAT71((int7)((ulong)lVar40 >> 8),bVar51 >> bVar26 | bVar51 << 8 - bVar26);
  return (ulong)uVar45 + (uVar34 >> 1) + lVar41 + (ulong)(byte)(0x5f - (0x9f < bVar23)) * 0x100 +
         (ulong)uVar42 + uVar21 + (long)(int)uVar39 * 0x7d724300 +
         CONCAT71((int7)(CONCAT62((int6)(uVar19 >> 0x10),uVar18) >> 8),(char)uVar18 - (char)uVar32)
         + (ulong)(uVar48 >> 0x18 | (uVar48 & 0xff0000) >> 8 | (uVar48 & 0xff00) << 8 |
                  uVar48 << 0x18) +
         CONCAT62((int6)((ulong)lVar40 >> 0x10),uVar17 << bVar35 | uVar17 >> 0x10 - bVar35) +
         (ulong)(uint)((int)uVar34 + CONCAT31((int3)(uVar43 >> 8),bVar23 + 0x60) >> 1) +
         (ulong)uVar39 + (ulong)(uVar45 + 0x2e3dfe50 + (int)lVar41) +
         (ulong)((int)((ulong)lVar50 >> 0x20) << 1 | uVar42 >> 0x1f) + 0x7d6dfd92aa39;
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
  undefined auVar4 [16];
  undefined auVar5 [16];
  long lVar6;
  undefined3 uVar7;
  uint3 uVar8;
  uint6 uVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined6 uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  sbyte sVar19;
  short sVar20;
  uint uVar21;
  ulong uVar22;
  char cVar23;
  ulong uVar24;
  undefined8 uVar25;
  char cVar26;
  ushort uVar27;
  short sVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 uVar34;
  ushort uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  uint7 uVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  uint uVar43;
  int iVar44;
  undefined7 uVar45;
  ulong uVar46;
  byte bVar47;
  long lVar48;
  ushort uVar49;
  ushort uVar50;
  long lVar51;
  ushort uVar52;
  ulong uVar53;
  long lVar54;
  long lVar55;
  undefined8 uVar56;
  ulong uVar57;
  byte bVar58;
  char cVar59;
  bool bVar60;
  bool bVar61;
  
  for (lVar48 = 0; (0x1c53e29bUL >> lVar48 & 1) == 0; lVar48 = lVar48 + 1) {
  }
  for (sVar28 = 0xf; 0xa94fU >> sVar28 == 0; sVar28 = sVar28 + -1) {
  }
  uVar14 = CONCAT62((uint6)(CONCAT18(1,lVar48) >> 0x31),sVar28 >> 0x10);
  lVar48 = uVar14 - 0x5ee75fcd;
  uVar14 = uVar14 & 0xffffffff;
  uVar35 = (ushort)uVar14;
  sVar28 = 0;
  if (uVar35 != 0) {
    for (; (uVar35 >> sVar28 & 1) == 0; sVar28 = sVar28 + 1) {
    }
  }
  bVar10 = (byte)lVar48;
  bVar58 = bVar10 ^ (bVar10 == 0x47) * (bVar10 ^ (byte)uVar14);
  uVar33 = CONCAT71(0x1ce8fe,(bVar10 != 0x47) * (bVar58 ^ 0x47)) ^ 0x47;
  iVar12 = (short)uVar35 * 0x200;
  lVar55 = 0;
  if (uVar33 != 0) {
    for (; (uVar33 >> lVar55 & 1) == 0; lVar55 = lVar55 + 1) {
    }
  }
  lVar51 = (CONCAT71((int7)((ulong)lVar48 >> 8),bVar58) & 0x3fffff) << 10;
  uVar33 = (ulong)(SEXT816((long)(uVar33 * 0x60daad9d)) !=
                  SEXT816((long)uVar33) * SEXT416(0x60daad9d)) << 0x20 |
           uVar33 * 0x60daad9d & 0xffffffff;
  lVar48 = uVar33 << 0xe;
  uVar36 = (uint)(uVar33 >> 0x13) | (uint)lVar48;
  sVar20 = (short)lVar51;
  if (iVar12 == 0) {
    sVar20 = -(short)iVar12;
  }
  uVar29 = (uint)uVar14 & 0xc256437c;
  if (-1 < (int)((short)uVar35 * -0x400 | (uint)lVar51 >> 0x1f)) {
    uVar36 = CONCAT22((short)((ulong)lVar48 >> 0x10),sVar20);
  }
  iVar12 = 0;
  if ((int)sVar20 != 0) {
    for (; ((uint)(int)sVar20 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
    }
  }
  uVar35 = (short)uVar36 >> 2;
  auVar5 = ZEXT216(uVar35) * ZEXT816(0xc256437f);
  uVar13 = (uint)auVar5._0_2_ * 0xf;
  iVar12 = (int)CONCAT62(auVar5._2_6_,(short)uVar13) * 0x3da9a9d9;
  if (CONCAT62((int6)(((ulong)CONCAT22(0x300,sVar28) << 0x24) >> 0x10),0xf) == -1) {
    iVar12 = CONCAT22((short)((uint)iVar12 >> 0x10),0x832c);
  }
  uVar14 = (long)CONCAT22((short)((uint)iVar12 >> 0x10),
                          (short)((CONCAT22((short)(uVar13 >> 0x10),(ushort)iVar12) | 0xc000) /
                                 (uint)(ushort)((ushort)iVar12 | 0xc000)) >> 0xd) * -0x4000000;
  uVar40 = 0x1fff3;
  if ((long)(int)uVar14 != uVar14) {
    uVar40 = 0;
  }
  iVar12 = (int)lVar55 + -0x5ed4b32f;
  uVar40 = uVar40 ^ (CONCAT22((short)(uVar36 >> 0x10),(ushort)(uVar35 - 0x7f) >> 0xc) | 0xff30);
  iVar44 = CONCAT31((int3)((uint)iVar12 >> 8),(byte)iVar12 >> 1);
  cVar23 = ((byte)uVar29 << 2 | (byte)uVar29 >> 6) + 0x2c;
  uVar14 = (ulong)((uint)(uVar14 >> 0x20) & 0x3fffffff) << 0x20 |
           (uVar14 & 0xffffffff) + 0x3f4ac851 & 0xffffffff;
  uVar33 = uVar14 / 0xe12b21bf;
  uVar14 = uVar14 % 0xe12b21bf;
  lVar55 = (ulong)(iVar44 + 0xd7990616) * 2;
  bVar10 = (byte)(uVar33 >> 8);
  lVar48 = 0xe12b21bf;
  if (0xa3ac98fa < uVar40) {
    lVar48 = lVar55;
  }
  bVar58 = (bVar10 & 0x1f) % 9;
  uVar41 = (uVar40 + 0x5c536705) * -0x7472935a;
  sVar28 = (short)iVar44 + 0x5f8;
  uVar11 = CONCAT11((char)(uVar29 >> 8) + (char)uVar14 + ((uVar13 & 0x10000) != 0),cVar23);
  uVar36 = (int)CONCAT61((int6)(uVar33 >> 0x10),
                         bVar10 << bVar58 |
                         (byte)(CONCAT11(uVar40 < 0xa3ac98fb,bVar10) >> 9 - bVar58)) << 8 ^
           0x1593918c;
  bVar58 = (byte)(uVar36 >> 8);
  uVar7 = (undefined3)(uVar36 >> 8);
  uVar13 = (uint)lVar48;
  iVar44 = ((uint)uVar14 & 0xfffffdff) + 0xf0d6d370 + uVar13 * 4;
  uVar14 = (ulong)((int)(char)bVar10 & CONCAT22((short)(uVar29 >> 0x10),uVar11)) &
           0xffffffffffffff0f;
  bVar17 = (byte)uVar14;
  uVar35 = (ushort)iVar44 >> bVar17 | (short)CONCAT31(uVar7,bVar58) << 0x10 - bVar17;
  iVar44 = CONCAT22((short)((uint)iVar44 >> 0x10),uVar35);
  bVar16 = (byte)(uVar14 >> 8);
  uVar15 = (undefined6)(uVar14 >> 0x10);
  uVar36 = (auVar5._12_4_ >> 0xb) + iVar44;
  sVar20 = (ushort)bVar17 - (uVar11 & 0x7fff);
  uVar14 = 0x3f;
  if (uVar41 != 0) {
    for (; uVar41 >> uVar14 == 0; uVar14 = uVar14 - 1) {
    }
  }
  uVar32 = (ulong)CONCAT31(0xfc0000,(char)((ushort)((ushort)((uVar36 & 1) != 0) << 8) >> 2)) &
           0xffff;
  uVar29 = (int)CONCAT62(uVar15,sVar20) << 0x1f;
  lVar48 = (ulong)CONCAT22((short)(uVar36 >> 0x10),(ushort)uVar36 >> 1) + 1;
  uVar53 = (long)(ulong)(uVar13 + 1) >> 1;
  uVar33 = (ulong)((uVar13 + 1 & 1) != 0);
  uVar57 = uVar53 - 0x167c9fe5;
  bVar10 = (((char)sVar28 << (bVar10 & 0x3f) |
            (byte)(CONCAT22((short)((uint)iVar12 >> 0x10),sVar28) >> 0x40 - (bVar10 & 0x3f))) +
            cVar23 + 'u') - (uVar53 < 0x167c9fe5 || uVar57 < uVar33);
  cVar23 = (char)((uVar13 | 0xd69b5e81) >> 0xc);
  iVar12 = -(-iVar44 | 0xd2U);
  uVar27 = (ushort)uVar14 >> 1 | (ushort)((uVar14 & 1) != 0) << 0xf;
  bVar17 = (byte)uVar41;
  uVar11 = uVar27 + 0x86c9;
  sVar28 = uVar11 + (bVar10 < bVar17);
  uVar53 = (ulong)(0x7936 < uVar27 || CARRY2(uVar11,(ushort)(bVar10 < bVar17))) << 0x20 |
           CONCAT71((int7)(((ulong)CONCAT31(uVar7,bVar58 ^ (bVar58 != bVar16) *
                                                           (bVar58 ^ bVar16 ^ (bVar58 == bVar16) *
                                                                              (bVar16 ^ (byte)uVar35
                                                                              ))) << 1) >> 8),
                    bVar10 ^ (bVar10 != bVar17) * (bVar10 ^ bVar17));
  uVar31 = CONCAT62((int6)(uVar14 >> 0x10),
                    CONCAT11((char)((ushort)sVar28 >> 8) + '\x01',(char)sVar28)) | 0x72c75da3;
  uVar14 = CONCAT62(uVar15,CONCAT11((int)uVar29 < 0,(char)sVar20));
  if (uVar32 < 0xffffffffa1fb9402) {
    uVar14 = uVar31;
  }
  bVar58 = ((byte)uVar14 & 0x1f) % 0x11;
  lVar51 = (long)(int)((uint)(uVar53 >> 0x1d) | (uint)(uVar53 << 4)) *
           (long)CONCAT22((short)((uint)iVar12 >> 0x10),
                          CONCAT11((byte)((uint)iVar12 >> 8) | (byte)iVar12,(byte)iVar12));
  uVar21 = (int)uVar14 + 1;
  iVar12 = (int)(short)lVar51 * (int)(short)uVar31;
  uVar35 = (ushort)iVar12;
  uVar33 = CONCAT62((int6)(uVar57 - uVar33 >> 0x10),(short)(char)bVar10) >> 1 & 0x7fffffff;
  uVar14 = (ulong)CONCAT22((short)((ulong)lVar51 >> 0x30),(short)((uint)iVar12 >> 0x10)) &
           0xffff3fff;
  uVar36 = (uint)(uVar35 | 0xc000);
  uVar40 = CONCAT22((short)uVar14,uVar35) | 0xc000;
  uVar36 = (uVar40 / uVar36 & 0xffff) * (uVar40 % uVar36);
  bVar10 = (byte)uVar21 & 0x1f;
  uVar37 = (int)uVar32 + 0x5e046bfe << bVar10 |
           (uint)CONCAT62((int6)(uVar14 >> 0x10),(short)(uVar36 >> 0x10)) >> 0x20 - bVar10;
  uVar40 = (CONCAT22(0x7c9f,0x7c14 << bVar58 | (ushort)(0x17c14 >> 0x11 - bVar58)) & 0xffffff |
           0xe5000000) +
           ((uint)((ulong)(lVar55 + -0x7cdc75b8) >> 0x25) << 0x10 | (uint)uVar31 >> 0x10);
  uVar36 = (uVar36 & 0xffff) + uVar37;
  uVar29 = uVar29 ^ 0x400;
  if ((POPCOUNT(uVar36 & 0xff) & 1U) == 0) {
    uVar29 = uVar40;
  }
  uVar14 = (ulong)uVar21 & 0xffffffffffffff0f;
  uVar35 = (ushort)uVar29 >> (sbyte)uVar14 | (short)uVar33 << 0x10 - (sbyte)uVar14;
  bVar60 = (short)((uVar36 & 0xffff) * (uVar41 & 0xffff) >> 0x10) != 0;
  bVar58 = (byte)uVar31;
  bVar10 = -bVar60;
  lVar51 = ((ulong)uVar40 - (ulong)uVar41) - (ulong)bVar60;
  uVar36 = (uint)uVar14 >> 1;
  lVar54 = CONCAT71((int7)(uVar33 >> 8),(byte)uVar33 >> 1);
  uVar37 = uVar37 ^ 1 << (uVar35 & 0x1f);
  uVar33 = CONCAT71((int7)(CONCAT62((int6)(uVar31 >> 0x10),CONCAT11(bVar10,bVar58)) >> 8),
                    bVar58 + bVar10 + 1);
  uVar57 = (ulong)(CONCAT31((uint3)((uVar13 | 0xd69b5e81) >> 0x14),cVar23 + (char)lVar48) >> 1 |
                  0x80000000) << 1 |
           (ulong)(CARRY1(bVar58,bVar10) || 0xfe < (byte)(bVar58 + bVar10));
  lVar55 = 0x3f;
  if (uVar57 != 0) {
    for (; uVar57 >> lVar55 == 0; lVar55 = lVar55 + -1) {
    }
  }
  bVar17 = (byte)uVar36;
  uVar32 = uVar33 << (bVar17 & 0x3f) | uVar33 >> 0x40 - (bVar17 & 0x3f);
  uVar40 = CONCAT22((short)(uVar37 >> 0x10),(ushort)uVar37 | uVar35) - 1;
  uVar13 = (int)lVar55 - (int)uVar32;
  lVar55 = (ulong)uVar13 * (ulong)uVar13;
  cVar26 = (char)uVar32 << 1;
  iVar44 = 0x1faf268c << (bVar17 & 0x1f);
  auVar5 = ZEXT116(0) << 0x40 |
           ZEXT416(CONCAT22((ushort)(uVar40 * 0x200000 >> 0x10) | (ushort)(uVar40 >> 0x1c),
                            (short)(uVar40 >> 0xc)) | 1);
  uVar31 = SUB168(auVar5 >> (bVar17 & 0x3f),0) | SUB168(auVar5 << 0x41 - (bVar17 & 0x3f),0);
  uVar33 = (ulong)(CONCAT22((short)(uVar29 >> 0x10),uVar35) << (bVar17 & 0x1f) |
                  (uint)CONCAT71((int7)(uVar32 >> 8),cVar26) >> 0x20 - (bVar17 & 0x1f));
  uVar27 = (ushort)iVar44 >> (bVar17 & 0xf) | (ushort)iVar44 << 0x10 - (bVar17 & 0xf);
  uVar49 = (short)lVar51 >> (bVar17 & 0x1f);
  lVar6 = uVar31 + ((uint)CONCAT71((int7)((ulong)lVar48 >> 8),cVar23) >> 1 | 0x80000000);
  sVar20 = (short)uVar36;
  sVar28 = sVar20 << 7;
  bVar58 = (byte)(ushort)(CONCAT12(0x5d < (byte)((char)iVar44 + 0x67U),sVar20) >> 10);
  bVar16 = bVar58 | (byte)sVar28;
  uVar11 = CONCAT11((char)((ushort)sVar28 >> 8),cVar26);
  uVar53 = uVar33 - 0xc87ffa36;
  lVar48 = lVar54 + -0xc16500b6;
  uVar35 = ((ushort)(uVar41 >> 0x17) ^ 1 << ((ushort)uVar31 & 0xf)) + 0x57e2;
  uVar33 = (uVar33 - 0xc87ffa18) + lVar48 * 2;
  bVar10 = bVar16 - (uVar53 == 0);
  uVar29 = CONCAT31((int3)(CONCAT22((ushort)(uVar14 >> 0x10) >> 1,
                                    CONCAT11((char)(uVar32 >> 8),bVar16)) >> 8),bVar10);
  uVar36 = uVar29 | 0x80000000;
  uVar38 = lVar6 * 2 | (ulong)(lVar6 < 0);
  uVar14 = uVar38 * 0x7acb03cc;
  uVar13 = (uint)(ushort)(uVar35 << (bVar10 & 0xf) | uVar35 >> 0x10 - (bVar10 & 0xf)) |
           (uint)CONCAT62((int6)((ulong)lVar51 >> 0x10),
                          uVar49 >> (bVar17 & 0xf) | uVar49 << 0x10 - (bVar17 & 0xf));
  uVar35 = (short)lVar48 + 0x60 + (short)uVar29 * 8;
  uVar46 = CONCAT62((char)bVar17 >> 7,uVar35);
  iVar12 = uVar36 + uVar13;
  bVar17 = (byte)iVar12 | (byte)((uint)iVar12 >> 8);
  if (-1 < (char)bVar17) {
    uVar14 = CONCAT62((int6)(uVar14 >> 0x10),(short)uVar38);
  }
  lVar51 = -uVar38;
  uVar29 = ((uint)CONCAT71((int7)(-(ulong)CONCAT22((short)((ulong)lVar55 >> 0x30),
                                                   CONCAT11((char)((ulong)lVar55 >> 0x28) + '2',
                                                            (char)((ulong)lVar55 >> 0x20))) >> 8),
                           (uVar53 == 0) + bVar10 + '\x01') & 0xffff00ff) >> (bVar17 & 0x1f);
  uVar22 = CONCAT31((int3)((uint)iVar12 >> 8),bVar17) & uVar14;
  if (uVar22 != 0) {
    uVar53 = uVar33 & 0xffff;
  }
  uVar24 = (ulong)CONCAT22((short)(uVar29 >> 0x10),(short)(uVar29 >> 8) << 8) & 0xffffffffffff3fff;
  uVar36 = (uint)(ushort)((short)lVar54 + 0x99 +
                          (short)CONCAT31((uint3)((CONCAT31((int3)(CONCAT22((short)((uint)iVar44 >>
                                                                                   0x10),uVar27) >>
                                                                  8),(char)uVar27 << (bVar58 & 0x1f)
                                                           ) >> (bVar10 & 0x1f)) >> 8) |
                                          (uint3)((uVar36 << 0x20 - (bVar10 & 0x1f)) >> 8),
                                          (long)uVar38 < 1) * 4 | 0xc000);
  uVar29 = CONCAT22((short)uVar24,(ushort)((int)uVar14 << 1) & (ushort)lVar51);
  uVar40 = uVar29 % uVar36;
  uVar38 = CONCAT62((int6)(uVar24 >> 0x10),(short)uVar40);
  uVar14 = (ulong)CONCAT31((int3)(CONCAT62((int6)(uVar22 >> 0x10),
                                           CONCAT11((char)(uVar22 >> 8) << ((byte)uVar22 & 0x1f),
                                                    (byte)uVar22)) >> 8) >> 0x13,
                           !SBORROW2((short)((int)lVar51 >> 1),0x7f15)) << 1;
  bVar10 = (char)(uVar33 >> 0x18) + (char)(uVar14 >> 8) + 1;
  uVar41 = (uint)lVar54 | 0x69c5a947;
  sVar20 = (short)((int)uVar31 + -0x28f3dffd << (sbyte)(uVar14 | 1));
  sVar28 = sVar20 << 1;
  bVar58 = (byte)sVar28 | sVar20 < 0;
  uVar27 = ((ushort)uVar53 >> 3 |
           (ushort)(byte)((byte)lVar48 >> (bVar17 & 7) | (byte)lVar48 << 8 - (bVar17 & 7)) << 0xd) +
           0x4ec2;
  uVar53 = CONCAT62((int6)(uVar14 >> 0x10),(short)(char)(uVar40 >> 8)) & 0xffffffff;
  if (uVar27 == 0) {
    uVar53 = uVar38;
  }
  bVar17 = bVar58 ^ (bVar10 == bVar58) * (bVar58 ^ 8);
  bVar10 = bVar10 ^ (bVar10 != bVar58) * (bVar10 ^ bVar17);
  iVar44 = (int)CONCAT62((int6)(uVar32 >> 0x10),uVar11 + 0x1008) + (int)uVar38 +
           (uint)(0xeff7 < uVar11);
  iVar12 = 0x63edee48;
  if (iVar44 == 0) {
    iVar12 = (CONCAT22(0x7c9f,(short)uVar57 + 0x165b) * 0x8000000 + (int)(uVar14 | 1)) * 2;
  }
  sVar20 = (ushort)uVar53 + 0x4856;
  uVar14 = CONCAT62((int6)(uVar53 >> 0x10),sVar20);
  iVar12 = (iVar12 - (int)uVar38) - (uint)((ushort)uVar53 < 0xb7aa);
  uVar53 = CONCAT62((int6)((ulong)lVar48 >> 0x10),
                    (short)CONCAT31((int3)(uVar41 >> 8),(char)uVar41 << 1)) - 0x548467fc;
  bVar16 = (byte)uVar33;
  bVar58 = bVar10 - bVar16;
  uVar57 = (ulong)((uVar13 & 0xffffff00) - 1);
  if ((POPCOUNT(bVar58) & 1U) != 0) {
    uVar57 = uVar53;
  }
  uVar49 = CONCAT11(uVar38 < uVar46 || uVar38 - uVar46 < (ulong)(bVar10 < bVar16),(char)uVar53);
  iVar42 = 0x1f;
  if ((uint)uVar14 != 0) {
    for (; (uint)uVar14 >> iVar42 == 0; iVar42 = iVar42 + -1) {
    }
  }
  bVar18 = (byte)sVar20;
  bVar47 = bVar18 & 0x1f;
  uVar32 = CONCAT62((uint6)(ushort)((short)((ulong)lVar51 >> 0x10) >> 1),0xb7aa) * 2;
  uVar31 = (ulong)((uint)(CONCAT14(((ushort)iVar44 >> ((ushort)iVar44 & 0xf) & 1) != 0,iVar12) >>
                         bVar47) | iVar12 << 0x21 - bVar47);
  if ((char)(CONCAT11((char)((ushort)sVar28 >> 8),bVar17) >> 3) < '^') {
    uVar31 = uVar46;
  }
  bVar18 = bVar18 & 0xf;
  bVar17 = (byte)(uVar27 << bVar18) | (byte)(uVar27 >> 0x10 - bVar18);
  uVar22 = CONCAT62(0xc4bd,uVar11) ^ 1L << ((ulong)uVar35 & 0x3f);
  if (-1 < (char)((byte)iVar42 ^ 0x3a)) {
    uVar14 = (ulong)(uint)(int)(char)((char)(uVar38 - uVar46) - (bVar10 < bVar16) |
                                     (byte)(1L << ((ulong)(ushort)(uVar29 / uVar36) & 0x3f)));
  }
  uVar38 = uVar53 & 0xffffffffffff0000 | uVar22;
  uVar35 = (short)uVar14 + 0x5387;
  uVar52 = ((ushort)iVar42 ^ 0x3a) << 4 | uVar35 >> 0xc;
  lVar48 = (ulong)CONCAT22((short)(uVar33 >> 8),CONCAT11(bVar16 ^ bVar58,bVar58)) *
           (ulong)CONCAT22((short)((uint)iVar44 >> 0x10),uVar49);
  uVar27 = (short)((ulong)lVar48 >> 0x20) + uVar35 + 0x58 + uVar52;
  uVar50 = (ushort)uVar31 & 0xfdff;
  uVar11 = (ushort)uVar32;
  uVar35 = 0xf;
  if (uVar49 != 0) {
    for (; uVar49 >> uVar35 == 0; uVar35 = uVar35 - 1) {
    }
  }
  bVar10 = (byte)uVar52 | (byte)uVar27;
  uVar9 = (uint6)(uVar38 >> 0x10);
  uVar36 = CONCAT22((short)uVar11 >> 0xf,(short)(uVar38 >> 10)) >> 0xb;
  bVar58 = bVar10 & 0xf;
  sVar28 = (short)lVar48 >> 0xf;
  uVar49 = (short)lVar48 << bVar58 | uVar27 >> 0x10 - bVar58;
  uVar39 = (uint7)((uVar32 >> bVar58) >> 8) | (uint7)(((ulong)uVar36 << 0x40 - bVar58) >> 8);
  uVar52 = (CONCAT11((char)(uVar49 >> 8),bVar10) & 0xff0f) >> bVar58;
  uVar49 = uVar49 + 0xe0ce;
  uVar15 = (undefined6)(uVar22 >> 0x10);
  uVar35 = (ushort)uVar22 & (uVar35 | uVar11);
  cVar59 = bVar17 + 0x72;
  iVar44 = CONCAT22((short)((((uint)uVar57 & 0xffffff00) << 1) >> 0x10),uVar27 + 0x37c) *
           -0x25658eee;
  uVar34 = CONCAT71(uVar39,cVar59);
  cVar26 = (char)uVar52;
  cVar23 = cVar26 + (char)((short)uVar49 >> 0xf);
  iVar12 = (int)uVar34;
  iVar42 = iVar44 + iVar12;
  if (iVar42 == 0 || SCARRY4(iVar44,iVar12) != iVar42 < 0) {
    cVar26 = (char)uVar50;
  }
  uVar14 = (ulong)CONCAT11((char)(uVar52 >> 8) + (char)uVar53 * '\x02' +
                           (CONCAT22(sVar28,uVar49) < 0x22922899),cVar23) & 0xffffffffffffff0f;
  sVar19 = (sbyte)uVar14;
  bVar10 = sVar19 + cVar26;
  iVar44 = (int)CONCAT62(uVar9 >> 0xb,
                         (ushort)(CONCAT71((int7)(CONCAT62(uVar9 >> 10,uVar11) >> 8),(char)uVar32)
                                 >> 1) >> 1) << 1;
  iVar12 = (short)CONCAT71((int7)(uVar14 >> 8),bVar10) * 0x9e2;
  uVar8 = (uint3)((uint)iVar44 >> 8);
  bVar16 = (char)iVar44 + (char)uVar35 + ((short)iVar12 != iVar12);
  uVar29 = CONCAT31(uVar8,bVar16);
  bVar17 = bVar17 + 0x72;
  uVar14 = -(ulong)CONCAT22((short)((uint)iVar42 >> 0x10),cVar59 + 0x11fd);
  iVar12 = 0;
  if (uVar29 >> 1 != 0) {
    for (; ((uVar29 >> 1) >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
    }
  }
  iVar12 = (int)(short)((uVar49 & 0xff) * (uVar35 & 0xff) *
                       ~(uVar50 + (short)uVar34 * 8 + -0x6c47 << sVar19 | uVar50 >> 0x10 - sVar19) *
                       2) * (int)(short)(uVar29 >> 2);
  uVar27 = (ushort)((uint)iVar12 >> 0x10);
  uVar11 = (ushort)iVar12;
  sVar20 = 0xf;
  if (uVar27 != 0) {
    for (; uVar27 >> sVar20 == 0; sVar20 = sVar20 + -1) {
    }
  }
  uVar33 = CONCAT62((int6)(uVar39 >> 8),(ushort)CONCAT71(uVar39,bVar17) >> 1) | 0x8000;
  if (((ushort)((sVar20 + 0x1e40) - (ushort)((bVar17 & 1) != 0)) >> 2 & 1) == 0) {
    uVar33 = (ulong)uVar29;
  }
  uVar27 = (ushort)((uVar31 & 0xffffffffffff0000) >> 1);
  uVar57 = uVar14 & 0xffff;
  uVar14 = uVar14 >> 0xb & 0x1fffff;
  uVar49 = (uVar11 & 0xff) * (ushort)(byte)((char)((ulong)lVar48 >> 8) >> 7);
  cVar23 = (char)(uVar29 >> 2);
  uVar29 = (uint)bVar10;
  uVar50 = (ushort)CONCAT71((int7)(CONCAT62(uVar15,uVar35) >> 8),(char)uVar35 << (bVar10 & 0x1f));
  bVar60 = uVar50 <= uVar49;
  uVar35 = uVar49 - uVar50;
  uVar50 = uVar50 ^ (ushort)(uVar35 == 0) *
                    (uVar50 ^ (uVar27 << (bVar10 & 0xf) | uVar27 >> 0x10 - (bVar10 & 0xf)));
  uVar45 = (undefined7)(CONCAT62(uVar15,uVar50) >> 8);
  if ((POPCOUNT(uVar35 & 0xff) & 1U) != 0) {
    uVar29 = (uint)CONCAT71(uVar45,bVar60);
  }
  uVar13 = (uint)CONCAT62((int6)(uVar14 >> 0x10),(short)uVar14 << 1) | 1;
  uVar14 = (ulong)CONCAT31(uVar8 >> 2,cVar23) & 0xffffffffffffff0f;
  bVar47 = (cVar23 + -0x34) * '\x04' + 0x95;
  uVar41 = ((int)CONCAT62((int6)sVar28,uVar11) >> 0x1f) - 1;
  uVar34 = CONCAT71((int7)(uVar57 >> 8),(char)uVar57 + -0x33);
  uVar11 = (ushort)(uVar41 >> 0x10);
  cVar26 = bVar60 + (char)uVar29;
  bVar17 = (byte)(uVar14 >> 1);
  bVar10 = bVar17 & 0x1f;
  uVar21 = uVar13 << bVar10 | uVar13 >> 0x20 - bVar10;
  uVar57 = CONCAT62((int6)(uVar33 >> 0x10),(short)CONCAT71((int7)(uVar33 >> 8),0xc)) ^ 0x100;
  uVar13 = uVar21 >> 1;
  uVar40 = (uint)bVar47 << 0x1f;
  uVar37 = uVar13 | uVar40;
  bVar61 = (POPCOUNT(uVar13 & 0xff) & 1U) != 0;
  uVar53 = uVar57 >> 1;
  sVar28 = CONCAT11(!bVar61 * bVar61 * bVar47,bVar17 - 0x2f) + 0x36b8;
  uVar33 = CONCAT62((uint6)(uVar14 >> 0x11) | (uint6)(((ulong)((bVar16 & 4) != 0) << 0x3f) >> 0x10),
                    sVar28);
  iVar42 = (int)CONCAT71(uVar45,cVar26) + 1;
  uVar14 = -(ulong)((CONCAT22((short)((uint)iVar44 >> 0x10),
                              (short)cVar23 << (sbyte)uVar14 |
                              (ushort)(uVar49 ^ (ushort)(uVar35 != 0) * (uVar49 ^ uVar50)) >>
                              0x10 - (sbyte)uVar14) ^ 0xd902 | (uint)(1L << ((ulong)uVar41 & 0x3f)))
                   >> 1);
  lVar48 = CONCAT71((int7)(((ulong)CONCAT22((short)((((int)uVar36 >> bVar58 & 0xffff0000U) << 3) >>
                                                   0x10),0xd) << 1) >> 8),
                    (((SCARRY1(bVar60,(char)uVar29) != SCARRY1(cVar26,'\0')) == cVar26 < '\0') +
                    '\x11') - ((CONCAT31((int3)(((uint)uVar11 << 0x10) >> 8),
                                         uVar37 != 0 &&
                                         ((int)uVar21 < 0 != (uVar40 != 0)) == (uVar40 != 0)) >>
                                ((uint)uVar53 & 0x1f) & 1) != 0)) + -0x4f16de94;
  bVar10 = (byte)uVar53 >> 1;
  uVar39 = (uint7)(uVar57 >> 9);
  uVar36 = (uint)CONCAT71(uVar39,bVar10);
  bVar58 = (byte)sVar28 & 0x3f;
  iVar12 = 0;
  uVar13 = (uint)CONCAT62((int6)((ulong)lVar48 >> 0x10),(ushort)lVar48 >> 1);
  if (uVar13 != 0) {
    for (; (uVar13 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
    }
  }
  uVar40 = 0x2864;
  sVar28 = (short)iVar42 + -1;
  uVar13 = (uint)(CONCAT14((bVar10 & 1) != 0,iVar12) >> 0x1e);
  bVar10 = (byte)sVar28;
  uVar57 = (ulong)CONCAT31((int3)(CONCAT22((short)((uint)iVar42 >> 0x10),sVar28) >> 8),
                           bVar10 >> 2 | bVar10 << 6);
  lVar48 = uVar57 * -0x6bc638f5;
  bVar60 = SEXT816(lVar48) != SEXT816((long)uVar57) * SEXT416(-0x6bc638f5);
  uVar57 = uVar33 - 0x6ecbd071;
  bVar61 = uVar33 < 0x6ecbd071 || uVar57 < bVar60;
  iVar44 = ((int)uVar57 - (uint)bVar60) * 2;
  bVar10 = (byte)iVar44 | bVar61;
  bVar60 = (short)lVar48 < 0;
  if (bVar60) {
    uVar40 = uVar13 | iVar12 << 3 & 0xffffU;
  }
  bVar17 = ((byte)iVar44 & 0x1f | bVar61) % 9;
  bVar10 = bVar10 << bVar17 | (byte)(CONCAT11(bVar60,bVar10) >> 9 - bVar17);
  iVar42 = 0;
  if (uVar40 != 0) {
    for (; (uVar40 >> iVar42 & 1) == 0; iVar42 = iVar42 + 1) {
    }
  }
  uVar41 = (uint)(byte)((ulong)lVar48 >> 0x38) | ((uint)((ulong)lVar48 >> 0x20) & 0xff0000) >> 8 |
           (uint)((ulong)lVar48 >> 0x18) & 0xff0000 | (uint)((ulong)lVar48 >> 8) & 0xff000000;
  uVar33 = (ulong)(uVar41 | 0xc0000000);
  uVar57 = CONCAT44(CONCAT22(uVar11,(short)((uint)(ushort)((short)lVar48 << 1 | (ushort)bVar60) *
                                            ((uVar36 & 0x1fffe) >> 1) >> 0x10)),uVar41) &
           0x3fffffffffffffff | 0xc0000000;
  uVar53 = uVar57 / uVar33 & 0xffffffff;
  sVar28 = (short)(char)(uVar36 >> 1);
  uVar32 = (ulong)CONCAT22((ushort)(uVar39 >> 8) >> 1,sVar28);
  uVar15 = (undefined6)(uVar53 >> 0x10);
  sVar28 = ((short)uVar53 - sVar28) + -1;
  lVar48 = CONCAT62(uVar15,sVar28);
  lVar55 = CONCAT62(uVar15,CONCAT11((byte)(uVar57 % uVar33) | (byte)((ushort)sVar28 >> 8),
                                    (char)sVar28));
  lVar51 = lVar55 * uVar32;
  uVar33 = (ulong)(lVar48 * 0x7f62377b) >> 0x29;
  uVar57 = (ulong)CONCAT31((int3)(-uVar29 >> 8),
                           -1 < (int)((uVar37 << bVar58 | (uint)(uVar14 >> 0x40 - bVar58)) +
                                     0x7ed71ac6)) << 0x17 | uVar33;
  bVar17 = (byte)(uVar40 >> (bVar10 & 0x1f)) | (byte)(uVar40 << 0x20 - (bVar10 & 0x1f));
  uVar11 = 1 << ((ushort)uVar34 & 0xf) ^ 0x2e47;
  uVar41 = 0x40c96952 >> (bVar10 & 0x1f);
  uVar15 = SUB166(SEXT816(lVar55) * SEXT816((long)uVar32),10);
  uVar21 = uVar41 ^ 1;
  lVar48 = lVar48 * 0xfec46ef6;
  bVar58 = (byte)((uint)iVar44 >> 8);
  lVar55 = -CONCAT62((int6)(uVar14 >> 0x10),(short)uVar14 << 1);
  uVar29 = (int)uVar34 + 0x46fcc4ad;
  uVar36 = (int)CONCAT62(0x67853dcba6a6,uVar11) + -0x38fac4a2 + (int)uVar57 * 8;
  uVar40 = CONCAT31((int3)((uint)iVar44 >> 8),bVar17);
  uVar11 = ~uVar11;
  iVar42 = (int)CONCAT11((char)((ulong)lVar51 >> 8) >> 0x1d,(char)lVar51) *
           (int)(short)CONCAT71((int7)(CONCAT62(uVar15,CONCAT11(bVar58 + 1,bVar17)) >> 8),
                                (bVar10 - (char)lVar51) - (0xfe < bVar58));
  cVar23 = (char)uVar11;
  bVar10 = (byte)(CONCAT11((short)iVar42 != iVar42,cVar23) >> 5) | cVar23 << 4;
  uVar35 = (ushort)((uint)iVar42 >> 0x10) ^ (ushort)lVar48;
  bVar58 = bVar10 << 1;
  if (-1 < (char)bVar10) {
    uVar40 = CONCAT22((short)((uint)iVar44 >> 0x10),(ushort)uVar36);
  }
  uVar11 = (short)CONCAT71((int7)(CONCAT62(0x67853dcba6a6,uVar11) >> 8),bVar58) << 1 |
           (ushort)uVar36 >> 0xf;
  bVar10 = (byte)uVar33;
  bVar16 = bVar10 >> 3 | bVar10 << 5;
  uVar34 = CONCAT71((int7)(uVar57 >> 8),bVar16);
  lVar51 = (CONCAT62((int6)((ulong)lVar51 >> 0x10),(short)(char)iVar42) ^ 0x266d) +
           (ulong)uVar21 + lVar55 + 1;
  bVar17 = (byte)uVar35;
  uVar13 = ((uVar13 | iVar12 << 3) >> 1) + ~(uint)bVar58;
  bVar10 = (byte)((ulong)lVar51 >> 8);
  auVar2._1_7_ = (int7)((ulong)lVar51 >> 8);
  auVar2[0] = ((byte)lVar51 | bVar17) ^ bVar10;
  bVar58 = (byte)uVar40;
  uVar56 = CONCAT71((int7)((ulong)lVar48 >> 8),
                    (byte)lVar48 >> (bVar58 & 7) | (byte)lVar48 << 8 - (bVar58 & 7));
  uVar14 = (ulong)(uint)(CONCAT22((short)(uVar41 >> 0x10),
                                  (ushort)uVar21 >> 1 | (ushort)((uVar21 & 1) != 0) << 0xf) <<
                        (bVar58 & 0x1f)) | 0xc000000000000000;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar14;
  auVar2._8_8_ = CONCAT62(uVar15,CONCAT11((((char)(uVar35 >> 8) + bVar58) - bVar10) + -1,bVar17)) &
                 0x3fffffffffffffff;
  if ((char)uVar29 < (char)bVar16) {
    uVar29 = CONCAT22((short)(uVar29 >> 0x10),(short)uVar34);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = SUB168(auVar2 / auVar5,0);
  auVar4 = auVar4 * ZEXT416(uVar29);
  uVar25 = auVar4._8_8_;
  if (SBORROW1(auVar4[1],auVar4[9]) != SBORROW1(auVar4[1] - auVar4[9],'\x01')) {
    uVar25 = CONCAT62(auVar4._10_6_,(short)uVar56);
  }
  uVar37 = uVar13 << (bVar58 & 0x1f) | uVar13 >> 0x20 - (bVar58 & 0x1f);
  uVar13 = (uint)uVar34;
  uVar21 = ((uint)lVar55 ^ 1 << ((int)(char)uVar11 & 0x1fU) | 0x8000) << (bVar58 & 0x1f);
  uVar41 = uVar13 | 0x5596c267;
  uVar21 = uVar21 >> (bVar58 & 0x1f) | uVar21 << 0x21 - (bVar58 & 0x1f);
  uVar29 = (CONCAT31((int3)(uVar29 >> 8),(char)uVar29 + -0x11) | 0x1000) ^ 0x2e47498f;
  uVar27 = CONCAT11(uVar29 == 0,(char)uVar21);
  uVar33 = (ulong)(uVar36 >> (bVar58 & 0x3f)) | uVar14 << 0x40 - (bVar58 & 0x3f);
  cVar23 = (char)uVar25;
  uVar57 = (ulong)(((uint)CONCAT62(0x67853dcba6a6,uVar11) | uVar36) + 0x45b27b19 + (int)uVar56 * 2)
           + 0x341fdf6a & 0xffffffff9553ee24;
  uVar35 = (short)uVar41 + 0x30cf;
  uVar14 = (ulong)uVar40 |
           CONCAT62((int6)((ulong)uVar25 >> 0x10),
                    CONCAT11((char)((ulong)uVar25 >> 8) + -0x3f,cVar23));
  uVar36 = uVar35 & 0xff;
  sVar28 = 0;
  if (uVar27 != 0) {
    for (; (uVar27 >> sVar28 & 1) == 0; sVar28 = sVar28 + 1) {
    }
  }
  uVar35 = sVar28 + uVar35;
  bVar10 = (byte)uVar14 & 0x1f;
  uVar40 = (uint)uVar14;
  uVar40 = uVar40 >> bVar10 | uVar40 << 0x20 - bVar10;
  uVar53 = (ulong)uVar40 & 0xffffffffffffff0f;
  uVar30 = (int)CONCAT62((int6)(uVar33 >> 0x10),
                         (short)CONCAT71((int7)(uVar33 >> 8),(char)uVar33 + cVar23 + '\x01') +
                         -0x3631) + 0x8eb9c6e9;
  uVar31 = CONCAT71((int7)(uVar57 >> 8),(char)uVar57 + (cVar23 + -0x46) * '\x12');
  uVar43 = (int)((uVar13 + 0x4dc7e9d2 + (int)uVar25 * 8) * 0x6a24b602) >> 0xf;
  bVar10 = (byte)(uVar30 >> 7);
  uVar41 = -CONCAT22((short)(uVar41 >> 0x10),sVar28);
  sVar19 = (sbyte)uVar53;
  uVar14 = (long)(CONCAT22((short)(uVar21 >> 0x10),uVar27) << sVar19) * (long)(int)uVar41;
  uVar33 = uVar14 & 0xffffffff;
  sVar28 = (short)(char)uVar33 * (short)(char)(uVar33 >> 8);
  uVar32 = CONCAT22((ushort)(uVar30 * 0x2000000 >> 0x10) | (ushort)(uVar30 >> 0x17),
                    CONCAT11((byte)((uVar30 >> 7) >> 8) ^ bVar10,bVar10)) | uVar31;
  cVar23 = (char)sVar28 + (char)uVar43;
  uVar15 = (undefined6)(uVar32 >> 0x10);
  sVar20 = (short)uVar32 + 0x9a6;
  bVar58 = (sVar19 - cVar23) * '\x02';
  uVar13 = ((uint)((uVar14 >> 0x20) >> sVar19) | (uint)CONCAT62(uVar15,sVar20)) ^ uVar41;
  bVar10 = bVar58 & 0x1f;
  uVar29 = (((uVar29 >> 1 | (uint)((uVar29 & 1) != 0) << 0x1f) >> 0x1e | (int)uVar57 << 2) << bVar10
           | uVar43 >> 0x20 - bVar10) & 0xb91ad5d0;
  uVar11 = (short)uVar31 >> 9;
  lVar48 = CONCAT62((int6)(uVar57 >> 0x10),uVar11);
  uVar14 = CONCAT71((int7)(CONCAT62((int6)(uVar33 >> 0x10),sVar28) >> 8),cVar23 + '\x01');
  if ((uint)uVar14 != uVar13) {
    uVar14 = (ulong)uVar13;
  }
  bVar10 = (byte)(uVar53 >> 8);
  cVar23 = (char)((ushort)sVar20 >> 8);
  lVar55 = CONCAT62((int6)(uVar14 >> 0x10),(short)(char)uVar14 * (short)cVar23);
  bVar58 = bVar58 & 0x1f;
  uVar27 = (ushort)(char)(bVar10 | 8);
  iVar12 = (int)uVar29 >> 1;
  uVar14 = (ulong)uVar35;
  if (iVar12 <= (int)(uint)uVar35) {
    uVar14 = (ulong)uVar37;
  }
  uVar35 = CONCAT11(cVar23 << 1 | sVar20 < 0,(char)sVar20) & ~(1 << (uVar27 & 0xf));
  uVar34 = CONCAT62(uVar15,uVar35);
  uVar53 = (ulong)(CONCAT31((int3)(CONCAT22((short)(uVar53 >> 0x10),uVar27) >> 8),bVar10) | 8) &
           0xffffffffffffff0f;
  bVar10 = (byte)uVar53;
  uVar32 = CONCAT62((int6)(uVar53 >> 0x10),
                    CONCAT11((ulong)(uVar37 + 0x83c76b7c) != 0xffffffff6e6ba890,bVar10));
  iVar44 = (int)lVar48;
  uVar13 = iVar44 + 0x260e0026;
  uVar46 = (ulong)uVar13;
  lVar51 = lVar55 * 2;
  uVar33 = lVar51 * uVar46;
  uVar57 = ~(uVar33 >> 1 & 0x7fffffff);
  uVar22 = (ulong)CONCAT22((short)((int)uVar29 >> 0x11),
                           (short)iVar12 << bVar10 | 0x576fU >> 0x10 - bVar10) << bVar10;
  uVar31 = (ulong)(uint)((int)CONCAT62((int6)(uVar57 >> 0x10),(ushort)(byte)uVar57) >> 0x1f);
  uVar53 = ((ulong)CONCAT22((short)(uVar41 >> 0x10),
                            ((short)(uVar41 >> 8) << 8 ^ 1 << ((ushort)uVar53 & 0xf)) & 0xff00U &
                            ~(1 << ((ushort)uVar36 & 0xf))) | 0x800000000000000) ^
           1L << (uVar31 & 0x3f);
  uVar38 = uVar53 ^ 4;
  lVar51 = CONCAT71((int7)((ulong)(uint3)(uVar41 >> 8) * 0x65a01c939a326700 >> 8),
                    '\0' << bVar10 % 9 |
                    (byte)((ushort)((ushort)(SEXT816((long)uVar33) !=
                                            SEXT816(lVar51) * SEXT816((long)uVar46)) << 8) >>
                          9 - bVar10 % 9)) + uVar46 + (ulong)(((ushort)uVar53 >> 2 & 1) != 0);
  if (lVar51 == 0) {
    uVar31 = (ulong)((int)(short)uVar43 << bVar58 | (uint)lVar55 >> 0x20 - bVar58);
  }
  uVar29 = uVar13 & 0xffff | 0xc000;
  uVar21 = CONCAT22((short)(uVar31 & 0xffffffffffff3fff),(ushort)(byte)uVar57);
  auVar3._2_6_ = (int6)(short)(uVar57 >> 0x10);
  auVar3._0_2_ = (short)(uVar21 / uVar29);
  auVar3._10_6_ = (int6)((uVar31 & 0xffffffffffff3fff) >> 0x10);
  auVar3._8_2_ = (short)(uVar21 % uVar29);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar32 | 0xc000000000000000;
  uVar29 = (uVar13 | 0xc000) >> bVar10 | (uVar13 | 0xc000) << 0x20 - bVar10;
  iVar12 = (int)SUB162(auVar3 / auVar1,0) * (int)SUB162(auVar3 % auVar1,0);
  uVar33 = uVar22;
  if ((short)iVar12 != iVar12) {
    uVar33 = uVar38;
  }
  uVar13 = (uVar36 - iVar44) - 1 & (uint)uVar14;
  uVar36 = (uint)CONCAT62(SUB166(auVar3 % auVar1,2),(short)((uint)iVar12 >> 0x10) << 1) & 0xfffbffff
  ;
  bVar58 = (byte)uVar13;
  bVar60 = 0xd2 < bVar58;
  cVar23 = bVar58 + 0x2d;
  uVar57 = (ulong)((int)(short)iVar12 + 1);
  if (!bVar60 && cVar23 != '\0') {
    uVar57 = uVar38 & 0xffffffff;
  }
  uVar53 = uVar32 | 0xc000008000000000;
  if (bVar60) {
    uVar53 = 0xffffffff;
  }
  sVar28 = (short)uVar36;
  uVar32 = (ulong)CONCAT22((short)(uVar36 >> 0x10),
                           sVar28 << 9 | (ushort)(CONCAT12(bVar60,sVar28) >> 8)) &
           0xffffffffffff3fff;
  uVar21 = CONCAT22((short)uVar32,(short)uVar57);
  uVar31 = (ulong)(CONCAT22((short)(((uVar40 & 0xff0f ^ uVar41) + uVar37 + 1) * 0x400000 >> 0x10),
                            uVar11) | 0xc000) | 0xc000;
  uVar32 = CONCAT62((int6)(uVar32 >> 0x10),(short)(uVar21 % (uint)(uVar11 | 0xc000))) &
           0xffffffffffff3fff;
  uVar36 = (uint)(ushort)uVar31;
  uVar40 = CONCAT22((short)uVar32,(short)(uVar21 / (uVar11 | 0xc000)));
  return CONCAT62((int6)(uVar57 >> 0x10),(short)(uVar40 / uVar36)) +
         CONCAT71((int7)((ulong)uVar34 >> 8),(byte)uVar35 & (byte)uVar22) + uVar53 +
         CONCAT62((int6)(uVar32 >> 0x10),(short)(uVar40 % uVar36)) +
         (ulong)CONCAT31((int3)(uVar13 >> 8),cVar23) +
         ((long)(ulong)(uVar37 + 0xb3 + (int)uVar34 * 4) >> bVar10) * 0x443f2bfd + uVar38 +
         (ulong)(uVar29 << 0x10 | uVar29 >> 0x11) + lVar51 + uVar14 + lVar48 + uVar31 + uVar33 +
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
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined5 uVar8;
  uint3 uVar9;
  undefined3 uVar10;
  byte bVar11;
  ushort uVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  sbyte sVar18;
  byte bVar19;
  byte bVar20;
  ushort uVar21;
  uint uVar22;
  undefined6 uVar23;
  short sVar24;
  short sVar25;
  char cVar29;
  long lVar26;
  ulong uVar27;
  uint6 uVar30;
  undefined8 uVar28;
  byte bVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  uint6 uVar35;
  ushort uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  byte bVar40;
  byte bVar41;
  undefined7 uVar42;
  ushort uVar43;
  uint uVar44;
  ulong uVar45;
  uint uVar46;
  uint uVar47;
  ushort uVar48;
  byte bVar49;
  short sVar50;
  int iVar51;
  ulong uVar52;
  uint7 uVar53;
  undefined6 uVar54;
  ushort uVar55;
  uint uVar56;
  int iVar57;
  uint uVar58;
  ulong uVar59;
  uint uVar60;
  long lVar61;
  char cVar62;
  ushort uVar63;
  uint uVar64;
  bool bVar65;
  char in_AF;
  
  uVar38 = CONCAT62(0xeb8cef9ac92,CONCAT11(in_AF << 4,0x73) | 0x200) & 0xffffffffffff272f;
  iVar13 = (uint)CONCAT11((char)(uVar38 >> 8) + 'i',(char)uVar38) * 0x3223;
  sVar24 = (short)((uint)iVar13 >> 0x10);
  uVar14 = CONCAT62((int6)(uVar38 >> 0x10),(short)iVar13);
  uVar58 = 0x152cfbf0;
  if (sVar24 != 0) {
    uVar58 = 0x40394238;
  }
  uVar38 = 0x9b3831b8c004baca - (ulong)(sVar24 != 0);
  if ((int)uVar14 != 0x6bd83580) {
    uVar14 = 0x6bd83580;
  }
  uVar55 = 0x4faf;
  lVar26 = CONCAT62(0xe34a07cf36af,sVar24) + 0x8470ffff;
  uVar16 = CONCAT62(0xc52c767b7f2e,0x609f - (ushort)(0xc52c767b7f2e6110 < uVar38));
  uVar27 = CONCAT62((int6)((ulong)lVar26 >> 0x10),
                    CONCAT11((byte)((ulong)lVar26 >> 8) & (byte)lVar26,(byte)lVar26)) & 0xffffe8ed;
  uVar15 = uVar16 >> 0x23;
  uVar52 = uVar15 | uVar16 << 0x1d;
  uVar16 = 0x3f;
  if (uVar27 != 0) {
    for (; uVar27 >> uVar16 == 0; uVar16 = uVar16 - 1) {
    }
  }
  uVar64 = CONCAT22(0x8470,(ushort)(uVar16 < 0xffffe8ed || uVar16 - 0xffffe8ed == 0) << 0xf | 0x7fff
                   );
  uVar45 = (ulong)uVar64;
  uVar27 = uVar27 << 1 | 1;
  if ((int)uVar14 == 0x54faf) {
    uVar55 = 0x8b5b;
  }
  else {
    uVar14 = 0x54faf;
  }
  iVar13 = (int)(short)uVar14;
  uVar44 = uVar58 >> 1;
  iVar57 = (int)uVar27;
  if (iVar13 != iVar57) {
    uVar45 = uVar27;
    iVar13 = iVar57;
  }
  uVar12 = (short)iVar13 >> 1;
  bVar19 = (byte)uVar12;
  uVar60 = uVar58 >> 0xd | 0x7800000;
  uVar64 = uVar64 ^ 0x6a456c44;
  iVar13 = (uint)(ushort)(uVar12 * (short)uVar15) * (uVar44 & 0xffff);
  bVar65 = (short)((uint)iVar13 >> 0x10) != 0;
  uVar43 = ((short)(uVar16 - 0xffffe8ed) + -1) * 2 | 1;
  if (bVar65) {
    uVar43 = uVar12 & 0xff;
  }
  iVar57 = (bVar19 | 0xfff00000) + 0xe12e9d80 + (uint)bVar65;
  sVar24 = uVar43 + (ushort)uVar44;
  uVar37 = (uint)uVar38;
  if (!CARRY2(uVar43,(ushort)uVar44) && sVar24 != -1) {
    uVar37 = uVar60;
  }
  cVar62 = (char)iVar13;
  sVar25 = (short)(uVar52 >> 1);
  uVar35 = (uint6)(uVar52 >> 0x11);
  uVar37 = uVar37 ^ 1 << ((ushort)(sVar24 + 1) & 0x1f);
  iVar13 = iVar57 * 2;
  uVar55 = (uVar55 & 0xff00) + 0x474e + (ushort)(iVar57 < 0);
  uVar22 = uVar64 >> 1;
  sVar24 = uVar55 + 0xbfbf;
  uVar46 = CONCAT31((int3)((uint)iVar13 >> 8),((byte)iVar13 | (byte)(uVar37 >> 0x1f)) + 0x95) &
           ~(1 << ((7 < (byte)(cVar62 - 1U) || CARRY1(cVar62 - 9,0x4040 < uVar55)) | 0x10));
  bVar41 = (byte)sVar24;
  uVar58 = CONCAT22((short)(uVar60 >> 0x10),(short)(uVar58 >> 0xd) * 0x73d4);
  sVar50 = sVar25 + 0x1890;
  uVar60 = uVar22 << 0x1f | 0x797181cb;
  cVar62 = (char)uVar44 + -0x7c;
  bVar65 = SCARRY1((char)uVar44,-0x7c) != SCARRY1(cVar62,'\0');
  uVar44 = uVar46;
  if (cVar62 == '\0' || bVar65 != cVar62 < '\0') {
    uVar44 = uVar60;
  }
  iVar13 = (int)CONCAT71((int7)(CONCAT62((int6)(uVar45 >> 0x10),
                                         CONCAT11(-0x51 - ((ushort)(sVar25 + 0xa8bcU) < 0x2320),
                                                  bVar19)) >> 8),bVar19);
  if (bVar65) {
    iVar13 = 0x96;
  }
  iVar13 = iVar13 + CONCAT31((int3)(uVar37 >> 8),(char)uVar37 - bVar19);
  uVar55 = (ushort)((uint)iVar13 >> 0x10);
  bVar19 = (byte)uVar46 >> 4;
  uVar38 = CONCAT62(uVar35,sVar50) ^ 0xc288;
  if (sVar50 == -0x3d78) {
    uVar22 = CONCAT22((ushort)(uVar64 >> 0x11),(short)uVar22);
  }
  uVar64 = (uint)CONCAT62(0xffffffffffff,CONCAT11((char)((ushort)sVar24 >> 8) + 'R',bVar41)) |
           0x1000;
  lVar33 = (ulong)((uint)(uVar55 >> 7) |
                  (CONCAT22(uVar55,CONCAT11((byte)((uint)iVar13 >> 8) >> 1,(char)iVar13)) | 0x8000)
                  << 9) << 1;
  lVar26 = 0x3f;
  if (uVar22 != 0) {
    for (; uVar22 >> lVar26 == 0; lVar26 = lVar26 + -1) {
    }
  }
  uVar30 = (uint6)((ulong)lVar33 >> 0x10);
  cVar62 = (char)(uint)(CONCAT14(uVar44 < 0xcd0d82d8,uVar44 + 0x32f27d28) >> 0x19);
  uVar15 = (ulong)CONCAT31((int3)(uVar44 + 0x32f27d28),cVar62 << 1);
  uVar44 = CONCAT22((short)(uVar60 >> 0x10),-0x7e35 - (short)uVar22);
  bVar40 = (char)uVar38 >> 0x19;
  iVar13 = uVar58 - uVar44;
  uVar16 = (ulong)uVar64 + (ulong)(cVar62 < '\0' | 0xffffb5de);
  if (uVar44 <= uVar58 && iVar13 != 0) {
    uVar16 = (ulong)(uVar30 >> 5) | CONCAT62(uVar30,(ushort)(byte)lVar33) << 0x2b;
  }
  sVar24 = (short)iVar13 + 0x46;
  bVar31 = (byte)uVar16;
  lVar26 = (ulong)uVar44 * 2 * lVar26;
  bVar49 = (bVar19 | bVar31) & 7;
  uVar27 = uVar15 << 1;
  uVar10 = (undefined3)(uVar22 >> 8);
  cVar62 = (char)uVar22 >> (bVar19 | bVar31 & 0x1f);
  uVar64 = ((CONCAT22(0xffff,(short)CONCAT31((int3)(uVar64 >> 8),bVar41 >> 1)) ^ 0x400) + 0x8a2b9d1f
           ) * 8;
  uVar44 = -~(uint)uVar38 >> 0x1d;
  auVar4 = SEXT816(lVar26) * SEXT816(0x2a1d8476167680cb);
  lVar26 = lVar26 * 0x2a1d8476167680cb;
  uVar60 = iVar13 + 0x1098f4d5U >> 0xb;
  uVar58 = 0;
  if (CONCAT22(0x81c0,sVar24) != 0) {
    for (; (CONCAT22(0x81c0,sVar24) >> uVar58 & 1) == 0; uVar58 = uVar58 + 1) {
    }
  }
  uVar55 = ~(ushort)CONCAT71((int7)(uVar38 >> 8),(char)(bVar40 << 3 | bVar40 >> 5) >> 0x1a);
  uVar46 = (uint)CONCAT62(uVar35,uVar55);
  uVar22 = uVar58 | uVar46;
  uVar12 = sVar24 * 2 | (ushort)(sVar24 < 0);
  uVar37 = 0xe3fb58f5 - uVar60;
  sVar24 = (short)-~(uint)uVar38;
  uVar43 = (ushort)uVar37 >> 1 | sVar24 << 0xf;
  if (uVar43 == 0) {
    uVar60 = CONCAT22((ushort)(iVar13 + 0x1098f4d5U >> 0x1b),(short)CONCAT31(uVar10,cVar62));
  }
  uVar56 = 0x167680ca - CONCAT22((short)(uVar37 >> 0x10),uVar43);
  uVar32 = (int)CONCAT62((int6)((ulong)lVar26 >> 0x10),(short)(char)lVar26 * (short)cVar62) *
           0x276e6623;
  if (sVar24 != 0) {
    uVar32 = uVar64 | uVar44;
  }
  lVar26 = 0;
  if (uVar15 != 0) {
    for (; (uVar27 >> lVar26 & 1) == 0; lVar26 = lVar26 + 1) {
    }
  }
  uVar38 = (ulong)(uVar46 >> 1 | (uint)((uVar55 & 1) != 0) << 0x1f) +
           CONCAT62(auVar4._10_6_,
                    CONCAT11(auVar4[9] + (char)uVar58 +
                             ((0xe3fb58f5U >> (uVar64 & 0x1f | uVar44) & 1) != 0),auVar4[8]));
  uVar44 = CONCAT31(uVar10,cVar62 << 1);
  uVar43 = (ushort)uVar22 | (ushort)uVar56;
  uVar64 = CONCAT22(0x81c0,uVar12 + 0xc6c1);
  uVar55 = (ushort)lVar26 >> 1;
  iVar13 = (int)uVar27;
  uVar58 = uVar64 + 0x1157ddd9 + iVar13;
  bVar41 = (byte)uVar43;
  uVar15 = (ulong)uVar32 << (bVar41 & 0x3f) | (ulong)(uVar32 >> 0x40 - (bVar41 & 0x3f));
  bVar40 = (char)uVar55 << 7;
  lVar33 = ((CONCAT71((int7)(uVar16 >> 8),bVar31 << bVar49 | bVar31 >> 8 - bVar49) << 1 |
            (ulong)((uVar37 & 1) != 0)) - 0x74fdece4) + (ulong)((uVar15 & 1) != 0);
  bVar19 = (bVar41 & 0x1f) % 9;
  uVar27 = CONCAT71((int7)(CONCAT62((int6)((ulong)lVar26 >> 0x10),
                                    uVar55 | (ushort)(uVar12 < 0x393f) << 0xf) >> 8),
                    bVar40 >> bVar19 | bVar40 << 9 - bVar19);
  uVar23 = (undefined6)((ulong)lVar33 >> 0x10);
  uVar16 = CONCAT62(uVar23,(ushort)lVar33 & ~(1 << (uVar43 & 0xf)));
  lVar26 = 0;
  if (uVar16 != 0) {
    for (; (uVar16 >> lVar26 & 1) == 0; lVar26 = lVar26 + 1) {
    }
  }
  uVar64 = uVar64 >> 0xc;
  uVar46 = uVar64 | iVar13 << 0x14;
  iVar57 = -(uVar56 & 0xeabfc66);
  lVar33 = (uVar15 >> 1) << 6;
  bVar65 = (ushort)CONCAT71((int7)((uVar38 & 0xffff) >> 8),
                            (char)(uVar38 & 0xffff) >> (bVar41 & 0x1f)) < (ushort)uVar60;
  bVar49 = (byte)uVar64;
  iVar13 = (uint)(ushort)CONCAT71((int7)(uVar16 >> 8),-bVar65) * (uVar60 & 0xffff);
  sVar25 = (short)((uint)iVar13 >> 0x10);
  uVar32 = (uint)uVar27;
  iVar13 = (int)(short)iVar13 * (int)sVar25;
  sVar24 = (short)iVar13;
  uVar16 = CONCAT62(uVar23,sVar24);
  bVar19 = (bVar41 & 0x1f) % 9;
  cVar29 = (char)iVar57;
  uVar64 = CONCAT31((int3)((uint)iVar57 >> 8),
                    (byte)(CONCAT11(sVar24 != iVar13,cVar29) >> bVar19) | cVar29 << 9 - bVar19);
  uVar15 = (ulong)uVar64;
  uVar52 = uVar15 ^ (ulong)(uVar16 == uVar15) * (ulong)(uVar64 ^ uVar60);
  uVar16 = uVar16 ^ (ulong)(uVar16 != uVar15) * (uVar16 ^ uVar52);
  iVar13 = CONCAT22((short)(uVar22 >> 0x10),
                    CONCAT11((byte)(uVar43 >> 9) | (sVar25 != 0) << 7,bVar41)) << (bVar41 & 0x1f);
  bVar19 = (byte)(uVar16 >> 8);
  bVar40 = (byte)((uint)iVar13 >> 8);
  uVar16 = CONCAT62((int6)(uVar16 >> 0x10),CONCAT11(bVar40,(char)uVar16));
  uVar22 = (uVar60 - ((int)CONCAT62((int6)((ulong)lVar26 >> 0x10),sVar25) + uVar32 * 2)) -
           (uint)CARRY1(bVar40,bVar19);
  uVar37 = (uint)uVar16;
  lVar26 = (ulong)CONCAT22((short)((uint)iVar13 >> 0x10),CONCAT11(bVar40 + bVar19,(char)iVar13)) +
           ((ulong)uVar58 | 0x40000);
  uVar64 = (uint)(uint3)((uint3)((CONCAT14(bVar65,uVar46) >> (bVar41 & 0x1f)) >> 8) |
                        (uint3)((uVar46 << 0x21 - (bVar41 & 0x1f)) >> 8)) << 8;
  if (-1 < (int)(uVar32 & (int)uVar37 >> 0x1f)) {
    uVar64 = (uint)uVar52;
  }
  uVar32 = (uint)CONCAT71((int7)((ulong)lVar33 >> 8),~((byte)lVar33 | (byte)(uVar38 >> 0x3a))) ^
           (uint)(1L << ((ulong)(byte)(cVar62 << 1) & 0x3f));
  uVar46 = uVar32 & 0x7fffffff;
  lVar33 = (CONCAT71((int7)(uVar38 >> 8),bVar49 >> (bVar41 & 7) | bVar49 << 8 - (bVar41 & 7)) &
           0xffffffffffff00ff) + 0x60c3a993;
  bVar65 = CARRY4(uVar37,uVar64 & 0xe6e7dc28);
  iVar13 = uVar37 + (uVar64 & 0xe6e7dc28);
  uVar16 = uVar16 & 0xffffffff;
  sVar24 = (short)uVar58;
  if (!bVar65 && iVar13 != 0) {
    uVar52 = CONCAT62((int6)(uVar52 >> 0x10),sVar24);
  }
  uVar58 = CONCAT22((short)(ushort)(uVar22 >> 0x11) >> 1,
                    (ushort)((int)(uVar22 >> 1) >> 1) & (ushort)uVar16);
  bVar19 = (byte)lVar26;
  uVar38 = (ulong)(uVar58 >> (bVar19 & 0x3f)) | (ulong)uVar58 << 0x40 - (bVar19 & 0x3f);
  uVar23 = (undefined6)((ulong)lVar33 >> 0x10);
  lVar17 = 0x3f;
  if (uVar44 != 0) {
    for (; uVar44 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  lVar61 = (ulong)((uVar60 + 0xe169a1fc) - (uint)bVar65) + 0x245ec30;
  uVar14 = CONCAT71((int7)(CONCAT62(uVar23,(short)lVar33 >> 0x1d) >> 8),
                    ((char)((ulong)lVar33 >> 8) >> 7) + '1');
  uVar60 = (uint)uVar16;
  bVar40 = (byte)((uint)iVar13 >> 0x18);
  bVar41 = bVar40 >> 3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar27;
  auVar4 = ZEXT116(0) << 0x40 | auVar4;
  auVar7 = auVar4 >> 0x13;
  uVar53 = auVar7._1_7_ | SUB167(auVar4 << 0x2e,1);
  cVar62 = (char)uVar46 + (char)uVar52 << (bVar19 & 0x1f);
  uVar64 = CONCAT31((uint3)((uVar32 << 1) >> 9),cVar62);
  uVar58 = 1 << (uVar60 & 0x1f);
  uVar28 = CONCAT62(uVar23,(short)uVar14);
  lVar33 = CONCAT62((int6)(uVar38 >> 0x10),(short)uVar38 << 1) + (ulong)(uVar44 - uVar46) +
           (ulong)((uVar58 & 1) != 0);
  bVar49 = ~auVar7[0];
  uVar60 = (((int)lVar17 + uVar60 + (uint)(uVar44 < uVar46) >> (bVar19 & 0x1f) |
            (int)uVar14 << 0x20 - (bVar19 & 0x1f)) & 0xffffffb8) - (int)uVar28;
  uVar38 = CONCAT71(uVar53,bVar49) >> 1;
  uVar16 = (ulong)(uVar44 - uVar46);
  if (((uVar53 & 0x80000000000000) != 0) == ((bVar49 & 1) != 0)) {
    uVar16 = (ulong)uVar60;
  }
  lVar17 = (ulong)CONCAT11(bVar40 >> 4 | bVar41 << 7,bVar41) * lVar33;
  uVar45 = CONCAT62((int6)((ulong)lVar61 >> 0x10),(ushort)lVar61 & (ushort)uVar38);
  uVar15 = (long)(int)CONCAT71((int7)((ulong)lVar17 >> 8),(char)lVar17 + cVar62 + '\x01') *
           (long)(int)uVar45;
  uVar27 = uVar15 & 0xffffffff;
  uVar37 = uVar60 * 8 >> (bVar19 & 0x3f) | uVar64 << 0x40 - (bVar19 & 0x3f);
  uVar44 = (uint)uVar38;
  if (CARRY8(uVar45,uVar16)) {
    uVar44 = uVar37;
  }
  uVar22 = (uint)CONCAT71((int7)((ulong)(lVar61 * 0x200) >> 8),'\0' >> (bVar19 & 0x1f));
  iVar13 = uVar37 - uVar22;
  uVar12 = (short)(uVar45 + uVar16) + (short)uVar27 + 1;
  sVar25 = (short)(char)uVar27 * (short)(char)iVar13;
  iVar51 = uVar44 + 0xa4468e02;
  uVar38 = (ulong)uVar64 << (bVar19 & 0x3f) | (ulong)(uVar64 >> 0x40 - (bVar19 & 0x3f));
  uVar43 = (ushort)CONCAT71((uint7)(byte)((ushort)(sVar24 - (ushort)bVar19) >> 8),0x6d);
  sVar24 = (ushort)lVar33 - (ushort)uVar38;
  bVar65 = (ushort)uVar38 <= (ushort)lVar33 && sVar24 != 0;
  bVar41 = (byte)sVar25;
  bVar40 = bVar19 ^ (bVar41 == bVar19) * (bVar19 ^ bVar65);
  lVar26 = CONCAT71((int7)(CONCAT62((int6)((ulong)lVar26 >> 0x10),
                                    CONCAT11(-1 >> (bVar19 & 0x1f),bVar19)) >> 8),bVar40);
  auVar7._1_7_ = (int7)(CONCAT62((int6)(uVar27 >> 0x10),sVar25) >> 8);
  auVar7[0] = bVar41 ^ (bVar41 != bVar19) * (bVar41 ^ bVar40);
  lVar17 = lVar26 * 0x4e014301;
  bVar19 = ((byte)lVar17 & 0x1f) % 0x11;
  lVar26 = CONCAT62((int6)(uVar38 >> 0x10),
                    CONCAT11(SEXT816(lVar17) != SEXT816(lVar26) * SEXT416(0x4e014301),(char)uVar38)
                    ^ 1 << ((ushort)(uVar15 >> 0x21) & 0xf));
  uVar63 = (ushort)CONCAT71((int7)(uVar16 >> 8),bVar65) ^ uVar43;
  uVar64 = (uint)CONCAT62((int6)((ulong)lVar33 >> 0x10),sVar24);
  uVar44 = uVar64 >> 0x18 | (uVar64 & 0xff0000) >> 8 | (uVar64 & 0xff00) << 8 | uVar64 << 0x18;
  auVar7._8_8_ = 0;
  auVar7 = auVar7 * ZEXT416(uVar44);
  uVar55 = (ushort)~(uint)lVar17;
  uVar12 = (uVar12 >> bVar19 | uVar12 << 0x11 - bVar19) + uVar55;
  bVar19 = (byte)~(uint)lVar17;
  uVar37 = CONCAT22((short)((uint)iVar13 >> 0x10),uVar43) >> (bVar19 & 0x1f);
  uVar59 = (ulong)(short)uVar12;
  lVar33 = ((ulong)(uint)((int)uVar27 + 0x66 + (int)(uVar15 >> 0x20)) - 0x1223dd24c) -
           (ulong)(0xfffffffff8ce9108 < uVar59 || 0xfffffffffffffffe < uVar59 + 0x7316ef7);
  uVar43 = (ushort)((ushort)((ulong)(lVar61 * 0x200) >> 0x10) >> 1 | 0x8000) >> 0xd;
  uVar64 = (uint)(ushort)(uVar43 + 0x897e);
  uVar8 = CONCAT14(uVar43 < 0x7682,uVar37);
  iVar13 = uVar37 << 0xc;
  uVar15 = uVar59 + 0x7316ef8 >> 1 | lVar26 << 0x3f;
  uVar43 = uVar55 << 1 | (ushort)((short)uVar55 < 0);
  lVar26 = lVar26 << 1;
  iVar57 = uVar44 + 0xe5c87b0d << (bVar19 & 0x1f);
  if ((long)uVar38 < 0 != lVar26 < 0) {
    iVar57 = CONCAT22((short)((uint)iVar51 >> 0x10),(short)(uVar22 >> 1) + (short)iVar51 * 8);
  }
  bVar19 = (byte)uVar43;
  bVar49 = (byte)lVar26 ^ bVar19;
  uVar44 = (uint)CONCAT62((int6)((ulong)lVar33 >> 0x10),(ushort)lVar33 >> 1);
  uVar44 = uVar44 << (bVar19 & 0x1f) | uVar44 >> 0x20 - (bVar19 & 0x1f);
  uVar37 = uVar43 ^ uVar44;
  lVar26 = CONCAT71((int7)((ulong)lVar26 >> 8),bVar49) >> 1;
  bVar41 = (byte)uVar37 & 0xf;
  uVar43 = (short)uVar44 << bVar41 | (ushort)lVar26 >> 0x10 - bVar41;
  uVar44 = CONCAT22((short)(uVar44 >> 0x10),uVar43);
  bVar40 = ((char)(((uint)(ushort)((ushort)CONCAT71(auVar7._9_7_,
                                                    auVar7[8] & ~(byte)(1L << bVar65) & 0x2b) |
                                  uVar55) << 7) >> 8) >> 7) + auVar7[0] + 1;
  uVar22 = uVar64 << 0x11;
  uVar32 = CONCAT31((int3)((uint)iVar57 >> 8),(byte)iVar57 >> 1);
  uVar37 = uVar37 & 0xffffff0f;
  sVar18 = (sbyte)uVar37;
  uVar21 = (ushort)((uint)iVar13 >> 0x10);
  uVar37 = CONCAT22(uVar21,(short)CONCAT31((uint3)((uint5)uVar8 >> 0x1d) |
                                           (uint3)((uint)iVar13 >> 8),
                                           (char)(uint)((uint5)uVar8 >> 0x15) + (char)uVar12) <<
                           sVar18 | (ushort)uVar37 >> 0x10 - sVar18) >> 1;
  uVar56 = uVar32 << sVar18 | uVar32 >> 0x20 - sVar18;
  uVar27 = (ulong)uVar56;
  uVar32 = (int)CONCAT71((int7)((ulong)uVar28 >> 8),(bVar49 == 0) + -0x45) << (bVar19 & 0x3f) &
           0xffffff00U & ~(1 << (uVar43 & 0x1f));
  uVar47 = uVar22 >> sVar18 | uVar22 << 0x20 - sVar18;
  uVar22 = uVar32 >> sVar18 | uVar32 << 0x20 - sVar18;
  uVar38 = (ulong)uVar64 ^ 0xffffffff84e5ea14;
  uVar55 = (ushort)CARRY1((byte)uVar43,bVar40);
  uVar43 = uVar63 + 0xd9b9;
  bVar41 = (sVar18 + -0x4f) - (uVar63 < 0x2647 || uVar43 < uVar55) & 8;
  uVar32 = ~((int)(uint6)(uVar45 + uVar16 >> 0x1d) + 0x2060d13bU);
  uVar64 = -((byte)((byte)lVar26 ^ auVar7[0]) + uVar37 + 1 & 0xff);
  uVar15 = (uVar15 << bVar41 | uVar15 >> 0x40 - bVar41) >> 1;
  uVar63 = (ushort)uVar37;
  uVar21 = uVar21 >> 1;
  uVar58 = ~(CONCAT22((short)(((((int)CONCAT71((int7)(uVar52 >> 8),(char)uVar46) << 0xb | uVar58) >>
                               1) - uVar60) + -1 >> 0x10),uVar12 >> (bVar19 & 0x1f)) >> 0xf & uVar44
            );
  uVar43 = (ushort)(uVar43 - uVar55) >> 1;
  uVar55 = (ushort)CONCAT31((uint3)(byte)((uint)iVar51 >> 0x18),1) ^ 1 << ((ushort)uVar32 & 0xf);
  uVar60 = CONCAT22(uVar21,uVar63 << bVar41 % 0x11 | uVar63 >> 0x11 - bVar41 % 0x11) & 0xff7fffff;
  if ((uVar21 & 0x80) != 0) {
    uVar58 = CONCAT22((short)(uVar58 >> 0x10),uVar43);
  }
  sVar24 = uVar55 * 0x2beb;
  uVar52 = (ulong)CONCAT11((byte)((ushort)sVar24 >> 8) ^ bVar40,(char)sVar24);
  uVar45 = uVar27 ^ (ulong)(uVar52 == uVar27) * (ulong)(uVar56 ^ uVar32);
  uVar16 = CONCAT71((int7)(CONCAT62((int6)(uVar16 >> 0x10),uVar43) >> 8),(char)uVar38);
  if ((uVar55 >> 9 & 1) != 0) {
    uVar16 = (ulong)uVar47;
  }
  uVar9 = (uint3)(uVar22 >> 8);
  uVar44 = (int)CONCAT62((int6)((((ulong)uVar44 & 0xffff) << 1) >> 0x10),(ushort)(byte)(uVar64 >> 8)
                        ) + (int)uVar16;
  bVar19 = (byte)uVar44;
  uVar34 = (ulong)uVar64 + 0x2a6abdd5 << (bVar19 & 0x3f) |
           (ulong)(CONCAT31((int3)(uVar60 >> 8),(char)uVar60 + '\x01') >> 0x40 - (bVar19 & 0x3f));
  uVar59 = (ulong)(long)(short)uVar64 >> (bVar19 & 0x3f);
  uVar55 = (ushort)(uVar60 >> 0x10);
  bVar41 = (byte)(uVar44 >> 1);
  lVar26 = (long)((CONCAT71((int7)(uVar38 >> 8),(char)(uVar34 >> 1)) + -0xca9c81ef) -
                 (ulong)((uVar9 >> 0x10 & 1) != 0)) >> (bVar41 & 0x3f);
  uVar43 = (ushort)uVar59 |
           1 << (((short)uVar47 << (bVar19 & 0x3f) | (ushort)(uVar16 >> 0x40 - (bVar19 & 0x3f))) &
                0xf);
  uVar35 = (uint6)(uVar34 >> 0x11);
  bVar19 = (byte)((uVar44 >> 1) >> 8);
  uVar38 = uVar52 ^ (ulong)(uVar52 != uVar27) * (uVar52 ^ uVar45);
  if (CARRY4(uVar58 & 0xffff0000,uVar58 & 0xffff0000)) {
    uVar38 = (ulong)uVar55 << 0x10;
  }
  iVar13 = (CONCAT22((ushort)(uVar44 >> 0x11),CONCAT11(bVar19 >> 1 | bVar19 << 7,bVar41)) |
           (uint)uVar55 * 0x10000) << 1;
  bVar19 = (byte)(uVar35 >> 8) >> 7;
  cVar62 = (char)lVar26;
  sVar25 = (short)uVar45 >> 7;
  uVar14 = CONCAT62((int6)(uVar45 >> 0x10),sVar25);
  sVar24 = 0;
  if (uVar43 != 0) {
    for (; (uVar43 >> sVar24 & 1) == 0; sVar24 = sVar24 + 1) {
    }
  }
  bVar40 = (byte)((uint)iVar13 >> 8) & (byte)uVar38;
  uVar27 = uVar38 & 0xffffffffffff3fff | 0xc0;
  uVar55 = (ushort)(byte)uVar27;
  uVar12 = (ushort)uVar27;
  uVar52 = CONCAT62((int6)((uVar38 & 0xffffffffffff3fff) >> 0x10),
                    CONCAT11((char)(uVar12 % uVar55),(char)(uVar12 / uVar55)));
  sVar50 = (short)lVar26 + -1;
  uVar39 = CONCAT62((int6)((ulong)lVar26 >> 0x10),sVar50);
  bVar41 = (byte)sVar25;
  uVar34 = CONCAT71((int7)((ulong)uVar14 >> 8),bVar41 >> 3 | bVar41 << 5);
  uVar58 = (uint)uVar39;
  uVar45 = (ulong)(uVar58 | 0xc0000000);
  uVar38 = (ulong)((int)CONCAT62((int6)(uVar59 >> 0x10),uVar43) * -0x33fa521e & 0x3fffffff) << 0x20
           | uVar52 & 0xffffffff;
  bVar41 = (byte)iVar13 & 7 | bVar19;
  bVar49 = (byte)(uVar15 >> 8);
  uVar59 = (ulong)CONCAT31(uVar9,(char)uVar22 + '\x19') | 0x100946f;
  uVar27 = uVar38 % uVar45 & 0x5955d515;
  uVar28 = CONCAT71((int7)(uVar27 >> 8),(char)uVar27 + -0x26);
  uVar27 = uVar34 & 0xffffffff;
  if ((short)uVar34 != 0) {
    uVar27 = CONCAT62((int6)(uVar16 >> 0x10),sVar24);
  }
  uVar64 = CONCAT22((short)((uint)iVar13 >> 0x10),
                    CONCAT11(bVar40 << 2 | bVar40 >> 7,(byte)iVar13 | bVar19)) &
           ~(1 << ((uint)uVar28 & 0x1f));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulong)uVar32 | 0xc000000000000000;
  auVar3._8_8_ = uVar28;
  auVar3._0_8_ = uVar38 / uVar45 << 0x35;
  uVar9 = (uint3)((ushort)((ulong)lVar26 >> 0x10) & 0xff) | (uint3)uVar39 & 0xff00 |
          (uint3)((uVar58 << 0x18) >> 8);
  uVar45 = 1L << ((ulong)uVar64 & 0x3f) ^ 0x3fffffffffffffff;
  iVar13 = (int)CONCAT62(uVar35,CONCAT11(bVar49 >> bVar41 | bVar49 << 8 - bVar41,(char)uVar15)) +
           0x4f8c61d1;
  uVar42 = (undefined7)(uVar59 >> 8);
  bVar41 = (char)uVar59 << 1;
  uVar43 = (short)(ushort)uVar32 >> 1;
  sVar24 = SUB162(auVar3 % auVar1,0);
  uVar44 = CONCAT31((int3)((uint)((int)uVar52 + (int)uVar14) >> 8),(char)sVar50 != 'j') | 0x1ff38473
  ;
  uVar38 = ~CONCAT62(SUB166(auVar3 % auVar1,2),
                     (short)((uint)((int)(short)((cVar62 - sVar24) - (ushort)((uVar32 & 1) != 0)) *
                                   (int)sVar24) >> 0x10));
  uVar58 = (uint)CONCAT71(uVar42,bVar41) & 0x1f;
  bVar19 = ((byte)uVar64 & 0x1f) % 0x11;
  sVar24 = (short)uVar45;
  uVar55 = (ushort)(short)cVar62 >> 0xc | (short)cVar62 << 4;
  uVar16 = CONCAT71(uVar42,bVar41 & (byte)uVar38);
  uVar58 = ~((uint)CONCAT62((int6)(uVar45 >> 0x10),
                            sVar24 << bVar19 |
                            (ushort)(CONCAT12((uVar44 >> uVar58 & 1) != 0,sVar24) >> 0x11 - bVar19))
            & uVar44 & ~(1 << uVar58));
  lVar26 = ((ulong)CONCAT11(((uVar16 & 0x9db) == 0) << 6 |
                            ((POPCOUNT((ushort)uVar16 & 0xdb) & 1U) == 0) << 2,
                            (char)((uint)iVar13 >> 8)) | 0x200) * uVar38;
  iVar57 = uVar64 - (int)uVar16;
  uVar38 = (ulong)CONCAT22((short)((uint)(iVar13 * 2) >> 0x10),
                           (short)uVar38 + 0xe6 + ((short)cVar62 + uVar55 + 1) * 4) << 1;
  bVar41 = (byte)uVar38 | (byte)(((ulong)uVar9 << 0x3d) >> 0x3f);
  uVar52 = (ulong)(uVar9 >> 3) + 1;
  bVar19 = (byte)iVar57 | bVar41;
  uVar44 = CONCAT22(cVar62 >> 7,(short)uVar15) ^ 0xc265e644;
  iVar13 = (int)(short)lVar26 * (int)(short)uVar55;
  uVar64 = (uint)(uVar52 << (bVar19 & 0x1f)) | (uint)(uVar52 >> 0x21 - (bVar19 & 0x1f));
  lVar33 = uVar27 << (bVar19 & 0x3f);
  iVar57 = CONCAT31((int3)((uint)iVar57 >> 8),bVar19) << (bVar19 & 0x1f);
  cVar29 = (char)((uint)iVar13 >> 0x18);
  lVar26 = CONCAT62((int6)((ulong)lVar26 >> 0x10),CONCAT11(cVar29,(char)iVar13));
  if ((POPCOUNT(cVar29 + (char)((uint)iVar13 >> 8)) & 1U) != 0) {
    uVar58 = CONCAT22((short)(uVar58 >> 0x10),(short)lVar33);
  }
  uVar15 = (ulong)CONCAT22((short)((uint)iVar57 >> 0x10),(short)iVar57 + 0x2b9e);
  uVar60 = (int)(((uint)CONCAT62((int6)(((ulong)uVar32 | 0xc000000000000000) >> 0x10),uVar43) &
                 ~(uint)(1L << ((ulong)uVar43 & 0x3f))) + 0x747e84d7) >> 1;
  lVar17 = 0x3f;
  if (uVar60 != 0) {
    for (; uVar60 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  auVar4 = SEXT816(lVar26) * SEXT816((long)(ulong)uVar44);
  lVar26 = lVar26 * (ulong)uVar44;
  bVar19 = (byte)lVar26;
  uVar27 = (ulong)((uint)lVar33 ^ uVar64);
  if (!SCARRY8((ulong)uVar58,(ulong)uVar58)) {
    uVar27 = uVar38 & 0xffffffff;
  }
  uVar52 = (ulong)(CONCAT18(SEXT816(lVar17 * -0x3e42a425) != SEXT816(lVar17) * SEXT416(-0x3e42a425),
                            uVar15) >> 0x1b);
  bVar40 = (byte)uVar52;
  uVar37 = (uint)uVar52;
  uVar45 = (uVar64 - uVar15) - 0x264f52ba;
  bVar49 = auVar4[8];
  uVar58 = CONCAT31((int3)(uVar44 >> 8),(char)uVar44 >> bVar40) >> 1;
  uVar38 = CONCAT71((int7)(uVar38 >> 8),bVar41 & bVar49);
  uVar38 = uVar38 << bVar40 | uVar38 >> 0x40 - bVar40;
  iVar13 = 0;
  uVar22 = (uint)CONCAT71((int7)(uVar38 >> 8),(char)uVar38 + -1);
  if (uVar22 != 0) {
    for (; (uVar22 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
    }
  }
  lVar33 = auVar4._8_8_ * 0x52c811a0;
  uVar22 = CONCAT31((int3)(CONCAT22(cVar62 >> 7,uVar55) >> 8),
                    (byte)uVar55 << (bVar40 & 7) | (byte)uVar55 >> 8 - (bVar40 & 7));
  cVar62 = (char)lVar33;
  lVar26 = -CONCAT71((int7)(CONCAT62((int6)((ulong)lVar26 >> 0x10),
                                     CONCAT11(!SBORROW8((ulong)uVar64,uVar15),bVar19)) >> 8),
                     bVar19 | bVar49);
  uVar38 = (ulong)uVar22;
  if ((uint)(int)(short)uVar22 < 0x52c4cc6c) {
    uVar38 = uVar45;
  }
  uVar15 = (ulong)CONCAT22((ushort)(uVar44 >> 0x11),(ushort)uVar58) | 0xffffffffefbcc356;
  uVar14 = 0;
  if ((POPCOUNT(uVar15 & 0xff) & 1U) != 0) {
    uVar14 = CONCAT71((int7)(uVar27 >> 8),(byte)uVar27 >> 1);
  }
  uVar55 = (ushort)uVar58 & 0xff;
  lVar17 = CONCAT62((int6)((ulong)uVar14 >> 0x10),(short)uVar14 << 10 | uVar55 >> 6);
  uVar64 = (uint)uVar45;
  iVar13 = 0x1f;
  if ((uVar52 & 0xff) != 0) {
    for (; uVar37 >> iVar13 == 0; iVar13 = iVar13 + -1) {
    }
  }
  sVar24 = 0xf;
  if ((uVar58 & 0xff) != 0) {
    for (; uVar55 >> sVar24 == 0; sVar24 = sVar24 + -1) {
    }
  }
  sVar24 = CONCAT11((char)((ulong)lVar33 >> 8) * '\x02',cVar62) + sVar24 * 4;
  uVar54 = (undefined6)(uVar15 >> 0x10);
  lVar33 = CONCAT62(uVar54,sVar24);
  bVar19 = ((char)(uVar37 >> 1) + '\v') -
           (SEXT816(lVar33 * 0x725232a3) != SEXT816(lVar33) * SEXT416(0x725232a3));
  uVar44 = CONCAT31((int3)((uVar37 << 0x1f) >> 8),bVar19);
  iVar13 = (uVar58 & 0xffff) << 1;
  uVar12 = (ushort)iVar13;
  uVar63 = uVar12 | 1;
  uVar58 = (uint)CONCAT62((int6)((ulong)lVar26 >> 0x10),(short)lVar26 - (short)uVar15);
  uVar58 = uVar58 << (bVar19 & 0x1f) | uVar58 >> 0x20 - (bVar19 & 0x1f);
  uVar15 = (ulong)uVar58;
  uVar64 = ((((int)CONCAT62((int6)(uVar59 >> 0x10),(ushort)uVar16 >> 1) + uVar60) * 2 ^ 0x3a01bc8d)
           & (uVar64 << 2 | uVar64 >> 0x1e)) >> (bVar19 & 0x1f) | uVar44 << 0x20 - (bVar19 & 0x1f);
  lVar26 = (ulong)uVar44 << (bVar19 & 0x3f);
  bVar19 = (char)lVar26 + (char)((ulong)lVar26 >> 8);
  bVar41 = bVar19 & 0xf;
  uVar43 = (ushort)CONCAT71((int7)((ulong)lVar26 >> 8),bVar19);
  uVar23 = (undefined6)((ulong)lVar26 >> 0x10);
  cVar29 = (char)(uVar58 >> 8) >> 7;
  uVar58 = (uint)CONCAT62(uVar54,sVar24 + (ushort)(byte)((char)uVar55 << 1 | 1)) >> 1;
  uVar43 = (uVar43 << bVar41 | uVar43 >> 0x10 - bVar41) + 0x318a;
  uVar16 = CONCAT62(uVar23,uVar43);
  uVar27 = (ulong)(uVar64 * -0x2fc71c46 | uVar64 >> 0x1f) - lVar17;
  sVar24 = 0xf;
  if (uVar63 != 0) {
    for (; uVar63 >> sVar24 == 0; sVar24 = sVar24 + -1) {
    }
  }
  uVar45 = uVar27 ^ (ulong)(uVar15 == uVar27) * (uVar27 ^ uVar16);
  uVar15 = uVar15 ^ (ulong)(uVar15 != uVar27) * (uVar15 ^ uVar45);
  bVar19 = (byte)uVar43;
  uVar34 = CONCAT62((int6)(uVar38 >> 0x10),
                    (ushort)uVar38 >> (bVar19 & 0xf) | (ushort)uVar38 << 0x10 - (bVar19 & 0xf));
  uVar52 = uVar15 >> (bVar19 & 0x3f) | uVar15 << 0x40 - (bVar19 & 0x3f);
  uVar15 = CONCAT71((int7)((ulong)lVar17 >> 8),(char)(uVar55 >> 6)) ^ 0x81;
  uVar60 = CONCAT22((short)((uint)iVar13 >> 0x10),uVar12 >> 6);
  iVar57 = (int)uVar45 + uVar64;
  uVar38 = (ulong)uVar60 & 0x3f;
  uVar27 = uVar15 ^ 1L << uVar38;
  uVar16 = ((uint)((CONCAT14((uVar15 >> uVar38 & 1) != 0,uVar58) | 0x80000000) >> 5) |
           uVar58 << 0x1c) & uVar16;
  uVar35 = (uint6)(uVar27 >> 0x10);
  sVar24 = (short)uVar27 << (bVar19 & 0x1f);
  bVar31 = cVar62 + '%' + ((byte)((long)((ulong)CONCAT11(cVar29,cVar29) ^ 0x100) >> 1) ^ bVar19);
  uVar15 = CONCAT62(uVar23,uVar43 >> 1);
  uVar12 = (ushort)iVar57;
  uVar44 = (int)(short)uVar52 * (int)(short)uVar12;
  uVar55 = ~(sVar24 + ~(ushort)uVar16);
  uVar63 = uVar55 << 6 | (ushort)(CONCAT12((int)(short)uVar44 != uVar44,uVar55) >> 0xb);
  iVar13 = CONCAT22((short)(uVar64 >> 0x10),(ushort)((short)uVar64 << (bVar19 & 0x1f)) >> 1);
  uVar37 = (uint)uVar15;
  uVar58 = iVar13 - uVar37;
  uVar59 = (ulong)CONCAT31((int3)(uVar60 >> 8),(SBORROW4(iVar13,uVar37) != false) == (int)uVar58 < 0
                          );
  uVar64 = (uint)CONCAT71((int7)(CONCAT62((int6)(uVar52 >> 0x10),(short)uVar44) >> 8),0xe2) >> 1;
  uVar38 = (ulong)uVar58 + 0x8e785eaddc7459db;
  lVar33 = uVar38 + (uVar12 < uVar63);
  bVar40 = (byte)uVar64;
  bVar49 = (byte)(uVar64 >> 8);
  bVar19 = (byte)(uVar43 >> 1) >> 1;
  uVar27 = uVar59 | 0xc000000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar27;
  bVar41 = bVar19 & 0xf;
  uVar55 = SUB162((ZEXT116(0x7187a152238ba624 < (ulong)uVar58 ||
                           CARRY8(uVar38,(ulong)(uVar12 < uVar63))) << 0x40 |
                  ZEXT816(0x8e785eaddc7459db)) >> 0x26,0);
  uVar45 = CONCAT71((int7)(uVar15 >> 8),bVar19 | (bVar49 < bVar40) << 7) << 0x14 |
           (ulong)(uVar35 >> 0x1c);
  lVar26 = uVar45 + 0x3d7c25ce + CONCAT62((int6)(uVar16 >> 0x10),sVar24) * 8;
  bVar19 = SUB161((ZEXT416((uVar44 >> 0x10) + 1) << 0x40 |
                  ZEXT416(CONCAT22((ushort)(uVar52 >> 0x10) >> 1,CONCAT11(bVar49 - bVar40,bVar40))))
                  % auVar2,1);
  uVar38 = uVar34 - 0x45c02fef;
  if (0x45c02fee < uVar34) {
    uVar45 = CONCAT62((int6)(uVar45 >> 0x10),
                      ((ushort)CONCAT71((int7)((ulong)lVar33 >> 8),(char)lVar33 + '>') &
                      ~(ushort)(1 << (uVar44 & 0x1f))) * 0x4513);
  }
  uVar43 = 0xf;
  if (bVar31 != 0) {
    for (; bVar31 >> uVar43 == 0; uVar43 = uVar43 - 1) {
    }
  }
  bVar40 = (byte)(uVar12 - uVar63);
  uVar16 = 1L << (uVar59 & 0x3f) ^ 0x3fffffffffffff45;
  iVar13 = (int)CONCAT62((int6)((ulong)lVar26 >> 0x10),(ushort)(byte)lVar26 * (ushort)bVar19);
  bVar19 = (bVar31 - bVar19) - (iVar13 < 0);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar45;
  auVar5 = ZEXT416(iVar13 << 1 | 1) * auVar5;
  uVar21 = (ushort)((ulong)uVar43 << 1);
  if ((ushort)uVar45 <= uVar21) {
    uVar27 = uVar15;
  }
  bVar49 = (byte)(auVar5._0_2_ >> 6);
  uVar52 = CONCAT71((int7)(uVar45 >> 8),bVar49);
  uVar27 = uVar27 >> (bVar49 & 0x3f);
  sVar25 = (short)uVar38;
  uVar58 = CONCAT31((int3)(CONCAT22((short)((uint)iVar57 >> 0x10),uVar12 - uVar63) >> 8),
                    bVar40 >> 1 | bVar40 << 7) ^ 1 << ((uint)uVar16 & 0x1f);
  uVar52 = uVar52 >> (bVar49 & 0x3f) | uVar52 << 0x40 - (bVar49 & 0x3f);
  iVar13 = (int)(short)(sVar25 * 5) * (int)(short)uVar52;
  sVar24 = 0xf;
  uVar12 = (ushort)CONCAT71((int7)(uVar52 >> 8),(char)(byte)uVar52 >> ((byte)uVar52 & 0x1f));
  if (uVar12 != 0) {
    for (; uVar12 >> sVar24 == 0; sVar24 = sVar24 + -1) {
    }
  }
  uVar43 = (short)(ulong)(CONCAT18(CARRY4((uint)(byte)(bVar19 >> 1 | bVar19 * -0x80),(uint)uVar27),
                                   CONCAT62((int6)(((ulong)uVar43 << 1) >> 0x10),
                                            uVar21 - (ushort)uVar45)) >> 9) + sVar24;
  bVar40 = (byte)((uint)iVar13 >> 0x10);
  uVar45 = ((uint)(ushort)(uVar55 << bVar41 | uVar55 >> 0x10 - bVar41) << 0x1c) - uVar27;
  bVar19 = (byte)(uVar43 >> 9);
  iVar57 = (int)CONCAT62((int6)(uVar52 >> 0x10),0x8ba1) >> 1;
  bVar41 = (byte)iVar57;
  uVar64 = (uint)CONCAT62(auVar5._10_6_,(short)((uint)iVar13 >> 0x10));
  uVar38 = (ulong)((char)((byte)((uVar64 << (bVar41 & 0x1f)) >> 8) |
                         (byte)((uVar64 >> 0x20 - (bVar41 & 0x1f)) >> 8)) < '\0') << 0x20 |
           uVar38 & 0xffffffff;
  uVar60 = (uint)(uVar38 << (bVar41 & 0x1f)) | (uint)(uVar38 >> 0x21 - (bVar41 & 0x1f));
  sVar24 = (short)uVar58 * -0x2265;
  bVar31 = (byte)(uVar43 >> 1);
  bVar49 = bVar31 >> 1 |
           ((ulong)(long)(int)CONCAT71((int7)(CONCAT62(auVar5._2_6_,(short)iVar13) >> 8),
                                       (short)iVar13 != iVar13) < (ulong)uVar60) << 7;
  uVar64 = CONCAT11(bVar19,bVar49) | 0x80000000;
  uVar44 = (uint)CONCAT62((int6)(uVar16 >> 0x10),
                          (((ushort)uVar16 >> 1 | (ushort)((uVar16 & 1) != 0) << 0xf) - sVar25) + -1
                         );
  if ((int)uVar44 < 0) {
    sVar24 = (short)(uVar45 & 0xffffffff);
  }
  uVar55 = CONCAT11((char)((uint)iVar57 >> 8),bVar40);
  uVar58 = CONCAT22((short)(uVar58 >> 0x10),sVar24) + 1;
  sVar24 = (short)CONCAT71((int7)((uVar15 & 0x6a96cca2) >> 8),(byte)(uVar15 & 0x6a96cca2) >> 1) +
           0x274c;
  uVar38 = 0x80;
  if (sVar24 == 0) {
    uVar38 = (ulong)uVar58;
  }
  uVar43 = (short)uVar38 << 1 | (ushort)((short)uVar38 < 0);
  uVar58 = (uVar58 - iVar57) - 1;
  iVar13 = 0x1f;
  if (uVar60 != 0) {
    for (; uVar60 >> iVar13 == 0; iVar13 = iVar13 + -1) {
    }
  }
  uVar12 = (short)iVar13 << 1 | (ushort)uVar27 >> 0xf;
  uVar22 = (uint)(bVar40 >> (bVar41 & 0x1f)) | uVar64 << 0x20 - (bVar41 & 0x1f);
  if ((uVar45 & 0xffffffff) <= (ulong)uVar64) {
    uVar22 = CONCAT22((short)((uint)iVar13 >> 0x10),uVar12);
  }
  uVar64 = uVar22 + 0x4caf3bec + (uint)(iVar13 < 0);
  uVar21 = (ushort)uVar45;
  uVar48 = (ushort)uVar58;
  uVar23 = (undefined6)(uVar45 >> 0x10);
  uVar36 = uVar21 ^ (ushort)(uVar55 == uVar21) * (uVar21 ^ uVar48);
  uVar55 = uVar55 ^ (ushort)(uVar55 != uVar21) * (uVar55 ^ uVar36);
  uVar16 = uVar27 >> 0x25;
  uVar21 = (ushort)iVar57;
  bVar40 = (byte)(uVar55 >> 8);
  bVar20 = (byte)(uVar21 + sVar24);
  bVar11 = (byte)uVar55 & bVar20;
  if ((char)bVar11 < '\0') {
    uVar27 = CONCAT62((int6)(uVar27 >> 0x10),uVar12 << 1 | (ushort)CARRY1(bVar49,bVar49));
  }
  uVar15 = (ulong)(uVar64 >> (bVar41 & 0x1f) | uVar64 << 0x20 - (bVar41 & 0x1f)) + 1;
  iVar13 = ((int)(char)bVar41 << 0x1b | (uint)uVar16) + 0x900a1c66;
  uVar16 = (ulong)(((int)CONCAT62(uVar35,(short)uVar63 >> 0x17) << 3 | uVar37 >> 0x1d) & 0xa886862b)
           | 1L << (uVar15 & 0x3f);
  uVar12 = (ushort)(char)iVar13;
  bVar49 = bVar20 ^ (bVar11 == bVar20) * (bVar20 ^ bVar40);
  uVar55 = (ushort)iVar13;
  uVar63 = (short)uVar27 - 1;
  if (!SCARRY2(uVar12,uVar21)) {
    uVar58 = CONCAT22((short)(uVar58 >> 0x10),(short)uVar60);
  }
  uVar59 = (ulong)CONCAT22((short)uVar48 >> 0xf,(uVar48 + 0xd25a) - (ushort)CARRY2(uVar12,uVar21));
  uVar64 = (uVar44 >> 1 | 0x80000000) & ~(1 << (uVar58 & 0x1f));
  uVar52 = uVar15 & 0xffffffffffffff00;
  uVar45 = CONCAT44(0,CONCAT31((int3)(uVar58 >> 8),(char)uVar58 + (char)uVar63) >> 1 |
                      uVar64 << 0x1f);
  if (uVar59 == 0) {
    uVar52 = uVar15 & 0xffffffffffff0000;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar45;
  auVar6 = ZEXT416((uint)(int)(short)(CONCAT11(bVar40,bVar11 ^ (bVar11 != bVar20) *
                                                               (bVar11 ^ bVar49)) | uVar48)) *
           auVar6;
  uVar34 = (ulong)(uVar55 & 0xff | 0x2000);
  uVar15 = CONCAT62((int6)((uVar52 << 1) >> 0x10),(ushort)(uVar52 << 1) >> 10) + 0x5e3212a8;
  if (0x14ad6ed9 < uVar64) {
    uVar15 = uVar34;
  }
  return auVar6._0_8_ + uVar15 + (ulong)(uVar60 * 0x240c8c2a) + auVar6._8_8_ +
         (ulong)((int)(CONCAT62(uVar23,(ushort)CONCAT71((int7)(CONCAT62(uVar23,uVar36) >> 8),
                                                        (char)uVar36 << 1) & ~(1 << (uVar55 & 0xf)))
                      >> 1) + 0x1687f373U >> 1) + uVar34 +
         (ulong)(CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + bVar11 + 0x88 + bVar41 * '\x04')
                & 0xfff7ffff) + (ulong)(uint)((int)uVar64 >> 0x15) + uVar45 * 2 +
         CONCAT62((uint6)((ulong)((CONCAT71((int7)(CONCAT62((int6)(uVar38 >> 0x10),uVar43) >> 8),
                                            (char)uVar43 + -1) >> 1) << 0x13) >> 0x11),
                  (short)(uVar12 + uVar21) >> 0x18) +
         CONCAT62((int6)(uVar27 >> 0x10),uVar63 >> 1 | (ushort)((uVar63 & 1) != 0) << 0xf) +
         (ulong)uVar60 + CONCAT62((int6)(uVar16 >> 0x10),(short)uVar16 << (bVar49 & 0x1f)) +
         CONCAT62((int6)(-uVar59 >> 0x10),uVar55 * 0x20b8) +
         (ulong)((CONCAT11(bVar19,bVar31) & 0xffffbffe | 0x80000000) + 0x20e916ad) +
         0x40156acb01da3258;
}



// WARNING: Removing unreachable block (ram,0x004050cb)
// WARNING: Removing unreachable block (ram,0x004050ae)
// WARNING: Removing unreachable block (ram,0x004052bd)
// WARNING: Removing unreachable block (ram,0x00405661)
// WARNING: Removing unreachable block (ram,0x004050e3)
// WARNING: Removing unreachable block (ram,0x004051ea)

long log_size_10_var_004(void)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined2 uVar9;
  undefined3 uVar10;
  uint3 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ushort uVar14;
  ushort uVar15;
  byte bVar18;
  short sVar16;
  long lVar17;
  sbyte sVar19;
  byte bVar20;
  undefined uVar21;
  short sVar22;
  ushort uVar23;
  ushort uVar24;
  short sVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar29;
  uint6 uVar31;
  ulong uVar30;
  byte bVar32;
  uint uVar33;
  int6 iVar35;
  uint7 uVar34;
  byte bVar36;
  char cVar37;
  byte bVar38;
  int iVar39;
  short sVar40;
  undefined6 uVar41;
  byte bVar42;
  uint uVar43;
  uint uVar44;
  ushort uVar45;
  ulong uVar46;
  ulong uVar47;
  byte bVar48;
  char cVar49;
  ulong uVar50;
  long lVar51;
  long lVar52;
  char cVar53;
  ushort uVar54;
  uint uVar55;
  ulong uVar56;
  ulong uVar57;
  int iVar58;
  ulong uVar59;
  uint uVar60;
  int iVar61;
  uint uVar62;
  long lVar63;
  ushort uVar64;
  ulong uVar65;
  long lVar66;
  short sVar67;
  int iVar68;
  ulong uVar69;
  bool bVar70;
  bool bVar71;
  char in_AF;
  undefined8 uVar28;
  
  for (lVar17 = 0x3f; 0x9638161f78676efeU >> lVar17 == 0; lVar17 = lVar17 + -1) {
  }
  uVar15 = (ushort)(lVar17 + 0x40b1);
  sVar22 = uVar15 + 0x179;
  bVar20 = (byte)sVar22;
  uVar26 = CONCAT31(0x5442d0,-7 >> (bVar20 & 0x1f));
  bVar20 = bVar20 & 0x1f;
  uVar55 = uVar26 >> bVar20 | uVar26 << 0x20 - bVar20;
  uVar26 = (int)CONCAT62(0xe5a63cd3e4ae,sVar22) + 0x5a158cce;
  bVar20 = (byte)uVar26;
  iVar58 = (int)((uVar15 >> 9 & 1) != 0 | 0x1ae) >> (bVar20 & 0x1f);
  uVar64 = 0 >> (bVar20 & 0x1f);
  sVar22 = 0xf;
  uVar15 = (ushort)uVar55 >> 1;
  if (uVar15 != 0) {
    for (; uVar15 >> sVar22 == 0; sVar22 = sVar22 + -1) {
    }
  }
  uVar15 = (ushort)iVar58 >> 1;
  uVar9 = (undefined2)((uint)iVar58 >> 0x10);
  bVar36 = (byte)uVar15;
  uVar55 = -((uVar55 << 0x10) >> 0x11);
  uVar56 = (ulong)uVar55 | 0xc000000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar56;
  auVar4._8_8_ = 0x78;
  auVar4._0_8_ = 0xdfe10f83;
  bVar71 = (POPCOUNT(uVar15 & 0xd4) & 1U) != 0;
  cVar53 = (char)uVar55 + '[';
  uVar29 = 0x92b20f83;
  if (cVar53 != '\0') {
    uVar29 = 0x15dd1bdf;
  }
  uVar59 = 1L << bVar71 ^ 0x15dd1bdf;
  uVar62 = (uint)CONCAT62(0xffc4b3448db6,uVar64 | 1 << ((ushort)uVar59 & 0xf));
  uVar55 = uVar62 & 0x1f;
  for (iVar39 = 0; (0xffffd0c9U >> iVar39 & 1) == 0; iVar39 = iVar39 + 1) {
  }
  uVar10 = (undefined3)
           (CONCAT22(uVar9,CONCAT11(((byte)((uint)iVar58 >> 8) >> 1 |
                                    (byte)((ushort)(uVar64 << 0xf) >> 8)) + 0xf,bVar36)) >> 8);
  bVar36 = ~bVar36;
  if ((uVar62 >> 2 & 1) != 0) {
    bVar20 = (byte)uVar59;
  }
  lVar66 = 0x3f;
  if (uVar29 != 0) {
    for (; uVar29 >> lVar66 == 0; lVar66 = lVar66 + -1) {
    }
  }
  uVar27 = (ulong)(uVar26 ^ 1 << uVar55) + 0xaa522ab56f08825b & 0xffffffffffffff0f;
  sVar22 = 0;
  uVar15 = (ushort)uVar27;
  if (uVar15 != 0) {
    for (; (uVar15 >> sVar22 & 1) == 0; sVar22 = sVar22 + 1) {
    }
  }
  iVar58 = (int)CONCAT71((int7)((ulong)lVar66 >> 8),(byte)lVar66 + 0x26) + -0x374e0152 +
           (uint)((byte)lVar66 < 0xda);
  sVar19 = (sbyte)uVar27;
  sVar16 = 0;
  uVar64 = (ushort)iVar58;
  if (uVar64 != 0) {
    for (; (uVar64 >> sVar16 & 1) == 0; sVar16 = sVar16 + 1) {
    }
  }
  uVar50 = ((ulong)CONCAT31(uVar10,bVar36) << 4 | 3) ^ 0xffffffffcd675f34;
  cVar37 = -bVar36;
  uVar62 = CONCAT31(uVar10,cVar37);
  uVar69 = 0xffffffffffffffc1;
  if ((uVar64 >> (uVar15 & 0xf) & 1) == 0 && cVar37 != '\0') {
    uVar69 = uVar29;
  }
  bVar70 = (uVar69 & 1) != 0;
  if (!bVar70) {
    uVar62 = CONCAT22(uVar9,(short)uVar29);
  }
  if ((POPCOUNT((char)((uint)iVar39 >> 8) + bVar20 + bVar70) & 1U) != 0) {
    sVar22 = -0x783f;
  }
  uVar56 = CONCAT62((int6)((CONCAT71((int7)(uVar56 >> 8),cVar53) -
                           CONCAT71(SUB167(auVar4 % auVar2,1),bVar71)) -
                           (ulong)((uVar26 >> uVar55 & 1) != 0) >> 0x10),sVar22);
  uVar44 = (uint)((uVar69 & 0xffffffff) >> 1);
  uVar69 = uVar56 >> 4;
  uVar57 = uVar69 | uVar56 << 0x3c;
  iVar39 = (CONCAT22((short)((uint)iVar39 >> 0x10),(short)(char)sVar16) | 0xdb00) * 3;
  iVar39 = CONCAT22((short)((uint)iVar39 >> 0x10),CONCAT11(~(byte)((uint)iVar39 >> 8),(char)iVar39))
  ;
  bVar36 = sVar19 + 0x8aU ^ 0x7a;
  uVar46 = (ulong)((ushort)((short)(char)bVar20 << sVar19 |
                           (ushort)(short)(char)bVar20 >> 0x10 - sVar19) >> (bVar36 & 0x3f));
  uVar56 = (long)iVar39 * (long)iVar39;
  uVar30 = uVar56 & 0xffffffff;
  uVar11 = CONCAT12((long)(int)uVar56 != uVar56,(short)uVar30) >> 2;
  uVar14 = (ushort)uVar11 | (short)uVar30 << 0xf;
  uVar23 = (ushort)((int)uVar59 >> sVar19);
  bVar48 = (byte)uVar62;
  uVar24 = (ushort)uVar50;
  lVar52 = (ulong)uVar62 + (long)(int)uVar44;
  sVar22 = (short)lVar52 * 0x485b;
  lVar66 = CONCAT62((int6)(uVar27 >> 0x10),
                    CONCAT11((char)((ushort)sVar22 >> 8) + (char)lVar52,(char)sVar22));
  uVar60 = ((uint)(lVar17 + 0x40b1) >> 1 | 0x80000000) ^ 0x80000000;
  uVar59 = (ulong)(CONCAT18(uVar60 < 0x59fc8758,lVar66) >> 0x2d);
  uVar27 = uVar59 | lVar66 << 0x14;
  uVar33 = CONCAT22((short)((uint)iVar58 >> 0x10),uVar64 & ~(1 << (uVar15 & 0xf)));
  lVar66 = uVar46 << 1;
  bVar20 = (byte)uVar59 ^ (char)(uVar30 >> 0x18) >> 7;
  uVar28 = CONCAT71((int7)(uVar27 >> 8),bVar20);
  lVar51 = CONCAT62((int6)(uVar50 >> 0x10),uVar24 >> 6 | uVar24 << 10) +
           (ulong)(uint)((int)CONCAT62((int6)(uVar30 >> 0x10),uVar14) >> 0x1f);
  uVar59 = (ulong)((uint)uVar29 ^
                  1 << ((byte)(((bVar36 + bVar48 + (uVar56 >> 0x20 < 0x6e0cd358)) - (char)uVar11) -
                              1) & 0x1f)) | 0xc000;
  uVar26 = (uint)(ushort)uVar59;
  uVar55 = CONCAT22((short)(uVar30 >> 0x10) >> 0xf,uVar14) & 0x3fffffff;
  uVar15 = (ushort)(uVar55 / uVar26);
  uVar55 = uVar55 % uVar26;
  bVar36 = (byte)uVar55;
  lVar17 = CONCAT71((int7)(uVar57 >> 8),bVar36);
  lVar63 = (ulong)(uVar60 + 0xa60378a8) + 0x290575ef + (ulong)CARRY1(bVar36,(byte)uVar69);
  iVar58 = 0 >> (bVar20 & 0x1f);
  uVar64 = uVar23 & 0x4d49;
  uVar26 = uVar33 << 0x1e | (uVar33 | 0x8000) >> 2;
  uVar29 = (ulong)uVar26;
  bVar20 = SCARRY2(uVar64,uVar15) + bVar48;
  uVar56 = CONCAT71((int7)((ulong)lVar51 >> 8),
                    (char)lVar51 << 1 |
                    (CARRY1(SCARRY2(uVar64,uVar15),bVar48) || CARRY1(bVar20,CARRY2(uVar64,uVar15))))
  ;
  if (0x57efdd66 < (CONCAT22((short)uVar15 >> 0xf,uVar23) & 0xffff4d49)) {
    uVar28 = CONCAT62((int6)(uVar27 >> 0x10),(short)lVar17);
  }
  lVar17 = lVar17 << 1;
  iVar68 = ((int)CONCAT62(0x87cf5dc915dd,sVar16) << 7 | uVar44 >> 0x19) + 1;
  lVar1 = (ulong)uVar62 + (uVar59 >> 1);
  iVar39 = (int)(short)uVar64 *
           (int)(short)((int)CONCAT62((int6)((ulong)lVar52 >> 0x10),
                                      CONCAT11((char)((ulong)lVar52 >> 8) + (char)(uVar55 >> 8),
                                               uVar46 != 0)) >> 10);
  uVar59 = (ulong)(CONCAT22((short)uVar15 >> 0xf,(short)iVar39) | 0x750275bc);
  cVar53 = (char)iVar58;
  uVar59 = uVar59 ^ (ulong)(uVar59 != uVar29) *
                    (uVar59 ^ uVar29 ^ (ulong)(uVar59 == uVar29) *
                                       (ulong)(uVar26 ^ CONCAT31((int3)((uint)iVar58 >> 8),
                                                                 cVar53 << 1 | cVar53 < '\0')));
  bVar36 = (char)uVar28 + 8;
  uVar41 = (undefined6)((ulong)lVar17 >> 0x10);
  uVar23 = (short)CONCAT71((int7)((ulong)uVar28 >> 8),bVar36) >> (bVar36 & 0x1f);
  uVar29 = CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar23);
  lVar52 = 0x3f;
  if (uVar56 != 0) {
    for (; uVar56 >> lVar52 == 0; lVar52 = lVar52 + -1) {
    }
  }
  bVar48 = (byte)uVar23;
  bVar36 = (bVar48 & 0x1f) % 0x11;
  uVar14 = (ushort)lVar66;
  lVar66 = CONCAT62((int6)((ulong)lVar66 >> 0x10),uVar14 >> bVar36 | uVar14 << 0x11 - bVar36);
  uVar26 = CONCAT31(0xf98d00,(char)(uVar64 + uVar15));
  iVar58 = 0;
  if (uVar26 != 0) {
    for (; (uVar26 >> iVar58 & 1) == 0; iVar58 = iVar58 + 1) {
    }
  }
  iVar61 = (int)CONCAT62((int6)((ulong)lVar63 >> 0x10),
                         (ushort)CONCAT71((int7)((ulong)lVar63 >> 8),bVar20 + CARRY2(uVar64,uVar15))
                         ^ 0x97 | 1 << ((ushort)lVar1 & 0xf));
  uVar56 = (ulong)(uint)((int)CONCAT62((int6)(uVar59 >> 0x10),
                                       (short)uVar59 * (short)((uint)iVar39 >> 0x10)) * iVar61);
  lVar63 = uVar56 * lVar66;
  uVar14 = 0;
  uVar24 = (ushort)lVar52;
  if (uVar24 != 0) {
    for (; (uVar24 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
    }
  }
  uVar56 = SUB168(SEXT816((long)uVar56) * SEXT816(lVar66),8) & 0xffffffffffff3fff;
  uVar26 = (uint)(ushort)(uVar64 + uVar15 | 0xc000);
  uVar55 = CONCAT22((short)uVar56,(short)lVar63);
  iVar35 = (int6)(uVar56 >> 0x10);
  uVar15 = uVar14 ^ 1 << (uVar24 & 0xf);
  uVar56 = (ulong)CONCAT31((int3)((uint)iVar68 >> 8),
                           (char)iVar68 + (char)uVar15 + ((uVar14 >> (uVar24 & 0xf) & 1) != 0));
  iVar39 = (int)CONCAT62((int6)((ulong)lVar1 >> 0x10),uVar15);
  bVar71 = SCARRY4(iVar39,1);
  uVar62 = iVar61 >> (bVar48 & 0x1f) |
           (uint)CONCAT62(uVar41,((ushort)lVar17 | (ushort)((long)uVar57 < 0)) - 1);
  if ((int)uVar62 < 1) {
    uVar56 = uVar29 & 0xffffffff;
  }
  uVar64 = (ushort)uVar62 & ~(1 << (uVar23 & 0xf));
  uVar15 = ((short)(uVar55 / uVar26) << 1 | 1U) + 0xaa3b;
  uVar59 = CONCAT62(iVar35 >> 1,(ushort)(CONCAT62(iVar35,(short)(uVar55 % uVar26)) >> 1) >> 1);
  if (-1 < (short)uVar15) {
    uVar59 = uVar29;
  }
  uVar59 = uVar59 & 0xffffffff;
  uVar23 = CONCAT11((char)(uVar59 >> 8) - bVar48,(char)uVar59);
  uVar27 = CONCAT62((int6)(uVar59 >> 0x10),uVar23);
  uVar59 = (CONCAT62((int6)((ulong)lVar63 >> 0x10),uVar15) ^ 0x2634) & 0xffffffff;
  if ((short)(uVar15 ^ 0x2634) < 0) {
    uVar59 = (ulong)CONCAT11(bVar71,(char)uVar14);
  }
  uVar26 = (uint)CONCAT62(uVar41,uVar24) | 0x400000;
  lVar17 = 0x3f;
  if (uVar27 != 0) {
    for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  uVar29 = uVar29 | 1L << ((ulong)uVar23 & 0x3f);
  uVar23 = (short)uVar56 << 1;
  uVar14 = ((short)(((ulong)((uint)uVar27 & 0x3fffffff) << 0x20 | uVar59) / 0xc0000000) -
           (short)lVar17) - 1;
  uVar45 = (ushort)(lVar66 + -0xcb61b0a);
  uVar15 = uVar45 & 0xf;
  uVar54 = (ushort)uVar29;
  uVar31 = (uint6)(uVar29 >> 0x10);
  uVar24 = uVar54 ^ 1 << uVar15;
  uVar29 = CONCAT62(uVar31,uVar24);
  if (uVar14 == 0) {
    uVar14 = uVar23;
  }
  if ((uVar54 >> uVar15 & 1) != 0) {
    uVar26 = CONCAT22((short)(uVar26 >> 0x10),uVar45);
  }
  uVar46 = (ulong)uVar26;
  uVar21 = (undefined)uVar24;
  uVar59 = (long)(iVar39 + 1) * 0x4dd9e487;
  uVar65 = uVar59 & 0xffffffff;
  uVar50 = (ulong)(uint)(int)(short)(uVar14 >> 0xc | 0x80);
  uVar69 = 0;
  uVar15 = ((short)((ulong)lVar51 >> 8) << 8 ^ 1 << ((ushort)iVar58 & 0xf)) + 0xafU +
           (short)uVar26 * 2;
  uVar30 = CONCAT71((int7)(uVar29 >> 8),uVar21);
  uVar57 = uVar46 ^ (ulong)(uVar50 == uVar46) *
                    (ulong)(uVar26 ^ CONCAT22((short)(uVar62 >> 0x10),uVar64) ^ 0x80);
  uVar27 = uVar57;
  if (uVar50 >= uVar46) {
    uVar27 = uVar30;
  }
  uVar47 = CONCAT71((int7)((ulong)(lVar66 + -0xcb61b0a) >> 8),uVar21) + 0x795e097d +
           (ulong)(uVar50 < uVar46);
  sVar22 = (short)uVar30 + 1;
  uVar14 = (short)(uVar27 & 0xffffffff) * -0x3333;
  uVar27 = CONCAT62((int6)((uVar27 & 0xffffffff) >> 0x10),uVar14);
  bVar36 = (byte)sVar22;
  bVar20 = (bVar36 & 0x1f) % 9;
  bVar48 = (byte)((ushort)sVar22 >> 8);
  sVar22 = 0xf;
  if (uVar14 != 0) {
    for (; uVar14 >> sVar22 == 0; sVar22 = sVar22 + -1) {
    }
  }
  iVar35 = (int6)(uVar47 >> 0x10);
  uVar64 = uVar64 ^ 0x80 | 0x1000;
  lVar17 = (uVar50 ^ (ulong)(uVar50 != uVar46) * (uVar50 ^ uVar57)) *
           ((uint)((int)CONCAT62((int6)((ulong)lVar51 >> 0x10),uVar15) + (int)uVar65 * 4) & uVar47);
  uVar50 = (uVar65 << (bVar36 & 0x3f) | uVar65 >> 0x40 - (bVar36 & 0x3f)) >> 1;
  sVar16 = 0xf;
  if (uVar64 != 0) {
    for (; uVar64 >> sVar16 == 0; sVar16 = sVar16 + -1) {
    }
  }
  lVar66 = CONCAT71((int7)((long)CONCAT62(iVar35,sVar22) >> 0x36),
                    (char)((long)iVar35 >> 0x1e) + -0x7d);
  uVar34 = (uint7)(CONCAT62((int6)((CONCAT62((int6)(uVar56 >> 0x10),uVar23) << 0x23 |
                                   (ulong)(uVar31 >> 0xd)) - uVar27 >> 0x10),sVar16) >> 8);
  uVar30 = CONCAT62(uVar31,CONCAT11(bVar48 << bVar20 | bVar48 >> 9 - bVar20,bVar36)) >> 1;
  uVar46 = uVar50 & 0xffffffff;
  uVar15 = uVar15 | (ushort)uVar50;
  uVar56 = (CONCAT62((int6)((ulong)lVar17 >> 0x10),(ushort)(byte)lVar17 * (ushort)bVar71) &
           0xffffffff) * (uVar50 & 0xffffffff);
  uVar59 = (ulong)CONCAT22(0xc000,(ushort)((long)(int)uVar59 != uVar59) << 0xf) ^ 0x4b ^ uVar46;
  bVar20 = (byte)uVar30;
  uVar26 = (uint)lVar66 | 0xc0000000;
  uVar55 = (int)(((ulong)((uint)(uVar56 >> 0x20) & 0x3fffffff) << 0x20 | uVar56 & 0xffffffff) /
                (ulong)uVar26) << (bVar20 & 0x1f) |
           ((uint)CONCAT71(uVar34,(char)sVar16 << 1) | 1) >> 0x20 - (bVar20 & 0x1f);
  uVar64 = (ushort)uVar59;
  uVar26 = uVar26 * -0x28388f15 >> 1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar30;
  auVar7 = ZEXT416(CONCAT22((short)(uVar55 >> 0x10),(short)uVar55 * uVar64)) * auVar7;
  sVar22 = (short)(lVar66 + -0x16587c82) + -0x2b28;
  if (sVar22 == 0) {
    uVar69 = (ulong)(ushort)((ushort)lVar66 & ~(1 << (uVar64 & 0xf)));
  }
  uVar29 = uVar29 & 0xffffffff & uVar27;
  bVar36 = (bVar20 & 0x1f) % 9;
  bVar48 = (byte)(uVar30 >> 8);
  uVar55 = 0 >> (bVar20 & 0x3f);
  lVar17 = (ulong)CONCAT31(auVar7._1_3_ >> 1 | (uint3)((uVar26 << 0x1f) >> 8),
                           (char)(auVar7._0_4_ >> 1) << (bVar20 & 0x1f)) + 1;
  sVar16 = 0xf;
  uVar64 = (ushort)uVar26;
  if (uVar64 != 0) {
    for (; uVar64 >> sVar16 == 0; sVar16 = sVar16 + -1) {
    }
  }
  bVar18 = (byte)((ulong)lVar17 >> 8);
  bVar42 = (byte)(uVar55 >> 8);
  sVar25 = CONCAT11(bVar42 - bVar18,(char)uVar55);
  uVar26 = (int)CONCAT71((int7)(uVar27 >> 8),(byte)uVar14 >> 4 | (byte)uVar14 << 4) + -0x31e4cf1f +
           (uint)(bVar42 < bVar18);
  cVar53 = (char)lVar17 << 1;
  uVar62 = (uint)CONCAT62((int6)((ulong)(lVar66 + -0x16587c82) >> 0x10),sVar22);
  iVar58 = uVar62 + 0x9ecff9f7;
  if (0x61300608 < uVar62) {
    uVar69 = (ulong)uVar26;
  }
  sVar67 = (short)iVar58 + sVar25;
  uVar62 = CONCAT22((short)((uint)iVar58 >> 0x10),sVar67);
  uVar41 = (undefined6)(uVar29 >> 0x10);
  sVar40 = (short)uVar29 << 1;
  uVar33 = CONCAT22(auVar7._10_2_ & ~(ushort)((uint)(1 << (auVar7._0_4_ & 0x1f)) >> 0x10),
                    CONCAT11((bVar48 << bVar36 | bVar48 >> 9 - bVar36) + 0x5d,bVar20)) <<
           (bVar20 & 0x3f) | uVar26 >> 0x40 - (bVar20 & 0x3f);
  bVar48 = (byte)(uVar26 >> 0x1b);
  uVar26 = (uint)(byte)-bVar48;
  bVar36 = (bVar20 & 0x1f) % 0x11;
  uVar64 = sVar25 << bVar36 | (ushort)(CONCAT12(bVar48 != 0,sVar25) >> 0x11 - bVar36);
  uVar59 = uVar59 & CONCAT71((int7)((ulong)lVar17 >> 8),cVar53);
  sVar22 = 0xf;
  if ((ushort)uVar69 != 0) {
    for (; (ushort)((ushort)uVar69 >> sVar22) == 0; sVar22 = sVar22 + -1) {
    }
  }
  uVar29 = uVar59 & uVar62;
  uVar56 = CONCAT62((int6)((ulong)lVar17 >> 0x10),
                    CONCAT11((uVar29 == 0) << 6 | in_AF << 4 |
                             ((POPCOUNT(uVar29 & 0xff) & 1U) == 0) << 2,cVar53)) | 0x200;
  uVar55 = CONCAT31((int3)(CONCAT22((short)(uVar55 >> 0x10),uVar64) >> 8),
                    (char)uVar64 - (char)(uVar56 >> 8));
  uVar64 = uVar15 ^ 0x2b28;
  iVar58 = uVar33 - uVar26;
  uVar29 = CONCAT62(uVar31 >> 1,sVar22) + (ulong)uVar55 * 8;
  if (SBORROW4(uVar33,uVar26) == false) {
    uVar29 = CONCAT62((int6)((uint6)((uVar46 >> (bVar20 & 0x3f)) >> 0x10) |
                            (uint6)((uVar46 << 0x40 - (bVar20 & 0x3f)) >> 0x10)) >> 0x1e,sVar16);
  }
  bVar36 = (byte)uVar59;
  bVar48 = (byte)(uVar29 & 0xffffffff);
  lVar17 = CONCAT71((int7)((uVar29 & 0xffffffff) >> 8),bVar48 - bVar36);
  bVar20 = (byte)sVar22 & 0x3f;
  uVar29 = uVar56 >> bVar20 | uVar56 << 0x40 - bVar20;
  uVar14 = (ushort)lVar17;
  uVar23 = uVar64 + uVar14;
  uVar44 = CONCAT22(0xdb5d,uVar23);
  uVar33 = CONCAT31((int3)((uint)iVar58 >> 8),(byte)iVar58 >> 1 | (bVar48 < bVar36) << 7) << 1;
  uVar60 = uVar33 | CARRY2(uVar64,uVar14);
  if (iVar58 < 0 == (int)uVar60 < 0) {
    sVar40 = (short)uVar55;
  }
  uVar59 = CONCAT62(uVar41,sVar40);
  bVar20 = ((byte)sVar22 & 0x1f) % 9;
  cVar53 = (char)sVar67;
  uVar50 = lVar17 - (ulong)uVar26;
  sVar22 = (short)uVar60 + -0x1bbe;
  uVar56 = uVar55 + uVar59 + 1;
  uVar55 = CONCAT31((int3)(uVar62 >> 8),
                    (byte)((byte)(CONCAT11((uVar29 & 1) != 0,cVar53) >> bVar20) |
                          cVar53 << 9 - bVar20) >> 1);
  uVar27 = CONCAT71((int7)(uVar69 >> 8),-(char)uVar69);
  if ((short)uVar15 < (short)uVar56) {
    uVar27 = 0xffffffff;
  }
  lVar17 = CONCAT62((int6)((long)uVar29 >> 0x11),
                    (short)(char)((long)uVar29 >> 1) * (short)(char)uVar50);
  uVar15 = (ushort)uVar50 | 0x1b9;
  uVar29 = (ulong)uVar26;
  if (-1 < (short)uVar15) {
    uVar29 = uVar59;
  }
  uVar26 = CONCAT31((int3)(CONCAT22((short)(uVar33 >> 0x10),sVar22) >> 8),(char)sVar22 + '\x04');
  if ((POPCOUNT(uVar15 & 0xff) & 1U) != 0) {
    uVar26 = uVar55;
  }
  uVar69 = ((ulong)uVar34 << 8) >> 7;
  if ((short)uVar15 < 1) {
    uVar69 = 0xffffffff;
  }
  uVar30 = lVar17 - uVar69;
  uVar69 = uVar69 ^ (ulong)(uVar30 == 0) * (uVar69 ^ (uVar50 | 0x1b9));
  uVar62 = (uint)lVar17;
  uVar62 = uVar62 ^ (uint)(uVar30 != 0) * (uVar62 ^ (uint)uVar69);
  if ((POPCOUNT(uVar30 & 0xff) & 1U) != 0) {
    uVar27 = (ulong)uVar23;
  }
  iVar58 = (int)(uVar50 | 0x1b9);
  bVar71 = SCARRY4(iVar58,(int)uVar56);
  uVar60 = iVar58 + (int)uVar56;
  uVar33 = (uint)uVar29;
  if (bVar71 == (int)uVar60 < 0) {
    uVar33 = uVar26;
  }
  auVar5[9] = 0;
  auVar5[8] = (byte)uVar26;
  auVar5._10_2_ = (short)(uVar26 >> 0x10);
  uVar55 = uVar55 * 0x100;
  uVar43 = (uVar55 - 1) + (uint)(uVar33 < 0x7ecbeb5e);
  lVar17 = 0;
  if (uVar44 != 0) {
    for (; (uVar44 >> lVar17 & 1) == 0; lVar17 = lVar17 + 1) {
    }
  }
  uVar44 = uVar43 >> 1;
  uVar29 = (ulong)((uVar43 & 1) != 0);
  uVar50 = (ulong)uVar55 - 0xb5a3ec37;
  lVar17 = uVar50 - uVar29;
  uVar30 = uVar69 & 0xffff;
  bVar20 = (byte)uVar30 & 0x3f;
  uVar28 = CONCAT71((uint7)((uVar56 >> bVar20) >> 8) | (uint7)((uVar56 << 0x40 - bVar20) >> 8),
                    (byte)uVar26);
  iVar39 = (int)uVar28;
  uVar69 = uVar69 >> 0x1f & 1;
  auVar5._2_6_ = (int6)(short)(uVar62 >> 0x10);
  auVar5._0_2_ = -(short)(char)uVar62;
  bVar20 = ~(byte)uVar30;
  uVar56 = CONCAT62(uVar41,(ushort)CONCAT71((int7)(uVar59 >> 8),(byte)sVar40 ^ (byte)uVar44) &
                           ~(1 << ((ushort)uVar28 & 0xf)));
  iVar58 = CONCAT22(0xffff,(short)CONCAT31(0xffffff,bVar71) + 0x5aa);
  uVar62 = (uint)uVar56;
  uVar26 = iVar58 << 1 | uVar62 >> 0x1f;
  if (iVar58 < 0 == (int)uVar26 < 0) {
    iVar39 = (int)CONCAT71((int7)(uVar30 >> 8),bVar20);
  }
  lVar66 = (ulong)(uVar60 ^ 0x10) + 0x36cd7731 + (ulong)(iVar58 < 0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar56 | 0xc000000000000000;
  auVar5._12_4_ = 0;
  sVar22 = SUB162(auVar5 / auVar3,0);
  iVar68 = (int)sVar22 * (int)sVar22;
  uVar56 = CONCAT62(SUB166(auVar5 / auVar3,2),(short)iVar68);
  uVar29 = CONCAT71((int7)(CONCAT62((int6)((ulong)lVar17 >> 0x10),
                                    (ushort)lVar17 >> 1 |
                                    (ushort)((ulong)uVar55 < 0xb5a3ec37 || uVar50 < uVar29) << 0xf)
                          >> 8),0xff) >> 1;
  iVar39 = iVar39 * 0x20000 + -0x72d6c271;
  bVar36 = (byte)iVar39 | (byte)((uint)iVar68 >> 8);
  if (bVar36 == 0) {
    uVar26 = CONCAT22((short)((uint)(iVar58 << 1) >> 0x10),
                      (short)(uVar33 + 0x813414a2) << (bVar20 & 0x1f));
  }
  uVar50 = uVar29 ^ (ulong)(uVar56 == uVar29) * (uVar29 ^ uVar69);
  uVar55 = (uint)uVar56 ^ (uint)(uVar56 != uVar29) * ((uint)uVar56 ^ (uint)uVar50);
  uVar60 = CONCAT31((int3)((uint)iVar39 >> 8),bVar36 << 1) ^ 0x9f26d2d7;
  uVar56 = (long)(int)uVar62 * -0x5ab5c818;
  cVar53 = (char)uVar55;
  bVar36 = (byte)(CONCAT11((long)(int)uVar56 != uVar56,cVar53) >> 5) | cVar53 << 4;
  uVar59 = (ulong)uVar44;
  if ((POPCOUNT((ulong)bVar36 & 0x37) & 1U) != 0) {
    uVar59 = uVar50;
  }
  uVar62 = (int)(uint)CONCAT11(bVar20,(char)(uVar30 >> 8)) >> 1;
  iVar58 = uVar62 * 2;
  uVar30 = CONCAT71((int7)(int3)(uVar55 >> 8),bVar36);
  if (!CARRY4(uVar62,uVar62)) {
    uVar30 = uVar50;
  }
  uVar62 = (uint)uVar30 ^ 1 << (uVar26 & 0x1f);
  cVar53 = (char)(uVar56 & 0xffffffff);
  uVar30 = uVar59 & 0xffffffff | (ulong)uVar60;
  bVar36 = (byte)((uint)iVar58 >> 8);
  bVar20 = (byte)iVar58 - bVar36;
  bVar36 = (char)uVar30 << 1 | (byte)iVar58 < bVar36;
  uVar46 = CONCAT71((int7)(uVar30 >> 8),bVar36);
  lVar52 = (long)(int)uVar46;
  uVar55 = CONCAT31((int3)((uint)iVar58 >> 8),bVar20) >> 1;
  lVar17 = CONCAT62((int6)((ulong)lVar66 >> 0x10),-(short)lVar66) << 1;
  uVar31 = (uint6)(uVar50 >> 0x10);
  uVar59 = (long)(int)uVar69 * -0x531863aa;
  uVar69 = CONCAT71((int7)((ulong)lVar17 >> 8),(byte)lVar17 | (bVar20 & 1) != 0) ^ 0x2d;
  if ((long)(int)uVar59 == uVar59) {
    uVar69 = (ulong)(uVar26 << 1 | (uint)((int)uVar26 < 0));
  }
  uVar50 = CONCAT62(uVar31,(short)uVar50 >> 9) >> 1;
  sVar22 = (short)CONCAT71((int7)(uVar69 >> 8),(byte)uVar69 << 4 | (byte)uVar69 >> 4);
  uVar44 = (uint)CONCAT62((int6)(uVar30 >> 0x10),(ushort)uVar46 >> 1 | sVar22 << 0xf);
  cVar53 = (cVar53 * -2 | '\0' < cVar53) - 1;
  uVar56 = CONCAT71((int7)((uVar56 & 0xffffffff) >> 8),cVar53);
  lVar17 = (ulong)CONCAT22((short)(uVar33 + 0x813414a2 >> 0x10),(short)uVar62 * 4) + 1;
  if (cVar53 != '\0') {
    lVar17 = lVar52;
  }
  uVar29 = uVar29 & 0xffff | 0x5b;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (long)CONCAT31((int3)(uVar62 >> 8),
                                ((char)((uint)iVar68 >> 0x10) + '\"') - (char)uVar60);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar56;
  auVar6 = auVar6 * auVar8;
  uVar62 = (int)(short)uVar55 & 0xfffffffe;
  iVar58 = (int)uVar29 + 0xbd + (int)uVar56 * 8;
  uVar64 = (ushort)uVar29 & 0x7fff;
  sVar22 = sVar22 >> 0x11;
  uVar15 = CONCAT11(0xa3 >> ((byte)uVar55 & 0x1e),0xff);
  cVar49 = (char)uVar64;
  uVar26 = uVar26 << 1 & 0xe46de1d7 | (uint)((int)uVar26 < 0);
  iVar39 = uVar62 + 0xde704b1a;
  bVar20 = (byte)((uint)iVar39 >> 8);
  cVar53 = bVar20 + 0x27;
  cVar37 = (char)iVar39;
  iVar39 = CONCAT22((short)((uint)iVar39 >> 0x10),CONCAT11(cVar53,cVar37));
  uVar29 = (ulong)(uVar44 >> 0x18 | (uVar44 & 0xff0000) >> 8 | (uVar44 & 0xff00) << 8 |
                  uVar44 << 0x18);
  if (bVar20 >= 0xd9 && cVar53 != '\0') {
    uVar29 = uVar46;
  }
  iVar68 = ((((int)(uVar27 << 0x10) + 1) * 2 & (uint)uVar50) - iVar39) - (uint)(bVar20 < 0xd9);
  uVar11 = (uint3)((uint)iVar68 >> 8);
  uVar55 = CONCAT31(uVar11,(char)iVar68 + (char)uVar26);
  if (SCARRY1(cVar37,cVar53) == (char)(cVar37 + cVar53) < '\0') {
    lVar52 = CONCAT62((int6)(short)(uVar30 >> 0x10),(ushort)uVar46);
  }
  lVar17 = -((CONCAT71((int7)((ulong)lVar17 >> 8),((byte)lVar17 | (char)(uVar69 >> 8) >> 7) + 0x52)
             - (ulong)(CONCAT11((char)(uVar64 >> 8),cVar49 + auVar6[0]) + 0xdbcc1c31)) -
            (ulong)(0xe245 < uVar15 || 0xfffe < (ushort)(uVar15 + 0x1dba)));
  uVar33 = CONCAT31((int3)((uint)iVar39 >> 8),cVar37 + cVar53) & 0xffffff0f;
  sVar19 = (sbyte)uVar33;
  uVar15 = (ushort)CONCAT71((int7)(CONCAT62(auVar6._2_6_,CONCAT11(1,auVar6[0])) >> 8),cVar49);
  uVar31 = uVar31 >> 1;
  uVar64 = (short)uVar50 << sVar19 | uVar15 >> 0x10 - sVar19;
  iVar39 = (int)(short)uVar15 * (int)sVar22;
  uVar56 = CONCAT62((int6)(uVar69 >> 0x10),sVar22);
  if (0x7bd30fa9 < (uint)lVar17) {
    uVar56 = (ulong)uVar55;
  }
  uVar15 = (ushort)(uVar59 & 0xffffffff);
  if (-1 < (short)(((short)CONCAT31((int3)((uint)iVar58 >> 8),(char)iVar58 >> 1) + 0x7444 +
                   (ushort)(uVar62 + 0x550298e9 < 0x76924dcf)) - uVar15)) {
    uVar26 = (uint)lVar52;
  }
  uVar26 = uVar26 | 0xc0000000;
  uVar27 = ((ulong)((uint)CONCAT62(auVar6._10_6_,(short)((uint)iVar39 >> 0x10)) & 0x3fffffff) <<
            0x20 | CONCAT62(auVar6._2_6_,(short)iVar39) >> 1 & 0xffffffff) / (ulong)uVar26 &
           0xffffffff;
  bVar20 = (byte)uVar27;
  bVar18 = (byte)uVar29;
  bVar38 = (byte)lVar52;
  bVar42 = bVar18 ^ (bVar20 == bVar18) * (bVar18 ^ bVar38);
  uVar69 = CONCAT71((int7)(uVar29 >> 8),bVar42);
  sVar22 = (short)uVar69;
  bVar48 = (char)(uVar27 >> 0x18) >> 7;
  sVar16 = (short)CONCAT71((int7)(uVar27 >> 8),bVar20 ^ (bVar20 != bVar18) * (bVar20 ^ bVar42));
  sVar25 = (((short)uVar33 + sVar22 + 0x2bec) - sVar16) - (ushort)CARRY1(bVar48,bVar48);
  if (sVar25 < 0) {
    lVar17 = CONCAT62((int6)((ulong)lVar17 >> 0x10),uVar64);
  }
  bVar48 = bVar38 << 5 | bVar38 >> 3;
  bVar20 = (byte)sVar25;
  lVar66 = 0;
  if (uVar56 != 0) {
    for (; (uVar56 >> lVar66 & 1) == 0; lVar66 = lVar66 + 1) {
    }
  }
  uVar50 = (ulong)(uint)((int)CONCAT71((int7)(int3)(uVar30 >> 8),~bVar36) >> 0xd) + 0x17c90fe4 ^
           0xffffffffbdb12441;
  uVar27 = uVar50 & 0xff;
  if ((long)uVar50 < 0) {
    uVar50 = CONCAT62((int6)(uVar50 >> 0x10),sVar25);
  }
  iVar58 = (int)lVar66;
  if ((POPCOUNT(uVar27) & 1U) != 0) {
    iVar58 = (int)CONCAT71((int7)(uVar56 >> 8),(char)uVar56 >> 1);
  }
  uVar62 = (int)CONCAT71((int7)((ulong)lVar17 >> 8),(char)lVar17 >> 0x11) << 0xe;
  uVar55 = uVar62 | (((((uint)(uVar11 >> 0x10) | uVar11 & 0xff00 | (uVar11 & 0xff) << 0x10 |
                       uVar55 << 0x18) >> (bVar20 & 0x3f)) >> 0x10 |
                     (uint)((ulong)((long)(int)CONCAT71((int7)((ulong)lVar52 >> 8),bVar48) <<
                                   0x40 - (bVar20 & 0x3f)) >> 0x10)) << 0x10) >> 0x12;
  uVar27 = (ulong)(uint)(iVar58 << 7);
  uVar64 = (ushort)CONCAT71((int7)(CONCAT62(uVar31,uVar64) >> 8),
                            (byte)uVar64 >> 1 | (char)uVar56 << 7);
  uVar33 = (uint)uVar50 | (uint)bVar20;
  uVar56 = CONCAT62((int6)((uVar59 & 0xffffffff) >> 0x10),
                    (uVar15 << (bVar20 & 0xf) | uVar15 >> 0x10 - (bVar20 & 0xf)) + 0x715e) -
           0x7338782f;
  if (uVar33 != 0) {
    uVar56 = (ulong)uVar55;
  }
  uVar23 = ~(ushort)uVar55;
  sVar25 = (short)CONCAT31((int3)(uVar50 >> 8),~(byte)uVar33);
  uVar15 = (ushort)(uVar50 >> 0x10);
  uVar55 = (int)((uint)CONCAT62(uVar31,uVar64) & 0xffffbfff) >> 6 ^ 0xb83e0c28;
  iVar58 = (int)CONCAT71((int7)(int3)((ulong)lVar52 >> 8),bVar48 - 1) * -0x32075b17;
  uVar59 = ((uVar27 & 0xff000000) << 8 | (uVar27 & 0xff0000) << 0x18 | (uVar27 & 0xff00) << 0x28 |
           uVar27 << 0x38) >> 1;
  uVar50 = uVar59 | 0x8000000000000000;
  uVar27 = (ulong)(ushort)((((short)CONCAT31((uint3)(uVar26 >> 9),(char)(uVar26 >> 1) + '\x01') -
                            sVar22) - (ushort)((uVar64 >> 0xe & 1) != 0)) + sVar16 + 0x64ba) -
           0x6e87bde2;
  sVar22 = 0;
  if ((ushort)uVar55 != 0) {
    for (; ((ushort)uVar55 >> sVar22 & 1) == 0; sVar22 = sVar22 + 1) {
    }
  }
  iVar58 = CONCAT31((int3)((uint)iVar58 >> 8),(char)iVar58 << 1);
  sVar22 = 0xf;
  uVar14 = (ushort)iVar58;
  if (uVar14 != 0) {
    for (; uVar14 >> sVar22 == 0; sVar22 = sVar22 + -1) {
    }
  }
  uVar69 = CONCAT62((int6)(short)((ulong)lVar52 >> 0x10),(short)((uVar69 & 0xffffffffc0278201) == 0)
                   );
  if ((int)uVar69 == 0) {
    uVar69 = uVar56 & 0xffffffff;
  }
  sVar16 = (short)(uVar55 >> 8) * 0x100;
  uVar30 = (long)(int)uVar69 * 0x5217e8f1;
  uVar26 = CONCAT22(uVar15,(ushort)(sVar25 << 1 | (ushort)(sVar25 < 0)) >> ((byte)uVar27 & 0x1f));
  uVar56 = 0;
  if (uVar50 != 0) {
    for (; (uVar50 >> uVar56 & 1) == 0; uVar56 = uVar56 + 1) {
    }
  }
  iVar68 = (int)CONCAT62((int6)(uVar69 >> 0x10),(short)(char)uVar23);
  uVar33 = iVar68 << 1;
  uVar44 = (uint)uVar56 & 0x5d4f3ffa;
  uVar69 = uVar30 & 0xffffffff & ~(1L << (uVar27 & 0x3f));
  iVar39 = (int)uVar27 - uVar44;
  uVar23 = -uVar23;
  lVar17 = (ulong)(((uint)uVar59 >> 1) + 0x81c02874) << 1;
  uVar13 = CONCAT31((uint3)(uVar26 >> 9),(char)sVar22);
  uVar50 = CONCAT71((int7)(CONCAT62((int6)(uVar29 >> 0x10),sVar22) >> 8),(char)(uVar26 >> 1));
  uVar29 = (long)iVar58 * 0x45613a4f;
  uVar27 = uVar29 & 0xffffffff;
  uVar29 = (ulong)((long)(int)uVar29 != uVar29);
  uVar59 = uVar50 + uVar27;
  lVar66 = uVar59 + uVar29;
  lVar66 = CONCAT71((uint7)(CONCAT18(CARRY8(uVar50,uVar27) || CARRY8(uVar59,uVar29),lVar66) >> 0x20)
                    ,(char)((ulong)lVar66 >> 0x18) + 'K');
  uVar14 = (uVar64 & 0xbfff) >> 1;
  uVar9 = (undefined2)(uVar55 >> 0x10);
  sVar22 = (short)(uVar56 & 0xffffffff);
  if ((SBORROW2(sVar16,0x6f7b) != SBORROW2(sVar16 + -0x6f7b,1)) != (short)(sVar16 + -0x6f7c) < 0) {
    uVar13 = CONCAT22(uVar15 >> 1,sVar22);
  }
  bVar36 = (byte)iVar39;
  sVar25 = (short)uVar13 + -0x10de;
  uVar29 = (long)CONCAT22((short)((uint)uVar13 >> 0x10),sVar25) * 0x192ee299;
  bVar20 = (bVar36 & 0x1f) % 0x11;
  bVar48 = (byte)((uint)((int)(short)(CONCAT11((char)(uVar69 >> 8) + -1,(char)uVar69) & uVar23) *
                        (int)(short)(uVar64 & 0xbfff)) >> 0x18);
  bVar18 = (byte)sVar25;
  iVar58 = ((uVar33 | iVar68 < 0) ^ 0xa67a52e9) << 1;
  uVar15 = (ushort)iVar58 | (ushort)(bVar48 < bVar18);
  lVar52 = (ulong)CONCAT22((short)(uVar44 >> 0x10),
                           (short)-(short)CONCAT31((int3)(uVar44 >> 8),
                                                   (char)uVar44 << 1 | (uVar33 & 0x40000000) != 0)
                           >> 8) + 0x5a4ddc75;
  if ((int)lVar66 < (int)(CONCAT22((short)((uint)iVar58 >> 0x10),uVar15) | 0xc000)) {
    lVar66 = lVar17;
  }
  sVar25 = (short)lVar66 - (short)lVar52;
  uVar28 = CONCAT62((int6)((ulong)lVar66 >> 0x10),sVar25);
  bVar36 = ((bVar36 - bVar18) -
            (((uint)CONCAT71(CONCAT61((int6)((ulong)(CONCAT71((uint7)(uVar30 >> 0x28),
                                                              (byte)(uVar30 >> 0x20) | (byte)uVar56)
                                                    + 0x798023ab) >> 0x10),bVar48 - bVar18),
                             (char)((uVar29 & 0xffffffff) >> 8)) >>
              ((byte)(uVar29 & 0xffffffff) & 0x1f) & 1) != 0) & 0x1f) % 9;
  bVar42 = (char)lVar52 << bVar36 |
           (byte)(CONCAT11((uint)uVar28 < 0xf59385b9,(char)lVar52) >> 9 - bVar36);
  bVar38 = (byte)sVar25;
  bVar36 = ((char)((uint)iVar39 >> 8) >> 7) * '\x02' + (sVar22 < 0);
  uVar26 = (int)CONCAT71((int7)(CONCAT62((short)uVar64 >> 0xf,
                                         (ushort)((uint3)(CONCAT12((long)(int)uVar29 != uVar29,
                                                                   uVar14) | 0x8000) >> bVar20) |
                                         (uVar14 | 0x8000) << 0x11 - bVar20) >> 8),
                         (byte)(bVar48 - bVar18) != '\0' && (char)bVar18 <= (char)bVar48) << 1;
  uVar29 = CONCAT71((int7)((ulong)lVar17 >> 8),(char)uVar27) & 0xffff00ff;
  uVar44 = (uint)CONCAT71((int7)((ulong)uVar28 >> 8),bVar38 >> 1 | bVar38 << 7) &
           ~(1 << (uVar26 & 0x1f));
  bVar20 = bVar36 & 0x3f;
  uVar27 = uVar29 << bVar20 | uVar29 >> 0x40 - bVar20;
  bVar20 = (byte)(uVar27 >> 8);
  iVar39 = (uint)(ushort)uVar27 * (uVar44 & 0xffff);
  sVar22 = (short)iVar39;
  iVar35 = (int6)(short)(uVar27 >> 0x10);
  uVar64 = CONCAT11(bVar20 + ((char)bVar36 >> 7 & bVar20) + '\x01',(char)uVar27) + -0x7714 +
           (ushort)(sVar22 != 0);
  uVar12 = (undefined2)(uVar44 >> 0x10);
  uVar55 = CONCAT22(uVar9,(short)(CONCAT22(uVar9,sVar16 + -0x6f7c) >> 8) << 8 ^ 1 << (uVar64 & 0xf))
           >> 1;
  iVar68 = (int)(uVar56 & 0xffffffff) << 1;
  uVar59 = (ulong)CONCAT22((short)((uint)iVar68 >> 0x10),
                           (short)CONCAT31((int3)((uint)iVar68 >> 8),
                                           ((byte)iVar68 | ((ushort)((uint)iVar39 >> 0x12) & 1) != 0
                                           ) + (char)uVar23)) | 0xf6c4;
  uVar69 = (ulong)CONCAT31((int3)(uVar44 >> 8),(char)uVar44 >> 0x12);
  uVar29 = 1L << (uVar69 & 0x3f);
  uVar33 = CONCAT22(uVar12,(ushort)uVar44 >> 1) & 0xffffff00;
  uVar56 = (long)(int)((uint)CONCAT62((int6)(uVar27 >> 0x10),-sVar22) >> 1 | 0x80000000) *
           0x23b50b52;
  sVar22 = uVar64 * 4;
  iVar39 = (int)uVar59;
  if ((int)uVar56 != (int)(uVar56 & 0xffffffff)) {
    uVar59 = uVar56 & 0xffffffff;
  }
  uVar50 = uVar69 | uVar29 & 0xffffffff;
  bVar38 = (char)sVar22 - 0x3c;
  uVar27 = (uVar69 | uVar29) & 0xff;
  uVar29 = (long)(int)CONCAT62((int6)(uVar59 >> 0x10),(short)((short)uVar59 * -0x673c) >> 2) *
           (long)(int)CONCAT71((int7)(CONCAT62(iVar35,sVar22) >> 8),bVar38);
  uVar59 = uVar29 & 0xffffffff;
  iVar68 = (int)(CONCAT62((uint6)((ulong)lVar52 >> 0x11),
                          (ushort)(CONCAT71((int7)((ulong)lVar52 >> 8),
                                            bVar42 ^ (bVar42 == 0x29) * (bVar42 ^ (byte)uVar15)) >>
                                  1) >> 1) >> 1) << 1;
  bVar48 = (byte)uVar59;
  uVar31 = (uint6)(((uVar29 >> 0x20) - 0x49c6bd03) - (ulong)(((ushort)uVar55 >> 6 & 1) != 0) >> 0x10
                  );
  bVar32 = (byte)((ushort)sVar22 >> 8);
  bVar36 = bVar38 + bVar32;
  bVar18 = (byte)uVar27;
  bVar20 = (bVar18 & 0x1f) % 9;
  uVar55 = iVar39 + (uVar55 | uVar44 << 0x1f) + 1;
  bVar42 = (char)(uVar59 >> 8) >> 7;
  bVar42 = bVar42 << (bVar18 & 7) | bVar42 >> 8 - (bVar18 & 7);
  bVar20 = (bVar38 << bVar20 | (byte)(CONCAT11(CARRY1(bVar38,bVar32),bVar38) >> 9 - bVar20)) ^
           bVar42;
  uVar15 = (ushort)uVar50;
  if (SBORROW4((uint)(byte)(((byte)((uint)iVar58 >> 0x1c) + (char)(uVar56 >> 0x20) +
                             ((long)(int)uVar56 != uVar56) & bVar48) >> 1),-0x49869cce)) {
    uVar33 = CONCAT22(uVar12,uVar15);
  }
  uVar29 = 0xd2a69862;
  uVar15 = uVar15 << (bVar18 & 0xf) | uVar15 >> 0x10 - (bVar18 & 0xf);
  lVar17 = CONCAT62((int6)(uVar50 >> 0x10),uVar15);
  bVar38 = (byte)((ushort)(short)(char)bVar48 >> 1);
  uVar34 = (uint7)(CONCAT62(uVar31,CONCAT11(bVar42,bVar42)) >> 8);
  bVar32 = bVar42 ^ (bVar38 == bVar42) * bVar42;
  bVar38 = bVar38 ^ (bVar38 != bVar42) * (bVar38 ^ bVar32);
  sVar22 = (short)iVar68;
  uVar44 = (uint)CONCAT62(0x2a4c24aa476a,0x16a5 - sVar22);
  if ((SBORROW2(0x16a5,sVar22) != false) != (short)(0x16a5 - sVar22) < 0) {
    uVar44 = (uint)lVar17;
  }
  uVar60 = (uint)uVar27 & 0x1f;
  cVar53 = (((byte)((char)bVar48 >> 7) >> 1) - bVar38) - ((uVar44 >> uVar60 & 1) != 0);
  if (cVar53 == '\0') {
    uVar29 = CONCAT62(iVar35,CONCAT11(bVar20,bVar36)) & 0xffffffff;
  }
  cVar37 = (char)uVar15;
  cVar49 = (char)((uVar44 & ~(1 << uVar60)) >> 1) - cVar37;
  lVar52 = (ulong)(uVar26 | (uint)uVar59) * 2;
  iVar39 = (uint)CONCAT11(cVar53,(bVar32 - cVar49) -
                                 (((ushort)((short)(uVar34 >> 0x19) << ((bVar18 ^ bVar36) & 0x1f))
                                   >> 0xd & 1) != 0)) * (uVar55 & 0xffff);
  uVar28 = CONCAT62((uint6)((ulong)(CONCAT71(uVar34,bVar38) << 0x1f) >> 0x10) | uVar31 >> 0x21,
                    (short)((uint)iVar39 >> 0x10));
  uVar64 = (ushort)(short)cVar49 >> 1 | 0x8000;
  uVar44 = (uint)lVar52;
  lVar51 = ((ulong)((uint6)(ushort)(uVar62 >> 0x10) ^ 0x400000000000) * 0x10000 + 0x16a5) * 2 +
           0x55f877c;
  lVar66 = CONCAT71((int7)(uVar29 >> 8),(char)uVar29 - cVar37);
  uVar15 = (ushort)(uVar33 >> 0x10);
  uVar23 = -uVar64;
  uVar26 = CONCAT22(cVar49 >> 7,uVar23);
  bVar48 = (byte)uVar23;
  uVar60 = uVar44 << (bVar48 & 0x1f) | uVar44 >> 0x20 - (bVar48 & 0x1f);
  uVar11 = CONCAT21(uVar15,~(((char)(uVar33 >> 8) - (char)lVar51) - 1U) + 1);
  uVar56 = (ulong)uVar11;
  uVar55 = uVar55 - uVar60 ^ 0x31dfa813;
  uVar62 = uVar55 >> 10;
  iVar58 = 0;
  if (uVar62 != 0) {
    for (; (uVar62 >> iVar58 & 1) == 0; iVar58 = iVar58 + 1) {
    }
  }
  bVar18 = (bVar48 & 0x1f) % 0x11;
  uVar24 = (((short)iVar58 << bVar18 |
            (ushort)(CONCAT12((uint)uVar28 < 0xa09ebd71,(short)iVar58) >> 0x11 - bVar18)) & 0xff) *
           (ushort)bVar20;
  uVar14 = ((ushort)uVar11 ^ 0xdc42) << 2;
  uVar54 = (ushort)lVar66 + 0x16b5;
  uVar59 = (ulong)bVar48;
  if (uVar54 != 0) {
    uVar59 = uVar56;
  }
  uVar27 = lVar17 + lVar52 & 0xffffffffffffdfc3;
  return (ulong)CONCAT22((short)((uint)iVar58 >> 0x10),
                         CONCAT11((char)((uint)iVar39 >> 0x10),(char)(uVar24 >> 1))) +
         CONCAT62(iVar35,(ushort)bVar36) +
         (CONCAT71((uint7)(uint3)(uVar26 >> 9) | (uint7)(((ulong)((uVar23 & 1) != 0) << 0x3f) >> 8),
                   (char)(uVar26 >> 1)) & 0xffffffffffffff62) +
         CONCAT71((int7)((ulong)uVar28 >> 8),
                  (byte)(uVar24 >> 9) | (byte)((ushort)(uVar54 * -0x8000) >> 8)) + lVar66 +
         (ulong)CONCAT22((ushort)(uVar55 >> 0x1a),
                         (short)uVar62 >> 0x11 | 1 << ((ushort)uVar60 & 0xf)) +
         (((ulong)(((uVar44 - (int)lVar66) * 0x40000 | (uint)(uVar15 >> 6)) >> (bVar48 & 0x3f)) |
          uVar56 << 0x40 - (bVar48 & 0x3f)) >> 0x18 | uVar27 << 0x28) + uVar59 +
         (ulong)((uint)uVar54 << 1 | 1) +
         (ulong)((CONCAT22((short)((uint)iVar68 >> 0x10),
                           (ushort)(CONCAT12(uVar64 != 0,sVar22) >> 3) | sVar22 << 0xe) ^ 0x10000000
                 ) & 0xfeffffff | 0x80) + uVar56 + uVar27 +
         (ulong)(byte)((byte)uVar14 | (byte)(uVar29 >> 8) >> 6) + (ulong)uVar60 +
         CONCAT62((int6)((ulong)lVar51 >> 0x10),
                  (ushort)lVar51 & ~(1 << (uVar14 & 0xf | (ushort)lVar66 >> 0xe))) +
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
  ulong uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  short sVar5;
  undefined2 uVar6;
  undefined3 uVar7;
  uint3 uVar8;
  byte bVar9;
  char cVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  int6 iVar17;
  undefined6 uVar18;
  undefined7 uVar16;
  undefined8 uVar15;
  sbyte sVar19;
  byte bVar25;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  char cVar26;
  ulong uVar24;
  byte bVar29;
  undefined2 uVar27;
  ushort uVar28;
  byte bVar30;
  byte bVar31;
  byte bVar33;
  int iVar32;
  short sVar34;
  long lVar35;
  uint uVar36;
  ulong uVar37;
  ushort uVar38;
  int iVar40;
  char cVar41;
  uint6 uVar42;
  short sVar43;
  uint uVar44;
  ulong uVar45;
  ulong uVar46;
  ushort uVar47;
  ulong uVar48;
  long lVar49;
  ushort uVar50;
  uint uVar51;
  ulong uVar52;
  int iVar53;
  ulong uVar54;
  ushort uVar55;
  uint uVar56;
  int iVar57;
  ulong uVar58;
  bool bVar59;
  ushort uVar39;
  
  for (lVar35 = 0x3f; 0x120845e2bU >> lVar35 == 0; lVar35 = lVar35 + -1) {
  }
  for (lVar35 = 0; (0xa914f5beU >> lVar35 & 1) == 0; lVar35 = lVar35 + 1) {
  }
  for (sVar43 = 0; (0x8d9aU >> sVar43 & 1) == 0; sVar43 = sVar43 + 1) {
  }
  uVar45 = CONCAT62(0xf6a1,sVar43) ^ 0x13100000;
  uVar36 = (uint)CONCAT71((int7)(uVar45 >> 8),(char)sVar43 + -0xb) >> 1;
  uVar22 = 0;
  uVar50 = (ushort)((ulong)(lVar35 << 0xd) >> 0x10);
  uVar36 = CONCAT22((ushort)(uVar45 >> 0x10) >> 1,
                    CONCAT11((char)(uVar36 >> 8) + '\x06',(char)uVar36)) | 0x80000000;
  uVar20 = uVar36 + 0xcc563908;
  if (0x33a9c6f7 < uVar36) {
    uVar20 = uVar22;
  }
  uVar55 = (ushort)((uint)(0xf8db9f8 - (int)uVar45) >> 0x10);
  uVar12 = uVar55 >> 6;
  uVar8 = (uint3)(((uVar50 & 0xfffd) << 0x10) >> 8) | 0xc6;
  bVar9 = (byte)uVar20;
  bVar9 = bVar9 ^ (bVar9 != 0xff) * (bVar9 ^ (bVar9 == 0xff) * -0x6a ^ 0xffU);
  for (sVar43 = 0xf; 0xc563U >> sVar43 == 0; sVar43 = sVar43 + -1) {
  }
  iVar17 = (int6)(short)(uVar20 >> 0x10);
  for (iVar53 = 0x1f; 0x33a9c669U >> iVar53 == 0; iVar53 = iVar53 + -1) {
  }
  uVar36 = CONCAT31(uVar8,0xd2) ^ 1;
  if ((int)uVar36 < 0) {
    uVar22 = (uint)CONCAT62(iVar17,CONCAT11(((char)bVar9 >> 7) + '\x17',bVar9));
  }
  uVar45 = CONCAT71((uint7)uVar8,0x27);
  uVar20 = uVar22 | 0x1409;
  for (sVar43 = 0xf; 0x1409U >> sVar43 == 0; sVar43 = sVar43 + -1) {
  }
  bVar25 = (byte)uVar20;
  uVar48 = CONCAT62(iVar17,(short)CONCAT71((int7)(CONCAT62(iVar17,(char)bVar9 * 0x27) >> 8),
                                           (char)((char)bVar9 * 0x27))) & 0xffffffffffff3fff;
  uVar37 = uVar48 | 0xc0;
  uVar48 = CONCAT62((int6)(uVar48 >> 0x10),(ushort)uVar37 / (ushort)(byte)uVar37) &
           0xffffffffffff00ff;
  if (((uint)(0x33a9c669 << (bVar25 & 0x1f)) >> 0x11 & 1) != 0) {
    uVar45 = (ulong)((uVar50 & 0xfffd) << 0x10);
  }
  uVar51 = (uint)(ushort)(0 >> (bVar25 & 0x1f));
  bVar59 = (CONCAT22(uVar12,0x1b96) | 0x800) != 0;
  cVar26 = (char)((ushort)sVar43 >> 8);
  bVar9 = cVar26 - 1;
  bVar29 = bVar9 - bVar59;
  uVar50 = CONCAT11(bVar29,(char)sVar43);
  bVar30 = (bVar25 & 0x1f) % 9;
  bVar9 = (byte)(CONCAT11(cVar26 == '\0' || bVar9 < bVar59,bVar25) >> bVar30) | bVar25 << 9 - bVar30
  ;
  iVar40 = (short)(uVar36 << 1) * 0x4ff4;
  uVar7 = 0x43073f;
  if ((short)iVar40 != iVar40) {
    uVar7 = (int3)(uVar20 >> 8);
  }
  uVar37 = CONCAT71((int7)(uVar45 >> 8),(byte)uVar45 >> 2 | (byte)uVar45 << 6);
  uVar56 = uVar51 + 0x65f8aef1;
  uVar36 = 0x1408 - uVar51 >> 1;
  uVar45 = 0;
  if (uVar37 != 0) {
    for (; (uVar37 >> uVar45 & 1) == 0; uVar45 = uVar45 + 1) {
    }
  }
  uVar18 = (undefined6)(uVar48 >> 0x10);
  lVar35 = CONCAT62(uVar18,(short)(char)uVar48 * (short)(char)uVar36);
  uVar51 = iVar53 * -0x856ed44;
  uVar23 = (ulong)uVar51;
  bVar25 = bVar9 & 0x3f;
  uVar48 = uVar37 >> bVar25 | lVar35 << 0x40 - bVar25;
  iVar53 = uVar56 + (int)lVar35 + 1;
  sVar43 = 0;
  uVar12 = (ushort)(CONCAT22(uVar12,0x1b96) >> 2);
  if (uVar12 != 0) {
    for (; (uVar12 >> sVar43 & 1) == 0; sVar43 = sVar43 + 1) {
    }
  }
  uVar27 = (undefined2)((uint)iVar53 >> 0x10);
  uVar14 = CONCAT22(uVar27,sVar43);
  sVar34 = uVar12 + (short)CONCAT31((int3)((uint)iVar40 >> 8),~(byte)iVar40) + -0x4bd6;
  bVar25 = (byte)(uVar22 >> 0x10);
  uVar11 = (ushort)bVar25;
  uVar39 = (ushort)uVar48;
  uVar12 = uVar39 >> 1;
  uVar28 = uVar11 << 0xf;
  uVar47 = uVar12 | uVar28;
  uVar13 = CONCAT11(bVar29 >> 1,(char)(uVar50 >> 1) + 'v');
  if (uVar47 == 0 || ((short)uVar39 < 0 != (uVar28 != 0)) != (uVar28 != 0)) {
    uVar13 = uVar11;
  }
  uVar48 = CONCAT62((int6)(uVar48 >> 0x10),uVar47) & 0xffffffff;
  if ((POPCOUNT(uVar12 & 0xff) & 1U) == 0) {
    uVar48 = 0xbed8a57e;
  }
  uVar56 = (uint)(ushort)((ushort)CONCAT31(0x2b2ffa,(char)iVar53 + -0x40 +
                                                    CARRY4(uVar56,(uint)uVar50)) | 0xc000);
  uVar44 = CONCAT22(uVar13,uVar11) & 0x3fffffff;
  uVar24 = CONCAT62(uVar18,(short)(uVar44 / uVar56));
  uVar44 = uVar44 % uVar56;
  bVar30 = (byte)(uVar22 >> 0x18);
  bVar25 = bVar25 >> (bVar30 & 7) | bVar25 << 8 - (bVar30 & 7);
  uVar37 = (ulong)CONCAT31(uVar7,0xbed8a57e < uVar14);
  if (uVar14 < 0xbed8a57f) {
    uVar37 = 0xbed8a57e;
  }
  cVar26 = (char)(uVar44 >> 8);
  bVar29 = (byte)uVar44;
  uVar45 = (uVar45 ^ 0x61b6) & 0xffffffff;
  if (uVar24 + uVar23 != 0 && SCARRY8(uVar24,uVar23) == (long)(uVar24 + uVar23) < 0) {
    uVar45 = (ulong)CONCAT22(uVar55 >> 8,sVar34);
  }
  uVar46 = uVar45 >> 0xd | uVar45 << 0x33;
  uVar45 = (ulong)CONCAT11(bVar25,bVar29);
  iVar53 = 0;
  uVar22 = (uint)CONCAT62((int6)(uVar37 >> 0x10),(ushort)CARRY8(uVar24,uVar23) | (short)uVar37 << 1)
  ;
  if (uVar22 != 0) {
    for (; (uVar22 >> iVar53 & 1) == 0; iVar53 = iVar53 + 1) {
    }
  }
  uVar36 = uVar36 << ((bVar30 | 0x65) & 0x1f);
  uVar37 = uVar45 * 0x1812860d;
  bVar31 = (bVar30 | 0x65) & 0x3f;
  uVar23 = (ulong)(CONCAT22((ushort)(uVar20 >> 8) & 0xff | (ushort)(((uint)bVar9 << 0x18) >> 0x10),
                            CONCAT11(bVar25 + (cVar26 << 6 |
                                              (byte)(CONCAT11(0xbed8a57d < uVar14,cVar26) >> 3)),
                                     bVar30)) | 0x65) << bVar31 | (ulong)(uVar51 >> 0x40 - bVar31);
  iVar40 = (uVar22 << 1 |
           (uint)(SEXT816((long)uVar37) != SEXT816((long)uVar45) * SEXT416(0x1812860d))) - uVar14;
  bVar29 = bVar29 | 0xa8;
  if (sVar43 != -0x3969) {
    uVar37 = uVar48;
  }
  uVar50 = (ushort)uVar48;
  uVar22 = 0x1f;
  if (uVar36 != 0) {
    for (; uVar36 >> uVar22 == 0; uVar22 = uVar22 - 1) {
    }
  }
  iVar21 = (int)CONCAT71((int7)(CONCAT62((int6)(uVar23 >> 0x10),0xa57e) >> 8),0x7e) - uVar36;
  bVar25 = ('~' - (char)(uVar23 >> 8)) - (0x4666 < uVar50 || 0xfffe < (ushort)(uVar50 + 0xb999));
  uVar20 = iVar21 * 0x20;
  bVar9 = (bVar25 == 0xa5) * (bVar29 ^ 0xa5);
  uVar56 = (uint)bVar29;
  if (bVar25 < 0xa6) {
    uVar56 = uVar20;
  }
  bVar30 = (byte)iVar21;
  uVar14 = (int)(uint)(ushort)(CONCAT11(bVar25 ^ (bVar25 != 0xa5) * (bVar25 ^ bVar9 ^ 0xa5),bVar9) ^
                              0xa5) >> (bVar30 & 0x1f);
  uVar45 = (ulong)uVar14;
  uVar23 = (ulong)(uVar22 >> 1) ^ 0x7e6c4760;
  if (uVar14 != (uint)(uVar48 << 0x19)) {
    uVar45 = 0;
  }
  bVar25 = (byte)(uVar50 + 0xb99a) & (byte)iVar53;
  uVar22 = CONCAT31((int3)(CONCAT22((short)((uint)iVar40 >> 0x10),uVar50 + 0xb99a) >> 8),bVar25);
  sVar34 = CONCAT11('\0' < (char)bVar25,(byte)((byte)iVar40 & (byte)sVar34) == 0);
  bVar9 = (bVar30 & 0x1f) % 0x11;
  uVar50 = (ushort)uVar23;
  lVar35 = CONCAT62((int6)(uVar23 >> 0x10),uVar50 >> bVar9 | uVar50 << 0x11 - bVar9) << 1;
  uVar23 = uVar46 | 0xb148;
  cVar10 = (char)uVar23;
  bVar9 = (char)lVar35 + cVar10;
  iVar40 = CONCAT31((uint3)(uVar37 >> 8) ^ (uint3)(CONCAT22(uVar27,sVar43) >> 8) ^ 0xc6,
                    (char)uVar56 + -1);
  uVar42 = (uint6)(uVar45 >> 8);
  cVar26 = (char)((iVar53 - (int)CONCAT62(0xbed8,sVar34)) - 1U >> 0xd);
  uVar15 = CONCAT71((int7)((ulong)lVar35 >> 8),bVar9 * '\x04' | bVar9 >> 6);
  uVar51 = CONCAT31((uint3)(uVar51 + 1 >> 9) | (uint3)(((uint)((uVar51 + 1 & 1) != 0) << 0x1f) >> 8)
                    ,(char)bVar25 < '\x01') + 1;
  sVar43 = (short)iVar40;
  uVar37 = -(ulong)(uint)(((int)CONCAT62(0xbed8,sVar34 + 0x5c9f) + 0x2f5ec3b7) - (int)uVar15);
  bVar25 = (byte)(uVar23 * -0x3c0b6074);
  uVar48 = (ulong)((uVar56 >> 0x11) << 0x10) << 1;
  bVar9 = bVar25 & 0xf;
  uVar50 = (ushort)(uVar51 >> 1);
  uVar50 = uVar50 << bVar9 | uVar50 >> 0x10 - bVar9;
  uVar51 = CONCAT22((ushort)(uVar51 >> 0x11) | (ushort)((uint)((int)sVar43 << 0x1f) >> 0x10),uVar50)
  ;
  iVar53 = (int)uVar37 +
           (int)CONCAT62((int6)((ulong)lVar35 >> 0x10),(short)uVar15 >> (bVar25 & 0x1f));
  cVar41 = (char)uVar50;
  uVar45 = (ulong)CONCAT22((short)(uVar36 >> 0x10),(ushort)uVar36 & (short)(uVar20 >> 0x10) << 8) *
           2 & 0xffffffff;
  if (!SBORROW1(cVar26,cVar41)) {
    uVar45 = uVar48;
  }
  uVar24 = (uVar23 * -0x3c0b6074 ^ (ulong)uVar22) & 0xffffffffffffff0f;
  uVar50 = (ushort)uVar22 >> (sbyte)uVar24 | 0x22f9 << 0x10 - (sbyte)uVar24;
  uVar36 = iVar40 + 0x77cdd4d3;
  uVar18 = (undefined6)(uVar45 >> 0x10);
  uVar45 = uVar24 - 0x5ecb5ba;
  uVar54 = -(ulong)((int)uVar48 + 0xda8b9ac5);
  bVar9 = (byte)uVar45 & 0x3f;
  uVar52 = (ulong)uVar51 << bVar9 | (ulong)(uVar51 >> 0x40 - bVar9);
  uVar55 = (ushort)iVar53;
  uVar48 = CONCAT71((int7)(uVar45 >> 8),(byte)uVar45 & (byte)uVar50) & 0xffffffffffffff0f;
  bVar30 = (byte)uVar48;
  uVar12 = (ushort)((ushort)(0x5ecb5b9 < uVar24) << 8) >> bVar30 | (short)uVar36 << 0x10 - bVar30;
  lVar35 = (uVar37 & 0xffffffff) - 1;
  bVar25 = ((POPCOUNT(uVar45 & 0xff) & 1U) == 0) * '8';
  uVar51 = (uint)uVar50 | (uint)lVar35;
  sVar34 = (short)CONCAT71((int7)(uVar23 >> 8),cVar10 << 1 | cVar10 < '\0');
  uVar20 = ((uVar36 >> 0x18 | uVar36 * 0x100) >> (uVar51 & 0x1f) & 1) != 0 | 0xfdca22f8;
  uVar45 = CONCAT62((uVar42 & 0xff0000) >> 1,
                    CONCAT11((POPCOUNT(uVar20 & (byte)-(cVar26 - cVar41)) & 1U) != 0,
                             (char)((CONCAT62(uVar42,CONCAT11((byte)(uVar12 >> 9),(char)uVar12)) &
                                    0xff0000ffff) >> 1)));
  uVar50 = (ushort)(short)(char)(uVar48 >> 8) >> 1;
  uVar22 = (uint)uVar48 ^ 0x9429f7bf;
  bVar9 = (byte)uVar22 & 0x3f;
  uVar56 = CONCAT22(sVar43 >> 0xf,sVar43 + 1) << bVar9 | (uint)(uVar54 >> 0x40 - bVar9);
  uVar27 = (undefined2)(uVar22 >> 0x10);
  uVar22 = CONCAT22(uVar27,(ushort)bVar25);
  iVar40 = (int)CONCAT71((int7)(uVar54 >> 8),(char)uVar36);
  cVar10 = (char)uVar50;
  cVar41 = (char)uVar51;
  cVar26 = cVar10 + cVar41;
  if (SCARRY1(cVar10,cVar41) == SCARRY1(cVar26,'\0')) {
    iVar40 = (int)CONCAT62((int6)(uVar54 >> 0x10),(ushort)bVar25);
  }
  lVar49 = (long)(int)uVar56;
  uVar45 = (uVar45 & 0xffffffff) * (uVar45 & 0xffffffff);
  uVar16 = (undefined7)((uVar45 & 0xffffffff) >> 8);
  cVar10 = (char)(uVar45 & 0xffffffff) + (char)uVar52 + ((int)(uVar45 >> 0x20) != 0);
  uVar36 = iVar40 + 0xd2a8b933;
  if ((SBORROW4(iVar40,0x2d5746cc) != SBORROW4(iVar40 + -0x2d5746cc,1)) == (int)uVar36 < 0) {
    lVar49 = CONCAT62((int6)(short)(uVar56 >> 0x10),(short)CONCAT71(uVar16,cVar10));
  }
  uVar15 = CONCAT71(uVar16,cVar10 + '6');
  sVar43 = (short)lVar35 + (short)uVar52;
  uVar48 = CONCAT62((int6)(uVar52 >> 0x10),(short)lVar35);
  iVar40 = 0;
  if (uVar22 != 0) {
    for (; (uVar22 >> iVar40 & 1) == 0; iVar40 = iVar40 + 1) {
    }
  }
  uVar6 = (undefined2)(uVar45 >> 0x30);
  iVar32 = (int)uVar15;
  iVar21 = iVar32 << 1;
  uVar28 = (ushort)(iVar40 + uVar20 >> 0x10);
  uVar11 = (short)(iVar40 + uVar20) - 1;
  uVar22 = CONCAT22(uVar28,uVar11);
  uVar13 = (ushort)iVar21;
  uVar47 = (ushort)(uVar13 == 0x8d98) * ((ushort)uVar36 ^ 0x8d98) ^ 0x8d98;
  uVar13 = uVar13 ^ (ushort)(uVar13 != 0x8d98) * (uVar13 ^ uVar47);
  uVar42 = (uint6)((ulong)lVar49 >> 0x10);
  uVar51 = CONCAT31((int3)(CONCAT22((short)((uint)iVar53 >> 0x10),uVar50) >> 8),
                    (cVar26 + '$') - (iVar32 < 0));
  if (-0x708c < (short)uVar11) {
    uVar51 = uVar36;
  }
  uVar45 = (long)CONCAT22(uVar27,(short)lVar49) * 0x13e1ff78;
  uVar37 = uVar45 & 0xffffffff;
  bVar59 = (long)(int)uVar45 != uVar45;
  bVar29 = (byte)(uVar37 >> 8);
  bVar9 = bVar29 + 0xb4;
  cVar26 = bVar9 + bVar59;
  uVar45 = (ulong)uVar36;
  if ((0x4b < bVar29 || CARRY1(bVar9,bVar59)) || cVar26 == '\0') {
    uVar45 = CONCAT62(uVar18,uVar55);
  }
  uVar50 = (ushort)((byte)(bVar25 - 1) >> 1) | (ushort)((bVar25 - 1 & 1) != 0) << 0xf;
  uVar39 = (ushort)uVar20;
  uVar38 = uVar39 ^ (ushort)(uVar13 == uVar39) * (uVar39 ^ uVar50);
  iVar17 = (int6)(short)((uint)iVar21 >> 0x10);
  if ((short)uVar39 < (short)uVar13) {
    uVar50 = uVar55;
  }
  uVar23 = CONCAT62(uVar42,uVar50);
  if ((short)uVar39 <= (short)uVar13) {
    uVar45 = uVar23;
  }
  uVar24 = CONCAT62(uVar18,uVar55);
  uVar14 = (int)uVar45 << 1 | (uint)((int)uVar45 < 0);
  uVar56 = (uint)CONCAT62(0xa0e452e5aae,uVar47) ^ 1 << ((uint)uVar24 & 0x1f);
  uVar36 = (uint)(ushort)(uVar13 ^ (ushort)(uVar13 != uVar39) * (uVar13 ^ uVar38)) *
           (uint)(ushort)((short)uVar15 >> 0xf);
  uVar27 = (undefined2)(uVar36 >> 0x10);
  uVar45 = (ulong)CONCAT22(uVar6,uVar27);
  uVar20 = uVar36;
  if (uVar24 + uVar45 == 0 || SCARRY8(uVar24,uVar45) != false) {
    uVar20 = (uint)(uVar24 + uVar45);
  }
  uVar24 = CONCAT71((int7)(CONCAT62(0xfdca,uVar38) >> 8),
                    (byte)(CONCAT11(CARRY8(uVar24,uVar45),(char)uVar38) >> 4) | (char)uVar38 << 5);
  uVar45 = CONCAT62((int6)(uVar37 >> 0x10),CONCAT11(cVar26,(char)uVar37)) << 1;
  uVar46 = CONCAT62((int6)(uVar46 >> 0x10),
                    sVar34 << bVar30 % 0x11 |
                    (ushort)(CONCAT12((uVar12 & 1) != 0,sVar34) >> 0x11 - bVar30 % 0x11)) | 0xc000;
  uVar37 = (ulong)CONCAT22(uVar6,uVar27) & 0xffffffffffff3fff;
  uVar36 = (uint)(ushort)uVar37 << 0x10 | uVar36 & 0xffff;
  sVar34 = (short)(uVar36 / (ushort)uVar46);
  uVar20 = uVar20 & 0xffff;
  if ((POPCOUNT(uVar11 & 0xda) & 1U) != 0) {
    uVar20 = (uint)CONCAT62(iVar17,sVar34);
  }
  uVar52 = 0;
  if (uVar48 != 0) {
    for (; (uVar48 >> uVar52 & 1) == 0; uVar52 = uVar52 + 1) {
    }
  }
  bVar25 = (byte)uVar45;
  bVar9 = bVar25 & 0x3f;
  uVar48 = uVar24 << bVar9 | uVar24 >> 0x40 - bVar9;
  bVar25 = bVar25 & 0x3f;
  uVar54 = 0x865d5c7f88e24f10U >> bVar25 | -0x79a2a380771db0f0 << 0x40 - bVar25;
  uVar24 = CONCAT71((uint7)(uVar23 >> 9),(byte)(uVar23 >> 1) >> 1);
  uVar23 = uVar24 & 0xffffffff;
  iVar53 = (int)sVar34 * (int)(short)uVar14;
  uVar50 = (short)CONCAT31((int3)(uVar51 >> 8),(byte)uVar51 << 1 | (byte)uVar51 >> 7) << 1;
  uVar45 = uVar45 & 0xffffffff;
  if (uVar46 <= uVar24) {
    uVar45 = (ulong)uVar22;
  }
  iVar40 = (int)CONCAT71((int7)(uVar48 >> 8),(char)uVar48 + -1) + 1;
  sVar34 = ((ushort)CONCAT31((int3)(uVar56 >> 8),(byte)uVar56 >> 1) | 0x80) + 0xc2e7 +
           (ushort)(0x1402d1eb < uVar46);
  uVar48 = (ulong)uVar14;
  if (-1 < sVar34) {
    uVar48 = CONCAT62((int6)((ulong)lVar35 >> 0x10),sVar43) | 0x400;
  }
  lVar35 = (uVar52 & ~(1L << ((ulong)uVar22 & 0x3f))) -
           (ulong)CONCAT22((short)(uVar56 >> 0x10),sVar34);
  sVar34 = (short)uVar24 + -0x17f0;
  iVar21 = -(int)CONCAT62((int6)(((ulong)CONCAT61((int6)(uVar37 >> 0x10),
                                                  (char)(uVar36 % (uint)(ushort)uVar46 >> 8) >> 1)
                                 << 9) >> 0x10),(short)((uint)iVar53 >> 0x10));
  uVar12 = (ushort)iVar21;
  uVar27 = (undefined2)((uint)iVar21 >> 0x10);
  uVar12 = uVar12 | 1 << (uVar12 & 0xf);
  uVar14 = (uint)CONCAT71((int7)(CONCAT62(uVar42 >> 1,sVar34) >> 8),(byte)sVar34 >> 1);
  uVar36 = uVar14 << 9;
  cVar26 = (char)uVar12 + 'J';
  uVar55 = (ushort)uVar54 & (ushort)uVar45;
  bVar9 = (byte)uVar45 & 0x3f;
  uVar37 = (ulong)(uVar28 >> 8) - 0x464d2c4b;
  sVar34 = CONCAT11((char)(uVar12 >> 8) + (char)uVar50,cVar26) << 1;
  uVar22 = CONCAT22(uVar27,sVar34);
  uVar45 = uVar45 << bVar9 | uVar45 >> 0x40 - bVar9;
  uVar56 = CONCAT22((short)((uint)iVar40 >> 0x10),
                    (short)CONCAT31((int3)((uint)iVar40 >> 8),
                                    ((char)iVar40 << 1 | 1U) + cVar26 + ((uVar50 >> 8 & 1) != 0))) ^
           0x400;
  if ((uVar55 & 0x1000) != 0 || (uVar20 | (uint)lVar35) == 0x9ab684bf) {
    uVar45 = uVar37;
    uVar56 = uVar22;
  }
  uVar45 = uVar45 & 0xffffffff;
  iVar40 = (int)CONCAT62(iVar17,(short)iVar53) + 0x558996ff;
  iVar53 = ((CONCAT22((short)(uVar51 >> 0x10),uVar50) | 0x100) + 0x54512ac1) * 2;
  uVar50 = (ushort)CONCAT71((int7)(uVar48 >> 8),(char)uVar48 >> 0x1c);
  uVar51 = uVar56 + (uint)uVar23 + 1;
  uVar56 = (uVar14 >> 0x17 | uVar36) ^ 0x80;
  uVar20 = uVar51 + (uint)lVar35 * 4;
  lVar49 = -(CONCAT62((int6)(uVar54 >> 0x10),uVar55) ^ 0x1000);
  bVar9 = (byte)lVar49 | (byte)sVar43;
  uVar24 = CONCAT71((int7)((ulong)lVar49 >> 8),bVar9);
  if ((char)bVar9 < '\x01') {
    uVar24 = CONCAT62((int6)((ulong)lVar49 >> 0x10),uVar50) | 1;
  }
  auVar4[1] = (char)((uint)iVar40 >> 8) << 1;
  auVar4[0] = (char)iVar40;
  auVar4._2_6_ = (int6)(short)((uint)iVar40 >> 0x10);
  uVar12 = CONCAT11((char)(uVar45 >> 8) >> ((byte)uVar45 & 0x1f),(byte)uVar45) << 1;
  uVar55 = uVar12 | 1;
  iVar40 = 0;
  uVar14 = (uint)CONCAT62((int6)(uVar48 >> 0x10),(uVar50 | 1) * 0x6ad);
  if (uVar14 != 0) {
    for (; (uVar14 >> iVar40 & 1) == 0; iVar40 = iVar40 + 1) {
    }
  }
  bVar9 = (byte)uVar55;
  auVar4._10_2_ = uVar27;
  auVar4._8_2_ = (ushort)CONCAT31((int3)(uVar22 >> 8),(char)sVar34 - (char)((ushort)sVar34 >> 8)) >>
                 (bVar9 & 0x1f);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar24 | 0xc000000000000000;
  auVar4._12_4_ = 0;
  bVar9 = bVar9 & 0x1f;
  uVar22 = uVar20 >> bVar9 | uVar20 << 0x20 - bVar9;
  cVar26 = (char)uVar22;
  uVar22 = CONCAT31((int3)(uVar22 >> 8),cVar26 << 1 | cVar26 < '\0');
  uVar48 = CONCAT62((int6)(uVar45 >> 0x10),(short)uVar55 >> 8);
  iVar40 = (int)CONCAT62((int6)(uVar37 >> 0x10),(short)(char)((char)uVar51 + '\x01'));
  uVar46 = (ulong)(uVar22 + 0x3d09442e + iVar40 * 4);
  uVar37 = (ulong)uVar22 * 0x1000000;
  bVar9 = (byte)(uVar12 >> 8);
  uVar20 = uVar14 << (bVar9 & 0x1f) | uVar14 >> 0x20 - (bVar9 & 0x1f);
  uVar22 = iVar40 << 1;
  uVar52 = uVar46 + uVar37;
  uVar45 = (ulong)(uVar20 & 0xffffbfff);
  if (uVar52 != 0) {
    uVar45 = uVar48;
  }
  uVar54 = uVar52;
  if (SCARRY8(uVar46,uVar37) != false) {
    uVar54 = uVar37;
  }
  uVar46 = (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                  (uVar22 | (uVar20 >> 0xe & 1) != 0) << 0x18);
  if (uVar52 != 0) {
    uVar46 = uVar48;
  }
  iVar40 = 0;
  uVar22 = (uint)uVar46;
  if (uVar22 != 0) {
    for (; (uVar22 >> iVar40 & 1) == 0; iVar40 = iVar40 + 1) {
    }
  }
  iVar21 = SUB164(auVar4 % auVar3,0) << 1;
  uVar50 = (ushort)iVar21 | (ushort)(uVar54 >> 0x10) >> 0xf;
  iVar32 = CONCAT22((short)((uVar22 & 0x3f5fb021) >> 0x10),(short)(uVar22 & 0x3f5fb021) + -0x6b13);
  cVar26 = ((char)((uint)iVar53 >> 8) >> 7) + (char)((uint)iVar21 >> 8) + '\x01';
  if (cVar26 < '\0') {
    iVar32 = (int)uVar48;
  }
  sVar34 = (short)uVar23 + uVar50;
  uVar12 = (ushort)iVar40 >> 1;
  uVar22 = (iVar32 << (bVar9 & 0x1f)) + 0xde63b492;
  uVar46 = CONCAT62((int6)((ulong)lVar35 >> 0x10),
                    (short)CONCAT71((int7)((ulong)lVar35 >> 8),-((uVar56 & 1) != 0)) + 0x2882) ^
           0x2582590;
  sVar43 = 0xf;
  uVar55 = (ushort)uVar22;
  if (uVar55 != 0) {
    for (; uVar55 >> sVar43 == 0; sVar43 = sVar43 + -1) {
    }
  }
  uVar20 = (uint)CONCAT62((int6)(uVar23 >> 0x10),sVar34);
  uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
  lVar49 = (ulong)CONCAT31(0xffff7f,(char)uVar12) << (bVar9 & 0x3f);
  lVar35 = uVar20 + uVar48;
  cVar10 = (char)lVar35;
  bVar29 = (char)(((uint)uVar23 & 0xffff) >> 1) << 1 | 0xc0;
  iVar21 = ((uint)(((ulong)CONCAT31((int3)(CONCAT22((short)((uint)iVar53 >> 0x10),
                                                    (short)iVar53 >> 0x15) >> 8),cVar26) <<
                    (bVar9 & 0x3f) |
                   (ulong)(CONCAT22((short)(uVar36 >> 0x10),(ushort)uVar56 >> 1) >>
                          0x40 - (bVar9 & 0x3f))) >> 2) & 0x7fffffff) * -0x5b152ab2;
  iVar53 = CONCAT31((int3)(CONCAT22((short)((uint)iVar40 >> 0x10),uVar12) >> 8),0xff) + 1 + uVar20;
  uVar46 = CONCAT62((int6)(uVar46 >> 0x10),(short)uVar46 + (short)uVar45 + (ushort)(cVar10 < '\0'))
           >> 0xe & 0x3ffff;
  uVar56 = (uint)CONCAT62((int6)(uVar54 >> 0x10),(ushort)uVar54 >> 0xe) ^ 0xfefe84be;
  uVar22 = uVar22 ^ 0x40000;
  uVar36 = CONCAT22((short)((uint)iVar21 >> 0x10),(short)iVar21 + (short)uVar56 + 1);
  uVar48 = (ulong)uVar20 - 1;
  sVar5 = ((ushort)uVar54 >> 1 & 0xff) << 1;
  bVar30 = (byte)uVar48;
  bVar25 = bVar30 & 0x1f;
  uVar14 = uVar36 >> bVar25 | uVar36 << 0x20 - bVar25;
  bVar30 = bVar30 & 0x3f;
  uVar24 = uVar48 >> bVar30 |
           (((CONCAT62((int6)((uVar24 | 0xc000000000000000) >> 0x10),
                       (ushort)uVar24 >> 1 | (ushort)((uVar24 & 1) != 0) << 0xf) ^ uVar54) &
             0xfffffffffffffbff | 1) << (bVar9 & 0x3f) | uVar54 >> 0x40 - (bVar9 & 0x3f)) <<
           0x40 - bVar30;
  uVar44 = ~CONCAT31((uint3)(uVar56 >> 9),(char)uVar45);
  iVar40 = (int)CONCAT71((int7)((ulong)lVar35 >> 8),cVar10 << 1);
  bVar25 = (byte)uVar24;
  uVar56 = iVar53 << (bVar25 & 0x1f) |
           (uint)(CONCAT14(iVar40 != 0,iVar53) >> 0x21 - (bVar25 & 0x1f));
  uVar20 = ((uint)CONCAT71(CONCAT61((int6)(uVar37 >> 0x10),(char)(0 % (ushort)bVar29)),0x26) |
           0xe5861937) * uVar56;
  bVar31 = (byte)uVar46;
  uVar27 = (undefined2)(uVar20 >> 0x10);
  uVar48 = (ulong)CONCAT31((int3)(CONCAT22((short)((CONCAT31((int3)(((uVar51 & 0xffff) << 1) >> 8),
                                                             sVar34 == 0 ||
                                                             SCARRY2((short)uVar23,uVar50) !=
                                                             sVar34 < 0) >> (bVar9 & 0x3f)) >> 0x10)
                                           ,sVar5) >> 8),~(byte)sVar5) * 0x76f3dbe4;
  uVar50 = (ushort)uVar48 | (ushort)((int)uVar22 < 0);
  sVar34 = (short)lVar49;
  uVar55 = sVar43 << 1 | (ushort)(sVar43 < 0);
  uVar36 = CONCAT22((short)((uint)-iVar40 >> 0x10),uVar55);
  uVar37 = uVar24 >> (bVar25 & 0x3f);
  uVar12 = (short)uVar56 + 1;
  uVar23 = (ulong)CONCAT22((short)(uVar56 >> 0x10),uVar12);
  bVar9 = (byte)uVar37 & 0x1f;
  uVar20 = (uint)(uVar12 != 0 && SCARRY2((short)uVar56,1) == (short)uVar12 < 0) << bVar9 |
           CONCAT22(uVar27,(short)((uVar20 & 0xffff) * (uVar22 & 0xffff))) >> 0x20 - bVar9;
  bVar9 = (byte)uVar20;
  bVar30 = bVar25 & bVar9;
  sVar43 = ((ushort)uVar44 >> 1 | (short)uVar24 << 0xf) - uVar55;
  iVar53 = CONCAT22((short)(uVar44 >> 0x10),sVar43);
  uVar42 = (uint6)((ulong)lVar49 >> 0x10);
  if (SBORROW2(sVar34,uVar50) != false) {
    uVar37 = CONCAT62((int6)(uVar37 >> 0x10),sVar43);
  }
  bVar33 = (byte)(uVar24 >> 8);
  uVar55 = (ushort)(byte)(bVar9 << 1) * (ushort)bVar33;
  uVar28 = (ushort)(uVar20 << ((byte)uVar37 & 0x1f));
  uVar13 = uVar28 ^ (ushort)(uVar55 == uVar28) * (uVar28 ^ (ushort)uVar37);
  uVar52 = (ulong)CONCAT22(uVar27,uVar55 ^ (ushort)(uVar55 != uVar28) * (uVar55 ^ uVar13));
  uVar58 = ((ulong)uVar36 & 0x7f) << 1 | 1;
  uVar54 = (ulong)uVar14;
  if ((short)(uVar55 - uVar28) < 0) {
    uVar54 = uVar48 & 0xffffffff | (ulong)((int)uVar22 < 0);
  }
  uVar1 = (ulong)((uVar12 >> (uVar12 & 0xf) & 1) != 0);
  uVar2 = uVar52 - 0x5d46dd1d;
  lVar35 = uVar2 - uVar1;
  if ((char)(uVar13 >> 8) != '\0' && -1 < (short)uVar13) {
    lVar35 = CONCAT62((int6)((ulong)lVar35 >> 0x10),
                      (short)CONCAT71((int7)(int3)(uVar24 >> 8),bVar30));
  }
  iVar40 = (int)(CONCAT62((int6)(uVar45 >> 0x10),
                          (short)CONCAT71((int7)(uVar45 >> 8),
                                          ((SBORROW1(bVar29,'3') != false) ==
                                          (char)(bVar29 - 0x33) < '\0') << 1) << 1) >> 1);
  uVar45 = uVar37 - 1 | 0x4ef9e65e;
  iVar21 = ((uint)CONCAT62((int6)((ulong)lVar35 >> 0x10),(ushort)lVar35 ^ (ushort)uVar58) &
           0xffffff7f) + 0xba65582b;
  bVar9 = (byte)iVar21;
  uVar20 = (char)uVar14 + iVar40 +
           (int)CONCAT71((int7)(CONCAT62(uVar42,sVar34 - uVar50) >> 8),
                         (char)(sVar34 - uVar50) << 1 | (uVar52 < 0x5d46dd1d || uVar2 < uVar1)) + 2;
  uVar54 = uVar54 ^ 0x25e5;
  bVar29 = (char)(bVar33 + 0x6d) >> 1;
  uVar37 = CONCAT71((int7)(CONCAT62((int6)(uVar45 >> 0x10),(short)uVar45 + -0x50e) >> 8),
                    (char)(1L << (uVar23 & 0x3f)));
  uVar12 = -((short)CONCAT71((int7)(uVar46 >> 8),bVar31 << (bVar25 & 7) | bVar31 >> 8 - (bVar25 & 7)
                            ) + sVar34);
  uVar46 = (ulong)((uint)CONCAT62((int6)(uVar48 >> 0x10),uVar50) & 0xffffc3f3);
  uVar45 = (long)CONCAT31((int3)((uint)iVar21 >> 8),
                          bVar9 ^ (bVar9 != (byte)uVar13) * (bVar9 ^ (byte)uVar13)) *
           (long)(int)uVar58;
  uVar22 = (uint)(uVar45 >> 0x20);
  uVar45 = uVar45 & 0xffffffff;
  lVar35 = uVar37 + uVar46;
  uVar48 = uVar37;
  if (CARRY8(uVar37,uVar46) || lVar35 == 0) {
    uVar48 = uVar23;
  }
  bVar9 = (byte)lVar35 & 7;
  uVar56 = uVar20 + (int)uVar58;
  uVar20 = (uint)!CARRY8((ulong)uVar20,uVar58);
  uVar51 = uVar22 - uVar56;
  if ((uVar22 < uVar56 || uVar51 < uVar20) || uVar51 == uVar20) {
    uVar12 = (ushort)uVar54;
  }
  uVar46 = (ulong)(uint)((int)lVar35 - iVar53) & 0xffffffffffffff0f;
  sVar19 = (sbyte)uVar46;
  uVar28 = (ushort)(uVar54 * 2);
  uVar15 = CONCAT62((uVar42 & 0xff000000) >> 0x18 | uVar42 >> 8 & 0xff00,
                    (ushort)((ushort)(byte)((ulong)lVar49 >> 0x38) |
                            (ushort)((ulong)lVar49 >> 0x28) & 0xff00) >> sVar19 |
                    uVar28 << 0x10 - sVar19);
  uVar20 = (uint)(uVar48 >> 1);
  uVar22 = (uint)(ushort)uVar45 * (uint)uVar12;
  lVar35 = CONCAT62((int6)(uVar45 >> 0x10),(short)uVar22);
  uVar51 = (uint)uVar15;
  iVar40 = iVar40 + -0x4a0784fd + (uint)(0x60e0526e < uVar20);
  lVar49 = CONCAT62((int6)(short)(uVar24 >> 0x10),
                    CONCAT11(bVar29 >> bVar9 | bVar29 << 8 - bVar9,bVar30 << 1)) + 0x24d0a6d1;
  uVar55 = (short)(ushort)uVar58 >> sVar19;
  bVar25 = (byte)(uVar22 >> 0x10);
  bVar30 = (byte)((ulong)lVar49 >> 8);
  bVar9 = bVar30 + bVar25;
  cVar26 = bVar9 + 1;
  uVar48 = (ulong)uVar55 << 0x19;
  uVar23 = (ulong)(CONCAT18((uVar22 & 0x100) != 0,lVar35) >> 0x13);
  uVar24 = uVar23 | lVar35 << 0x2e;
  uVar50 = (ushort)(uVar46 >> 0x10);
  bVar9 = (char)iVar40 + ((CARRY1(bVar30,bVar25) || 0xfe < bVar9) || cVar26 == '\0');
  sVar34 = (short)uVar12 >> 1;
  uVar22 = CONCAT22((short)uVar12 >> 0xf,sVar34);
  uVar45 = ((ulong)(((uVar20 & 0xff) >> sVar19 | uVar51 << 0x20 - sVar19) & 0xfbffffff) - 0x453f12c7
           ) + uVar54 * 0x10;
  uVar20 = (int)CONCAT61((int6)((ulong)lVar49 >> 0x10),cVar26) << 8 | 1 << (uVar55 & 0x1f);
  if ((bVar9 & 0x46) != 0) {
    uVar20 = uVar22;
  }
  uVar46 = uVar45 ^ (ulong)(uVar24 == uVar45) * (uVar45 ^ (ushort)(sVar43 * 0x800));
  lVar35 = (ulong)(uVar24 != uVar45) * (uVar24 ^ uVar46);
  iVar21 = (uVar36 << 1 | 1) + (int)uVar37 + -1;
  uVar36 = 0;
  if (uVar22 != 0) {
    for (; (uVar22 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
    }
  }
  bVar30 = (byte)(uVar48 >> 0x1d);
  iVar32 = CONCAT31((int3)(uVar20 >> 8),(char)uVar46) + -0x7a2c425b + (uint)(bVar30 & 1);
  iVar57 = (int)(uVar51 + iVar53 * 2) >> 1;
  iVar53 = iVar32 * 2;
  bVar25 = (byte)iVar53 | (uVar28 >> 0xb & 1) != 0;
  uVar20 = CONCAT31((int3)((uint)iVar40 >> 8),bVar9) >> 1;
  uVar45 = (ulong)uVar20;
  uVar24 = uVar45 | (ulong)(iVar32 < 0) << 0x3f;
  cVar26 = (char)sVar34;
  uVar7 = (undefined3)(uVar22 >> 8);
  uVar37 = (ulong)uVar36;
  if (SBORROW1(cVar26,-0x34) != false) {
    uVar37 = (ulong)CONCAT22((short)(uVar36 >> 0x10),sVar34);
    uVar46 = (ulong)uVar36;
  }
  uVar36 = (int)CONCAT11(-1 < (short)(uVar50 | 1),(byte)uVar23 ^ (byte)lVar35) * (int)(short)uVar20;
  uVar18 = (undefined6)(uVar46 >> 0x10);
  uVar27 = (undefined2)(uVar36 >> 0x10);
  bVar9 = (byte)uVar36;
  uVar12 = CONCAT11((char)(uVar36 >> 8) + '\t',bVar9);
  uVar23 = CONCAT62((int6)(short)((ulong)lVar35 >> 0x10),uVar12);
  if ((uint)uVar23 == uVar20) {
    uVar24 = (ulong)CONCAT31(uVar7,cVar26 + '4');
    uVar45 = uVar23;
  }
  uVar37 = (ulong)((ushort)((ushort)(((uint)(uVar24 >> (bVar9 & 0x3f)) |
                                     (uint)(uVar24 << 0x40 - (bVar9 & 0x3f))) << (bVar9 & 0x1f)) |
                           (ushort)((uint)CONCAT62(uVar18,uVar27) >> 0x20 - (bVar9 & 0x1f))) <
                  uVar12) << 0x20 | uVar37 & 0xffffffffffffff64;
  uVar24 = CONCAT62((int6)(uVar54 * 2 >> 0x10),(uVar28 ^ 0x800) << 1) | 0x20b9;
  bVar33 = (byte)((uint)iVar53 >> 8);
  uVar23 = CONCAT71((int7)(CONCAT62(uVar18,uVar27) >> 8),(char)(uVar36 >> 0x10)) &
           0xffffffffffffffc8;
  bVar29 = (byte)uVar45;
  bVar31 = bVar25 ^ (bVar29 == bVar25) * (bVar25 ^ (byte)uVar23);
  iVar40 = -(int)uVar23;
  return CONCAT71((int7)(uVar45 >> 8),bVar29 ^ (bVar29 != bVar25) * (bVar29 ^ bVar31)) +
         (ulong)CONCAT31((int3)(CONCAT22((short)((uint)iVar53 >> 0x10),
                                         CONCAT11(bVar33 << (bVar9 & 7) | bVar33 >> 8 - (bVar9 & 7),
                                                  bVar25)) >> 8),bVar31) +
         ((ulong)(CONCAT22(uVar50,(ushort)bVar9) | 0x10000) | 0x2e00) +
         (ulong)CONCAT22((short)((uint)iVar40 >> 0x10),(short)iVar40 >> 0x10) +
         CONCAT62((uint6)(ushort)((short)((ulong)-CONCAT71((uint7)(uVar48 >> 0x25),bVar30 >> 1) >>
                                         0x10) >> 6),0xddb9) +
         (ulong)((uVar36 & 0xffff ^ 0x84) >> 1 | iVar57 << 0x1f) * -0x49044844 +
         (ulong)CONCAT22((char)bVar9 >> 7,((short)(char)bVar9 << (bVar9 & 0x1f)) + 1) +
         (ulong)CONCAT31((uint3)((ulong)uVar15 >> 8) >> 0xc,(char)(uVar51 >> 0xc) << 2) +
         (ulong)CONCAT22((short)((uint)iVar21 >> 0x10),(short)iVar21 << 1) + uVar24 +
         (ulong)((CONCAT31(uVar7,cVar26 << (bVar9 & 0x1f)) << (bVar9 & 0x1f) |
                 (uint)uVar24 >> 0x20 - (bVar9 & 0x1f)) >> (bVar9 & 0x1f)) +
         (ulong)CONCAT31(uVar7,(char)(cVar26 + '4') >> (bVar9 & 0x1f)) * 2 +
         (ulong)((uint)(uVar37 << (bVar9 & 0x1f)) | (uint)(uVar37 >> 0x21 - (bVar9 & 0x1f))) +
         (ulong)(iVar57 + 0x5c20cf71) + 0x13c9982e76a;
}



// WARNING: Removing unreachable block (ram,0x00407089)
// WARNING: Removing unreachable block (ram,0x00407753)

long log_size_10_var_006(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined2 uVar6;
  undefined3 uVar7;
  byte bVar8;
  short sVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  uint7 uVar14;
  ulong uVar13;
  sbyte sVar15;
  byte bVar16;
  ushort uVar17;
  short sVar18;
  uint uVar19;
  ulong uVar20;
  char cVar21;
  byte bVar22;
  byte bVar23;
  short sVar24;
  byte bVar26;
  uint uVar25;
  undefined6 uVar27;
  byte bVar28;
  undefined uVar29;
  byte bVar34;
  ushort uVar30;
  int iVar31;
  byte bVar33;
  ulong uVar32;
  ushort uVar35;
  undefined7 uVar36;
  undefined2 uVar37;
  int iVar38;
  ulong uVar39;
  short sVar40;
  ushort uVar41;
  long lVar42;
  long lVar43;
  uint uVar44;
  char cVar45;
  int iVar46;
  uint uVar47;
  ulong uVar48;
  int iVar49;
  ulong uVar50;
  ushort uVar51;
  short sVar52;
  uint uVar53;
  ulong uVar54;
  ushort uVar55;
  uint uVar56;
  int iVar57;
  long lVar58;
  uint7 uVar59;
  byte bVar60;
  int iVar61;
  uint uVar62;
  ulong uVar63;
  bool bVar64;
  bool bVar65;
  
  auVar5 = (ZEXT116(0) << 0x40 | ZEXT816(0x447bee4c2634519f)) >> 0x19;
  for (lVar58 = 0; (0x56a497da9a5610e4U >> lVar58 & 1) == 0; lVar58 = lVar58 + 1) {
  }
  bVar8 = auVar5[1] >> 5;
  lVar42 = 0x64d7c2fec9d9f307 -
           CONCAT71((int7)(CONCAT62(0x3da1,((short)(uint7)((ulong)lVar58 >> 10) << 8 ^ 0xf300U |
                                           0xbf00) * 0x5714) >> 8),0xff);
  uVar56 = -(((uint)CONCAT71(auVar5._1_7_,bVar8) & 0xffff00ff) >> 1 | (uint)(bVar8 != 0) << 0x1f) -
           1;
  iVar31 = (((uint)CONCAT71((int7)(CONCAT62(((uint6)((ulong)lVar58 >> 0x12) ^ 0x51c5) & 0xffff,
                                            0xb062) >> 8),0xd2) ^ 0x62) >> 1) + 0xaf2d45c9;
  uVar39 = 0x3f;
  if ((long)iVar31 != 0) {
    for (; (ulong)(long)iVar31 >> uVar39 == 0; uVar39 = uVar39 - 1) {
    }
  }
  cVar45 = (char)((uint)iVar31 >> 8);
  bVar8 = cVar45 >> 7;
  uVar44 = (((uint)CONCAT62((int6)(short)((ulong)lVar42 >> 0x10),(short)lVar42) ^ 0x8000) +
            0x5caf4208 >> 1) * 8 + 0x4b4ce1e1;
  uVar25 = 0;
  if ((int)(char)bVar8 != 0) {
    for (; ((uint)(int)(char)bVar8 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
    }
  }
  uVar54 = (ulong)uVar25;
  if (0xda < (byte)uVar44) {
    uVar54 = 0x7086efc3;
  }
  uVar41 = (ushort)(uVar56 ^ 0x534a28c6);
  uVar55 = ((ushort)((ushort)uVar56 ^ 0x40da) >> 1 | (short)uVar54 << 0xf) ^ uVar41;
  bVar33 = (bVar8 & 0x1f) % 0x11;
  uVar13 = CONCAT71((int7)(CONCAT62((int6)(short)((uint)iVar31 >> 0x10),
                                    CONCAT11(cVar45 + '\x01',(char)iVar31)) >> 8),
                    (char)iVar31 >> 0xc);
  sVar24 = uVar41 + 0x7d95 + (short)uVar39 * 2;
  uVar50 = -(ulong)uVar44;
  uVar20 = 0xd52620c9df4340da;
  if ((POPCOUNT(uVar50 & 0xff) & 1U) == 0) {
    uVar20 = uVar39;
  }
  iVar31 = ((int)(CONCAT62((int6)(uVar54 >> 0x10),0x1820) >> 1) + -0x64427c7e) -
           (uint)((ulong)uVar44 != 0);
  auVar5 = ZEXT116((uVar39 & 1) != 0) << 0x40 |
           ZEXT416(CONCAT22((short)(uVar56 >> 0x10),uVar55 << bVar33 | uVar55 >> 0x11 - bVar33));
  iVar46 = ((uint)CONCAT71((int7)(uVar39 >> 8),(byte)uVar39 >> 1) | 0x80) * -0x71ae25f5;
  iVar38 = (int)uVar20;
  if ((int)uVar13 == iVar38) {
    iVar38 = -0x5def4e13;
  }
  else {
    uVar13 = uVar20 & 0xffffffff;
  }
  if ((int)uVar13 != -0x8000) {
    uVar13 = 0xffff8000;
  }
  lVar58 = (ulong)(uint3)((uint)iVar31 >> 8) * 0x100;
  iVar57 = (int)(short)uVar13 * (int)(short)lVar58;
  auVar2._2_6_ = (int6)(uVar13 >> 0x10);
  auVar2._0_2_ = (short)iVar57;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulong)((uVar56 ^ 0x534a28c6) << 1 | uVar56 >> 0x1f) | 0xc000000000000000;
  auVar2._8_8_ = CONCAT62((int6)((ulong)(CONCAT62(0xa33,CONCAT11((char)(sVar24 >> 9),(char)sVar24))
                                        + -0x78d2ae45) >> 0x10),(short)((uint)iVar57 >> 0x10)) &
                 0x3fffffffffffffff;
  uVar56 = SUB164(auVar2 % auVar1,0);
  bVar33 = (byte)iVar46;
  uVar56 = uVar56 ^ (uint)(SUB168(auVar2 / auVar1,0) == SUB168(auVar2 % auVar1,0)) * (uVar56 ^ 1) |
           0x54;
  iVar46 = CONCAT31((int3)((uint)iVar46 >> 8),bVar33 >> 1 | bVar33 << 7) << 1;
  uVar44 = uVar56 * -0x79bf0000 | uVar56 * 0xd968641 >> 0x10;
  bVar33 = ~(byte)((uint)iVar31 >> 8);
  uVar41 = 0;
  if ((short)(char)bVar33 != 0) {
    for (; ((ushort)(short)(char)bVar33 >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
    }
  }
  uVar39 = (ulong)CONCAT22((char)bVar33 >> 7,(short)(char)bVar33) ^ 64000;
  uVar25 = (uint)uVar39;
  iVar31 = (uint)(ushort)((ulong)lVar58 >> 0x10) * 0x10000 * uVar44;
  uVar37 = 0xfffd;
  uVar55 = (ushort)(iVar31 >> 0x1f);
  cVar21 = (char)(iVar31 >> 0x1f);
  cVar45 = -cVar21;
  if (cVar45 == -0x57 || 'W' < cVar21) {
    uVar25 = uVar44 + 0x7c56e8d6;
  }
  uVar6 = (undefined2)((uint)iVar38 >> 8);
  uVar44 = CONCAT22(uVar6,(ushort)((ushort)(iVar38 << 8) | (ushort)(byte)((uint)iVar38 >> 0x18)) >>
                          1);
  uVar47 = CONCAT22((short)((uint)iVar46 >> 0x10),
                    (short)((ushort)iVar46 | (ushort)((1U >> ((ushort)iVar38 & 0xf) & 1) != 0)) >> 8
                   ) | 0xc0000000;
  uVar54 = CONCAT44(CONCAT22(uVar55,uVar55 << 8 | uVar55 >> 8),iVar31) & 0x3fffffffffffffff;
  uVar20 = uVar54 / uVar47 & 0xffffffff;
  sVar18 = (short)uVar20;
  sVar24 = sVar18 + -0x6d21;
  uVar10 = CONCAT62((int6)(uVar20 >> 0x10),sVar24);
  if ((SBORROW2(sVar18,0x6d21) != false) != sVar24 < 0) {
    uVar37 = (undefined2)uVar25;
  }
  lVar42 = 0x3f;
  if (uVar44 != 0) {
    for (; uVar44 >> lVar42 == 0; lVar42 = lVar42 + -1) {
    }
  }
  uVar55 = CONCAT11(cVar45 + 'V',9);
  uVar44 = (uint)(uVar54 % (ulong)uVar47) ^ 1;
  lVar12 = (ulong)(uVar41 >> 1) << 0xc;
  sVar18 = (short)lVar12;
  sVar40 = sVar18 + 1;
  uVar54 = (ulong)CONCAT31((int3)(uVar47 >> 8),(char)((uint)iVar46 >> 8) << 1) << 9;
  uVar35 = uVar41 >> 2 | (short)lVar42 << 0xf;
  sVar24 = 0xf;
  uVar41 = (ushort)uVar44;
  if (uVar41 != 0) {
    for (; uVar41 >> sVar24 == 0; sVar24 = sVar24 + -1) {
    }
  }
  uVar63 = CONCAT62((int6)(short)(SUB162(auVar5 >> (bVar8 >> 2),2) |
                                 SUB162(auVar5 << 0x41 - (bVar8 >> 2),2)),sVar24);
  uVar32 = (ulong)CONCAT22((ushort)(uVar25 >> 0x19),(ushort)(uVar25 >> 9) >> 1);
  uVar32 = uVar32 & ~(1L << (uVar32 & 0x3f));
  iVar31 = (int)CONCAT62((int6)((ulong)lVar12 >> 0x10),sVar40);
  uVar41 = (ushort)((char)uVar32 < '\0');
  uVar30 = uVar55 + 0x82fe;
  uVar17 = uVar30 - uVar41;
  uVar20 = (ulong)(uVar55 < 0x7d02 || uVar30 < uVar41) << 0x20 |
           CONCAT71((int7)((ulong)uVar10 >> 8),sVar40 != 0 && SCARRY2(sVar18,1) == sVar40 < 0);
  uVar13 = (ulong)((uint)(uVar20 << 0xc) | (uint)(uVar20 >> 0x15));
  uVar47 = ~-iVar31;
  uVar25 = uVar44 * -0x106a8c05 ^ (uint)uVar35;
  uVar20 = (ulong)(uVar13 == uVar54) * (uVar54 ^ uVar25);
  uVar48 = uVar54 ^ uVar20;
  uVar11 = uVar13 ^ (ulong)(uVar13 != uVar54) * (uVar13 ^ uVar48);
  uVar19 = (uint)uVar63;
  uVar44 = (int)lVar42 + (int)CONCAT62(0xffffffffffff,uVar37) + 1;
  if (uVar54 < uVar13) {
    uVar44 = uVar19;
  }
  uVar54 = (ulong)(CONCAT22((short)(uVar50 >> 0x10),0x1fe) & 0xf3ceffff) & 0xffffffffbe6effff;
  lVar42 = CONCAT22(uVar6,0xffff) + uVar11;
  bVar64 = (uVar44 & 1) != 0;
  uVar39 = uVar39 + 0x3cba80fe00000100;
  if (bVar64) {
    uVar39 = uVar11;
  }
  bVar8 = ((byte)uVar17 & 0x1f) % 0x11;
  sVar24 = (short)uVar47;
  uVar41 = (ushort)(CONCAT12(bVar64,sVar24) >> bVar8) | sVar24 << 0x11 - bVar8;
  uVar37 = (undefined2)(uVar47 >> 0x10);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar63 | 0xc000000000000000;
  auVar3._8_4_ = uVar25;
  auVar3._0_8_ = uVar11;
  auVar3._12_4_ = 0;
  uVar25 = (int)uVar39 << 0x14 | (uint)uVar48 >> 0xc;
  iVar46 = uVar19 + 0xaa654822;
  sVar18 = (short)iVar46;
  sVar24 = (short)lVar42;
  iVar38 = CONCAT22((short)(((uVar56 + 0xb8 + (int)lVar58 | 1 << ((uint)uVar10 & 0x1f)) + 0xfa63eb43
                            ) * 0x9300000 >> 0x10),sVar18) + 1;
  bVar8 = SUB161(auVar3 / auVar5,0) | (byte)(uVar17 >> 8);
  lVar58 = CONCAT71(SUB167(auVar3 / auVar5,1),bVar8);
  uVar56 = (uint)uVar17;
  if (bVar8 != 0) {
    uVar56 = CONCAT22((short)((uint)iVar38 >> 0x10),
                      (ushort)iVar38 >> 0xd |
                      (short)CONCAT71((int7)(uVar32 >> 8),(char)uVar32 << 1 | iVar31 != 0) << 3);
  }
  bVar8 = (byte)uVar56;
  uVar50 = (ulong)(uint)((int)(uVar44 | 1) >> 0xc);
  uVar13 = uVar54 >> 0x13;
  uVar36 = (undefined7)(uVar48 >> 8);
  cVar45 = (char)uVar20 + bVar8;
  lVar43 = CONCAT71(uVar36,cVar45);
  lVar12 = lVar58 * lVar43;
  uVar20 = uVar50 << 1;
  uVar44 = CONCAT22(sVar24 >> 0xf,sVar24 << 1) | 1;
  uVar39 = 0x3f;
  if (uVar50 != 0) {
    for (; uVar20 >> uVar39 == 0; uVar39 = uVar39 - 1) {
    }
  }
  uVar39 = uVar39 & 0xfeffffffffffffff;
  uVar47 = (int)CONCAT62((int6)(uVar32 >> 0x10),
                         (ushort)((byte)(((char)(uVar32 >> 8) - (byte)lVar12) -
                                        ((byte)((ulong)lVar12 >> 8) < 0xcd)) >> 4)) <<
           (bVar8 & 0x1f) | uVar25 >> 0x20 - (bVar8 & 0x1f);
  uVar6 = (undefined2)(uVar47 >> 0x10);
  bVar34 = (byte)(uVar47 >> 8) >> 1 | (byte)((ushort)((ushort)((uVar47 & 1) != 0) << 0xf) >> 8);
  iVar31 = ((uint)CONCAT71((int7)((ulong)lVar12 >> 8),(byte)lVar12 >> 1) | 0x80) << 1;
  bVar33 = (byte)iVar31 | SUB161(SEXT816(lVar58) * SEXT816(lVar43),0xf) >> 7;
  if (!SBORROW2(sVar18,-0x3025)) {
    uVar25 = CONCAT22(uVar37,uVar41);
  }
  uVar41 = uVar41 + 0x16e3;
  sVar15 = (sbyte)(uVar56 & 0xffffbf0f);
  uVar19 = (uVar56 & 0xffffbf0f | 0x2d52679) - iVar46;
  lVar58 = (long)(int7)((ulong)(lVar42 >> (bVar8 & 0x3f)) >> 8) >> 9;
  uVar53 = ((uint)uVar20 | 0x9d7f) << 1 | (uint)lVar58 >> 0x1f;
  uVar55 = CONCAT11(bVar34,(char)((ushort)uVar47 >> 1) + '\r');
  uVar14 = (uint7)(int3)((uint)iVar31 >> 8);
  uVar56 = uVar19;
  if (bVar33 <= bVar34) {
    uVar56 = CONCAT22(uVar37,uVar41);
  }
  sVar24 = (short)uVar53 + 0xcb;
  uVar30 = 0x2655;
  if (bVar34 < bVar33) {
    uVar30 = uVar55;
  }
  if ((uVar14 & 1) != 0) {
    uVar55 = (ushort)(CONCAT12(bVar33 < bVar34,uVar30) >> 0xe) | uVar30 << 3;
  }
  iVar31 = uVar53 - 1;
  lVar42 = (long)(int)CONCAT71(uVar14,bVar33 ^ (bVar33 != bVar34) * (bVar33 ^ bVar34)) *
           (long)(int)uVar13;
  cVar21 = (char)((ulong)lVar42 >> 0x28);
  uVar30 = (ushort)CONCAT71(uVar36,cVar45 >> ((byte)uVar19 & 0x1f));
  if (0x48da829f < uVar44) {
    uVar30 = uVar41;
  }
  uVar50 = lVar58 + (ulong)CONCAT22(uVar6,uVar55) + (ulong)(uVar44 < 0x48da82a0);
  uVar47 = uVar56 >> 0xb | uVar56 << 0x15;
  uVar20 = (ulong)(uVar47 << 5);
  if (cVar21 != '\0') {
    uVar20 = uVar50;
  }
  uVar19 = CONCAT31((int3)((uint)iVar31 >> 8),(char)iVar31 + (char)uVar30 + (cVar21 != '\0'));
  uVar17 = (short)(uVar56 >> 0xb) + 0xbf89;
  lVar58 = (ulong)CONCAT22((short)(uVar47 >> 0x10),sVar24 * 2 | (ushort)(sVar24 < 0)) -
           (ulong)uVar19;
  uVar56 = CONCAT22(uVar6,uVar55 << ((byte)lVar58 & 0x1f)) >> 1;
  uVar53 = uVar56 | CONCAT22(uVar37,uVar41 >> 1) << 0x1f;
  uVar47 = (uint)uVar50;
  sVar24 = (short)uVar19;
  uVar37 = (undefined2)((uint)iVar31 >> 0x10);
  uVar51 = sVar24 << 1 | (ushort)(sVar24 < 0);
  iVar31 = CONCAT22(uVar37,uVar51);
  iVar46 = (uint)CONCAT11(0xec,(byte)lVar42 & uVar44 != 0x48da82a0) * iVar31;
  bVar8 = (byte)uVar13;
  uVar13 = (ulong)CONCAT31((int3)(uVar53 >> 8),
                           (char)uVar56 + -0x73 + (0x62 < bVar8 || 0xfe < (byte)(bVar8 + 0x9d)));
  iVar57 = (uVar47 << 10 | uVar47 >> 0x16) << 4;
  uVar20 = (long)((int)CONCAT71((int7)(CONCAT62((int6)(uVar20 >> 0x10),uVar30) >> 8),
                                -1 < (long)uVar39) + 0x55073a79) * 0x286d2712;
  iVar38 = CONCAT31((uint3)((uint)iVar31 >> 0x1f),(long)(int)uVar20 != uVar20);
  sVar24 = (short)((uint)iVar57 >> 0x10);
  sVar18 = (short)lVar58 + 0x1fcc;
  uVar41 = CONCAT11((char)((ushort)((uVar17 & 0xff) + 0xe53) >> 8),
                    SCARRY4(iVar38,0x64ebf2cd) != SCARRY4(iVar38 + 0x64ebf2cd,1));
  for (iVar31 = 0x1f; 0x953f8402U >> iVar31 == 0; iVar31 = iVar31 + -1) {
  }
  uVar11 = CONCAT71((int7)(CONCAT62((int6)((ulong)lVar58 >> 0x10),sVar18) >> 8),(char)sVar18) &
           0xffffffffffffff0f;
  uVar14 = (uint7)(((uVar54 >> 1) << 0x2e) >> 0x17);
  cVar45 = (char)((uint)iVar46 >> 8);
  bVar64 = (char)(cVar45 + '\x01') < '\0';
  uVar50 = (ulong)(uint)(int)(char)iVar46;
  uVar54 = uVar20 & 0xffffffff;
  if (SCARRY1(cVar45,'\x01') != bVar64) {
    uVar54 = uVar11;
  }
  uVar32 = uVar54 ^ (ulong)(uVar50 == uVar54) * (uVar54 ^ uVar13);
  uVar50 = uVar50 ^ (ulong)(uVar50 != uVar54) * (uVar50 ^ uVar32);
  lVar58 = CONCAT71(0x953f84,(char)uVar32 + '\x02');
  bVar8 = (byte)(uVar11 >> 1);
  uVar54 = uVar13 << 0x40 - (bVar8 & 0x3f);
  uVar56 = CONCAT22((short)((uint)iVar31 >> 0x10),0 << (bVar8 & 0x1f)) & 0xffff68e5;
  if ((POPCOUNT((char)uVar56) & 1U) == 0) {
    uVar13 = (ulong)CONCAT22((short)(uVar53 >> 0x10),uVar41);
  }
  lVar42 = (ulong)(uint)((int)(short)CONCAT71((int7)(uVar50 >> 8),(char)uVar50 + -0x49) +
                        (int)CONCAT71(uVar14,bVar64)) * lVar58;
  uVar30 = (ushort)uVar13 >> 1;
  uVar13 = CONCAT62((int6)(uVar13 >> 0x10),uVar30) | 0x8000;
  iVar31 = (int)lVar42;
  if ((int)(((uint)((ulong)lVar42 >> 0x21) | (iVar57 >> 0x1d) << 0x1f) - 1) < 0) {
    iVar31 = CONCAT22((short)((uint)(iVar38 + 0x64ebf2ce) >> 0x10),
                      ~((short)(iVar38 + 0x64ebf2ce) << (sbyte)uVar11 |
                       (ushort)(uVar20 & 0xffffffff) >> 0x10 - (sbyte)uVar11));
  }
  uVar20 = (ulong)(uVar56 >> 4 | 0xf0000000);
  iVar31 = iVar31 * (int)CONCAT62((int6)((ulong)CONCAT22((short)(uVar25 + 0x354b8e68 >> 0x10),uVar17
                                                        ) - 0x3a279ef7 >> 0x10),
                                  uVar41 << 9 | uVar41 >> 7);
  bVar33 = (byte)iVar31;
  bVar65 = 0x27 < bVar33 || 0xfe < (byte)(bVar33 - 0x28);
  cVar45 = bVar33 - 0x27;
  uVar54 = CONCAT22(uVar37,uVar51 | sVar24 >> 0xd) >> (bVar8 & 0x3f) | uVar54;
  if (cVar45 != '\0' && (SCARRY1(bVar33,-0x28) != SCARRY1(bVar33 - 0x28,'\x01')) == cVar45 < '\0') {
    uVar54 = uVar13;
  }
  iVar46 = 0;
  if ((uint)uVar54 != 0) {
    for (; ((uint)uVar54 >> iVar46 & 1) == 0; iVar46 = iVar46 + 1) {
    }
  }
  uVar54 = uVar54 << 4 | uVar54 >> 0x3c;
  iVar38 = (int)(short)uVar54;
  uVar47 = (uint)uVar54;
  uVar54 = (long)(int)uVar47 * -0x118fc552;
  bVar34 = (byte)(uVar54 & 0xffffffff) & 0x3f;
  cVar21 = (char)((uint)iVar31 >> 8);
  bVar26 = cVar21 >> 7;
  iVar61 = (int)uVar13;
  iVar49 = (int)CONCAT71(uVar14,bVar64 << 1) - iVar61;
  uVar56 = (uint)(CONCAT14(1,iVar38) >> 0x16);
  uVar44 = CONCAT22(sVar24 >> 0xf,
                    (short)CONCAT31((int3)(iVar57 >> 0x1f),(byte)(iVar57 >> 0x1d) >> 1) + 1);
  uVar41 = (ushort)((uint)iVar49 >> 0x10);
  uVar53 = (uint)CONCAT62(0x953f,(short)lVar58 << bVar65 |
                                 ((ushort)((short)(CONCAT62((int6)(uVar39 >> 0x10),
                                                            (((ushort)uVar39 >> sVar15 |
                                                             ((ushort)(uVar35 + 0x1dcf) >> 1) <<
                                                             0x10 - sVar15) - uVar55) + -1) >> 1) +
                                          0xbfU) >> (bVar8 & 0x1f)) >> 0x10 - bVar65) & 0xfffffffe;
  uVar25 = CONCAT22((short)((uint)iVar31 >> 0x10),CONCAT11(cVar21 * '\x02',cVar45));
  bVar8 = (byte)uVar56;
  uVar19 = CONCAT22(uVar41,(ushort)iVar49 >> 1) >> 1;
  uVar62 = iVar61 << (bVar8 & 0x1f) | uVar44 >> 0x20 - (bVar8 & 0x1f);
  uVar35 = CONCAT11(bVar26 << 1,
                    bVar26 | (POPCOUNT(((byte)((uVar54 & 0xffffffff) >> 8) >> 1) - 0xb) & 1U) != 0)
           * -0xf29;
  uVar47 = uVar47 | uVar44;
  uVar54 = (uVar20 << bVar34 |
           (ulong)(CONCAT18((long)(int)uVar54 != uVar54,uVar20) >> 0x41 - bVar34)) ^
           0x800000000000000;
  uVar37 = (undefined2)(uVar47 >> 0x10);
  uVar39 = ((ulong)uVar30 & 0xff) >> 1;
  uVar47 = CONCAT31((int3)(CONCAT22(uVar37,(short)uVar19 << 8) >> 8),
                    ((char)(uVar47 >> 8) - cVar45) + -1);
  uVar55 = (ushort)(iVar46 << 1) >> 1 | 0x8000;
  if ((uVar35 & 0xe73f) == 0 || (short)uVar35 < 0) {
    uVar55 = CONCAT11(0x23,bVar8);
  }
  uVar44 = uVar44 | uVar25;
  uVar13 = (ulong)CONCAT31((int3)(uVar25 >> 8),bVar33 + 0xb5);
  uVar25 = uVar19 << 0xd | (uint)(uVar41 >> 4);
  uVar50 = uVar54 >> 1;
  uVar20 = 0;
  if (uVar47 != 0) {
    for (; (uVar47 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
    }
  }
  sVar24 = uVar55 - (short)uVar39;
  sVar18 = sVar24 + -1;
  uVar19 = CONCAT22((short)(uVar62 >> 0x10),
                    (short)CONCAT31((int3)(uVar62 >> 8),(byte)uVar62 >> 7 | (byte)uVar62 << 2) +
                    0x7f6b) - ((CONCAT31((int3)(uVar53 >> 8),(char)uVar53 << 1) | 1) + 0xc6578433);
  uVar11 = uVar20 ^ (ulong)(uVar13 == uVar20) * (uVar20 ^ 0xbd1e75aeeeaf2bd3);
  uVar13 = uVar13 ^ (ulong)(uVar13 != uVar20) * (uVar13 ^ uVar11);
  bVar33 = (byte)uVar39;
  sVar52 = (short)uVar47 - CONCAT11(0x23,bVar8);
  uVar41 = (short)(uVar13 >> 0x10) >> 0xf;
  lVar42 = (((ulong)uVar44 << 0x22) >> 0x24 | (ulong)(uVar44 >> 0x1e) << 0x1c) -
           (ulong)CONCAT22(uVar37,sVar52);
  lVar58 = (ulong)(uVar56 | iVar38 << 0xb) << 1;
  uVar47 = (uint)CONCAT62((int6)(uVar11 >> 0x10),(short)uVar11 << 1) & (uint)lVar42;
  uVar44 = (uint)CONCAT62((uint6)uVar41,0xc126);
  iVar31 = uVar25 + uVar44;
  bVar8 = (bVar8 - 0x3f & 0x1f) % 0x11;
  uVar55 = (ushort)(bVar33 >> 1);
  sVar40 = (short)uVar13 + -0x578b;
  cVar45 = (char)iVar31 + (char)sVar18;
  uVar56 = CONCAT31((int3)((uint)iVar31 >> 8),cVar45);
  uVar39 = (ulong)(ushort)(uVar55 << bVar8 |
                          (ushort)(CONCAT12(CARRY4(uVar25,uVar44),uVar55) >> 0x11 - bVar8));
  if (cVar45 != '\0') {
    uVar39 = uVar50;
  }
  uVar44 = uVar19;
  if (!SBORROW2((short)uVar56,sVar40)) {
    uVar44 = uVar47 & 0xffff8294 ^ 1 << (uVar47 & 0x14);
  }
  sVar9 = (short)lVar58;
  uVar55 = sVar9 << 1;
  lVar58 = (uVar39 - CONCAT62((int6)((ulong)lVar58 >> 0x10),uVar55)) - (ulong)(sVar9 < 0);
  uVar20 = (ulong)CONCAT22(uVar41,uVar41) & 0xffffffffffff3fff;
  uVar25 = (uint)(uVar55 | 0xc000);
  uVar47 = CONCAT22((short)uVar20,(sVar24 + -0x6947) - (ushort)((uVar19 >> 7 & 1) != 0));
  sVar9 = (short)(uVar47 / uVar25);
  uVar27 = (undefined6)(uVar20 >> 0x10);
  uVar41 = (ushort)((byte)lVar42 < 0xe6);
  sVar24 = sVar9 + (short)uVar44;
  uVar20 = -(uVar39 & 0xffffffff);
  if ((uVar39 & 0xffffffff) != 0) {
    uVar56 = CONCAT22((short)((uint)iVar31 >> 0x10),(short)uVar20);
  }
  uVar53 = (uint)lVar58;
  iVar31 = (int)CONCAT62((int6)(uVar13 >> 0x10),sVar24 + uVar41) + uVar53;
  uVar39 = uVar20 & 0xffffffffffffff0f;
  bVar34 = (byte)uVar39;
  bVar34 = bVar34 ^ ((byte)iVar31 == bVar34) *
                    (bVar34 ^ ((byte)(sVar52 << bVar34) | (byte)((ushort)uVar39 >> 0x10 - bVar34)));
  lVar12 = (long)(ulong)(ushort)(((byte)(bVar33 - (char)((ushort)sVar18 >> 8)) & 0x490f) +
                                 (short)uVar50 + 1) >> 1;
  bVar8 = (byte)lVar12;
  bVar33 = -(char)((ulong)lVar12 >> 8);
  uVar19 = uVar53 + 0xbabcaf4c;
  sVar18 = 0xf;
  uVar55 = (ushort)lVar58;
  if (uVar55 != 0) {
    for (; uVar55 >> sVar18 == 0; sVar18 = sVar18 + -1) {
    }
  }
  iVar46 = (int)uVar44 >> (bVar34 & 0x1f);
  uVar41 = ((short)CONCAT71((uint7)(uint3)((uint)iVar31 >> 8),1) -
           (short)CONCAT71((int7)(CONCAT62(uVar27,(short)(uVar47 % uVar25)) >> 8),
                           ((SCARRY2(sVar9,(short)uVar44) == SCARRY2(sVar24,uVar41)) - (char)uVar20)
                           + -1)) - 1;
  bVar34 = bVar34 - (char)(uVar41 >> 8);
  if (uVar19 != CONCAT11(bVar33,bVar8)) {
    iVar46 = CONCAT22((short)((uint)iVar46 >> 0x10),sVar40);
  }
  iVar38 = (uint)uVar41 * (uVar56 & 0xffff);
  uVar41 = (ushort)((uint)iVar38 >> 0x10);
  uVar20 = ~(ulong)CONCAT22((short)((uint)iVar31 >> 0x10),(short)iVar38);
  uVar13 = (ulong)~CONCAT22((short)((uint)iVar46 >> 0x10),
                            (ushort)iVar46 >> 0xf | (ushort)iVar46 << 1);
  uVar50 = (ulong)CONCAT31((int3)(uVar19 >> 8),~(byte)uVar19) - 0x6ecb58e3 ^
           1L << (((ulong)uVar41 & 0x7e) >> 1);
  bVar64 = CONCAT71((int7)(CONCAT62((int6)(uVar20 >> 0x10),(ushort)(byte)uVar20 * (ushort)bVar8) >>
                          8),bVar8) == uVar13;
  uVar13 = uVar13 ^ (ulong)bVar64 * (uVar13 ^ CONCAT62(uVar27,uVar41) >> 1);
  iVar57 = (int)uVar13;
  bVar8 = bVar8 ^ !bVar64 * (bVar8 ^ (byte)uVar13);
  lVar58 = (ulong)bVar33 << 8;
  uVar44 = (int)CONCAT71((int7)(uVar39 >> 8),(char)bVar34 >> 1) >> ((char)bVar34 >> 1 & 0x1fU);
  uVar39 = CONCAT62(uVar27,CONCAT11((char)((uint)iVar38 >> 0x18),
                                    (char)((uint)iVar38 >> 0x10) + (char)((uVar53 >> 5) << 1))) &
           0xffffffffffff75ff;
  bVar33 = (byte)uVar44 & 0xf;
  uVar25 = ~(uint)CONCAT62((int6)(uVar39 >> 0x10),
                           (short)CONCAT71((int7)(uVar39 >> 8),bVar8) << bVar33 |
                           ((ushort)((short)CONCAT71((int7)((ulong)lVar42 >> 8),(byte)lVar42 + 0x1a)
                                    << 1) >> (bVar34 & 0x1f) & 0xefff) >> 0x10 - bVar33);
  bVar33 = (byte)(uVar44 >> 0x11);
  uVar20 = CONCAT62((char)uVar56 >> 7,((short)(char)uVar56 | 0x4000U) ^ 1 << ((ushort)uVar50 & 0xf))
           + 0x397c41c8;
  uVar41 = (ushort)(CONCAT62((uint6)(uVar54 >> 0x11),sVar18) >> (bVar34 & 0x3f));
  uVar44 = (uint)uVar50;
  iVar46 = uVar25 + uVar44;
  bVar34 = bVar33 - 1;
  bVar64 = (POPCOUNT((ushort)bVar34) & 1U) != 0;
  iVar31 = ((uint)CONCAT71(0x711b02,!SCARRY1(bVar8,(char)uVar39)) & 0xffff) + 0x6b83909a;
  iVar38 = ((uint)(ushort)((short)lVar58 >> 7) << (bVar33 & 0x3f)) + -0x6db0dc5;
  if (-1 < iVar38) {
    uVar20 = (ulong)CONCAT22((short)(uVar56 >> 0x10),(short)uVar56 * -0x3e0d);
  }
  sVar24 = CONCAT11((char)((uint)iVar46 >> 8) + (char)iVar38,
                    (byte)iVar46 >> 1 | CARRY4(uVar25,uVar44) << 7);
  if (-1 < (short)((short)iVar31 -
                  (short)CONCAT31((int3)((uVar53 ^ 0xa848bf4a) >> 8),
                                  (byte)((char)((byte)(uVar53 ^ 0xa848bf4a) >> 1 | 0x80) >> 1) >>
                                  (bVar34 & 0x1f)))) {
    iVar57 = (int)CONCAT62((int6)(uVar13 >> 0x10),
                           uVar41 << (bVar33 & 0xf) | uVar41 >> 0x10 - (bVar33 & 0xf));
  }
  sVar18 = sVar24 * -0x5496;
  uVar39 = (ulong)(iVar57 + 0x9e6788afU ^ 0xdd4a);
  uVar54 = uVar39 & 0xffffffffffff4a3a;
  uVar41 = (ushort)(byte)(bVar34 >> 3 | bVar34 * ' ' | 0xc0);
  bVar8 = (byte)(0x1e5f / uVar41);
  bVar33 = (byte)(0x1e5f % uVar41);
  lVar42 = CONCAT62(0xfffffffff840,CONCAT11(bVar33,bVar8));
  if ((POPCOUNT((uint)uVar20 & (uint)lVar42 & 0xff) & 1U) == 0) {
    sVar24 = sVar18;
  }
  bVar34 = bVar34 >> 3 | bVar34 * ' ' & 0x3f;
  uVar13 = (ulong)(CONCAT22((short)((uint)iVar46 >> 0x10),sVar24) >> bVar34) |
           lVar42 << 0x40 - bVar34;
  iVar46 = (uint)uVar20 << 2;
  uVar41 = (ushort)iVar46;
  uVar36 = (undefined7)(uVar13 >> 8);
  bVar34 = (byte)uVar54;
  bVar26 = -(char)(uVar54 >> 8);
  uVar54 = CONCAT62((int6)(uVar54 >> 0x10),CONCAT11(bVar26,bVar34));
  iVar38 = CONCAT22(0x14c1,(ushort)CONCAT31(0x14c172,bVar64) >> 1);
  iVar57 = 0;
  if (!bVar64) {
    iVar57 = iVar38;
  }
  sVar24 = (short)((char)bVar33 >> 7);
  uVar11 = (ulong)(iVar38 << 0xf | (uint)uVar54 >> 0x11);
  uVar55 = uVar41 >> 0xb | 0xa0;
  uVar35 = (ushort)(iVar31 >> 0x15);
  uVar50 = (ulong)(long)sVar18 >> (bVar33 & 0x3f) | (long)sVar18 << 0x40 - (bVar33 & 0x3f);
  uVar39 = (uVar39 & 0x4a3a) << (bVar33 & 0x3f) | uVar54 >> 0x40 - (bVar33 & 0x3f);
  uVar56 = (uint)((long)uVar20 >> (bVar33 & 0x3f)) & 0xffffff00;
  if (-1 < (char)(bVar8 | bVar26)) {
    uVar56 = CONCAT22((short)((uint)((int)lVar58 << 0xf) >> 0x10),(short)(char)bVar33);
  }
  uVar30 = uVar55 | 1 << (bVar34 & 0xf);
  bVar33 = (bVar33 + (char)uVar30 & 3) << 2 | (byte)(uVar39 >> 8) >> 6;
  uVar25 = (uint)CONCAT62(0xffffffff928b,uVar30) & 0xffffffdf;
  uVar30 = (short)CONCAT31((int3)(CONCAT22(sVar24,CONCAT11(1,bVar8)) >> 8),bVar8 | bVar26) << bVar33
           | uVar35 >> 0x10 - bVar33;
  uVar30 = uVar30 << 1 | (ushort)((short)uVar30 < 0);
  cVar45 = (char)uVar30;
  uVar30 = (ushort)CONCAT31((int3)(CONCAT22(sVar24,uVar30) >> 8),
                            (byte)(CONCAT11(bVar26 < bVar34,cVar45) >> 7) | cVar45 << 2);
  uVar54 = (ulong)CONCAT22(sVar24,(short)((CONCAT22(CONCAT11((byte)(bVar26 - bVar34) >> 1,bVar34),
                                                    uVar30) & 0x3fffffff | 0xc000) /
                                         (uint)(uVar30 | 0xc000)));
  lVar58 = ((uVar54 ^ (ulong)(uVar54 != uVar11) *
                      (uVar54 ^ uVar11 ^ (ulong)(uVar54 == uVar11) * (uVar11 ^ uVar50))) &
           0xffffffff) * (ulong)uVar25;
  uVar14 = (uint7)(uVar50 >> 8);
  lVar43 = CONCAT71(uVar14,(byte)uVar50 + (char)uVar35);
  cVar45 = (char)((ushort)(0xcc5 << bVar33 | 0xcc5U >> 0x10 - bVar33) >> 1);
  uVar44 = CONCAT31((int3)((ulong)lVar58 >> 0x28),cVar45);
  lVar12 = (ulong)((int)lVar58 + 0x1858ab2a) << 1;
  iVar31 = CONCAT31((uint3)(uVar56 >> 9) |
                    (uint3)((uint)((int)CONCAT71(uVar36,(char)uVar13 + '\x01') << 0x1f) >> 8),
                    (char)(CONCAT11((uVar55 >> (bVar34 & 0xf) & 1) != 0,(char)(uVar56 >> 1)) >> 1))
           + 0x833ea67;
  lVar42 = CONCAT62((uint6)(ushort)(uVar25 >> 0x10),0x9436) << 3;
  bVar8 = (byte)((uint)iVar57 >> 0x18) &
          ~(byte)((uint)(1 << ((byte)(cVar45 + (char)((ulong)lVar58 >> 0x20)) & 0x1f)) >> 0x18);
  if (SBORROW4((int)lVar43,-0x695efcfb)) {
    bVar8 = 0xee;
  }
  uVar55 = (ushort)iVar31;
  bVar34 = (byte)((uVar44 >> 2) >> 8) >> 3 | (byte)(uVar55 << 5);
  auVar5 = ZEXT116(0) << 0x40 | ZEXT416(0xad806464);
  uVar59 = SUB167(auVar5 << 0x1e,1) | SUB167(auVar5 >> 0x23,1);
  uVar56 = (uint)CONCAT71(uVar36,(char)uVar39 + '!') >> 1;
  uVar44 = CONCAT22((ushort)((ulong)lVar58 >> 0x32) | (ushort)((uVar44 << 0x1e) >> 0x10),
                    (ushort)bVar34);
  bVar33 = (byte)lVar12 & (byte)uVar50;
  uVar54 = CONCAT71((int7)((ulong)lVar12 >> 8),bVar33);
  iVar38 = 0x1f;
  uVar25 = (uint)uVar54;
  if (uVar25 != 0) {
    for (; uVar25 >> iVar38 == 0; iVar38 = iVar38 + -1) {
    }
  }
  uVar20 = (ulong)uVar56 | 0xe814;
  bVar64 = -1 < (short)((ushort)uVar56 | 0xe814);
  uVar39 = CONCAT62((int6)(uVar39 >> 0x10),(ushort)uVar39 >> 1);
  if (bVar64) {
    uVar39 = uVar54;
  }
  bVar22 = (byte)iVar38;
  bVar26 = (byte)((ulong)lVar42 >> 8) >> 1;
  uVar27 = (undefined6)((ulong)lVar42 >> 0x10);
  bVar34 = (byte)((ulong)lVar12 >> 8) | bVar34;
  uVar54 = CONCAT62((int6)((ulong)lVar12 >> 0x10),CONCAT11(bVar34,bVar33));
  uVar56 = CONCAT22((short)((uint)iVar31 >> 0x10),(short)(uVar55 >> 0xd | uVar55 << 3) >> 0x10);
  bVar28 = (byte)lVar42 >> (bVar22 & 0x1f) ^ bVar22;
  uVar13 = CONCAT62((int6)(uVar59 >> 8),
                    (ushort)CONCAT71(uVar59,(char)bVar34 < '\0') >> (bVar22 & 0x1f));
  uVar7 = (undefined3)(CONCAT22((short)((uint)iVar38 >> 0x10),bVar22 + 1) >> 8);
  uVar50 = uVar13 ^ (ulong)(uVar54 == uVar13) *
                    (uVar13 ^ ((ulong)(CONCAT31((int3)(CONCAT22((short)((uint)iVar46 >> 0x10),
                                                                uVar41 << 1) >> 8),bVar64) >> 1) |
                              (ulong)bVar64 << 0x3f));
  uVar54 = uVar54 ^ (ulong)(uVar54 != uVar13) * (uVar54 ^ uVar50);
  bVar34 = (byte)(bVar22 + 1);
  bVar33 = bVar34 & 0x1f;
  uVar25 = (uint)uVar50;
  uVar25 = uVar25 << bVar33 | uVar25 >> 0x20 - bVar33;
  auVar4._2_6_ = (int6)(uVar54 >> 0x10);
  auVar4._0_2_ = (ushort)(byte)uVar54 * (ushort)bVar26;
  lVar58 = 0;
  if (uVar20 != 0) {
    for (; (uVar20 >> lVar58 & 1) == 0; lVar58 = lVar58 + 1) {
    }
  }
  if (uVar20 == 0) {
    uVar39 = lVar43 << 0x15 | (ulong)(uVar14 >> 0x23);
  }
  bVar34 = bVar34 << 1;
  uVar19 = CONCAT31(uVar7,bVar34) | 0x400000;
  iVar46 = (int)lVar58 + uVar19;
  uVar47 = uVar56 * 9 + 0x1a;
  uVar25 = (uint)(ushort)((ushort)(uVar25 >> 8) & 0xff | (ushort)((uVar25 << 0x18) >> 0x10)) << 0x10
  ;
  uVar53 = (int)(char)uVar20 - 1;
  auVar4._8_8_ = 0;
  uVar47 = (uint)CONCAT62((int6)(uint6)(ushort)(uVar47 >> 0x10) >> 1,
                          (short)((long)(ulong)uVar47 >> 1) << (bVar34 & 0x1f));
  uVar47 = uVar47 >> (bVar34 & 0x1f) | uVar47 << 0x20 - (bVar34 & 0x1f);
  uVar39 = uVar39 & SUB168(auVar4 * ZEXT416(uVar44 << 0x17 | uVar44 >> 9),8);
  bVar33 = (byte)uVar39;
  uVar44 = uVar25 >> (bVar34 & 0x1f) | uVar25 << 0x20 - (bVar34 & 0x1f);
  iVar31 = (uVar53 >> (bVar34 & 0x3f) | uVar53 << 0x40 - (bVar34 & 0x3f)) + 0x98030a3e + uVar44 * 8;
  uVar37 = (undefined2)((uint)iVar46 >> 0x10);
  uVar41 = (ushort)iVar46 >> 0xf;
  uVar54 = (ulong)CONCAT22(uVar37,uVar41);
  uVar20 = (long)((int)CONCAT71((int7)(CONCAT62(uVar27,CONCAT11(bVar26,(byte)lVar42)) >> 8),bVar28)
                 * -0x345f254d) * (long)(int)uVar19;
  uVar44 = uVar44 & 0xa62c4f49;
  uVar13 = uVar20 & 0xffffffff;
  if ((int)uVar44 < 0) {
    uVar13 = uVar54;
  }
  lVar58 = CONCAT62(uVar27,CONCAT11(uVar44 != 0,bVar28));
  uVar54 = uVar56 + uVar54;
  sVar24 = (short)iVar31 + (ushort)bVar26;
  uVar6 = (undefined2)(uVar20 >> 0x30);
  bVar22 = (byte)(uVar20 >> 0x20);
  bVar22 = bVar22 << (bVar34 & 7) | bVar22 >> 8 - (bVar34 & 7);
  uVar55 = (ushort)uVar13 >> 1;
  uVar13 = CONCAT62((int6)(uVar13 >> 0x10),uVar55 | (ushort)((uVar13 & 1) != 0) << 0xf);
  cVar45 = (char)((char)(uVar20 >> 0x28) << 1 | 1U) >> 0x15;
  uVar50 = (ulong)CONCAT22(uVar6,CONCAT11(cVar45,bVar22));
  uVar20 = (ulong)(CONCAT31(uVar7,bVar34) | 0x400000) & 0xffffffffffffff0f;
  sVar15 = (sbyte)uVar20;
  if (SBORROW8(uVar50,0x4fd5d62c)) {
    uVar20 = uVar54 & 0xffffffff;
  }
  uVar35 = (short)uVar44 - 1;
  if (0x4fd5d62b < uVar50) {
    uVar35 = (ushort)uVar47 | 1;
  }
  uVar44 = CONCAT22((short)(uVar44 >> 0x10),uVar35);
  uVar56 = (int)lVar58 + (int)uVar13 * 8;
  bVar28 = (char)(byte)uVar20 >> ((byte)uVar20 & 0x1f);
  lVar58 = lVar58 + -0x7d39fdf7;
  bVar34 = (byte)uVar55;
  bVar23 = bVar22 ^ (bVar34 == bVar22) * (bVar22 ^ (byte)sVar24);
  bVar60 = (byte)uVar56;
  uVar27 = (undefined6)((ulong)lVar58 >> 0x10);
  uVar29 = (undefined)lVar58;
  uVar13 = uVar13 >> 0xb;
  uVar55 = (ushort)CONCAT71((int7)(uVar20 >> 8),bVar28);
  uVar55 = uVar55 << (bVar28 & 0xf) | uVar55 >> 0x10 - (bVar28 & 0xf);
  uVar25 = (uVar44 | (uint)(1L << ((ulong)uVar56 & 0x3f))) - 1;
  bVar16 = (byte)uVar55;
  sVar18 = 0xf;
  uVar35 = (ushort)uVar25;
  if (uVar35 != 0) {
    for (; uVar35 >> sVar18 == 0; sVar18 = sVar18 + -1) {
    }
  }
  uVar50 = ~(ulong)CONCAT22((short)(((CONCAT22(uVar37,uVar41 >> sVar15 |
                                                      (short)uVar54 << 0x10 - sVar15) | 0x2eb497c2)
                                    << 0xf) >> 0x10),sVar18);
  uVar54 = 0;
  if (-1 < (long)(uVar50 & CONCAT62(uVar27,CONCAT11(cVar45,uVar29)))) {
    uVar54 = (ulong)bVar26;
  }
  uVar41 = CONCAT11(cVar45 + (char)(uVar55 >> 8),bVar23 - (char)uVar13) >> (bVar16 & 0x1f);
  lVar58 = CONCAT62((int6)(uVar20 >> 0x10),(short)uVar13 << 0xf);
  return (ulong)CONCAT31((int3)(uVar47 >> 8),(uVar44 >> ((ulong)uVar56 & 0x3f) & 1) != 0) +
         CONCAT62(uVar27,CONCAT11(cVar45 + (char)(uVar41 >> 8),uVar29)) + lVar58 +
         (ulong)CONCAT22(uVar6,uVar41) + (uVar20 >> 8 & 0xff) +
         (ulong)((uint)((ushort)((ushort)uVar54 << (bVar16 & 0xf) |
                                (ushort)uVar54 >> 0x10 - (bVar16 & 0xf)) >> 1) | (uint)lVar58) +
         (ulong)bVar26 + uVar13 + (ulong)(byte)(bVar8 << 1) + uVar50 +
         (ulong)(ushort)(sVar24 >> (bVar28 & 0x1f)) +
         (ulong)CONCAT22((short)((uint)iVar31 >> 0x10),sVar24 * 2) + (ulong)uVar25 +
         (ulong)(CONCAT31((int3)(uVar56 >> 8),
                          bVar60 ^ ((byte)(bVar34 ^ (bVar34 != bVar22) * (bVar34 ^ bVar23)) ==
                                   bVar60) * (bVar60 ^ bVar26)) >> (bVar16 & 0x3f)) +
         CONCAT71((int7)(uVar39 >> 8),bVar33 << 6 | bVar33 >> 2) + -0x6345b3981;
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
// WARNING: Removing unreachable block (ram,0x00409de7)
// WARNING: Removing unreachable block (ram,0x00409dcc)
// WARNING: Removing unreachable block (ram,0x00409f83)
// WARNING: Removing unreachable block (ram,0x0040a3c5)
// WARNING: Removing unreachable block (ram,0x0040a4fb)
// WARNING: Removing unreachable block (ram,0x0040aab4)

long log_size_10_var_009(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined2 uVar3;
  uint3 uVar4;
  uint6 uVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  undefined7 uVar11;
  ulong uVar9;
  undefined8 uVar10;
  undefined6 uVar12;
  sbyte sVar13;
  byte bVar14;
  ushort uVar15;
  byte bVar17;
  ulong uVar16;
  ushort uVar18;
  byte bVar20;
  byte bVar21;
  ulong uVar19;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  uint6 uVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  ushort uVar30;
  short sVar31;
  undefined2 uVar32;
  ulong uVar33;
  long lVar34;
  uint7 uVar36;
  uint7 uVar37;
  ulong uVar35;
  byte bVar38;
  short sVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  undefined6 uVar45;
  uint uVar46;
  ushort uVar47;
  int iVar48;
  byte bVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  ushort uVar53;
  ushort uVar54;
  uint uVar55;
  ushort uVar56;
  ulong uVar57;
  ulong uVar58;
  short sVar59;
  ushort uVar60;
  uint uVar61;
  byte bVar62;
  ushort uVar63;
  uint uVar64;
  uint uVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  byte bVar39;
  
  for (sVar40 = 0; (0x1989U >> sVar40 & 1) == 0; sVar40 = sVar40 + 1) {
  }
  uVar19 = CONCAT62(0x5d0feb477bfc,sVar40) ^ 0xde5d376bdad4b765;
  for (iVar48 = 0; (0x9978202aU >> iVar48 & 1) == 0; iVar48 = iVar48 + 1) {
  }
  uVar57 = 0x60e8c1e1;
  bVar20 = (byte)uVar19;
  bVar49 = (char)iVar48 - 0xd;
  uVar65 = CONCAT31((int3)((uint)iVar48 >> 8),bVar49);
  uVar19 = CONCAT71((int7)(CONCAT62((int6)(uVar19 >> 0x10),
                                    CONCAT11((char)(uVar19 >> 8) + 'V',bVar20)) >> 8),bVar20 + 0x16)
           & 0x53e0289d;
  if (uVar19 == 0) {
    uVar57 = 0x60e81097;
  }
  uVar30 = 0x710b - (0xbdcc636d9978000a <
                    CONCAT62(0x80161aed310b,(ushort)(CONCAT12(0xe9 < bVar20,0xf1b) >> 0xb) | 0xc6c0)
                    );
  lVar24 = 0x3f;
  if (uVar65 != 0) {
    for (; uVar65 >> lVar24 == 0; lVar24 = lVar24 + -1) {
    }
  }
  uVar35 = uVar57 >> 9;
  uVar15 = (ushort)((uVar57 << 0x18) >> 0x10) | (ushort)(uVar35 >> 0x10);
  auVar2 = (ZEXT116(uVar65 < 0x133b0b8a) << 0x40 | ZEXT816(0xde5d376bdad4b765)) >> 0xb;
  cVar7 = ((byte)(((uint)(ushort)uVar19 << 0x10 | (1 << (uVar30 & 0x1f) ^ 1U) & 0xffff) / 0xdc1a) ^
          (byte)(1 << (bVar49 & 0x1f))) * (char)uVar35;
  uVar53 = (ushort)CONCAT71(0x46eddd486bcd2,bVar20) ^ auVar2._0_2_;
  sVar40 = (short)(char)(cVar7 * cVar7) + (short)(uVar65 + 0xecc4f476);
  uVar18 = sVar40 >> 0xf | 0xab00;
  uVar19 = (ulong)CONCAT22((short)(uVar65 + 0xecc4f476 >> 0x10),0x98fb);
  uVar50 = CONCAT22((short)((uint)iVar48 >> 0x10),(ushort)auVar2[0]) * 0x800 + 0x6a42a24d;
  uVar57 = uVar19 << 0xd;
  uVar65 = CONCAT22(0xaa8f,(short)CONCAT31((int3)(CONCAT22(0xaa8f,uVar30) >> 8),
                                           (byte)(CONCAT11((byte)sVar40 < 0x73,(char)uVar30) >> 2) |
                                           (char)uVar30 << 7) >> 0x13) >> 0xb;
  sVar40 = ((ushort)uVar35 >> 0xd | uVar53 << 3) + 0xb93e +
           (ushort)(0xecc9 < uVar18 || 0xfffe < (ushort)(uVar18 + 0x1336));
  lVar34 = 0x3f;
  if (uVar19 != 0) {
    for (; uVar57 >> lVar34 == 0; lVar34 = lVar34 + -1) {
    }
  }
  uVar30 = uVar18 + 0x1337 | 0x38fa;
  sVar31 = 0xf;
  if (uVar30 != 0) {
    for (; uVar30 >> sVar31 == 0; sVar31 = sVar31 + -1) {
    }
  }
  cVar7 = (char)uVar65;
  uVar19 = (ulong)(uVar65 | 0xf9a00000) & 0xffffffffffffff0f;
  sVar13 = (sbyte)uVar19;
  uVar30 = (ushort)uVar57;
  uVar12 = (undefined6)(uVar57 >> 0x10);
  uVar56 = uVar30 >> sVar13 | uVar30 << 0x10 - sVar13;
  sVar59 = (short)CONCAT31(0xb6,-5 - cVar7);
  uVar55 = CONCAT22(uVar30,sVar59 << 1) | 1;
  uVar46 = (int)CONCAT62(0xa92b,1 << (uVar53 & 0xf) | 0x4000) + 1U & uVar55;
  iVar48 = (uint)(ushort)CONCAT71(0x39cf98,cVar7) * 0x98fe;
  uVar19 = (ulong)(uint)(uint7)(uVar19 >> 9) & ~(1L << ((ulong)(uVar53 ^ 0x4000) & 0x3f));
  uVar32 = (undefined2)(uVar46 >> 0x10);
  uVar27 = CONCAT22((short)((uint)((int)CONCAT62((int6)((ulong)lVar24 >> 0x10),0x40) << 1) >> 0x10),
                    0xc524) - uVar50 | 0x8354477b;
  sVar31 = (short)CONCAT71((int7)(CONCAT62(uVar12,uVar56) >> 8),(char)uVar56 + (char)sVar31);
  lVar41 = (ulong)(CONCAT22(uVar15,(ushort)CONCAT31((int3)(CONCAT22(uVar15,sVar40) >> 8),
                                                    ~(byte)sVar40) >> 1) | 0x8000) - (ulong)uVar50;
  uVar63 = (short)uVar27 + -0x504a + (ushort)(uVar19 >> 0x16 != 0);
  uVar47 = (ushort)(sVar31 << 0xf | 0x4c7fU) >> 1 | 0x8000;
  uVar65 = uVar50 + CONCAT22(0x39cf,uVar47);
  lVar24 = (ulong)((uint)(CONCAT14(sVar59 < 0,0x3ef) >> 0x1d) | 0x3ef0) << 0xd;
  lVar34 = (ulong)uVar55 << 1;
  uVar10 = CONCAT71((int7)((ulong)lVar24 >> 8),-(byte)uVar19);
  uVar61 = (uint)uVar10;
  bVar20 = (byte)uVar19 & 0xf;
  uVar55 = CONCAT22(0x39cf,uVar47 << bVar20 | uVar47 >> 0x10 - bVar20);
  uVar54 = ((uVar53 ^ 0x4000) >> 5 | uVar63 * 0x800) + 0xea9;
  uVar15 = (ushort)uVar19 ^ 0x1000;
  uVar53 = (ushort)uVar65;
  uVar18 = (ushort)uVar10;
  bVar20 = (byte)lVar41;
  bVar49 = bVar20 & 1;
  uVar19 = CONCAT71((int7)((ulong)lVar41 >> 8),bVar20 >> 1 | bVar49 << 7);
  uVar60 = (ushort)lVar34;
  uVar30 = uVar60 + 0xda0;
  uVar57 = CONCAT62((int6)((ulong)lVar34 >> 0x10),uVar30 - bVar49);
  sVar40 = 0xf;
  if (uVar63 != 0) {
    for (; uVar63 >> sVar40 == 0; sVar40 = sVar40 + -1) {
    }
  }
  uVar64 = CONCAT22((short)(uVar27 >> 0x10),sVar40);
  uVar51 = 0x1f;
  if (uVar64 != 0) {
    for (; uVar64 >> uVar51 == 0; uVar51 = uVar51 - 1) {
    }
  }
  uVar56 = (short)(char)uVar46 | (uVar56 & 0xff) * 2 - 0x38d;
  lVar34 = (ulong)uVar55 + (ulong)CONCAT22(uVar32,uVar56) * 8;
  uVar58 = (ulong)(uVar55 << 0x1a);
  bVar6 = (byte)((short)uVar15 >> 9);
  bVar17 = (byte)((ulong)(ushort)((uint)iVar48 >> 0x10) - 0x481cfa8a >> 8);
  bVar20 = (byte)((short)uVar15 >> 1);
  cVar7 = (char)uVar56;
  uVar55 = (int)(uint)uVar54 >> (bVar20 & 0x1f);
  uVar33 = -(ulong)uVar51;
  uVar35 = CONCAT62(0x39cf,CONCAT11(uVar65 == 0 ||
                                    (SCARRY4(uVar50,CONCAT22(0x39cf,uVar47)) != SCARRY4(uVar65,0))
                                    != (int)uVar65 < 0,(char)iVar48)) * (uVar19 & 0xffffffff);
  lVar41 = uVar58 - 0x39679c89;
  uVar15 = (short)lVar41 - 1;
  bVar20 = bVar20 & 7;
  bVar21 = (byte)(uVar35 >> 0x20);
  sVar40 = (short)(uVar35 & 0xffffffff);
  uVar43 = CONCAT62((int6)((uVar35 & 0xffffffff) >> 0x10),sVar40 - uVar53);
  if (sVar40 < (short)uVar53) {
    uVar43 = uVar57;
  }
  uVar56 = (ushort)lVar34;
  uVar47 = uVar56 & 0xf;
  uVar63 = uVar15 & ~(1 << uVar47);
  uVar52 = ((ulong)uVar65 - lVar34) - (ulong)((uVar15 >> uVar47 & 1) != 0);
  sVar40 = SCARRY1(bVar6,bVar17) + uVar63;
  uVar15 = sVar40 + 1;
  uVar65 = (int)CONCAT62(uVar12,sVar31 + uVar18 + (ushort)((uVar18 >> (uVar53 & 0xf) & 1) != 0)) +
           (int)CONCAT62(0x46eddd486bc,uVar54) + (uint)(uVar60 < 0xf260 || uVar30 < bVar49);
  if (uVar15 == 0 ||
      (SCARRY2((ushort)SCARRY1(bVar6,bVar17),uVar63) != SCARRY2(sVar40,1)) != (short)uVar15 < 0) {
    uVar65 = uVar55;
  }
  uVar56 = uVar56 & 0x9dea;
  lVar34 = uVar19 << 1;
  lVar8 = ((uVar43 >> 1 | (ulong)uVar55 << 0x3f) - uVar52) + -1;
  uVar19 = 0;
  if ((long)(short)uVar56 != 0) {
    for (; ((ulong)(long)(short)uVar56 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
    }
  }
  uVar50 = CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(!CARRY1(bVar6,bVar17) &&
                                                    (byte)(bVar6 + bVar17) != '\0',cVar7)) >> 8),
                    cVar7 - (char)uVar65);
  uVar19 = uVar19 & 0xffffffffffff89a1;
  iVar48 = (int)(char)uVar65 >> ((byte)uVar19 & 0x1f);
  sVar40 = (short)iVar48;
  uVar32 = (undefined2)((uint)iVar48 >> 0x10);
  uVar30 = -sVar40;
  if (sVar40 != 0 || uVar30 == 0) {
    uVar65 = uVar50;
  }
  uVar43 = (ulong)uVar50;
  if ((POPCOUNT(uVar30 & 0xff) & 1U) == 0) {
    uVar43 = uVar52;
  }
  uVar29 = (ulong)(uint)((int)(uVar27 << 0x1c) >> 2);
  bVar17 = (char)(uVar19 >> 8) - (char)uVar43;
  uVar11 = (undefined7)((ulong)lVar8 >> 8);
  bVar6 = (byte)lVar8 | bVar17;
  bVar14 = (byte)(lVar34 >> 1);
  lVar34 = CONCAT71((int7)(lVar34 >> 9),bVar14 + 0x87);
  bVar49 = (byte)uVar52 & 0x1f;
  uVar35 = (ulong)(0x79 < bVar14 || 0xfe < (byte)(bVar14 + 0x86)) << 0x20 |
           CONCAT71((uint7)(uVar35 >> 0x28),bVar21 << bVar20 | bVar21 >> 8 - bVar20);
  uVar55 = (uint)(uVar35 >> bVar49) | (uint)(uVar35 << 0x21 - bVar49);
  uVar53 = (ushort)uVar55 ^ 1 << ((ushort)CONCAT71(uVar11,bVar6) & 0xf);
  uVar46 = (uint)CONCAT71((int7)(uVar52 >> 8),(byte)uVar19) & 0xfffffffe;
  uVar42 = lVar34 << 0x2d | (ulong)(CONCAT18((uVar53 & 1) != 0,lVar34) >> 0x14);
  iVar48 = (int)uVar43 + -1;
  bVar66 = (uVar15 & 1) != 0;
  cVar7 = bVar17 - 1;
  uVar44 = CONCAT71(uVar11,cVar7);
  bVar68 = bVar66 || cVar7 == '\0';
  uVar43 = uVar42 ^ (ulong)(uVar44 == uVar42) * (uVar42 ^ uVar65 + (int)(short)uVar56);
  uVar9 = uVar44 ^ (ulong)(uVar44 != uVar42) * (uVar44 ^ uVar43);
  uVar65 = CONCAT31((int3)(uVar65 + (int)(short)uVar56 >> 8),uVar42 < uVar44);
  uVar35 = (ulong)uVar65;
  uVar18 = CONCAT11(bVar6 >> 1 | ((int)uVar46 < 0) << 7,bVar68);
  uVar16 = CONCAT62((int6)(uVar19 >> 0x10),uVar18);
  bVar20 = (byte)((uint)iVar48 >> 8);
  uVar50 = CONCAT22((short)((uint)iVar48 >> 0x10),
                    CONCAT11(bVar20 >> bVar68 | bVar20 << 8 - bVar68,(char)iVar48));
  uVar19 = (ulong)(uVar29 != 0);
  lVar34 = (ulong)uVar50 + 0x10f9bbf1;
  uVar23 = lVar34 + uVar19;
  if (SCARRY8((ulong)uVar50,0x10f9bbf1) != SCARRY8(lVar34,uVar19)) {
    uVar43 = uVar23;
  }
  bVar20 = (byte)(uVar9 >> 8) | 0xd2;
  bVar49 = (byte)(uVar23 >> 8);
  bVar67 = bVar20 < bVar49;
  cVar7 = bVar20 - bVar49;
  uVar19 = CONCAT62((int6)(uVar9 >> 0x10),CONCAT11(cVar7,(char)uVar9));
  uVar57 = CONCAT71((int7)(uVar57 >> 8),bVar67);
  if (bVar67 || cVar7 == '\0') {
    uVar61 = (uint)CONCAT62((int6)((ulong)lVar24 >> 0x10),(ushort)uVar57);
  }
  if (bVar67) {
    uVar61 = (uint)uVar57;
  }
  iVar48 = (int)CONCAT62((int6)(uVar52 * 2 >> 0x10),(ushort)(uVar52 * 2) >> 1);
  uVar52 = 0x3f;
  if (uVar16 != 0) {
    for (; uVar16 >> uVar52 == 0; uVar52 = uVar52 - 1) {
    }
  }
  uVar27 = (uint)(uVar42 < uVar44);
  bVar20 = (byte)(uVar53 >> 8) & ((byte)(iVar48 << 1) | iVar48 < 0) << 3;
  uVar47 = (ushort)uVar57 & 0xf;
  uVar30 = (ushort)CONCAT31((int3)(CONCAT22(uVar32,uVar30) >> 8),
                            (char)uVar30 << 1 | (char)uVar30 < '\0');
  uVar9 = (ulong)CONCAT22(uVar32,uVar30 | 1 << uVar47);
  uVar44 = uVar43;
  if ((uVar30 >> uVar47 & 1) == 0 && bVar20 != 0) {
    uVar44 = uVar57;
  }
  uVar30 = (uVar15 ^ 1) + uVar56 + (ushort)bVar66 + 1;
  bVar66 = (uVar33 & 2) != 0;
  uVar43 = (ulong)(uVar18 & ~(1 << ((ushort)uVar43 & 0xf)));
  if (!bVar66) {
    uVar43 = uVar9;
  }
  uVar16 = uVar35;
  if ((uint)uVar19 == uVar65) {
    uVar35 = uVar19;
    uVar16 = (ulong)uVar27;
  }
  uVar51 = (uint)(uVar52 >> 0x1b) & 0x1f ^ 0xa22de8ad;
  uVar27 = uVar27 & uVar51;
  uVar9 = uVar9 - 0x77ef848a;
  iVar48 = (int)(short)uVar35 * (int)CONCAT11(bVar20 - 1,(char)uVar53);
  uVar19 = uVar9 & 0x71b67a1b;
  bVar20 = (byte)uVar43;
  bVar49 = (byte)(uVar61 >> 0xb);
  uVar65 = CONCAT31((uint3)(uVar61 >> 0x13) | (uint3)((uint)((int)uVar16 << 0x15) >> 8),
                    bVar49 >> (bVar20 & 7) | bVar49 << 8 - (bVar20 & 7));
  uVar15 = (short)uVar65 + 0xb4 + (short)iVar48 * 2;
  uVar61 = CONCAT31(0xa22de8,(char)uVar51 << 1 | (byte)((uint)iVar48 >> 0x10) < bVar67);
  lVar24 = (ulong)uVar65 * -0x68181f7a;
  if (SEXT816(lVar24) == SEXT816((long)(ulong)uVar65) * SEXT416(-0x68181f7a)) {
    lVar24 = CONCAT62((int6)((ulong)lVar24 >> 0x10),(short)uVar61);
  }
  uVar51 = (uint)uVar15 << (bVar20 & 0x3f);
  lVar34 = (CONCAT62((int6)(uVar33 >> 0x10),
                     (short)(CONCAT12(uVar58 < 0x39679c89 || lVar41 == 0,(short)uVar33) >> 1)) >> 1
           | (ulong)bVar66 << 0x3f) + 1;
  uVar64 = (CONCAT11((byte)(uVar30 >> 9),(char)(uVar30 >> 1) * '\x02' + '\x01') | 0x8000) >>
           (bVar20 & 0x1f) | (uVar51 | uVar15 >> 0x40 - (bVar20 & 0x3f)) << 0x20 - (bVar20 & 0x1f);
  sVar13 = (sbyte)(uVar43 & 0xffffffffffffff0f);
  uVar37 = (uint7)((ulong)lVar34 >> 8) & 0xff000000;
  uVar36 = (uint7)((ushort)((ulong)lVar34 >> 0x30) & 0xff) |
           (uint7)((uint)((ulong)lVar34 >> 0x20) & 0xff00) | uVar37 >> 8 |
           (uint7)lVar34 & 0xff000000;
  uVar35 = CONCAT62((int6)((ulong)lVar24 >> 0x10),
                    (short)lVar24 << sVar13 | (ushort)uVar19 >> 0x10 - sVar13) & 0xffffffff;
  uVar22 = (uint)(uVar35 >> sVar13) | (uint)(uVar35 << 0x21 - sVar13);
  uVar18 = (ushort)(uVar43 & 0xffffffffffffff0f) | 0x36f2;
  uVar15 = CONCAT11((byte)((uint)iVar48 >> 8) >> 1,(char)iVar48) & 0x3fff;
  uVar30 = (ushort)(byte)((char)((uint)iVar48 >> 0x18) << 1 | iVar48 < 0 | 0xc0);
  uVar10 = CONCAT71((uint7)(uint3)(((uVar46 * 2 + 0x49fb5c51 >> bVar68 | uVar50 << 0x20 - bVar68) >>
                                    1 | uVar27) - (int)uVar19 >> 8),0x33);
  bVar49 = (byte)((ulong)lVar34 >> 0x38);
  iVar48 = (int)CONCAT11((char)(uVar15 % uVar30),(char)(uVar15 / uVar30)) * (int)(short)uVar64;
  uVar65 = (int)uVar10 << 1;
  uVar50 = CONCAT22((short)(uVar55 >> 0x10),(short)((uint)iVar48 >> 0x10));
  if ((uVar22 & 1) != 0) {
    uVar50 = uVar65;
  }
  lVar24 = uVar16 - uVar65;
  iVar28 = (int)CONCAT62((int6)(-uVar29 >> 0x10),(short)uVar27 * 0x4313) + 0x651806d1;
  uVar19 = (ulong)(uVar22 >> 1) | 1L << ((ulong)uVar18 & 0x3f);
  bVar6 = (byte)(uVar18 >> 8);
  if (((char)((byte)iVar48 | (byte)(uVar51 >> 0x18) | (byte)(uVar37 >> 0x18)) >> 7 & 0x88U) != 0) {
    uVar64 = uVar50;
  }
  uVar30 = (ushort)uVar10;
  sVar31 = (short)iVar28;
  uVar65 = CONCAT22((short)((uint)iVar28 >> 0x10),sVar31 << 1);
  sVar40 = 0;
  if (uVar30 != 0) {
    for (; (uVar30 >> sVar40 & 1) == 0; sVar40 = sVar40 + 1) {
    }
  }
  uVar33 = CONCAT62((int6)(((ulong)uVar61 << 0x28) >> 0x10),sVar40);
  uVar52 = ((ulong)CONCAT31((int3)(uVar64 >> 8),(byte)uVar64 + (byte)uVar50) -
           (ulong)(((uint)uVar57 << 1 | (uint)lVar34 >> 0x1f) ^ 0x800000)) -
           (ulong)CARRY1((byte)uVar64,(byte)uVar50);
  uVar58 = lVar24 << (bVar6 & 0x3f) | (ulong)(CONCAT18(sVar31 < 0,lVar24) >> 0x41 - (bVar6 & 0x3f));
  iVar28 = ((uint)CONCAT62((int6)(uVar44 >> 0x10),
                           (short)CONCAT71((int7)(uVar44 >> 8),
                                           (POPCOUNT((char)uVar16 - bVar20) & 1U) != 0)) | 0x13c8) -
           1;
  lVar24 = (long)(int)CONCAT62((int6)(((ulong)(uint)(int)(char)bVar6 ^ 0xa560fc4) >> 0x10),
                               (ushort)(byte)((ulong)(uint)(int)(char)bVar6 ^ 0xa560fc4) *
                               (ushort)(byte)uVar58);
  sVar40 = CONCAT11((char)uVar18,bVar6) + -0x46b2;
  uVar44 = uVar52 & 0xffffffffffffff00;
  auVar2 = SEXT816(lVar24) * SEXT816((long)uVar44);
  uVar50 = (uint)((uVar9 & 0x71060802) << 1) | 0x1236cd7b;
  bVar21 = (byte)(uVar65 >> 1);
  uVar37 = uVar36 >> 1;
  bVar17 = (char)(CONCAT71(uVar36,bVar49 << 7 | bVar49 >> 1) >> 1) + bVar21 + 1;
  uVar43 = CONCAT71(uVar37,bVar17);
  uVar35 = (ulong)CONCAT31((uint3)(uVar65 >> 9),bVar21 + bVar17);
  bVar20 = ((byte)sVar40 & 0x1f) % 0x11;
  uVar30 = (ushort)(CONCAT12((ushort)uVar44 < 0xfbbb,sVar40) >> bVar20) | sVar40 << 0x11 - bVar20;
  bVar20 = ((byte)uVar30 & 0x1f) % 0x11;
  uVar15 = (ushort)iVar28;
  iVar48 = (int)uVar43 + 0x20;
  uVar65 = uVar50 >> 1 | 1;
  bVar6 = (byte)iVar48;
  bVar49 = bVar6 & 0x3f;
  uVar57 = uVar33 << bVar49 | uVar33 >> 0x40 - bVar49;
  if ((char)uVar57 == (char)uVar65) {
    uVar57 = uVar43;
  }
  uVar25 = (uint6)(uVar19 >> 0x10);
  bVar6 = bVar6 * '\x02';
  uVar18 = (ushort)((ushort)(lVar24 * uVar44 * 2 >> 0x10) ^
                   (ushort)((uint)(1 << ((uint)uVar33 & 0x1f)) >> 0x10)) >> 1 |
           (ushort)((uint)((int)CONCAT62(uVar25,(ushort)(byte)uVar19) << 0x1f) >> 0x10);
  uVar52 = CONCAT62((int6)(uVar52 >> 0x10),(short)(char)bVar6);
  lVar24 = uVar35 + uVar52;
  uVar55 = (uint)CARRY8(uVar35,uVar52);
  uVar53 = (ushort)lVar24;
  uVar12 = (undefined6)((ulong)lVar24 >> 0x10);
  uVar43 = CONCAT62(uVar12,uVar53 + 0x634f);
  sVar40 = (short)(uVar50 >> 0xc);
  uVar33 = (ulong)CONCAT22((ushort)((uVar65 << 0x15) >> 0x10) | (ushort)(uVar50 >> 0x1c),
                           sVar40 << 3 | (ushort)(CONCAT12(0x9cb0 < uVar53,sVar40) >> 0xe));
  iVar28 = CONCAT22((short)((uint)iVar28 >> 0x10),uVar15 >> bVar20 | uVar15 << 0x11 - bVar20) <<
           (bVar6 & 0x1f);
  uVar35 = (ulong)uVar18 << 0x10;
  lVar24 = (ulong)(uVar35 != uVar33) *
           (uVar35 ^ uVar33 ^ (ulong)(uVar35 == uVar33) * (uVar33 ^ uVar43));
  uVar47 = (short)CONCAT71(uVar37,bVar17 >> 3 | bVar17 * ' ') + 0x4f2;
  sVar40 = (short)CONCAT71((int7)((uVar57 & 0xffffffff) >> 8),(char)(uVar57 & 0xffffffff) << 1) +
           uVar47 * 8;
  bVar49 = (byte)sVar40;
  uVar35 = CONCAT71((int7)(CONCAT62((int6)(uint6)(ushort)((uint)iVar48 >> 0x10) >> 0xe,sVar40) >> 8)
                    ,bVar49) | 0xc0;
  uVar57 = CONCAT62((uint6)uVar18 ^ (uint6)((ulong)lVar24 >> 0x10),
                    CONCAT11((byte)((ulong)lVar24 >> 8) >> 1,(char)lVar24)) & 0xffffffffffff3fff;
  bVar14 = (byte)uVar35;
  uVar15 = (ushort)uVar57;
  uVar57 = (long)(int)CONCAT62((int6)(uVar57 >> 0x10),
                               CONCAT11((char)(uVar15 % (ushort)bVar14),(char)(uVar15 / bVar14))) *
           (long)iVar28 & 0xffffffff;
  bVar26 = (byte)(uVar53 + 0x634f);
  lVar34 = CONCAT71(0x5561a5ad9addba,bVar26 + 0x7d);
  uVar15 = (ushort)uVar57;
  sVar40 = (uVar15 ^ (ushort)(uVar15 != uVar47) *
                     (uVar15 ^ uVar47 ^ (ushort)(uVar15 == uVar47) *
                                        (uVar47 ^ (ushort)(iVar28 * -0x59f077a3)))) + 0xc351;
  bVar20 = (byte)((ushort)sVar40 >> 8);
  uVar65 = ((uint)uVar52 >> 1 | uVar55 << 0x1f) >> 1 | (uint)(uVar15 < uVar47) << 0x1f | 1 << uVar55
  ;
  lVar24 = 0x3f;
  if (uVar35 != 0) {
    for (; uVar35 >> lVar24 == 0; lVar24 = lVar24 + -1) {
    }
  }
  uVar15 = -(short)lVar24;
  lVar41 = (ulong)((short)lVar24 != 0) + 0x6d0a8dd6;
  uVar18 = (ushort)lVar41 ^ uVar15;
  uVar43 = uVar43 & 0xffffffff;
  bVar62 = (byte)sVar40;
  bVar39 = (byte)iVar28;
  bVar38 = bVar39 + 0xb1;
  sVar40 = 0xf;
  if (uVar18 != 0) {
    for (; uVar18 >> sVar40 == 0; sVar40 = sVar40 + -1) {
    }
  }
  lVar8 = CONCAT62((int6)(uVar57 >> 0x10),sVar40) *
          (ulong)((uint)CONCAT62((int6)(uVar43 >> 0x10),
                                 CONCAT11((char)(uVar43 >> 8) + (char)uVar43 +
                                          (0x4f < bVar39 || 0xfe < (byte)(bVar39 + 0xb0)),
                                          (char)uVar43)) & 0x25db68e4);
  iVar48 = ((int)CONCAT62((int6)((ulong)lVar24 >> 0x10),uVar15) - (int)lVar34) + -1;
  uVar5 = uVar25 >> 0x1d;
  uVar50 = iVar28 + (((int)CONCAT71(auVar2._9_7_,
                                    (auVar2[8] - (char)(uVar50 >> 1)) - CARRY1(bVar21,bVar17)) +
                      0x1e418814U >> 0x11) * 0x10000 + -1) * 2 + 0x81;
  uVar15 = (ushort)iVar48 >> 2;
  sVar31 = (short)uVar15 >> 1;
  bVar68 = (uVar50 & 1) != 0;
  uVar46 = (((uint)CONCAT62((int6)((ulong)lVar41 >> 0x10),uVar18) & 0xe143825a) + 0xf4546485) -
           (uint)bVar68;
  sVar40 = ((ushort)uVar50 >> 1 | (ushort)bVar68 << 0xf) + sVar31;
  uVar50 = CONCAT22((short)(uVar50 >> 0x10),sVar40);
  uVar43 = CONCAT71((uint7)(uint5)(uVar19 >> 0x35) |
                    (uint7)(((CONCAT62(uVar25,CONCAT11(bVar62 ^ (bVar62 != bVar20) *
                                                                (bVar62 ^ bVar20 ^ (bVar62 == bVar20
                                                                                   ) * (bVar20 ^ 
                                                  bVar14)),(char)(CONCAT11(0x82 < bVar26,
                                                                           bVar6 + 0x9b +
                                                                           ((uVar30 >> ((ushort)
                                                  uVar58 & 0xf) & 1) != 0) * -2) >> 2))) | 0x80) <<
                            0x13) >> 8),(char)uVar5 - (byte)lVar8);
  lVar24 = CONCAT62(uVar12,uVar53 + 0x634e) << (bVar14 & 0x3f);
  uVar55 = CONCAT31((int3)(CONCAT22((short)((uint)iVar48 >> 0x10),sVar31) >> 8),(byte)sVar31 >> 1);
  uVar10 = CONCAT71((int7)((ulong)lVar8 >> 8),(byte)lVar8 & (byte)(uVar5 >> 8));
  uVar57 = (ulong)bVar49 & 0x3f;
  uVar19 = (ulong)uVar55 | 1L << uVar57;
  lVar24 = (CONCAT62((int6)((ulong)lVar24 >> 0x10),(ushort)lVar24 >> 6 | (short)uVar46 << 10) +
           -0x9f32ce85) - (ulong)((uVar55 >> uVar57 & 1) != 0);
  uVar32 = (undefined2)uVar19;
  if ((uVar46 * 0x10 | uVar46 >> 0x1c) ==
      CONCAT22((short)((uint)(iVar28 * -0x59f077a3) >> 0x10),uVar15 * -0x5b31)) {
    uVar10 = CONCAT62((int6)((ulong)lVar8 >> 0x10),uVar32);
  }
  lVar34 = lVar34 + 0x285cba59;
  uVar30 = (ushort)(uVar65 >> 0x10);
  uVar65 = CONCAT22(uVar30 >> 1,(short)(uVar65 >> 1) >> (bVar14 & 0x1f));
  lVar41 = 0;
  if (uVar50 != 0) {
    for (; (uVar50 >> lVar41 & 1) == 0; lVar41 = lVar41 + 1) {
    }
  }
  uVar50 = CONCAT31((int3)(uVar50 >> 8),(char)sVar40 >> 0xc);
  uVar55 = (uint)lVar41;
  if ((POPCOUNT(bVar14 & (byte)uVar10) & 1U) == 0) {
    uVar55 = uVar65;
  }
  uVar57 = uVar43 & 0xffffffff;
  iVar48 = 0x1f;
  if ((uint)uVar35 != 0) {
    for (; (uint)uVar35 >> iVar48 == 0; iVar48 = iVar48 + -1) {
    }
  }
  uVar46 = (uint)CONCAT62((int6)(uVar57 >> 0x10),
                          (ushort)(byte)uVar57 * (ushort)(byte)((ulong)lVar24 >> 0x38));
  uVar61 = uVar65;
  if (uVar46 != uVar55) {
    uVar46 = uVar55;
    uVar61 = uVar55;
  }
  bVar20 = (byte)iVar48 & 0x1f;
  uVar27 = (uint)lVar34;
  uVar15 = (ushort)iVar48 >> 1;
  uVar55 = CONCAT22((short)((uint)iVar48 >> 0x10),uVar15);
  lVar41 = (ulong)((uVar46 ^ uVar50) * (int)(char)bVar38) * (ulong)uVar55;
  uVar57 = (ulong)(uint)((int)uVar43 +
                        (int)CONCAT62((int6)((ulong)uVar10 >> 0x10),
                                      ((short)uVar10 * (short)lVar34 & 0xffU) * (ushort)bVar38)) + 1
  ;
  bVar49 = (byte)uVar15;
  iVar48 = uVar61 << (bVar49 & 0x1f);
  uVar35 = (ulong)(lVar24 * 0x100) >> 0x19 & 0x7f;
  lVar24 = 0;
  if (uVar57 != 0) {
    for (; (uVar57 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
    }
  }
  for (sVar40 = 0xf; 0xb7ebU >> sVar40 == 0; sVar40 = sVar40 + -1) {
  }
  sVar31 = (short)((CONCAT22(uVar32,(short)lVar41) & 0x3fffffff) / 0xf7eb);
  uVar33 = (ulong)CONCAT31((int3)(uVar55 >> 8),bVar49) & 0xffffffffffffff0f;
  uVar43 = (long)(int)CONCAT62((int6)((ulong)lVar41 >> 0x10),sVar31) * (long)(int)uVar35;
  uVar19 = uVar19 >> 0x19;
  iVar28 = iVar48 + 1;
  bVar68 = iVar28 == 0 || SCARRY4(iVar48,1) != iVar28 < 0;
  iVar48 = (int)uVar43 * (int)(uVar43 >> 0x20);
  uVar55 = (uVar27 >> bVar20 | uVar27 << 0x20 - bVar20) + iVar28;
  bVar67 = (POPCOUNT(uVar55 & 0xff) & 1U) != 0;
  uVar61 = CONCAT22(uVar30 >> 0xb,
                    (short)(CONCAT22(uVar30 >> 2,
                                     (ushort)((uVar65 & 0xffffff00) >> 1) ^ (ushort)uVar5) >> 9) -
                    (short)uVar33) + -0x7a7af73b + (uint)(iVar28 < 0);
  bVar20 = bVar68 * '\x02';
  uVar32 = (undefined2)
           (((uint)CONCAT71((int7)(CONCAT62((int6)(uVar57 >> 0x10),sVar40) >> 8),(char)sVar40) ^
            0xac) + 0x381833fc >> 0x10);
  uVar46 = CONCAT22((short)((uint)iVar48 >> 0x10),
                    CONCAT11((char)((uint)iVar48 >> 8) * '\x02' + '\x01',(byte)iVar48));
  bVar66 = (uVar19 & 1) != 0;
  uVar15 = (short)((uint)uVar19 >> 1) << 1 |
           (ushort)(((ulong)uVar50 + (uVar43 >> 0x20) >> 3 & 1) != 0);
  uVar65 = CONCAT22((ushort)(uVar19 >> 0x10) >> 1 | (ushort)((uVar46 << 0x1f) >> 0x10),uVar15);
  bVar49 = ((byte)(uVar35 << 1) | 1) ^ ((byte)iVar48 | 0x20);
  uVar57 = (ulong)bVar49;
  auVar2 = ZEXT116(0) << 0x40 |
           ZEXT416(CONCAT31((int3)((uint)((int)CONCAT62((char)bVar38 >> 7,
                                                        (ushort)((short)(char)bVar38 << 1) >>
                                                        (sbyte)uVar33 |
                                                        sVar31 << 0x10 - (sbyte)uVar33) << 1) >> 8),
                            -bVar66));
  uVar43 = SUB168(auVar2 >> bVar20,0) | SUB168(auVar2 << bVar68 * -2 + 0x41,0);
  uVar30 = 0xe128U >> bVar20 | uVar15 << bVar68 * -2 + 0x10;
  uVar19 = (ulong)(uVar46 | 0x20) * (ulong)uVar65;
  uVar50 = (uint)(uVar19 >> 0x20);
  uVar35 = 0;
  if (uVar50 != 0) {
    uVar35 = (ulong)uVar65;
  }
  sVar31 = (short)((ushort)uVar55 >> 1) >> 1;
  uVar46 = (uint)CONCAT62((int6)(uVar33 >> 0x10),uVar30) | 0xc0000000;
  uVar19 = (ulong)(uVar50 & 0x3fffffff) << 0x20 | uVar19 & 0xffffffff;
  uVar58 = uVar19 / uVar46 & 0xffffffff;
  uVar50 = (int)uVar58 - (uint)bVar49;
  uVar33 = uVar57;
  if (uVar50 == 0) {
    uVar57 = uVar58;
    uVar33 = (ulong)uVar46;
  }
  uVar27 = (uint)bVar20;
  if ((POPCOUNT(uVar50 & 0xff) & 1U) != 0) {
    uVar27 = uVar61;
  }
  bVar49 = (byte)(uVar33 >> 8) >> 1 | (byte)((ushort)((ushort)((uVar33 & 1) != 0) << 0xf) >> 8);
  iVar48 = (int)CONCAT71(0x72076277d48ff,
                         -0x15 << bVar20 % 9 | (byte)(CONCAT11(bVar66,0xeb) >> 9 - bVar20 % 9)) + -1
           + uVar65;
  uVar12 = (undefined6)(uVar43 >> 0x10);
  bVar6 = (char)uVar27 + 0x5f;
  bVar20 = (byte)((ushort)uVar33 >> 1);
  bVar21 = (byte)sVar31;
  uVar50 = CONCAT31((int3)(CONCAT22((short)(uVar55 >> 0x10),sVar31) >> 8),bVar21 + (byte)iVar48);
  uVar18 = (short)uVar43 + 0x29f2 + (ushort)CARRY1(bVar21,(byte)iVar48);
  lVar34 = CONCAT62(uVar12,uVar18);
  uVar61 = uVar61 >> 0x1d;
  bVar17 = (byte)(uVar19 % (ulong)uVar46 >> 8);
  bVar21 = bVar17 ^ (bVar20 == bVar17) *
                    (bVar17 ^ (byte)((ushort)(CONCAT11((char)((ushort)(sVar40 + 1) >> 8),bVar67) *
                                             -0x2161) >> 8));
  uVar55 = CONCAT31((int3)(uVar65 >> 8),
                    (byte)uVar15 << (bVar6 & 7) | (byte)uVar15 >> 8 - (bVar6 & 7)) + 1;
  uVar65 = uVar61 + 0x10f4e08;
  lVar24 = (ulong)bVar21 << 8;
  if (uVar61 < 0xfef0b1f8) {
    lVar24 = lVar34;
  }
  uVar3 = (undefined2)((uint)iVar48 >> 0x10);
  auVar2._1_7_ = (int7)(CONCAT62((int6)(uVar33 >> 0x10),
                                 CONCAT11(bVar49 << (bVar6 & 7) | bVar49 >> 8 - (bVar6 & 7),bVar20))
                       >> 8);
  auVar2[0] = (bVar20 ^ (bVar20 != bVar17) * (bVar20 ^ bVar21)) + (char)((ulong)lVar24 >> 8);
  auVar2._8_8_ = 0;
  bVar49 = SUB161(auVar2 * ZEXT416(uVar50),9);
  uVar55 = CONCAT22((ushort)(uVar55 >> 0x11),(short)(uVar55 >> 1)) | 0xc000;
  lVar24 = CONCAT71((int7)(uVar35 >> 8),(char)uVar35 << 1 | (char)uVar35 < '\0') -
           (ulong)(uint)(int)(char)bVar49;
  uVar47 = (short)uVar50 << (bVar49 & 0x3f) | (ushort)(uVar50 >> 0x40 - (bVar49 & 0x3f));
  uVar53 = (ushort)lVar24;
  uVar15 = uVar47 + uVar53;
  bVar20 = (bVar49 ^ (byte)(1 << bVar67)) & 0x1f;
  uVar46 = (uint)((CONCAT14(CARRY2(uVar47,uVar53),uVar65) & 0xffffff7fff) >> bVar20) |
           (uVar65 & 0xffff7fff) << 0x21 - bVar20;
  uVar35 = CONCAT62(uVar12,uVar18) & 0xffffffffffff78c5;
  iVar48 = CONCAT31((int3)(CONCAT22(uVar3,(short)iVar48 << (bVar6 & 0xf) |
                                          uVar30 >> 0x10 - (bVar6 & 0xf)) >> 8),
                    (uVar18 & 0x78c5) != 0);
  lVar34 = lVar34 + -0x36db4c27;
  uVar65 = CONCAT22((char)bVar49 >> 7,uVar18 * 0x2581) + iVar48;
  uVar19 = CONCAT62((int6)((ulong)lVar34 >> 0x10),(ushort)lVar34 | (ushort)uVar46);
  cVar7 = (char)uVar35;
  bVar20 = cVar7 * '\x02';
  bVar6 = (byte)uVar65;
  bVar49 = (bVar6 & 0x1f) % 9;
  uVar50 = 0;
  if (uVar46 != 0) {
    for (; (uVar46 >> uVar50 & 1) == 0; uVar50 = uVar50 + 1) {
    }
  }
  uVar33 = (ulong)uVar50;
  uVar30 = (short)(uVar18 & 0xff) >> 1;
  uVar46 = (int)uVar19 +
           (int)CONCAT62((int6)(uVar57 >> 0x10),
                         (short)CONCAT71((int7)(uVar57 >> 8),
                                         (byte)(CONCAT11(cVar7 < '\0',(char)uVar57) >> bVar49) |
                                         (char)uVar57 << 9 - bVar49) << (bVar6 & 0x1f));
  uVar53 = (short)iVar48 - (short)uVar46;
  iVar48 = (int)CONCAT62((int6)((ulong)lVar24 >> 0x10),uVar47) + 1;
  uVar50 = 0;
  if (uVar55 != 0) {
    for (; (uVar55 >> uVar50 & 1) == 0; uVar50 = uVar50 + 1) {
    }
  }
  uVar61 = CONCAT22((short)((uint)iVar48 >> 0x10),~(ushort)iVar48);
  uVar58 = (ulong)uVar61;
  uVar65 = uVar65 >> (bVar6 & 0x1f) | CONCAT22(uVar32,uVar30) << 0x20 - (bVar6 & 0x1f);
  lVar34 = (ulong)uVar50 - 0x3634cf86;
  uVar19 = (ulong)(0xae < bVar20) << 0x20 | uVar19 & 0xffffffff;
  uVar57 = (ulong)CONCAT22(uVar32,uVar30) ^ 8;
  lVar24 = ((ulong)((uint)(uVar19 >> 0x13) | (uint)(uVar19 << 0xe)) - 0x23006b8c) +
           (ulong)((uVar30 >> 3 & 1) != 0);
  bVar49 = (byte)uVar65;
  uVar30 = (ushort)lVar24;
  uVar30 = uVar30 >> (bVar49 & 0xf) | uVar30 << 0x10 - (bVar49 & 0xf);
  uVar19 = uVar58 ^ (ulong)(uVar33 == uVar58) * (ulong)(uVar61 ^ uVar65);
  uVar33 = uVar33 ^ (ulong)(uVar33 != uVar58) * (uVar33 ^ uVar19);
  uVar50 = (uint)CONCAT71((int7)(uVar35 >> 8),bVar20 + 0x51);
  uVar61 = uVar50 >> (bVar49 & 0x1f) | uVar50 << 0x20 - (bVar49 & 0x1f);
  bVar20 = ((byte)(uVar65 >> (bVar49 & 0x1f)) | (byte)((int)uVar57 << 0x20 - (bVar49 & 0x1f))) & 0xf
  ;
  uVar35 = CONCAT62((int6)(uVar19 >> 0x10),
                    (ushort)uVar19 << bVar20 | (ushort)uVar19 >> 0x10 - bVar20);
  uVar19 = uVar57 ^ (ulong)(uVar33 == uVar57) *
                    (uVar57 ^ CONCAT62((int6)(short)(uVar43 >> 0x10),uVar18 + 0x9cc3));
  uVar33 = uVar33 ^ (ulong)(uVar33 != uVar57) * (uVar33 ^ uVar19);
  uVar12 = (undefined6)(uVar33 >> 0x10);
  iVar48 = (int)uVar19 + -0x702c724c;
  uVar65 = 0x1f;
  uVar50 = (uint)CONCAT62((int6)((ulong)lVar24 >> 0x10),uVar30);
  if (uVar50 != 0) {
    for (; uVar50 >> uVar65 == 0; uVar65 = uVar65 - 1) {
    }
  }
  bVar20 = ((byte)uVar65 & 0x1f) % 0x11;
  uVar50 = (uint)((uVar15 + (short)uVar33 + 0x23f5 & 1) != 0) << 0x10 | uVar46 & 0xffff;
  uVar47 = (ushort)(uVar50 << bVar20) | (ushort)(uVar50 >> 0x11 - bVar20);
  uVar57 = (ulong)CONCAT22((short)(uVar46 >> 0x10),uVar47);
  uVar50 = (int)CONCAT62(uVar12,uVar15) + 0x9a + uVar65 * 4;
  uVar18 = uVar30 ^ (ushort)(uVar15 == uVar30) * (uVar30 ^ uVar53);
  lVar24 = CONCAT62(uVar12,uVar15 ^ (ushort)(uVar15 != uVar30) * (uVar15 ^ uVar18));
  uVar19 = (long)((int)lVar24 * (int)uVar35) *
           (long)SUB164(SEXT816(lVar24) * SEXT816((long)uVar35),8);
  uVar43 = uVar19 & 0xffffffff;
  uVar33 = (uVar19 >> 0x20) + (ulong)uVar50 >> ((byte)uVar65 & 0x3f);
  uVar58 = (ulong)(CONCAT22((short)(uVar55 + 0xa852b96d >> 0x10),(short)lVar34) +
                   (int)CONCAT62((int6)((ulong)lVar34 >> 0x10),(short)lVar34 + -0x7d60) +
                  (uint)((uVar65 >> 0x19 & 1) != 0));
  uVar19 = (ulong)uVar65;
  if (SBORROW8(uVar58,uVar43) != false) {
    uVar19 = uVar35;
  }
  bVar62 = (byte)uVar50 >> 1;
  bVar20 = (byte)uVar43;
  sVar40 = (short)iVar48 + -0x5fe3;
  uVar65 = CONCAT31((int3)(CONCAT22((short)((uint)iVar48 >> 0x10),sVar40) >> 8),
                    (char)sVar40 + ((char)lVar34 + 1U | 0x93));
  uVar12 = (undefined6)(uVar43 >> 0x10);
  bVar49 = (byte)uVar19 << ((byte)uVar19 & 0x1f);
  uVar30 = (ushort)CONCAT31((int3)(uVar50 >> 8),bVar62);
  sVar31 = ((ushort)(CONCAT22((short)(uVar61 >> 0x10),
                              ((short)uVar61 + -0x3872) - (ushort)(uVar58 < uVar43)) >>
                    (bVar49 & 0x3f)) | uVar18 << 0x40 - (bVar49 & 0x3f)) - uVar30;
  bVar26 = (byte)sVar31;
  bVar6 = bVar49 ^ (bVar20 == bVar49) * (bVar49 ^ bVar26);
  bVar49 = bVar20 ^ (bVar20 != bVar49) * (bVar20 ^ bVar6);
  uVar58 = CONCAT71((int7)(uVar19 >> 8),bVar6) | 1L << ((ulong)uVar18 & 0x3f);
  bVar17 = (char)uVar33 + -0x6e + ((char)((byte)uVar47 ^ bVar20) < '\0');
  bVar6 = (byte)uVar58;
  bVar14 = (byte)(uVar33 >> 8);
  uVar52 = (ulong)uVar65 << (bVar6 & 0x3f) | (ulong)(uVar65 >> 0x40 - (bVar6 & 0x3f));
  uVar44 = uVar57 & 0xfffffffffff7ffff;
  uVar35 = (uVar35 & 0x7fffff) << 9;
  uVar65 = (uint)(uVar35 << (bVar6 & 0x1f)) | (uint)(uVar35 >> 0x21 - (bVar6 & 0x1f));
  bVar20 = (bVar6 & 0x1f) % 0x11;
  sVar40 = (short)uVar65;
  cVar7 = (char)uVar44;
  uVar45 = (undefined6)(uVar44 >> 0x10);
  uVar15 = (uVar30 | 1) << (bVar6 & 0x1f);
  bVar21 = bVar6 + (char)uVar18;
  uVar35 = CONCAT62((int6)(uVar58 >> 0x10),CONCAT11((byte)(uVar58 >> 8) >> 1,bVar6)) & 0xffffffff;
  uVar58 = (ulong)((bVar49 ^ bVar17) + 0xe0223518) * -0x37e26697;
  uVar19 = CONCAT62(uVar12,(short)CONCAT71((int7)(CONCAT62(uVar12,CONCAT11(((char)(uVar43 >> 8) -
                                                                           (char)(uVar19 >> 8)) + -1
                                                                           + bVar14,bVar49)) >> 8),
                                           cVar7)) & 0xffffffffffff3fff;
  lVar24 = (ulong)CONCAT11(0xff,bVar21) << 1;
  uVar30 = (short)cVar7 + 0xed6e;
  if (-1 < (char)((char)((ushort)((short)CONCAT71((int7)(uVar33 >> 8),bVar17) >> (bVar21 & 0x1f)) >>
                        8) - (char)((ushort)uVar19 % (ushort)(byte)((byte)(uVar52 >> 8) | 0xc0)))) {
    uVar30 = CONCAT11((char)((ushort)sVar31 >> 8),bVar26 + 0x17);
  }
  uVar55 = CONCAT11((byte)((ulong)lVar24 >> 8) ^ (byte)uVar52 & bVar14,(char)lVar24) + 0x2a00ebb4;
  uVar47 = (short)uVar35 * -0x5afe;
  uVar18 = (ushort)uVar55;
  uVar65 = CONCAT22((short)(uVar65 >> 0x10),
                    (sVar40 << bVar20 |
                    (ushort)(CONCAT12((bVar62 & 1) != 0,sVar40) >> 0x11 - bVar20)) << 1 |
                    uVar18 >> 0xf);
  uVar33 = uVar58 & 0xffffffffffffffdf;
  uVar19 = CONCAT71((uint7)(uint6)(int6)(short)(uVar19 >> 0x10) << 8,0x53);
  uVar19 = (uVar19 & 0xffffffff) * (uVar19 & 0xffffffff);
  uVar57 = uVar57 & 0xff;
  iVar48 = (int)CONCAT62(uVar45,(short)cVar7) + -0x5dbb388e;
  uVar43 = uVar19 >> 0x20;
  if (!SBORROW1((char)iVar48,(char)uVar30)) {
    uVar43 = CONCAT71((int7)(uVar33 >> 8),(byte)((byte)uVar33 | 0x40) >> 1);
  }
  uVar19 = uVar19 & 0xffffffff ^ uVar57;
  sVar40 = (short)(CONCAT22(uVar3,uVar53) >> 2);
  sVar31 = (short)CONCAT31((int3)((uint)iVar48 >> 8),(char)iVar48 - (char)uVar30);
  if (sVar40 != sVar31 && (SBORROW2(sVar40,sVar31) != false) == (short)(sVar40 - sVar31) < 0) {
    uVar57 = uVar43;
  }
  if ((uint)uVar19 != uVar65) {
    uVar19 = (ulong)uVar65;
  }
  auVar1._2_6_ = uVar45;
  auVar1._0_2_ = (short)cVar7 | 1 << (uVar18 & 0xf);
  uVar18 = sVar31 << 1 | (ushort)(sVar31 < 0);
  iVar48 = CONCAT22((short)((uint)iVar48 >> 0x10),uVar18);
  uVar33 = (ulong)uVar55 & 0xffffffffffffff0f;
  if (sVar31 < 0 != (short)uVar18 < 0) {
    uVar33 = uVar19;
  }
  uVar55 = (uint)CONCAT62((int6)(uVar57 >> 0x10),(ushort)uVar57 & uVar15) | 0xc0000000;
  uVar65 = (uint)(((ulong)(((uint)uVar43 | 0xbbaeafb3) & 0x3fffffff) << 0x20 | uVar19) /
                 (ulong)uVar55);
  auVar1._8_8_ = 0;
  bVar20 = (byte)uVar33 & 0x1f;
  uVar65 = uVar65 >> bVar20 | uVar65 << 0x20 - bVar20;
  bVar20 = (byte)uVar33 & 0x3f;
  uVar57 = (ulong)uVar55 << bVar20 | (ulong)(uVar55 >> 0x40 - bVar20);
  uVar53 = SUB162((ZEXT116(0) << 0x40 | auVar1) >> 0xf,0) & 0xffdf;
  uVar18 = (ushort)(uVar65 >> 0x10);
  uVar19 = uVar58 & 0xffffffffffff0000;
  if (SCARRY2((short)uVar65,uVar30 | uVar47)) {
    uVar19 = uVar57;
  }
  lVar24 = 0;
  if (uVar57 != 0) {
    for (; (uVar57 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
    }
  }
  bVar6 = (byte)uVar53;
  bVar20 = (byte)(uVar53 >> 8);
  bVar49 = bVar6 ^ (bVar6 == 0) * bVar6;
  iVar28 = CONCAT31((int3)(((uint)uVar18 << 0x10) >> 8),(bVar6 != 0) * bVar49) + -1;
  uVar65 = (uint)(iVar48 << 1) >> 0x14 | iVar48 << 0xd;
  uVar4 = (uint3)((uint)iVar28 >> 8);
  for (lVar34 = 0; (0x382aU >> lVar34 & 1) == 0; lVar34 = lVar34 + 1) {
  }
  uVar61 = (uint)(uVar4 >> 0x10) | uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10;
  uVar30 = CONCAT11(bVar20,bVar49) >> 1;
  uVar64 = (uint)CONCAT62((int6)(uVar35 >> 0x10),uVar47 - (short)(((uint)uVar18 << 0x10) >> 9)) &
           (uint)uVar30;
  uVar55 = uVar61 + 0x39dd33b6 + (uint)(sVar31 << 1 & 0xff00) * 8;
  uVar51 = (uint)CONCAT11(bVar20 >> 1,(char)((uint)iVar28 >> 0x18));
  uVar35 = CONCAT71((int7)((uVar19 & 0xffffffff) >> 8),(char)(uVar19 & 0xffffffff) >> 6) &
           0xffffffffd6a00ef3;
  uVar19 = (ulong)uVar55 & 0xffffffffffffffa3;
  uVar27 = (uint)uVar35 & 0x1f;
  uVar22 = (uint)lVar24 ^ 1 << uVar27;
  bVar20 = (byte)uVar19 & 0x1f;
  uVar19 = uVar19 >> 1;
  uVar46 = uVar65 + 0xd5 + uVar64;
  if ((byte)uVar35 != 0xe7) {
    uVar19 = (ulong)(uVar55 >> 0x11) << 0x10;
  }
  uVar43 = 0x9d800000;
  if ((byte)uVar35 < 0xe8) {
    uVar43 = uVar35;
  }
  iVar48 = (CONCAT31((int3)(uVar61 >> 8),(char)uVar30) & 0xffff) * (uVar46 & 0xffff);
  sVar40 = (short)iVar48;
  uVar61 = ((uVar55 * 0x2d695007 ^ (uint)(1L << ((ulong)uVar55 & 0x23))) << 1 | 1) &
           ~(1 << (uVar22 & 0x1f));
  uVar18 = (short)uVar61 + sVar40;
  uVar33 = uVar19 & 0xffffffffffffff0f;
  lVar41 = CONCAT62((int6)(uVar43 >> 0x10),
                    (short)uVar43 << (sbyte)uVar33 | (ushort)uVar33 >> 0x10 - (sbyte)uVar33);
  uVar55 = (uint)CONCAT62((int6)(uVar35 >> 0x10),(short)((uint)iVar48 >> 0x10));
  uVar35 = (ulong)CONCAT22((short)(uVar4 & 0xff),sVar40) & 0xffffffffffff3583;
  uVar30 = (ushort)uVar35;
  lVar34 = CONCAT62((int6)(uVar35 >> 0x10),CONCAT11((char)(uVar30 % 0xc9),(char)(uVar30 / 0xc9)));
  bVar49 = (byte)(uVar33 >> 8);
  return lVar34 + CONCAT71((int7)(CONCAT62(0x36a3feae4365,(short)(char)bVar49) >> 8),
                           bVar49 >> 4 | bVar49 << 4) +
         CONCAT71((int7)(uVar33 >> 8),(uVar55 < uVar18) << 7) +
         (ulong)(uVar55 - uVar18 ^ 1 << ((uint)lVar41 & 0x1f)) +
         (ulong)(uint)((int)uVar64 >> ((byte)uVar19 & 0x1f)) +
         (ulong)((uint)uVar18 << 0x1e | (uint)lVar34 >> 2) +
         (ulong)((uint)(CONCAT14(((uint)lVar24 >> uVar27 & 1) != 0,uVar51) >> bVar20) |
                uVar51 << 0x21 - bVar20) + (ulong)uVar61 + lVar41 + (uVar57 >> 10 | uVar57 << 0x36)
         + (ulong)uVar22 + (ulong)CONCAT22((short)(uVar46 >> 0x10),(short)uVar46 << 0xd) +
         (ulong)uVar65 +
         CONCAT71((int7)(((ulong)(CONCAT22((short)(uVar50 >> 0x10),(uVar15 | 0xc000) >> 0xf) - 1U &
                                 0xffffff00) << 0x1f) >> 8),1) + -0x50be7eb0a20e3663;
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


