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
// WARNING: Removing unreachable block (ram,0x00401378)
// WARNING: Removing unreachable block (ram,0x004013ac)
// WARNING: Removing unreachable block (ram,0x00401f26)
// WARNING: Removing unreachable block (ram,0x00401740)
// WARNING: Removing unreachable block (ram,0x00401390)
// WARNING: Removing unreachable block (ram,0x004013c4)

long log_size_10_var_000(void)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  int iVar5;
  uint3 uVar6;
  unkuint9 Var7;
  uint uVar8;
  uint5 uVar9;
  byte bVar10;
  char cVar11;
  char cVar15;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  byte bVar21;
  long lVar20;
  uint6 uVar22;
  ushort uVar23;
  byte bVar27;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  short sVar28;
  uint uVar29;
  ulong uVar30;
  byte bVar31;
  ulong uVar32;
  ushort uVar33;
  uint uVar34;
  ulong uVar35;
  byte bVar36;
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  byte bVar41;
  short sVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  char cVar48;
  ushort uVar49;
  uint uVar50;
  ushort uVar51;
  int iVar52;
  byte bVar53;
  ushort uVar54;
  ushort uVar55;
  uint uVar56;
  long lVar57;
  ulong uVar58;
  bool bVar59;
  bool bVar60;
  bool in_PF;
  
  uVar16 = 0;
  while ((0x419U >> uVar16 & 1) == 0) {
    uVar16 = uVar16 + 1;
  }
  uVar24 = (ulong)((uint)(~(1 << (uVar16 & 0xf)) & 0x7744) | 0x6f160000);
  if (in_PF) {
    uVar24 = 0x68afda86c9dbcad7;
  }
  uVar17 = (uint)(byte)uVar24 * 0xb95c;
  auVar2 = ZEXT1216(CONCAT48((uVar17 >> 0x10) << 0xc,(ulong)(ushort)(short)(char)uVar17) |
                    (undefined  [12])0x1eb88700000000) & (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 / ZEXT816(0xe8afda86c9dbcad7);
  auVar2 = auVar2 % ZEXT816(0xe8afda86c9dbcad7);
  uVar17 = SUB164(auVar3,0) >> 0xb;
  uVar43 = uVar17 | 0x5ae00000;
  uVar17 = uVar17 & 0xff;
  uVar25 = SUB168(auVar3,0) & 0xffffffffffff9b0e;
  cVar48 = (char)uVar16 + 'T';
  cVar15 = (char)uVar17;
  cVar11 = cVar48 + cVar15;
  uVar56 = 0xffffffff;
  if (cVar11 != -1 &&
      (SCARRY1(cVar48,cVar15) != SCARRY1(cVar11,'\x01')) == (char)(cVar11 + '\x01') < '\0') {
    uVar56 = uVar43;
  }
  uVar6 = CONCAT12((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0,0xd8b1) >> 5;
  uVar17 = uVar17 | 0x25c01600 | SUB164(auVar2,0) >> 1 | 0x80000000;
  auVar2 = ZEXT816(uVar25) * ZEXT816(uVar25);
  bVar59 = SUB168(auVar2 >> 0x40,0) != 0;
  if (bVar59) {
    uVar43 = SUB164(auVar2,0);
  }
  uVar16 = (ushort)(CONCAT12(bVar59,0x4e05) >> 0xc) | 0xc0a0;
  bVar31 = (byte)uVar16;
  uVar25 = uVar24 & 0xffffffffffffff00 | (ulong)(byte)-(byte)uVar24;
  sVar42 = SUB162(auVar2,0);
  lVar26 = (ulong)uVar17 + 0x5e0e92a2 + ((ulong)uVar16 | 0xffffffff8c1f0000) * 2;
  uVar30 = (ulong)uVar56 ^ 1 << ((ulong)(uint)(int)sVar42 & 0x3f);
  uVar16 = (ushort)uVar25;
  uVar16 = uVar16 >> (bVar31 & 0xf) | uVar16 << 0x10 - (bVar31 & 0xf);
  uVar44 = uVar43 << (bVar31 & 0x1f) |
           ((uint)(0x4000000000000 >> (bVar31 & 0x3f)) | (uint)(uVar25 << 0x40 - (bVar31 & 0x3f)))
           >> 0x20 - (bVar31 & 0x1f);
  uVar51 = 0xb95c >> (bVar31 >> (bVar31 & 0x1f) & 0x1f);
  bVar36 = (byte)(((ulong)((int)sVar42 & 0xffU |
                          (uint)(uint3)(int3)(char)((uint)(int)sVar42 >> 8) << 8) | 0xbc) >> 1);
  lVar57 = ((ulong)(ushort)((ushort)((uVar16 >> ((ushort)lVar26 & 0xf) & 1) != 0) + 0xaa03) |
           0x7bd7ff7000000) + 0x497d81b2;
  uVar33 = (ushort)lVar57;
  uVar54 = uVar33 - (short)(char)bVar36;
  uVar43 = (uint)(uVar33 < (ushort)(short)(char)bVar36) + 0xcd34e971;
  uVar56 = uVar44 >> 1;
  uVar35 = (((ulong)(ushort)(((ushort)uVar6 & 0xff00 | 0x1000 |
                             (ushort)(byte)((byte)uVar6 >> (bVar31 & 0x1f))) + 0x5a87) |
            0x3fffffffdf530000) << 0x15 | 0x3ffff) >> (bVar36 & 0x3f) |
           (ulong)uVar56 << 0x40 - (bVar36 & 0x3f);
  bVar31 = (char)bVar36 >> 7;
  uVar33 = (ushort)uVar35 >> (bVar31 & 0x1f);
  uVar39 = (ulong)(uVar43 & 0xac5a4337);
  bVar41 = (char)uVar56 + 1;
  uVar25 = (uVar24 >> 0x38 | (uVar24 & 0xff000000000000) >> 0x28 | (uVar24 & 0xff0000000000) >> 0x18
            | (uVar24 & 0xff00000000) >> 8 | (uVar24 & 0xff000000) << 8 |
            (uVar24 & 0xff0000) << 0x18 | ((ulong)uVar16 & 0xff00) << 0x28 | (ulong)uVar16 << 0x38)
           >> (bVar31 & 0x3f);
  uVar16 = (ushort)uVar17 + 0x3a2c;
  uVar32 = (ulong)((int)(char)bVar36 * 2 + 0xe272e17dU & ~(1 << (uVar43 & 0x1f))) &
           0xffffffffffffffbb;
  bVar10 = (byte)uVar16;
  bVar36 = bVar10 + 0x6f;
  uVar47 = (ulong)(uVar17 & 0xffff0000 | (uint)uVar16 & 0xffffff00 | (uint)bVar36);
  uVar24 = (ulong)(byte)(((char)bVar36 < '\0') << 7 | (bVar36 == 0) << 6 |
                         ((((ushort)uVar17 & 0xfff) + 0xa2c & 0x1000) != 0) << 4 | in_PF << 2 | 2U |
                        bVar10 < 0x91) << 8;
  uVar38 = uVar47 ^ (ulong)(uVar24 == uVar47) *
                    (uVar47 ^ (uVar30 & 0xffffffffffffff00 |
                              (ulong)(byte)((char)uVar30 >> (bVar31 & 0x1f))));
  uVar24 = uVar24 ^ (ulong)(uVar24 == uVar47) * (uVar24 & uVar38);
  uVar17 = (int)uVar25 * -0x3e9812ee;
  bVar31 = (byte)uVar17;
  uVar47 = (long)(ulong)CONCAT31((uint3)(uVar44 >> 9),bVar41) >> (bVar31 & 0x3f);
  bVar59 = (uVar54 & 1) != 0;
  uVar54 = uVar54 >> 1 | (ushort)bVar59 << 0xf;
  uVar16 = (ushort)(byte)((char)(uVar24 >> 8) - bVar59) << 8;
  uVar55 = uVar54 ^ (ushort)(uVar16 == uVar54) * (uVar54 ^ (ushort)uVar47);
  uVar56 = (uint)lVar57 & 0xffff0000 | (uint)uVar55;
  uVar16 = uVar16 ^ (ushort)(uVar16 == uVar54) * (uVar16 & uVar55);
  uVar24 = uVar24 & 0xffffffffffff0000 | (ulong)uVar16;
  bVar31 = bVar31 & 0x1f;
  uVar56 = uVar56 >> bVar31 | uVar56 << 0x20 - bVar31;
  uVar54 = (short)uVar56 * 0x70f4;
  uVar40 = (ulong)(uVar56 & 0xffff0000 | (uint)uVar54);
  if ((byte)((byte)uVar32 | 0xb8) != 0) {
    uVar17 = (uint)bVar41 |
             ((uint)(uVar35 >> 8) & 0xffffff00 |
             (uint)(byte)(((uVar33 & 0xff00 | (ushort)(byte)((char)uVar33 >> 9)) << 1) >> 8)) << 8;
  }
  uVar54 = (ushort)uVar38 | uVar54;
  uVar38 = uVar38 & 0xffffffffffff0000 | (ulong)uVar54;
  uVar56 = (uVar17 & 0xffffff00 | (uint)(byte)((char)uVar17 >> 1)) + 0x9e4cf7e7;
  bVar31 = (byte)uVar56;
  uVar58 = uVar40 ^ (uVar24 == uVar40) * uVar40;
  uVar35 = (uVar30 & 0xffffffffffff0000) >> (bVar31 & 0x3f) | uVar39 << 0x40 - (bVar31 & 0x3f);
  uVar44 = (uint)CONCAT62((int6)(lVar26 >> 0x11),(short)(char)uVar47) | 0xc0000000;
  uVar24 = ((ulong)(ushort)((short)uVar16 >> 0xf) << 0x20 |
           uVar24 ^ (ulong)(uVar24 == uVar40) * (uVar24 & uVar58)) / (ulong)uVar44;
  uVar30 = uVar24 & 0xffffffff;
  uVar32 = (uVar32 | 0xb8) & uVar25;
  uVar17 = (uint)(byte)(uVar30 >> 8);
  uVar56 = uVar56 & 0xffff00ff;
  if ((uVar44 >> (bVar31 & 0x1f) | 0 << 0x20 - (bVar31 & 0x1f)) == 0x50cd4ee5) {
    uVar39 = (ulong)(uVar43 & 0xac5a0000 | uVar17);
  }
  uVar43 = 0x1f;
  if ((uint)uVar32 != 0) {
    while ((uint)uVar32 >> uVar43 == 0) {
      uVar43 = uVar43 - 1;
    }
  }
  uVar44 = (uint)uVar47 & 0xffff0000;
  uVar45 = (uint)uVar58;
  uVar18 = uVar56 | 1 << (uVar45 & 0x1f);
  uVar40 = (ulong)(((uint)(0 >> (bVar31 & 0x3f)) & 0x7fff8000) << 1 | uVar17);
  if ((uVar56 >> (uVar45 & 0x1f) & 1) != 0 || (uVar35 & 0xd6e32ba3) == 0) {
    uVar40 = uVar32;
  }
  uVar56 = (uint)(ushort)((ushort)uVar47 << ((byte)uVar56 & 0x1f)) & 0xffffbfff;
  bVar36 = (byte)uVar18;
  lVar57 = ((ulong)uVar51 & 0xffffffffffffff00 | 0xdf4f0000 |
           (ulong)(byte)((char)uVar51 + '\x15' + bVar31)) << (bVar36 & 0x3f);
  bVar10 = (byte)uVar30;
  bVar10 = bVar10 ^ (bVar10 == 0) * (bVar10 & (bVar10 == 0) * bVar36);
  uVar24 = uVar24 & 0xffffff00;
  lVar26 = uVar40 + lVar57;
  uVar30 = (ulong)uVar18 | 0xffffffff8e196487;
  bVar41 = (byte)(uVar43 >> 0x1f);
  uVar58 = uVar32 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar32 + 0xaed9);
  uVar16 = CONCAT11((char)(uVar30 >> 8) + (char)(uVar24 >> 8) + ((ushort)uVar32 < 0x5127),
                    (byte)uVar30) >> ((byte)uVar30 & 0x1f);
  uVar18 = (int)uVar58 + (int)lVar26 + 1;
  bVar31 = (byte)uVar16;
  bVar36 = bVar31 & 0x3f;
  uVar25 = (uVar25 & 0xffffffffffffff00 | (ulong)(SCARRY8(uVar40,lVar57) != SCARRY8(lVar26,0))) <<
           bVar36 | (uVar24 | (byte)(bVar10 ^ (bVar10 == bVar41) *
                                              (bVar10 & (bVar41 ^ (bVar10 == bVar41) *
                                                                  (bVar41 ^ (byte)uVar54))))) >>
                    0x40 - bVar36;
  uVar17 = ((uint)(uVar35 << 0x10) >> 0x11) + 0x7f07364a +
           (uVar45 ^ (uVar45 >> 0x18 & 1) << 0x18) * 2;
  bVar31 = bVar31 & 0x1f;
  bVar36 = (byte)(uVar25 >> 8);
  uVar17 = uVar17 >> bVar31 | uVar17 << 0x20 - bVar31;
  if ((uVar47 >> 0x24 & 1) != 0) {
    uVar17 = (uint)uVar30 & 0xffff0000 | (uint)uVar16 & 0xffffdfff;
  }
  lVar20 = (ulong)uVar18 << 1;
  bVar31 = (byte)(uVar24 >> 0xb);
  auVar2 = ZEXT116(0) << 0x40 |
           ZEXT816((ulong)(uVar43 & 0xffffff00 | (uint)(lVar26 == 0)) << 0x22 |
                   (ulong)(ushort)uVar18);
  uVar43 = (int)(uVar58 << 0xe) << 1;
  uVar45 = (uint)lVar57 | uVar44 | uVar56;
  uVar18 = (((uint)uVar25 & 0xffff0000 | (uint)CONCAT11(bVar36 << 5 | bVar36 >> 3,(char)uVar25)) >>
           1) << (bVar31 & 0x1f) |
           ((uint)lVar20 & 0xffff0000 | (uint)(ushort)((short)lVar20 << 1)) >>
           0x20 - (bVar31 & 0x1f);
  uVar30 = ((uVar38 >> (bVar31 & 0x3f) | uVar38 << 0x40 - (bVar31 & 0x3f)) & 0xbfffffffffffffff) <<
           1;
  uVar44 = uVar44 | (ushort)((short)uVar56 << 1);
  cVar11 = (char)((ulong)uVar18 >> 8);
  uVar25 = (ulong)(uVar18 & 0xffff0000 | (uint)CONCAT11(cVar11 << 1,(char)uVar18)) | 0x100;
  uVar16 = CONCAT11((char)((uVar24 >> 0xb) >> 8) << 1,bVar31);
  uVar33 = (ushort)uVar45;
  if ((short)(uVar16 - uVar33) < 0) {
    uVar43 = uVar43 & 0xffff0000 | (uint)(ushort)uVar25;
  }
  uVar16 = CONCAT11((char)((ulong)(ushort)(uVar16 ^ (ushort)(uVar16 == uVar33) *
                                                    (uVar16 & (uVar33 ^ (ushort)(uVar16 == uVar33) *
                                                                        (uVar33 ^ uVar16)))) >> 8),
                    bVar31) >> (bVar31 & 0x3f);
  uVar32 = uVar30 & 0xffffffff;
  uVar35 = uVar39 >> 2 ^ 0x3b68;
  lVar57 = (uVar39 & 0xfb00 |
           (ulong)(byte)(((byte)uVar39 >> 1 | (byte)uVar39 << 7) >> 1 | (cVar11 < '\0') << 7)) << 1;
  uVar56 = (SUB164(auVar2 >> (bVar31 & 0x3f),0) | SUB164(auVar2 << 0x41 - (bVar31 & 0x3f),0)) +
           uVar44;
  iVar52 = uVar44 * 0x16bf5e28;
  uVar54 = uVar16 - ((ushort)((long)uVar25 >> 0x14) | (ushort)uVar32);
  uVar24 = ((ulong)(uint6)((int6)(uint6)(ushort)(uVar45 >> 0x10) >> 1) << 0x10) >> 0x1a;
  uVar18 = SEXT14((char)uVar24);
  bVar31 = (byte)((ulong)uVar16 >> 8);
  uVar33 = uVar16 & 0xff | (ushort)(byte)(bVar31 << 3 | bVar31 >> 5) << 8;
  uVar44 = uVar33 * uVar18;
  uVar55 = (ushort)uVar35;
  uVar51 = uVar55 + 0x991b;
  uVar45 = (uint)uVar35 & 0xfbff0000;
  cVar11 = (char)uVar32;
  bVar36 = (char)uVar56 - 1;
  uVar13 = (uint)uVar24;
  uVar46 = uVar13 ^ (uint)(uVar44 == uVar13) *
                    (uVar13 ^ SUB164(SEXT816((long)(ulong)uVar33) * SEXT816((long)(ulong)uVar18) >>
                                     0x40,0));
  lVar26 = (ulong)uVar54 + 0x2fc2a16c;
  uVar50 = (uVar17 & 0xffffff00 | (uint)(byte)((char)uVar17 >> ((byte)uVar54 & 0x1f))) * -0x1c979db6
           - 1;
  uVar17 = (uint)((uVar51 & 1) != 0) << 0x1f;
  uVar18 = (uVar45 | uVar51) >> 1 | uVar17;
  bVar31 = (byte)(((ulong)(uVar44 ^ (uint)(uVar44 == uVar13) * (uVar44 & uVar46)) & 0xf) << 4);
  uVar13 = (uint)lVar26 & 0xffff0000;
  uVar25 = (ulong)(uint)(int)(char)bVar36 |
           1 << ((ulong)(byte)((char)uVar43 << ((byte)uVar16 & 0x1f)) & 0x3f);
  uVar44 = uVar50 & 0xffff0000;
  uVar16 = (short)((ushort)((uint)iVar52 >> 0x18) | (ushort)((uint)iVar52 >> 8) & 0xff00) >>
           (bVar31 & 0x1f);
  uVar33 = (short)uVar25 + 0x7b72;
  uVar54 = (ushort)((uVar56 & 0xffffff00 | (uint)bVar36) >> 1) ^ 0xab68;
  uVar56 = (uint)CONCAT11((((char)((ulong)lVar26 >> 8) + -0x6e) - ((bVar36 & 1) != 0)) * '\x04' +
                          '\x01',bVar31);
  uVar24 = (ulong)uVar43 & 0xffffffffffff0000 | (ulong)(ushort)(short)(char)uVar54;
  bVar36 = (byte)((ulong)uVar16 >> 8);
  if ((char)uVar16 < (char)bVar36) {
    uVar18 = uVar45 >> 1 | uVar17 |
             ((0x35cb9feb << (bVar31 & 0x1f) | 0x35cb9febU >> 0x20 - (bVar31 & 0x1f)) & 0x3fff0000)
             >> 0xe;
  }
  uVar16 = (ushort)(byte)~((char)uVar50 * (char)lVar57) - 0xa7c & 0xff;
  uVar50 = ((int)lVar57 + 0x66536d27) -
           (uint)(0x43f9 < (ushort)((((ushort)uVar30 & 0xff00 |
                                     (ushort)(byte)(cVar11 << 5 |
                                                   (byte)(CONCAT11(uVar55 < 0x66e5,cVar11) >> 4)))
                                    >> 1) + 0x1dd3));
  uVar30 = (uVar44 | (ushort)(uVar16 | (ushort)(byte)((char)((ulong)(uVar44 | (ushort)(uVar16 | (
                                                  ushort)bVar36 << 8)) >> 8) - 0x17) << 8)) * uVar24
  ;
  bVar36 = (byte)(uVar30 >> 0x28);
  bVar10 = (byte)uVar30;
  uVar45 = ~(uint)uVar24;
  uVar17 = ((uVar13 | uVar56 & 0x7fff8000) << 1 |
           (uint)(CONCAT11((char)uVar33,(char)((uVar13 | uVar56) << 1)) & 0x6aff)) - (uint)bVar36;
  uVar16 = (ushort)uVar17 | 1 << (uVar33 & 0xf);
  bVar31 = (byte)uVar16;
  uVar30 = uVar30 & 0xffffff00 |
           (ulong)(byte)(bVar10 ^ (bVar10 == bVar36) *
                                  (bVar10 & (bVar36 ^ (bVar10 == bVar36) * (bVar36 ^ bVar31))));
  bVar31 = bVar31 & 0x3f;
  auVar2 = ZEXT116(bVar10 < bVar36) << 0x40 | ZEXT416(uVar17 & 0xffff0000 | (uint)uVar16);
  uVar25 = (long)(int)((uint)uVar25 & 0xffff0000 | (uint)uVar33) << 1;
  uVar33 = ((ushort)uVar25 | 1) + 1;
  uVar17 = (int)uVar30 + 0x3b7fbcb5;
  lVar26 = -(ulong)(uVar17 & 0xffff0000 |
                   (uint)(ushort)((ushort)uVar17 >>
                                 ((SUB161(auVar2 >> bVar31,0) | SUB161(auVar2 << 0x41 - bVar31,0)) &
                                 0x1f)));
  bVar31 = ((byte)lVar26 | 0xf2) - 0xd;
  uVar24 = uVar30 * uVar30;
  uVar43 = (uint)(uVar24 >> 0x20);
  uVar56 = (uint)(ushort)(short)(char)bVar31;
  uVar17 = uVar45 & 0xffff0000 | uVar56;
  uVar44 = ((uint)lVar26 & 0xffffff00 | (uint)bVar31) & ~(1 << ((uint)uVar33 & 0x1f));
  sVar42 = 0xf;
  uVar16 = (ushort)uVar44;
  if (uVar16 != 0) {
    while (uVar16 >> sVar42 == 0) {
      sVar42 = sVar42 + -1;
    }
  }
  cVar11 = (char)((uVar24 & 0xffffffff) >> 8);
  bVar31 = cVar11 << 1;
  bVar36 = (byte)(uVar24 & 0xffffffff);
  uVar32 = (ulong)CONCAT11(bVar31 | cVar11 < '\0',bVar36);
  bVar59 = (bVar31 & 4) != 0;
  lVar26 = (uVar25 & 0xffffffffffff0000 | (ulong)(ushort)~uVar33) + (uVar24 & 0xffff0000 | uVar32);
  uVar18 = uVar18 + 0x87cf1267 & 0xffffff00 | uVar50 & 0xff;
  if ((uVar56 & 0xff) == 0x99766cce) {
    uVar18 = uVar17;
  }
  bVar31 = (byte)(uVar43 >> 1);
  uVar24 = uVar24 & 0xffff0000 | uVar32 & 0xffffffffffffff00 |
           (ulong)(byte)(bVar36 ^ (bVar36 == bVar31) * (bVar36 & bVar31));
  uVar13 = (uint)(ushort)((((ushort)uVar46 | 0xc000) >> 0xb | (ushort)uVar46 << 5) ^
                         (uVar54 & 0xff00 | (ushort)uVar30));
  uVar56 = uVar46 & 0xffff0000 | uVar13;
  uVar18 = uVar18 ^ 0x40c0cffa;
  uVar33 = (short)uVar50 - 1;
  if (uVar18 == 0) {
    uVar33 = uVar16;
  }
  uVar17 = uVar43 - uVar17;
  if (!bVar59) {
    uVar17 = (uint)uVar24;
  }
  uVar44 = uVar44 ^ 1 << (uVar18 & 0x1f);
  lVar57 = 0;
  bVar31 = 0;
  if (uVar50 != 0) {
    while (bVar31 = (byte)lVar57, (uVar50 >> lVar57 & 1) == 0) {
      lVar57 = lVar57 + 1;
    }
  }
  uVar25 = 0x3fffffffffffffff;
  auVar2 = ZEXT1216(CONCAT48((uVar43 >> 1 & 0xff | (uVar43 >> 9) << 8) ^ uVar56,uVar24)) &
           (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 / ZEXT816(0xc000000000000000);
  auVar2 = auVar2 % ZEXT816(0xc000000000000000);
  uVar43 = (int)lVar26 + 0x600d809c + uVar44 * 2;
  if (0 < (short)uVar44) {
    uVar25 = SUB168(auVar2,0) & 0xffffffff;
  }
  uVar16 = (ushort)uVar43;
  if (1 < (short)uVar44) {
    uVar33 = uVar16;
  }
  uVar14 = SUB164(auVar3,0) + SUB164(auVar2,0) * 2;
  uVar17 = uVar17 & 0xffff0000 | (uint)(ushort)((short)uVar17 >> 1) | uVar56;
  uVar37 = uVar17 << 1 | (uint)((int)uVar17 < 0);
  uVar16 = uVar16 >> 1;
  uVar43 = uVar43 & 0xffff0000;
  uVar29 = (uint)CONCAT62((int6)((ulong)lVar26 >> 0x10),0x6005);
  uVar17 = uVar14 + uVar29;
  if (!CARRY4(uVar14,uVar29) && uVar17 != 0) {
    uVar33 = SUB162(auVar3,0);
  }
  uVar54 = (ushort)(uVar50 >> (bVar31 & 0x1f));
  if (bVar59) {
    uVar54 = uVar33;
  }
  uVar33 = (ushort)(uVar56 << 1);
  uVar51 = uVar33 | 4;
  uVar56 = (uVar46 & 0xffff0000 | uVar13 & 0x7fff8000) << 1;
  uVar33 = (ushort)(byte)(((uVar33 >> 2 & 1) != 0) << 7) << 1 |
           (ushort)(uVar25 <= (uVar56 | (uint)uVar51));
  cVar11 = (char)uVar16;
  bVar36 = -cVar11;
  uVar16 = uVar16 & 0xff00 | SUB162(auVar2,0) << 0xf | (ushort)bVar36;
  if (bVar36 != 0) {
    uVar17 = uVar17 & 0xffff0000 | (uint)uVar33;
  }
  uVar13 = uVar56 | (uint)uVar51 & 0xffffff00;
  uVar55 = 0xf;
  if (uVar16 != 0) {
    while (uVar16 >> uVar55 == 0) {
      uVar55 = uVar55 - 1;
    }
  }
  uVar24 = (ulong)(uVar17 >> 1 | (uint)((uVar17 & 1) != 0) << 0x1f);
  uVar46 = (uint)CONCAT62(SUB166(auVar3 >> 0x10,0),SUB162(auVar3,0) * (short)uVar37);
  uVar50 = uVar46 << (bVar31 & 0x1f) | uVar46 >> 0x20 - (bVar31 & 0x1f);
  cVar48 = (char)((ulong)uVar50 >> 8);
  cVar15 = cVar48 + '\x01';
  uVar46 = uVar29 + 0x30c8a36 & 0xffffff00 | (uint)(byte)~(byte)(uVar29 + 0x30c8a36);
  if (SCARRY1(cVar48,'\x01') != cVar15 < '\0') {
    uVar46 = uVar18 << (bVar31 & 0x1f);
  }
  uVar12 = CONCAT11(cVar15,(char)uVar50 + bVar31);
  if (bVar59) {
    uVar33 = uVar12;
  }
  bVar31 = (byte)uVar55 | 1;
  bVar60 = cVar15 < '\0';
  uVar12 = uVar12 << 1 | (ushort)bVar60;
  uVar18 = uVar50 & 0xffff0000 | (uint)uVar12;
  uVar23 = (ushort)(byte)((ulong)uVar18 >> 8);
  uVar50 = (uVar45 & 0xfffe0000) >> 1 | (uint)bVar59 << 0x1f | (uint)uVar23;
  uVar25 = (ulong)(ushort)(SUB162(auVar2 >> 0x10,0) | 0x7916) << 0x10;
  if (bVar60 != (short)uVar12 < 0) {
    uVar25 = (ulong)uVar46;
  }
  bVar36 = (byte)uVar33;
  uVar33 = uVar33 & 0xff00 | (ushort)(byte)((byte)uVar51 >> 1 | (cVar11 != '\0') << 7);
  uVar14 = uVar13 | (uint)bVar36;
  uVar44 = (uint)((uint3)(uVar44 >> 8) & 0xffff00) << 8 | (uint)uVar55 & 0xffffff00 |
           (uint)(byte)(bVar31 + 0x67);
  if (SBORROW1(bVar31,-0x67) == false) {
    uVar37 = uVar14;
  }
  uVar29 = uVar43 | (uint)(uVar16 >> 1) & 0xffffff00 | (uint)bVar36;
  uVar30 = ((ulong)uVar18 - 0x49551c56) + (ulong)uVar46 + uVar24 + (ulong)bVar60 &
           0xffffffffffffff00;
  iVar52 = uVar46 + (uVar17 >> 1) * 8;
  bVar10 = (byte)iVar52;
  bVar31 = bVar10 & 0x1f;
  uVar34 = 0x13c3f5f0 << bVar31 | 0x13c3f5f0U >> 0x21 - bVar31;
  uVar16 = (ushort)uVar44;
  uVar17 = uVar46 & 0xffff0000 | (uint)(ushort)((ushort)uVar46 & ~(1 << (uVar16 & 0xf)));
  uVar46 = uVar34 ^ (uint)(uVar18 == uVar34) * (uVar34 ^ uVar17);
  uVar18 = uVar18 ^ (uint)(uVar18 == uVar34) * (uVar18 & uVar46);
  uVar51 = (short)uVar46 - uVar16;
  uVar32 = (ulong)uVar37;
  if (SBORROW2((short)uVar46,uVar16)) {
    uVar32 = uVar24 & 0x79968f3b;
  }
  bVar10 = bVar10 + (char)uVar51;
  uVar16 = (ushort)iVar52;
  uVar17 = uVar17 + 0xe7124603;
  uVar55 = (ushort)(uVar24 & 0x79968f3b) >> 1 | 0x8000;
  uVar37 = 0xffffffff;
  if (SBORROW4(uVar44,uVar44) != false) {
    uVar37 = (uint)(ushort)uVar32 | 0xffff0000;
  }
  cVar11 = (char)uVar18;
  uVar18 = uVar18 & 0xffff0000;
  uVar12 = uVar55 >> 0xb;
  uVar51 = (uVar51 & 0xff00 | uVar16 & 0xff) << 5 | uVar12;
  uVar47 = (ulong)(uVar46 & 0xffff0000 | (uint)uVar51);
  uVar49 = (ushort)uVar37 >> (bVar10 & 0x1f);
  uVar35 = (ulong)(uVar18 | (ushort)((short)cVar11 * (short)cVar11)) & 0xffffffffffff7b2f;
  uVar44 = (uint)uVar35;
  cVar11 = (char)uVar35;
  bVar31 = bVar10 - cVar11;
  if ((SBORROW1(bVar10,cVar11) != false) != (char)bVar31 < '\0') {
    uVar44 = uVar18 | uVar54;
  }
  bVar10 = (byte)uVar17;
  uVar18 = (uint)(byte)(bVar10 >> 1 | bVar10 << 7);
  bVar60 = (((uVar24 & 0x79960000 | (ulong)uVar55) >> (bVar31 & 0x3f)) >> (uVar47 & 0x3f) & 1) != 0;
  uVar34 = uVar44 & 0xffffff00 | (uint)!bVar60;
  uVar16 = (uVar16 & 7) << 5 | uVar12 |
           (ushort)(byte)(((char)(uVar47 >> 8) - (char)uVar51) - bVar60) << 8;
  uVar44 = uVar46 & 0xffff0000 | (uint)uVar16;
  bVar60 = CARRY4(uVar44,uVar34);
  if (!bVar60 && uVar44 + uVar34 != 0) {
    uVar30 = (ulong)(uVar37 + uVar29);
  }
  uVar9 = CONCAT14(bVar60,uVar17 & 0xffffff00 | uVar18) >> 7;
  uVar17 = (int)(short)uVar16 * (int)(short)uVar49;
  uVar22 = (uint6)(uVar25 >> 0x11);
  bVar10 = (byte)((ulong)(ushort)uVar17 >> 8);
  bVar41 = (byte)(uVar17 >> 0x18);
  uVar12 = (ushort)uVar17 & 0xff | (ushort)(byte)(bVar10 + bVar41) << 8;
  uVar16 = (ushort)CARRY1(bVar10,bVar41);
  uVar54 = uVar12 - uVar49;
  uVar51 = (ushort)(uVar17 >> 0x10) & 0xff;
  uVar55 = (ushort)(uVar49 <= uVar12 && uVar16 <= uVar54) << 8;
  uVar19 = uVar51 | uVar55;
  if ((SBORROW2(uVar12,uVar49) != SBORROW2(uVar54,uVar16)) == (short)(uVar54 - uVar16) < 0) {
    uVar30 = uVar30 & 0xffffffffffff0000 | (ulong)uVar23;
  }
  uVar30 = uVar30 << 1;
  uVar44 = SEXT24((short)uVar33);
  uVar24 = ((ulong)((uint)(uVar32 >> 1) & uVar50) | 0xafb9) >> 1;
  uVar16 = (ushort)uVar29;
  uVar46 = (uint)(uVar49 ^ uVar16) + 0x1424bd37;
  if (0xebdb42c8 < (uint)(uVar49 ^ uVar16)) {
    uVar30 = (ulong)(uVar18 << 0x1a | (uint)uVar9 & 0xffff0000 |
                    (uint)(ushort)((ushort)((short)uVar9 << ((bVar31 ^ 1) & 0x1f)) >> 0xc |
                                  uVar16 << 4));
  }
  uVar55 = uVar55 | uVar51;
  if (0xf18c < (uVar16 & 0xff)) {
    uVar44 = (uint)(ushort)((short)uVar33 >> 0xf) << 0x10;
  }
  uVar18 = ((uint)CONCAT62(uVar22,uVar19) & 0xffff0000 | (uint)uVar19) + 1;
  uVar25 = (ulong)(uint)((int)CONCAT62(uVar22,uVar55) * 9);
  lVar26 = 0;
  iVar52 = 0;
  if (uVar18 != 0) {
    while (iVar52 = (int)lVar26, (uVar18 >> lVar26 & 1) == 0) {
      lVar26 = lVar26 + 1;
    }
  }
  uVar54 = (short)uVar30 << 1 | (ushort)((short)uVar30 < 0);
  uVar32 = uVar30 & 0xffffffffffff0000;
  uVar33 = (ushort)uVar18 ^ 0x2225;
  uVar18 = iVar52 - ((uint)uVar32 | (uint)uVar54);
  bVar31 = (byte)uVar44 + 0x94;
  if (0x6b < (byte)uVar44 && bVar31 != 0) {
    uVar50 = (uVar45 & 0xfffe0000) >> 1 | (uint)bVar59 << 0x1f;
  }
  uVar35 = uVar25 ^ 1 << ((ulong)(ushort)((short)uVar14 + 0x283b) & 0x3f);
  uVar47 = (ulong)(uVar18 & 0xffff0000 |
                  (uint)(ushort)(((short)uVar18 + 0x33be) -
                                (ushort)((((uVar16 & 0xff) + 0xe73 | (ushort)uVar46) & 1) != 0)));
  if ((uVar17 & 0x400) == 0) {
    uVar47 = uVar30 & 0xffff0000 | (ulong)uVar54;
  }
  uVar30 = (ulong)((uint)uVar24 & 0xffff0000 | (uint)uVar55) << 1;
  uVar18 = SEXT24((short)(uVar33 >> 4 | uVar33 << 0xd));
  cVar11 = (char)uVar35;
  uVar39 = uVar32 | (ulong)uVar54 & 0xffffffffffffff00 | (ulong)(byte)uVar54;
  cVar15 = ((char)uVar51 + bVar36) * '\x02';
  uVar17 = CONCAT22((ushort)(uVar56 >> 0x11),(short)((uVar13 | (byte)(bVar36 - 0x3f)) >> 1) + uVar33
                   ) >> 1;
  uVar38 = uVar30 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar30 >> 1 | 0x8000);
  uVar56 = CONCAT22((undefined2)(cVar11 >> 7),(short)cVar11 + 0xb58) &
           ((int)uVar22 << 0x10 | (uint)CONCAT11((char)(uVar25 >> 8),cVar15));
  uVar25 = uVar38 - uVar47;
  uVar30 = 0;
  if (uVar38 >= uVar47) {
    uVar30 = uVar47;
  }
  uVar35 = uVar35 & 0xffffffffffffff00 | (ulong)(byte)(cVar15 + '^' + (uVar38 < uVar47));
  uVar38 = (ulong)(uVar56 & 0xffff0000 |
                  (uint)(ushort)((ushort)uVar56 & 0xff |
                                (ushort)(byte)~(byte)((ulong)uVar56 >> 8) << 8)) ^ 0xe331;
  bVar36 = (byte)(uVar38 >> 8);
  uVar38 = (ulong)(uVar56 & 0xffff0000 | (uint)CONCAT11(bVar36 >> 5 | bVar36 << 3,(char)uVar38));
  uVar35 = uVar35 ^ (ulong)(uVar35 == uVar38) *
                    (uVar35 & (uVar38 ^ (ulong)(uVar35 == uVar38) * (uVar38 ^ uVar39)));
  uVar56 = uVar17 & 0xffffff00 | 0x80000800;
  uVar45 = (uVar43 | (ushort)uVar24) - 1;
  uVar38 = (ulong)uVar46 & 0x6321dee4;
  uVar40 = (ulong)(uVar56 & 0xffff0000 |
                  (uint)(ushort)((ushort)uVar56 | (ushort)(byte)((char)uVar17 - 1)));
  uVar43 = (uint)uVar35 ^ ((uint)uVar35 >> 0xb & 1) << 0xb;
  uVar33 = (short)(uVar25 >> 0x20) * 0x2bc0;
  bVar41 = (byte)(1 << ((ushort)uVar45 & 0xf));
  bVar21 = (byte)((ulong)uVar46 >> 8) & 0xde;
  bVar31 = bVar31 ^ bVar41;
  uVar16 = (ushort)uVar43 ^ 0xef;
  uVar56 = (int)(short)uVar16 * (int)(short)uVar16;
  uVar16 = (ushort)(uVar56 >> 0x10);
  cVar11 = (char)uVar56;
  uVar39 = (uVar32 | (ushort)((((short)uVar39 << 1 | 1U) << 0xb | (ushort)uVar35 >> 5) &
                             (ushort)uVar38)) ^ 0xc21e;
  uVar24 = (ulong)(ushort)(((short)cVar11 & 0xff00U |
                           (ushort)(byte)(cVar11 << 2 |
                                         (byte)(((short)cVar11 & 0xffU |
                                                (ushort)(uVar16 != 0 && uVar16 != 0xffff) << 8) >> 7
                                               ))) & ~(1 << (uVar16 & 0xf)));
  uVar13 = (uint)CONCAT62((uint6)(((ulong)((uint7)(uint3)((uVar50 << 1) >> 8) ^ 0xfffffffff56111) <<
                                  8) >> 0x10) & ~(uint6)((ulong)(1 << (uVar24 & 0x3f)) >> 0x10),
                          (short)uVar56) & 0xffff00ff;
  uVar40 = uVar40 & 0xfffffffffffffd00 | (uVar40 & 0xfffffffffffffdff) >> 3 & 0x1f;
  uVar17 = uVar46 >> 0x18 | (uVar46 & 0xff0000) >> 8;
  lVar26 = uVar24 << 1;
  bVar36 = (byte)lVar26;
  uVar45 = (uVar45 & 0xffffff00 | uVar56 >> 0x10 & 0xff) << (bVar36 & 0x1f);
  auVar2 = ZEXT816(uVar35 & 0xffffffff00000000 | (ulong)uVar43 & 0xffffffffffff0000 |
                   (ulong)(ushort)((short)cVar11 * (short)(char)(uVar46 >> 0x18))) *
           ZEXT816(uVar25 << 0x20 | uVar25 >> 0x20 & 0xffffffffffff0000 |
                   (ulong)(ushort)(uVar13 >> 1));
  bVar10 = SUB161(auVar2,0);
  bVar27 = bVar21 ^ (bVar10 == bVar21) * (bVar21 ^ ((byte)((ulong)lVar26 >> 8) | bVar21));
  bVar53 = (byte)uVar45;
  bVar53 = bVar53 >> 3 | bVar53 << 5;
  uVar35 = (ulong)(uVar45 & 0xffffff00 | (uint)bVar53);
  sVar42 = (short)uVar40;
  auVar2 = CONCAT88(CONCAT71(SUB167(auVar2 >> 0x48,0),SUB161(auVar2 >> 0x40,0) & (byte)uVar39),
                    CONCAT71(SUB167(auVar2 >> 8,0),bVar10 ^ (bVar10 == bVar21) * (bVar10 & bVar27)))
           & (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 / ZEXT816(uVar35 | 0xc000000000000000);
  uVar45 = SUB164(auVar2 % ZEXT816(uVar35 | 0xc000000000000000),0) ^ 0x559d5e46;
  uVar24 = (ulong)(uint7)((long)(uVar47 | 0x400000000) >> 9) << 8;
  uVar32 = uVar35 & 0xff | uVar24;
  uVar35 = uVar35 & 0xffffffffffffff00 | 0xc000000000000000 |
           (ulong)(byte)(bVar53 + (char)((long)(uVar47 | 0x400000000) >> 1));
  uVar16 = ((ushort)(CONCAT12((bVar36 + (char)(uVar25 >> 0x20) & 1) != 0,sVar42) >> 5) |
           sVar42 << 0xc) & (ushort)uVar17;
  uVar25 = uVar39 & 0xffffffff;
  sVar42 = uVar16 + 1;
  uVar43 = (uVar46 & 0x63210000 | (uint)CONCAT11(bVar27,(char)uVar38 << (bVar41 & 0x1f))) &
           0x533f8d65;
  if (sVar42 != 0 && SCARRY2(uVar16,1) == sVar42 < 0) {
    uVar43 = SUB164(auVar3,0);
  }
  uVar47 = (ulong)(uVar43 + 1);
  auVar2 = ZEXT816(uVar32 | 0xc000000000000000);
  auVar3 = ZEXT416(uVar45 & 0xffff0000 | uVar45 >> 1 & 0x7fff) << 0x40 |
           auVar3 & (undefined  [16])0xffffffffffffffff;
  auVar4 = auVar3 / auVar2;
  sVar28 = (short)uVar35;
  uVar16 = sVar42 + sVar28 + 1;
  uVar40 = (ulong)((uVar18 & 0x2ca42300 | (uVar18 & 0xfe) >> 1) + (int)uVar40 + 0x3707af0f);
  lVar26 = ((ulong)uVar44 & 0xffffffffffff0000 |
           (ulong)(ushort)(((ushort)uVar44 & 0xff00 | (ushort)bVar31) >> 1 |
                          (ushort)((bVar31 & 1) != 0) << 0xf)) + uVar40;
  uVar44 = SUB164(auVar3 % auVar2,0) * -0xd0f639a;
  bVar31 = SUB161(auVar4,0);
  bVar41 = (byte)((ulong)uVar44 >> 8);
  bVar10 = (byte)uVar44;
  bVar21 = bVar41 ^ (bVar31 == bVar41) * (bVar41 ^ bVar10);
  uVar38 = CONCAT71(SUB167(auVar4 >> 8,0),bVar31 ^ (bVar31 == bVar41) * (bVar31 & bVar21));
  if ((uVar16 & 0xcc91) != 0 && -1 < (short)uVar16) {
    uVar38 = uVar47;
  }
  uVar58 = (uVar47 * 3 + 0x54835d6c & 0xffff0000 |
           (ulong)(ushort)(short)(char)((ulong)(ushort)(sVar28 << 6) >> 8)) + 0x21f1fc4b;
  uVar47 = uVar47 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)(uVar43 + 1) & ~(1 << ((ushort)uVar58 & 0xf)));
  uVar17 = (int)(((ulong)(uVar17 | (uVar46 & 0xff00) << 8 | uVar46 * 0x1000000) & 0x7fffffff) << 1)
           << 1;
  bVar31 = (byte)uVar58;
  uVar35 = -(ulong)((uint)uVar35 >> (bVar31 & 0x1f));
  uVar40 = (long)uVar40 >> (bVar31 & 0x3f);
  uVar54 = (ushort)(uVar47 << 1) | (ushort)(uVar40 >> 0x3f);
  uVar51 = (short)uVar32 * 0x400;
  uVar43 = (uint)uVar24;
  bVar41 = (byte)uVar40 ^ (byte)uVar33;
  uVar32 = uVar40 & 0xffffffffffffff00 | (ulong)bVar41;
  uVar24 = uVar58 << (bVar31 & 0x3f) | uVar58 >> 0x40 - (bVar31 & 0x3f);
  sVar42 = (short)lVar26;
  if (SBORROW2(uVar54,uVar51)) {
    uVar33 = (ushort)uVar24;
  }
  bVar31 = (byte)uVar24;
  uVar45 = ((uint)lVar26 & 0xffff0000 | (uint)(ushort)(sVar42 << 1 | (ushort)(sVar42 < 0))) << 0xe;
  Var7 = CONCAT18(((ushort)uVar32 >> ((ushort)uVar35 & 0xf) & 1) != 0,
                  uVar30 & 0xffffffffffff0000 | (ulong)uVar33) >> 3;
  uVar44 = (uVar43 & 0xffff0000 |
           (uint)(ushort)(uVar51 ^ (ushort)(uVar54 == uVar51) * (uVar51 ^ (ushort)uVar35))) << 5;
  uVar18 = uVar43 >> 0x1b | uVar44;
  bVar53 = (byte)Var7;
  bVar27 = bVar53 ^ (bVar36 == bVar53) * (bVar53 ^ bVar31);
  uVar58 = (ulong)Var7 & 0xffffffffffffff00 | (ulong)bVar27;
  uVar43 = (uint)uVar24 & 0xd74cbe43;
  sVar42 = (short)((int)(uVar17 | (uint)uVar47 >> 0x1f) >> 1) << 1;
  cVar11 = (char)sVar42;
  uVar47 = (ulong)((uint)CONCAT62((int6)(short)((ushort)(uVar13 >> 0x11) |
                                               (ushort)(((uint)((uVar56 & 1) != 0) << 0x1f) >> 0x10)
                                               ),(short)(char)bVar36) & 0xffffff00 |
                   (uint)(byte)(bVar36 ^ (bVar36 == bVar53) * (bVar36 & bVar27)) | 0x12959770);
  uVar24 = (ulong)((int)uVar32 + 0x90680819) - 0x6c8ff010;
  uVar32 = uVar35 ^ (ulong)(uVar47 == uVar35) * (uVar35 ^ uVar24);
  uVar47 = uVar47 ^ (ulong)(uVar47 == uVar35) * (uVar47 & uVar32);
  uVar56 = (uint)((uVar38 & 0xffffffffffff0000 |
                  (ulong)CONCAT11(((char)(uVar38 >> 8) - bVar31) - (uVar54 < uVar51),(char)uVar38))
                 >> 1) | 0xa020a6b;
  uVar33 = (ushort)uVar47;
  uVar54 = (ushort)CONCAT31((int3)(char)((uVar40 & 0xffffffffffffff00) >> 8),bVar41 + cVar11);
  bVar36 = (byte)uVar43;
  bVar41 = cVar11 << (bVar36 & 0x1f);
  uVar30 = 0;
  if (uVar18 != 0) {
    while ((uVar18 >> uVar30 & 1) == 0) {
      uVar30 = uVar30 + 1;
    }
  }
  uVar13 = (uint)uVar25 & 0x1f;
  if ((uVar43 >> uVar13 & 1) == 0) {
    uVar25 = uVar39 & 0xffff0000 | (ulong)(ushort)uVar18;
  }
  bVar36 = (bVar36 ^ (byte)(1 << uVar13)) & 0x1f;
  uVar43 = uVar45 << bVar36 | uVar45 >> 0x20 - bVar36;
  uVar43 = uVar43 & 0xffff0000 | (uint)(ushort)((ushort)uVar43 & (ushort)uVar58);
  uVar45 = ((uint)uVar47 & 0xffff0000 |
           (uint)(ushort)(uVar33 ^ (ushort)(uVar33 == uVar54) *
                                   (uVar33 & (uVar54 ^ (ushort)(uVar33 == uVar54) *
                                                       (uVar54 ^ (uVar16 & 0xcc91 |
                                                                 (ushort)(byte)((char)((ulong)
                                                  CONCAT11(bVar21,bVar10) >> 8) << 1 |
                                                  (char)bVar21 < '\0') << 8)))))) + 0x6638cca8 &
           0xffff0000;
  bVar36 = (char)uVar30 - bVar41;
  uVar35 = (uVar30 & 0xffff) - 1;
  uVar46 = (int)uVar32 + 0xc802fe;
  uVar16 = (ushort)uVar56 >> 6;
  uVar44 = uVar18 ^ (uVar44 >> 0xd & 1) << 0xd;
  uVar13 = uVar45 ^ 0xfa8d9330;
  uVar30 = 0x3f;
  if (uVar13 != 0) {
    while (uVar13 >> uVar30 == 0) {
      uVar30 = uVar30 - 1;
    }
  }
  uVar17 = CONCAT22((short)((int)uVar17 >> 0x11),sVar42) & 0xffffff00 |
           (uint)(bVar41 & (byte)uVar16);
  bVar10 = (char)uVar18 - 0x3e;
  uVar50 = uVar44 & 0xffffff00 | (uint)bVar10;
  uVar32 = uVar35 & 0xffffffffffff0000 |
           (ulong)(ushort)(CONCAT11((char)(uVar35 >> 8) * '\x02',(char)uVar35 << 1) | 1);
  if (bVar10 == 0 || (SCARRY1((char)uVar18,-0x3e) != SCARRY1(bVar10,'\0')) != (char)bVar10 < '\0') {
    uVar32 = (ulong)uVar50;
  }
  uVar18 = ((uVar43 << (bVar36 & 0x1f) | uVar43 >> 0x20 - (bVar36 & 0x1f)) -
           (int)(uVar30 ^ 0xffffffffcaf2047e)) - 1;
  lVar57 = (long)(uVar30 ^ 0xffffffffcaf2047e) >> 1;
  lVar26 = 0x3f;
  uVar43 = 0x3f;
  if (uVar32 != 0) {
    while (uVar43 = (uint)lVar26, uVar32 >> lVar26 == 0) {
      lVar26 = lVar26 + -1;
    }
  }
  cVar11 = (char)((uVar56 & 0xffffff00 | (uint)(byte)~(byte)uVar56) >> 1);
  cVar15 = (char)((ulong)(long)(int)(uVar13 & 0xffffff00) >> 8);
  cVar48 = cVar11 + cVar15;
  if (cVar48 == '\0' || SCARRY1(cVar11,cVar15) != cVar48 < '\0') {
    uVar46 = uVar46 & 0xffff0000 |
             (0xffffffffU >> (bVar31 & 0x1f) | -1 << 0x20 - (bVar31 & 0x1f)) >> 1 & 0xffff;
  }
  sVar28 = (short)uVar50;
  lVar26 = ((long)sVar28 - (ulong)uVar17) + -1;
  sVar42 = (short)((uVar13 & 0xffffff00) >> 0x10);
  uVar33 = sVar28 + 1;
  uVar44 = uVar44 & 0xffff0000;
  uVar14 = uVar44 | (uint)uVar33;
  uVar37 = uVar14 + 0xe4 + (uint)bVar36;
  uVar51 = (short)uVar18 >> 1;
  uVar29 = (uint)lVar26 & 0xffff0000 | (uint)(ushort)((ushort)lVar26 >> 1 | (short)uVar17 << 0xf);
  uVar13 = (uint)CONCAT71((int7)(uVar32 >> 8),0xab) >> 1;
  uVar50 = (int)sVar28 << 0x1f;
  uVar54 = (ushort)lVar57;
  uVar34 = (uint)lVar57;
  if ((uVar13 | uVar50) != 0) {
    uVar43 = uVar43 & 0xffff0000 | uVar34 & 0xffff;
  }
  uVar56 = uVar56 >> 0x12;
  if (uVar14 == 0xffffffff) {
    uVar56 = uVar46 << 1;
  }
  uVar8 = uVar14 + 1 & 0xffff0000 | uVar14 + 1 >> 0xe & 3;
  uVar46 = 0;
  if (uVar17 != 0) {
    while ((uVar17 >> uVar46 & 1) == 0) {
      uVar46 = uVar46 + 1;
    }
  }
  uVar1 = 0x1f;
  if (uVar29 != 0) {
    while (uVar29 >> uVar1 == 0) {
      uVar1 = uVar1 - 1;
    }
  }
  uVar18 = (uVar18 & 0xffff0000 | (uint)uVar51 & 0xffffff00 | (uint)(byte)((char)uVar51 + 0x90)) &
           uVar43;
  if (-1 < (int)uVar18) {
    uVar18 = uVar18 & 0xffff0000 | (uint)uVar54;
  }
  uVar43 = uVar43 << 1;
  cVar11 = (char)(uVar17 >> 5);
  bVar31 = -cVar11;
  uVar32 = (ulong)(uVar17 >> 5) & 0xffffffffffffff00 |
           (ulong)(byte)((short)((short)(((int)sVar42 << 0x10) >> 1) * uVar51) >> 0xf) << 0x3b |
           (ulong)bVar31;
  uVar30 = (long)(short)uVar54;
  if (cVar11 == '\0' && bVar31 != 0) {
    uVar30 = (ulong)uVar14;
  }
  bVar41 = (byte)uVar46 & 0x1f;
  iVar5 = (uint)(ushort)uVar30 * (uVar43 & 0xffff);
  uVar30 = uVar30 & 0xffffffffffff0000 | (ulong)(ushort)iVar5;
  bVar31 = (byte)(uVar46 + 0xa816dfb7) & 0x3f;
  uVar14 = (uint)(CONCAT18(uVar32 < 0xf93185a2,uVar30) >> bVar31) | (uint)(uVar30 << 0x41 - bVar31);
  uVar30 = (long)(int)((int)(uVar37 & 0xffffff00 | (uint)(byte)((char)uVar37 - 0x19)) >>
                       (bVar10 & 0x1f) & 0xffffff00U |
                      (uint)(byte)(((char)(sVar42 >> 4) + '\x13') - (uVar46 < 0x57e92049))) *
           0x4eb0fc3f;
  iVar52 = (int)(uVar30 >> 0x20);
  return (ulong)(uVar14 >> 0x14 | uVar14 << 0xc) + (uVar30 & 0xffffffff) +
         (ulong)(uVar46 + 0xa816dfb7) +
         ((ulong)(uVar13 & 0xffff0000 | uVar50) | (ulong)(ushort)((uint)iVar5 >> 0x10)) +
         (ulong)(uVar44 | (uint)uVar33 & 0xffffff00 | (uint)(byte)~(byte)uVar33) +
         (((ulong)uVar43 - 0x7f79fbddd) - (ulong)(iVar52 != 0 && iVar52 != -1)) + (ulong)uVar8 +
         (ulong)(uVar29 ^ uVar8) + (ulong)(uVar56 >> 0x1f | uVar56 << 1) +
         (ulong)((uVar34 >> bVar41 | uVar43 << 0x20 - bVar41) << 9 | uVar1 >> 0x17) +
         (ulong)(((uint)(ushort)(uVar16 | ((ushort)((int)uVar24 << (bVar36 & 0x1f)) |
                                          (ushort)(uVar45 >> 0x20 - (bVar36 & 0x1f))) << 10) |
                 (int)uVar58 + 0x920db7adU) & 0xffffff00 |
                (uint)((uVar46 >> (uVar56 & 0x1f) & 1) != 0 || uVar17 == 0)) +
         (uVar25 & 0xffffffffffffff00 |
         (ulong)(byte)((char)uVar25 + -0x47 + ((byte)((ulong)(uint)(int)sVar28 >> 8) & 1))) +
         (ulong)(uVar18 >> 0xd | uVar18 << 0x13) +
         (ulong)(uVar1 & 0xffffff00 | (uint)(byte)((char)uVar1 - 1)) + uVar32;
}



// WARNING: Removing unreachable block (ram,0x00402d20)
// WARNING: Removing unreachable block (ram,0x004025b3)
// WARNING: Removing unreachable block (ram,0x00402d1c)
// WARNING: Removing unreachable block (ram,0x00402f7f)
// WARNING: Removing unreachable block (ram,0x00402241)

long log_size_10_var_001(void)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  sbyte sVar16;
  byte bVar21;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined uVar22;
  short sVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  byte bVar28;
  uint uVar29;
  uint uVar30;
  ushort uVar31;
  uint uVar32;
  long lVar33;
  ushort uVar34;
  ushort uVar35;
  byte bVar36;
  uint uVar37;
  ulong uVar38;
  char cVar39;
  ulong uVar40;
  ulong uVar41;
  char cVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  byte bVar46;
  char cVar47;
  ulong uVar48;
  int iVar49;
  uint uVar50;
  ulong uVar51;
  ulong uVar52;
  bool bVar53;
  bool in_PF;
  bool bVar54;
  
  uVar11 = CONCAT62(0xd9cc084e9be8,(ushort)(byte)(in_PF << 2 | 0x93) << 8 | 0xc9) &
           0xffffffffffffff00;
  uVar14 = 0xb740bbc756ad1060;
  uVar25 = 0xdbae8300;
  uVar8 = ((ushort)uVar11 | 0xc9) * -0xcc6;
  uVar29 = ((uint)(byte)(uVar11 >> 8) << 8 | 0xd8b60000) ^ 0x8b69063f;
  if (uVar29 != 0) {
    uVar25 = 0xdbae253c;
  }
  if ((int)uVar29 < 0) {
    uVar14 = 0;
  }
  uVar32 = (uVar25 & 0xffffff00 | (uint)(byte)((byte)uVar25 + 0x36)) * -0x36f9a82d;
  uVar29 = uVar25 + 0xd2727107 & 0xffff0000;
  uVar11 = (ulong)((uint)uVar8 & 0xffffff00 | 0x9be80000 | (uint)(byte)((char)uVar8 << 1) | 1) *
           0x442066c9;
  uVar38 = uVar11 & 0xffffffff;
  uVar4 = (undefined2)(uVar11 >> 0x30);
  uVar22 = (undefined)(uVar11 >> 0x20);
  sVar23 = CONCAT11(-(char)(uVar11 >> 0x28),uVar22);
  uVar43 = uVar29 | (uint)(ushort)((ushort)(uVar25 + 0xd2727107) ^ 2) & 0xffffff00 |
           (uint)(byte)(uVar38 >> 8);
  cVar39 = -0x4e - (char)uVar38;
  uVar24 = (uint)CONCAT71(0xffffffffffffd9,cVar39);
  if (cVar39 != '\0' && (SBORROW1(-0x4e,(char)uVar38) != false) == cVar39 < '\0') {
    uVar24 = 0x2a657673;
  }
  bVar36 = (byte)((ulong)CONCAT22(uVar4,sVar23) >> 8);
  uVar11 = (ulong)(uint)((int)uVar38 << 0xb);
  uVar11 = uVar11 & 0xffffffffffff0000 |
           (ulong)(byte)(((byte)(uVar11 >> 8) & 0x31) >> 1 | (0xfc1122c8 < uVar24) << 7) << 8;
  uVar24 = CONCAT22(uVar4,CONCAT11(bVar36 << 7 | bVar36 >> 2,uVar22) >> 6) ^ 0x3c2ee30c;
  uVar38 = (ulong)uVar24;
  uVar27 = (ulong)((byte)uVar25 < 0xca) << 0x3f | 0x71bc32b7bfbeebe0;
  uVar26 = uVar38 ^ (ulong)(uVar11 == uVar38) * (ulong)(uVar24 ^ uVar43);
  uVar29 = uVar29 | (ushort)((short)uVar43 << 1);
  uVar11 = (uVar11 ^ (ulong)(uVar11 == uVar38) * (uVar11 & uVar26)) >> 5;
  uVar25 = 0;
  lVar45 = 0x3f;
  while (0xfffff8e48b690006U >> lVar45 == 0) {
    lVar45 = lVar45 + -1;
  }
  uVar14 = (uVar11 & 0xffffffffffff0000 |
           (ulong)(ushort)((CONCAT22((ushort)uVar26 & 0xff00 |
                                     (ushort)(byte)((char)uVar26 - (char)((ulong)uVar29 >> 8)),
                                     (short)uVar11) & 0x3fffffff) /
                          (uint)(ushort)((ushort)(((uVar14 & 0xffffffffffff0000) << 1) >> 0x36) |
                                        0xc000))) << 0x17;
  uVar38 = CONCAT62(0x4cda08784420,(0x66c9 - sVar23) - (ushort)(0xd3c88fefeacd264d < (ulong)uVar32))
           ^ 0x1a0ddc47;
  uVar43 = (uint)(CONCAT14((0x5f15U >> ((ushort)uVar38 & 0xf) & 1) != 0,uVar29) >> 0x19);
  uVar11 = 0;
  if (uVar27 != 0) {
    while ((uVar27 >> uVar11 & 1) == 0) {
      uVar11 = uVar11 + 1;
    }
  }
  uVar26 = uVar14 ^ (ulong)(uVar14 == uVar11) *
                    (uVar14 & (uVar11 ^ (ulong)(uVar14 == uVar11) * (uVar11 ^ 0x33a7cb85)));
  if ((long)uVar11 < (long)uVar14) {
    uVar25 = (uint)uVar38;
  }
  uVar8 = 0xf;
  sVar23 = (short)(uVar26 >> 0x10);
  if (sVar23 < 0) {
    while ((ushort)(sVar23 >> 0xf) >> uVar8 == 0) {
      uVar8 = uVar8 - 1;
    }
  }
  uVar24 = ((uint)uVar8 | 0xdbae0000) * 0x20;
  uVar29 = (uVar29 << 8 | uVar43) ^ 2;
  bVar28 = (char)uVar29 - 8;
  lVar45 = (ulong)((uint)(ushort)((ushort)((uVar43 & 2) != 0) + 0x7087) | 0xd77d0000) - 0xba13e6f;
  bVar36 = 0x32;
  if (-1 < sVar23) {
    bVar36 = 0x85;
  }
  bVar46 = (char)(uVar32 >> 7) + 2;
  uVar32 = SEXT14((char)bVar46);
  auVar2 = CONCAT88(((ulong)uVar24 - 0x204de81f) + uVar26 * 0x674f9d0a,uVar26 * 0x33a7ce85) &
           (undefined  [16])0xffffffffffffffff;
  auVar2 = ZEXT816(SUB168(auVar2 % ZEXT816(0xf1bc32b7bfbeebe0),0) & 0x3fffffffffffffff) << 0x40 |
           auVar2 / ZEXT816(0xf1bc32b7bfbeebe0) & (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 / ZEXT816(0xf1bc32b7bfbeebe0);
  uVar43 = ((uint)lVar45 & 0xffffff00 | (uint)(byte)((byte)lVar45 | 0x32)) + 1;
  uVar12 = CONCAT71(SUB167(auVar3 >> 8,0),
                    SUB161(auVar3,0) + (char)((ulong)(uVar29 & 0xffffff00) >> 8) +
                    (uVar24 < 0x28dcf732));
  bVar36 = bVar36 | bVar46;
  if (in_PF) {
    bVar36 = bVar46;
  }
  uVar8 = (ushort)(uVar24 + 0xd72308ce);
  uVar34 = uVar8 & 0xd803;
  bVar54 = (uint)uVar12 == uVar43;
  uVar43 = uVar43 ^ (uint)bVar54 *
                    (uVar43 ^ (SUB164(auVar2 % ZEXT816(0xf1bc32b7bfbeebe0),0) | 0x2000000));
  uVar10 = (ushort)uVar12;
  bVar53 = uVar32 != 0 || 0xfffffffe < uVar32 - 1;
  bVar15 = (byte)uVar34;
  bVar21 = bVar15 - bVar28;
  uVar35 = uVar8 & 0xd800 | (ushort)(byte)(bVar21 - bVar53);
  uVar8 = (ushort)(bVar15 < bVar28 || bVar21 < bVar53);
  uVar9 = 0x4732 - uVar35;
  uVar31 = (uVar9 - uVar8) * -0x2f10;
  uVar44 = uVar43 + 0x8cbb157a;
  cVar47 = -2 - (char)uVar31;
  uVar34 = uVar34 << 1;
  uVar11 = (ulong)(uVar29 & 0xffff0000 | (uint)CONCAT11(uVar35 < 0x4733 && uVar8 <= uVar9,bVar28)) -
           0xf99df6a4;
  auVar2 = ZEXT816((ulong)(long)(int)(short)(((uVar10 ^ (ushort)bVar54 * (uVar10 & (ushort)uVar43))
                                             & 0xff) * (ushort)bVar36)) *
           ZEXT816(0x82e0000000000000);
  uVar14 = (ulong)(SUB168(auVar2 >> 0x40,0) == 0) << 8;
  cVar39 = (char)(uVar14 / (ulong)(uVar44 | 0xc0000000));
  uVar26 = (ulong)((uint)(((ulong)(((((uVar25 | (uint)(1 << (uVar38 & 0x3f))) & 0xffffff00 ^
                                     0x7bac7f) & 0xffffff00 | 0x1c) ^ 0x3f195e09) & 0xffffff00) |
                          0x7698) << 5) & 0xffff0000 | 0xbd74) + 0x444c1514;
  uVar27 = uVar11 & 0xffffffff;
  uVar38 = (ulong)(uint)((int)((uint)uVar31 | 0x9cca0000) >> 1) * -0x6d023b53;
  uVar29 = uVar24 + 0xd72308ce & 0x928b0000 | (uint)uVar34 & 0xffffff00 |
           (uint)(byte)((char)uVar34 >> 1);
  cVar42 = (char)(uVar44 >> 8) >> 0x16;
  uVar8 = (short)uVar44 >> 0x1e & 0xff00U | (ushort)(byte)(cVar42 << 1 | cVar42 < '\0');
  uVar25 = (int)(uVar14 % (ulong)(uVar44 | 0xc0000000) >> 0x14) + 0xd3e68a92;
  uVar25 = uVar25 & 0xffff0000 | (uint)CONCAT11((char)((ulong)uVar25 >> 8) >> 1,(char)uVar25);
  uVar43 = ((uint)uVar11 & 0xff | 0x32b55f00) + 0x575878c;
  if (uVar29 + 0x606bc9d9 != -1 &&
      (SCARRY4(uVar29,0x606bc9d9) != SCARRY4(uVar29 + 0x606bc9d9,1)) ==
      (int)(uVar29 + 0x606bc9da) < 0) {
    uVar43 = uVar25;
  }
  uVar9 = ((short)(char)(cVar39 * cVar39) << 4 | (ushort)uVar29 >> 0xc) + 1;
  uVar34 = ~(1 << ((ushort)(byte)(cVar47 * '\x02' | cVar47 < '\0') & 0xf)) & 0xe204;
  sVar16 = (sbyte)uVar34;
  uVar8 = uVar8 >> sVar16 | uVar8 << 0x10 - sVar16;
  iVar49 = (uVar43 - uVar9) + -0x68c25a30 + (uint)((byte)uVar26 < 0x74);
  bVar36 = 0;
  if (-0x3b < (char)(byte)iVar49) {
    bVar36 = (byte)iVar49;
  }
  uVar9 = (uVar9 & 0xff) * (ushort)(byte)((ulong)uVar9 >> 8);
  uVar10 = SEXT12((char)bVar46);
  uVar40 = ((ulong)uVar32 & 0xff00 | (ulong)(byte)(bVar46 >> 4 | bVar46 * '\x10')) ^ 0x7a32;
  uVar26 = uVar26 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)uVar26 & 0xff00 | (ushort)(byte)-((byte)uVar26 + 0x8c));
  uVar52 = (ulong)uVar32 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar10 ^ (ushort)(uVar9 == uVar10) * (uVar10 ^ uVar9)) |
           0xffffffffcc746d0c;
  uVar43 = (uint)((uVar38 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar38 << 1)) << sVar16) >>
           1;
  uVar14 = (ulong)(CONCAT22(0xff,(short)iVar49 << 0xf | 0x7fc5) | 0xc0000000);
  uVar11 = (ulong)((uVar25 << 1 ^ 0xb6bba199) & ~(uint)(1 << (uVar52 & 0x3f)) & 0x3fffffff) << 0x20;
  uVar29 = ((uVar44 & 0xffff0000 | 0xc0000000 | (uint)uVar8 & 0xffffff00 |
            (uint)(byte)((byte)uVar8 ^ (byte)uVar27)) >> 1) - iVar49;
  lVar45 = 0x3f;
  if (uVar26 != 0) {
    while (uVar26 >> lVar45 == 0) {
      lVar45 = lVar45 + -1;
    }
  }
  uVar38 = CONCAT62((uint6)(((ulong)SUB164(auVar2 >> 0x20,0) << 0x20) >> 0x10) |
                    (uint6)(uVar11 / uVar14 >> 0x10) & 0xffff,0xf15e);
  uVar25 = 0;
  if ((uint)lVar45 != 0) {
    while (((uint)lVar45 >> uVar25 & 1) == 0) {
      uVar25 = uVar25 + 1;
    }
  }
  bVar28 = (byte)uVar25;
  bVar46 = bVar28 ^ (bVar28 == 0x5e) * bVar28;
  uVar26 = (ulong)(uVar43 | 0xc0000000);
  uVar11 = ((ulong)(((uint)(uVar11 % uVar14) ^ (uint)uVar40) & 0x3fffffff) << 0x20 |
           uVar38 & 0xffffff00 | (ulong)(byte)((bVar28 == 0x5e) * (bVar46 & 0x5e) ^ 0x5e)) / uVar26;
  uVar40 = ~uVar40;
  lVar33 = uVar26 - 0x41979e87;
  uVar24 = ((uint)uVar52 & 0xffff0000 | uVar43 & 0xffff) + 0xf027d5ee;
  uVar24 = uVar24 ^ (uVar24 >> 8 & 1) << 8;
  uVar43 = (int)uVar27 - 1;
  lVar13 = ((uVar38 & 0xffffffff00000000 | uVar11 & 0xffff0000 |
            (ulong)(ushort)(((ushort)uVar11 & 0xff00 | (ushort)(byte)((char)uVar11 - (char)uVar29))
                           * (short)uVar29)) + 0x5e5e1412) * lVar45;
  cVar39 = (char)uVar40 + -0x6a;
  uVar27 = SUB168(SEXT816(lVar13) * SEXT816(lVar13) >> 0x40,0);
  uVar14 = lVar13 * lVar13;
  uVar43 = uVar43 & 0xffffff00 | (uint)(byte)((char)uVar43 + cVar39 + 1);
  uVar38 = (((ulong)uVar34 << 0x1a) >> 1 & 0x7fff0000) >> 1 |
           (ulong)(((uint)uVar14 >> (SUB164(SEXT816(lVar13) * SEXT816(lVar13) >> 0x40,0) & 0x1f) & 1
                   ) != 0) << 0x3f | 0x100;
  uVar32 = (uint)lVar33 & 0xffff0000 | (uint)(ushort)lVar33 & 0xffffff00 |
           (uint)(byte)((char)lVar33 << 1);
  uVar11 = 1 << (uVar27 & 0x3f);
  uVar26 = uVar38 ^ uVar11;
  bVar28 = (byte)uVar11 & 0x3f;
  uVar11 = CONCAT71((int7)((ulong)lVar45 >> 8),0x7b);
  iVar49 = (int)(short)uVar14 * (int)(short)uVar11;
  sVar23 = (short)((uint)iVar49 >> 0x10);
  uVar11 = uVar11 & 0xffffffff;
  if (sVar23 != 0 && sVar23 != -1) {
    uVar11 = (ulong)(uVar29 & 0xffff0000 | (uint)(ushort)((short)uVar29 + 0x9d00));
  }
  uVar52 = (uVar14 & 0xffffffffffff0000 | (ulong)(ushort)iVar49) & (ulong)uVar24;
  uVar29 = ~uVar32;
  bVar21 = (byte)(uVar11 & 0xffffffffffffff0f);
  uVar25 = ((uint)uVar26 & 0xffff0000 |
           (uint)(ushort)((short)uVar26 << bVar21 | (ushort)uVar43 >> 0x10 - bVar21)) -
           (uVar25 & 0xffffff00 | (uint)bVar46);
  uVar8 = 0xf;
  if ((ushort)uVar24 != 0) {
    while ((ushort)((ushort)uVar24 >> uVar8) == 0) {
      uVar8 = uVar8 - 1;
    }
  }
  uVar48 = (ulong)(uVar29 | 0xc0000000);
  uVar38 = (ulong)((uint)CONCAT62((uint6)((uVar27 << bVar28) >> 0x10) |
                                  (uint6)((CONCAT18((uVar38 >> (uVar27 & 0x3f) & 1) != 0,uVar27) >>
                                          0x41 - bVar28) >> 0x10),sVar23) & 0x3fffffff | 0x100) <<
           0x20 | uVar52 & 0xffffffffffff0000 |
                  (ulong)(ushort)((ushort)uVar52 ^ 1 << ((ushort)uVar11 & 0xf));
  uVar26 = uVar38 / uVar48;
  uVar27 = uVar26 & 0xffffffff;
  uVar11 = uVar11 & 0xffffffffffffff0f | 1;
  uVar34 = (ushort)uVar29;
  uVar29 = ((uint)uVar26 & 0xffff0000 | (uint)(ushort)(short)(char)uVar27) + 0x2014d58e;
  uVar43 = uVar43 * 2;
  cVar42 = ((byte)(CONCAT11(((uint)uVar27 >> 0x1b & 1) != 0,bVar46) >> bVar21 % 9) |
           bVar46 << 9 - bVar21 % 9) + 0x77;
  uVar9 = (ushort)uVar32;
  if (-1 < cVar42) {
    uVar9 = uVar34 >> 8 | uVar34 << 8;
  }
  uVar35 = CONCAT11((char)((ulong)uVar29 >> 8) - (char)(uVar38 % uVar48 >> 8),(char)uVar29);
  uVar10 = uVar35 | 1 << (uVar8 & 0xf);
  uVar32 = uVar29 & 0xffff0000 | (uint)uVar10;
  sVar23 = 0;
  uVar34 = (ushort)uVar43;
  if (uVar34 != 0) {
    while ((uVar34 >> sVar23 & 1) == 0) {
      sVar23 = sVar23 + 1;
    }
  }
  uVar18 = ((uint)uVar11 & 0xffff0000 | (uint)(ushort)((ushort)uVar11 >> (sbyte)uVar11)) + 1;
  uVar44 = (int)register0x00000020 - 0x17;
  uVar11 = (ulong)(uVar18 >> ((byte)uVar18 & 0x1f)) | 0x7210;
  bVar36 = (((-1 - cVar39) - (char)(((uint)(ushort)(short)(char)(bVar36 & 0xa0) | 0xc0000000) >> 1))
           - ((uVar35 >> (uVar8 & 0xf) & 1) != 0)) - cVar42;
  uVar18 = 0;
  if (uVar25 != 0) {
    while ((uVar25 >> uVar18 & 1) == 0) {
      uVar18 = uVar18 + 1;
    }
  }
  uVar14 = CONCAT62((uint6)(uVar14 >> 0x10) & 0xffff,0x3bb6) & 0xfffffffffbffffff;
  lVar45 = 0x3f;
  if (uVar11 != 0) {
    while (uVar11 >> lVar45 == 0) {
      lVar45 = lVar45 + -1;
    }
  }
  uVar10 = uVar10 & 0xff;
  uVar35 = uVar10 | (ushort)(byte)((byte)((ulong)uVar32 >> 8) ^
                                  (byte)((int)(uVar29 & 0xffff0000) >> 0x27)) << 8;
  lVar13 = (ulong)uVar44 << 1;
  bVar46 = (char)uVar44 + (char)uVar10 * '\b';
  uVar34 = uVar34 - uVar35;
  uVar29 = uVar43 & 0xffff0000 | (uint)uVar34;
  iVar49 = (uint)uVar35 * (uint)uVar8;
  uVar10 = (ushort)iVar49 ^ 1 << (uVar34 & 0xf);
  lVar45 = (ulong)(((uint)uVar14 & 0xffff0000 | (uint)(ushort)((short)uVar14 + uVar8)) >> 1 |
                  uVar25 * -0x80000000) + 0xa0 + (ulong)uVar44 * 0x10;
  bVar28 = (byte)uVar10;
  uVar38 = SEXT48(SUB164((ZEXT816(CONCAT44((int)(uVar24 ^ uVar43) >> 0x1f,(int)uVar32 >> 0x1f) &
                                  0x3fffffffffff0000 |
                                  (ulong)(ushort)((uint)iVar49 >> 0x10) & 0xffffffffffffff00 |
                                  (ulong)(byte)((byte)((uint)iVar49 >> 0x10) >> 1)) << 0x40 |
                         ZEXT416(CONCAT22((short)(ushort)iVar49 >> 0xf,uVar10) & 0xffffff00 |
                                 (uint)(byte)(bVar28 ^ (bVar28 == bVar36) *
                                                       (bVar28 & (bVar36 ^ (bVar28 == bVar36) *
                                                                           (bVar36 ^ (byte)(uVar9 + 
                                                  0x74b5 >> 1))))))) /
                         ZEXT816((ulong)uVar29 | 0xc000000000000000),0));
  bVar28 = bVar46 * 'a';
  uVar14 = (ulong)uVar18 + 0x579368be >> 1 & 0x7fff;
  uVar43 = ((uint)lVar45 & 0xffff0000 |
           (uint)CONCAT11((byte)((ulong)lVar45 >> 8) >> (bVar46 & 0x1f),(char)lVar45)) ^ uVar29;
  uVar11 = uVar38 << 3;
  uVar26 = uVar38 >> 0x3d | uVar11;
  uVar9 = (short)lVar13 + 0xda3dU & 0xff00;
  uVar10 = uVar9 | (ushort)bVar28;
  uVar52 = (ulong)(((uint)lVar13 & 0xffffff00 | 0x80) >> 1 | 0x80000000);
  uVar38 = (ulong)uVar29 & 0xffffffffffff0000;
  uVar27 = uVar40 & 0xffffffffffffff00 ^ uVar52;
  uVar29 = ((uint)((ulong)uVar18 + 0x579368be) & 0xffff0000 | (uint)uVar14 & 0xffffff00 |
           (uint)(byte)((char)uVar14 + 0x31)) + uVar43 + 1;
  lVar45 = uVar52 + 0x2d21bcfa;
  uVar25 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 * 0x1000000;
  bVar36 = (bVar28 & 0x1f) % 0x11;
  uVar34 = uVar34 + 0xc84a >> bVar36 | uVar34 + 0xc84a << 0x11 - bVar36;
  uVar14 = uVar38 | 0xc000000000000000 | (ulong)uVar34;
  uVar25 = uVar25 >> (bVar28 & 0x1f) | uVar25 << 0x20 - (bVar28 & 0x1f);
  uVar8 = 0xf;
  if ((ushort)uVar26 != 0) {
    while ((ushort)((ushort)uVar26 >> uVar8) == 0) {
      uVar8 = uVar8 - 1;
    }
  }
  bVar36 = ((char)uVar29 - (char)uVar34) - 1;
  lVar13 = (((ulong)(uint3)(uVar44 >> 8) & 0xffffffffffff00) << 8 | (ulong)uVar8) - 0xae44398c;
  uVar8 = -(short)(char)bVar36;
  uVar40 = (ulong)(ushort)((ushort)(byte)((char)uVar26 + (char)lVar45) * (ushort)(byte)uVar25) &
           0xffffffffffffff0f;
  sVar16 = (sbyte)uVar40;
  uVar29 = uVar29 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar29 & 0xff00 | (ushort)bVar36) << sVar16 |
                         (ushort)uVar25 >> 0x10 - sVar16);
  lVar33 = 0x3f;
  if (uVar14 != 0) {
    while (uVar14 >> lVar33 == 0) {
      lVar33 = lVar33 + -1;
    }
  }
  uVar24 = ((uint)lVar45 & 0xffffff00 | (uint)uVar26 & 0xff) * 0x3247861c;
  uVar32 = ((uint)uVar11 & 0xffff0000 | (uint)uVar40) + 0xda9b8fa6 >> 1;
  uVar31 = (ushort)((ulong)lVar33 >> 0x30);
  uVar35 = uVar34 << 1 & ~(1 << (uVar31 & 0xf));
  uVar26 = uVar27 & 0xffffffffffffff00;
  uVar14 = (ulong)((uint)(uVar10 >> 1) | (uint)uVar10 << 0x1f);
  uVar48 = uVar14 * -0x130676ca;
  lVar45 = SUB168(SEXT816((long)uVar14) * SEXT416(-0x130676ca) >> 0x40,0);
  uVar14 = (ulong)((((int)lVar13 * 0x100000 | (uint)((ulong)lVar13 >> 0x2c)) ^ 0x1c) + uVar25) << 1;
  uVar40 = (ulong)(uVar32 | uVar25 << 0x1f) << ((byte)uVar32 & 0x3f);
  uVar34 = (short)uVar40 - 0x715;
  uVar17 = (ushort)uVar48;
  bVar36 = (byte)uVar34 & 0x3f;
  uVar40 = (uVar40 & 0xffffffffffff0000 | (ulong)uVar34) >> bVar36 |
           (uVar38 | (ulong)uVar35) << 0x40 - bVar36;
  uVar52 = lVar33 >> 0x30 & 0xffffffffffff0000U | (ulong)(ushort)(uVar31 - 0x81);
  if ((short)(uVar31 + 0x2f81) < 0) {
    uVar26 = ((ulong)(ushort)((ushort)(uVar43 >> 0x10) & (ushort)(uVar27 >> 0x10)) << 0x10 ^
             0xfffffffff6af9e98) & 0xffff0000;
  }
  bVar36 = (byte)uVar40;
  uVar51 = (ulong)uVar25 << (bVar36 & 0x3f) | (ulong)(uVar25 >> 0x40 - (bVar36 & 0x3f));
  uVar27 = ((ulong)uVar35 & 0xfe) >> 1;
  uVar18 = (uint)uVar38 | (uint)uVar35 & 0xffffff00 | (uint)uVar27;
  uVar41 = (uVar26 >> 0x1d | (ulong)(uint)(int)(short)uVar8 << 0x23) - 0x3c55ce9a;
  uVar44 = (int)(short)uVar8 >> 0x1f;
  uVar43 = uVar24 & 0xd20f8e8d;
  uVar38 = uVar51 << 1;
  uVar27 = (ulong)CONCAT22((short)uVar8 >> 0xf,(uVar8 & 0xff) * (ushort)(byte)uVar27) |
           1 << ((ulong)uVar43 + 1 & 0x3f);
  uVar8 = ((short)uVar8 >> 0xf) << 1;
  uVar34 = uVar8 & 0xff | 1 |
           (ushort)(byte)((byte)((ulong)(uVar8 | 1) >> 8) |
                         (byte)((ulong)((uint)(ushort)(uVar17 + 0xcf4c) + 0x7787d2b5) >> 8)) << 8;
  lVar13 = (ulong)(uVar9 | (ushort)bVar28 & 0xfffe) << 1;
  uVar25 = (uint)lVar13 & 0x1f;
  uVar37 = uVar29 ^ 1 << uVar25;
  uVar26 = uVar52 << 0xf;
  uVar8 = (ushort)uVar27;
  uVar9 = uVar34 ^ (ushort)(uVar8 == uVar34) * (uVar34 ^ uVar17);
  uVar8 = uVar8 ^ (ushort)(uVar8 == uVar34) * (uVar8 & uVar9);
  uVar51 = uVar27 & 0xffffffffffff0000 | (ulong)uVar8 & 0xffffffffffffff00 |
           (ulong)(byte)((byte)uVar8 | (byte)uVar38 | (long)uVar51 < 0);
  uVar8 = (ushort)((ulong)uVar10 & 0xffffffffffffffc4);
  uVar32 = (uint)(ushort)(uVar8 << (bVar36 & 0xf) | uVar8 >> 0x10 - (bVar36 & 0xf));
  uVar27 = uVar26 & 0xffffffffffff0000;
  uVar19 = (uint)uVar27 |
           (uint)(ushort)(((ushort)(ulong)(CONCAT18((uVar29 >> uVar25 & 1) != 0,uVar52) >> 0x32) &
                           0xff00 | (ushort)uVar26 | 0xff) + (short)uVar51 +
                         (ushort)((uVar44 & 0x8000000) != 0));
  bVar28 = (byte)((ulong)uVar9 >> 8);
  uVar25 = uVar44 & 0xffff0000 ^ uVar44 & 0x8000000 |
           (uint)(ushort)(uVar9 & 0xff | (ushort)(byte)(bVar28 >> 6 | bVar28 << 2) << 8);
  uVar14 = ((uVar14 & 0xffffffffffff0000 | uVar14 & 0xffff | (ulong)(lVar45 != 0 && lVar45 != -1)) ^
           0xbfed) << 1;
  uVar9 = (short)(char)((ulong)uVar10 & 0xffffffffffffffc4) << (bVar36 & 0x1f);
  uVar8 = (ushort)uVar40 | (ushort)lVar13;
  uVar29 = (uint)uVar51;
  uVar44 = uVar32 + uVar29;
  uVar26 = uVar48 & 0xffffffffffffff00;
  if (!CARRY4(uVar32,uVar29)) {
    uVar26 = uVar14;
  }
  uVar52 = (ulong)(ushort)((short)uVar14 * 5000);
  uVar1 = 0;
  if (uVar19 != 0) {
    while ((uVar19 >> uVar1 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
  }
  cVar39 = (char)(uVar41 >> 8) >> 4;
  uVar52 = ((uVar26 & 0xffffffffffff0000 | uVar52) ^ uVar52 & 0x40) - 0x4774450e;
  uVar26 = (ulong)(ushort)(((short)uVar41 >> 0xc & 0xff00U |
                           (ushort)(byte)(cVar39 << 1 | cVar39 < '\0')) + 0x6a48);
  uVar19 = (uint)uVar40 & 0xffff0000 | (uint)(ushort)(uVar8 + 0x80cd);
  iVar49 = 0x1f;
  if (uVar44 != 0) {
    while (uVar44 >> iVar49 == 0) {
      iVar49 = iVar49 + -1;
    }
  }
  uVar43 = (uVar24 & 0xd20f0000 |
           (uint)(ushort)(((ushort)uVar24 & 0x8e00 |
                          (ushort)(byte)((byte)uVar43 &
                                        ((byte)(uVar18 << 1) | (int)uVar18 < 0) &
                                        ~(byte)(1 << ((ulong)uVar43 & 0x3f)))) >>
                         ((byte)uVar8 & 0x1f))) - uVar19 & 0xfffffffe;
  uVar24 = uVar37 & 0xffff0000 | (uint)uVar9 | 0xc0000000;
  uVar18 = (uint)uVar14 & 0xffffff00 | (uint)(byte)((char)uVar14 >> 9);
  uVar40 = uVar40 & 0xffffffff00000000 | (ulong)(uVar19 + 1);
  uVar8 = 0xf;
  if (uVar9 != 0) {
    while (uVar9 >> uVar8 == 0) {
      uVar8 = uVar8 - 1;
    }
  }
  bVar28 = (byte)(uVar19 + 1);
  bVar36 = bVar28 & 0x1f;
  uVar48 = (ulong)(uVar19 + 0x822e1aff +
                  (int)((CONCAT44((((uVar25 << 1 | uVar37 >> 0x1f) - uVar32) -
                                  (uint)((int)uVar25 < 0)) - uVar19,
                                  (uVar29 & 0xffff0000 | (uint)(ushort)(short)(char)(byte)uVar44) &
                                  ~(1 << (uVar44 & 0x1f))) & 0x3fffffffffffffff) % (ulong)uVar24))
           << 1;
  iVar49 = (int)(uVar52 >> 0xe);
  bVar28 = bVar28 & 0x3f;
  uVar52 = uVar52 >> bVar28 | uVar48 << 0x40 - bVar28;
  uVar40 = uVar40 ^ (ulong)((uVar48 & 0xffffffff00000000 | (ulong)((int)uVar48 * uVar43)) == uVar40)
                    * (uVar40 ^ (uVar27 | (byte)uVar44));
  uVar25 = (iVar49 << 1 | (uint)(iVar49 < 0)) << ((byte)uVar40 & 0x1f);
  iVar49 = (int)uVar40 + 1;
  uVar29 = (int)uVar52 + iVar49 * 4;
  uVar26 = ((uVar41 & 0xffffffffffff0000 | uVar26) >> 0xc | uVar26 << 0x34) >> ((byte)iVar49 & 0x3f)
  ;
  uVar9 = (ushort)uVar26 & 0xff00 | (ushort)(byte)((char)uVar26 * '\x02');
  uVar29 = uVar29 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar29 & 0xfed9) << 1 | (ushort)uVar52 >> 0xf);
  bVar28 = (byte)uVar25;
  bVar28 = bVar28 >> 6 | bVar28 << 2;
  uVar25 = uVar25 & 0xffffff00 | (uint)bVar28;
  uVar37 = uVar29 * 0x39e432a8;
  uVar26 = (ulong)uVar37;
  uVar32 = -((int)uVar44 >> 0x1f) + 0x4584ff9e;
  uVar38 = uVar38 & 0xffffffffffff0000 | (ulong)uVar8 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar8 << 1);
  iVar49 = (uint)(ushort)uVar38 * 0xfed9;
  uVar8 = (ushort)((uint)iVar49 >> 0x10);
  if (uVar8 == 0) {
    uVar9 = (ushort)(uVar24 << bVar36) |
            (ushort)((((uint)((ulong)uVar1 ^ 0xffffffff8ec01210) & 0xffff0000 |
                      (uint)(ushort)((short)((ulong)uVar1 ^ 0xffffffff8ec01210) + 0x3b59)) >> 1) >>
                    0x20 - bVar36);
  }
  bVar36 = (byte)iVar49;
  bVar15 = (byte)((ulong)uVar32 >> 8);
  bVar46 = (byte)uVar32;
  bVar21 = bVar15 ^ (bVar36 == bVar15) * (bVar15 ^ bVar46);
  uVar27 = CONCAT62(0x4584,(short)iVar49) & 0xffffffffffffff00 |
           (ulong)(byte)(bVar36 ^ (bVar36 == bVar15) * (bVar36 & bVar21));
  if (bVar15 < bVar36) {
    uVar18 = (uint)uVar14 & 0xffff0000 | uVar44 >> 0x1f;
  }
  uVar34 = CONCAT11(bVar21,bVar46);
  if ((char)bVar36 <= (char)bVar15) {
    uVar34 = uVar8;
  }
  uVar14 = uVar26 ^ (ulong)(uVar27 == uVar26) * (ulong)(uVar37 ^ uVar25);
  uVar10 = (short)uVar14 << ((byte)uVar34 & 0x1f);
  uVar8 = uVar8 & 0xff | (ushort)(byte)((byte)((ulong)uVar8 >> 8) >> 5) << 8;
  uVar14 = uVar27 ^ (ulong)(uVar27 == uVar26) * (uVar27 & uVar14) | 1 << ((ulong)uVar8 & 0x3f);
  uVar35 = (ushort)(CONCAT12((byte)((ulong)uVar10 >> 8) < (byte)((ulong)uVar8 >> 8),uVar34) >> 0xb)
           | uVar34 << 6;
  cVar39 = (char)uVar14 + bVar28;
  uVar32 = uVar29 * 0x23faeb45 >> 1;
  uVar24 = -((int)uVar44 >> 0x1f) & 0xffff0000;
  uVar8 = ~(uVar8 ^ 1 << ((ushort)uVar25 & 0xf));
  bVar36 = (byte)uVar35 & 0x3f;
  uVar14 = uVar14 & 0xffffffffffffff00 | (ulong)(byte)(cVar39 * '\x02' | cVar39 < '\0');
  uVar27 = (ulong)uVar29 ^ 0xedb0;
  bVar28 = (byte)uVar35 ^ (byte)((ulong)uVar35 >> 8);
  uVar9 = uVar9 >> 1;
  uVar26 = -uVar14;
  uVar25 = (uint)(ushort)(((uVar10 & 0xff | 0x5a00) - ((ushort)uVar43 >> ((byte)uVar34 & 0x1f))) -
                         (ushort)(uVar14 != 0)) | 0xbaac0000;
  iVar49 = (int)(short)uVar26 * (int)(short)(uVar8 >> 1 | (ushort)((uVar8 & 1) != 0) << 0xf);
  uVar31 = (ushort)((uint)iVar49 >> 0x10);
  uVar10 = (ushort)iVar49;
  uVar8 = uVar10 & 0xff;
  uVar24 = uVar24 << (bVar28 & 0x1f) | uVar24 >> 0x20 - (bVar28 & 0x1f) | 0x242f9c53;
  uVar43 = (uint)(1 << ((ulong)(uVar31 & 0xff) & 0x3f));
  uVar44 = uVar25 + 0x9913c8b7;
  uVar14 = (ulong)uVar32 & 0xffffffffffff0000 | (ulong)((uVar29 * 0x23faeb45 & 1) != 0) << 0x3f |
           (ulong)(ushort)((short)uVar32 << 1 | (ushort)(0x66ec3748 < uVar25));
  iVar49 = (uint)(ushort)(uVar8 | (ushort)(byte)((char)((ulong)uVar10 >> 8) +
                                                (char)((ulong)uVar31 >> 8)) << 8) *
           (uVar44 & 0xffff);
  uVar10 = (ushort)((uint)iVar49 >> 0x10);
  uVar38 = uVar38 * 2;
  uVar29 = 0;
  if (uVar43 != 0) {
    while ((uVar43 >> uVar29 & 1) == 0) {
      uVar29 = uVar29 + 1;
    }
  }
  uVar26 = (uVar26 & 0xffffffffffff0000 | (ulong)(ushort)iVar49) ^ 1 << (uVar38 & 0x3f);
  lVar45 = uVar38 - 0x2399b507;
  bVar46 = (byte)lVar45 & 7;
  uVar31 = (ushort)uVar26;
  uVar17 = (ushort)lVar45;
  uVar17 = uVar17 ^ (ushort)(uVar31 == uVar17) * (uVar17 ^ uVar9);
  uVar31 = uVar31 ^ (ushort)(uVar31 == uVar17) * (uVar31 & uVar17);
  uVar26 = uVar26 & 0xffffffffffff0000;
  bVar21 = (byte)((ulong)uVar31 >> 8);
  bVar15 = (byte)((ulong)uVar17 >> 8);
  cVar39 = bVar21 - bVar15;
  uVar31 = uVar31 & 0xff;
  if ((SBORROW1(bVar21,bVar15) != SBORROW1(cVar39,'\x01')) == (char)(cVar39 - 1U) < '\0') {
    uVar24 = uVar24 & 0xffff0000 | (uint)uVar10;
  }
  sVar23 = CONCAT11(0x72U >> bVar46 | 'r' << 8 - bVar46,0x6b) +
           ((uVar34 << 6 & 0xff00 | (ushort)(byte)(bVar28 << 1 | (char)bVar28 < '\0')) >> 1 |
           (ushort)((char)bVar28 < '\0') << 0xf) + (ushort)(bVar21 < bVar15 || cVar39 == '\0');
  uVar50 = (int)(char)uVar9 + -0x576a684f + (uint)CARRY1((byte)(uVar10 >> 1),bVar15);
  uVar34 = (ushort)(byte)((char)((uVar35 << bVar36 |
                                 (ushort)((uVar18 << 0xe | uVar18 >> 0x12) >> 0x40 - bVar36)) << 1)
                         + (char)uVar8) * 2 + (ushort)uVar44 + 1;
  uVar43 = ((uint)CONCAT71((int7)((long)uVar14 >> 9),(char)((long)uVar14 >> 1) + (char)uVar17) |
           uVar44) - uVar44;
  uVar25 = ((uint)lVar45 & 0xffff0000 | (uint)uVar17) + 5;
  bVar28 = (byte)uVar25;
  uVar8 = 0U >> (bVar28 & 0xf) | 0 << 0x10 - (bVar28 & 0xf);
  uVar19 = (uint)(ushort)(((ushort)uVar43 ^ 0x62d7) + 0x8722);
  uVar30 = ((uint)CONCAT62(0x6096,sVar23) & 0xffffff00 |
           (uint)(byte)((byte)sVar23 | (byte)((ushort)sVar23 >> 8))) - 1;
  sVar23 = uVar8 << (bVar28 & 0x1f);
  uVar1 = CONCAT22((short)uVar8 >> 0xf,sVar23);
  bVar36 = (byte)uVar30;
  uVar7 = (int)((uVar26 | (ushort)(uVar31 | (ushort)(byte)(cVar39 - 1U) << 8)) << 0x10) << 1;
  lVar45 = (ulong)((int)uVar27 + -0x55447263 +
                  (uint)(ushort)(uVar9 + CONCAT11((char)(uVar26 >> 0x38) + '\x01',
                                                  (char)(uVar26 >> 0x30))) * 8) + 0x65ee2747;
  uVar5 = (uint)(ushort)((short)(char)(((char)uVar9 << 1 | (byte)(uVar44 >> 0x1f)) ^ bVar36) *
                        (short)(char)((ulong)lVar45 >> 8));
  uVar32 = (uVar25 & 0xffff0000 |
           (uint)(ushort)((short)((uVar50 & 0xffffff00 |
                                  (uint)(byte)(((char)uVar50 - (char)uVar31) - 1)) << 1) <<
                         (bVar28 & 0x1f))) + 0xb3f7f102;
  uVar20 = CONCAT31(CONCAT21((short)(uVar32 >> 0x10),(char)uVar32),
                    (char)uVar32 + (char)((ulong)uVar32 >> 8));
  uVar14 = (uVar27 & 0xffffffffffffff00 | uVar27 >> 1 & 0x7f) & 0xffffffffae31f73d | 0xc000;
  uVar32 = (uint)(ushort)uVar14;
  uVar18 = uVar5 | ((uint)(ushort)lVar45 & 0x3fff) << 0x10;
  uVar37 = uVar18 / uVar32;
  uVar6 = uVar7 | uVar37 & 0xffff;
  uVar18 = (uint)(byte)((bVar36 - (char)((ulong)(ushort)(uVar18 % uVar32) >> 8)) - 1);
  uVar32 = uVar30 & 0xffffff00 | uVar18;
  uVar30 = (uVar50 & 0x7fff8000) << 1 | (uint)(ushort)((ushort)uVar25 | (ushort)uVar20);
  uVar25 = 0;
  if (uVar6 != 0) {
    while ((uVar6 >> uVar25 & 1) == 0) {
      uVar25 = uVar25 + 1;
    }
  }
  uVar9 = (uVar34 & 0xff00 | (ushort)(byte)((char)uVar34 << 3)) & (ushort)uVar44;
  uVar20 = uVar20 & ~(1 << ((uVar19 & 0xf8) >> 3));
  uVar26 = (ulong)uVar20;
  uVar40 = (ulong)uVar30 - 0xbee33f21;
  uVar38 = (ulong)CONCAT14(uVar30 < 0xbee33f21,uVar32);
  uVar32 = uVar32 << 9;
  uVar30 = (uint)(uVar38 >> 0x18);
  uVar27 = (ulong)(uVar30 | uVar32);
  bVar36 = (byte)uVar20;
  uVar20 = (int)uVar14 << (bVar36 & 0x1f);
  uVar44 = (uVar44 & 0xffff0000 | (uint)(ushort)(short)(char)((ulong)(uVar7 | uVar5) >> 8)) &
           (uVar29 & 0xffff0000 | (uint)uVar9);
  uVar14 = (ulong)uVar24 << 0x20 | (ulong)uVar8;
  if ((uVar11 & 0x400) == 0) {
    uVar14 = uVar26;
  }
  uVar8 = (ushort)uVar44;
  uVar9 = uVar9 & uVar8;
  if ((uVar37 & 0x100) == 0 && (uVar37 & 0x4000) == 0) {
    uVar40 = uVar40 & 0xffffffffffff0000 | uVar14 & 0xffff;
  }
  uVar14 = uVar14 & 0xffffffffffff0000 | (ulong)(ushort)(uVar9 + sVar23 * 8);
  bVar46 = SUB161(ZEXT816((ulong)uVar6) * ZEXT816((ulong)uVar6) >> 8,0);
  bVar28 = bVar36 + bVar46;
  bVar53 = SCARRY1(bVar36,bVar46) != SCARRY1(bVar28,'\0');
  uVar11 = uVar26 & 0xffffffffffffff00 | (ulong)bVar28;
  if (bVar53 != (char)bVar28 < '\0') {
    uVar11 = uVar26 & 0xffffffffffff0000 | uVar27 & 0xffff;
  }
  uVar26 = (ulong)(uVar19 << 0x1d | (uVar43 & 0xffff0000 | uVar19) >> 3);
  if (!bVar53) {
    uVar11 = uVar11 & 0xffffffffffff0000 | (ulong)uVar8;
    uVar26 = uVar27;
  }
  if (bVar28 == 0 || bVar53 != (char)bVar28 < '\0') {
    uVar44 = uVar20 & 0xffff0000 |
             (uint)(ushort)(((short)uVar20 + -0x9a5) - (ushort)((ushort)uVar40 < 0x45f4));
  }
  bVar28 = (byte)uVar11;
  uVar52 = (ulong)(0xffffffff36875639 < uVar14 ||
                  CARRY8(uVar14 + 0xc978a9c6,(ulong)CARRY1(bVar36,bVar46))) << 0x20 |
           uVar25 - uVar27 & 0xffff0000 | (ulong)(ushort)((short)(uVar25 - uVar27) << 1 | 1);
  uVar8 = (ushort)uVar26 & 0xff00 | (ushort)(byte)((char)uVar26 >> (bVar28 & 0x1f));
  uVar43 = uVar30 | (uVar18 & 0x7f) << 9 | 0x32d7e7c4;
  iVar49 = (int)(uVar11 >> (bVar28 & 0x3f)) + 0x405ddd7c;
  uVar25 = ((uint)(uVar52 >> (bVar28 & 0x1f)) | (uint)(uVar52 << 0x21 - (bVar28 & 0x1f))) +
           0xc44eab2a;
  uVar18 = (uVar30 | (uVar18 & 0x7f) << 9) + (int)uVar14 | uVar44;
  uVar11 = (long)(int)uVar43 * (long)(int)uVar43;
  bVar36 = (byte)iVar49;
  uVar43 = (int)(uVar29 & 0xffff0000 | (uint)uVar9) >> (bVar36 & 0x1f);
  bVar36 = bVar36 & 0x1f;
  uVar29 = iVar49 << bVar36 | (uint)uVar40 >> 0x20 - bVar36;
  uVar31 = uVar8 << 1 | (ushort)((short)uVar8 < 0);
  uVar9 = (ushort)(uVar25 >> 0x10);
  uVar48 = (ulong)uVar1 - 1;
  bVar28 = (byte)((ulong)uVar29 >> 8);
  bVar36 = (byte)uVar29;
  uVar52 = (ulong)(uVar29 & 0xffff0000 | (uint)CONCAT11(bVar28,bVar36));
  uVar29 = CONCAT31(CONCAT21(uVar9,(char)((ulong)uVar25 >> 8) << 1),uVar48 != 0 && uVar1 != 0) &
           0xffff;
  uVar10 = (ushort)uVar29 & 0x3fff;
  uVar8 = (ushort)(byte)((byte)(uVar52 >> 8) | 0xc0);
  uVar34 = uVar10 / uVar8 & 0xff;
  uVar43 = uVar43 & 0xffff0000 | (uint)(ushort)((short)uVar43 << (bVar36 & 0x1f));
  sVar16 = (sbyte)((ulong)bVar36 & 0xffffffffffffff0f);
  uVar35 = ((ushort)bVar28 << 8 | 0xc000 | (ushort)((ulong)bVar36 & 0xffffffffffffff0f)) >> sVar16 |
           0x6da4 << 0x10 - sVar16;
  uVar52 = uVar52 & 0xffffffffffff0000 | (ulong)uVar35;
  bVar36 = (byte)((ulong)uVar35 >> 8);
  uVar8 = -(uVar34 | (ushort)(byte)(((char)((ulong)(ushort)(uVar34 | uVar10 % uVar8 << 8) >> 8) -
                                    bVar36) - 1) << 8);
  uVar51 = -(uVar11 >> 0x20 & 0xffff) & 0xffff;
  bVar28 = (byte)(uVar38 >> 0x18);
  uVar32 = uVar32 & 0xffff0000;
  uVar24 = (uint)CONCAT11(((char)(uVar27 >> 8) - (char)uVar8) + -1,bVar28);
  uVar38 = (ulong)uVar18 * 2 +
           ((ulong)(uVar29 | (uint)uVar9 << 0x10) & 0xffffffffffff0000 | (ulong)uVar8);
  uVar14 = (ulong)uVar44 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)uVar44 & ~(1 << ((short)(uVar14 >> 1) + (short)uVar25 & 0xfU)));
  if (-1 < (char)((char)((ulong)uVar8 >> 8) - (char)uVar8)) {
    uVar14 = (ulong)(uVar32 | uVar24);
  }
  uVar29 = (uint)((uVar48 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar48 << 1 | 1)) >> 1);
  bVar21 = (byte)uVar38;
  bVar46 = (byte)uVar35 & 7;
  uVar9 = (ushort)uVar38 & 0xff00 | (ushort)(byte)(bVar21 >> bVar46 | bVar21 << 8 - bVar46);
  uVar8 = CONCAT11(bVar36,bVar21 + 1);
  bVar46 = (byte)uVar35 & 0xf;
  return (ulong)uVar8 + (uVar51 >> 1) + uVar52 + (ulong)(byte)(0x5f - CARRY1(bVar28,bVar36)) * 0x100
         + uVar14 + (ulong)((uint)uVar8 + 0x2e3dfe50 + (int)uVar52) + (long)(int)uVar43 * 0x7d724300
         + (uVar26 & 0xffffffffffff0000 | (ulong)uVar31 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar31 - (char)uVar18)) +
         (ulong)(uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18
                ) +
         (uVar38 & 0xffffffffffff0000 | (ulong)(ushort)(uVar9 << bVar46 | uVar9 >> 0x10 - bVar46)) +
         (ulong)(uint)((int)((int)uVar51 +
                            (uVar32 | uVar24 & 0xffffff00 | (uint)(byte)(bVar28 + bVar36))) >> 1) +
         (ulong)uVar43 + (uVar40 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar40 >> 1)) +
         (ulong)((int)(uVar11 >> 0x20) << 1 | (uint)uVar14 >> 0x1f) + 0x7d6dfd92aa39;
}



// WARNING: Removing unreachable block (ram,0x004037a2)
// WARNING: Removing unreachable block (ram,0x00403176)
// WARNING: Removing unreachable block (ram,0x0040319d)
// WARNING: Removing unreachable block (ram,0x004031d3)
// WARNING: Removing unreachable block (ram,0x00403c38)
// WARNING: Removing unreachable block (ram,0x004032c0)
// WARNING: Removing unreachable block (ram,0x00403ce1)
// WARNING: Removing unreachable block (ram,0x004033d3)

long log_size_10_var_002(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  long lVar3;
  undefined auVar4 [16];
  undefined7 uVar5;
  short sVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  char cVar12;
  uint uVar10;
  uint uVar11;
  sbyte sVar13;
  byte bVar14;
  ushort uVar15;
  short sVar16;
  int iVar17;
  char cVar19;
  char cVar20;
  undefined6 uVar21;
  ulong uVar18;
  ushort uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  uint7 uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  byte bVar32;
  uint uVar33;
  uint uVar34;
  ushort uVar35;
  ushort uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  ushort uVar40;
  int iVar41;
  uint uVar42;
  ulong uVar43;
  ushort uVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  byte bVar49;
  ushort uVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool in_PF;
  
  uVar24 = 0xd4c93b6421950046;
  if (!in_PF) {
    uVar24 = 0xaa0fe0a1c53e29b;
  }
  lVar45 = 0;
  if (uVar24 != 0) {
    while ((uVar24 >> lVar45 & 1) == 0) {
      lVar45 = lVar45 + 1;
    }
  }
  sVar16 = 0xf;
  while (0xa80fU >> sVar16 == 0) {
    sVar16 = sVar16 + -1;
  }
  uVar47 = ((ulong)(uint7)(CONCAT18(1,lVar45) >> 0x29) & 0xffffffffffff00) << 8;
  uVar44 = sVar16 >> 0x10;
  uVar24 = (uVar47 | uVar44) - 0x5ee75fcd;
  uVar50 = 0;
  if (uVar44 != 0) {
    while ((uVar44 >> uVar50 & 1) == 0) {
      uVar50 = uVar50 + 1;
    }
  }
  bVar7 = (byte)uVar24;
  bVar8 = (byte)(sVar16 >> 0x10);
  bVar49 = bVar7 ^ (bVar7 == 0x80) * (bVar7 ^ bVar8);
  uVar27 = (ulong)(byte)((bVar7 == 0x80) * (bVar49 & 0x80) ^ 0x80) | 0x2a8efe00;
  lVar45 = 0;
  iVar41 = 0;
  if (uVar27 != 0) {
    while (iVar41 = (int)lVar45, (uVar27 >> lVar45 & 1) == 0) {
      lVar45 = lVar45 + 1;
    }
  }
  lVar45 = SUB168(SEXT816((long)uVar27) * SEXT416(0x60daad9d) >> 0x40,0);
  uVar27 = (ulong)(lVar45 != 0 && lVar45 != -1) << 0x20 | uVar27 * 0x60daad9d & 0xffffffff;
  sVar16 = (ushort)bVar49 << 10;
  if (((int)(short)uVar44 & 0x3ffU) == 0) {
    sVar16 = 0;
  }
  sVar6 = (short)(uVar27 >> 0x13);
  if (-1 < (int)((int)(short)uVar44 * -0x800000 | (uint)((uVar24 & 0x3fff00) << 10) >> 0x1f)) {
    sVar6 = sVar16;
  }
  iVar17 = 0;
  if ((int)sVar16 != 0) {
    while (((uint)(int)sVar16 >> iVar17 & 1) == 0) {
      iVar17 = iVar17 + 1;
    }
  }
  auVar4 = ZEXT216((ushort)(sVar6 >> 1)) * ZEXT816(0x7149e3ff);
  uVar29 = (uint)SUB162(auVar4,0) * 0xf;
  uVar10 = (int)CONCAT62(SUB166(auVar4 >> 0x10,0),(short)uVar29) * 0x3da9a9d9;
  if (((ulong)((uint)uVar50 | 0x3010000) << 0x24 | 0xf) == 0xffffffffffffffff) {
    uVar10 = uVar10 & 0xffff0000 | 0xe2ab;
  }
  uVar50 = (ushort)uVar10 | 0xc000;
  uVar24 = (long)(int)(uVar10 & 0xffff0000 |
                      (uint)(ushort)((short)((uVar29 & 0x3fff0000 | (uint)uVar50) / (uint)uVar50) >>
                                    0xd)) * -0x4000000;
  uVar10 = (uint)(uVar24 >> 0x20);
  uVar29 = 0x4001fe71;
  if (uVar10 != 0 && uVar10 != 0xffffffff) {
    uVar29 = 0;
  }
  uVar11 = iVar41 + 0xa12b4cd1;
  uVar29 = uVar29 ^ ((uint)(uVar27 << 0xe) | (uint)(ushort)((sVar6 >> 1) + 1U >> 0xc | 0xe710));
  uVar38 = uVar11 & 0xffffff00 | uVar11 >> 1 & 0x7f;
  bVar8 = ((bVar8 & 0xfd) << 1 | bVar8 >> 7) + 0xab;
  uVar24 = (ulong)(uVar10 & 0x3fffffff) << 0x20 | (uVar24 & 0xffffffff) + 0x3f4ac851 & 0xffffffff;
  uVar27 = uVar24 / 0xf8a4f1ff;
  bVar7 = (byte)(uVar27 >> 8);
  uVar24 = uVar24 % 0xf8a4f1ff;
  lVar45 = (ulong)(uVar38 + 0x68ca696) * 2;
  uVar10 = 0xf8a4f1ff;
  if (0xa3ac98fa < uVar29) {
    uVar10 = (uint)lVar45;
  }
  bVar49 = (bVar7 & 0x1f) % 9;
  uVar30 = (uVar29 + 0x5c536705) * -0x7472935a;
  uVar50 = (short)uVar38 + 0x5f8;
  uVar38 = (((uint)uVar27 & 0xffff0000 |
            (uint)(byte)(bVar7 << bVar49 | (byte)(CONCAT11(uVar29 < 0xa3ac98fb,bVar7) >> 9 - bVar49)
                        ) << 8) ^ 0x1593918c) & 0xffffff00;
  uVar42 = (int)(char)bVar7 & ((uint)uVar47 & 0x71490000 | (uint)bVar8);
  uVar29 = ((uint)uVar24 & 0xffff0000 | (uint)((ushort)uVar24 & 0xfdff | 1)) + 0xf0d6d371 +
           (uVar29 + 0x5c536705) * 0x2e35b298;
  bVar49 = (byte)uVar42 & 0xf;
  uVar29 = uVar29 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar29 >> bVar49 | (short)uVar38 << 0x10 - bVar49);
  uVar47 = (ulong)uVar38 << 1;
  uVar38 = SUB164(auVar4 >> 0x6b,0) + uVar29;
  uVar24 = 0x3f;
  if (uVar30 != 0) {
    while (uVar30 >> uVar24 == 0) {
      uVar24 = uVar24 - 1;
    }
  }
  bVar32 = (byte)(((ushort)((uVar38 & 1) != 0) << 8) >> 2);
  uVar31 = (uint)(ushort)((ushort)bVar49 - (ushort)bVar8) << 0x1f;
  uVar23 = (uVar10 | 0xd69b5e81) >> 0xc;
  lVar39 = (ulong)(uVar38 & 0xffff0000 | uVar38 >> 1 & 0x7fff) + 1;
  bVar51 = (uVar10 + 1 & 1) != 0;
  uVar43 = (long)(ulong)(uVar10 + 1) >> 1;
  uVar27 = uVar43 - 0x167c9fe5;
  bVar7 = (((char)uVar50 << (bVar7 & 0x3f) |
           (byte)((uVar11 & 0xffff0000 | (uint)uVar50) >> 0x40 - (bVar7 & 0x3f))) + bVar8 + 'u') -
          (uVar43 < 0x167c9fe5 || uVar27 < bVar51);
  uVar11 = (int)uVar27 - (uint)bVar51 & 0xffff0000 | (uint)(ushort)(short)(char)bVar7;
  uVar10 = -(-uVar29 | 0xd2);
  uVar44 = (ushort)uVar24 >> 1 | (ushort)((uVar24 & 1) != 0) << 0xf;
  bVar14 = (byte)uVar30;
  uVar50 = uVar44 + 0x86c9;
  uVar22 = uVar50 + (ushort)(bVar7 < bVar14);
  uVar27 = (ulong)(0x7936 < uVar44 || CARRY2(uVar50,(ushort)(bVar7 < bVar14))) << 0x20 |
           uVar47 | (byte)(bVar7 ^ (bVar7 == bVar14) * (bVar7 & bVar14));
  uVar24 = uVar24 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar22 & 0xff | (ushort)(byte)((char)((ulong)uVar22 >> 8) + 1) << 8) |
           0x72c75da3;
  uVar29 = uVar42 & 0xffff0000 |
           (uint)(ushort)((ushort)bVar49 - (ushort)bVar8 & 0xff | (ushort)(uVar31 != 0) << 8);
  if ((ulong)bVar32 < 0xffffffffa1fb9402) {
    uVar29 = (uint)uVar24;
  }
  bVar8 = ((byte)uVar29 & 0x1f) % 0x11;
  lVar3 = (long)(int)((uint)(uVar27 >> 0x1d) | (uint)(uVar27 << 4)) *
          (long)(int)(uVar10 & 0xffff0000 |
                     (uint)CONCAT11((byte)((ulong)uVar10 >> 8) | (byte)uVar10,(byte)uVar10));
  uVar38 = (int)(short)lVar3 * (int)(short)uVar24;
  uVar42 = uVar11 >> 1;
  uVar10 = (uint)(ushort)((ushort)uVar38 | 0xc000);
  uVar38 = uVar38 & 0xffff | (uint)((ushort)(uVar38 >> 0x10) & 0x3fff) << 0x10 | 0xc000;
  uVar10 = (uVar38 / uVar10 & 0xffff) * (uVar38 % uVar10);
  bVar7 = (byte)(uVar29 + 1) & 0x1f;
  uVar38 = (uint)bVar32 + 0x5e046bfe << bVar7 |
           (uint)CONCAT62((uint6)((ulong)lVar3 >> 0x30),(short)(uVar10 >> 0x10)) >> 0x20 - bVar7;
  if ((uVar47 & 0x400) != 0) {
    uVar31 = ((uint)(ushort)(0x7c14 << bVar8 | (ushort)(0x17c14 >> 0x11 - bVar8)) | 0xe59f0000) +
             ((uint)((ulong)(lVar45 + -0x7cdc75b8) >> 0x25) << 0x10 | (uint)uVar24 >> 0x10);
  }
  uVar27 = (ulong)(uVar29 + 1) & 0xffffffffffffff0f;
  sVar13 = (sbyte)uVar27;
  uVar50 = (ushort)uVar31 >> sVar13 | (short)uVar42 << 0x10 - sVar13;
  bVar7 = (byte)uVar24;
  uVar47 = (ulong)CONCAT11(-((short)(((uVar10 & 0xffff) + uVar38 & 0xffff) * (uVar30 & 0xffff) >>
                                    0x10) != 0),bVar7);
  uVar29 = (uint)uVar27 >> 1;
  uVar10 = CONCAT31((uint3)(uVar11 >> 9),(byte)uVar42 >> 1);
  uVar38 = uVar38 ^ 1 << ((uint)uVar50 & 0x1f);
  bVar49 = (byte)(uVar47 >> 8);
  bVar8 = bVar7 + bVar49;
  uVar24 = uVar24 & 0xffffffffffff0000 | uVar47 & 0xffffffffffffff00 | (ulong)(byte)(bVar8 + 1);
  uVar47 = (ulong)((uVar23 & 0xffffff00 | (uint)(byte)((char)uVar23 + (char)lVar39)) >> 1 |
                  0x80000000) << 1 | (ulong)(CARRY1(bVar7,bVar49) || 0xfe < bVar8);
  lVar45 = 0x3f;
  iVar41 = 0x3f;
  if (uVar47 != 0) {
    while (iVar41 = (int)lVar45, uVar47 >> lVar45 == 0) {
      lVar45 = lVar45 + -1;
    }
  }
  bVar8 = (byte)uVar29;
  uVar25 = uVar24 << (bVar8 & 0x3f) | uVar24 >> 0x40 - (bVar8 & 0x3f);
  uVar38 = (uVar38 & 0xffff0000 | (uint)(ushort)((ushort)uVar38 | uVar50)) - 1;
  uVar11 = iVar41 - (uint)uVar25;
  lVar3 = (ulong)uVar11 * (ulong)uVar11;
  bVar49 = (char)uVar25 << 1;
  uVar48 = SEXT18((char)bVar8);
  uVar11 = uVar38 >> 0xc;
  uVar42 = -0x32163310 << (bVar8 & 0x1f);
  auVar4 = ZEXT116(0) << 0x40 |
           ZEXT416(uVar38 * 0x200000 | uVar11 & 0xffff0000 | (uint)(ushort)((ushort)uVar11 | 1));
  uVar26 = SUB168(auVar4 >> (bVar8 & 0x3f),0) | SUB168(auVar4 << 0x41 - (bVar8 & 0x3f),0);
  uVar35 = (ushort)uVar42 >> (bVar8 & 0xf) | (ushort)uVar42 << 0x10 - (bVar8 & 0xf);
  lVar39 = uVar26 + (((uint)lVar39 & 0xffffff00 | uVar23 & 0xff) >> 1);
  uVar22 = (short)uVar29 << 7;
  uVar44 = (ushort)(CONCAT12(0x5d < (byte)((char)uVar42 + 0x67U),(short)uVar29) >> 10);
  uVar29 = uVar29 & 0xffff0000 | 0x80000000;
  uVar36 = CONCAT11((char)((ulong)(uVar29 | (uVar44 | uVar22)) >> 8),bVar49);
  uVar44 = uVar44 | uVar22 & 0xff;
  bVar7 = (byte)uVar44;
  lVar45 = (ulong)((uVar31 & 0xffff0000 | (uint)uVar50) << (bVar8 & 0x1f) |
                  ((uint)(uVar25 & 0xffffffffffffff00) | (uint)bVar49) >> 0x20 - (bVar8 & 0x1f)) -
           0xc87ffa36;
  uVar50 = (ushort)lVar45;
  uVar24 = (ulong)uVar10 - 0xc16500b6;
  iVar41 = (int)lVar45 + 0x1e + (int)uVar24 * 2;
  bVar8 = bVar7 - (lVar45 == 0);
  uVar38 = uVar29 | (uint)(ushort)(uVar44 | (ushort)(byte)((uVar25 & 0xffffffffffffff00) >> 8) << 8)
                    & 0xffffff00 | (uint)bVar8;
  uVar47 = lVar39 * 2;
  uVar27 = uVar47 | lVar39 < 0;
  uVar43 = uVar27 * 0x7acb03cc;
  bVar51 = (uVar43 & 0x400) == 0;
  uVar27 = (ulong)(ushort)((short)uVar27 + 1);
  uVar47 = uVar47 & 0xffffffffffff0000 | uVar27;
  uVar29 = uVar38 * 9 + 0x60;
  uVar11 = uVar38 + uVar29;
  bVar49 = (byte)uVar11 | (byte)((ulong)uVar11 >> 8);
  if (-1 < (char)bVar49) {
    uVar43 = uVar43 & 0xffffffffffff0000 | uVar27;
  }
  lVar39 = -uVar47;
  uVar27 = (uVar11 & 0xffffff00 | (uint)bVar49) & uVar43;
  if (uVar27 != 0) {
    uVar50 = (ushort)iVar41;
  }
  uVar30 = iVar41 * 0x100;
  uVar31 = (-((uint)((ulong)lVar3 >> 0x20) & 0xffff0000 |
             (uint)CONCAT11((char)((ulong)lVar3 >> 0x28) + '2',(char)((ulong)lVar3 >> 0x20))) &
            0xffff0000 | (uint)(byte)((lVar45 == 0) + bVar8 + 1)) >> (bVar49 & 0x1f) & 0xffffff00;
  uVar11 = (uint)(ushort)((short)uVar10 + 0x99 +
                          (((ushort)((uVar42 & 0xffff0000 | (uint)uVar35 & 0xffffff00 |
                                     (uint)(byte)((char)uVar35 << (bVar7 & 0x1f))) >> (bVar8 & 0x1f)
                                    ) | (ushort)(uVar38 << 0x20 - (bVar8 & 0x1f))) & 0xff00 |
                          (ushort)((long)uVar47 < 1)) * 4 | 0xc000);
  uVar38 = CONCAT22((short)uVar31,(ushort)((int)uVar43 << 1) & (ushort)lVar39) & 0x3fffffff;
  uVar43 = (ulong)(ushort)(uVar38 % uVar11);
  uVar18 = (ulong)uVar31 & 0xffffffffffff0000 | uVar43;
  uVar47 = (ulong)CONCAT31((int3)((uint3)(uVar27 >> 8) & 0xffff00 |
                                 (uint3)(byte)((char)(uVar27 >> 8) << ((byte)uVar27 & 0x1f))) >>
                           0x13,!SBORROW2((short)((int)lVar39 >> 1),0x7f15)) << 1;
  bVar8 = (char)((uint)iVar41 >> 0x18) + (char)(uVar47 >> 8) + 1;
  sVar16 = (short)((int)uVar26 + -0x28f3dffd << (sbyte)(uVar47 | 1));
  bVar7 = (byte)(sVar16 << 1) | sVar16 < 0;
  uVar50 = (uVar50 >> 3 |
           (ushort)(byte)((byte)uVar24 >> (bVar49 & 7) | (byte)uVar24 << 8 - (bVar49 & 7)) << 0xd) +
           0x4ec2;
  uVar31 = (uint)uVar18;
  uVar42 = (uint)uVar47 & 0xffff0000 | (uint)(ushort)(short)(char)(uVar43 >> 8);
  if (uVar50 == 0) {
    uVar42 = uVar31;
  }
  bVar8 = bVar8 ^ (bVar8 == bVar7) * (bVar8 & (bVar7 ^ (bVar8 == bVar7) * (bVar7 ^ 8)));
  uVar23 = ((uint)uVar25 & 0xffff0000 | (uint)(ushort)(uVar36 + 0x1008)) + uVar31 +
           (uint)(0xeff7 < uVar36);
  iVar41 = 0x63edee48;
  if (uVar23 == 0) {
    iVar41 = (int)(uVar47 | 1) * 2;
  }
  uVar44 = (ushort)uVar42 + 0x4856;
  uVar37 = uVar42 & 0xffff0000 | (uint)uVar44;
  iVar41 = (iVar41 - uVar31) - (uint)((ushort)uVar42 < 0xb7aa);
  uVar24 = (uVar24 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)(uVar10 | 0x69c5a947) & 0xff00 |
                          (ushort)(byte)((char)(uVar10 | 0x69c5a947) << 1))) - 0x548467fc;
  bVar7 = (byte)((ulong)uVar30 >> 8);
  uVar29 = (uVar29 & 0xffffff00) - 1;
  if (bVar51) {
    uVar29 = (uint)uVar24;
  }
  uVar35 = (ushort)uVar24 & 0xff;
  uVar9 = uVar35 | (ushort)(uVar18 < uVar48 || uVar18 - uVar48 < (ulong)(bVar8 < bVar7)) << 8;
  iVar17 = 0x1f;
  uVar22 = 0x1f;
  if (uVar37 != 0) {
    while (uVar22 = (ushort)iVar17, uVar37 >> iVar17 == 0) {
      iVar17 = iVar17 + -1;
    }
  }
  uVar40 = (ushort)uVar23 & 0xf;
  uVar15 = uVar44 | 1 << uVar40;
  uVar10 = uVar42 & 0xffff0000 | (uint)uVar15;
  bVar49 = (byte)uVar15 & 0x1f;
  uVar47 = CONCAT62((uint6)(ushort)((short)((ulong)lVar39 >> 0x10) >> 1),0xb7aa) * 2;
  iVar17 = uVar10 + 1;
  sVar16 = (short)iVar17;
  uVar27 = (ulong)((uint)(CONCAT14((uVar44 >> uVar40 & 1) != 0,iVar41) >> bVar49) |
                  iVar41 << 0x21 - bVar49);
  if (SCARRY4(uVar10,1) != iVar17 < 0) {
    uVar27 = uVar48;
  }
  bVar49 = (byte)iVar17 & 0xf;
  uVar43 = 1 << (uVar48 & 0x3f);
  if (-1 < (char)((byte)uVar22 ^ 0x3a)) {
    sVar16 = (short)(char)((char)(uVar18 - uVar48) - (bVar8 < bVar7) |
                          (byte)(1 << ((ulong)(ushort)(uVar38 / uVar11) & 0x3f)));
  }
  uVar15 = (uVar22 ^ 0x3a) << 4 | sVar16 + 0x5387U >> 0xc;
  lVar45 = (((uVar30 & 0xffff0000 |
             (uint)CONCAT11((byte)((ulong)uVar30 >> 8) ^ bVar8 - bVar7,bVar8 - bVar7)) ^ uVar43) &
           0xffffffff) * (ulong)(uVar23 & 0xffff0000 | (uint)uVar9);
  sVar6 = (short)lVar45;
  uVar24 = (uVar24 & 0xffffffffffff0000 | 0xc4bd0000) >> 10;
  uVar22 = (short)((ulong)lVar45 >> 0x20) + sVar16 + 0x5387U + 0x58 + uVar15;
  uVar40 = (ushort)uVar27 & 0xfdff;
  uVar44 = 0xf;
  if (uVar9 != 0) {
    while (uVar9 >> uVar44 == 0) {
      uVar44 = uVar44 - 1;
    }
  }
  bVar8 = (byte)uVar15 | (byte)uVar22;
  uVar25 = uVar24 & 0xffffffffffff0000;
  uVar10 = CONCAT22((short)(ushort)uVar47 >> 0xf,(short)uVar24) >> 0xb;
  bVar7 = bVar8 & 0xf;
  uVar9 = sVar6 << bVar7 | uVar22 >> 0x10 - bVar7;
  uVar24 = (ulong)(uint)(int)sVar6 & 0xffffffffffff0000;
  uVar26 = uVar47 >> bVar7 | (ulong)uVar10 << 0x40 - bVar7;
  uVar15 = (CONCAT11((char)((ulong)uVar9 >> 8),bVar8) & 0xff0f) >> bVar7;
  uVar9 = uVar9 + 0xe0ce;
  uVar36 = uVar36 & (uVar44 | (ushort)uVar47);
  bVar8 = ((byte)(uVar50 << bVar49) | (byte)(uVar50 >> 0x10 - bVar49)) + 0x72;
  iVar17 = ((uVar29 & 0x7fff8000) << 1 | (uint)(ushort)(uVar22 + 0x37c)) * -0x25658eee;
  uVar48 = uVar26 & 0xffffffffffffff00 | (ulong)bVar8;
  cVar12 = (char)uVar15;
  iVar41 = (int)uVar48;
  uVar29 = iVar17 + iVar41;
  cVar19 = cVar12;
  if (uVar29 == 0 || SCARRY4(iVar17,iVar41) != (int)uVar29 < 0) {
    cVar19 = (char)uVar40;
  }
  uVar50 = (ushort)uVar48;
  bVar49 = cVar12 + ((char)((ulong)uVar9 >> 8) >> 7) & 0xf;
  uVar44 = CONCAT11((char)((ulong)uVar15 >> 8) + (char)uVar35 * '\x02' +
                    ((uVar43 & 0xffffffff00000000 | uVar24 | (ulong)uVar9) < 0x22922899),
                    bVar49 + cVar19);
  uVar11 = (int)CONCAT62((uint6)(uVar25 >> 0x11),
                         (ushort)(((uVar25 | uVar47 & 0xffff) ^ 3) >> 1) >> 1) << 1;
  sVar16 = (short)((uint)((int)(short)uVar44 * 0x9e2) >> 0x10);
  bVar32 = (char)uVar11 + (char)uVar36 + (sVar16 != 0 && sVar16 != -1);
  uVar38 = uVar11 & 0xffffff00 | (uint)bVar32;
  uVar47 = -(ulong)(uVar29 & 0xffff0000 | (uint)(ushort)((short)(char)bVar8 + 0x11fd));
  uVar22 = uVar36 & 0xff00 | (ushort)(byte)((char)uVar36 << (bVar49 + cVar19 & 0x1f));
  iVar41 = 0;
  if (uVar38 >> 1 != 0) {
    while (((uVar38 >> 1) >> iVar41 & 1) == 0) {
      iVar41 = iVar41 + 1;
    }
  }
  uVar29 = uVar38 >> 2;
  iVar41 = (int)(short)((uVar9 & 0xff) * (uVar36 & 0xff) *
                       ~(uVar40 + uVar50 * 8 + -0x6c47 << bVar49 | uVar40 >> 0x10 - bVar49) * 2) *
           (int)(short)uVar29;
  uVar36 = (ushort)((uint)iVar41 >> 0x10);
  uVar44 = (uVar44 ^ 1 << ((ushort)uVar47 & 0xf)) & 0xff;
  sVar16 = 0xf;
  if (uVar36 != 0) {
    while (uVar36 >> sVar16 == 0) {
      sVar16 = sVar16 + -1;
    }
  }
  uVar43 = uVar26 & 0xffffffffffff0000 | (ulong)(ushort)(uVar50 >> 1 | 0x8000);
  if (((sVar16 + 0x1e40) - (ushort)((bVar8 & 1) != 0) >> 2 & 1) == 0) {
    uVar43 = (ulong)uVar38;
  }
  uVar50 = (ushort)((uVar27 & 0xffffffffffff0000) >> 1);
  bVar8 = (byte)uVar44 & 0xf;
  uVar36 = ((ushort)iVar41 & 0xff) *
           (ushort)(byte)((char)((uint6)(int6)(short)(uVar24 >> 0x10) >> 8) >> 7);
  bVar52 = uVar22 <= uVar36;
  uVar50 = uVar22 ^ (ushort)(uVar36 == uVar22) *
                    (uVar22 ^ (uVar50 << bVar8 | uVar50 >> 0x10 - bVar8));
  uVar5 = (undefined7)(uVar43 >> 8);
  uVar38 = (uint)uVar44;
  if (bVar51) {
    uVar38 = (uint)(ushort)(uVar50 & 0xff00 | (ushort)bVar52) | 0xc4bd0000;
  }
  uVar42 = (uint)(uVar47 >> 0xb) & 0x1f0000 | (uint)(ushort)((short)(uVar47 >> 0xb) << 1 | 1);
  uVar24 = (ulong)uVar29 & 0xffffffffffffff0f;
  uVar30 = (int)CONCAT71(uVar5,0xd) + uVar42 * 4 + 0x93;
  cVar19 = (char)(uVar38 - 1);
  bVar8 = bVar52 + cVar19;
  bVar14 = (byte)(uVar24 >> 1);
  bVar49 = bVar14 & 0x1f;
  uVar31 = uVar42 << bVar49 | uVar42 >> 0x20 - bVar49;
  uVar44 = (ushort)CONCAT71(uVar5,0xc);
  uVar43 = uVar43 & 0xffffffffffff0000 | (ulong)(ushort)(uVar44 ^ (uVar44 >> 8 & 1) << 8);
  uVar42 = (uint)(byte)((char)uVar40 + 1) << 0x1f;
  uVar23 = uVar31 >> 1 | uVar42;
  uVar25 = uVar43 >> 1;
  sVar16 = (ushort)(byte)(bVar14 - 0x2f) + 0x36b8;
  uVar27 = CONCAT62((uint6)(uVar24 >> 0x11) | (uint6)(((ulong)((bVar32 & 4) != 0) << 0x3f) >> 0x10),
                    sVar16);
  uVar37 = ((uint)(ushort)(uVar50 & 0xff00 | (ushort)bVar8) | 0xc4bd0000) + 1;
  uVar24 = -(ulong)(((uVar11 & 0xffff0000 |
                     (uint)(ushort)((short)(char)uVar29 << (sbyte)uVar24 |
                                   (uVar36 ^ (ushort)(uVar36 == uVar22) * (uVar36 & uVar50)) >>
                                   0x10 - (sbyte)uVar24)) ^ 0xd902) >> 1);
  lVar45 = (((ulong)(((int)uVar10 >> bVar7 & 0xffff0000U) << 3 | 0xd) & 0x7fffffffffffff80) << 1 |
           (ulong)(byte)((((SCARRY1(bVar52,cVar19) != SCARRY1(bVar8,'\0')) == (char)bVar8 < '\0') +
                         '\x11') -
                        (((uVar30 & 0xffff0000 |
                          (uint)(uVar23 != 0 && ((int)uVar31 < 0 != (uVar42 != 0)) == (uVar42 != 0))
                          ) >> ((uint)uVar25 & 0x1f) & 1) != 0))) - 0x4f16de94;
  bVar8 = (byte)uVar25 >> 1;
  uVar28 = (uint7)(uVar43 >> 9);
  uVar29 = (uint)CONCAT71(uVar28,bVar8);
  uVar10 = (uint)lVar45 & 0xffff0000 | (uint)(ushort)((ushort)lVar45 >> 1);
  bVar7 = (byte)sVar16 & 0x3f;
  iVar41 = 0;
  if (uVar10 != 0) {
    while ((uVar10 >> iVar41 & 1) == 0) {
      iVar41 = iVar41 + 1;
    }
  }
  uVar42 = 0x2864;
  uVar50 = (short)uVar37 - 1;
  uVar11 = (uint)(CONCAT14((bVar8 & 1) != 0,iVar41) >> 0x1e);
  bVar8 = (byte)uVar50;
  uVar43 = (ulong)(uVar37 & 0xffff0000 | (uint)uVar50 & 0xffffff00 |
                  (uint)(byte)(bVar8 >> 2 | bVar8 << 6));
  uVar25 = uVar43 * -0x6bc638f5;
  lVar45 = SUB168(SEXT816((long)uVar43) * SEXT416(-0x6bc638f5) >> 0x40,0);
  bVar52 = lVar45 != 0 && lVar45 != -1;
  uVar43 = uVar27 - 0x6ecbd071;
  bVar53 = uVar27 < 0x6ecbd071 || uVar43 < bVar52;
  uVar10 = ((int)uVar43 - (uint)bVar52) * 2;
  bVar8 = (byte)uVar10;
  bVar49 = bVar8 | bVar53;
  bVar52 = (short)uVar25 < 0;
  if (bVar52) {
    uVar42 = uVar11 | iVar41 << 3 & 0xffffU;
  }
  bVar8 = (bVar8 & 0x1f | bVar53) % 9;
  bVar8 = bVar49 << bVar8 | (byte)(CONCAT11(bVar52,bVar49) >> 9 - bVar8);
  iVar17 = 0;
  if (uVar42 != 0) {
    while ((uVar42 >> iVar17 & 1) == 0) {
      iVar17 = iVar17 + 1;
    }
  }
  uVar27 = uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 | (uVar25 & 0xff0000000000) >> 0x18
           | (uVar25 & 0xff00000000) >> 8;
  uVar26 = (ulong)((uint)uVar27 | 0xc0000000);
  uVar27 = uVar27 | ((ulong)(uVar30 & 0xffff0000 |
                            (uint)(ushort)((short)uVar25 << 1 | (ushort)bVar52) *
                            ((uVar29 & 0x1fffe | 0x80) >> 1) >> 0x10) & 0x3fffffff) << 0x20 |
           0xc0000000;
  uVar43 = uVar27 / uVar26;
  sVar16 = (short)(char)((uVar29 | 0x80) >> 1);
  uVar18 = (ulong)CONCAT22((ushort)(uVar28 >> 8) >> 1,sVar16);
  uVar50 = ((short)uVar43 - sVar16) - 1;
  uVar43 = uVar43 & 0xffff0000;
  uVar48 = uVar43 | (ulong)uVar50;
  uVar46 = uVar48 * 0x7f62377b;
  uVar43 = uVar43 | (ushort)(uVar50 & 0xff |
                            (ushort)(byte)((byte)(uVar27 % uVar26) | (byte)((ulong)uVar50 >> 8)) <<
                            8);
  uVar26 = uVar43 * uVar18;
  uVar27 = (ulong)(-(uVar38 - 1) & 0xffffff00 |
                  (uint)(-1 < (int)((uVar23 << bVar7 | (uint)(uVar24 >> 0x40 - bVar7)) + 0x7ed71ac6)
                        )) << 0x17;
  uVar25 = uVar46 >> 0x29;
  bVar49 = (byte)(uVar42 >> (bVar8 & 0x1f)) | (byte)(uVar42 << 0x20 - (bVar8 & 0x1f));
  bVar7 = (byte)uVar26;
  uVar21 = SUB166(SEXT816((long)uVar43) * SEXT816((long)uVar18) >> 0x50,0);
  uVar30 = 0x40c96952 >> (bVar8 & 0x1f);
  uVar10 = (uVar10 & 0xffffff00 | (uint)bVar8) ^ 1;
  uVar48 = uVar48 * 0xfec46ef6;
  bVar8 = (byte)((ulong)uVar10 >> 8);
  cVar19 = bVar8 + 1;
  lVar45 = -(uVar24 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar24 << 1));
  uVar29 = ((uint)uVar47 & 0xff00 | (uint)(byte)((char)uVar47 - 0x33)) + 0x46fcc4ad;
  uVar42 = (uVar10 & 0xffffff00 | (uint)(byte)(((char)uVar10 - bVar7) - (0xfe < bVar8))) - 1;
  iVar17 = (int)(short)(CONCAT11((char)(uVar26 >> 8) >> 0x1d,bVar7) & ~(1 << ((ushort)bVar7 & 0xf)))
           * (int)CONCAT11(cVar19,(char)uVar42);
  uVar50 = (ushort)((uint)iVar17 >> 0x10);
  uVar44 = uVar50 ^ (ushort)uVar48;
  uVar38 = ~(uint)(byte)((char)(((ushort)(uVar50 != 0 && uVar50 != 0xffff) << 8 | 0xb8) >> 5) << 1);
  bVar8 = (byte)uVar25;
  bVar7 = bVar8 >> 3 | bVar8 << 5;
  uVar43 = uVar27 | uVar25 & 0xffffffffffffff00 | (ulong)bVar7;
  uVar47 = ((uVar26 & 0xffffffffffff0000 | (ulong)(ushort)(short)(char)iVar17) ^ 0x266d) +
           (ulong)uVar30 + lVar45 + 1;
  uVar24 = uVar47 & 0xffffffffffffff00;
  uVar10 = ((uVar11 | iVar41 << 3) >> 1) + uVar38;
  bVar8 = (byte)(uVar24 >> 8);
  uVar25 = (ulong)((uVar30 & 0xffff0000 |
                   (uint)(ushort)((ushort)uVar30 >> 1 | (ushort)((uVar30 & 1) != 0) << 0xf)) <<
                  (bVar49 & 0x1f)) | 0xc000000000000000;
  if ((char)uVar29 < (char)bVar7) {
    uVar29 = uVar29 & 0xffff0000 | (uint)(ushort)uVar43;
  }
  auVar4 = ((CONCAT88(CONCAT62(uVar21,uVar44 & 0xff |
                                      (ushort)(byte)(((char)((ulong)(ushort)(uVar44 & 0xff |
                                                                            (ushort)(byte)((char)((
                                                  ulong)uVar44 >> 8) + bVar49) << 8) >> 8) - bVar8)
                                                  - 1) << 8),
                      uVar24 | (byte)(((byte)uVar47 | (byte)uVar44) ^ bVar8)) &
            (undefined  [16])0xffffffffffffffff) / ZEXT816(uVar25) &
           (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)uVar29);
  uVar24 = SUB168(auVar4 >> 0x40,0);
  cVar12 = SUB161(auVar4 >> 8,0);
  cVar20 = SUB161(auVar4 >> 0x48,0);
  if (SBORROW1(cVar12,cVar20) != SBORROW1(cVar12 - cVar20,'\x01')) {
    uVar24 = uVar48 & 0xff00 |
             (ulong)(byte)((byte)uVar48 >> (bVar49 & 7) | (byte)uVar48 << 8 - (bVar49 & 7)) |
             (ulong)SUB166(auVar4 >> 0x50,0) << 0x10;
  }
  uVar31 = uVar10 << (bVar49 & 0x1f) | uVar10 >> 0x20 - (bVar49 & 0x1f);
  uVar10 = (uint)uVar43;
  uVar11 = (int)lVar45 << (bVar49 & 0x1f);
  uVar30 = uVar11 >> (bVar49 & 0x1f) | uVar11 << 0x21 - (bVar49 & 0x1f);
  uVar11 = (uVar10 | 0x5596c267) - 1;
  uVar48 = ((ulong)uVar29 & 0xffffffffffff0000 |
            (ulong)(ushort)((ushort)uVar29 | 0x1000) & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar29 - 0x11)) ^ 0x2e47498f;
  uVar22 = CONCAT11(uVar48 == 0,(char)uVar30);
  uVar26 = (ulong)uVar30 + 0x341fdf6a;
  uVar43 = (ulong)((int)CONCAT62(uVar21,CONCAT11(cVar19,bVar49)) + -0x38fac4a2 +
                   ((uint)uVar27 | (uint)(uVar46 >> 0x29)) * 8 >> (bVar49 & 0x3f)) |
           uVar25 << 0x40 - (bVar49 & 0x3f);
  cVar19 = (char)uVar24;
  uVar47 = (ulong)CONCAT11((char)(uVar24 >> 8) + -0x3f,cVar19);
  uVar50 = (short)uVar11 + 0x30cf;
  uVar11 = uVar11 & 0xffff0000;
  uVar27 = (ulong)(uVar42 & 0xffffff00 | (uint)bVar49) | uVar24 & 0xffffffffffff0000 | uVar47;
  uVar43 = uVar43 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar43 + cVar19 + 1);
  uVar25 = (ulong)(uVar11 | uVar50) & 0xff;
  uVar44 = 0;
  if (uVar22 != 0) {
    while ((uVar22 >> uVar44 & 1) == 0) {
      uVar44 = uVar44 + 1;
    }
  }
  uVar50 = uVar44 + uVar50;
  bVar8 = (byte)uVar27 & 0x1f;
  uVar29 = (uint)uVar27;
  uVar23 = uVar29 >> bVar8 | uVar29 << 0x20 - bVar8;
  bVar8 = (byte)uVar23 & 0xf;
  uVar18 = (uVar24 & 0xffffffffffff0000 | uVar47 & 0xffffffffffffff00 | (ulong)(byte)(cVar19 + 0xba)
           ) * -0x2b02e412;
  uVar42 = ((uint)uVar43 & 0xffff0000 | (uint)(ushort)((short)uVar43 + 0xc9cf)) + 0x8eb9c6e9;
  uVar43 = uVar26 & 0xffffffff9553ee00 |
           (ulong)(byte)((char)(uVar26 & 0xffffffff9553ee24) - (char)uVar18);
  uVar37 = (int)((uVar10 + 0x4dc7e9d2 + (int)uVar24 * 8) * 0x6a24b602) >> 0xf;
  uVar29 = uVar42 * 0x2000000;
  uVar42 = uVar42 >> 7;
  uVar33 = -(uVar11 | uVar44);
  uVar47 = (long)(int)((uVar30 & 0xffff0000 | (uint)uVar22) << bVar8) * (long)(int)uVar33;
  uVar44 = (short)(char)(uVar47 & 0xffffffff) * (short)(char)((uVar47 & 0xffffffff) >> 8);
  uVar27 = (uVar29 | uVar42 & 0xffff0000 |
           (uint)CONCAT11((byte)((ulong)(uVar29 | uVar42) >> 8) ^ (byte)uVar42,(byte)uVar42)) |
           uVar43;
  cVar19 = (char)uVar44 + (char)uVar37;
  uVar22 = (short)uVar27 + 0x9a6;
  uVar27 = uVar27 & 0xffffffffffff0000;
  uVar10 = (uint)uVar27;
  bVar7 = (bVar8 - cVar19) * '\x02';
  uVar29 = ((uint)((uVar18 & 0xffffffff00000000 | uVar47 >> 0x20) >> bVar8) | uVar10 | uVar22) ^
           uVar33;
  bVar8 = bVar7 & 0x1f;
  uVar42 = ((((uint)uVar48 >> 1 | (uint)((uVar48 & 1) != 0) << 0x1f) >> 0x1e |
            (int)(uVar26 & 0xffffffff9553ee24) << 2) << bVar8 | uVar37 >> 0x20 - bVar8) & 0xb91ad5d0
  ;
  uVar36 = (short)uVar43 >> 9;
  uVar43 = uVar26 & 0xffffffff95530000 | (ulong)uVar36;
  uVar11 = (uint)uVar47 & 0xffff0000 | (uint)uVar44 & 0xffffff00 | (uint)(byte)(cVar19 + 1);
  uVar11 = uVar11 ^ (uint)(uVar11 == uVar29) *
                    (uVar11 & (uVar29 ^ (uint)(uVar11 == uVar29) * (uVar29 ^ uVar42)));
  cVar19 = (char)((ulong)uVar22 >> 8);
  uVar29 = uVar11 & 0xffff0000 | (uint)(ushort)((short)(char)uVar11 * (short)cVar19);
  bVar7 = bVar7 & 0x1f;
  uVar44 = SEXT12((char)((ulong)(uVar23 & 0xffffff00 | 0x800) >> 8));
  uVar47 = (ulong)uVar50;
  if ((int)uVar42 >> 1 <= (int)(uint)uVar50) {
    uVar47 = (ulong)uVar31;
  }
  uVar22 = (uVar22 & 0xff | (ushort)(byte)(cVar19 << 1 | cVar19 < '\0') << 8) &
           ~(1 << (uVar44 & 0xf));
  uVar11 = (uVar23 & 0xffff0000 | (uint)uVar44) + 1;
  uVar26 = (ulong)uVar11 & 0xffffffffffffff0f;
  sVar13 = (sbyte)uVar26;
  uVar34 = (uVar33 & 0xffff0000 |
           (uint)(ushort)((ushort)(uVar33 & 0xffffff00) ^ 1 << ((ushort)uVar26 & 0xf)) & 0xffffff00)
           - 1;
  uVar30 = (int)uVar24 + uVar38 * 2 + 0x4897cc61 +
           (uVar11 & 0xffff0000 |
           (uint)CONCAT11((ulong)(uVar31 + 0x83c76b7c) != 0xffffffff6e6ba890,sVar13)) * 2;
  bVar49 = (byte)uVar30;
  bVar8 = (bVar49 & 0x1f) % 9;
  uVar24 = ~(ulong)(uVar29 * 0x2328aede >> 1);
  uVar44 = CONCAT11(bVar51,(char)uVar24);
  uVar11 = (uint)uVar24 & 0xffff0000;
  uVar18 = (ulong)CONCAT22((short)((int)uVar42 >> 0x11),
                           (short)((int)uVar42 >> 1) << sVar13 | 0x576fU >> 0x10 - sVar13) <<
           (bVar49 & 0x3f);
  uVar38 = (int)(uVar11 | uVar44) >> 0x1f;
  uVar26 = ((ulong)uVar34 & 0xffffffffffff0000 | 0x800000000000000 |
           (ulong)(ushort)((ushort)uVar34 & ~(1 << ((ushort)uVar25 & 0xf)))) ^
           1 << ((ulong)uVar38 & 0x3f);
  uVar50 = (ushort)uVar26 >> 2 & 1;
  uVar24 = (ulong)(ushort)((ushort)uVar26 ^ uVar50 << 2);
  uVar48 = uVar26 & 0xffffffffffff0000 | uVar24;
  lVar45 = ((ulong)(uVar33 & 0xffffff00) * 0xc65a01c939a3267 |
           (ulong)(byte)('\0' << bVar8 | 0U >> 9 - bVar8)) + 0x9194576f + (ulong)(uVar50 != 0);
  if (lVar45 == 0) {
    uVar38 = (int)(short)uVar37 << bVar7 | uVar29 >> 0x20 - bVar7;
  }
  uVar29 = CONCAT22((short)uVar38,uVar44) & 0x3fffffff;
  auVar4 = ZEXT816((ulong)uVar30 | 0xc000000000000000);
  auVar1 = CONCAT88((ulong)uVar38 & 0xffffffffffff0000 | (ulong)(ushort)(uVar29 % 0xd76f),
                    CONCAT62((int6)(short)(uVar11 >> 0x10),(short)(uVar29 / 0xd76f))) &
           (undefined  [16])0xffffffffffffffff;
  auVar2 = auVar1 % auVar4;
  uVar29 = 0x9194d76fU >> (bVar49 & 0x1f) | -0x6e6b2891 << 0x20 - (bVar49 & 0x1f);
  iVar41 = (int)SUB162(auVar1 / auVar4,0) * (int)SUB162(auVar2,0);
  sVar16 = (short)((uint)iVar41 >> 0x10);
  uVar46 = uVar18;
  if (sVar16 != 0 && sVar16 != -1) {
    uVar46 = uVar48;
  }
  uVar11 = ((int)uVar25 - (int)uVar43) - 1U & (uint)uVar47;
  uVar25 = (ulong)((int)(short)iVar41 + 1);
  bVar8 = (byte)uVar11;
  bVar51 = 0xd2 < bVar8;
  bVar8 = bVar8 + 0x2d;
  if (!bVar51 && bVar8 != 0) {
    uVar25 = uVar26 & 0xffff0000 | uVar24;
  }
  uVar24 = (ulong)uVar30 | 0xc000008000000000;
  if (bVar51) {
    uVar24 = 0xffffffff;
  }
  uVar36 = uVar36 | 0xc000;
  uVar42 = CONCAT22(sVar16 << 10 | (ushort)(CONCAT12(bVar51,sVar16 << 1) >> 8),(short)uVar25) &
           0x3fffffff;
  uVar26 = (ulong)(((uVar23 & 0xff0f ^ uVar33) + uVar31 + 1) * 0x400000 | (uint)uVar36) | 0xc000;
  uVar38 = (uint)(ushort)uVar26;
  uVar42 = uVar42 / (uint)uVar36 & 0xffff | (uVar42 % (uint)uVar36 & 0x3fff) << 0x10;
  return (uVar25 & 0xffffffffffff0000 | (ulong)(ushort)(uVar42 / uVar38)) +
         (uVar27 | (ulong)uVar22 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar22 & (byte)uVar18))
         + uVar24 +
         (((ulong)SUB166(auVar2 >> 0x10,0) & 0xfffb) << 0x10 |
          (ulong)SUB164(auVar2 >> 0x20,0) << 0x20 | (ulong)(ushort)(uVar42 % uVar38)) +
         (ulong)(uVar11 & 0xffffff00 | (uint)bVar8) +
         ((long)(ulong)(uVar37 + 0xb3 + (uVar10 | uVar22) * 4) >> sVar13) * 0x443f2bfd + uVar48 +
         (ulong)(uVar29 << 0x10 | uVar29 >> 0x11) + lVar45 + uVar47 + uVar43 + uVar26 + uVar46 +
         -0x666e265a15440761;
}



// WARNING: Removing unreachable block (ram,0x0040489b)
// WARNING: Removing unreachable block (ram,0x0040476a)
// WARNING: Removing unreachable block (ram,0x00404696)
// WARNING: Removing unreachable block (ram,0x00404195)
// WARNING: Removing unreachable block (ram,0x004046a5)
// WARNING: Removing unreachable block (ram,0x00404908)

long log_size_10_var_003(void)

{
  undefined auVar1 [16];
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  sbyte sVar10;
  byte bVar15;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  short sVar16;
  short sVar17;
  ulong uVar18;
  ulong uVar19;
  int6 iVar20;
  char cVar21;
  byte bVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  byte bVar27;
  byte bVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ushort uVar32;
  int iVar33;
  ushort uVar34;
  ushort uVar35;
  byte bVar36;
  short sVar37;
  ulong uVar38;
  ushort uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  uint uVar43;
  undefined8 uVar44;
  uint uVar45;
  ulong uVar46;
  byte bVar47;
  ushort uVar48;
  ushort uVar49;
  uint uVar50;
  bool bVar51;
  bool in_PF;
  char in_AF;
  bool bVar52;
  
  uVar18 = CONCAT62(0xeb8cef9ac92,CONCAT11(in_AF << 4 | in_PF << 2,0x73)) & 0xffffffffffff272f;
  uVar48 = CONCAT11(((byte)(uVar18 >> 8) | 2) + 0x69,(char)uVar18);
  uVar50 = 1 << ((uint)uVar48 & 0x1f);
  uVar23 = uVar50 | 0x62e29f41;
  uVar45 = (uint)uVar48 * 0x3a23;
  sVar16 = (short)(uVar45 >> 0x10);
  uVar5 = uVar45 & 0xffff | 0xac920000;
  uVar45 = 0x152cfbf0;
  if (sVar16 != 0) {
    uVar45 = 0x40394238;
  }
  uVar26 = 0x9b3831b8c004baca - (ulong)(sVar16 != 0);
  uVar5 = uVar5 ^ (uint)(uVar5 == 0x6bd83580) *
                  (uVar5 & ((uint)(uVar5 == 0x6bd83580) * -0x23b64125 ^ 0x6bd83580));
  uVar48 = (short)(uVar23 >> 0xf) >> 0x1e;
  uVar50 = (uVar50 & 0x80000000) >> 0xf | 0x84700000;
  uVar18 = CONCAT62(0xe34a07cf36af,sVar16) + (ulong)(uVar50 | uVar48);
  uVar19 = (uVar18 & 0xffffffffffff0000 |
           (ulong)CONCAT11((byte)(uVar18 >> 8) & (byte)uVar18,(byte)uVar18)) & 0xffffe8ed;
  uVar38 = ((ulong)(ushort)(0x609f - (ushort)(0xc52c767b7f2e6110 < uVar26)) | 0xc52c767b7f2e0000) <<
           0x1d | 0x18a58ecf;
  uVar18 = 0x3f;
  if (uVar19 != 0) {
    while (uVar19 >> uVar18 == 0) {
      uVar18 = uVar18 - 1;
    }
  }
  uVar7 = (long)(int)uVar23 * -0xb77332;
  iVar33 = (int)(uVar7 >> 0x20);
  bVar51 = iVar33 != 0 && iVar33 != -1;
  uVar50 = uVar50 | (ushort)(uVar48 >> 1 |
                            (ushort)(uVar18 < 0xffffe8ed || uVar18 - 0xffffe8ed < (ulong)bVar51) <<
                            0xf);
  uVar19 = uVar19 << 1 | 1;
  uVar48 = (ushort)uVar7 >> 3;
  bVar52 = (uVar5 | 0x40000000) == 0x54faf;
  uVar32 = (ushort)bVar52 * -0x3b0c ^ 0x4faf;
  uVar3 = (ushort)uVar5;
  uVar3 = uVar3 ^ (ushort)bVar52 * (uVar3 & uVar32);
  uVar4 = uVar3 & ~(1 << ((ushort)uVar19 & 0xf));
  uVar5 = uVar45 >> 1;
  uVar23 = (uint)uVar19;
  bVar52 = CONCAT22((short)uVar3 >> 0xf,uVar4) == uVar23;
  uVar23 = uVar23 ^ (uint)bVar52 * (uVar23 ^ uVar50);
  uVar4 = (short)(uVar4 ^ (ushort)bVar52 * (uVar4 & (ushort)uVar23)) >> 1;
  uVar45 = uVar45 >> 0xd | 0x7800000;
  uVar50 = uVar50 ^ 0x6a456c44;
  bVar52 = (short)((uint)(ushort)(uVar4 * -0x7131) * (uVar5 & 0xffff) >> 0x10) != 0;
  uVar49 = uVar4 & 0xff;
  uVar3 = ((short)(uVar18 - 0xffffe8ed) - (ushort)bVar51) * 2 | 1;
  if (bVar52) {
    uVar3 = uVar49;
  }
  iVar33 = ((uint)(byte)uVar4 | 0xfff00000) + 0xe12e9d80 + (uint)bVar52;
  sVar16 = uVar3 + (ushort)uVar5;
  uVar25 = (uint)uVar26;
  if (!CARRY2(uVar3,(ushort)uVar5) && sVar16 != -1) {
    uVar25 = uVar45;
  }
  uVar18 = uVar7 & 0xffff0000 |
           (ulong)(ushort)(uVar48 & 0xff |
                          (ushort)(byte)((byte)((ulong)(ushort)(uVar48 | (ushort)uVar7 << 0xd) >> 8)
                                        ^ (byte)uVar48) << 8) | 0xffffffffffffadde;
  if (in_PF) {
    uVar45 = uVar50;
  }
  sVar37 = (short)(uVar38 >> 1);
  uVar25 = uVar25 ^ 1 << ((uint)(ushort)(sVar16 + 1) & 0x1f);
  uVar41 = iVar33 * 2;
  uVar29 = uVar50 >> 1;
  uVar48 = ((ushort)uVar18 & 0xff00 | (ushort)(byte)((byte)uVar18 >> 7 | (byte)uVar18 << 1)) +
           (uVar32 & 0xff00) + 0x474e + (ushort)(iVar33 < 0);
  uVar11 = uVar45 & 0xffff0000 | (uint)(ushort)((short)uVar45 * 0x73d4);
  sVar16 = sVar37 + 0x1890;
  uVar45 = uVar29 << 0x1f;
  cVar21 = (char)uVar5 + -0x7c;
  bVar51 = SCARRY1((char)uVar5,-0x7c) != SCARRY1(cVar21,'\0');
  uVar5 = uVar41 & 0xffffff00 | (uint)(byte)(((byte)uVar41 | (byte)(uVar25 >> 0x1f)) + 0x95);
  if (cVar21 == '\0' || bVar51 != cVar21 < '\0') {
    uVar5 = uVar45 | 0x797181cb;
  }
  uVar23 = uVar23 & 0xffff0000 |
           (uint)(ushort)(uVar49 | (ushort)(byte)(0xaf - ((ushort)(sVar37 + 0xa8bcU) < 0x2320)) << 8
                         ) & 0xffffff00 | (uint)(byte)uVar49;
  if (bVar51) {
    uVar23 = 0x96;
  }
  uVar23 = uVar23 + (uVar25 & 0xffffff00 | (uint)(byte)((char)uVar25 - (byte)uVar4));
  uVar19 = CONCAT62((uint6)(uVar38 >> 0x11),sVar16) ^ 0xc288;
  if (sVar16 == -0x3d78) {
    uVar29 = uVar29 & 0xffff | (uVar50 >> 0x11) << 0x10;
  }
  uVar26 = (ulong)((uint)uVar18 & 0xffff0000 |
                   (uint)(ushort)(uVar48 & 0xff |
                                 (ushort)(byte)((char)((ulong)uVar48 >> 8) + 0x52) << 8) | 0x1000);
  uVar18 = (ulong)(uVar23 >> 0x17 |
                  (uVar23 & 0xffff0000 |
                  (uint)(ushort)(CONCAT11((byte)((ulong)uVar23 >> 8) >> 1,(char)uVar23) | 0x8000))
                  << 9) << 1;
  lVar24 = 0x3f;
  if (uVar29 != 0) {
    while (uVar29 >> lVar24 == 0) {
      lVar24 = lVar24 + -1;
    }
  }
  uVar38 = (ulong)(uVar5 < 0xcd0d82d8) << 0x20 | (ulong)uVar5 - 0xcd0d82d8 & 0xffffffff;
  cVar21 = (char)(uVar38 >> 0x19);
  uVar50 = (uint)(uVar38 << 8) | (uint)(byte)(cVar21 << 1);
  uVar38 = uVar26 & 0xffffffffffffff00 | 0xffffffff00000000 | (uVar26 & 0xfe) >> 1;
  uVar45 = uVar45 | 0x79710000 | (uint)(ushort)(0x81cb - (short)uVar29);
  bVar27 = (char)uVar19 >> 0x19;
  iVar33 = uVar11 - uVar45;
  uVar26 = (uVar26 | 0xffffffff00000000) + (ulong)((uint)(cVar21 < '\0') | 0xffffadde);
  if (uVar45 <= uVar11 && iVar33 != 0) {
    uVar26 = uVar18 >> 0x15 | (uVar18 & 0xffffffffffff00ff) << 0x2b;
  }
  uVar5 = ((uint)(uVar19 & 0xffffffffffffff00) | (uint)bVar27) + 0x46;
  uVar23 = -~(uint)uVar19;
  bVar9 = (byte)uVar26;
  bVar8 = (byte)uVar5 | bVar9;
  lVar6 = (ulong)uVar45 * 2 * lVar24;
  uVar48 = (ushort)uVar38;
  bVar22 = bVar8 & 7;
  uVar18 = (ulong)uVar50 << 1;
  bVar47 = (char)uVar29 >> (bVar8 & 0x1f);
  bVar8 = (byte)(uVar5 >> 0x15) & 0x1f;
  uVar25 = ((uint)uVar38 & 0xffff0000 | (uint)(ushort)(uVar48 ^ (uVar48 >> 10 & 1) << 10)) +
           0x8a2b9d1f << bVar8 | uVar23 >> 0x20 - bVar8;
  auVar1 = SEXT816(lVar6) * SEXT816(0x2a1d8476167680cb);
  lVar6 = lVar6 * 0x2a1d8476167680cb;
  uVar5 = iVar33 + 0x1098f4d5U >> 0xb;
  uVar45 = 0;
  while ((0x81c063d2U >> uVar45 & 1) == 0) {
    uVar45 = uVar45 + 1;
  }
  uVar48 = (short)(char)lVar6 * (short)(char)bVar47;
  cVar21 = (char)(uVar48 >> 8);
  uVar43 = (int)lVar24 + -0x7ae361ac + (uint)(cVar21 != '\0' && cVar21 != -1);
  uVar3 = ~((ushort)(uVar19 & 0xffffffffffffff00) |
           (ushort)(byte)((char)(bVar27 << 3 | bVar27 >> 5) >> 0x1a));
  uVar12 = (uint)uVar19 & 0xffff0000 | (uint)uVar3;
  uVar11 = uVar45 | uVar12;
  uVar41 = 0xe3fb58f6 - uVar5;
  sVar16 = (short)uVar23;
  uVar32 = (ushort)uVar41 >> 1 | sVar16 << 0xf;
  uVar23 = uVar41 & 0xffff0000 | (uint)uVar32;
  if (uVar32 == 0) {
    uVar5 = uVar5 & 0xffff0000 |
            (uint)(ushort)((ushort)((ulong)uVar29 & 0xffffffffffffff00) | (ushort)bVar47);
  }
  iVar33 = -uVar23;
  uVar40 = iVar33 + 0x167680ca;
  uVar19 = (ulong)(byte)(((byte)uVar43 & 0xe2) << 4 |
                        (byte)(CONCAT11(0x167680cb < uVar23 || iVar33 == -0x167680cb,(byte)uVar43)
                              >> 5));
  uVar38 = (ulong)uVar43 & 0xffffffffffff9b00 | uVar19;
  uVar23 = ((uint)lVar6 & 0xffff0000 | (uint)uVar48) * 0x276e6623;
  if (sVar16 != 0) {
    uVar23 = uVar25;
  }
  uVar7 = 0;
  if (uVar50 != 0) {
    while ((uVar18 >> uVar7 & 1) == 0) {
      uVar7 = uVar7 + 1;
    }
  }
  uVar30 = (ulong)(uVar12 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f) +
           CONCAT62(SUB166(auVar1 >> 0x50,0),
                    CONCAT11(SUB161(auVar1 >> 0x48,0) + (char)uVar45 +
                             ((0xe3fb58f6U >> (uVar25 & 0x1f) & 1) != 0),SUB161(auVar1 >> 0x40,0)));
  uVar31 = (ulong)uVar29 & 0xffffffffffffff00 | (ulong)(byte)(bVar47 << 1);
  uVar3 = (ushort)uVar11 | (ushort)uVar40;
  uVar11 = uVar11 & 0xffff0000;
  uVar48 = (ushort)uVar7 >> 1;
  bVar8 = (byte)uVar3;
  bVar36 = (char)uVar48 << 7;
  uVar26 = (((uVar26 & 0xffffffffffffff00 | (ulong)(byte)(bVar9 << bVar22 | bVar9 >> 8 - bVar22)) <<
             1 | (ulong)((uVar41 & 1) != 0)) - 0x74fdece4) +
           (ulong)((((ulong)uVar23 << (bVar8 & 0x3f) | (ulong)(uVar23 >> 0x40 - (bVar8 & 0x3f))) & 1
                   ) != 0);
  bVar27 = (bVar8 & 0x1f) % 9;
  uVar32 = (ushort)uVar26 & ~(1 << (uVar3 & 0xf));
  uVar26 = uVar26 & 0xffffffffffff0000;
  uVar42 = uVar26 | uVar32;
  lVar24 = 0;
  uVar50 = 0;
  if (uVar42 != 0) {
    while (uVar50 = (uint)lVar24, (uVar42 >> lVar24 & 1) == 0) {
      lVar24 = lVar24 + 1;
    }
  }
  uVar45 = (int)uVar18 << 0x14;
  uVar41 = -(uVar40 & 0xeabfc66);
  bVar51 = (ushort)(((ushort)uVar30 & 0xff00 | (ushort)(byte)((char)uVar30 >> (bVar8 & 0x1f))) + 1)
           < (ushort)uVar5;
  iVar33 = (uint)(ushort)(uVar32 & 0xff00 | (ushort)(byte)-bVar51) * (uVar5 - 1 & 0xffff);
  uVar32 = (ushort)((uint)iVar33 >> 0x10);
  uVar29 = ((uint)uVar30 & 0xffff0000 | 8) - 1;
  uVar23 = (uVar50 & 0xffff0000 | (uint)uVar32) * 3;
  bVar9 = (byte)(uVar3 & 0xff);
  bVar28 = (byte)uVar29;
  iVar33 = (int)(short)iVar33 * (int)(short)uVar32;
  sVar16 = (short)((uint)iVar33 >> 0x10);
  uVar26 = uVar26 | (ushort)iVar33;
  bVar22 = (bVar9 & 0x1f) % 9;
  cVar21 = (char)uVar41;
  uVar50 = uVar41 & 0xffffff00 |
           (uint)(byte)((byte)(CONCAT11(sVar16 != 0 && sVar16 != -1,cVar21) >> bVar22) |
                       cVar21 << 9 - bVar22);
  uVar18 = (ulong)uVar50;
  uVar42 = uVar18 ^ (ulong)(uVar26 == uVar18) * (ulong)(uVar50 ^ uVar5);
  uVar26 = uVar26 ^ (ulong)(uVar26 == uVar18) * (uVar26 & uVar42);
  uVar41 = (uVar11 | (ushort)(uVar3 & 0xff |
                             (ushort)(byte)((byte)((ulong)(uVar11 | uVar3) >> 8) >> 1 |
                                           (uVar32 != 0) << 7) << 8)) << (bVar9 & 0x1f);
  bVar22 = (byte)(uVar26 >> 8);
  bVar15 = (byte)((ulong)uVar41 >> 8);
  uVar3 = CONCAT11(bVar15,(char)uVar26);
  uVar50 = (uint)uVar26 & 0xffff0000 | (uint)uVar3;
  uVar25 = ((uVar5 - 1) - uVar25) - (uint)CARRY1(bVar15,bVar22);
  uVar18 = (ulong)(uVar41 & 0xffff0000 | (uint)CONCAT11(bVar15 + bVar22,(char)uVar41)) +
           (uVar38 | 0x40000);
  uVar45 = ((uint)((CONCAT14(bVar51,uVar45) | 0x81c08) >> (bVar8 & 0x1f)) |
           (uVar45 | 0x81c08) << 0x21 - (bVar8 & 0x1f)) & 0xffffff00;
  if (-1 < (int)(((uint)uVar7 & 0xffff0000 | (uint)uVar48 & 0xffffff00 |
                 (uint)(byte)(bVar36 >> bVar27 | bVar36 << 9 - bVar27)) & (int)uVar50 >> 0x1f)) {
    uVar45 = (uint)uVar42;
  }
  uVar41 = (uVar23 & 0xffffff00 | (uint)(byte)~(byte)uVar23) ^
           (uint)(1 << ((ulong)(byte)(bVar47 << 1) & 0x3f));
  uVar23 = uVar41 & 0x7fffffff;
  uVar30 = (uVar30 & 0xffffffff00000000 | (ulong)uVar29 & 0xffffffffffffff00 |
           (ulong)(byte)(bVar28 >> (bVar9 & 7) | bVar28 << 8 - (bVar9 & 7))) + 0x60c3a993;
  bVar51 = CARRY4(uVar50,uVar45 & 0xe6e7dc28);
  uVar50 = uVar50 + (uVar45 & 0xe6e7dc28);
  if (!bVar51 && uVar50 != 0) {
    uVar42 = uVar42 & 0xffffffffffff0000 | (ulong)uVar43 & 0x9b00 | uVar19;
  }
  uVar45 = CONCAT22((short)(ushort)(uVar25 >> 0x11) >> 1,(ushort)((int)(uVar25 >> 1) >> 1) & uVar3);
  bVar27 = (byte)uVar18 & 0x3f;
  uVar19 = (ulong)(uVar45 >> bVar27) | (ulong)uVar45 << 0x40 - bVar27;
  lVar24 = 0x3f;
  iVar33 = 0x3f;
  if (uVar31 != 0) {
    while (iVar33 = (int)lVar24, uVar31 >> lVar24 == 0) {
      lVar24 = lVar24 + -1;
    }
  }
  uVar46 = (ulong)((uVar5 + 0xe169a1fc) - (uint)bVar51) + 0x245ec30;
  uVar14 = uVar30 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar30 >> 0x1d) & 0xffffffffffffff00
  ;
  uVar45 = (uint)uVar14 | (uint)(byte)(((char)(uVar30 >> 8) >> 0x15) + 0x31);
  uVar30 = (ulong)((uint)uVar31 - uVar23);
  bVar27 = (byte)((ulong)(uVar50 >> 0x13) >> 8);
  bVar22 = (byte)(uVar18 & 0xff);
  cVar21 = (byte)uVar23 + (char)uVar42 << (bVar22 & 0x1f);
  uVar50 = CONCAT31((uint3)((uVar41 << 1) >> 9),cVar21);
  lVar24 = (uVar19 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar19 << 1)) + uVar30;
  bVar8 = ~(byte)(uVar7 >> 0x13);
  uVar45 = ((iVar33 + ((uint)uVar26 & 0xffff0000 | (uint)uVar3) + (uint)((uint)uVar31 < uVar23) >>
             (bVar22 & 0x1f) | uVar45 << 0x20 - (bVar22 & 0x1f)) & 0xffffffb8) - uVar45;
  uVar19 = (uVar7 >> 0x13 & 0xffffffffffffff00 | (ulong)bVar8) >> 1;
  if (((uVar7 & 0x20000) != 0) == ((bVar8 & 1) != 0)) {
    uVar30 = (ulong)uVar45;
  }
  lVar6 = 0 << (bVar22 & 0x3f);
  uVar5 = (int)uVar46 * 0x200 | (uint)(byte)('\0' >> (bVar22 & 0x1f));
  uVar7 = (ulong)(byte)(bVar27 >> 1 | bVar27 << 7) * 0x100 * lVar24;
  uVar31 = uVar46 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar46 & (ushort)uVar19);
  uVar44 = CONCAT71((uint7)(byte)((ushort)((short)uVar38 - (short)(uVar18 & 0xff)) >> 8),0x6d);
  uVar26 = (long)(int)((uint)uVar7 | (uint)(byte)(cVar21 + 1)) * (long)(int)uVar31;
  uVar38 = uVar26 & 0xffffffff;
  uVar41 = uVar45 * 8 >> (bVar22 & 0x3f) | uVar50 << 0x40 - (bVar22 & 0x3f);
  uVar25 = (uint)uVar19;
  if (CARRY8(uVar31,uVar30)) {
    uVar25 = uVar41;
  }
  iVar33 = uVar41 - uVar5;
  uVar32 = (short)(uVar31 + uVar30) + (short)uVar38 + 1;
  uVar48 = (short)(char)uVar38 * (short)(char)iVar33;
  uVar5 = uVar5 >> 1;
  uVar19 = (ulong)uVar50 << (bVar22 & 0x3f) | (ulong)(uVar50 >> 0x40 - (bVar22 & 0x3f));
  uVar3 = (ushort)lVar24 - (ushort)uVar19;
  uVar50 = uVar25 + 0xa4468e02 & 0xffff0000;
  bVar51 = (ushort)uVar19 <= (ushort)lVar24 && uVar3 != 0;
  bVar8 = (byte)uVar48;
  bVar9 = bVar22 ^ (bVar8 == bVar22) * (bVar22 ^ bVar51);
  uVar18 = uVar18 & 0xffffffffffff0000 |
           (ulong)CONCAT11(-1 >> (bVar22 & 0x1f),bVar22) & 0xffffffffffffff00 | (ulong)bVar9;
  lVar13 = uVar18 * 0x4e014301;
  lVar2 = SUB168(SEXT816((long)uVar18) * SEXT416(0x4e014301) >> 0x40,0);
  bVar27 = ((byte)lVar13 & 0x1f) % 0x11;
  uVar43 = (uint)lVar6 & 0xffffff00 | (uint)(byte)((byte)lVar6 ^ (byte)uVar5);
  uVar18 = (ulong)(ushort)(CONCAT11(lVar2 != 0 && lVar2 != -1,(char)uVar19) ^
                          1 << ((ushort)(uVar26 >> 0x21) & 0xf));
  uVar19 = uVar19 & 0xffffffffffff0000 | uVar18;
  uVar49 = ((ushort)uVar30 & 0xff00 | (ushort)bVar51) ^ (ushort)uVar44;
  uVar11 = (uint)lVar24 >> 0x18 | ((uint)lVar24 & 0xff0000) >> 8 | ((uint)uVar3 & 0xff00) << 8 |
           (uint)uVar3 << 0x18;
  uVar12 = ~(uint)lVar13;
  auVar1 = ZEXT816(uVar7 & 0xffffffff00000000 | uVar26 & 0xffff0000 |
                   (ulong)uVar48 & 0xffffffffffffff00 |
                   (ulong)(byte)(bVar8 ^ (bVar8 == bVar22) * (bVar8 & bVar9))) * ZEXT416(uVar11);
  uVar3 = (ushort)uVar12;
  uVar4 = (uVar32 >> bVar27 | uVar32 << 0x11 - bVar27) + uVar3;
  bVar27 = (byte)uVar12;
  uVar41 = ((uint)(((ulong)(uint3)((uint)iVar33 >> 8) & 0xffffffffffff00) << 8) | (uint)uVar44) >>
           (bVar27 & 0x1f);
  uVar7 = SEXT28((short)uVar4);
  uVar26 = ((ulong)(uint)((int)uVar38 + 0x66 + (int)(uVar26 >> 0x20)) - 0x1223dd24c) -
           (ulong)(0xfffffffff8ce9108 < uVar7 || 0xfffffffffffffffe < uVar7 + 0x7316ef7);
  uVar32 = (ushort)(((ulong)(uVar5 | 0x80000000) & ~(1 << (ulong)bVar51)) >> 0x1d);
  uVar48 = uVar32 + 0x897e;
  uVar29 = uVar41 << 0xc;
  uVar41 = (uint)(CONCAT14(uVar32 < 0x7682,uVar41) >> 0x15);
  uVar40 = (uint)uVar26 & 0xffff0000 | (uint)(uVar26 >> 1) & 0x7fff;
  uVar26 = uVar7 + 0x7316ef8 >> 1 | uVar18 << 0x3f;
  uVar11 = uVar11 + 0xe5c87b0d << (bVar27 & 0x1f);
  uVar18 = (ulong)(uVar43 + uVar11);
  uVar43 = (uint)((CONCAT18(CARRY4(uVar43,uVar11),uVar18) >> (bVar27 & 0x3f)) >> 0x20) |
           (uint)((uVar18 << 0x41 - (bVar27 & 0x3f)) >> 0x20);
  uVar32 = uVar3 << 1 | (ushort)((short)uVar3 < 0);
  uVar18 = uVar19 << 1;
  if ((long)uVar19 < 0 != (long)uVar18 < 0) {
    uVar11 = uVar50 | (ushort)((short)uVar5 + (short)(uVar25 + 0xa4468e02) * 8);
  }
  bVar27 = (byte)uVar32;
  bVar22 = (byte)uVar18 ^ bVar27;
  uVar25 = uVar40 << (bVar27 & 0x1f) | uVar40 >> 0x20 - (bVar27 & 0x1f);
  uVar5 = (uVar12 & 0xffff0000 | (uint)uVar32) ^ uVar25;
  if ((int)uVar5 < 0) {
    uVar43 = 0;
  }
  lVar24 = (long)(uVar18 & 0xffffffffffffff00 | (ulong)bVar22) >> 1;
  uVar38 = (uVar14 | (byte)((bVar22 == 0) + 0xbb)) << (bVar27 & 0x3f) & 0xffffffffffffff00;
  uVar18 = (ulong)uVar5 & 0xffffffffffffff0f;
  sVar10 = (sbyte)uVar18;
  uVar34 = (short)uVar25 << sVar10 | (ushort)lVar24 >> 0x10 - sVar10;
  uVar5 = uVar25 & 0xffff0000 | (uint)uVar34;
  bVar22 = SUB161(auVar1,0);
  bVar9 = (char)((ulong)(ushort)((short)((SUB162(auVar1 >> 0x40,0) & 0xff2b | uVar3) << 7) >> 0x13)
                >> 8) + bVar22 + 1;
  uVar12 = uVar43 >> 0xf | (uint)uVar48 << 0x11;
  uVar32 = (ushort)(uVar50 >> 0x10);
  uVar25 = uVar11 & 0xffffff00 | uVar11 >> 1 & 0x7f;
  uVar50 = (uVar29 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar41 & 0xff00 | (ushort)uVar29 |
                          (ushort)(byte)((char)uVar41 + (char)uVar4)) << sVar10 |
                         (ushort)uVar18 >> 0x10 - sVar10)) >> 1;
  uVar7 = (ulong)(uVar25 << sVar10 | uVar25 >> 0x20 - sVar10);
  uVar25 = (uint)uVar38 & ~(1 << ((uint)uVar34 & 0x1f));
  uVar11 = uVar12 >> sVar10 | uVar12 << 0x20 - sVar10;
  uVar41 = uVar25 >> sVar10 | uVar25 << 0x20 - sVar10;
  uVar19 = (ulong)uVar48 ^ 0xffffffff84e5ea14;
  uVar18 = (uVar31 + uVar30 >> 0x1d | uVar38 << 0x23) - 0xdf9f2ec5;
  uVar48 = (ushort)CARRY1((byte)uVar34,bVar9);
  uVar3 = uVar49 + 0xd9b9;
  bVar8 = (sVar10 + -0x4f) - (uVar49 < 0x2647 || uVar3 < uVar48) & 8;
  uVar12 = ~(uint)uVar18;
  uVar38 = uVar18 & 0xffffffff00000000 | (ulong)uVar12;
  uVar25 = -((byte)((byte)lVar24 ^ bVar22) + uVar50 + 1 & 0xff);
  uVar49 = (ushort)uVar50;
  uVar49 = uVar49 << bVar8 % 0x11 | uVar49 >> 0x11 - bVar8 % 0x11;
  uVar50 = ~((int)(((int)(((uVar42 & 0xffffffffffffff00 | (ulong)(byte)uVar23) << 0xb) >> 1) -
                   uVar45) - 1 & 0xffff0000 | (uint)(uVar4 >> (bVar27 & 0x1f))) >> 0xf & uVar5);
  uVar18 = (ulong)((uVar29 & 0xfefe0000) >> 1 | (uint)uVar49);
  if ((uVar29 >> 0x18 & 1) != 0) {
    uVar50 = uVar50 & 0xffff0000;
  }
  uVar4 = (uVar32 & 0xff00 | 1) * 0x2beb;
  uVar31 = (ulong)(ushort)(uVar4 & 0xff |
                          (ushort)(byte)((byte)(uVar4 >> 8) ^
                                        (byte)((ulong)(ushort)((ushort)bVar9 << 8 ^
                                                              1 << ((ushort)uVar12 & 0xf)) >> 8)) <<
                          8);
  uVar42 = uVar7 ^ (ulong)(uVar31 == uVar7) * (uVar7 ^ uVar38);
  uVar30 = uVar30 & 0xffffffffffff0000 | ((ulong)(ushort)(uVar3 - uVar48) & 0xfe00) >> 1 |
           uVar19 & 0xff;
  if ((uVar32 >> 9 & 1) != 0) {
    uVar30 = (ulong)uVar11;
  }
  uVar5 = ((uint)(((ulong)uVar5 & 0xffff) << 1) & 0xffff0000 | (uint)(byte)((ulong)uVar25 >> 8)) +
          (int)uVar30;
  bVar27 = (byte)uVar5;
  uVar14 = ((ulong)uVar25 + 0x2a6abdd5 << (bVar27 & 0x3f) |
           (uVar18 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar49 + 1)) >> 0x40 - (bVar27 & 0x3f)
           ) >> 1;
  uVar43 = (uint)uVar14;
  uVar45 = (int)((ulong)(long)(short)uVar25 >> (bVar27 & 0x3f)) * 9;
  uVar5 = uVar5 >> 1;
  lVar24 = (long)(((uVar19 & 0xffffffffffffff00 | uVar14 & 0xff) - 0xca9c81ef) -
                 (ulong)((uVar41 >> 0x18 & 1) != 0)) >> ((byte)uVar5 & 0x3f);
  uVar48 = (ushort)uVar45 |
           1 << (((short)uVar11 << (bVar27 & 0x3f) | (ushort)(uVar30 >> 0x40 - (bVar27 & 0x3f))) &
                0xf);
  uVar29 = (uint)((uVar26 << bVar8 | uVar26 >> 0x40 - bVar8) >> 1);
  uVar25 = uVar29 & 0xffff;
  bVar27 = (byte)((ulong)uVar5 >> 8);
  uVar23 = (uint)CONCAT11(bVar27 >> 1 | bVar27 << 7,(byte)uVar5);
  uVar19 = uVar31 ^ (ulong)(uVar31 == uVar7) * (uVar31 & uVar42);
  if (CARRY4(uVar50 & 0xffff0000,uVar50 & 0xffff0000)) {
    uVar19 = uVar18 & 0xffffffffffff0000;
  }
  uVar50 = (uVar5 & 0xffff0000 | uVar23) << 1 | uVar43 >> 0x1f;
  cVar21 = (char)lVar24;
  uVar32 = (short)uVar42 + 1 >> 7;
  uVar3 = 0;
  if (uVar48 != 0) {
    while ((uVar48 >> uVar3 & 1) == 0) {
      uVar3 = uVar3 + 1;
    }
  }
  bVar27 = (byte)uVar50;
  uVar5 = (uVar5 & 0xffff0000 | uVar23 & 0x7fff8000) << 1;
  bVar22 = (byte)((ulong)(uVar5 | CONCAT11((byte)((ulong)uVar50 >> 8) & (byte)uVar19,bVar27)) >> 8);
  uVar18 = uVar19 & 0x3fff | 0xc0;
  uVar4 = (ushort)(byte)uVar18;
  uVar49 = (ushort)uVar18;
  uVar7 = uVar19 & 0xffffffffffff0000 | (ulong)(ushort)(uVar49 / uVar4 & 0xff | uVar49 % uVar4 << 8)
  ;
  uVar26 = uVar42 & 0xffffffffffff0000 | (ulong)uVar32 & 0xffffffffffffff00 |
           (ulong)(byte)((byte)uVar32 >> 3 | (byte)uVar32 << 5);
  uVar50 = (uint)lVar24 & 0xffff0000 | (uint)(ushort)((short)lVar24 - 1) | 0xc0000000;
  uVar18 = (ulong)((uVar45 & 0xffff0000 | (uint)uVar48) * -0x33fa521e & 0x3fffffff) << 0x20 | uVar7;
  uVar19 = uVar18 % (ulong)uVar50;
  bVar8 = (byte)(uVar25 >> 8);
  uVar31 = (ulong)(uVar41 & 0xffffff00 | (uint)(byte)((char)uVar41 + 0x19)) | 0x100946f;
  uVar19 = uVar19 & 0x5955d500 | (ulong)(byte)(((byte)uVar19 & 0x15) - 0x26);
  if ((short)uVar26 != 0) {
    uVar26 = uVar30 & 0xffffffffffff0000 | (ulong)uVar3;
  }
  uVar45 = uVar50 ^ 0x6a;
  auVar1 = (CONCAT88(uVar19,uVar18 / (ulong)uVar50 << 0x35) & (undefined  [16])0xffffffffffffffff) %
           ZEXT816(uVar38 | 0xc000000000000000);
  uVar23 = (uVar43 & 0xffff0000 |
           (uint)CONCAT11(bVar8 >> (bVar27 & 7) | bVar8 << 8 - (bVar27 & 7),(char)uVar25)) +
           0x4f8c61d1;
  bVar8 = (char)uVar31 << 1;
  uVar3 = (short)(ushort)uVar12 >> 1;
  sVar16 = SUB162(auVar1,0);
  uVar50 = (uVar45 & 0xff0000) >> 8 | (uVar45 & 0xff00) << 8 | uVar45 << 0x18;
  uVar18 = (ulong)uVar50 << 0x35;
  uVar30 = ~CONCAT62(SUB166(auVar1 >> 0x10,0),
                     (short)((uint)((int)(short)((cVar21 - sVar16) - (ushort)((uVar12 & 1) != 0)) *
                                   (int)sVar16) >> 0x10));
  uVar48 = (ushort)(short)cVar21 >> 0xc | (short)cVar21 << 4;
  uVar31 = uVar31 & 0xffffffffffffff00 | (ulong)(bVar8 & (byte)uVar30);
  uVar38 = (ushort)((short)(char)((ulong)uVar23 >> 8) & 0xffU |
                    (ushort)(byte)(((uVar31 & 0x9db) == 0) << 6) << 8 | 0x200) * uVar30;
  uVar45 = ((uVar5 | CONCAT11(bVar22 << 2 | bVar22 >> 7,bVar27)) & ~(1 << ((uint)uVar19 & 0x1f)) &
           ~(1 << ((uint)bVar8 & 0x1f))) - (int)uVar31;
  uVar19 = (ulong)(uVar23 * 2 & 0xffff0000 |
                  (uint)(ushort)((short)uVar30 + 0xe6 + ((short)cVar21 + uVar48 + 1) * 4)) << 1;
  uVar30 = uVar19 | uVar18 >> 0x3f;
  bVar22 = (byte)uVar30;
  bVar27 = (byte)uVar45 | bVar22;
  uVar45 = uVar45 & 0xffffff00 | (uint)bVar27;
  uVar31 = uVar31 & ~(1 << ((ulong)uVar3 & 0x3f));
  uVar23 = (uVar29 & 0xffff | (uint)(ushort)(cVar21 >> 7) << 0x10) ^ 0xc265e644;
  iVar33 = (int)(short)uVar38 * (int)(short)uVar48;
  uVar18 = (uVar18 | uVar50 >> 0xb) + 1 & 0xffffffff;
  uVar5 = (uint)(uVar18 << (bVar27 & 0x1f)) | (uint)(uVar18 >> 0x21 - (bVar27 & 0x1f));
  lVar24 = (uVar26 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)uVar26 ^ 1 << ((ushort)uVar45 & 0xf))) << (bVar27 & 0x3f);
  uVar45 = uVar45 << (bVar27 & 0x1f);
  uVar18 = uVar38 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)iVar33 & 0xff |
                          (ushort)(byte)((ulong)(ushort)((uint)iVar33 >> 0x10) >> 8) << 8);
  uVar38 = (ulong)(~(((int)uVar7 + ((uint)(uVar42 & 0xffffffffffff0000) | (uint)uVar32) & 0xffffff00
                     | 0x1ff38473) & 0xffff0000) & 0xffff0000 | (uint)(ushort)lVar24);
  uVar26 = (ulong)(uVar45 & 0xffff0000 | (uint)(ushort)((short)uVar45 + 0x2b9e));
  uVar50 = (uint)lVar24 ^ uVar5;
  uVar45 = (int)((uVar12 & 0xffff0000 | (uint)uVar3) + 0x747e84d7) >> 1;
  lVar24 = 0x3f;
  if (uVar45 != 0) {
    while (uVar45 >> lVar24 == 0) {
      lVar24 = lVar24 + -1;
    }
  }
  auVar1 = SEXT816((long)uVar18) * SEXT816((long)(ulong)uVar23);
  uVar18 = uVar18 * (ulong)uVar23;
  bVar27 = (byte)uVar18;
  if (!SCARRY8(uVar38,uVar38)) {
    uVar50 = (uint)uVar30;
  }
  uVar41 = uVar50 & 0xffffff00 | uVar50 >> 1 & 0x7f;
  lVar24 = SUB168(SEXT816(lVar24) * SEXT416(-0x3e42a425) >> 0x40,0);
  uVar38 = (ulong)(CONCAT18(lVar24 != 0 && lVar24 != -1,uVar26) >> 0x1b);
  bVar8 = (byte)uVar38;
  uVar25 = (uint)uVar38;
  uVar7 = ((ulong)uVar5 - uVar26) - 0x264f52ba;
  bVar9 = SUB161(auVar1 >> 0x40,0);
  uVar50 = (uVar23 & 0xffffff00 | (uint)(byte)((char)uVar23 >> bVar8)) >> 1;
  uVar19 = uVar19 & 0xffffffffffffff00 | (ulong)(bVar22 & bVar9);
  uVar19 = uVar19 << bVar8 | uVar19 >> 0x40 - bVar8;
  uVar23 = (uint)uVar19 & 0xffffff00 | (uint)(byte)((char)uVar19 - 1);
  iVar33 = 0;
  if (uVar23 != 0) {
    while ((uVar23 >> iVar33 & 1) == 0) {
      iVar33 = iVar33 + 1;
    }
  }
  lVar6 = SUB168(auVar1 >> 0x40,0) * 0x52c811a0;
  uVar23 = CONCAT22((undefined2)(cVar21 >> 7),uVar48) & 0xffffff00 |
           (uint)(byte)((byte)uVar48 << (bVar8 & 7) | (byte)uVar48 >> 8 - (bVar8 & 7));
  lVar24 = -(uVar18 & 0xffffffffffff0000 |
             (ulong)CONCAT11(!SBORROW8((ulong)uVar5,uVar26),bVar27) & 0xffffffffffffff00 |
            (ulong)(bVar27 | bVar9));
  uVar18 = (ulong)uVar23;
  if ((uint)(int)(short)uVar23 < 0x52c4cc6c) {
    uVar18 = uVar7;
  }
  uVar26 = (ulong)(uVar50 & 0xffff | 0x61320000) | 0xffffffffefbcc356;
  uVar30 = (ulong)(ushort)uVar50 & 0xff;
  uVar3 = (ushort)uVar30;
  uVar48 = (short)uVar41 << 10 | uVar3 >> 6;
  uVar19 = (ulong)uVar41 & 0xffffffffffff0000;
  uVar5 = (uint)uVar7;
  uVar45 = ((((uint)uVar31 & 0xffff0000 | (uint)(ushort)((ushort)uVar31 >> 1)) + uVar45) * 2 ^
           0x3a01bc8d) & (uVar5 << 2 | uVar5 >> 0x1e);
  iVar33 = 0x1f;
  if (uVar38 != 0) {
    while (uVar25 >> iVar33 == 0) {
      iVar33 = iVar33 + -1;
    }
  }
  sVar16 = 0xf;
  if (uVar3 != 0) {
    while (uVar3 >> sVar16 == 0) {
      sVar16 = sVar16 + -1;
    }
  }
  uVar5 = (uint)lVar6 & 0xffff0000 | (uint)CONCAT11((char)((ulong)lVar6 >> 8) * '\x02',(char)lVar6);
  lVar2 = SUB168(SEXT816((long)uVar26) * SEXT416(0x725232a3) >> 0x40,0);
  bVar27 = ((char)(uVar25 >> 1) + '\v') - (lVar2 != 0 && lVar2 != -1);
  uVar14 = (ulong)(uVar25 >> 1 | uVar25 << 0x1f) & 0xffffffffffffff00 | (ulong)bVar27;
  uVar50 = (uVar50 & 0xffff) << 1;
  uVar32 = (ushort)uVar50;
  uVar4 = uVar32 | 1;
  iVar33 = (int)uVar14;
  uVar23 = iVar33 + -0x1d94c4a1 + uVar5 * 8;
  uVar42 = (ulong)uVar23;
  uVar7 = ((ulong)(uint3)(uVar5 + ((uint)lVar24 & 0xffff0000 |
                                  (uint)(ushort)((short)lVar24 - (short)uVar26)) * 4 >> 8) &
          0xffffffffffff00) << 8;
  uVar5 = (uVar45 & 0xffff0000 | (uint)(ushort)((short)uVar45 + 1)) + 1 >> (bVar27 & 0x1f) |
          iVar33 << 0x20 - (bVar27 & 0x1f);
  uVar14 = uVar14 << (bVar27 & 0x3f);
  bVar27 = (char)uVar14 + (char)(uVar14 >> 8);
  uVar3 = (ushort)uVar14 & 0xff00 | (ushort)bVar27;
  bVar27 = bVar27 & 0xf;
  uVar31 = uVar14 & 0xffffffffffff0000;
  uVar38 = (ulong)(uVar25 << 0xd | (uint)uVar26 >> 0x13) << 1;
  uVar45 = ((uint)uVar26 & 0xffff0000 |
           (uint)(ushort)((short)uVar26 + (ushort)(byte)((char)uVar30 << 1 | 1))) >> 1;
  uVar3 = (uVar3 << bVar27 | uVar3 >> 0x10 - bVar27) + 0x318a;
  uVar26 = (ulong)(uVar5 * -0x2fc71c46 | uVar5 >> 0x1f) - (uVar19 | uVar48);
  sVar16 = 0xf;
  if (uVar4 != 0) {
    while (uVar4 >> sVar16 == 0) {
      sVar16 = sVar16 + -1;
    }
  }
  uVar30 = uVar26 ^ (ulong)(uVar42 == uVar26) * (uVar26 ^ (uVar31 | uVar3));
  uVar42 = uVar42 ^ (ulong)(uVar42 == uVar26) * (uVar42 & uVar30);
  bVar27 = (byte)uVar3;
  uVar46 = uVar18 & 0xffffffffffff0000 |
           (ulong)(ushort)((ushort)uVar18 >> (bVar27 & 0xf) |
                          (ushort)uVar18 << 0x10 - (bVar27 & 0xf));
  uVar18 = uVar42 >> (bVar27 & 0x3f) | uVar42 << 0x40 - (bVar27 & 0x3f);
  uVar4 = (ushort)uVar18;
  iVar20 = (int6)((long)uVar7 >> 0x11);
  uVar49 = (ushort)((long)((uVar7 | (ushort)((short)uVar23 >> 0xf)) ^ 0x100) >> 1) ^ uVar3;
  uVar50 = uVar50 & 0xffff0000;
  uVar25 = (uint)(uVar32 >> 6);
  uVar29 = (int)uVar30 + uVar5;
  uVar26 = (ulong)((uint)((CONCAT14(((uVar38 & 0xffffffffffff0000 |
                                     (ulong)(ushort)((ushort)uVar38 | (ushort)(uVar14 >> 0x3f) |
                                                    1 << (uVar4 & 0xf))) >>
                                     ((ulong)(uVar50 | uVar25) & 0x3f) & 1) != 0,uVar45) |
                          0x80000000) >> 5) | uVar45 << 0x1c) & (uVar31 | uVar3);
  uVar32 = (uVar48 ^ 0x81) << (bVar27 & 0x1f);
  bVar9 = (char)lVar6 + '%' + (char)uVar49;
  uVar7 = uVar26 & 0xffffffffffff0000 | (ulong)uVar32;
  uVar3 = uVar3 >> 1;
  uVar48 = (ushort)uVar29;
  uVar23 = (int)(short)uVar4 * (int)(short)uVar48;
  sVar16 = (short)(uVar23 >> 0x10);
  uVar41 = (uint)uVar18;
  uVar32 = ~(uVar32 + ~(ushort)uVar26);
  uVar32 = uVar32 << 6 | (ushort)(CONCAT12(sVar16 != 0 && sVar16 != -1,uVar32) >> 0xb);
  uVar5 = uVar5 & 0xffff0000 | (uint)((ushort)((short)uVar5 << (bVar27 & 0x1f)) >> 1);
  iVar33 = (int)(uVar31 | uVar3);
  uVar45 = uVar5 - iVar33;
  uVar30 = (ulong)(uVar50 | uVar25 & 0xffffff00 |
                  (uint)((SBORROW4(uVar5,iVar33) != false) == (int)uVar45 < 0));
  uVar50 = (uVar41 & 0xffff0000 | uVar23 & 0xff00 | 0xe2) >> 1;
  lVar6 = (ulong)uVar45 + 0x8e785eaddc7459db + (ulong)(uVar48 < uVar32);
  bVar22 = (byte)uVar50;
  bVar8 = (byte)((ulong)uVar50 >> 8);
  uVar50 = ((uint)uVar31 | (uint)uVar3 & 0xffffff00 |
           (uint)(byte)((byte)uVar3 >> 1 | (bVar8 < bVar22) << 7)) - 1;
  uVar38 = uVar30 | 0xc000000000000000;
  bVar27 = (byte)uVar50 & 0xf;
  uVar26 = (uVar14 & 0xffffffff00000000 | (ulong)uVar50) * 0x100000;
  lVar24 = uVar26 + 0x3d7c25ce + uVar7 * 8;
  bVar22 = SUB161((ZEXT416((int)CONCAT62(iVar20,sVar16) + 1) << 0x40 |
                  ZEXT416((uVar41 & 0xfffe0000) >> 1 | (uint)CONCAT11(bVar8 - bVar22,bVar22))) %
                  ZEXT816(uVar38) >> 8,0);
  uVar18 = uVar46 - 0x45c02fef;
  if (0x45c02fee < uVar46) {
    uVar26 = uVar26 | (ushort)((((ushort)lVar6 & 0xff00 | (ushort)(byte)((char)lVar6 + 0x3e)) &
                               ~(ushort)(1 << (uVar23 & 0x1f))) * 0x4513);
  }
  uVar4 = 0xf;
  if (bVar9 != 0) {
    while (bVar9 >> uVar4 == 0) {
      uVar4 = uVar4 - 1;
    }
  }
  uVar50 = (((uint)CONCAT62(iVar20,uVar49) & 0xffbfffff) >> 1 & 0x7fff8000) << 1 | (uint)uVar4;
  uVar45 = (int)uVar7 + uVar50;
  bVar8 = (byte)(uVar48 - uVar32);
  uVar7 = (ulong)uVar50 << 1;
  uVar50 = ((uint)uVar19 | (uint)(ushort)((short)uVar32 >> 0x17)) << 3;
  uVar5 = ((uint)lVar24 & 0xffff0000 | (uint)(ushort)((ushort)(byte)lVar24 * (ushort)bVar22)) ^
          (uint)(1 << (uVar30 & 0x3f));
  auVar1 = ZEXT416(uVar5 << 1 | 1) * ZEXT816(uVar26);
  uVar4 = (ushort)uVar7;
  if ((ushort)uVar26 <= uVar4) {
    uVar38 = uVar31 | uVar3;
  }
  bVar47 = (byte)(SUB162(auVar1,0) >> 6);
  if ((byte)(bVar47 + (char)uVar26) != '\0') {
    uVar45 = 0xff45;
  }
  uVar38 = uVar38 >> (bVar47 & 0x3f);
  sVar16 = (short)uVar18;
  sVar37 = sVar16 * 5;
  uVar23 = (uint)(byte)((bVar9 - bVar22) - ((int)uVar5 < 0)) + 1;
  uVar5 = ((uint)uVar26 & 0xffffff00 | (uint)bVar47) ^ 0x20;
  uVar19 = uVar26 & 0xffffffff00000000 | (ulong)uVar5;
  bVar22 = (byte)uVar5 & 0x3f;
  uVar30 = uVar19 >> bVar22 | uVar19 << 0x40 - bVar22;
  bVar22 = (byte)uVar23;
  iVar33 = (int)sVar37 * (int)(short)uVar30;
  sVar17 = (short)((uint)iVar33 >> 0x10);
  uVar19 = (ulong)(CONCAT18(CARRY4(uVar23 & 0xffffff00 | (uint)(byte)(bVar22 >> 1 | bVar22 << 7),
                                   (uint)uVar38),
                            uVar7 & 0xffffffffffff0000 | (ulong)(ushort)(uVar4 - (ushort)uVar26)) >>
                  9);
  uVar5 = (uint)(ushort)(-sVar16 - 0x5f) | 0xffff0000;
  uVar26 = (ulong)uVar45 << 0x37;
  uVar4 = (ushort)(uVar30 & 0xffffffffffffff00) |
          (ushort)(byte)((char)(byte)uVar30 >> ((byte)uVar30 & 0x1f));
  sVar16 = 0xf;
  if (uVar4 != 0) {
    while (uVar4 >> sVar16 == 0) {
      sVar16 = sVar16 + -1;
    }
  }
  uVar25 = (uint)uVar19;
  uVar45 = uVar25 & 0xffff0000;
  uVar23 = (uint)(ushort)((short)uVar19 + sVar16);
  bVar22 = (byte)((uint)iVar33 >> 0x10);
  uVar19 = ((uint)(ushort)(-0x1e86 << bVar27 | 0xe17aU >> 0x10 - bVar27) << 0x1c) - uVar38;
  uVar11 = (int)CONCAT62((int6)((uVar30 & 0xffffffffffffff00) >> 0x10),0x8ba1) >> 1;
  bVar27 = (byte)uVar11;
  uVar41 = (uint)CONCAT62(SUB166(auVar1 >> 0x50,0),sVar17);
  sVar16 = (short)(char)((ulong)(uVar41 << (bVar27 & 0x1f) | uVar41 >> 0x20 - (bVar27 & 0x1f)) >> 8)
  ;
  uVar4 = sVar16 << 1;
  uVar18 = (ulong)(sVar16 < 0) << 0x20 | uVar18 & 0xffffffff;
  uVar43 = (uint)(uVar18 << (bVar27 & 0x1f)) | (uint)(uVar18 >> 0x21 - (bVar27 & 0x1f));
  uVar48 = (uVar48 - uVar32 & 0xff00 | (ushort)(byte)(bVar8 >> 1 | bVar8 << 7)) * -0x2265;
  bVar8 = (byte)((uVar45 | uVar23) >> 1);
  bVar9 = bVar8 >> 1 |
          ((ulong)(long)(int)CONCAT71((uint7)(CONCAT62(SUB166(auVar1 >> 0x10,0),sVar37) >> 8) &
                                      0xffffffffffff00 | (uint7)(byte)((uint)iVar33 >> 8),
                                      sVar17 != 0 && sVar17 != -1) < (ulong)uVar43) << 7;
  uVar41 = (uVar45 | uVar23 & 0xfffffe00) >> 1;
  uVar23 = uVar41 | 0x80000000 | (uint)bVar9;
  uVar45 = uVar5 >> 1;
  uVar12 = uVar45 | 0x80000000;
  if ((int)uVar5 < 0) {
    uVar48 = (ushort)(uVar19 & 0xffffffff);
  }
  uVar32 = CONCAT11((char)((ulong)uVar11 >> 8),bVar22);
  uVar5 = (uVar29 & 0xffff0000 | (uint)uVar48) + 1;
  sVar16 = (uVar3 & 0xcc00 | (ushort)(((byte)uVar3 & 0xa2) >> 1)) + 0x274c;
  if (sVar16 == 0) {
    uVar26 = (ulong)uVar5;
  }
  uVar3 = (short)uVar26 << 1 | (ushort)((short)uVar26 < 0);
  uVar29 = (uVar5 - uVar11) - 1;
  uVar5 = 0x1f;
  if (uVar43 != 0) {
    while (uVar43 >> uVar5 == 0) {
      uVar5 = uVar5 - 1;
    }
  }
  uVar5 = uVar5 & 0xffff0000 | (uint)(ushort)((short)uVar5 << 1 | (ushort)uVar38 >> 0xf);
  uVar40 = (uint)(bVar22 >> (bVar27 & 0x1f)) | uVar23 << 0x20 - (bVar27 & 0x1f);
  if ((uVar19 & 0xffffffff) <= (ulong)uVar23) {
    uVar40 = uVar5;
  }
  uVar23 = uVar40 + 0x4caf3bec + (uint)((int)uVar5 < 0);
  uVar49 = (ushort)uVar19;
  uVar35 = (ushort)uVar29;
  uVar34 = uVar49 ^ (ushort)(uVar32 == uVar49) * (uVar49 ^ uVar35);
  uVar32 = uVar32 ^ (ushort)(uVar32 == uVar49) * (uVar32 & uVar34);
  uVar7 = uVar38 >> 0x25;
  uVar49 = (ushort)uVar11;
  bVar47 = bVar27 + (char)sVar16;
  bVar22 = (byte)uVar32 & bVar47;
  uVar18 = (ulong)uVar32 & 0xffffffffffffff00;
  if ((char)bVar22 < '\0') {
    uVar38 = uVar38 & 0xffffffffffff0000 |
             (ulong)(ushort)((ushort)(uVar5 << 1) | (ushort)CARRY1(bVar9,bVar9));
  }
  uVar30 = (ulong)(uVar23 >> (bVar27 & 0x1f) | uVar23 << 0x20 - (bVar27 & 0x1f)) + 1;
  uVar5 = ((int)(char)bVar27 << 0x1b | (uint)uVar7) + 0x900a1c66;
  uVar7 = uVar19 & 0xffffffffffff0000 | (ulong)uVar34 | 1 << (uVar30 & 0x3f);
  uVar34 = SEXT12((char)uVar5);
  bVar27 = bVar47 ^ (bVar22 == bVar47) * (bVar47 ^ (byte)(uVar18 >> 8));
  uVar32 = (ushort)uVar5;
  uVar39 = (short)uVar38 - 1;
  uVar19 = uVar30 & 0xffffffffffffff00;
  if (!SCARRY2(uVar34,uVar49)) {
    uVar29 = uVar29 & 0xffff0000 | uVar43 & 0xffff;
  }
  uVar23 = CONCAT22((short)uVar35 >> 0xf,(uVar35 + 0xd25a) - (ushort)CARRY2(uVar34,uVar49));
  uVar42 = (ulong)((uVar29 & 0xffffff00 | (uint)(byte)((char)uVar29 + (char)uVar39)) >> 1 |
                  uVar45 << 0x1f);
  if (uVar23 == 0) {
    uVar19 = uVar30 & 0xffffffffffff0000;
  }
  auVar1 = ZEXT416((uint)(int)(short)(((ushort)uVar18 |
                                       (ushort)(byte)(bVar22 ^ (bVar22 == bVar47) *
                                                               (bVar22 & bVar27)) | uVar35) &
                                     ~(ushort)(1 << (uVar29 & 0x1f)))) * ZEXT816(uVar42);
  uVar30 = (ulong)(uVar32 & 0xff | 0x2000);
  uVar18 = (uVar19 << 1 & 0xffffffffffff0000 | (uVar19 << 1) >> 10 & 0x3f) + 0x5e3212a8;
  if (0x14ad6ed9 < uVar12) {
    uVar18 = uVar30;
  }
  return SUB168(auVar1,0) + uVar18 + (ulong)(uVar43 * 0x240c8c2a) + SUB168(auVar1 >> 0x40,0) +
         (ulong)((int)((long)(uVar7 & 0xffffffffffff0000 |
                             (ulong)(ushort)(((ushort)uVar7 & 0xff00 |
                                             (ushort)(byte)((char)uVar7 << 1)) &
                                            ~(1 << (uVar32 & 0xf)))) >> 1) + 0x1687f373U >> 1) +
         uVar30 + (ulong)(uVar5 & 0xfff7ff00 |
                         (uint)(byte)((char)uVar5 +
                                     bVar22 + 0x88 +
                                     ((byte)uVar4 ^ (byte)(((ulong)(uVar4 >> 2) & 1) << 2) ^
                                     (byte)uVar48) * '\x04')) + (ulong)(uint)((int)uVar12 >> 0x15) +
         uVar42 * 2 +
         CONCAT62((uint6)((ulong)(((long)(uVar26 & 0xffffffffffff0000 |
                                          (ulong)uVar3 & 0xffffffffffffff00 |
                                         (ulong)(byte)((char)uVar3 - 1)) >> 1) << 0x13) >> 0x11),
                  (short)(uVar34 + uVar49) >> 0x18) +
         (uVar38 & 0xffffffffffff0000 |
         (ulong)(ushort)(uVar39 >> 1 | (ushort)((uVar39 & 1) != 0) << 0xf)) + (ulong)uVar43 +
         (ulong)(uVar50 & 0xa8860000 |
                (uint)(ushort)((((ushort)uVar50 | (ushort)(uVar31 >> 0x10) >> 0xd) & 0x862b) <<
                              (bVar27 & 0x1f))) +
         (-(ulong)uVar23 & 0xffffffffffff0000 | (ulong)(ushort)(uVar32 * 0x20b8)) +
         (ulong)(((uVar25 & 0xfffe0000) >> 1 | 0x80000000 |
                 (uint)(ushort)((ushort)uVar41 & 0xbfff | (ushort)(bVar8 & 0xfe))) + 0x20e916ad) +
         0x40156acb01da3258;
}



// WARNING: Removing unreachable block (ram,0x004052bd)
// WARNING: Removing unreachable block (ram,0x004050ae)
// WARNING: Removing unreachable block (ram,0x004050cb)
// WARNING: Removing unreachable block (ram,0x00405661)
// WARNING: Removing unreachable block (ram,0x004050e3)
// WARNING: Removing unreachable block (ram,0x004051ea)

long log_size_10_var_004(void)

{
  int iVar1;
  undefined auVar2 [16];
  uint3 uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  char cVar16;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  sbyte sVar17;
  byte bVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  byte bVar25;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar26;
  byte bVar27;
  short sVar28;
  ushort uVar29;
  byte bVar31;
  ulong uVar30;
  byte bVar32;
  ushort uVar33;
  int iVar34;
  ulong uVar35;
  byte bVar36;
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  char cVar41;
  ulong uVar42;
  ulong uVar43;
  byte bVar44;
  byte bVar45;
  ushort uVar46;
  uint uVar47;
  uint uVar48;
  ulong uVar49;
  uint uVar50;
  uint uVar51;
  byte bVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  ushort uVar56;
  byte bVar57;
  long lVar58;
  bool in_PF;
  bool bVar59;
  
  lVar53 = 0x3f;
  while (0x9638161f78676efeU >> lVar53 == 0) {
    lVar53 = lVar53 + -1;
  }
  uVar19 = (short)(lVar53 + 0x40b1) + 0x179;
  bVar18 = (byte)uVar19;
  uVar48 = (uint)(byte)('\0' >> (bVar18 & 0x1f)) | 0x3a60000;
  uVar47 = uVar48 >> (bVar18 & 0x1f) | uVar48 << 0x20 - (bVar18 & 0x1f);
  uVar48 = (CONCAT22(0xffff,(ushort)(byte)((long)(ulong)((uint)(byte)(8 - bVar18) | 0xfa340000) >>
                                          (bVar18 & 0x3f))) & 0x3fffffff) % 0xd0c8;
  uVar22 = ((uint)uVar19 | 0x1ca60000) + 0x5a158ccf;
  bVar18 = (byte)uVar22;
  uVar56 = 0 >> (bVar18 & 0x1f);
  uVar13 = (ulong)((uint)(CONCAT14((char)uVar48 != '\0',uVar47) >> 0x11) | uVar47 << 0x10) << 0x2f;
  sVar9 = 0xf;
  uVar19 = (ushort)uVar47 >> 1;
  if (uVar19 != 0) {
    while (uVar19 >> sVar9 == 0) {
      sVar9 = sVar9 + -1;
    }
  }
  uVar19 = (ushort)uVar48 >> 1;
  uVar20 = uVar19 & 0xff;
  uVar48 = -((uVar47 << 0x10) >> 0x11);
  bVar44 = (char)uVar48 + 0x5b;
  uVar38 = 0x92b20f83;
  if (bVar44 != 0) {
    uVar38 = 0x15dd1bdf;
  }
  uVar23 = (ulong)(uVar22 ^ 1 << ((uint)uVar56 & 0x1f)) + 0xaa522ab56f08825b;
  uVar47 = 0;
  while ((0xffffd0c8U >> uVar47 & 1) == 0) {
    uVar47 = uVar47 + 1;
  }
  bVar27 = ~(byte)uVar20;
  uVar15 = (ulong)(ushort)(uVar20 | (ushort)(byte)((char)((ulong)(ushort)(uVar19 | uVar56 << 0xf) >>
                                                         8) + 0xf) << 8) & 0xffffffffffffff00 |
           0xffff0000;
  if ((uVar56 & 4) != 0) {
    bVar18 = 0xdf;
  }
  lVar58 = 0x3f;
  uVar55 = 0x3f;
  if (uVar38 != 0) {
    while (uVar55 = (uint)lVar58, uVar38 >> lVar58 == 0) {
      lVar58 = lVar58 + -1;
    }
  }
  uVar24 = uVar23 & 0xffffffffffffff0f;
  uVar19 = 0;
  uVar20 = (ushort)uVar24;
  if (uVar20 != 0) {
    while ((uVar20 >> uVar19 & 1) == 0) {
      uVar19 = uVar19 + 1;
    }
  }
  uVar13 = (((uVar13 | (ulong)uVar48 & 0xffffffffffffff00 | 0xc000000000000000 | (ulong)bVar44) -
            (CONCAT71(SUB167((((ZEXT1216(CONCAT48(0x12,0x12dfe10f83)) |
                               (undefined  [16])0x506d245500000000) &
                               (undefined  [16])0xffffffffffffffff ^ (undefined  [16])0x6a) &
                             (undefined  [16])0xffffffffffffffff) %
                             ZEXT816(uVar13 | (ulong)uVar48 | 0xc000000000000000) >> 8,0),!in_PF) ^
            1 << !in_PF)) - (ulong)((uVar22 >> ((uint)uVar56 & 0x1f) & 1) != 0) >> 8 &
           0xffffffffffff00) << 8;
  uVar48 = (uVar55 & 0xffffff00 | (uint)(byte)((byte)uVar55 + 0x26)) + 0xc8b1feae +
           (uint)((byte)uVar55 < 0xda);
  sVar17 = (sbyte)uVar24;
  uVar56 = 0;
  uVar7 = (ushort)uVar48;
  if (uVar7 != 0) {
    while ((uVar7 >> uVar56 & 1) == 0) {
      uVar56 = uVar56 + 1;
    }
  }
  uVar42 = ((uVar15 | bVar27) << 4 | 3) ^ 0xffffffffcd675f34;
  bVar27 = -bVar27;
  uVar15 = uVar15 | bVar27;
  uVar24 = 0xffffffffffffffc1;
  if ((uVar7 >> (uVar20 & 0xf) & 1) == 0 && bVar27 != 0) {
    uVar24 = uVar38;
  }
  if ((uVar24 & 1) == 0) {
    uVar15 = uVar38 & 0xffff | 0xffff0000;
  }
  if (!in_PF) {
    uVar19 = 0x87c1;
  }
  uVar30 = (ulong)uVar19;
  uVar55 = (uint)(uVar24 >> 1);
  uVar11 = (uVar13 | uVar30) >> 4;
  uVar22 = ((uVar47 >> 8 & 0xffff00) << 8 |
            (uint)(ushort)((short)(char)uVar56 & 0xffU | (ushort)(byte)((char)uVar56 >> 7) << 8) |
           0xdb00) * 3;
  uVar22 = uVar22 & 0xffff0000 | (uint)CONCAT11(~(byte)((ulong)uVar22 >> 8),(char)uVar22);
  bVar44 = sVar17 + 0x8aU ^ 0x7a;
  uVar24 = (long)(int)uVar22 * (long)(int)uVar22;
  uVar22 = (uint)(uVar24 >> 0x20);
  uVar3 = CONCAT12(uVar22 != 0 && uVar22 != 0xffffffff,(short)uVar24) >> 2;
  uVar19 = (ushort)uVar3 | (short)uVar24 << 0xf;
  uVar24 = uVar24 & 0xffff0000;
  bVar27 = (byte)uVar15;
  uVar21 = (ushort)uVar42;
  uVar37 = (uVar48 & 0xffff0000 | (uint)(uVar7 & ~(1 << (uVar20 & 0xf)))) ^
           1 << ((uint)(byte)(((bVar44 + bVar27 + (uVar22 < 0x6e0cd358)) - (char)uVar3) - 1) & 0x1f)
  ;
  uVar40 = uVar15 + (long)(int)uVar55;
  uVar20 = (short)uVar40 * 0x485b;
  uVar23 = uVar23 & 0xffffffffffff0000 |
           (ulong)(ushort)(uVar20 & 0xff |
                          (ushort)(byte)((char)((ulong)uVar20 >> 8) + (char)uVar40) << 8);
  uVar54 = ((uint)(lVar53 + 0x40b1) >> 1 | 0x80000000) ^ 0x80000000;
  uVar14 = uVar23 << 0x14;
  uVar12 = (ulong)(CONCAT18(uVar54 < 0x59fc8758,uVar23) >> 0x2d);
  uVar47 = (uint)(ushort)((ushort)uVar37 | 0x8000);
  uVar23 = (ulong)(ushort)(((short)(char)bVar18 << sVar17 |
                           (ushort)(short)(char)bVar18 >> 0x10 - sVar17) >> (bVar44 & 0x3f)) << 1;
  uVar39 = uVar23 | uVar40 >> 0x3f;
  bVar18 = (byte)uVar12 ^ (char)(uVar24 >> 0x18) >> 7;
  uVar35 = uVar12 & 0xffffffffffffff00 | uVar14 | (ulong)bVar18;
  uVar43 = (uVar42 & 0xffffffffffff0000 | (ulong)(ushort)(uVar21 >> 6 | uVar21 << 10)) +
           ((ulong)uVar22 - 0x6e0cd358 & 0xffffffff00000000 |
           (ulong)(uint)((int)((uint)uVar24 | (uint)uVar19) >> 0x1f));
  uVar48 = (uint)(ushort)(uVar38 | 0xc000);
  uVar22 = CONCAT22((short)(uVar24 >> 0x10) >> 0xf,uVar19) & 0x3fffffff;
  uVar19 = (ushort)(uVar22 / uVar48);
  uVar22 = uVar22 % uVar48;
  bVar44 = (byte)uVar22;
  uVar13 = (uVar13 | uVar30 & 0xfffffffffffff000) >> 4 | uVar30 << 0x3c;
  uVar49 = uVar13 | (ulong)bVar44;
  uVar50 = 0 >> (bVar18 & 0x1f);
  uVar20 = (ushort)(0x15dd1bdf >> sVar17) & 0x4d49;
  uVar48 = uVar47 << 0x1e | (uVar37 & 0xffff0000 | uVar47) >> 2;
  uVar42 = (ulong)uVar48;
  uVar24 = (ulong)(uint)(int)(short)uVar19 & 0xffffffffffff0000 | (ulong)uVar20;
  bVar18 = SCARRY2(uVar20,uVar19) + bVar27;
  uVar30 = uVar43 & 0xffffffffffffff00 |
           (ulong)(byte)((char)uVar43 << 1 |
                        (CARRY1(SCARRY2(uVar20,uVar19),bVar27) ||
                        CARRY1(bVar18,CARRY2(uVar20,uVar19))));
  if (0x57efdd66 < uVar24) {
    uVar35 = uVar12 & 0xffffffffffff0000 | uVar14 | uVar11 & 0xff00 | (ulong)bVar44;
  }
  uVar37 = (((uint)uVar56 | 0x15dd0000) << 7 | uVar55 >> 0x19) + 1;
  uVar55 = uVar54 + 0xcf08ee97 + (uint)CARRY1(bVar44,(byte)uVar11) & 0xffffff00 |
           (uint)(byte)(bVar18 + CARRY2(uVar20,uVar19) ^ 0x97);
  uVar22 = (int)(short)uVar20 *
           (int)(short)((int)((uint)(uVar40 & 0xffffffffffffff00) & 0xffff0000 |
                             (uint)CONCAT11((char)((uVar40 & 0xffffffffffffff00) >> 8) +
                                            (char)(uVar22 >> 8),uVar39 != 0)) >> 10);
  uVar11 = (ulong)((uint)uVar24 & 0xffff0000 | uVar22 & 0xffff | 0x750275bc);
  cVar6 = (char)uVar50;
  uVar11 = uVar11 ^ (ulong)(uVar11 == uVar42) *
                    (uVar11 & (uVar42 ^ (ulong)(uVar11 == uVar42) *
                                        (ulong)(uVar48 ^ (uVar50 & 0xffffff00 |
                                                         (uint)(byte)(cVar6 << 1 | cVar6 < '\0')))))
  ;
  bVar18 = (char)uVar35 + 8;
  uVar47 = (uint)((uVar13 & 0x7fffffffffff8000) << 1);
  uVar56 = (short)((ushort)uVar35 & 0xff00 | (ushort)bVar18) >> (bVar18 & 0x1f);
  uVar24 = (ulong)uVar56;
  lVar53 = 0x3f;
  uVar48 = 0x3f;
  if (uVar30 != 0) {
    while (uVar48 = (uint)lVar53, uVar30 >> lVar53 == 0) {
      lVar53 = lVar53 + -1;
    }
  }
  bVar44 = (byte)uVar56;
  bVar18 = (bVar44 & 0x1f) % 0x11;
  uVar56 = (ushort)uVar39;
  uVar23 = uVar23 & 0xffffffffffff0000 | (ulong)(ushort)(uVar56 >> bVar18 | uVar56 << 0x11 - bVar18)
  ;
  uVar50 = (uint)(byte)(uVar20 + uVar19) | 0x798d0000;
  iVar34 = 0;
  uVar56 = 0;
  if (uVar50 != 0) {
    while (uVar56 = (ushort)iVar34, (uVar50 >> iVar34 & 1) == 0) {
      iVar34 = iVar34 + 1;
    }
  }
  uVar42 = uVar11 & 0xffffffff00000000 |
           (ulong)(((uint)uVar11 & 0xffff0000 |
                   (uint)(ushort)((short)uVar11 * (short)(uVar22 >> 0x10))) * uVar55);
  auVar2 = SEXT816((long)uVar42) * SEXT816((long)uVar23);
  uVar42 = uVar42 * uVar23;
  uVar7 = 0;
  uVar21 = (ushort)uVar48;
  if (uVar21 != 0) {
    while ((uVar21 >> uVar7 & 1) == 0) {
      uVar7 = uVar7 + 1;
    }
  }
  uVar54 = (int)uVar15 + (int)((uVar38 | 0xc000) >> 1) & 0xffff0000U | (uint)uVar7;
  uVar22 = (uint)(ushort)(uVar20 + uVar19 | 0xc000);
  uVar50 = CONCAT22(SUB162(auVar2 >> 0x40,0),(short)uVar42) & 0x3fffffff;
  uVar38 = SUB168(auVar2 >> 0x40,0) & 0xffffffffffff0000;
  uVar15 = (ulong)(uVar37 & 0xffffff00 |
                  (uint)(byte)((char)uVar37 + (char)uVar7 + ((uVar7 >> (uVar21 & 0xf) & 1) != 0)));
  uVar38 = CONCAT62((int6)((long)uVar38 >> 0x11),
                    (ushort)((long)(uVar38 | (ushort)(uVar50 % uVar22)) >> 1) >> 1);
  uVar19 = (uVar7 ^ 1 << (uVar21 & 0xf)) & 0xff | (ushort)SCARRY4(uVar54,1) << 8;
  uVar55 = (int)uVar55 >> (bVar44 & 0x1f) |
           uVar47 | (ushort)(((ushort)(uVar49 << 1) | (ushort)((long)uVar49 < 0)) - 1);
  if ((int)uVar55 < 1) {
    uVar15 = uVar35 & 0xffff0000 | uVar24;
  }
  uVar56 = (((short)(uVar50 / uVar22) << 1 | 1U) ^ 1 << (uVar56 & 0xf)) + 0xaa3b;
  if (-1 < (short)uVar56) {
    uVar38 = uVar35 & 0xffff0000 | uVar24;
  }
  uVar11 = (ulong)CONCAT11((char)(uVar38 >> 8) - bVar44,(char)uVar38);
  uVar40 = uVar38 & 0xffffffffffff0000 | uVar11;
  uVar38 = (uVar42 & 0xffffffffffff0000 | (ulong)uVar56) ^ 0x2634;
  if ((short)(uVar56 ^ 0x2634) < 0) {
    uVar38 = (ulong)uVar19;
  }
  uVar12 = (uVar13 & 0x7fffffff80000000) << 1;
  uVar42 = (ulong)(uVar47 | uVar48 & 0xffff | 0x400000);
  uVar14 = uVar12 | uVar42;
  uVar13 = 0x3f;
  if (uVar40 != 0) {
    while (uVar40 >> uVar13 == 0) {
      uVar13 = uVar13 - 1;
    }
  }
  uVar24 = uVar35 & 0xffffffffffff0000 | uVar24 | 1 << (uVar11 & 0x3f);
  uVar23 = uVar23 - 0xcb61b0a;
  uVar20 = (short)uVar15 << 1;
  uVar7 = ((short)(((ulong)((uint)uVar40 & 0x3fffffff) << 0x20 | uVar38 & 0xffffffff) / 0xc0000000)
          - (short)uVar13) - 1;
  uVar56 = (ushort)uVar23 & 0xf;
  uVar21 = (ushort)uVar24 ^ 1 << uVar56;
  uVar38 = uVar24 & 0xffffffffffff0000;
  if (uVar7 == 0) {
    uVar7 = uVar20;
  }
  if (((ushort)uVar24 >> uVar56 & 1) != 0) {
    uVar14 = uVar12 | uVar42 & 0xffffffffffff0000 | uVar23 & 0xffff;
  }
  uVar56 = (ushort)uVar55 ^ ((ushort)uVar55 >> 7 & 1) << 7;
  uVar43 = (long)(int)(uVar54 + 1) * 0x4dd9e487 & 0xffffffff;
  uVar35 = uVar24 & 0xffff0000 | (ulong)uVar21;
  uVar42 = 0;
  uVar40 = (ulong)((int)(short)(uVar7 >> 0xc | 0x80) + 0xaf + ((uint)uVar38 | (uint)uVar21) * 2);
  bVar18 = (char)uVar21 + (char)(uVar40 >> 8);
  uVar11 = (ulong)uVar21 & 0xffffffffffffff00;
  uVar39 = uVar14 ^ (ulong)(uVar40 == uVar14) * (uVar14 ^ (uVar55 & 0xffff0000 | (uint)uVar56));
  uVar12 = uVar40 ^ (ulong)(uVar40 == uVar14) * (uVar40 & uVar39);
  if (uVar40 >= uVar14) {
    uVar39 = uVar24 & 0xffff0000 | uVar11 | (ulong)bVar18;
  }
  uVar40 = (uVar23 & 0xffffffffffff0000 |
           (ulong)(ushort)(((ushort)uVar23 & 0xff00 | uVar21 & 0xff) + 1)) + 0x795e097d +
           (ulong)(uVar40 < uVar14);
  uVar21 = ((ushort)uVar11 | (ushort)bVar18) + 1;
  uVar46 = (short)uVar39 * -0x3333;
  uVar14 = uVar39 & 0xffffffffffff0000 | (ulong)uVar46;
  uVar23 = uVar40 & 0xffffffff00000000;
  uVar11 = (ulong)((int)uVar40 + 1);
  bVar18 = ((byte)uVar21 & 0x1f) % 9;
  bVar44 = (byte)((ulong)uVar21 >> 8);
  uVar7 = 0xf;
  if (uVar46 != 0) {
    while (uVar46 >> uVar7 == 0) {
      uVar7 = uVar7 - 1;
    }
  }
  uVar40 = uVar23 | uVar11 & 0xffffffffffff0000 | (ulong)uVar7;
  uVar56 = uVar56 | 0x1000;
  uVar23 = uVar12 * (uVar13 & (uVar23 | uVar11));
  bVar27 = (byte)(uVar21 & 0xff) & 0x3f;
  uVar13 = (uVar43 << bVar27 | uVar43 >> 0x40 - bVar27) >> 1;
  uVar7 = 0xf;
  if (uVar56 != 0) {
    while (uVar56 >> uVar7 == 0) {
      uVar7 = uVar7 - 1;
    }
  }
  lVar53 = CONCAT71((int7)((long)uVar40 >> 0x36),(char)((long)uVar40 >> 0x2e) + -0x7d);
  uVar24 = ((uVar15 & 0xffffffffffff0000 | (ulong)uVar20) << 0x23 | uVar24 >> 0x1d) - uVar14 &
           0xffffffffffff0000 | (ulong)uVar7 & 0xffffffffffffff00;
  uVar15 = (uVar38 | (ushort)(uVar21 & 0xff |
                             (ushort)(byte)(bVar44 << bVar18 | bVar44 >> 9 - bVar18) << 8)) >> 1;
  uVar11 = uVar13 & 0xffffffff;
  uVar56 = (ushort)uVar30 & 0xff00 | (ushort)uVar13;
  uVar13 = (uVar23 & 0xffff0000 |
           (ulong)(ushort)((ushort)(byte)uVar23 * (ushort)(byte)((ulong)((uint)uVar19 ^ 1) >> 8))) *
           (uVar13 & 0xffffffff);
  uVar23 = (ulong)(uint)((int)uVar12 + (int)uVar35 * 4) ^ 0x4b ^ uVar11;
  bVar18 = (byte)uVar15;
  uVar48 = (uint)lVar53 | 0xc0000000;
  uVar22 = (int)(((ulong)((uint)(uVar13 >> 0x20) & 0x3fffffff) << 0x20 | uVar13 & 0xffffffff) /
                (ulong)uVar48) << (bVar18 & 0x1f) |
           ((uint)uVar24 | (uint)(byte)((char)uVar7 << 1) | 1) >> 0x20 - (bVar18 & 0x1f);
  uVar19 = (ushort)uVar23;
  uVar48 = uVar48 * -0x28388f15 >> 1;
  auVar2 = ZEXT416(uVar22 & 0xffff0000 | (uint)(ushort)((short)uVar22 * uVar19)) * ZEXT816(uVar15);
  uVar20 = (short)(lVar53 + -0x16587c82) + 0xd4d8;
  uVar22 = (uint)(lVar53 + -0x16587c82);
  uVar47 = uVar22 & 0xffff0000 | (uint)uVar20;
  if (uVar20 == 0) {
    uVar42 = (ulong)(ushort)((ushort)lVar53 & ~(1 << (uVar19 & 0xf)));
  }
  uVar35 = uVar35 & uVar14;
  uVar50 = SUB164(auVar2,0);
  bVar44 = (bVar18 & 0x1f) % 9;
  bVar27 = (byte)(uVar15 >> 8);
  uVar55 = uVar50 >> 1;
  uVar37 = 0 >> (bVar18 & 0x3f);
  uVar13 = (ulong)(uVar55 & 0xffffff00 | uVar48 << 0x1f |
                  (uint)(byte)((char)uVar55 << (bVar18 & 0x1f))) + 1;
  sVar9 = 0xf;
  uVar19 = (ushort)uVar48;
  if (uVar19 != 0) {
    while (uVar19 >> sVar9 == 0) {
      sVar9 = sVar9 + -1;
    }
  }
  bVar5 = (byte)(uVar13 >> 8);
  bVar45 = (byte)((ulong)uVar37 >> 8);
  sVar8 = CONCAT11(bVar45 - bVar5,(char)uVar37);
  uVar55 = ((uint)uVar14 & 0xffffff00 | (uint)(byte)((byte)uVar46 >> 4 | (byte)uVar46 << 4)) +
           0xce1b30e1 + (uint)(bVar45 < bVar5);
  bVar5 = (char)uVar13 << 1;
  uVar48 = uVar47 + 0x9ecff9f7;
  if (0x61300608 < uVar47) {
    uVar42 = (ulong)uVar55;
  }
  uVar7 = (short)uVar48 + sVar8;
  uVar48 = uVar48 & 0xffff0000;
  uVar15 = uVar35 & 0xffffffffffff0000;
  uVar40 = (ulong)(ushort)((short)uVar35 << 1);
  uVar50 = (uint)(((ulong)(SUB164(auVar2 >> 0x40,0) & ~(1 << (uVar50 & 0x1f))) & 0xffffffffffff0000
                  | (ulong)CONCAT11((bVar27 << bVar44 | bVar27 >> 9 - bVar44) + 0x5d,bVar18)) <<
                 (bVar18 & 0x3f)) | uVar55 >> 0x40 - (bVar18 & 0x3f);
  bVar27 = (byte)(uVar55 >> 0x1b);
  bVar45 = -bVar27;
  uVar47 = (uint)bVar45;
  bVar44 = (bVar18 & 0x1f) % 0x11;
  uVar19 = sVar8 << bVar44 | (ushort)(CONCAT12(bVar27 != 0,sVar8) >> 0x11 - bVar44);
  uVar23 = uVar23 & (uVar13 & 0xffffffffffffff00 | (ulong)bVar5);
  sVar8 = 0xf;
  if ((ushort)uVar42 != 0) {
    while ((ushort)((ushort)uVar42 >> sVar8) == 0) {
      sVar8 = sVar8 + -1;
    }
  }
  uVar12 = (ulong)(ushort)(CONCAT11(((uVar23 & (uVar48 | (uint)uVar7)) == 0) << 6 |
                                    (((uVar22 & 0xfff0000 | (uint)uVar20) + 0xfecff9f7 & 0x10000000)
                                    != 0) << 4 | in_PF << 2,bVar5) | 0x200);
  uVar14 = uVar13 & 0xffffffffffff0000 | uVar12;
  uVar12 = (ulong)(byte)((char)uVar19 - (char)(uVar12 >> 8));
  uVar30 = (ulong)uVar37 & 0xffffffffffff0000 | (ulong)uVar19 & 0xffffffffffffff00 | uVar12;
  uVar20 = uVar56 ^ 0x2b28;
  uVar13 = CONCAT62((uint6)(uVar38 >> 0x11),sVar8) + uVar30 * 8;
  uVar22 = uVar50 - uVar47;
  if (SBORROW4(uVar50,uVar47) == false) {
    uVar13 = CONCAT62((int6)((uint6)((uVar11 >> (bVar18 & 0x3f)) >> 0x10) |
                            (uint6)((uVar11 << 0x40 - (bVar18 & 0x3f)) >> 0x10)) >> 0x1e,sVar9) &
             0xffffffff;
  }
  bVar18 = (byte)uVar23;
  uVar23 = uVar13 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar13 - bVar18);
  uVar55 = uVar22 & 0xffffff00 | (uint)(byte)((byte)uVar22 >> 1 | ((byte)uVar13 < bVar18) << 7);
  bVar18 = (byte)sVar8 & 0x3f;
  uVar13 = uVar14 >> bVar18 | uVar14 << 0x40 - bVar18;
  uVar46 = (ushort)uVar23;
  uVar21 = uVar20 + uVar46;
  uVar38 = CONCAT62(0x793be23adb5d,uVar21);
  uVar37 = uVar55 << 1 | (uint)CARRY2(uVar20,uVar46);
  if ((int)uVar55 < 0 == (int)uVar37 < 0) {
    uVar40 = (ulong)uVar19 & 0xff00 | uVar12;
  }
  uVar12 = uVar15 | uVar40;
  bVar18 = ((byte)sVar8 & 0x1f) % 9;
  uVar23 = uVar23 - bVar45;
  uVar19 = (short)uVar37 + 0xe442;
  uVar11 = uVar30 + uVar12 + 1;
  uVar48 = uVar48 | (uint)uVar7 & 0xffffff00 |
           (uint)(byte)(((byte)((uVar7 & 0xff | (ushort)((uVar13 & 1) != 0) << 8) >> bVar18) |
                        (char)uVar7 << 9 - bVar18) >> 1);
  uVar42 = uVar42 & 0xffffffffffffff00 | (ulong)(byte)-(char)uVar42;
  if ((short)uVar56 < (short)uVar11) {
    uVar42 = 0xffffffff;
  }
  uVar13 = CONCAT62((int6)((long)uVar13 >> 0x11),
                    (short)(char)((long)uVar13 >> 1) * (short)(char)uVar23);
  uVar56 = (ushort)uVar23 | 0x1b9;
  if (-1 < (short)uVar56) {
    uVar47 = (uint)uVar12;
  }
  uVar22 = (uVar22 & 0x7fff8000) << 1 | (uint)uVar19 & 0xffffff00 | (uint)(byte)((char)uVar19 + 4);
  if (!in_PF) {
    uVar22 = uVar48;
  }
  uVar24 = uVar24 >> 7;
  if ((short)uVar56 < 1) {
    uVar24 = 0xffffffff;
  }
  uVar12 = uVar24 ^ (ulong)(uVar13 == uVar24) * (uVar24 ^ (uVar23 | 0x1b9));
  uVar55 = (uint)uVar13 ^ (uint)(uVar13 == uVar24) * ((uint)uVar13 & (uint)uVar12);
  if (!in_PF) {
    uVar42 = (ulong)uVar21;
  }
  iVar34 = (int)(uVar23 | 0x1b9);
  bVar59 = SCARRY4(iVar34,(int)uVar11);
  uVar37 = iVar34 + (int)uVar11;
  if (bVar59 == (int)uVar37 < 0) {
    uVar47 = uVar22;
  }
  uVar48 = uVar48 * 0x100;
  uVar50 = (uVar48 - 1) + (uint)(uVar47 < 0x7ecbeb5e);
  lVar53 = 0;
  if (uVar38 != 0) {
    while ((uVar38 >> lVar53 & 1) == 0) {
      lVar53 = lVar53 + 1;
    }
  }
  uVar54 = uVar50 >> 1;
  uVar38 = (ulong)uVar54;
  uVar13 = (ulong)((uVar50 & 1) != 0);
  uVar24 = ((ulong)uVar48 - 0xb5a3ec37) - uVar13;
  bVar18 = (byte)uVar12 & 0x3f;
  uVar23 = (ulong)uVar22 & 0xff |
           (ulong)((uint7)((uVar11 >> bVar18) >> 8) | (uint7)((uVar11 << 0x40 - bVar18) >> 8)) << 8;
  uVar10 = (uint)uVar23;
  uVar11 = uVar12 >> 0x1f & 1;
  bVar18 = ~(byte)uVar12;
  uVar15 = uVar15 | (ushort)(((ushort)uVar40 & 0xff00 | (ushort)(byte)((byte)uVar40 ^ (byte)uVar54))
                            & ~(1 << ((ushort)uVar23 & 0xf)));
  uVar50 = (uint)(ushort)(((ushort)bVar59 | 0xff00) + 0x5aa) | 0xffff0000;
  uVar51 = (uint)uVar15;
  uVar54 = uVar50 << 1 | uVar51 >> 0x1f;
  if ((int)uVar50 < 0 == (int)uVar54 < 0) {
    uVar10 = uVar10 & 0xffff0000 | (uint)(uVar12 & 0xff00) | (uint)bVar18;
  }
  uVar40 = (ulong)(uVar37 ^ (uVar37 >> 4 & 1) << 4) + 0x36cd7731 + (ulong)((int)uVar50 < 0);
  uVar23 = (ulong)(ushort)-(short)uVar40;
  auVar2 = (ZEXT1216(CONCAT48(uVar22,CONCAT62((int6)(short)(uVar55 >> 0x10),-(short)(char)uVar55)))
           & (undefined  [16])0xffffffffffffffff) / ZEXT816(uVar15 | 0xc000000000000000);
  sVar9 = SUB162(auVar2,0);
  uVar22 = (int)sVar9 * (int)sVar9;
  uVar15 = CONCAT62(SUB166(auVar2 >> 0x10,0),(short)uVar22);
  uVar13 = (uVar24 & 0xffffffffffff0000 |
            (ulong)(ushort)((ushort)uVar24 >> 1 |
                           (ushort)(uVar48 < 0xb5a3ec37 || (ulong)uVar48 - 0xb5a3ec37 < uVar13) <<
                           0xf) & 0xffffffffffffff00 | 0xff) >> 1;
  bVar44 = (byte)(uVar22 >> 8) | 0x8f;
  if (bVar44 == 0) {
    uVar54 = uVar50 << 1 & 0xffff0000 |
             (uint)(ushort)((short)(uVar47 + 0x813414a2) << (bVar18 & 0x1f));
  }
  uVar24 = uVar13 ^ (ulong)(uVar15 == uVar13) * (uVar13 ^ uVar11);
  uVar48 = (uint)uVar15 ^ (uint)(uVar15 == uVar13) * ((uint)uVar15 & (uint)uVar24);
  uVar55 = (uVar10 * 0x20000 + 0x8d293d00 | (uint)(byte)(bVar44 << 1)) ^ 0x9f26d2d7;
  uVar15 = (long)(int)uVar51 * -0x5ab5c818;
  iVar34 = (int)(uVar15 >> 0x20);
  cVar6 = (char)uVar48;
  if (!in_PF) {
    uVar38 = uVar24 & 0xffffffff;
  }
  uVar50 = (int)(uint)CONCAT11(bVar18,(char)((uVar12 & 0xff00) >> 8)) >> 1;
  uVar37 = uVar50 * 2;
  uVar48 = (uint)CONCAT71((int7)(int3)(uVar48 >> 8),
                          (byte)(CONCAT11(iVar34 != 0 && iVar34 != -1,cVar6) >> 5) | cVar6 << 4);
  if (!CARRY4(uVar50,uVar50)) {
    uVar48 = (uint)uVar24;
  }
  uVar48 = uVar48 ^ 1 << (uVar54 & 0x1f);
  uVar38 = uVar38 | uVar55;
  bVar44 = (byte)((ulong)uVar37 >> 8);
  bVar18 = (byte)uVar37 - bVar44;
  uVar19 = (ushort)uVar48;
  bVar44 = (char)uVar38 << 1 | (byte)uVar37 < bVar44;
  uVar12 = uVar38 & 0xffffffffffffff00;
  uVar14 = uVar12 | (ulong)bVar44;
  uVar50 = (uint)uVar14;
  uVar37 = (uVar37 & 0xffffff00 | (uint)bVar18) >> 1;
  lVar53 = (long)(int)uVar11 * -0x531863aa;
  uVar56 = (ushort)lVar53;
  iVar34 = (int)((ulong)lVar53 >> 0x20);
  uVar23 = ((uVar40 & 0xffffffffffff0000 | uVar23 & 0x7fffffffffffff80) << 1 |
           (uVar23 & 0x7f) << 1 | (ulong)((bVar18 & 1) != 0)) ^ 0x2d;
  if (iVar34 == 0 || iVar34 == -1) {
    uVar23 = (ulong)(uVar54 << 1 | (uint)((int)uVar54 < 0));
  }
  uVar24 = (uVar24 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar24 >> 9)) >> 1;
  uVar20 = (ushort)(byte)((byte)uVar23 << 4 | (byte)uVar23 >> 4);
  uVar10 = (uint)(ushort)((ushort)uVar14 >> 1 | uVar20 << 0xf);
  uVar11 = (ulong)(uVar50 >> 0x18 | (uVar50 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                  uVar10 << 0x18);
  bVar18 = ((char)uVar15 * -2 | '\0' < (char)uVar15) - 1;
  uVar15 = uVar15 & 0xffffff00 | (ulong)bVar18;
  uVar47 = (uVar47 + 0x813414a2 & 0xffff0000 | (uint)(ushort)(uVar19 * 4)) + 1;
  if (bVar18 != 0) {
    uVar47 = uVar50;
  }
  uVar13 = uVar13 & 0xffff | 0x5b;
  auVar2 = ZEXT816((ulong)(long)(int)(uVar48 & 0xffff0000 | (uint)(uVar19 | 8) & 0xffffff00 |
                                     ((uVar22 >> 0x10) + 0xca7ff322) - uVar55 & 0xff)) *
           ZEXT816(uVar15);
  uVar48 = (int)(short)uVar37 & 0xfffffffe;
  uVar10 = SUB164(auVar2,0) - 1;
  iVar34 = (int)uVar13 + 0xbd + (int)uVar15 * 8;
  uVar19 = (ushort)uVar13;
  uVar7 = uVar19 & 0x7fff;
  uVar21 = (short)((ushort)(uVar23 & 0xffffffffffffff00) | uVar20) >> 0x11;
  uVar20 = CONCAT11(0xa3 >> ((byte)uVar37 & 0x1e),0xff);
  uVar19 = uVar19 & 0xff | 0x100;
  uVar55 = uVar54 << 1 & 0xe46de1d7 | (uint)((int)uVar54 < 0);
  uVar37 = uVar48 + 0xde704b1a;
  bVar18 = (byte)((ulong)uVar37 >> 8);
  cVar6 = bVar18 + 0x27;
  cVar16 = (char)uVar37;
  uVar22 = uVar37 & 0xffff0000 | (uint)CONCAT11(cVar6,cVar16);
  if (bVar18 >= 0xd9 && cVar6 != '\0') {
    uVar11 = uVar38 & 0xffffff00 | (ulong)bVar44;
  }
  uVar51 = ((((int)(uVar42 << 0x10) + 1) * 2 & (uint)uVar24) - uVar22) - (uint)(bVar18 < 0xd9);
  uVar54 = (uint)(byte)((char)uVar51 + (char)uVar55);
  bVar18 = cVar16 + (char)((ulong)uVar22 >> 8);
  if (SCARRY1(cVar16,cVar6) == (char)bVar18 < '\0') {
    uVar50 = uVar50 & 0xffff | (int)(short)(uVar12 >> 0x10) << 0x10;
  }
  uVar22 = -(((uVar47 & 0xffffff00 |
              (uint)(byte)(((byte)uVar47 | (char)((uVar23 & 0xffffffffffffff00) >> 8) >> 9) + 0x52))
             - (((uint)uVar7 & 0xffffff00 | (uint)(byte)((char)uVar7 + (char)uVar10)) + 0xdbcc1c31))
            - (uint)(0xe245 < uVar20 || 0xfffe < (ushort)(uVar20 + 0x1dba)));
  uVar38 = (ulong)(uVar37 & 0xffff0000 | (uint)CONCAT11(cVar6,cVar16) & 0xffffff00 | (uint)bVar18) &
           0xffffffffffffff0f;
  sVar17 = (sbyte)uVar38;
  uVar20 = (short)uVar24 << sVar17 | uVar19 >> 0x10 - sVar17;
  iVar1 = (int)(short)uVar19 * (int)(short)uVar21;
  uVar13 = uVar23 & 0xffffffffffff0000 | (ulong)uVar21;
  if (0x7bd30fa9 < uVar22) {
    uVar13 = (ulong)(uVar51 & 0xffffff00 | uVar54);
  }
  if (-1 < (short)((((ushort)iVar34 & 0xff00 | (ushort)(byte)((char)iVar34 >> 1)) + 0x7444 +
                   (ushort)(uVar48 + 0x550298e9 < 0x76924dcf)) - uVar56)) {
    uVar55 = uVar50;
  }
  uVar23 = ((ulong)((uint)CONCAT62(SUB166(auVar2 >> 0x50,0),(short)((uint)iVar1 >> 0x10)) &
                   0x3fffffff) << 0x20 |
           ((ulong)uVar10 & 0xffffffffffff0000 | (ulong)(ushort)iVar1) >> 1) /
           (ulong)(uVar55 | 0xc0000000);
  bVar18 = (byte)uVar23;
  bVar5 = (byte)uVar11;
  bVar45 = (byte)uVar50;
  bVar27 = bVar5 ^ (bVar18 == bVar5) * (bVar5 ^ bVar45);
  uVar24 = uVar11 & 0xffffffffffffff00 | (ulong)bVar27;
  uVar23 = uVar23 & 0xffffff00;
  uVar15 = uVar23 | (byte)(bVar18 ^ (bVar18 == bVar5) * (bVar18 & bVar27));
  sVar9 = (short)uVar24;
  sVar8 = (short)uVar15;
  uVar19 = (((short)uVar38 + sVar9 + 0x2bec) - sVar8) -
           (ushort)CARRY1((char)(uVar23 >> 0x18) >> 7,
                          (byte)((ulong)(uint)((int)uVar15 >> 0x1f) >> 8));
  if ((short)uVar19 < 0) {
    uVar22 = uVar22 & 0xffff0000 | (uint)uVar20;
  }
  bVar5 = bVar45 << 5 | bVar45 >> 3;
  uVar50 = uVar50 & 0xffffff00;
  bVar18 = (byte)uVar19 & 0xf;
  bVar27 = (byte)uVar19 & 0x3f;
  lVar58 = 0;
  uVar48 = 0;
  if (uVar13 != 0) {
    while (uVar48 = (uint)lVar58, (uVar13 >> lVar58 & 1) == 0) {
      lVar58 = lVar58 + 1;
    }
  }
  uVar7 = (ushort)(byte)((byte)uVar20 >> 1 | (char)uVar13 << 7);
  uVar38 = (ulong)(uint)((int)CONCAT71((int7)(int3)(uVar12 >> 8),~bVar44) >> 0xd) + 0x17c90fe4 ^
           0xffffffffbdb12441;
  uVar47 = (uint)uVar38;
  if ((long)uVar38 < 0) {
    uVar47 = uVar47 & 0xffff0000 | (uint)uVar19;
  }
  if (!in_PF) {
    uVar48 = (uint)uVar13 & 0xffffff00 | (uint)(byte)((char)uVar13 >> 1);
  }
  uVar22 = (uVar22 & 0xffffff00 | (uint)(byte)((char)uVar22 >> 0x11)) << 0xe;
  uVar37 = uVar22 | ((((uVar51 >> 0x18 | (uVar51 & 0xff0000) >> 8 | (uVar51 & 0xff00) << 8 |
                       uVar54 << 0x18) >> bVar27) >> 0x10 |
                     (uint)((ulong)((long)(int)(uVar50 | bVar5) << 0x40 - bVar27) >> 0x10)) << 0x10)
                    >> 0x12;
  uVar13 = (ulong)(uVar48 << 7);
  uVar21 = uVar20 & 0xbf00 | uVar7;
  uVar54 = uVar47 | (uint)uVar19 & 0xff;
  uVar48 = ((uint)lVar53 & 0xffff0000 |
           (uint)(ushort)((uVar56 << bVar18 | uVar56 >> 0x10 - bVar18) + 0x715e)) + 0x8cc787d1;
  if (uVar54 != 0) {
    uVar48 = uVar37;
  }
  uVar47 = uVar47 & 0xffffff00 | (uint)(byte)~(byte)uVar54;
  uVar19 = ~(ushort)uVar37;
  sVar28 = (short)uVar47;
  uVar54 = (int)(uint)uVar21 >> 6 ^ 0xb83e0c28;
  uVar37 = (int)CONCAT71((int7)(int3)(uVar50 >> 8),bVar5 - 1) * -0x32075b17;
  uVar13 = ((uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28 |
           uVar13 << 0x38) >> 1;
  uVar23 = uVar13 | 0x8000000000000000;
  uVar38 = (ulong)(ushort)((((short)CONCAT31((uint3)((uVar55 | 0xc0080000) >> 9),
                                             (char)((uVar55 | 0xc0080000) >> 1) + '\x01') - sVar9) -
                           (ushort)((uVar20 >> 0xe & 1) != 0)) + sVar8 + 0x64ba) - 0x6e87bde2;
  sVar9 = 0;
  uVar56 = (ushort)uVar54;
  if (uVar56 != 0) {
    while ((uVar56 >> sVar9 & 1) == 0) {
      sVar9 = sVar9 + 1;
    }
  }
  uVar55 = uVar37 & 0xffffff00 | (uint)(byte)((char)uVar37 << 1);
  uVar46 = 0xf;
  uVar29 = (ushort)uVar55;
  if (uVar29 != 0) {
    while (uVar29 >> uVar46 == 0) {
      uVar46 = uVar46 - 1;
    }
  }
  uVar37 = (uint)CONCAT62((int6)(short)(uVar50 >> 0x10),(short)((uVar24 & 0xffffffffc0278201) == 0))
  ;
  uVar37 = uVar37 ^ (uint)(uVar37 == 0) * (uVar37 ^ uVar48);
  uVar56 = uVar56 & 0xff00;
  uVar24 = (long)(int)uVar37 * 0x5217e8f1;
  uVar29 = (sVar28 << 1 | (ushort)(sVar28 < 0)) >> ((byte)uVar38 & 0x1f);
  uVar48 = uVar37 & 0xffff0000 | (uint)(ushort)(short)(char)uVar19;
  uVar15 = 0;
  if (uVar23 != 0) {
    while ((uVar23 >> uVar15 & 1) == 0) {
      uVar15 = uVar15 + 1;
    }
  }
  uVar51 = (uint)uVar15;
  uVar42 = uVar24 & 0xffffffff & ~(1 << (uVar38 & 0x3f));
  uVar50 = (int)uVar38 - (uVar51 & 0x5d4f3ffa);
  uVar19 = -uVar19;
  uVar47 = (uint)(((ulong)uVar47 & 0xffffffffffff0000 | (ulong)uVar29 & 0xfffffffffffffe00) >> 1);
  uVar10 = uVar47 | (uint)uVar46 & 0xff;
  uVar40 = (uVar11 >> 8 & 0xffffffffffff00) << 8 | (ulong)uVar46 & 0xffffffffffffff00 |
           ((ulong)uVar29 & 0x1fe) >> 1;
  uVar38 = (long)(int)(uVar55 | 1 << ((uint)uVar29 & 0x1f)) * 0x45613a4f;
  uVar11 = uVar38 & 0xffffffff;
  iVar34 = (int)(uVar38 >> 0x20);
  uVar38 = (ulong)(iVar34 != 0 && iVar34 != -1);
  uVar23 = uVar40 + uVar11;
  lVar53 = uVar23 + uVar38;
  uVar24 = (uVar24 >> 0x20 & 0xffffff00 | (ulong)(byte)((byte)(uVar24 >> 0x20) | (byte)uVar15)) +
           0x798023ab & 0xffffffffffff0000;
  uVar38 = (ulong)(CONCAT18(CARRY8(uVar40,uVar11) || CARRY8(uVar23,uVar38),lVar53) >> 0x18) &
           0xffffffffffffff00 | (ulong)(byte)((char)((ulong)lVar53 >> 0x18) + 0x4b);
  if ((SBORROW2(uVar56,0x6f7b) != SBORROW2(uVar56 + 0x9085,1)) != (short)(uVar56 + 0x9084) < 0) {
    uVar10 = uVar47 & 0xffff0000 | uVar51 & 0xffff;
  }
  bVar44 = (byte)uVar50;
  uVar46 = (short)uVar10 + 0xef22;
  uVar23 = (long)(int)(uVar10 & 0xffff0000 | (uint)uVar46) * 0x192ee299;
  uVar11 = uVar23 & 0xffffffff;
  iVar34 = (int)(uVar23 >> 0x20);
  bVar18 = (bVar44 & 0x1f) % 0x11;
  bVar27 = (byte)((ulong)(ushort)((uint)((int)(short)(CONCAT11((char)(uVar42 >> 8) + -1,(char)uVar42
                                                              ) & uVar19) * (int)(short)uVar21) >>
                                 0x10) >> 8);
  bVar5 = (byte)uVar46;
  uVar48 = ((uVar48 << 1 | (uint)((int)uVar48 < 0)) ^ (uVar37 & 0x20000000) << 1 ^ 0xe67a52e9) << 1;
  cVar6 = (char)(uVar24 >> 0x20);
  uVar47 = uVar48 & 0xffff0000;
  uVar48 = uVar48 & 0xffff | (uint)(bVar27 < bVar5);
  uVar23 = (ulong)(uVar51 & 0x5d4f0000 |
                  (uint)(ushort)((short)-((ushort)uVar15 & 0x3f00 |
                                         (ushort)(byte)((char)(uVar51 & 0x5d4f3ffa) << 1 |
                                                       (uVar37 & 0x20000000) != 0)) >> 8)) +
           0x5a4ddc75;
  if ((int)uVar38 < (int)(uVar47 | uVar48 | 0xc000)) {
    uVar38 = (ulong)(((uint)uVar13 >> 1) + 0x81c02874) << 1;
  }
  uVar46 = (short)uVar38 - (short)uVar23;
  uVar38 = uVar38 & 0xffffffffffff0000;
  bVar44 = ((bVar44 - bVar5) -
            ((((uint)uVar24 | (uint)(byte)(bVar27 - bVar5) << 8 | (uint)(uVar11 >> 8) & 0xff) >>
              ((uint)(byte)uVar11 & 0x1f) & 1) != 0) & 0x1f) % 9;
  bVar44 = (char)uVar23 << bVar44 |
           (byte)(CONCAT11(((uint)uVar38 | (uint)uVar46) < 0xf59385b9,(char)uVar23) >> 9 - bVar44);
  bVar36 = bVar44 ^ (bVar44 == 0x29) * (bVar44 ^ (byte)uVar48);
  uVar48 = (uint)(ushort)(short)(char)((bVar44 == 0x29) * (bVar36 & 0x29) ^ 0x29) | 0x9e160000;
  bVar52 = (byte)uVar46 >> 1 | (byte)uVar46 << 7;
  uVar13 = uVar38 | (ulong)uVar46 & 0xffffffffffffff00;
  uVar40 = uVar13 | bVar52;
  bVar25 = ((char)((ulong)uVar50 >> 8) >> 7) * '\x02' + ((short)(uVar15 & 0xffffffff) < 0);
  bVar44 = bVar25 & 0x3f;
  uVar24 = (ulong)uVar48 << bVar44 | (ulong)(uVar48 >> 0x40 - bVar44);
  bVar44 = (byte)((ulong)(long)(int)(uint)uVar24 >> 8);
  uVar29 = (ushort)uVar40;
  iVar1 = (uint)(ushort)uVar24 * (uint)uVar29;
  sVar9 = (short)iVar1;
  bVar45 = cVar6 + 0x32;
  uVar42 = CONCAT62(0xe96c,(short)cVar6) ^ 0x3bca0678;
  uVar46 = CONCAT11(bVar44 + ((byte)((ulong)(uint)(int)(char)bVar25 >> 8) & bVar44) + '\x01',
                    (char)uVar24) + -0x7714 + (ushort)(sVar9 != 0);
  uVar48 = (int)(uVar15 & 0xffffffff) << 1;
  uVar15 = (ulong)(byte)((char)bVar52 >> (bVar45 & 0x1f));
  uVar11 = uVar13 | uVar15 | 1 << (uVar15 & 0x3f);
  cVar6 = (char)((uint)(uVar29 >> 1) >> 8);
  lVar53 = (long)(int)(((uint)uVar24 & 0xffff0000 | (uint)(ushort)-sVar9) >> 1 | 0x80000000) *
           0x23b50b52;
  iVar26 = (int)((ulong)lVar53 >> 0x20);
  bVar45 = bVar45 & 0xf;
  uVar29 = uVar46 << bVar45 | 0U >> 0x10 - bVar45;
  uVar33 = (short)uVar42 + 0x924c;
  bVar32 = (byte)uVar33;
  bVar52 = (char)uVar29 + bVar32;
  uVar15 = CONCAT62((int6)(short)(uVar24 >> 0x10),uVar29) & 0xffffffffffffff00;
  uVar13 = (long)(int)(uint)(ushort)(0 >> bVar45) * (long)(int)((uint)uVar15 | (uint)bVar52);
  uVar24 = uVar13 & 0xffffffff;
  uVar13 = (uVar13 >> 0x20) - 0x49c6bd03;
  uVar55 = (int)(((uVar23 & 0xfffffffffffe0000) >> 1 |
                 (ulong)(ushort)((ushort)(((uVar23 & 0xffffffffffffff00 | (ulong)bVar36) >> 1 &
                                          0xfffe) >> 1) ^ 1 << (uVar46 & 0xf))) >> 1) << 1;
  bVar57 = (byte)(uVar47 >> 0x1c) + (char)((ulong)lVar53 >> 0x20) + (iVar26 != 0 && iVar26 != -1) &
           (byte)uVar24;
  bVar31 = (byte)(uVar15 >> 8);
  bVar45 = bVar52 + bVar31;
  bVar25 = (byte)(uVar11 & 0xff);
  bVar44 = (bVar25 & 0x1f) % 9;
  uVar23 = ((ulong)CONCAT61((int6)(uVar15 >> 0x10),bVar52) & 0xffffffffffff00) << 8;
  uVar47 = (uVar48 & 0xffffff00 |
            (uint)(byte)(((byte)uVar48 | ((ushort)((uint)iVar1 >> 0x12) & 1) != 0) + (char)uVar19) |
           0xf6c4) + ((uVar54 & 0xffff0000 | (uint)(ushort)(uVar56 + 0x9084) & 0xffffff00) >> 1 |
                     (int)uVar40 << 0x1f) + 1;
  uVar48 = (uint)uVar24;
  bVar36 = (char)(uVar24 >> 8) >> 7;
  bVar36 = bVar36 << (bVar25 & 7) | bVar36 >> 8 - (bVar25 & 7);
  uVar15 = (ulong)CONCAT11((bVar52 << bVar44 |
                           (byte)(CONCAT11(CARRY1(bVar52,bVar31),bVar52) >> 9 - bVar44)) ^ bVar36,
                           bVar45);
  if (SBORROW4((uint)(ushort)((ushort)(bVar57 >> 1) | (ushort)((bVar57 & 1) != 0) << 0xf),
               -0x49869cce)) {
    cVar6 = (char)(uVar11 >> 8);
  }
  uVar3 = (uint3)(uVar38 >> 8);
  uVar38 = uVar42 & 0xffffffffffff0000 | (ulong)uVar33 & 0xffffffffffffff00 |
           (ulong)(byte)(bVar32 >> 1 | bVar32 << 7);
  uVar19 = (ushort)(short)(char)(byte)uVar24 >> 1;
  uVar56 = (ushort)uVar11 << (bVar25 & 0xf) | (ushort)uVar11 >> 0x10 - (bVar25 & 0xf);
  uVar24 = uVar11 & 0xffff0000 | (ulong)uVar56;
  bVar44 = (byte)uVar19;
  bVar52 = bVar36 ^ (bVar44 == bVar36) * bVar36;
  uVar37 = (uVar48 ^ (uVar48 >> 0x1b & 1) << 0x1b) & 0xffff0000 |
           (uint)(ushort)(uVar19 | (short)uVar38 << 0xf) & 0xffffff00 |
           (uint)(byte)(bVar44 ^ (bVar44 == bVar36) * (bVar44 & bVar52));
  sVar9 = (short)uVar55;
  uVar50 = (uint)(ushort)(0x16a5U - sVar9);
  if ((SBORROW2(0x16a5,sVar9) != false) != (short)(0x16a5U - sVar9) < 0) {
    uVar50 = (uint)uVar24;
  }
  uVar54 = (uint)(uVar11 & 0xff) & 0x1f;
  uVar10 = uVar37 & ~(1 << uVar54);
  bVar44 = (byte)uVar10;
  cVar16 = ((char)((ulong)(uVar10 & 0xffffff00) >> 8) - bVar44) - ((uVar37 >> uVar54 & 1) != 0);
  if (cVar16 == '\0') {
    uVar38 = uVar23 & 0xffffffff | uVar15;
  }
  uVar42 = uVar13 >> 0x21;
  cVar4 = (char)uVar56;
  cVar41 = (char)(uVar50 >> 1) - cVar4;
  uVar13 = (uVar13 & 0xffffffffffff0000 | (ulong)CONCAT11(bVar36,bVar36) & 0xffffffffffffff00 |
           (ulong)bVar44) << 0x1f | uVar42 & 0xffffffffffff0000;
  lVar53 = (ulong)(((uint)CONCAT62((undefined6)((short)(uVar20 & 0xff00 | uVar7) >> 0xf),
                                   (ushort)((CONCAT12(iVar34 != 0 && iVar34 != -1,uVar21 >> 1) |
                                            0x8000) >> bVar18) |
                                   (uVar21 >> 1 | 0x8000) << 0x11 - bVar18) & 0xffffff00 |
                   (uint)((byte)(bVar27 - bVar5) != 0 && (char)bVar5 <= (char)bVar27)) << 1 | uVar48
                  ) * 2;
  uVar20 = (ushort)((uint)CONCAT11(cVar16,(bVar52 - cVar41) -
                                          (((ushort)((short)uVar42 << ((bVar25 ^ bVar45) & 0x1f)) >>
                                            0xd & 1) != 0)) * (uVar47 & 0xffff) >> 0x10);
  uVar19 = (ushort)(short)cVar41 >> 1 | 0x8000;
  uVar50 = (uint)lVar53;
  lVar58 = ((ulong)(uVar22 & 0xffff0000) + 0x16a5) * 2 + 0x55f877c;
  uVar42 = uVar38 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar38 - cVar4);
  uVar56 = -uVar19;
  uVar22 = CONCAT22((undefined2)(cVar41 >> 7),uVar56);
  bVar18 = (byte)uVar56;
  uVar54 = uVar50 << (bVar18 & 0x1f) | uVar50 >> 0x20 - (bVar18 & 0x1f);
  uVar37 = CONCAT31(uVar3 >> 8,~((cVar6 - (char)lVar58) - 1U) + 1);
  uVar11 = (ulong)uVar37;
  uVar47 = (uVar47 - uVar54 ^ 0x31dfa813) >> 10;
  uVar48 = 0;
  if (uVar47 != 0) {
    while ((uVar47 >> uVar48 & 1) == 0) {
      uVar48 = uVar48 + 1;
    }
  }
  bVar44 = (bVar18 & 0x1f) % 0x11;
  uVar7 = (short)uVar42 + 0x16a5;
  uVar40 = (ulong)bVar18;
  if (uVar7 != 0) {
    uVar40 = uVar11;
  }
  uVar21 = (((short)uVar48 << bVar44 |
            (ushort)(CONCAT12(((uint)uVar13 | (uint)uVar20) < 0xa09ebd71,(short)uVar48) >>
                    0x11 - bVar44)) & 0xff) * (ushort)(byte)(uVar15 >> 8) >> 1;
  uVar24 = uVar24 + lVar53 & 0xffffffffffffdfc3;
  return (ulong)(uVar48 & 0xffff0000 | (uint)(ushort)(uVar21 & 0xff | uVar20 << 8)) +
         (uVar23 | uVar15 & 0xffffffffffff00ff) +
         (CONCAT71((uint7)(uint3)(uVar22 >> 9) | (uint7)(((ulong)((uVar56 & 1) != 0) << 0x3f) >> 8),
                   (char)(uVar22 >> 1)) & 0xffffffffffffff62) +
         (uVar13 | (ulong)uVar20 & 0xffffffffffffff00 |
         (ulong)((uVar48 & 0xffff0000 | (uint)(ushort)(uVar21 | uVar7 * -0x8000)) >> 8) & 0xff) +
         uVar42 + (ulong)(uVar47 & 0xffff0000 |
                         (uint)(ushort)((short)uVar47 >> 0x11 | 1 << ((ushort)uVar54 & 0xf))) +
                  0xa49a3cfae0d6a0d1 +
         (((ulong)(((uVar50 - (int)uVar42) * 0x40000 | (uint)(uVar3 >> 0xe)) >> (bVar18 & 0x3f)) |
          uVar11 << 0x40 - (bVar18 & 0x3f)) >> 0x18 | uVar24 << 0x28) + uVar40 +
         (ulong)((uint)uVar7 << 1 | 1) +
         (ulong)(((uVar55 & 0xffff0000 |
                  (uint)(ushort)((ushort)(CONCAT12(uVar19 != 0,sVar9) >> 3) | sVar9 << 0xe)) ^
                 (uVar55 >> 0x1c & 1) << 0x1c) & 0xfeffffff | 0x80) + uVar11 + uVar24 +
         (ulong)(byte)((byte)(((ushort)uVar37 ^ 0xdc42) << 2) |
                      (byte)((uVar38 & 0xffffffffffffff00) >> 8) >> 6) + (ulong)uVar54 + lVar58;
}



// WARNING: Removing unreachable block (ram,0x0040675a)
// WARNING: Removing unreachable block (ram,0x004063cc)
// WARNING: Removing unreachable block (ram,0x0040606c)
// WARNING: Removing unreachable block (ram,0x0040607e)
// WARNING: Removing unreachable block (ram,0x0040617b)
// WARNING: Removing unreachable block (ram,0x00406483)
// WARNING: Removing unreachable block (ram,0x00406d3b)
// WARNING: Removing unreachable block (ram,0x004061f3)
// WARNING: Removing unreachable block (ram,0x00406afa)
// WARNING: Removing unreachable block (ram,0x004062fb)
// WARNING: Removing unreachable block (ram,0x004062d4)
// WARNING: Removing unreachable block (ram,0x004063b6)

long log_size_10_var_005(void)

{
  uint7 uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int6 iVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  char cVar15;
  ulong uVar14;
  byte bVar21;
  ushort uVar16;
  ushort uVar17;
  short sVar18;
  uint uVar19;
  ulong uVar20;
  char cVar22;
  byte bVar23;
  uint uVar24;
  byte bVar26;
  undefined8 uVar25;
  undefined6 uVar27;
  short sVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  byte bVar33;
  char cVar34;
  short sVar35;
  uint uVar36;
  long lVar37;
  ushort uVar38;
  ushort uVar39;
  uint uVar40;
  uint uVar41;
  uint6 uVar44;
  ulong uVar42;
  uint7 uVar43;
  uint uVar45;
  ulong uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  ulong uVar50;
  ushort uVar51;
  uint uVar52;
  ulong uVar53;
  bool bVar54;
  bool in_PF;
  bool bVar55;
  
  lVar37 = 0x3f;
  while (0x120845e2bU >> lVar37 == 0) {
    lVar37 = lVar37 + -1;
  }
  uVar14 = 0;
  while ((0xa914f5beU >> uVar14 & 1) == 0) {
    uVar14 = uVar14 + 1;
  }
  sVar28 = 0;
  if (in_PF) {
    sVar28 = -0x60d0;
  }
  lVar37 = (uVar14 & 0x7fffffffffff8) << 0xd;
  uVar16 = 0;
  while ((0x8d1aU >> uVar16 & 1) == 0) {
    uVar16 = uVar16 + 1;
  }
  uVar49 = ((uint)uVar16 | 0xf6a10000) ^ 0x13100000;
  uVar51 = sVar28 + 0x4607U | 0xc6cf;
  uVar48 = (uVar49 & 0xffffff00 | (uint)(byte)((char)uVar16 - 0xb)) >> 1;
  uVar44 = (uint6)((ulong)lVar37 >> 0x10) & 0xffffffff0000 |
           (uint6)((ushort)((ulong)lVar37 >> 0x10) & 0xfffd);
  uVar48 = (uVar49 & 0xfffe0000) >> 1 | 0x80000000 |
           (uint)CONCAT11((char)((ulong)(uVar48 | 0x80000000) >> 8) + '5',(char)uVar48);
  uVar19 = 1;
  uVar36 = uVar48 + 0xcc563908;
  if (0x33a9c6f7 < uVar48) {
    uVar36 = uVar19;
  }
  bVar33 = (byte)uVar51;
  uVar17 = (ushort)(0xf8db9f8 - uVar49 >> 0x10);
  uVar16 = uVar17 >> 6;
  bVar2 = (byte)uVar36;
  bVar2 = bVar2 ^ (bVar2 == bVar33) * (bVar2 & (bVar33 ^ (bVar2 == bVar33) * (bVar33 ^ 0x69)));
  sVar28 = 0xf;
  while (0xc563U >> sVar28 == 0) {
    sVar28 = sVar28 + -1;
  }
  iVar10 = (int6)(short)(uVar36 >> 0x10);
  uVar14 = CONCAT62(uVar44,0xc669) & 0xffffffffffffff00;
  iVar9 = 0x1f;
  while (0x33a9c669U >> iVar9 == 0) {
    iVar9 = iVar9 + -1;
  }
  uVar48 = (int)(char)bVar33;
  if (in_PF) {
    uVar48 = (uint)uVar14 | 0xd2;
  }
  uVar6 = (short)(char)bVar2 & 0xff;
  if ((int)(uVar48 ^ 2) < 0) {
    uVar19 = (uint)CONCAT62(iVar10,uVar6 | (ushort)(byte)(((char)bVar2 >> 7) + 0x17) << 8);
  }
  uVar14 = CONCAT71((int7)(uVar14 >> 8),0x27);
  uVar4 = (short)(char)uVar6 * 0x27;
  uVar6 = 0xf;
  while (0x1448U >> uVar6 == 0) {
    uVar6 = uVar6 - 1;
  }
  bVar2 = (byte)(uVar19 | 0x1448);
  uVar36 = (uint)(ushort)(0 >> (bVar2 & 0x1f));
  uVar29 = (ulong)uVar4 & 0x3f00 | (ulong)(byte)uVar4 | 0xc0;
  if (((uint)(0x33a9c669 << (bVar2 & 0x1f)) >> 0x11 & 1) != 0) {
    uVar14 = (ulong)uVar44 << 0x10;
  }
  uVar4 = ((ushort)(byte)(0x4b - bVar33) | 0xc600) + 1;
  bVar54 = (CONCAT22(uVar16,0x1b96) | 0x800) != 0;
  cVar15 = (char)((ulong)uVar6 >> 8);
  bVar33 = cVar15 - 1;
  bVar21 = bVar33 - bVar54;
  uVar6 = uVar6 & 0xff | (ushort)bVar21 << 8;
  bVar3 = (bVar2 & 0x1f) % 9;
  uVar49 = (uVar19 | 0x1448) & 0xffffff00 |
           (uint)(byte)((byte)(CONCAT11(cVar15 == '\0' || bVar33 < bVar54,bVar2) >> bVar3) |
                       bVar2 << 9 - bVar3);
  iVar12 = (int)(short)((uVar48 ^ 2) << 1) * 0x4ff4;
  sVar28 = (short)((uint)iVar12 >> 0x10);
  uVar48 = (((uint)uVar51 | 0xc8600000) << 4) >> 1;
  if (sVar28 != 0 && sVar28 != -1) {
    uVar48 = uVar49;
  }
  uVar42 = uVar14 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar14 >> 2 | (byte)uVar14 << 6);
  uVar52 = uVar36 + 0x65f8aef1;
  uVar36 = 0x1447 - uVar36 >> 1;
  uVar14 = 0;
  if (uVar42 != 0) {
    while ((uVar42 >> uVar14 & 1) == 0) {
      uVar14 = uVar14 + 1;
    }
  }
  lVar37 = CONCAT62(iVar10,(short)(char)((ushort)uVar29 / (ushort)(byte)uVar29) *
                           (short)(char)uVar36);
  uVar11 = (short)uVar49 + 1;
  bVar33 = (byte)(uVar19 >> 0x18);
  uVar45 = iVar9 * -0x856ed44;
  uVar13 = (ulong)uVar45;
  uVar38 = uVar4 & 0xff;
  uVar4 = uVar38 | (ushort)(byte)((char)((ulong)uVar4 >> 8) + 0x82) << 8;
  uVar29 = (ulong)uVar4 | 0xb1310000;
  uVar49 = (uint)uVar29;
  uVar14 = uVar14 ^ 0x61b6;
  bVar2 = (byte)uVar11 & 0x3f;
  uVar42 = uVar42 >> bVar2 | lVar37 << 0x40 - bVar2;
  uVar47 = uVar52 + (int)lVar37 + 1;
  uVar51 = 0;
  uVar16 = (ushort)(CONCAT22(uVar16,0x1b96) >> 2);
  if (uVar16 != 0) {
    while ((uVar16 >> uVar51 & 1) == 0) {
      uVar51 = uVar51 + 1;
    }
  }
  uVar41 = uVar47 & 0xffff0000 | (uint)uVar51;
  sVar28 = uVar16 + uVar6 + 0xb52a + ((ushort)iVar12 & 0xff00 | (ushort)(byte)~(byte)iVar12);
  uVar40 = ((uint)uVar11 & 0xff00) << 8;
  uVar24 = (uint)uVar11 << 0x18;
  bVar2 = (byte)((ulong)((uVar19 & 0xff0000) >> 8 | uVar40 | uVar24) >> 8);
  uVar39 = (ushort)uVar42;
  uVar5 = (ushort)bVar2;
  uVar16 = uVar5 << 0xf;
  uVar39 = uVar39 >> 1 | uVar16;
  uVar11 = CONCAT11(bVar21 >> 1,(char)(uVar6 >> 1) + 'v');
  if (uVar39 == 0 || ((short)uVar39 < 0 != (uVar16 != 0)) != (uVar16 != 0)) {
    uVar11 = uVar5;
  }
  uVar42 = uVar42 & 0xffffffffffff0000 | (ulong)uVar39;
  if (in_PF) {
    uVar42 = uVar29;
  }
  uVar19 = (uint)(ushort)((ushort)(byte)((char)uVar47 + -0x40 + CARRY4(uVar52,(uint)uVar6)) | 64000)
  ;
  uVar52 = CONCAT22(uVar11,uVar5) & 0x3fffffff;
  uVar20 = CONCAT62(iVar10,(short)(uVar52 / uVar19));
  uVar16 = (ushort)(uVar52 % uVar19);
  uVar40 = uVar40 | uVar24;
  uVar48 = uVar48 & 0xffffff00 | (uint)(uVar49 < uVar41);
  if (uVar41 <= uVar49) {
    uVar48 = uVar49;
  }
  cVar15 = (char)((ulong)uVar16 >> 8);
  uVar16 = uVar16 & 0xff;
  if (uVar20 + uVar13 != 0 && SCARRY8(uVar20,uVar13) == (long)(uVar20 + uVar13) < 0) {
    uVar14 = (ulong)CONCAT22(uVar17 >> 8,sVar28);
  }
  uVar48 = uVar48 & 0xffff0000 |
           (uint)(ushort)((ushort)(CONCAT12(CARRY8(uVar20,uVar13),(short)uVar48) >> 0x10) |
                         (short)uVar48 << 1);
  bVar2 = (byte)((ulong)(uVar40 | CONCAT11(bVar2 >> (bVar33 & 7) | bVar2 << 8 - (bVar33 & 7),bVar33)
                        ) >> 8);
  uVar6 = uVar16 | (ushort)bVar2 << 8;
  uVar17 = CONCAT11(bVar2 + (char)((ulong)(ushort)(uVar16 | (ushort)(byte)(cVar15 << 6 |
                                                                          (byte)(CONCAT11(uVar49 <= 
                                                  uVar41,cVar15) >> 3)) << 8) >> 8),bVar33) | 0x65;
  iVar9 = 0;
  if (uVar48 != 0) {
    while ((uVar48 >> iVar9 & 1) == 0) {
      iVar9 = iVar9 + 1;
    }
  }
  bVar2 = (byte)uVar17;
  uVar36 = uVar36 << (bVar2 & 0x1f);
  lVar37 = SUB168(SEXT816((long)(ulong)uVar6) * SEXT416(0x1812860d) >> 0x40,0);
  bVar2 = bVar2 & 0x3f;
  uVar13 = (ulong)(uVar40 | uVar17) << bVar2 | (ulong)(uVar45 >> 0x40 - bVar2);
  uVar43 = (uint7)(uVar29 >> 8) & 0xffffffffffff00;
  uVar1 = (uint7)(uVar13 >> 8) & 0xff;
  uVar48 = (uVar48 << 1 | (uint)(lVar37 != 0 && lVar37 != -1)) - uVar41;
  bVar2 = (byte)uVar16 | 0xa8;
  uVar19 = (uint)uVar6 * 0x1812860d;
  if (uVar51 != 0xc697) {
    uVar19 = (uint)uVar42;
  }
  uVar25 = CONCAT71(uVar43 | uVar1,(byte)((byte)uVar48 & (byte)sVar28) == 0);
  uVar16 = (ushort)uVar42;
  uVar49 = 0x1f;
  if (uVar36 != 0) {
    while (uVar36 >> uVar49 == 0) {
      uVar49 = uVar49 - 1;
    }
  }
  uVar40 = (uint)(uVar42 >> 0x27) | (uint)(uVar42 << 0x19);
  iVar12 = ((uint)uVar13 & 0xffff0000 | (uint)uVar4) - uVar36;
  bVar3 = ((char)uVar38 - (char)uVar1) - (0x4666 < uVar16 || 0xfffe < (ushort)(uVar16 + 0xb999));
  bVar33 = (byte)((ulong)uVar4 >> 8);
  uVar52 = iVar12 * 0x20;
  bVar21 = bVar33 ^ (bVar3 == bVar33) * (bVar33 ^ bVar2);
  uVar47 = (uint)bVar2;
  if (bVar3 <= bVar33) {
    uVar47 = uVar52;
  }
  uVar27 = (undefined6)(uVar43 >> 8);
  uVar7 = (int)(uint)CONCAT11(bVar3 ^ (bVar3 == bVar33) * (bVar3 & bVar21),bVar21) >>
          ((byte)iVar12 & 0x1f);
  uVar29 = (ulong)(uVar49 >> 1) ^ 0x7e6c4760;
  bVar33 = (byte)(uVar16 + 0xb99a) & (byte)iVar9;
  uVar49 = uVar48 & 0xffff0000 | (uint)(ushort)(uVar16 + 0xb99a) & 0xffffff00 | (uint)bVar33;
  uVar16 = (ushort)uVar25 & 0xff | (ushort)('\0' < (char)bVar33) << 8;
  bVar2 = ((byte)iVar12 & 0x1f) % 0x11;
  uVar51 = (ushort)uVar29;
  uVar29 = uVar29 & 0xffffffffffff0000;
  uVar42 = (ulong)(ushort)(uVar51 >> bVar2 | uVar51 << 0x11 - bVar2);
  uVar20 = uVar14 >> 0xd | uVar14 << 0x33 | 0xb148;
  cVar15 = (char)uVar20;
  bVar2 = (char)((uVar29 | uVar42) << 1) + cVar15;
  uVar24 = (uVar19 ^ uVar41 ^ 0xc697) & 0xffffff00 | (uint)(byte)((char)uVar47 - 1);
  uVar48 = (iVar9 - (int)CONCAT62(uVar27,uVar16)) - 1U >> 0xd;
  uVar13 = (uVar29 | uVar42 & 0x7fffffffffffff80) << 1 | (ulong)(byte)(bVar2 * '\x04' | bVar2 >> 6);
  sVar28 = (short)uVar24;
  uVar41 = (uint)uVar13;
  lVar37 = (ulong)(uint3)(((uint3)(uVar52 >> 8) & 0xff00) >> 8 | (uint3)uVar52 & 0xff00 |
                         (uint3)((uint)(iVar12 * 0x20000000) >> 8)) << 8;
  uVar19 = (uVar45 + 1 >> 1 & 0xffffff00 | (uint)((uVar45 + 1 & 1) != 0) << 0x1f |
           (uint)((char)bVar33 < '\x01')) + 1 >> 1;
  uVar42 = -(ulong)(((int)CONCAT62(uVar27,uVar16 + 0x5c9f) + 0x2f5ec3b7) - uVar41);
  bVar2 = (byte)(uVar20 * -0x3c0b6074);
  uVar29 = (ulong)((uVar47 >> 0x11) << 0x10) << 1;
  uVar47 = uVar41 & 0xffff0000 | (uint)(ushort)((short)uVar13 >> (bVar2 & 0x1f));
  bVar2 = bVar2 & 0xf;
  uVar16 = (ushort)uVar19;
  uVar16 = uVar16 << bVar2 | uVar16 >> 0x10 - bVar2;
  uVar52 = uVar19 & 0xffff0000 | (int)sVar28 << 0x1f | (uint)uVar16;
  iVar9 = (int)uVar42;
  uVar19 = iVar9 + uVar47;
  uVar45 = (uint)lVar37;
  if (SCARRY4(iVar9,uVar47) != (int)uVar19 < 0) {
    uVar45 = uVar48 | uVar49 << 0x13;
  }
  bVar2 = (byte)uVar48;
  bVar33 = (byte)uVar16;
  uVar13 = (ulong)(uVar36 & 0xffff0000 | (uint)(ushort)((ushort)uVar36 & (ushort)lVar37)) * 2;
  if (!SBORROW1(bVar2,bVar33)) {
    uVar13 = uVar29;
  }
  uVar17 = (ushort)uVar20 & 0xff00 | (ushort)(byte)(cVar15 << 1 | cVar15 < '\0');
  uVar20 = (uVar20 * -0x3c0b6074 ^ (ulong)uVar49) & 0xffffffffffffff0f;
  uVar51 = (ushort)uVar49 >> (sbyte)uVar20 | 0x22f9 << 0x10 - (sbyte)uVar20;
  lVar37 = (ulong)uVar24 - 0x88322b2d;
  uVar48 = (uVar45 & 0xffff0000 |
           (uint)(ushort)((ushort)uVar45 >> 1 | (ushort)(bVar2 < bVar33) << 0xf)) + 0x2bec946f;
  uVar50 = -(ulong)((int)uVar29 + 0xda8b9ac5);
  bVar2 = (byte)(uVar20 - 0x5ecb5ba);
  uVar46 = (ulong)uVar52 << (bVar2 & 0x3f) | (ulong)(uVar52 >> 0x40 - (bVar2 & 0x3f));
  bVar3 = (byte)((ulong)(uVar48 & 0xffffff00) >> 8);
  uVar29 = uVar20 - 0x5ecb5ba & 0xffffffffffffff00;
  uVar32 = uVar13 & 0xffffffffffff0000 | (ulong)(ushort)uVar19;
  uVar13 = (ulong)(bVar2 & (byte)uVar51) & 0xffffffffffffff0f;
  bVar33 = (byte)uVar13;
  uVar16 = ((ushort)(0x5ecb5b9 < uVar20) << 8) >> bVar33 | (short)lVar37 << 0x10 - bVar33;
  uVar30 = (uVar42 & 0xffffffff) - 1;
  uVar52 = (uint)lVar37;
  uVar20 = (ulong)(uVar48 & 0xffff0000 |
                  (uint)(ushort)(CONCAT11(bVar3 << (bVar2 & 7) | bVar3 >> 8 - (bVar2 & 7),in_PF) <<
                                2)) * -0x64ce8f2;
  uVar45 = (uint)uVar51 | (uint)uVar30;
  uVar51 = SEXT12((char)(uVar29 >> 8));
  uVar31 = (ulong)(((uVar52 >> 0x18 | uVar52 << 8) >> (uVar45 & 0x1f) & 1) != 0) | 0xfdca22f8;
  uVar42 = CONCAT62(((uint6)(((ulong)(ushort)((ushort)(uVar7 >> 0x10) ^
                                             (ushort)((uint)(uVar7 == uVar40) *
                                                      (uVar7 & (uVar40 ^ (uint)(uVar7 == uVar40) *
                                                                         (uVar40 ^ ((uint)uVar25 &
                                                                                    0xffff | (int)(
                                                  uVar43 >> 8) << 0x10)))) >> 0x10)) << 0x10) >> 8)
                    & 0xff0000) >> 1,
                    (uVar16 & 0xff | (ushort)(byte)((byte)((ulong)uVar16 >> 8) >> 1) << 8) >> 1 &
                    0xff | (ushort)!in_PF << 8);
  uVar36 = ((uint)uVar29 | (uint)uVar13) ^ 0x9429f7bf;
  bVar2 = (byte)uVar36 & 0x3f;
  uVar47 = CONCAT22(sVar28 >> 0xf,sVar28 + 1) << bVar2 | (uint)(uVar50 >> 0x40 - bVar2);
  bVar2 = (byte)uVar20;
  uVar36 = uVar36 & 0xffff0000;
  uVar48 = uVar36 | (uint)bVar2;
  uVar49 = (uint)uVar50;
  uVar52 = uVar49 & 0xffffff00 | uVar52 & 0xff;
  cVar22 = (char)(uVar51 >> 1);
  cVar34 = (char)uVar45;
  cVar15 = cVar22 + cVar34;
  if (SCARRY1(cVar22,cVar34) == SCARRY1(cVar15,'\0')) {
    uVar52 = uVar49 & 0xffff0000 | (uint)bVar2;
  }
  uVar13 = SEXT48((int)uVar47);
  uVar29 = (uVar42 & 0xffffffff) * (uVar42 & 0xffffffff);
  uVar45 = (uint)(uVar29 >> 0x20);
  bVar3 = (char)uVar29 + (char)uVar46 + (uVar45 != 0);
  uVar49 = uVar52 + 0xd2a8b933;
  if ((SBORROW4(uVar52,0x2d5746cc) != SBORROW4(uVar52 + 0xd2a8b934,1)) == (int)uVar49 < 0) {
    uVar13 = uVar29 & 0xff00 | (ulong)bVar3 | (ulong)(uint6)(int6)(short)(uVar47 >> 0x10) << 0x10;
  }
  uVar29 = uVar29 & 0xffffff00 | (ulong)(byte)(bVar3 + 0x36);
  uVar42 = uVar46 & 0xffffffffffff0000 | uVar30 & 0xffff;
  iVar9 = 0;
  if (uVar48 != 0) {
    while ((uVar48 >> iVar9 & 1) == 0) {
      iVar9 = iVar9 + 1;
    }
  }
  iVar8 = (int)uVar29;
  iVar12 = iVar8 << 1;
  uVar52 = iVar9 + (int)uVar31;
  uVar4 = (short)uVar52 - 1;
  uVar50 = (ulong)(uVar52 & 0xffff0000 | (uint)uVar4);
  uVar6 = (ushort)iVar12;
  uVar38 = (ushort)(uVar6 == 0x8d98) * ((ushort)uVar49 ^ 0x8d98) ^ 0x8d98;
  uVar6 = uVar6 ^ (ushort)(uVar6 == 0x8d98) * (uVar6 & uVar38);
  uVar48 = uVar19 & 0xffff0000 | ((uint)uVar51 & 0xfe00) >> 1 |
           (uint)(byte)((cVar15 + '$') - (iVar8 < 0));
  if (-0x708c < (short)uVar4) {
    uVar48 = uVar49;
  }
  uVar53 = (long)(int)(uVar36 | (ushort)uVar13) * 0x13e1ff78;
  iVar9 = (int)(uVar53 >> 0x20);
  bVar54 = iVar9 != 0 && iVar9 != -1;
  bVar21 = (byte)((uVar53 & 0xffffffff) >> 8);
  bVar3 = bVar21 + 0xb4;
  cVar15 = bVar3 + bVar54;
  if ((0x4b < bVar21 || CARRY1(bVar3,bVar54)) || cVar15 == '\0') {
    uVar49 = (uint)uVar32;
  }
  uVar11 = (ushort)(byte)(bVar2 - 1 >> 1) | (ushort)((bVar2 - 1 & 1) != 0) << 0xf;
  uVar4 = (ushort)uVar31;
  uVar51 = uVar4 ^ (ushort)(uVar6 == uVar4) * (uVar4 ^ uVar11);
  iVar10 = (int6)(short)((uint)iVar12 >> 0x10);
  uVar31 = (ulong)uVar11;
  if ((short)uVar4 < (short)uVar6) {
    uVar31 = (ulong)(ushort)uVar19;
  }
  uVar31 = uVar13 & 0xffffffffffff0000 | uVar31;
  if ((short)uVar4 <= (short)uVar6) {
    uVar49 = (uint)uVar31;
  }
  uVar49 = uVar49 << 1 | (uint)((int)uVar49 < 0);
  uVar36 = (uVar45 & 0xffff0000 | (uint)(ushort)((short)uVar29 >> 0xf)) ^ 1 << ((uint)uVar32 & 0x1f)
  ;
  uVar19 = (uint)(ushort)(uVar6 ^ (ushort)(uVar6 == uVar4) * (uVar6 & uVar51)) * (uVar36 & 0xffff);
  uVar6 = (ushort)(uVar19 >> 0x10);
  uVar29 = (uVar20 & 0xffffffff00000000 | 0x4000000000000000) ^ 0xffffffff00000000 |
           (ulong)uVar36 & 0xffffffffffff0000 | (ulong)uVar6;
  lVar37 = uVar32 + uVar29;
  uVar36 = uVar19;
  if (lVar37 == 0 || SCARRY8(uVar32,uVar29) != lVar37 < 0) {
    uVar36 = (uint)lVar37;
  }
  uVar32 = (ulong)uVar51 & 0xffffffffffffff00 | 0xfdca0000 |
           (ulong)(byte)((byte)((uVar51 & 0xff | (ushort)CARRY8(uVar32,uVar29) << 8) >> 4) |
                        (char)uVar51 << 5);
  uVar20 = (uVar53 & 0xffff0000 | (ulong)CONCAT11(cVar15,(char)(uVar53 & 0xffffffff))) << 1;
  uVar14 = uVar14 >> 0xd & 0xffffffffffff0000 | uVar14 << 0x33 |
           (ulong)(ushort)(uVar17 << bVar33 % 0x11 |
                          (ushort)(CONCAT12((uVar16 & 1) != 0,uVar17) >> 0x11 - bVar33 % 0x11)) |
           0xc000;
  uVar19 = (uint)(uVar6 & 0x3fff) << 0x10 | uVar19 & 0xffff;
  sVar28 = (short)(uVar19 / (uint)(ushort)uVar14);
  uVar36 = uVar36 & 0xffff;
  if (!in_PF) {
    uVar36 = (uint)CONCAT62(iVar10,sVar28);
  }
  lVar37 = 0;
  if (uVar42 != 0) {
    while ((uVar42 >> lVar37 & 1) == 0) {
      lVar37 = lVar37 + 1;
    }
  }
  bVar33 = (byte)uVar20;
  bVar2 = bVar33 & 0x3f;
  uVar32 = uVar32 << bVar2 | uVar32 >> 0x40 - bVar2;
  bVar33 = bVar33 & 0x3f;
  uVar53 = 0x865d5c7f88e24f10U >> bVar33 | -0x79a2a380771db0f0 << 0x40 - bVar33;
  uVar43 = (uint7)(uVar31 >> 9);
  uVar42 = CONCAT71(uVar43,(byte)(uVar31 >> 1) >> 1);
  uVar45 = (int)sVar28 * (int)(short)uVar49;
  uVar16 = ((ushort)((ulong)uVar48 & 0xffffffffffffff00) |
           (ushort)(byte)((byte)uVar48 << 1 | (byte)uVar48 >> 7)) << 1;
  uVar30 = (uVar30 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar30 + (short)uVar46 | 0x400)) &
           ~(1 << (uVar50 & 0x3f));
  uVar47 = (uint)uVar30;
  if (uVar14 <= uVar42) {
    uVar20 = uVar50;
  }
  uVar40 = ((uint)uVar32 & 0xffffff00 | (uint)(byte)((char)uVar32 - 1)) + 1;
  uVar51 = (uVar38 & 0xff00 | (ushort)(byte)((byte)uVar38 >> 1 | 0x80)) + 0xc2e7 +
           (ushort)(0x1402d1eb < uVar14);
  uVar31 = (ulong)uVar51 | 0xa0e452e5aae0000;
  if (-1 < (short)uVar51) {
    uVar49 = uVar47;
  }
  uVar32 = lVar37 - uVar31;
  sVar28 = (short)uVar42 + -0x17f0;
  uVar24 = (uint)CONCAT62((uint6)((uVar13 & 0xffffffffffff0000) >> 0x11),sVar28);
  uVar19 = -(((uint)CONCAT61((int6)(((ulong)((uint7)(uVar29 >> 8) & 0xffffffffffff00) << 8) >> 0x10)
                             ,(char)(uVar19 % (uint)(ushort)uVar14 >> 8) >> 1) & 0x7fff80) << 9 |
            uVar45 >> 0x10);
  uVar17 = (ushort)uVar19;
  uVar17 = uVar17 | 1 << (uVar17 & 0xf);
  uVar19 = uVar19 & 0xffff0000;
  uVar41 = uVar24 >> 0x17 | (uVar24 & 0xffffff00 | (uint)(byte)((byte)sVar28 >> 1)) << 9;
  cVar15 = (char)uVar17 + 'J';
  uVar6 = (ushort)uVar53 & (ushort)uVar20;
  bVar2 = (byte)uVar20 & 0x3f;
  uVar14 = uVar20 << bVar2 | uVar20 >> 0x40 - bVar2;
  uVar24 = (uint)((ulong)uVar48 & 0xffffffffffffff00) & 0xffff0000 | (uint)(uVar16 | 0x100);
  bVar2 = ((char)uVar40 << 1 | 1U) + cVar15 + ((uVar16 >> 8 & 1) != 0);
  uVar51 = (ushort)uVar40 >> 10 & 1;
  uVar48 = (int)uVar31 * 0x3bda9f4e;
  if (uVar51 != 0 || bVar2 == 0) {
    uVar48 = uVar24;
  }
  uVar29 = (ulong)(uVar52 >> 0x18) - 0x464d2c4b;
  uVar52 = uVar48 & 0xffffff00 | uVar48 >> 1 & 0x7f;
  bVar55 = (uVar36 | (uint)uVar32) == 0x9ab684bf;
  bVar54 = (uVar6 & 0x1000) != 0;
  uVar48 = uVar40 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar40 & 0xff00 | (ushort)bVar2) ^ uVar51 << 10);
  if (bVar54 || bVar55) {
    uVar48 = uVar19 | (ushort)(CONCAT11((char)((ulong)(uVar19 | (uint)uVar17 & 0xffffff00) >> 8) +
                                        (char)uVar16,cVar15) << 1);
  }
  if (bVar54 || bVar55) {
    uVar14 = uVar29 & 0xffffffff;
  }
  iVar9 = (int)CONCAT62(iVar10,(short)uVar45) + 0x558996ff;
  uVar19 = (uVar24 + 0x54512ac1) * 2;
  uVar16 = (ushort)uVar49 & 0xff00 | (ushort)(byte)((char)uVar49 >> 0x1c) | 1;
  uVar45 = (uint)(uVar42 & 0xffffffff);
  uVar36 = uVar48 + uVar45 + 1;
  uVar13 = (ulong)uVar41 ^ ((ulong)(uVar41 >> 7) & 1) << 7;
  uVar48 = uVar36 + uVar47 * 4;
  uVar20 = -((uVar53 & 0xffffffffffff0000 | (ulong)uVar6) ^ (ulong)uVar6 & 0x1000);
  bVar2 = (byte)uVar20 | (byte)uVar30;
  uVar30 = uVar20 & 0xffffffffffffff00 | (ulong)bVar2;
  if ((char)bVar2 < '\x01') {
    uVar30 = uVar20 & 0xffffffffffff0000 | (ulong)uVar16;
  }
  uVar49 = uVar49 & 0xffff0000 | (uint)(ushort)(uVar16 * 0x6ad);
  uVar16 = CONCAT11((char)(uVar14 >> 8) >> ((byte)uVar14 & 0x1f),(byte)uVar14) << 1;
  uVar51 = uVar16 | 1;
  iVar12 = 0;
  if (uVar49 != 0) {
    while ((uVar49 >> iVar12 & 1) == 0) {
      iVar12 = iVar12 + 1;
    }
  }
  bVar33 = (byte)uVar51;
  bVar2 = bVar33 & 0x1f;
  uVar47 = uVar52 >> bVar2 | uVar52 << 0x20 - bVar2;
  uVar40 = (uint)(ushort)(short)(char)((char)uVar36 + '\x01');
  uVar52 = (uint)(((ulong)(uint3)((uint)((int)uVar29 + 1) >> 8) & 0xffffffffffff00) << 8) | uVar40;
  cVar15 = (char)uVar47;
  uVar47 = uVar47 & 0xffffff00 | (uint)(byte)(cVar15 << 1 | cVar15 < '\0');
  uVar29 = uVar14 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar51 >> 8);
  uVar31 = (ulong)(uVar47 + 0x3d09442e + uVar52 * 4);
  uVar20 = (ulong)uVar47 * 0x1000000;
  bVar2 = (byte)(uVar16 >> 8);
  uVar49 = uVar49 << (bVar2 & 0x1f) | uVar49 >> 0x20 - (bVar2 & 0x1f);
  uVar52 = uVar52 << 1;
  uVar46 = uVar31 + uVar20;
  uVar14 = (ulong)(uVar49 & 0xffffbfff);
  if (uVar46 != 0) {
    uVar14 = uVar29;
  }
  uVar50 = uVar46;
  if (SCARRY8(uVar31,uVar20) != false) {
    uVar50 = uVar20;
  }
  uVar49 = uVar52 >> 0x18 | (uVar52 & 0xff0000) >> 8 | (uVar40 & 0x7f80) << 9 |
           (uVar52 | (uVar49 >> 0xe & 1) != 0) << 0x18;
  if (uVar46 != 0) {
    uVar49 = (uint)uVar29;
  }
  uVar52 = 0;
  if (uVar49 != 0) {
    while ((uVar49 >> uVar52 & 1) == 0) {
      uVar52 = uVar52 + 1;
    }
  }
  uVar47 = SUB164((ZEXT1216(CONCAT48(uVar48 & 0xffff0000 |
                                     (uint)(ushort)(((ushort)uVar48 & 0xff00 |
                                                    (ushort)(byte)((char)uVar48 -
                                                                  (char)((ulong)uVar48 >> 8))) >>
                                                   (bVar33 & 0x1f)),
                                     CONCAT62((int6)(short)((uint)iVar9 >> 0x10),
                                              CONCAT11((char)((ulong)(long)iVar9 >> 8) << 1,
                                                       (char)iVar9)))) &
                  (undefined  [16])0xffffffffffffffff) % ZEXT816(uVar30 | 0xc000000000000000),0) <<
           1 | (uint)uVar50 >> 0x1f;
  bVar33 = ((char)(uVar19 >> 8) >> 0xd) + (char)((ulong)uVar47 >> 8) + 1;
  uVar48 = uVar49 & 0x3f5f0000 | (uint)(ushort)(((ushort)uVar49 & 0xb021) + 0x94ed);
  if ((char)bVar33 < '\0') {
    uVar48 = (uint)uVar29;
  }
  sVar18 = (short)uVar47;
  sVar35 = (short)(uVar42 & 0xffffffff);
  uVar16 = sVar35 + sVar18;
  uVar49 = (uint)(((ulong)uVar43 & 0xffff00) << 8);
  uVar48 = (uVar48 << (bVar2 & 0x1f)) + 0xde63b492;
  uVar30 = (uVar30 & 0xffffffffffff0000 | 0xc000000000000000 |
           (ulong)(ushort)((ushort)uVar30 >> 1 | (ushort)((uVar30 & 1) != 0) << 0xf)) ^ uVar50;
  uVar51 = (ushort)(uVar52 >> 1) & 0x7fff | 1;
  uVar42 = (uVar32 & 0xffffffffffff0000 |
           (ulong)(ushort)(((ushort)uVar32 & 0xff00 | (ushort)(byte)-((uVar13 & 1) != 0)) + 0x2882 ^
                          0x7fff)) ^ 0x2585a6f;
  sVar28 = 0xf;
  if ((ushort)uVar48 != 0) {
    while ((ushort)((ushort)uVar48 >> sVar28) == 0) {
      sVar28 = sVar28 + -1;
    }
  }
  uVar49 = uVar49 >> 0x18 | (uVar49 & 0xff0000) >> 8 | ((uint)uVar16 & 0xff00) << 8 |
           (uint)uVar16 << 0x18;
  uVar31 = ((ulong)(byte)uVar51 | 0x3fffffffffff7f00) << (bVar2 & 0x3f);
  lVar37 = (ulong)uVar49 + uVar29;
  cVar15 = (char)lVar37;
  uVar47 = (uint)lVar37 & 0xffffff00 | (uint)(byte)(cVar15 << 1);
  uVar24 = (uint)uVar42 & 0xffff0000 |
           (uint)(ushort)((short)uVar42 + (ushort)uVar14 + (ushort)(cVar15 < '\0'));
  uVar29 = uVar50 & 0xffffffffffff0000 | uVar50 >> 1 & 0x7fff;
  bVar21 = (char)((uVar45 & 0xffff) >> 1) << 1 | 0xc0;
  uVar19 = ((uint)(((ulong)(uVar19 & 0xffff0000 | (uint)(ushort)((short)uVar19 >> 0x15) & 0xffffff00
                           | (uint)bVar33) << (bVar2 & 0x3f) |
                   (uVar13 & 0xffffffffffff0000 | uVar13 >> 1 & 0x7fff) >> 0x40 - (bVar2 & 0x3f)) >>
                  2) & 0x7fffffff) * -0x5b152ab2;
  iVar9 = (uVar52 & 0xffff0000 | (uint)uVar51 & 0xffffff00 | 0xff) + 1 + uVar49;
  uVar52 = ((uint)uVar29 & 0xffff0000 | (uint)(uVar29 >> 0xd) & 7) ^ 0xfefe84be;
  uVar48 = uVar48 ^ (uVar48 >> 0x12 & 1) << 0x12;
  uVar19 = uVar19 & 0xffff0000 | (uint)(ushort)((short)uVar19 + (short)uVar52 + 1);
  uVar29 = (ulong)uVar49 - 1;
  uVar51 = ((ushort)(uVar50 >> 1) & 0xff) << 1;
  bVar3 = (byte)uVar29;
  bVar33 = bVar3 & 0x1f;
  uVar45 = uVar19 >> bVar33 | uVar19 << 0x20 - bVar33;
  uVar32 = (ulong)uVar45;
  bVar3 = bVar3 & 0x3f;
  uVar13 = uVar29 >> bVar3 |
           ((uVar30 & 0xffffffffffff0000 | (ulong)((ushort)uVar30 & 0xfbff)) << (bVar2 & 0x3f) |
           uVar50 >> 0x40 - (bVar2 & 0x3f)) << 0x40 - bVar3;
  uVar40 = ~CONCAT31((uint3)(uVar52 >> 9),(char)uVar14);
  bVar33 = (byte)uVar13;
  uVar52 = iVar9 << (bVar33 & 0x1f) | (uint)(CONCAT14(uVar47 != 0,iVar9) >> 0x21 - (bVar33 & 0x1f));
  uVar49 = ((uint)uVar20 | (uint)(ushort)(0U % (ushort)bVar21 << 8) | 0xe5861937) * uVar52;
  bVar23 = (byte)(uVar24 >> 0xe);
  uVar19 = uVar49 & 0xffff0000;
  bVar54 = (int)uVar48 < 0;
  uVar29 = ((ulong)(((uVar36 & 0xff80) << 1 |
                    (uint)(uVar16 == 0 || SCARRY2(sVar35,sVar18) != (short)uVar16 < 0)) >>
                   (bVar2 & 0x3f)) & 0xffffffffffff0000 | (ulong)uVar51 & 0xffffffffffffff00 |
           (ulong)(byte)~(byte)uVar51) * 0x76f3dbe4;
  uVar51 = (ushort)uVar29 | (ushort)bVar54;
  sVar18 = (short)uVar31;
  uVar6 = sVar28 << 1 | (ushort)(sVar28 < 0);
  uVar36 = -uVar47 & 0xffff0000 | (uint)uVar6;
  uVar20 = uVar13 >> (bVar33 & 0x3f);
  uVar17 = (short)uVar52 + 1;
  uVar30 = (ulong)(uVar52 & 0xffff0000 | (uint)uVar17);
  bVar2 = (byte)uVar20 & 0x1f;
  uVar49 = (uint)(uVar17 != 0 && SCARRY2((short)uVar52,1) == (short)uVar17 < 0) << bVar2 |
           (uVar19 | (uVar49 & 0xffff) * (uVar48 & 0xffff) & 0xffff) >> 0x20 - bVar2;
  bVar2 = (byte)uVar49;
  bVar3 = bVar33 & bVar2;
  uVar6 = ((ushort)uVar40 >> 1 | (short)uVar13 << 0xf) - uVar6;
  uVar48 = uVar40 & 0xffff0000 | (uint)uVar6;
  uVar16 = sVar18 - uVar51;
  uVar42 = uVar31 & 0xffffffffffff0000;
  if (SBORROW2(sVar18,uVar51) != false) {
    uVar20 = uVar20 & 0xffffffffffff0000 | (ulong)uVar48 & 0xffff;
  }
  bVar26 = (byte)(uVar13 >> 8);
  uVar51 = (ushort)(byte)(bVar2 << 1) * (ushort)bVar26;
  uVar4 = (ushort)(uVar49 << ((byte)uVar20 & 0x1f));
  uVar38 = uVar4 ^ (ushort)(uVar51 == uVar4) * (uVar4 ^ (ushort)uVar20);
  uVar19 = uVar19 | (ushort)(uVar51 ^ (ushort)(uVar51 == uVar4) * (uVar51 & uVar38));
  uVar46 = ((ulong)uVar36 & 0x7f) << 1 | 1;
  if ((short)(uVar51 - uVar4) < 0) {
    uVar32 = uVar29 & 0xffffffff | (ulong)bVar54;
  }
  bVar55 = (uVar17 >> (uVar17 & 0xf) & 1) != 0;
  uVar50 = (ulong)uVar19 - 0x5d46dd1d;
  uVar49 = (int)uVar50 - (uint)bVar55;
  if ('\0' < (char)((ulong)uVar38 >> 8)) {
    uVar49 = uVar49 & 0xffff0000 | (uint)CONCAT71((int7)(int3)(uVar13 >> 8),bVar3) & 0xffff;
  }
  iVar9 = (int)((uVar14 & 0xffffffffffff0000 |
                (ulong)(ushort)(((ushort)uVar14 & 0xff00 |
                                (ushort)(byte)(((SBORROW1(bVar21,'3') != false) ==
                                               (char)(bVar21 - 0x33) < '\0') << 1)) << 1)) >> 1);
  uVar14 = uVar20 - 1 | 0x4ef9e65e;
  uVar49 = (uVar49 & 0xffff0000 | (uint)(((ushort)uVar49 ^ (ushort)uVar46) & 0xff7f)) + 0xba65582b;
  bVar2 = (byte)uVar49;
  uVar52 = (char)uVar45 + iVar9 +
           ((uint)uVar42 | (uint)uVar16 & 0xffffff00 |
           (uint)(byte)((char)uVar16 << 1 | (uVar19 < 0x5d46dd1d || uVar50 < bVar55))) + 2;
  uVar32 = uVar32 ^ 0x25e5;
  bVar21 = (char)(bVar26 + 0x6d) >> 1;
  uVar20 = 1 << (uVar30 & 0x3f) & 0xffU |
           (ulong)((uint7)(uVar14 >> 8) & 0xffffffffffff00 |
                  (uint7)(byte)((ushort)((short)uVar14 + -0x50e) >> 8)) << 8;
  uVar16 = -((short)CONCAT31((uint3)(uVar24 >> 0x16),
                             bVar23 << (bVar33 & 7) | bVar23 >> 8 - (bVar33 & 7)) + sVar18);
  uVar50 = (ulong)((uint)uVar29 & 0xffff0000 | (uint)uVar29 & 0xc3f3 | (uint)bVar54);
  uVar14 = (long)(int)(uVar49 & 0xffffff00 |
                      (uint)(byte)(bVar2 ^ (bVar2 == (byte)uVar38) * (bVar2 & (byte)uVar38))) *
           (long)(int)uVar46;
  uVar19 = (uint)(uVar14 >> 0x20);
  lVar37 = uVar20 + uVar50;
  uVar29 = uVar20;
  if (CARRY8(uVar20,uVar50) || lVar37 == 0) {
    uVar29 = uVar30;
  }
  bVar2 = (byte)lVar37 & 7;
  uVar45 = uVar52 + (int)uVar46;
  uVar49 = (uint)!CARRY8((ulong)uVar52,uVar46);
  uVar52 = uVar19 - uVar45;
  if ((uVar19 < uVar45 || uVar52 < uVar49) || uVar52 == uVar49) {
    uVar16 = (ushort)uVar32;
  }
  uVar30 = (ulong)((int)lVar37 - uVar48) & 0xffffffffffffff0f;
  bVar33 = (byte)uVar30;
  uVar17 = (ushort)(uVar32 * 2);
  uVar31 = (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
           (ulong)(ushort)(((ushort)(uVar42 >> 0x38) | (ushort)(uVar42 >> 0x28) & 0xff00) >> bVar33
                          | uVar17 << 0x10 - bVar33);
  uVar49 = (uint)(uVar29 >> 1);
  uVar19 = (uint)(ushort)uVar14 * (uint)uVar16;
  uVar14 = uVar14 & 0xffff0000 | (ulong)(ushort)uVar19;
  uVar45 = (uint)uVar31;
  uVar47 = iVar9 + -0x4a0784fd + (uint)(0x60e0526e < uVar49);
  lVar37 = CONCAT62((int6)(short)(uVar13 >> 0x10),
                    CONCAT11(bVar21 >> bVar2 | bVar21 << 8 - bVar2,bVar3 << 1)) + 0x24d0a6d1;
  uVar51 = (short)(ushort)uVar46 >> bVar33;
  bVar3 = (byte)(uVar19 >> 0x10);
  bVar21 = (byte)((ulong)lVar37 >> 8);
  bVar2 = bVar21 + bVar3;
  cVar15 = bVar2 + 1;
  uVar29 = (ulong)uVar51 << 0x19;
  uVar42 = (ulong)(CONCAT18((uVar19 & 0x100) != 0,uVar14) >> 0x13) | uVar14 << 0x2e;
  uVar52 = (uint)uVar30;
  bVar2 = (char)uVar47 + ((CARRY1(bVar21,bVar3) || 0xfe < bVar2) || cVar15 == '\0');
  uVar4 = (short)uVar16 >> 1;
  uVar19 = CONCAT22((short)uVar16 >> 0xf,uVar4);
  uVar14 = ((ulong)(((uVar49 & 0xff) >> bVar33 | uVar45 << 0x20 - bVar33) & 0xfbffffff) - 0x453f12c7
           ) + uVar32 * 0x10;
  uVar49 = (int)CONCAT61((int6)((ulong)lVar37 >> 0x10),cVar15) << 8 | 1 << ((uint)uVar51 & 0x1f);
  if ((bVar2 & 0x46) != 0) {
    uVar49 = uVar19;
  }
  uVar13 = uVar14 ^ (ulong)(uVar42 == uVar14) * (uVar14 ^ (ushort)(uVar6 * 0x800));
  uVar14 = (ulong)(uVar42 == uVar14) * (uVar42 & uVar13);
  uVar42 = uVar42 ^ uVar14;
  uVar40 = ((uVar36 << 1 | 1) + (int)uVar20) - 1;
  uVar36 = 0;
  if (uVar19 != 0) {
    while ((uVar19 >> uVar36 & 1) == 0) {
      uVar36 = uVar36 + 1;
    }
  }
  bVar3 = (byte)(uVar29 >> 0x1d);
  iVar9 = (uVar49 & 0xffffff00 | (uint)uVar13 & 0xff) + 0x85d3bda5 + (uint)(bVar3 & 1);
  iVar12 = (int)(uVar45 + uVar48 * 2) >> 1;
  uVar16 = uVar17 >> 0xb & 1;
  uVar48 = iVar9 * 2;
  uVar24 = uVar48 | uVar16 != 0;
  uVar49 = (uVar47 & 0xffffff00 | (uint)bVar2) >> 1;
  cVar15 = (char)uVar4;
  uVar20 = (ulong)uVar36;
  if (SBORROW1(cVar15,-0x34) != false) {
    uVar20 = (ulong)(uVar36 & 0xffff0000 | (uint)uVar4);
    uVar13 = (ulong)uVar36;
  }
  sVar28 = (short)(uVar14 >> 0x10);
  uVar36 = (int)CONCAT11(-1 < (int)(uVar52 & 0xffffff00 | 0x10000 |
                                   (uint)(byte)(bVar33 | (byte)(uVar42 >> 8))),(char)uVar42) *
           (int)(short)uVar49;
  uVar6 = (ushort)(uVar36 >> 0x10);
  uVar47 = (uint)uVar13 & 0xffff0000;
  bVar2 = (byte)uVar36;
  uVar51 = (ushort)uVar36 & 0xff | (ushort)(byte)((char)(uVar36 >> 8) + 9) << 8;
  uVar41 = (uint)CONCAT62((int6)sVar28,uVar51);
  uVar7 = uVar49 ^ (uint)(uVar41 == uVar49) *
                   (uVar49 ^ (uVar19 & 0xffffff00 | (uint)(byte)(cVar15 + 0x34U)));
  uVar14 = (ulong)(iVar9 < 0) << 0x3f | (ulong)uVar7;
  uVar41 = uVar41 ^ (uint)(uVar41 == uVar49) * (uVar41 & uVar7);
  uVar14 = (ulong)((ushort)((ushort)(((uint)(uVar14 >> (bVar2 & 0x3f)) |
                                     (uint)(uVar14 << 0x40 - (bVar2 & 0x3f))) << (bVar2 & 0x1f)) |
                           (ushort)((uVar47 | uVar6) >> 0x20 - (bVar2 & 0x1f))) < uVar51) << 0x20 |
           uVar20 & 0xffffffffffffff64;
  uVar20 = uVar32 * 2 & 0xffffffffffff0000 | (ulong)(ushort)((uVar17 ^ uVar16 << 0xb) << 1 | 1) |
           0x20b8;
  bVar26 = (byte)((ulong)uVar24 >> 8);
  bVar21 = (byte)uVar24;
  uVar42 = (ulong)uVar6 & 0xffffffffffffffc8;
  bVar33 = (byte)uVar41;
  bVar23 = bVar21 ^ (bVar33 == bVar21) * (bVar21 ^ (byte)uVar42);
  uVar49 = -(uVar47 | (uint)uVar42);
  return (CONCAT44((undefined4)(sVar28 >> 0xf),uVar41) & 0xffffffffffffff00 |
         (ulong)(byte)(bVar33 ^ (bVar33 == bVar21) * (bVar33 & bVar23))) +
         (ulong)(uVar48 & 0xffff0000 |
                 (uint)CONCAT11(bVar26 << (bVar2 & 7) | bVar26 >> 8 - (bVar2 & 7),bVar21) &
                 0xffffff00 | (uint)bVar23) +
         ((ulong)(uVar52 | 0x10000) & 0xffffffffffff0000 | (ulong)bVar2 | 0x2e00) +
         (uVar13 & 0xffffffff00000000 | (ulong)uVar49 & 0xffffffffffff0000 |
         (ulong)(ushort)((short)uVar49 >> 0x10)) +
         CONCAT62((uint6)(ushort)((short)((ulong)-CONCAT71((uint7)(uVar29 >> 0x25),bVar3 >> 1) >>
                                         0x10) >> 6),0xddb9) +
         (ulong)((uVar36 & 0xffff ^ 0x84) >> 1 | iVar12 << 0x1f) * -0x49044844 +
         (ulong)CONCAT22((undefined2)((char)bVar2 >> 7),((short)(char)bVar2 << (bVar2 & 0x1f)) + 1)
         + (ulong)CONCAT31((uint3)(uVar31 >> 8) >> 0xc,(char)(uVar45 >> 0xc) << 2) +
         (ulong)(uVar40 & 0xffff0000 | (uint)(ushort)((short)uVar40 << 1)) + uVar20 +
         (ulong)(((uVar19 & 0xffffff00 | (uint)(byte)(cVar15 << (bVar2 & 0x1f))) << (bVar2 & 0x1f) |
                 (uint)uVar20 >> 0x20 - (bVar2 & 0x1f)) >> (bVar2 & 0x1f)) +
         (ulong)(uVar19 & 0xffffff00 | (uint)(byte)((char)(cVar15 + 0x34U) >> (bVar2 & 0x1f))) * 2 +
         (ulong)((uint)(uVar14 << (bVar2 & 0x1f)) | (uint)(uVar14 >> 0x21 - (bVar2 & 0x1f))) +
         (ulong)(iVar12 + 0x5c20cf71) + 0x13c9982e76a;
}



// WARNING: Removing unreachable block (ram,0x00407150)
// WARNING: Removing unreachable block (ram,0x00407089)
// WARNING: Removing unreachable block (ram,0x00407753)

long log_size_10_var_006(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  uint3 uVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  undefined uVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint6 uVar20;
  ulong uVar17;
  uint7 uVar19;
  undefined8 uVar18;
  sbyte sVar21;
  byte bVar22;
  ushort uVar23;
  byte bVar26;
  ushort uVar24;
  ulong uVar25;
  char cVar27;
  char cVar28;
  byte bVar29;
  ushort uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  ushort uVar38;
  uint uVar39;
  byte bVar40;
  ushort uVar41;
  uint uVar42;
  ulong uVar43;
  char cVar44;
  ulong uVar45;
  ushort uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  ushort uVar50;
  short sVar51;
  short sVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  ulong uVar56;
  long lVar57;
  byte bVar58;
  bool bVar59;
  bool bVar60;
  bool in_PF;
  bool bVar61;
  
  lVar15 = 0;
  while ((0x56a497da9a5610e4U >> lVar15 & 1) == 0) {
    lVar15 = lVar15 + 1;
  }
  uVar47 = (SUB164(ZEXT816(0x447bee4c2634519f) >> 0x19,0) & 0xffff0000 | 0x81) >> 1;
  uVar53 = -(uVar47 | 0x80000000) - 1;
  lVar15 = (ulong)(((uint)(((ulong)(((uint7)((ulong)lVar15 >> 10) ^ 0x198b4065d1c5f3) &
                                   0xffffffffffff00) & 0xffffff) << 8) | 0xb062) >> 1) - 0x50d2ba37;
  uVar16 = SEXT48((int)lVar15);
  uVar17 = 0x3f;
  if (uVar16 != 0) {
    while (uVar16 >> uVar17 == 0) {
      uVar17 = uVar17 - 1;
    }
  }
  cVar27 = (char)((ulong)lVar15 >> 8) >> 7;
  bVar9 = cVar27 * '\t' + 0x4e;
  uVar48 = 0;
  if ((int)cVar27 != 0) {
    while (((uint)(int)cVar27 >> uVar48 & 1) == 0) {
      uVar48 = uVar48 + 1;
    }
  }
  uVar50 = (ushort)uVar53 ^ 0x40da;
  uVar53 = uVar53 & 0xffff0000;
  uVar20 = SEXT26((short)((ulong)lVar15 >> 0x10));
  uVar37 = (uVar53 | uVar50) ^ 0x534a681c;
  uVar50 = (uVar50 >> 1 | (short)uVar48 << 0xf) ^ (ushort)uVar37;
  bVar10 = (bVar9 & 0x1f) % 0x11;
  bVar40 = bVar9 >> 2;
  uVar25 = (ulong)(byte)(bVar9 * '@' | bVar40) | 0xd34d0000;
  uVar13 = (uint)CONCAT62(uVar20,CONCAT11((char)(uVar16 >> 8) + '\x01',(char)lVar15)) & 0xffffff00 |
           (uint)(byte)((char)lVar15 >> 0xc);
  uVar31 = uVar37 + 0x7c777d95 + (int)uVar25 * 2;
  uVar42 = 0xdf4340da;
  if (in_PF) {
    uVar42 = (uint)uVar17;
  }
  iVar34 = (int)(((ulong)uVar48 & 0xffffffffffff0000 | 0x1820) >> 1) + -0x64427c7f;
  auVar3 = ZEXT116((uVar17 & 1) != 0) << 0x40 |
           ZEXT416(uVar53 | (ushort)(uVar50 << bVar10 | uVar50 >> 0x11 - bVar10));
  cVar44 = ((char)((short)uVar47 - 0xd91U >> 1) + 8U & 0xa4) - 8;
  uVar53 = ((uint)uVar17 & 0xffffff00 | (uint)(byte)((byte)uVar17 >> 1 | 0x80)) * -0x71ae25f5;
  uVar54 = uVar42 ^ (uint)(uVar13 == uVar42) * (uVar42 ^ 0x8c38f208);
  uVar13 = uVar13 ^ (uint)(uVar13 == uVar42) * (uVar13 & uVar54);
  uVar47 = (int)((uint)(byte)(0x93 - bVar9) | 0xe0001700) >> 0xe;
  uVar25 = (long)uVar25 >> 0x1f;
  uVar48 = uVar47 ^ (uint)(uVar13 == uVar47) * (uVar47 ^ uVar13);
  uVar13 = uVar13 ^ (uint)(uVar13 == uVar47) * (uVar13 & uVar48);
  bVar10 = (byte)uVar25;
  uVar47 = uVar37 << bVar10 | uVar37 >> 0x20 - bVar10;
  lVar15 = (ulong)(uint3)((uint)iVar34 >> 8) * 0x100;
  iVar14 = (int)(short)uVar13 * (int)(short)lVar15;
  auVar1 = ZEXT816((ulong)uVar47 | 0xc000000000000000);
  auVar2 = CONCAT88((ulong)(uVar31 & 0xffff0000 |
                           (uint)CONCAT11((char)((ulong)uVar31 >> 8) >> 1,(char)uVar31)) -
                    0x78d2ae45 & 0xffffffffffff0000 | (ulong)(ushort)((uint)iVar14 >> 0x10),
                    ((ulong)uVar20 & 0xffffffff0000) << 0x10 | (ulong)uVar13 & 0xffffffffffff0000 |
                    (ulong)(ushort)iVar14) & (undefined  [16])0xffffffffffffffff;
  uVar17 = SUB168(auVar2 / auVar1,0);
  uVar32 = SUB168(auVar2 % auVar1,0);
  uVar33 = uVar32 ^ (ulong)(uVar17 == uVar32) * (uVar32 ^ uVar25);
  uVar16 = uVar17 ^ (ulong)(uVar17 == uVar32) * (uVar17 & uVar33);
  if (!SBORROW8(uVar17,uVar32)) {
    uVar16 = 0;
  }
  bVar22 = (byte)uVar53;
  uVar53 = uVar53 & 0xffffff00 | (uint)(byte)(bVar22 >> bVar10 | bVar22 << 8 - bVar10);
  uVar37 = (uint)uVar33 | 0x54;
  uVar39 = uVar37 * 0xd968641;
  uVar13 = (uint)(uVar16 >> 0x38) | (uint)((uVar16 & 0xff000000000000) >> 0x28) |
           (uint)(uVar16 >> 0x18) & 0xff0000 | (uint)(uVar16 >> 8) & 0xff000000;
  uVar42 = uVar53 << bVar10 |
           (uint)(CONCAT14(((ushort)uVar25 >> ((ushort)uVar54 & 0xf) & 1) != 0,uVar53) >>
                 0x21 - bVar10);
  bVar22 = (byte)((ulong)uVar13 >> 8);
  uVar53 = (uint)(bVar10 < bVar22);
  uVar49 = (uint)lVar15;
  uVar31 = uVar13 + uVar49 + uVar53;
  uVar23 = (ushort)(byte)(bVar10 - bVar22) + 0x57c7 +
           (ushort)(CARRY4(uVar13,uVar49) || CARRY4(uVar13 + uVar49,uVar53));
  bVar10 = (byte)uVar23;
  uVar17 = ~(ulong)(byte)((char)((uVar16 & 0xff000000000000) >> 0x30) + 1);
  bVar22 = (byte)(uVar39 >> 0x10);
  uVar53 = uVar37 * -0x79bf0000 | uVar39 >> 0x10 & 0xffffff00 |
           (uint)(byte)(bVar22 << (bVar10 & 7) | bVar22 >> 8 - (bVar10 & 7));
  cVar7 = (char)((ulong)uVar23 >> 8);
  bVar22 = bVar10 & 0xf;
  uVar11 = (ushort)uVar17;
  cVar28 = (char)((ulong)(ushort)~((short)((uint)iVar34 >> 8) << 8) >> 8);
  uVar50 = 0;
  if ((short)cVar28 != 0) {
    while (((ushort)(short)cVar28 >> uVar50 & 1) == 0) {
      uVar50 = uVar50 + 1;
    }
  }
  uVar39 = CONCAT22((undefined2)(cVar28 >> 7),CONCAT11((char)((ulong)(uint)(int)cVar28 >> 8),cVar28)
                   ) ^ 64000;
  iVar14 = (uVar31 & 0xffff0000 | (uint)(ushort)((short)uVar31 << (bVar10 & 0x1f))) * uVar53;
  uVar41 = (short)uVar42 >> bVar22;
  uVar42 = uVar42 & 0xffff0000;
  uVar54 = uVar54 << bVar22 | uVar54 >> 0x20 - bVar22;
  uVar31 = (uint)uVar17 & 0xffff0000;
  uVar13 = (uint)(ushort)(uVar11 - 1);
  sVar52 = (short)((uint)iVar14 >> 0x10);
  uVar30 = sVar52 >> 0xf;
  uVar30 = uVar30 << bVar22 | uVar30 >> 0x10 - bVar22;
  cVar28 = (char)uVar30;
  bVar26 = cVar7 - cVar28;
  uVar37 = uVar39;
  if (bVar26 == 0 || cVar7 < cVar28) {
    uVar37 = uVar53 + 0x7c56e8d6;
  }
  uVar55 = uVar54 & 0xffff0000;
  uVar53 = uVar55 | uVar54 >> 1 & 0x7fff;
  uVar25 = (ulong)(uVar42 | (uint)uVar41 | 0xc0000000);
  uVar17 = CONCAT44(CONCAT22(sVar52 >> 0x1f,uVar30),iVar14) & 0x3fffffffffffffff;
  uVar16 = uVar17 / uVar25;
  sVar52 = (short)uVar16;
  uVar30 = sVar52 + 0x92df;
  if ((SBORROW2(sVar52,0x6d21) != false) != (short)uVar30 < 0) {
    uVar13 = uVar37 & 0xffff;
  }
  uVar48 = (uint)(ushort)(uVar23 & 0xf | (ushort)bVar26 << 8) |
           1 << ((uVar48 >> (bVar10 & 0x1f) |
                 ((uint)(byte)(cVar44 * '\x02' | cVar44 < '\0') | 0x8b8c2500) <<
                 0x20 - (bVar10 & 0x1f)) & 0x1f);
  lVar15 = 0x3f;
  iVar14 = 0x3f;
  if (uVar53 != 0) {
    while (iVar14 = (int)lVar15, uVar53 >> lVar15 == 0) {
      lVar15 = lVar15 + -1;
    }
  }
  bVar10 = (byte)uVar48;
  uVar23 = CONCAT11((char)((ulong)uVar48 >> 8) + -1,bVar10);
  uVar54 = (uint)(uVar17 % uVar25) ^
           1 << ((uint)(byte)((cVar27 * -0x80 | bVar9 >> 1) >> (bVar10 & 0x1f)) & 0x1f);
  uVar37 = uVar37 >> (bVar10 & 0x1f);
  lVar15 = (ulong)(uVar50 >> 1) << 0xc;
  uVar53 = uVar42 | (uint)uVar41 & 0xffffff00 | 0xc0000000 | (uint)(byte)((char)uVar41 << 1);
  sVar12 = (short)lVar15;
  uVar38 = sVar12 + 1;
  uVar42 = (uint)lVar15 & 0xffff0000 | (uint)uVar38;
  uVar17 = (ulong)uVar53 << (bVar10 & 0x3f) | (ulong)(uVar53 >> 0x40 - (bVar10 & 0x3f));
  uVar41 = uVar50 >> 2 | (short)iVar14 << 0xf;
  sVar52 = 0xf;
  uVar50 = (ushort)uVar54;
  if (uVar50 != 0) {
    while (uVar50 >> sVar52 == 0) {
      sVar52 = sVar52 + -1;
    }
  }
  uVar56 = CONCAT62((int6)(short)(SUB162((auVar3 >> bVar40) >> 0x10,0) |
                                 SUB162((auVar3 << 0x41 - bVar40) >> 0x10,0)),sVar52);
  uVar32 = (ulong)(uVar37 & 0xffff0000 | uVar37 >> 1 & 0x7fff);
  uVar32 = uVar32 & ~(1 << (uVar32 & 0x3f));
  uVar50 = (ushort)((char)uVar32 < '\0');
  uVar46 = uVar23 + 0x82fe;
  uVar24 = uVar46 - uVar50;
  uVar16 = (ulong)(uVar23 < 0x7d02 || uVar46 < uVar50) << 0x20 |
           uVar16 & 0xffff0000 | (ulong)uVar30 & 0xffffffffffffff00 |
           (ulong)(uVar38 != 0 && SCARRY2(sVar12,1) == (short)uVar38 < 0);
  uVar16 = (ulong)((uint)(uVar16 << 0xc) | (uint)(uVar16 >> 0x15));
  uVar37 = ~-uVar42;
  uVar54 = uVar54 * -0x106a8c05 ^ (uint)uVar41;
  uVar33 = uVar17 ^ (ulong)(uVar16 == uVar17) * (uVar17 ^ uVar54);
  uVar25 = uVar16 ^ (ulong)(uVar16 == uVar17) * (uVar16 & uVar33);
  uVar53 = (uint)uVar56;
  uVar13 = iVar14 + (uVar31 | uVar13) + 1;
  if ((long)uVar17 < (long)uVar16) {
    uVar13 = uVar53;
  }
  lVar15 = (uVar55 | 0xffff) + uVar25;
  bVar59 = (uVar13 & 1) != 0;
  iVar14 = (ushort)(0 << bVar22 | uVar11 >> 0x10 - bVar22) + uVar39 + 1;
  if (bVar59) {
    iVar14 = (int)uVar25;
  }
  bVar9 = ((byte)uVar24 & 0x1f) % 0x11;
  sVar52 = (short)uVar37;
  uVar50 = (ushort)(CONCAT12(bVar59,sVar52) >> bVar9) | sVar52 << 0x11 - bVar9;
  uVar37 = uVar37 & 0xffff0000;
  auVar1 = (ZEXT1216(CONCAT48(uVar54,uVar25)) & (undefined  [16])0xffffffffffffffff) /
           ZEXT816(uVar56 | 0xc000000000000000);
  uVar54 = iVar14 << 0x14 | (uint)uVar33 >> 0xc;
  uVar53 = uVar53 + 0xaa654822;
  sVar52 = (short)lVar15;
  uVar47 = (((ushort)((short)uVar47 + 1) + uVar49 + -0x59c1381) * 0x9300000 | uVar53 & 0xffff) + 1;
  bVar9 = SUB161(auVar1,0) | (byte)((ulong)uVar24 >> 8);
  uVar17 = (ulong)uVar48 & 0xffffffffffff0000 | (ulong)uVar24;
  if (bVar9 != 0) {
    uVar17 = (ulong)(uVar47 & 0xffff0000 |
                    (uint)(ushort)((ushort)uVar47 >> 0xd |
                                  ((ushort)(uVar32 & 0xffffffffffffff00) |
                                  (ushort)(byte)((char)uVar32 << 1 | uVar42 != 0)) << 3));
  }
  bVar10 = (byte)uVar17;
  uVar56 = lVar15 >> (bVar10 & 0x3f);
  uVar48 = (int)(uVar13 | 1) >> 0xc;
  bVar40 = (char)uVar33 + bVar10;
  uVar33 = uVar33 & 0xffffffffffffff00 | (ulong)bVar40;
  uVar25 = CONCAT71(SUB167(auVar1 >> 8,0),bVar9) * uVar33;
  uVar16 = (ulong)uVar48 << 1;
  uVar47 = CONCAT22(sVar52 >> 0xf,sVar52 << 1) | 1;
  uVar32 = uVar32 & 0xffffffffffff0000 |
           (ulong)(byte)(((char)((uVar32 & 0xffffffffffffff00) >> 8) - (byte)uVar25) -
                        ((byte)(uVar25 >> 8) < 0xcd)) << 8;
  lVar15 = 0x3f;
  uVar23 = 0x3f;
  if (uVar48 != 0) {
    while (uVar23 = (ushort)lVar15, uVar16 >> lVar15 == 0) {
      lVar15 = lVar15 + -1;
    }
  }
  uVar42 = ((uint)uVar32 & 0xffff0000 | (uint)(uVar32 >> 0xc) & 0xf) << (bVar10 & 0x1f) |
           uVar54 >> 0x20 - (bVar10 & 0x1f);
  uVar11 = (ushort)uVar42 >> 1;
  uVar48 = uVar42 & 0xffff0000;
  lVar15 = (uVar25 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar25 >> 1 | 0x80)) << 1;
  if (!SBORROW2((short)uVar53,-0x3025)) {
    uVar54 = uVar37 | uVar50;
  }
  sVar21 = (sbyte)(uVar17 & 0xffffffffffffbf0f);
  uVar53 = ((uint)(uVar17 & 0xffffffffffffbf0f) | 0x2d52679) - uVar53;
  uVar38 = (ushort)uVar33 & 0xff00 | (ushort)(byte)((char)bVar40 >> ((byte)uVar53 & 0x1f));
  lVar57 = (long)(uVar56 & 0xffffffffffffff00 | uVar56 >> 1 & 0x7f) >> 0x11;
  uVar13 = (uVar37 | (ushort)(uVar50 + 0x16e3)) + 0x3f;
  bVar9 = (byte)lVar15;
  bVar10 = (byte)((ulong)(uVar48 | (uint)(ushort)(uVar11 | (ushort)((uVar42 & 1) != 0) << 0xf) &
                                   0xffffff00) >> 8);
  uVar50 = CONCAT11(bVar10,(char)uVar11 + '\r');
  uVar19 = SEXT37((int3)((ulong)lVar15 >> 8));
  if (bVar9 <= bVar10) {
    uVar53 = uVar13;
  }
  uVar37 = (int)CONCAT62((uint6)(ushort)(uVar48 >> 0x10),0x2655) + 0xcb;
  uVar11 = 0x2655;
  if (bVar9 >= bVar10 &&
      (byte)((byte)(uVar23 >> sVar21) | (byte)((uVar41 + 0x1dcf >> 1) << 0x10 - sVar21)) != 0xff) {
    uVar11 = uVar50;
  }
  if ((uVar19 & 1) != 0) {
    uVar50 = (ushort)(CONCAT12(bVar9 < bVar10,uVar11) >> 0xe) | uVar11 << 3;
  }
  uVar49 = (((uint)uVar16 | 0x9d7f) << 1 | (uint)lVar57 >> 0x1f) - 1;
  sVar52 = (short)(uVar54 + 0x354b8e68);
  if (0x48da829f < uVar47) {
    uVar38 = (ushort)uVar13;
  }
  uVar16 = lVar57 + (ulong)(uVar48 | uVar50) + (ulong)(uVar47 < 0x48da82a0);
  uVar47 = uVar53 >> 0xb;
  cVar27 = (char)((ulong)((long)(int)CONCAT71(uVar19,bVar9 ^ (bVar9 == bVar10) * (bVar9 & bVar10)) *
                         0x1041) >> 0x28);
  uVar17 = (ulong)((uVar47 | uVar53 << 0x15) << 5);
  if (cVar27 != '\0') {
    uVar17 = uVar16;
  }
  uVar39 = uVar49 & 0xffffff00 | (uint)(byte)((char)uVar49 + (char)uVar38 + (cVar27 != '\0'));
  uVar23 = (short)uVar47 + 0xbf89;
  uVar25 = (ulong)(uVar47 & 0xffff0000 | uVar53 << 0x15 |
                  (uint)(ushort)(sVar52 << 1 | (ushort)(sVar52 < 0))) - (ulong)uVar39;
  uVar47 = (uint)(ushort)(uVar50 << ((byte)uVar25 & 0x1f));
  uVar53 = (uVar13 >> 1) << 0x1f;
  uVar55 = (uint)uVar16;
  sVar52 = (short)uVar39;
  uVar46 = sVar52 << 1 | (ushort)(sVar52 < 0);
  uVar13 = uVar49 & 0xffff0000 | (uint)uVar46;
  uVar16 = (ulong)uVar13 * 0xec00;
  cVar27 = (char)(uVar16 >> 8);
  bVar9 = (char)((uVar48 | uVar47) >> 1) + 0x8d;
  uVar33 = (ulong)((uVar48 | uVar47 & 0xfffffe00) >> 1 | uVar53 | (uint)bVar9);
  iVar34 = (uVar55 << 10 | uVar55 >> 0x16) << 4;
  uVar17 = (long)((int)CONCAT71((uint7)(uVar17 >> 8) & 0xffffffffffff00 | (uint7)(byte)(uVar38 >> 8)
                                ,1) + 0x55073a79) * 0x286d2712;
  uVar32 = uVar17 & 0xffffffff;
  iVar14 = (int)(uVar17 >> 0x20);
  iVar14 = CONCAT31((uint3)(uVar13 >> 0x1f),iVar14 != 0 && iVar14 != -1);
  bVar59 = (uVar16 & 0x400) != 0;
  uVar48 = iVar34 >> 0x1d;
  uVar38 = (ushort)(iVar34 >> 0x1d);
  uVar11 = (uVar23 & 0xff) + 0xe53 & 0xff00;
  uVar41 = (ushort)(SCARRY4(iVar14,0x64ebf2cd) != SCARRY4(iVar14 + 0x64ebf2cd,1));
  uVar47 = 0x1f;
  while (0x953f8402U >> uVar47 == 0) {
    uVar47 = uVar47 - 1;
  }
  uVar17 = (ulong)(ushort)((short)uVar25 + 0x1fcc) & 0xffffffffffffff0f;
  uVar16 = uVar25 & 0xffffffffffff0000 | uVar17;
  sVar21 = (sbyte)uVar17;
  uVar19 = (uint7)(((ulong)(byte)(uVar31 >> 0x18) << 0x2e) >> 0x17);
  bVar61 = (char)(cVar27 + '\x01') < '\0';
  uVar17 = uVar32;
  if (SCARRY1(cVar27,'\x01') != bVar61) {
    uVar17 = uVar16;
  }
  lVar15 = CONCAT71(0x953f84,((byte)uVar17 ^ (uVar17 == 0) * ((byte)uVar17 ^ bVar9)) + 2);
  bVar9 = (byte)(uVar16 >> 1);
  uVar17 = uVar33 << 0x40 - (bVar9 & 0x3f);
  if (bVar59) {
    uVar33 = (ulong)((uVar42 & 0xfffe0000) >> 1 | uVar53 | (uint)(uVar11 | uVar41));
  }
  lVar57 = (ulong)((int)CONCAT71(uVar19,bVar61) + 0xb7) * lVar15;
  uVar16 = (ulong)(ushort)((ushort)uVar33 >> 1 | 0x8000);
  uVar25 = uVar33 & 0xffffffffffff0000 | uVar16;
  uVar53 = (uint)lVar57;
  if ((int)(((uint)((ulong)lVar57 >> 0x21) | uVar48 << 0x1f) - 1) < 0) {
    uVar53 = iVar14 + 0x64ebf2ceU & 0xffff0000 |
             (uint)(ushort)~((short)(iVar14 + 0x64ebf2ceU) << sVar21 |
                            (ushort)uVar32 >> 0x10 - sVar21);
  }
  uVar53 = uVar53 * ((uVar54 + 0x354b8e68 & 0xffff0000 | (uint)uVar23) + 0xc5d86109 & 0xffff0000 |
                    (uint)(ushort)(uVar41 << 9 | uVar11 >> 7));
  bVar10 = (byte)uVar53;
  bVar60 = 0x27 < bVar10 || 0xfe < (byte)(bVar10 - 0x28);
  cVar44 = bVar10 - 0x27;
  cVar27 = (char)((ulong)uVar53 >> 8);
  uVar17 = (uVar49 & 0xffff0000 | (uint)(uVar46 | uVar38)) >> (bVar9 & 0x3f) | uVar17;
  if (cVar44 != '\0' && (SCARRY1(bVar10,-0x28) != SCARRY1(bVar10 - 0x28,'\x01')) == cVar44 < '\0') {
    uVar17 = uVar25;
  }
  iVar14 = 0;
  sVar52 = 0;
  if ((uint)uVar17 != 0) {
    while (sVar52 = (short)iVar14, ((uint)uVar17 >> iVar14 & 1) == 0) {
      iVar14 = iVar14 + 1;
    }
  }
  uVar17 = uVar17 << 4 | uVar17 >> 0x3c;
  iVar34 = (int)(short)uVar17;
  uVar31 = (uint)uVar17;
  uVar17 = (long)(int)uVar31 * -0x118fc552;
  uVar32 = uVar17 & 0xffffffff;
  iVar14 = (int)(uVar17 >> 0x20);
  bVar10 = (byte)uVar32 & 0x3f;
  auVar1 = ZEXT116(iVar14 != 0 && iVar14 != -1) << 0x40 |
           ZEXT416((uVar47 & 0xfff00000) >> 4 | 0xf0000000 |
                   (uint)(ushort)((short)((uVar47 & 0xffff0000 |
                                          (uint)(ushort)(0 << (bVar9 & 0x1f)) & 0xffff68e5) >> 4) +
                                 1));
  uVar33 = SUB168(auVar1 << bVar10,0) | SUB168(auVar1 >> 0x41 - bVar10,0);
  uVar23 = (ushort)uVar32 >> 1 & 0xff;
  uVar11 = uVar23 | (ushort)!bVar59 << 8;
  bVar10 = (byte)uVar23;
  cVar44 = cVar44 << (bVar10 & 0x1f);
  bVar40 = cVar27 >> 7 | (byte)((ulong)uVar11 >> 8);
  iVar14 = (int)uVar25;
  uVar42 = (int)CONCAT71(uVar19,bVar61 << 1) - iVar14;
  uVar47 = (uint)(CONCAT14(1,iVar34) >> 0x16);
  bVar10 = bVar10 & 0x3f;
  uVar17 = (ulong)(uVar42 >> bVar10) | (ulong)uVar42 << 0x40 - bVar10;
  uVar48 = uVar48 & 0xffff0000 |
           (uint)(ushort)((uVar38 & 0xff00 | (ushort)(((uint)(uVar38 | 1) & 0xfe) >> 1)) + 1);
  uVar13 = (uint)CONCAT62(0x953f,(short)lVar15 << bVar60 |
                                 ((short)((uVar37 & 0xffff0000 |
                                          (uint)(ushort)(((short)uVar37 - uVar50) - 1)) >> 1) +
                                  0xbfU >> (bVar9 & 0x1f)) >> 0x10 - bVar60) &
           ~(1 << ((uint)uVar11 & 0x1f));
  uVar32 = (ulong)uVar53 & 0xffffffffffff0000;
  uVar25 = (ulong)CONCAT11(cVar27 * '\x02',cVar44);
  bVar9 = (byte)uVar47;
  uVar17 = (uVar17 & 0xffffffffffff0000 | uVar17 >> 1 & 0x7fff) >> 1;
  uVar16 = uVar16 & 0xff;
  uVar37 = iVar14 << (bVar9 & 0x1f) | uVar48 >> 0x20 - (bVar9 & 0x1f);
  uVar23 = CONCAT11((char)((ulong)CONCAT11(cVar27 >> 0xf,bVar40) >> 8) << 1,bVar40) * -0xf29;
  uVar31 = uVar31 | uVar48;
  uVar33 = uVar33 ^ (uVar33 >> 0x3b & 1) << 0x3b;
  uVar53 = uVar31 & 0xffff0000;
  uVar42 = uVar53 | (ushort)((short)uVar17 << 8) | (uint)(byte)(((char)(uVar31 >> 8) - cVar44) - 1);
  uVar50 = sVar52 + 0x970eU & 0x7fff | 0x8000;
  if ((uVar23 & 0xe73f) == 0 || (short)uVar23 < 0) {
    uVar50 = CONCAT11(0x23,bVar9);
  }
  uVar56 = (ulong)uVar48 | uVar32 | uVar25;
  uVar25 = uVar32 | uVar25 & 0xffffffffffffff00 | (ulong)(byte)(cVar44 - 0x24);
  uVar48 = (uint)uVar17;
  uVar48 = uVar48 << 0xd | uVar48 >> 0x13;
  uVar32 = uVar33 >> 1;
  uVar17 = 0;
  if (uVar42 != 0) {
    while ((uVar42 >> uVar17 & 1) == 0) {
      uVar17 = uVar17 + 1;
    }
  }
  sVar52 = uVar50 - (short)(uVar16 >> 1);
  uVar13 = (uVar37 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar37 & 0xff00 |
                          (ushort)(byte)((byte)uVar37 >> 7 | (byte)uVar37 << 2)) + 0x7f6b)) -
           ((uVar13 & 0xffffff00 | (uint)(byte)((char)uVar13 << 1) | 1) + 0xc6578433);
  uVar36 = uVar56 << 0x22;
  uVar43 = uVar17 ^ (ulong)(uVar25 == uVar17) * (uVar17 ^ 0xbd1e75aeeeaf2bd3);
  uVar25 = uVar25 ^ (ulong)(uVar25 == uVar17) * (uVar25 & uVar43);
  uVar35 = uVar25 & 0xffffffffffff0000;
  uVar23 = (short)uVar42 - CONCAT11(0x23,bVar9);
  sVar12 = (short)(uVar35 >> 0x10);
  uVar56 = (uVar36 >> 0x24 | (uVar56 >> 0x1e | uVar36) << 0x1c) - (ulong)(uVar53 | (uint)uVar23);
  uVar17 = (ulong)(uVar47 | iVar34 << 0xb) << 1;
  uVar31 = (uint)CONCAT62((uint6)(ushort)(sVar12 >> 0x1f),0xc126);
  uVar47 = uVar48 + uVar31;
  bVar10 = (bVar9 - 0x3f & 0x1f) % 0x11;
  sVar51 = (short)(uVar16 >> 2);
  uVar50 = (short)uVar25 + 0xa875;
  bVar9 = (char)uVar47 + (char)sVar52 + -1;
  uVar42 = uVar47 & 0xffffff00 | (uint)bVar9;
  uVar16 = (ulong)(ushort)(sVar51 << bVar10 |
                          (ushort)(CONCAT12(CARRY4(uVar48,uVar31),sVar51) >> 0x11 - bVar10));
  if (bVar9 != 0) {
    uVar16 = uVar32;
  }
  uVar11 = (sVar52 + -0x6947) - (ushort)((uVar13 >> 7 & 1) != 0);
  if (!SBORROW2((short)uVar42,uVar50)) {
    uVar13 = ((uint)uVar43 & 0xffff0000 | (uint)(ushort)((short)uVar43 << 1)) & (uint)uVar56 &
             0xffff8294;
  }
  sVar52 = (short)uVar17;
  uVar41 = sVar52 << 1;
  lVar15 = (uVar16 - (uVar17 & 0xffffffffffff0000 | (ulong)uVar41)) - (ulong)(sVar52 < 0);
  uVar19 = (uint7)(uint3)((int3)((uint3)(uVar35 >> 8) | (uint3)((ulong)uVar11 >> 8)) >> 0x1f) &
           0xffffffffffff00;
  uVar48 = (uint)(uVar41 | 0xc000);
  uVar31 = CONCAT22(sVar12 >> 0xf,uVar11) & 0x3fffffff;
  sVar12 = (short)(uVar31 / uVar48);
  uVar11 = (ushort)((byte)uVar56 < 0xe6);
  sVar52 = sVar12 + (short)uVar13;
  uVar41 = sVar52 + uVar11;
  uVar53 = uVar53 | (uint)uVar23 & 0xffffff00;
  uVar17 = -(uVar16 & 0xffffffff);
  if ((uVar16 & 0xffffffff) != 0) {
    uVar42 = uVar47 & 0xffff0000 | (uint)(ushort)uVar17;
  }
  uVar54 = (uint)lVar15;
  uVar47 = ((uint)uVar35 | (uint)uVar41) + uVar54;
  bVar9 = (byte)(uVar17 & 0xffffffffffffff0f);
  bVar9 = bVar9 ^ ((byte)uVar47 == bVar9) *
                  (bVar9 ^ ((byte)(uVar23 << bVar9) |
                           (byte)((ushort)(uVar17 & 0xffffffffffffff0f) >> 0x10 - bVar9)));
  uVar18 = CONCAT71((uint7)(uint3)(uVar47 >> 8),1);
  uVar37 = ((int)register0x00000020 - 0x68U | 1 << ((uint)uVar30 & 0x1f)) + 1 + (int)uVar18 * 4;
  uVar23 = 0xf;
  uVar30 = (ushort)lVar15;
  if (uVar30 != 0) {
    while (uVar30 >> uVar23 == 0) {
      uVar23 = uVar23 - 1;
    }
  }
  uVar49 = (int)uVar13 >> (bVar9 & 0x1f);
  uVar11 = ((short)uVar18 -
           (short)CONCAT71(uVar19 | (byte)(uVar31 % uVar48 >> 8),
                           ((SCARRY2(sVar12,(short)uVar13) == SCARRY2(sVar52,uVar11)) - (char)uVar17
                           ) + -1)) - 1;
  bVar9 = bVar9 - (char)(uVar11 >> 8);
  if ((uVar53 | uVar41 == 0) != uVar37) {
    uVar49 = uVar49 & 0xffff0000 | (uint)uVar50;
  }
  uVar48 = (uint)uVar11 * (uVar42 & 0xffff);
  uVar50 = (ushort)(uVar48 >> 0x10);
  uVar36 = CONCAT62((int6)(uVar19 >> 8),uVar50);
  uVar16 = ~(ulong)(uVar47 & 0xffff0000 | uVar48 & 0xffff);
  uVar47 = (uVar53 | (byte)~(uVar41 == 0)) + 0x9134a71d;
  uVar25 = (ulong)uVar37 & 0xff |
           (ulong)((uint7)(uVar16 >> 8) & 0xffffffffffff00 |
                  (uint7)(byte)((ushort)(byte)uVar16 * (ushort)(byte)uVar37 >> 8)) << 8;
  uVar16 = (ulong)~(uVar49 & 0xffff0000 |
                   (uint)(ushort)((ushort)uVar49 >> 0xf | (ushort)uVar49 << 1));
  uVar35 = (ulong)uVar37 ^ 1 << (((ulong)uVar50 & 0x7e) >> 1);
  uVar43 = uVar16 ^ (ulong)(uVar25 == uVar16) * (uVar16 ^ uVar36 >> 1);
  uVar37 = (uint)uVar43;
  uVar25 = uVar25 ^ (ulong)(uVar25 == uVar16) * (uVar25 & uVar43);
  uVar16 = uVar35 & 0xffffffffffffff00;
  uVar36 = uVar36 & 0xffffffffffff7500 | uVar25 & 0xff;
  uVar17 = (ulong)(uint)((int)((uint)uVar17 & 0xffffff00 | (uint)(byte)((char)bVar9 >> 1)) >>
                        ((char)bVar9 >> 1 & 0x1fU)) & 0xffffffffffffff0f;
  sVar21 = (sbyte)uVar17;
  uVar13 = ~((uint)uVar36 & 0xffff0000 |
            (uint)(ushort)((short)uVar36 << sVar21 |
                          ((ushort)((uVar56 & 0xffffffffffffff00 |
                                    (ulong)(byte)((byte)uVar56 + 0x1a)) << 1) >> (bVar9 & 0x1f) &
                          0xefff) >> 0x10 - sVar21));
  bVar10 = (byte)((uint)uVar17 >> 0x11);
  uVar17 = (long)(char)uVar42 + 0x397c41c8;
  uVar50 = (ushort)((CONCAT44((uint)(uVar33 >> 0x21),(int)uVar32 + 1) & 0xffffffffffff0000 |
                    (ulong)uVar23) >> (bVar9 & 0x3f));
  uVar31 = uVar13 + uVar47;
  bVar9 = bVar10 - 1;
  uVar53 = ((uint)CONCAT71(0x711b02,!SCARRY1((char)uVar25,
                                             (char)(uVar48 >> 0x10) + (char)((uVar54 >> 5) << 1))) &
           0xffff) + 0x6b83909a;
  iVar14 = (int)((uVar35 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar16 >> 7)) <<
                (bVar10 & 0x3f)) + -0x6db0dc5;
  if (-1 < iVar14) {
    uVar17 = (ulong)(uVar42 & 0xffff0000 | (uint)(ushort)((short)uVar42 * -0x3e0d));
  }
  uVar11 = CONCAT11((char)((ulong)(uVar31 & 0xffffff00) >> 8) + (char)iVar14,
                    (byte)uVar31 >> 1 | CARRY4(uVar13,uVar47) << 7);
  uVar23 = (short)uVar53 -
           ((ushort)(uVar54 ^ 0xa848bf4a) & 0xff00 |
           (ushort)((byte)((char)((byte)(uVar54 ^ 0xa848bf4a) >> 1 | 0x80) >> 1) >> (bVar9 & 0x1f)))
  ;
  uVar53 = uVar53 & 0xffff0000;
  uVar47 = uVar53 | uVar23;
  if (-1 < (short)uVar23) {
    uVar37 = uVar37 & 0xffff0000 |
             (uint)(ushort)(uVar50 << (bVar10 & 0xf) | uVar50 >> 0x10 - (bVar10 & 0xf));
  }
  uVar30 = uVar11 * -0x5496;
  uVar25 = (ulong)(uVar37 + 0x9e6788af & 0xffff0000 |
                  (uint)(ushort)((ushort)(uVar37 + 0x9e6788af) ^ 0xdd4a));
  uVar50 = (ushort)(byte)(bVar9 >> 3 | bVar9 * ' ' | 0xc0);
  uVar23 = 0x1e5f / uVar50 & 0xff;
  uVar50 = uVar23 | 0x1e5fU % uVar50 << 8;
  if (bVar59) {
    uVar11 = uVar30;
  }
  bVar9 = bVar9 >> 3 | bVar9 * ' ' & 0x3f;
  uVar36 = (ulong)((uVar31 & 0xffff0000 | (uint)uVar11) >> bVar9) |
           ((ulong)uVar50 | 0xfffffffff8400000) << 0x40 - bVar9;
  uVar32 = (ulong)(uint)(int)(short)uVar50;
  iVar14 = (int)uVar17 << 2;
  uVar50 = (ushort)iVar14;
  bVar9 = (byte)(uVar25 & 0xffffffffffff4a3a);
  uVar33 = (ulong)CONCAT11(-(char)((uVar25 & 0xffffffffffff4a3a) >> 8),bVar9);
  uVar56 = uVar25 & 0xffffffffffff0000 | uVar33;
  uVar48 = CONCAT22(0x14c1,(ushort)CONCAT31(0x14c172,!bVar59) >> 1);
  uVar42 = 0;
  if (bVar59) {
    uVar42 = uVar48;
  }
  bVar40 = (byte)(uVar32 >> 8);
  uVar43 = (ulong)(uVar48 << 0xf | (uint)uVar56 >> 0x11);
  uVar11 = uVar50 >> 0xb | 0xa0;
  uVar35 = (ulong)(long)(short)uVar30 >> (bVar40 & 0x3f) |
           (long)(short)uVar30 << 0x40 - (bVar40 & 0x3f);
  uVar25 = (uVar25 & 0x4a3a) << (bVar40 & 0x3f) | uVar56 >> 0x40 - (bVar40 & 0x3f);
  bVar22 = (byte)(uVar33 >> 8);
  bVar10 = (byte)uVar23 | bVar22;
  uVar48 = (uint)((long)uVar17 >> (bVar40 & 0x3f)) & 0xffffff00;
  if (-1 < (char)bVar10) {
    uVar48 = (int)uVar16 << 0xf | (uint)(ushort)(short)(char)bVar40;
  }
  uVar41 = uVar11 | 1 << ((ushort)bVar9 & 0xf);
  bVar40 = bVar40 + (char)uVar41;
  bVar26 = (bVar40 & 3) << 2 | (byte)(uVar25 >> 8) >> 6;
  uVar33 = uVar25 & 0xffffffffffff0000 | uVar25 >> 1 & 0x7fff;
  uVar30 = ((ushort)bVar10 | 0x100) << bVar26 | (ushort)((int)uVar53 >> 0x15) >> 0x10 - bVar26;
  uVar23 = uVar30 << 1;
  uVar23 = uVar23 & 0xff00 |
           (ushort)(byte)((byte)((uVar23 & 0xff | (ushort)(bVar22 < bVar9) << 8) >> 7) |
                         ((byte)uVar23 | (short)uVar30 < 0) << 2);
  uVar17 = uVar32 & 0xffffffffffff0000 | 0xffffffff00000000 |
           (ulong)(ushort)((CONCAT22(CONCAT11((byte)((ulong)CONCAT11(bVar22 - bVar9,bVar9) >> 8) >>
                                              1,bVar9),uVar23) & 0x3fffffff | 0xc000) /
                          (uint)(uVar23 | 0xc000));
  lVar15 = ((uVar17 ^ (ulong)(uVar17 == uVar43) *
                      (uVar17 & (uVar43 ^ (ulong)(uVar17 == uVar43) * (uVar43 ^ uVar35)))) &
           0xffffffff) * (ulong)((uint)uVar41 & 0xffffffdf | 0x928b0000);
  uVar4 = CONCAT12((int)((ulong)lVar15 >> 0x20) != 0,0xcc5 << bVar26 | 0xcc5U >> 0x10 - bVar26) >> 1
  ;
  uVar53 = (uint)(ushort)uVar4;
  bVar10 = (byte)uVar35;
  uVar16 = uVar35 & 0xffffffffffffff00 | (ulong)(byte)(bVar10 + (char)((int)uVar47 >> 0x15));
  uVar37 = uVar53 & 0xff;
  uVar13 = (uint)(uint3)((ulong)lVar15 >> 0x28) << 8;
  uVar31 = (uint)(byte)((char)uVar4 + (char)((ulong)lVar15 >> 0x20));
  uVar17 = (ulong)((int)lVar15 + 0x1858ab2a) << 1;
  uVar54 = (uVar48 >> 1 & 0xffffff00 | (uint)(byte)((char)uVar36 + 1) << 0x1f |
           (uint)(byte)(CONCAT11((uVar11 >> ((ushort)bVar9 & 0xf) & 1) != 0,(char)(uVar48 >> 1)) >>
                       1)) + 0x833ea67;
  uVar48 = (uint)CONCAT71((uint7)(uint3)(uVar42 >> 8) & 0xffffffffffff00 |
                          (uint7)(byte)((char)((ulong)uVar42 >> 8) >> 1),-1 < (char)bVar40) &
           ~(1 << (uVar31 & 0x1f));
  if (SBORROW4((int)uVar16,-0x695efcfb)) {
    uVar48 = uVar53 & 0xffffff00 | 0xee000000 | uVar31;
  }
  uVar11 = (ushort)uVar54;
  uVar42 = ((uint)uVar36 & 0xffffff00 | (uint)(byte)((char)uVar25 + 0x21)) >> 1;
  uVar23 = (ushort)((uVar37 | uVar13) >> 2) >> 0xb | (uVar11 & 7) << 5;
  bVar9 = (byte)uVar17 & bVar10;
  uVar25 = uVar17 & 0xffffffffffffff00 | (ulong)bVar9;
  uVar53 = 0x1f;
  uVar31 = (uint)uVar25;
  if (uVar31 != 0) {
    while (uVar31 >> uVar53 == 0) {
      uVar53 = uVar53 - 1;
    }
  }
  uVar56 = (ulong)uVar42 | 0xe814;
  bVar59 = -1 < (short)((ushort)uVar42 | 0xe814);
  uVar32 = uVar33;
  if (bVar59) {
    uVar32 = uVar25;
  }
  bVar40 = (byte)((uVar17 & 0xffffffffffffff00) >> 8) | (byte)uVar23;
  uVar48 = uVar48 << 8 | uVar48 >> 0x18;
  bVar22 = (byte)(uVar53 & 0xffff00ff);
  bVar26 = 0xb0U >> (bVar22 & 0x1f) ^ bVar22;
  uVar36 = CONCAT62(SUB166((ZEXT416(0xad806464) << 0x1e) >> 0x10,0),
                    (ushort)(byte)(((char)bVar40 < '\0') >> (bVar22 & 0x1f)));
  uVar25 = uVar33 + CONCAT31((int3)((int)uVar47 >> 0x1d),bVar10) >> 0x2e;
  uVar30 = (short)(uVar53 & 0xffff00ff) + 1;
  uVar47 = CONCAT31((uint3)((uint)iVar14 >> 8) & 0xffff00 | (uint3)(byte)(((uVar50 | 1) << 1) >> 8),
                    bVar59) >> 1;
  bVar59 = (uVar17 & 0xffffffffffff0000 | (ulong)CONCAT11(bVar40,bVar9)) == uVar36;
  uVar36 = uVar36 ^ (ulong)bVar59 * (uVar36 ^ uVar47);
  bVar40 = (byte)uVar30;
  bVar10 = bVar40 & 0x1f;
  uVar42 = (uint)uVar36;
  uVar42 = uVar42 << bVar10 | uVar42 >> 0x20 - bVar10;
  lVar15 = 0;
  iVar14 = 0;
  if (uVar56 != 0) {
    while (iVar14 = (int)lVar15, (uVar56 >> lVar15 & 1) == 0) {
      lVar15 = lVar15 + 1;
    }
  }
  if (uVar56 == 0) {
    uVar32 = uVar16 << 0x15 | uVar35 >> 0x2b;
  }
  bVar40 = bVar40 << 1;
  uVar31 = uVar53 & 0xffff0000 | (uint)uVar30 & 0xffffff00 | 0x400000 | (uint)bVar40;
  uVar42 = (uVar42 & 0xff00) << 8 | uVar42 << 0x18;
  uVar50 = (short)((long)(ulong)(uint)(int)(short)((ushort)(byte)(bVar9 ^ bVar59 * (bVar9 & (byte)
                                                  uVar36)) * 0x50) >> 1) << (bVar40 & 0x1f);
  auVar1 = ZEXT416(uVar47 * 9 + 0x1a) *
           ZEXT416(((uint)uVar23 << 0x17 | ((uVar13 & 0xfffc0000) >> 2 | uVar37 << 0x1e) >> 9) ^ 1);
  uVar47 = (uint)(uVar50 >> (bVar40 & 0x1f));
  uVar53 = (uint)uVar50 << 0x20 - (bVar40 & 0x1f);
  uVar32 = uVar32 & SUB168(auVar1 >> 0x40,0);
  bVar9 = (byte)uVar32;
  uVar39 = uVar42 >> (bVar40 & 0x1f) | uVar42 << 0x20 - (bVar40 & 0x1f);
  uVar37 = iVar14 + uVar31 & 0xffff0000;
  uVar13 = iVar14 + uVar31 >> 0xf & 1;
  uVar42 = uVar37 | uVar13;
  lVar15 = (long)(int)(((uint)bVar26 | 0x945c5000) * -0x345f254d) * (long)(int)uVar31;
  uVar55 = uVar39 & 0xa62c4f49;
  uVar49 = (uint)lVar15;
  if ((int)uVar55 < 0) {
    uVar49 = uVar42;
  }
  uVar43 = (ulong)CONCAT11(uVar55 != 0,bVar26) | 0xfffffffc945c0000;
  uVar17 = (ulong)(uVar54 & 0xffff0000 |
                  (uint)(ushort)((short)(uVar11 >> 0xd | uVar11 << 3) >> 0x10)) + (ulong)uVar42;
  sVar52 = ((ushort)uVar25 & 0xff00) + 0x50;
  bVar10 = (byte)((ulong)lVar15 >> 0x20);
  uVar16 = CONCAT44(SUB164(auVar1 >> 0x60,0),(int)((ulong)lVar15 >> 0x20)) & 0xffffffffffff0000;
  bVar10 = bVar10 << (bVar40 & 7) | bVar10 >> 8 - (bVar40 & 7);
  uVar50 = (ushort)(uVar49 | 1) >> 1;
  uVar23 = uVar50 | 0x8000;
  uVar33 = (ulong)(uVar49 | 1) & 0xffffffffffff0000;
  uVar56 = (ulong)CONCAT11((char)((char)((ulong)lVar15 >> 0x28) << 1 | 1U) >> 0x15,bVar10);
  uVar35 = uVar16 | uVar56;
  uVar36 = (ulong)uVar31 & 0xffffffffffffff0f;
  sVar21 = (sbyte)uVar36;
  uVar42 = (uint)(ushort)((short)uVar55 - 1);
  if (SBORROW8(uVar35,0x4fd5d62c)) {
    uVar36 = uVar17 & 0xffffffff;
  }
  if (0x4fd5d62b < uVar35) {
    uVar42 = uVar47 | uVar53 & 0xffff;
  }
  bVar22 = (char)(byte)uVar36 >> ((byte)uVar36 & 0x1f);
  uVar11 = (ushort)(uVar36 & 0xffffffffffffff00) | (ushort)bVar22;
  bVar26 = (byte)((uVar36 & 0xffffffffffffff00) >> 8);
  uVar35 = uVar43 - 0x7d39fdf7;
  uVar47 = (uVar47 | uVar53) & 0xffffff00 | (uint)((bVar26 >> (uVar17 & 0x3f) & 1) != 0);
  bVar40 = (byte)uVar50;
  bVar29 = bVar10 ^ (bVar40 == bVar10) * (bVar10 ^ (byte)sVar52);
  bVar40 = bVar40 ^ (bVar40 == bVar10) * (bVar40 & bVar29);
  uVar5 = uVar33 | (ulong)uVar23 & 0xffffffffffffff00;
  bVar58 = (byte)uVar17;
  bVar58 = bVar58 ^ (bVar40 == bVar58) * (bVar58 ^ 0x50);
  uVar6 = uVar35 & 0xffffffffffff0000;
  uVar8 = (undefined)uVar35;
  uVar35 = uVar5 >> 0xb;
  uVar11 = uVar11 << (bVar22 & 0xf) | uVar11 >> 0x10 - (bVar22 & 0xf);
  uVar53 = (uVar39 & 0xa62c0000 | uVar42) - 1;
  bVar10 = (byte)uVar11;
  uVar50 = 0xf;
  uVar30 = (ushort)uVar53;
  if (uVar30 != 0) {
    while (uVar30 >> uVar50 == 0) {
      uVar50 = uVar50 - 1;
    }
  }
  uVar45 = ~(ulong)(((uVar37 | (ushort)((ushort)uVar13 >> sVar21 | (short)uVar17 << 0x10 - sVar21) |
                     0x2eb497c2) & 0x1fffe) << 0xf | (uint)uVar50);
  cVar27 = (char)(uVar56 >> 8);
  uVar56 = (ulong)CONCAT11(cVar27,uVar8);
  uVar42 = (int)uVar43 + ((uint)uVar33 | (uint)uVar23) * 8;
  if (-1 < (long)(uVar45 & (uVar6 | uVar56))) {
    uVar42 = 0x50;
  }
  uVar50 = CONCAT11(cVar27 + (char)((ulong)uVar11 >> 8),bVar29 - (char)uVar35) >> (bVar10 & 0x1f);
  uVar33 = uVar36 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar47 << 0xf);
  return (uVar35 | (uVar5 | (byte)(bVar40 ^ (bVar40 == bVar58) * (bVar40 & bVar58))) << 0x35) +
         (uVar6 | CONCAT11((char)(uVar56 >> 8) + (char)(uVar50 >> 8),uVar8)) + uVar33 +
         (uVar16 | uVar50) + ((ulong)bVar26 | 1 << (uVar17 & 0x3f)) +
         (ulong)((uVar42 & 0xffff0000 |
                 (uint)(ushort)((ushort)uVar42 << (bVar10 & 0xf) |
                               (ushort)uVar42 >> 0x10 - (bVar10 & 0xf))) >> 1 | (uint)uVar33) +
         (ulong)uVar47 + (ulong)(byte)((short)uVar48 << 1) + uVar45 +
         (ulong)(ushort)(sVar52 >> (bVar22 & 0x1f)) +
         (uVar25 & 0xffffffffffff0000 | (ulong)uVar48 << 0x12 | (ulong)(ushort)(sVar52 * 2)) +
         (ulong)uVar53 + ((uVar17 & 0xffffffffffffff00 | (ulong)bVar58) >> (bVar10 & 0x3f)) +
         (uVar32 & 0xffffffffffffff00 | (ulong)(byte)(bVar9 << 6 | bVar9 >> 2)) + -0x6345b3931;
}


/*
Unable to decompile 'log_size_10_var_007'
Cause: Exception while decompiling 00407dfa: process: timeout

*/


// WARNING: Removing unreachable block (ram,0x00408e69)
// WARNING: Removing unreachable block (ram,0x00408e16)
// WARNING: Removing unreachable block (ram,0x00408e12)
// WARNING: Removing unreachable block (ram,0x00408e32)
// WARNING: Removing unreachable block (ram,0x0040909f)
// WARNING: Removing unreachable block (ram,0x00408eef)
// WARNING: Removing unreachable block (ram,0x00408e46)
// WARNING: Removing unreachable block (ram,0x00408f46)
// WARNING: Removing unreachable block (ram,0x00409524)
// WARNING: Removing unreachable block (ram,0x00408f89)
// WARNING: Removing unreachable block (ram,0x00409565)
// WARNING: Removing unreachable block (ram,0x004096e5)

long log_size_10_var_008(void)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  unkuint9 Var6;
  uint5 uVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  char cVar13;
  uint uVar11;
  ulong uVar12;
  int7 iVar14;
  sbyte sVar15;
  byte bVar16;
  byte bVar17;
  ulong uVar18;
  ulong uVar19;
  short sVar20;
  ulong uVar21;
  char cVar22;
  uint uVar23;
  uint7 uVar24;
  byte bVar25;
  ulong uVar26;
  ushort uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  byte bVar32;
  ushort uVar33;
  ushort uVar34;
  ulong uVar35;
  byte bVar36;
  ushort uVar37;
  int iVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  uint uVar45;
  ulong uVar46;
  long lVar47;
  uint uVar48;
  ulong uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  ushort uVar53;
  uint uVar54;
  long lVar55;
  ulong uVar56;
  bool bVar57;
  bool in_PF;
  bool bVar58;
  
  lVar47 = 0xaf56;
  if (in_PF) {
    lVar47 = 0x83e;
  }
  Var6 = ((unkuint9)0xe000000000000000 | 0x11098efa3055181c) >> 7;
  uVar30 = (ulong)Var6 | 0x7000000000000000;
  bVar8 = (byte)(lVar47 - 0x563cf617U >> 1) & 0x7f;
  uVar31 = 0;
  uVar42 = (uint)(Var6 >> 8);
  if (uVar42 != 0) {
    while ((uVar42 >> uVar31 & 1) == 0) {
      uVar31 = uVar31 + 1;
    }
  }
  uVar40 = (uint)((uVar30 >> 8) << 0x14);
  uVar29 = uVar40 | (uint)(uVar30 >> 0x34);
  uVar42 = uVar29 + 0xfe70b30a;
  uVar45 = (uVar31 & 0xffffff00 | (uint)(SCARRY1(bVar8,-0x3e) != SCARRY1(bVar8 - 0x3e,'\0'))) << 1;
  uVar31 = 0;
  if (uVar45 != 0) {
    while ((uVar45 >> uVar31 & 1) == 0) {
      uVar31 = uVar31 + 1;
    }
  }
  uVar30 = (ulong)(uVar31 & 0xffff0000 | 0xffff);
  uVar31 = 0xffffa5f0;
  if (in_PF) {
    uVar31 = 0x50cd;
  }
  uVar31 = uVar31 & 0xffff0000 | (uint)(ushort)(((ushort)uVar31 >> 1) << 8);
  uVar40 = 0x50cd - (uVar40 >> 0x12);
  uVar33 = 0;
  while ((0x98U >> uVar33 & 1) == 0) {
    uVar33 = uVar33 + 1;
  }
  uVar21 = uVar30 & 0xffffffffffff0000;
  auVar2 = ZEXT1216(CONCAT48(0x7fffffff,0xdd517f1588a300e8)) & (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 / ZEXT816((ulong)uVar42 | 0xc000000000000000);
  auVar2 = auVar2 % ZEXT816((ulong)uVar42 | 0xc000000000000000);
  uVar41 = uVar40 >> 8 | uVar40 * 0x1000000;
  bVar16 = SUB161(auVar3,0);
  bVar17 = (byte)(uVar31 >> 9);
  bVar32 = bVar17 ^ (bVar16 == bVar17) * (bVar17 ^ 0x3e);
  bVar36 = (byte)(SUB162(auVar2,0) >> 1);
  bVar8 = 8 - bVar36;
  bVar25 = -1 >> (bVar8 & 0x1f);
  uVar43 = (uint)(ushort)CONCAT71(SUB167(auVar3 >> 8,0),
                                  (bVar16 ^ (bVar16 == bVar17) * (bVar16 & bVar32)) * '\x02' +
                                  (8 < bVar36)) * 0x73c;
  bVar57 = (uVar43 & 0x10000) != 0;
  uVar53 = (short)((ushort)uVar42 >> 1 | 0x8000) >> (bVar8 & 0x1f);
  uVar45 = 0;
  if (uVar41 != 0) {
    while ((uVar41 >> uVar45 & 1) == 0) {
      uVar45 = uVar45 + 1;
    }
  }
  auVar2 = (CONCAT88(CONCAT71((uint7)(CONCAT62(SUB166(auVar2 >> 0x10,0),(short)(uVar43 >> 0x10)) >>
                                     9) | (uint7)(((ulong)bVar57 << 0x3f) >> 8),
                              ((auVar2 & (undefined  [16])0x8000000000000000) !=
                              (undefined  [16])0x0) == bVar57),
                     CONCAT62(SUB166(auVar3 >> 0x10,0),(short)uVar43) & 0xffffffffffffff00 |
                     (ulong)(byte)((byte)uVar43 >> 1 | 0x80)) & (undefined  [16])0xffffffffffffffff)
           / ZEXT816(0xc000000060d8856b);
  bVar16 = SUB161(auVar2,0);
  bVar36 = (bVar16 == 1) * -2 ^ 1;
  uVar18 = CONCAT71(SUB167(auVar2 >> 8,0),bVar16 ^ (bVar16 == 1) * (bVar16 & bVar36)) -
           (((ulong)uVar33 | 0xa0d30000) - 0xa109ab00);
  uVar35 = (ulong)CONCAT31((uint3)(uVar31 >> 0x11),bVar32);
  if (!in_PF) {
    uVar35 = uVar21 | 0xff00 | (ulong)bVar25 & 0xfffffffffffffffe;
  }
  uVar28 = ((ulong)uVar53 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar53 + bVar25)) << 0x33;
  uVar39 = (uVar21 | 0xff00) >> 0xd;
  uVar33 = (ushort)uVar35 ^ 0x8c9;
  uVar56 = (ulong)bVar8;
  if ((short)uVar33 < 0) {
    uVar56 = uVar35 ^ 0x8c9;
  }
  bVar8 = (byte)uVar56 & 0x3f;
  uVar49 = ((ulong)((uint)((SCARRY4(uVar29,-0x18f4cf6) != SCARRY4(uVar42,0)) == (int)uVar42 < 0) <<
                    0x18 | 0x3dfdf6) << 0x19 | (ulong)(ushort)((ushort)uVar42 << 8)) >> bVar8 |
           (uVar35 ^ 0x8c9) << 0x40 - bVar8;
  uVar44 = (ulong)(byte)~(byte)uVar56 & 0xffffffffffffff0f;
  uVar12 = uVar56 & 0xffffffffffffff00 | uVar44;
  sVar15 = (sbyte)uVar44;
  uVar34 = uVar33 << sVar15 | (ushort)uVar12 >> 0x10 - sVar15;
  uVar31 = (uint)uVar35 & 0xffff0000 | (uint)uVar34;
  cVar13 = (char)((uVar56 & 0xffffffffffffff00) >> 8);
  cVar22 = cVar13 - (char)uVar18;
  auVar2 = ZEXT816(uVar18) * ZEXT816(uVar28 | uVar39);
  bVar8 = SUB161(auVar2,0);
  iVar10 = uVar31 << 1;
  iVar10 = (int)CONCAT11((iVar10 < 0) << 7 | (iVar10 == 0) << 6 |
                         (((ulong)(uint)(int)cVar13 - (uVar18 & 0xfffffffffffffff) &
                          0x1000000000000000) != 0) << 4 | in_PF << 2 | 2U | (int)uVar31 < 0,bVar8);
  uVar18 = CONCAT44(SUB164(auVar2 >> 0x20,0),iVar10);
  uVar33 = 0xf;
  uVar53 = (ushort)uVar39;
  if (uVar53 != 0) {
    while (uVar53 >> uVar33 == 0) {
      uVar33 = uVar33 - 1;
    }
  }
  uVar27 = (ushort)(-0x75fd << sVar15) >> 1;
  uVar39 = ((ulong)bVar36 | 0xce891e8331200800) ^ 0x3c5da5a9;
  uVar35 = SUB168(auVar2 >> 0x40,0);
  if ((long)uVar39 < 0) {
    uVar35 = uVar39;
  }
  lVar47 = 0x3f;
  if (uVar18 != 0) {
    while (uVar18 >> lVar47 == 0) {
      lVar47 = lVar47 + -1;
    }
  }
  uVar31 = (int)lVar47 << 0x20 - sVar15;
  uVar56 = (ulong)(uint)-(int)uVar49;
  uVar44 = uVar49 & 0xffffffff00000000 | uVar56;
  uVar18 = (ulong)((long)uVar44 < 0);
  bVar16 = (byte)uVar27;
  uVar49 = (ulong)(bVar16 & 0xd6) | 0xc000000060d88500;
  if ((uVar27 & 0x8f) != 0) {
    uVar12 = uVar49;
  }
  uVar42 = uVar40 >> 8 & 0xffff0000 | uVar40 * 0x1000000 | (uint)(ushort)-(short)(uVar40 >> 8);
  uVar24 = (uint7)((ulong)lVar47 >> 8) ^ 0x7f;
  uVar19 = (ulong)(uVar31 & 0xffff0000 | (uVar33 >> sVar15 | uVar31) >> 1 & 0x7fff);
  uVar46 = (ulong)uVar34 * -2;
  uVar28 = uVar28 | (uVar30 & 0xffffffffe0000000) >> 0xd | (ulong)(ushort)(uVar53 >> 1 | 0x8000);
  uVar30 = (ulong)uVar24 * 0x100;
  bVar36 = (byte)uVar12;
  lVar1 = uVar28 - uVar12;
  lVar55 = lVar1 + -1;
  lVar47 = uVar19 + uVar12 * 4;
  if ((SBORROW8(uVar28,uVar12) != SBORROW8(lVar1,1)) != lVar55 < 0) {
    uVar19 = (uVar56 & 0x7fff) << 1 | uVar18;
  }
  uVar53 = (short)lVar47 + 0x7180;
  uVar31 = (uint)lVar47 & 0xffff0000 | (uint)uVar53;
  uVar56 = lVar55 + (uVar44 << 1 | uVar18) + 1;
  uVar33 = (ushort)(byte)(cVar22 * '\x02' | cVar22 < '\0') & 0xff7f;
  uVar28 = uVar21 | uVar33;
  uVar18 = (ulong)(bVar16 & 0x8f);
  if (uVar56 == 0) {
    uVar18 = uVar28;
  }
  uVar40 = ((uint)uVar39 | 0x400000) >> (bVar36 & 0x1f);
  uVar34 = ((short)uVar46 >> 1 & 0x3578U) << 1;
  uVar40 = (uVar40 & 0xffff0000 | (uint)(ushort)((ushort)uVar40 >> (bVar36 & 0x1f))) + 0xdfe96b1c;
  lVar47 = 0;
  if (uVar45 != 0) {
    while ((uVar45 >> lVar47 & 1) == 0) {
      lVar47 = lVar47 + 1;
    }
  }
  bVar25 = (char)uVar45 - (char)uVar56;
  uVar39 = (ulong)((uVar45 & 0xffffff00 | (uint)bVar25) + 0x89 + (int)uVar24 * 0x200) | 0xc0;
  uVar37 = CONCAT11((char)((uint)iVar10 >> 8) + '!',bVar8 + (char)uVar35) + 0x9a73U & 0x3fff;
  bVar16 = (byte)uVar39;
  uVar27 = uVar37 / (ushort)bVar16 & 0xff;
  uVar37 = uVar37 % (ushort)bVar16 << 8;
  uVar44 = (long)((ulong)(uVar42 >> (bVar36 & 0x3f)) | (ulong)uVar42 << 0x40 - (bVar36 & 0x3f)) >>
           (bVar16 & 0x3f);
  uVar42 = (uint)uVar44 >> 1;
  uVar29 = 0x56783901;
  cVar13 = (char)uVar27 - (char)((uVar35 & 0xffffffffffffff00) >> 8);
  if (((ulong)&stack0xffffffffffffff98 >> ((ulong)((int)(uVar19 >> 1) + 1) & 0x1f) & 1) == 0 &&
      cVar13 != '\0') {
    uVar29 = 0x56780000;
  }
  uVar12 = uVar30 & 0xffffffffffff0000;
  uVar43 = (uint)(uVar56 >> 1) & 0x7fff;
  uVar54 = (uint)uVar56 & 0xffef0000 | uVar43;
  uVar9 = -(CONCAT11((byte)((ulong)(uVar27 | uVar37) >> 8) >> 1,cVar13) | 0x8000);
  uVar41 = (int)uVar39 - 1;
  bVar16 = -(char)uVar41;
  uVar50 = (((((uint)uVar49 & 0x6e718241) << 1) >> 0x1d) << 0x19 | uVar54 >> 7) << 1 | 1;
  uVar27 = 0;
  if (uVar53 != 0) {
    while ((uVar53 >> uVar27 & 1) == 0) {
      uVar27 = uVar27 + 1;
    }
  }
  uVar48 = uVar29 & 0xffff0000 | (uint)uVar27;
  auVar2 = ZEXT816(uVar28 | 0xc000000000000000);
  auVar3 = CONCAT88(uVar35 & 0xffffffffffffff00 | (ulong)bVar8,
                    (ulong)(uint)(int)(short)(uVar9 & 0xff |
                                             (ushort)(byte)((char)((ulong)uVar9 >> 8) + 1) << 8)) &
           (undefined  [16])0xffffffffffffffff;
  auVar4 = auVar3 / auVar2;
  auVar3 = auVar3 % auVar2;
  bVar8 = (byte)uVar33;
  cVar13 = (char)((ulong)(ushort)((short)uVar30 << 1) >> 8);
  uVar35 = CONCAT71(SUB167(auVar4 >> 8,0),cVar13);
  uVar33 = CONCAT11(cVar13 + SUB161(auVar4,0) + SUB161(auVar3,0),(uVar37 & 0x100) != 0);
  uVar11 = (uint)uVar12 | (uint)uVar33;
  uVar30 = (ulong)((uVar40 & 0xffff |
                   (int)(((uVar46 & 0xffffffffffff0000 | (ulong)uVar34 & 0xffffffffffffff00 |
                          (ulong)(byte)((char)uVar34 - 0x34)) << 0xb) >> 0x10) << 0x10) & 0x2b395946
                  ) << 0xb;
  uVar29 = 0x1f;
  if (uVar11 != 0) {
    while (uVar11 >> uVar29 == 0) {
      uVar29 = uVar29 - 1;
    }
  }
  uVar28 = (long)(ulong)(uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
                        uVar29 << 0x18) >> (bVar16 & 0x3f);
  uVar34 = (ushort)uVar28;
  uVar27 = uVar34 | 1 << (uVar53 & 0xf);
  bVar57 = uVar48 - uVar50 < (uint)((uVar34 >> (uVar53 & 0xf) & 1) != 0);
  uVar29 = uVar50;
  if (!in_PF) {
    uVar29 = ((uVar45 & 0xffffff00 | (uint)(byte)(bVar25 - 0x1f)) ^ (uint)(1 << (uVar18 & 0x3f))) >>
             (bVar16 & 0x1f) | uVar31 << 0x20 - (bVar16 & 0x1f);
  }
  uVar18 = (ulong)((uVar41 & 0xffffff00 | (uint)bVar16) >> 1) |
           (ulong)(uVar48 < uVar50 || bVar57) << 0x3f;
  if (uVar48 >= uVar50 && !bVar57) {
    uVar18 = uVar35;
  }
  uVar42 = uVar42 & 0xffffff00 | (uint)((uVar44 & 1) != 0) << 0x1f | (uint)(byte)((char)uVar42 - 1);
  if ((bVar16 & 1) == 0) {
    uVar42 = SUB164(auVar3,0);
  }
  uVar33 = uVar33 >> ((byte)uVar18 & 0x1f);
  uVar39 = (ulong)uVar29 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar29 << 1);
  uVar53 = ((ushort)(byte)(bVar8 >> (bVar16 & 7) | bVar8 << 8 - (bVar16 & 7)) & (ushort)uVar43) -
           (short)uVar42;
  uVar18 = uVar18 - 0x7a15e9c2;
  uVar29 = CONCAT31(SUB163(auVar4 >> 8,0) >> 1,
                    (char)((uint)uVar35 >> 1) + (char)((ulong)uVar33 >> 8));
  bVar16 = (byte)uVar18;
  uVar30 = uVar30 << (bVar16 & 0x3f) | uVar30 >> 0x40 - (bVar16 & 0x3f);
  uVar45 = (uint)uVar30;
  uVar35 = (ulong)(uVar31 << 1) + 1;
  uVar34 = (ushort)(SUB166(auVar3 >> 0x10,0) >> 6);
  bVar36 = (char)((ulong)(ushort)(uVar33 ^ 1 << ((ushort)uVar30 & 0xf)) >> 8) - 0x1a;
  uVar30 = (ulong)CONCAT61((int6)(uVar12 >> 0x10),bVar36) << 8;
  uVar42 = uVar42 ^ 0x23070903;
  if ((int)uVar42 < 0) {
    uVar45 = uVar45 & 0xffff0000 | uVar29 & 0xffff;
  }
  uVar39 = uVar39 << (bVar16 & 0x3f) | uVar39 >> 0x40 - (bVar16 & 0x3f);
  cVar13 = (char)uVar39;
  uVar33 = (ushort)uVar29 & 0xff;
  uVar37 = uVar33 | (ushort)(byte)((byte)((ulong)(uVar29 & 0xffff) >> 8) ^ bVar36) << 8;
  uVar56 = uVar39 & 0xffffffffffffff00 | (ulong)(-1 < (short)uVar37);
  uVar39 = (ulong)(0x9183 < uVar34);
  if (-1 < (char)((char)uVar42 + -0x4f)) {
    uVar30 = uVar21 | uVar53;
  }
  auVar2 = ZEXT416(CONCAT22(SUB162(auVar4 >> 0x10,0) >> 1,uVar37) & 0xffffff00 |
                   (uint)(byte)((byte)uVar33 >> 1 | 0x80)) * ZEXT816(uVar18);
  uVar31 = (uint)CONCAT62((int6)(short)(uVar40 >> 0x10),(ushort)(byte)(bVar8 + 0x40) + 0x446d);
  if (SUB168(auVar2 >> 0x40,0) != 0) {
    uVar31 = uVar45 & 0xffff0000 |
             (uint)(ushort)((ushort)(CONCAT12(uVar34 < 0x9183,(short)uVar45) >> 0xb) |
                           (short)uVar45 << 6);
  }
  uVar31 = uVar31 + 0x30476b23;
  bVar8 = (byte)uVar31;
  uVar44 = uVar30 & 0xffffffffffffff00 | (ulong)((short)uVar27 <= (short)((long)(ulong)uVar42 >> 1))
  ;
  uVar33 = (short)cVar13 << 1;
  if (-1 < (short)cVar13) {
    uVar44 = uVar30 & 0xffffffffffff0000 | uVar35 & 0xff00 | uVar39;
  }
  bVar25 = (byte)(uVar18 >> 8);
  uVar12 = ((long)(ulong)uVar42 >> 1) << 1;
  uVar28 = (uVar28 & 0xffffffffffff0000 | (ulong)uVar27) & 0xfffff7ffffffff00;
  uVar30 = (long)(int)(((ulong)(SUB164(auVar2 >> 0x40,0) & 0x3fffffff) << 0x20 |
                       uVar35 & 0xffffff00 | uVar39) /
                      (ulong)((uVar54 | 0xbc9a5e07) >> 1 | 0xc0000000)) * (long)(int)uVar31;
  uVar34 = (ushort)uVar56;
  uVar29 = (uint)uVar56 & 0xffff0000 | (uint)(ushort)(uVar34 >> 6 | uVar34 << 10);
  bVar36 = -bVar16 & 0xf;
  uVar34 = 0xedfaU >> bVar36 | -0x1206 << 0x10 - bVar36;
  uVar42 = ((uint)uVar18 & 0xffff0000 | (uint)CONCAT11(bVar25 >> 1 | bVar25 << 7,-bVar16)) +
           (int)((long)uVar44 >> 1);
  uVar18 = (ulong)(ushort)(((ushort)(uVar30 >> 0x20) | 0x845f) + (SUB162(auVar2,0) >> 1) + 0xc947);
  uVar40 = (uint)(uVar28 | 1);
  iVar10 = uVar29 - uVar40;
  if ((SBORROW4(uVar29,uVar40) != false) != iVar10 < 0) {
    uVar18 = uVar12 & 0xffff;
  }
  bVar16 = (char)iVar10 >> 2;
  if ((uVar30 & 0x6799) != 0) {
    uVar18 = (ulong)(ushort)((short)((long)uVar44 >> 1) + (short)(uVar28 | 1));
  }
  auVar3 = ZEXT816((ulong)(uVar42 & 0xffff0000 |
                          (uint)CONCAT11((char)((ulong)uVar42 >> 8) + -0x55,(char)uVar42)) |
                   0xc000000000000000);
  auVar4 = CONCAT88(uVar30 >> 0x20 & 0xffff0000 | uVar18,
                    uVar35 & 0xffffffff00000000 | uVar30 & 0xffffffff) &
           (undefined  [16])0xffffffffffffffff;
  auVar5 = auVar4 % auVar3;
  uVar42 = (uint)(ushort)((ushort)iVar10 & 0xff00 | (ushort)bVar16 | 0xc000);
  uVar29 = CONCAT22(SUB162(auVar5,0),SUB162(auVar4 / auVar3,0)) & 0x3fffffff;
  uVar42 = (int)(short)(uVar29 / uVar42) * (int)(short)(uVar29 % uVar42);
  bVar36 = (bVar8 & 0x1f) % 9;
  cVar22 = (char)((ulong)(ushort)(uVar42 >> 0x10) >> 8);
  uVar30 = ((ulong)uVar34 & 0xffffffffffffff00 | 0x1b9f10000) >> 0xd;
  uVar50 = (uint)uVar30;
  uVar27 = (short)(uVar28 >> 1) << (bVar8 & 0x1f);
  uVar37 = 0xe1d1 >> (bVar16 & 0x1f);
  uVar18 = (ulong)((CONCAT22((undefined2)(cVar13 >> 7),uVar33) & 0xffffff00 |
                   (uint)(byte)((char)uVar33 << 3 | (byte)((uVar33 & 0xff) >> 6))) << 1) |
           0xffffffff8bb51589;
  uVar12 = (ulong)(bVar8 & 1) << 0x20 | uVar12;
  uVar29 = (uint)(uVar12 >> 0x10) | (uint)(uVar12 << 0x11);
  bVar57 = (uVar42 & 0x400) != 0;
  uVar21 = ((SUB168(auVar5,0) & 0xffffffff00000000 |
             (ulong)(uint)((int)CONCAT61(SUB166(auVar5 >> 0x10,0),
                                         (byte)(CONCAT11((int)((((uint)uVar21 | (uint)uVar53 |
                                                                SUB164(auVar2,0)) + 0x93269306) * 2
                                                              | uVar40 >> 0x1f) < 0,cVar22) >>
                                               bVar36) | cVar22 << 9 - bVar36) << 8 ^
                          1 << (uVar50 & 0x1f)) & 0xffffffffffffff00 | (ulong)uVar31 & 0xff) >> 6) +
           (ulong)uVar29 + 1;
  uVar31 = (int)register0x00000020 - 0x68U | (uint)(1 << ((ulong)uVar37 & 0x3f));
  uVar43 = uVar29 << (bVar16 & 0x1f) | (uint)uVar21 >> 0x20 - (bVar16 & 0x1f) | 0x988be262;
  uVar41 = (uint)(byte)((char)uVar34 - 0x31) << 0x19;
  uVar45 = (uint)CONCAT62((uint6)(uVar28 >> 0x11),uVar27) & 0xffff0000 | 0x20000 |
           (uint)(ushort)~(uVar27 & 0xffdf);
  uVar29 = (uint)(ushort)(uVar37 & 0xff | (ushort)(byte)((ulong)uVar37 >> 8) << 8) * 0x6f98833d;
  lVar47 = uVar30 << 1;
  uVar40 = uVar45 + 0xc18a8838;
  uVar33 = (ushort)lVar47;
  uVar21 = uVar21 & 0xffffffffffff0000 |
           (ulong)(ushort)((uint)((int)(short)uVar42 * (int)(short)uVar42) >> 0x10);
  cVar13 = (char)((ulong)(long)(short)uVar33 >> 8);
  uVar30 = (ulong)(uVar50 << 0x1b | uVar50 >> 5);
  if (cVar13 < '\0') {
    uVar30 = (ulong)uVar40;
  }
  uVar53 = (((ushort)uVar43 & 0xff00 | (ushort)(byte)~(byte)uVar43) & 0x4c85) + 0xdd30;
  uVar35 = uVar21 & (ulong)uVar40;
  bVar8 = (byte)uVar53;
  uVar42 = uVar43 & 0x72e0000 | (uint)uVar53 & 0xffffff00 | (uint)(byte)(bVar8 >> 1 | bVar8 << 7);
  uVar53 = 0;
  uVar34 = (ushort)uVar42;
  if (uVar34 != 0) {
    while ((uVar34 >> uVar53 & 1) == 0) {
      uVar53 = uVar53 + 1;
    }
  }
  uVar50 = (int)CONCAT62((undefined6)((short)uVar33 >> 0xf),uVar33 >> 9 | uVar33 << 7) + 1;
  uVar43 = uVar31 + uVar40 * 8;
  uVar42 = ~uVar42;
  uVar28 = (uVar18 & 0xffffffffffff0000 | (ulong)(ushort)(((ushort)(uVar18 >> 1) & 0x7fff) + 0x31ce)
           ) << 1 ^ (ulong)uVar50;
  uVar34 = (ushort)uVar28;
  uVar18 = uVar35 & 0xffffffffffff0000 | uVar35 >> 1 & 0x7fff;
  uVar35 = uVar28 & 0xffffffffffff0000 | (ulong)(ushort)(uVar34 << 0xb | uVar34 >> 5) |
           0xc000000000000000;
  auVar2 = (CONCAT88(uVar21,CONCAT62((undefined6)((short)uVar33 >> 0xf),
                                     uVar33 & 0xff | (ushort)(byte)-cVar13 << 8)) ^
           (undefined  [16])0x80000000) & (undefined  [16])0xffffffffffffffff;
  auVar3 = auVar2 / ZEXT816(uVar35);
  auVar2 = auVar2 % ZEXT816(uVar35);
  cVar13 = (char)((ulong)uVar43 >> 8);
  if (cVar13 < '\0') {
    uVar40 = uVar40 & 0xffff0000 | (uint)CONCAT11(cVar13,SUB161(auVar3,0));
  }
  bVar8 = (char)uVar43 + 0x2b;
  uVar39 = (ulong)(uVar43 & 0xffffff00 | (uint)bVar8);
  uVar56 = (ulong)(uVar45 + 0xc18a88ff +
                  (uVar29 & 0xffff0000 |
                  (uint)CONCAT11((byte)((ulong)uVar29 >> 8) & (byte)uVar37,(char)uVar29)) * 4) |
           0xc0;
  uVar29 = SUB164(auVar2 >> 0x10,0) << 0x11 | 0xa5;
  uVar28 = uVar56;
  if (bVar57) {
    uVar28 = (ulong)((uVar50 & 0xffffff00 |
                     (uint)(cVar13 != '\0' && SCARRY1(cVar13,'\0') == cVar13 < '\0')) <<
                     (bVar8 & 0x1f) & 0xffff0000 | (uint)(ushort)uVar56);
  }
  uVar45 = ((uint)CONCAT62(SUB166(auVar3 >> 0x10,0),0xffff) & 0xffff0000 |
           (uint)(ushort)(0x3fff / (ushort)(byte)uVar56 & 0xff | 0x3fffU % (ushort)(byte)uVar56 << 8
                         )) << (bVar8 & 0x1f);
  uVar35 = ~uVar35;
  bVar16 = (bVar8 & 0x1f) % 0x11;
  uVar43 = ((uint)lVar47 & 0xffff0000 | (uint)(ushort)(uVar33 - 0x869)) + (int)uVar21 ^ (uint)uVar18
  ;
  uVar30 = uVar30 - (uVar41 | (uint)uVar53);
  uVar50 = (uVar42 & 0xffff0000 |
           (uint)(ushort)((ushort)(CONCAT12(0x471515b7 < uVar29 ||
                                            0xfffffffffffffffe < (ulong)uVar29 - 0x471515b8,
                                            (short)uVar42) >> bVar16) |
                         (short)uVar42 << 0x11 - bVar16)) << 6;
  uVar43 = -(uVar43 & 0xffffff00 | (uint)(byte)((byte)uVar43 & (byte)uVar45));
  lVar47 = SUB168(SEXT816((long)(ulong)uVar45) * SEXT816(0x3fffffffffffffff) >> 0x40,0) << 1;
  cVar13 = (char)((ulong)lVar47 >> 8);
  uVar29 = (uint)SUB162(auVar2,0) + (int)lVar47;
  bVar16 = SUB161(auVar2,0);
  uVar56 = (ulong)(uVar43 & 0xffffff00 | uVar43 >> 1 & 0x7f);
  uVar21 = (uVar28 << (bVar8 & 0x3f)) >> 1;
  uVar43 = (uint)uVar21 & 0xffff0000;
  uVar45 = CONCAT22((undefined2)(cVar13 >> 7),(short)cVar13 << 1 | (ushort)uVar35 >> 0xf);
  uVar40 = (uVar40 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar40 & 0xff00 | (ushort)(uVar40 >> 1) & 0x7f) ^
                         ((ushort)uVar40 >> 0xc & 1) << 0xc)) * 0x311555d2;
  bVar8 = (byte)uVar50 & (byte)uVar21;
  bVar58 = bVar8 == bVar16;
  bVar16 = bVar16 ^ bVar58 * (bVar16 ^ (byte)uVar29);
  bVar8 = bVar8 ^ bVar58 * (bVar8 & bVar16);
  if (!bVar58) {
    uVar18 = (ulong)uVar45;
  }
  uVar28 = uVar39 + uVar18;
  if (!CARRY8(uVar39,uVar18)) {
    uVar56 = uVar35 & 0xffffffff;
  }
  bVar36 = (byte)(uVar28 >> 8);
  cVar13 = bVar36 - (char)(uVar21 >> 8);
  uVar54 = uVar43 | CONCAT11(cVar13,(byte)uVar21);
  if (cVar13 == '\0') {
    uVar45 = 0;
  }
  if (!bVar57) {
    uVar54 = uVar43 | 0xffff;
  }
  uVar33 = ((ushort)uVar40 >> 2) << 1;
  uVar34 = (ushort)((uVar40 & 3) != 0);
  uVar27 = uVar33 | uVar34;
  uVar43 = (uVar41 | (uint)uVar53 & 0xffffff00 | (uint)(byte)((char)uVar53 << 1)) << 10;
  bVar25 = (byte)uVar28 & 0x3f;
  uVar37 = (ushort)(short)(char)(byte)uVar29 >> 1 | (ushort)((uVar29 & 1) != 0) << 0xf;
  uVar53 = CONCAT11(~bVar36,(byte)uVar28) >> 1;
  uVar39 = uVar28 & 0xffffffffffff0000 | (ulong)(uVar53 | 0x8000);
  bVar17 = (byte)uVar53;
  bVar36 = bVar17 & 0x3f;
  uVar21 = (ulong)uVar29 << 0x40 - bVar36;
  uVar44 = uVar29 >> bVar36 | uVar21;
  auVar2 = ZEXT816(uVar39 | 0xc000000000000000);
  auVar3 = ZEXT916(CONCAT18(bVar16,(ulong)(bVar8 >> bVar25) | (ulong)bVar8 << 0x40 - bVar25)) &
           (undefined  [16])0xffffffffffffffff;
  uVar28 = (ulong)(ushort)((short)uVar56 << 1 | (ushort)uVar44 >> 0xf);
  uVar12 = uVar56 & 0xffffffffffff0000 | uVar28;
  uVar29 = (uint)uVar12 >> 1;
  uVar51 = (uint)uVar44 | 1;
  uVar23 = (uVar54 >> 1 & 0xffff0000 | (uint)(ushort)((short)(uVar54 >> 1) << 1)) + uVar51 + 1;
  uVar48 = SUB164(auVar3 / auVar2,0);
  uVar54 = (uint)uVar37 << 0x1f;
  uVar11 = uVar48 >> 1 | uVar54;
  uVar49 = uVar30 & 0xffffffffffffff00 |
           (ulong)(uVar11 == 0 || ((int)uVar48 < 0 != (uVar54 != 0)) != (uVar54 != 0));
  uVar39 = (ulong)((uint)uVar39 & 0xffffff00 | (uint)(byte)((bVar17 - (char)uVar23) - 1)) -
           0x286f5a33;
  uVar35 = (uVar35 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar35 << 2 | (short)uVar50 < 0)) << 9
  ;
  uVar44 = uVar35 | uVar21 >> 0x37;
  uVar53 = (ushort)uVar49;
  uVar9 = (uVar53 ^ (ushort)(uVar53 == 0) * (uVar53 ^ uVar37)) +
          ((ushort)uVar29 | (ushort)(1 << (uVar28 & 0x3f))) +
          (ushort)((((uVar45 ^ (uint)(1 << ((ulong)(uVar40 & 0xffff0000 | (uint)uVar27) & 0x3f))) <<
                     0x1f | uVar29) >> (uVar28 & 0x3f) & 1) != 0);
  uVar30 = uVar30 & 0xffffffffffff0000;
  uVar35 = uVar35 >> 0x19;
  uVar53 = (short)(char)uVar39 *
           (short)(char)((ulong)((short)((ulong)((long)SUB164((CONCAT88(SUB168(auVar3 % auVar2,0),
                                                                        (ulong)uVar11) &
                                                              (undefined  [16])0xffffffffffffffff) /
                                                              ZEXT816(uVar49 | 0xc000000000000000),0
                                                             ) * (long)(int)uVar18) >> 0x20) +
                                 0x8159U & 0xff00) >> 8);
  cVar13 = (char)(uVar53 >> 8);
  uVar21 = uVar18 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar18 << 1);
  if (cVar13 == '\0' || cVar13 == -1) {
    uVar21 = uVar44;
  }
  sVar20 = (short)((uVar50 & 0xffff0000 | (uint)(ushort)((short)uVar50 << 1 | 1)) >> 0xf);
  uVar18 = uVar39 & 0xffff0000 |
           (ulong)(ushort)(((uVar53 >> 1 | (ushort)((uVar53 & 1) != 0) << 0xf) - sVar20) - 1);
  uVar23 = uVar23 ^ 1;
  uVar42 = (uint)uVar44 ^
           (uint)(uVar18 == uVar44) *
           ((uint)uVar44 ^ (((uVar42 & 0x2000000) << 6) >> 0xf | (uint)(ushort)(sVar20 - 0x950)));
  lVar47 = 0x3f;
  if (uVar21 != 0) {
    while (uVar21 >> lVar47 == 0) {
      lVar47 = lVar47 + -1;
    }
  }
  uVar53 = (ushort)uVar35;
  uVar35 = uVar35 & 0xffffffffffff0000;
  uVar39 = (ulong)(ushort)(uVar53 << 7 | uVar53 >> 9);
  uVar12 = uVar12 << 0x27 | uVar35 | uVar39;
  uVar51 = uVar51 - ((uint)uVar30 | (uint)uVar9);
  uVar45 = uVar42 & ~(1 << ((uint)uVar37 & 0x1f));
  uVar29 = uVar23 & 0xffffff00 |
           (uint)(byte)((byte)uVar23 >> 1 |
                       (((ushort)uVar45 >> (uVar33 & 0xf | uVar34) & 1) != 0) << 7);
  lVar47 = 0x3f;
  iVar10 = 0x3f;
  if (uVar29 != 0) {
    while (iVar10 = (int)lVar47, uVar29 >> lVar47 == 0) {
      lVar47 = lVar47 + -1;
    }
  }
  uVar54 = (int)uVar21 + 1;
  uVar50 = ((uint)uVar18 ^ (uint)(uVar18 == uVar44) * ((uint)uVar18 & uVar42)) & 0xffff0000;
  uVar40 = iVar10 + 0x49 + (uVar40 & 0xffff0000 | (uint)uVar27) * 2;
  uVar42 = 0x1f;
  if (uVar50 != 0) {
    while (uVar50 >> uVar42 == 0) {
      uVar42 = uVar42 - 1;
    }
  }
  uVar33 = 0;
  if ((ushort)uVar40 != 0) {
    while (((ushort)uVar40 >> uVar33 & 1) == 0) {
      uVar33 = uVar33 + 1;
    }
  }
  uVar49 = ((ulong)(uVar43 & 0xffff0000 |
                   (uint)(ushort)(((ushort)(uVar41 >> 0x16) | (ushort)uVar43) - uVar27 >> 1 | 0x8000
                                 )) - 0x5b08a64a) -
           (ulong)((uVar40 >> ((ulong)uVar33 & 0x3f) & 1) != 0);
  uVar18 = (ulong)uVar33 & 0xffffffffffffff0f;
  sVar15 = (sbyte)uVar18;
  uVar37 = (ushort)uVar42 << sVar15 | 0U >> 0x10 - sVar15;
  uVar44 = (ulong)(uVar42 & 0xffff0000 | (uint)uVar37);
  uVar34 = (ushort)uVar18 & 0xfffe;
  uVar30 = uVar30 | (ulong)uVar9 & 0xffffffffffffff00 | 0xc000000000000000 |
           (ulong)(byte)((char)uVar9 << 1);
  uVar33 = (ushort)uVar42 & 0xf;
  uVar27 = uVar34 | 1 << uVar33;
  sVar20 = (short)(uVar29 >> 1);
  uVar53 = sVar20 << 6;
  uVar33 = (ushort)(CONCAT12((uVar34 >> uVar33 & 1) != 0,sVar20) >> 0xb);
  uVar34 = (ushort)((uVar23 & 0xffffff00) >> 0x11);
  uVar18 = (ulong)((int)uVar21 + 0xd22);
  uVar42 = uVar23 - 1 >> 1;
  uVar21 = uVar18;
  if ((uVar23 - 1 & 1) == 0) {
    uVar21 = (ulong)(byte)((char)((ulong)CONCAT22(uVar34,uVar33 | uVar53) >> 8) - 1);
  }
  uVar29 = CONCAT22(uVar34,uVar33 | uVar53 & 0xff | (ushort)(byte)((char)(uVar18 >> 8) - 1) << 8) &
           ~(1 << (uVar51 & 0x1f));
  bVar8 = ((char)uVar27 + (char)((ulong)uVar27 >> 8) & 0x1fU) % 0x11;
  sVar20 = (short)uVar54;
  auVar2 = ZEXT816(uVar21 & 0xffffffffffff0000 |
                   (ulong)(ushort)((short)(char)((byte)uVar21 ^
                                                (byte)(((ushort)uVar21 >> 2 & 1) << 2)) *
                                  (short)(char)(uVar40 & 0xffff))) * ZEXT816(uVar12);
  uVar42 = uVar42 & 0xffffff00 | (int)uVar12 << 0x1f |
           (uint)((byte)((char)uVar42 + ('d' < (char)(byte)uVar51) + 'q') >> 1);
  uVar18 = (ulong)uVar42;
  uVar21 = (ulong)uVar51 & 0xffff;
  uVar43 = uVar51 + uVar42 * 4;
  uVar42 = uVar29 >> 2;
  uVar29 = uVar29 & 0xffff0000;
  uVar45 = ((uVar45 & 0xffff0000 | uVar40 & 0xffff) ^ 1) + 0x2127ce8e + (uVar43 & 0xffff0000) * 2;
  uVar43 = uVar43 & 0xc8350000;
  uVar33 = 0xf;
  if ((ushort)uVar51 != 0) {
    while ((ushort)((ushort)uVar51 >> uVar33) == 0) {
      uVar33 = uVar33 - 1;
    }
  }
  uVar41 = (uVar54 & 0xffff0000 |
           (uint)(ushort)(sVar20 << bVar8 |
                         (ushort)(CONCAT12((byte)uVar51 < 100,sVar20) >> 0x11 - bVar8))) >> 1;
  uVar50 = uVar43 >> 0x14;
  uVar54 = ((uint)((uVar30 | 1) << 4) | (uint)(CONCAT18((char)uVar9 < '\0',uVar30) >> 0x3d)) << 0xc
           | uVar50;
  uVar34 = ((ushort)uVar42 & 0x3f00 | (ushort)(byte)((char)uVar42 + ((uVar40 & 1) == 0))) << 1 |
           uVar37 >> 0xf;
  uVar53 = 0;
  uVar27 = (ushort)uVar41;
  if (uVar27 != 0) {
    while ((uVar27 >> uVar53 & 1) == 0) {
      uVar53 = uVar53 + 1;
    }
  }
  bVar57 = (uVar37 & 8) != 0;
  lVar47 = ((uVar49 & 0xffffffffffff0000 | (ulong)(ushort)((short)uVar49 >> 4)) * 2 &
            0xffffffffffff0000 | (ulong)uVar33) << 1;
  uVar33 = (short)(char)uVar33 * (short)(char)((byte)uVar37 & 0xf7);
  uVar49 = (ulong)uVar51 * 2 - uVar18;
  uVar42 = uVar51 + 0x9c + uVar54 * 2 & 0xffff0000 | (uint)uVar53 | (uint)(1 << (uVar18 & 0x3f));
  uVar39 = (((uVar56 & 0xf70000 | uVar28) << 0x27 | uVar35 | uVar39) << 1 |
           (ulong)((long)uVar12 < 0)) << 1 | 1;
  uVar53 = uVar34 >> bVar57 | uVar34 << 0x10 - bVar57;
  uVar35 = CONCAT71(CONCAT61((int6)(((ulong)SUB167(auVar2 >> 0x48,0) << 8) >> 0x10),
                             SUB161(auVar2 >> 0x48,0) + SUB161(auVar2 >> 0x40,0)),
                    uVar42 == (uVar29 | (uint)uVar53));
  uVar34 = ((ushort)lVar47 | (ushort)((int)uVar43 < 0)) + (short)uVar21 +
           (ushort)((byte)uVar53 < 0x41);
  cVar13 = (char)((ulong)(uVar29 | (uint)uVar53 & 0xffffff00) >> 8);
  uVar28 = uVar35 - 0x7ce7e52c;
  uVar30 = uVar44 & 0xffffffffffffff00;
  if (0x7ce7e52b < uVar35) {
    uVar21 = uVar39;
  }
  uVar54 = (uVar29 | CONCAT11((byte)(CONCAT11((int)uVar54 < 0,cVar13) >> bVar57 % 9) |
                              cVar13 << 9 - bVar57 % 9,(byte)uVar53 + 0xbf)) >> 1;
  uVar11 = (uint)lVar47 & 0xffff0000 | (uint)uVar34 & 0xffffff00 | (uint)(byte)((char)uVar34 + 1);
  sVar20 = (uVar33 & 0xff | (ushort)(byte)((char)((ulong)uVar33 >> 8) << 1) << 8) + 0x9cd6;
  uVar50 = ((uint)uVar28 & 0xffff0000 | (uint)(ushort)(sVar20 >> 0xf)) ^
           1 << ((uVar50 & 0xf) << 1 | 1);
  uVar12 = (ulong)(uint)(int)sVar20 | 0xffffffff970c319f;
  uVar33 = (ushort)uVar12;
  uVar40 = (uint)(uVar33 | 0xc000);
  uVar29 = CONCAT22((short)uVar50,uVar33) & 0x3fffffff | 0xc000;
  uVar43 = uVar29 / uVar40;
  uVar29 = uVar29 % uVar40;
  uVar56 = (uVar21 & 0x7fffffffffff8000) << 1;
  bVar8 = (byte)(uVar30 >> 0x18) & 0x1f;
  uVar48 = uVar11 << bVar8 | uVar11 >> 0x20 - bVar8;
  uVar21 = (ulong)(uint)(int)(short)uVar54 << 1;
  uVar34 = (short)uVar39 + 0x7b66 + (ushort)(uVar45 >> 0x1c) * 4 + (ushort)uVar48;
  uVar40 = (uint)(uVar30 >> 0x18) | 1 << (uVar45 >> 0x1c);
  uVar11 = (uVar45 & 0xffffff00) + 0x1d484294;
  cVar13 = (char)uVar40;
  bVar8 = -cVar13;
  uVar35 = (ulong)uVar40 & 0xffffffffffffff00;
  uVar33 = (ushort)uVar21 >> (bVar8 & 0xf) | (ushort)uVar21 << 0x10 - (bVar8 & 0xf);
  uVar12 = (ulong)(((uint)uVar12 & 0xffff0000 | uVar43 & 0xff00 |
                   (uint)(byte)((char)uVar43 + ((char)uVar29 << (bVar8 & 0x1f)))) >> 1) <<
           (bVar8 & 0x3f) ^ (ulong)uVar54;
  uVar27 = uVar33 & 0xff00 | (ushort)(((ulong)uVar33 & 0xc0) >> 6);
  uVar33 = ((ushort)uVar48 & 0xff00 |
           (ushort)(byte)((byte)uVar48 >> (bVar8 & 7) | (byte)uVar48 << 8 - (bVar8 & 7))) << 1;
  uVar46 = (uVar49 & 0xffffffffffff0000 |
            (ulong)(ushort)(((ushort)uVar49 & 0xff00 | (ushort)(byte)(((char)uVar49 >> 0xb) << 1))
                           << 1) & 0xffffffffffffff00 | (ulong)(byte)((char)uVar41 - 1)) >> 1 |
           0x8000000000000000;
  uVar35 = ((uVar44 & 0xffffffffffff0000 | (ulong)(byte)((char)(uVar30 >> 8) + 0x2a) << 8) << 0x28 |
            uVar35 | (ulong)(bVar8 & (byte)(uVar35 >> 8))) + 0x6be71d9a;
  bVar8 = (byte)uVar35;
  bVar16 = (byte)(uVar35 >> 8);
  uVar39 = (ulong)CONCAT11(bVar16 << (bVar8 & 7) | bVar16 >> 8 - (bVar8 & 7),bVar8);
  uVar49 = uVar35 & 0xffffffffffff0000 | uVar39;
  uVar42 = uVar42 + 0xdaf4fadd + ((uint)uVar56 | (uint)uVar34);
  uVar35 = ((ulong)(cVar13 != '\0') << 0x3f) >> 0x23;
  uVar19 = uVar44 & 0xffffffffffff0000 | uVar30 >> 4 & 0xfff;
  uVar30 = uVar18 - 1 & 0xffffffffffff0000;
  uVar18 = (ulong)(ushort)(((ushort)(uVar18 - 1) & 0xffb9) + 0xe3e0);
  auVar2 = ZEXT816(uVar19 | 0xc000000000000000);
  auVar3 = CONCAT88(uVar28 & 0xffffffff00000000 | (ulong)uVar50 & 0xffffffffffff0000 |
                    (ulong)(ushort)uVar29 & 0xffffffffffffff00 | (ulong)(ushort)uVar43 & 0xff,
                    uVar12 & 0xffffffffffff0000 |
                    (ulong)(ushort)((short)(char)uVar12 * (short)(char)(byte)(uVar45 >> 0x1d) - 1))
           & (undefined  [16])0xffffffffffffffff;
  auVar4 = auVar3 % auVar2;
  uVar53 = (ushort)uVar42;
  uVar44 = uVar21 & 0xffffffffffff0000 | (ulong)uVar53;
  uVar28 = SUB168(auVar3 / auVar2,0);
  if (SCARRY2(uVar53,uVar27)) {
    uVar28 = uVar30 | uVar18;
  }
  uVar40 = uVar11 >> 1;
  uVar37 = (short)uVar28 + 0x84b6;
  uVar12 = uVar28 & 0xffffffffffff0000 | (ulong)uVar37;
  uVar26 = ~(ulong)(uVar42 & 0xffff0000 | (uint)(ushort)(uVar53 + uVar27));
  if (uVar37 == 0 || (SCARRY2((short)uVar28,-0x7b4a) != SCARRY2(uVar37,0)) != (short)uVar37 < 0) {
    uVar12 = uVar35 | (uVar39 & 7) << 0x1d;
  }
  uVar53 = (ushort)uVar40 & 0x7f00 | (ushort)(byte)((char)uVar40 << 1);
  uVar39 = uVar44 >> 1;
  uVar52 = -uVar46;
  lVar47 = (uVar12 - 0xee08d475) - (ulong)(uVar46 != 0);
  uVar12 = (long)(ulong)(uVar48 & 0xffff0000 | (uint)uVar33 & 0xffffff00 |
                        (uint)(byte)((char)uVar33 - 0x34)) >> 1;
  sVar20 = SUB162(auVar4,0);
  uVar33 = uVar53 - sVar20;
  uVar28 = (ulong)(uVar11 & 0xffff0000 | (uint)uVar33);
  if (SBORROW2(uVar53,sVar20) == false) {
    uVar28 = uVar39;
  }
  uVar29 = (uint)uVar28;
  uVar40 = (uint)lVar47 & 0xffff0000 | (uint)(ushort)(((short)lVar47 - (short)uVar26) - 1);
  if ((short)uVar33 < 0) {
    uVar40 = uVar29;
  }
  uVar41 = (uint)uVar26 ^ uVar29;
  iVar38 = ((int)uVar19 << (bVar8 & 0x1f) | uVar41 >> 0x20 - (bVar8 & 0x1f)) * -0x4f27d040;
  uVar28 = ((uint)uVar49 << 1) + uVar28;
  uVar43 = (uint)(uVar40 == 0x6721a5e4) * ((uint)uVar49 ^ 0x6721a5e4) ^ 0x6721a5e4;
  uVar40 = uVar40 ^ (uint)(uVar40 == 0x6721a5e4) * (uVar40 & uVar43);
  uVar46 = uVar28 & 0xffffffffffffff0f;
  sVar15 = (sbyte)uVar46;
  uVar45 = SUB164(auVar4,0);
  uVar45 = uVar45 >> sVar15 | uVar45 << 0x20 - sVar15;
  uVar19 = uVar12 & 0xffff;
  uVar19 = (uVar28 & 0xffffffffffff0000 | uVar19) << ((byte)uVar19 & 0x3f);
  bVar8 = (char)uVar40 + (char)((ulong)uVar43 >> 8);
  iVar14 = (int7)(int3)(uVar40 >> 8);
  uVar28 = CONCAT71(iVar14,bVar8);
  iVar10 = uVar31 + 0xb2c0cc28 + (int)uVar28 * 8;
  if (!SCARRY4(uVar29,1)) {
    uVar52 = uVar52 & 0xffffffffffff0000 | (ulong)(ushort)uVar45;
  }
  uVar33 = 0;
  uVar53 = (ushort)iVar38;
  if (uVar53 != 0) {
    while ((uVar53 >> uVar33 & 1) == 0) {
      uVar33 = uVar33 + 1;
    }
  }
  uVar28 = uVar28 & 0x3fffffffffffffff;
  if (uVar53 != 0) {
    uVar28 = uVar39;
  }
  uVar39 = uVar19 & 0xffffffffffff00ff;
  bVar16 = (byte)uVar39 & 0x1f;
  uVar7 = CONCAT14((uVar42 & 2) != 0,iVar38);
  return CONCAT71(iVar14,bVar8 | (byte)iVar10) + (ulong)(iVar10 + 0xf48c6238) + uVar39 +
         (ulong)(uVar45 & 0xffff0000 | (uint)uVar33) +
         (ulong)(uVar41 & 0xffff0000 |
                (uint)(ushort)((ushort)uVar41 >> sVar15 | sVar20 << 0x10 - sVar15)) +
         (uVar56 | (ulong)uVar34 & 0xffffffffffffff00 |
         (ulong)(byte)((byte)uVar34 >> ((byte)uVar19 & 0x1f))) + (ulong)(uVar29 + 1) * 2 + uVar28 +
         ((uVar21 & 0xfffffffffffe0000) >> 1 | 0x8000000000000000 | uVar44 >> 2 & 0x7fff) + uVar52 +
         (uVar35 | uVar49 << 0x1d) +
         (uVar30 | uVar18 & 0xffffffffffffff00 | (ulong)(uVar29 + 1 != 0)) +
         (ulong)((uint)CONCAT62((int6)(uint6)(ushort)((uVar48 & 0xffff0000) >> 0x10) >> 1,
                                (short)uVar12 + (short)uVar46) & 0x55b4cc0d) +
         (((ulong)(uVar7 >> bVar16) | (ulong)uVar7 << 0x21 - bVar16) & 0xffffffff) + uVar49 +
         0x6c95fefa6764b1ea;
}



// WARNING: Removing unreachable block (ram,0x00409dcc)
// WARNING: Removing unreachable block (ram,0x00409e50)
// WARNING: Removing unreachable block (ram,0x0040a3c5)
// WARNING: Removing unreachable block (ram,0x0040aab4)

long log_size_10_var_009(void)

{
  short sVar1;
  undefined auVar2 [16];
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  byte bVar12;
  ulong uVar11;
  byte bVar13;
  ushort uVar14;
  ushort uVar15;
  byte bVar17;
  ulong uVar16;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  byte bVar23;
  ushort uVar24;
  ulong uVar25;
  ulong uVar26;
  uint7 uVar27;
  byte bVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 uVar36;
  ushort uVar37;
  short sVar38;
  uint uVar39;
  ulong uVar40;
  byte bVar41;
  uint uVar42;
  long lVar43;
  ushort uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  ushort uVar48;
  short sVar49;
  uint uVar50;
  uint uVar51;
  int iVar52;
  char cVar53;
  ushort uVar54;
  ushort uVar55;
  short sVar56;
  uint uVar57;
  uint uVar58;
  long lVar59;
  byte bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool in_PF;
  bool bVar65;
  
  sVar38 = 0;
  while ((0x1989U >> sVar38 & 1) == 0) {
    sVar38 = sVar38 + 1;
  }
  uVar16 = CONCAT62(0x5d0feb477bfc,sVar38) ^ 0xde5d376bdad4b765;
  uVar50 = 0;
  while ((0x9978202aU >> uVar50 & 1) == 0) {
    uVar50 = uVar50 + 1;
  }
  uVar29 = 0x60e8c1e1;
  bVar60 = (byte)uVar16;
  uVar39 = (uint)(byte)((char)uVar50 + 0x67);
  uVar19 = uVar50 & 0xffffff00 | uVar39;
  uVar16 = (uVar16 & 0xffffffffffff0000 |
            (ulong)CONCAT11((char)(uVar16 >> 8) + 'V',bVar60) & 0xffffffffffffff00 |
           (ulong)(byte)(bVar60 + 0x16)) & 0x53e0289d;
  if (uVar16 == 0) {
    uVar29 = 0x60e81097;
  }
  uVar24 = 0x710b - (ushort)(0xbdcc636d9978000a <
                            ((ulong)(ushort)((ushort)(CONCAT12(0xe9 < bVar60,0xf1b) >> 0xb) | 0xc6c0
                                            ) | 0x80161aed310b0000));
  lVar43 = 0x3f;
  if (uVar19 != 0) {
    while (uVar19 >> lVar43 == 0) {
      lVar43 = lVar43 + -1;
    }
  }
  uVar57 = uVar29 >> 9;
  cVar3 = ((byte)(((1 << ((uint)uVar24 & 0x1f) ^ 1U) & 0xffff | (uint)(ushort)uVar16 << 0x10) /
                 0xdc1a) ^ (byte)(1 << (uVar39 & 0x1f))) * (char)uVar57;
  cVar3 = cVar3 * cVar3;
  uVar44 = ((ushort)bVar60 | 0xd200) ^ SUB162(ZEXT816(0xde5d376bdad4b765) >> 0xb,0);
  sVar38 = (short)cVar3 + (short)(uVar19 + 0xecc4f476);
  uVar19 = uVar19 + 0xecc4f476 & 0xffff0000;
  uVar39 = uVar19 | (ushort)((short)cVar3 - 0x5ce);
  uVar14 = sVar38 >> 0xf | 0xab00;
  if (in_PF) {
    uVar39 = uVar19 | 0x98fb;
  }
  uVar42 = (uVar50 & 0xffff0000 | (uint)SUB161(ZEXT816(0xde5d376bdad4b765) >> 0xb,0)) * 0x800 +
           0x6a42a24d;
  uVar16 = (ulong)uVar39 << 0xd;
  uVar19 = ((uint)(ushort)((short)(uVar24 & 0xff00 |
                                  (ushort)(byte)((byte)((uVar24 & 0xff |
                                                        (ushort)((byte)sVar38 < 0x73) << 8) >> 2) |
                                                (char)uVar24 << 7)) >> 0x13) | 0xaa8f0000) >> 0xb;
  uVar24 = ((ushort)uVar57 >> 0xd | uVar44 << 3) + 0xb93e +
           (ushort)(0xecc9 < uVar14 || 0xfffe < (ushort)(uVar14 + 0x1336));
  lVar43 = 0x3f;
  uVar50 = 0;
  if (uVar39 != 0) {
    while (uVar50 = (uint)((ulong)lVar43 >> 0x20), uVar16 >> lVar43 == 0) {
      lVar43 = lVar43 + -1;
    }
  }
  uVar14 = uVar14 + 0x1337 | 0x38fa;
  sVar38 = 0xf;
  cVar3 = '\x0f';
  if (uVar14 != 0) {
    while (cVar3 = (char)sVar38, uVar14 >> sVar38 == 0) {
      sVar38 = sVar38 + -1;
    }
  }
  bVar60 = (byte)uVar19;
  uVar15 = (ushort)(byte)(-bVar60 - 5) | 0xb600;
  bVar60 = bVar60 & 0xf;
  uVar48 = (ushort)uVar16 >> bVar60 | (ushort)uVar16 << 0x10 - bVar60;
  uVar7 = uVar16 & 0xffffffffffff0000 | (ulong)uVar48 & 0xffffffffffffff00 |
          (ulong)(byte)((char)uVar48 + cVar3);
  uVar39 = (int)uVar16 << 0x10 | (uint)(ushort)(uVar15 << 1 | 1);
  uVar45 = ((uint)(ushort)(1 << (uVar44 & 0xf) | 0x4000) | 0xa92b0000) + 1 & uVar39;
  uVar11 = (ulong)((uVar19 | 0xf9a00000) >> 9) & ~(1 << ((ulong)uVar44 & 0x3f));
  sVar49 = (short)uVar7;
  uVar31 = (ulong)(uVar29 << 0x18 | uVar57 & 0xffff0000 |
                  (uint)(ushort)((uVar24 & 0xff00 | (ushort)(byte)~(byte)uVar24) >> 1 | 0x8000)) -
           (ulong)uVar42;
  uVar55 = (ushort)(uVar11 >> 0x16 != 0) + 0x6871;
  uVar37 = (sVar49 << 0xf | 0x4c7fU) >> 1 | 0x8000;
  uVar19 = uVar42 + ((uint)uVar37 | 0x39cf0000);
  uVar16 = (ulong)uVar39 << 1;
  bVar4 = -(byte)uVar11;
  uVar57 = 0;
  bVar60 = (byte)uVar11 & 0xf;
  uVar39 = (uint)(ushort)(uVar37 << bVar60 | uVar37 >> 0x10 - bVar60);
  uVar30 = (uint)(ushort)((uVar44 >> 5 | uVar55 * 0x800) + 0xea9);
  uVar29 = uVar45 & 0xffff0000;
  uVar14 = (short)((ushort)uVar11 ^ ((ushort)uVar11 >> 0xc & 1) << 0xc) >> 1;
  uVar44 = (ushort)uVar19;
  bVar60 = (byte)uVar31 & 1;
  uVar11 = (ulong)(byte)((byte)uVar31 >> 1 | bVar60 << 7);
  uVar54 = (ushort)uVar16;
  uVar24 = uVar54 + 0xda0;
  uVar16 = uVar16 & 0xffffffffffff0000;
  uVar26 = (ulong)(ushort)(uVar24 - bVar60);
  sVar38 = 0xf;
  if (uVar55 != 0) {
    while (uVar55 >> sVar38 == 0) {
      sVar38 = sVar38 + -1;
    }
  }
  uVar46 = 0x1f;
  uVar20 = (uint)CONCAT62(0x2d6001655c6f,sVar38);
  if (uVar20 != 0) {
    while (uVar20 >> uVar46 == 0) {
      uVar46 = uVar46 - 1;
    }
  }
  uVar48 = (short)(char)uVar45 | (uVar48 & 0xff) * 2 - 0x38d;
  lVar43 = (ulong)(uVar39 | 0x39cf0000) + (ulong)(uVar29 | uVar48) * 8;
  uVar39 = uVar39 << 0x1a;
  bVar9 = (byte)((ulong)uVar14 >> 8);
  bVar12 = (byte)uVar14;
  uVar48 = uVar48 & 0xff;
  uVar45 = (int)uVar30 >> (bVar12 & 0x1f);
  uVar25 = -(ulong)uVar46;
  uVar34 = (ulong)(ushort)((ushort)(uVar19 == 0 ||
                                   (SCARRY4(uVar42,(uint)uVar37 | 0x39cf0000) != SCARRY4(uVar19,0))
                                   != (int)uVar19 < 0) * 0x100) * (uVar31 & 0xffffff00 | uVar11);
  bVar23 = (byte)(uVar34 >> 0x20);
  lVar59 = (ulong)uVar39 - 0x39679c89;
  sVar38 = (short)lVar59 + -1;
  bVar12 = bVar12 & 7;
  uVar14 = (ushort)(uVar34 >> 0x20) & 0xff00 |
           (ushort)(byte)(bVar23 << bVar12 | bVar23 >> 8 - bVar12);
  uVar32 = uVar34 & 0xffff0000 | (ulong)uVar50 << 0x20 | (ulong)(ushort)((short)uVar34 - uVar44);
  if ((short)uVar34 < (short)uVar44) {
    uVar32 = uVar16 | uVar26;
  }
  uVar55 = (ushort)lVar43;
  uVar37 = uVar55 & 0xf;
  lVar43 = ((ulong)uVar19 - lVar43) - (ulong)((uVar14 >> uVar37 & 1) != 0);
  sVar56 = (ushort)SCARRY1(bVar9,'\x05');
  sVar1 = sVar56 + sVar38;
  sVar56 = sVar1 + 1;
  uVar50 = ((uint)uVar7 & 0xffff0000 |
           (uint)(ushort)(sVar49 + (ushort)bVar4 + (ushort)((bVar4 >> (uVar44 & 0xf) & 1) != 0))) +
           (uVar30 | 0x86bc0000) + (uint)(uVar54 < 0xf260 || uVar24 < bVar60);
  if (sVar56 == 0 || (SCARRY2(sVar56,sVar38) != SCARRY2(sVar1,1)) != sVar56 < 0) {
    uVar50 = uVar45;
  }
  uVar55 = uVar55 & 0x9dea;
  lVar21 = (uVar31 & 0xffffffffffffff00 | uVar11) << 1;
  uVar31 = ((uVar32 >> 1 | (ulong)uVar45 << 0x3f) - lVar43) - 1;
  uVar11 = 0;
  if ((long)(short)uVar55 != 0) {
    while (((ulong)(long)(short)uVar55 >> uVar11 & 1) == 0) {
      uVar11 = uVar11 + 1;
    }
  }
  uVar19 = uVar29 | (uint)(ushort)(uVar48 | (ushort)(bVar9 < 0xfb) << 8) & 0xffffff00 |
           (uint)(byte)((char)uVar48 - (char)uVar50);
  uVar29 = (int)(char)uVar50 >> ((byte)uVar11 & 1);
  sVar38 = (short)uVar29;
  uVar24 = -sVar38;
  if (sVar38 != 0 || uVar24 == 0) {
    uVar50 = uVar19;
  }
  if (in_PF) {
    uVar19 = (uint)lVar43;
  }
  iVar22 = (int)((0xc524 - uVar42 | 0x8354477b) << 0x1c) >> 2;
  bVar12 = ((byte)(uVar11 >> 8) & 0x89) - (char)uVar19;
  bVar4 = (byte)uVar31 | bVar12;
  bVar23 = (byte)(lVar21 >> 1);
  lVar21 = CONCAT71((int7)(lVar21 >> 9),bVar23 + 0x87);
  bVar60 = (byte)lVar43 & 0x1f;
  uVar7 = (ulong)(0x79 < bVar23 || 0xfe < (byte)(bVar23 + 0x86)) << 0x20 |
          (ulong)(uVar14 & ~(1 << uVar37));
  uVar42 = (uint)(uVar7 >> bVar60) | (uint)(uVar7 << 0x21 - bVar60);
  uVar14 = (ushort)uVar42 ^ 1 << ((ushort)bVar4 & 0xf);
  uVar42 = uVar42 & 0xffff0000;
  uVar45 = (uint)lVar43 & 0xffffff00 | (uint)uVar11 & 0xa0;
  uVar32 = lVar21 << 0x2d | (ulong)(CONCAT18((uVar14 & 1) != 0,lVar21) >> 0x14);
  uVar19 = uVar19 - 1;
  uVar44 = (ushort)(CONCAT12(uVar39 < 0x39679c89 || lVar59 == 0,(short)uVar25) >> 1) ^ 1;
  bVar61 = (uVar25 & 2) != 0;
  bVar12 = bVar12 - 1;
  uVar31 = uVar31 & 0xffffffffffffff00 | (ulong)bVar12;
  bVar64 = bVar61 || bVar12 == 0;
  uVar33 = uVar32 ^ (ulong)(uVar31 == uVar32) * (uVar32 ^ uVar50 + (int)(short)uVar55);
  uVar7 = uVar31 ^ (ulong)(uVar31 == uVar32) * (uVar31 & uVar33);
  uVar50 = uVar50 + (int)(short)uVar55 & 0xffffff00 | (uint)(uVar32 < uVar31);
  uVar40 = (ulong)(uVar29 & 0xffff0000 | (uint)uVar24 & 0xffffff00 |
                  (uint)(byte)((char)uVar24 << 1 | (char)uVar24 < '\0'));
  uVar24 = CONCAT11(bVar4 >> 1 | ((int)uVar45 < 0) << 7,bVar64);
  uVar34 = uVar11 & 0xffffffffffff0000 | (ulong)uVar24;
  bVar60 = (byte)((ulong)uVar19 >> 8);
  uVar19 = uVar19 & 0xffff0000 |
           (uint)CONCAT11(bVar60 >> bVar64 | bVar60 << 8 - bVar64,(char)uVar19);
  uVar11 = (ulong)(iVar22 != 0);
  lVar59 = (ulong)uVar19 + 0x10f9bbf1;
  lVar21 = lVar59 + uVar11;
  uVar39 = (uint)uVar33;
  if (SCARRY8((ulong)uVar19,0x10f9bbf1) != SCARRY8(lVar59,uVar11)) {
    uVar39 = (uint)lVar21;
  }
  bVar60 = (byte)(uVar7 >> 8) | 0xd2;
  uVar29 = (uint)(lVar43 * 2) & 0xffff0000 | (uint)(ushort)((ushort)(lVar43 * 2) >> 1);
  bVar4 = (byte)((ulong)lVar21 >> 8);
  bVar62 = bVar60 < bVar4;
  cVar3 = bVar60 - bVar4;
  uVar37 = CONCAT11(cVar3,(char)uVar7);
  uVar16 = uVar16 | uVar26 & 0xffffffffffffff00 | (ulong)bVar62;
  uVar30 = (uint)uVar16;
  if (bVar62 || cVar3 == '\0') {
    uVar57 = uVar30 & 0xffff;
  }
  uVar57 = ((uint)(CONCAT14((short)uVar15 < 0,0x3ef) >> 0x1d) | 0x3ef0) << 0xd | uVar57;
  if (bVar62) {
    uVar57 = uVar30;
  }
  uVar11 = 0x3f;
  if (uVar34 != 0) {
    while (uVar34 >> uVar11 == 0) {
      uVar11 = uVar11 - 1;
    }
  }
  uVar46 = SEXT14(uVar32 < uVar31);
  bVar60 = (byte)((ulong)(uVar42 | uVar14) >> 8) & ((byte)(uVar29 << 1) | (int)uVar29 < 0) << 3;
  uVar48 = uVar14 & 0xff | (ushort)bVar60 << 8;
  uVar14 = (ushort)uVar16 & 0xf;
  uVar15 = uVar48 | 1 << uVar14;
  uVar29 = uVar39;
  if ((uVar48 >> uVar14 & 1) == 0 && bVar60 != 0) {
    uVar29 = uVar30;
  }
  bVar63 = (uVar44 & 1) != 0;
  uVar16 = (ulong)(uVar24 & ~(1 << ((ushort)uVar39 & 0xf)));
  if (!bVar63) {
    uVar16 = uVar40;
  }
  bVar65 = ((uint)uVar7 & 0xffff0000 | (uint)uVar37) == uVar50;
  uVar50 = uVar50 ^ (uint)bVar65 * (uVar50 ^ uVar46);
  uVar39 = (uint)(uVar11 >> 0x1b) & 0x1f ^ 0xa22de8ad;
  uVar46 = uVar46 & uVar39;
  uVar40 = uVar40 - 0x77ef848a;
  iVar52 = (int)(short)(uVar37 ^ (ushort)bVar65 * (uVar37 & (ushort)uVar50)) *
           (int)(short)(uVar15 & 0xff |
                       (ushort)(byte)((char)((ulong)(uVar42 | uVar15) >> 8) - 1) << 8);
  uVar31 = uVar40 & 0x71b67a1b;
  bVar60 = (byte)uVar16;
  bVar4 = (byte)(uVar57 >> 0xb);
  uVar26 = (ulong)(uVar57 >> 0xb & 0xffffff00 | uVar50 << 0x15 |
                  (uint)(byte)(bVar4 >> (bVar60 & 7) | bVar4 << 8 - (bVar60 & 7)));
  uVar11 = uVar26 * -0x68181f7a;
  lVar43 = SUB168(SEXT816((long)uVar26) * SEXT416(-0x68181f7a) >> 0x40,0);
  if (lVar43 == 0 || lVar43 == -1) {
    uVar11 = uVar11 & 0xffffffffffff0000 |
             (ulong)(ushort)((ushort)uVar39 & 0xff00 |
                            (ushort)(byte)((char)uVar39 << 1 | (byte)((uint)iVar52 >> 0x10) < bVar62
                                          ));
  }
  uVar47 = uVar46 << (bVar60 & 0x3f) | uVar46 >> 0x40 - (bVar60 & 0x3f);
  uVar26 = ((uVar25 & 0xffffffffffff0000 | (ulong)uVar44) >> 1 | (ulong)bVar63 << 0x3f) + 1;
  uVar24 = sVar56 + uVar55 + (ushort)bVar61 + 1 >> 1;
  uVar57 = ((uint)(uVar24 | 0x8000) & 0xffffff00 | (uint)(byte)((char)uVar24 * '\x02' + 1)) >>
           (bVar60 & 0x1f) | uVar47 << 0x20 - (bVar60 & 0x1f);
  sVar8 = (sbyte)(uVar16 & 0xffffffffffffff0f);
  uVar11 = uVar11 & 0xffff0000 |
           (ulong)(ushort)((short)uVar11 << sVar8 | (ushort)uVar31 >> 0x10 - sVar8);
  uVar20 = (uint)(uVar11 >> sVar8) | (uint)(uVar11 << 0x21 - sVar8);
  uVar44 = (ushort)(uVar16 & 0xffffffffffffff0f) | 0x36f2;
  uVar14 = (ushort)iVar52 & 0xff |
           ((ushort)(byte)((byte)((ulong)(ushort)iVar52 >> 8) >> 1) & 0x3f) << 8;
  uVar24 = (ushort)(byte)((char)((uint)iVar52 >> 0x18) << 1 | iVar52 < 0 | 0xc0);
  uVar36 = CONCAT71((uint7)(uint3)(((uVar45 * 2 + 0x49fb5c51 >> bVar64 | uVar19 << 0x20 - bVar64) >>
                                    1 | uVar46) - (int)uVar31 >> 8),0x33);
  bVar60 = (byte)(uVar26 >> 0x38);
  uVar16 = (uVar26 & 0xff000000000000) >> 0x28 | (uVar26 & 0xff0000000000) >> 0x18 |
           (uVar26 & 0xff00000000) >> 8 | (uVar26 & 0xff000000) << 8;
  uVar19 = (int)(short)(uVar14 / uVar24 & 0xff | uVar14 % uVar24 << 8) * (int)(short)uVar57;
  uVar39 = (int)uVar36 << 1;
  uVar42 = uVar42 | uVar19 >> 0x10;
  if ((uVar20 & 1) != 0) {
    uVar42 = uVar39;
  }
  lVar43 = (ulong)uVar50 - (ulong)uVar39;
  uVar39 = (-iVar22 | (uint)(ushort)((short)uVar46 * 0x4313)) + 0x651806d1;
  uVar11 = 1 << ((ulong)uVar44 & 0x3f);
  uVar31 = (uVar20 >> 1 | uVar50 << 0x1f) | uVar11;
  bVar4 = (byte)((ulong)uVar44 >> 8);
  if (((char)((byte)uVar19 | (byte)(uVar47 >> 0x18) | (byte)((uVar26 & 0xff00000000) >> 0x20)) >> 7
      & 0x88U) != 0) {
    uVar57 = uVar42;
  }
  uVar14 = (ushort)uVar36;
  sVar38 = (short)uVar39;
  uVar50 = uVar39 & 0xffff0000 | (uint)(ushort)(sVar38 << 1);
  uVar24 = 0;
  if (uVar14 != 0) {
    while ((uVar14 >> uVar24 & 1) == 0) {
      uVar24 = uVar24 + 1;
    }
  }
  uVar25 = (((ulong)uVar57 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar57 + (byte)uVar42)) -
           (ulong)(uVar30 << 1 | (uint)uVar26 >> 0x1f)) - (ulong)CARRY1((byte)uVar57,(byte)uVar42);
  uVar32 = lVar43 << (bVar4 & 0x3f) | (ulong)(CONCAT18(sVar38 < 0,lVar43) >> 0x41 - (bVar4 & 0x3f));
  uVar30 = (uVar29 & 0xffffff00 | (uint)!in_PF | 0x13c8) - 1;
  uVar45 = (uint)((ulong)(uint)(int)(char)bVar4 ^ 0xa560fc4) & 0xffff0000 |
           (uint)(ushort)((ushort)(byte)((ulong)(uint)(int)(char)bVar4 ^ 0xa560fc4) *
                         (ushort)(byte)uVar32);
  iVar22 = (uint)CONCAT11((char)uVar44,bVar4) + 0x10d1b94e;
  uVar7 = uVar25 & 0xffffffffffffff00;
  uVar57 = (uint)((uVar40 & 0x71060802) << 1) | 0x1236cd7b;
  bVar4 = (byte)(uVar50 >> 1);
  uVar27 = (uint7)(uVar16 >> 9);
  bVar23 = (char)((uVar16 | (byte)(bVar60 << 7 | bVar60 >> 1)) >> 1) + bVar4 + 1;
  uVar39 = uVar57 >> 1;
  uVar26 = (ulong)CONCAT31((uint3)(uVar50 >> 9),bVar4 + bVar23);
  bVar60 = ((byte)iVar22 & 0x1f) % 0x11;
  sVar38 = (short)iVar22;
  uVar44 = (ushort)(CONCAT12((ushort)uVar7 < 0xfbbb,sVar38) >> bVar60) | sVar38 << 0x11 - bVar60;
  bVar60 = ((byte)uVar44 & 0x1f) % 0x11;
  uVar19 = uVar30 & 0xffff;
  uVar50 = (int)CONCAT71(uVar27,bVar23) + 0x20;
  uVar34 = uVar31 & 0xffffffffffff0000;
  uVar14 = (short)uVar50 * 2;
  uVar44 = uVar14 + 0x1b9b +
           ((ushort)uVar7 + 0x400 | (ushort)(byte)-((uVar44 >> ((ushort)uVar32 & 0xf) & 1) != 0)) *
           2;
  uVar29 = (((uVar45 * (int)uVar7 * 2 & 0xffff0000 | 0x5a00) ^ 1 << ((uint)uVar24 & 0x1f)) &
           0xffff0000) >> 1 & 0xffff00ff | (int)uVar31 << 0x1f;
  uVar31 = uVar25 & 0xffffffffffff0000 | (ulong)(ushort)(short)(char)(byte)uVar14;
  bVar64 = CARRY8(uVar26,uVar31);
  uVar26 = uVar26 + uVar31;
  uVar46 = (uint)uVar31 >> 1 | (uint)bVar64 << 0x1f;
  uVar48 = (ushort)uVar26;
  uVar37 = uVar48 + 0x634f;
  uVar26 = uVar26 & 0xffffffffffff0000;
  uVar42 = (uint)uVar26;
  sVar38 = (short)(uVar57 >> 0xc);
  uVar57 = (uVar39 | 1) << 0x15 | (uVar39 & 0xf8000000) >> 0xb |
           (uint)(ushort)(sVar38 << 3 | (ushort)(CONCAT12(0x9cb0 < uVar48,sVar38) >> 0xe));
  iVar22 = (uVar30 & 0xffff0000 |
           (uint)(ushort)((ushort)(uVar19 >> bVar60) | (ushort)(uVar19 << 0x11 - bVar60))) <<
           ((byte)uVar14 & 0x1f);
  uVar31 = (ulong)uVar46 * -0x15720eb2;
  uVar15 = (short)CONCAT71(uVar27,bVar23 >> 3 | bVar23 * ' ') + 0x4f2;
  uVar16 = (ulong)(((uint)uVar34 | (uint)uVar44) + (int)CONCAT62((uint6)(uVar16 >> 0x11),uVar15) * 8
                  ) | 0xc0;
  uVar19 = uVar29 ^ (uint)(uVar29 == uVar57) *
                    (uVar29 & (uVar57 ^ (uint)(uVar29 == uVar57) * (uVar57 ^ (uVar42 | uVar37)))) |
           (uint)(ushort)(0U % (ushort)(byte)uVar16 << 8);
  uVar31 = (uVar31 & 0xffffffffffffff00 |
           (ulong)(byte)((byte)uVar31 >>
                        ((byte)((long)(((ulong)uVar50 & 0xffffffffffff0000 | (ulong)uVar14) &
                                      ~(1 << ((ulong)uVar46 & 0x3f))) >> 0xe) & 0x1f))) << 0x21;
  uVar29 = (int)uVar16 + 1;
  uVar16 = (long)(int)uVar19 * (long)iVar22;
  uVar24 = (ushort)uVar16;
  bVar12 = (byte)uVar37;
  lVar59 = CONCAT71(0x5561a5ad9addba,bVar12 + 0x7d);
  uVar57 = uVar46 >> 1 | (uint)(uVar24 < uVar15) << 0x1f;
  uVar24 = (uVar24 ^ (ushort)(uVar24 == uVar15) *
                     (uVar24 & (uVar15 ^ (ushort)(uVar24 == uVar15) *
                                         (uVar15 ^ (ushort)(iVar22 * -0x59f077a3))))) + 0xc351;
  bVar60 = (byte)((ulong)uVar24 >> 8);
  bVar61 = (uVar24 & 0x400) == 0;
  lVar43 = 0x3f;
  uVar50 = 0x3f;
  if (uVar29 != 0) {
    while (uVar50 = (uint)lVar43, uVar29 >> lVar43 == 0) {
      lVar43 = lVar43 + -1;
    }
  }
  uVar14 = -(short)uVar50;
  lVar43 = (ulong)((short)uVar50 != 0) + 0x6d0a8dd6;
  uVar15 = (ushort)lVar43 ^ uVar14;
  bVar9 = (byte)uVar24;
  bVar10 = (byte)uVar29;
  bVar5 = (byte)iVar22;
  bVar28 = bVar5 + 0xb1;
  uVar24 = 0xf;
  if (uVar15 != 0) {
    while (uVar15 >> uVar24 == 0) {
      uVar24 = uVar24 - 1;
    }
  }
  lVar21 = (uVar16 & 0xffff0000 | (ulong)uVar24) *
           (ulong)((uVar42 | (ushort)(uVar37 & 0xff |
                                     (ushort)(byte)((char)((ulong)uVar37 >> 8) + bVar12 +
                                                   (0x4f < bVar5 || 0xfe < (byte)(bVar5 + 0xb0))) <<
                                     8)) & 0x25db68e4);
  uVar50 = ((uVar50 & 0xffff0000 | (uint)uVar14) - (int)lVar59) - 1;
  uVar14 = (ushort)(uVar50 >> 2) & 0x3fff;
  uVar37 = (short)uVar14 >> 1;
  uVar47 = ((((uint)lVar43 & 0xffff0000 | (uint)uVar15) & 0xe143825a) + 0xf4546485) -
           (uint)(bVar64 != false);
  uVar24 = (ushort)(bVar64 != false) * -0x8000 + uVar37;
  uVar32 = uVar31 | (ulong)uVar24;
  bVar5 = (byte)lVar21;
  bVar18 = (char)(uVar11 >> 0x2d) - bVar5;
  uVar42 = (uint)((uVar11 & 0xffe0000000000000) >> 0x2d);
  uVar30 = (uint)((uVar34 | CONCAT11(bVar9 ^ (bVar9 == bVar60) *
                                             (bVar9 & (bVar60 ^ (bVar9 == bVar60) *
                                                                (bVar60 ^ bVar10))),
                                     (char)uVar44 << 7 |
                                     (byte)((uVar44 & 0xff | (ushort)(0x82 < bVar12) << 8) >> 2)))
                 << 0x13);
  uVar16 = (uVar26 | (ushort)(uVar48 + 0x634e)) << (bVar10 & 0x3f);
  uVar50 = uVar50 & 0xffff0000 | (uint)uVar37 & 0xffffff00 | ((uint)uVar37 & 0xfe) >> 1;
  uVar46 = (uint)lVar21;
  uVar20 = uVar46 & 0xffffff00 |
           (uint)(bVar5 & (byte)(((uVar11 & 0xffe0000000000000) >> 0x2d) >> 8));
  uVar26 = (ulong)uVar50 | 1 << ((ulong)uVar29 & 0x3f);
  lVar43 = ((uVar16 & 0xffffffffffff0000 |
            (ulong)(ushort)((ushort)uVar16 >> 6 | (short)uVar47 << 10)) - 0x9f32ce85) -
           (ulong)((uVar50 >> ((ulong)uVar29 & 0x3f) & 1) != 0);
  if ((uVar47 * 0x10 | uVar47 >> 0x1c) ==
      (iVar22 * -0x59f077a3 & 0xffff0000U | (uint)(ushort)(uVar14 * -0x5b31))) {
    uVar20 = uVar46 & 0xffff0000 | (uint)uVar26 & 0xffff;
  }
  lVar59 = lVar59 + 0x285cba59;
  uVar57 = CONCAT22((ushort)(uVar57 >> 0x11),(short)(uVar57 >> 1) >> (bVar10 & 0x1f));
  lVar21 = 0;
  uVar50 = 0;
  if (uVar32 != 0) {
    while (uVar50 = (uint)lVar21, (uVar32 >> lVar21 & 1) == 0) {
      lVar21 = lVar21 + 1;
    }
  }
  uVar16 = uVar31 | (ulong)uVar24 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar24 >> 0xc);
  if (!bVar61) {
    uVar50 = uVar57;
  }
  uVar46 = 0x1f;
  if (uVar29 != 0) {
    while (uVar29 >> uVar46 == 0) {
      uVar46 = uVar46 - 1;
    }
  }
  uVar6 = uVar42 & 0xffff0000 | uVar30 |
          (uint)(ushort)((ushort)bVar18 * (ushort)(byte)((ulong)lVar43 >> 0x38));
  uVar51 = uVar50 ^ (uint)(uVar6 == uVar50) * (uVar50 ^ uVar57);
  bVar60 = (byte)uVar46 & 0x1f;
  uVar58 = (uint)lVar59;
  uVar47 = uVar46 >> 1 & 0x7fff;
  uVar29 = uVar46 & 0xffff0000 | uVar47;
  lVar21 = (ulong)((uVar6 ^ (uint)(uVar6 == uVar50) * (uVar6 & uVar51) ^ (uint)uVar16) *
                  (int)(char)bVar28) * (ulong)uVar29;
  uVar31 = (ulong)((uVar42 | uVar30 | (uint)bVar18) +
                  (uVar20 & 0xffff0000 |
                  (uint)(ushort)(((short)uVar20 * (short)lVar59 & 0xffU) * (ushort)bVar28))) + 1;
  iVar22 = uVar51 << ((byte)uVar47 & 0x1f);
  uVar34 = (ulong)(lVar43 * 0x100) >> 0x19 & 0x7f;
  lVar43 = 0;
  if (uVar31 != 0) {
    while ((uVar31 >> lVar43 & 1) == 0) {
      lVar43 = lVar43 + 1;
    }
  }
  uVar24 = 0xf;
  while (0xb7ebU >> uVar24 == 0) {
    uVar24 = uVar24 - 1;
  }
  uVar42 = (CONCAT22((short)uVar26,(short)lVar21) & 0x3fffffff) / 0xf7eb;
  uVar25 = (ulong)uVar29 & 0xffffffffffffff0f;
  uVar32 = (long)(int)((uint)lVar21 & 0xffff0000 | uVar42) * (long)(int)uVar34;
  uVar14 = (ushort)((uVar57 & 0xffffff00) >> 0x10);
  iVar52 = iVar22 + 1;
  bVar64 = iVar52 == 0 || SCARRY4(iVar22,1) != iVar52 < 0;
  uVar30 = (int)uVar32 * (int)(uVar32 >> 0x20);
  uVar50 = (uVar58 >> bVar60 | uVar58 << 0x20 - bVar60) + iVar52;
  lVar43 = ((ulong)CONCAT22(uVar14 >> 10,
                            (short)(CONCAT22(uVar14 >> 1,
                                             (ushort)((uVar57 & 0xffffff00) >> 1) ^
                                             (ushort)(uVar11 >> 0x2d)) >> 9) - (short)uVar25) -
           0x7a7af73b) + (ulong)(iVar52 < 0);
  bVar12 = bVar64 * '\x02';
  uVar14 = CONCAT11((char)((ulong)(uVar30 & 0xffff0000 |
                                  (uint)CONCAT11((char)((ulong)uVar30 >> 8) * '\x02' + '\x01',
                                                 (char)uVar30)) >> 8),(char)uVar30) | 0x20;
  uVar29 = (uint)(uVar26 >> 0x19) >> 1;
  bVar62 = (uVar26 >> 0x19 & 1) != 0;
  bVar60 = bVar12 % 9;
  uVar37 = (short)uVar29 << 1 | (ushort)((uVar16 + (uVar32 >> 0x20) >> 3 & 1) != 0);
  uVar29 = uVar29 & 0xffff0000 | (uint)uVar14 << 0x1f;
  uVar26 = (ulong)(uVar29 | (uint)uVar37);
  uVar57 = (uint)(byte)(((byte)(uVar34 << 1) | 1) ^ (byte)uVar14);
  auVar2 = ZEXT116(0) << 0x40 |
           ZEXT416(((uint)CONCAT62((undefined6)((char)bVar28 >> 7),
                                   (ushort)((short)(char)bVar28 << 1) >> (sbyte)uVar25 |
                                   (short)uVar42 << 0x10 - (sbyte)uVar25) & 0x7fffff80) << 1 |
                   (uint)(byte)-bVar62);
  uVar34 = SUB168(auVar2 >> bVar12,0) | SUB168(auVar2 << bVar64 * -2 + 0x41,0);
  uVar44 = 0xe128U >> bVar12 | uVar37 << bVar64 * -2 + 0x10;
  uVar16 = (uVar30 & 0xffff0000 | (uint)uVar14) * uVar26;
  uVar42 = (uint)(uVar16 >> 0x20);
  uVar11 = 0;
  if (uVar42 != 0) {
    uVar11 = uVar26;
  }
  uVar14 = (short)((ushort)(uVar50 >> 1) & 0x7fff) >> 1;
  uVar30 = (uint)uVar25 & 0xffff0000 | (uint)uVar44 | 0xc0000000;
  uVar42 = (uint)(((ulong)(uVar42 & 0x3fffffff) << 0x20 | uVar16 & 0xffffffff) / (ulong)uVar30);
  uVar42 = uVar42 ^ (uint)(uVar42 == uVar57) *
                    (uVar42 & (uVar57 ^ (uint)(uVar42 == uVar57) * (uVar57 ^ uVar30)));
  if (bVar61) {
    bVar12 = (byte)lVar43;
  }
  lVar59 = ((ulong)(byte)(-0x15 << bVar60 | (byte)(CONCAT11(bVar62,0xeb) >> 9 - bVar60)) |
           0x72076277d48ff00) - 1;
  uVar26 = uVar11 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar11 << 1 | (char)uVar11 < '\0');
  uVar16 = uVar34 & 0xffffffffffff0000;
  bVar60 = (byte)uVar14 + (byte)lVar59;
  uVar54 = uVar14 & 0xff00 | (ushort)bVar60;
  uVar48 = (short)uVar34 + 0x29f2 + (ushort)CARRY1((byte)uVar14,(byte)lVar59);
  bVar9 = bVar12 + 0x5f & 7;
  uVar57 = (uVar29 | (uint)uVar37 & 0xffffff00 |
           (uint)(byte)((byte)uVar37 << bVar9 | (byte)uVar37 >> 8 - bVar9)) + 1;
  uVar29 = ((uint)lVar43 >> 0x1d) + 0x10f4e08;
  bVar9 = bVar12 + 0x5f & 0xf;
  uVar27 = (uint7)((ulong)lVar59 >> 8) & 0xffffffffffff00;
  uVar29 = uVar29 & 0xffff0000 | (uint)((ushort)uVar29 & 0x7fff);
  uVar57 = uVar57 >> 1 & 0xffff | (uVar57 >> 0x11) << 0x10 | 0xc000;
  uVar15 = (ushort)uVar26;
  uVar37 = uVar54 + uVar15;
  bVar12 = (byte)(1 << bVar61) & 0x1f;
  uVar30 = (uint)(CONCAT14(CARRY2(uVar54,uVar15),uVar29) >> bVar12) | uVar29 << 0x21 - bVar12;
  bVar5 = (byte)uVar48 & 0xc5;
  lVar59 = CONCAT71(uVar27 | (byte)((byte)((ushort)((short)lVar59 << bVar9) >> 8) |
                                   (byte)((uVar44 >> 0x10 - bVar9) >> 8)),(uVar48 & 0x78c5) != 0);
  uVar11 = (uVar16 | uVar48) - 0x36db4c27;
  lVar43 = (ulong)(ushort)(uVar48 * 0x2581) + lVar59;
  uVar44 = (ushort)uVar11 | (ushort)uVar30;
  bVar12 = bVar5 * '\x02';
  bVar10 = (byte)lVar43;
  bVar9 = (bVar10 & 0x1f) % 9;
  uVar29 = 0;
  if (uVar30 != 0) {
    while ((uVar30 >> uVar29 & 1) == 0) {
      uVar29 = uVar29 + 1;
    }
  }
  uVar34 = (ulong)uVar29;
  uVar31 = (ulong)((uint3)((((uint)uVar31 & 0xffff0000 | (uint)uVar24) ^ 0xac) + 0x381833fc >> 8) &
                  0xffff00) << 8;
  uVar24 = (short)(uVar48 & 0xff) >> 1;
  uVar42 = ((uint)uVar11 & 0xffff0000 | (uint)uVar44) +
           (uVar42 & 0xffff0000 |
           (uint)(ushort)(((ushort)uVar42 & 0xff00 |
                          (ushort)(byte)((byte)(CONCAT11((char)bVar5 < '\0',(char)uVar42) >> bVar9)
                                        | (char)uVar42 << 9 - bVar9)) << (bVar10 & 0x1f)));
  uVar15 = (short)lVar59 - (short)uVar42;
  uVar46 = ((uint)uVar26 & 0xffff0000 | (uint)uVar14 & 0xff00 | (uint)bVar60) + 1;
  uVar29 = 0;
  if (uVar57 != 0) {
    while ((uVar57 >> uVar29 & 1) == 0) {
      uVar29 = uVar29 + 1;
    }
  }
  uVar57 = uVar46 & 0xffff0000 | (uint)(ushort)~(ushort)uVar46;
  uVar26 = (ulong)uVar57;
  uVar46 = (uint)lVar43 >> (bVar10 & 0x1f) | ((uint)uVar31 | (uint)uVar24) << 0x20 - (bVar10 & 0x1f)
  ;
  lVar43 = (ulong)uVar29 - 0x3634cf86;
  uVar29 = (uint)uVar16 | (uint)uVar48 & 0xffff7800 | (uint)(byte)(bVar12 + 0x51);
  uVar11 = (ulong)(0xae < bVar12) << 0x20 | uVar11 & 0xffff0000 | (ulong)uVar44;
  uVar14 = uVar24 >> 3 & 1;
  uVar31 = uVar31 | (ushort)(uVar24 ^ uVar14 << 3);
  uVar11 = ((ulong)((uint)(uVar11 >> 0x13) | (uint)(uVar11 << 0xe)) - 0x23006b8c) +
           (ulong)(uVar14 != 0);
  bVar60 = (byte)uVar46;
  uVar24 = (ushort)uVar11;
  uVar24 = uVar24 >> (bVar60 & 0xf) | uVar24 << 0x10 - (bVar60 & 0xf);
  uVar11 = uVar11 & 0xffffffffffff0000;
  uVar20 = (uint)uVar11 | (uint)uVar24;
  uVar25 = uVar26 ^ (ulong)(uVar34 == uVar26) * (ulong)(uVar57 ^ uVar46);
  uVar34 = uVar34 ^ (ulong)(uVar34 == uVar26) * (uVar34 & uVar25);
  uVar47 = uVar29 >> (bVar60 & 0x1f) | uVar29 << 0x20 - (bVar60 & 0x1f);
  bVar60 = ((byte)(uVar46 >> (bVar60 & 0x1f)) | (byte)((int)uVar31 << 0x20 - (bVar60 & 0x1f))) & 0xf
  ;
  uVar26 = (ulong)(ushort)((ushort)uVar25 << bVar60 | (ushort)uVar25 >> 0x10 - bVar60);
  uVar33 = uVar25 & 0xffffffffffff0000 | uVar26;
  uVar32 = uVar31 ^ (ulong)(uVar34 == uVar31) *
                    (uVar31 ^ CONCAT62((int6)(short)(uVar16 >> 0x10),uVar48 + 0x9cc3));
  uVar34 = uVar34 ^ (ulong)(uVar34 == uVar31) * (uVar34 & uVar32);
  uVar16 = uVar34 & 0xffffffffffff0000;
  uVar57 = (int)uVar32 + 0x8fd38db4;
  uVar14 = uVar37 + (short)uVar34 + 0x23f5;
  uVar29 = 0x1f;
  if (uVar20 != 0) {
    while (uVar20 >> uVar29 == 0) {
      uVar29 = uVar29 - 1;
    }
  }
  uVar20 = (uVar50 & 0xffff0000 | (uint)uVar14) >> 1;
  bVar60 = ((byte)uVar29 & 0x1f) % 0x11;
  uVar46 = (uint)((uVar14 & 1) != 0) << 0x10 | uVar42 & 0xffff;
  uVar48 = (ushort)(uVar46 << bVar60) | (ushort)(uVar46 >> 0x11 - bVar60);
  uVar35 = (ulong)(uVar42 & 0xffff0000 | (uint)uVar48);
  uVar44 = uVar24 ^ (ushort)(uVar37 == uVar24) * (uVar24 ^ uVar15);
  uVar31 = uVar16 | (ushort)(uVar37 ^ (ushort)(uVar37 == uVar24) * (uVar37 & uVar44));
  uVar32 = uVar31 * uVar33;
  uVar31 = (long)(int)uVar32 * (long)SUB164(SEXT816((long)uVar31) * SEXT816((long)uVar33) >> 0x40,0)
  ;
  uVar34 = uVar31 & 0xffffffff;
  uVar40 = uVar32 & 0xffffffff00000000 | uVar34;
  uVar32 = (uVar31 >> 0x20) + (ulong)(uVar20 | 0x80000000) >> ((byte)uVar29 & 0x3f);
  uVar42 = ((uint)uVar16 | (uint)uVar37) + 0x9a + uVar29 * 4 +
           ((uint)lVar43 & 0xffff0000 | (uint)(ushort)((short)lVar43 + 0x82a0)) +
           (uint)((uVar29 >> 0x19 & 1) != 0);
  uVar16 = (ulong)uVar29;
  if (SBORROW8((ulong)uVar42,uVar40) != false) {
    uVar16 = uVar33;
  }
  uVar54 = (ushort)uVar20 & 0xff00 | (ushort)(((uint)uVar14 & 0x1fc) >> 2);
  bVar12 = (byte)uVar34;
  uVar24 = (short)uVar57 + 0xa01d;
  uVar29 = uVar57 & 0xffff0000 | (uint)uVar24 & 0xffffff00 |
           (uint)(byte)((char)uVar24 + ((char)lVar43 + 1U | 0x93));
  bVar9 = (byte)uVar16 << ((byte)uVar16 & 0x1f);
  uVar37 = ((ushort)((uVar47 & 0xffff0000 |
                     (uint)(ushort)(((short)uVar47 + -0x3872) - (ushort)((ulong)uVar42 < uVar40)))
                    >> (bVar9 & 0x3f)) | (ushort)((uVar11 | (ulong)uVar44) << 0x40 - (bVar9 & 0x3f))
           ) - uVar54;
  bVar41 = (byte)uVar37;
  bVar10 = bVar9 ^ (bVar12 == bVar9) * (bVar9 ^ bVar41);
  uVar11 = uVar16 & 0xffffffffffffff00 | (ulong)bVar10 | 1 << ((ulong)uVar44 & 0x3f);
  bVar13 = (char)uVar32 + -0x6e + ((char)((byte)uVar48 ^ bVar12) < '\0');
  uVar32 = uVar32 & 0xffffffffffffff00;
  bVar18 = (byte)(uVar11 >> 8);
  bVar5 = (byte)uVar11;
  bVar17 = (byte)(uVar32 >> 8);
  uVar33 = (ulong)uVar29 << (bVar5 & 0x3f) | (ulong)(uVar29 >> 0x40 - (bVar5 & 0x3f));
  uVar40 = uVar35 & 0xfffffffffff7ffff;
  uVar11 = (uVar25 & 0x7f0000 | uVar26) << 9;
  uVar29 = (uint)(uVar11 << (bVar5 & 0x1f)) | (uint)(uVar11 >> 0x21 - (bVar5 & 0x1f));
  bVar60 = (bVar5 & 0x1f) % 0x11;
  sVar38 = (short)uVar29;
  cVar3 = (char)uVar40;
  uVar48 = (uVar54 | 1) << (bVar5 & 0x1f);
  bVar28 = bVar5 + (char)uVar44;
  uVar44 = (short)((ushort)uVar32 | (ushort)bVar13) >> (bVar28 & 0x1f);
  uVar11 = (ulong)((uint)(byte)(bVar12 ^ (bVar12 == bVar9) * (bVar12 & bVar10) ^ bVar13) +
                  0xe0223518) * -0x37e26697;
  lVar43 = (ulong)CONCAT11(0xff,bVar28) << 1;
  lVar59 = -(ulong)((uVar30 + 0xbf799390) - (uVar42 - (int)uVar34) & 0xffff0000 |
                   (uint)(ushort)((short)uVar40 * 0x54f4));
  uVar24 = (short)cVar3 + 0xed6e;
  if (-1 < (short)(uVar44 & 0xff |
                  (ushort)(byte)((char)((ulong)uVar44 >> 8) -
                                (char)((ulong)(ushort)((((ushort)(byte)((char)((ulong)CONCAT11(((
                                                  char)(uVar34 >> 8) - (char)(uVar16 >> 8)) + -1,
                                                  bVar12) >> 8) + bVar17) & 0x3f) << 8) %
                                                  (ushort)(byte)((byte)(uVar33 >> 8) | 0xc0) << 8)
                                      >> 8)) << 8)) {
    uVar24 = uVar37 & 0xff00 | (ushort)(byte)(bVar41 + 0x17);
  }
  iVar22 = (uint)CONCAT11((byte)((ulong)lVar43 >> 8) ^ (byte)uVar33 & bVar17,(char)lVar43) +
           0x2a00ebb4;
  uVar44 = (ushort)iVar22;
  uVar30 = uVar29 & 0xffff0000 |
           (uint)(ushort)((sVar38 << bVar60 |
                          (ushort)(CONCAT12((uVar14 & 4) != 0,sVar38) >> 0x11 - bVar60)) << 1 |
                         uVar44 >> 0xf);
  uVar37 = (ushort)uVar11 & 0xffdf;
  uVar11 = uVar11 & 0xffffffffffff0000;
  uVar16 = CONCAT71((uint7)(uint6)(int6)(short)(uVar31 >> 0x10) << 8,0x53);
  lVar43 = (uVar16 & 0xffffffff) * (uVar16 & 0xffffffff);
  uVar29 = (uint)(ushort)(short)cVar3 & 0xff;
  uVar14 = CONCAT11(bVar18 >> 1 | bVar18 << 7,bVar5) * -0x5afe - 1;
  uVar42 = (uint)uVar11 | (uint)uVar37 & 0xffffff00 | (uint)(byte)(((byte)uVar37 | 0x40) >> 1);
  cVar53 = (char)(lVar59 >> 1);
  uVar57 = (uint)((ulong)lVar43 >> 0x20);
  if (!SBORROW1(cVar53,(char)uVar24)) {
    uVar57 = uVar42;
  }
  uVar46 = (uint)lVar43 ^ uVar29;
  sVar38 = (short)((int)CONCAT62((int6)(uVar27 >> 8),uVar15) >> 2);
  sVar49 = (short)CONCAT71((int7)(lVar59 >> 9),cVar53 - (char)uVar24);
  if (sVar38 != sVar49 && (SBORROW2(sVar38,sVar49) != false) == (short)(sVar38 - sVar49) < 0) {
    uVar29 = uVar57;
  }
  uVar46 = uVar46 ^ (uint)(uVar46 == uVar30) *
                    (uVar46 & (uVar30 ^ (uint)(uVar46 == uVar30) * (uVar30 ^ uVar42)));
  uVar44 = (ushort)uVar46 | 1 << (uVar44 & 0xf);
  uVar37 = sVar49 << 1 | (ushort)(sVar49 < 0);
  bVar60 = (byte)iVar22 & 0xf;
  if (sVar49 < 0 != (short)uVar37 < 0) {
    bVar60 = (byte)uVar44;
  }
  uVar42 = uVar29 & 0xffff0000 | (uint)((ushort)uVar29 & uVar48) | 0xc0000000;
  uVar29 = (uint)(((CONCAT44(uVar57,uVar46 & 0xffff0000 | (uint)uVar44) | 0xbbaeafb300000000) &
                  0x3fffffffffffffff) / (ulong)uVar42);
  uVar31 = (uVar35 & 0xfffffffffff70000 | (ulong)(ushort)(short)cVar3) >> 0xf;
  uVar57 = uVar29 >> (bVar60 & 0x1f) | uVar29 << 0x20 - (bVar60 & 0x1f);
  uVar16 = (ulong)uVar42 << (bVar60 & 0x3f);
  uVar26 = (ulong)(uVar42 >> 0x40 - (bVar60 & 0x3f));
  uVar34 = uVar16 | uVar26;
  bVar60 = (byte)uVar31 & 0xdf;
  uVar29 = uVar57 & 0xffff0000;
  if (SCARRY2((short)uVar57,uVar24 | uVar14)) {
    uVar11 = uVar16 & 0xffffffff | uVar26;
  }
  lVar43 = 0;
  if (uVar34 != 0) {
    while ((uVar34 >> lVar43 & 1) == 0) {
      lVar43 = lVar43 + 1;
    }
  }
  iVar22 = (int)CONCAT62((int6)(lVar59 >> 0x11),uVar37);
  uVar57 = uVar29 - 0x100;
  uVar16 = 0;
  while ((0x382aU >> uVar16 & 1) == 0) {
    uVar16 = uVar16 + 1;
  }
  uVar42 = (uVar57 & 0xff0000) >> 8;
  uVar30 = (uVar57 & 0xff00) << 8;
  uVar24 = ((ushort)uVar31 & 0xff00 | (ushort)(byte)(bVar60 ^ ((uVar31 & 0xdf) == 0) * bVar60)) >> 1
  ;
  uVar20 = (uint)(uVar14 - (short)(uVar29 >> 9) & uVar24);
  uVar29 = (uVar57 >> 0x18 | uVar42 | uVar30) + 0x39dd33b6 +
           (uint)(byte)((ulong)(sVar49 << 1 & 0xff00) >> 8) * 0x800;
  uVar46 = (uint)uVar24 & 0xffffff00 | uVar57 >> 0x18;
  uVar26 = (uVar11 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar11 >> 6)) & 0xffffffffd6a00ef3;
  uVar11 = (ulong)uVar29 & 0xffffffffffffffa3;
  bVar60 = (byte)uVar11 & 0x1f;
  uVar47 = (uint)uVar11 ^ (uint)(1 << ((ulong)uVar29 & 0x23));
  uVar57 = uVar47 >> 1;
  if (uVar20 != 0xffffffff) {
    uVar57 = (uVar47 >> 0x11) << 0x10;
  }
  uVar11 = 0x9d800000;
  if ((byte)uVar26 < 0xe7 || uVar20 == 0xffffffff) {
    uVar11 = uVar26;
  }
  uVar42 = (uVar42 | (uint)uVar24 & 0xff) * (uint)(ushort)uVar16;
  uVar6 = (uint)uVar26 & 0xffff0000 | uVar42 >> 0x10;
  uVar42 = uVar42 & 0xffff;
  uVar30 = uVar30 | uVar42;
  uVar47 = uVar57 & ~(1 << ((uint)lVar43 & 0x1f));
  uVar24 = (short)uVar47 + 1;
  uVar31 = (ulong)uVar47 & 0xffffffffffff0000;
  uVar47 = ((uint)uVar31 | (uint)uVar24) + uVar30;
  uVar32 = (ulong)uVar24 & 0xffffffffffffff0f;
  bVar12 = (byte)uVar32;
  uVar25 = uVar11 & 0xffffffffffff0000 |
           (ulong)(ushort)((short)uVar11 << bVar12 | (ushort)uVar32 >> 0x10 - bVar12);
  uVar11 = (ulong)uVar24 & 0xffffffffffffff00;
  uVar24 = (ushort)uVar42 & 0x3583;
  uVar32 = (ulong)uVar30 & 0xffffffffffff0000 | (ulong)(ushort)(uVar24 / 0xc9 | uVar24 % 0xc9 << 8);
  bVar9 = (byte)(uVar11 >> 8);
  return uVar32 + ((ulong)(ushort)(short)(char)bVar9 & 0xffffffffffffff00 | 0x36a3feae43650000 |
                  (ulong)(byte)(bVar9 >> 4 | bVar9 << 4)) +
         (uVar31 | uVar11 | (ulong)(byte)(bVar12 >> 1 | (uVar6 < uVar47) << 7)) +
         (ulong)(uVar6 - uVar47 ^ 1 << ((uint)uVar25 & 0x1f)) +
         (ulong)(uint)((int)(uVar20 + 0x3900) >> ((byte)uVar57 & 0x1f)) +
         (ulong)(uVar47 * 0x40000000 | (uint)uVar32 >> 2) +
         (ulong)((uint)(CONCAT14((uVar19 + (((int)CONCAT71(SUB167(SEXT816((long)(int)uVar45) *
                                                                  SEXT816((long)uVar7) >> 0x48,0),
                                                           -CARRY1(bVar4,bVar23) - (char)uVar39) +
                                             0x1e418814U >> 0x11) * 0x10000 + -1) * 2 + 0x81 >>
                                  ((uint)uVar26 & 0x1f) & 1) != 0,uVar46) >> bVar60) |
                uVar46 << 0x21 - bVar60) + (ulong)(uVar29 * 0x5ad2a00e | 1) + uVar25 +
         (uVar34 >> 10 | uVar34 << 0x36) + 0xaf41814f5df1c99d + lVar43 +
         (uVar16 & 0xffffffffffff0000 | (ulong)(ushort)((ushort)uVar16 << 0xd)) +
         (ulong)((uint)(iVar22 << 1) >> 0x14 | iVar22 << 0xd) +
         ((ulong)(((uVar50 & 0xfffe0000) >> 1 | 0x80000000 |
                  (uint)(ushort)((uVar48 | 0xc000) >> 0xf)) - 1 & 0xffffff00 | 1) << 0x1f | 1);
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


